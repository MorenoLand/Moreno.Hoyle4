import csv
p="ida/functions.tsv"
rows=list(csv.DictReader(open(p,encoding="utf-8"),delimiter="\t"))
addrs=sorted(int(r["address"],16) for r in rows)
extra=[0x624ab0,0x62c330,0x630520,0x62c3f0,0x630540]
add=sorted(set(extra)-set(addrs))
with open(p,"a",encoding="utf-8",newline="\n") as f:
    for ea in add:
        nxt=next((a for a in addrs if a>ea), 0x633000)
        f.write("%08x\tsub_%08x\t%d\t0\n" % (ea,ea,max(1,nxt-ea)))
        print("added %08x size %d" % (ea,max(1,nxt-ea)))
