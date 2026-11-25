#include "protos.h"

void f_0042cbca(void) /* CMFCRibbonDefaultPanelButton */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042cbca);
    /* 0042cbca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042cbcb: mov ebp, esp */ r_ebp = r_esp;
    /* 0042cbcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042cbce: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042cbd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cbd4: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x42cbd9u); f_005e8590();
    /* 0042cbd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cbdc: mov dword ptr [eax], 0x63456c */ W32((u32)(r_eax), 0x63456cu);
    /* 0042cbe2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cbe5: mov dword ptr [ecx + 0x88c], 0 */ W32((u32)(r_ecx+0x88cu), 0x0u);
    /* 0042cbef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cbf2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042cbf5: mov dword ptr [edx + 0x888], eax */ W32((u32)(r_edx+0x888u), r_eax);
    /* 0042cbfb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cbfe: mov esp, ebp */ r_esp = r_ebp;
    /* 0042cc00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cc01: ret 4 */ FN_RET(0x0042cbca); r_esp += 8; return;
}

void f_0042cdad(void) /* CMFCRibbonDefaultPanelButton */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042cdad);
    /* 0042cdad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042cdae: mov ebp, esp */ r_ebp = r_esp;
    /* 0042cdb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042cdb1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042cdb4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cdb7: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x42cdbcu); f_005e8590();
    /* 0042cdbc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cdbf: mov dword ptr [eax], 0x6345bc */ W32((u32)(r_eax), 0x6345bcu);
    /* 0042cdc5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cdc8: mov dword ptr [ecx + 0x888], 0 */ W32((u32)(r_ecx+0x888u), 0x0u);
    /* 0042cdd2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cdd5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042cdd8: mov dword ptr [edx + 0x88c], eax */ W32((u32)(r_edx+0x88cu), r_eax);
    /* 0042cdde: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cde1: mov esp, ebp */ r_esp = r_ebp;
    /* 0042cde3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cde4: ret 4 */ FN_RET(0x0042cdad); r_esp += 8; return;
}

