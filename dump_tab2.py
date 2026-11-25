import struct
d=open("orig/Casino4.exe","rb").read()
def rd(va,n): return d[0x400+(va-0x401000):0x400+(va-0x401000)+n]
base=0x63bd20
for i in range(-10,14):
    v=struct.unpack_from("<I",rd(base+4*i,4))[0]
    print(hex(base+4*i), hex(v))
