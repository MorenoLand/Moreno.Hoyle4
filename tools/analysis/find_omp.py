import struct
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
def o2v(off):
    for nm,v,vsz,ro,rsz in secs:
        if ro<=off<ro+rsz: return v+(off-ro),nm
    return None,None
for pat in (b"One Moment Please", b"One Moment", b"Please Wait"):
    st=0
    while True:
        i=d.find(pat,st)
        if i<0: break
        va,nm=o2v(i); print(pat,hex(va) if va else hex(i),nm)
        if va:
            imm=struct.pack("<I",va); tb=[s for s in secs if s[0]==".text"][0]; t=d[tb[3]:tb[3]+tb[4]]
            j=0; hits=[]
            while True:
                k=t.find(imm,j)
                if k<0: break
                hits.append(hex(tb[1]+k)); j=k+1
            print("  xrefs",hits[:6])
        st=i+1
