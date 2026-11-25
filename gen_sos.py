import json
d=json.load(open("pipeline/sos_args.json",encoding="utf-8"))
lines=["/* generated from pipeline/sos_args.json: Sierra SOS entry points and their stack argument counts. */","typedef struct { const char *name; int nargs; } SosName;","const SosName sos_names[] = {"]
for k in sorted(d): lines.append('    {"%s", %d},' % (k, d[k]))
lines.append("};")
lines.append("const int sos_names_n = %d;" % len(d))
open("runtime/wasm/sos_gen.c","w",encoding="utf-8",newline="\n").write("\n".join(lines)+"\n")
print("wrote sos_gen.c", len(d))
