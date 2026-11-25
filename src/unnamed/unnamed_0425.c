#include "protos.h"

void f_00425b89(void) /* GetMinSize */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425b89);
    /* 00425b89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425b8a: mov ebp, esp */ r_ebp = r_esp;
    /* 00425b8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425b8d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425b90: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425b93: mov ecx, dword ptr [eax + 0x114] */ r_ecx = R32((u32)(r_eax+0x114u));
    /* 00425b99: mov edx, dword ptr [eax + 0x118] */ r_edx = R32((u32)(r_eax+0x118u));
    /* 00425b9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425ba2: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00425ba4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00425ba7: mov esp, ebp */ r_esp = r_ebp;
    /* 00425ba9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425baa: ret 4 */ FN_RET(0x00425b89); r_esp += 8; return;
}

void f_00425c80(void) /* GetMinSize */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425c80);
    /* 00425c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00425c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425c87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425c8a: mov ecx, dword ptr [eax + 0x11c] */ r_ecx = R32((u32)(r_eax+0x11cu));
    /* 00425c90: mov edx, dword ptr [eax + 0x120] */ r_edx = R32((u32)(r_eax+0x120u));
    /* 00425c96: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425c99: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00425c9b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00425c9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00425ca0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425ca1: ret 4 */ FN_RET(0x00425c80); r_esp += 8; return;
}

void f_00425d66(void) /* GetMinSize */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425d66);
    /* 00425d66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425d67: mov ebp, esp */ r_ebp = r_esp;
    /* 00425d69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425d6a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425d6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425d70: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 00425d76: mov edx, dword ptr [eax + 0x128] */ r_edx = R32((u32)(r_eax+0x128u));
    /* 00425d7c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425d7f: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00425d81: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00425d84: mov esp, ebp */ r_esp = r_ebp;
    /* 00425d86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425d87: ret 4 */ FN_RET(0x00425d66); r_esp += 8; return;
}

