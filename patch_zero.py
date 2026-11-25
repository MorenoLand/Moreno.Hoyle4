p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
old_heap='if (!strcmp(n, "HeapAlloc")) return (u32)(uintptr_t)malloc(a[2] ? a[2] : 1);'
new_heap='if (!strcmp(n, "HeapAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[2] ? a[2] : 1); if (p && (a[1] & 8)) memset((void *)(uintptr_t)p, 0, a[2]); return p; }'
old_va='if (!strcmp(n, "VirtualAlloc")) return (u32)(uintptr_t)malloc(a[1] ? a[1] : 1);'
new_va='if (!strcmp(n, "VirtualAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (p) memset((void *)(uintptr_t)p, 0, a[1]); return p; }'
old_ga='if (!strcmp(n, "GlobalAlloc")) return (u32)(uintptr_t)malloc(a[1] ? a[1] : 1);'
new_ga='if (!strcmp(n, "GlobalAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (p && (a[0] & 0x40)) memset((void *)(uintptr_t)p, 0, a[1]); return p; }'
for a,b in ((old_heap,new_heap),(old_va,new_va),(old_ga,new_ga)):
    assert a in s, a
    s=s.replace(a,b)
open(p,"w",encoding="utf-8",newline="").write(s)
print("zeroing patched")
