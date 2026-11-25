p="runtime/wasm/boot.c"
s=open(p,encoding="utf-8").read()
old='    if (missing_count)\n        fprintf(stderr, "wasm: %d of %d imports have no implementation; they abort when called\\n",\n                missing_count, api_static_n);'
new='    if (missing_count)\n        fprintf(stderr, "wasm: %d of %d imports have no implementation; they abort when called\\n",\n                missing_count, api_static_n);\n    {\n        extern void wasm_bind_sos(void);\n        wasm_bind_sos();\n    }'
assert old in s
s=s.replace(old,new)
open(p,"w",encoding="utf-8",newline="").write(s)
print("boot binds sos")
