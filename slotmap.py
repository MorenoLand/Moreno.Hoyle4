import struct
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
def v2o(va):
    for nm,v,vsz,ro,rsz in secs:
        if v<=va<v+max(vsz,rsz): return ro+(va-v)
for a in range(0x6f1380,0x6f2400,0x24):
    oo=v2o(a)
    if oo is None: continue
    flag,slot=struct.unpack_from("<II",d,oo); nm=d[oo+8:oo+8+28].split(b"\0")[0].decode("latin1")
    if slot in (0x7111c0,0x7111d4,0x7111e0,0x7111f0,0x7111fc,0x711204,0x71120c,0x711214,0x7111b4,0x7111a8,0x7112cc,0x7112dc,0x7112e8,0x7112f4,0x711300,0x7112f8,0x711238):
        print(hex(slot),hex(a),flag,nm)
