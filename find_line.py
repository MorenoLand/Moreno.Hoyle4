import re
best=None
for l in open("build/wasm_lines.txt",encoding="utf-8",errors="replace"):
    m=re.match(r"^0x([0-9a-f]+)\s+(\d+)\s+(\d+)\s+(\d+)",l)
    if not m: continue
    a=int(m.group(1),16)
    if a<=0x186ae9c and (best is None or a>best[0]): best=(a,int(m.group(2)),int(m.group(3)),int(m.group(4)))
print(best)
# also file table entries near
