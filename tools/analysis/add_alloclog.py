p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
old='if (!strcmp(n, "HeapAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[2] ? a[2] : 1); if (p && (a[1] & 8)) memset((void *)(uintptr_t)p, 0, a[2]); return p; }'
new='if (!strcmp(n, "HeapAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[2] ? a[2] : 1); if (p && (a[1] & 8)) memset((void *)(uintptr_t)p, 0, a[2]); { static int al; if (al++ < 120) fprintf(stderr, "wasm HeapAlloc %08x %u\\n", p, a[2]); } return p; }'
assert old in s
s=s.replace(old,new)
old2='if (!strcmp(n, "VirtualAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (p) memset((void *)(uintptr_t)p, 0, a[1]); return p; }'
new2='if (!strcmp(n, "VirtualAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (p) memset((void *)(uintptr_t)p, 0, a[1]); fprintf(stderr, "wasm VirtualAlloc %08x %u\\n", p, a[1]); return p; }'
assert old2 in s
s=s.replace(old2,new2)
open(p,"w",encoding="utf-8",newline="").write(s)
print("alloc log added")
