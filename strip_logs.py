p="runtime/wasm/imports.c"
s=open(p,encoding="utf-8").read()
old='''    {
        static int filelog;
        if (filelog < 160 && (!strcmp(n, "CreateFileA") || !strcmp(n, "GetFileAttributesA") ||
                              !strcmp(n, "FindFirstFileA") || !strcmp(n, "DeleteFileA") ||
                              !strcmp(n, "GetPrivateProfileStringA") || !strcmp(n, "WritePrivateProfileStringA"))) {
            ++filelog;
            const char *gp = (const char *)(uintptr_t)a[0];
            fprintf(stderr, "wasmfile %s(%s)\\n", n, gp ? gp : "(null)");
        }
    }
'''
assert old in s
s=s.replace(old,"")
old2='if (!strcmp(n, "HeapFree")) { if (a[2]) { if (!block_take(a[2])) { { static int fl; if (fl++ < 20) fprintf(stderr, "wasm HeapFree ignored %08x\\n", a[2]); } return 1; } free((void *)(uintptr_t)a[2]); } return 1; }'
new2='if (!strcmp(n, "HeapFree")) { if (a[2]) { if (!block_take(a[2])) return 1; free((void *)(uintptr_t)a[2]); } return 1; }'
assert old2 in s
s=s.replace(old2,new2)
open(p,"w",encoding="utf-8",newline="").write(s)
print("logs removed")
