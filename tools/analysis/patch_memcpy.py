p="src/misc/FUN_52.c"
s=open(p,encoding="utf-8").read()
start=s.find("void f_0062f420(void)")
assert start>0
nxt=s.find("\nvoid f_", start+10)
assert nxt>start
body='''void f_0062f420(void) /* FUN_0062f420: CRT memcpy/memmove (hand-written switch tails are not liftable) */
{
    FN_ENTER(0x0062f420);
    u32 dst = R32(r_esp + 4), src = R32(r_esp + 8), n = R32(r_esp + 0xc);
    if (n) memmove((void *)(uintptr_t)dst, (const void *)(uintptr_t)src, n);
    r_eax = dst;
    r_esp += 4;
}
'''
s=s[:start]+body+s[nxt+1:]
open(p,"w",encoding="utf-8",newline="").write(s)
print("memcpy override written")
