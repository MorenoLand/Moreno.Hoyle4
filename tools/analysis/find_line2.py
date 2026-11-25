cnt=0; best=None
for l in open("build/wasm_lines.txt",encoding="utf-8",errors="replace"):
    if not l.startswith("0x"): continue
    cnt+=1
    parts=l.split()
    try: a=int(parts[0],16)
    except: continue
    if a<=0x186ae9c and (best is None or a>best[0]): best=(a,parts[1:6])
print("lines",cnt,"best",best)
