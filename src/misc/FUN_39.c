#include "protos.h"

void f_005d0a40(void) /* FUN_005d0a40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0a40);
    /* 005d0a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a41: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0a47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0a4a: call 0x5c8401 */ r_esp -= 4; W32(r_esp, 0x5d0a4fu); f_005c8401();
    /* 005d0a4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0a52: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d0a55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0a57: je 0x5d0a65 */ if (fZ) goto L_005d0a65;
L_005d0a59:; BB(0x005d0a59);
    /* 005d0a59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0a5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a5d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0a62u); f_0048ac1b();
    /* 005d0a62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0a65:; BB(0x005d0a65);
    /* 005d0a65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0a68: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0a6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0a6b: ret 4 */ FN_RET(0x005d0a40); r_esp += 8; return;
}

void f_005d0a70(void) /* FUN_005d0a70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0a70);
    /* 005d0a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a71: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0a73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0a77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0a7a: call 0x5c86be */ r_esp -= 4; W32(r_esp, 0x5d0a7fu); f_005c86be();
    /* 005d0a7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0a82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d0a85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0a87: je 0x5d0a95 */ if (fZ) goto L_005d0a95;
L_005d0a89:; BB(0x005d0a89);
    /* 005d0a89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0a8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a8d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0a92u); f_0048ac1b();
    /* 005d0a92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0a95:; BB(0x005d0a95);
    /* 005d0a95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0a98: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0a9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0a9b: ret 4 */ FN_RET(0x005d0a70); r_esp += 8; return;
}

void f_005d0aa0(void) /* FUN_005d0aa0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0aa0);
    /* 005d0aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0aa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0aaa: call 0x5caef3 */ r_esp -= 4; W32(r_esp, 0x5d0aafu); f_005caef3();
    /* 005d0aaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0ab2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d0ab5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0ab7: je 0x5d0ac5 */ if (fZ) goto L_005d0ac5;
L_005d0ab9:; BB(0x005d0ab9);
    /* 005d0ab9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0abc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0abd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0ac2u); f_0048ac1b();
    /* 005d0ac2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0ac5:; BB(0x005d0ac5);
    /* 005d0ac5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0ac8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0aca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0acb: ret 4 */ FN_RET(0x005d0aa0); r_esp += 8; return;
}

void f_005d0ad0(void) /* FUN_005d0ad0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0ad0);
    /* 005d0ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0ad7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0ada: call 0x5cb863 */ r_esp -= 4; W32(r_esp, 0x5d0adfu); f_005cb863();
    /* 005d0adf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0ae2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d0ae5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0ae7: je 0x5d0af5 */ if (fZ) goto L_005d0af5;
L_005d0ae9:; BB(0x005d0ae9);
    /* 005d0ae9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0aec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0aed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0af2u); f_0048ac1b();
    /* 005d0af2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0af5:; BB(0x005d0af5);
    /* 005d0af5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0af8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0afa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0afb: ret 4 */ FN_RET(0x005d0ad0); r_esp += 8; return;
}

void f_005d0b00(void) /* FUN_005d0b00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0b00);
    /* 005d0b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b01: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0b07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0b0a: call 0x424813 */ r_esp -= 4; W32(r_esp, 0x5d0b0fu); f_00424813();
    /* 005d0b0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0b12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d0b15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0b17: je 0x5d0b25 */ if (fZ) goto L_005d0b25;
L_005d0b19:; BB(0x005d0b19);
    /* 005d0b19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0b1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b1d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0b22u); f_0048ac1b();
    /* 005d0b22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0b25:; BB(0x005d0b25);
    /* 005d0b25: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0b28: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0b2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0b2b: ret 4 */ FN_RET(0x005d0b00); r_esp += 8; return;
}

void f_005d0b30(void) /* FUN_005d0b30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0b30);
    /* 005d0b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b31: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0b37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0b3a: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x5d0b3fu); f_005e9dde();
    /* 005d0b3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0b42: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d0b45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0b47: je 0x5d0b55 */ if (fZ) goto L_005d0b55;
L_005d0b49:; BB(0x005d0b49);
    /* 005d0b49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0b4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b4d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0b52u); f_0048ac1b();
    /* 005d0b52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0b55:; BB(0x005d0b55);
    /* 005d0b55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0b58: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0b5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0b5b: ret 4 */ FN_RET(0x005d0b30); r_esp += 8; return;
}

void f_005d0b60(void) /* FUN_005d0b60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0b60);
    /* 005d0b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0b63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0b67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0b6a: fild dword ptr [eax + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x30u)));
    /* 005d0b6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0b70: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0b73: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 005d0b76: fmul dword ptr [edx + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x34u));
    /* 005d0b79: fsubr dword ptr [0x63aee8] */ ST(0) = R_F32((u32)(0x63aee8u)) - ST(0);
    /* 005d0b7f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005d0b81: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0b83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0b84: ret  */ FN_RET(0x005d0b60); r_esp += 4; return;
}

void f_005d0b90(void) /* FUN_005d0b90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0b90);
    /* 005d0b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b91: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0b93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0b97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0b9a: mov dword ptr [eax], 0x63aef4 */ W32((u32)(r_eax), 0x63aef4u);
    /* 005d0ba0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0ba3: call 0x5df764 */ r_esp -= 4; W32(r_esp, 0x5d0ba8u); f_005df764();
    /* 005d0ba8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d0bab: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0bae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0bb0: je 0x5d0bbe */ if (fZ) goto L_005d0bbe;
L_005d0bb2:; BB(0x005d0bb2);
    /* 005d0bb2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0bb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0bb6: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0bbbu); f_0048ac1b();
    /* 005d0bbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0bbe:; BB(0x005d0bbe);
    /* 005d0bbe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0bc1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0bc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0bc4: ret 4 */ FN_RET(0x005d0b90); r_esp += 8; return;
}

void f_005d0bd0(void) /* FUN_005d0bd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0bd0);
    /* 005d0bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0bd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0bd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0bda: mov dword ptr [eax], 0x63af0c */ W32((u32)(r_eax), 0x63af0cu);
    /* 005d0be0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0be3: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x5d0be8u); f_005e3fed();
    /* 005d0be8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d0beb: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0bee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0bf0: je 0x5d0bfe */ if (fZ) goto L_005d0bfe;
L_005d0bf2:; BB(0x005d0bf2);
    /* 005d0bf2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0bf5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0bf6: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0bfbu); f_0048ac1b();
    /* 005d0bfb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0bfe:; BB(0x005d0bfe);
    /* 005d0bfe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c01: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0c03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0c04: ret 4 */ FN_RET(0x005d0bd0); r_esp += 8; return;
}

void f_005d0c10(void) /* FUN_005d0c10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0c10);
    /* 005d0c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c11: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0c13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0c17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c1a: call 0x5cf883 */ r_esp -= 4; W32(r_esp, 0x5d0c1fu); f_005cf883();
    /* 005d0c1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0c22: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d0c25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0c27: je 0x5d0c35 */ if (fZ) goto L_005d0c35;
L_005d0c29:; BB(0x005d0c29);
    /* 005d0c29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c2d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0c32u); f_0048ac1b();
    /* 005d0c32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0c35:; BB(0x005d0c35);
    /* 005d0c35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c38: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0c3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0c3b: ret 4 */ FN_RET(0x005d0c10); r_esp += 8; return;
}

void f_005d0c40(void) /* FUN_005d0c40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0c40);
    /* 005d0c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c41: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0c47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c4a: call 0x5cf9e3 */ r_esp -= 4; W32(r_esp, 0x5d0c4fu); f_005cf9e3();
    /* 005d0c4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0c52: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d0c55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0c57: je 0x5d0c65 */ if (fZ) goto L_005d0c65;
L_005d0c59:; BB(0x005d0c59);
    /* 005d0c59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c5d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0c62u); f_0048ac1b();
    /* 005d0c62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0c65:; BB(0x005d0c65);
    /* 005d0c65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c68: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0c6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0c6b: ret 4 */ FN_RET(0x005d0c40); r_esp += 8; return;
}

void f_005d0c70(void) /* FUN_005d0c70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0c70);
    /* 005d0c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c71: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0c77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c7a: call 0x5cffb8 */ r_esp -= 4; W32(r_esp, 0x5d0c7fu); f_005cffb8();
    /* 005d0c7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0c82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d0c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0c87: je 0x5d0c95 */ if (fZ) goto L_005d0c95;
L_005d0c89:; BB(0x005d0c89);
    /* 005d0c89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c8d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0c92u); f_0048ac1b();
    /* 005d0c92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0c95:; BB(0x005d0c95);
    /* 005d0c95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c98: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0c9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0c9b: ret 4 */ FN_RET(0x005d0c70); r_esp += 8; return;
}

void f_005d0ca0(void) /* FUN_005d0ca0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0ca0);
    /* 005d0ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0ca7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0caa: mov dword ptr [eax], 0x63affc */ W32((u32)(r_eax), 0x63affcu);
    /* 005d0cb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0cb3: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5d0cb8u); f_005d5dfb();
    /* 005d0cb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d0cbb: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0cbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0cc0: je 0x5d0cce */ if (fZ) goto L_005d0cce;
L_005d0cc2:; BB(0x005d0cc2);
    /* 005d0cc2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0cc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0cc6: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0ccbu); f_0048ac1b();
    /* 005d0ccb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0cce:; BB(0x005d0cce);
    /* 005d0cce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0cd1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0cd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0cd4: ret 4 */ FN_RET(0x005d0ca0); r_esp += 8; return;
}

void f_005d0ce0(void) /* FUN_005d0ce0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0ce0);
    /* 005d0ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0ce7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0cea: mov dword ptr [eax], 0x63b06c */ W32((u32)(r_eax), 0x63b06cu);
    /* 005d0cf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0cf3: call 0x5d7927 */ r_esp -= 4; W32(r_esp, 0x5d0cf8u); f_005d7927();
    /* 005d0cf8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d0cfb: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0cfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0d00: je 0x5d0d0e */ if (fZ) goto L_005d0d0e;
L_005d0d02:; BB(0x005d0d02);
    /* 005d0d02: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0d05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d06: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d0d0bu); f_0048ac1b();
    /* 005d0d0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0d0e:; BB(0x005d0d0e);
    /* 005d0d0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0d11: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0d13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0d14: ret 4 */ FN_RET(0x005d0ce0); r_esp += 8; return;
}

void f_005d0d20(void) /* FUN_005d0d20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0d20);
    /* 005d0d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d21: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0d27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0d2a: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x5d0d2fu); f_00446fe0();
    /* 005d0d2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0d32: mov dword ptr [eax], 0x63b084 */ W32((u32)(r_eax), 0x63b084u);
    /* 005d0d38: push 0x699488 */ { u32 v = 0x699488u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d3d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d0d43: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5d0d48u); f_005da413();
    /* 005d0d48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0d4b: mov dword ptr [0x6fc0e0], ecx */ W32((u32)(0x6fc0e0u), r_ecx);
    /* 005d0d51: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0d54: mov dword ptr [edx + 0x1cb0], 0 */ W32((u32)(r_edx+0x1cb0u), 0x0u);
    /* 005d0d5e: push 0x1adbe */ { u32 v = 0x1adbeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0d66: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5d0d6bu); f_005e5ec3();
    /* 005d0d6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0d6e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0d70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0d71: ret  */ FN_RET(0x005d0d20); r_esp += 4; return;
}

void f_005d0d72(void) /* FUN_005d0d72 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0d72);
    /* 005d0d72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d73: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0d75: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0d78: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d0d7b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0d7e: mov dword ptr [eax], 0x63b084 */ W32((u32)(r_eax), 0x63b084u);
    /* 005d0d84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d86: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d0d8c: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5d0d91u); f_005da413();
    /* 005d0d91: cmp dword ptr [0x6fc0e4], 0 */ {  u32 a = R32((u32)(0x6fc0e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0d98: je 0x5d0dd1 */ if (fZ) goto L_005d0dd1;
L_005d0d9a:; BB(0x005d0d9a);
    /* 005d0d9a: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d0da0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d0da3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0da6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d0da9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0dad: je 0x5d0dc0 */ if (fZ) goto L_005d0dc0;
L_005d0daf:; BB(0x005d0daf);
    /* 005d0daf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0db1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0db4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0db6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0db9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d0dbbu); call_ind(t); }
    /* 005d0dbb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d0dbe: jmp 0x5d0dc7 */ goto L_005d0dc7;
L_005d0dc0:; BB(0x005d0dc0);
    /* 005d0dc0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d0dc7:; BB(0x005d0dc7);
    /* 005d0dc7: mov dword ptr [0x6fc0e4], 0 */ W32((u32)(0x6fc0e4u), 0x0u);
L_005d0dd1:; BB(0x005d0dd1);
    /* 005d0dd1: mov dword ptr [0x6fc0e0], 0 */ W32((u32)(0x6fc0e0u), 0x0u);
    /* 005d0ddb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0dde: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x5d0de3u); f_0044711a();
    /* 005d0de3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0de5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0de6: ret  */ FN_RET(0x005d0d72); r_esp += 4; return;
}

void f_005d0de7(void) /* FUN_005d0de7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0de7);
    /* 005d0de7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0de8: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0dea: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0ded: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d0df0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0df3: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x5d0df8u); f_004476a6();
    /* 005d0df8: cmp dword ptr [0x6fc0e4], 0 */ {  u32 a = R32((u32)(0x6fc0e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0dff: jne 0x5d0e33 */ if (!fZ) goto L_005d0e33;
L_005d0e01:; BB(0x005d0e01);
    /* 005d0e01: push 0x3bc */ { u32 v = 0x3bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e06: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d0e0bu); f_0048ab58();
    /* 005d0e0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0e0e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d0e11: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0e15: je 0x5d0e24 */ if (fZ) goto L_005d0e24;
L_005d0e17:; BB(0x005d0e17);
    /* 005d0e17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0e1a: call 0x5cb6e4 */ r_esp -= 4; W32(r_esp, 0x5d0e1fu); f_005cb6e4();
    /* 005d0e1f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d0e22: jmp 0x5d0e2b */ goto L_005d0e2b;
L_005d0e24:; BB(0x005d0e24);
    /* 005d0e24: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d0e2b:; BB(0x005d0e2b);
    /* 005d0e2b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0e2e: mov dword ptr [0x6fc0e4], eax */ W32((u32)(0x6fc0e4u), r_eax);
L_005d0e33:; BB(0x005d0e33);
    /* 005d0e33: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e35: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d0e3au); f_0048ab58();
    /* 005d0e3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0e3d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d0e40: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0e44: je 0x5d0e61 */ if (fZ) goto L_005d0e61;
L_005d0e46:; BB(0x005d0e46);
    /* 005d0e46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0e4b: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5d0e50u); f_005e6160();
    /* 005d0e50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0e53: mov dword ptr [ecx], 0x63b13c */ W32((u32)(r_ecx), 0x63b13cu);
    /* 005d0e59: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0e5c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d0e5f: jmp 0x5d0e68 */ goto L_005d0e68;
L_005d0e61:; BB(0x005d0e61);
    /* 005d0e61: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005d0e68:; BB(0x005d0e68);
    /* 005d0e68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0e6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0e6f: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x5d0e74u); f_005e5d66();
    /* 005d0e74: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0e76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0e77: ret  */ FN_RET(0x005d0de7); r_esp += 4; return;
}

void f_005d0e78(void) /* FUN_005d0e78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0e78);
    /* 005d0e78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e79: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0e7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e7c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0e7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0e82: call 0x4240a0 */ r_esp -= 4; W32(r_esp, 0x5d0e87u); f_004240a0();
    /* 005d0e87: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0e8e: je 0x5d0e9b */ if (fZ) goto L_005d0e9b;
L_005d0e90:; BB(0x005d0e90);
    /* 005d0e90: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 005d0e96: call 0x5d2351 */ r_esp -= 4; W32(r_esp, 0x5d0e9bu); f_005d2351();
L_005d0e9b:; BB(0x005d0e9b);
    /* 005d0e9b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0e9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0e9e: ret  */ FN_RET(0x005d0e78); r_esp += 4; return;
}

void f_005d0e9f(void) /* FUN_005d0e9f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0e9f);
    /* 005d0e9f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ea0: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0ea2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0ea5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d0ea8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0eaf: jmp 0x5d0eba */ goto L_005d0eba;
L_005d0eb1:; BB(0x005d0eb1);
    /* 005d0eb1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0eb4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d0eb7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d0eba:; BB(0x005d0eba);
    /* 005d0eba: cmp dword ptr [ebp - 4], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0ec1: jge 0x5d0ee6 */ if ((fS==fO)) goto L_005d0ee6;
L_005d0ec3:; BB(0x005d0ec3);
    /* 005d0ec3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d0ec6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ec7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0eca: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d0ecf: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005d0ed3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0ed6: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d0edb: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005d0edf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d0ee1: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5d0ee4u); call_ind(t); }
    /* 005d0ee4: jmp 0x5d0eb1 */ goto L_005d0eb1;
L_005d0ee6:; BB(0x005d0ee6);
    /* 005d0ee6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0ee8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0ee9: ret 4 */ FN_RET(0x005d0e9f); r_esp += 8; return;
}

void f_005d0eec(void) /* FUN_005d0eec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0eec);
    /* 005d0eec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0eed: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0eef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ef0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0ef3: cmp dword ptr [0x6fc0e4], 0 */ {  u32 a = R32((u32)(0x6fc0e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0efa: je 0x5d0f09 */ if (fZ) goto L_005d0f09;
L_005d0efc:; BB(0x005d0efc);
    /* 005d0efc: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d0f02: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5d0f07u); f_005cd326();
    /* 005d0f07: jmp 0x5d0f0b */ goto L_005d0f0b;
L_005d0f09:; BB(0x005d0f09);
    /* 005d0f09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d0f0b:; BB(0x005d0f0b);
    /* 005d0f0b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0f0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0f0e: ret  */ FN_RET(0x005d0eec); r_esp += 4; return;
}

void f_005d0f0f(void) /* FUN_005d0f0f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0f0f);
    /* 005d0f0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0f10: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0f12: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0f15: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d0f18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0f1f: jmp 0x5d0f2a */ goto L_005d0f2a;
L_005d0f21:; BB(0x005d0f21);
    /* 005d0f21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0f24: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d0f27: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d0f2a:; BB(0x005d0f2a);
    /* 005d0f2a: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0f2e: jge 0x5d0f58 */ if ((fS==fO)) goto L_005d0f58;
L_005d0f30:; BB(0x005d0f30);
    /* 005d0f30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0f33: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d0f39: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d0f3d: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x5d0f42u); f_004259f1();
    /* 005d0f42: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0f45: jne 0x5d0f56 */ if (!fZ) goto L_005d0f56;
L_005d0f47:; BB(0x005d0f47);
    /* 005d0f47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0f4a: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d0f50: mov eax, dword ptr [ecx + eax*4 + 0x10] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d0f54: jmp 0x5d0f5a */ goto L_005d0f5a;
L_005d0f56:; BB(0x005d0f56);
    /* 005d0f56: jmp 0x5d0f21 */ goto L_005d0f21;
L_005d0f58:; BB(0x005d0f58);
    /* 005d0f58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d0f5a:; BB(0x005d0f5a);
    /* 005d0f5a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0f5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0f5d: ret 4 */ FN_RET(0x005d0f0f); r_esp += 8; return;
}

void f_005d0f60(void) /* FUN_005d0f60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0f60);
    /* 005d0f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0f61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0f63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0f66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d0f69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0f70: jmp 0x5d0f7b */ goto L_005d0f7b;
L_005d0f72:; BB(0x005d0f72);
    /* 005d0f72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0f75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d0f78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d0f7b:; BB(0x005d0f7b);
    /* 005d0f7b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0f7f: jge 0x5d0fb7 */ if ((fS==fO)) goto L_005d0fb7;
L_005d0f81:; BB(0x005d0f81);
    /* 005d0f81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0f84: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d0f8a: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0f8f: je 0x5d0fb5 */ if (fZ) goto L_005d0fb5;
L_005d0f91:; BB(0x005d0f91);
    /* 005d0f91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0f94: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d0f9a: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d0f9e: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d0fa1: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0fa4: jne 0x5d0fb5 */ if (!fZ) goto L_005d0fb5;
L_005d0fa6:; BB(0x005d0fa6);
    /* 005d0fa6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0fa9: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d0faf: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d0fb3: jmp 0x5d0fb9 */ goto L_005d0fb9;
L_005d0fb5:; BB(0x005d0fb5);
    /* 005d0fb5: jmp 0x5d0f72 */ goto L_005d0f72;
L_005d0fb7:; BB(0x005d0fb7);
    /* 005d0fb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d0fb9:; BB(0x005d0fb9);
    /* 005d0fb9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0fbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0fbc: ret 4 */ FN_RET(0x005d0f60); r_esp += 8; return;
}

void f_005d0fbf(void) /* FUN_005d0fbf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0fbf);
    /* 005d0fbf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0fc0: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0fc2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0fc5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d0fc8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0fcf: jmp 0x5d0fda */ goto L_005d0fda;
L_005d0fd1:; BB(0x005d0fd1);
    /* 005d0fd1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0fd4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d0fd7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d0fda:; BB(0x005d0fda);
    /* 005d0fda: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0fde: jge 0x5d1039 */ if ((fS==fO)) goto L_005d1039;
L_005d0fe0:; BB(0x005d0fe0);
    /* 005d0fe0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0fe3: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d0fe9: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0fee: je 0x5d1037 */ if (fZ) goto L_005d1037;
L_005d0ff0:; BB(0x005d0ff0);
    /* 005d0ff0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0ff3: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d0ff9: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d0ffd: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5d1002u); f_004259a0();
    /* 005d1002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1004: je 0x5d1037 */ if (fZ) goto L_005d1037;
L_005d1006:; BB(0x005d1006);
    /* 005d1006: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d1009: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d100a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d100d: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d1013: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d1017: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x5d101cu); f_004259cd();
    /* 005d101c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d101d: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5d1022u); f_006240c0();
    /* 005d1022: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1025: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1027: jne 0x5d1037 */ if (!fZ) goto L_005d1037;
L_005d1029:; BB(0x005d1029);
    /* 005d1029: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d102c: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d1031: mov eax, dword ptr [eax + edx*4 + 0x10] */ r_eax = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d1035: jmp 0x5d103b */ goto L_005d103b;
L_005d1037:; BB(0x005d1037);
    /* 005d1037: jmp 0x5d0fd1 */ goto L_005d0fd1;
L_005d1039:; BB(0x005d1039);
    /* 005d1039: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d103b:; BB(0x005d103b);
    /* 005d103b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d103d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d103e: ret 4 */ FN_RET(0x005d0fbf); r_esp += 8; return;
}

void f_005d1041(void) /* FUN_005d1041 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1041);
    /* 005d1041: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1042: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1044: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1047: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d104a: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1051: jne 0x5d106d */ if (!fZ) goto L_005d106d;
L_005d1053:; BB(0x005d1053);
    /* 005d1053: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1055: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d105b: call 0x5cc586 */ r_esp -= 4; W32(r_esp, 0x5d1060u); f_005cc586();
    /* 005d1060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1062: je 0x5d106d */ if (fZ) goto L_005d106d;
L_005d1064:; BB(0x005d1064);
    /* 005d1064: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005d106b: jmp 0x5d1074 */ goto L_005d1074;
L_005d106d:; BB(0x005d106d);
    /* 005d106d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005d1074:; BB(0x005d1074);
    /* 005d1074: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d1077: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1079: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d107a: ret  */ FN_RET(0x005d1041); r_esp += 4; return;
}

void f_005d107b(void) /* FUN_005d107b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d107b);
    /* 005d107b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d107c: mov ebp, esp */ r_ebp = r_esp;
    /* 005d107e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d107f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d1082: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d1088: call 0x5cc3b6 */ r_esp -= 4; W32(r_esp, 0x5d108du); f_005cc3b6();
    /* 005d108d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d108f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1090: ret  */ FN_RET(0x005d107b); r_esp += 4; return;
}

void f_005d1091(void) /* FUN_005d1091 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1091);
    /* 005d1091: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1092: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1094: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1095: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d1098: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d109b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d109c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d109f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d10a0: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d10a6: call 0x5ceaad */ r_esp -= 4; W32(r_esp, 0x5d10abu); f_005ceaad();
    /* 005d10ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005d10ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d10ae: ret 8 */ FN_RET(0x005d1091); r_esp += 12; return;
}

void f_005d10b1(void) /* FUN_005d10b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d10b1);
    /* 005d10b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d10b2: mov ebp, esp */ r_ebp = r_esp;
    /* 005d10b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d10b5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d10b8: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d10bd: mov eax, dword ptr [eax + 0x394] */ r_eax = R32((u32)(r_eax+0x394u));
    /* 005d10c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d10c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d10c6: ret  */ FN_RET(0x005d10b1); r_esp += 4; return;
}

void f_005d10c7(void) /* FUN_005d10c7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d10c7);
    /* 005d10c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d10c8: mov ebp, esp */ r_ebp = r_esp;
    /* 005d10ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d10cb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d10ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d10d0: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d10d6: call 0x5cc5a5 */ r_esp -= 4; W32(r_esp, 0x5d10dbu); f_005cc5a5();
    /* 005d10db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d10dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d10e0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d10e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d10e6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d10e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d10eb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d10eeu); call_ind(t); }
    /* 005d10ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d10f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d10f3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d10f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d10f9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d10fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d10fe: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d1101u); call_ind(t); }
    /* 005d1101: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1104: ret  */ FN_RET(0x005d10c7); r_esp += 4; return;
}

void f_005d1105(void) /* FUN_005d1105 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1105);
    /* 005d1105: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1106: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1108: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d110b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d110c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d110f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d1116: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d111d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1120: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x5d1125u); f_00448ca3();
    /* 005d1125: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1127: je 0x5d1130 */ if (fZ) goto L_005d1130;
L_005d1129:; BB(0x005d1129);
    /* 005d1129: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d112b: jmp 0x5d1252 */ goto L_005d1252;
L_005d1130:; BB(0x005d1130);
    /* 005d1130: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1134: jne 0x5d1144 */ if (!fZ) goto L_005d1144;
L_005d1136:; BB(0x005d1136);
    /* 005d1136: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1139: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d113b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d113e: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x5d1141u); call_ind(t); }
    /* 005d1141: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005d1144:; BB(0x005d1144);
    /* 005d1144: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1146: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d114c: call 0x5cc586 */ r_esp -= 4; W32(r_esp, 0x5d1151u); f_005cc586();
    /* 005d1151: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1153: je 0x5d1250 */ if (fZ) goto L_005d1250;
L_005d1159:; BB(0x005d1159);
    /* 005d1159: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d115c: call 0x425a05 */ r_esp -= 4; W32(r_esp, 0x5d1161u); f_00425a05();
    /* 005d1161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1163: jne 0x5d1250 */ if (!fZ) goto L_005d1250;
L_005d1169:; BB(0x005d1169);
    /* 005d1169: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d116c: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x5d1171u); f_004259f1();
    /* 005d1171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1172: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d1178: call 0x5cea61 */ r_esp -= 4; W32(r_esp, 0x5d117du); f_005cea61();
    /* 005d117d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d117f: jne 0x5d1250 */ if (!fZ) goto L_005d1250;
L_005d1185:; BB(0x005d1185);
    /* 005d1185: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1188: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d118f: je 0x5d11a1 */ if (fZ) goto L_005d11a1;
L_005d1191:; BB(0x005d1191);
    /* 005d1191: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1194: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5d1199u); f_004259a0();
    /* 005d1199: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d119b: jne 0x5d1250 */ if (!fZ) goto L_005d1250;
L_005d11a1:; BB(0x005d11a1);
    /* 005d11a1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d11a8: jmp 0x5d11b3 */ goto L_005d11b3;
L_005d11aa:; BB(0x005d11aa);
    /* 005d11aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d11ad: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d11b0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005d11b3:; BB(0x005d11b3);
    /* 005d11b3: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d11b7: jge 0x5d1249 */ if ((fS==fO)) goto L_005d1249;
L_005d11bd:; BB(0x005d11bd);
    /* 005d11bd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d11c0: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x5d11c5u); f_004259f1();
    /* 005d11c5: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d11c8: jne 0x5d11cc */ if (!fZ) goto L_005d11cc;
L_005d11ca:; BB(0x005d11ca);
    /* 005d11ca: jmp 0x5d11aa */ goto L_005d11aa;
L_005d11cc:; BB(0x005d11cc);
    /* 005d11cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d11cf: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5d11d4u); f_004259a0();
    /* 005d11d4: mov esi, eax */ r_esi = r_eax;
    /* 005d11d6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d11d9: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d11de: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d11e2: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5d11e7u); f_004259a0();
    /* 005d11e7: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d11e9: jne 0x5d1244 */ if (!fZ) goto L_005d1244;
L_005d11eb:; BB(0x005d11eb);
    /* 005d11eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d11ee: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d11f4: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d11f8: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x5d11fdu); f_004259cd();
    /* 005d11fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d11fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1201: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x5d1206u); f_004259cd();
    /* 005d1206: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1207: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5d120cu); f_006240c0();
    /* 005d120c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d120f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1211: jne 0x5d1244 */ if (!fZ) goto L_005d1244;
L_005d1213:; BB(0x005d1213);
    /* 005d1213: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005d1216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1217: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d121a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d121b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d121e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d1220: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1223: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5d1226u); call_ind(t); }
    /* 005d1226: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d122a: jne 0x5d1232 */ if (!fZ) goto L_005d1232;
L_005d122c:; BB(0x005d122c);
    /* 005d122c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1230: je 0x5d1236 */ if (fZ) goto L_005d1236;
L_005d1232:; BB(0x005d1232);
    /* 005d1232: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d1234: jmp 0x5d1252 */ goto L_005d1252;
L_005d1236:; BB(0x005d1236);
    /* 005d1236: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d123d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005d1244:; BB(0x005d1244);
    /* 005d1244: jmp 0x5d11aa */ goto L_005d11aa;
L_005d1249:; BB(0x005d1249);
    /* 005d1249: mov eax, 1 */ r_eax = 0x1u;
    /* 005d124e: jmp 0x5d1252 */ goto L_005d1252;
L_005d1250:; BB(0x005d1250);
    /* 005d1250: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d1252:; BB(0x005d1252);
    /* 005d1252: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d1253: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1255: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1256: ret 4 */ FN_RET(0x005d1105); r_esp += 8; return;
}

void f_005d1259(void) /* FUN_005d1259 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1259);
    /* 005d1259: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d125a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d125c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d125d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d1260: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d1266: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5d126bu); f_005cd25d();
    /* 005d126b: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d126e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d126f: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d1275: call 0x5cc5a5 */ r_esp -= 4; W32(r_esp, 0x5d127au); f_005cc5a5();
    /* 005d127a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d127c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d127f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d1282: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1285: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d1288: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d128a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d128du); call_ind(t); }
    /* 005d128d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d128f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1292: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d1295: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1298: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d129b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d129d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d12a0u); call_ind(t); }
    /* 005d12a0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d12a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d12a3: ret  */ FN_RET(0x005d1259); r_esp += 4; return;
}

void f_005d12a4(void) /* FUN_005d12a4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d12a4);
    /* 005d12a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d12a5: mov ebp, esp */ r_ebp = r_esp;
    /* 005d12a7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d12aa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d12ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d12b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d12b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d12b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d12b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d12b9: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d12bcu); call_ind(t); }
    /* 005d12bc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d12bf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d12c3: jne 0x5d12cc */ if (!fZ) goto L_005d12cc;
L_005d12c5:; BB(0x005d12c5);
    /* 005d12c5: mov eax, 1 */ r_eax = 0x1u;
    /* 005d12ca: jmp 0x5d12e5 */ goto L_005d12e5;
L_005d12cc:; BB(0x005d12cc);
    /* 005d12cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d12cf: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x5d12d4u); f_004259f1();
    /* 005d12d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d12d5: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d12db: call 0x5cea61 */ r_esp -= 4; W32(r_esp, 0x5d12e0u); f_005cea61();
    /* 005d12e0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005d12e2: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005d12e4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005d12e5:; BB(0x005d12e5);
    /* 005d12e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d12e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d12e8: ret 4 */ FN_RET(0x005d12a4); r_esp += 8; return;
}

void f_005d12eb(void) /* FUN_005d12eb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d12eb);
    /* 005d12eb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d12ec: mov ebp, esp */ r_ebp = r_esp;
    /* 005d12ee: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d12f1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d12f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d12fb: jmp 0x5d1306 */ goto L_005d1306;
L_005d12fd:; BB(0x005d12fd);
    /* 005d12fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1300: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d1303: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d1306:; BB(0x005d1306);
    /* 005d1306: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d130a: jge 0x5d131d */ if ((fS==fO)) goto L_005d131d;
L_005d130c:; BB(0x005d130c);
    /* 005d130c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d130f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1310: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d1316: call 0x5cd3fa */ r_esp -= 4; W32(r_esp, 0x5d131bu); f_005cd3fa();
    /* 005d131b: jmp 0x5d12fd */ goto L_005d12fd;
L_005d131d:; BB(0x005d131d);
    /* 005d131d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d131f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1320: ret  */ FN_RET(0x005d12eb); r_esp += 4; return;
}

void f_005d1321(void) /* FUN_005d1321 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1321);
    /* 005d1321: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1322: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1324: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1327: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d132a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1331: jmp 0x5d133c */ goto L_005d133c;
L_005d1333:; BB(0x005d1333);
    /* 005d1333: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1336: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d1339: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d133c:; BB(0x005d133c);
    /* 005d133c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1340: jge 0x5d135c */ if ((fS==fO)) goto L_005d135c;
L_005d1342:; BB(0x005d1342);
    /* 005d1342: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1344: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1347: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d134d: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d1351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1352: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d1355: call 0x44848a */ r_esp -= 4; W32(r_esp, 0x5d135au); f_0044848a();
    /* 005d135a: jmp 0x5d1333 */ goto L_005d1333;
L_005d135c:; BB(0x005d135c);
    /* 005d135c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1363: jmp 0x5d136e */ goto L_005d136e;
