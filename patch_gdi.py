p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
s=s.replace("wasm_present(bits, fw, fh, bpp, stride, flip, xs, ys, bw, bh, xd, yd);","wasm_present(bits, fw, fh, bpp, stride, flip, xs, ys, bw, bh, xd, yd, (int)g_pal_ptr);")
s=s.replace("if (!strcmp(n, \"GetDeviceCaps\")) { if (a[1] == 8) return g_dd_w; if (a[1] == 10) return g_dd_h; if (a[1] == 12) return g_dd_bpp; return 1; }",
            "if (!strcmp(n, \"GetDeviceCaps\")) { if (a[1] == 8) return g_dd_w; if (a[1] == 10) return g_dd_h; if (a[1] == 12) return 8; if (a[1] == 14) return 1; if (a[1] == 104) return 256; return 1; }")
s=s.replace("static u32 g_dd_w = 640, g_dd_h = 480, g_dd_bpp = 32;","static u32 g_dd_w = 640, g_dd_h = 480, g_dd_bpp = 32, g_pal_ptr;")
open(p,"w",encoding="utf-8",newline="").write(s)
print("ok", s.count("(int)g_pal_ptr"), s.count("return 8; if (a[1] == 14)"), s.count("g_pal_ptr;"))
