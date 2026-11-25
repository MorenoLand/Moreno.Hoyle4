import struct
d=open("orig/Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]; n=struct.unpack_from("<H",d,pe+6)[0]; o=struct.unpack_from("<H",d,pe+20)[0]; so=pe+24+o
secs=[]
for i in range(n):
    off=so+40*i; nm=d[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",d,off+8); secs.append((nm,0x400000+va,vsz,ro,rsz))
def v2o(va):
    for nm,v,vsz,ro,rsz in secs:
        if v<=va<v+max(vsz,rsz): return ro+(va-v)
def s(va):
    o=v2o(va)
    if o is None: return "<novirt>"
    e=d.find(b"\0",o)
    return d[o:e]
for va in (0x67adc8,0x6f6878,0x697ba4,0x697ba8,0x697b4c,0x697b50,0x697b54,0x697b58,0x697b5c,0x697b60):
    print(hex(va), s(va)[:120])
print("len of 0x687150 string:", len(s(0x687150)))
print("bytes 60..70:", s(0x687150)[60:72])
