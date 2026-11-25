p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
# add reservation table after block registry
anchor='static int block_take(u32 p)'
tmp=s.find(anchor)
assert tmp>0
end=s.find('\n}\n', tmp)+3
res='\ntypedef struct { u32 base, size; } VRes;\nstatic VRes g_vres[128];\nstatic int g_vn;\n'
s=s[:end]+res+s[end:]
old='''if (!strcmp(n, "VirtualAlloc")) { { static int vl; if (vl++ < 80) fprintf(stderr, "wasm VirtualAlloc a=%08x size=%u type=%x\\n", a[0], a[1], a[2]); } u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (!p) { static int fl; if (fl++ < 5) fprintf(stderr, "wasm VirtualAlloc FAIL size=%u mem=%u\\n", a[1], (unsigned)(__builtin_wasm_memory_size(0) * 65536u)); } else if (a[1] > 0x400000u) { static int bl; if (bl++ < 5) fprintf(stderr, "wasm VirtualAlloc big %u -> %08x\\n", a[1], p); } if (p) memset((void *)(uintptr_t)p, 0, a[1]); block_add(p); return p; }'''
new='''if (!strcmp(n, "VirtualAlloc")) {
        u32 addr = a[0], size = a[1] ? a[1] : 1, type = a[2];
        if (addr) {
            for (int i = 0; i < g_vn; ++i)
                if (addr >= g_vres[i].base && addr + size <= g_vres[i].base + g_vres[i].size) {
                    memset((void *)(uintptr_t)addr, 0, size);
                    return addr;
                }
        }
        u32 p = (u32)(uintptr_t)malloc(size);
        if (!p) { static int fl; if (fl++ < 5) fprintf(stderr, "wasm VirtualAlloc FAIL size=%u mem=%u\\n", size, (unsigned)(__builtin_wasm_memory_size(0) * 65536u)); return 0; }
        memset((void *)(uintptr_t)p, 0, size);
        block_add(p);
        if ((type & 0x2000u) && g_vn < 128) { g_vres[g_vn].base = p; g_vres[g_vn].size = size; ++g_vn; }
        return p;
    }'''
assert old in s, "va old not found"
s=s.replace(old,new)
old2='if (!strcmp(n, "VirtualFree")) { { static int vf; if (vf++ < 40) fprintf(stderr, "wasm VirtualFree a=%08x size=%u type=%x\\n", a[0], a[1], a[2]); } if ((a[2] & 0x8000u) && block_take(a[0])) free((void *)(uintptr_t)a[0]); return 1; }'
new2='if (!strcmp(n, "VirtualFree")) { if (a[2] & 0x8000u) { for (int i = 0; i < g_vn; ++i) if (g_vres[i].base == a[0]) { g_vres[i] = g_vres[--g_vn]; break; } if (block_take(a[0])) free((void *)(uintptr_t)a[0]); } return 1; }'
assert old2 in s
s=s.replace(old2,new2)
open(p,"w",encoding="utf-8",newline="").write(s)
print("virtualalloc arena patched")
