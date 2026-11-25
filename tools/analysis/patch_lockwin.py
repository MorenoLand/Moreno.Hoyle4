p="runtime/api_special.c"
s=open(p,encoding="utf-8").read()
s=s.replace("S_CREATEFILE, S_WRITEFILE, S_CLOSEHANDLE, S_SWAPBUFFERS, S_INITTERM, S_INITTERM_E, S_GETMALLOC, S_QSORT, S_BEGINTHREAD, S_BEGINTHREADEX, S_ENDTHREAD, S_BSEARCH, S_CIPOW, S_SETDIBITS, S_MATHFP, S_COCREATEINSTANCE",
            "S_CREATEFILE, S_WRITEFILE, S_CLOSEHANDLE, S_SWAPBUFFERS, S_INITTERM, S_INITTERM_E, S_GETMALLOC, S_QSORT, S_BEGINTHREAD, S_BEGINTHREADEX, S_ENDTHREAD, S_BSEARCH, S_CIPOW, S_SETDIBITS, S_MATHFP, S_COCREATEINSTANCE, S_CREATEWINDOW")
s=s.replace('{"CoCreateInstance", S_COCREATEINSTANCE},','{"CoCreateInstance", S_COCREATEINSTANCE}, {"CreateWindowExA", S_CREATEWINDOW},')
anchor="    case S_COCREATEINSTANCE: {"
case='''    case S_CREATEWINDOW: {
        u32 b[12] = { a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11] };
        static int first = 1;
        if (first && !(b[3] & 0x40000000u)) {
            b[3] &= ~(0x00040000u | 0x00010000u);
            first = 0;
        }
        return api_call_real(e, b);
    }
'''
assert anchor in s
s=s.replace(anchor, case+anchor,1)
open(p,"w",encoding="utf-8",newline="").write(s)
print("createwindow resize lock added")
