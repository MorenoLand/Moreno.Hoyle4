p="runtime/api_special.c"
s=open(p,encoding="utf-8").read()
old='''static WNDPROC g_wndproc_tramp;
static LRESULT CALLBACK wndlog_proc(HWND h, UINT m, WPARAM w, LPARAM l)
{
    if (m == 0x5 || m == 0x200 || m == 0x201 || m == 0x202 || m == 0x204 || m == 0x1)
        fprintf(stderr, "wndmsg %04x w=%08x l=%08x\\n", m, (unsigned)w, (unsigned)l);
    return g_wndproc_tramp(h, m, w, l);
}'''
new='''static WNDPROC g_wndproc_tramp;
static LRESULT CALLBACK host_wndproc(HWND h, UINT m, WPARAM w, LPARAM l)
{
    static int log_on = -1;
    if (log_on < 0) log_on = getenv("RECOMP_WNDLOG") ? 1 : 0;
    if ((m >= 0x200 && m <= 0x206) || m == 0x20b || m == 0x20c) {
        RECT rc;
        if (GetClientRect(h, &rc) && rc.right > 0 && rc.bottom > 0) {
            int x = (short)LOWORD(l), y = (short)HIWORD(l);
            int vx = (int)((long long)x * 640 / rc.right), vy = (int)((long long)y * 480 / rc.bottom);
            int ox = (rc.right - 640) / 2, oy = (rc.bottom - 480) / 2;
            l = MAKELPARAM(vx + ox, vy + oy);
        }
    }
    if (log_on && (m == 0x5 || m == 0x200 || m == 0x201 || m == 0x202 || m == 0x204 || m == 0x1))
        fprintf(stderr, "wndmsg %04x w=%08x l=%08x\\n", m, (unsigned)w, (unsigned)l);
    return g_wndproc_tramp(h, m, w, l);
}'''
assert old in s
s=s.replace(old,new)
s=s.replace('''        WNDPROC tp = (WNDPROC)(uintptr_t)wndproc((u32)(uintptr_t)wc.lpfnWndProc);
        if (getenv("RECOMP_WNDLOG")) { g_wndproc_tramp = tp; wc.lpfnWndProc = wndlog_proc; } else wc.lpfnWndProc = tp;''',
'''        WNDPROC tp = (WNDPROC)(uintptr_t)wndproc((u32)(uintptr_t)wc.lpfnWndProc);
        g_wndproc_tramp = tp; wc.lpfnWndProc = host_wndproc;''')
open(p,"w",encoding="utf-8",newline="").write(s)
print("host wndproc input mapping")
