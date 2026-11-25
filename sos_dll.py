import struct
for path in (r"D:\Games\CASINO4\SOS9503.DLL", r"D:\Games\CASINO4\SOSLIBS3.DLL"):
    d=open(path,"rb").read()
    print("==",path,"size",len(d),"magic",d[:2])
    if d[:2]!=b"MZ": continue
    pe=struct.unpack_from("<I",d,0x3c)[0]
    print("pe",hex(pe),d[pe:pe+4])
    if d[pe:pe+4]!=b"PE\0\0": continue
    nsec=struct.unpack_from("<H",d,pe+6)[0]; opt=struct.unpack_from("<H",d,pe+20)[0]
    magic=struct.unpack_from("<H",d,pe+24)[0]
    dd=pe+24+(96 if magic==0x10b else 112)
    exp_rva,exp_sz=struct.unpack_from("<II",d,dd)
    print("magic",hex(magic),"sections",nsec,"export rva",hex(exp_rva),exp_sz)
    so=pe+24+opt; secs=[]
    for i in range(nsec):
        off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,va,vsz,ro,rsz))
        print("  ",nm,hex(va),hex(vsz),hex(ro),hex(rsz))
    def r2o(rva):
        for nm,va,vsz,ro,rsz in secs:
            if va<=rva<va+max(vsz,rsz): return ro+(rva-va)
        return None
    if exp_rva:
        o=r2o(exp_rva)
        if o:
            nnames,nfuncs=struct.unpack_from("<II",d,o+20)[0],struct.unpack_from("<I",d,o+20)[0]
            nn,=struct.unpack_from("<I",d,o+20); anames,=struct.unpack_from("<I",d,o+0x20)
            oo=r2o(anames)
            names=[]
            for i in range(min(nn,10)):
                nr,=struct.unpack_from("<I",d,oo+4*i); p=r2o(nr); e=d.find(b"\0",p); names.append(d[p:e])
            print("  exports first",names)