L_005d1365:; BB(0x005d1365);
    /* 005d1365: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1368: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d136b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d136e:; BB(0x005d136e);
    /* 005d136e: cmp dword ptr [ebp - 4], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1375: jge 0x5d138a */ if ((fS==fO)) goto L_005d138a;
L_005d1377:; BB(0x005d1377);
    /* 005d1377: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d137a: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d137f: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005d1383: call 0x4287ab */ r_esp -= 4; W32(r_esp, 0x5d1388u); f_004287ab();
    /* 005d1388: jmp 0x5d1365 */ goto L_005d1365;
L_005d138a:; BB(0x005d138a);
    /* 005d138a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d138c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d138d: ret  */ FN_RET(0x005d1321); r_esp += 4; return;
}

void f_005d138e(void) /* FUN_005d138e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d138e);
    /* 005d138e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d138f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1391: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1394: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1395: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d1398: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d139f: jmp 0x5d13aa */ goto L_005d13aa;
L_005d13a1:; BB(0x005d13a1);
    /* 005d13a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d13a4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d13a7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d13aa:; BB(0x005d13aa);
    /* 005d13aa: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d13ae: jge 0x5d14a6 */ if ((fS==fO)) goto L_005d14a6;
L_005d13b4:; BB(0x005d13b4);
    /* 005d13b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d13b7: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d13bd: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d13c1: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d13c4: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x5d13c9u); f_0041f839();
    /* 005d13c9: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d13cc: je 0x5d1473 */ if (fZ) goto L_005d1473;
L_005d13d2:; BB(0x005d13d2);
    /* 005d13d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d13d5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d13d8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d13db: jmp 0x5d13e6 */ goto L_005d13e6;
L_005d13dd:; BB(0x005d13dd);
    /* 005d13dd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d13e0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d13e3: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005d13e6:; BB(0x005d13e6);
    /* 005d13e6: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d13ea: jge 0x5d1471 */ if ((fS==fO)) goto L_005d1471;
L_005d13f0:; BB(0x005d13f0);
    /* 005d13f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d13f3: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d13f9: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d13fd: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005d1400: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x5d1405u); f_0041f839();
    /* 005d1405: mov esi, eax */ r_esi = r_eax;
    /* 005d1407: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d140a: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d1410: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d1414: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005d1417: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x5d141cu); f_0041f839();
    /* 005d141c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d141e: jne 0x5d146c */ if (!fZ) goto L_005d146c;
L_005d1420:; BB(0x005d1420);
    /* 005d1420: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d1423: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d1429: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d142d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d1430: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d1433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1434: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1437: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d143c: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d1440: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005d1443: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d1446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1447: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5d144cu); f_006240c0();
    /* 005d144c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d144f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1451: jne 0x5d146c */ if (!fZ) goto L_005d146c;
L_005d1453:; BB(0x005d1453);
    /* 005d1453: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1455: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1457: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d145a: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d1460: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d1464: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d1467: call 0x41f510 */ r_esp -= 4; W32(r_esp, 0x5d146cu); f_0041f510();
L_005d146c:; BB(0x005d146c);
    /* 005d146c: jmp 0x5d13dd */ goto L_005d13dd;
L_005d1471:; BB(0x005d1471);
    /* 005d1471: jmp 0x5d14a1 */ goto L_005d14a1;
L_005d1473:; BB(0x005d1473);
    /* 005d1473: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1475: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1477: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d147a: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d1480: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d1484: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d1487: call 0x41f510 */ r_esp -= 4; W32(r_esp, 0x5d148cu); f_0041f510();
    /* 005d148c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d148f: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d1495: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d1499: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d149c: call 0x41fb49 */ r_esp -= 4; W32(r_esp, 0x5d14a1u); f_0041fb49();
L_005d14a1:; BB(0x005d14a1);
    /* 005d14a1: jmp 0x5d13a1 */ goto L_005d13a1;
L_005d14a6:; BB(0x005d14a6);
    /* 005d14a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d14ad: jmp 0x5d14b8 */ goto L_005d14b8;
L_005d14af:; BB(0x005d14af);
    /* 005d14af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d14b2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d14b5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d14b8:; BB(0x005d14b8);
    /* 005d14b8: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d14bc: jge 0x5d14f4 */ if ((fS==fO)) goto L_005d14f4;
L_005d14be:; BB(0x005d14be);
    /* 005d14be: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d14c1: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d14c6: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d14ca: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d14cd: call 0x426404 */ r_esp -= 4; W32(r_esp, 0x5d14d2u); f_00426404();
    /* 005d14d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d14d4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d14d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d14d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d14dc: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5d14dfu); call_ind(t); }
    /* 005d14df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d14e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d14e3: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d14e9: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d14ed: call 0x425c32 */ r_esp -= 4; W32(r_esp, 0x5d14f2u); f_00425c32();
    /* 005d14f2: jmp 0x5d14af */ goto L_005d14af;
L_005d14f4:; BB(0x005d14f4);
    /* 005d14f4: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d14f9: mov dword ptr [eax + 0x31c], 0 */ W32((u32)(r_eax+0x31cu), 0x0u);
    /* 005d1503: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1505: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1507: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1509: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d150c: call 0x4489a0 */ r_esp -= 4; W32(r_esp, 0x5d1511u); f_004489a0();
    /* 005d1511: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d1512: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1514: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1515: ret  */ FN_RET(0x005d138e); r_esp += 4; return;
}

void f_005d1516(void) /* FUN_005d1516 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1516);
    /* 005d1516: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1517: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1519: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d151a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d151d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1520: call 0x448c8b */ r_esp -= 4; W32(r_esp, 0x5d1525u); f_00448c8b();
    /* 005d1525: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d152b: call 0x5cf616 */ r_esp -= 4; W32(r_esp, 0x5d1530u); f_005cf616();
    /* 005d1530: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1532: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1533: ret  */ FN_RET(0x005d1516); r_esp += 4; return;
}

void f_005d1534(void) /* FUN_005d1534 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1534);
    /* 005d1534: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1535: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1537: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d153a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d153d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d1544: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d154b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d1552: jmp 0x5d155d */ goto L_005d155d;
L_005d1554:; BB(0x005d1554);
    /* 005d1554: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1557: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d155a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005d155d:; BB(0x005d155d);
    /* 005d155d: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1561: jge 0x5d15db */ if ((fS==fO)) goto L_005d15db;
L_005d1563:; BB(0x005d1563);
    /* 005d1563: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1566: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d1568: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d156b: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x5d156eu); call_ind(t); }
    /* 005d156e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1570: je 0x5d15c7 */ if (fZ) goto L_005d15c7;
L_005d1572:; BB(0x005d1572);
    /* 005d1572: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005d1575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1576: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1579: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d157f: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d1583: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x5d1588u); f_004259f1();
    /* 005d1588: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1589: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d158c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d158e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1591: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5d1594u); call_ind(t); }
    /* 005d1594: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1598: jne 0x5d15a0 */ if (!fZ) goto L_005d15a0;
L_005d159a:; BB(0x005d159a);
    /* 005d159a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d159e: je 0x5d15b9 */ if (fZ) goto L_005d15b9;
L_005d15a0:; BB(0x005d15a0);
    /* 005d15a0: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005d15a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d15a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d15a7: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d15ad: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d15b1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d15b4: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x5d15b9u); f_004267ae();
L_005d15b9:; BB(0x005d15b9);
    /* 005d15b9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d15c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005d15c7:; BB(0x005d15c7);
    /* 005d15c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d15ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d15cb: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d15d1: call 0x5cd3fa */ r_esp -= 4; W32(r_esp, 0x5d15d6u); f_005cd3fa();
    /* 005d15d6: jmp 0x5d1554 */ goto L_005d1554;
L_005d15db:; BB(0x005d15db);
    /* 005d15db: mov esp, ebp */ r_esp = r_ebp;
    /* 005d15dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d15de: ret  */ FN_RET(0x005d1534); r_esp += 4; return;
}

void f_005d15df(void) /* FUN_005d15df */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d15df);
    /* 005d15df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d15e0: mov ebp, esp */ r_ebp = r_esp;
    /* 005d15e2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d15e5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d15e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d15ef: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d15f3: je 0x5d1607 */ if (fZ) goto L_005d1607;
L_005d15f5:; BB(0x005d15f5);
    /* 005d15f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d15f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d15f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d15fc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d15fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d1601: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5d1604u); call_ind(t); }
    /* 005d1604: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d1607:; BB(0x005d1607);
    /* 005d1607: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d160a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d160b: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d1611: call 0x5cc664 */ r_esp -= 4; W32(r_esp, 0x5d1616u); f_005cc664();
    /* 005d1616: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1618: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1619: ret 4 */ FN_RET(0x005d15df); r_esp += 8; return;
}

void f_005d161c(void) /* FUN_005d161c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d161c);
    /* 005d161c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d161d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d161f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1622: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d1625: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d162c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1633: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1636: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d1639: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005d163b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d163e: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005d1641: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1644: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1646: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1647: ret 4 */ FN_RET(0x005d161c); r_esp += 8; return;
}

void f_005d164a(void) /* FUN_005d164a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d164a);
    /* 005d164a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d164b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d164d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d164e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d1651: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1655: push 0x699494 */ { u32 v = 0x699494u; r_esp -= 4; W32(r_esp, v); }
    /* 005d165a: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5d165fu); f_0060fc40();
    /* 005d165f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1662: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1665: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1666: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1669: call 0x5e634f */ r_esp -= 4; W32(r_esp, 0x5d166eu); f_005e634f();
    /* 005d166e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1670: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1671: ret 4 */ FN_RET(0x005d164a); r_esp += 8; return;
}

void f_005d1674(void) /* FUN_005d1674 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1674);
    /* 005d1674: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1675: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1677: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1678: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d167b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d167e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d167f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1682: mov edx, dword ptr [ecx*4 + 0x6992a8] */ r_edx = R32((u32)(r_ecx*4+0x6992a8u));
    /* 005d1689: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d168a: push 0x6994a4 */ { u32 v = 0x6994a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d168f: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5d1694u); f_0060fc40();
    /* 005d1694: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1697: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d169a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d169b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d169e: call 0x5e639b */ r_esp -= 4; W32(r_esp, 0x5d16a3u); f_005e639b();
    /* 005d16a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d16a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d16a6: ret 4 */ FN_RET(0x005d1674); r_esp += 8; return;
}

void f_005d16a9(void) /* FUN_005d16a9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d16a9);
    /* 005d16a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d16aa: mov ebp, esp */ r_ebp = r_esp;
    /* 005d16ac: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d16af: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d16b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d16b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d16b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d16b9: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5d16beu); f_005e626d();
    /* 005d16be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d16c1: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005d16c4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d16c7: cmp dword ptr [ebp - 8], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d16cb: ja 0x5d18a5 */ if ((!fC&&!fZ)) goto L_005d18a5;
L_005d16d1:; BB(0x005d16d1);
    /* 005d16d1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d16d4: jmp dword ptr [eax*4 + 0x5d18ab] */ { u32 t = R32((u32)(r_eax*4+0x5d18abu)); switch (t) { case 0x5d16dbu: goto L_005d16db; case 0x5d1774u: goto L_005d1774; case 0x5d1784u: goto L_005d1784; case 0x5d1794u: goto L_005d1794; case 0x5d17a4u: goto L_005d17a4; case 0x5d17b4u: goto L_005d17b4; case 0x5d17e4u: goto L_005d17e4; case 0x5d17c4u: goto L_005d17c4; case 0x5d17d4u: goto L_005d17d4; case 0x5d17f4u: goto L_005d17f4; case 0x5d1804u: goto L_005d1804; case 0x5d1814u: goto L_005d1814; case 0x5d1824u: goto L_005d1824; case 0x5d1858u: goto L_005d1858; case 0x5d186eu: goto L_005d186e; case 0x5d1884u: goto L_005d1884; case 0x5d189au: goto L_005d189a; default: UNSUP(0x005d16d4, "jump table entry is not a known target"); } }
L_005d16db:; BB(0x005d16db);
    /* 005d16db: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d16e1: call 0x5cbca2 */ r_esp -= 4; W32(r_esp, 0x5d16e6u); f_005cbca2();
    /* 005d16e6: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d16ed: je 0x5d1739 */ if (fZ) goto L_005d1739;
L_005d16ef:; BB(0x005d16ef);
    /* 005d16ef: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005d16f5: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 005d16f8: call 0x40808b */ r_esp -= 4; W32(r_esp, 0x5d16fdu); f_0040808b();
    /* 005d16fd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d16ff: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1704: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1706: mov edx, dword ptr [0x6fc388] */ r_edx = R32((u32)(0x6fc388u));
    /* 005d170c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d170f: call 0x42a130 */ r_esp -= 4; W32(r_esp, 0x5d1714u); f_0042a130();
    /* 005d1714: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1716: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d171c: call 0x5cbc47 */ r_esp -= 4; W32(r_esp, 0x5d1721u); f_005cbc47();
    /* 005d1721: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 005d1727: call 0x5d1c17 */ r_esp -= 4; W32(r_esp, 0x5d172cu); f_005d1c17();
    /* 005d172c: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 005d1732: call 0x5d1dab */ r_esp -= 4; W32(r_esp, 0x5d1737u); f_005d1dab();
    /* 005d1737: jmp 0x5d176f */ goto L_005d176f;
L_005d1739:; BB(0x005d1739);
    /* 005d1739: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005d173f: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x5d1744u); f_00448ca3();
    /* 005d1744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1746: je 0x5d1755 */ if (fZ) goto L_005d1755;
L_005d1748:; BB(0x005d1748);
    /* 005d1748: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005d174e: call 0x448ccc */ r_esp -= 4; W32(r_esp, 0x5d1753u); f_00448ccc();
    /* 005d1753: jmp 0x5d176f */ goto L_005d176f;
L_005d1755:; BB(0x005d1755);
    /* 005d1755: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1757: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d175a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d175c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d175f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d1762u); call_ind(t); }
    /* 005d1762: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1764: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1767: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d1769: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d176c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d176fu); call_ind(t); }
L_005d176f:; BB(0x005d176f);
    /* 005d176f: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d1774:; BB(0x005d1774);
    /* 005d1774: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d177a: call 0x5cc802 */ r_esp -= 4; W32(r_esp, 0x5d177fu); f_005cc802();
    /* 005d177f: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d1784:; BB(0x005d1784);
    /* 005d1784: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d178a: call 0x5cecd6 */ r_esp -= 4; W32(r_esp, 0x5d178fu); f_005cecd6();
    /* 005d178f: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d1794:; BB(0x005d1794);
    /* 005d1794: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d179a: call 0x5cd897 */ r_esp -= 4; W32(r_esp, 0x5d179fu); f_005cd897();
    /* 005d179f: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d17a4:; BB(0x005d17a4);
    /* 005d17a4: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d17aa: call 0x5ccdd1 */ r_esp -= 4; W32(r_esp, 0x5d17afu); f_005ccdd1();
    /* 005d17af: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d17b4:; BB(0x005d17b4);
    /* 005d17b4: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d17ba: call 0x5cefa3 */ r_esp -= 4; W32(r_esp, 0x5d17bfu); f_005cefa3();
    /* 005d17bf: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d17c4:; BB(0x005d17c4);
    /* 005d17c4: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d17ca: call 0x5cec0a */ r_esp -= 4; W32(r_esp, 0x5d17cfu); f_005cec0a();
    /* 005d17cf: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d17d4:; BB(0x005d17d4);
    /* 005d17d4: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d17da: call 0x5ccde7 */ r_esp -= 4; W32(r_esp, 0x5d17dfu); f_005ccde7();
    /* 005d17df: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d17e4:; BB(0x005d17e4);
    /* 005d17e4: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d17ea: call 0x5ccdfd */ r_esp -= 4; W32(r_esp, 0x5d17efu); f_005ccdfd();
    /* 005d17ef: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d17f4:; BB(0x005d17f4);
    /* 005d17f4: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d17fa: call 0x5cd089 */ r_esp -= 4; W32(r_esp, 0x5d17ffu); f_005cd089();
    /* 005d17ff: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d1804:; BB(0x005d1804);
    /* 005d1804: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d180a: call 0x5ccfb1 */ r_esp -= 4; W32(r_esp, 0x5d180fu); f_005ccfb1();
    /* 005d180f: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d1814:; BB(0x005d1814);
    /* 005d1814: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d181a: call 0x5ced1a */ r_esp -= 4; W32(r_esp, 0x5d181fu); f_005ced1a();
    /* 005d181f: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d1824:; BB(0x005d1824);
    /* 005d1824: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1826: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1828: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d182a: push 0x1770 */ { u32 v = 0x1770u; r_esp -= 4; W32(r_esp, v); }
    /* 005d182f: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d1834: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005d1837: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5d183cu); f_005e8389();
    /* 005d183c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d183e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1841: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d1843: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1846: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d1849u); call_ind(t); }
    /* 005d1849: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005d184b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d184e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d1850: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1853: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d1856u); call_ind(t); }
    /* 005d1856: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d1858:; BB(0x005d1858);
    /* 005d1858: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d185f: je 0x5d186c */ if (fZ) goto L_005d186c;
L_005d1861:; BB(0x005d1861);
    /* 005d1861: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 005d1867: call 0x5d2f6d */ r_esp -= 4; W32(r_esp, 0x5d186cu); f_005d2f6d();
L_005d186c:; BB(0x005d186c);
    /* 005d186c: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d186e:; BB(0x005d186e);
    /* 005d186e: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1875: je 0x5d1882 */ if (fZ) goto L_005d1882;
L_005d1877:; BB(0x005d1877);
    /* 005d1877: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 005d187d: call 0x5d30d0 */ r_esp -= 4; W32(r_esp, 0x5d1882u); f_005d30d0();
L_005d1882:; BB(0x005d1882);
    /* 005d1882: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d1884:; BB(0x005d1884);
    /* 005d1884: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d188b: je 0x5d1898 */ if (fZ) goto L_005d1898;
L_005d188d:; BB(0x005d188d);
    /* 005d188d: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 005d1893: call 0x5d3354 */ r_esp -= 4; W32(r_esp, 0x5d1898u); f_005d3354();
L_005d1898:; BB(0x005d1898);
    /* 005d1898: jmp 0x5d18a5 */ goto L_005d18a5;
L_005d189a:; BB(0x005d189a);
    /* 005d189a: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d18a0: call 0x5cf74d */ r_esp -= 4; W32(r_esp, 0x5d18a5u); f_005cf74d();
L_005d18a5:; BB(0x005d18a5);
    /* 005d18a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d18a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d18a8: ret 4 */ FN_RET(0x005d16a9); r_esp += 8; return;
}

void f_005d18f0(void) /* FUN_005d18f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d18f0);
    /* 005d18f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d18f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d18f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d18f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d18f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d18fa: call 0x5d0d72 */ r_esp -= 4; W32(r_esp, 0x5d18ffu); f_005d0d72();
    /* 005d18ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1902: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d1905: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1907: je 0x5d1915 */ if (fZ) goto L_005d1915;
L_005d1909:; BB(0x005d1909);
    /* 005d1909: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d190c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d190d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d1912u); f_0048ac1b();
    /* 005d1912: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d1915:; BB(0x005d1915);
    /* 005d1915: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1918: mov esp, ebp */ r_esp = r_ebp;
    /* 005d191a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d191b: ret 4 */ FN_RET(0x005d18f0); r_esp += 8; return;
}

void f_005d1920(void) /* FUN_005d1920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1920);
    /* 005d1920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1921: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d1927: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d192a: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5d192fu); f_005dfbf0();
    /* 005d192f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1932: mov dword ptr [eax], 0x633e4c */ W32((u32)(r_eax), 0x633e4cu);
    /* 005d1938: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d193b: mov dword ptr [ecx], 0x633ddc */ W32((u32)(r_ecx), 0x633ddcu);
    /* 005d1941: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1944: mov dword ptr [edx], 0x63b154 */ W32((u32)(r_edx), 0x63b154u);
    /* 005d194a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d194d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1950: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005d1953: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1956: mov dword ptr [0x6fc388], edx */ W32((u32)(0x6fc388u), r_edx);
    /* 005d195c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d195f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1961: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1962: ret 4 */ FN_RET(0x005d1920); r_esp += 8; return;
}

void f_005d1965(void) /* FUN_005d1965 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1965);
    /* 005d1965: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1966: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1968: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1969: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d196c: mov dword ptr [0x6fc388], 0 */ W32((u32)(0x6fc388u), 0x0u);
    /* 005d1976: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1978: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1979: ret  */ FN_RET(0x005d1965); r_esp += 4; return;
}

void f_005d197a(void) /* FUN_005d197a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d197a);
    /* 005d197a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d197b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d197d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d197e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d1981: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1984: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d1987: call 0x5edd97 */ r_esp -= 4; W32(r_esp, 0x5d198cu); f_005edd97();
    /* 005d198c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d198e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d198f: ret  */ FN_RET(0x005d197a); r_esp += 4; return;
}

void f_005d1990(void) /* FUN_005d1990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1990);
    /* 005d1990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1991: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1993: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1996: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d1999: cmp dword ptr [0x6fc0e4], 0 */ {  u32 a = R32((u32)(0x6fc0e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d19a0: je 0x5d19b2 */ if (fZ) goto L_005d19b2;
L_005d19a2:; BB(0x005d19a2);
    /* 005d19a2: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d19a7: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 005d19ad: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d19b0: jmp 0x5d19b9 */ goto L_005d19b9;
L_005d19b2:; BB(0x005d19b2);
    /* 005d19b2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005d19b9:; BB(0x005d19b9);
    /* 005d19b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d19bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005d19be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d19bf: ret  */ FN_RET(0x005d1990); r_esp += 4; return;
}

void f_005d19c0(void) /* FUN_005d19c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d19c0);
    /* 005d19c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d19c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d19c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d19c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d19c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d19c9: cmp dword ptr [0x6fc0e4], 0 */ {  u32 a = R32((u32)(0x6fc0e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d19d0: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005d19d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d19d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d19d6: ret  */ FN_RET(0x005d19c0); r_esp += 4; return;
}

void f_005d19d7(void) /* FUN_005d19d7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d19d7);
    /* 005d19d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d19d8: mov ebp, esp */ r_ebp = r_esp;
    /* 005d19da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d19db: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d19de: cmp dword ptr [0x6fc0e4], 0 */ {  u32 a = R32((u32)(0x6fc0e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d19e5: jne 0x5d19ec */ if (!fZ) goto L_005d19ec;
L_005d19e7:; BB(0x005d19e7);
    /* 005d19e7: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d19ea: jmp 0x5d19ef */ goto L_005d19ef;
L_005d19ec:; BB(0x005d19ec);
    /* 005d19ec: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_005d19ef:; BB(0x005d19ef);
    /* 005d19ef: mov esp, ebp */ r_esp = r_ebp;
    /* 005d19f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d19f2: ret  */ FN_RET(0x005d19d7); r_esp += 4; return;
}

void f_005d19f3(void) /* FUN_005d19f3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d19f3);
    /* 005d19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d19f4: mov ebp, esp */ r_ebp = r_esp;
    /* 005d19f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d19f7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d19fa: cmp dword ptr [0x6fc0e4], 0 */ {  u32 a = R32((u32)(0x6fc0e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1a01: jne 0x5d1a07 */ if (!fZ) goto L_005d1a07;
L_005d1a03:; BB(0x005d1a03);
    /* 005d1a03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d1a05: jmp 0x5d1a0c */ goto L_005d1a0c;
L_005d1a07:; BB(0x005d1a07);
    /* 005d1a07: mov eax, 1 */ r_eax = 0x1u;
L_005d1a0c:; BB(0x005d1a0c);
    /* 005d1a0c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1a0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1a0f: ret  */ FN_RET(0x005d19f3); r_esp += 4; return;
}

void f_005d1a10(void) /* FUN_005d1a10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1a10);
    /* 005d1a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a11: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1a13: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1a19: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 005d1a1f: movsx eax, byte ptr [0x6fc0ec] */ r_eax = (u32)(i32)(i8)R8((u32)(0x6fc0ecu));
    /* 005d1a26: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1a29: je 0x5d1a38 */ if (fZ) goto L_005d1a38;
L_005d1a2b:; BB(0x005d1a2b);
    /* 005d1a2b: movsx ax, byte ptr [0x6fc0ec] */ r_eax = (r_eax & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(0x6fc0ecu))) & 0xffffu);
    /* 005d1a33: jmp 0x5d1ad6 */ goto L_005d1ad6;
L_005d1a38:; BB(0x005d1a38);
    /* 005d1a38: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005d1a3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a3f: push 0x69950c */ { u32 v = 0x69950cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a44: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005d1a4a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d1a4d: call 0x5ed4d3 */ r_esp -= 4; W32(r_esp, 0x5d1a52u); f_005ed4d3();
    /* 005d1a52: mov byte ptr [0x6fc0ec], 0x46 */ W8((u32)(0x6fc0ecu), 0x46u);
    /* 005d1a59: push 0x699514 */ { u32 v = 0x699514u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a5e: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005d1a64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a65: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5d1a6au); f_00624720();
    /* 005d1a6a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1a6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1a6f: je 0x5d1a78 */ if (fZ) goto L_005d1a78;
L_005d1a71:; BB(0x005d1a71);
    /* 005d1a71: mov byte ptr [0x6fc0ec], 0x47 */ W8((u32)(0x6fc0ecu), 0x47u);
L_005d1a78:; BB(0x005d1a78);
    /* 005d1a78: push 0x69951c */ { u32 v = 0x69951cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a7d: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005d1a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a84: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5d1a89u); f_00624720();
    /* 005d1a89: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1a8e: je 0x5d1a97 */ if (fZ) goto L_005d1a97;
L_005d1a90:; BB(0x005d1a90);
    /* 005d1a90: mov byte ptr [0x6fc0ec], 0x48 */ W8((u32)(0x6fc0ecu), 0x48u);
L_005d1a97:; BB(0x005d1a97);
    /* 005d1a97: push 0x699524 */ { u32 v = 0x699524u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a9c: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 005d1aa2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1aa3: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5d1aa8u); f_00624720();
    /* 005d1aa8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1aab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1aad: jne 0x5d1ac7 */ if (!fZ) goto L_005d1ac7;
L_005d1aaf:; BB(0x005d1aaf);
    /* 005d1aaf: push 0x69952c */ { u32 v = 0x69952cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ab4: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005d1aba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1abb: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5d1ac0u); f_00624720();
    /* 005d1ac0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1ac3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1ac5: je 0x5d1ace */ if (fZ) goto L_005d1ace;
L_005d1ac7:; BB(0x005d1ac7);
    /* 005d1ac7: mov byte ptr [0x6fc0ec], 0x49 */ W8((u32)(0x6fc0ecu), 0x49u);
L_005d1ace:; BB(0x005d1ace);
    /* 005d1ace: movsx ax, byte ptr [0x6fc0ec] */ r_eax = (r_eax & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(0x6fc0ecu))) & 0xffffu);
L_005d1ad6:; BB(0x005d1ad6);
    /* 005d1ad6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1ad8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1ad9: ret  */ FN_RET(0x005d1a10); r_esp += 4; return;
}

void f_005d1ada(void) /* FUN_005d1ada */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1ada);
    /* 005d1ada: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1adb: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1add: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1ae3: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 005d1ae9: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005d1aef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1af0: push 0x699534 */ { u32 v = 0x699534u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1af5: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005d1afb: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d1afe: call 0x5ed4d3 */ r_esp -= 4; W32(r_esp, 0x5d1b03u); f_005ed4d3();
    /* 005d1b03: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 005d1b09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b0a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d1b10: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5d1b15u); f_005da413();
    /* 005d1b15: mov byte ptr [0x6fc0ec], 0x46 */ W8((u32)(0x6fc0ecu), 0x46u);
    /* 005d1b1c: push 0x69953c */ { u32 v = 0x69953cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b21: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005d1b27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b28: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5d1b2du); f_00624720();
    /* 005d1b2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1b30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1b32: je 0x5d1b3b */ if (fZ) goto L_005d1b3b;
L_005d1b34:; BB(0x005d1b34);
    /* 005d1b34: mov byte ptr [0x6fc0ec], 0x47 */ W8((u32)(0x6fc0ecu), 0x47u);
L_005d1b3b:; BB(0x005d1b3b);
    /* 005d1b3b: push 0x699544 */ { u32 v = 0x699544u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b40: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005d1b46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b47: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5d1b4cu); f_00624720();
    /* 005d1b4c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1b4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1b51: je 0x5d1b5a */ if (fZ) goto L_005d1b5a;
L_005d1b53:; BB(0x005d1b53);
    /* 005d1b53: mov byte ptr [0x6fc0ec], 0x48 */ W8((u32)(0x6fc0ecu), 0x48u);
L_005d1b5a:; BB(0x005d1b5a);
    /* 005d1b5a: push 0x69954c */ { u32 v = 0x69954cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b5f: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 005d1b65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b66: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5d1b6bu); f_00624720();
    /* 005d1b6b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1b6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1b70: jne 0x5d1b8a */ if (!fZ) goto L_005d1b8a;
L_005d1b72:; BB(0x005d1b72);
    /* 005d1b72: push 0x699554 */ { u32 v = 0x699554u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b77: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005d1b7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b7e: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5d1b83u); f_00624720();
    /* 005d1b83: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1b86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1b88: je 0x5d1b91 */ if (fZ) goto L_005d1b91;
L_005d1b8a:; BB(0x005d1b8a);
    /* 005d1b8a: mov byte ptr [0x6fc0ec], 0x49 */ W8((u32)(0x6fc0ecu), 0x49u);
L_005d1b91:; BB(0x005d1b91);
    /* 005d1b91: movsx ecx, byte ptr [0x6fc0ec] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x6fc0ecu));
    /* 005d1b98: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 005d1b9e: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005d1ba4: sub edx, 0x46 */ {  u32 a = r_edx; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d1ba7: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 005d1bad: cmp dword ptr [ebp - 0x108], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d1bb4: ja 0x5d1c03 */ if ((!fC&&!fZ)) goto L_005d1c03;
L_005d1bb6:; BB(0x005d1bb6);
    /* 005d1bb6: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005d1bbc: jmp dword ptr [eax*4 + 0x5d1c07] */ { u32 t = R32((u32)(r_eax*4+0x5d1c07u)); switch (t) { case 0x5d1bc3u: goto L_005d1bc3; case 0x5d1bd2u: goto L_005d1bd2; case 0x5d1be1u: goto L_005d1be1; case 0x5d1bf3u: goto L_005d1bf3; default: UNSUP(0x005d1bbc, "jump table entry is not a known target"); } }
L_005d1bc3:; BB(0x005d1bc3);
    /* 005d1bc3: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bc5: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d1bcb: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x5d1bd0u); f_0045d8fe();
    /* 005d1bd0: jmp 0x5d1c03 */ goto L_005d1c03;
L_005d1bd2:; BB(0x005d1bd2);
    /* 005d1bd2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bd4: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d1bda: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x5d1bdfu); f_0045d8fe();
    /* 005d1bdf: jmp 0x5d1c03 */ goto L_005d1c03;
L_005d1be1:; BB(0x005d1be1);
    /* 005d1be1: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1be6: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d1bec: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x5d1bf1u); f_0045d8fe();
    /* 005d1bf1: jmp 0x5d1c03 */ goto L_005d1c03;
L_005d1bf3:; BB(0x005d1bf3);
    /* 005d1bf3: push 0x9c4 */ { u32 v = 0x9c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bf8: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d1bfe: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x5d1c03u); f_0045d8fe();
L_005d1c03:; BB(0x005d1c03);
    /* 005d1c03: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1c05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1c06: ret  */ FN_RET(0x005d1ada); r_esp += 4; return;
}

void f_005d1c17(void) /* FUN_005d1c17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1c17);
    /* 005d1c17: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c18: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1c1a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1c1d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d1c20: mov byte ptr [0x6fc0ec], 0xff */ W8((u32)(0x6fc0ecu), 0xffu);
    /* 005d1c27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1c2a: call 0x5d1ada */ r_esp -= 4; W32(r_esp, 0x5d1c2fu); f_005d1ada();
    /* 005d1c2f: mov byte ptr [0x6fc0ed], 0 */ W8((u32)(0x6fc0edu), 0x0u);
    /* 005d1c36: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1c3c: jmp 0x5d1c4a */ goto L_005d1c4a;
L_005d1c3e:; BB(0x005d1c3e);
    /* 005d1c3e: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d1c42: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d1c46: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005d1c4a:; BB(0x005d1c4a);
    /* 005d1c4a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1c4e: cmp ecx, 0x1a */ {  u32 a = r_ecx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1c51: jge 0x5d1c60 */ if ((fS==fO)) goto L_005d1c60;
L_005d1c53:; BB(0x005d1c53);
    /* 005d1c53: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1c57: mov byte ptr [edx + 0x6fc0ee], 0xff */ W8((u32)(r_edx+0x6fc0eeu), 0xffu);
    /* 005d1c5e: jmp 0x5d1c3e */ goto L_005d1c3e;
L_005d1c60:; BB(0x005d1c60);
    /* 005d1c60: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1c66: jmp 0x5d1c74 */ goto L_005d1c74;
L_005d1c68:; BB(0x005d1c68);
    /* 005d1c68: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d1c6c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d1c70: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005d1c74:; BB(0x005d1c74);
    /* 005d1c74: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1c78: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1c7b: jge 0x5d1d94 */ if ((fS==fO)) goto L_005d1d94;
L_005d1c81:; BB(0x005d1c81);
    /* 005d1c81: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1c85: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1c8b: mov byte ptr [edx + 0x6fc108], 0 */ W8((u32)(r_edx+0x6fc108u), 0x0u);
    /* 005d1c92: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1c96: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1c9c: mov byte ptr [eax + 0x6fc109], 0 */ W8((u32)(r_eax+0x6fc109u), 0x0u);
    /* 005d1ca3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1ca7: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1cad: mov byte ptr [ecx + 0x6fc10a], 0 */ W8((u32)(r_ecx+0x6fc10au), 0x0u);
    /* 005d1cb4: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1cb8: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1cbe: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 005d1cc1: mov byte ptr [edx + 0x6fc10c], al */ W8((u32)(r_edx+0x6fc10cu), (u8)r_eax);
    /* 005d1cc7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1ccb: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1cd1: mov byte ptr [ecx + 0x6fc10d], 0 */ W8((u32)(r_ecx+0x6fc10du), 0x0u);
    /* 005d1cd8: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1cdc: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1ce2: mov byte ptr [edx + 0x6fc10e], 0 */ W8((u32)(r_edx+0x6fc10eu), 0x0u);
    /* 005d1ce9: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1ced: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1cf3: mov byte ptr [eax + 0x6fc10b], 0 */ W8((u32)(r_eax+0x6fc10bu), 0x0u);
    /* 005d1cfa: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1cfe: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1d04: mov byte ptr [ecx + 0x6fc10f], 0 */ W8((u32)(r_ecx+0x6fc10fu), 0x0u);
    /* 005d1d0b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1d0f: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1d15: mov byte ptr [edx + 0x6fc110], 0 */ W8((u32)(r_edx+0x6fc110u), 0x0u);
    /* 005d1d1c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1d20: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1d26: mov dword ptr [eax + 0x6fc120], 0xffffffff */ W32((u32)(r_eax+0x6fc120u), 0xffffffffu);
    /* 005d1d30: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d1d36: jmp 0x5d1d44 */ goto L_005d1d44;
L_005d1d38:; BB(0x005d1d38);
    /* 005d1d38: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005d1d3c: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d1d40: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_005d1d44:; BB(0x005d1d44);
    /* 005d1d44: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005d1d48: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1d4b: jge 0x5d1d7e */ if ((fS==fO)) goto L_005d1d7e;
L_005d1d4d:; BB(0x005d1d4d);
    /* 005d1d4d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1d51: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1d57: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005d1d5b: mov byte ptr [eax + ecx + 0x6fc124], 0xff */ W8((u32)(r_eax+r_ecx+0x6fc124u), 0xffu);
    /* 005d1d63: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1d67: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1d6d: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005d1d71: mov dword ptr [edx + eax*4 + 0x6fc140], 0xffffffff */ W32((u32)(r_edx+r_eax*4+0x6fc140u), 0xffffffffu);
    /* 005d1d7c: jmp 0x5d1d38 */ goto L_005d1d38;
L_005d1d7e:; BB(0x005d1d7e);
    /* 005d1d7e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d1d82: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1d88: mov byte ptr [ecx + 0x6fc1a4], 0 */ W8((u32)(r_ecx+0x6fc1a4u), 0x0u);
    /* 005d1d8f: jmp 0x5d1c68 */ goto L_005d1c68;
L_005d1d94:; BB(0x005d1d94);
    /* 005d1d94: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1d96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1d97: ret  */ FN_RET(0x005d1c17); r_esp += 4; return;
}

void f_005d1d98(void) /* FUN_005d1d98 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1d98);
    /* 005d1d98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1d99: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1d9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1d9c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d1d9f: movsx ax, byte ptr [0x6fc0ed] */ r_eax = (r_eax & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(0x6fc0edu))) & 0xffffu);
    /* 005d1da7: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1daa: ret  */ FN_RET(0x005d1d98); r_esp += 4; return;
}

void f_005d1dab(void) /* FUN_005d1dab */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1dab);
    /* 005d1dab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1dac: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1dae: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1db4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1db5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1db6: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 005d1dbc: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 005d1dc2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d1dc5: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 005d1dc8: imul esi, esi, 0xa0 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xa0u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1dce: add esi, 0x6fc108 */ {  u32 a = r_esi; u32 b = 0x6fc108u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d1dd4: mov ecx, 0x28 */ r_ecx = 0x28u;
    /* 005d1dd9: lea edi, [ebp - 0xa0] */ r_edi = (u32)(r_ebp+0xffffff60u);
    /* 005d1ddf: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005d1de1: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005d1de7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d1dea: mov cl, byte ptr [eax + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xcu))) & 0xffu);
    /* 005d1ded: mov byte ptr [ebp - 0x9c], cl */ W8((u32)(r_ebp+0xffffff64u), (u8)r_ecx);
    /* 005d1df3: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005d1df9: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d1dfc: call 0x5edf73 */ r_esp -= 4; W32(r_esp, 0x5d1e01u); f_005edf73();
    /* 005d1e01: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005d1e07: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1e0b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d1e11: call 0x45cd8e */ r_esp -= 4; W32(r_esp, 0x5d1e16u); f_0045cd8e();
    /* 005d1e16: mov byte ptr [ebp - 0x9d], al */ W8((u32)(r_ebp+0xffffff63u), (u8)r_eax);
    /* 005d1e1c: mov byte ptr [ebp - 0x9f], 1 */ W8((u32)(r_ebp+0xffffff61u), 0x1u);
    /* 005d1e23: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e28: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 005d1e2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e2f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e31: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005d1e37: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d1e3a: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x5d1e3fu); f_005eccbe();
    /* 005d1e3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d1e40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d1e41: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1e43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1e44: ret  */ FN_RET(0x005d1dab); r_esp += 4; return;
}

