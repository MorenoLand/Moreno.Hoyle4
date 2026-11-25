#include "protos.h"

void f_00458972(void) /* moneypunct<> */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458972);
    /* 00458972: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458973: mov ebp, esp */ r_ebp = r_esp;
    /* 00458975: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458976: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00458979: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045897b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045897e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045897f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458982: call 0x5d4ec0 */ r_esp -= 4; W32(r_esp, 0x458987u); f_005d4ec0();
    /* 00458987: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045898a: mov dword ptr [ecx], 0x6354bc */ W32((u32)(r_ecx), 0x6354bcu);
    /* 00458990: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458993: mov esp, ebp */ r_esp = r_ebp;
    /* 00458995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458996: ret 4 */ FN_RET(0x00458972); r_esp += 8; return;
}

