p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
old='''    if (!strcmp(n, "sosGetErrorString")) return (u32)(uintptr_t)"SOS error";
    return 0;'''
new='''    if (!strcmp(n, "sosGetErrorString")) return (u32)(uintptr_t)"SOS error";
    if (!strcmp(n, "sosDIGIInitDriver")) { if (a[1]) W32(a[1], 1); return 0; }
    return 0;'''
assert old in s
s=s.replace(old,new)
open(p,"w",encoding="utf-8",newline="").write(s)
print("sos device handle set")
