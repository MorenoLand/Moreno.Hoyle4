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
names=[b"sosDIGIDetectInit",b"sosDIGI",b"SOSLIBS3",b"sos"]
for pat in names:
    print("pattern",pat)
    st=0
    while True:
        i=d.find(pat,st)
        if i<0: break
        va,nm=o2v(i); print("  off",hex(i),"va",hex(va) if va else None,nm); st=i+1
        if va is None: continue
        imm=struct.pack("<I",va)
        hits=[]; j=0
        while True:
            k=d.find(imm,j)
            if k<0: break
            v2,n2=o2v(k)
            if n2==".text": hits.append(hex(v2))
            j=k+1
        print("   xrefs:",hits[:10])
