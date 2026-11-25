import struct
d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
i=d.rfind(b"WAVE")
print("last WAVE at",hex(i))
print(d[i-32:i+64].hex(" "))
# find directory start: scan backward for non-record region? print 16-byte aligned records from i
for off in range(i-64,i+64,16):
    print(hex(off), d[off:off+4], d[off+4:off+8].hex(), d[off+8:off+12].hex(), d[off+12:off+16].hex())
# search for records with tag WAVE and id 0x0daf (2-byte or 4-byte)
pat=b"WAVE\xaf\x0d"
print("WAVE id daf hits", [hex(x) for x in range(len(d)) if d.startswith(pat,x)][:10])
