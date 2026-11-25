import re
for p in (r"D:\Games\CASINO4\custom.prf", r"D:\Games\CASINO4\chars.prf", r"D:\Games\CASINO4\BLINKS.PRF"):
    d=open(p,"rb").read()
    print("==",p,len(d))
    ss=[x for x in re.findall(rb"[ -~]{4,}", d)]
    print([s.decode("latin1") for s in ss[:30]])
    for pat in (b"Speech",b"speech",b"Voice",b"voice",b"Sound",b"sound"):
        if d.find(pat)>=0: print("  has",pat,hex(d.find(pat)))
