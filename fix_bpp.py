p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
s=s.replace('if (a[1] == 8) return g_dd_w; if (a[1] == 10) return g_dd_h; if (a[1] == 12) return 8; if (a[1] == 14) return 1; if (a[1] == 104) return 256; return 1;',
            'if (a[1] == 8) return g_dd_w; if (a[1] == 10) return g_dd_h; if (a[1] == 12) return 32; if (a[1] == 14) return 1; if (a[1] == 104) return 256; return 1;')
s=s.replace('if (!p) fprintf(stderr, "wasm HeapAlloc FAIL size=%u mem=%u\\n", a[2], (unsigned)(__builtin_wasm_memory_size(0) * 65536u)); else if (a[2] > 0x400000u) fprintf(stderr, "wasm HeapAlloc big %u -> %08x\\n", a[2], p);',
            'if (!p) { static int fl; if (fl++ < 5) fprintf(stderr, "wasm HeapAlloc FAIL size=%u mem=%u\\n", a[2], (unsigned)(__builtin_wasm_memory_size(0) * 65536u)); } else if (a[2] > 0x400000u) { static int bl; if (bl++ < 5) fprintf(stderr, "wasm HeapAlloc big %u -> %08x\\n", a[2], p); }')
s=s.replace('if (!p) fprintf(stderr, "wasm VirtualAlloc FAIL size=%u mem=%u\\n", a[1], (unsigned)(__builtin_wasm_memory_size(0) * 65536u)); else if (a[1] > 0x400000u) fprintf(stderr, "wasm VirtualAlloc big %u -> %08x\\n", a[1], p);',
            'if (!p) { static int fl; if (fl++ < 5) fprintf(stderr, "wasm VirtualAlloc FAIL size=%u mem=%u\\n", a[1], (unsigned)(__builtin_wasm_memory_size(0) * 65536u)); } else if (a[1] > 0x400000u) { static int bl; if (bl++ < 5) fprintf(stderr, "wasm VirtualAlloc big %u -> %08x\\n", a[1], p); }')
open(p,"w",encoding="utf-8",newline="").write(s)
print("bpp 32 + limited logs")
