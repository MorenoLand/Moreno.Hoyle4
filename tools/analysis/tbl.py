import struct
d=open("orig/Casino4.exe","rb").read()
def v2o(va):
    pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]
    so=pe+24+o
    for i in range(n):
        off=so+40*i; name=d[off:off+8].rstrip(b"\0"); vsz,va0,rsz,ro=struct.unpack_from("<IIII",d,off+8)
        if 0x400000+va0<=va<0x400000+va0+max(vsz,rsz): return ro+(va-(0x400000+va0))
    return None
for tbl in (0x6870b0,0x6870c0):
    off=v2o(tbl); vals=struct.unpack_from("<8I",d,off)
    print(hex(tbl),[hex(x) for x in vals])
    for x in vals[:6]:
        oo=v2o(x)
        if oo: print("  ",hex(x),repr(d[oo:oo+48].split(b"\0")[0]))
