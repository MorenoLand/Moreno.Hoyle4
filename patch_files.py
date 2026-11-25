p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
old='if (!strcmp(n, "CloseHandle")) { if (a[0] && a[0] != 0xFFFFFFFFu) fclose((FILE *)(uintptr_t)a[0]); return 1; }'
new='if (!strcmp(n, "CloseHandle")) { if (a[0] && a[0] != 0xFFFFFFFFu) { FILE *f = (FILE *)(uintptr_t)a[0]; if (file_take(f)) fclose(f); } return 1; }'
assert old in s
s=s.replace(old,new)
old2='''        if (!f && path_fallback(gp, alt, sizeof alt)) f = fopen(ci_path(alt), mode);
        if (!f) { g_last_error = 2; return 0xFFFFFFFFu; }
        return (u32)(uintptr_t)f;'''
new2='''        if (!f && path_fallback(gp, alt, sizeof alt)) f = fopen(ci_path(alt), mode);
        if (!f) { g_last_error = 2; return 0xFFFFFFFFu; }
        file_add(f);
        return (u32)(uintptr_t)f;'''
assert old2 in s
s=s.replace(old2,new2)
open(p,"w",encoding="utf-8",newline="").write(s)
print("file registry patched")