void f_005d1e45(void) /* FUN_005d1e45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1e45);
    /* 005d1e45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e46: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1e48: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1e4b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d1e4e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1e51: movsx cx, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(r_eax+0x4u))) & 0xffffu);
    /* 005d1e56: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 005d1e5a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d1e61: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1e68: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1e6c: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1e72: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1e75: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 005d1e78: mov byte ptr [edx + 0x6fc10a], cl */ W8((u32)(r_edx+0x6fc10au), (u8)r_ecx);
    /* 005d1e7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e80: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e82: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1e86: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d1e8b: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d1e8f: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005d1e92: call 0x41f510 */ r_esp -= 4; W32(r_esp, 0x5d1e97u); f_0041f510();
    /* 005d1e97: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d1e9a: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d1e9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e9e: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1ea2: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d1ea8: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d1eac: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005d1eaf: call 0x429fd4 */ r_esp -= 4; W32(r_esp, 0x5d1eb4u); f_00429fd4();
    /* 005d1eb4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1eb7: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d1eba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ebb: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1ebf: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d1ec5: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d1ec9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d1ecc: call 0x420814 */ r_esp -= 4; W32(r_esp, 0x5d1ed1u); f_00420814();
    /* 005d1ed1: mov ecx, eax */ r_ecx = r_eax;
    /* 005d1ed3: call 0x422468 */ r_esp -= 4; W32(r_esp, 0x5d1ed8u); f_00422468();
    /* 005d1ed8: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1edc: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d1ee2: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d1ee6: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d1ee9: call 0x41fb49 */ r_esp -= 4; W32(r_esp, 0x5d1eeeu); f_0041fb49();
    /* 005d1eee: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1ef2: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d1ef8: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d1efc: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 005d1f02: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1f06: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d1f0b: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d1f0f: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 005d1f15: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d1f17: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d1f1au); call_ind(t); }
    /* 005d1f1a: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1f1e: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1f24: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1f27: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005d1f2a: mov dword ptr [eax + 0x6fc120], edx */ W32((u32)(r_eax+0x6fc120u), r_edx);
    /* 005d1f30: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1f34: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1f3a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1f3d: mov dl, byte ptr [ecx + 0x9c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x9cu))) & 0xffu);
    /* 005d1f43: mov byte ptr [eax + 0x6fc1a4], dl */ W8((u32)(r_eax+0x6fc1a4u), (u8)r_edx);
    /* 005d1f49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1f4c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005d1f4f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d1f52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f56: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005d1f59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f5a: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1f5e: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d1f64: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d1f68: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d1f6b: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x5d1f70u); f_00426561();
    /* 005d1f70: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1f74: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1f7a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1f7d: mov dl, byte ptr [ecx + 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x3u))) & 0xffu);
    /* 005d1f80: mov byte ptr [eax + 0x6fc10b], dl */ W8((u32)(r_eax+0x6fc10bu), (u8)r_edx);
    /* 005d1f86: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1f8a: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1f90: movsx ecx, byte ptr [eax + 0x6fc10b] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6fc10bu));
    /* 005d1f97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f98: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1f9c: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d1fa1: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d1fa5: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005d1fa8: call 0x42085e */ r_esp -= 4; W32(r_esp, 0x5d1fadu); f_0042085e();
    /* 005d1fad: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1fb1: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1fb7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1fba: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 005d1fbd: mov byte ptr [edx + 0x6fc109], cl */ W8((u32)(r_edx+0x6fc109u), (u8)r_ecx);
    /* 005d1fc3: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d1fc7: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1fcd: movsx eax, byte ptr [edx + 0x6fc109] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6fc109u));
    /* 005d1fd4: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1fd7: jl 0x5d201d */ if ((fS!=fO)) goto L_005d201d;
L_005d1fd9:; BB(0x005d1fd9);
    /* 005d1fd9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1fdc: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d1fdf: call 0x5ed5c3 */ r_esp -= 4; W32(r_esp, 0x5d1fe4u); f_005ed5c3();
    /* 005d1fe4: push 0x2030 */ { u32 v = 0x2030u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1fe9: push 0x69955c */ { u32 v = 0x69955cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1fee: push 0x69956c */ { u32 v = 0x69956cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ff3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ff5: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5d1ffau); f_0060f9f3();
    /* 005d1ffa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1ffd: push 0x2330 */ { u32 v = 0x2330u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2002: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005d2008: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d200a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d2010: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5d2013u); call_ind(t); }
    /* 005d2013: mov dword ptr [0x6f97e0], 1 */ W32((u32)(0x6f97e0u), 0x1u);
L_005d201d:; BB(0x005d201d);
    /* 005d201d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d201f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2020: ret 4 */ FN_RET(0x005d1e45); r_esp += 8; return;
}

void f_005d2023(void) /* FUN_005d2023 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2023);
    /* 005d2023: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2024: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2026: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2029: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d202c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d202f: movsx cx, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(r_eax+0x4u))) & 0xffffu);
    /* 005d2034: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
    /* 005d2038: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d203f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d2046: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d204a: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2050: mov byte ptr [edx + 0x6fc10a], 0 */ W8((u32)(r_edx+0x6fc10au), 0x0u);
    /* 005d2057: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d205b: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2061: mov byte ptr [eax + 0x6fc10f], 0 */ W8((u32)(r_eax+0x6fc10fu), 0x0u);
    /* 005d2068: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d206a: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 005d206c: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d2070: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d2076: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d207a: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d207d: call 0x41f510 */ r_esp -= 4; W32(r_esp, 0x5d2082u); f_0041f510();
    /* 005d2082: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2084: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d2088: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d208e: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d2092: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d2095: call 0x420532 */ r_esp -= 4; W32(r_esp, 0x5d209au); f_00420532();
    /* 005d209a: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d209e: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d20a4: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d20a8: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 005d20ae: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d20b2: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d20b7: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d20bb: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 005d20c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d20c3: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5d20c6u); call_ind(t); }
    /* 005d20c6: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d20ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d20cb: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d20d1: call 0x5cd3fa */ r_esp -= 4; W32(r_esp, 0x5d20d6u); f_005cd3fa();
    /* 005d20d6: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d20da: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d20e0: mov dword ptr [ecx + 0x6fc120], 0xffffffff */ W32((u32)(r_ecx+0x6fc120u), 0xffffffffu);
    /* 005d20ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d20ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d20ee: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005d20f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d20f2: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d20f6: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d20fc: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d2100: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d2103: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x5d2108u); f_00426561();
    /* 005d2108: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d210c: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2112: mov byte ptr [eax + 0x6fc1a4], 0 */ W8((u32)(r_eax+0x6fc1a4u), 0x0u);
    /* 005d2119: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005d211f: jmp 0x5d212d */ goto L_005d212d;
L_005d2121:; BB(0x005d2121);
    /* 005d2121: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 005d2125: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2129: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
L_005d212d:; BB(0x005d212d);
    /* 005d212d: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 005d2131: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2134: jge 0x5d2167 */ if ((fS==fO)) goto L_005d2167;
L_005d2136:; BB(0x005d2136);
    /* 005d2136: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d213a: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2140: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 005d2144: mov byte ptr [eax + ecx + 0x6fc124], 0xff */ W8((u32)(r_eax+r_ecx+0x6fc124u), 0xffu);
    /* 005d214c: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d2150: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2156: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 005d215a: mov dword ptr [edx + eax*4 + 0x6fc140], 0 */ W32((u32)(r_edx+r_eax*4+0x6fc140u), 0x0u);
    /* 005d2165: jmp 0x5d2121 */ goto L_005d2121;
L_005d2167:; BB(0x005d2167);
    /* 005d2167: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005d216d: jmp 0x5d217b */ goto L_005d217b;
L_005d216f:; BB(0x005d216f);
    /* 005d216f: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 005d2173: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2177: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
L_005d217b:; BB(0x005d217b);
    /* 005d217b: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 005d217f: cmp edx, 0x9e */ {  u32 a = r_edx; u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2185: jge 0x5d21b6 */ if ((fS==fO)) goto L_005d21b6;
L_005d2187:; BB(0x005d2187);
    /* 005d2187: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 005d218b: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d2191: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005d2195: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d2199: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005d219c: mov ecx, dword ptr [edx + eax + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 005d21a0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d21a3: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d21a7: je 0x5d21b4 */ if (fZ) goto L_005d21b4;
L_005d21a9:; BB(0x005d21a9);
    /* 005d21a9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d21ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d21ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d21b1: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5d21b4u); call_ind(t); }
L_005d21b4:; BB(0x005d21b4);
    /* 005d21b4: jmp 0x5d216f */ goto L_005d216f;
L_005d21b6:; BB(0x005d21b6);
    /* 005d21b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d21b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d21b9: ret 4 */ FN_RET(0x005d2023); r_esp += 8; return;
}

void f_005d21bc(void) /* FUN_005d21bc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d21bc);
    /* 005d21bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d21bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005d21bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d21c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d21c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d21c2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d21c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d21c8: movsx ecx, byte ptr [eax + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x2u));
    /* 005d21cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d21ce: jne 0x5d21de */ if (!fZ) goto L_005d21de;
L_005d21d0:; BB(0x005d21d0);
    /* 005d21d0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d21d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d21d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d21d7: call 0x5d2023 */ r_esp -= 4; W32(r_esp, 0x5d21dcu); f_005d2023();
    /* 005d21dc: jmp 0x5d21f5 */ goto L_005d21f5;
L_005d21de:; BB(0x005d21de);
    /* 005d21de: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d21e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d21e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d21e5: call 0x5d1e45 */ r_esp -= 4; W32(r_esp, 0x5d21eau); f_005d1e45();
    /* 005d21ea: cmp dword ptr [0x6f97e0], 0 */ {  u32 a = R32((u32)(0x6f97e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d21f1: je 0x5d21f5 */ if (fZ) goto L_005d21f5;
L_005d21f3:; BB(0x005d21f3);
    /* 005d21f3: jmp 0x5d2212 */ goto L_005d2212;
L_005d21f5:; BB(0x005d21f5);
    /* 005d21f5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005d21f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d21fb: movsx edi, byte ptr [ecx + 4] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ecx+0x4u));
    /* 005d21ff: imul edi, edi, 0xa0 */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0xa0u; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2205: add edi, 0x6fc108 */ {  u32 a = r_edi; u32 b = 0x6fc108u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d220b: mov ecx, 0x28 */ r_ecx = 0x28u;
    /* 005d2210: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
L_005d2212:; BB(0x005d2212);
    /* 005d2212: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2213: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2214: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2216: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2217: ret 4 */ FN_RET(0x005d21bc); r_esp += 8; return;
}

void f_005d221a(void) /* FUN_005d221a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d221a);
    /* 005d221a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d221b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d221d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d221e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d2221: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2223: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2225: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2227: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d222a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d222d: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x5d2232u); f_005eccbe();
    /* 005d2232: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d2234: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2236: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2237: ret 4 */ FN_RET(0x005d221a); r_esp += 8; return;
}

void f_005d223a(void) /* FUN_005d223a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d223a);
    /* 005d223a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d223b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d223d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d223e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d2241: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d2243: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2245: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2246: ret 4 */ FN_RET(0x005d223a); r_esp += 8; return;
}

void f_005d2249(void) /* FUN_005d2249 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2249);
    /* 005d2249: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d224a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d224c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d224f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d2252: mov dword ptr [ebp - 0x10], 0x64 */ W32((u32)(r_ebp+0xfffffff0u), 0x64u);
    /* 005d2259: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d225f: call 0x45cd8e */ r_esp -= 4; W32(r_esp, 0x5d2264u); f_0045cd8e();
    /* 005d2264: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d2267: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2269: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005d226c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d226d: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005d226f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d2272: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d2275: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x5d227au); f_005eccbe();
    /* 005d227a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d227c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d227d: ret  */ FN_RET(0x005d2249); r_esp += 4; return;
}

void f_005d227e(void) /* FUN_005d227e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d227e);
    /* 005d227e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d227f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2281: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2284: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d2287: mov dword ptr [ebp - 0x10], 0x65 */ W32((u32)(r_ebp+0xfffffff0u), 0x65u);
    /* 005d228e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d2291: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d2294: call 0x5edf73 */ r_esp -= 4; W32(r_esp, 0x5d2299u); f_005edf73();
    /* 005d2299: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d229c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d229e: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005d22a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d22a2: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005d22a4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d22a7: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d22aa: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x5d22afu); f_005eccbe();
    /* 005d22af: mov esp, ebp */ r_esp = r_ebp;
    /* 005d22b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d22b2: ret  */ FN_RET(0x005d227e); r_esp += 4; return;
}

void f_005d22b3(void) /* FUN_005d22b3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d22b3);
    /* 005d22b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d22b4: mov ebp, esp */ r_ebp = r_esp;
    /* 005d22b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d22b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d22ba: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 005d22be: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d22c4: movsx eax, byte ptr [eax + 0x6fc1a4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x6fc1a4u));
    /* 005d22cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d22cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d22ce: ret 4 */ FN_RET(0x005d22b3); r_esp += 8; return;
}

void f_005d22d1(void) /* FUN_005d22d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d22d1);
    /* 005d22d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d22d2: mov ebp, esp */ r_ebp = r_esp;
    /* 005d22d4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d22d7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d22da: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d22e0: jmp 0x5d22ee */ goto L_005d22ee;
L_005d22e2:; BB(0x005d22e2);
    /* 005d22e2: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d22e6: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d22ea: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005d22ee:; BB(0x005d22ee);
    /* 005d22ee: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d22f2: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d22f5: jge 0x5d2349 */ if ((fS==fO)) goto L_005d2349;
L_005d22f7:; BB(0x005d22f7);
    /* 005d22f7: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d22fb: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2301: movsx eax, byte ptr [edx + 0x6fc10a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6fc10au));
    /* 005d2308: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d230b: jne 0x5d2347 */ if (!fZ) goto L_005d2347;
L_005d230d:; BB(0x005d230d);
    /* 005d230d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2311: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d2317: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d231c: je 0x5d2347 */ if (fZ) goto L_005d2347;
L_005d231e:; BB(0x005d231e);
    /* 005d231e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2322: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d2328: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d232c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d232f: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2332: jne 0x5d2347 */ if (!fZ) goto L_005d2347;
L_005d2334:; BB(0x005d2334);
    /* 005d2334: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2338: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d233e: movsx eax, byte ptr [ecx + 0x6fc1a4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x6fc1a4u));
    /* 005d2345: jmp 0x5d234b */ goto L_005d234b;
L_005d2347:; BB(0x005d2347);
    /* 005d2347: jmp 0x5d22e2 */ goto L_005d22e2;
L_005d2349:; BB(0x005d2349);
    /* 005d2349: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d234b:; BB(0x005d234b);
    /* 005d234b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d234d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d234e: ret 4 */ FN_RET(0x005d22d1); r_esp += 8; return;
}

void f_005d2351(void) /* FUN_005d2351 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2351);
    /* 005d2351: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2352: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2354: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2357: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d235a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d2360: jmp 0x5d236e */ goto L_005d236e;
L_005d2362:; BB(0x005d2362);
    /* 005d2362: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d2366: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d236a: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005d236e:; BB(0x005d236e);
    /* 005d236e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2372: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2375: jge 0x5d2419 */ if ((fS==fO)) goto L_005d2419;
