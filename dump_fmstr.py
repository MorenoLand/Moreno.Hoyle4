import struct
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
def v2o(va):
    for nm,v,vsz,ro,rsz in secs:
        if v<=va<v+max(vsz,rsz): return ro+(va-v)
def s(va):
    o=v2o(va)
    if o is None: return b"<novirt>"
    e=d.find(b"\0",o)
    return d[o:e]
for va in (0x67add0,0x67adf0,0x67adf4,0x67ae08,0x67ac90,0x67ac98,0x67ac9c,0x67aca4,0x67aca8,0x67acac,0x67acb8,0x67acbc,0x67acc4,0x67ae0c,0x67ae1c,0x67ae20,0x67ae28):
    print(hex(va),s(va))
