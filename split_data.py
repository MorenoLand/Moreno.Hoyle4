import os
out=r"G:\Development\RE Crap\Casino4\bin\wasm"
p=os.path.join(out,"host.data")
if os.path.exists(p):
    b=open(p,"rb").read()
    n=4; step=(len(b)+n-1)//n
    for i in range(n):
        open(os.path.join(out,"host.data.part%d"%i),"wb").write(b[i*step:(i+1)*step])
    os.remove(p)
    print("split",len(b))
else:
    print("no host.data; parts:", [f for f in os.listdir(out) if f.startswith("host.data")])
