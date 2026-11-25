d=open(r"D:\Games\CASINO4\Casino4.prf","rb").read()
for pat in (b"Speech",b"Sound effects",b"Background audio",b"Dealer voice",b"Animations"):
    i=0; hits=[]
    while True:
        i=d.find(pat,i)
        if i<0: break
        hits.append(i); i+=1
    print(pat,len(hits),[hex(x) for x in hits[:8]])
    for o in hits[:3]:
        print("   ",d[max(0,o-30):o+70].replace(b"\0",b"."))
