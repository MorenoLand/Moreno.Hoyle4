p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
s=s.replace('FILE *f = fopen(wasm_path("casino4.ini"), "rb");','FILE *f = fopen(ci_path(wasm_path("casino4.ini")), "rb");')
s=s.replace('const char *path = wasm_path(file ? file : "casino4.ini");','const char *path = ci_path(wasm_path(file ? file : "casino4.ini"));')
open(p,"w",encoding="utf-8",newline="").write(s)
print("ok")