L_005d237b:; BB(0x005d237b);
    /* 005d237b: cmp dword ptr [0x6fc0e4], 0 */ {  u32 a = R32((u32)(0x6fc0e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2382: je 0x5d2414 */ if (fZ) goto L_005d2414;
L_005d2388:; BB(0x005d2388);
    /* 005d2388: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d238c: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d2391: cmp dword ptr [eax + edx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2396: je 0x5d2414 */ if (fZ) goto L_005d2414;
L_005d2398:; BB(0x005d2398);
    /* 005d2398: movsx ecx, byte ptr [0x6fc0ed] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x6fc0edu));
    /* 005d239f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d23a2: jne 0x5d23e7 */ if (!fZ) goto L_005d23e7;
L_005d23a4:; BB(0x005d23a4);
    /* 005d23a4: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d23a8: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d23ae: movsx eax, byte ptr [edx + 0x6fc10e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6fc10eu));
    /* 005d23b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d23b7: je 0x5d23e7 */ if (fZ) goto L_005d23e7;
L_005d23b9:; BB(0x005d23b9);
    /* 005d23b9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d23bd: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d23c3: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d23c7: mov ecx, dword ptr [eax + 0x134] */ r_ecx = R32((u32)(r_eax+0x134u));
    /* 005d23cd: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d23d1: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d23d6: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d23da: mov eax, dword ptr [edx + 0x134] */ r_eax = R32((u32)(r_edx+0x134u));
    /* 005d23e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d23e2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d23e5u); call_ind(t); }
    /* 005d23e5: jmp 0x5d2414 */ goto L_005d2414;
L_005d23e7:; BB(0x005d23e7);
    /* 005d23e7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d23eb: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d23f1: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d23f5: mov ecx, dword ptr [edx + 0x134] */ r_ecx = R32((u32)(r_edx+0x134u));
    /* 005d23fb: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d23ff: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d2405: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 005d2409: mov edx, dword ptr [eax + 0x134] */ r_edx = R32((u32)(r_eax+0x134u));
    /* 005d240f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d2411: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5d2414u); call_ind(t); }
L_005d2414:; BB(0x005d2414);
    /* 005d2414: jmp 0x5d2362 */ goto L_005d2362;
L_005d2419:; BB(0x005d2419);
    /* 005d2419: mov esp, ebp */ r_esp = r_ebp;
    /* 005d241b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d241c: ret  */ FN_RET(0x005d2351); r_esp += 4; return;
}

void f_005d241d(void) /* FUN_005d241d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d241d);
    /* 005d241d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d241e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2420: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2423: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2424: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2425: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d2428: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005d242f: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005d2436: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d243c: jmp 0x5d244a */ goto L_005d244a;
L_005d243e:; BB(0x005d243e);
    /* 005d243e: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005d2442: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2446: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_005d244a:; BB(0x005d244a);
    /* 005d244a: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d244e: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2451: jge 0x5d249b */ if ((fS==fO)) goto L_005d249b;
L_005d2453:; BB(0x005d2453);
    /* 005d2453: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d2457: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d245d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d2460: movsx ecx, byte ptr [eax + edx + 0x20] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x20u));
    /* 005d2465: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2467: je 0x5d2499 */ if (fZ) goto L_005d2499;
L_005d2469:; BB(0x005d2469);
    /* 005d2469: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d246d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d2470: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d2473: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2476: jne 0x5d247a */ if (!fZ) goto L_005d247a;
L_005d2478:; BB(0x005d2478);
    /* 005d2478: jmp 0x5d249b */ goto L_005d249b;
L_005d247a:; BB(0x005d247a);
    /* 005d247a: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d247e: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2484: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d2487: lea ecx, [eax + edx + 0x20] */ r_ecx = (u32)(r_eax+r_edx+0x20u);
    /* 005d248b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d248c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d248f: call 0x5d21bc */ r_esp -= 4; W32(r_esp, 0x5d2494u); f_005d21bc();
    /* 005d2494: jmp 0x5d2728 */ goto L_005d2728;
L_005d2499:; BB(0x005d2499);
    /* 005d2499: jmp 0x5d243e */ goto L_005d243e;
L_005d249b:; BB(0x005d249b);
    /* 005d249b: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005d249e: mov ecx, 0xa8 */ r_ecx = 0xa8u;
    /* 005d24a3: mov edi, 0x6fc0e8 */ r_edi = 0x6fc0e8u;
    /* 005d24a8: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005d24aa: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d24b0: jmp 0x5d24be */ goto L_005d24be;
L_005d24b2:; BB(0x005d24b2);
    /* 005d24b2: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005d24b6: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d24ba: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
L_005d24be:; BB(0x005d24be);
    /* 005d24be: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d24c2: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d24c5: jge 0x5d24de */ if ((fS==fO)) goto L_005d24de;
L_005d24c7:; BB(0x005d24c7);
    /* 005d24c7: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d24cb: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d24d1: mov dword ptr [edx + ecx*4 + 0x324], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x324u), 0xffffffffu);
    /* 005d24dc: jmp 0x5d24b2 */ goto L_005d24b2;
L_005d24de:; BB(0x005d24de);
    /* 005d24de: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d24e4: jmp 0x5d24f2 */ goto L_005d24f2;
L_005d24e6:; BB(0x005d24e6);
    /* 005d24e6: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005d24ea: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d24ee: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_005d24f2:; BB(0x005d24f2);
    /* 005d24f2: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d24f6: cmp ecx, 0x1a */ {  u32 a = r_ecx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d24f9: jge 0x5d2563 */ if ((fS==fO)) goto L_005d2563;
L_005d24fb:; BB(0x005d24fb);
    /* 005d24fb: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d24ff: movsx eax, byte ptr [edx + 0x6fc0ee] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6fc0eeu));
    /* 005d2506: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2509: je 0x5d2563 */ if (fZ) goto L_005d2563;
L_005d250b:; BB(0x005d250b);
    /* 005d250b: mov word ptr [ebp - 0x10], 0x19 */ W16((u32)(r_ebp+0xfffffff0u), 0x19u);
    /* 005d2511: jmp 0x5d251f */ goto L_005d251f;
L_005d2513:; BB(0x005d2513);
    /* 005d2513: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 005d2517: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d251b: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_005d251f:; BB(0x005d251f);
    /* 005d251f: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d2523: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005d2525: jle 0x5d254b */ if ((fZ||fS!=fO)) goto L_005d254b;
L_005d2527:; BB(0x005d2527);
    /* 005d2527: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d252b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d252f: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d2535: mov esi, dword ptr [0x6fc0e4] */ r_esi = R32((u32)(0x6fc0e4u));
    /* 005d253b: mov eax, dword ptr [esi + eax*4 + 0x320] */ r_eax = R32((u32)(r_esi+r_eax*4+0x320u));
    /* 005d2542: mov dword ptr [edx + ecx*4 + 0x324], eax */ W32((u32)(r_edx+r_ecx*4+0x324u), r_eax);
    /* 005d2549: jmp 0x5d2513 */ goto L_005d2513;
L_005d254b:; BB(0x005d254b);
    /* 005d254b: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d254f: movsx edx, byte ptr [ecx + 0x6fc0ee] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x6fc0eeu));
    /* 005d2556: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d255b: mov dword ptr [eax + 0x324], edx */ W32((u32)(r_eax+0x324u), r_edx);
    /* 005d2561: jmp 0x5d24e6 */ goto L_005d24e6;
L_005d2563:; BB(0x005d2563);
    /* 005d2563: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2565: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d256b: call 0x5ced99 */ r_esp -= 4; W32(r_esp, 0x5d2570u); f_005ced99();
    /* 005d2570: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d2576: jmp 0x5d2584 */ goto L_005d2584;
L_005d2578:; BB(0x005d2578);
    /* 005d2578: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005d257c: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2580: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
L_005d2584:; BB(0x005d2584);
    /* 005d2584: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d2588: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d258b: jge 0x5d2728 */ if ((fS==fO)) goto L_005d2728;
L_005d2591:; BB(0x005d2591);
    /* 005d2591: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d2595: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d259b: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d259f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d25a2: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d25a6: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d25ac: movsx ecx, byte ptr [eax + 0x6fc10a] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6fc10au));
    /* 005d25b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d25b5: jne 0x5d25d2 */ if (!fZ) goto L_005d25d2;
L_005d25b7:; BB(0x005d25b7);
    /* 005d25b7: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d25bb: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d25c1: add edx, 0x6fc108 */ {  u32 a = r_edx; u32 b = 0x6fc108u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d25c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d25c8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d25cb: call 0x5d2023 */ r_esp -= 4; W32(r_esp, 0x5d25d0u); f_005d2023();
    /* 005d25d0: jmp 0x5d25f8 */ goto L_005d25f8;
L_005d25d2:; BB(0x005d25d2);
    /* 005d25d2: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d25d6: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d25dc: add eax, 0x6fc108 */ {  u32 a = r_eax; u32 b = 0x6fc108u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d25e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d25e2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d25e5: call 0x5d1e45 */ r_esp -= 4; W32(r_esp, 0x5d25eau); f_005d1e45();
    /* 005d25ea: cmp dword ptr [0x6f97e0], 0 */ {  u32 a = R32((u32)(0x6f97e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d25f1: je 0x5d25f8 */ if (fZ) goto L_005d25f8;
L_005d25f3:; BB(0x005d25f3);
    /* 005d25f3: jmp 0x5d2728 */ goto L_005d2728;
L_005d25f8:; BB(0x005d25f8);
    /* 005d25f8: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d25fe: jmp 0x5d260c */ goto L_005d260c;
L_005d2600:; BB(0x005d2600);
    /* 005d2600: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 005d2604: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2608: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_005d260c:; BB(0x005d260c);
    /* 005d260c: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d2610: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2613: jge 0x5d2723 */ if ((fS==fO)) goto L_005d2723;
L_005d2619:; BB(0x005d2619);
    /* 005d2619: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d261d: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2623: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d2627: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d2629: mov dl, byte ptr [eax + ecx + 0x6fc124] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x6fc124u))) & 0xffu);
    /* 005d2630: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2636: je 0x5d271e */ if (fZ) goto L_005d271e;
L_005d263c:; BB(0x005d263c);
    /* 005d263c: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d2640: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2646: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d264a: movzx dx, byte ptr [eax + ecx + 0x6fc124] */ r_edx = (r_edx & 0xffff0000u) | (((u32)R8((u32)(r_eax+r_ecx+0x6fc124u))) & 0xffffu);
    /* 005d2653: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 005d2657: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d265b: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2661: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d2665: mov edx, dword ptr [eax + ecx*4 + 0x6fc140] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x6fc140u));
    /* 005d266c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005d266f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2673: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d2679: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005d267d: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d2681: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005d2684: mov ecx, dword ptr [edx + eax + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 005d2688: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d268b: mov dword ptr [ecx + 0xc4], edx */ W32((u32)(r_ecx+0xc4u), r_edx);
    /* 005d2691: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d2694: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 005d269a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d269e: jne 0x5d26c5 */ if (!fZ) goto L_005d26c5;
L_005d26a0:; BB(0x005d26a0);
    /* 005d26a0: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d26a4: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d26aa: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005d26ae: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d26b2: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005d26b5: mov edx, dword ptr [eax + ecx + 0x6c] */ r_edx = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 005d26b9: mov dword ptr [edx + 0xd8], 0xffffffff */ W32((u32)(r_edx+0xd8u), 0xffffffffu);
    /* 005d26c3: jmp 0x5d26e8 */ goto L_005d26e8;
L_005d26c5:; BB(0x005d26c5);
    /* 005d26c5: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d26c9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d26cd: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d26d3: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005d26d7: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d26db: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d26de: mov ecx, dword ptr [ecx + edx + 0x6c] */ r_ecx = R32((u32)(r_ecx+r_edx+0x6cu));
    /* 005d26e2: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
L_005d26e8:; BB(0x005d26e8);
    /* 005d26e8: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d26ec: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d26f1: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005d26f5: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d26f9: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d26fc: mov ecx, dword ptr [ecx + edx + 0x6c] */ r_ecx = R32((u32)(r_ecx+r_edx+0x6cu));
    /* 005d2700: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d2704: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005d2707: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d270b: mov esi, dword ptr [0x6fc0e4] */ r_esi = R32((u32)(0x6fc0e4u));
    /* 005d2711: mov edx, dword ptr [esi + edx*4 + 0x20] */ r_edx = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 005d2715: mov eax, dword ptr [edx + eax + 0x6c] */ r_eax = R32((u32)(r_edx+r_eax+0x6cu));
    /* 005d2719: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d271b: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5d271eu); call_ind(t); }
L_005d271e:; BB(0x005d271e);
    /* 005d271e: jmp 0x5d2600 */ goto L_005d2600;
L_005d2723:; BB(0x005d2723);
    /* 005d2723: jmp 0x5d2578 */ goto L_005d2578;
L_005d2728:; BB(0x005d2728);
    /* 005d2728: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2729: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d272a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d272c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d272d: ret 4 */ FN_RET(0x005d241d); r_esp += 8; return;
}

void f_005d2730(void) /* FUN_005d2730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2730);
    /* 005d2730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2731: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2733: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2736: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d2739: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d273f: jmp 0x5d274d */ goto L_005d274d;
L_005d2741:; BB(0x005d2741);
    /* 005d2741: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d2745: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2749: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005d274d:; BB(0x005d274d);
    /* 005d274d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2751: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2754: jge 0x5d27cb */ if ((fS==fO)) goto L_005d27cb;
L_005d2756:; BB(0x005d2756);
    /* 005d2756: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d275a: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2760: mov byte ptr [edx + 0x6fc10d], 0 */ W8((u32)(r_edx+0x6fc10du), 0x0u);
    /* 005d2767: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d276b: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2771: mov byte ptr [eax + 0x6fc10e], 0 */ W8((u32)(r_eax+0x6fc10eu), 0x0u);
    /* 005d2778: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d277e: jmp 0x5d278c */ goto L_005d278c;
L_005d2780:; BB(0x005d2780);
    /* 005d2780: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005d2784: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2788: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_005d278c:; BB(0x005d278c);
    /* 005d278c: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005d2790: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2793: jge 0x5d27c6 */ if ((fS==fO)) goto L_005d27c6;
L_005d2795:; BB(0x005d2795);
    /* 005d2795: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2799: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d279f: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005d27a3: mov byte ptr [eax + ecx + 0x6fc124], 0xff */ W8((u32)(r_eax+r_ecx+0x6fc124u), 0xffu);
    /* 005d27ab: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d27af: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d27b5: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005d27b9: mov dword ptr [edx + eax*4 + 0x6fc140], 0xffffffff */ W32((u32)(r_edx+r_eax*4+0x6fc140u), 0xffffffffu);
    /* 005d27c4: jmp 0x5d2780 */ goto L_005d2780;
L_005d27c6:; BB(0x005d27c6);
    /* 005d27c6: jmp 0x5d2741 */ goto L_005d2741;
L_005d27cb:; BB(0x005d27cb);
    /* 005d27cb: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d27d1: jmp 0x5d27df */ goto L_005d27df;
L_005d27d3:; BB(0x005d27d3);
    /* 005d27d3: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d27d7: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d27db: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_005d27df:; BB(0x005d27df);
    /* 005d27df: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d27e3: cmp edx, 0x9e */ {  u32 a = r_edx; u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d27e9: jge 0x5d2800 */ if ((fS==fO)) goto L_005d2800;
L_005d27eb:; BB(0x005d27eb);
    /* 005d27eb: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d27ef: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d27f5: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005d27f9: call 0x42882d */ r_esp -= 4; W32(r_esp, 0x5d27feu); f_0042882d();
    /* 005d27fe: jmp 0x5d27d3 */ goto L_005d27d3;
L_005d2800:; BB(0x005d2800);
    /* 005d2800: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2802: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2803: ret  */ FN_RET(0x005d2730); r_esp += 4; return;
}

void f_005d2804(void) /* FUN_005d2804 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2804);
    /* 005d2804: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2805: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2807: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d280d: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 005d2813: mov byte ptr [0x6fc0ed], 1 */ W8((u32)(0x6fc0edu), 0x1u);
    /* 005d281a: mov word ptr [ebp - 0x104], 0 */ W16((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 005d2823: jmp 0x5d2837 */ goto L_005d2837;
L_005d2825:; BB(0x005d2825);
    /* 005d2825: mov ax, word ptr [ebp - 0x104] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffefcu))) & 0xffffu);
    /* 005d282c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2830: mov word ptr [ebp - 0x104], ax */ W16((u32)(r_ebp+0xfffffefcu), (u16)r_eax);
L_005d2837:; BB(0x005d2837);
    /* 005d2837: movsx ecx, word ptr [ebp - 0x104] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 005d283e: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2841: jge 0x5d2893 */ if ((fS==fO)) goto L_005d2893;
L_005d2843:; BB(0x005d2843);
    /* 005d2843: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 005d284a: movsx eax, word ptr [ebp - 0x104] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 005d2851: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2857: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d285a: mov dl, byte ptr [ecx + edx + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xcu))) & 0xffu);
    /* 005d285e: mov byte ptr [eax + 0x6fc10a], dl */ W8((u32)(r_eax+0x6fc10au), (u8)r_edx);
    /* 005d2864: movsx eax, word ptr [ebp - 0x104] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 005d286b: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2871: movsx ecx, byte ptr [eax + 0x6fc10a] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6fc10au));
    /* 005d2878: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d287b: jne 0x5d2891 */ if (!fZ) goto L_005d2891;
L_005d287d:; BB(0x005d287d);
    /* 005d287d: movsx edx, word ptr [ebp - 0x104] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffefcu));
    /* 005d2884: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d288a: mov byte ptr [edx + 0x6fc10d], 1 */ W8((u32)(r_edx+0x6fc10du), 0x1u);
L_005d2891:; BB(0x005d2891);
    /* 005d2891: jmp 0x5d2825 */ goto L_005d2825;
L_005d2893:; BB(0x005d2893);
    /* 005d2893: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d2898: mov dword ptr [eax + 0x3ac], 1 */ W32((u32)(r_eax+0x3acu), 0x1u);
    /* 005d28a2: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005d28a8: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 005d28ab: call 0x40808b */ r_esp -= 4; W32(r_esp, 0x5d28b0u); f_0040808b();
    /* 005d28b0: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5d28b6u); call_ind(t); }
    /* 005d28b6: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d28bc: mov dword ptr [edx + 0x3a0], eax */ W32((u32)(r_edx+0x3a0u), r_eax);
    /* 005d28c2: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d28c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d28ca: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d28cd: mov dword ptr [eax + 0x3a4], edx */ W32((u32)(r_eax+0x3a4u), r_edx);
    /* 005d28d3: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d28d8: mov ecx, dword ptr [eax + 0x3a4] */ r_ecx = R32((u32)(r_eax+0x3a4u));
    /* 005d28de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d28df: push 0x6995d4 */ { u32 v = 0x6995d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d28e4: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 005d28ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d28eb: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5d28f0u); f_00624050();
    /* 005d28f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d28f3: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005d28f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d28fa: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d2900: mov edx, dword ptr [ecx + 0x29c] */ r_edx = R32((u32)(r_ecx+0x29cu));
    /* 005d2906: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005d290c: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d2911: mov edx, dword ptr [eax + 0x29c] */ r_edx = R32((u32)(r_eax+0x29cu));
    /* 005d2917: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d291d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d291f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5d2922u); call_ind(t); }
    /* 005d2922: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d2927: mov ecx, dword ptr [eax + 0x29c] */ r_ecx = R32((u32)(r_eax+0x29cu));
    /* 005d292d: call 0x5cfcac */ r_esp -= 4; W32(r_esp, 0x5d2932u); f_005cfcac();
    /* 005d2932: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2934: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2935: ret 4 */ FN_RET(0x005d2804); r_esp += 8; return;
}

void f_005d2938(void) /* FUN_005d2938 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2938);
    /* 005d2938: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2939: mov ebp, esp */ r_ebp = r_esp;
    /* 005d293b: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d293e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d2941: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d2948: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d294f: movsx eax, byte ptr [0x6fc0ed] */ r_eax = (u32)(i32)(i8)R8((u32)(0x6fc0edu));
    /* 005d2956: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2959: je 0x5d2960 */ if (fZ) goto L_005d2960;
L_005d295b:; BB(0x005d295b);
    /* 005d295b: jmp 0x5d2a62 */ goto L_005d2a62;
L_005d2960:; BB(0x005d2960);
    /* 005d2960: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d2963: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005d2966: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d2969: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d296f: movsx ecx, byte ptr [eax + 0x6fc10e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6fc10eu));
    /* 005d2976: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2978: je 0x5d297f */ if (fZ) goto L_005d297f;
L_005d297a:; BB(0x005d297a);
    /* 005d297a: jmp 0x5d2a62 */ goto L_005d2a62;
L_005d297f:; BB(0x005d297f);
    /* 005d297f: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 005d2982: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2983: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005d2986: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2987: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d298d: call 0x45d949 */ r_esp -= 4; W32(r_esp, 0x5d2992u); f_0045d949();
    /* 005d2992: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2996: jl 0x5d2a3c */ if ((fS!=fO)) goto L_005d2a3c;
L_005d299c:; BB(0x005d299c);
    /* 005d299c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d299f: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d29a2: jge 0x5d29aa */ if ((fS==fO)) goto L_005d29aa;
L_005d29a4:; BB(0x005d29a4);
    /* 005d29a4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d29a7: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_005d29aa:; BB(0x005d29aa);
    /* 005d29aa: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d29ad: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d29b0: jle 0x5d29b8 */ if ((fZ||fS!=fO)) goto L_005d29b8;
L_005d29b2:; BB(0x005d29b2);
    /* 005d29b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d29b5: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_005d29b8:; BB(0x005d29b8);
    /* 005d29b8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d29bb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d29be: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d29c1: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d29c7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d29ca: cmp edx, dword ptr [ecx + 0x6fc120] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x6fc120u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d29d0: jle 0x5d29ea */ if ((fZ||fS!=fO)) goto L_005d29ea;
L_005d29d2:; BB(0x005d29d2);
    /* 005d29d2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d29d5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d29d8: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005d29db: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d29e1: mov eax, dword ptr [edx + 0x6fc120] */ r_eax = R32((u32)(r_edx+0x6fc120u));
    /* 005d29e7: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005d29ea:; BB(0x005d29ea);
    /* 005d29ea: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d29ed: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d29f0: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005d29f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d29f4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d29f7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d29fa: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005d29fd: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d2a02: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d2a06: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x5d2a0bu); f_00425bfe();
    /* 005d2a0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a0d: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005d2a10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a11: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d2a14: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d2a17: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d2a1a: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d2a20: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d2a24: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d2a27: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d2a2a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d2a2d: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d2a33: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 005d2a37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d2a39: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5d2a3cu); call_ind(t); }
L_005d2a3c:; BB(0x005d2a3c);
    /* 005d2a3c: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 005d2a43: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d2a46: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d2a49: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d2a4c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d2a4f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a51: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 005d2a54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a55: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a57: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d2a5a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d2a5d: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x5d2a62u); f_005eccbe();
L_005d2a62:; BB(0x005d2a62);
    /* 005d2a62: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2a64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2a65: ret 8 */ FN_RET(0x005d2938); r_esp += 12; return;
}

void f_005d2a68(void) /* FUN_005d2a68 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2a68);
    /* 005d2a68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a69: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2a6b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2a6e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d2a71: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d2a74: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d2a77: mov dx, word ptr [ecx + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0xcu))) & 0xffffu);
    /* 005d2a7b: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 005d2a7f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2a83: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2a89: mov byte ptr [eax + 0x6fc10e], 1 */ W8((u32)(r_eax+0x6fc10eu), 0x1u);
    /* 005d2a90: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 005d2a97: mov dword ptr [ebp - 0x10], 0xff */ W32((u32)(r_ebp+0xfffffff0u), 0xffu);
    /* 005d2a9e: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2aa0: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5d2aa5u); f_0060ee31();
    /* 005d2aa5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2aa8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d2aab: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2aad: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005d2ab0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ab1: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ab3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d2ab6: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d2ab9: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x5d2abeu); f_005eccbe();
    /* 005d2abe: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2ac0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2ac1: ret  */ FN_RET(0x005d2a68); r_esp += 4; return;
}

void f_005d2ac2(void) /* FUN_005d2ac2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2ac2);
    /* 005d2ac2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ac3: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2ac5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2ac8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ac9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d2acc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d2acf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d2ad2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d2ad5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d2ad8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d2adb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d2ade: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d2ae5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d2aec: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2af0: jne 0x5d2af7 */ if (!fZ) goto L_005d2af7;
L_005d2af2:; BB(0x005d2af2);
    /* 005d2af2: jmp 0x5d2e3d */ goto L_005d2e3d;
L_005d2af7:; BB(0x005d2af7);
    /* 005d2af7: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d2afd: jmp 0x5d2b0b */ goto L_005d2b0b;
L_005d2aff:; BB(0x005d2aff);
    /* 005d2aff: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d2b03: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2b07: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_005d2b0b:; BB(0x005d2b0b);
    /* 005d2b0b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2b0f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2b12: jge 0x5d2b29 */ if ((fS==fO)) goto L_005d2b29;
L_005d2b14:; BB(0x005d2b14);
    /* 005d2b14: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2b18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d2b1b: movsx edx, byte ptr [ecx + eax + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0xcu));
    /* 005d2b20: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b23: jne 0x5d2b27 */ if (!fZ) goto L_005d2b27;
L_005d2b25:; BB(0x005d2b25);
    /* 005d2b25: jmp 0x5d2b29 */ goto L_005d2b29;
L_005d2b27:; BB(0x005d2b27);
    /* 005d2b27: jmp 0x5d2aff */ goto L_005d2aff;
L_005d2b29:; BB(0x005d2b29);
    /* 005d2b29: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2b2d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b30: jne 0x5d2b48 */ if (!fZ) goto L_005d2b48;
L_005d2b32:; BB(0x005d2b32);
    /* 005d2b32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b36: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b38: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d2b3b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d2b3e: call 0x5eccbe */ r_esp -= 4; W32(r_esp, 0x5d2b43u); f_005eccbe();
    /* 005d2b43: jmp 0x5d2e3d */ goto L_005d2e3d;
L_005d2b48:; BB(0x005d2b48);
    /* 005d2b48: cmp dword ptr [ebp - 0x10], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b4f: jne 0x5d2b67 */ if (!fZ) goto L_005d2b67;
L_005d2b51:; BB(0x005d2b51);
    /* 005d2b51: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2b55: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2b5b: mov byte ptr [edx + 0x6fc10e], 1 */ W8((u32)(r_edx+0x6fc10eu), 0x1u);
    /* 005d2b62: jmp 0x5d2e3d */ goto L_005d2e3d;
L_005d2b67:; BB(0x005d2b67);
    /* 005d2b67: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2b6b: je 0x5d2e3d */ if (fZ) goto L_005d2e3d;
L_005d2b71:; BB(0x005d2b71);
    /* 005d2b71: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005d2b77: jmp 0x5d2b85 */ goto L_005d2b85;
L_005d2b79:; BB(0x005d2b79);
    /* 005d2b79: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 005d2b7d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2b81: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_005d2b85:; BB(0x005d2b85);
    /* 005d2b85: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2b89: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2b8c: jge 0x5d2c63 */ if ((fS==fO)) goto L_005d2c63;
L_005d2b92:; BB(0x005d2b92);
    /* 005d2b92: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2b96: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2b9c: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2ba0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d2ba2: mov cl, byte ptr [edx + eax + 0x6fc124] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0x6fc124u))) & 0xffu);
    /* 005d2ba9: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2bac: jne 0x5d2c5e */ if (!fZ) goto L_005d2c5e;
L_005d2bb2:; BB(0x005d2bb2);
    /* 005d2bb2: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2bb6: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2bbc: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2bc0: mov ecx, dword ptr [edx + eax*4 + 0x6fc140] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x6fc140u));
    /* 005d2bc7: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d2bca: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2bce: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2bd2: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2bd8: mov dword ptr [eax + edx*4 + 0x6fc140], ecx */ W32((u32)(r_eax+r_edx*4+0x6fc140u), r_ecx);
    /* 005d2bdf: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2be3: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2be9: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2bed: cmp dword ptr [ecx + edx*4 + 0x6fc140], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4+0x6fc140u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2bf5: jg 0x5d2c26 */ if ((!fZ&&fS==fO)) goto L_005d2c26;
L_005d2bf7:; BB(0x005d2bf7);
    /* 005d2bf7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2bfb: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2c01: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2c05: mov byte ptr [eax + ecx + 0x6fc124], 0xff */ W8((u32)(r_eax+r_ecx+0x6fc124u), 0xffu);
    /* 005d2c0d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2c11: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2c17: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2c1b: mov dword ptr [edx + eax*4 + 0x6fc140], 0 */ W32((u32)(r_edx+r_eax*4+0x6fc140u), 0x0u);
L_005d2c26:; BB(0x005d2c26);
    /* 005d2c26: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005d2c29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c2a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d2c2d: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d2c32: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005d2c36: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2c3a: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d2c3d: mov ecx, dword ptr [ecx + edx + 0x6c] */ r_ecx = R32((u32)(r_ecx+r_edx+0x6cu));
    /* 005d2c41: call 0x426ef0 */ r_esp -= 4; W32(r_esp, 0x5d2c46u); f_00426ef0();
    /* 005d2c46: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d2c49: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d2c4c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d2c4f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2c53: jg 0x5d2c5c */ if ((!fZ&&fS==fO)) goto L_005d2c5c;
L_005d2c55:; BB(0x005d2c55);
    /* 005d2c55: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005d2c5c:; BB(0x005d2c5c);
    /* 005d2c5c: jmp 0x5d2c63 */ goto L_005d2c63;
L_005d2c5e:; BB(0x005d2c5e);
    /* 005d2c5e: jmp 0x5d2b79 */ goto L_005d2b79;
L_005d2c63:; BB(0x005d2c63);
    /* 005d2c63: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2c67: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2c6a: jne 0x5d2ce7 */ if (!fZ) goto L_005d2ce7;
L_005d2c6c:; BB(0x005d2c6c);
    /* 005d2c6c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2c70: jle 0x5d2ce7 */ if ((fZ||fS!=fO)) goto L_005d2ce7;
L_005d2c72:; BB(0x005d2c72);
    /* 005d2c72: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005d2c78: jmp 0x5d2c86 */ goto L_005d2c86;
L_005d2c7a:; BB(0x005d2c7a);
    /* 005d2c7a: mov dx, word ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 005d2c7e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2c82: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
L_005d2c86:; BB(0x005d2c86);
    /* 005d2c86: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2c8a: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2c8d: jge 0x5d2ce7 */ if ((fS==fO)) goto L_005d2ce7;
L_005d2c8f:; BB(0x005d2c8f);
    /* 005d2c8f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2c93: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2c99: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2c9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d2c9f: mov al, byte ptr [ecx + edx + 0x6fc124] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0x6fc124u))) & 0xffu);
    /* 005d2ca6: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2cab: jne 0x5d2ce5 */ if (!fZ) goto L_005d2ce5;
L_005d2cad:; BB(0x005d2cad);
    /* 005d2cad: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2cb1: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2cb7: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2cbb: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 005d2cbe: mov byte ptr [ecx + edx + 0x6fc124], al */ W8((u32)(r_ecx+r_edx+0x6fc124u), (u8)r_eax);
    /* 005d2cc5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2cc9: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2ccf: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2cd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d2cd6: mov dword ptr [ecx + edx*4 + 0x6fc140], eax */ W32((u32)(r_ecx+r_edx*4+0x6fc140u), r_eax);
    /* 005d2cdd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d2ce0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d2ce3: jmp 0x5d2ce7 */ goto L_005d2ce7;
L_005d2ce5:; BB(0x005d2ce5);
    /* 005d2ce5: jmp 0x5d2c7a */ goto L_005d2c7a;
L_005d2ce7:; BB(0x005d2ce7);
    /* 005d2ce7: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 005d2ceb: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2cee: jge 0x5d2e3d */ if ((fS==fO)) goto L_005d2e3d;
L_005d2cf4:; BB(0x005d2cf4);
    /* 005d2cf4: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2cf8: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2cfe: mov ecx, dword ptr [eax + 0x6fc120] */ r_ecx = R32((u32)(r_eax+0x6fc120u));
    /* 005d2d04: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d2d07: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2d0b: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2d11: mov eax, dword ptr [edx + 0x6fc120] */ r_eax = R32((u32)(r_edx+0x6fc120u));
    /* 005d2d17: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d2d1a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2d1e: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2d24: mov dword ptr [ecx + 0x6fc120], eax */ W32((u32)(r_ecx+0x6fc120u), r_eax);
    /* 005d2d2a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2d2e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d2d31: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d2d34: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2d37: jne 0x5d2d59 */ if (!fZ) goto L_005d2d59;
L_005d2d39:; BB(0x005d2d39);
    /* 005d2d39: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d2d3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d3d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2d41: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2d47: mov ecx, dword ptr [eax + 0x6fc120] */ r_ecx = R32((u32)(r_eax+0x6fc120u));
    /* 005d2d4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d4e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d2d51: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d2d54: call 0x5edf90 */ r_esp -= 4; W32(r_esp, 0x5d2d59u); f_005edf90();
L_005d2d59:; BB(0x005d2d59);
    /* 005d2d59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d2d5c: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d2d62: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005d2d66: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2d6a: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005d2d6d: mov ecx, dword ptr [edx + eax + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 005d2d71: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d2d74: mov dword ptr [ecx + 0xc4], edx */ W32((u32)(r_ecx+0xc4u), r_edx);
    /* 005d2d7a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2d7d: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 005d2d83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d89: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d8e: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005d2d94: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 005d2d97: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5d2d9cu); f_005e8389();
    /* 005d2d9c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2da0: jne 0x5d2dc5 */ if (!fZ) goto L_005d2dc5;
L_005d2da2:; BB(0x005d2da2);
    /* 005d2da2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d2da5: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d2daa: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005d2dae: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2db2: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d2db5: mov eax, dword ptr [ecx + edx + 0x6c] */ r_eax = R32((u32)(r_ecx+r_edx+0x6cu));
    /* 005d2db9: mov dword ptr [eax + 0xd8], 0xffffffff */ W32((u32)(r_eax+0xd8u), 0xffffffffu);
    /* 005d2dc3: jmp 0x5d2de6 */ goto L_005d2de6;
L_005d2dc5:; BB(0x005d2dc5);
    /* 005d2dc5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2dc9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d2dcc: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d2dd1: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005d2dd5: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2dd9: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005d2ddc: mov edx, dword ptr [edx + eax + 0x6c] */ r_edx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 005d2de0: mov dword ptr [edx + 0xd8], ecx */ W32((u32)(r_edx+0xd8u), r_ecx);
L_005d2de6:; BB(0x005d2de6);
    /* 005d2de6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d2de9: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d2def: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005d2df3: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2df7: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005d2dfa: mov ecx, dword ptr [edx + eax + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 005d2dfe: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2e02: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d2e05: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d2e08: mov esi, dword ptr [0x6fc0e4] */ r_esi = R32((u32)(0x6fc0e4u));
    /* 005d2e0e: mov eax, dword ptr [esi + eax*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_eax*4+0x20u));
    /* 005d2e12: mov edx, dword ptr [eax + edx + 0x6c] */ r_edx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 005d2e16: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d2e18: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5d2e1bu); call_ind(t); }
    /* 005d2e1b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d2e1e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d2e20: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d2e23: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 005d2e26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e27: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2e2b: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d2e31: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d2e35: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d2e38: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x5d2e3du); f_004267ae();
L_005d2e3d:; BB(0x005d2e3d);
    /* 005d2e3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2e3e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2e40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2e41: ret 4 */ FN_RET(0x005d2ac2); r_esp += 8; return;
}

void f_005d2e44(void) /* FUN_005d2e44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2e44);
    /* 005d2e44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e45: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2e47: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2e4a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e4c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d2e4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e51: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d2e57: call 0x5cbc47 */ r_esp -= 4; W32(r_esp, 0x5d2e5cu); f_005cbc47();
    /* 005d2e5c: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005d2e5f: mov ecx, 0xa8 */ r_ecx = 0xa8u;
    /* 005d2e64: mov edi, 0x6fc0e8 */ r_edi = 0x6fc0e8u;
    /* 005d2e69: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005d2e6b: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d2e71: jmp 0x5d2e7f */ goto L_005d2e7f;
L_005d2e73:; BB(0x005d2e73);
    /* 005d2e73: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d2e77: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2e7b: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005d2e7f:; BB(0x005d2e7f);
    /* 005d2e7f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2e83: cmp ecx, 0x1a */ {  u32 a = r_ecx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2e86: jg 0x5d2ec4 */ if ((!fZ&&fS==fO)) goto L_005d2ec4;
L_005d2e88:; BB(0x005d2e88);
    /* 005d2e88: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2e8c: movsx eax, byte ptr [edx + 0x6fc0ee] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6fc0eeu));
    /* 005d2e93: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2e96: je 0x5d2ea1 */ if (fZ) goto L_005d2ea1;
L_005d2e98:; BB(0x005d2e98);
    /* 005d2e98: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2e9c: cmp ecx, 0x1a */ {  u32 a = r_ecx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2e9f: jne 0x5d2ec2 */ if (!fZ) goto L_005d2ec2;
L_005d2ea1:; BB(0x005d2ea1);
    /* 005d2ea1: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2ea5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2ea7: jne 0x5d2eb2 */ if (!fZ) goto L_005d2eb2;
L_005d2ea9:; BB(0x005d2ea9);
    /* 005d2ea9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d2eb0: jmp 0x5d2ec0 */ goto L_005d2ec0;
L_005d2eb2:; BB(0x005d2eb2);
    /* 005d2eb2: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2eb6: movsx ecx, byte ptr [eax + 0x6fc0ed] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6fc0edu));
    /* 005d2ebd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005d2ec0:; BB(0x005d2ec0);
    /* 005d2ec0: jmp 0x5d2ec4 */ goto L_005d2ec4;
L_005d2ec2:; BB(0x005d2ec2);
    /* 005d2ec2: jmp 0x5d2e73 */ goto L_005d2e73;
L_005d2ec4:; BB(0x005d2ec4);
    /* 005d2ec4: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ec6: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005d2ecc: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d2ecf: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d2ed4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d2ed7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d2ed9: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5d2edcu); call_ind(t); }
    /* 005d2edc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2edf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ee0: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d2ee6: call 0x5cf545 */ r_esp -= 4; W32(r_esp, 0x5d2eebu); f_005cf545();
    /* 005d2eeb: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d2ef1: call 0x5cf037 */ r_esp -= 4; W32(r_esp, 0x5d2ef6u); f_005cf037();
    /* 005d2ef6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ef8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2efa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2efc: push 0x1771 */ { u32 v = 0x1771u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f01: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005d2f07: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 005d2f0a: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5d2f0fu); f_005e8389();
    /* 005d2f0f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d2f12: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d2f15: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005d2f18: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2f1e: movsx eax, byte ptr [edx + 0x6fc10a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6fc10au));
    /* 005d2f25: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2f28: jne 0x5d2f65 */ if (!fZ) goto L_005d2f65;
L_005d2f2a:; BB(0x005d2f2a);
    /* 005d2f2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d2f2d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005d2f30: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d2f33: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2f39: cmp dword ptr [eax + 0x6fc120], 0 */ {  u32 a = R32((u32)(r_eax+0x6fc120u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2f40: jl 0x5d2f65 */ if ((fS!=fO)) goto L_005d2f65;
L_005d2f42:; BB(0x005d2f42);
    /* 005d2f42: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d2f47: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005d2f4a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d2f4d: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2f53: mov ecx, dword ptr [eax + 0x6fc120] */ r_ecx = R32((u32)(r_eax+0x6fc120u));
    /* 005d2f59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f5a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d2f5d: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d2f60: call 0x5edf90 */ r_esp -= 4; W32(r_esp, 0x5d2f65u); f_005edf90();
L_005d2f65:; BB(0x005d2f65);
    /* 005d2f65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d2f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d2f67: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2f69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2f6a: ret 4 */ FN_RET(0x005d2e44); r_esp += 8; return;
}

void f_005d2f6d(void) /* FUN_005d2f6d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2f6d);
    /* 005d2f6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f6e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2f70: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2f76: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 005d2f7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f7e: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d2f84: call 0x5ced99 */ r_esp -= 4; W32(r_esp, 0x5d2f89u); f_005ced99();
    /* 005d2f89: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d2f8f: jmp 0x5d2f9d */ goto L_005d2f9d;
L_005d2f91:; BB(0x005d2f91);
    /* 005d2f91: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d2f95: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2f99: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005d2f9d:; BB(0x005d2f9d);
    /* 005d2f9d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2fa1: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2fa4: jge 0x5d309c */ if ((fS==fO)) goto L_005d309c;
L_005d2faa:; BB(0x005d2faa);
    /* 005d2faa: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 005d2fb4: mov word ptr [ebp - 0x8c], 0 */ W16((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 005d2fbd: jmp 0x5d2fd1 */ goto L_005d2fd1;
L_005d2fbf:; BB(0x005d2fbf);
    /* 005d2fbf: mov dx, word ptr [ebp - 0x8c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff74u))) & 0xffffu);
    /* 005d2fc6: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d2fca: mov word ptr [ebp - 0x8c], dx */ W16((u32)(r_ebp+0xffffff74u), (u16)r_edx);
L_005d2fd1:; BB(0x005d2fd1);
    /* 005d2fd1: movsx eax, word ptr [ebp - 0x8c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff74u));
    /* 005d2fd8: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2fdb: jge 0x5d303f */ if ((fS==fO)) goto L_005d303f;
L_005d2fdd:; BB(0x005d2fdd);
    /* 005d2fdd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d2fe1: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d2fe7: movsx edx, word ptr [ebp - 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff74u));
    /* 005d2fee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d2ff0: mov al, byte ptr [ecx + edx + 0x6fc124] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0x6fc124u))) & 0xffu);
    /* 005d2ff7: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2ffc: je 0x5d303d */ if (fZ) goto L_005d303d;
L_005d2ffe:; BB(0x005d2ffe);
    /* 005d2ffe: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d3002: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d3008: movsx edx, word ptr [ebp - 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff74u));
    /* 005d300f: cmp dword ptr [ecx + edx*4 + 0x6fc140], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4+0x6fc140u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3017: jle 0x5d303d */ if ((fZ||fS!=fO)) goto L_005d303d;
L_005d3019:; BB(0x005d3019);
    /* 005d3019: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d301d: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d3023: movsx ecx, word ptr [ebp - 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff74u));
    /* 005d302a: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005d3030: add edx, dword ptr [eax + ecx*4 + 0x6fc140] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ecx*4+0x6fc140u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d3037: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
L_005d303d:; BB(0x005d303d);
    /* 005d303d: jmp 0x5d2fbf */ goto L_005d2fbf;
L_005d303f:; BB(0x005d303f);
    /* 005d303f: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3046: jle 0x5d3097 */ if ((fZ||fS!=fO)) goto L_005d3097;
L_005d3048:; BB(0x005d3048);
    /* 005d3048: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d304a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d304c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d304e: push 0x1774 */ { u32 v = 0x1774u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3053: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d3058: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005d305b: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5d3060u); f_005e8389();
    /* 005d3060: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 005d3066: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3067: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005d306d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d306e: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x5d3073u); f_0060fb42();
    /* 005d3073: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3076: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 005d307c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d307d: push 0x6995e4 */ { u32 v = 0x6995e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3082: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3084: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d3088: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d308e: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d3092: call 0x4256dd */ r_esp -= 4; W32(r_esp, 0x5d3097u); f_004256dd();
L_005d3097:; BB(0x005d3097);
    /* 005d3097: jmp 0x5d2f91 */ goto L_005d2f91;
L_005d309c:; BB(0x005d309c);
    /* 005d309c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d309e: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d30a3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d30a6: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005d30ac: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d30af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d30b1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d30b4u); call_ind(t); }
    /* 005d30b4: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d30b6: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d30bb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d30be: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005d30c4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d30c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d30c9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d30ccu); call_ind(t); }
    /* 005d30cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005d30ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d30cf: ret  */ FN_RET(0x005d2f6d); r_esp += 4; return;
}

void f_005d30d0(void) /* FUN_005d30d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d30d0);
    /* 005d30d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d30d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d30d3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d30d6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005d30d9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005d30e0: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005d30e7: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005d30ed: jmp 0x5d30fb */ goto L_005d30fb;
L_005d30ef:; BB(0x005d30ef);
    /* 005d30ef: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 005d30f3: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d30f7: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
L_005d30fb:; BB(0x005d30fb);
    /* 005d30fb: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 005d30ff: cmp ecx, 0x9e */ {  u32 a = r_ecx; u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3105: jge 0x5d32fb */ if ((fS==fO)) goto L_005d32fb;
L_005d310b:; BB(0x005d310b);
    /* 005d310b: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d3111: jmp 0x5d311f */ goto L_005d311f;
L_005d3113:; BB(0x005d3113);
    /* 005d3113: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d3117: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d311b: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005d311f:; BB(0x005d311f);
    /* 005d311f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d3123: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3126: jge 0x5d32f6 */ if ((fS==fO)) goto L_005d32f6;
L_005d312c:; BB(0x005d312c);
    /* 005d312c: mov dword ptr [ebp - 0x20], 0x55 */ W32((u32)(r_ebp+0xffffffe0u), 0x55u);
    /* 005d3133: mov dword ptr [ebp - 0x1c], 0x23 */ W32((u32)(r_ebp+0xffffffe4u), 0x23u);
    /* 005d313a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d313e: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d3144: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d3148: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d314b: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x5d3150u); f_00420800();
    /* 005d3150: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005d3153: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d3156: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3158: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d315b: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5d315eu); call_ind(t); }
    /* 005d315e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d3161: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d3165: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d316b: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d316f: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005d3172: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x5d3177u); f_00420800();
    /* 005d3177: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d317a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d317d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d317f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d3182: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d3185u); call_ind(t); }
    /* 005d3185: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d3188: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d318c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d318d: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 005d3191: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d3197: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005d319b: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x5d31a0u); f_004280b4();
    /* 005d31a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d31a2: je 0x5d32f1 */ if (fZ) goto L_005d32f1;
L_005d31a8:; BB(0x005d31a8);
    /* 005d31a8: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 005d31ac: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d31b2: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005d31b6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d31ba: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005d31bd: mov ecx, dword ptr [edx + eax + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax+0x6cu));
    /* 005d31c1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d31c4: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005d31ca: jmp 0x5d31d8 */ goto L_005d31d8;
L_005d31cc:; BB(0x005d31cc);
    /* 005d31cc: mov dx, word ptr [ebp - 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 005d31d0: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d31d4: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
L_005d31d8:; BB(0x005d31d8);
    /* 005d31d8: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 005d31dc: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d31df: jge 0x5d32e6 */ if ((fS==fO)) goto L_005d32e6;
L_005d31e5:; BB(0x005d31e5);
    /* 005d31e5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d31e9: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d31ef: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 005d31f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d31f5: mov al, byte ptr [ecx + edx + 0x6fc124] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0x6fc124u))) & 0xffu);
    /* 005d31fc: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 005d3200: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3202: jne 0x5d32e1 */ if (!fZ) goto L_005d32e1;
L_005d3208:; BB(0x005d3208);
    /* 005d3208: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005d320f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d3212: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005d3215: mov dword ptr [eax + 0x78], 5 */ W32((u32)(r_eax+0x78u), 0x5u);
    /* 005d321c: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d3220: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d3226: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 005d322a: cmp dword ptr [ecx + edx*4 + 0x6fc140], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4+0x6fc140u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3232: jne 0x5d3290 */ if (!fZ) goto L_005d3290;
L_005d3234:; BB(0x005d3234);
    /* 005d3234: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3236: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d323bu); f_0048ab58();
    /* 005d323b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d323e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d3241: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3245: je 0x5d3278 */ if (fZ) goto L_005d3278;
L_005d3247:; BB(0x005d3247);
    /* 005d3247: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d324a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d324d: add ecx, dword ptr [eax + 0xb8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d3253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3254: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d3257: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d325a: add eax, dword ptr [edx + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3261: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005d3267: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005d326a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d326b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d326e: call 0x5df72f */ r_esp -= 4; W32(r_esp, 0x5d3273u); f_005df72f();
    /* 005d3273: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d3276: jmp 0x5d327f */ goto L_005d327f;
L_005d3278:; BB(0x005d3278);
    /* 005d3278: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d327f:; BB(0x005d327f);
    /* 005d327f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d3282: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3283: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d3286: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005d3289: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x5d328eu); f_005d4df6();
    /* 005d328e: jmp 0x5d32df */ goto L_005d32df;
L_005d3290:; BB(0x005d3290);
    /* 005d3290: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 005d3297: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3299: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d329eu); f_0048ab58();
    /* 005d329e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d32a1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d32a4: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d32a8: je 0x5d32c9 */ if (fZ) goto L_005d32c9;
L_005d32aa:; BB(0x005d32aa);
    /* 005d32aa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d32ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d32ae: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d32b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d32b2: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005d32b8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005d32bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d32bc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d32bf: call 0x5df72f */ r_esp -= 4; W32(r_esp, 0x5d32c4u); f_005df72f();
    /* 005d32c4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d32c7: jmp 0x5d32d0 */ goto L_005d32d0;
L_005d32c9:; BB(0x005d32c9);
    /* 005d32c9: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005d32d0:; BB(0x005d32d0);
    /* 005d32d0: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d32d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d32d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d32d7: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005d32da: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x5d32dfu); f_005d4df6();
L_005d32df:; BB(0x005d32df);
    /* 005d32df: jmp 0x5d32e6 */ goto L_005d32e6;
L_005d32e1:; BB(0x005d32e1);
    /* 005d32e1: jmp 0x5d31cc */ goto L_005d31cc;
L_005d32e6:; BB(0x005d32e6);
    /* 005d32e6: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 005d32ea: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d32ed: jne 0x5d32f1 */ if (!fZ) goto L_005d32f1;
L_005d32ef:; BB(0x005d32ef);
    /* 005d32ef: jmp 0x5d32f6 */ goto L_005d32f6;
L_005d32f1:; BB(0x005d32f1);
    /* 005d32f1: jmp 0x5d3113 */ goto L_005d3113;
L_005d32f6:; BB(0x005d32f6);
    /* 005d32f6: jmp 0x5d30ef */ goto L_005d30ef;
L_005d32fb:; BB(0x005d32fb);
    /* 005d32fb: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d32ff: je 0x5d331f */ if (fZ) goto L_005d331f;
L_005d3301:; BB(0x005d3301);
    /* 005d3301: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3305: jne 0x5d331f */ if (!fZ) goto L_005d331f;
L_005d3307:; BB(0x005d3307);
    /* 005d3307: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3309: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d330b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d330d: push 0x1773 */ { u32 v = 0x1773u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3312: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d3317: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005d331a: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5d331fu); f_005e8389();
L_005d331f:; BB(0x005d331f);
    /* 005d331f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3321: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005d3327: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d332a: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005d3330: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d3333: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3335: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d3338u); call_ind(t); }
    /* 005d3338: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d333a: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d333f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d3342: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005d3348: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d334b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d334d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d3350u); call_ind(t); }
    /* 005d3350: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3352: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3353: ret  */ FN_RET(0x005d30d0); r_esp += 4; return;
}

void f_005d3354(void) /* FUN_005d3354 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d3354);
    /* 005d3354: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3355: mov ebp, esp */ r_ebp = r_esp;
    /* 005d3357: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d335a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d335d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d3364: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d336b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005d336d: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d3372: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d3375: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005d337b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d337e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3380: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d3383u); call_ind(t); }
    /* 005d3383: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005d3389: jmp 0x5d3397 */ goto L_005d3397;
L_005d338b:; BB(0x005d338b);
    /* 005d338b: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 005d338f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d3393: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
L_005d3397:; BB(0x005d3397);
    /* 005d3397: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 005d339b: cmp ecx, 0x9e */ {  u32 a = r_ecx; u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d33a1: jge 0x5d3408 */ if ((fS==fO)) goto L_005d3408;
L_005d33a3:; BB(0x005d33a3);
    /* 005d33a3: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 005d33a7: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d33ac: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005d33b0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d33b3: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d33b9: jmp 0x5d33c7 */ goto L_005d33c7;
L_005d33bb:; BB(0x005d33bb);
    /* 005d33bb: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d33bf: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d33c3: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005d33c7:; BB(0x005d33c7);
    /* 005d33c7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d33cb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d33ce: jge 0x5d3406 */ if ((fS==fO)) goto L_005d3406;
L_005d33d0:; BB(0x005d33d0);
    /* 005d33d0: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d33d4: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005d33d7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d33da: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 005d33de: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d33e1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d33e5: je 0x5d3404 */ if (fZ) goto L_005d3404;
L_005d33e7:; BB(0x005d33e7);
    /* 005d33e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d33ea: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d33ee: je 0x5d3404 */ if (fZ) goto L_005d3404;
L_005d33f0:; BB(0x005d33f0);
    /* 005d33f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d33f3: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005d33f6: call 0x5d4e74 */ r_esp -= 4; W32(r_esp, 0x5d33fbu); f_005d4e74();
    /* 005d33fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d33fd: je 0x5d3404 */ if (fZ) goto L_005d3404;
L_005d33ff:; BB(0x005d33ff);
    /* 005d33ff: jmp 0x5d34c5 */ goto L_005d34c5;
L_005d3404:; BB(0x005d3404);
    /* 005d3404: jmp 0x5d33bb */ goto L_005d33bb;
L_005d3406:; BB(0x005d3406);
    /* 005d3406: jmp 0x5d338b */ goto L_005d338b;
L_005d3408:; BB(0x005d3408);
    /* 005d3408: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005d340e: jmp 0x5d341c */ goto L_005d341c;
L_005d3410:; BB(0x005d3410);
    /* 005d3410: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 005d3414: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d3418: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
L_005d341c:; BB(0x005d341c);
    /* 005d341c: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 005d3420: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3423: jge 0x5d346e */ if ((fS==fO)) goto L_005d346e;
L_005d3425:; BB(0x005d3425);
    /* 005d3425: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 005d3429: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d342f: movsx eax, byte ptr [edx + 0x6fc10a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6fc10au));
    /* 005d3436: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3439: jne 0x5d346c */ if (!fZ) goto L_005d346c;
L_005d343b:; BB(0x005d343b);
    /* 005d343b: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 005d343f: imul ecx, ecx, 0xa0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xa0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d3445: mov edx, dword ptr [ecx + 0x6fc120] */ r_edx = R32((u32)(r_ecx+0x6fc120u));
    /* 005d344b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d344e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3450: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3452: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005d3455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3456: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 005d345a: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d3460: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d3464: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d3467: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x5d346cu); f_00426561();
L_005d346c:; BB(0x005d346c);
    /* 005d346c: jmp 0x5d3410 */ goto L_005d3410;
L_005d346e:; BB(0x005d346e);
    /* 005d346e: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d3474: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005d3477: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d347d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d3480: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3482: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5d3485u); call_ind(t); }
    /* 005d3485: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d348b: jmp 0x5d3499 */ goto L_005d3499;
L_005d348d:; BB(0x005d348d);
    /* 005d348d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d3491: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d3495: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005d3499:; BB(0x005d3499);
    /* 005d3499: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d349d: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d34a0: jge 0x5d34b8 */ if ((fS==fO)) goto L_005d34b8;
L_005d34a2:; BB(0x005d34a2);
    /* 005d34a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d34a4: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d34a8: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d34ad: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d34b1: call 0x4257da */ r_esp -= 4; W32(r_esp, 0x5d34b6u); f_004257da();
    /* 005d34b6: jmp 0x5d348d */ goto L_005d348d;
L_005d34b8:; BB(0x005d34b8);
    /* 005d34b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d34ba: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d34c0: call 0x5cbc47 */ r_esp -= 4; W32(r_esp, 0x5d34c5u); f_005cbc47();
L_005d34c5:; BB(0x005d34c5);
    /* 005d34c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d34c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d34c8: ret  */ FN_RET(0x005d3354); r_esp += 4; return;
}

void f_005d34c9(void) /* FUN_005d34c9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d34c9);
    /* 005d34c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d34ca: mov ebp, esp */ r_ebp = r_esp;
    /* 005d34cc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d34cf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d34d2: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d34d8: jmp 0x5d34e6 */ goto L_005d34e6;
L_005d34da:; BB(0x005d34da);
    /* 005d34da: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005d34de: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d34e2: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005d34e6:; BB(0x005d34e6);
    /* 005d34e6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d34ea: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d34ed: jge 0x5d353f */ if ((fS==fO)) goto L_005d353f;
L_005d34ef:; BB(0x005d34ef);
    /* 005d34ef: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d34f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d34f6: movsx ecx, byte ptr [eax + edx + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xcu));
    /* 005d34fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d34fd: je 0x5d353d */ if (fZ) goto L_005d353d;
L_005d34ff:; BB(0x005d34ff);
    /* 005d34ff: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d3503: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d3509: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d350c: mov cl, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 005d350f: mov byte ptr [edx + 0x6fc10b], cl */ W8((u32)(r_edx+0x6fc10bu), (u8)r_ecx);
    /* 005d3515: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d3519: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d351f: movsx eax, byte ptr [edx + 0x6fc10b] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6fc10bu));
    /* 005d3526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3527: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005d352b: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d3531: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005d3535: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d3538: call 0x42085e */ r_esp -= 4; W32(r_esp, 0x5d353du); f_0042085e();
L_005d353d:; BB(0x005d353d);
    /* 005d353d: jmp 0x5d34da */ goto L_005d34da;
L_005d353f:; BB(0x005d353f);
    /* 005d353f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3541: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3542: ret 4 */ FN_RET(0x005d34c9); r_esp += 8; return;
}

void f_005d3545(void) /* FUN_005d3545 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d3545);
    /* 005d3545: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3546: mov ebp, esp */ r_ebp = r_esp;
    /* 005d3548: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d354b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d354e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d3555: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d355c: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d3562: jmp 0x5d3570 */ goto L_005d3570;
L_005d3564:; BB(0x005d3564);
    /* 005d3564: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005d3568: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d356c: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_005d3570:; BB(0x005d3570);
    /* 005d3570: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d3574: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3577: jge 0x5d35d9 */ if ((fS==fO)) goto L_005d35d9;
L_005d3579:; BB(0x005d3579);
    /* 005d3579: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d357d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d3580: movsx ecx, byte ptr [eax + edx + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xcu));
    /* 005d3585: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3587: je 0x5d35d7 */ if (fZ) goto L_005d35d7;
L_005d3589:; BB(0x005d3589);
    /* 005d3589: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d358d: imul edx, edx, 0xa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d3593: mov byte ptr [edx + 0x6fc1a4], 1 */ W8((u32)(r_edx+0x6fc1a4u), 0x1u);
    /* 005d359a: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d359e: imul eax, eax, 0xa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d35a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d35a7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d35aa: mov dword ptr [eax + 0x6fc120], edx */ W32((u32)(r_eax+0x6fc120u), r_edx);
    /* 005d35b0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d35b3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d35b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d35b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d35bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d35bd: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005d35c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d35c1: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d35c5: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d35cb: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d35cf: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d35d2: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x5d35d7u); f_00426561();
L_005d35d7:; BB(0x005d35d7);
    /* 005d35d7: jmp 0x5d3564 */ goto L_005d3564;
L_005d35d9:; BB(0x005d35d9);
    /* 005d35d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d35db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d35dc: ret 4 */ FN_RET(0x005d3545); r_esp += 8; return;
}

void f_005d35df(void) /* FUN_005d35df */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d35df);
    /* 005d35df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d35e0: mov ebp, esp */ r_ebp = r_esp;
    /* 005d35e2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d35e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d35e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d35eb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d35ed: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d35f0: cmp dword ptr [ebp - 8], 0x65 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d35f4: ja 0x5d3656 */ if ((!fC&&!fZ)) goto L_005d3656;
L_005d35f6:; BB(0x005d35f6);
    /* 005d35f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d35f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d35fb: mov dl, byte ptr [eax + 0x5d3678] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x5d3678u))) & 0xffu);
    /* 005d3601: jmp dword ptr [edx*4 + 0x5d365c] */ { u32 t = R32((u32)(r_edx*4+0x5d365cu)); switch (t) { case 0x5d3608u: goto L_005d3608; case 0x5d3612u: goto L_005d3612; case 0x5d3620u: goto L_005d3620; case 0x5d362eu: goto L_005d362e; case 0x5d363cu: goto L_005d363c; case 0x5d364au: goto L_005d364a; case 0x5d3656u: goto L_005d3656; default: UNSUP(0x005d3601, "jump table entry is not a known target"); } }
L_005d3608:; BB(0x005d3608);
    /* 005d3608: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d360b: call 0x5d2730 */ r_esp -= 4; W32(r_esp, 0x5d3610u); f_005d2730();
    /* 005d3610: jmp 0x5d3656 */ goto L_005d3656;
L_005d3612:; BB(0x005d3612);
    /* 005d3612: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d3615: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3616: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3619: call 0x5d2804 */ r_esp -= 4; W32(r_esp, 0x5d361eu); f_005d2804();
    /* 005d361e: jmp 0x5d3656 */ goto L_005d3656;
L_005d3620:; BB(0x005d3620);
    /* 005d3620: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d3623: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3624: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3627: call 0x5d2ac2 */ r_esp -= 4; W32(r_esp, 0x5d362cu); f_005d2ac2();
    /* 005d362c: jmp 0x5d3656 */ goto L_005d3656;
L_005d362e:; BB(0x005d362e);
    /* 005d362e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d3631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3632: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3635: call 0x5d2e44 */ r_esp -= 4; W32(r_esp, 0x5d363au); f_005d2e44();
    /* 005d363a: jmp 0x5d3656 */ goto L_005d3656;
L_005d363c:; BB(0x005d363c);
    /* 005d363c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d363f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3640: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3643: call 0x5d34c9 */ r_esp -= 4; W32(r_esp, 0x5d3648u); f_005d34c9();
    /* 005d3648: jmp 0x5d3656 */ goto L_005d3656;
L_005d364a:; BB(0x005d364a);
    /* 005d364a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d364d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d364e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3651: call 0x5d3545 */ r_esp -= 4; W32(r_esp, 0x5d3656u); f_005d3545();
L_005d3656:; BB(0x005d3656);
    /* 005d3656: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3659: ret 4 */ FN_RET(0x005d35df); r_esp += 8; return;
}

void f_005d36de(void) /* FUN_005d36de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d36de);
    /* 005d36de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d36df: mov ebp, esp */ r_ebp = r_esp;
    /* 005d36e1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d36e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d36e7: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005d36ea: mov byte ptr [ebp - 8], al */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_eax);
    /* 005d36ed: cmp byte ptr [ebp - 8], 0x50 */ {  u32 a = R8((u32)(r_ebp+0xfffffff8u)); u32 b = 0x50u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005d36f1: je 0x5d3701 */ if (fZ) goto L_005d3701;
L_005d36f3:; BB(0x005d36f3);
    /* 005d36f3: cmp byte ptr [ebp - 8], 0x51 */ {  u32 a = R8((u32)(r_ebp+0xfffffff8u)); u32 b = 0x51u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005d36f7: je 0x5d371c */ if (fZ) goto L_005d371c;
L_005d36f9:; BB(0x005d36f9);
    /* 005d36f9: cmp byte ptr [ebp - 8], 0x52 */ {  u32 a = R8((u32)(r_ebp+0xfffffff8u)); u32 b = 0x52u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005d36fd: je 0x5d3737 */ if (fZ) goto L_005d3737;
L_005d36ff:; BB(0x005d36ff);
    /* 005d36ff: jmp 0x5d3750 */ goto L_005d3750;
L_005d3701:; BB(0x005d3701);
    /* 005d3701: push 0x6995f0 */ { u32 v = 0x6995f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3706: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5d370bu); f_0060fc40();
    /* 005d370b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d370e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005d3711: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3712: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3715: call 0x5d241d */ r_esp -= 4; W32(r_esp, 0x5d371au); f_005d241d();
    /* 005d371a: jmp 0x5d3750 */ goto L_005d3750;
L_005d371c:; BB(0x005d371c);
    /* 005d371c: push 0x699614 */ { u32 v = 0x699614u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3721: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5d3726u); f_0060fc40();
    /* 005d3726: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3729: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005d372c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d372d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3730: call 0x5d35df */ r_esp -= 4; W32(r_esp, 0x5d3735u); f_005d35df();
    /* 005d3735: jmp 0x5d3750 */ goto L_005d3750;
L_005d3737:; BB(0x005d3737);
    /* 005d3737: push 0x699638 */ { u32 v = 0x699638u; r_esp -= 4; W32(r_esp, v); }
    /* 005d373c: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5d3741u); f_0060fc40();
    /* 005d3741: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3744: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d3747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3748: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d374b: call 0x5d21bc */ r_esp -= 4; W32(r_esp, 0x5d3750u); f_005d21bc();
L_005d3750:; BB(0x005d3750);
    /* 005d3750: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3752: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3753: ret 0xc */ FN_RET(0x005d36de); r_esp += 16; return;
}

void f_005d3760(void) /* FUN_005d3760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d3760);
    /* 005d3760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3761: mov ebp, esp */ r_ebp = r_esp;
    /* 005d3763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d3767: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3769: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d376c: call 0x5d8122 */ r_esp -= 4; W32(r_esp, 0x5d3771u); f_005d8122();
    /* 005d3771: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3774: mov dword ptr [eax], 0x63b1c4 */ W32((u32)(r_eax), 0x63b1c4u);
    /* 005d377a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d377e: je 0x5d3791 */ if (fZ) goto L_005d3791;
L_005d3780:; BB(0x005d3780);
    /* 005d3780: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3782: push 0x1e84b5 */ { u32 v = 0x1e84b5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3787: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d378a: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x5d378fu); f_005e0461();
    /* 005d378f: jmp 0x5d37a0 */ goto L_005d37a0;
L_005d3791:; BB(0x005d3791);
    /* 005d3791: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3793: push 0x1e84b4 */ { u32 v = 0x1e84b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3798: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d379b: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x5d37a0u); f_005e0461();
L_005d37a0:; BB(0x005d37a0);
    /* 005d37a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37a3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d37a6: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 005d37ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37af: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 005d37b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37bc: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 005d37c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37c9: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 005d37d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37d6: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 005d37e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37e3: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 005d37ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37f0: mov dword ptr [edx + 0x9c], 0 */ W32((u32)(r_edx+0x9cu), 0x0u);
    /* 005d37fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37fd: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 005d3807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d380a: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 005d3814: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3817: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3819: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d381a: ret 4 */ FN_RET(0x005d3760); r_esp += 8; return;
}

void f_005d381d(void) /* FUN_005d381d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d381d);
    /* 005d381d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d381e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d3820: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d3823: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005d3826: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d3829: mov dword ptr [eax], 0x63b1c4 */ W32((u32)(r_eax), 0x63b1c4u);
    /* 005d382f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d3832: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 005d3838: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d383b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d383e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d3841: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3845: je 0x5d3858 */ if (fZ) goto L_005d3858;
L_005d3847:; BB(0x005d3847);
    /* 005d3847: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3849: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d384c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d384e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3851: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d3853u); call_ind(t); }
    /* 005d3853: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005d3856: jmp 0x5d385f */ goto L_005d385f;
L_005d3858:; BB(0x005d3858);
    /* 005d3858: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d385f:; BB(0x005d385f);
    /* 005d385f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d3862: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d3868: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d386b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d386e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d3871: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3875: je 0x5d3888 */ if (fZ) goto L_005d3888;
L_005d3877:; BB(0x005d3877);
    /* 005d3877: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3879: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d387c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d387e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d3881: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d3883u); call_ind(t); }
    /* 005d3883: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005d3886: jmp 0x5d388f */ goto L_005d388f;
L_005d3888:; BB(0x005d3888);
    /* 005d3888: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005d388f:; BB(0x005d388f);
    /* 005d388f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d3892: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d3898: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d389b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d389e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d38a1: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d38a5: je 0x5d38b8 */ if (fZ) goto L_005d38b8;
L_005d38a7:; BB(0x005d38a7);
    /* 005d38a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d38a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d38ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d38ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d38b1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d38b3u); call_ind(t); }
    /* 005d38b3: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005d38b6: jmp 0x5d38bf */ goto L_005d38bf;
L_005d38b8:; BB(0x005d38b8);
    /* 005d38b8: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005d38bf:; BB(0x005d38bf);
    /* 005d38bf: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d38c2: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005d38c8: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d38cb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d38ce: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d38d1: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d38d5: je 0x5d38e8 */ if (fZ) goto L_005d38e8;
L_005d38d7:; BB(0x005d38d7);
    /* 005d38d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d38d9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d38dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d38de: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d38e1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d38e3u); call_ind(t); }
    /* 005d38e3: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005d38e6: jmp 0x5d38ef */ goto L_005d38ef;
L_005d38e8:; BB(0x005d38e8);
    /* 005d38e8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_005d38ef:; BB(0x005d38ef);
    /* 005d38ef: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d38f2: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005d38f8: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005d38fb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d38fe: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005d3901: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3905: je 0x5d3918 */ if (fZ) goto L_005d3918;
L_005d3907:; BB(0x005d3907);
    /* 005d3907: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3909: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d390c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d390e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d3911: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d3913u); call_ind(t); }
    /* 005d3913: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005d3916: jmp 0x5d391f */ goto L_005d391f;
L_005d3918:; BB(0x005d3918);
    /* 005d3918: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005d391f:; BB(0x005d391f);
    /* 005d391f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d3922: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 005d3928: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005d392b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d392e: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d3931: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3935: je 0x5d3948 */ if (fZ) goto L_005d3948;
L_005d3937:; BB(0x005d3937);
    /* 005d3937: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3939: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d393c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d393e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d3941: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d3943u); call_ind(t); }
    /* 005d3943: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005d3946: jmp 0x5d394f */ goto L_005d394f;
L_005d3948:; BB(0x005d3948);
    /* 005d3948: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005d394f:; BB(0x005d394f);
    /* 005d394f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d3952: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 005d3958: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005d395b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d395e: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005d3961: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3965: je 0x5d3978 */ if (fZ) goto L_005d3978;
L_005d3967:; BB(0x005d3967);
    /* 005d3967: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3969: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005d396c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d396e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d3971: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d3973u); call_ind(t); }
    /* 005d3973: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005d3976: jmp 0x5d397f */ goto L_005d397f;
L_005d3978:; BB(0x005d3978);
    /* 005d3978: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005d397f:; BB(0x005d397f);
    /* 005d397f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d3982: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 005d3988: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005d398b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d398e: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005d3991: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3995: je 0x5d39a8 */ if (fZ) goto L_005d39a8;
L_005d3997:; BB(0x005d3997);
    /* 005d3997: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3999: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d399c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d399e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d39a1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d39a3u); call_ind(t); }
    /* 005d39a3: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005d39a6: jmp 0x5d39af */ goto L_005d39af;
L_005d39a8:; BB(0x005d39a8);
    /* 005d39a8: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005d39af:; BB(0x005d39af);
    /* 005d39af: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d39b2: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x5d39b7u); f_005d8154();
    /* 005d39b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005d39b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d39ba: ret  */ FN_RET(0x005d381d); r_esp += 4; return;
}

void f_005d39bb(void) /* FUN_005d39bb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d39bb);
    /* 005d39bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d39bc: mov ebp, esp */ r_ebp = r_esp;
    /* 005d39be: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d39c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d39c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d39c3: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005d39c6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005d39c8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d39cb: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x5d39d0u); f_005e0731();
    /* 005d39d0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d39d3: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d39da: jne 0x5d3a52 */ if (!fZ) goto L_005d3a52;
L_005d39dc:; BB(0x005d39dc);
    /* 005d39dc: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d39e1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d39e6u); f_0048ab58();
    /* 005d39e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d39e9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d39ec: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d39f0: je 0x5d3a04 */ if (fZ) goto L_005d3a04;
L_005d39f2:; BB(0x005d39f2);
    /* 005d39f2: push 0x5d3ea3 */ { u32 v = 0x5d3ea3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d39f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d39fa: call 0x5d45fd */ r_esp -= 4; W32(r_esp, 0x5d39ffu); f_005d45fd();
    /* 005d39ff: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005d3a02: jmp 0x5d3a0b */ goto L_005d3a0b;
L_005d3a04:; BB(0x005d3a04);
    /* 005d3a04: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005d3a0b:; BB(0x005d3a0b);
    /* 005d3a0b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3a0e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d3a11: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 005d3a17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a19: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a1d: push 0x6fc390 */ { u32 v = 0x6fc390u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a24: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a29: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a2b: push 0x1e84b9 */ { u32 v = 0x1e84b9u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a30: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3a33: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005d3a39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a3a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3a3d: call 0x5d83d8 */ r_esp -= 4; W32(r_esp, 0x5d3a42u); f_005d83d8();
    /* 005d3a42: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a44: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3a47: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 005d3a4d: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x5d3a52u); f_005d65d6();
L_005d3a52:; BB(0x005d3a52);
    /* 005d3a52: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3a55: cmp dword ptr [eax + 0x9c], 0 */ {  u32 a = R32((u32)(r_eax+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3a5c: jne 0x5d3ac4 */ if (!fZ) goto L_005d3ac4;
L_005d3a5e:; BB(0x005d3a5e);
    /* 005d3a5e: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a63: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d3a68u); f_0048ab58();
    /* 005d3a68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3a6b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d3a6e: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3a72: je 0x5d3a86 */ if (fZ) goto L_005d3a86;
L_005d3a74:; BB(0x005d3a74);
    /* 005d3a74: push 0x5d408d */ { u32 v = 0x5d408du; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a79: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d3a7c: call 0x5d45fd */ r_esp -= 4; W32(r_esp, 0x5d3a81u); f_005d45fd();
    /* 005d3a81: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005d3a84: jmp 0x5d3a8d */ goto L_005d3a8d;
L_005d3a86:; BB(0x005d3a86);
    /* 005d3a86: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005d3a8d:; BB(0x005d3a8d);
    /* 005d3a8d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3a90: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d3a93: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 005d3a99: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a9d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a9f: push 0x6fc394 */ { u32 v = 0x6fc394u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3aa4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3aa6: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3aab: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3aad: push 0x1e84b8 */ { u32 v = 0x1e84b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ab2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3ab5: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 005d3abb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3abc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3abf: call 0x5d83d8 */ r_esp -= 4; W32(r_esp, 0x5d3ac4u); f_005d83d8();
L_005d3ac4:; BB(0x005d3ac4);
    /* 005d3ac4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3ac7: cmp dword ptr [edx + 0xa8], 0 */ {  u32 a = R32((u32)(r_edx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3ace: jne 0x5d3b3f */ if (!fZ) goto L_005d3b3f;
L_005d3ad0:; BB(0x005d3ad0);
    /* 005d3ad0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3ad3: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3ada: jne 0x5d3b3f */ if (!fZ) goto L_005d3b3f;
L_005d3adc:; BB(0x005d3adc);
    /* 005d3adc: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ae1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d3ae6u); f_0048ab58();
    /* 005d3ae6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3ae9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d3aec: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3af0: je 0x5d3b04 */ if (fZ) goto L_005d3b04;
L_005d3af2:; BB(0x005d3af2);
    /* 005d3af2: push 0x5d40c2 */ { u32 v = 0x5d40c2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3af7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d3afa: call 0x5d45fd */ r_esp -= 4; W32(r_esp, 0x5d3affu); f_005d45fd();
    /* 005d3aff: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d3b02: jmp 0x5d3b0b */ goto L_005d3b0b;
L_005d3b04:; BB(0x005d3b04);
    /* 005d3b04: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005d3b0b:; BB(0x005d3b0b);
    /* 005d3b0b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3b0e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d3b11: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 005d3b17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b19: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b1d: push 0x6fc398 */ { u32 v = 0x6fc398u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b28: push 0x1e84d2 */ { u32 v = 0x1e84d2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b2d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3b30: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 005d3b36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b37: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3b3a: call 0x5d83d8 */ r_esp -= 4; W32(r_esp, 0x5d3b3fu); f_005d83d8();
L_005d3b3f:; BB(0x005d3b3f);
    /* 005d3b3f: mov dword ptr [ebp - 4], 0xcf */ W32((u32)(r_ebp+0xfffffffcu), 0xcfu);
    /* 005d3b46: mov dword ptr [ebp - 8], 0x55 */ W32((u32)(r_ebp+0xfffffff8u), 0x55u);
    /* 005d3b4d: mov dword ptr [ebp - 0xc], 0x1e84cb */ W32((u32)(r_ebp+0xfffffff4u), 0x1e84cbu);
    /* 005d3b54: mov dword ptr [ebp - 0x10], 0x7a */ W32((u32)(r_ebp+0xfffffff0u), 0x7au);
    /* 005d3b5b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3b5e: cmp dword ptr [edx + 0xa8], 0 */ {  u32 a = R32((u32)(r_edx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3b65: jne 0x5d3b83 */ if (!fZ) goto L_005d3b83;
L_005d3b67:; BB(0x005d3b67);
    /* 005d3b67: mov dword ptr [ebp - 4], 0xcf */ W32((u32)(r_ebp+0xfffffffcu), 0xcfu);
    /* 005d3b6e: mov dword ptr [ebp - 8], 0x38 */ W32((u32)(r_ebp+0xfffffff8u), 0x38u);
    /* 005d3b75: mov dword ptr [ebp - 0xc], 0x1e84ca */ W32((u32)(r_ebp+0xfffffff4u), 0x1e84cau);
    /* 005d3b7c: mov dword ptr [ebp - 0x10], 0x89 */ W32((u32)(r_ebp+0xfffffff0u), 0x89u);
L_005d3b83:; BB(0x005d3b83);
    /* 005d3b83: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3b86: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3b8d: jne 0x5d3c85 */ if (!fZ) goto L_005d3c85;
L_005d3b93:; BB(0x005d3b93);
    /* 005d3b93: push 0x13c */ { u32 v = 0x13cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b98: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d3b9du); f_0048ab58();
    /* 005d3b9d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3ba0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d3ba3: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3ba7: je 0x5d3bb6 */ if (fZ) goto L_005d3bb6;
L_005d3ba9:; BB(0x005d3ba9);
    /* 005d3ba9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3bac: call 0x5d469b */ r_esp -= 4; W32(r_esp, 0x5d3bb1u); f_005d469b();
    /* 005d3bb1: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d3bb4: jmp 0x5d3bbd */ goto L_005d3bbd;
L_005d3bb6:; BB(0x005d3bb6);
    /* 005d3bb6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d3bbd:; BB(0x005d3bbd);
    /* 005d3bbd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3bc0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d3bc3: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 005d3bc9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3bcc: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d3bd2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3bd5: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005d3bd8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3bdb: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d3be1: mov dword ptr [ecx + 0x38], 0x1e84b7 */ W32((u32)(r_ecx+0x38u), 0x1e84b7u);
    /* 005d3be8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3beb: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d3bf1: mov dword ptr [eax + 0x3c], 0x1e84b6 */ W32((u32)(r_eax+0x3cu), 0x1e84b6u);
    /* 005d3bf8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3bfb: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 005d3c01: mov dword ptr [edx + 0x40], 0x1e84ba */ W32((u32)(r_edx+0x40u), 0x1e84bau);
    /* 005d3c08: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3c0b: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d3c11: mov dword ptr [ecx + 0x64], 0x11a */ W32((u32)(r_ecx+0x64u), 0x11au);
    /* 005d3c18: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3c1b: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d3c21: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d3c24: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 005d3c27: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3c2a: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d3c30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3c33: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 005d3c36: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3c39: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d3c3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d3c42: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 005d3c45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c47: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3c4a: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005d3c50: call 0x5db68e */ r_esp -= 4; W32(r_esp, 0x5d3c55u); f_005db68e();
    /* 005d3c55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c57: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3c5a: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d3c60: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3c63: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d3c69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3c6b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d3c6eu); call_ind(t); }
    /* 005d3c6e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3c71: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d3c77: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3c7a: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d3c80: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3c82: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d3c85u); call_ind(t); }
L_005d3c85:; BB(0x005d3c85);
    /* 005d3c85: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3c88: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3c8f: je 0x5d3d7d */ if (fZ) goto L_005d3d7d;
L_005d3c95:; BB(0x005d3c95);
    /* 005d3c95: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3c98: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3c9f: jne 0x5d3d7d */ if (!fZ) goto L_005d3d7d;
L_005d3ca5:; BB(0x005d3ca5);
    /* 005d3ca5: push 0x89c */ { u32 v = 0x89cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3caa: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d3cafu); f_0048ab58();
    /* 005d3caf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3cb2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d3cb5: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3cb9: je 0x5d3cc8 */ if (fZ) goto L_005d3cc8;
L_005d3cbb:; BB(0x005d3cbb);
    /* 005d3cbb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d3cbe: call 0x5d4758 */ r_esp -= 4; W32(r_esp, 0x5d3cc3u); f_005d4758();
    /* 005d3cc3: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d3cc6: jmp 0x5d3ccf */ goto L_005d3ccf;
L_005d3cc8:; BB(0x005d3cc8);
    /* 005d3cc8: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005d3ccf:; BB(0x005d3ccf);
    /* 005d3ccf: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3cd2: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d3cd5: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 005d3cdb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3cdd: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3cdf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ce1: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ce3: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ce8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3cea: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3cef: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3cf1: push 0x6fc39c */ { u32 v = 0x6fc39cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3cf6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3cf9: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 005d3cff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d00: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3d03: call 0x5d8567 */ r_esp -= 4; W32(r_esp, 0x5d3d08u); f_005d8567();
    /* 005d3d08: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d0a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d3d0fu); f_0048ab58();
    /* 005d3d0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3d12: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d3d15: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3d19: je 0x5d3d28 */ if (fZ) goto L_005d3d28;
L_005d3d1b:; BB(0x005d3d1b);
    /* 005d3d1b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d3d1e: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5d3d23u); f_005e9d30();
    /* 005d3d23: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005d3d26: jmp 0x5d3d2f */ goto L_005d3d2f;
L_005d3d28:; BB(0x005d3d28);
    /* 005d3d28: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005d3d2f:; BB(0x005d3d2f);
    /* 005d3d2f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3d32: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d3d35: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 005d3d3b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3d3e: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 005d3d44: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3d47: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005d3d4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d4c: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d4e: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d53: push 0x1e84c8 */ { u32 v = 0x1e84c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d58: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3d5b: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 005d3d61: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x5d3d66u); f_005e9f50();
    /* 005d3d66: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3d69: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 005d3d6f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3d72: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 005d3d78: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3d7a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d3d7du); call_ind(t); }
L_005d3d7d:; BB(0x005d3d7d);
    /* 005d3d7d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3d80: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3d87: jne 0x5d3de5 */ if (!fZ) goto L_005d3de5;
L_005d3d89:; BB(0x005d3d89);
    /* 005d3d89: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d8e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d3d93u); f_0048ab58();
    /* 005d3d93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3d96: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d3d99: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3d9d: je 0x5d3dac */ if (fZ) goto L_005d3dac;
L_005d3d9f:; BB(0x005d3d9f);
    /* 005d3d9f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d3da2: call 0x453f99 */ r_esp -= 4; W32(r_esp, 0x5d3da7u); f_00453f99();
    /* 005d3da7: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005d3daa: jmp 0x5d3db3 */ goto L_005d3db3;
L_005d3dac:; BB(0x005d3dac);
    /* 005d3dac: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005d3db3:; BB(0x005d3db3);
    /* 005d3db3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3db6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005d3db9: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 005d3dbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3dc1: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3dc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3dc5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3dc8: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005d3dce: call 0x454097 */ r_esp -= 4; W32(r_esp, 0x5d3dd3u); f_00454097();
    /* 005d3dd3: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3dd5: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005d3dd7: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3dda: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005d3de0: call 0x454149 */ r_esp -= 4; W32(r_esp, 0x5d3de5u); f_00454149();
L_005d3de5:; BB(0x005d3de5);
    /* 005d3de5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3de8: call 0x5d44c8 */ r_esp -= 4; W32(r_esp, 0x5d3dedu); f_005d44c8();
    /* 005d3ded: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3df0: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3df7: jne 0x5d3e1d */ if (!fZ) goto L_005d3e1d;
L_005d3df9:; BB(0x005d3df9);
    /* 005d3df9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3dfc: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005d3e02: call 0x5dc489 */ r_esp -= 4; W32(r_esp, 0x5d3e07u); f_005dc489();
    /* 005d3e07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3e09: je 0x5d3e1b */ if (fZ) goto L_005d3e1b;
L_005d3e0b:; BB(0x005d3e0b);
    /* 005d3e0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e0d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3e10: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005d3e16: call 0x5dc5c1 */ r_esp -= 4; W32(r_esp, 0x5d3e1bu); f_005dc5c1();
L_005d3e1b:; BB(0x005d3e1b);
    /* 005d3e1b: jmp 0x5d3e4e */ goto L_005d3e4e;
L_005d3e1d:; BB(0x005d3e1d);
    /* 005d3e1d: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 005d3e23: call 0x45883e */ r_esp -= 4; W32(r_esp, 0x5d3e28u); f_0045883e();
    /* 005d3e28: mov esi, eax */ r_esi = r_eax;
    /* 005d3e2a: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d3e2d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3e30: mov edi, dword ptr [eax + 0x8c] */ r_edi = R32((u32)(r_eax+0x8cu));
    /* 005d3e36: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d3e39: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 005d3e3e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005d3e40: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d3e43: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005d3e49: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x5d3e4eu); f_004542de();
L_005d3e4e:; BB(0x005d3e4e);
    /* 005d3e4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3e4f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d3e50: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3e52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3e53: ret  */ FN_RET(0x005d39bb); r_esp += 4; return;
}

void f_005d3e54(void) /* FUN_005d3e54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d3e54);
    /* 005d3e54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e55: mov ebp, esp */ r_ebp = r_esp;
    /* 005d3e57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e58: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d3e5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3e5e: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3e65: jne 0x5d3e97 */ if (!fZ) goto L_005d3e97;
L_005d3e67:; BB(0x005d3e67);
    /* 005d3e67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3e6a: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005d3e70: call 0x5dc489 */ r_esp -= 4; W32(r_esp, 0x5d3e75u); f_005dc489();
    /* 005d3e75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3e77: jne 0x5d3e97 */ if (!fZ) goto L_005d3e97;
L_005d3e79:; BB(0x005d3e79);
    /* 005d3e79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e7b: push 0x69967c */ { u32 v = 0x69967cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e80: push 0x699684 */ { u32 v = 0x699684u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e85: call 0x60f9d8 */ r_esp -= 4; W32(r_esp, 0x5d3e8au); f_0060f9d8();
    /* 005d3e8a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3e8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3e90: call 0x5d408d */ r_esp -= 4; W32(r_esp, 0x5d3e95u); f_005d408d();
    /* 005d3e95: jmp 0x5d3e9f */ goto L_005d3e9f;
L_005d3e97:; BB(0x005d3e97);
    /* 005d3e97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3e9a: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x5d3e9fu); f_005e030e();
L_005d3e9f:; BB(0x005d3e9f);
    /* 005d3e9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3ea1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3ea2: ret  */ FN_RET(0x005d3e54); r_esp += 4; return;
}

void f_005d3ea3(void) /* FUN_005d3ea3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d3ea3);
    /* 005d3ea3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ea4: mov ebp, esp */ r_ebp = r_esp;
    /* 005d3ea6: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d3ea9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d3eac: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3eaf: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3eb6: je 0x5d3fb0 */ if (fZ) goto L_005d3fb0;
L_005d3ebc:; BB(0x005d3ebc);
    /* 005d3ebc: push 0x6fc3a0 */ { u32 v = 0x6fc3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ec1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3ec4: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 005d3eca: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3ecd: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 005d3ed3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3ed5: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d3ed8u); call_ind(t); }
    /* 005d3ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ed9: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5d3edeu); f_006240c0();
    /* 005d3ede: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3ee1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3ee3: je 0x5d3f98 */ if (fZ) goto L_005d3f98;
L_005d3ee9:; BB(0x005d3ee9);
    /* 005d3ee9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3eeb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3eee: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005d3ef4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3ef7: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 005d3efd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3eff: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d3f02u); call_ind(t); }
    /* 005d3f02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f03: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3f06: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d3f0c: call 0x5dd0a7 */ r_esp -= 4; W32(r_esp, 0x5d3f11u); f_005dd0a7();
    /* 005d3f11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3f13: je 0x5d3f73 */ if (fZ) goto L_005d3f73;
L_005d3f15:; BB(0x005d3f15);
    /* 005d3f15: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3f18: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 005d3f1e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3f21: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 005d3f27: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3f29: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d3f2cu); call_ind(t); }
    /* 005d3f2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f2d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3f30: call 0x5d3ff8 */ r_esp -= 4; W32(r_esp, 0x5d3f35u); f_005d3ff8();
    /* 005d3f35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3f37: je 0x5d3f73 */ if (fZ) goto L_005d3f73;
L_005d3f39:; BB(0x005d3f39);
    /* 005d3f39: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3f3c: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005d3f42: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3f45: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 005d3f4b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3f4d: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d3f50u); call_ind(t); }
    /* 005d3f50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f51: push 0x6996a8 */ { u32 v = 0x6996a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f56: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005d3f59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f5a: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5d3f5fu); f_00624050();
    /* 005d3f5f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3f62: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005d3f65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3f69: call 0x5d457a */ r_esp -= 4; W32(r_esp, 0x5d3f6eu); f_005d457a();
    /* 005d3f6e: jmp 0x5d3ff4 */ goto L_005d3ff4;
L_005d3f73:; BB(0x005d3f73);
    /* 005d3f73: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3f76: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 005d3f7c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3f7f: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 005d3f85: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d3f87: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5d3f8au); call_ind(t); }
    /* 005d3f8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f8b: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 005d3f91: call 0x458472 */ r_esp -= 4; W32(r_esp, 0x5d3f96u); f_00458472();
    /* 005d3f96: jmp 0x5d3fae */ goto L_005d3fae;
L_005d3f98:; BB(0x005d3f98);
    /* 005d3f98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f9a: push 0x6996b0 */ { u32 v = 0x6996b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f9f: push 0x6996bc */ { u32 v = 0x6996bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3fa4: call 0x60f9d8 */ r_esp -= 4; W32(r_esp, 0x5d3fa9u); f_0060f9d8();
    /* 005d3fa9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3fac: jmp 0x5d3ff4 */ goto L_005d3ff4;
L_005d3fae:; BB(0x005d3fae);
    /* 005d3fae: jmp 0x5d3fec */ goto L_005d3fec;
L_005d3fb0:; BB(0x005d3fb0);
    /* 005d3fb0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3fb3: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005d3fb9: call 0x5dc489 */ r_esp -= 4; W32(r_esp, 0x5d3fbeu); f_005dc489();
    /* 005d3fbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3fc0: je 0x5d3fec */ if (fZ) goto L_005d3fec;
L_005d3fc2:; BB(0x005d3fc2);
    /* 005d3fc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3fc4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3fc7: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005d3fcd: call 0x5dcdc2 */ r_esp -= 4; W32(r_esp, 0x5d3fd2u); f_005dcdc2();
    /* 005d3fd2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d3fd5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d3fd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3fda: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d3fdd: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d3fe0u); call_ind(t); }
    /* 005d3fe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3fe1: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 005d3fe7: call 0x458570 */ r_esp -= 4; W32(r_esp, 0x5d3fecu); f_00458570();
L_005d3fec:; BB(0x005d3fec);
    /* 005d3fec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d3fef: call 0x5d408d */ r_esp -= 4; W32(r_esp, 0x5d3ff4u); f_005d408d();
L_005d3ff4:; BB(0x005d3ff4);
    /* 005d3ff4: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3ff6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3ff7: ret  */ FN_RET(0x005d3ea3); r_esp += 4; return;
}

void f_005d3ff8(void) /* FUN_005d3ff8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d3ff8);
    /* 005d3ff8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ff9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d3ffb: sub esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4001: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 005d4007: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005d400d: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d4013: call 0x5dcf80 */ r_esp -= 4; W32(r_esp, 0x5d4018u); f_005dcf80();
    /* 005d4018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4019: push 0x6996e4 */ { u32 v = 0x6996e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d401e: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005d4021: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4022: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5d4027u); f_00624050();
    /* 005d4027: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d402a: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005d402d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d402e: push 0x6996ec */ { u32 v = 0x6996ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4033: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4038: push 0x6996f0 */ { u32 v = 0x6996f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d403d: lea eax, [ebp - 0x120] */ r_eax = (u32)(r_ebp+0xfffffee0u);
    /* 005d4043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4044: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5d4049u); f_00624050();
    /* 005d4049: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d404c: push 0x6996f8 */ { u32 v = 0x6996f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4051: lea ecx, [ebp - 0x120] */ r_ecx = (u32)(r_ebp+0xfffffee0u);
    /* 005d4057: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4058: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5d405du); f_006243c0();
    /* 005d405d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4060: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 005d4066: cmp dword ptr [ebp - 0x124], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d406d: je 0x5d4085 */ if (fZ) goto L_005d4085;
L_005d406f:; BB(0x005d406f);
    /* 005d406f: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005d4075: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4076: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5d407bu); f_006241d0();
    /* 005d407b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d407e: mov eax, 1 */ r_eax = 0x1u;
    /* 005d4083: jmp 0x5d4087 */ goto L_005d4087;
L_005d4085:; BB(0x005d4085);
    /* 005d4085: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d4087:; BB(0x005d4087);
    /* 005d4087: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4089: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d408a: ret 4 */ FN_RET(0x005d3ff8); r_esp += 8; return;
}

void f_005d408d(void) /* FUN_005d408d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d408d);
    /* 005d408d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d408e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4090: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4091: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4094: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005d4099: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d409c: call 0x44aed0 */ r_esp -= 4; W32(r_esp, 0x5d40a1u); f_0044aed0();
    /* 005d40a1: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 005d40a7: cmp dword ptr [ecx + 0x298], 0 */ {  u32 a = R32((u32)(r_ecx+0x298u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d40ae: je 0x5d40be */ if (fZ) goto L_005d40be;
L_005d40b0:; BB(0x005d40b0);
    /* 005d40b0: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005d40b6: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d40b9: call 0x44af72 */ r_esp -= 4; W32(r_esp, 0x5d40beu); f_0044af72();
L_005d40be:; BB(0x005d40be);
    /* 005d40be: mov esp, ebp */ r_esp = r_ebp;
    /* 005d40c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d40c1: ret  */ FN_RET(0x005d408d); r_esp += 4; return;
}

void f_005d40c2(void) /* FUN_005d40c2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d40c2);
    /* 005d40c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d40c3: mov ebp, esp */ r_ebp = r_esp;
    /* 005d40c5: mov eax, 0x1d48 */ r_eax = 0x1d48u;
    /* 005d40ca: call 0x626050 */ r_esp -= 4; W32(r_esp, 0x5d40cfu); f_00626050();
    /* 005d40cf: mov dword ptr [ebp - 0x1d48], ecx */ W32((u32)(r_ebp+0xffffe2b8u), r_ecx);
    /* 005d40d5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005d40dc: mov eax, dword ptr [ebp - 0x1d48] */ r_eax = R32((u32)(r_ebp+0xffffe2b8u));
    /* 005d40e2: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d40e8: call 0x5dcf80 */ r_esp -= 4; W32(r_esp, 0x5d40edu); f_005dcf80();
    /* 005d40ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d40ee: push 0x6996fc */ { u32 v = 0x6996fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d40f3: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005d40f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d40f7: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5d40fcu); f_00624050();
    /* 005d40fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d40ff: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 005d4102: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4103: push 0x699704 */ { u32 v = 0x699704u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4108: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 005d410d: push 0x699708 */ { u32 v = 0x699708u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4112: lea eax, [ebp - 0x1d3c] */ r_eax = (u32)(r_ebp+0xffffe2c4u);
    /* 005d4118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4119: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5d411eu); f_00624050();
    /* 005d411e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4121: mov dword ptr [ebp - 0x1c38], 0 */ W32((u32)(r_ebp+0xffffe3c8u), 0x0u);
    /* 005d412b: jmp 0x5d413c */ goto L_005d413c;
L_005d412d:; BB(0x005d412d);
    /* 005d412d: mov ecx, dword ptr [ebp - 0x1c38] */ r_ecx = R32((u32)(r_ebp+0xffffe3c8u));
    /* 005d4133: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d4136: mov dword ptr [ebp - 0x1c38], ecx */ W32((u32)(r_ebp+0xffffe3c8u), r_ecx);
L_005d413c:; BB(0x005d413c);
    /* 005d413c: cmp dword ptr [ebp - 0x1c38], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffe3c8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d4143: jge 0x5d419f */ if ((fS==fO)) goto L_005d419f;
L_005d4145:; BB(0x005d4145);
    /* 005d4145: mov edx, dword ptr [ebp - 0x1c38] */ r_edx = R32((u32)(r_ebp+0xffffe3c8u));
    /* 005d414b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d414c: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d4152: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5d4157u); f_0045c419();
    /* 005d4157: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005d415a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d415c: jne 0x5d419d */ if (!fZ) goto L_005d419d;
L_005d415e:; BB(0x005d415e);
    /* 005d415e: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005d4161: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4162: mov edx, dword ptr [ebp - 0x1c38] */ r_edx = R32((u32)(r_ebp+0xffffe3c8u));
    /* 005d4168: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4169: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d416f: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5d4174u); f_0045c419();
    /* 005d4174: add eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4177: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4178: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5d417du); f_006240c0();
    /* 005d417d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4182: jne 0x5d419d */ if (!fZ) goto L_005d419d;
L_005d4184:; BB(0x005d4184);
    /* 005d4184: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4186: push 0x699710 */ { u32 v = 0x699710u; r_esp -= 4; W32(r_esp, v); }
    /* 005d418b: push 0x699720 */ { u32 v = 0x699720u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4190: call 0x60f9d8 */ r_esp -= 4; W32(r_esp, 0x5d4195u); f_0060f9d8();
    /* 005d4195: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4198: jmp 0x5d433e */ goto L_005d433e;
L_005d419d:; BB(0x005d419d);
    /* 005d419d: jmp 0x5d412d */ goto L_005d412d;
L_005d419f:; BB(0x005d419f);
    /* 005d419f: mov dword ptr [ebp - 0x1c38], 0 */ W32((u32)(r_ebp+0xffffe3c8u), 0x0u);
    /* 005d41a9: jmp 0x5d41ba */ goto L_005d41ba;
L_005d41ab:; BB(0x005d41ab);
    /* 005d41ab: mov eax, dword ptr [ebp - 0x1c38] */ r_eax = R32((u32)(r_ebp+0xffffe3c8u));
    /* 005d41b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d41b4: mov dword ptr [ebp - 0x1c38], eax */ W32((u32)(r_ebp+0xffffe3c8u), r_eax);
L_005d41ba:; BB(0x005d41ba);
    /* 005d41ba: cmp dword ptr [ebp - 0x1c38], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffe3c8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d41c1: jge 0x5d428d */ if ((fS==fO)) goto L_005d428d;
L_005d41c7:; BB(0x005d41c7);
    /* 005d41c7: mov ecx, dword ptr [ebp - 0x1c38] */ r_ecx = R32((u32)(r_ebp+0xffffe3c8u));
    /* 005d41cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d41ce: push 0x699758 */ { u32 v = 0x699758u; r_esp -= 4; W32(r_esp, v); }
    /* 005d41d3: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005d41d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d41d7: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5d41dcu); f_00624050();
    /* 005d41dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d41df: push 0x699764 */ { u32 v = 0x699764u; r_esp -= 4; W32(r_esp, v); }
    /* 005d41e4: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005d41e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d41e8: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5d41edu); f_006243c0();
    /* 005d41ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d41f0: mov dword ptr [ebp - 0x1d44], eax */ W32((u32)(r_ebp+0xffffe2bcu), r_eax);
    /* 005d41f6: cmp dword ptr [ebp - 0x1d44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffe2bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d41fd: je 0x5d4288 */ if (fZ) goto L_005d4288;
L_005d4203:; BB(0x005d4203);
    /* 005d4203: mov ecx, dword ptr [ebp - 0x1d44] */ r_ecx = R32((u32)(r_ebp+0xffffe2bcu));
    /* 005d4209: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d420a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d420c: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4211: lea edx, [ebp - 0x1c34] */ r_edx = (u32)(r_ebp+0xffffe3ccu);
    /* 005d4217: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4218: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x5d421du); f_00624250();
    /* 005d421d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4220: mov dword ptr [ebp - 0x1d40], eax */ W32((u32)(r_ebp+0xffffe2c0u), r_eax);
    /* 005d4226: lea eax, [ebp - 0x1c34] */ r_eax = (u32)(r_ebp+0xffffe3ccu);
    /* 005d422c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005d422f: mov ecx, dword ptr [ebp - 0x1d44] */ r_ecx = R32((u32)(r_ebp+0xffffe2bcu));
    /* 005d4235: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4236: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5d423bu); f_006241d0();
    /* 005d423b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d423e: cmp dword ptr [ebp - 0x1d40], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffe2c0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4245: je 0x5d424c */ if (fZ) goto L_005d424c;
L_005d4247:; BB(0x005d4247);
    /* 005d4247: jmp 0x5d41ab */ goto L_005d41ab;
L_005d424c:; BB(0x005d424c);
    /* 005d424c: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 005d424f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4250: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005d4253: add eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4257: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5d425cu); f_006240c0();
    /* 005d425c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d425f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4261: jne 0x5d4288 */ if (!fZ) goto L_005d4288;
L_005d4263:; BB(0x005d4263);
    /* 005d4263: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4265: push 0x699768 */ { u32 v = 0x699768u; r_esp -= 4; W32(r_esp, v); }
    /* 005d426a: push 0x699778 */ { u32 v = 0x699778u; r_esp -= 4; W32(r_esp, v); }
    /* 005d426f: call 0x60f9d8 */ r_esp -= 4; W32(r_esp, 0x5d4274u); f_0060f9d8();
    /* 005d4274: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4277: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d427a: jne 0x5d4281 */ if (!fZ) goto L_005d4281;
L_005d427c:; BB(0x005d427c);
    /* 005d427c: jmp 0x5d433e */ goto L_005d433e;
L_005d4281:; BB(0x005d4281);
    /* 005d4281: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
L_005d4288:; BB(0x005d4288);
    /* 005d4288: jmp 0x5d41ab */ goto L_005d41ab;
L_005d428d:; BB(0x005d428d);
    /* 005d428d: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4291: jne 0x5d42b1 */ if (!fZ) goto L_005d42b1;
L_005d4293:; BB(0x005d4293);
    /* 005d4293: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4295: push 0x6997c4 */ { u32 v = 0x6997c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d429a: push 0x6997d0 */ { u32 v = 0x6997d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d429f: call 0x60f9d8 */ r_esp -= 4; W32(r_esp, 0x5d42a4u); f_0060f9d8();
    /* 005d42a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d42a7: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d42aa: je 0x5d42b1 */ if (fZ) goto L_005d42b1;
L_005d42ac:; BB(0x005d42ac);
    /* 005d42ac: jmp 0x5d433e */ goto L_005d433e;
L_005d42b1:; BB(0x005d42b1);
    /* 005d42b1: mov ecx, dword ptr [ebp - 0x1d48] */ r_ecx = R32((u32)(r_ebp+0xffffe2b8u));
    /* 005d42b7: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005d42bd: call 0x5dcc52 */ r_esp -= 4; W32(r_esp, 0x5d42c2u); f_005dcc52();
    /* 005d42c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d42c3: mov edx, dword ptr [ebp - 0x1d48] */ r_edx = R32((u32)(r_ebp+0xffffe2b8u));
    /* 005d42c9: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005d42cf: call 0x5dc9ae */ r_esp -= 4; W32(r_esp, 0x5d42d4u); f_005dc9ae();
    /* 005d42d4: lea eax, [ebp - 0x1d3c] */ r_eax = (u32)(r_ebp+0xffffe2c4u);
    /* 005d42da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d42db: call 0x625790 */ r_esp -= 4; W32(r_esp, 0x5d42e0u); f_00625790();
    /* 005d42e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d42e3: mov ecx, dword ptr [ebp - 0x1d48] */ r_ecx = R32((u32)(r_ebp+0xffffe2b8u));
    /* 005d42e9: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005d42ef: call 0x5dc489 */ r_esp -= 4; W32(r_esp, 0x5d42f4u); f_005dc489();
    /* 005d42f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d42f6: jne 0x5d4326 */ if (!fZ) goto L_005d4326;
L_005d42f8:; BB(0x005d42f8);
    /* 005d42f8: mov edx, dword ptr [ebp - 0x1d48] */ r_edx = R32((u32)(r_ebp+0xffffe2b8u));
    /* 005d42fe: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005d4304: call 0x454311 */ r_esp -= 4; W32(r_esp, 0x5d4309u); f_00454311();
    /* 005d4309: mov eax, dword ptr [ebp - 0x1d48] */ r_eax = R32((u32)(r_ebp+0xffffe2b8u));
    /* 005d430f: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 005d4315: mov edx, dword ptr [ebp - 0x1d48] */ r_edx = R32((u32)(r_ebp+0xffffe2b8u));
    /* 005d431b: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 005d4321: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4323: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5d4326u); call_ind(t); }
L_005d4326:; BB(0x005d4326);
    /* 005d4326: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d432d: je 0x5d433e */ if (fZ) goto L_005d433e;
L_005d432f:; BB(0x005d432f);
    /* 005d432f: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005d4332: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4333: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005d4339: call 0x48790c */ r_esp -= 4; W32(r_esp, 0x5d433eu); f_0048790c();
L_005d433e:; BB(0x005d433e);
    /* 005d433e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4340: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4341: ret  */ FN_RET(0x005d40c2); r_esp += 4; return;
}

void f_005d4342(void) /* FUN_005d4342 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4342);
    /* 005d4342: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4343: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4345: sub esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d434b: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 005d4351: push 0x8f4 */ { u32 v = 0x8f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4356: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d435bu); f_0048ab58();
    /* 005d435b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d435e: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 005d4364: cmp dword ptr [ebp - 0x114], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d436b: je 0x5d4380 */ if (fZ) goto L_005d4380;
L_005d436d:; BB(0x005d436d);
    /* 005d436d: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005d4373: call 0x5d4660 */ r_esp -= 4; W32(r_esp, 0x5d4378u); f_005d4660();
    /* 005d4378: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 005d437e: jmp 0x5d438a */ goto L_005d438a;
L_005d4380:; BB(0x005d4380);
    /* 005d4380: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_005d438a:; BB(0x005d438a);
    /* 005d438a: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 005d4390: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005d4396: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005d439c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d439d: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005d43a3: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005d43a9: call 0x5dc4b6 */ r_esp -= 4; W32(r_esp, 0x5d43aeu); f_005dc4b6();
    /* 005d43ae: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d43b0: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d43b2: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d43b4: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005d43ba: call 0x5db062 */ r_esp -= 4; W32(r_esp, 0x5d43bfu); f_005db062();
    /* 005d43bf: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005d43c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d43c7: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005d43cd: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5d43d0u); call_ind(t); }
    /* 005d43d0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d43d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d43d4: push 0x6997fc */ { u32 v = 0x6997fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d43d9: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 005d43de: push 0x699800 */ { u32 v = 0x699800u; r_esp -= 4; W32(r_esp, v); }
    /* 005d43e3: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 005d43e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d43ea: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5d43efu); f_00624050();
    /* 005d43ef: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d43f2: push 0x699808 */ { u32 v = 0x699808u; r_esp -= 4; W32(r_esp, v); }
    /* 005d43f7: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 005d43fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d43fe: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5d4403u); f_006243c0();
    /* 005d4403: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4406: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 005d440c: cmp dword ptr [ebp - 0x110], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4413: je 0x5d4444 */ if (fZ) goto L_005d4444;
L_005d4415:; BB(0x005d4415);
    /* 005d4415: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005d441b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d441c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d441e: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4420: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005d4426: add ecx, 0x8a8 */ {  u32 a = r_ecx; u32 b = 0x8a8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d442c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d442d: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x5d4432u); f_00624250();
    /* 005d4432: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4435: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005d443b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d443c: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5d4441u); f_006241d0();
    /* 005d4441: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4444:; BB(0x005d4444);
    /* 005d4444: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d444b: jmp 0x5d4456 */ goto L_005d4456;
L_005d444d:; BB(0x005d444d);
    /* 005d444d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4450: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4453: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d4456:; BB(0x005d4456);
    /* 005d4456: cmp dword ptr [ebp - 4], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d445a: jge 0x5d4477 */ if ((fS==fO)) goto L_005d4477;
L_005d445c:; BB(0x005d445c);
    /* 005d445c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d445f: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d4462: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 005d4465: cmp edx, 0x2e */ {  u32 a = r_edx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4468: jne 0x5d4475 */ if (!fZ) goto L_005d4475;
L_005d446a:; BB(0x005d446a);
    /* 005d446a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d446d: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4470: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 005d4473: jmp 0x5d4477 */ goto L_005d4477;
L_005d4475:; BB(0x005d4475);
    /* 005d4475: jmp 0x5d444d */ goto L_005d444d;
L_005d4477:; BB(0x005d4477);
    /* 005d4477: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d447a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d447b: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005d4481: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4483: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005d4489: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5d448cu); call_ind(t); }
    /* 005d448c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005d448e: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005d4494: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5d4499u); f_005e8775();
    /* 005d4499: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d449b: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005d44a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d44a3: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005d44a9: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d44acu); call_ind(t); }
    /* 005d44ac: push 0x5d4c07 */ { u32 v = 0x5d4c07u; r_esp -= 4; W32(r_esp, v); }
    /* 005d44b1: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 005d44b7: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d44bd: call 0x5dd15b */ r_esp -= 4; W32(r_esp, 0x5d44c2u); f_005dd15b();
    /* 005d44c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d44c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d44c5: ret 4 */ FN_RET(0x005d4342); r_esp += 8; return;
}

void f_005d44c8(void) /* FUN_005d44c8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d44c8);
    /* 005d44c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d44c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d44cb: sub esp, 0x224 */ {  u32 a = r_esp; u32 b = 0x224u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d44d1: mov dword ptr [ebp - 0x224], ecx */ W32((u32)(r_ebp+0xfffffddcu), r_ecx);
    /* 005d44d7: push 0x69980c */ { u32 v = 0x69980cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d44dc: push 0x699814 */ { u32 v = 0x699814u; r_esp -= 4; W32(r_esp, v); }
    /* 005d44e1: push 0x6f6878 */ { u32 v = 0x6f6878u; r_esp -= 4; W32(r_esp, v); }
    /* 005d44e6: push 0x699818 */ { u32 v = 0x699818u; r_esp -= 4; W32(r_esp, v); }
    /* 005d44eb: lea eax, [ebp - 0x220] */ r_eax = (u32)(r_ebp+0xfffffde0u);
    /* 005d44f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d44f2: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5d44f7u); f_00624050();
    /* 005d44f7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d44fa: lea ecx, [ebp - 0x11c] */ r_ecx = (u32)(r_ebp+0xfffffee4u);
    /* 005d4500: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4501: lea edx, [ebp - 0x220] */ r_edx = (u32)(r_ebp+0xfffffde0u);
    /* 005d4507: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4508: call 0x625490 */ r_esp -= 4; W32(r_esp, 0x5d450du); f_00625490();
    /* 005d450d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4510: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d4513: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4517: jne 0x5d451b */ if (!fZ) goto L_005d451b;
L_005d4519:; BB(0x005d4519);
    /* 005d4519: jmp 0x5d4576 */ goto L_005d4576;
L_005d451b:; BB(0x005d451b);
    /* 005d451b: cmp dword ptr [ebp - 0x10c], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4522: jne 0x5d4536 */ if (!fZ) goto L_005d4536;
L_005d4524:; BB(0x005d4524);
    /* 005d4524: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 005d452a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d452b: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 005d4531: call 0x5d4342 */ r_esp -= 4; W32(r_esp, 0x5d4536u); f_005d4342();
L_005d4536:; BB(0x005d4536);
    /* 005d4536: lea ecx, [ebp - 0x11c] */ r_ecx = (u32)(r_ebp+0xfffffee4u);
    /* 005d453c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d453d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4541: call 0x6255c0 */ r_esp -= 4; W32(r_esp, 0x5d4546u); f_006255c0();
    /* 005d4546: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d454b: jne 0x5d456a */ if (!fZ) goto L_005d456a;
L_005d454d:; BB(0x005d454d);
    /* 005d454d: cmp dword ptr [ebp - 0x10c], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4554: jne 0x5d4568 */ if (!fZ) goto L_005d4568;
L_005d4556:; BB(0x005d4556);
    /* 005d4556: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 005d455c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d455d: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 005d4563: call 0x5d4342 */ r_esp -= 4; W32(r_esp, 0x5d4568u); f_005d4342();
L_005d4568:; BB(0x005d4568);
    /* 005d4568: jmp 0x5d4536 */ goto L_005d4536;
L_005d456a:; BB(0x005d456a);
    /* 005d456a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d456d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d456e: call 0x6256e0 */ r_esp -= 4; W32(r_esp, 0x5d4573u); f_006256e0();
    /* 005d4573: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4576:; BB(0x005d4576);
    /* 005d4576: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4578: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4579: ret  */ FN_RET(0x005d44c8); r_esp += 4; return;
}

void f_005d457a(void) /* FUN_005d457a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d457a);
    /* 005d457a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d457b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d457d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4580: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d4583: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4586: cmp dword ptr [eax + 0xac], 0 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d458d: jne 0x5d45e9 */ if (!fZ) goto L_005d45e9;
L_005d458f:; BB(0x005d458f);
    /* 005d458f: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4594: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d4599u); f_0048ab58();
    /* 005d4599: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d459c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d459f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d45a3: je 0x5d45b2 */ if (fZ) goto L_005d45b2;
L_005d45a5:; BB(0x005d45a5);
    /* 005d45a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d45a8: call 0x5d486d */ r_esp -= 4; W32(r_esp, 0x5d45adu); f_005d486d();
    /* 005d45ad: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d45b0: jmp 0x5d45b9 */ goto L_005d45b9;
L_005d45b2:; BB(0x005d45b2);
    /* 005d45b2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005d45b9:; BB(0x005d45b9);
    /* 005d45b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d45bc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d45bf: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
    /* 005d45c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d45c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d45c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d45cc: mov ecx, dword ptr [ecx + 0xac] */ r_ecx = R32((u32)(r_ecx+0xacu));
    /* 005d45d2: call 0x5d4972 */ r_esp -= 4; W32(r_esp, 0x5d45d7u); f_005d4972();
    /* 005d45d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d45d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d45db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d45de: mov ecx, dword ptr [edx + 0xac] */ r_ecx = R32((u32)(r_edx+0xacu));
    /* 005d45e4: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x5d45e9u); f_005d81dc();
L_005d45e9:; BB(0x005d45e9);
    /* 005d45e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d45ec: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 005d45f2: call 0x5d4b0e */ r_esp -= 4; W32(r_esp, 0x5d45f7u); f_005d4b0e();
    /* 005d45f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005d45f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d45fa: ret 4 */ FN_RET(0x005d457a); r_esp += 8; return;
}

void f_005d45fd(void) /* FUN_005d45fd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d45fd);
    /* 005d45fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d45fe: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4600: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4601: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4604: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4607: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5d460cu); f_005d5d20();
    /* 005d460c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d460f: mov dword ptr [eax], 0x63b1dc */ W32((u32)(r_eax), 0x63b1dcu);
    /* 005d4615: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4618: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d461b: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 005d4621: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4624: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4626: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4627: ret 4 */ FN_RET(0x005d45fd); r_esp += 8; return;
}

void f_005d462a(void) /* FUN_005d462a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d462a);
    /* 005d462a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d462b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d462d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d462e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4631: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4634: mov dword ptr [eax], 0x63b1dc */ W32((u32)(r_eax), 0x63b1dcu);
    /* 005d463a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d463d: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5d4642u); f_005d5dfb();
    /* 005d4642: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4645: ret  */ FN_RET(0x005d462a); r_esp += 4; return;
}

void f_005d4646(void) /* FUN_005d4646 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4646);
    /* 005d4646: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4647: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4649: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d464a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d464d: mov ecx, dword ptr [0x6fc38c] */ r_ecx = R32((u32)(0x6fc38cu));
    /* 005d4653: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4656: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x5d465cu); call_ind(t); }
    /* 005d465c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d465e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d465f: ret  */ FN_RET(0x005d4646); r_esp += 4; return;
}

void f_005d4660(void) /* FUN_005d4660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4660);
    /* 005d4660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4661: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4667: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d466a: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x5d466fu); f_005dada0();
    /* 005d466f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4672: mov dword ptr [eax], 0x63b24c */ W32((u32)(r_eax), 0x63b24cu);
    /* 005d4678: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d467b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d467d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d467e: ret  */ FN_RET(0x005d4660); r_esp += 4; return;
}

void f_005d467f(void) /* FUN_005d467f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d467f);
    /* 005d467f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4680: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4682: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4683: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4686: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4689: mov dword ptr [eax], 0x63b24c */ W32((u32)(r_eax), 0x63b24cu);
    /* 005d468f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4692: call 0x5dae2b */ r_esp -= 4; W32(r_esp, 0x5d4697u); f_005dae2b();
    /* 005d4697: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d469a: ret  */ FN_RET(0x005d467f); r_esp += 4; return;
}

void f_005d469b(void) /* FUN_005d469b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d469b);
    /* 005d469b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d469c: mov ebp, esp */ r_ebp = r_esp;
    /* 005d469e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d469f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d46a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d46a5: call 0x5db41d */ r_esp -= 4; W32(r_esp, 0x5d46aau); f_005db41d();
    /* 005d46aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d46ad: mov dword ptr [eax], 0x63b29c */ W32((u32)(r_eax), 0x63b29cu);
    /* 005d46b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d46b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d46b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d46b9: ret  */ FN_RET(0x005d469b); r_esp += 4; return;
}

void f_005d46ba(void) /* FUN_005d46ba */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d46ba);
    /* 005d46ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d46bb: mov ebp, esp */ r_ebp = r_esp;
    /* 005d46bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d46be: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d46c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d46c4: mov dword ptr [eax], 0x63b29c */ W32((u32)(r_eax), 0x63b29cu);
    /* 005d46ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d46cd: call 0x5db4d6 */ r_esp -= 4; W32(r_esp, 0x5d46d2u); f_005db4d6();
    /* 005d46d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d46d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d46d5: ret  */ FN_RET(0x005d46ba); r_esp += 4; return;
}

void f_005d46d6(void) /* FUN_005d46d6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d46d6);
    /* 005d46d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d46d7: mov ebp, esp */ r_ebp = r_esp;
    /* 005d46d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d46da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d46db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d46dc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d46df: mov eax, dword ptr [0x6fc38c] */ r_eax = R32((u32)(0x6fc38cu));
    /* 005d46e4: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d46eb: jne 0x5d4726 */ if (!fZ) goto L_005d4726;
L_005d46ed:; BB(0x005d46ed);
    /* 005d46ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d46f0: call 0x5dcdc2 */ r_esp -= 4; W32(r_esp, 0x5d46f5u); f_005dcdc2();
    /* 005d46f5: mov esi, eax */ r_esi = r_eax;
    /* 005d46f7: add esi, 0x8a8 */ {  u32 a = r_esi; u32 b = 0x8a8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d46fd: mov ecx, dword ptr [0x6fc38c] */ r_ecx = R32((u32)(0x6fc38cu));
    /* 005d4703: mov edi, dword ptr [ecx + 0x8c] */ r_edi = R32((u32)(r_ecx+0x8cu));
    /* 005d4709: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d470c: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 005d4711: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005d4713: mov edx, dword ptr [0x6fc38c] */ r_edx = R32((u32)(0x6fc38cu));
    /* 005d4719: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005d471f: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x5d4724u); f_004542de();
    /* 005d4724: jmp 0x5d4750 */ goto L_005d4750;
L_005d4726:; BB(0x005d4726);
    /* 005d4726: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d472a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d472d: call 0x5dcfb0 */ r_esp -= 4; W32(r_esp, 0x5d4732u); f_005dcfb0();
    /* 005d4732: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4733: mov ecx, dword ptr [0x6fc38c] */ r_ecx = R32((u32)(0x6fc38cu));
    /* 005d4739: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 005d473f: mov edx, dword ptr [0x6fc38c] */ r_edx = R32((u32)(0x6fc38cu));
    /* 005d4745: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 005d474b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d474d: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5d4750u); call_ind(t); }
L_005d4750:; BB(0x005d4750);
    /* 005d4750: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4751: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4752: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4754: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4755: ret 4 */ FN_RET(0x005d46d6); r_esp += 8; return;
}

void f_005d4758(void) /* FUN_005d4758 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4758);
    /* 005d4758: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4759: mov ebp, esp */ r_ebp = r_esp;
    /* 005d475b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d475c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d475f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4762: call 0x452d80 */ r_esp -= 4; W32(r_esp, 0x5d4767u); f_00452d80();
    /* 005d4767: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d476a: mov dword ptr [eax], 0x63b2ec */ W32((u32)(r_eax), 0x63b2ecu);
    /* 005d4770: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4773: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4775: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4776: ret  */ FN_RET(0x005d4758); r_esp += 4; return;
}

void f_005d4777(void) /* FUN_005d4777 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4777);
    /* 005d4777: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4778: mov ebp, esp */ r_ebp = r_esp;
    /* 005d477a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d477b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d477e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4781: mov dword ptr [eax], 0x63b2ec */ W32((u32)(r_eax), 0x63b2ecu);
    /* 005d4787: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d478a: call 0x452de0 */ r_esp -= 4; W32(r_esp, 0x5d478fu); f_00452de0();
    /* 005d478f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4792: ret  */ FN_RET(0x005d4777); r_esp += 4; return;
}

void f_005d4793(void) /* FUN_005d4793 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4793);
    /* 005d4793: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4794: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4796: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4799: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d479c: mov byte ptr [ebp - 8], 8 */ W8((u32)(r_ebp+0xfffffff8u), 0x8u);
    /* 005d47a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d47a3: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d47a7: jne 0x5d47e3 */ if (!fZ) goto L_005d47e3;
L_005d47a9:; BB(0x005d47a9);
    /* 005d47a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d47ac: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005d47b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d47b1: call 0x625860 */ r_esp -= 4; W32(r_esp, 0x5d47b6u); f_00625860();
    /* 005d47b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d47b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d47bb: jne 0x5d47e3 */ if (!fZ) goto L_005d47e3;
L_005d47bd:; BB(0x005d47bd);
    /* 005d47bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d47c0: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 005d47c4: movsx edx, byte ptr [ebp - 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff8u));
    /* 005d47c8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d47ca: je 0x5d47e3 */ if (fZ) goto L_005d47e3;
L_005d47cc:; BB(0x005d47cc);
    /* 005d47cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d47cf: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 005d47d3: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d47d6: je 0x5d47e3 */ if (fZ) goto L_005d47e3;
L_005d47d8:; BB(0x005d47d8);
    /* 005d47d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d47db: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d47de: jmp 0x5d4867 */ goto L_005d4867;
L_005d47e3:; BB(0x005d47e3);
    /* 005d47e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d47e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d47e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d47ea: call 0x452e5d */ r_esp -= 4; W32(r_esp, 0x5d47efu); f_00452e5d();
    /* 005d47ef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d47f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d47f5: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d47f9: jne 0x5d4864 */ if (!fZ) goto L_005d4864;
L_005d47fb:; BB(0x005d47fb);
    /* 005d47fb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d47ff: je 0x5d4864 */ if (fZ) goto L_005d4864;
L_005d4801:; BB(0x005d4801);
    /* 005d4801: mov edx, dword ptr [0x6fc38c] */ r_edx = R32((u32)(0x6fc38cu));
    /* 005d4807: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005d480d: call 0x5dcbfb */ r_esp -= 4; W32(r_esp, 0x5d4812u); f_005dcbfb();
    /* 005d4812: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4814: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4817: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4819: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d481c: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d481fu); call_ind(t); }
    /* 005d481f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4820: mov eax, dword ptr [0x6fc38c] */ r_eax = R32((u32)(0x6fc38cu));
    /* 005d4825: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d482b: call 0x5dd0a7 */ r_esp -= 4; W32(r_esp, 0x5d4830u); f_005dd0a7();
    /* 005d4830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4832: je 0x5d4864 */ if (fZ) goto L_005d4864;
L_005d4834:; BB(0x005d4834);
    /* 005d4834: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4836: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4839: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d483b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d483e: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d4841u); call_ind(t); }
    /* 005d4841: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4842: mov eax, dword ptr [0x6fc38c] */ r_eax = R32((u32)(0x6fc38cu));
    /* 005d4847: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d484d: call 0x5dccb5 */ r_esp -= 4; W32(r_esp, 0x5d4852u); f_005dccb5();
    /* 005d4852: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4853: mov ecx, dword ptr [0x6fc38c] */ r_ecx = R32((u32)(0x6fc38cu));
    /* 005d4859: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005d485f: call 0x5dc5c1 */ r_esp -= 4; W32(r_esp, 0x5d4864u); f_005dc5c1();
L_005d4864:; BB(0x005d4864);
    /* 005d4864: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005d4867:; BB(0x005d4867);
    /* 005d4867: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4869: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d486a: ret 4 */ FN_RET(0x005d4793); r_esp += 8; return;
}

void f_005d486d(void) /* FUN_005d486d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d486d);
    /* 005d486d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d486e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4870: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4871: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4874: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4876: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4879: call 0x5d8122 */ r_esp -= 4; W32(r_esp, 0x5d487eu); f_005d8122();
    /* 005d487e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4881: mov dword ptr [eax], 0x63b33c */ W32((u32)(r_eax), 0x63b33cu);
    /* 005d4887: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4889: push 0x1e84d1 */ { u32 v = 0x1e84d1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d488e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4891: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x5d4896u); f_005e0461();
    /* 005d4896: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4899: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 005d48a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d48a6: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 005d48b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d48b3: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 005d48bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d48c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d48c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d48c3: ret  */ FN_RET(0x005d486d); r_esp += 4; return;
}

void f_005d48c4(void) /* FUN_005d48c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d48c4);
    /* 005d48c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d48c5: mov ebp, esp */ r_ebp = r_esp;
    /* 005d48c7: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d48ca: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d48cd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d48d0: mov dword ptr [eax], 0x63b33c */ W32((u32)(r_eax), 0x63b33cu);
    /* 005d48d6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d48d9: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 005d48df: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d48e2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d48e5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d48e8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d48ec: je 0x5d48ff */ if (fZ) goto L_005d48ff;
L_005d48ee:; BB(0x005d48ee);
    /* 005d48ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d48f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d48f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d48f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d48f8: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d48fau); call_ind(t); }
    /* 005d48fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d48fd: jmp 0x5d4906 */ goto L_005d4906;
L_005d48ff:; BB(0x005d48ff);
    /* 005d48ff: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005d4906:; BB(0x005d4906);
    /* 005d4906: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d4909: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d490f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d4912: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4915: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d4918: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d491c: je 0x5d492f */ if (fZ) goto L_005d492f;
L_005d491e:; BB(0x005d491e);
    /* 005d491e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4920: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4923: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4925: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4928: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d492au); call_ind(t); }
    /* 005d492a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d492d: jmp 0x5d4936 */ goto L_005d4936;
L_005d492f:; BB(0x005d492f);
    /* 005d492f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005d4936:; BB(0x005d4936);
    /* 005d4936: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d4939: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005d493f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d4942: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4945: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d4948: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d494c: je 0x5d495f */ if (fZ) goto L_005d495f;
L_005d494e:; BB(0x005d494e);
    /* 005d494e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4950: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d4953: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4955: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d4958: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d495au); call_ind(t); }
    /* 005d495a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d495d: jmp 0x5d4966 */ goto L_005d4966;
L_005d495f:; BB(0x005d495f);
    /* 005d495f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005d4966:; BB(0x005d4966);
    /* 005d4966: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d4969: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x5d496eu); f_005d8154();
    /* 005d496e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4971: ret  */ FN_RET(0x005d48c4); r_esp += 4; return;
}

void f_005d4972(void) /* FUN_005d4972 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4972);
    /* 005d4972: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4973: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4975: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4978: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d497b: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005d497e: call 0x45384e */ r_esp -= 4; W32(r_esp, 0x5d4983u); f_0045384e();
    /* 005d4983: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4986: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d498d: jne 0x5d49eb */ if (!fZ) goto L_005d49eb;
L_005d498f:; BB(0x005d498f);
    /* 005d498f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4994: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d4999u); f_0048ab58();
    /* 005d4999: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d499c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d499f: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d49a3: je 0x5d49b2 */ if (fZ) goto L_005d49b2;
L_005d49a5:; BB(0x005d49a5);
    /* 005d49a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d49a8: call 0x453f99 */ r_esp -= 4; W32(r_esp, 0x5d49adu); f_00453f99();
    /* 005d49ad: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d49b0: jmp 0x5d49b9 */ goto L_005d49b9;
L_005d49b2:; BB(0x005d49b2);
    /* 005d49b2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005d49b9:; BB(0x005d49b9);
    /* 005d49b9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d49bc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d49bf: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 005d49c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d49c7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d49ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d49cb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d49ce: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005d49d4: call 0x454097 */ r_esp -= 4; W32(r_esp, 0x5d49d9u); f_00454097();
    /* 005d49d9: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005d49db: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005d49dd: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d49e0: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005d49e6: call 0x454149 */ r_esp -= 4; W32(r_esp, 0x5d49ebu); f_00454149();
L_005d49eb:; BB(0x005d49eb);
    /* 005d49eb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d49ee: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d49f4: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d49f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d49f8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d49fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d49fc: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005d49ff: call 0x453c5b */ r_esp -= 4; W32(r_esp, 0x5d4a04u); f_00453c5b();
    /* 005d4a04: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4a07: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d4a0d: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x5d4a12u); f_004542de();
    /* 005d4a12: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4a15: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4a1c: jne 0x5d4a91 */ if (!fZ) goto L_005d4a91;
L_005d4a1e:; BB(0x005d4a1e);
    /* 005d4a1e: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a23: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d4a28u); f_0048ab58();
    /* 005d4a28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4a2b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d4a2e: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4a32: je 0x5d4a43 */ if (fZ) goto L_005d4a43;
L_005d4a34:; BB(0x005d4a34);
    /* 005d4a34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a36: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d4a39: call 0x5d4b21 */ r_esp -= 4; W32(r_esp, 0x5d4a3eu); f_005d4b21();
    /* 005d4a3e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005d4a41: jmp 0x5d4a4a */ goto L_005d4a4a;
L_005d4a43:; BB(0x005d4a43);
    /* 005d4a43: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005d4a4a:; BB(0x005d4a4a);
    /* 005d4a4a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4a4d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005d4a50: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 005d4a56: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a58: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a5a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a5c: push 0x6fc3a4 */ { u32 v = 0x6fc3a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a63: push 0xc5 */ { u32 v = 0xc5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a68: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a6a: push 0x1e84b9 */ { u32 v = 0x1e84b9u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a6f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4a72: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 005d4a78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a79: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4a7c: call 0x5d83d8 */ r_esp -= 4; W32(r_esp, 0x5d4a81u); f_005d83d8();
    /* 005d4a81: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a83: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4a86: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d4a8c: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x5d4a91u); f_005d65d6();
L_005d4a91:; BB(0x005d4a91);
    /* 005d4a91: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4a94: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4a9b: jne 0x5d4b00 */ if (!fZ) goto L_005d4b00;
L_005d4a9d:; BB(0x005d4a9d);
    /* 005d4a9d: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4aa2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d4aa7u); f_0048ab58();
    /* 005d4aa7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4aaa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d4aad: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4ab1: je 0x5d4ac2 */ if (fZ) goto L_005d4ac2;
L_005d4ab3:; BB(0x005d4ab3);
    /* 005d4ab3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ab5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d4ab8: call 0x5d4b21 */ r_esp -= 4; W32(r_esp, 0x5d4abdu); f_005d4b21();
    /* 005d4abd: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005d4ac0: jmp 0x5d4ac9 */ goto L_005d4ac9;
L_005d4ac2:; BB(0x005d4ac2);
    /* 005d4ac2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005d4ac9:; BB(0x005d4ac9);
    /* 005d4ac9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4acc: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d4acf: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 005d4ad5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ad7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ad9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4adb: push 0x6fc3a8 */ { u32 v = 0x6fc3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ae0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ae2: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ae7: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ae9: push 0x1e84b8 */ { u32 v = 0x1e84b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4aee: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4af1: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 005d4af7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4af8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4afb: call 0x5d83d8 */ r_esp -= 4; W32(r_esp, 0x5d4b00u); f_005d83d8();
L_005d4b00:; BB(0x005d4b00);
    /* 005d4b00: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005d4b03: call 0x453880 */ r_esp -= 4; W32(r_esp, 0x5d4b08u); f_00453880();
    /* 005d4b08: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4b0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4b0b: ret 4 */ FN_RET(0x005d4972); r_esp += 8; return;
}

void f_005d4b0e(void) /* FUN_005d4b0e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4b0e);
    /* 005d4b0e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b0f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4b11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b12: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4b15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b18: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x5d4b1du); f_005e030e();
    /* 005d4b1d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4b1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4b20: ret  */ FN_RET(0x005d4b0e); r_esp += 4; return;
}

void f_005d4b21(void) /* FUN_005d4b21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4b21);
    /* 005d4b21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b22: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4b24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b25: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4b28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b2b: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5d4b30u); f_005d5d20();
    /* 005d4b30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b33: mov dword ptr [eax], 0x63b354 */ W32((u32)(r_eax), 0x63b354u);
    /* 005d4b39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b3c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d4b3f: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 005d4b45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b48: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4b4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4b4b: ret 4 */ FN_RET(0x005d4b21); r_esp += 8; return;
}

void f_005d4b4e(void) /* FUN_005d4b4e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4b4e);
    /* 005d4b4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b4f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4b51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b52: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4b55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b58: mov dword ptr [eax], 0x63b354 */ W32((u32)(r_eax), 0x63b354u);
    /* 005d4b5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b61: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5d4b66u); f_005d5dfb();
    /* 005d4b66: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4b68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4b69: ret  */ FN_RET(0x005d4b4e); r_esp += 4; return;
}

void f_005d4b6a(void) /* FUN_005d4b6a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4b6a);
    /* 005d4b6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b6b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4b6d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4b70: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4b73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b76: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005d4b7c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d4b7f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4b83: je 0x5d4b8d */ if (fZ) goto L_005d4b8d;
L_005d4b85:; BB(0x005d4b85);
    /* 005d4b85: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4b89: je 0x5d4be3 */ if (fZ) goto L_005d4be3;
L_005d4b8b:; BB(0x005d4b8b);
    /* 005d4b8b: jmp 0x5d4c03 */ goto L_005d4c03;
L_005d4b8d:; BB(0x005d4b8d);
    /* 005d4b8d: mov edx, dword ptr [0x6fc38c] */ r_edx = R32((u32)(0x6fc38cu));
    /* 005d4b93: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 005d4b99: mov eax, dword ptr [0x6fc38c] */ r_eax = R32((u32)(0x6fc38cu));
    /* 005d4b9e: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 005d4ba4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4ba6: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5d4ba9u); call_ind(t); }
    /* 005d4ba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4baa: mov ecx, dword ptr [0x6f6868] */ r_ecx = R32((u32)(0x6f6868u));
    /* 005d4bb0: call 0x458472 */ r_esp -= 4; W32(r_esp, 0x5d4bb5u); f_00458472();
    /* 005d4bb5: mov ecx, dword ptr [0x6fc38c] */ r_ecx = R32((u32)(0x6fc38cu));
    /* 005d4bbb: mov ecx, dword ptr [ecx + 0xac] */ r_ecx = R32((u32)(r_ecx+0xacu));
    /* 005d4bc1: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x5d4bc6u); f_005e0a55();
    /* 005d4bc6: mov edx, dword ptr [0x6fc38c] */ r_edx = R32((u32)(0x6fc38cu));
    /* 005d4bcc: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 005d4bd6: mov ecx, dword ptr [0x6fc38c] */ r_ecx = R32((u32)(0x6fc38cu));
    /* 005d4bdc: call 0x5d408d */ r_esp -= 4; W32(r_esp, 0x5d4be1u); f_005d408d();
    /* 005d4be1: jmp 0x5d4c03 */ goto L_005d4c03;
L_005d4be3:; BB(0x005d4be3);
    /* 005d4be3: mov eax, dword ptr [0x6fc38c] */ r_eax = R32((u32)(0x6fc38cu));
    /* 005d4be8: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 005d4bee: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x5d4bf3u); f_005e0a55();
    /* 005d4bf3: mov ecx, dword ptr [0x6fc38c] */ r_ecx = R32((u32)(0x6fc38cu));
    /* 005d4bf9: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
L_005d4c03:; BB(0x005d4c03);
    /* 005d4c03: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4c05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c06: ret  */ FN_RET(0x005d4b6a); r_esp += 4; return;
}

void f_005d4c07(void) /* FUN_005d4c07 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4c07);
    /* 005d4c07: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c08: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4c0a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4c0d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4c10: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d4c13: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d4c16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d4c19: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4c1c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4c1e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4c21: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5d4c24u); call_ind(t); }
    /* 005d4c24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c28: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d4c2a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c2d: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d4c30u); call_ind(t); }
    /* 005d4c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c31: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x5d4c36u); f_006325b0();
    /* 005d4c36: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4c39: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4c3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c3c: ret  */ FN_RET(0x005d4c07); r_esp += 4; return;
}

void f_005d4c40(void) /* FUN_005d4c40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4c40);
    /* 005d4c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c41: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4c47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c4a: call 0x5d381d */ r_esp -= 4; W32(r_esp, 0x5d4c4fu); f_005d381d();
    /* 005d4c4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4c52: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4c55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4c57: je 0x5d4c65 */ if (fZ) goto L_005d4c65;
L_005d4c59:; BB(0x005d4c59);
    /* 005d4c59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c5d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d4c62u); f_0048ac1b();
    /* 005d4c62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4c65:; BB(0x005d4c65);
    /* 005d4c65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c68: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4c6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c6b: ret 4 */ FN_RET(0x005d4c40); r_esp += 8; return;
}

void f_005d4c70(void) /* FUN_005d4c70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4c70);
    /* 005d4c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c71: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4c77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c7a: call 0x5d462a */ r_esp -= 4; W32(r_esp, 0x5d4c7fu); f_005d462a();
    /* 005d4c7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4c82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4c87: je 0x5d4c95 */ if (fZ) goto L_005d4c95;
L_005d4c89:; BB(0x005d4c89);
    /* 005d4c89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c8d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d4c92u); f_0048ac1b();
    /* 005d4c92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4c95:; BB(0x005d4c95);
    /* 005d4c95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c98: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4c9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c9b: ret 4 */ FN_RET(0x005d4c70); r_esp += 8; return;
}

void f_005d4ca0(void) /* FUN_005d4ca0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4ca0);
    /* 005d4ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4ca7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4caa: call 0x5d467f */ r_esp -= 4; W32(r_esp, 0x5d4cafu); f_005d467f();
    /* 005d4caf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4cb2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4cb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4cb7: je 0x5d4cc5 */ if (fZ) goto L_005d4cc5;
L_005d4cb9:; BB(0x005d4cb9);
    /* 005d4cb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4cbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4cbd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d4cc2u); f_0048ac1b();
    /* 005d4cc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4cc5:; BB(0x005d4cc5);
    /* 005d4cc5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4cc8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4cca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4ccb: ret 4 */ FN_RET(0x005d4ca0); r_esp += 8; return;
}

void f_005d4cd0(void) /* FUN_005d4cd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4cd0);
    /* 005d4cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4cd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4cd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4cda: call 0x5d46ba */ r_esp -= 4; W32(r_esp, 0x5d4cdfu); f_005d46ba();
    /* 005d4cdf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4ce2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4ce5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4ce7: je 0x5d4cf5 */ if (fZ) goto L_005d4cf5;
L_005d4ce9:; BB(0x005d4ce9);
    /* 005d4ce9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4cec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ced: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d4cf2u); f_0048ac1b();
    /* 005d4cf2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4cf5:; BB(0x005d4cf5);
    /* 005d4cf5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4cf8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4cfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4cfb: ret 4 */ FN_RET(0x005d4cd0); r_esp += 8; return;
}

void f_005d4d00(void) /* FUN_005d4d00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4d00);
    /* 005d4d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d01: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4d07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4d0a: call 0x5d4777 */ r_esp -= 4; W32(r_esp, 0x5d4d0fu); f_005d4777();
    /* 005d4d0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4d12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4d15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4d17: je 0x5d4d25 */ if (fZ) goto L_005d4d25;
L_005d4d19:; BB(0x005d4d19);
    /* 005d4d19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4d1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d1d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d4d22u); f_0048ac1b();
    /* 005d4d22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4d25:; BB(0x005d4d25);
    /* 005d4d25: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4d28: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4d2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4d2b: ret 4 */ FN_RET(0x005d4d00); r_esp += 8; return;
}

void f_005d4d30(void) /* FUN_005d4d30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4d30);
    /* 005d4d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d31: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4d33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4d37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4d3a: call 0x5d48c4 */ r_esp -= 4; W32(r_esp, 0x5d4d3fu); f_005d48c4();
    /* 005d4d3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4d42: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4d45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4d47: je 0x5d4d55 */ if (fZ) goto L_005d4d55;
L_005d4d49:; BB(0x005d4d49);
    /* 005d4d49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4d4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d4d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d4d52u); f_0048ac1b();
    /* 005d4d52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4d55:; BB(0x005d4d55);
    /* 005d4d55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4d58: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4d5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4d5b: ret 4 */ FN_RET(0x005d4d30); r_esp += 8; return;
}

void f_005d4d60(void) /* FUN_005d4d60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4d60);
    /* 005d4d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4d63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4d67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4d6a: call 0x5d4b4e */ r_esp -= 4; W32(r_esp, 0x5d4d6fu); f_005d4b4e();
    /* 005d4d6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4d72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4d75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4d77: je 0x5d4d85 */ if (fZ) goto L_005d4d85;
L_005d4d79:; BB(0x005d4d79);
    /* 005d4d79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4d7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d7d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d4d82u); f_0048ac1b();
    /* 005d4d82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4d85:; BB(0x005d4d85);
    /* 005d4d85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4d88: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4d8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4d8b: ret 4 */ FN_RET(0x005d4d60); r_esp += 8; return;
}

void f_005d4d90(void) /* FUN_005d4d90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4d90);
    /* 005d4d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d91: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4d97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4d9a: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5d4d9fu); f_005e3fb0();
    /* 005d4d9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4da2: mov dword ptr [eax], 0x63b3c4 */ W32((u32)(r_eax), 0x63b3c4u);
    /* 005d4da8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4dab: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 005d4db5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4db8: mov dword ptr [edx + 0x78], 4 */ W32((u32)(r_edx+0x78u), 0x4u);
    /* 005d4dbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4dc2: mov dword ptr [eax + 0x7c], 0x19 */ W32((u32)(r_eax+0x7cu), 0x19u);
    /* 005d4dc9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4dcc: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4dce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4dcf: ret  */ FN_RET(0x005d4d90); r_esp += 4; return;
}

void f_005d4dd0(void) /* FUN_005d4dd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4dd0);
    /* 005d4dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4dd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4dd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4dda: mov dword ptr [eax], 0x63b3c4 */ W32((u32)(r_eax), 0x63b3c4u);
    /* 005d4de0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4de2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4de5: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x5d4deau); f_005d4df6();
    /* 005d4dea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4ded: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x5d4df2u); f_005e3fed();
    /* 005d4df2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4df4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4df5: ret  */ FN_RET(0x005d4dd0); r_esp += 4; return;
}

void f_005d4df6(void) /* FUN_005d4df6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4df6);
    /* 005d4df6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4df7: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4df9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4dfc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d4dff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4e02: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e09: je 0x5d4e3b */ if (fZ) goto L_005d4e3b;
L_005d4e0b:; BB(0x005d4e0b);
    /* 005d4e0b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4e0e: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005d4e14: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d4e17: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4e1a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d4e1d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e21: je 0x5d4e34 */ if (fZ) goto L_005d4e34;
L_005d4e23:; BB(0x005d4e23);
    /* 005d4e23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4e28: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d4e2a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4e2d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d4e2fu); call_ind(t); }
    /* 005d4e2f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d4e32: jmp 0x5d4e3b */ goto L_005d4e3b;
L_005d4e34:; BB(0x005d4e34);
    /* 005d4e34: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d4e3b:; BB(0x005d4e3b);
    /* 005d4e3b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4e3e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d4e41: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 005d4e47: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4e4a: cmp dword ptr [edx + 0x80], 0 */ {  u32 a = R32((u32)(r_edx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e51: je 0x5d4e6e */ if (fZ) goto L_005d4e6e;
L_005d4e53:; BB(0x005d4e53);
    /* 005d4e53: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4e5a: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 005d4e60: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4e63: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005d4e69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4e6b: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d4e6eu); call_ind(t); }
L_005d4e6e:; BB(0x005d4e6e);
    /* 005d4e6e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4e70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4e71: ret 4 */ FN_RET(0x005d4df6); r_esp += 8; return;
}

void f_005d4e74(void) /* FUN_005d4e74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4e74);
    /* 005d4e74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e75: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4e77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e78: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4e7b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4e7e: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 005d4e84: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4e86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4e87: ret  */ FN_RET(0x005d4e74); r_esp += 4; return;
}

void f_005d4e88(void) /* FUN_005d4e88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4e88);
    /* 005d4e88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e89: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4e8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e8c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4e8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4e92: call 0x5e4151 */ r_esp -= 4; W32(r_esp, 0x5d4e97u); f_005e4151();
    /* 005d4e97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4e9a: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4ea1: je 0x5d4eba */ if (fZ) goto L_005d4eba;
L_005d4ea3:; BB(0x005d4ea3);
    /* 005d4ea3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4ea6: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 005d4eac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4eaf: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005d4eb5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4eb7: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5d4ebau); call_ind(t); }
L_005d4eba:; BB(0x005d4eba);
    /* 005d4eba: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4ebc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4ebd: ret  */ FN_RET(0x005d4e88); r_esp += 4; return;
}

void f_005d4ec0(void) /* FUN_005d4ec0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4ec0);
    /* 005d4ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4ec7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d4eca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ecb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4ece: call 0x5d6e50 */ r_esp -= 4; W32(r_esp, 0x5d4ed3u); f_005d6e50();
    /* 005d4ed3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4ed6: mov dword ptr [ecx], 0x63b414 */ W32((u32)(r_ecx), 0x63b414u);
    /* 005d4edc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4edf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4ee2: mov dword ptr [edx + 0xfc], eax */ W32((u32)(r_edx+0xfcu), r_eax);
    /* 005d4ee8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4eeb: mov dword ptr [ecx + 0x100], 0 */ W32((u32)(r_ecx+0x100u), 0x0u);
    /* 005d4ef5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4ef8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4efa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4efb: ret 8 */ FN_RET(0x005d4ec0); r_esp += 12; return;
}

void f_005d4efe(void) /* FUN_005d4efe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4efe);
    /* 005d4efe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4eff: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4f01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4f02: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4f05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4f08: mov dword ptr [eax], 0x63b414 */ W32((u32)(r_eax), 0x63b414u);
    /* 005d4f0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4f11: call 0x5d6fb8 */ r_esp -= 4; W32(r_esp, 0x5d4f16u); f_005d6fb8();
    /* 005d4f16: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4f18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4f19: ret  */ FN_RET(0x005d4efe); r_esp += 4; return;
}

void f_005d4f1a(void) /* FUN_005d4f1a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4f1a);
    /* 005d4f1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4f1b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4f1d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4f20: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d4f23: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4f26: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4f2d: je 0x5d4f41 */ if (fZ) goto L_005d4f41;
L_005d4f2f:; BB(0x005d4f2f);
    /* 005d4f2f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4f32: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4f36: jne 0x5d4f41 */ if (!fZ) goto L_005d4f41;
L_005d4f38:; BB(0x005d4f38);
    /* 005d4f38: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d4f3b: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4f3f: je 0x5d4f52 */ if (fZ) goto L_005d4f52;
L_005d4f41:; BB(0x005d4f41);
    /* 005d4f41: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4f44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4f45: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4f48: call 0x5d7062 */ r_esp -= 4; W32(r_esp, 0x5d4f4du); f_005d7062();
    /* 005d4f4d: jmp 0x5d500f */ goto L_005d500f;
L_005d4f52:; BB(0x005d4f52);
    /* 005d4f52: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4f55: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x5d4f5au); f_005d71b9();
    /* 005d4f5a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d4f5d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d4f60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4f61: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4f64: call 0x5d7062 */ r_esp -= 4; W32(r_esp, 0x5d4f69u); f_005d7062();
    /* 005d4f69: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4f6d: je 0x5d4f91 */ if (fZ) goto L_005d4f91;
L_005d4f6f:; BB(0x005d4f6f);
    /* 005d4f6f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4f72: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x5d4f77u); f_005d71b9();
    /* 005d4f77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4f79: jne 0x5d4f91 */ if (!fZ) goto L_005d4f91;
L_005d4f7b:; BB(0x005d4f7b);
    /* 005d4f7b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4f7e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4f80: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4f83: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x5d4f86u); call_ind(t); }
    /* 005d4f86: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4f89: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d4f8b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4f8e: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5d4f91u); call_ind(t); }
L_005d4f91:; BB(0x005d4f91);
    /* 005d4f91: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4f95: jne 0x5d5009 */ if (!fZ) goto L_005d5009;
L_005d4f97:; BB(0x005d4f97);
    /* 005d4f97: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4f9a: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x5d4f9fu); f_005d71b9();
    /* 005d4f9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4fa1: je 0x5d5009 */ if (fZ) goto L_005d5009;
L_005d4fa3:; BB(0x005d4fa3);
    /* 005d4fa3: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d4faa: jmp 0x5d4fb5 */ goto L_005d4fb5;
L_005d4fac:; BB(0x005d4fac);
    /* 005d4fac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4faf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4fb2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005d4fb5:; BB(0x005d4fb5);
    /* 005d4fb5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4fb8: mov ecx, dword ptr [ecx + 0x100] */ r_ecx = R32((u32)(r_ecx+0x100u));
    /* 005d4fbe: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d4fc3u); f_005dd4d2();
    /* 005d4fc3: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d4fc6: jge 0x5d5009 */ if ((fS==fO)) goto L_005d5009;
L_005d4fc8:; BB(0x005d4fc8);
    /* 005d4fc8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4fcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4fcc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4fcf: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 005d4fd5: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d4fdau); f_005dd560();
    /* 005d4fda: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d4fdd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4fe0: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4fe3: je 0x5d5007 */ if (fZ) goto L_005d5007;
L_005d4fe5:; BB(0x005d4fe5);
    /* 005d4fe5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4fe8: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x5d4fedu); f_005d71b9();
    /* 005d4fed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4fef: je 0x5d5007 */ if (fZ) goto L_005d5007;
L_005d4ff1:; BB(0x005d4ff1);
    /* 005d4ff1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4ff4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4ff6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4ff9: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x5d4ffcu); call_ind(t); }
    /* 005d4ffc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4fff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d5001: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5004: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5d5007u); call_ind(t); }
L_005d5007:; BB(0x005d5007);
    /* 005d5007: jmp 0x5d4fac */ goto L_005d4fac;
L_005d5009:; BB(0x005d5009);
    /* 005d5009: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d500c: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_005d500f:; BB(0x005d500f);
    /* 005d500f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5011: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5012: ret 4 */ FN_RET(0x005d4f1a); r_esp += 8; return;
}

void f_005d5015(void) /* FUN_005d5015 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5015);
    /* 005d5015: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5016: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5018: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5019: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d501c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d501f: mov eax, dword ptr [eax + 0xfc] */ r_eax = R32((u32)(r_eax+0xfcu));
    /* 005d5025: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5027: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5028: ret  */ FN_RET(0x005d5015); r_esp += 4; return;
}

void f_005d5029(void) /* FUN_005d5029 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5029);
    /* 005d5029: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d502a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d502c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d502d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5030: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5033: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5036: mov dword ptr [eax + 0xfc], ecx */ W32((u32)(r_eax+0xfcu), r_ecx);
    /* 005d503c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d503e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d503f: ret 4 */ FN_RET(0x005d5029); r_esp += 8; return;
}

void f_005d5042(void) /* FUN_005d5042 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5042);
    /* 005d5042: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5043: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5045: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5046: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5049: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d504c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d504f: mov dword ptr [eax + 0x100], ecx */ W32((u32)(r_eax+0x100u), r_ecx);
    /* 005d5055: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5057: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5058: ret 4 */ FN_RET(0x005d5042); r_esp += 8; return;
}

void f_005d505b(void) /* FUN_005d505b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d505b);
    /* 005d505b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d505c: mov ebp, esp */ r_ebp = r_esp;
    /* 005d505e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d505f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5062: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5065: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5d506au); f_005e9d30();
    /* 005d506a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d506d: mov dword ptr [eax], 0x63b48c */ W32((u32)(r_eax), 0x63b48cu);
    /* 005d5073: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5076: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 005d507d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5080: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5082: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5083: ret  */ FN_RET(0x005d505b); r_esp += 4; return;
}

void f_005d5084(void) /* FUN_005d5084 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5084);
    /* 005d5084: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5085: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5087: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d508a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d508d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5090: mov dword ptr [eax], 0x63b48c */ W32((u32)(r_eax), 0x63b48cu);
    /* 005d5096: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5099: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d509d: je 0x5d50e1 */ if (fZ) goto L_005d50e1;
L_005d509f:; BB(0x005d509f);
    /* 005d509f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d50a2: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d50a5: call 0x5dd52a */ r_esp -= 4; W32(r_esp, 0x5d50aau); f_005dd52a();
    /* 005d50aa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d50ad: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005d50b0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d50b3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d50b6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d50b9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d50bd: je 0x5d50d0 */ if (fZ) goto L_005d50d0;
L_005d50bf:; BB(0x005d50bf);
    /* 005d50bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d50c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d50c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d50c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d50c9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d50cbu); call_ind(t); }
    /* 005d50cb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d50ce: jmp 0x5d50d7 */ goto L_005d50d7;
L_005d50d0:; BB(0x005d50d0);
    /* 005d50d0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d50d7:; BB(0x005d50d7);
    /* 005d50d7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d50da: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_005d50e1:; BB(0x005d50e1);
    /* 005d50e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d50e4: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x5d50e9u); f_005e9dde();
    /* 005d50e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d50eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d50ec: ret  */ FN_RET(0x005d5084); r_esp += 4; return;
}

void f_005d50ed(void) /* FUN_005d50ed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d50ed);
    /* 005d50ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d50ee: mov ebp, esp */ r_ebp = r_esp;
    /* 005d50f0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d50f3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d50f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d50f9: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d50fd: jne 0x5d512f */ if (!fZ) goto L_005d512f;
L_005d50ff:; BB(0x005d50ff);
    /* 005d50ff: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5101: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d5106u); f_0048ab58();
    /* 005d5106: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d5109: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d510c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5110: je 0x5d511f */ if (fZ) goto L_005d511f;
L_005d5112:; BB(0x005d5112);
    /* 005d5112: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5115: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x5d511au); f_005dd290();
    /* 005d511a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d511d: jmp 0x5d5126 */ goto L_005d5126;
L_005d511f:; BB(0x005d511f);
    /* 005d511f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005d5126:; BB(0x005d5126);
    /* 005d5126: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5129: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d512c: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
L_005d512f:; BB(0x005d512f);
    /* 005d512f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5132: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5133: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5136: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d5139: call 0x5dd503 */ r_esp -= 4; W32(r_esp, 0x5d513eu); f_005dd503();
    /* 005d513e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5140: jne 0x5d516c */ if (!fZ) goto L_005d516c;
L_005d5142:; BB(0x005d5142);
    /* 005d5142: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d5145: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5146: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5149: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005d514c: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x5d5151u); f_005dd425();
    /* 005d5151: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5154: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005d5157: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5158: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d515b: call 0x5d5042 */ r_esp -= 4; W32(r_esp, 0x5d5160u); f_005d5042();
    /* 005d5160: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5163: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5166: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005d5169: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
L_005d516c:; BB(0x005d516c);
    /* 005d516c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d516e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5170: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5171: ret 4 */ FN_RET(0x005d50ed); r_esp += 8; return;
}

