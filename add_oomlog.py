p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
old='if (!strcmp(n, "HeapAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[2] ? a[2] : 1); if (p && (a[1] & 8)) memset((void *)(uintptr_t)p, 0, a[2]); block_add(p); return p; }'
new='if (!strcmp(n, "HeapAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[2] ? a[2] : 1); if (!p) fprintf(stderr, "wasm HeapAlloc FAIL size=%u mem=%u\\n", a[2], (unsigned)(__builtin_wasm_memory_size(0) * 65536u)); else if (a[2] > 0x400000u) fprintf(stderr, "wasm HeapAlloc big %u -> %08x\\n", a[2], p); if (p && (a[1] & 8)) memset((void *)(uintptr_t)p, 0, a[2]); block_add(p); return p; }'
assert old in s
s=s.replace(old,new)
old2='if (!strcmp(n, "VirtualAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (p) memset((void *)(uintptr_t)p, 0, a[1]); block_add(p); return p; }'
new2='if (!strcmp(n, "VirtualAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (!p) fprintf(stderr, "wasm VirtualAlloc FAIL size=%u mem=%u\\n", a[1], (unsigned)(__builtin_wasm_memory_size(0) * 65536u)); else if (a[1] > 0x400000u) fprintf(stderr, "wasm VirtualAlloc big %u -> %08x\\n", a[1], p); if (p) memset((void *)(uintptr_t)p, 0, a[1]); block_add(p); return p; }'
assert old2 in s
s=s.replace(old2,new2)
open(p,"w",encoding="utf-8",newline="").write(s)
print("oom log added")
