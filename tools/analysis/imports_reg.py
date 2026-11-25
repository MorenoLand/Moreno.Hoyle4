import struct
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; nsec=struct.unpack_from("<H",d,pe+6)[0]; opt=struct.unpack_from("<H",d,pe+20)[0]
magic=struct.unpack_from("<H",d,pe+24)[0]; dd=pe+24+(96 if magic==0x10b else 112)
imp_rva,imp_sz=struct.unpack_from("<II",d,dd+4)[0],struct.unpack_from("<II",d,dd+4)[1]
so=pe+24+opt; secs=[]
for i in range(nsec):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
def v2o(va):
    for nm,v,vsz,ro,rsz in secs:
        if v<=va<v+max(vsz,rsz): return ro+(va-v)
o=v2o(0x400000+imp_rva)
names=[]
while True:
    ol,tds,fc,nm,fa=struct.unpack_from("<IIIII",d,o)
    if nm==0 and fa==0 and ol==0: break
    p=v2o(0x400000+nm); e=d.find(b"\0",p); dll=d[p:e].decode(); names.append(dll)
    if fa:
        f=v2o(0x400000+fa); k=0
        while True:
            fr=v2o(0x400000+struct.unpack_from("<I",d,f+4*k)[0]) if struct.unpack_from("<I",d,f+4*k)[0] else 0
            if not fr: break
            fn=d[fr+2:d.find(b"\0",fr+2)].decode()
            if "Reg" in fn or "Profile" in fn or fn.startswith("Get"): names.append("  "+fn)
            k+=1
    o+=20
print("\n".join(names[:80]))
