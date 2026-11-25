import json, struct
d=json.load(open("pipeline/sos_args.json",encoding="utf-8"))
# real exports
x=open(r"D:\Games\CASINO4\SOS9503.DLL","rb").read()
pe=struct.unpack_from("<I",x,0x3c)[0]; nsec=struct.unpack_from("<H",x,pe+6)[0]; opt=struct.unpack_from("<H",x,pe+20)[0]
so=pe+24+opt; secs=[]
for i in range(nsec):
    off=so+40*i; nm=x[off:off+8].rstrip(b"\0").decode("latin1"); vsz,va,rsz,ro=struct.unpack_from("<IIII",x,off+8); secs.append((nm,va,vsz,ro,rsz))
def r2o(rva):
    for nm,va,vsz,ro,rsz in secs:
        if va<=rva<va+max(vsz,rsz): return ro+(rva-va)
o=r2o(struct.unpack_from("<I",x,pe+24+96)[0]); nn,=struct.unpack_from("<I",x,o+20)
anames,=struct.unpack_from("<I",x,o+0x20)
exports=set()
for i in range(nn):
    nr,=struct.unpack_from("<I",x,r2o(anames)+4*i); p=r2o(nr); e=x.find(b"\0",p); exports.add(x[p:e].decode())
missing=[k for k in d if k not in exports]
print("our names not in DLL exports:",missing)
for k in missing:
    cands=[e for e in exports if e.startswith(k[:26])]
    print(k,"->",cands)
# fix known truncations
fixes={"sosMIDIRegisterBranchFunctio":"sosMIDIRegisterBranchFunction","sosMIDIRegisterTriggerFuncti":"sosMIDIRegisterTriggerFunction","sosMIDIReleaseDigitalPatchFi":"sosMIDIReleaseDigitalPatchFile"}
for a,b in fixes.items():
    if a in d and b not in d:
        d[b]=d.pop(a)
json.dump(d,open("pipeline/sos_args.json","w",encoding="utf-8"),indent=1)
lines=["/* generated from pipeline/sos_args.json: Sierra SOS entry points and their stack argument counts. */","typedef struct { const char *name; int nargs; } SosName;","const SosName sos_names[] = {"]
for k in sorted(d): lines.append('    {"%s", %d},' % (k, d[k]))
lines+=["};","const int sos_names_n = %d;" % len(d)]
open("runtime/wasm/sos_gen.c","w",encoding="utf-8",newline="\n").write("\n".join(lines)+"\n")
print("names fixed",len(d))
