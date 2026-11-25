p="src/misc/FUN_48.c"
lines=open(p,encoding="utf-8").read().splitlines()
out=[]
for l in lines:
    if "ssdbg2" in l:
        out.append("    /* 006102b0: mov esp, ebp */ r_esp = r_ebp;")
        continue
    if "ssdbg" in l:
        continue
    out.append(l)
open(p,"w",encoding="utf-8",newline="").write("\n".join(out)+"\n")
print("ssdbg removed", sum(1 for l in out if "ssdbg" in l))
q="runtime/wasm/imports.c"
s=open(q,encoding="utf-8").read()
old='if (!strcmp(n, "HeapFree")) { if (a[2]) free((void *)(uintptr_t)a[2]); return 1; }'
new='if (!strcmp(n, "HeapFree")) { if (a[2]) { static int fl; if (fl++ < 40) fprintf(stderr, "wasm HeapFree %08x\\n", a[2]); free((void *)(uintptr_t)a[2]); } return 1; }'
assert old in s
s=s.replace(old,new)
open(q,"w",encoding="utf-8",newline="").write(s)
print("free log added")
