d=open("build/input.err","rb").read().decode("utf-8","replace")
import collections
c=collections.Counter()
for l in d.splitlines():
    if "USER32!" in l or "WINMM!" in l:
        name=l.split("!")[1].split("(")[0]
        c[name]+=1
for k,v in c.most_common(20): print(k,v)
print("--- last cursor/key lines")
lines=[l for l in d.splitlines() if ("GetCursorPos" in l or "GetAsyncKeyState" in l or "SetCapture" in l)]
print(len(lines))
for l in lines[-15:]: print(l[:160])
