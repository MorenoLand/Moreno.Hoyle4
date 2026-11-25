import struct
d=open("orig/Casino4.exe","rb").read()
# map file offset -> VA using sections
pe=struct.unpack_from("<I",d,0x3c)[0]
nsec=struct.unpack_from("<H",d,pe+6)[0]; opt=struct.unpack_from("<H",d,pe+20)[0]
secs=[]
so=pe+24+opt
for i in range(nsec):
    off=so+40*i; name=d[off:off+8].rstrip(b"\0").decode("latin1")
    vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((va,vsz,ro,rsz,name))
def f2v(o):
    for va,vsz,ro,rsz,n in secs:
        if ro<=o<ro+rsz: return va+(o-ro),n
    return None,None
for target in (0x624ab0,0x624a10,0x626230,0x627150):
    pat=struct.pack("<I",target); hits=[]; st=0
    while True:
        i=d.find(pat,st)
        if i<0: break
        v,n=f2v(i); hits.append((hex(v) if v else hex(i),n)); st=i+1
    print(hex(target),hits[:10])
