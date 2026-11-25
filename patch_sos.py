p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
anchor="ApiEmu wasm_lookup(const char *module, const char *name)"
sos='''typedef struct { const char *name; int nargs; } SosName;
extern const SosName sos_names[];
extern const int sos_names_n;

u64 sos_emu(u32 *a)
{
    static int n;
    if (n++ < 400) fprintf(stderr, "wasm sos %s(%x,%x,%x,%x)\\n", wasm_current->name, a[0], a[1], a[2], a[3]);
    return 0;
}

void wasm_bind_sos(void)
{
    for (int i = 0; i < sos_names_n; ++i)
        api_add_emu("sos", sos_names[i].name, sos_emu, sos_names[i].nargs, 0);
}

'''
assert anchor in s
s=s.replace(anchor, sos+anchor,1)
# LoadLibrary sos -> fake module
old='if (!strcmp(n, "LoadLibraryA") || !strcmp(n, "LoadLibraryW")) { g_last_error = 126; return 0; }'
new='if (!strcmp(n, "LoadLibraryA") || !strcmp(n, "LoadLibraryW")) { const char *lib = (const char *)(uintptr_t)a[0]; if (lib && (strstr(lib, "sos9503") || strstr(lib, "sos32s03") || strstr(lib, "SOSLIBS"))) return 0x60000000u; g_last_error = 126; return 0; }'
assert old in s
s=s.replace(old,new)
open(p,"w",encoding="utf-8",newline="").write(s)
print("sos emu + loadlibrary patched")
