p="runtime/rt.c"
s=open(p,encoding="utf-8").read()
old='''    fprintf(stderr, "trace %s frame=%08x dst=%08x src=%08x len=%u saved=%08x dst0=%.40s\\n",
            where, frame, dst, (u32)(uintptr_t)src, src ? (unsigned)strlen(src) : 0u,
            R32(frame), dst ? (const char *)(uintptr_t)dst : "");'''
new='''    fprintf(stderr, "trace %s frame=%08x dst=%08x src=%08x len=%u saved=%08x ret=%08x src64=%02x%02x%02x%02x%02x%02x%02x%02x\\n",
            where, frame, dst, (u32)(uintptr_t)src, src ? (unsigned)strlen(src) : 0u,
            R32(frame), R32(frame + 4),
            src ? (unsigned char)src[64] : 0, src ? (unsigned char)src[65] : 0,
            src ? (unsigned char)src[66] : 0, src ? (unsigned char)src[67] : 0,
            src ? (unsigned char)src[68] : 0, src ? (unsigned char)src[69] : 0,
            src ? (unsigned char)src[70] : 0, src ? (unsigned char)src[71] : 0);'''
assert old in s
open(p,"w",encoding="utf-8").write(s.replace(old,new))
print("patched")
