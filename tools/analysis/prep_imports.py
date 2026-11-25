src=r"G:\Development\RE Crap\Hoyle Classic\recomp\rt\wasm\imports_wasm.c"
d=open(src,encoding="utf-8").read()
old='''u64 wasm_import(u32 *a)
{
    args = a;
    const char *m = wasm_current->module;
    const char *n2 = wasm_current->name;
    (void)n2;
    if (!strcmp(m, "KERNEL32")) return kernel32(a);
    if (!strcmp(m, "USER32")) return user32(a);
    if (!strcmp(m, "GDI32")) return gdi32(a);
    if (!strcmp(m, "MSVCR80")) return msvcr80(a);
    if (!strcmp(m, "MSVCP80")) return msvcp80(a);
    if (!strcmp(m, "OpenAL32")) return openal(a);
    if (!strcmp(m, "WINMM")) return winmm(a);
    if (!strcmp(m, "SHELL32") || !strcmp(m, "ole32") || !strcmp(m, "OLE32") ||
        !strcmp(m, "freetype6") || !strcmp(m, "dbghelp") || !strcmp(m, "WINSPOOL") ||
        !strcmp(m, "comdlg32") || !strcmp(m, "shim")) return other(a);
    fprintf(stderr, "wasm: unimplemented module %s!%s\\n", m, wasm_current->name);
    abort();
}'''
new='''u64 wasm_import(u32 *a)
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
    fprintf(stderr, "wasm: unimplemented module %s!%s\\n", m, wasm_current->name);
    abort();
}'''
assert old in d
d=d.replace(old,new)
open("build/imports_casino4.c","w",encoding="utf-8",newline="").write(d)
print("wrote build/imports_casino4.c", len(d))
