p="runtime/api_special.c"
s=open(p,encoding="utf-8").read()
old='''    if ((m >= 0x200 && m <= 0x206) || m == 0x20b || m == 0x20c) {
        RECT rc;
        if (GetClientRect(h, &rc) && rc.right > 0 && rc.bottom > 0) {
            int x = (short)LOWORD(l), y = (short)HIWORD(l);
            int vx = (int)((long long)x * 640 / rc.right), vy = (int)((long long)y * 480 / rc.bottom);
            int ox = (rc.right - 640) / 2, oy = (rc.bottom - 480) / 2;
            l = MAKELPARAM(vx + ox, vy + oy);
        }
    }'''
new='''    if ((m >= 0x200 && m <= 0x206) || m == 0x20b || m == 0x20c) {
        RECT rc;
        if (GetClientRect(h, &rc) && rc.right > 0 && rc.bottom > 0) {
            int x = (short)LOWORD(l), y = (short)HIWORD(l);
            int vx = (int)((long long)x * 640 / rc.right), vy = (int)((long long)y * 480 / rc.bottom);
            int ox = (rc.right - 640) / 2, oy = (rc.bottom - 480) / 2;
            if (log_on && m == 0x201) fprintf(stderr, "mouse %d,%d client %dx%d -> %d,%d\\n", x, y, rc.right, rc.bottom, vx + ox, vy + oy);
            l = MAKELPARAM(vx + ox, vy + oy);
        }
    }'''
assert old in s
s=s.replace(old,new)
open(p,"w",encoding="utf-8",newline="").write(s)
print("mouse log added")
