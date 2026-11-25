p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
old='''    if (!strcmp(n, "sosGetErrorString")) return (u32)(uintptr_t)"SOS error";
    if (!strcmp(n, "sosDIGIInitDriver")) { if (a[1]) W32(a[1], 1); return 0; }
    return 0;'''
new='''    if (!strcmp(n, "sosGetErrorString")) return (u32)(uintptr_t)"SOS error";
    if (!strcmp(n, "sosDIGIInitDriver")) { if (a[1]) W32(a[1], 1); return 0; }
    if (!strcmp(n, "sosDIGIStartSample")) {
        u32 d = a[1];
        if (d) {
            u32 ptr = R32(d), len = R32(d + 0x10);
            u32 rate = R16(d + 0x34), bits = R32(d + 0x38), ch = R32(d + 0x3c);
            fprintf(stderr, "wasm StartSample ptr=%08x len=%u rate=%u bits=%u ch=%u\\n", ptr, len, rate, bits, ch);
            if (ptr && len && len < 0x2000000u && rt_readable(ptr, 1)) {
                if (!rate) rate = 22050;
                if (bits != 8 && bits != 16) bits = 8;
                if (ch < 1 || ch > 2) ch = 1;
                wasm_wave_play((int)ptr, (int)len, (int)rate, (int)ch, (int)bits);
            }
        }
        if (a[2]) W32(a[2], 1);
        return 0;
    }
    return 0;'''
assert old in s
s=s.replace(old,new)
open(p,"w",encoding="utf-8",newline="").write(s)
print("sos StartSample playback added")
