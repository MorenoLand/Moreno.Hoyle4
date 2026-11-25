p="web/index.html"
s=open(p,encoding="utf-8").read()
s=s.replace("canvas { display: block; width: min(100vw, 133.333vh); height: min(100vh, 75vw); background: #000; outline: none; image-rendering: pixelated; }",
            "canvas { display: block; width: 100vw; height: 100vh; background: #000; outline: none; image-rendering: pixelated; }")
open(p,"w",encoding="utf-8",newline="").write(s)
q="runtime/wasm/imports.c"
t=open(q,encoding="utf-8").read()
t=t.replace('if (!strcmp(n, "VirtualAlloc")) { u32 p =',
            'if (!strcmp(n, "VirtualAlloc")) { { static int vl; if (vl++ < 80) fprintf(stderr, "wasm VirtualAlloc a=%08x size=%u type=%x\\n", a[0], a[1], a[2]); } u32 p =')
t=t.replace('if (!strcmp(n, "VirtualFree")) { if ((a[2] & 0x8000u) && block_take(a[0])) free((void *)(uintptr_t)a[0]); return 1; }',
            'if (!strcmp(n, "VirtualFree")) { { static int vf; if (vf++ < 40) fprintf(stderr, "wasm VirtualFree a=%08x size=%u type=%x\\n", a[0], a[1], a[2]); } if ((a[2] & 0x8000u) && block_take(a[0])) free((void *)(uintptr_t)a[0]); return 1; }')
open(q,"w",encoding="utf-8",newline="").write(t)
print("css + valloc logs")
