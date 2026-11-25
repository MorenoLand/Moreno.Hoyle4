d=open("orig/Casino4.exe","rb").read()
import re
for pat in (b"voice",b"Voice",b"VOICE",b"speech",b"Speech",b"Talk",b"talk"):
    i=0; hits=[]
    while True:
        i=d.find(pat,i)
        if i<0: break
        hits.append(i); i+=1
    print(pat, len(hits))
    for o in hits[:8]:
        s=d[max(0,o-40):o+60]
        print("  ",hex(o),s.replace(b"\0",b"."))
