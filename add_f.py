p="src/misc/FUN_48.c"
s=open(p,encoding="utf-8").read()
anchor="    /* 00610191: mov edx, dword ptr [ebp - 0x54] */"
mark='''    { u32 o = R32((u32)(r_ebp+0xffffffc0u)); u32 p10 = o ? R32(o + 0x10) : 0; u32 vt = p10 ? R32(p10) : 0; u32 tg = vt ? R32(vt + 4) : 0; fprintf(stderr, "ssdbg F obj=%08x f8=%08x f10=%08x f14=%08x fc=%08x vt=%08x tgt4=%08x\\n", o, o?R32(o+8):0, p10, o?R32(o+0x14):0, o?R32(o+0xc):0, vt, tg); }
'''
assert anchor in s
s=s.replace(anchor, mark+anchor,1)
open(p,"w",encoding="utf-8",newline="").write(s)
print("F added")
