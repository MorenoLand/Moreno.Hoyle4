import struct
p=r"D:\Games\CASINO4\Casino4.exe"
d=open(p,"rb").read()
print("mz",d[:2],"size",len(d))
pe=struct.unpack_from("<I",d,0x3c)[0]
print("sig",d[pe:pe+4])
mach,nsec,ts,psym,nsym,opt=struct.unpack_from("<HHIIIH",d,pe+4)
print("machine",hex(mach),"sections",nsec,"optsize",opt)
magic=struct.unpack_from("<H",d,pe+24)[0]
print("magic",hex(magic))
ep=struct.unpack_from("<I",d,pe+24+16)[0]
base=struct.unpack_from("<I",d,pe+24+28)[0]
print("base",hex(base),"entry",hex(ep))
so=pe+24+opt
lo=None; hi=0; end=0
for i in range(nsec):
    off=so+40*i
    name=d[off:off+8].rstrip(b"\0").decode("latin1")
    vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8)
    print(name,hex(va),hex(vsz),hex(ro),hex(rsz))
    if lo is None or va<lo: lo=va
    if va+vsz>hi: hi=va+vsz
    if va+max(vsz,rsz)>end: end=va+max(vsz,rsz)
print("lo",hex(lo),"hi",hex(hi),"end",hex(end))
