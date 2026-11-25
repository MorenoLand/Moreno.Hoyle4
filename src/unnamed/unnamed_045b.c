#include "protos.h"

void f_0045b9d1(void) /* SetRange */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b9d1);
    /* 0045b9d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b9d2: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b9d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b9d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b9d8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045b9db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b9dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045b9df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b9e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b9e3: call 0x45b9fe */ r_esp -= 4; W32(r_esp, 0x45b9e8u); f_0045b9fe();
    /* 0045b9e8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045b9eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b9ec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045b9ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b9f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b9f3: call 0x45bc4c */ r_esp -= 4; W32(r_esp, 0x45b9f8u); f_0045bc4c();
    /* 0045b9f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b9fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b9fb: ret 8 */ FN_RET(0x0045b9d1); r_esp += 12; return;
}

