import struct
d=open("orig/Casino4.exe","rb").read()
# VA->file: sections RVA
pe=struct.unpack_from("<I",d,0x3c)[0]; nsec=struct.unpack_from("<H",d,pe+6)[0]; opt=struct.unpack_from("<H",d,pe+20)[0]
secs=[]; so=pe+24+opt
for i in range(nsec):
    off=so+40*i; name=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8)
    secs.append((0x400000+va,vsz,0x400000+va,ro,rsz,name))
def v2f(va):
    for v,vs,rva,ro,rsz,n in secs:
        if v<=va<v+max(vs,rsz): return ro+(va-v)
    return None
for base in (0x64c350,0x64c370,0x64c390,0x64c3b0):
    o=v2f(base); vals=struct.unpack_from("<16I",d,o)
    print(hex(base),[hex(v) for v in vals])
