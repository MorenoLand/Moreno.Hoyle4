import struct
d=open("orig/Casino4.exe","rb").read()
def rd(va,n): return d[0x400+(va-0x401000):0x400+(va-0x401000)+n]
base=0x6a2800
for i in range(0,0x140,4):
    v=struct.unpack_from("<I",rd(base+i,4))[0]
    s=""
    if 0x400000<=v<0x715000:
        try:
            p=rd(v,40).split(b"\0")[0]
            if all(32<=c<127 for c in p) and len(p)>=3: s=p.decode()
        except: pass
    print(hex(base+i),hex(v),s)
