/* imports_wasm.c: the Win32/CRT imports of the lifted program, implemented for the browser.
 *
 * Every import goes through wasm_import(); wasm_current names the entry being called. Unknown
 * imports print their name and abort: a missing implementation is a porting task, not a no-op.
 */
#include "api.h"
#include "sys.h"
#include "wasm_config.h"
#include "windows_wasm.h"
#include <emscripten.h>
#include <ctype.h>
#include <dirent.h>
#include <errno.h>
#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include <unistd.h>

extern ApiEnt *wasm_current;
extern u32 wasm_current_ecx;
int wasm_peek_event(int *type, int *x, int *y, int *key);
int wasm_peek_event_ex(int *type, int *x, int *y, int *key, int consume);

static u32 *args;

u64 wasm_import(u32 *a);

/* ---------- presentation ---------- */
EM_JS(void, wasm_present, (int bits, int dw, int dh, int bpp, int stride, int flip, int xs, int ys, int w, int h, int xd, int yd, int pal), {
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
});

EM_JS(void, wasm_wave_play, (int ptr, int len, int rate, int channels, int bits), {
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

EM_JS(void, wasm_wave_stream_play, (int ptr, int len, int rate, int channels, int bits, int stream), {
    if (!len || !ptr) return;
    try {
        if (!Module.__ac) Module.__ac = new (window.AudioContext || window.webkitAudioContext)();
        var ac = Module.__ac;
        if (ac.state === 'suspended') ac.resume();
        var bps = bits >> 3;
        var frames = Math.floor(len / (bps * channels));
        if (frames <= 0) return;
        var st = Module.__streams = Module.__streams || [];
        var s = stream >= 0 ? (st[stream] || (st[stream] = { nodes: [], end: 0 })) : null;
        var now = ac.currentTime;
        var at = s ? Math.max(now, s.end) : now;
        var buf = ac.createBuffer(channels, frames, rate);
        var h = HEAPU8;
        for (var c = 0; c < channels; ++c) {
            var d = buf.getChannelData(c);
            var off = c * bps;
            for (var i = 0; i < frames; ++i) {
                var v;
                if (bits === 16) { var lo = h[ptr + off], hi = h[ptr + off + 1]; var x = (hi << 8) | lo; v = (x >= 0x8000 ? x - 0x10000 : x) / 32768; }
                else { v = (h[ptr + off] - 128) / 128; }
                d[i] = v;
                off += bps * channels;
            }
        }
        var node = ac.createBufferSource();
        node.buffer = buf;
        node.connect(ac.destination);
        node.start(at);
        if (s) { s.end = at + frames / rate; s.nodes.push(node); node.onended = function () { var k = s.nodes.indexOf(node); if (k >= 0) s.nodes.splice(k, 1); }; }
        else node.onended = function () { var k = Module.__sounds.indexOf(node); if (k >= 0) Module.__sounds.splice(k, 1); };
        Module.__sounds = Module.__sounds || [];
        Module.__sounds.push(node);
    } catch (e) {}
});

EM_JS(void, wasm_wave_stream_stop, (int stream), {
    var s = Module.__streams && Module.__streams[stream];
    if (!s) return;
    for (var i = 0; i < s.nodes.length; ++i) { try { s.nodes[i].stop(); } catch (e) {} }
    s.nodes = []; s.end = 0;
});

/* ---------- window state ---------- */
static u32 g_wndproc;
static u32 g_hwnd = 0x1000;
static int g_painted;
static int g_cursor_x = 320, g_cursor_y = 240;
extern volatile int wasm_mouse_down, wasm_mouse_x, wasm_mouse_y;
extern volatile unsigned char wasm_key_down[256];
static int wasm_key_state(u32 vk) { if ((vk & 0xff) == 1) return wasm_mouse_down; return wasm_key_down[vk & 0xff]; }
static u32 g_dd_w = 640, g_dd_h = 480, g_dd_bpp = 32, g_pal_ptr;
static unsigned char g_pal[1024];
static u32 g_wl[32];
static unsigned char g_keys[256];
static u32 g_timer_id, g_timer_ms, g_timer_due;
static u32 g_wave_rate = 22050, g_wave_ch = 1, g_wave_bits = 8;
typedef struct { u32 base, size, pos, info; int used; } Mmio;
static Mmio g_mmio[8];
typedef struct { u32 used, started, rate, bits, ch, n, ptr[64], len[64]; } WStream;
static WStream g_streams[8];
static u32 g_main_obj;
static int g_linked;

static void write_u32(u32 p, u32 v) { if (p) W32(p, v); }
static void write_rect(u32 p, int l, int t, int r, int b)
{
    if (!p) return;
    W32(p + 0, (u32)l); W32(p + 4, (u32)t); W32(p + 8, (u32)r); W32(p + 12, (u32)b);
}

static int wasm_vscanf(u32 *a, int from_file)
{
    unsigned char *buf = (unsigned char *)malloc(72);
    if (!buf) abort();
    unsigned char *va = buf + ((r_esp + 12u) & 7u);
    memcpy(va, a + 2, 56);
    int r = from_file ? vfscanf((FILE *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], (va_list)va)
                      : vsscanf((const char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], (va_list)va);
    free(buf);
    return r;
}

/* ---------- formatting ---------- */
static int wasm_vformat(char *dst, const char *fmt, const u32 *v, int nv)
{
    int o = 0, vi = 0;
    for (const char *p = fmt; *p; ) {
        if (*p != '%') { dst[o++] = *p++; continue; }
        if (p[1] == '%') { dst[o++] = '%'; p += 2; continue; }
        char spec[40]; int si = 0; spec[si++] = '%'; ++p;
        while (*p && strchr("-+ #0", *p) && si < 32) spec[si++] = *p++;
        while (*p >= '0' && *p <= '9' && si < 32) spec[si++] = *p++;
        if (*p == '.') { spec[si++] = *p++; while (*p >= '0' && *p <= '9' && si < 32) spec[si++] = *p++; }
        int l = 0;
        if (p[0] == 'I' && p[1] == '6' && p[2] == '4') { p += 3; l = 2; }
        else while (*p == 'l' && si < 32) { spec[si++] = *p++; ++l; }
        if (*p == 'h' && si < 32) { spec[si++] = *p++; if (*p == 'h' && si < 32) spec[si++] = *p++; }
        char conv = *p; if (conv) ++p;
        spec[si++] = conv; spec[si] = 0;
        if (!conv) { dst[o++] = '%'; break; }
        char tmp[512]; int n = 0;
        switch (conv) {
        case 'd': case 'i':
            if (l >= 2) { long long x = (long long)((u64)v[vi] | ((u64)v[vi + 1] << 32)); vi += 2; n = snprintf(tmp, sizeof tmp, spec, x); }
            else { int x = vi < nv ? (int)v[vi] : 0; ++vi; n = snprintf(tmp, sizeof tmp, spec, x); }
            break;
        case 'u': case 'o': case 'x': case 'X':
            if (l >= 2) { unsigned long long x = (u64)v[vi] | ((u64)v[vi + 1] << 32); vi += 2; n = snprintf(tmp, sizeof tmp, spec, x); }
            else { unsigned x = vi < nv ? v[vi] : 0; ++vi; n = snprintf(tmp, sizeof tmp, spec, x); }
            break;
        case 'c': n = snprintf(tmp, sizeof tmp, spec, (int)(vi < nv ? v[vi] : 0)); ++vi; break;
        case 's': {
            const char *s = vi < nv ? (const char *)(uintptr_t)v[vi] : "";
            ++vi;
            if (!s || !s[0] || !rt_readable((u32)(uintptr_t)s, 1)) s = "";
            n = snprintf(tmp, sizeof tmp, spec, s);
            break;
        }
        case 'f': case 'F': case 'e': case 'E': case 'g': case 'G': case 'a': case 'A': {
            double d; memcpy(&d, &v[vi], 8); vi += 2;
            n = snprintf(tmp, sizeof tmp, spec, d);
            break;
        }
        case 'p': n = snprintf(tmp, sizeof tmp, spec, (void *)(uintptr_t)(vi < nv ? v[vi] : 0)); ++vi; break;
        default: n = snprintf(tmp, sizeof tmp, "%%%c", conv); break;
        }
        if (n < 0) n = 0;
        if (n > (int)sizeof tmp - 1) n = (int)sizeof tmp - 1;
        memcpy(dst + o, tmp, n); o += n;
    }
    dst[o] = 0;
    return o;
}

static char g_cwd[900] = "/data";

static int path_is_rel(const char *p)
{
    return p && p[0] && p[0] != '/' && p[0] != '\\' && !(p[0] && p[1] == ':') &&
           strncmp(p, "C:/game", 7) && strncmp(p, "C:\\game", 7) &&
           strncmp(p, "..\\Hoyle FaceCreator", 20) && strncmp(p, "../Hoyle FaceCreator", 20);
}

static const char *path_fallback(const char *p, char *buf, size_t n)
{
    if (!path_is_rel(p)) return NULL;
    snprintf(buf, n, "/data/%s", p);
    for (char *q = buf; *q; ++q) if (*q == '\\') *q = '/';
    for (char *q = buf; *q; ++q) if (!strncasecmp(q, "streams", 7)) memcpy(q, "Streams", 7);
    return buf;
}

static const char *wasm_path(const char *p)
{
    static char raw[1024], buf[1024];
    if (!p) return "";
    int rooted = 0;
    if (!strncmp(p, "C:/game", 7) || !strncmp(p, "c:/game", 7) ||
        !strncmp(p, "C:\\game", 7) || !strncmp(p, "c:\\game", 7)) { p += 7; rooted = 1; }
    if (rooted) while (*p == '/' || *p == '\\') ++p;
    {
        static char sfix[1024];
        for (const char *s = p; *s; ++s) {
            if (!strncasecmp(s, "streams", 7)) {
                size_t off = (size_t)(s - p);
                snprintf(sfix, sizeof sfix, "%s", p);
                if (off + 7 < sizeof sfix) memcpy(sfix + off, "Streams", 7);
                p = sfix;
                break;
            }
        }
    }
    if (!strncmp(p, "..\\Hoyle FaceCreator", 20) || !strncmp(p, "../Hoyle FaceCreator", 20)) {
        static char fcmap[1024];
        const char *rest = p + 20;
        snprintf(fcmap, sizeof fcmap, "/data/FaceCreator%s", rest);
        for (char *q = fcmap; *q; ++q) if (*q == '\\') *q = '/';
        char *dot = strrchr(fcmap, '.');
        if (dot && (!strcasecmp(dot, ".prf") || !strcasecmp(dot, ".fac") || !strcasecmp(dot, ".voc"))) {
            dot[1] = (char)toupper((unsigned char)dot[1]);
            dot[2] = (char)toupper((unsigned char)dot[2]);
            dot[3] = (char)toupper((unsigned char)dot[3]);
        }
        return fcmap;
    }
    if (!rooted && (p[0] == '/' || p[0] == '\\')) {
        while (*p == '/' || *p == '\\') ++p;
        snprintf(raw, sizeof raw, "%s/%s", g_cwd, p);
    }
    else if (!rooted && p[0] && p[1] == ':') {
        const char *q = p + 2;
        while (*q == '/' || *q == '\\') ++q;
        snprintf(raw, sizeof raw, "%s/%s", g_cwd, q);
    }
    else snprintf(raw, sizeof raw, "%s/%s", g_cwd, p);
    size_t o = 0;
    for (size_t i = 0; raw[i] && o + 1 < sizeof buf; ++i) buf[o++] = raw[i] == '\\' ? '/' : raw[i];
    buf[o] = 0;
    o = 0;
    for (size_t i = 0; buf[i]; ) {
        if (buf[i] == '/' && buf[i + 1] == '/') ++i;
        else if (buf[i] == '/' && buf[i + 1] == '.' && (buf[i + 2] == '/' || buf[i + 2] == 0)) i += 2;
        else raw[o++] = buf[i++];
    }
    raw[o] = 0;
    return raw;
}

/* The preloaded files keep the case they had on disk; Windows would match any case.
 * If the exact path is missing, find the entry of its directory that differs only in case. */
static const char *ci_path(const char *p)
{
    static char out[1024];
    snprintf(out, sizeof out, "%s", p ? p : "");
    if (!out[0] || access(out, F_OK) == 0) return out;
    char *slash = strrchr(out, '/');
    char dir[1024];
    const char *base = slash ? slash + 1 : out;
    if (slash) { size_t n = (size_t)(slash - out); if (n >= sizeof dir) n = sizeof dir - 1; memcpy(dir, out, n); dir[n] = 0; }
    else snprintf(dir, sizeof dir, "%s", g_cwd);
    DIR *d = opendir(dir);
    if (!d) return out;
    struct dirent *e;
    while ((e = readdir(d)) != NULL) {
        if (!strcasecmp(e->d_name, base)) {
            snprintf(out, sizeof out, "%s/%s", dir, e->d_name);
            break;
        }
    }
    closedir(d);
    return out;
}

/* ---------- KERNEL32 ---------- */
static u32 g_skipbox;
void wasm_msgbox_ctor(unsigned obj, unsigned ret)
{
    (void)ret;
    const u32 *sp = (const u32 *)(uintptr_t)r_esp;
    for (int i = 0; i < 8192; ++i) if (sp[i] >= 0x660000u && sp[i] < 0x680000u) { g_skipbox = obj; return; }
}
int wasm_msgbox_skip(unsigned obj)
{
    if (obj && obj == g_skipbox) { g_skipbox = 0; return 1; }
    return 0;
}
static u32 g_blocks[65536];
static int g_nblocks;
static void block_add(u32 p) { if (p && g_nblocks < 65536) g_blocks[g_nblocks++] = p; }
static int block_take(u32 p)
{
    for (int i = 0; i < g_nblocks; ++i) if (g_blocks[i] == p) { g_blocks[i] = g_blocks[--g_nblocks]; return 1; }
    return 0;
}

typedef struct { u32 base, size; } VRes;
static VRes g_vres[128];
static int g_vn;
static int g_last_error;
static FILE *g_files[128];
static int g_nfiles;
static void file_add(FILE *f) { if (!f) return; for (int i = 0; i < g_nfiles; ++i) if (g_files[i] == f) return; if (g_nfiles < 128) g_files[g_nfiles++] = f; }
static int file_take(FILE *f) { for (int i = 0; i < g_nfiles; ++i) if (g_files[i] == f) { g_files[i] = g_files[--g_nfiles]; return 1; } return 0; }

static int ini_get(const char *sec, const char *key, char *out, int cap)
{
    FILE *f = fopen(ci_path(wasm_path("casino4.ini")), "rb");
    if (!f) return 0;
    char line[1024], cur[128] = "";
    int found = 0;
    while (fgets(line, sizeof line, f)) {
        char *p = line; while (*p == ' ' || *p == '\t') ++p;
        if (*p == '[') { char *e = strchr(p, ']'); if (e) { *e = 0; snprintf(cur, sizeof cur, "%s", p + 1); } continue; }
        if (*p == ';' || *p == '#' || *p == '\r' || *p == '\n' || !*p) continue;
        char *eq = strchr(p, '='); if (!eq) continue;
        *eq = 0;
        char *k = p, *v = eq + 1, *nl = strpbrk(v, "\r\n"); if (nl) *nl = 0;
        while (*k == ' ' || *k == '\t') ++k;
        char *ke = k + strlen(k); while (ke > k && (ke[-1] == ' ' || ke[-1] == '\t')) *--ke = 0;
        if (!strcasecmp(cur, sec) && !strcasecmp(k, key)) { snprintf(out, cap, "%s", v); found = 1; }
    }
    fclose(f);
    return found;
}

static void ini_put(const char *file, const char *sec, const char *key, const char *val)
{
    const char *path = ci_path(wasm_path(file ? file : "casino4.ini"));
    FILE *f = fopen(path, "ab");
    if (!f) return;
    fprintf(f, "\n[%s]\n%s=%s\n", sec ? sec : "", key ? key : "", val ? val : "");
    fclose(f);
}

static u64 ini_access(const char *n, u32 *a)
{
    if (!strcmp(n, "GetPrivateProfileStringA")) {
        const char *sec = (const char *)(uintptr_t)a[0], *key = (const char *)(uintptr_t)a[1];
        const char *def = (const char *)(uintptr_t)a[2]; char *out = (char *)(uintptr_t)a[3];
        char buf[1024];
        if (ini_get(sec, key, buf, sizeof buf)) { snprintf(out, a[4], "%s", buf); return (u32)strlen(out); }
        if (def) { snprintf(out, a[4], "%s", def); return (u32)strlen(out); }
        if (a[4]) out[0] = 0;
        return 0;
    }
    const char *sec = (const char *)(uintptr_t)a[0], *key = (const char *)(uintptr_t)a[1];
    const char *val = (const char *)(uintptr_t)a[2], *file = (const char *)(uintptr_t)a[3];
    ini_put(file, sec, key, val);
    return 1;
}

static int wild_match(const char *pat, const char *name);

typedef struct { DIR *d; char dir[512], pat[260]; } WFind;

static int fill_find(u32 p, const char *name, const char *dir)
{
    if (!p) return 0;
    memset((void *)(uintptr_t)p, 0, 320);
    W32(p, 0x20);
    snprintf((char *)(uintptr_t)(p + 44), 260, "%s", name);
    char full[1024]; snprintf(full, sizeof full, "%s/%s", dir, name);
    struct stat st;
    if (!stat(full, &st)) { W32(p + 28, (u32)((u64)st.st_size >> 32)); W32(p + 32, (u32)st.st_size); }
    return 1;
}

static u32 find_next(WFind *w, u32 data)
{
    if (!w) return 0;
    struct dirent *e;
    while ((e = readdir(w->d)) != NULL) {
        if (!strcmp(e->d_name, ".") || !strcmp(e->d_name, "..")) continue;
        if (!wild_match(w->pat, e->d_name)) continue;
        fill_find(data, e->d_name, w->dir);
        return 1;
    }
    g_last_error = 18;
    return 0;
}

static u64 find_access(const char *n, u32 *a)
{
    if (!strcmp(n, "FindClose")) { WFind *w = (WFind *)(uintptr_t)a[0]; if (w) { closedir(w->d); free(w); } return 1; }
    if (!strcmp(n, "FindFirstFileA")) {
        const char *patt = (const char *)(uintptr_t)a[0];
        const char *slash = patt ? strrchr(patt, '\\') : NULL;
        const char *slash2 = patt ? strrchr(patt, '/') : NULL;
        if (slash2 && (!slash || slash2 > slash)) slash = slash2;
        const char *base = slash ? slash + 1 : patt;
        const char *dir = wasm_path(slash ? "." : ".");
        DIR *d = opendir(dir);
        if (!d) { g_last_error = 2; return 0xFFFFFFFFu; }
        WFind *w = (WFind *)calloc(1, sizeof *w);
        if (!w) { closedir(d); return 0xFFFFFFFFu; }
        w->d = d;
        snprintf(w->pat, sizeof w->pat, "%s", base ? base : "*");
        snprintf(w->dir, sizeof w->dir, "%s", dir);
        if (find_next(w, a[1])) return (u32)(uintptr_t)w;
        closedir(d); free(w);
        return 0xFFFFFFFFu;
    }
    return find_next((WFind *)(uintptr_t)a[0], a[1]) ? 1 : 0;
}

static u64 kernel32(u32 *a)
{
    const char *n = wasm_current->name;
    if (!strcmp(n, "LoadLibraryA") || !strcmp(n, "LoadLibraryW")) { const char *lib = (const char *)(uintptr_t)a[0]; if (lib && (strstr(lib, "sos9503") || strstr(lib, "sos32s03") || strstr(lib, "SOSLIBS"))) return 0x60000000u; g_last_error = 126; return 0; }
    if (!strcmp(n, "FreeLibrary")) return 1;
    if (!strcmp(n, "ExitProcess")) exit((int)a[0]);
    if (!strcmp(n, "GetSystemTime") || !strcmp(n, "GetLocalTime")) {
        time_t t = time(NULL); struct tm tv;
        if (n[3] == 'S') gmtime_r(&t, &tv); else localtime_r(&t, &tv);
        u32 p = a[0];
        if (p) { W16(p, tv.tm_year + 1900); W16(p + 2, tv.tm_mon + 1); W16(p + 6, tv.tm_mday); W16(p + 8, tv.tm_hour); W16(p + 10, tv.tm_min); W16(p + 12, tv.tm_sec); }
        return 0;
    }
    if (!strcmp(n, "GetVersionExA")) { u32 p = a[0]; if (p) { memset((void *)(uintptr_t)p, 0, 148); W32(p, 148); W32(p + 4, 4); W32(p + 8, 10); W32(p + 12, 0x7d0); W32(p + 16, 1); } return 1; }
    if (!strcmp(n, "GetVersion")) return 0xC0000A04u;
    if (!strcmp(n, "GetACP") || !strcmp(n, "GetOEMCP")) return 1252;
    if (!strcmp(n, "GetCPInfo")) { u32 p = a[1]; if (p) { memset((void *)(uintptr_t)p, 0, 20); W32(p, 1); ((char *)(uintptr_t)p)[4] = '?'; } return 1; }
    if (!strcmp(n, "GetEnvironmentStrings") || !strcmp(n, "GetEnvironmentStringsW")) return (u32)(uintptr_t)calloc(2, 1);
    if (!strcmp(n, "FreeEnvironmentStringsA") || !strcmp(n, "FreeEnvironmentStringsW")) { if (a[0]) free((void *)(uintptr_t)a[0]); return 1; }
    if (!strcmp(n, "GetStdHandle")) return a[0] == 0xFFFFFFF6u ? 1 : (a[0] == 0xFFFFFFF5u ? 2 : (a[0] == 0xFFFFFFF4u ? 3 : 0));
    if (!strcmp(n, "SetStdHandle")) return 1;
    if (!strcmp(n, "GetFileType")) return 1;
    if (!strcmp(n, "SetHandleCount")) return a[0];
    if (!strcmp(n, "FlushFileBuffers")) { FILE *f = (FILE *)(uintptr_t)a[0]; if (f) fflush(f); return 1; }
    if (!strcmp(n, "SetEndOfFile")) { FILE *f = (FILE *)(uintptr_t)a[0]; if (!f) return 0; long p = ftell(f); fflush(f); return p >= 0; }
    if (!strcmp(n, "CreateDirectoryA")) return 1;
    if (!strcmp(n, "DeleteFileA")) return remove(wasm_path((const char *)(uintptr_t)a[0])) == 0;
    if (!strcmp(n, "GetTimeZoneInformation")) { if (a[0]) memset((void *)(uintptr_t)a[0], 0, 172); return 0; }
    if (!strcmp(n, "FileTimeToSystemTime")) {
        u32 lo = a[0] ? R32(a[0]) : 0, hi = a[0] ? R32(a[0] + 4) : 0;
        unsigned long long ft = ((unsigned long long)hi << 32) | lo;
        if (ft >= 116444736000000000ull) ft -= 116444736000000000ull;
        else ft = 0;
        time_t t = (time_t)(ft / 10000000ull); struct tm tv; gmtime_r(&t, &tv);
        u32 p = a[1];
        if (p) { W16(p, tv.tm_year + 1900); W16(p + 2, tv.tm_mon + 1); W16(p + 6, tv.tm_mday); W16(p + 8, tv.tm_hour); W16(p + 10, tv.tm_min); W16(p + 12, tv.tm_sec); }
        return 1;
    }
    if (!strcmp(n, "WritePrivateProfileStringA") || !strcmp(n, "GetPrivateProfileStringA")) return ini_access(n, a);
    if (!strcmp(n, "FindFirstFileA") || !strcmp(n, "FindNextFileA") || !strcmp(n, "FindClose")) return find_access(n, a);
    if (!strcmp(n, "HeapCreate")) return 1;
    if (!strcmp(n, "HeapDestroy")) return 1;
    if (!strcmp(n, "HeapAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[2] ? a[2] : 1); if (!p) { static int fl; if (fl++ < 5) fprintf(stderr, "wasm HeapAlloc FAIL size=%u mem=%u\n", a[2], (unsigned)(__builtin_wasm_memory_size(0) * 65536u)); } else if (a[2] > 0x400000u) { static int bl; if (bl++ < 5) fprintf(stderr, "wasm HeapAlloc big %u -> %08x\n", a[2], p); } if (p && (a[1] & 8)) memset((void *)(uintptr_t)p, 0, a[2]); block_add(p); return p; }
    if (!strcmp(n, "HeapFree")) { if (a[2]) { if (!block_take(a[2])) return 1; free((void *)(uintptr_t)a[2]); } return 1; }
    if (!strcmp(n, "HeapReAlloc")) { u32 p = (u32)(uintptr_t)realloc((void *)(uintptr_t)a[2], a[3] ? a[3] : 1); block_take(a[2]); block_add(p); return p; }
    if (!strcmp(n, "HeapSize")) return 0;
    if (!strcmp(n, "VirtualAlloc")) {
        u32 addr = a[0], size = a[1] ? a[1] : 1, type = a[2];
        if (addr) {
            for (int i = 0; i < g_vn; ++i)
                if (addr >= g_vres[i].base && addr + size <= g_vres[i].base + g_vres[i].size) {
                    memset((void *)(uintptr_t)addr, 0, size);
                    return addr;
                }
        }
        u32 p = (u32)(uintptr_t)malloc(size);
        if (!p) { static int fl; if (fl++ < 5) fprintf(stderr, "wasm VirtualAlloc FAIL size=%u mem=%u\n", size, (unsigned)(__builtin_wasm_memory_size(0) * 65536u)); return 0; }
        memset((void *)(uintptr_t)p, 0, size);
        block_add(p);
        if ((type & 0x2000u) && g_vn < 128) { g_vres[g_vn].base = p; g_vres[g_vn].size = size; ++g_vn; }
        return p;
    }
    if (!strcmp(n, "VirtualFree")) { if (a[2] & 0x8000u) { for (int i = 0; i < g_vn; ++i) if (g_vres[i].base == a[0]) { g_vres[i] = g_vres[--g_vn]; break; } if (block_take(a[0])) free((void *)(uintptr_t)a[0]); } return 1; }
    if (!strcmp(n, "GlobalAlloc")) { u32 p = (u32)(uintptr_t)malloc(a[1] ? a[1] : 1); if (p && (a[0] & 0x40)) memset((void *)(uintptr_t)p, 0, a[1]); block_add(p); return p; }
    if (!strcmp(n, "GlobalReAlloc")) { u32 p = (u32)(uintptr_t)realloc((void *)(uintptr_t)a[0], a[1] ? a[1] : 1); block_take(a[0]); block_add(p); return p; }
    if (!strcmp(n, "RaiseException")) { fprintf(stderr, "wasm: RaiseException %x\n", a[0]); abort(); }
    if (!strcmp(n, "RtlUnwind")) return 0;
    if (!strcmp(n, "IsBadCodePtr")) return 0;
    if (!strcmp(n, "SetEnvironmentVariableA")) return 1;
    if (!strcmp(n, "GetStringTypeA") || !strcmp(n, "GetStringTypeW")) return 1;
    if (!strcmp(n, "LCMapStringA") || !strcmp(n, "LCMapStringW")) {
        char *dst = (char *)(uintptr_t)a[4]; const char *src = (const char *)(uintptr_t)a[2];
        int len = (int)a[3]; if (len < 0) len = src ? (int)strlen(src) + 1 : 0;
        if (dst && a[5] > 0) { int k = 0; for (; k < len && k < (int)a[5] - 1 && src; ++k) dst[k] = src[k]; dst[k] = 0; return k; }
        return len;
    }
    if (!strcmp(n, "CompareStringA") || !strcmp(n, "CompareStringW")) {
        int la = (int)a[2], lb = (int)a[3];
        const char *pa = (const char *)(uintptr_t)a[4], *pb = (const char *)(uintptr_t)a[5];
        if (la < 0) la = pa ? (int)strlen(pa) : 0;
        if (lb < 0) lb = pb ? (int)strlen(pb) : 0;
        int m = la < lb ? la : lb, c = 0;
        for (int i = 0; i < m && !c; ++i) c = (unsigned char)pa[i] - (unsigned char)pb[i];
        if (!c) c = la - lb;
        return c < 0 ? 1 : (c > 0 ? 3 : 2);
    }
    if (!strcmp(n, "MultiByteToWideChar")) {
        const char *s = (const char *)(uintptr_t)a[2];
        int len = (int)a[3]; if (len < 0) len = s ? (int)strlen(s) + 1 : 0;
        u16 *d = (u16 *)(uintptr_t)a[4];
        if (!d || !a[5]) return len;
        int k = 0; for (; k < len && k < (int)a[5]; ++k) d[k] = s ? (unsigned char)s[k] : 0;
        return k;
    }
    if (!strcmp(n, "WideCharToMultiByte")) {
        const u16 *s = (const u16 *)(uintptr_t)a[2];
        int len = (int)a[3]; if (len < 0) { len = 0; while (s && s[len]) ++len; ++len; }
        char *d = (char *)(uintptr_t)a[4];
        if (!d || !a[5]) return len;
        int k = 0; for (; k < len && k < (int)a[5]; ++k) d[k] = (char)(s ? s[k] : 0);
        return k;
    }
    if (!strcmp(n, "_hread")) { FILE *f = (FILE *)(uintptr_t)a[0]; return f ? (u32)fread((void *)(uintptr_t)a[1], 1, a[2], f) : 0; }
    if (!strcmp(n, "_lclose")) { FILE *f = (FILE *)(uintptr_t)a[0]; return f ? fclose(f) : -1; }
    if (!strcmp(n, "GetSystemTimeAsFileTime")) { write_u32(a[0], (u32)time(NULL)); write_u32(a[0] + 4, 0); return 0; }
    if (!strcmp(n, "GetCurrentThread")) return 0xFFFFFFFEu;
    if (!strcmp(n, "GetCurrentProcessId") || !strcmp(n, "GetCurrentThreadId")) return 0x1234;
    if (!strcmp(n, "GetTickCount")) return (u32)(emscripten_get_now());
    if (!strcmp(n, "QueryPerformanceCounter")) { write_u32(a[0], (u32)(emscripten_get_now() * 1000)); write_u32(a[0] + 4, 0); return 1; }
    if (!strcmp(n, "GetStartupInfoA")) { if (a[0]) memset((void *)(uintptr_t)a[0], 0, 68); return 0; }
    if (!strcmp(n, "GetCommandLineA")) return (u32)(uintptr_t)"Casino4.exe";
    if (!strcmp(n, "GetModuleFileNameA")) {
        const char *s = "C:\\game\\Casino4.exe";
        size_t l = strlen(s); if (a[2] && l >= a[2]) l = a[2] - 1;
        memcpy((void *)(uintptr_t)a[1], s, l); ((char *)(uintptr_t)a[1])[l] = 0; return (u32)l;
    }
    if (!strcmp(n, "GetLastError")) return (u32)g_last_error;
    if (!strcmp(n, "SetErrorMode")) return 0;
    if (!strcmp(n, "IsDebuggerPresent")) return 0;
    if (!strcmp(n, "SetUnhandledExceptionFilter") || !strcmp(n, "UnhandledExceptionFilter")) return 0;
    if (!strcmp(n, "OutputDebugStringA")) { if (a[0]) fprintf(stderr, "%s", (const char *)(uintptr_t)a[0]); return 0; }
    if (!strcmp(n, "Sleep")) { return 0; }
    if (!strcmp(n, "InterlockedCompareExchange")) { u32 *p = (u32 *)(uintptr_t)a[0]; u32 old = *p; if (old == a[1]) *p = a[2]; return old; }
    if (!strcmp(n, "InterlockedExchange")) { u32 *p = (u32 *)(uintptr_t)a[0]; u32 old = *p; *p = a[1]; return old; }
    if (!strcmp(n, "CloseHandle")) { if (a[0] && a[0] != 0xFFFFFFFFu) { FILE *f = (FILE *)(uintptr_t)a[0]; if (file_take(f)) fclose(f); } return 1; }
    if (!strcmp(n, "CreateMutexA")) return 0x5000;
    if (!strcmp(n, "GetDriveTypeA")) return 3; /* DRIVE_FIXED */
    if (!strcmp(n, "GlobalMemoryStatus")) { if (a[0]) { memset((void *)(uintptr_t)a[0], 0, 32); W32(a[0], 32); W32(a[0] + 4, 50); W32(a[0] + 8, 0x10000000); } return 0; }
    if (!strcmp(n, "GetSystemInfo")) { if (a[0]) { memset((void *)(uintptr_t)a[0], 0, 36); } return 0; }
    if (!strcmp(n, "IsBadReadPtr")) return rt_readable(a[0], a[1]) ? 0 : 1;
    if (!strcmp(n, "VirtualQuery")) return 0;
    if (!strcmp(n, "GetCurrentProcess")) return 0xFFFFFFFFu;
    if (!strcmp(n, "TerminateProcess")) { exit((int)a[1]); }
    if (!strcmp(n, "CreateProcessA")) { g_last_error = 2; return 0; }
    if (!strcmp(n, "CopyFileA")) {
        FILE *s = fopen(wasm_path((const char *)(uintptr_t)a[0]), "rb");
        FILE *d = s ? fopen(wasm_path((const char *)(uintptr_t)a[1]), "wb") : NULL;
        if (!s || !d) { if (s) fclose(s); if (d) fclose(d); return 0; }
        char buf[65536]; size_t k;
        while ((k = fread(buf, 1, sizeof buf, s)) > 0) fwrite(buf, 1, k, d);
        fclose(s); fclose(d); return 1;
    }
    if (!strcmp(n, "GetFileAttributesA")) {
        const char *p = ci_path(wasm_path((const char *)(uintptr_t)a[0]));
        FILE *f = fopen(p, "rb");
        char alt[1024];
        if (!f && path_fallback((const char *)(uintptr_t)a[0], alt, sizeof alt)) f = fopen(ci_path(alt), "rb");
        if (!f) { g_last_error = 2; return 0xFFFFFFFFu; }
        fclose(f); return 0x20; /* FILE_ATTRIBUTE_ARCHIVE */
    }
    if (!strcmp(n, "CreateFileA")) {
        const char *gp = (const char *)(uintptr_t)a[0];
        const char *p = ci_path(wasm_path(gp));
        const char *mode = (a[1] & 0x40000000u) ? "wb" : ((a[1] & 0x80000000u) ? "rb" : "rb");
        FILE *f = fopen(p, mode);
        char alt[1024];
        if (!f && path_fallback(gp, alt, sizeof alt)) f = fopen(ci_path(alt), mode);
        if (!f) { g_last_error = 2; return 0xFFFFFFFFu; }
        file_add(f);
        return (u32)(uintptr_t)f;
    }
    if (!strcmp(n, "ReadFile")) {
        size_t k = fread((void *)(uintptr_t)a[1], 1, a[2], (FILE *)(uintptr_t)a[0]);
        if (a[3]) W32(a[3], (u32)k);
        return k == a[2] || k > 0;
    }
    if (!strcmp(n, "WriteFile")) {
        size_t k = fwrite((const void *)(uintptr_t)a[1], 1, a[2], (FILE *)(uintptr_t)a[0]);
        if (a[3]) W32(a[3], (u32)k);
        return k == a[2] || k > 0;
    }
    if (!strcmp(n, "SetFilePointer")) {
        FILE *f = (FILE *)(uintptr_t)a[0];
        int whence = a[3] == 1 ? SEEK_CUR : (a[3] == 2 ? SEEK_END : SEEK_SET);
        fseek(f, (long)(int)a[1], whence);
        return (u32)ftell(f);
    }
    if (!strcmp(n, "GetFileSize")) {
        FILE *f = (FILE *)(uintptr_t)a[0]; long cur = ftell(f);
        fseek(f, 0, SEEK_END); long end = ftell(f); fseek(f, cur, SEEK_SET);
        if (a[1]) W32(a[1], 0);
        return (u32)end;
    }
    if (!strcmp(n, "GetFileTime")) { if (a[1]) W32(a[1], 0); if (a[2]) W32(a[2], 0); if (a[3]) W32(a[3], 0); return 1; }
    if (!strcmp(n, "FileTimeToLocalFileTime")) { if (a[1]) memcpy((void *)(uintptr_t)a[1], (void *)(uintptr_t)a[0], 8); return 1; }
    if (!strcmp(n, "FileTimeToDosDateTime")) { if (a[2]) W32(a[2], 0); return 1; }
    if (!strcmp(n, "GlobalFree") || !strcmp(n, "GlobalUnlock")) return 0;
    if (!strcmp(n, "GlobalLock")) return a[0];
    if (!strcmp(n, "LocalFree")) return 0;
    if (!strcmp(n, "FormatMessageA")) return 0;
    if (!strcmp(n, "lstrlenA")) return a[0] ? (u32)strlen((const char *)(uintptr_t)a[0]) : 0;
    if (!strcmp(n, "lstrcpyA")) { strcpy((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]); return a[0]; }
    fprintf(stderr, "wasm: unimplemented KERNEL32!%s\n", n);
    abort();
}

/* ---------- USER32 ---------- */
typedef struct { u32 hwnd, proc, wl[32]; int x, y, w, h; } WasmWnd;
static WasmWnd g_wnds[16];
static int g_wndn;
static struct { char name[64]; u32 proc; } g_classes[16];
static int g_classn;
static u32 g_hwnd_next = 0x1000;
static int g_have_main;

static WasmWnd *wnd_find(u32 h) { for (int i = 0; i < g_wndn; ++i) if (g_wnds[i].hwnd == h) return &g_wnds[i]; return NULL; }
static u32 class_proc(const char *name) { for (int i = 0; i < g_classn; ++i) if (!strcmp(g_classes[i].name, name)) return g_classes[i].proc; return 0; }

static u64 user32(u32 *a)
{
    const char *n = wasm_current->name;
    if (!strcmp(n, "LoadMenuA")) return 0x7000;
    if (!strcmp(n, "GetSubMenu")) return 0x7001;
    if (!strcmp(n, "GetMenuItemCount")) return 0;
    if (!strcmp(n, "SetMenu") || !strcmp(n, "InsertMenuA") || !strcmp(n, "EnableMenuItem") ||
        !strcmp(n, "ModifyMenuA") || !strcmp(n, "CheckMenuItem") || !strcmp(n, "DrawMenuBar") ||
        !strcmp(n, "DestroyMenu")) return 1;
    if (!strcmp(n, "SetCursor")) return 0x3000;
    if (!strcmp(n, "EnumDisplaySettingsA")) return 0;
    if (!strcmp(n, "ChangeDisplaySettingsA")) return 0;
    if (!strcmp(n, "GetKeyState")) return wasm_key_state(a[0]) ? 0x8000u : 0;
    if (!strcmp(n, "SetTimer")) { g_timer_id = a[1]; g_timer_ms = a[2]; g_timer_due = (u32)emscripten_get_now() + (a[2] ? a[2] : 1); return a[1] ? a[1] : 1; }
    if (!strcmp(n, "KillTimer")) { g_timer_id = 0; return 1; }
    if (!strcmp(n, "WindowFromPoint")) return g_hwnd;
    if (!strcmp(n, "SetRect")) { write_rect(a[0], (int)a[1], (int)a[2], (int)a[3], (int)a[4]); return 1; }
    if (!strcmp(n, "UnionRect") || !strcmp(n, "IntersectRect")) {
        if (!a[0] || !a[1] || !a[2]) return 0;
        int l = (int)R32(a[1]), t = (int)R32(a[1] + 4), r = (int)R32(a[1] + 8), b = (int)R32(a[1] + 12);
        int l2 = (int)R32(a[2]), t2 = (int)R32(a[2] + 4), r2 = (int)R32(a[2] + 8), b2 = (int)R32(a[2] + 12);
        if (n[0] == 'U') { if (l2 < l) l = l2; if (t2 < t) t = t2; if (r2 > r) r = r2; if (b2 > b) b = b2; }
        else { if (l2 > l) l = l2; if (t2 > t) t = t2; if (r2 < r) r = r2; if (b2 < b) b = b2; if (r <= l || b <= t) { l = t = r = b = 0; } }
        write_rect(a[0], l, t, r, b);
        return 1;
    }
    if (!strcmp(n, "IsRectEmpty")) { if (!a[0]) return 1; return (R32(a[0] + 8) <= R32(a[0]) || R32(a[0] + 12) <= R32(a[0] + 4)) ? 1 : 0; }
    if (!strcmp(n, "RegisterClassA")) {
        if (a[0]) {
            u32 proc = R32(a[0] + 4);
            const char *cn = (const char *)(uintptr_t)R32(a[0] + 36);
            if (cn && g_classn < 16) { snprintf(g_classes[g_classn].name, 64, "%s", cn); g_classes[g_classn].proc = proc; ++g_classn; }
            g_wndproc = proc;
        }
        return 1;
    }
    if (!strcmp(n, "CreateWindowExA")) {
        const char *cn = (const char *)(uintptr_t)a[1];
        u32 proc = cn ? class_proc(cn) : 0;
        u32 hwnd = g_hwnd_next++;
        int wx = (int)a[4], wy = (int)a[5], ww = (int)a[6], wh = (int)a[7];
        if (wx == (int)0x80000000) wx = 0;
        if (wy == (int)0x80000000) wy = 0;
        if (ww <= 0) ww = (int)g_dd_w;
        if (wh <= 0) wh = (int)g_dd_h;
        if (g_wndn < 16) { WasmWnd *w = &g_wnds[g_wndn++]; w->hwnd = hwnd; w->proc = proc; w->x = wx; w->y = wy; w->w = ww; w->h = wh; memset(w->wl, 0, sizeof w->wl); }
        if (g_have_main && proc) {
            u32 cs[12];
            cs[0] = a[11]; cs[1] = a[10]; cs[2] = a[9]; cs[3] = a[8];
            cs[4] = a[7]; cs[5] = a[6]; cs[6] = a[5]; cs[7] = a[4];
            cs[8] = a[3]; cs[9] = a[2]; cs[10] = a[1]; cs[11] = a[0];
            u32 m[4] = { hwnd, 0x0001, 0, (u32)(uintptr_t)cs };
            rt_guest_callback(proc, 4, m);
        }
        if (g_have_main && a[11]) { WasmWnd *w = wnd_find(hwnd); if (w) w->wl[0] = a[11]; }
        if (!g_have_main) {
            g_have_main = 1; g_hwnd = hwnd;
            g_main_obj = a[11];
        }
        return hwnd;
    }
    if (!strcmp(n, "DestroyWindow")) { WasmWnd *w = wnd_find(a[0]); if (w) w->hwnd = 0; return 1; }
    if (!strcmp(n, "ShowWindow")) return 1;
    if (!strcmp(n, "UpdateWindow")) { g_painted = 0; return 1; }
    if (!strcmp(n, "GetClientRect") || !strcmp(n, "GetWindowRect")) { write_rect(a[1] ? a[1] : a[0], 0, 0, (int)g_dd_w, (int)g_dd_h); return 1; }
    if (!strcmp(n, "MoveWindow") || !strcmp(n, "SetWindowTextA")) return 1;
    if (!strcmp(n, "InvalidateRect")) { g_painted = 0; return 1; }
    if (!strcmp(n, "GetWindowPlacement")) { if (a[1]) memset((void *)(uintptr_t)a[1], 0, 44); return 1; }
    if (!strcmp(n, "GetDC")) return 0x2000;
    if (!strcmp(n, "ReleaseDC")) return 1;
    if (!strcmp(n, "BeginPaint")) { if (a[1]) memset((void *)(uintptr_t)a[1], 0, 64); W32(a[1], 0x2000); return 0x2000; }
    if (!strcmp(n, "EndPaint")) return 1;
    if (!strcmp(n, "GetDesktopWindow") || !strcmp(n, "GetForegroundWindow")) return g_hwnd;
    if (!strcmp(n, "SetForegroundWindow") || !strcmp(n, "SetCapture") || !strcmp(n, "ReleaseCapture")) return 1;
    if (!strcmp(n, "GetSystemMetrics")) { if (a[0] == 0) return g_dd_w; if (a[0] == 1) return g_dd_h; return 0; }
    if (!strcmp(n, "LoadIconA") || !strcmp(n, "LoadCursorA")) return 0x3000;
    if (!strcmp(n, "SetWindowLongA")) { WasmWnd *w = wnd_find(a[0]); u32 *wl = w ? w->wl : g_wl; int idx = (int)a[1] / 4; if (idx >= 0 && idx < 32) { u32 old = wl[idx]; wl[idx] = a[2]; return old; } return 0; }
    if (!strcmp(n, "GetWindowLongA")) { WasmWnd *w = wnd_find(a[0]); u32 *wl = w ? w->wl : g_wl; int idx = (int)a[1] / 4; return (idx >= 0 && idx < 32) ? wl[idx] : 0; }
    if (!strcmp(n, "GetAsyncKeyState")) return wasm_key_state(a[0]) ? 0x8001u : 0;
    if (!strcmp(n, "GetCursorPos")) { if (a[0]) { W32(a[0], (u32)wasm_mouse_x); W32(a[0] + 4, (u32)wasm_mouse_y); } return 1; }
    if (!strcmp(n, "SetCursorPos")) { g_cursor_x = wasm_mouse_x = (int)a[0]; g_cursor_y = wasm_mouse_y = (int)a[1]; return 1; }
    if (!strcmp(n, "ScreenToClient") || !strcmp(n, "ClientToScreen")) return 1;
    if (!strcmp(n, "GetDoubleClickTime")) return 500;
    if (!strcmp(n, "ShowCursor")) return 0;
    if (!strcmp(n, "GetMenu") || !strcmp(n, "CheckMenuItem") || !strcmp(n, "DestroyMenu")) return 0;
    if (!strcmp(n, "WinHelpA")) return 1;
    if (!strcmp(n, "SystemParametersInfoA")) return 1;
    if (!strcmp(n, "MessageBoxA")) { if (a[1]) fprintf(stderr, "wasm MessageBox: %s\n", (const char *)(uintptr_t)a[1]); return 1; }
    if (!strcmp(n, "wsprintfA") || !strcmp(n, "wvsprintfA")) {
        const u32 *v = a + 2;
        wasm_vformat((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], v, 14);
        return (u32)strlen((char *)(uintptr_t)a[0]);
    }
    if (!strcmp(n, "PeekMessageA")) {
        u32 msg = a[0], filt_hwnd = a[1], fmin = a[2], fmax = a[3];
        if (msg) memset((void *)(uintptr_t)msg, 0, 28);
        if (g_timer_id && (int)((u32)emscripten_get_now() - g_timer_due) >= 0 && ((fmin == 0 && fmax == 0) || (0x113 >= fmin && 0x113 <= fmax))) {
            g_timer_due = (u32)emscripten_get_now() + (g_timer_ms ? g_timer_ms : 1);
            if (msg) { W32(msg, g_hwnd); W32(msg + 4, 0x113); W32(msg + 8, g_timer_id); }
            return 1;
        }
        int type, x, y, key;
        if (wasm_peek_event_ex(&type, &x, &y, &key, 0)) {
            u32 m = type == 0 ? 0x0200u : (type == 1 ? 0x0201u : (type == 2 ? 0x0202u : (type == 3 ? 0x0100u : (type == 4 ? 0x0101u : 0x0102u))));
            u32 target = g_hwnd;
            if (type <= 2) {
                for (int i = g_wndn - 1; i >= 0; --i) {
                    WasmWnd *w = &g_wnds[i];
                    if (w->hwnd && x >= w->x && x < w->x + w->w && y >= w->y && y < w->y + w->h) { target = w->hwnd; break; }
                }
            }
            int in_range = (!fmin && !fmax) || (fmin <= fmax && m >= fmin && m <= fmax);
            int in_hwnd = !filt_hwnd || filt_hwnd == target;
            if (!in_range || !in_hwnd) { emscripten_sleep(16); return 0; }
            wasm_peek_event_ex(&type, &x, &y, &key, 1);
            g_cursor_x = x; g_cursor_y = y;
            if (g_main_obj && !g_linked) { g_linked = 1; g_wnds[0].wl[0] = g_main_obj; W32(g_main_obj + 0x8cu, g_hwnd); }
            if (type == 1) g_keys[1] = 1;
            else if (type == 2) g_keys[1] = 0;
            else if (type == 3) g_keys[key & 0xff] = 1;
            else if (type == 4) g_keys[key & 0xff] = 0;
            if (msg) {
                u32 m = 0x0200, wp = 0;
                if (type == 0) wp = g_keys[1] ? 1u : 0;
                if (type == 1) { m = 0x0201; wp = 1; }
                else if (type == 2) m = 0x0202;
                else if (type == 3) { m = 0x0100; wp = (u32)key; }
                else if (type == 4) { m = 0x0101; wp = (u32)key; }
                else if (type == 5) { m = 0x0102; wp = (u32)key; }
                W32(msg + 0, target);
                W32(msg + 4, m);
                W32(msg + 8, wp);
                W32(msg + 12, type >= 3 ? 1u : (((u32)(y & 0xffff) << 16) | (u32)(x & 0xffff)));            }
            return 1;
        }
        if (!g_painted && ((!fmin && !fmax) || (0x000F >= fmin && 0x000F <= fmax))) {
            g_painted = 1;
            if (msg) { W32(msg + 0, g_hwnd); W32(msg + 4, 0x000F); }
            return 1;
        }
        emscripten_sleep(16);
        return 0;
    }
    if (!strcmp(n, "TranslateMessage")) return 0;
    if (!strcmp(n, "DispatchMessageA") || !strcmp(n, "SendMessageA")) {
        u32 msg = a[0];
        if (!strcmp(n, "SendMessageA")) {
            u32 cargs[4] = { a[0], a[1], a[2], a[3] };
            WasmWnd *w = wnd_find(a[0]);
            u32 proc = w ? w->proc : g_wndproc;
            return proc ? rt_guest_callback(proc, 4, cargs) : 0;
        }
        if (!msg) return 0;
        u32 cargs[4] = { R32(msg), R32(msg + 4), R32(msg + 8), R32(msg + 12) };
        WasmWnd *w = wnd_find(cargs[0]);
        u32 proc = w ? w->proc : g_wndproc;
        return proc ? rt_guest_callback(proc, 4, cargs) : 0;
    }
    if (!strcmp(n, "DefWindowProcA")) return 0;
    if (!strcmp(n, "OffsetRect")) { if (a[0]) { W32(a[0], R32(a[0]) + a[1]); W32(a[0] + 4, R32(a[0] + 4) + a[2]); W32(a[0] + 8, R32(a[0] + 8) + a[1]); W32(a[0] + 12, R32(a[0] + 12) + a[2]); } return 0; }
    fprintf(stderr, "wasm: unimplemented USER32!%s\n", n);
    abort();
}

/* ---------- GDI32 ---------- */
static u64 gdi32(u32 *a)
{
    const char *n = wasm_current->name;
    if (!strcmp(n, "CreatePalette")) {
        u32 lp = a[0];
        if (lp) {
            u32 count = R16(lp + 2);
            if (count > 256) count = 256;
            memcpy(g_pal, (const void *)(uintptr_t)(lp + 4), count * 4);
        }
        g_pal_ptr = (u32)(uintptr_t)g_pal;
        return 0x3000;
    }
    if (!strcmp(n, "RealizePalette")) return 0;
    if (!strcmp(n, "SelectPalette")) return 1;
    if (!strcmp(n, "SetDIBitsToDevice")) {
        u32 bmi = a[10], bits = a[9];
        int fw = bmi ? (int)R32(bmi + 4) : 640;
        int fh = bmi ? (int)R32(bmi + 8) : 480;
        int bpp = bmi ? (u16)R16(bmi + 14) : 32;
        int flip = fh > 0;
        if (fh < 0) fh = -fh;
        u32 stride = (u32)(((fw * bpp + 31) / 32) * 4);
        int xd = (int)a[1], yd = (int)a[2];
        int bw = a[3] ? (int)a[3] : fw, bh = a[4] ? (int)a[4] : fh;
        int xs = (int)a[5], ys = (int)a[6];
        if (a[7]) ys += (int)a[7];
        wasm_present(bits, fw, fh, bpp, stride, flip, xs, ys, bw, bh, xd, yd, (int)g_pal_ptr);
        return 1;
    }
    if (!strcmp(n, "StretchDIBits")) {
        u32 bmi = a[10], bits = a[9];
        int fw = bmi ? (int)R32(bmi + 4) : 640;
        int fh = bmi ? (int)R32(bmi + 8) : 480;
        int bpp = bmi ? (u16)R16(bmi + 14) : 32;
        int flip = fh > 0;
        if (fh < 0) fh = -fh;
        u32 stride = (u32)(((fw * bpp + 31) / 32) * 4);
        int xd = (int)a[1], yd = (int)a[2];
        int xs = (int)a[5], ys = (int)a[6];
        int bw = a[7] ? (int)a[7] : fw, bh = a[8] ? (int)a[8] : fh;
        wasm_present(bits, fw, fh, bpp, stride, flip, xs, ys, bw, bh, xd, yd, (int)g_pal_ptr);
        return 1;
    }
    if (!strcmp(n, "GetStockObject")) return 0x4000;
    if (!strcmp(n, "CreateDCA")) return 0x2000;
    if (!strcmp(n, "DeleteDC") || !strcmp(n, "DeleteObject") || !strcmp(n, "SelectPalette")) return 1;
    if (!strcmp(n, "GetDeviceCaps")) { if (a[1] == 8) return g_dd_w; if (a[1] == 10) return g_dd_h; if (a[1] == 12) return 32; if (a[1] == 14) return 1; if (a[1] == 104) return 256; return 1; }
    if (!strcmp(n, "PatBlt") || !strcmp(n, "StartPage") || !strcmp(n, "EndPage")) return 1;
    if (!strcmp(n, "StartDocA") || !strcmp(n, "AbortDoc") || !strcmp(n, "EndDoc")) return 1;
    fprintf(stderr, "wasm: unimplemented GDI32!%s\n", n);
    abort();
}

/* ---------- MSVCP80 basic_string (MSVC 8 layout: 16-byte buffer, size, capacity) ---------- */
static u32 str_data(u32 s) { return R32(s + 20) >= 16 ? R32(s) : s; }
static void str_init(u32 s) { if (!s) return; W8(s, 0); W32(s + 16, 0); W32(s + 20, 15); }
static void str_assign(u32 s, const char *p)
{
    size_t n = p ? strlen(p) : 0;
    if (n > 15) {
        char *d = (char *)malloc(n + 1);
        if (!d) abort();
        memcpy(d, p, n + 1);
        if (R32(s + 20) >= 16 && R32(s)) free((void *)(uintptr_t)R32(s));
        W32(s, (u32)(uintptr_t)d);
        W32(s + 20, (u32)n);
    } else {
        if (R32(s + 20) >= 16 && R32(s)) free((void *)(uintptr_t)R32(s));
        W32(s + 20, 15);
        if (n) memcpy((void *)(uintptr_t)s, p, n);
        W8(s + n, 0);
    }
    W32(s + 16, (u32)n);
}

static void str_append(u32 self, const char *p)
{
    size_t n = p ? strlen(p) : 0, old = R32(self + 16);
    if (!n) return;
    char *tmp = (char *)malloc(old + n + 1);
    if (!tmp) abort();
    memcpy(tmp, (const void *)(uintptr_t)str_data(self), old);
    memcpy(tmp + old, p, n + 1);
    str_assign(self, tmp);
    free(tmp);
}

static u64 msvcp80(u32 *a)
{
    const char *n = wasm_current->name;
    u32 self = wasm_current_ecx;
    if (strstr(n, "??$?M") && strstr(n, "basic_string")) {
        return strcmp((const char *)(uintptr_t)str_data(a[0]), (const char *)(uintptr_t)str_data(a[1])) < 0;
    }
    if (strstr(n, "??0") && strstr(n, "basic_string")) {
        str_init(self);
        if (strstr(n, "PBD")) str_assign(self, (const char *)(uintptr_t)a[0]);
        else if (strstr(n, "ABV01")) str_assign(self, (const char *)(uintptr_t)str_data(a[0]));
        return self;
    }
    if (strstr(n, "??1") && strstr(n, "basic_string")) {
        if (R32(self + 20) >= 16 && R32(self)) free((void *)(uintptr_t)R32(self));
        return 0;
    }
    if (strstr(n, "??4") && strstr(n, "basic_string")) {
        if (strstr(n, "PBD")) str_assign(self, (const char *)(uintptr_t)a[0]);
        else str_assign(self, (const char *)(uintptr_t)str_data(a[0]));
        return self;
    }
    if (strstr(n, "?append@") && strstr(n, "basic_string")) {
        str_append(self, (const char *)(uintptr_t)str_data(a[0]));
        return self;
    }
    if (strstr(n, "?c_str@")) return str_data(self);
    if (strstr(n, "??A") && strstr(n, "basic_string")) return str_data(self) + a[0];
    if (strstr(n, "?size@") || strstr(n, "?length@")) return R32(self + 16);
    if (strstr(n, "?empty@")) return R32(self + 16) == 0;
    fprintf(stderr, "wasm: unimplemented MSVCP80!%s\n", n);
    abort();
}

/* ---------- OpenAL / WINMM / SHELL32 / OLE32 / FreeType ---------- */
EM_JS(int, wasm_al, (int op, int a0, int a1, int a2, int a3, int a4), {
    var A = Module.__al;
    if (!A) A = Module.__al = { ctx: null, b: {}, s: {}, nb: 1, ns: 1, plays: 0, pcm: 0, bufplay: 0 };
    function actx() {
        if (!A.ctx) {
            var C = window.AudioContext || window.webkitAudioContext;
            if (!C) return null;
            A.ctx = new C();
        }
        return A.ctx;
    }
    function fv(u) { var f = new Float32Array(1); new Uint32Array(f.buffer)[0] = u >>> 0; return f[0]; }
    function mkbuf(id) {
        var b = A.b[id]; if (!b || !A.ctx) return null;
        var bytes = b.bits >> 3, frames = b.size / (b.ch * bytes);
        if (!frames) return null;
        var ab = A.ctx.createBuffer(b.ch, frames, b.freq), pcm = b.pcm;
        for (var c = 0; c < b.ch; ++c) {
            var out = ab.getChannelData(c), o = c * bytes;
            if (b.bits == 8) { for (var i = 0; i < frames; ++i) { out[i] = (pcm[o] - 128) / 128; o += b.ch; } }
            else { for (var i = 0; i < frames; ++i) { out[i] = (((pcm[o] | (pcm[o + 1] << 8)) << 16) >> 16) / 32768; o += b.ch * 2; } }
        }
        return ab;
    }
    function stop(s) { if (s.node) { s.node.onended = null; try { s.node.stop(); } catch (e) {} s.node = null; } }
    function step(s) {
        if (s.state != 0x1012) return;
        if (s.playAt >= s.queue.length) { s.state = 0x1014; return; }
        var ab = mkbuf(s.queue[s.playAt++]);
        if (!ab) { step(s); return; }
        var node = A.ctx.createBufferSource(), gain = A.ctx.createGain();
        node.buffer = ab; node.playbackRate.value = s.pitch; gain.gain.value = s.gain;
        node.connect(gain); gain.connect(A.ctx.destination);
        node.onended = function () { if (s.node === node) { s.node = null; ++s.processed; ++A.bufplay; step(s); } };
        s.node = node; ++A.plays; node.start();
    }
    switch (op) {
    case 1:
        for (var i = 0; i < a0; ++i) HEAP32[(a1 >> 2) + i] = A.nb++;
        return 1;
    case 2:
        for (var i = 0; i < a0; ++i) { var id = A.ns++; HEAP32[(a1 >> 2) + i] = id; A.s[id] = { state: 0x1011, gain: 1, pitch: 1, loop: false, buffer: 0, queue: [], playAt: 0, processed: 0, node: null }; }
        return 1;
    case 3:
        for (var i = 0; i < a0; ++i) delete A.b[HEAP32[(a1 >> 2) + i]];
        return 1;
    case 4:
        for (var i = 0; i < a0; ++i) { var id = HEAP32[(a1 >> 2) + i], s = A.s[id]; if (s) { stop(s); delete A.s[id]; } }
        return 1;
    case 5:
        var fmt = a1, ch = fmt >= 0x1102 ? 2 : 1, bits = (fmt == 0x1100 || fmt == 0x1102) ? 8 : 16;
        A.b[a0] = { pcm: HEAPU8.slice(a2, a2 + a3), size: a3, freq: a4 || 22050, bits: bits, ch: ch };
        ++A.pcm;
        return 1;
    case 6:
        var s = A.s[a0]; if (!s) return 0;
        if (a1 == 0x1009) { s.buffer = a2; s.queue = []; s.playAt = 0; s.processed = 0; s.state = 0x1011; }
        else if (a1 == 0x1007) s.loop = !!a2;
        return 1;
    case 7:
        var s = A.s[a0]; if (!s) return 0;
        if (a1 == 0x100a) s.gain = fv(a2); else if (a1 == 0x1003) s.pitch = fv(a2);
        return 1;
    case 8:
        return 1;
    case 11:
        var s = A.s[a0]; if (!s) return 0;
        var c = actx(); if (!c) return 0;
        if (c.state == "suspended") c.resume();
        if (s.state == 0x1012) return 1;
        stop(s); s.state = 0x1012; s.playAt = 0; s.processed = 0;
        if (!s.queue.length && s.buffer) s.queue = [s.buffer];
        if (s.loop && s.buffer) {
            var ab = mkbuf(s.buffer); if (!ab) return 0;
            var node = c.createBufferSource(), gain = c.createGain();
            node.buffer = ab; node.loop = true; node.playbackRate.value = s.pitch; gain.gain.value = s.gain;
            node.connect(gain); gain.connect(c.destination);
            s.node = node; ++A.plays; node.start();
        } else step(s);
        return 1;
    case 12:
        var s = A.s[a0]; if (!s) return 0;
        stop(s); s.state = 0x1014; s.playAt = 0; s.processed = 0; s.queue = [];
        return 1;
    case 13:
        var s = A.s[a0]; if (!s) return 0;
        stop(s); s.state = 0x1013;
        return 1;
    case 14:
        var s = A.s[a0]; if (!s) return 0;
        stop(s); s.playAt = 0; s.processed = 0; s.state = 0x1011;
        return 1;
    case 15:
        var s = A.s[a0]; if (!s) return 0;
        for (var i = 0; i < a1; ++i) s.queue.push(HEAP32[(a2 >> 2) + i]);
        if (s.state == 0x1012 && !s.node) step(s);
        return 1;
    case 16:
        var s = A.s[a0]; if (!s) return 0;
        var n = 0;
        while (n < a1 && s.processed > 0) { HEAP32[(a2 >> 2) + n] = s.queue.shift(); --s.processed; --s.playAt; ++n; }
        return n;
    case 17:
        if (a0 == 0) {
            var s = A.s[a1]; if (!s) { HEAP32[a3 >> 2] = 0; return 0; }
            HEAP32[a3 >> 2] = a2 == 0x1010 ? s.state : (a2 == 0x1015 ? s.queue.length : (a2 == 0x1016 ? s.processed : 0));
        } else {
            var b = A.b[a1]; if (!b) { HEAP32[a3 >> 2] = 0; return 0; }
            HEAP32[a3 >> 2] = a2 == 0x2001 ? b.freq : (a2 == 0x2002 ? b.bits : (a2 == 0x2003 ? b.ch : (a2 == 0x2004 ? b.size : 0)));
        }
        return 1;
    case 18:
        var s = A.s[a0]; if (!s) return 0;
        HEAPF32[a2 >> 2] = a1 == 0x100a ? s.gain : (a1 == 0x1003 ? s.pitch : 0);
        return 1;
    case 19:
        var c = actx(); if (!c) return 0;
        if (c.state == "suspended") c.resume();
        return 1;
    }
    return 0;
});

EM_JS(int, wasm_playsound, (int ptr, int flags), {
    if (!ptr || !(flags & 4)) return 0;
    var n = HEAPU32[(ptr + 4) >> 2] + 8;
    if (n < 44 || n > 67108864) return 0;
    var A = Module.__al;
    if (!A) A = Module.__al = { ctx: null, b: {}, s: {}, nb: 1, ns: 1, plays: 0, pcm: 0, bufplay: 0 };
    if (!A.ctx) {
        var C = window.AudioContext || window.webkitAudioContext;
        if (!C) return 0;
        A.ctx = new C();
    }
    if (A.ctx.state == "suspended") A.ctx.resume();
    var bytes = HEAPU8.slice(ptr, ptr + n).buffer, ctx = A.ctx;
    ctx.decodeAudioData(bytes).then(function (buf) {
        var src = ctx.createBufferSource();
        src.buffer = buf; src.connect(ctx.destination); src.start(); ++A.plays;
    }).catch(function () {});
    return 1;
});

static u64 openal(u32 *a)
{
    const char *n = wasm_current->name;
    if (!strcmp(n, "alGenBuffers")) { wasm_al(1, (int)a[0], (int)a[1], 0, 0, 0); return 0; }
    if (!strcmp(n, "alGenSources")) { wasm_al(2, (int)a[0], (int)a[1], 0, 0, 0); return 0; }
    if (!strcmp(n, "alDeleteBuffers")) { wasm_al(3, (int)a[0], (int)a[1], 0, 0, 0); return 0; }
    if (!strcmp(n, "alDeleteSources")) { wasm_al(4, (int)a[0], (int)a[1], 0, 0, 0); return 0; }
    if (!strcmp(n, "alBufferData")) { wasm_al(5, (int)a[0], (int)a[1], (int)a[2], (int)a[3], (int)a[4]); return 0; }
    if (!strcmp(n, "alSourcei")) { wasm_al(6, (int)a[0], (int)a[1], (int)a[2], 0, 0); return 0; }
    if (!strcmp(n, "alSourcef")) { wasm_al(7, (int)a[0], (int)a[1], (int)a[2], 0, 0); return 0; }
    if (!strcmp(n, "alSource3f") || !strcmp(n, "alSourcefv")) return 0;
    if (!strcmp(n, "alSourcePlay")) { wasm_al(11, (int)a[0], 0, 0, 0, 0); return 0; }
    if (!strcmp(n, "alSourceStop")) { wasm_al(12, (int)a[0], 0, 0, 0, 0); return 0; }
    if (!strcmp(n, "alSourcePause")) { wasm_al(13, (int)a[0], 0, 0, 0, 0); return 0; }
    if (!strcmp(n, "alSourceRewind")) { wasm_al(14, (int)a[0], 0, 0, 0, 0); return 0; }
    if (!strcmp(n, "alSourceQueueBuffers")) { wasm_al(15, (int)a[0], (int)a[1], (int)a[2], 0, 0); return 0; }
    if (!strcmp(n, "alSourceUnqueueBuffers")) return wasm_al(16, (int)a[0], (int)a[1], (int)a[2], 0, 0);
    if (!strcmp(n, "alGetSourcei")) { wasm_al(17, 0, (int)a[0], (int)a[1], (int)a[2], 0); return 0; }
    if (!strcmp(n, "alGetBufferi")) { wasm_al(17, 1, (int)a[0], (int)a[1], (int)a[2], 0); return 0; }
    if (!strcmp(n, "alGetSourcef")) { wasm_al(18, (int)a[0], (int)a[1], (int)a[2], 0, 0); return 0; }
    if (!strcmp(n, "alGetListenerfv")) { if (a[1] && a[0] == 0x1004) { W32(a[1], 0); W32(a[1] + 4, 0); W32(a[1] + 8, 0); } return 0; }
    if (!strcmp(n, "alGetError")) return 0;
    if (!strcmp(n, "alGetString")) return (u32)(uintptr_t)"OpenAL 1.1 wasm";
    if (!strcmp(n, "alListenerfv")) return 0;
    if (!strcmp(n, "alcOpenDevice")) return 1;
    if (!strcmp(n, "alcCreateContext")) return 2;
    if (!strcmp(n, "alcMakeContextCurrent")) return 1;
    if (!strcmp(n, "alcGetCurrentContext")) return 2;
    if (!strcmp(n, "alcGetContextsDevice")) return 1;
    if (!strcmp(n, "alcDestroyContext") || !strcmp(n, "alcCloseDevice")) return 1;
    fprintf(stderr, "wasm: unimplemented OpenAL32!%s\n", n);
    abort();
}

static u64 winmm(u32 *a)
{
    (void)a;
    const char *n = wasm_current->name;
    if (!strcmp(n, "joyGetNumDevs")) return 0;
    if (!strcmp(n, "joyGetPos") || !strcmp(n, "joyGetPosEx") || !strcmp(n, "joyGetDevCapsA")) return 1;
    if (!strcmp(n, "joySetCapture") || !strcmp(n, "joySetThreshold") || !strcmp(n, "joyReleaseCapture")) return 1;
    if (!strcmp(n, "waveOutGetNumDevs")) return 1;
    if (!strcmp(n, "waveOutGetDevCapsA")) { if (a[1] && a[2]) memset((void *)(uintptr_t)a[1], 0, a[2]); return 0; }
    if (!strcmp(n, "waveOutOpen")) {
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
    if (!strcmp(n, "waveOutGetPosition")) { if (a[1]) { memset((void *)(uintptr_t)a[1], 0, 16); W32(a[1], 1); W32(a[1] + 4, (u32)emscripten_get_now()); } return 0; }
    if (!strcmp(n, "mciSendCommandA")) return 266;   /* MCIERR_DEVICE_NOT_INSTALLED */
    if (!strcmp(n, "mmioOpenA")) {
        u32 info = a[1];
        if (info && R32(info + 4) == 0x204d454du) {
            for (int i = 0; i < 8; ++i) if (!g_mmio[i].used) {
                g_mmio[i].used = 1; g_mmio[i].base = R32(info + 0x18); g_mmio[i].size = R32(info + 0x14); g_mmio[i].pos = 0; g_mmio[i].info = info;
                fprintf(stderr, "wasmSND mmioOpen mem base=%08x size=%u\n", g_mmio[i].base, g_mmio[i].size);
                return 0x4d4d0000u | (u32)i;
            }
        }
        return 0;
    }
    if (!strcmp(n, "mmioDescend")) {
        u32 h = a[0], ck = a[1], par = a[2], fl = a[3];
        u32 mi = h - 0x4d4d0000u;
        if (!ck || mi >= 8 || !g_mmio[mi].used) return 0x104;
        Mmio *m = &g_mmio[mi];
        if (fl & 0x20u) {
            u32 want = R32(ck + 8), p = m->pos;
            if (p + 12 > m->size || R32(m->base + p) != 0x46464952u) return 0x104;
            u32 sz = R32(m->base + p + 4);
            if (sz > m->size - p - 8) sz = m->size - p - 8;
            W32(ck, 0x46464952u); W32(ck + 4, sz); W32(ck + 8, R32(m->base + p + 8)); W32(ck + 0xc, p + 8); W32(ck + 0x10, 0);
            m->pos = p + 12;
            return R32(ck + 8) == want ? 0 : 0x104;
        }
        if (fl & 0x10u) {
            u32 want = R32(ck), base = par ? R32(par + 0xc) : m->pos, end = par ? base + R32(par + 4) : m->size;
            if (par && R32(par) == 0x46464952u) base += 4;
            if (base < m->pos) base = m->pos;
            if (end > m->size) end = m->size;
            for (u32 p = base; p + 8 <= end; ) {
                u32 id = R32(m->base + p), sz = R32(m->base + p + 4);
                if (id == want) {
                    W32(ck, id); W32(ck + 4, sz); W32(ck + 0xc, p + 8); W32(ck + 0x10, 0);
                    m->pos = p + 8;
                    if (want == 0x61746164u) fprintf(stderr, "wasmSND mmio data=%u\n", sz);
                    return 0;
                }
                p += 8 + sz + (sz & 1u);
            }
            return 0x104;
        }
        return 0;
    }
    if (!strcmp(n, "mmioAscend")) {
        u32 h = a[0], ck = a[1], mi = h - 0x4d4d0000u;
        if (ck && mi < 8 && g_mmio[mi].used) { u32 p = R32(ck + 0xc) + R32(ck + 4); g_mmio[mi].pos = p + (p & 1u); }
        return 0;
    }
    if (!strcmp(n, "mmioRead")) {
        u32 h = a[0], dst = a[1], len = a[2], mi = h - 0x4d4d0000u;
        if (mi >= 8 || !g_mmio[mi].used) return 0;
        Mmio *m = &g_mmio[mi];
        u32 n2 = len < m->size - m->pos ? len : m->size - m->pos;
        if (n2 && dst) memcpy((void *)(uintptr_t)dst, (void *)(uintptr_t)(m->base + m->pos), n2);
        m->pos += n2;
        return n2;
    }
    if (!strcmp(n, "mmioSeek")) {
        u32 h = a[0], off = a[1], mi = h - 0x4d4d0000u;
        if (mi < 8 && g_mmio[mi].used) {
            Mmio *m = &g_mmio[mi];
            if (a[2] == 0) m->pos = off; else if (a[2] == 1) m->pos += (i32)off; else m->pos = m->size + (i32)off;
            if (m->pos > m->size) m->pos = m->size;
            return m->pos;
        }
        return 0xffffffffu;
    }
    if (!strcmp(n, "mmioClose")) {
        u32 h = a[0], mi = h - 0x4d4d0000u;
        if (mi < 8) g_mmio[mi].used = 0;
        return 0;
    }
    if (!strcmp(n, "timeGetDevCaps")) {
        if (a[0]) { W32(a[0], 1); W32(a[0] + 4, 1000); }
        return 0;
    }
    if (!strcmp(n, "timeGetTime")) return (u32)(emscripten_get_now());
    if (!strcmp(n, "timeBeginPeriod") || !strcmp(n, "timeEndPeriod")) return 0;
    if (!strcmp(n, "PlaySoundA")) return (u32)wasm_playsound((int)a[0], (int)a[2]);
    fprintf(stderr, "wasm: unimplemented WINMM!%s\n", n);
    abort();
}

/* ---------- DirectDraw ---------- */
static u64 dd_ok(u32 *a) { (void)a; return 0; }
static u64 dd_mode(u32 *a)
{
    g_dd_w = a[1]; g_dd_h = a[2]; g_dd_bpp = a[3];
    fprintf(stderr, "wasm: DirectDraw display mode %ux%ux%u\n", a[1], a[2], a[3]);
    return 0;
}
static u64 dd_unsupported(u32 *a)
{
    (void)a;
    fprintf(stderr, "wasm: unimplemented IDirectDraw2 method\n");
    abort();
}
static u32 ddraw_object(void)
{
    static u32 obj, vt;
    if (!obj) {
        vt = (u32)(uintptr_t)malloc(22 * 4);
        for (u32 i = 0; i < 22; ++i) W32(vt + i * 4, api_add_emu("ddraw", "method", dd_unsupported, 1, 0));
        W32(vt + 0x08, api_add_emu("ddraw", "Release", dd_ok, 1, 0));
        W32(vt + 0x48, api_add_emu("ddraw", "Initialize", dd_ok, 1, 0));
        W32(vt + 0x4c, api_add_emu("ddraw", "RestoreDisplayMode", dd_ok, 1, 0));
        W32(vt + 0x50, api_add_emu("ddraw", "SetCooperativeLevel", dd_ok, 3, 0));
        W32(vt + 0x54, api_add_emu("ddraw", "SetDisplayMode", dd_mode, 6, 0));
        obj = (u32)(uintptr_t)malloc(4);
        W32(obj, vt);
    }
    return obj;
}

static u64 wasm_cocreate(u32 *a)
{
    static const unsigned char clsid_dd[16] = {0xe0,0x0e,0xb7,0xd7,0x40,0x43,0xcf,0x11,0xb0,0x63,0x00,0x20,0xaf,0xc2,0xcd,0x35};
    static const unsigned char iid_dd2[16] = {0xe0,0xf3,0xa6,0xb3,0x43,0x2b,0xcf,0x11,0xa2,0xde,0x00,0xaa,0x00,0xb9,0x33,0x56};
    if (a[0] && a[3] && !memcmp((const void *)(uintptr_t)a[0], clsid_dd, 16) &&
        !memcmp((const void *)(uintptr_t)a[3], iid_dd2, 16)) {
        if (a[4]) W32(a[4], ddraw_object());
        return 0;
    }
    return 0x80040111u;   /* CLASS_E_CLASSNOTAVAILABLE */
}

static u64 other(u32 *a)
{
    const char *n = wasm_current->name;
    if (!strcmp(n, "SHGetMalloc") || !strcmp(n, "SHGetFileInfoA") || !strcmp(n, "Shell_NotifyIconA")) return 0;
    if (!strcmp(n, "SHGetSpecialFolderLocation")) {
        u32 pidl = (u32)(uintptr_t)calloc(1, 8);
        if (a[2]) W32(a[2], pidl);
        return 0;
    }
    if (!strcmp(n, "SHGetPathFromIDListA")) {
        if (a[1]) strcpy((char *)(uintptr_t)a[1], "/data");
        return 1;
    }
    if (!strcmp(n, "ShellExecuteA")) return 33;
    if (!strcmp(n, "DragAcceptFiles") || !strcmp(n, "DragFinish")) return 0;
    if (!strcmp(n, "DragQueryFileA")) return 0;
    if (!strcmp(n, "OleInitialize") || !strcmp(n, "OleUninitialize")) return 0;
    if (!strcmp(n, "CoInitialize") || !strcmp(n, "CoUninitialize")) return 0;
    if (!strcmp(n, "CoCreateInstance")) return wasm_cocreate(a);
    if (!strncmp(n, "Sym", 3) || !strncmp(n, "Image", 5)) return 0;
    if (!strcmp(n, "DocumentPropertiesA") || !strcmp(n, "ClosePrinter") || !strcmp(n, "OpenPrinterA")) return 0;
    if (!strcmp(n, "GetOpenFileNameA")) return 0;
    if (!strcmp(n, "PrintDlgA")) return 0;
    if (!strcmp(n, "StackWalk")) return 0;
    fprintf(stderr, "wasm: unimplemented %s!%s\n", wasm_current->module, n);
    abort();
}

/* ---------- MSVCR80 ---------- */
static u32 wasm_rtdynamiccast(void *inptr, u32 vfdelta, u32 S, u32 T, int is_ref)
{
    (void)vfdelta; (void)S;
    if (!inptr) return 0;
    u32 vt = R32((u32)(uintptr_t)inptr);
    u32 col = vt ? R32(vt - 4) : 0;
    if (!col || R32(col) != 0) return is_ref ? (abort(), 0) : 0;
    u32 chd = R32(col + 16);
    u32 n = chd ? R32(chd + 8) : 0, arr = chd ? R32(chd + 12) : 0;
    for (u32 i = 0; i < n; ++i) {
        u32 bcd = R32(arr + i * 4);
        if (!bcd || R32(bcd) != T) continue;
        i32 pdisp = (i32)R32(bcd + 12);
        u32 adj = (u32)(uintptr_t)inptr - R32(col + 4) + R32(bcd + 8);
        if (pdisp >= 0) adj = R32(adj + (u32)pdisp) + R32(bcd + 16);
        return adj;
    }
    if (is_ref) { fprintf(stderr, "wasm: __RTDynamicCast failed for %s\n", (const char *)(uintptr_t)(T + 8)); abort(); }
    return 0;
}

static int wild_match(const char *pat, const char *name)
{
    const char *star = NULL, *mark = NULL;
    while (*name) {
        if (*pat == '?' || tolower((unsigned char)*pat) == tolower((unsigned char)*name)) { ++pat; ++name; }
        else if (*pat == '*') { star = pat++; mark = name; }
        else if (star) { pat = star + 1; name = ++mark; }
        else return 0;
    }
    while (*pat == '*') ++pat;
    return *pat == 0;
}

typedef struct { DIR *d; char dir[900]; char pat[260]; } FindIt;
static FindIt g_find[8];

static int find_fill(int slot, u32 info)
{
    FindIt *f = &g_find[slot];
    struct dirent *e;
    while ((e = readdir(f->d))) {
        if (!strcmp(e->d_name, ".") || !strcmp(e->d_name, "..")) continue;
        if (!wild_match(f->pat, e->d_name)) continue;
        char full[1200];
        snprintf(full, sizeof full, "%s/%s", f->dir, e->d_name);
        struct stat st;
        int ok = stat(wasm_path(full), &st) == 0;
        memset((void *)(uintptr_t)info, 0, 296);
        W32(info, ok ? (S_ISDIR(st.st_mode) ? 0x10u : 0x20u) : 0x20u);
        W32(info + 32, ok ? (u32)st.st_size : 0);
        snprintf((char *)(uintptr_t)(info + 36), 260, "%s", e->d_name);
        return 1;
    }
    return 0;
}

static u32 find_first(const char *spec, u32 info)
{
    char dir[900];
    const char *pat = spec;
    const char *bs = strrchr(spec, '\\'), *fs = strrchr(spec, '/');
    if (fs > bs) bs = fs;
    if (bs) { size_t l = (size_t)(bs - spec); if (l >= sizeof dir) l = sizeof dir - 1; memcpy(dir, spec, l); dir[l] = 0; pat = bs + 1; }
    else strcpy(dir, ".");
    DIR *d = opendir(wasm_path(dir));
    if (!d && path_is_rel(dir)) {
        char alt[1024];
        if (path_fallback(dir, alt, sizeof alt)) d = opendir(alt);
    }
    if (!d) { g_last_error = 2; return 0xFFFFFFFFu; }
    int slot = -1;
    for (int i = 0; i < 8; ++i) if (!g_find[i].d) { slot = i; break; }
    if (slot < 0) { closedir(d); return 0xFFFFFFFFu; }
    g_find[slot].d = d;
    snprintf(g_find[slot].dir, sizeof g_find[slot].dir, "%s", dir);
    snprintf(g_find[slot].pat, sizeof g_find[slot].pat, "%s", pat);
    if (find_fill(slot, info)) return (u32)slot + 1;
    closedir(d);
    g_find[slot].d = NULL;
    return 0xFFFFFFFFu;
}

static u64 msvcr80(u32 *a)
{
    const char *n = wasm_current->name;
#define S(x) (!strcmp(n, x))
    if (S("memset")) return (u64)(uintptr_t)memset((void *)(uintptr_t)a[0], (int)a[1], a[2]);
    if (S("memcpy")) return (u64)(uintptr_t)memcpy((void *)(uintptr_t)a[0], (void *)(uintptr_t)a[1], a[2]);
    if (S("memmove")) return (u64)(uintptr_t)memmove((void *)(uintptr_t)a[0], (void *)(uintptr_t)a[1], a[2]);
    if (S("memmove_s")) {
        if (!a[0] || (!a[2] && a[3]) || a[1] < a[3]) { if (a[0] && a[1]) memset((void *)(uintptr_t)a[0], 0, a[1]); return 22; }
        memmove((void *)(uintptr_t)a[0], (void *)(uintptr_t)a[2], a[3]);
        return 0;
    }
    if (S("memcmp")) return (u32)memcmp((void *)(uintptr_t)a[0], (void *)(uintptr_t)a[1], a[2]);
    if (S("memchr")) return (u32)(uintptr_t)memchr((void *)(uintptr_t)a[0], (int)a[1], a[2]);
    if (S("strlen")) return (u32)strlen((const char *)(uintptr_t)a[0]);
    if (S("strcpy")) { strcpy((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]); return a[0]; }
    if (S("strncpy")) { strncpy((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], a[2]); return a[0]; }
    if (S("strcat")) { strcat((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]); return a[0]; }
    if (S("strcmp")) return (u32)(int)strcmp((const char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]);
    if (S("strncmp")) return (u32)(int)strncmp((const char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], a[2]);
    if (S("_stricmp")) return (u32)(int)strcasecmp((const char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]);
    if (S("_strupr")) { char *p = (char *)(uintptr_t)a[0]; for (char *q = p; q && *q; ++q) *q = (char)toupper((unsigned char)*q); return a[0]; }
    if (S("strchr")) return (u32)(uintptr_t)strchr((const char *)(uintptr_t)a[0], (int)a[1]);
    if (S("strrchr")) return (u32)(uintptr_t)strrchr((const char *)(uintptr_t)a[0], (int)a[1]);
    if (S("strstr")) return (u32)(uintptr_t)strstr((const char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]);
    if (S("strdup") || S("_strdup")) { char *d = strdup((const char *)(uintptr_t)a[0]); return (u32)(uintptr_t)d; }
    if (S("toupper")) return (u32)toupper((int)a[0]);
    if (S("tolower")) return (u32)tolower((int)a[0]);
    if (S("isdigit")) return (u32)isdigit((int)a[0]);
    if (S("islower")) return (u32)islower((int)a[0]);
    if (S("isspace")) return (u32)isspace((int)a[0]);
    if (S("malloc") || S("??2@YAPAXI@Z")) return (u32)(uintptr_t)malloc(a[0]);
    if (S("calloc")) return (u32)(uintptr_t)calloc(a[0], a[1]);
    if (S("realloc")) return (u32)(uintptr_t)realloc((void *)(uintptr_t)a[0], a[1]);
    if (S("free") || S("??3@YAXPAX@Z")) { free((void *)(uintptr_t)a[0]); return 0; }
    if (S("abs")) return (u32)abs((int)a[0]);
    if (S("atoi")) return (u32)atoi((const char *)(uintptr_t)a[0]);
    if (S("atol")) return (u32)atol((const char *)(uintptr_t)a[0]);
    if (S("_itoa")) {
        snprintf((char *)(uintptr_t)a[0], 32, "%d", (int)a[1]);
        if (a[2]) W8(a[2], 10);
        return a[0];
    }
    if (S("sprintf")) { wasm_vformat((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], a + 2, 16); return (u32)strlen((char *)(uintptr_t)a[0]); }
    if (S("vsprintf")) { wasm_vformat((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], (const u32 *)(uintptr_t)a[2], 16); return (u32)strlen((char *)(uintptr_t)a[0]); }
    if (S("fopen")) {
        const char *gp = (const char *)(uintptr_t)a[0];
        const char *path = wasm_path(gp);
        errno = 0;
        FILE *f = fopen(path, (const char *)(uintptr_t)a[1]);
        char alt[1024];
        if (!f && path_fallback(gp, alt, sizeof alt)) f = fopen(alt, (const char *)(uintptr_t)a[1]);
        if (f) { errno = 0; file_add(f); }
        return (u32)(uintptr_t)f;
    }
    if (S("fclose")) { FILE *f = (FILE *)(uintptr_t)a[0]; if (!f) { errno = 22; return 0xFFFFFFFFu; } if (!file_take(f)) { errno = 9; return 0xFFFFFFFFu; } int r = fclose(f); if (!r) errno = 0; return (u32)r; }
    if (S("fread")) {
        FILE *f = (FILE *)(uintptr_t)a[3]; if (!f) { errno = 22; return 0; } size_t r = fread((void *)(uintptr_t)a[0], a[1], a[2], f);
        if (r || !ferror(f)) errno = 0;
        return (u32)r;
    }
    if (S("fwrite")) return (u32)fwrite((const void *)(uintptr_t)a[0], a[1], a[2], (FILE *)(uintptr_t)a[3]);
    if (S("fseek")) {
        FILE *f = (FILE *)(uintptr_t)a[0]; if (!f) { errno = 22; return 0xFFFFFFFFu; } int r = fseek(f, (long)(int)a[1], (int)a[2]);
        if (!r) errno = 0;
        return (u32)r;
    }
    if (S("fgetpos")) {
        long p = ftell((FILE *)(uintptr_t)a[0]);
        if (a[1]) { W32(a[1], (u32)p); W32(a[1] + 4, (u32)((u64)p >> 32)); }
        return p < 0 ? 0xFFFFFFFFu : 0;
    }
    if (S("fsetpos")) {
        u64 p = (u64)R32(a[1]) | ((u64)R32(a[1] + 4) << 32);
        return (u32)fseek((FILE *)(uintptr_t)a[0], (long)p, SEEK_SET);
    }
    if (S("ftell")) { FILE *f = (FILE *)(uintptr_t)a[0]; if (!f) { errno = 22; return 0xFFFFFFFFu; } long r = ftell(f); if (r >= 0) errno = 0; return (u32)r; }
    if (S("feof")) return (u32)feof((FILE *)(uintptr_t)a[0]);
    if (S("fgetc")) return (u32)fgetc((FILE *)(uintptr_t)a[0]);
    if (S("fputc") || S("putc")) return (u32)fputc((int)a[0], (FILE *)(uintptr_t)a[1]);
    if (S("fputs")) return (u32)fputs((const char *)(uintptr_t)a[0], (FILE *)(uintptr_t)a[1]);
    if (S("fprintf")) { char buf[4096]; wasm_vformat(buf, (const char *)(uintptr_t)a[1], a + 2, 12); return (u32)fprintf((FILE *)(uintptr_t)a[0], "%s", buf); }
    if (S("fscanf")) return (u32)wasm_vscanf(a, 1);
    if (S("sscanf")) return (u32)wasm_vscanf(a, 0);
    if (S("fflush")) return (u32)fflush((FILE *)(uintptr_t)a[0]);
    if (S("_mkdir")) return (u32)mkdir(wasm_path((const char *)(uintptr_t)a[0]), 0777);
    if (S("_rmdir")) return (u32)rmdir(wasm_path((const char *)(uintptr_t)a[0]));
    if (S("_chdir")) {
        char p[1024];
        snprintf(p, sizeof p, "%s", wasm_path((const char *)(uintptr_t)a[0]));
        int r = chdir(p);
        if (r == 0) snprintf(g_cwd, sizeof g_cwd, "%s", p);
        return (u32)r;
    }
    if (S("remove")) return (u32)remove(wasm_path((const char *)(uintptr_t)a[0]));
    if (S("rename")) return (u32)rename(wasm_path((const char *)(uintptr_t)a[0]), wasm_path((const char *)(uintptr_t)a[1]));
    if (S("_lock") || S("_unlock")) return 0;
    if (S("_strdate")) { strcpy((char *)(uintptr_t)a[0], "01/01/00"); return 0; }
    if (S("_findfirst64i32")) return find_first((const char *)(uintptr_t)a[0], a[1]);
    if (S("_findnext64i32")) {
        int slot = (int)a[0] - 1;
        if (slot < 0 || slot >= 8 || !g_find[slot].d) return 0xFFFFFFFFu;
        return find_fill(slot, a[1]) ? 0 : 0xFFFFFFFFu;
    }
    if (S("_findclose")) {
        int slot = (int)a[0] - 1;
        if (slot >= 0 && slot < 8 && g_find[slot].d) { closedir(g_find[slot].d); g_find[slot].d = NULL; }
        return 0;
    }
    if (S("_time64")) {
        uint64_t t = (uint64_t)time(NULL);
        if (a[0]) { W32(a[0], (u32)t); W32(a[0] + 4, (u32)(t >> 32)); }
        return t;
    }
    if (S("_localtime64")) {
        time_t t = (time_t)(uint64_t)R32(a[0]) | ((time_t)(uint64_t)R32(a[0]+4) << 32);
        return (u32)(uintptr_t)localtime(&t);
    }
    if (S("_filelength")) { struct stat st; if (fstat((int)a[0], &st)) return 0xFFFFFFFFu; return (u32)st.st_size; }
    if (S("_fileno")) return (u32)fileno((FILE *)(uintptr_t)a[0]);
    if (S("__iob_func")) {
        static u32 iob[3];
        iob[0] = (u32)(uintptr_t)stdin; iob[1] = (u32)(uintptr_t)stdout; iob[2] = (u32)(uintptr_t)stderr;
        return (u32)(uintptr_t)iob;
    }
    if (S("_errno")) { static int cell; cell = errno; return (u32)(uintptr_t)&cell; }
    if (S("__dllonexit")) return a[0];
    if (S("_adjust_fdiv")) return 0;
    if (S("strftime")) return (u32)strftime((char *)(uintptr_t)a[0], a[1], (const char *)(uintptr_t)a[2], (const struct tm *)(uintptr_t)a[3]);
    if (S("_stat64i32")) {
        struct stat st;
        const char *gp = (const char *)(uintptr_t)a[0];
        int ok = a[1] && stat(wasm_path(gp), &st) == 0;
        char alt[1024];
        if (!ok && a[1] && path_fallback(gp, alt, sizeof alt) && stat(alt, &st) == 0) ok = 1;
        if (!ok) return 0xFFFFFFFFu;
        u32 out = a[1];
        memset((void *)(uintptr_t)out, 0, 56);
        W16(out + 6, st.st_mode); W16(out + 8, 1); W32(out + 16, 0);
        W64(out + 24, (u64)st.st_size);
        W64(out + 32, (u64)st.st_atime); W64(out + 40, (u64)st.st_mtime); W64(out + 48, (u64)st.st_ctime);
        return 0;
    }
    if (S("??0exception@std@@QAE@XZ")) { u32 t = wasm_current_ecx; W32(t, 0); W32(t + 4, 0); W32(t + 8, 0); return t; }
    if (S("??0exception@std@@QAE@ABQBD@Z")) { u32 t = wasm_current_ecx; W32(t, 0); W32(t + 4, a[0] ? R32(a[0]) : 0); W32(t + 8, 0); return t; }
    if (S("??0exception@std@@QAE@ABV01@@Z")) { memcpy((void *)(uintptr_t)wasm_current_ecx, (void *)(uintptr_t)a[0], 12); return wasm_current_ecx; }
    if (S("??1exception@std@@UAE@XZ") || S("?_type_info_dtor_internal_method@type_info@@QAEXXZ")) return 0;
    if (S("?what@exception@std@@UBEPBDXZ")) { u32 m = wasm_current_ecx ? R32(wasm_current_ecx + 4) : 0; return m ? m : (u32)(uintptr_t)""; }
    if (S("??_V@YAXPAX@Z")) { free((void *)(uintptr_t)a[0]); return 0; }
    if (S("?terminate@@YAXXZ") || S("_purecall") || S("_invoke_watson")) {
        fprintf(stderr, "wasm: %s called\n", n);
        abort();
    }
    if (S("_controlfp_s") || S("__set_app_type") || S("__setusermatherr") || S("_configthreadlocale") ||
        S("_crt_debugger_hook") || S("_invalid_parameter_noinfo") || S("_initterm") || S("_initterm_e")) return 0;
    if (S("_encode_pointer") || S("_decode_pointer")) return a[0];
    if (S("_onexit")) return a[0];
    if (S("__getmainargs")) {
        if (a[0]) W32(a[0], 1);
        if (a[1]) { u32 argv = (u32)(uintptr_t)malloc(8); W32(argv, (u32)(uintptr_t)"HoyleCasino.exe"); W32(argv + 4, 0); W32(a[1], argv); }
        if (a[2]) W32(a[2], 0);
        return 0;
    }
    if (S("__p__fmode") || S("__p__commode")) { static u32 v = 0; return (u32)(uintptr_t)&v; }
    if (S("_exit") || S("exit")) { exit((int)a[0]); }
    if (S("_cexit")) return 0;
    if (S("__RTDynamicCast")) return (u32)wasm_rtdynamiccast((void *)(uintptr_t)a[0], a[1], a[2], a[3], (int)a[4]);
    if (S("_CxxThrowException")) { fprintf(stderr, "wasm: C++ exception\n"); abort(); }
    if (S("_XcptFilter") || S("__CxxFrameHandler3") || S("_except_handler4_common")) return 0;
    if (S("_amsg_exit")) { fprintf(stderr, "wasm: _amsg_exit(%d)\n", (int)a[0]); abort(); }
    if (S("_ismbblead")) return 0;
    if (S("_mbsinc")) return a[0] + 1;
    if (S("_mbsdec")) return a[1] > a[0] ? a[1] - 1 : a[0];
    if (S("_mbsnextc")) return (u32)(u8)R8(a[0]);
    if (S("_splitpath")) {
        const char *path = (const char *)(uintptr_t)a[0];
        char *drive = (char *)(uintptr_t)a[1], *dir = (char *)(uintptr_t)a[2];
        char *fname = (char *)(uintptr_t)a[3], *ext = (char *)(uintptr_t)a[4];
        const char *p = path, *fs = path;
        if (p[0] && p[1] == ':') { if (drive) { drive[0] = p[0]; drive[1] = ':'; drive[2] = 0; p += 2; } fs = p; }
        const char *sep = NULL, *dot = NULL;
        for (const char *q = fs; *q; ++q) {
            if (*q == '\\' || *q == '/') sep = q;
            else if (*q == '.') dot = q;
        }
        if (sep) { size_t n = (size_t)(sep - fs) + 1; if (dir) { memcpy(dir, fs, n); dir[n] = 0; } }
        else if (dir) dir[0] = 0;
        const char *base = sep ? sep + 1 : fs;
        if (dot && dot >= base) {
            if (fname) { size_t n = (size_t)(dot - base); memcpy(fname, base, n); fname[n] = 0; }
            if (ext) { strcpy(ext, dot); }
        } else {
            if (fname) strcpy(fname, base);
            if (ext) ext[0] = 0;
        }
        return 0;
    }
    if (S("_makepath")) {
        char *out = (char *)(uintptr_t)a[0];
        const char *drive = (const char *)(uintptr_t)a[1], *dir = (const char *)(uintptr_t)a[2];
        const char *fname = (const char *)(uintptr_t)a[3], *ext = (const char *)(uintptr_t)a[4];
        out[0] = 0;
        if (drive) strcat(out, drive);
        if (dir) strcat(out, dir);
        if (fname) strcat(out, fname);
        if (ext) strcat(out, ext);
        return 0;
    }
    if (S("qsort") || S("bsearch")) { fprintf(stderr, "wasm: special not routed: %s\n", n); abort(); }
    fprintf(stderr, "wasm: unimplemented MSVCR80!%s\n", n);
    abort();
#undef S
}

typedef struct { const char *name; int nargs; } SosName;
extern const SosName sos_names[];
extern const int sos_names_n;

u64 sos_emu(u32 *a)
{
    const char *n = wasm_current->name;
    static int logn;
    if (strcmp(n, "sosDIGIUserService") && logn++ < 400) fprintf(stderr, "wasm sos %s(%x,%x,%x,%x)\n", n, a[0], a[1], a[2], a[3]);
    if (!strcmp(n, "sosDIGIDetectFindFirst")) {
        if (a[0]) { memset((void *)(uintptr_t)a[0], 0, 0x200); W32(a[0] + 0x4c, 0xFFFFFFFFu); }
        return 0;
    }
    if (!strcmp(n, "sosGetErrorString")) return (u32)(uintptr_t)"SOS error";
    if (!strcmp(n, "sosDIGIInitDriver")) { if (a[1]) W32(a[1], 1); return 0; }
    if (!strcmp(n, "sosDIGIStreamAcquire")) {
        u32 fmt = a[1], out = a[2];
        for (int i = 0; i < 8; ++i) if (!g_streams[i].used) {
            u32 rate = fmt ? R16(fmt + 0x3a) : 22050, bits = fmt ? R16(fmt + 0x3e) : 8, ch = fmt ? R16(fmt + 0x42) : 1;
            if (rate < 4000 || rate > 192000) rate = 22050;
            if (bits != 8 && bits != 16) bits = 8;
            if (ch < 1 || ch > 2) ch = 1;
            g_streams[i].used = 1; g_streams[i].started = 0; g_streams[i].n = 0;
            g_streams[i].rate = rate; g_streams[i].bits = bits; g_streams[i].ch = ch;
            if (out) W16(out, (u16)i);
            fprintf(stderr, "wasm StreamAcquire id=%d rate=%u bits=%u ch=%u\n", i, rate, bits, ch);
            return 0;
        }
        return 0x170017u;
    }
    if (!strcmp(n, "sosDIGIStreamPrepareBuffer") || !strcmp(n, "sosDIGIStreamUnPrepareBuffer")) return 0;
    if (!strcmp(n, "sosDIGIStreamAddBuffer")) {
        u32 id = a[1] & 0xFFFFu, d = a[2];
        if (id < 8 && g_streams[id].used && d) {
            u32 ptr = R32(d + 2), len = R32(d + 0xe);
            if (ptr && len && len < 0x2000000u && rt_readable(ptr, 1)) {
                if (g_streams[id].started) wasm_wave_stream_play((int)ptr, (int)len, (int)g_streams[id].rate, (int)g_streams[id].ch, (int)g_streams[id].bits, (int)id);
                else if (g_streams[id].n < 64) { g_streams[id].ptr[g_streams[id].n] = ptr; g_streams[id].len[g_streams[id].n] = len; ++g_streams[id].n; }
            }
        }
        return 0;
    }
    if (!strcmp(n, "sosDIGIStreamStart")) {
        u32 id = a[1] & 0xFFFFu;
        if (id < 8 && g_streams[id].used && !g_streams[id].started) {
            wasm_wave_stream_stop((int)id);
            for (u32 k = 0; k < g_streams[id].n; ++k) wasm_wave_stream_play((int)g_streams[id].ptr[k], (int)g_streams[id].len[k], (int)g_streams[id].rate, (int)g_streams[id].ch, (int)g_streams[id].bits, (int)id);
            g_streams[id].n = 0; g_streams[id].started = 1;
            fprintf(stderr, "wasm StreamStart id=%u\n", id);
        }
        return 0;
    }
    if (!strcmp(n, "sosDIGIStreamStop")) { u32 id = a[1] & 0xFFFFu; if (id < 8) { wasm_wave_stream_stop((int)id); g_streams[id].n = 0; g_streams[id].started = 0; } return 0; }
    if (!strcmp(n, "sosDIGIStreamPause") || !strcmp(n, "sosDIGIStreamResume")) return 0;
    if (!strcmp(n, "sosDIGIStreamRelease")) { u32 id = a[1] & 0xFFFFu; if (id < 8) { wasm_wave_stream_stop((int)id); g_streams[id].used = 0; } return 0; }
    if (!strcmp(n, "sosDIGIStartSample")) {
        u32 d = a[1];
        if (d) {
            u32 ptr = R32(d), len = R32(d + 0x10);
            u32 rate = R16(d + 0x38), bits = R32(d + 0x3c), ch = R32(d + 0x40);
            fprintf(stderr, "wasm StartSample ptr=%08x len=%u rate=%u bits=%u ch=%u\n", ptr, len, rate, bits, ch);
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
    return 0;
}

void wasm_bind_sos(void)
{
    for (int i = 0; i < sos_names_n; ++i)
        api_add_emu("sos", sos_names[i].name, sos_emu, sos_names[i].nargs, 0);
}

ApiEmu wasm_lookup(const char *module, const char *name)
{
    (void)module;
    (void)name;
    return wasm_import;
}

u64 wasm_import(u32 *a)
{
    args = a;
    const char *m = wasm_current->module;
    if (!strcmp(m, "KERNEL32")) return kernel32(a);
    if (!strcmp(m, "USER32")) return user32(a);
    if (!strcmp(m, "GDI32")) return gdi32(a);
    if (!strcmp(m, "WINMM")) return winmm(a);
    if (!strcmp(m, "SHELL32") || !strcmp(m, "ole32") || !strcmp(m, "OLE32") ||
        !strcmp(m, "comdlg32") || !strcmp(m, "advapi32") || !strcmp(m, "winspool") ||
        !strcmp(m, "dbghelp")) return other(a);
    fprintf(stderr, "wasm: unimplemented module %s!%s\n", m, wasm_current->name);
    abort();
}

/* direct helpers used by the platform-specific part of the lifted window procedure */
int32_t GetWindowLongA(HWND h, int32_t index)
{
    (void)h;
    (void)index;
    return 0;   /* no client-to-canvas offset: the wasm window is already 640x480 */
}

int32_t GetClientRect(HWND h, RECT *rect)
{
    (void)h;
    if (rect) { rect->left = 0; rect->top = 0; rect->right = 640; rect->bottom = 480; }
    return 1;
}
