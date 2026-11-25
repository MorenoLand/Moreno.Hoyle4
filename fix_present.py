p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
start=s.find("EM_JS(void, wasm_present")
end=s.find("});", start)+3
assert start>0 and end>start
new='''EM_JS(void, wasm_present, (int bits, int dw, int dh, int bpp, int stride, int flip, int xs, int ys, int w, int h, int xd, int yd, int pal), {
    if (!Module['canvas'] || !bits || dw <= 0 || dh <= 0 || w <= 0 || h <= 0) return;
    var c = Module['canvas'];
    var SW = 640, SH = 480;
    if (c.width !== SW) c.width = SW;
    if (c.height !== SH) c.height = SH;
    var ctx = c.getContext('2d');
    if (!ctx) return;
    if (!Module.__screen || Module.__screen.width !== SW) Module.__screen = ctx.createImageData(SW, SH);
    var src = HEAPU8, dst = Module.__screen.data;
    var bytes = bpp === 32 ? 4 : (bpp === 24 ? 3 : (bpp === 8 ? 1 : 2));
    for (var y = 0; y < h; y++) {
        var sy = flip ? (ys + (h - 1 - y)) : (ys + y);
        var dy = yd + y;
        if (sy < 0 || sy >= dh || dy < 0 || dy >= SH) continue;
        var so = bits + sy * stride + xs * bytes;
        var drow = dy * SW;
        for (var x = 0; x < w; x++) {
            var dx = xd + x;
            if (dx < 0 || dx >= SW || xs + x >= dw) { so += bytes; continue; }
            var r, g, b;
            if (bpp === 32) { b = src[so]; g = src[so+1]; r = src[so+2]; so += 4; }
            else if (bpp === 24) { b = src[so]; g = src[so+1]; r = src[so+2]; so += 3; }
            else if (bpp === 8) { var pi = pal + src[so] * 4; so += 1; r = src[pi]; g = src[pi+1]; b = src[pi+2]; }
            else { var v = src[so] | (src[so+1] << 8); so += 2; r = ((v >> 11) & 31) * 255 / 31; g = ((v >> 5) & 63) * 255 / 63; b = (v & 31) * 255 / 31; }
            var o = (drow + dx) * 4;
            dst[o] = r; dst[o+1] = g; dst[o+2] = b; dst[o+3] = 255;
        }
    }
    ctx.putImageData(Module.__screen, 0, 0);
});'''
s=s[:start]+new+s[end:]
open(p,"w",encoding="utf-8",newline="").write(s)
print("present rewritten")
