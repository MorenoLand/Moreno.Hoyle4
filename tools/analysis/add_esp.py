p="src/misc/FUN_48.c"
s=open(p,encoding="utf-8").read()
for tag in ("B","C","D","E"):
    old='fprintf(stderr,"ssdbg %s\\n");' % tag
    new='fprintf(stderr,"ssdbg %s esp=%%08x ebp=%%08x\\n", r_esp, r_ebp);' % tag
    if old not in s: print("MISS",tag)
    s=s.replace(old,new)
open(p,"w",encoding="utf-8",newline="").write(s)
print("esp marks ok")