void f_005d5174(void) /* FUN_005d5174 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5174);
    /* 005d5174: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5175: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5177: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d517a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d517d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5180: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5184: jne 0x5d518a */ if (!fZ) goto L_005d518a;
L_005d5186:; BB(0x005d5186);
    /* 005d5186: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d5188: jmp 0x5d51db */ goto L_005d51db;
L_005d518a:; BB(0x005d518a);
    /* 005d518a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d5191: jmp 0x5d519c */ goto L_005d519c;
L_005d5193:; BB(0x005d5193);
    /* 005d5193: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5196: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d5199: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d519c:; BB(0x005d519c);
    /* 005d519c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d519f: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d51a2: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d51a7u); f_005dd4d2();
    /* 005d51a7: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d51aa: jge 0x5d51d9 */ if ((fS==fO)) goto L_005d51d9;
L_005d51ac:; BB(0x005d51ac);
    /* 005d51ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d51af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d51b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d51b3: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d51b6: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d51bbu); f_005dd560();
    /* 005d51bb: mov ecx, eax */ r_ecx = r_eax;
    /* 005d51bd: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x5d51c2u); f_005d71b9();
    /* 005d51c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d51c4: je 0x5d51d7 */ if (fZ) goto L_005d51d7;
L_005d51c6:; BB(0x005d51c6);
    /* 005d51c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d51c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d51ca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d51cd: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005d51d0: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d51d5u); f_005dd560();
    /* 005d51d5: jmp 0x5d51db */ goto L_005d51db;
