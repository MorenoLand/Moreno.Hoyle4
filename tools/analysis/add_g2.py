p="src/misc/FUN_48.c"
s=open(p,encoding="utf-8").read()
anchor="    /* 006101d6: mov ecx, dword ptr [ebp - 0x18] */"
mark='    { u32 o2 = R32((u32)(r_ebp+0xffffffc0u)); fprintf(stderr, "ssdbg G2 obj=%08x f8=%08x l18=%08x esp=%08x\\n", o2, o2?R32(o2+8):0, R32((u32)(r_ebp+0xffffffe8u)), r_esp); }\n'
assert anchor in s
s=s.replace(anchor, mark+anchor,1)
open(p,"w",encoding="utf-8",newline="").write(s)
print("G2 added")
