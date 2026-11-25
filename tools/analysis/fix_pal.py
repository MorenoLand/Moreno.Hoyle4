p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
old='    if (!strcmp(n, "CreatePalette")) { g_pal_ptr = a[0] ? a[0] + 4 : 0; return 0x3000; }'
new='''    if (!strcmp(n, "CreatePalette")) {
        u32 lp = a[0];
        if (lp) {
            u32 count = R16(lp + 2);
            if (count > 256) count = 256;
            memcpy(g_pal, (const void *)(uintptr_t)(lp + 4), count * 4);
        }
        g_pal_ptr = (u32)(uintptr_t)g_pal;
        return 0x3000;
    }'''
assert old in s
s=s.replace(old,new)
s=s.replace('static u32 g_dd_w = 640, g_dd_h = 480, g_dd_bpp = 32, g_pal_ptr;','static u32 g_dd_w = 640, g_dd_h = 480, g_dd_bpp = 32, g_pal_ptr;\nstatic unsigned char g_pal[1024];')
open(p,"w",encoding="utf-8",newline="").write(s)
print("palette copy added")
