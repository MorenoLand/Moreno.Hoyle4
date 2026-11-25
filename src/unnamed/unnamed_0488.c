#include "protos.h"

void f_00488ebf(void) /* moneypunct<> */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00488ebf);
    /* 00488ebf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488ec0: mov ebp, esp */ r_ebp = r_esp;
    /* 00488ec2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488ec3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00488ec6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00488ec8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00488ecb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488ecc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488ecf: call 0x5d4ec0 */ r_esp -= 4; W32(r_esp, 0x488ed4u); f_005d4ec0();
    /* 00488ed4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488ed7: mov dword ptr [ecx], 0x636b54 */ W32((u32)(r_ecx), 0x636b54u);
    /* 00488edd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00488ee0: mov esp, ebp */ r_esp = r_ebp;
    /* 00488ee2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488ee3: ret 4 */ FN_RET(0x00488ebf); r_esp += 8; return;
}

