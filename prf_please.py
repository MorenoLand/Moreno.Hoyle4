d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
for pat in (b"One Moment Please", b"Moment Please", b"Please"):
    i=d.find(pat)
    print(pat, hex(i) if i>=0 else None)
    if i>=0: print(d[i-40:i+60])
