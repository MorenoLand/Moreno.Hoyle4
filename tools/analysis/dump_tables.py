import struct
d=open("orig/Casino4.exe","rb").read()
def v2o(va):
    pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
    for i in range(n):
        off=so+40*i; vsz,va0,rsz,ro=struct.unpack_from("<IIII",d,off+8)
        if 0x400000+va0<=va<0x400000+va0+max(vsz,rsz): return ro+(va-(0x400000+va0))
def s(va):
    o=v2o(va)
    if o is None: return "<novirt>"
    e=d.find(b"\0",o)
    return repr(d[o:e][:90])
for label,base,count in (("A",0x6870b0,40),("B",0x6870c0,40)):
    print("table",label,hex(base))
    o=v2o(base)
    for i in range(count):
        v=struct.unpack_from("<I",d,o+4*i)[0]
        print(" ",i,hex(v),s(v)[:90])
"---"
print("0x6fc028 area", s(0x6fc028), s(0x6fc02c))
