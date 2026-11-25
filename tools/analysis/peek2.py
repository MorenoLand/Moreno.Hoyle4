import struct
d=open(r"D:\Games\CASINO4\Casino4.exe","rb").read()
pe=struct.unpack_from("<I",d,0x3c)[0]
o=pe+24
print("SizeOfImage",hex(struct.unpack_from("<I",d,o+56)[0]))
print("SizeOfHeaders",hex(struct.unpack_from("<I",d,o+60)[0]))
print("Subsystem",struct.unpack_from("<H",d,o+68)[0])
print("DllCharacteristics",hex(struct.unpack_from("<H",d,o+70)[0]))