L_005d51d7:; BB(0x005d51d7);
    /* 005d51d7: jmp 0x5d5193 */ goto L_005d5193;
L_005d51d9:; BB(0x005d51d9);
    /* 005d51d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d51db:; BB(0x005d51db);
    /* 005d51db: mov esp, ebp */ r_esp = r_ebp;
    /* 005d51dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d51de: ret  */ FN_RET(0x005d5174); r_esp += 4; return;
}

void f_005d51df(void) /* FUN_005d51df */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d51df);
    /* 005d51df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d51e0: mov ebp, esp */ r_ebp = r_esp;
    /* 005d51e2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d51e5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d51e8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d51eb: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d51ef: jne 0x5d51f6 */ if (!fZ) goto L_005d51f6;
L_005d51f1:; BB(0x005d51f1);
    /* 005d51f1: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d51f4: jmp 0x5d524f */ goto L_005d524f;
L_005d51f6:; BB(0x005d51f6);
    /* 005d51f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d51fd: jmp 0x5d5208 */ goto L_005d5208;
L_005d51ff:; BB(0x005d51ff);
    /* 005d51ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5202: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d5205: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d5208:; BB(0x005d5208);
    /* 005d5208: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d520b: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d520e: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d5213u); f_005dd4d2();
    /* 005d5213: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5216: jge 0x5d524c */ if ((fS==fO)) goto L_005d524c;
