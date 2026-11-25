#include "protos.h"

void f_00448e71(void) /* GetMinSize */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00448e71);
    /* 00448e71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448e72: mov ebp, esp */ r_ebp = r_esp;
    /* 00448e74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448e75: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00448e78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00448e7b: mov ecx, dword ptr [eax + 0x1c90] */ r_ecx = R32((u32)(r_eax+0x1c90u));
    /* 00448e81: mov edx, dword ptr [eax + 0x1c94] */ r_edx = R32((u32)(r_eax+0x1c94u));
    /* 00448e87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00448e8a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00448e8c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00448e8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00448e91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00448e92: ret 4 */ FN_RET(0x00448e71); r_esp += 8; return;
}

