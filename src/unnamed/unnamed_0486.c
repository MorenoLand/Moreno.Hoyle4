#include "protos.h"

void f_00486e00(void) /* OnIdleUpdateCmdUI */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00486e00);
    /* 00486e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00486e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00486e07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486e0a: cmp dword ptr [eax + 0xec], 0 */ {  u32 a = R32((u32)(r_eax+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486e11: je 0x486e21 */ if (fZ) goto L_00486e21;
L_00486e13:; BB(0x00486e13);
    /* 00486e13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486e16: mov ecx, dword ptr [ecx + 0xec] */ r_ecx = R32((u32)(r_ecx+0xecu));
    /* 00486e1c: call 0x4891de */ r_esp -= 4; W32(r_esp, 0x486e21u); f_004891de();
L_00486e21:; BB(0x00486e21);
    /* 00486e21: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486e24: cmp dword ptr [edx + 0xcc], 0 */ {  u32 a = R32((u32)(r_edx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486e2b: je 0x486e3b */ if (fZ) goto L_00486e3b;
L_00486e2d:; BB(0x00486e2d);
    /* 00486e2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00486e30: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00486e36: call 0x4534e5 */ r_esp -= 4; W32(r_esp, 0x486e3bu); f_004534e5();
L_00486e3b:; BB(0x00486e3b);
    /* 00486e3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00486e3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486e3e: ret  */ FN_RET(0x00486e00); r_esp += 4; return;
}

