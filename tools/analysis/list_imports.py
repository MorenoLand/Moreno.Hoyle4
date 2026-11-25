import json, collections
api=json.load(open("recomp/data/api_table.json",encoding="utf-8"))
mods=collections.defaultdict(list)
for e in api: mods[e["module"]].append((e["name"],e.get("nargs"),e.get("conv")))
for m in mods:
    print("==",m,len(mods[m]))
    print("  "+", ".join(f"{n}:{a}" for n,a,c in mods[m]))
