import struct
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
def rd(va,n):
    for nm,v,vsz,ro,rsz in secs:
        if v<=va<v+max(vsz,rsz): oo=ro+(va-v); return d[oo:oo+n]
    return b""
def guid(va):
    a,b,c=struct.unpack_from("<IHH",rd(va,8)); rest=rd(va+8,8)
    return "{%08X-%04X-%04X-%s-%s}" % (a,b,c,rest[:2].hex().upper(),rest[2:].hex().upper())
for va in (0x63ce68,0x63ce88,0x63ce48,0x63cea8):
    print(hex(va),guid(va), rd(va,4))
