p="runtime/rt.c"
s=open(p,encoding="utf-8").read()
i=s.find("void rt_trace_copy(")
assert i>0
s=s[:i].rstrip()+"\n"
open(p,"w",encoding="utf-8",newline="").write(s)
print("reverted", len(s))
