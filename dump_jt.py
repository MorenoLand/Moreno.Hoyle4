import struct
d=open("orig/Casino4.exe","rb").read()
def rd(va,ln): return d[0x400+(va-0x401000):0x400+(va-0x401000)+ln]
for va,n in ((0x62f608,4),(0x62f6b0,20),(0x62f700,8)):
    vals=struct.unpack_from("<%dI"%n,rd(va,n*4))
    print(hex(va),[hex(v) for v in vals])
