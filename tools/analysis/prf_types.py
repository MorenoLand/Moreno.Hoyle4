import collections
d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
c=collections.Counter()
for i in range(len(d)-4):
    t=d[i:i+4]
    if t in (b"RIFF",b"WAVE",b"fmt ",b"data",b"PAL ",b"AVI ",b"MIDI",b"MThd"):
        c[t]+=1
print(c)
i=d.find(b"WAVE")
print("first WAVE at",hex(i) if i>=0 else None)
print("MThd at",hex(d.find(b"MThd")))
print("fmt  at",hex(d.find(b"fmt ")))
