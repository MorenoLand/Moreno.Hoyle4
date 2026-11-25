best=None; cnt=0
for l in open("build/wasm_lines.txt",encoding="utf-16",errors="replace"):
    if not l.startswith("0x"): continue
    parts=l.split(); cnt+=1
    try: a=int(parts[0],16)
    except: continue
    if a<=0x186ae9c and (best is None or a>best[0]): best=(a,parts[1:7])
print("lines",cnt,"best",best)
