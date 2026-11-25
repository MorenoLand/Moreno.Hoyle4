p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
# add EM_JS helper before the window state section
anchor="/* ---------- window state ---------- */"
helper='''EM_JS(void, wasm_wave_play, (int ptr, int len, int rate, int channels, int bits), {
    if (!len || !ptr) return;
    try {
        if (!Module.__ac) Module.__ac = new (window.AudioContext || window.webkitAudioContext)();
        var ac = Module.__ac;
        if (ac.state === 'suspended') ac.resume();
        var bps = bits >> 3;
        var frames = Math.floor(len / (bps * channels));
        if (frames <= 0) return;
        var buf = ac.createBuffer(channels, frames, rate);
        var s = HEAPU8;
        for (var c = 0; c < channels; ++c) {
            var d = buf.getChannelData(c);
            var off = c * bps;
            for (var i = 0; i < frames; ++i) {
                var v;
                if (bits === 16) { var lo = s[ptr + off], hi = s[ptr + off + 1]; var x = (hi << 8) | lo; v = (x >= 0x8000 ? x - 0x10000 : x) / 32768; }
                else { v = (s[ptr + off] - 128) / 128; }
                d[i] = v;
                off += bps * channels;
            }
        }
        var node = ac.createBufferSource();
        node.buffer = buf;
        node.connect(ac.destination);
        node.start();
        Module.__sounds = Module.__sounds || [];
        Module.__sounds.push(node);
        node.onended = function () { var k = Module.__sounds.indexOf(node); if (k >= 0) Module.__sounds.splice(k, 1); };
    } catch (e) {}
});

'''
assert anchor in s
s=s.replace(anchor, helper+anchor,1)
# globals
s=s.replace('static u32 g_timer_id, g_timer_ms, g_timer_due;','static u32 g_timer_id, g_timer_ms, g_timer_due;\nstatic u32 g_wave_rate = 22050, g_wave_ch = 1, g_wave_bits = 8;')
# handlers
old='''    if (!strcmp(n, "waveOutOpen")) { if (a[0]) W32(a[0], 0); return 6; }   /* MMSYSERR_NODRIVER: no audio in the browser */
    if (!strcmp(n, "waveOutPrepareHeader")) return 0;
    if (!strcmp(n, "waveOutWrite")) { u32 h = a[1]; if (h) W32(h + 16, R32(h + 16) | 1); return 0; }
    if (!strcmp(n, "waveOutReset") || !strcmp(n, "waveOutUnprepareHeader") || !strcmp(n, "waveOutClose")) return 0;
    if (!strcmp(n, "waveOutGetPosition")) { if (a[1]) { memset((void *)(uintptr_t)a[1], 0, 16); W32(a[1], 1); W32(a[1] + 4, (u32)emscripten_get_now()); } return 0; }'''
new='''    if (!strcmp(n, "waveOutOpen")) {
        u32 wf = a[2];
        if (wf) { g_wave_ch = R16(wf + 2); g_wave_rate = R32(wf + 4); g_wave_bits = R16(wf + 14); }
        if (a[0]) W32(a[0], 0x5000);
        return 0;
    }
    if (!strcmp(n, "waveOutPrepareHeader")) { u32 h = a[1]; if (h) W32(h + 16, R32(h + 16) | 2); return 0; }
    if (!strcmp(n, "waveOutWrite")) {
        u32 h = a[1];
        if (h) {
            wasm_wave_play((int)R32(h), (int)R32(h + 4), (int)g_wave_rate, (int)g_wave_ch, (int)g_wave_bits);
            W32(h + 16, R32(h + 16) | 1);
        }
        return 0;
    }
    if (!strcmp(n, "waveOutReset") || !strcmp(n, "waveOutClose")) return 0;
    if (!strcmp(n, "waveOutUnprepareHeader")) { u32 h = a[1]; if (h) W32(h + 16, R32(h + 16) & ~2u); return 0; }
    if (!strcmp(n, "waveOutGetDevCapsA")) { if (a[1] && a[2]) { memset((void *)(uintptr_t)a[1], 0, a[2]); if (a[2] >= 20) { W32(a[1] + 8, 0x0100); W32(a[1] + 12, 0xF); } } return 0; }
    if (!strcmp(n, "waveOutGetPosition")) { if (a[1]) { memset((void *)(uintptr_t)a[1], 0, 16); W32(a[1], 1); W32(a[1] + 4, (u32)emscripten_get_now()); } return 0; }'''
assert old in s
s=s.replace(old,new)
open(p,"w",encoding="utf-8",newline="").write(s)
print("waveOut webaudio added")
