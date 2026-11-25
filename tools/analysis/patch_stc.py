p="runtime/api_special.c"
s=open(p,encoding="utf-8").read()
s=s.replace('{"CoCreateInstance", S_COCREATEINSTANCE}, {"CreateWindowExA", S_CREATEWINDOW},','{"CoCreateInstance", S_COCREATEINSTANCE}, {"ScreenToClient", S_SCREENTOCLIENT},')
s=s.replace(", S_COCREATEINSTANCE, S_CREATEWINDOW", ", S_COCREATEINSTANCE, S_SCREENTOCLIENT")
anchor="    case S_CREATEWINDOW: {"
case='''    case S_SCREENTOCLIENT: {
        u64 r = api_call_real(e, a);
        if (a[0] && a[1]) {
            RECT rc;
            if (GetClientRect((HWND)(uintptr_t)a[0], &rc) && rc.right > 0 && rc.bottom > 0 && (rc.right != 640 || rc.bottom != 480)) {
                POINT *pt = (POINT *)(uintptr_t)a[1];
                int vx = (int)((long long)pt->x * 640 / rc.right), vy = (int)((long long)pt->y * 480 / rc.bottom);
                pt->x = vx + (rc.right - 640) / 2;
                pt->y = vy + (rc.bottom - 480) / 2;
            }
        }
        return r;
    }
'''
assert anchor in s
s=s.replace(anchor, case+anchor,1)
open(p,"w",encoding="utf-8",newline="").write(s)
print("screentoclient map added; window lock removed from table")
