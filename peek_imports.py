import sys
sys.path.insert(0,"pipeline")
from pe_image import Image
im=Image(r"G:\Development\RE Crap\Casino4\orig\Casino4.exe")
rows=list(im.imports())
print("imports",len(rows))
mods={}
for m,slot,name in rows: mods.setdefault(m,[]).append(name)
for m,v in mods.items(): print(m,len(v),sorted(set(v))[:12])
