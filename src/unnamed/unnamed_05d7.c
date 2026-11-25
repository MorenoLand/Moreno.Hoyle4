#include "protos.h"

void f_005d7422(void) /* SetFixedWidth */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7422);
    /* 005d7422: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7423: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7425: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7426: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7429: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d742c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d742f: mov dword ptr [eax + 0xf4], ecx */ W32((u32)(r_eax+0xf4u), r_ecx);
    /* 005d7435: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7438: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d743b: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 005d7441: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7443: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7444: ret 8 */ FN_RET(0x005d7422); r_esp += 12; return;
}

