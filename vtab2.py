import struct
d=open("orig/Casino4.exe","rb").read()
def rd(va,n): return d[0x400+(va-0x401000):0x400+(va-0x401000)+n]
for i in range(12):
    v=struct.unpack_from("<I",rd(0x63bfd4+4*i,4))[0]
    print(i,hex(0x63bfd4+4*i),hex(v))
