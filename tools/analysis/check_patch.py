import struct
d=open("src/image.bin","rb").read()
n,=struct.unpack_from("<I",d,0)
for i in range(n):
    va,ln,off=struct.unpack_from("<III",d,4+12*i)
    if va<=0x687150<va+ln:
        print("patch byte at 687150 =",hex(d[off+(0x687150-va)]))
        break
else: print("0x687150 not covered")
