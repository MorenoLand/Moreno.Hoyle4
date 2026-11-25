#include "protos.h"

void f_0047276a(void) /* CVSToolsListBox */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047276a);
    /* 0047276a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047276b: mov ebp, esp */ r_ebp = r_esp;
    /* 0047276d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047276e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472771: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472774: call 0x452d80 */ r_esp -= 4; W32(r_esp, 0x472779u); f_00452d80();
    /* 00472779: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047277c: mov dword ptr [eax], 0x635f84 */ W32((u32)(r_eax), 0x635f84u);
    /* 00472782: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472785: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00472788: mov dword ptr [ecx + 0x89c], edx */ W32((u32)(r_ecx+0x89cu), r_edx);
    /* 0047278e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472791: mov esp, ebp */ r_esp = r_ebp;
    /* 00472793: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472794: ret 4 */ FN_RET(0x0047276a); r_esp += 8; return;
}

