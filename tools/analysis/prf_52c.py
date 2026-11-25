import struct
d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
# scan the whole directory region for records with id 0x52c
for start in (0x5d26804,0x5d7a61c):
    n=0x5978//16 if start==0x5d7a61c else 0x59780//16
    for i in range(n):
        tag,idv,off,sz=struct.unpack_from("<4sIII",d,start+i*16)
        if idv==0x52c:
            print(hex(start+i*16),tag,hex(idv),hex(off),sz)
