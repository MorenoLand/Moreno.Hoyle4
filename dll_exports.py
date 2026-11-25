import struct
for path in ("D:/Games/CASINO4/SOSLIBS3.DLL","D:/Games/CASINO4/SOS9503.DLL"):
    d=open(path,"rb").read()
    pe=struct.unpack_from("<I",d,0x3c)[0]; nsec=struct.unpack_from("<H",d,pe+6)[0]; opt=struct.unpack_from("<H",d,pe+20)[0]
    magic=struct.unpack_from("<H",d,pe+24)[0]
    ddoff=pe+24+(96 if magic==0x10b else 112)
    exp_rva,exp_sz=struct.unpack_from("<II",d,ddoff)
    so=pe+24+opt; secs=[]
    for i in range(nsec):
        off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,va,vsz,ro,rsz))
    def r2o(rva):
        for nm,va,vsz,ro,rsz in secs:
            if va<=rva<va+max(vsz,rsz): return ro+(rva-va)
    print("==",path,"exports rva",hex(exp_rva))
    if not exp_rva: continue
    o=r2o(exp_rva); nnames,c=struct.unpack_from("<II",d,o+20); anames,=struct.unpack_from("<I",d,o+0x20)
    ords,=struct.unpack_from("<I",d,o+0x24)
    funcs,=struct.unpack_from("<II",d,o+0x1c)[0:2]
    names=[]
    for i in range(nnames):
        nr,=struct.unpack_from("<I",d,r2o(anames)+4*i); oo=r2o(nr); e=d.find(b"\0",oo); names.append((d[oo:e].decode("latin1"), struct.unpack_from("<H",d,r2o(ords)+2*i)[0]))
    print(len(names),"exports")
    for nm,idx in names: print("  ",nm,idx)
