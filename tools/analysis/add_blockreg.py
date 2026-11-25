p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
# registry helpers before kernel32
anchor="static int g_last_error;"
helpers='''static u32 g_blocks[65536];
static int g_nblocks;
static void block_add(u32 p) { if (p && g_nblocks < 65536) g_blocks[g_nblocks++] = p; }
static int block_take(u32 p)
{
    for (int i = 0; i < g_nblocks; ++i) if (g_blocks[i] == p) { g_blocks[i] = g_blocks[--g_nblocks]; return 1; }
    return 0;
}
'''
assert anchor in s
s=s.replace(anchor, helpers+anchor,1)
# HeapAlloc add
s=s.replace('u32 p = (u32)(uintptr_t)malloc(a[2] ? a[2] : 1); if (p && (a[1] & 8)) memset((void *)(uintptr_t)p, 0, a[2]); { static int al; if (al++ < 120) fprintf(stderr, "wasm HeapAlloc %08x %u\\n", p, a[2]); } return p;',
            'u32 p = (u32)(uintptr_t)malloc(a[2] ? a[2] : 1); if (p && (a[1] & 8)) memset((void *)(uintptr_t)p, 0, a[2]); block_add(p); return p;')
# HeapFree guarded
s=s.replace('if (!strcmp(n, "HeapFree")) { if (a[2]) { static int fl; if (fl++ < 40) fprintf(stderr, "wasm HeapFree %08x\\n", a[2]); free((void *)(uintptr_t)a[2]); } return 1; }',
            'if (!strcmp(n, "HeapFree")) { if (a[2]) { if (!block_take(a[2])) { { static int fl; if (fl++ < 20) fprintf(stderr, "wasm HeapFree ignored %08x\\n", a[2]); } return 1; } free((void *)(uintptr_t)a[2]); } return 1; }')
# VirtualAlloc add / free guarded
s=s.replace('if (!strcmp(n, "VirtualAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (p) memset((void *)(uintptr_t)p, 0, a[1]); fprintf(stderr, "wasm VirtualAlloc %08x %u\\n", p, a[1]); return p; }',
            'if (!strcmp(n, "VirtualAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (p) memset((void *)(uintptr_t)p, 0, a[1]); block_add(p); return p; }')
s=s.replace('if (!strcmp(n, "VirtualFree")) { if (a[2] & 0x8000u) free((void *)(uintptr_t)a[0]); return 1; }',
            'if (!strcmp(n, "VirtualFree")) { if ((a[2] & 0x8000u) && block_take(a[0])) free((void *)(uintptr_t)a[0]); return 1; }')
# GlobalAlloc add
s=s.replace('if (!strcmp(n, "GlobalAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (p && (a[0] & 0x40)) memset((void *)(uintptr_t)p, 0, a[1]); return p; }',
            'if (!strcmp(n, "GlobalAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (p && (a[0] & 0x40)) memset((void *)(uintptr_t)p, 0, a[1]); block_add(p); return p; }')
# HeapReAlloc update registry
s=s.replace('if (!strcmp(n, "HeapReAlloc")) return (u32)(uintptr_t)realloc((void *)(uintptr_t)a[2], a[3] ? a[3] : 1);',
            'if (!strcmp(n, "HeapReAlloc")) { u32 p = (u32)(uintptr_t)realloc((void *)(uintptr_t)a[2], a[3] ? a[3] : 1); block_take(a[2]); block_add(p); return p; }')
# GlobalReAlloc update registry
s=s.replace('if (!strcmp(n, "GlobalReAlloc")) return (u32)(uintptr_t)realloc((void *)(uintptr_t)a[0], a[1] ? a[1] : 1);',
            'if (!strcmp(n, "GlobalReAlloc")) { u32 p = (u32)(uintptr_t)realloc((void *)(uintptr_t)a[0], a[1] ? a[1] : 1); block_take(a[0]); block_add(p); return p; }')
open(p,"w",encoding="utf-8",newline="").write(s)
print("block registry patched")
