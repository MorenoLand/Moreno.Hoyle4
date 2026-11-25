import struct,re
d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
print("size",len(d),hex(len(d)))
print("tail 256:",d[-256:].replace(b"\0",b"."))
# ascii runs in last 1MB
tail=d[-0x100000:]
runs=[x for x in re.findall(rb"[ -~]{5,}",tail)]
print("runs",len(runs))
for x in runs[:40]: print(x[:80])