L_005d5218:; BB(0x005d5218);
    /* 005d5218: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d521b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d521c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d521f: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d5222: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d5227u); f_005dd560();
    /* 005d5227: mov ecx, eax */ r_ecx = r_eax;
    /* 005d5229: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x5d522eu); f_005d71b9();
    /* 005d522e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5230: je 0x5d524a */ if (fZ) goto L_005d524a;
L_005d5232:; BB(0x005d5232);
    /* 005d5232: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5235: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5236: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5239: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005d523c: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d5241u); f_005dd560();
    /* 005d5241: mov ecx, eax */ r_ecx = r_eax;
    /* 005d5243: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x5d5248u); f_005d5015();
    /* 005d5248: jmp 0x5d524f */ goto L_005d524f;
L_005d524a:; BB(0x005d524a);
    /* 005d524a: jmp 0x5d51ff */ goto L_005d51ff;
L_005d524c:; BB(0x005d524c);
    /* 005d524c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005d524f:; BB(0x005d524f);
    /* 005d524f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5251: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5252: ret  */ FN_RET(0x005d51df); r_esp += 4; return;
}

void f_005d5253(void) /* FUN_005d5253 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5253);
    /* 005d5253: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5254: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5256: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5259: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d525c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d525f: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5263: jne 0x5d526a */ if (!fZ) goto L_005d526a;
