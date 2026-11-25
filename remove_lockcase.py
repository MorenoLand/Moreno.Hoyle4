p="runtime/api_special.c"
s=open(p,encoding="utf-8").read()
start=s.find("    case S_CREATEWINDOW: {")
end=s.find("    case S_COCREATEINSTANCE: {", start)
assert start>0 and end>start
s=s[:start]+s[end:]
open(p,"w",encoding="utf-8",newline="").write(s)
print("S_CREATEWINDOW case removed; maximize enabled")
