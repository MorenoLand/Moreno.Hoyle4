import os
f="build/input.err"
if os.path.exists(f):
    d=open(f,"rb").read()
    print("size",len(d))
    try: t=d.decode("utf-8","replace")
    except: t=str(d)
    lines=t.splitlines()
    print(len(lines),"lines")
    for l in lines[-40:]: print(l[:200])
else: print("no file")
