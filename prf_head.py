import struct,re
d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
for off in (0x19,0x40,0x80,0x100,0x1000):
    print("====",hex(off))
    print(d[off:off+160].replace(b"\0",b"."))
# ascii runs in first 0x20000
s=re.findall(rb"[ -~]{5,}", d[:0x20000])
print("ascii runs",len(s))
for x in s[:40]: print(x[:80])
