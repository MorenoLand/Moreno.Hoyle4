import struct
d=open("orig/Casino4.exe","rb").read()
def v2o(va):
    pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
    for i in range(n):
        off=so+40*i; vsz,va0,rsz,ro=struct.unpack_from("<IIII",d,off+8)
        if 0x400000+va0<=va<0x400000+va0+max(vsz,rsz): return ro+(va-(0x400000+va0))
o=v2o(0x6f7040); print(repr(d[o:o+200]))