L_005d5265:; BB(0x005d5265);
    /* 005d5265: jmp 0x5d5305 */ goto L_005d5305;
L_005d526a:; BB(0x005d526a);
    /* 005d526a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d5271: jmp 0x5d527c */ goto L_005d527c;
L_005d5273:; BB(0x005d5273);
    /* 005d5273: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5276: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d5279: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d527c:; BB(0x005d527c);
    /* 005d527c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d527f: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d5282: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d5287u); f_005dd4d2();
    /* 005d5287: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d528a: jge 0x5d5305 */ if ((fS==fO)) goto L_005d5305;
L_005d528c:; BB(0x005d528c);
    /* 005d528c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d528f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5290: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5293: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d5296: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d529bu); f_005dd560();
    /* 005d529b: mov ecx, eax */ r_ecx = r_eax;
    /* 005d529d: call 0x5d5015 */ r_esp -= 4; W32(r_esp, 0x5d52a2u); f_005d5015();
    /* 005d52a2: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d52a5: jne 0x5d52e3 */ if (!fZ) goto L_005d52e3;
L_005d52a7:; BB(0x005d52a7);
    /* 005d52a7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d52aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d52ab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d52ae: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005d52b1: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d52b6u); f_005dd560();
    /* 005d52b6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d52b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d52bc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d52be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d52c1: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x5d52c4u); call_ind(t); }
    /* 005d52c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d52c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d52c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d52cb: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d52ce: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d52d3u); f_005dd560();
    /* 005d52d3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d52d6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d52d9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d52db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d52de: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x5d52e1u); call_ind(t); }
    /* 005d52e1: jmp 0x5d5300 */ goto L_005d5300;
L_005d52e3:; BB(0x005d52e3);
    /* 005d52e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d52e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d52e7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d52ea: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d52ed: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d52f2u); f_005dd560();
    /* 005d52f2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d52f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d52f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d52fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d52fd: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x5d5300u); call_ind(t); }
L_005d5300:; BB(0x005d5300);
    /* 005d5300: jmp 0x5d5273 */ goto L_005d5273;
L_005d5305:; BB(0x005d5305);
    /* 005d5305: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5307: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5308: ret 4 */ FN_RET(0x005d5253); r_esp += 8; return;
}

void f_005d530b(void) /* FUN_005d530b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d530b);
    /* 005d530b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d530c: mov ebp, esp */ r_ebp = r_esp;
    /* 005d530e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5311: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d5314: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5317: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d531b: jne 0x5d531f */ if (!fZ) goto L_005d531f;
L_005d531d:; BB(0x005d531d);
    /* 005d531d: jmp 0x5d5360 */ goto L_005d5360;
L_005d531f:; BB(0x005d531f);
    /* 005d531f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d5326: jmp 0x5d5331 */ goto L_005d5331;
L_005d5328:; BB(0x005d5328);
    /* 005d5328: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d532b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d532e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d5331:; BB(0x005d5331);
    /* 005d5331: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5334: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d5337: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d533cu); f_005dd4d2();
    /* 005d533c: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d533f: jge 0x5d5360 */ if ((fS==fO)) goto L_005d5360;
L_005d5341:; BB(0x005d5341);
    /* 005d5341: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5345: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5348: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d534b: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d5350u); f_005dd560();
    /* 005d5350: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d5353: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5356: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d5358: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d535b: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5d535eu); call_ind(t); }
    /* 005d535e: jmp 0x5d5328 */ goto L_005d5328;
L_005d5360:; BB(0x005d5360);
    /* 005d5360: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5362: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5363: ret  */ FN_RET(0x005d530b); r_esp += 4; return;
}

void f_005d5364(void) /* FUN_005d5364 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5364);
    /* 005d5364: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5365: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5367: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d536a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d536d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5370: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5374: jne 0x5d5378 */ if (!fZ) goto L_005d5378;
L_005d5376:; BB(0x005d5376);
    /* 005d5376: jmp 0x5d53b9 */ goto L_005d53b9;
L_005d5378:; BB(0x005d5378);
    /* 005d5378: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d537f: jmp 0x5d538a */ goto L_005d538a;
L_005d5381:; BB(0x005d5381);
    /* 005d5381: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5384: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d5387: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d538a:; BB(0x005d538a);
    /* 005d538a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d538d: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d5390: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d5395u); f_005dd4d2();
    /* 005d5395: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5398: jge 0x5d53b9 */ if ((fS==fO)) goto L_005d53b9;
L_005d539a:; BB(0x005d539a);
    /* 005d539a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d539d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d539e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d53a1: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d53a4: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d53a9u); f_005dd560();
    /* 005d53a9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d53ac: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d53af: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d53b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d53b4: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5d53b7u); call_ind(t); }
    /* 005d53b7: jmp 0x5d5381 */ goto L_005d5381;
L_005d53b9:; BB(0x005d53b9);
    /* 005d53b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d53bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d53bc: ret  */ FN_RET(0x005d5364); r_esp += 4; return;
}

void f_005d53bd(void) /* FUN_005d53bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d53bd);
    /* 005d53bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d53be: mov ebp, esp */ r_ebp = r_esp;
    /* 005d53c0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d53c3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d53c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d53c9: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d53cd: jne 0x5d53d1 */ if (!fZ) goto L_005d53d1;
L_005d53cf:; BB(0x005d53cf);
    /* 005d53cf: jmp 0x5d5412 */ goto L_005d5412;
L_005d53d1:; BB(0x005d53d1);
    /* 005d53d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d53d8: jmp 0x5d53e3 */ goto L_005d53e3;
L_005d53da:; BB(0x005d53da);
    /* 005d53da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d53dd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d53e0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d53e3:; BB(0x005d53e3);
    /* 005d53e3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d53e6: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d53e9: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d53eeu); f_005dd4d2();
    /* 005d53ee: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d53f1: jge 0x5d5412 */ if ((fS==fO)) goto L_005d5412;
L_005d53f3:; BB(0x005d53f3);
    /* 005d53f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d53f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d53f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d53fa: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d53fd: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d5402u); f_005dd560();
    /* 005d5402: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d5405: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5408: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d540a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d540d: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x5d5410u); call_ind(t); }
    /* 005d5410: jmp 0x5d53da */ goto L_005d53da;
L_005d5412:; BB(0x005d5412);
    /* 005d5412: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5414: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5415: ret  */ FN_RET(0x005d53bd); r_esp += 4; return;
}

void f_005d5416(void) /* FUN_005d5416 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5416);
    /* 005d5416: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5417: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5419: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d541a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d541d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5420: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5424: je 0x5d5431 */ if (fZ) goto L_005d5431;
L_005d5426:; BB(0x005d5426);
    /* 005d5426: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5429: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d542c: call 0x5dd52a */ r_esp -= 4; W32(r_esp, 0x5d5431u); f_005dd52a();
L_005d5431:; BB(0x005d5431);
    /* 005d5431: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5433: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5434: ret  */ FN_RET(0x005d5416); r_esp += 4; return;
}

void f_005d5435(void) /* FUN_005d5435 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5435);
    /* 005d5435: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5436: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5438: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d543b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d543e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5441: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x5d5446u); f_005ea2c1();
    /* 005d5446: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5449: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d544d: jne 0x5d5451 */ if (!fZ) goto L_005d5451;
L_005d544f:; BB(0x005d544f);
    /* 005d544f: jmp 0x5d5492 */ goto L_005d5492;
L_005d5451:; BB(0x005d5451);
    /* 005d5451: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d5458: jmp 0x5d5463 */ goto L_005d5463;
L_005d545a:; BB(0x005d545a);
    /* 005d545a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d545d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d5460: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d5463:; BB(0x005d5463);
    /* 005d5463: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5466: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d5469: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d546eu); f_005dd4d2();
    /* 005d546e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5471: jge 0x5d5492 */ if ((fS==fO)) goto L_005d5492;
L_005d5473:; BB(0x005d5473);
    /* 005d5473: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5477: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d547a: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d547d: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d5482u); f_005dd560();
    /* 005d5482: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d5485: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5488: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d548a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d548d: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5d5490u); call_ind(t); }
    /* 005d5490: jmp 0x5d545a */ goto L_005d545a;
L_005d5492:; BB(0x005d5492);
    /* 005d5492: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5494: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5495: ret  */ FN_RET(0x005d5435); r_esp += 4; return;
}

void f_005d5496(void) /* FUN_005d5496 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5496);
    /* 005d5496: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5497: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5499: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d549c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d549f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d54a2: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d54a6: je 0x5d54e9 */ if (fZ) goto L_005d54e9;
L_005d54a8:; BB(0x005d54a8);
    /* 005d54a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d54af: jmp 0x5d54ba */ goto L_005d54ba;
L_005d54b1:; BB(0x005d54b1);
    /* 005d54b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d54b4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d54b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d54ba:; BB(0x005d54ba);
    /* 005d54ba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d54bd: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d54c0: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d54c5u); f_005dd4d2();
    /* 005d54c5: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d54c8: jge 0x5d54e9 */ if ((fS==fO)) goto L_005d54e9;
L_005d54ca:; BB(0x005d54ca);
    /* 005d54ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d54cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d54ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d54d1: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d54d4: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d54d9u); f_005dd560();
    /* 005d54d9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d54dc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d54df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d54e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d54e4: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5d54e7u); call_ind(t); }
    /* 005d54e7: jmp 0x5d54b1 */ goto L_005d54b1;
L_005d54e9:; BB(0x005d54e9);
    /* 005d54e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d54ec: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x5d54f1u); f_005ea28a();
    /* 005d54f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d54f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d54f4: ret  */ FN_RET(0x005d5496); r_esp += 4; return;
}

void f_005d54f5(void) /* FUN_005d54f5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d54f5);
    /* 005d54f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d54f6: mov ebp, esp */ r_ebp = r_esp;
    /* 005d54f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d54f9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d54fc: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005d54ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5500: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5504: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5507: call 0x5d4ec0 */ r_esp -= 4; W32(r_esp, 0x5d550cu); f_005d4ec0();
    /* 005d550c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d550f: mov dword ptr [edx], 0x63b4d4 */ W32((u32)(r_edx), 0x63b4d4u);
    /* 005d5515: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5518: mov dword ptr [eax + 0x88], 0x30 */ W32((u32)(r_eax+0x88u), 0x30u);
    /* 005d5522: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5525: mov dword ptr [ecx + 0x104], 0 */ W32((u32)(r_ecx+0x104u), 0x0u);
    /* 005d552f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5532: mov word ptr [edx + 0x10c], 0 */ W16((u32)(r_edx+0x10cu), 0x0u);
    /* 005d553b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d553e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005d5541: mov dword ptr [eax + 0x110], ecx */ W32((u32)(r_eax+0x110u), r_ecx);
    /* 005d5547: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d554a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d554d: mov dword ptr [edx + 0x114], eax */ W32((u32)(r_edx+0x114u), r_eax);
    /* 005d5553: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5556: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5558: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5559: ret 0x10 */ FN_RET(0x005d54f5); r_esp += 20; return;
}

void f_005d555c(void) /* FUN_005d555c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d555c);
    /* 005d555c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d555d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d555f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5562: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d5565: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5568: mov dword ptr [eax], 0x63b4d4 */ W32((u32)(r_eax), 0x63b4d4u);
    /* 005d556e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5571: cmp dword ptr [ecx + 0x104], 0 */ {  u32 a = R32((u32)(r_ecx+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5578: je 0x5d55c5 */ if (fZ) goto L_005d55c5;
L_005d557a:; BB(0x005d557a);
    /* 005d557a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d557d: mov ecx, dword ptr [edx + 0x104] */ r_ecx = R32((u32)(r_edx+0x104u));
    /* 005d5583: call 0x5dd52a */ r_esp -= 4; W32(r_esp, 0x5d5588u); f_005dd52a();
    /* 005d5588: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d558b: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 005d5591: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d5594: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5597: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d559a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d559e: je 0x5d55b1 */ if (fZ) goto L_005d55b1;
L_005d55a0:; BB(0x005d55a0);
    /* 005d55a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d55a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d55a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d55a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d55aa: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d55acu); call_ind(t); }
    /* 005d55ac: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d55af: jmp 0x5d55b8 */ goto L_005d55b8;
L_005d55b1:; BB(0x005d55b1);
    /* 005d55b1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d55b8:; BB(0x005d55b8);
    /* 005d55b8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d55bb: mov dword ptr [eax + 0x104], 0 */ W32((u32)(r_eax+0x104u), 0x0u);
L_005d55c5:; BB(0x005d55c5);
    /* 005d55c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d55c8: call 0x5d4efe */ r_esp -= 4; W32(r_esp, 0x5d55cdu); f_005d4efe();
    /* 005d55cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005d55cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d55d0: ret  */ FN_RET(0x005d555c); r_esp += 4; return;
}

void f_005d55d1(void) /* FUN_005d55d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d55d1);
    /* 005d55d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d55d2: mov ebp, esp */ r_ebp = r_esp;
    /* 005d55d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d55d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d55d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d55da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d55dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d55df: call 0x5d6fd4 */ r_esp -= 4; W32(r_esp, 0x5d55e4u); f_005d6fd4();
    /* 005d55e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d55e7: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d55eb: je 0x5d5615 */ if (fZ) goto L_005d5615;
L_005d55ed:; BB(0x005d55ed);
    /* 005d55ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d55f0: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5d55f5u); f_005d98c3();
    /* 005d55f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d55f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d55f9: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d55fc: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5d5601u); f_005e8740();
    /* 005d5601: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5604: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5d5609u); f_005d98da();
    /* 005d5609: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d560a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d560d: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d5610: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5d5615u); f_005e8775();
L_005d5615:; BB(0x005d5615);
    /* 005d5615: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5617: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5619: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d561b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d561d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d561f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5621: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5623: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5625: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5628: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x5d562du); f_005d727e();
    /* 005d562d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d562f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5630: ret  */ FN_RET(0x005d55d1); r_esp += 4; return;
}

void f_005d5631(void) /* FUN_005d5631 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5631);
    /* 005d5631: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5632: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5634: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5635: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5638: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d563b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d563c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d563f: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5d5644u); f_005d6a7e();
    /* 005d5644: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5646: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5647: ret 4 */ FN_RET(0x005d5631); r_esp += 8; return;
}

void f_005d564a(void) /* FUN_005d564a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d564a);
    /* 005d564a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d564b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d564d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d564e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5651: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5654: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005d5658: mov word ptr [eax + 0x10c], cx */ W16((u32)(r_eax+0x10cu), (u16)r_ecx);
    /* 005d565f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5662: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d5664: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5667: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5d566au); call_ind(t); }
    /* 005d566a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d566d: movsx edx, word ptr [ecx + 0x10c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x10cu));
    /* 005d5674: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5676: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5677: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d567a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d567c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d567f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d5682u); call_ind(t); }
    /* 005d5682: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5684: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5685: ret 4 */ FN_RET(0x005d564a); r_esp += 8; return;
}

void f_005d5688(void) /* FUN_005d5688 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5688);
    /* 005d5688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5689: mov ebp, esp */ r_ebp = r_esp;
    /* 005d568b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d568c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d568f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5692: mov ax, word ptr [eax + 0x10c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x10cu))) & 0xffffu);
    /* 005d5699: mov esp, ebp */ r_esp = r_ebp;
    /* 005d569b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d569c: ret  */ FN_RET(0x005d5688); r_esp += 4; return;
}

void f_005d569d(void) /* FUN_005d569d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d569d);
    /* 005d569d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d569e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d56a0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d56a3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d56a6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d56a9: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d56b0: jne 0x5d56e5 */ if (!fZ) goto L_005d56e5;
L_005d56b2:; BB(0x005d56b2);
    /* 005d56b2: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005d56b4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d56b9u); f_0048ab58();
    /* 005d56b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d56bc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d56bf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d56c3: je 0x5d56d2 */ if (fZ) goto L_005d56d2;
L_005d56c5:; BB(0x005d56c5);
    /* 005d56c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d56c8: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x5d56cdu); f_005dd290();
    /* 005d56cd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d56d0: jmp 0x5d56d9 */ goto L_005d56d9;
L_005d56d2:; BB(0x005d56d2);
    /* 005d56d2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005d56d9:; BB(0x005d56d9);
    /* 005d56d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d56dc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d56df: mov dword ptr [ecx + 0x104], edx */ W32((u32)(r_ecx+0x104u), r_edx);
L_005d56e5:; BB(0x005d56e5);
    /* 005d56e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d56e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d56e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d56ec: mov ecx, dword ptr [ecx + 0x104] */ r_ecx = R32((u32)(r_ecx+0x104u));
    /* 005d56f2: call 0x5dd503 */ r_esp -= 4; W32(r_esp, 0x5d56f7u); f_005dd503();
    /* 005d56f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d56f9: jne 0x5d5719 */ if (!fZ) goto L_005d5719;
L_005d56fb:; BB(0x005d56fb);
    /* 005d56fb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d56fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d56ff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5702: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 005d5708: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x5d570du); f_005dd425();
    /* 005d570d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5710: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5713: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d5716: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
L_005d5719:; BB(0x005d5719);
    /* 005d5719: mov esp, ebp */ r_esp = r_ebp;
    /* 005d571b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d571c: ret 4 */ FN_RET(0x005d569d); r_esp += 8; return;
}

void f_005d571f(void) /* FUN_005d571f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d571f);
    /* 005d571f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5720: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5722: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5723: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5726: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5729: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5730: je 0x5d5744 */ if (fZ) goto L_005d5744;
L_005d5732:; BB(0x005d5732);
    /* 005d5732: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5735: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5736: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5739: mov ecx, dword ptr [edx + 0x104] */ r_ecx = R32((u32)(r_edx+0x104u));
    /* 005d573f: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5d5744u); f_005dd469();
L_005d5744:; BB(0x005d5744);
    /* 005d5744: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5746: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5747: ret 4 */ FN_RET(0x005d571f); r_esp += 8; return;
}

void f_005d574a(void) /* FUN_005d574a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d574a);
    /* 005d574a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d574b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d574d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5750: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d5753: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5756: call 0x5d7173 */ r_esp -= 4; W32(r_esp, 0x5d575bu); f_005d7173();
    /* 005d575b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d575d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5760: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 005d5766: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005d5769: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d576a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d576d: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 005d5773: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005d5776: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5777: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d577a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d577c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d577f: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5d5782u); call_ind(t); }
    /* 005d5782: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5785: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5787: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d578a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d578du); call_ind(t); }
    /* 005d578d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5790: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5797: je 0x5d57e0 */ if (fZ) goto L_005d57e0;
L_005d5799:; BB(0x005d5799);
    /* 005d5799: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d57a0: jmp 0x5d57ab */ goto L_005d57ab;
L_005d57a2:; BB(0x005d57a2);
    /* 005d57a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d57a5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d57a8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d57ab:; BB(0x005d57ab);
    /* 005d57ab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d57ae: mov ecx, dword ptr [edx + 0x104] */ r_ecx = R32((u32)(r_edx+0x104u));
    /* 005d57b4: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d57b9u); f_005dd4d2();
    /* 005d57b9: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d57bc: jge 0x5d57e0 */ if ((fS==fO)) goto L_005d57e0;
L_005d57be:; BB(0x005d57be);
    /* 005d57be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d57c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d57c2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d57c5: mov ecx, dword ptr [ecx + 0x104] */ r_ecx = R32((u32)(r_ecx+0x104u));
    /* 005d57cb: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d57d0u); f_005dd560();
    /* 005d57d0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d57d3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d57d6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d57d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d57db: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5d57deu); call_ind(t); }
    /* 005d57de: jmp 0x5d57a2 */ goto L_005d57a2;
L_005d57e0:; BB(0x005d57e0);
    /* 005d57e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d57e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d57e4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d57e7: mov ecx, dword ptr [edx + 0x108] */ r_ecx = R32((u32)(r_edx+0x108u));
    /* 005d57ed: call 0x5d5a92 */ r_esp -= 4; W32(r_esp, 0x5d57f2u); f_005d5a92();
    /* 005d57f2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005d57f4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d57f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d57f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d57fc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d57ffu); call_ind(t); }
    /* 005d57ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5801: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5802: ret  */ FN_RET(0x005d574a); r_esp += 4; return;
}

void f_005d5803(void) /* FUN_005d5803 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5803);
    /* 005d5803: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5804: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5806: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5809: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d580c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d580f: call 0x5d7196 */ r_esp -= 4; W32(r_esp, 0x5d5814u); f_005d7196();
    /* 005d5814: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d5816: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5819: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 005d581f: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 005d5822: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5823: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5826: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 005d582c: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005d582f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5830: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5833: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5835: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5838: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5d583bu); call_ind(t); }
    /* 005d583b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d583e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5840: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5843: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d5846u); call_ind(t); }
    /* 005d5846: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5849: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5850: je 0x5d5899 */ if (fZ) goto L_005d5899;
L_005d5852:; BB(0x005d5852);
    /* 005d5852: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d5859: jmp 0x5d5864 */ goto L_005d5864;
L_005d585b:; BB(0x005d585b);
    /* 005d585b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d585e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d5861: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d5864:; BB(0x005d5864);
    /* 005d5864: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5867: mov ecx, dword ptr [edx + 0x104] */ r_ecx = R32((u32)(r_edx+0x104u));
    /* 005d586d: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d5872u); f_005dd4d2();
    /* 005d5872: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5875: jge 0x5d5899 */ if ((fS==fO)) goto L_005d5899;
L_005d5877:; BB(0x005d5877);
    /* 005d5877: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d587a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d587b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d587e: mov ecx, dword ptr [ecx + 0x104] */ r_ecx = R32((u32)(r_ecx+0x104u));
    /* 005d5884: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d5889u); f_005dd560();
    /* 005d5889: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d588c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d588f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d5891: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5894: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5d5897u); call_ind(t); }
    /* 005d5897: jmp 0x5d585b */ goto L_005d585b;
L_005d5899:; BB(0x005d5899);
    /* 005d5899: mov esp, ebp */ r_esp = r_ebp;
    /* 005d589b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d589c: ret  */ FN_RET(0x005d5803); r_esp += 4; return;
}

void f_005d589d(void) /* FUN_005d589d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d589d);
    /* 005d589d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d589e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d58a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d58a1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d58a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d58a7: mov eax, dword ptr [eax + 0x110] */ r_eax = R32((u32)(r_eax+0x110u));
    /* 005d58ad: mov esp, ebp */ r_esp = r_ebp;
    /* 005d58af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d58b0: ret  */ FN_RET(0x005d589d); r_esp += 4; return;
}

void f_005d58b1(void) /* FUN_005d58b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d58b1);
    /* 005d58b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d58b2: mov ebp, esp */ r_ebp = r_esp;
    /* 005d58b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d58b5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d58b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d58bb: mov eax, dword ptr [eax + 0x114] */ r_eax = R32((u32)(r_eax+0x114u));
    /* 005d58c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d58c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d58c4: ret  */ FN_RET(0x005d58b1); r_esp += 4; return;
}

