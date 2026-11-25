p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
old='''u64 sos_emu(u32 *a)
{
    static int n;
    if (n++ < 400) fprintf(stderr, "wasm sos %s(%x,%x,%x,%x)\\n", wasm_current->name, a[0], a[1], a[2], a[3]);
    return 0;
}'''
new='''u64 sos_emu(u32 *a)
{
    const char *n = wasm_current->name;
    static int logn;
    if (logn++ < 400) fprintf(stderr, "wasm sos %s(%x,%x,%x,%x)\\n", n, a[0], a[1], a[2], a[3]);
    if (!strcmp(n, "sosDIGIDetectFindFirst")) {
        if (a[0]) { memset((void *)(uintptr_t)a[0], 0, 0x200); W32(a[0] + 0x4c, 0xFFFFFFFFu); }
        return 0;
    }
    if (!strcmp(n, "sosGetErrorString")) return (u32)(uintptr_t)"SOS error";
    return 0;
}'''
assert old in s
s=s.replace(old,new)
open(p,"w",encoding="utf-8",newline="").write(s)
print("sos caps fill added")
