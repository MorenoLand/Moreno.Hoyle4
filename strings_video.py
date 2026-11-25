import re
d=open("orig/Casino4.exe","rb").read()
strs=re.findall(rb"[\x20-\x7e]{6,}",d)
keys=[b"DirectDraw",b"DDraw",b"GDI",b"Direct3D",b"video",b"Video",b"Display",b"display",b"windowed",b"Windowed",b"fullscreen",b"Full Screen",b"software",b"Software"]
seen=set()
for s in strs:
    for k in keys:
        if k in s and s not in seen:
            seen.add(s); print(s[:100])
