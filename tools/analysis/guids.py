import struct
d=open("orig/Casino4.exe","rb").read()
def rd(va,n):
    return d[0x400+(va-0x401000):0x400+(va-0x401000)+n]
def guid(va):
    a,b,c=struct.unpack_from("<IHH",rd(va,8)); rest=rd(va+8,8)
    return "{%08X-%04X-%04X-%s-%s}" % (a,b,c,rest[:2].hex().upper(),rest[2:].hex().upper())
for va in (0x63ce68,0x63ce88,0x63ce48,0x63cea8,0x63cec8):
    print(hex(va),guid(va))
