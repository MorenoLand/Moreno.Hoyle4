#include "protos.h"

void f_00489df2(void) /* FUN_00489df2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489df2);
    /* 00489df2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489df3: mov ebp, esp */ r_ebp = r_esp;
    /* 00489df5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489df6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489df9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489dfc: call 0x5e7172 */ r_esp -= 4; W32(r_esp, 0x489e01u); f_005e7172();
    /* 00489e01: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489e07: call 0x4879e9 */ r_esp -= 4; W32(r_esp, 0x489e0cu); f_004879e9();
    /* 00489e0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489e0e: je 0x489e2c */ if (fZ) goto L_00489e2c;
L_00489e10:; BB(0x00489e10);
    /* 00489e10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489e13: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489e17: je 0x489e2a */ if (fZ) goto L_00489e2a;
L_00489e19:; BB(0x00489e19);
    /* 00489e19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489e1c: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00489e1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489e22: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00489e25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00489e27: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x489e2au); call_ind(t); }
L_00489e2a:; BB(0x00489e2a);
    /* 00489e2a: jmp 0x489e40 */ goto L_00489e40;
L_00489e2c:; BB(0x00489e2c);
    /* 00489e2c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489e2f: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489e33: je 0x489e40 */ if (fZ) goto L_00489e40;
L_00489e35:; BB(0x00489e35);
    /* 00489e35: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489e38: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 00489e3b: call 0x454311 */ r_esp -= 4; W32(r_esp, 0x489e40u); f_00454311();
L_00489e40:; BB(0x00489e40);
    /* 00489e40: mov esp, ebp */ r_esp = r_ebp;
    /* 00489e42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489e43: ret  */ FN_RET(0x00489df2); r_esp += 4; return;
}

void f_00489e44(void) /* FUN_00489e44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489e44);
    /* 00489e44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489e45: mov ebp, esp */ r_ebp = r_esp;
    /* 00489e47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489e48: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489e4b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489e4e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00489e51: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 00489e54: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489e57: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00489e5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489e5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00489e60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489e63: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x489e66u); call_ind(t); }
    /* 00489e66: mov esp, ebp */ r_esp = r_ebp;
    /* 00489e68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489e69: ret 4 */ FN_RET(0x00489e44); r_esp += 8; return;
}

void f_00489e6c(void) /* FUN_00489e6c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489e6c);
    /* 00489e6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489e6d: mov ebp, esp */ r_ebp = r_esp;
    /* 00489e6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489e70: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489e73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489e76: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 00489e79: mov esp, ebp */ r_esp = r_ebp;
    /* 00489e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489e7c: ret  */ FN_RET(0x00489e6c); r_esp += 4; return;
}

void f_00489e7d(void) /* FUN_00489e7d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489e7d);
    /* 00489e7d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489e7e: mov ebp, esp */ r_ebp = r_esp;
    /* 00489e80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489e81: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489e84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489e87: mov eax, dword ptr [eax + 0x88] */ r_eax = R32((u32)(r_eax+0x88u));
    /* 00489e8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00489e8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489e90: ret  */ FN_RET(0x00489e7d); r_esp += 4; return;
}

void f_00489e91(void) /* FUN_00489e91 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489e91);
    /* 00489e91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489e92: mov ebp, esp */ r_ebp = r_esp;
    /* 00489e94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489e95: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00489e98: mov eax, 1 */ r_eax = 0x1u;
    /* 00489e9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00489e9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489ea0: ret  */ FN_RET(0x00489e91); r_esp += 4; return;
}

void f_00489ea1(void) /* FUN_00489ea1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00489ea1);
    /* 00489ea1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489ea2: mov ebp, esp */ r_ebp = r_esp;
    /* 00489ea4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489ea7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00489eaa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00489ead: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489eae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489eb1: call 0x5e761e */ r_esp -= 4; W32(r_esp, 0x489eb6u); f_005e761e();
    /* 00489eb6: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489ebc: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00489ec2: call 0x5de9d1 */ r_esp -= 4; W32(r_esp, 0x489ec7u); f_005de9d1();
    /* 00489ec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489ec9: je 0x489f5c */ if (fZ) goto L_00489f5c;
L_00489ecf:; BB(0x00489ecf);
    /* 00489ecf: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 00489ed5: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00489edb: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x489ee0u); f_005de96b();
    /* 00489ee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489ee1: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00489ee6: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00489eec: call 0x5df13c */ r_esp -= 4; W32(r_esp, 0x489ef1u); f_005df13c();
    /* 00489ef1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00489ef4: push 0x6f6ba4 */ { u32 v = 0x6f6ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 00489ef9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489efc: add ecx, 0x8a1 */ {  u32 a = r_ecx; u32 b = 0x8a1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489f02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489f03: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x489f08u); f_006240c0();
    /* 00489f08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489f0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489f0d: jne 0x489f37 */ if (!fZ) goto L_00489f37;
L_00489f0f:; BB(0x00489f0f);
    /* 00489f0f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489f12: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489f15: mov cl, byte ptr [eax + 0x54] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x54u))) & 0xffu);
    /* 00489f18: mov byte ptr [edx + 0x8a0], cl */ W8((u32)(r_edx+0x8a0u), (u8)r_ecx);
    /* 00489f1e: push 0x6f6ba8 */ { u32 v = 0x6f6ba8u; r_esp -= 4; W32(r_esp, v); }
    /* 00489f23: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489f26: add edx, 0x8a1 */ {  u32 a = r_edx; u32 b = 0x8a1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00489f2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489f2d: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x489f32u); f_00624510();
    /* 00489f32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489f35: jmp 0x489f5c */ goto L_00489f5c;
L_00489f37:; BB(0x00489f37);
    /* 00489f37: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489f3a: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00489f3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489f3e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489f41: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489f44: call 0x453a6e */ r_esp -= 4; W32(r_esp, 0x489f49u); f_00453a6e();
    /* 00489f49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489f4a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00489f4d: add edx, 0x8a1 */ {  u32 a = r_edx; u32 b = 0x8a1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00489f53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489f54: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x489f59u); f_00624510();
    /* 00489f59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00489f5c:; BB(0x00489f5c);
    /* 00489f5c: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489f62: call 0x4879e9 */ r_esp -= 4; W32(r_esp, 0x489f67u); f_004879e9();
    /* 00489f67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489f69: je 0x489fd4 */ if (fZ) goto L_00489fd4;
L_00489f6b:; BB(0x00489f6b);
    /* 00489f6b: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00489f70: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 00489f76: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489f79: mov al, byte ptr [edx + 0x54] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x54u))) & 0xffu);
    /* 00489f7c: mov byte ptr [ecx + 0x40], al */ W8((u32)(r_ecx+0x40u), (u8)r_eax);
    /* 00489f7f: push 0x6f6bac */ { u32 v = 0x6f6bacu; r_esp -= 4; W32(r_esp, v); }
    /* 00489f84: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 00489f8a: mov edx, dword ptr [ecx + 0x1d10] */ r_edx = R32((u32)(r_ecx+0x1d10u));
    /* 00489f90: add edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00489f93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489f94: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x489f99u); f_00624510();
    /* 00489f99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489f9c: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00489fa1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489fa4: mov dl, byte ptr [ecx + 0x54] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x54u))) & 0xffu);
    /* 00489fa7: mov byte ptr [eax + 0x91], dl */ W8((u32)(r_eax+0x91u), (u8)r_edx);
    /* 00489fad: push 0x11287 */ { u32 v = 0x11287u; r_esp -= 4; W32(r_esp, v); }
    /* 00489fb2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489fb5: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00489fb8: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x489fbdu); f_005ea0c3();
    /* 00489fbd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489fc0: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00489fc3: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00489fc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489fc7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489fca: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00489fcd: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x489fd2u); f_005ea1cf();
    /* 00489fd2: jmp 0x48a037 */ goto L_0048a037;
L_00489fd4:; BB(0x00489fd4);
    /* 00489fd4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489fd7: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00489fda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489fdb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00489fde: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489fe1: call 0x453a6e */ r_esp -= 4; W32(r_esp, 0x489fe6u); f_00453a6e();
    /* 00489fe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489fe7: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 00489fec: mov ecx, dword ptr [eax + 0x1d10] */ r_ecx = R32((u32)(r_eax+0x1d10u));
    /* 00489ff2: add ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489ff5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489ff6: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x489ffbu); f_00624510();
    /* 00489ffb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489ffe: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 0048a004: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048a007: mov cl, byte ptr [eax + 0x54] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x54u))) & 0xffu);
    /* 0048a00a: mov byte ptr [edx + 0x90], cl */ W8((u32)(r_edx+0x90u), (u8)r_ecx);
    /* 0048a010: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048a013: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0048a016: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048a019: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a01a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048a01d: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0048a020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a021: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048a024: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048a027: call 0x453c2c */ r_esp -= 4; W32(r_esp, 0x48a02cu); f_00453c2c();
    /* 0048a02c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048a02f: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0048a032: call 0x4542de */ r_esp -= 4; W32(r_esp, 0x48a037u); f_004542de();
L_0048a037:; BB(0x0048a037);
    /* 0048a037: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a039: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a03a: ret 4 */ FN_RET(0x00489ea1); r_esp += 8; return;
}

void f_0048a03d(void) /* FUN_0048a03d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a03d);
    /* 0048a03d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a03e: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a040: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048a043: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a046: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048a049: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048a04c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048a04f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048a052: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048a054: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048a057: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x48a05au); call_ind(t); }
    /* 0048a05a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a05b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a05e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048a060: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a063: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x48a066u); call_ind(t); }
    /* 0048a066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a067: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x48a06cu); f_006325b0();
    /* 0048a06c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a06f: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a071: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a072: ret  */ FN_RET(0x0048a03d); r_esp += 4; return;
}

void f_0048a080(void) /* FUN_0048a080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a080);
    /* 0048a080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a081: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a087: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a08a: call 0x482cb8 */ r_esp -= 4; W32(r_esp, 0x48a08fu); f_00482cb8();
    /* 0048a08f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a092: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a097: je 0x48a0a5 */ if (fZ) goto L_0048a0a5;
L_0048a099:; BB(0x0048a099);
    /* 0048a099: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a09c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a09d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a0a2u); f_0048ac1b();
    /* 0048a0a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a0a5:; BB(0x0048a0a5);
    /* 0048a0a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a0a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a0aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a0ab: ret 4 */ FN_RET(0x0048a080); r_esp += 8; return;
}

void f_0048a0b0(void) /* FUN_0048a0b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a0b0);
    /* 0048a0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a0b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a0b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a0b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a0ba: call 0x487d59 */ r_esp -= 4; W32(r_esp, 0x48a0bfu); f_00487d59();
    /* 0048a0bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a0c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a0c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a0c7: je 0x48a0d5 */ if (fZ) goto L_0048a0d5;
L_0048a0c9:; BB(0x0048a0c9);
    /* 0048a0c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a0cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a0cd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a0d2u); f_0048ac1b();
    /* 0048a0d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a0d5:; BB(0x0048a0d5);
    /* 0048a0d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a0d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a0da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a0db: ret 4 */ FN_RET(0x0048a0b0); r_esp += 8; return;
}

void f_0048a0e0(void) /* FUN_0048a0e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a0e0);
    /* 0048a0e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a0e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a0e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a0e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a0e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a0ea: call 0x488ce5 */ r_esp -= 4; W32(r_esp, 0x48a0efu); f_00488ce5();
    /* 0048a0ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a0f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a0f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a0f7: je 0x48a105 */ if (fZ) goto L_0048a105;
L_0048a0f9:; BB(0x0048a0f9);
    /* 0048a0f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a0fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a0fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a102u); f_0048ac1b();
    /* 0048a102: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a105:; BB(0x0048a105);
    /* 0048a105: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a108: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a10a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a10b: ret 4 */ FN_RET(0x0048a0e0); r_esp += 8; return;
}

void f_0048a110(void) /* FUN_0048a110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a110);
    /* 0048a110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a111: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a117: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a11a: call 0x488d7b */ r_esp -= 4; W32(r_esp, 0x48a11fu); f_00488d7b();
    /* 0048a11f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a122: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a125: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a127: je 0x48a135 */ if (fZ) goto L_0048a135;
L_0048a129:; BB(0x0048a129);
    /* 0048a129: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a12c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a12d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a132u); f_0048ac1b();
    /* 0048a132: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a135:; BB(0x0048a135);
    /* 0048a135: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a138: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a13a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a13b: ret 4 */ FN_RET(0x0048a110); r_esp += 8; return;
}

void f_0048a140(void) /* FUN_0048a140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a140);
    /* 0048a140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a141: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a147: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a14a: call 0x488e51 */ r_esp -= 4; W32(r_esp, 0x48a14fu); f_00488e51();
    /* 0048a14f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a152: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a155: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a157: je 0x48a165 */ if (fZ) goto L_0048a165;
L_0048a159:; BB(0x0048a159);
    /* 0048a159: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a15c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a15d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a162u); f_0048ac1b();
    /* 0048a162: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a165:; BB(0x0048a165);
    /* 0048a165: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a168: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a16a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a16b: ret 4 */ FN_RET(0x0048a140); r_esp += 8; return;
}

void f_0048a170(void) /* FUN_0048a170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a170);
    /* 0048a170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a171: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a177: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a17a: call 0x488ee6 */ r_esp -= 4; W32(r_esp, 0x48a17fu); f_00488ee6();
    /* 0048a17f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a182: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a185: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a187: je 0x48a195 */ if (fZ) goto L_0048a195;
L_0048a189:; BB(0x0048a189);
    /* 0048a189: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a18c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a18d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a192u); f_0048ac1b();
    /* 0048a192: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a195:; BB(0x0048a195);
    /* 0048a195: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a198: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a19a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a19b: ret 4 */ FN_RET(0x0048a170); r_esp += 8; return;
}

void f_0048a1a0(void) /* FUN_0048a1a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a1a0);
    /* 0048a1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a1a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a1a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a1a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a1aa: call 0x488ff5 */ r_esp -= 4; W32(r_esp, 0x48a1afu); f_00488ff5();
    /* 0048a1af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a1b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a1b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a1b7: je 0x48a1c5 */ if (fZ) goto L_0048a1c5;
L_0048a1b9:; BB(0x0048a1b9);
    /* 0048a1b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a1bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a1bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a1c2u); f_0048ac1b();
    /* 0048a1c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a1c5:; BB(0x0048a1c5);
    /* 0048a1c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a1c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a1ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a1cb: ret 4 */ FN_RET(0x0048a1a0); r_esp += 8; return;
}

void f_0048a1d0(void) /* FUN_0048a1d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a1d0);
    /* 0048a1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a1d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a1d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a1d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a1da: call 0x4891c2 */ r_esp -= 4; W32(r_esp, 0x48a1dfu); f_004891c2();
    /* 0048a1df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a1e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a1e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a1e7: je 0x48a1f5 */ if (fZ) goto L_0048a1f5;
L_0048a1e9:; BB(0x0048a1e9);
    /* 0048a1e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a1ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a1ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a1f2u); f_0048ac1b();
    /* 0048a1f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a1f5:; BB(0x0048a1f5);
    /* 0048a1f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a1f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a1fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a1fb: ret 4 */ FN_RET(0x0048a1d0); r_esp += 8; return;
}

void f_0048a200(void) /* FUN_0048a200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a200);
    /* 0048a200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a201: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a20a: call 0x489463 */ r_esp -= 4; W32(r_esp, 0x48a20fu); f_00489463();
    /* 0048a20f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a212: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a215: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a217: je 0x48a225 */ if (fZ) goto L_0048a225;
L_0048a219:; BB(0x0048a219);
    /* 0048a219: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a21c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a21d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a222u); f_0048ac1b();
    /* 0048a222: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a225:; BB(0x0048a225);
    /* 0048a225: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a228: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a22a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a22b: ret 4 */ FN_RET(0x0048a200); r_esp += 8; return;
}

void f_0048a230(void) /* FUN_0048a230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a230);
    /* 0048a230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a231: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a237: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a23a: call 0x48958c */ r_esp -= 4; W32(r_esp, 0x48a23fu); f_0048958c();
    /* 0048a23f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a242: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a245: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a247: je 0x48a255 */ if (fZ) goto L_0048a255;
L_0048a249:; BB(0x0048a249);
    /* 0048a249: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a24c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a24d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a252u); f_0048ac1b();
    /* 0048a252: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a255:; BB(0x0048a255);
    /* 0048a255: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a258: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a25a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a25b: ret 4 */ FN_RET(0x0048a230); r_esp += 8; return;
}

void f_0048a260(void) /* FUN_0048a260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a260);
    /* 0048a260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a261: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a267: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a26a: call 0x489628 */ r_esp -= 4; W32(r_esp, 0x48a26fu); f_00489628();
    /* 0048a26f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a272: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a277: je 0x48a285 */ if (fZ) goto L_0048a285;
L_0048a279:; BB(0x0048a279);
    /* 0048a279: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a27c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a27d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a282u); f_0048ac1b();
    /* 0048a282: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a285:; BB(0x0048a285);
    /* 0048a285: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a288: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a28a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a28b: ret 4 */ FN_RET(0x0048a260); r_esp += 8; return;
}

void f_0048a290(void) /* FUN_0048a290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a290);
    /* 0048a290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a291: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a294: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a297: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a29a: call 0x489663 */ r_esp -= 4; W32(r_esp, 0x48a29fu); f_00489663();
    /* 0048a29f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a2a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a2a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a2a7: je 0x48a2b5 */ if (fZ) goto L_0048a2b5;
L_0048a2a9:; BB(0x0048a2a9);
    /* 0048a2a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a2ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a2ad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a2b2u); f_0048ac1b();
    /* 0048a2b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a2b5:; BB(0x0048a2b5);
    /* 0048a2b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a2b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a2ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a2bb: ret 4 */ FN_RET(0x0048a290); r_esp += 8; return;
}

void f_0048a2c0(void) /* FUN_0048a2c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a2c0);
    /* 0048a2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a2c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a2c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048a2c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a2ca: call 0x48997e */ r_esp -= 4; W32(r_esp, 0x48a2cfu); f_0048997e();
    /* 0048a2cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048a2d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a2d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a2d7: je 0x48a2e5 */ if (fZ) goto L_0048a2e5;
L_0048a2d9:; BB(0x0048a2d9);
    /* 0048a2d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a2dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a2dd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48a2e2u); f_0048ac1b();
    /* 0048a2e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a2e5:; BB(0x0048a2e5);
    /* 0048a2e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a2e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a2ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a2eb: ret 4 */ FN_RET(0x0048a2c0); r_esp += 8; return;
}

void f_0048a2f0(void) /* FUN_0048a2f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048a2f0);
    /* 0048a2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a2f3: sub esp, 0x72c */ {  u32 a = r_esp; u32 b = 0x72cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048a2f9: mov dword ptr [ebp - 0x2d0], 0 */ W32((u32)(r_ebp+0xfffffd30u), 0x0u);
    /* 0048a303: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a308: lea eax, [ebp - 0x70c] */ r_eax = (u32)(r_ebp+0xfffff8f4u);
    /* 0048a30e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a30f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a311: call dword ptr [0x633038] */ { u32 t = R32((u32)(0x633038u)); r_esp -= 4; W32(r_esp, 0x48a317u); call_ind(t); }
    /* 0048a317: mov dword ptr [ebp - 0x604], eax */ W32((u32)(r_ebp+0xfffff9fcu), r_eax);
    /* 0048a31d: cmp dword ptr [ebp - 0x604], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a324: jle 0x48a385 */ if ((fZ||fS!=fO)) goto L_0048a385;
L_0048a326:; BB(0x0048a326);
    /* 0048a326: lea ecx, [ebp - 0x70c] */ r_ecx = (u32)(r_ebp+0xfffff8f4u);
    /* 0048a32c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a32d: push 0x6f6dc0 */ { u32 v = 0x6f6dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a332: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48a337u); f_00624510();
    /* 0048a337: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a33a:; BB(0x0048a33a);
    /* 0048a33a: cmp dword ptr [ebp - 0x604], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a341: jle 0x48a367 */ if ((fZ||fS!=fO)) goto L_0048a367;
L_0048a343:; BB(0x0048a343);
    /* 0048a343: mov edx, dword ptr [ebp - 0x604] */ r_edx = R32((u32)(r_ebp+0xfffff9fcu));
    /* 0048a349: movsx eax, byte ptr [ebp + edx - 0x70c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edx+0xfffff8f4u));
    /* 0048a351: cmp eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a354: je 0x48a367 */ if (fZ) goto L_0048a367;
L_0048a356:; BB(0x0048a356);
    /* 0048a356: mov ecx, dword ptr [ebp - 0x604] */ r_ecx = R32((u32)(r_ebp+0xfffff9fcu));
    /* 0048a35c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048a35f: mov dword ptr [ebp - 0x604], ecx */ W32((u32)(r_ebp+0xfffff9fcu), r_ecx);
    /* 0048a365: jmp 0x48a33a */ goto L_0048a33a;
L_0048a367:; BB(0x0048a367);
    /* 0048a367: mov edx, dword ptr [ebp - 0x604] */ r_edx = R32((u32)(r_ebp+0xfffff9fcu));
    /* 0048a36d: mov byte ptr [ebp + edx - 0x70c], 0x5c */ W8((u32)(r_ebp+r_edx+0xfffff8f4u), 0x5cu);
    /* 0048a375: mov eax, dword ptr [ebp - 0x604] */ r_eax = R32((u32)(r_ebp+0xfffff9fcu));
    /* 0048a37b: mov byte ptr [ebp + eax - 0x70b], 0 */ W8((u32)(r_ebp+r_eax+0xfffff8f5u), 0x0u);
    /* 0048a383: jmp 0x48a393 */ goto L_0048a393;
L_0048a385:; BB(0x0048a385);
    /* 0048a385: mov byte ptr [0x6f6dc0], 0 */ W8((u32)(0x6f6dc0u), 0x0u);
    /* 0048a38c: mov byte ptr [ebp - 0x70c], 0 */ W8((u32)(r_ebp+0xfffff8f4u), 0x0u);
L_0048a393:; BB(0x0048a393);
    /* 0048a393: lea ecx, [ebp - 0x70c] */ r_ecx = (u32)(r_ebp+0xfffff8f4u);
    /* 0048a399: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a39a: push 0x6f6cb8 */ { u32 v = 0x6f6cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a39f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48a3a4u); f_00624510();
    /* 0048a3a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a3a7: push 0x6f6cb8 */ { u32 v = 0x6f6cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3ac: push 0x6f6bb0 */ { u32 v = 0x6f6bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3b1: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48a3b6u); f_00624510();
    /* 0048a3b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a3b9: mov edx, dword ptr [0x687138] */ r_edx = R32((u32)(0x687138u));
    /* 0048a3bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3c0: push 0x6f6bb0 */ { u32 v = 0x6f6bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3c5: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x48a3cau); f_00624520();
    /* 0048a3ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a3cd: push 0x6873d0 */ { u32 v = 0x6873d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3d2: push 0x6f6bb0 */ { u32 v = 0x6f6bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3d7: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x48a3dcu); f_006243c0();
    /* 0048a3dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a3df: mov dword ptr [ebp - 0x710], eax */ W32((u32)(r_ebp+0xfffff8f0u), r_eax);
    /* 0048a3e5: cmp dword ptr [ebp - 0x710], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff8f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a3ec: je 0x48a3ff */ if (fZ) goto L_0048a3ff;
L_0048a3ee:; BB(0x0048a3ee);
    /* 0048a3ee: mov eax, dword ptr [ebp - 0x710] */ r_eax = R32((u32)(r_ebp+0xfffff8f0u));
    /* 0048a3f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3f5: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x48a3fau); f_006241d0();
    /* 0048a3fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a3fd: jmp 0x48a413 */ goto L_0048a413;
L_0048a3ff:; BB(0x0048a3ff);
    /* 0048a3ff: mov ecx, dword ptr [0x687138] */ r_ecx = R32((u32)(0x687138u));
    /* 0048a405: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a406: push 0x6f6bb0 */ { u32 v = 0x6f6bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a40b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48a410u); f_00624510();
    /* 0048a410: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a413:; BB(0x0048a413);
    /* 0048a413: mov dword ptr [ebp - 0x2cc], 0x94 */ W32((u32)(r_ebp+0xfffffd34u), 0x94u);
    /* 0048a41d: lea edx, [ebp - 0x2cc] */ r_edx = (u32)(r_ebp+0xfffffd34u);
    /* 0048a423: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a424: call dword ptr [0x633034] */ { u32 t = R32((u32)(0x633034u)); r_esp -= 4; W32(r_esp, 0x48a42au); call_ind(t); }
    /* 0048a42a: cmp dword ptr [ebp - 0x2bc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a431: jne 0x48a43f */ if (!fZ) goto L_0048a43f;
L_0048a433:; BB(0x0048a433);
    /* 0048a433: mov dword ptr [0x6f6f04], 1 */ W32((u32)(0x6f6f04u), 0x1u);
    /* 0048a43d: jmp 0x48a449 */ goto L_0048a449;
L_0048a43f:; BB(0x0048a43f);
    /* 0048a43f: mov dword ptr [0x6f6f04], 0 */ W32((u32)(0x6f6f04u), 0x0u);
L_0048a449:; BB(0x0048a449);
    /* 0048a449: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a44b: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0048a44e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a44f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a451: call dword ptr [0x6332b0] */ { u32 t = R32((u32)(0x6332b0u)); r_esp -= 4; W32(r_esp, 0x48a457u); call_ind(t); }
    /* 0048a457: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048a45a: and ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0048a45d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a45f: je 0x48a46a */ if (fZ) goto L_0048a46a;
L_0048a461:; BB(0x0048a461);
    /* 0048a461: mov byte ptr [0x6f6ef8], 0x10 */ W8((u32)(0x6f6ef8u), 0x10u);
    /* 0048a468: jmp 0x48a484 */ goto L_0048a484;
L_0048a46a:; BB(0x0048a46a);
    /* 0048a46a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048a46d: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048a470: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a472: je 0x48a47d */ if (fZ) goto L_0048a47d;
L_0048a474:; BB(0x0048a474);
    /* 0048a474: mov byte ptr [0x6f6ef8], 8 */ W8((u32)(0x6f6ef8u), 0x8u);
    /* 0048a47b: jmp 0x48a484 */ goto L_0048a484;
L_0048a47d:; BB(0x0048a47d);
    /* 0048a47d: mov byte ptr [0x6f6ef8], 0 */ W8((u32)(0x6f6ef8u), 0x0u);
L_0048a484:; BB(0x0048a484);
    /* 0048a484: call dword ptr [0x63328c] */ { u32 t = R32((u32)(0x63328cu)); r_esp -= 4; W32(r_esp, 0x48a48au); call_ind(t); }
    /* 0048a48a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a48c: jne 0x48a490 */ if (!fZ) goto L_0048a490;
L_0048a48e:; BB(0x0048a48e);
    /* 0048a48e: jmp 0x48a4b9 */ goto L_0048a4b9;
L_0048a490:; BB(0x0048a490);
    /* 0048a490: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048a493: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048a496: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a498: je 0x48a4b9 */ if (fZ) goto L_0048a4b9;
L_0048a49a:; BB(0x0048a49a);
    /* 0048a49a: push 0x6873d4 */ { u32 v = 0x6873d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a49f: lea ecx, [ebp - 0x3d0] */ r_ecx = (u32)(r_ebp+0xfffffc30u);
    /* 0048a4a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4a6: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x48a4acu); call_ind(t); }
    /* 0048a4ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a4af: mov dword ptr [ebp - 0x2d0], 2 */ W32((u32)(r_ebp+0xfffffd30u), 0x2u);
L_0048a4b9:; BB(0x0048a4b9);
    /* 0048a4b9: call dword ptr [0x633180] */ { u32 t = R32((u32)(0x633180u)); r_esp -= 4; W32(r_esp, 0x48a4bfu); call_ind(t); }
    /* 0048a4bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4c0: call dword ptr [0x633184] */ { u32 t = R32((u32)(0x633184u)); r_esp -= 4; W32(r_esp, 0x48a4c6u); call_ind(t); }
    /* 0048a4c6: mov dword ptr [ebp - 0x4d8], eax */ W32((u32)(r_ebp+0xfffffb28u), r_eax);
    /* 0048a4cc: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4ce: mov edx, dword ptr [ebp - 0x4d8] */ r_edx = R32((u32)(r_ebp+0xfffffb28u));
    /* 0048a4d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4d5: call dword ptr [0x633004] */ { u32 t = R32((u32)(0x633004u)); r_esp -= 4; W32(r_esp, 0x48a4dbu); call_ind(t); }
    /* 0048a4db: mov byte ptr [0x6f6efc], al */ W8((u32)(0x6f6efcu), (u8)r_eax);
    /* 0048a4e0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4e2: mov eax, dword ptr [ebp - 0x4d8] */ r_eax = R32((u32)(r_ebp+0xfffffb28u));
    /* 0048a4e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4e9: call dword ptr [0x633004] */ { u32 t = R32((u32)(0x633004u)); r_esp -= 4; W32(r_esp, 0x48a4efu); call_ind(t); }
    /* 0048a4ef: cmp eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a4f4: jl 0x48a50c */ if ((fS!=fO)) goto L_0048a50c;
L_0048a4f6:; BB(0x0048a4f6);
    /* 0048a4f6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4f8: mov ecx, dword ptr [ebp - 0x4d8] */ r_ecx = R32((u32)(r_ebp+0xfffffb28u));
    /* 0048a4fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4ff: call dword ptr [0x633004] */ { u32 t = R32((u32)(0x633004u)); r_esp -= 4; W32(r_esp, 0x48a505u); call_ind(t); }
    /* 0048a505: cmp eax, 0x1e0 */ {  u32 a = r_eax; u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a50a: jge 0x48a532 */ if ((fS==fO)) goto L_0048a532;
L_0048a50c:; BB(0x0048a50c);
    /* 0048a50c: mov edx, dword ptr [0x68712c] */ r_edx = R32((u32)(0x68712cu));
    /* 0048a512: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a513: push 0x687424 */ { u32 v = 0x687424u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a518: lea eax, [ebp - 0x3d0] */ r_eax = (u32)(r_ebp+0xfffffc30u);
    /* 0048a51e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a51f: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x48a525u); call_ind(t); }
    /* 0048a525: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a528: mov dword ptr [ebp - 0x2d0], 2 */ W32((u32)(r_ebp+0xfffffd30u), 0x2u);
L_0048a532:; BB(0x0048a532);
    /* 0048a532: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a534: mov ecx, dword ptr [ebp - 0x4d8] */ r_ecx = R32((u32)(r_ebp+0xfffffb28u));
    /* 0048a53a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a53b: call dword ptr [0x633004] */ { u32 t = R32((u32)(0x633004u)); r_esp -= 4; W32(r_esp, 0x48a541u); call_ind(t); }
    /* 0048a541: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a544: je 0x48a575 */ if (fZ) goto L_0048a575;
L_0048a546:; BB(0x0048a546);
    /* 0048a546: cmp dword ptr [0x6f6f04], 0 */ {  u32 a = R32((u32)(0x6f6f04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a54d: je 0x48a575 */ if (fZ) goto L_0048a575;
L_0048a54f:; BB(0x0048a54f);
    /* 0048a54f: mov edx, dword ptr [0x68712c] */ r_edx = R32((u32)(0x68712cu));
    /* 0048a555: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a556: push 0x68745c */ { u32 v = 0x68745cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a55b: lea eax, [ebp - 0x3d0] */ r_eax = (u32)(r_ebp+0xfffffc30u);
    /* 0048a561: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a562: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x48a568u); call_ind(t); }
    /* 0048a568: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a56b: mov dword ptr [ebp - 0x2d0], 3 */ W32((u32)(r_ebp+0xfffffd30u), 0x3u);
L_0048a575:; BB(0x0048a575);
    /* 0048a575: mov ecx, dword ptr [ebp - 0x4d8] */ r_ecx = R32((u32)(r_ebp+0xfffffb28u));
    /* 0048a57b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a57c: call dword ptr [0x633180] */ { u32 t = R32((u32)(0x633180u)); r_esp -= 4; W32(r_esp, 0x48a582u); call_ind(t); }
    /* 0048a582: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a583: call dword ptr [0x633188] */ { u32 t = R32((u32)(0x633188u)); r_esp -= 4; W32(r_esp, 0x48a589u); call_ind(t); }
    /* 0048a589: mov dword ptr [ebp - 0x600], 0x20 */ W32((u32)(r_ebp+0xfffffa00u), 0x20u);
    /* 0048a593: lea edx, [ebp - 0x600] */ r_edx = (u32)(r_ebp+0xfffffa00u);
    /* 0048a599: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a59a: call dword ptr [0x633050] */ { u32 t = R32((u32)(0x633050u)); r_esp -= 4; W32(r_esp, 0x48a5a0u); call_ind(t); }
    /* 0048a5a0: mov eax, dword ptr [ebp - 0x5f8] */ r_eax = R32((u32)(r_ebp+0xfffffa08u));
    /* 0048a5a6: mov dword ptr [0x6f6f1c], eax */ W32((u32)(0x6f6f1cu), r_eax);
    /* 0048a5ab: mov ecx, dword ptr [0x6f6f1c] */ r_ecx = R32((u32)(0x6f6f1cu));
    /* 0048a5b1: sub ecx, 0x400000 */ {  u32 a = r_ecx; u32 b = 0x400000u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048a5b7: mov dword ptr [0x687118], ecx */ W32((u32)(0x687118u), r_ecx);
    /* 0048a5bd: cmp dword ptr [0x687118], 0x800000 */ {  u32 a = R32((u32)(0x687118u)); u32 b = 0x800000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a5c7: jge 0x48a5d3 */ if ((fS==fO)) goto L_0048a5d3;
L_0048a5c9:; BB(0x0048a5c9);
    /* 0048a5c9: mov dword ptr [0x687118], 0x800000 */ W32((u32)(0x687118u), 0x800000u);
L_0048a5d3:; BB(0x0048a5d3);
    /* 0048a5d3: cmp dword ptr [0x6f6f1c], 0xf00000 */ {  u32 a = R32((u32)(0x6f6f1cu)); u32 b = 0xf00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0048a5dd: jae 0x48a5eb */ if (!fC) goto L_0048a5eb;
L_0048a5df:; BB(0x0048a5df);
    /* 0048a5df: mov dword ptr [0x6f6f18], 1 */ W32((u32)(0x6f6f18u), 0x1u);
    /* 0048a5e9: jmp 0x48a5f5 */ goto L_0048a5f5;
L_0048a5eb:; BB(0x0048a5eb);
    /* 0048a5eb: mov dword ptr [0x6f6f18], 0 */ W32((u32)(0x6f6f18u), 0x0u);
L_0048a5f5:; BB(0x0048a5f5);
    /* 0048a5f5: push 0x6f6cb8 */ { u32 v = 0x6f6cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a5fa: lea edx, [ebp - 0x4d4] */ r_edx = (u32)(r_ebp+0xfffffb2cu);
    /* 0048a600: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a601: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48a606u); f_00624510();
    /* 0048a606: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a609: push 0x687120 */ { u32 v = 0x687120u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a60e: lea eax, [ebp - 0x4d4] */ r_eax = (u32)(r_ebp+0xfffffb2cu);
    /* 0048a614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a615: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x48a61au); f_00624520();
    /* 0048a61a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a61d: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a622: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48a627u); f_0048ab58();
    /* 0048a627: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a62a: mov dword ptr [ebp - 0x718], eax */ W32((u32)(r_ebp+0xfffff8e8u), r_eax);
    /* 0048a630: cmp dword ptr [ebp - 0x718], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff8e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a637: je 0x48a658 */ if (fZ) goto L_0048a658;
L_0048a639:; BB(0x0048a639);
    /* 0048a639: push 0x687490 */ { u32 v = 0x687490u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a63e: lea ecx, [ebp - 0x4d4] */ r_ecx = (u32)(r_ebp+0xfffffb2cu);
    /* 0048a644: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a645: mov ecx, dword ptr [ebp - 0x718] */ r_ecx = R32((u32)(r_ebp+0xfffff8e8u));
    /* 0048a64b: call 0x4739e0 */ r_esp -= 4; W32(r_esp, 0x48a650u); f_004739e0();
    /* 0048a650: mov dword ptr [ebp - 0x724], eax */ W32((u32)(r_ebp+0xfffff8dcu), r_eax);
    /* 0048a656: jmp 0x48a662 */ goto L_0048a662;
L_0048a658:; BB(0x0048a658);
    /* 0048a658: mov dword ptr [ebp - 0x724], 0 */ W32((u32)(r_ebp+0xfffff8dcu), 0x0u);
L_0048a662:; BB(0x0048a662);
    /* 0048a662: mov edx, dword ptr [ebp - 0x724] */ r_edx = R32((u32)(r_ebp+0xfffff8dcu));
    /* 0048a668: mov dword ptr [ebp - 0x4dc], edx */ W32((u32)(r_ebp+0xfffffb24u), r_edx);
    /* 0048a66e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a670: push 0x68749c */ { u32 v = 0x68749cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a675: mov ecx, dword ptr [ebp - 0x4dc] */ r_ecx = R32((u32)(r_ebp+0xfffffb24u));
    /* 0048a67b: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x48a680u); f_0061ba62();
    /* 0048a680: mov byte ptr [0x6f6f00], al */ W8((u32)(0x6f6f00u), (u8)r_eax);
    /* 0048a685: push 0x6874a4 */ { u32 v = 0x6874a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a68a: lea eax, [ebp - 0x238] */ r_eax = (u32)(r_ebp+0xfffffdc8u);
    /* 0048a690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a691: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48a696u); f_00624510();
    /* 0048a696: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a699: push 0x6874a8 */ { u32 v = 0x6874a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a69e: lea ecx, [ebp - 0x5e0] */ r_ecx = (u32)(r_ebp+0xfffffa20u);
    /* 0048a6a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a6a5: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48a6aau); f_00624510();
    /* 0048a6aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a6ad: mov edx, dword ptr [0x687134] */ r_edx = R32((u32)(0x687134u));
    /* 0048a6b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a6b4: lea eax, [ebp - 0x238] */ r_eax = (u32)(r_ebp+0xfffffdc8u);
    /* 0048a6ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a6bb: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x48a6c0u); f_00624520();
    /* 0048a6c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a6c3: mov dword ptr [ebp - 0x608], 0 */ W32((u32)(r_ebp+0xfffff9f8u), 0x0u);
    /* 0048a6cd: movsx ecx, byte ptr [0x6f6f00] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x6f6f00u));
    /* 0048a6d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a6d6: je 0x48a727 */ if (fZ) goto L_0048a727;
L_0048a6d8:; BB(0x0048a6d8);
    /* 0048a6d8: mov dl, byte ptr [0x6f6f00] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x6f6f00u))) & 0xffu);
    /* 0048a6de: mov byte ptr [ebp - 0x238], dl */ W8((u32)(r_ebp+0xfffffdc8u), (u8)r_edx);
    /* 0048a6e4: mov al, byte ptr [0x6f6f00] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6f6f00u))) & 0xffu);
    /* 0048a6e9: mov byte ptr [ebp - 0x5e0], al */ W8((u32)(r_ebp+0xfffffa20u), (u8)r_eax);
    /* 0048a6ef: lea ecx, [ebp - 0x5e0] */ r_ecx = (u32)(r_ebp+0xfffffa20u);
    /* 0048a6f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a6f6: call dword ptr [0x633080] */ { u32 t = R32((u32)(0x633080u)); r_esp -= 4; W32(r_esp, 0x48a6fcu); call_ind(t); }
    /* 0048a6fc: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a6ff: jne 0x48a71d */ if (!fZ) goto L_0048a71d;
L_0048a701:; BB(0x0048a701);
    /* 0048a701: push 0x6874ac */ { u32 v = 0x6874acu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a706: lea edx, [ebp - 0x238] */ r_edx = (u32)(r_ebp+0xfffffdc8u);
    /* 0048a70c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a70d: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x48a712u); f_006243c0();
    /* 0048a712: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a715: mov dword ptr [ebp - 0x608], eax */ W32((u32)(r_ebp+0xfffff9f8u), r_eax);
    /* 0048a71b: jmp 0x48a727 */ goto L_0048a727;
L_0048a71d:; BB(0x0048a71d);
    /* 0048a71d: mov dword ptr [ebp - 0x608], 0 */ W32((u32)(r_ebp+0xfffff9f8u), 0x0u);
L_0048a727:; BB(0x0048a727);
    /* 0048a727: cmp dword ptr [ebp - 0x608], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a72e: jne 0x48a776 */ if (!fZ) goto L_0048a776;
L_0048a730:; BB(0x0048a730);
    /* 0048a730: mov byte ptr [ebp - 0x238], 0x63 */ W8((u32)(r_ebp+0xfffffdc8u), 0x63u);
    /* 0048a737: mov byte ptr [ebp - 0x5e0], 0x63 */ W8((u32)(r_ebp+0xfffffa20u), 0x63u);
    /* 0048a73e: lea eax, [ebp - 0x5e0] */ r_eax = (u32)(r_ebp+0xfffffa20u);
    /* 0048a744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a745: call dword ptr [0x633080] */ { u32 t = R32((u32)(0x633080u)); r_esp -= 4; W32(r_esp, 0x48a74bu); call_ind(t); }
    /* 0048a74b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a74e: jne 0x48a76c */ if (!fZ) goto L_0048a76c;
L_0048a750:; BB(0x0048a750);
    /* 0048a750: push 0x6874b0 */ { u32 v = 0x6874b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a755: lea ecx, [ebp - 0x238] */ r_ecx = (u32)(r_ebp+0xfffffdc8u);
    /* 0048a75b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a75c: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x48a761u); f_006243c0();
    /* 0048a761: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a764: mov dword ptr [ebp - 0x608], eax */ W32((u32)(r_ebp+0xfffff9f8u), r_eax);
    /* 0048a76a: jmp 0x48a776 */ goto L_0048a776;
L_0048a76c:; BB(0x0048a76c);
    /* 0048a76c: mov dword ptr [ebp - 0x608], 0 */ W32((u32)(r_ebp+0xfffff9f8u), 0x0u);
L_0048a776:; BB(0x0048a776);
    /* 0048a776: cmp dword ptr [ebp - 0x608], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a77d: jne 0x48a7e2 */ if (!fZ) goto L_0048a7e2;
L_0048a77f:; BB(0x0048a77f);
    /* 0048a77f: movsx edx, byte ptr [ebp - 0x238] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc8u));
    /* 0048a786: cmp edx, 0x7a */ {  u32 a = r_edx; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a789: je 0x48a7e2 */ if (fZ) goto L_0048a7e2;
L_0048a78b:; BB(0x0048a78b);
    /* 0048a78b: mov al, byte ptr [ebp - 0x238] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffdc8u))) & 0xffu);
    /* 0048a791: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0048a793: mov byte ptr [ebp - 0x238], al */ W8((u32)(r_ebp+0xfffffdc8u), (u8)r_eax);
    /* 0048a799: mov cl, byte ptr [ebp - 0x5e0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffa20u))) & 0xffu);
    /* 0048a79f: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0048a7a2: mov byte ptr [ebp - 0x5e0], cl */ W8((u32)(r_ebp+0xfffffa20u), (u8)r_ecx);
    /* 0048a7a8: lea edx, [ebp - 0x5e0] */ r_edx = (u32)(r_ebp+0xfffffa20u);
    /* 0048a7ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a7af: call dword ptr [0x633080] */ { u32 t = R32((u32)(0x633080u)); r_esp -= 4; W32(r_esp, 0x48a7b5u); call_ind(t); }
    /* 0048a7b5: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a7b8: jne 0x48a7d6 */ if (!fZ) goto L_0048a7d6;
L_0048a7ba:; BB(0x0048a7ba);
    /* 0048a7ba: push 0x6874b4 */ { u32 v = 0x6874b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a7bf: lea eax, [ebp - 0x238] */ r_eax = (u32)(r_ebp+0xfffffdc8u);
    /* 0048a7c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a7c6: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x48a7cbu); f_006243c0();
    /* 0048a7cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a7ce: mov dword ptr [ebp - 0x608], eax */ W32((u32)(r_ebp+0xfffff9f8u), r_eax);
    /* 0048a7d4: jmp 0x48a7e0 */ goto L_0048a7e0;
L_0048a7d6:; BB(0x0048a7d6);
    /* 0048a7d6: mov dword ptr [ebp - 0x608], 0 */ W32((u32)(r_ebp+0xfffff9f8u), 0x0u);
L_0048a7e0:; BB(0x0048a7e0);
    /* 0048a7e0: jmp 0x48a776 */ goto L_0048a776;
L_0048a7e2:; BB(0x0048a7e2);
    /* 0048a7e2: cmp dword ptr [ebp - 0x608], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a7e9: je 0x48a80b */ if (fZ) goto L_0048a80b;
L_0048a7eb:; BB(0x0048a7eb);
    /* 0048a7eb: mov ecx, dword ptr [ebp - 0x608] */ r_ecx = R32((u32)(r_ebp+0xfffff9f8u));
    /* 0048a7f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a7f2: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x48a7f7u); f_006241d0();
    /* 0048a7f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a7fa: mov dl, byte ptr [ebp - 0x238] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffdc8u))) & 0xffu);
    /* 0048a800: mov byte ptr [0x6f6f00], dl */ W8((u32)(0x6f6f00u), (u8)r_edx);
    /* 0048a806: jmp 0x48a8a6 */ goto L_0048a8a6;
L_0048a80b:; BB(0x0048a80b);
    /* 0048a80b: mov byte ptr [0x6f6f00], 0 */ W8((u32)(0x6f6f00u), 0x0u);
    /* 0048a812: push 0x6f6cb8 */ { u32 v = 0x6f6cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a817: lea eax, [ebp - 0x238] */ r_eax = (u32)(r_ebp+0xfffffdc8u);
    /* 0048a81d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a81e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48a823u); f_00624510();
    /* 0048a823: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a826: mov ecx, dword ptr [0x687134] */ r_ecx = R32((u32)(0x687134u));
    /* 0048a82c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a82d: lea edx, [ebp - 0x238] */ r_edx = (u32)(r_ebp+0xfffffdc8u);
    /* 0048a833: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a834: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x48a839u); f_00624520();
    /* 0048a839: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a83c: push 0x6874b8 */ { u32 v = 0x6874b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a841: lea eax, [ebp - 0x238] */ r_eax = (u32)(r_ebp+0xfffffdc8u);
    /* 0048a847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a848: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x48a84du); f_006243c0();
    /* 0048a84d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a850: mov dword ptr [ebp - 0x608], eax */ W32((u32)(r_ebp+0xfffff9f8u), r_eax);
    /* 0048a856: cmp dword ptr [ebp - 0x608], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a85d: je 0x48a87a */ if (fZ) goto L_0048a87a;
L_0048a85f:; BB(0x0048a85f);
    /* 0048a85f: mov ecx, dword ptr [ebp - 0x608] */ r_ecx = R32((u32)(r_ebp+0xfffff9f8u));
    /* 0048a865: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a866: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x48a86bu); f_006241d0();
    /* 0048a86b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a86e: mov dword ptr [0x6f6f08], 1 */ W32((u32)(0x6f6f08u), 0x0u);
    /* 0048a878: jmp 0x48a8a6 */ goto L_0048a8a6;
L_0048a87a:; BB(0x0048a87a);
    /* 0048a87a: mov dword ptr [ebp - 0x2d0], 3 */ W32((u32)(r_ebp+0xfffffd30u), 0x3u);
    /* 0048a884: mov edx, dword ptr [0x68712c] */ r_edx = R32((u32)(0x68712cu));
    /* 0048a88a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a88b: mov eax, dword ptr [0x68712c] */ r_eax = R32((u32)(0x68712cu));
    /* 0048a890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a891: push 0x6874bc */ { u32 v = 0x6874bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a896: lea ecx, [ebp - 0x3d0] */ r_ecx = (u32)(r_ebp+0xfffffc30u);
    /* 0048a89c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a89d: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x48a8a3u); call_ind(t); }
    /* 0048a8a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048a8a6:; BB(0x0048a8a6);
    /* 0048a8a6: mov edx, dword ptr [ebp - 0x4dc] */ r_edx = R32((u32)(r_ebp+0xfffffb24u));
    /* 0048a8ac: mov dword ptr [ebp - 0x720], edx */ W32((u32)(r_ebp+0xfffff8e0u), r_edx);
    /* 0048a8b2: mov eax, dword ptr [ebp - 0x720] */ r_eax = R32((u32)(r_ebp+0xfffff8e0u));
    /* 0048a8b8: mov dword ptr [ebp - 0x71c], eax */ W32((u32)(r_ebp+0xfffff8e4u), r_eax);
    /* 0048a8be: cmp dword ptr [ebp - 0x71c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff8e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a8c5: je 0x48a8e1 */ if (fZ) goto L_0048a8e1;
L_0048a8c7:; BB(0x0048a8c7);
    /* 0048a8c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a8c9: mov ecx, dword ptr [ebp - 0x71c] */ r_ecx = R32((u32)(r_ebp+0xfffff8e4u));
    /* 0048a8cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048a8d1: mov ecx, dword ptr [ebp - 0x71c] */ r_ecx = R32((u32)(r_ebp+0xfffff8e4u));
    /* 0048a8d7: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48a8d9u); call_ind(t); }
    /* 0048a8d9: mov dword ptr [ebp - 0x728], eax */ W32((u32)(r_ebp+0xfffff8d8u), r_eax);
    /* 0048a8df: jmp 0x48a8eb */ goto L_0048a8eb;
L_0048a8e1:; BB(0x0048a8e1);
    /* 0048a8e1: mov dword ptr [ebp - 0x728], 0 */ W32((u32)(r_ebp+0xfffff8d8u), 0x0u);
L_0048a8eb:; BB(0x0048a8eb);
    /* 0048a8eb: mov eax, dword ptr [ebp - 0x2d0] */ r_eax = R32((u32)(r_ebp+0xfffffd30u));
    /* 0048a8f1: mov dword ptr [ebp - 0x72c], eax */ W32((u32)(r_ebp+0xfffff8d4u), r_eax);
    /* 0048a8f7: cmp dword ptr [ebp - 0x72c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffff8d4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048a8fe: ja 0x48a9ff */ if ((!fC&&!fZ)) goto L_0048a9ff;
L_0048a904:; BB(0x0048a904);
    /* 0048a904: mov ecx, dword ptr [ebp - 0x72c] */ r_ecx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0048a90a: jmp dword ptr [ecx*4 + 0x48aa08] */ { u32 t = R32((u32)(r_ecx*4+0x48aa08u)); switch (t) { case 0x48a911u: goto L_0048a911; case 0x48a916u: goto L_0048a916; case 0x48a952u: goto L_0048a952; case 0x48a9dau: goto L_0048a9da; default: UNSUP(0x0048a90a, "jump table entry is not a known target"); } }
L_0048a911:; BB(0x0048a911);
    /* 0048a911: jmp 0x48a9ff */ goto L_0048a9ff;
L_0048a916:; BB(0x0048a916);
    /* 0048a916: mov edx, dword ptr [0x68712c] */ r_edx = R32((u32)(0x68712cu));
    /* 0048a91c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a91d: push 0x6874fc */ { u32 v = 0x6874fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a922: lea eax, [ebp - 0x134] */ r_eax = (u32)(r_ebp+0xfffffeccu);
    /* 0048a928: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a929: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x48a92fu); call_ind(t); }
    /* 0048a92f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a932: push 0x2040 */ { u32 v = 0x2040u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a937: lea ecx, [ebp - 0x134] */ r_ecx = (u32)(r_ebp+0xfffffeccu);
    /* 0048a93d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a93e: lea edx, [ebp - 0x3d0] */ r_edx = (u32)(r_ebp+0xfffffc30u);
    /* 0048a944: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a945: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a947: call dword ptr [0x6331f8] */ { u32 t = R32((u32)(0x6331f8u)); r_esp -= 4; W32(r_esp, 0x48a94du); call_ind(t); }
    /* 0048a94d: jmp 0x48a9ff */ goto L_0048a9ff;
L_0048a952:; BB(0x0048a952);
    /* 0048a952: push 0x68750c */ { u32 v = 0x68750cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a957: mov eax, dword ptr [0x68712c] */ r_eax = R32((u32)(0x68712cu));
    /* 0048a95c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a95d: push 0x687514 */ { u32 v = 0x687514u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a962: lea ecx, [ebp - 0x134] */ r_ecx = (u32)(r_ebp+0xfffffeccu);
    /* 0048a968: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a969: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x48a96fu); call_ind(t); }
    /* 0048a96f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a972: push 0x687524 */ { u32 v = 0x687524u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a977: lea edx, [ebp - 0x3d0] */ r_edx = (u32)(r_ebp+0xfffffc30u);
    /* 0048a97d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a97e: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x48a983u); f_00624520();
    /* 0048a983: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a986: mov eax, dword ptr [0x68712c] */ r_eax = R32((u32)(0x68712cu));
    /* 0048a98b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a98c: lea ecx, [ebp - 0x3d0] */ r_ecx = (u32)(r_ebp+0xfffffc30u);
    /* 0048a992: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a993: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x48a998u); f_00624520();
    /* 0048a998: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a99b: push 0x687554 */ { u32 v = 0x687554u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a9a0: lea edx, [ebp - 0x3d0] */ r_edx = (u32)(r_ebp+0xfffffc30u);
    /* 0048a9a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a9a7: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x48a9acu); f_00624520();
    /* 0048a9ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a9af: push 0x2024 */ { u32 v = 0x2024u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a9b4: lea eax, [ebp - 0x134] */ r_eax = (u32)(r_ebp+0xfffffeccu);
    /* 0048a9ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a9bb: lea ecx, [ebp - 0x3d0] */ r_ecx = (u32)(r_ebp+0xfffffc30u);
    /* 0048a9c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a9c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a9c4: call dword ptr [0x6331f8] */ { u32 t = R32((u32)(0x6331f8u)); r_esp -= 4; W32(r_esp, 0x48a9cau); call_ind(t); }
    /* 0048a9ca: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a9cd: jne 0x48a9d6 */ if (!fZ) goto L_0048a9d6;
L_0048a9cf:; BB(0x0048a9cf);
    /* 0048a9cf: mov eax, 1 */ r_eax = 0x1u;
    /* 0048a9d4: jmp 0x48aa04 */ goto L_0048aa04;
L_0048a9d6:; BB(0x0048a9d6);
    /* 0048a9d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048a9d8: jmp 0x48aa04 */ goto L_0048aa04;
L_0048a9da:; BB(0x0048a9da);
    /* 0048a9da: push 0x2010 */ { u32 v = 0x2010u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a9df: mov edx, dword ptr [0x68712c] */ r_edx = R32((u32)(0x68712cu));
    /* 0048a9e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a9e6: lea eax, [ebp - 0x3d0] */ r_eax = (u32)(r_ebp+0xfffffc30u);
    /* 0048a9ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a9ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a9ef: call dword ptr [0x6331f8] */ { u32 t = R32((u32)(0x6331f8u)); r_esp -= 4; W32(r_esp, 0x48a9f5u); call_ind(t); }
    /* 0048a9f5: mov dword ptr [ebp - 0x714], eax */ W32((u32)(r_ebp+0xfffff8ecu), r_eax);
    /* 0048a9fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048a9fd: jmp 0x48aa04 */ goto L_0048aa04;
L_0048a9ff:; BB(0x0048a9ff);
    /* 0048a9ff: mov eax, 1 */ r_eax = 0x1u;
L_0048aa04:; BB(0x0048aa04);
    /* 0048aa04: mov esp, ebp */ r_esp = r_ebp;
    /* 0048aa06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048aa07: ret  */ FN_RET(0x0048a2f0); r_esp += 4; return;
}

void f_0048aa18(void) /* FUN_0048aa18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048aa18);
    /* 0048aa18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa19: mov ebp, esp */ r_ebp = r_esp;
    /* 0048aa1b: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048aa1e: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048aa22: je 0x48aa58 */ if (fZ) goto L_0048aa58;
L_0048aa24:; BB(0x0048aa24);
    /* 0048aa24: mov eax, dword ptr [0x68712c] */ r_eax = R32((u32)(0x68712cu));
    /* 0048aa29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa2a: push 0x687580 */ { u32 v = 0x687580u; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa2f: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 0048aa32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa33: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x48aa39u); call_ind(t); }
    /* 0048aa39: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048aa3c: push 0x2010 */ { u32 v = 0x2010u; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa41: mov edx, dword ptr [0x68712c] */ r_edx = R32((u32)(0x68712cu));
    /* 0048aa47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa48: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0048aa4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa4e: call dword ptr [0x6331f8] */ { u32 t = R32((u32)(0x6331f8u)); r_esp -= 4; W32(r_esp, 0x48aa54u); call_ind(t); }
    /* 0048aa54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048aa56: jmp 0x48aac4 */ goto L_0048aac4;
L_0048aa58:; BB(0x0048aa58);
    /* 0048aa58: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048aa5b: mov dword ptr [0x6f6ef4], ecx */ W32((u32)(0x6f6ef4u), r_ecx);
    /* 0048aa61: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0048aa64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa65: push 0x6f6f38 */ { u32 v = 0x6f6f38u; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa6a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48aa6fu); f_00624510();
    /* 0048aa6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048aa72: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa74: push 0x687598 */ { u32 v = 0x687598u; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa79: push 0x6f6f38 */ { u32 v = 0x6f6f38u; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa7e: call 0x6257c0 */ r_esp -= 4; W32(r_esp, 0x48aa83u); f_006257c0();
    /* 0048aa83: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048aa86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048aa88: jne 0x48aa96 */ if (!fZ) goto L_0048aa96;
L_0048aa8a:; BB(0x0048aa8a);
    /* 0048aa8a: mov dword ptr [0x6870a4], 0 */ W32((u32)(0x6870a4u), 0x0u);
    /* 0048aa94: jmp 0x48aaa0 */ goto L_0048aaa0;
L_0048aa96:; BB(0x0048aa96);
    /* 0048aa96: mov dword ptr [0x6870a4], 0 */ W32((u32)(0x6870a4u), 0x0u);
L_0048aaa0:; BB(0x0048aaa0);
    /* 0048aaa0: push 0x6875a4 */ { u32 v = 0x6875a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048aaa5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0048aaa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048aaa9: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x48aaaeu); f_00624720();
    /* 0048aaae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048aab1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048aab3: je 0x48aabf */ if (fZ) goto L_0048aabf;
L_0048aab5:; BB(0x0048aab5);
    /* 0048aab5: mov dword ptr [0x6f6f10], 0x2328 */ W32((u32)(0x6f6f10u), 0x2328u);
L_0048aabf:; BB(0x0048aabf);
    /* 0048aabf: call 0x48aaca */ r_esp -= 4; W32(r_esp, 0x48aac4u); f_0048aaca();
L_0048aac4:; BB(0x0048aac4);
    /* 0048aac4: mov esp, ebp */ r_esp = r_ebp;
    /* 0048aac6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048aac7: ret 0x10 */ FN_RET(0x0048aa18); r_esp += 20; return;
}

void f_0048aaca(void) /* FUN_0048aaca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048aaca);
    /* 0048aaca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048aacb: mov ebp, esp */ r_ebp = r_esp;
    /* 0048aacd: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048aad0: call 0x48a2f0 */ r_esp -= 4; W32(r_esp, 0x48aad5u); f_0048a2f0();
    /* 0048aad5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048aad7: jne 0x48aadd */ if (!fZ) goto L_0048aadd;
L_0048aad9:; BB(0x0048aad9);
    /* 0048aad9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048aadb: jmp 0x48ab54 */ goto L_0048ab54;
L_0048aadd:; BB(0x0048aadd);
    /* 0048aadd: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0048aadf: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48aae4u); f_0048ab58();
    /* 0048aae4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048aae7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048aaea: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048aaee: je 0x48aafd */ if (fZ) goto L_0048aafd;
L_0048aaf0:; BB(0x0048aaf0);
    /* 0048aaf0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048aaf3: call 0x402984 */ r_esp -= 4; W32(r_esp, 0x48aaf8u); f_00402984();
    /* 0048aaf8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048aafb: jmp 0x48ab04 */ goto L_0048ab04;
L_0048aafd:; BB(0x0048aafd);
    /* 0048aafd: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0048ab04:; BB(0x0048ab04);
    /* 0048ab04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048ab07: mov dword ptr [0x6f6ee8], eax */ W32((u32)(0x6f6ee8u), r_eax);
    /* 0048ab0c: call 0x459575 */ r_esp -= 4; W32(r_esp, 0x48ab11u); f_00459575();
    /* 0048ab11: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0048ab17: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048ab19: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0048ab1f: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48ab22u); call_ind(t); }
    /* 0048ab22: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048ab25: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0048ab2a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048ab2d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ab30: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048ab33: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ab37: je 0x48ab4a */ if (fZ) goto L_0048ab4a;
L_0048ab39:; BB(0x0048ab39);
    /* 0048ab39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ab3b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ab3e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048ab40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ab43: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48ab45u); call_ind(t); }
    /* 0048ab45: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048ab48: jmp 0x48ab51 */ goto L_0048ab51;
L_0048ab4a:; BB(0x0048ab4a);
    /* 0048ab4a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0048ab51:; BB(0x0048ab51);
    /* 0048ab51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0048ab54:; BB(0x0048ab54);
    /* 0048ab54: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ab56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ab57: ret  */ FN_RET(0x0048aaca); r_esp += 4; return;
}

void f_0048ab58(void) /* FUN_0048ab58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ab58);
    /* 0048ab58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ab59: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ab5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ab5c: cmp dword ptr [0x6f6ee8], 0 */ {  u32 a = R32((u32)(0x6f6ee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ab63: je 0x48ab72 */ if (fZ) goto L_0048ab72;
L_0048ab65:; BB(0x0048ab65);
    /* 0048ab65: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ab67: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0048ab6d: call 0x6102d3 */ r_esp -= 4; W32(r_esp, 0x48ab72u); f_006102d3();
L_0048ab72:; BB(0x0048ab72);
    /* 0048ab72: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048ab75: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ab78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ab79: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x48ab7eu); f_00626230();
    /* 0048ab7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ab81: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048ab84: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ab88: jne 0x48abd3 */ if (!fZ) goto L_0048abd3;
L_0048ab8a:; BB(0x0048ab8a);
    /* 0048ab8a: cmp dword ptr [0x6f6ee8], 0 */ {  u32 a = R32((u32)(0x6f6ee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ab91: je 0x48abd3 */ if (fZ) goto L_0048abd3;
L_0048ab93:; BB(0x0048ab93);
    /* 0048ab93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ab95: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0048ab9b: call 0x6102d3 */ r_esp -= 4; W32(r_esp, 0x48aba0u); f_006102d3();
    /* 0048aba0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048aba3: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048aba6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048aba7: call 0x626230 */ r_esp -= 4; W32(r_esp, 0x48abacu); f_00626230();
    /* 0048abac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048abaf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048abb2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048abb6: jne 0x48abd3 */ if (!fZ) goto L_0048abd3;
L_0048abb8:; BB(0x0048abb8);
    /* 0048abb8: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0048abbd: push 0x6875b4 */ { u32 v = 0x6875b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048abc2: push 0x6875c0 */ { u32 v = 0x6875c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048abc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048abc9: call dword ptr [0x6331f8] */ { u32 t = R32((u32)(0x6331f8u)); r_esp -= 4; W32(r_esp, 0x48abcfu); call_ind(t); }
    /* 0048abcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048abd1: jmp 0x48ac17 */ goto L_0048ac17;
L_0048abd3:; BB(0x0048abd3);
    /* 0048abd3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048abd6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048abd9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0048abdb: mov ecx, dword ptr [0x6f6ef0] */ r_ecx = R32((u32)(0x6f6ef0u));
    /* 0048abe1: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048abe4: mov dword ptr [0x6f6ef0], ecx */ W32((u32)(0x6f6ef0u), r_ecx);
    /* 0048abea: mov edx, dword ptr [0x6f6ef0] */ r_edx = R32((u32)(0x6f6ef0u));
    /* 0048abf0: cmp edx, dword ptr [0x6f7038] */ {  u32 a = r_edx; u32 b = R32((u32)(0x6f7038u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048abf6: jle 0x48ac02 */ if ((fZ||fS!=fO)) goto L_0048ac02;
L_0048abf8:; BB(0x0048abf8);
    /* 0048abf8: mov eax, dword ptr [0x6f6ef0] */ r_eax = R32((u32)(0x6f6ef0u));
    /* 0048abfd: mov dword ptr [0x6f7038], eax */ W32((u32)(0x6f7038u), r_eax);
L_0048ac02:; BB(0x0048ac02);
    /* 0048ac02: mov ecx, dword ptr [0x6f703c] */ r_ecx = R32((u32)(0x6f703cu));
    /* 0048ac08: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ac0b: mov dword ptr [0x6f703c], ecx */ W32((u32)(0x6f703cu), r_ecx);
    /* 0048ac11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ac14: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0048ac17:; BB(0x0048ac17);
    /* 0048ac17: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ac19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ac1a: ret  */ FN_RET(0x0048ab58); r_esp += 4; return;
}

void f_0048ac1b(void) /* FUN_0048ac1b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ac1b);
    /* 0048ac1b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ac1c: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ac1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ac1f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ac23: je 0x48ac5e */ if (fZ) goto L_0048ac5e;
L_0048ac25:; BB(0x0048ac25);
    /* 0048ac25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048ac28: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048ac2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ac2e: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ac31: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048ac34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ac37: mov eax, dword ptr [0x6f6ef0] */ r_eax = R32((u32)(0x6f6ef0u));
    /* 0048ac3c: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048ac3e: mov dword ptr [0x6f6ef0], eax */ W32((u32)(0x6f6ef0u), r_eax);
    /* 0048ac43: mov ecx, dword ptr [0x6f703c] */ r_ecx = R32((u32)(0x6f703cu));
    /* 0048ac49: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ac4c: mov dword ptr [0x6f703c], ecx */ W32((u32)(0x6f703cu), r_ecx);
    /* 0048ac52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ac55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ac56: call 0x6262e0 */ r_esp -= 4; W32(r_esp, 0x48ac5bu); f_006262e0();
    /* 0048ac5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048ac5e:; BB(0x0048ac5e);
    /* 0048ac5e: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ac60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ac61: ret  */ FN_RET(0x0048ac1b); r_esp += 4; return;
}

void f_0048ac70(void) /* FUN_0048ac70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ac70);
    /* 0048ac70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ac71: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ac73: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ac76: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048ac79: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ac7c: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x48ac81u); f_005e9d30();
    /* 0048ac81: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ac84: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ac87: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x48ac8cu); f_005dd290();
    /* 0048ac8c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ac8f: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ac95: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x48ac9au); f_005dd290();
    /* 0048ac9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ac9d: mov dword ptr [eax], 0x636e94 */ W32((u32)(r_eax), 0x636e94u);
    /* 0048aca3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048aca6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048aca9: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 0048acaf: push 0x4c0 */ { u32 v = 0x4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048acb4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048acb7: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48acbcu); f_005ea0c3();
    /* 0048acbc: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048acbe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48acc3u); f_0048ab58();
    /* 0048acc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048acc6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048acc9: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048accd: je 0x48acdc */ if (fZ) goto L_0048acdc;
L_0048accf:; BB(0x0048accf);
    /* 0048accf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048acd2: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x48acd7u); f_005e9d30();
    /* 0048acd7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048acda: jmp 0x48ace3 */ goto L_0048ace3;
L_0048acdc:; BB(0x0048acdc);
    /* 0048acdc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0048ace3:; BB(0x0048ace3);
    /* 0048ace3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ace6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048ace9: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
    /* 0048acec: push 0x4d0 */ { u32 v = 0x4d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048acf1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048acf4: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 0048acf7: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48acfcu); f_005ea0c3();
    /* 0048acfc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048acff: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0048ad02: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ad05: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0048ad08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ad0a: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48ad0du); call_ind(t); }
    /* 0048ad0d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ad10: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0048ad13: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ad16: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0048ad19: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ad1b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48ad1eu); call_ind(t); }
    /* 0048ad1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048ad25: jmp 0x48ad30 */ goto L_0048ad30;
L_0048ad27:; BB(0x0048ad27);
    /* 0048ad27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ad2a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ad2d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048ad30:; BB(0x0048ad30);
    /* 0048ad30: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ad34: jge 0x48ad87 */ if ((fS==fO)) goto L_0048ad87;
L_0048ad36:; BB(0x0048ad36);
    /* 0048ad36: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ad38: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48ad3du); f_0048ab58();
    /* 0048ad3d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ad40: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048ad43: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ad47: je 0x48ad69 */ if (fZ) goto L_0048ad69;
L_0048ad49:; BB(0x0048ad49);
    /* 0048ad49: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ad4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ad4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ad50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ad51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ad54: mov ecx, dword ptr [eax*4 + 0x6875d0] */ r_ecx = R32((u32)(r_eax*4+0x6875d0u));
    /* 0048ad5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ad5c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048ad5f: call 0x48ba86 */ r_esp -= 4; W32(r_esp, 0x48ad64u); f_0048ba86();
    /* 0048ad64: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048ad67: jmp 0x48ad70 */ goto L_0048ad70;
L_0048ad69:; BB(0x0048ad69);
    /* 0048ad69: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0048ad70:; BB(0x0048ad70);
    /* 0048ad70: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048ad73: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048ad76: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ad79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ad7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ad7d: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ad80: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x48ad85u); f_005dd425();
    /* 0048ad85: jmp 0x48ad27 */ goto L_0048ad27;
L_0048ad87:; BB(0x0048ad87);
    /* 0048ad87: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048ad8e: jmp 0x48ad99 */ goto L_0048ad99;
L_0048ad90:; BB(0x0048ad90);
    /* 0048ad90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ad93: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ad96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0048ad99:; BB(0x0048ad99);
    /* 0048ad99: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ad9d: jge 0x48adfe */ if ((fS==fO)) goto L_0048adfe;
L_0048ad9f:; BB(0x0048ad9f);
    /* 0048ad9f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ada1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48ada6u); f_0048ab58();
    /* 0048ada6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ada9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048adac: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048adb0: je 0x48adbf */ if (fZ) goto L_0048adbf;
L_0048adb2:; BB(0x0048adb2);
    /* 0048adb2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048adb5: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x48adbau); f_005e9d30();
    /* 0048adba: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0048adbd: jmp 0x48adc6 */ goto L_0048adc6;
L_0048adbf:; BB(0x0048adbf);
    /* 0048adbf: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0048adc6:; BB(0x0048adc6);
    /* 0048adc6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048adc9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0048adcc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048adcf: mov ecx, dword ptr [eax*4 + 0x6875f8] */ r_ecx = R32((u32)(r_eax*4+0x6875f8u));
    /* 0048add6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048add7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048adda: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48addfu); f_005ea0c3();
    /* 0048addf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ade2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048ade4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ade7: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x48adeau); call_ind(t); }
    /* 0048adea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048aded: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048adee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048adf1: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048adf7: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x48adfcu); f_005dd425();
    /* 0048adfc: jmp 0x48ad90 */ goto L_0048ad90;
L_0048adfe:; BB(0x0048adfe);
    /* 0048adfe: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae00: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48ae05u); f_0048ab58();
    /* 0048ae05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ae08: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0048ae0b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ae0f: je 0x48ae1e */ if (fZ) goto L_0048ae1e;
L_0048ae11:; BB(0x0048ae11);
    /* 0048ae11: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ae14: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x48ae19u); f_005e9d30();
    /* 0048ae19: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048ae1c: jmp 0x48ae25 */ goto L_0048ae25;
L_0048ae1e:; BB(0x0048ae1e);
    /* 0048ae1e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0048ae25:; BB(0x0048ae25);
    /* 0048ae25: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ae28: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0048ae2b: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 0048ae2e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae33: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ae36: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0048ae39: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48ae3eu); f_005ea0c3();
    /* 0048ae3e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ae41: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048ae44: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ae47: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0048ae4a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048ae4c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x48ae4fu); call_ind(t); }
    /* 0048ae4f: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae54: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ae57: call 0x48b1a4 */ r_esp -= 4; W32(r_esp, 0x48ae5cu); f_0048b1a4();
    /* 0048ae5c: push 0x148 */ { u32 v = 0x148u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae61: push 0x19d */ { u32 v = 0x19du; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ae69: call 0x48b285 */ r_esp -= 4; W32(r_esp, 0x48ae6eu); f_0048b285();
    /* 0048ae6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ae71: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 0048ae78: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ae7b: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ae7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ae7e: ret 4 */ FN_RET(0x0048ac70); r_esp += 8; return;
}

void f_0048ae81(void) /* FUN_0048ae81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ae81);
    /* 0048ae81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae82: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ae84: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ae87: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0048ae8a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048ae8d: mov dword ptr [eax], 0x636e94 */ W32((u32)(r_eax), 0x636e94u);
    /* 0048ae93: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048ae96: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0048ae99: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0048ae9c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ae9f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048aea2: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048aea6: je 0x48aeb9 */ if (fZ) goto L_0048aeb9;
L_0048aea8:; BB(0x0048aea8);
    /* 0048aea8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048aeaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048aead: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048aeaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048aeb2: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48aeb4u); call_ind(t); }
    /* 0048aeb4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048aeb7: jmp 0x48aec0 */ goto L_0048aec0;
L_0048aeb9:; BB(0x0048aeb9);
    /* 0048aeb9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0048aec0:; BB(0x0048aec0);
    /* 0048aec0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048aec3: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 0048aeca: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048aecd: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 0048aed0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0048aed3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048aed6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048aed9: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048aedd: je 0x48aef0 */ if (fZ) goto L_0048aef0;
L_0048aedf:; BB(0x0048aedf);
    /* 0048aedf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048aee1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048aee4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048aee6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048aee9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48aeebu); call_ind(t); }
    /* 0048aeeb: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0048aeee: jmp 0x48aef7 */ goto L_0048aef7;
L_0048aef0:; BB(0x0048aef0);
    /* 0048aef0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0048aef7:; BB(0x0048aef7);
    /* 0048aef7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048aefa: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_0048af01:; BB(0x0048af01);
    /* 0048af01: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048af04: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048af07: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48af0cu); f_005dd4d2();
    /* 0048af0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048af0e: je 0x48af66 */ if (fZ) goto L_0048af66;
L_0048af10:; BB(0x0048af10);
    /* 0048af10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048af12: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048af15: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048af18: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48af1du); f_005dd560();
    /* 0048af1d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048af20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048af23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048af24: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048af27: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048af2a: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x48af2fu); f_005dd469();
    /* 0048af2f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048af32: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048af34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048af37: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x48af3au); call_ind(t); }
    /* 0048af3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048af3d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048af40: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048af43: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0048af46: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048af4a: je 0x48af5d */ if (fZ) goto L_0048af5d;
L_0048af4c:; BB(0x0048af4c);
    /* 0048af4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048af4e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048af51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048af53: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048af56: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48af58u); call_ind(t); }
    /* 0048af58: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0048af5b: jmp 0x48af64 */ goto L_0048af64;
L_0048af5d:; BB(0x0048af5d);
    /* 0048af5d: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0048af64:; BB(0x0048af64);
    /* 0048af64: jmp 0x48af01 */ goto L_0048af01;
L_0048af66:; BB(0x0048af66);
    /* 0048af66: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048af69: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048af6f: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48af74u); f_005dd4d2();
    /* 0048af74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048af76: je 0x48afd4 */ if (fZ) goto L_0048afd4;
L_0048af78:; BB(0x0048af78);
    /* 0048af78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048af7a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048af7d: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048af83: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48af88u); f_005dd560();
    /* 0048af88: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048af8b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048af8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048af8f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048af92: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048af98: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x48af9du); f_005dd469();
    /* 0048af9d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048afa0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048afa2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048afa5: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48afa8u); call_ind(t); }
    /* 0048afa8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048afab: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048afae: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048afb1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0048afb4: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048afb8: je 0x48afcb */ if (fZ) goto L_0048afcb;
L_0048afba:; BB(0x0048afba);
    /* 0048afba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048afbc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048afbf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048afc1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048afc4: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48afc6u); call_ind(t); }
    /* 0048afc6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0048afc9: jmp 0x48afd2 */ goto L_0048afd2;
L_0048afcb:; BB(0x0048afcb);
    /* 0048afcb: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0048afd2:; BB(0x0048afd2);
    /* 0048afd2: jmp 0x48af66 */ goto L_0048af66;
L_0048afd4:; BB(0x0048afd4);
    /* 0048afd4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048afd7: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048afdd: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x48afe2u); f_005dd2d3();
    /* 0048afe2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048afe5: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048afe8: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x48afedu); f_005dd2d3();
    /* 0048afed: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048aff0: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x48aff5u); f_005e9dde();
    /* 0048aff5: mov esp, ebp */ r_esp = r_ebp;
    /* 0048aff7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048aff8: ret  */ FN_RET(0x0048ae81); r_esp += 4; return;
}

void f_0048aff9(void) /* FUN_0048aff9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048aff9);
    /* 0048aff9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048affa: mov ebp, esp */ r_ebp = r_esp;
    /* 0048affc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048affd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048b000: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048b003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b004: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b007: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x48b00cu); f_005d9738();
    /* 0048b00c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b00e: je 0x48b01a */ if (fZ) goto L_0048b01a;
L_0048b010:; BB(0x0048b010);
    /* 0048b010: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b013: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_0048b01a:; BB(0x0048b01a);
    /* 0048b01a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048b01d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048b020: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b022: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b023: ret 4 */ FN_RET(0x0048aff9); r_esp += 8; return;
}

void f_0048b026(void) /* FUN_0048b026 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b026);
    /* 0048b026: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b027: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b029: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b02c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048b02f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b032: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x48b037u); f_005ea2c1();
    /* 0048b037: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b03a: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0048b03d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b040: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0048b043: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048b045: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48b048u); call_ind(t); }
    /* 0048b048: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b04b: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0048b04e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b051: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0048b054: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048b056: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48b059u); call_ind(t); }
    /* 0048b059: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b060: jmp 0x48b06b */ goto L_0048b06b;
L_0048b062:; BB(0x0048b062);
    /* 0048b062: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b065: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b068: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048b06b:; BB(0x0048b06b);
    /* 0048b06b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b06e: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b071: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b076u); f_005dd4d2();
    /* 0048b076: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b079: jge 0x48b09a */ if ((fS==fO)) goto L_0048b09a;
L_0048b07b:; BB(0x0048b07b);
    /* 0048b07b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b07e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b07f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b082: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b085: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b08au); f_005dd560();
    /* 0048b08a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048b08d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b090: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048b092: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b095: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x48b098u); call_ind(t); }
    /* 0048b098: jmp 0x48b062 */ goto L_0048b062;
L_0048b09a:; BB(0x0048b09a);
    /* 0048b09a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b0a1: jmp 0x48b0ac */ goto L_0048b0ac;
L_0048b0a3:; BB(0x0048b0a3);
    /* 0048b0a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b0a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b0a9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0048b0ac:; BB(0x0048b0ac);
    /* 0048b0ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b0af: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b0b5: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b0bau); f_005dd4d2();
    /* 0048b0ba: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b0bd: jge 0x48b0e1 */ if ((fS==fO)) goto L_0048b0e1;
L_0048b0bf:; BB(0x0048b0bf);
    /* 0048b0bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b0c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b0c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b0c6: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b0cc: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b0d1u); f_005dd560();
    /* 0048b0d1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048b0d4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b0d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048b0d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b0dc: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48b0dfu); call_ind(t); }
    /* 0048b0df: jmp 0x48b0a3 */ goto L_0048b0a3;
L_0048b0e1:; BB(0x0048b0e1);
    /* 0048b0e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b0e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b0e4: ret  */ FN_RET(0x0048b026); r_esp += 4; return;
}

void f_0048b0e5(void) /* FUN_0048b0e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b0e5);
    /* 0048b0e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b0e6: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b0e8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b0eb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048b0ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b0f1: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x48b0f6u); f_005ea28a();
    /* 0048b0f6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b0f9: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0048b0fc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b0ff: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0048b102: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048b104: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48b107u); call_ind(t); }
    /* 0048b107: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b10a: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0048b10d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b110: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0048b113: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048b115: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48b118u); call_ind(t); }
    /* 0048b118: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b11f: jmp 0x48b12a */ goto L_0048b12a;
L_0048b121:; BB(0x0048b121);
    /* 0048b121: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b124: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b127: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048b12a:; BB(0x0048b12a);
    /* 0048b12a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b12d: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b130: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b135u); f_005dd4d2();
    /* 0048b135: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b138: jge 0x48b159 */ if ((fS==fO)) goto L_0048b159;
L_0048b13a:; BB(0x0048b13a);
    /* 0048b13a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b13d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b13e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b141: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b144: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b149u); f_005dd560();
    /* 0048b149: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048b14c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b14f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048b151: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b154: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x48b157u); call_ind(t); }
    /* 0048b157: jmp 0x48b121 */ goto L_0048b121;
L_0048b159:; BB(0x0048b159);
    /* 0048b159: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b160: jmp 0x48b16b */ goto L_0048b16b;
L_0048b162:; BB(0x0048b162);
    /* 0048b162: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b165: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b168: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0048b16b:; BB(0x0048b16b);
    /* 0048b16b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b16e: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b174: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b179u); f_005dd4d2();
    /* 0048b179: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b17c: jge 0x48b1a0 */ if ((fS==fO)) goto L_0048b1a0;
L_0048b17e:; BB(0x0048b17e);
    /* 0048b17e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b181: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b182: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b185: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b18b: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b190u); f_005dd560();
    /* 0048b190: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048b193: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b196: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048b198: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b19b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48b19eu); call_ind(t); }
    /* 0048b19e: jmp 0x48b162 */ goto L_0048b162;
L_0048b1a0:; BB(0x0048b1a0);
    /* 0048b1a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b1a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b1a3: ret  */ FN_RET(0x0048b0e5); r_esp += 4; return;
}

void f_0048b1a4(void) /* FUN_0048b1a4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b1a4);
    /* 0048b1a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b1a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b1a7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b1aa: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048b1ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048b1b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b1b1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b1b4: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x48b1b9u); f_005d975e();
    /* 0048b1b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b1bc: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b1bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b1c0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b1c3: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 0048b1c6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b1c9: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0048b1cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048b1ce: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x48b1d1u); call_ind(t); }
    /* 0048b1d1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b1d4: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b1d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b1d8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b1db: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b1de: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b1e1: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0048b1e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048b1e6: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x48b1e9u); call_ind(t); }
    /* 0048b1e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b1f0: jmp 0x48b1fb */ goto L_0048b1fb;
L_0048b1f2:; BB(0x0048b1f2);
    /* 0048b1f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b1f5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b1f8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0048b1fb:; BB(0x0048b1fb);
    /* 0048b1fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b1fe: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b201: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b206u); f_005dd4d2();
    /* 0048b206: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b209: jge 0x48b231 */ if ((fS==fO)) goto L_0048b231;
L_0048b20b:; BB(0x0048b20b);
    /* 0048b20b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b20e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b20f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b212: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b215: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b21au); f_005dd560();
    /* 0048b21a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048b21d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048b220: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b223: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b224: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b227: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048b229: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b22c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48b22fu); call_ind(t); }
    /* 0048b22f: jmp 0x48b1f2 */ goto L_0048b1f2;
L_0048b231:; BB(0x0048b231);
    /* 0048b231: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b238: jmp 0x48b243 */ goto L_0048b243;
L_0048b23a:; BB(0x0048b23a);
    /* 0048b23a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b23d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b240: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048b243:; BB(0x0048b243);
    /* 0048b243: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b246: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b24c: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b251u); f_005dd4d2();
    /* 0048b251: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b254: jge 0x48b27f */ if ((fS==fO)) goto L_0048b27f;
L_0048b256:; BB(0x0048b256);
    /* 0048b256: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b259: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b25a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b25d: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b263: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b268u); f_005dd560();
    /* 0048b268: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048b26b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048b26e: add edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048b271: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b272: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b275: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048b277: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b27a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48b27du); call_ind(t); }
    /* 0048b27d: jmp 0x48b23a */ goto L_0048b23a;
L_0048b27f:; BB(0x0048b27f);
    /* 0048b27f: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b281: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b282: ret 4 */ FN_RET(0x0048b1a4); r_esp += 8; return;
}

void f_0048b285(void) /* FUN_0048b285 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b285);
    /* 0048b285: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b286: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b288: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b28b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048b28e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048b291: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b292: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b295: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b296: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b299: call 0x5e9f7d */ r_esp -= 4; W32(r_esp, 0x48b29eu); f_005e9f7d();
    /* 0048b29e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0048b2a1: add edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048b2a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b2a5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048b2a8: add eax, 0x5e */ {  u32 a = r_eax; u32 b = 0x5eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b2ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b2ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b2af: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0048b2b2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b2b5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0048b2b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048b2ba: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48b2bdu); call_ind(t); }
    /* 0048b2bd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048b2c0: add eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b2c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b2c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b2c7: add ecx, 0x5e */ {  u32 a = r_ecx; u32 b = 0x5eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b2ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b2cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b2ce: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b2d1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b2d4: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0048b2d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048b2d9: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x48b2dcu); call_ind(t); }
    /* 0048b2dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b2e3: jmp 0x48b2ee */ goto L_0048b2ee;
L_0048b2e5:; BB(0x0048b2e5);
    /* 0048b2e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b2e8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b2eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0048b2ee:; BB(0x0048b2ee);
    /* 0048b2ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b2f1: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b2f4: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b2f9u); f_005dd4d2();
    /* 0048b2f9: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b2fc: jge 0x48b32b */ if ((fS==fO)) goto L_0048b32b;
L_0048b2fe:; BB(0x0048b2fe);
    /* 0048b2fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b301: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b302: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b305: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b308: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b30du); f_005dd560();
    /* 0048b30d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048b310: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048b313: add eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b316: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b317: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b31a: add ecx, 0x5e */ {  u32 a = r_ecx; u32 b = 0x5eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b31d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b31e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b321: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048b323: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b326: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x48b329u); call_ind(t); }
    /* 0048b329: jmp 0x48b2e5 */ goto L_0048b2e5;
L_0048b32b:; BB(0x0048b32b);
    /* 0048b32b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b332: jmp 0x48b33d */ goto L_0048b33d;
L_0048b334:; BB(0x0048b334);
    /* 0048b334: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b337: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b33a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0048b33d:; BB(0x0048b33d);
    /* 0048b33d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b340: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b346: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b34bu); f_005dd4d2();
    /* 0048b34b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b34e: jge 0x48b3c2 */ if ((fS==fO)) goto L_0048b3c2;
L_0048b350:; BB(0x0048b350);
    /* 0048b350: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b353: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b354: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b357: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b35d: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b362u); f_005dd560();
    /* 0048b362: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048b365: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b368: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b36e: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b373u); f_005dd4d2();
    /* 0048b373: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048b376: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b379: jne 0x48b39d */ if (!fZ) goto L_0048b39d;
L_0048b37b:; BB(0x0048b37b);
    /* 0048b37b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b37e: imul eax, eax, 0xb */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xbu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048b381: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048b384: lea edx, [ecx + eax + 0x12] */ r_edx = (u32)(r_ecx+r_eax+0x12u);
    /* 0048b388: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b389: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048b38c: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b38f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b390: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b393: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048b395: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b398: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48b39bu); call_ind(t); }
    /* 0048b39b: jmp 0x48b3bd */ goto L_0048b3bd;
L_0048b39d:; BB(0x0048b39d);
    /* 0048b39d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b3a0: imul eax, eax, 0xb */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xbu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048b3a3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048b3a6: lea edx, [ecx + eax + 0xf] */ r_edx = (u32)(r_ecx+r_eax+0xfu);
    /* 0048b3aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048b3ae: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b3b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b3b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048b3b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b3ba: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48b3bdu); call_ind(t); }
L_0048b3bd:; BB(0x0048b3bd);
    /* 0048b3bd: jmp 0x48b334 */ goto L_0048b334;
L_0048b3c2:; BB(0x0048b3c2);
    /* 0048b3c2: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b3c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b3c5: ret 8 */ FN_RET(0x0048b285); r_esp += 12; return;
}

void f_0048b3c8(void) /* FUN_0048b3c8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b3c8);
    /* 0048b3c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b3cb: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b3ce: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048b3d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b3d8: jmp 0x48b3e3 */ goto L_0048b3e3;
L_0048b3da:; BB(0x0048b3da);
    /* 0048b3da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b3dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b3e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048b3e3:; BB(0x0048b3e3);
    /* 0048b3e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b3e6: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b3ec: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b3f1u); f_005dd4d2();
    /* 0048b3f1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b3f4: jge 0x48b417 */ if ((fS==fO)) goto L_0048b417;
L_0048b3f6:; BB(0x0048b3f6);
    /* 0048b3f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b3f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b3fd: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b403: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b408u); f_005dd560();
    /* 0048b408: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048b40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b40d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b410: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b415u); f_005ea1cf();
    /* 0048b415: jmp 0x48b3da */ goto L_0048b3da;
L_0048b417:; BB(0x0048b417);
    /* 0048b417: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b41a: ret  */ FN_RET(0x0048b3c8); r_esp += 4; return;
}

void f_0048b41b(void) /* FUN_0048b41b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b41b);
    /* 0048b41b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b41c: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b41e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b421: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048b424: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048b42b: jmp 0x48b436 */ goto L_0048b436;
L_0048b42d:; BB(0x0048b42d);
    /* 0048b42d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b430: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b433: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0048b436:; BB(0x0048b436);
    /* 0048b436: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b439: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b43f: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b444u); f_005dd4d2();
    /* 0048b444: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b447: jge 0x48b5d2 */ if ((fS==fO)) goto L_0048b5d2;
L_0048b44d:; BB(0x0048b44d);
    /* 0048b44d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b450: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b451: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b454: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b45a: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b45fu); f_005dd560();
    /* 0048b45f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048b462: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048b465: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0048b468: cmp dword ptr [ebp - 0x14], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048b46c: ja 0x48b5cd */ if ((!fC&&!fZ)) goto L_0048b5cd;
L_0048b472:; BB(0x0048b472);
    /* 0048b472: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048b475: jmp dword ptr [eax*4 + 0x48b627] */ { u32 t = R32((u32)(r_eax*4+0x48b627u)); switch (t) { case 0x48b47cu: goto L_0048b47c; case 0x48b49du: goto L_0048b49d; case 0x48b4beu: goto L_0048b4be; case 0x48b4dfu: goto L_0048b4df; case 0x48b506u: goto L_0048b506; case 0x48b533u: goto L_0048b533; case 0x48b55du: goto L_0048b55d; case 0x48b587u: goto L_0048b587; case 0x48b5c3u: goto L_0048b5c3; default: UNSUP(0x0048b475, "jump table entry is not a known target"); } }
L_0048b47c:; BB(0x0048b47c);
    /* 0048b47c: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b480: jne 0x48b48e */ if (!fZ) goto L_0048b48e;
L_0048b482:; BB(0x0048b482);
    /* 0048b482: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b484: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b487: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b48cu); f_005ea1cf();
    /* 0048b48c: jmp 0x48b498 */ goto L_0048b498;
L_0048b48e:; BB(0x0048b48e);
    /* 0048b48e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b490: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b493: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b498u); f_005ea1cf();
L_0048b498:; BB(0x0048b498);
    /* 0048b498: jmp 0x48b5cd */ goto L_0048b5cd;
L_0048b49d:; BB(0x0048b49d);
    /* 0048b49d: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b4a1: jne 0x48b4af */ if (!fZ) goto L_0048b4af;
L_0048b4a3:; BB(0x0048b4a3);
    /* 0048b4a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b4a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b4a8: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b4adu); f_005ea1cf();
    /* 0048b4ad: jmp 0x48b4b9 */ goto L_0048b4b9;
L_0048b4af:; BB(0x0048b4af);
    /* 0048b4af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b4b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b4b4: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b4b9u); f_005ea1cf();
L_0048b4b9:; BB(0x0048b4b9);
    /* 0048b4b9: jmp 0x48b5cd */ goto L_0048b5cd;
L_0048b4be:; BB(0x0048b4be);
    /* 0048b4be: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b4c2: jne 0x48b4d0 */ if (!fZ) goto L_0048b4d0;
L_0048b4c4:; BB(0x0048b4c4);
    /* 0048b4c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b4c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b4c9: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b4ceu); f_005ea1cf();
    /* 0048b4ce: jmp 0x48b4da */ goto L_0048b4da;
L_0048b4d0:; BB(0x0048b4d0);
    /* 0048b4d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b4d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b4d5: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b4dau); f_005ea1cf();
L_0048b4da:; BB(0x0048b4da);
    /* 0048b4da: jmp 0x48b5cd */ goto L_0048b5cd;
L_0048b4df:; BB(0x0048b4df);
    /* 0048b4df: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b4e3: je 0x48b4eb */ if (fZ) goto L_0048b4eb;
L_0048b4e5:; BB(0x0048b4e5);
    /* 0048b4e5: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b4e9: jne 0x48b4f7 */ if (!fZ) goto L_0048b4f7;
L_0048b4eb:; BB(0x0048b4eb);
    /* 0048b4eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b4ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b4f0: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b4f5u); f_005ea1cf();
    /* 0048b4f5: jmp 0x48b501 */ goto L_0048b501;
L_0048b4f7:; BB(0x0048b4f7);
    /* 0048b4f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b4f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b4fc: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b501u); f_005ea1cf();
L_0048b501:; BB(0x0048b501);
    /* 0048b501: jmp 0x48b5cd */ goto L_0048b5cd;
L_0048b506:; BB(0x0048b506);
    /* 0048b506: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b50a: je 0x48b518 */ if (fZ) goto L_0048b518;
L_0048b50c:; BB(0x0048b50c);
    /* 0048b50c: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b510: je 0x48b518 */ if (fZ) goto L_0048b518;
L_0048b512:; BB(0x0048b512);
    /* 0048b512: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b516: jne 0x48b524 */ if (!fZ) goto L_0048b524;
L_0048b518:; BB(0x0048b518);
    /* 0048b518: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b51a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b51d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b522u); f_005ea1cf();
    /* 0048b522: jmp 0x48b52e */ goto L_0048b52e;
L_0048b524:; BB(0x0048b524);
    /* 0048b524: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b526: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b529: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b52eu); f_005ea1cf();
L_0048b52e:; BB(0x0048b52e);
    /* 0048b52e: jmp 0x48b5cd */ goto L_0048b5cd;
L_0048b533:; BB(0x0048b533);
    /* 0048b533: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b537: je 0x48b545 */ if (fZ) goto L_0048b545;
L_0048b539:; BB(0x0048b539);
    /* 0048b539: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b53d: je 0x48b545 */ if (fZ) goto L_0048b545;
L_0048b53f:; BB(0x0048b53f);
    /* 0048b53f: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b543: jne 0x48b551 */ if (!fZ) goto L_0048b551;
L_0048b545:; BB(0x0048b545);
    /* 0048b545: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b547: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b54a: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b54fu); f_005ea1cf();
    /* 0048b54f: jmp 0x48b55b */ goto L_0048b55b;
L_0048b551:; BB(0x0048b551);
    /* 0048b551: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b553: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b556: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b55bu); f_005ea1cf();
L_0048b55b:; BB(0x0048b55b);
    /* 0048b55b: jmp 0x48b5cd */ goto L_0048b5cd;
L_0048b55d:; BB(0x0048b55d);
    /* 0048b55d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b561: je 0x48b56f */ if (fZ) goto L_0048b56f;
L_0048b563:; BB(0x0048b563);
    /* 0048b563: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b567: je 0x48b56f */ if (fZ) goto L_0048b56f;
L_0048b569:; BB(0x0048b569);
    /* 0048b569: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b56d: jne 0x48b57b */ if (!fZ) goto L_0048b57b;
L_0048b56f:; BB(0x0048b56f);
    /* 0048b56f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b571: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b574: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b579u); f_005ea1cf();
    /* 0048b579: jmp 0x48b585 */ goto L_0048b585;
L_0048b57b:; BB(0x0048b57b);
    /* 0048b57b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b57d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b580: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b585u); f_005ea1cf();
L_0048b585:; BB(0x0048b585);
    /* 0048b585: jmp 0x48b5cd */ goto L_0048b5cd;
L_0048b587:; BB(0x0048b587);
    /* 0048b587: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b58b: je 0x48b5ab */ if (fZ) goto L_0048b5ab;
L_0048b58d:; BB(0x0048b58d);
    /* 0048b58d: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b591: je 0x48b5ab */ if (fZ) goto L_0048b5ab;
L_0048b593:; BB(0x0048b593);
    /* 0048b593: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b597: je 0x48b5ab */ if (fZ) goto L_0048b5ab;
L_0048b599:; BB(0x0048b599);
    /* 0048b599: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b59d: je 0x48b5ab */ if (fZ) goto L_0048b5ab;
L_0048b59f:; BB(0x0048b59f);
    /* 0048b59f: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b5a3: je 0x48b5ab */ if (fZ) goto L_0048b5ab;
L_0048b5a5:; BB(0x0048b5a5);
    /* 0048b5a5: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b5a9: jne 0x48b5b7 */ if (!fZ) goto L_0048b5b7;
L_0048b5ab:; BB(0x0048b5ab);
    /* 0048b5ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b5ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b5b0: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b5b5u); f_005ea1cf();
    /* 0048b5b5: jmp 0x48b5c1 */ goto L_0048b5c1;
L_0048b5b7:; BB(0x0048b5b7);
    /* 0048b5b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b5b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b5bc: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b5c1u); f_005ea1cf();
L_0048b5c1:; BB(0x0048b5c1);
    /* 0048b5c1: jmp 0x48b5cd */ goto L_0048b5cd;
L_0048b5c3:; BB(0x0048b5c3);
    /* 0048b5c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b5c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b5c8: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b5cdu); f_005ea1cf();
L_0048b5cd:; BB(0x0048b5cd);
    /* 0048b5cd: jmp 0x48b42d */ goto L_0048b42d;
L_0048b5d2:; BB(0x0048b5d2);
    /* 0048b5d2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b5d5: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b5db: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b5e0u); f_005dd4d2();
    /* 0048b5e0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048b5e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b5e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b5e7: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b5ed: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b5f2u); f_005dd560();
    /* 0048b5f2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048b5f5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b5f9: je 0x48b621 */ if (fZ) goto L_0048b621;
L_0048b5fb:; BB(0x0048b5fb);
    /* 0048b5fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048b5fe: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0048b601: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x48b606u); f_005ea257();
    /* 0048b606: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b609: jne 0x48b617 */ if (!fZ) goto L_0048b617;
L_0048b60b:; BB(0x0048b60b);
    /* 0048b60b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b60d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b610: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b615u); f_005ea1cf();
    /* 0048b615: jmp 0x48b621 */ goto L_0048b621;
L_0048b617:; BB(0x0048b617);
    /* 0048b617: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b619: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b61c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b621u); f_005ea1cf();
L_0048b621:; BB(0x0048b621);
    /* 0048b621: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b623: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b624: ret 4 */ FN_RET(0x0048b41b); r_esp += 8; return;
}

void f_0048b64b(void) /* FUN_0048b64b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b64b);
    /* 0048b64b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b64c: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b64e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b651: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048b654: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048b657: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048b65a: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048b65e: ja 0x48b7cf */ if ((!fC&&!fZ)) goto L_0048b7cf;
L_0048b664:; BB(0x0048b664);
    /* 0048b664: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b667: jmp dword ptr [ecx*4 + 0x48b7d5] */ { u32 t = R32((u32)(r_ecx*4+0x48b7d5u)); switch (t) { case 0x48b66eu: goto L_0048b66e; case 0x48b695u: goto L_0048b695; case 0x48b6beu: goto L_0048b6be; case 0x48b6e7u: goto L_0048b6e7; case 0x48b710u: goto L_0048b710; case 0x48b739u: goto L_0048b739; case 0x48b75fu: goto L_0048b75f; case 0x48b785u: goto L_0048b785; case 0x48b7abu: goto L_0048b7ab; default: UNSUP(0x0048b667, "jump table entry is not a known target"); } }
L_0048b66e:; BB(0x0048b66e);
    /* 0048b66e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b670: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0048b676: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048b678: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048b67e: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x48b681u); call_ind(t); }
    /* 0048b681: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b684: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b685: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b688: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b68b: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b690u); f_005ea1cf();
    /* 0048b690: jmp 0x48b7cf */ goto L_0048b7cf;
L_0048b695:; BB(0x0048b695);
    /* 0048b695: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b697: push 0x4b2 */ { u32 v = 0x4b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b69c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b69f: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0048b6a5: call 0x48c06d */ r_esp -= 4; W32(r_esp, 0x48b6aau); f_0048c06d();
    /* 0048b6aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b6ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b6ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b6b1: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b6b4: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b6b9u); f_005ea1cf();
    /* 0048b6b9: jmp 0x48b7cf */ goto L_0048b7cf;
L_0048b6be:; BB(0x0048b6be);
    /* 0048b6be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b6c0: push 0x4cd */ { u32 v = 0x4cdu; r_esp -= 4; W32(r_esp, v); }
    /* 0048b6c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b6c8: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0048b6ce: call 0x48c06d */ r_esp -= 4; W32(r_esp, 0x48b6d3u); f_0048c06d();
    /* 0048b6d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b6d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b6d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b6da: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b6dd: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b6e2u); f_005ea1cf();
    /* 0048b6e2: jmp 0x48b7cf */ goto L_0048b7cf;
L_0048b6e7:; BB(0x0048b6e7);
    /* 0048b6e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b6e9: push 0x4b1 */ { u32 v = 0x4b1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b6ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b6f1: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0048b6f7: call 0x48c06d */ r_esp -= 4; W32(r_esp, 0x48b6fcu); f_0048c06d();
    /* 0048b6fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b6ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b700: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b703: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b706: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b70bu); f_005ea1cf();
    /* 0048b70b: jmp 0x48b7cf */ goto L_0048b7cf;
L_0048b710:; BB(0x0048b710);
    /* 0048b710: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b712: push 0x4b5 */ { u32 v = 0x4b5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b717: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b71a: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0048b720: call 0x48c06d */ r_esp -= 4; W32(r_esp, 0x48b725u); f_0048c06d();
    /* 0048b725: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b728: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b729: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b72c: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b72f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b734u); f_005ea1cf();
    /* 0048b734: jmp 0x48b7cf */ goto L_0048b7cf;
L_0048b739:; BB(0x0048b739);
    /* 0048b739: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b73b: push 0x4b6 */ { u32 v = 0x4b6u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b740: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b743: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0048b749: call 0x48c06d */ r_esp -= 4; W32(r_esp, 0x48b74eu); f_0048c06d();
    /* 0048b74e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b751: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b752: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b755: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b758: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b75du); f_005ea1cf();
    /* 0048b75d: jmp 0x48b7cf */ goto L_0048b7cf;
L_0048b75f:; BB(0x0048b75f);
    /* 0048b75f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b761: push 0x4b7 */ { u32 v = 0x4b7u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b766: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b769: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0048b76f: call 0x48c06d */ r_esp -= 4; W32(r_esp, 0x48b774u); f_0048c06d();
    /* 0048b774: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b777: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b778: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b77b: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b77e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b783u); f_005ea1cf();
    /* 0048b783: jmp 0x48b7cf */ goto L_0048b7cf;
L_0048b785:; BB(0x0048b785);
    /* 0048b785: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b787: push 0x4b4 */ { u32 v = 0x4b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b78c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b78f: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0048b795: call 0x48c06d */ r_esp -= 4; W32(r_esp, 0x48b79au); f_0048c06d();
    /* 0048b79a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b79d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b79e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b7a1: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b7a4: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b7a9u); f_005ea1cf();
    /* 0048b7a9: jmp 0x48b7cf */ goto L_0048b7cf;
L_0048b7ab:; BB(0x0048b7ab);
    /* 0048b7ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b7ad: push 0x4b3 */ { u32 v = 0x4b3u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b7b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b7b5: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0048b7bb: call 0x48c06d */ r_esp -= 4; W32(r_esp, 0x48b7c0u); f_0048c06d();
    /* 0048b7c0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048b7c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b7c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b7c7: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b7ca: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b7cfu); f_005ea1cf();
L_0048b7cf:; BB(0x0048b7cf);
    /* 0048b7cf: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b7d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b7d2: ret 4 */ FN_RET(0x0048b64b); r_esp += 8; return;
}

void f_0048b7f9(void) /* FUN_0048b7f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b7f9);
    /* 0048b7f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b7fa: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b7fc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b7ff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048b802: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048b805: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048b808: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b80b: sub ecx, 0x4b1 */ {  u32 a = r_ecx; u32 b = 0x4b1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b811: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048b814: cmp dword ptr [ebp - 8], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048b818: ja 0x48b8a6 */ if ((!fC&&!fZ)) goto L_0048b8a6;
L_0048b81e:; BB(0x0048b81e);
    /* 0048b81e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b821: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048b823: mov dl, byte ptr [eax + 0x48b8d0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x48b8d0u))) & 0xffu);
    /* 0048b829: jmp dword ptr [edx*4 + 0x48b8ac] */ { u32 t = R32((u32)(r_edx*4+0x48b8acu)); switch (t) { case 0x48b87bu: goto L_0048b87b; case 0x48b86cu: goto L_0048b86c; case 0x48b88au: goto L_0048b88a; case 0x48b830u: goto L_0048b830; case 0x48b84eu: goto L_0048b84e; case 0x48b85du: goto L_0048b85d; case 0x48b83fu: goto L_0048b83f; case 0x48b899u: goto L_0048b899; case 0x48b8a6u: goto L_0048b8a6; default: UNSUP(0x0048b829, "jump table entry is not a known target"); } }
L_0048b830:; BB(0x0048b830);
    /* 0048b830: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b832: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b835: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0048b838: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b83du); f_005ea1cf();
    /* 0048b83d: jmp 0x48b8a6 */ goto L_0048b8a6;
L_0048b83f:; BB(0x0048b83f);
    /* 0048b83f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b841: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b844: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b847: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b84cu); f_005ea1cf();
    /* 0048b84c: jmp 0x48b8a6 */ goto L_0048b8a6;
L_0048b84e:; BB(0x0048b84e);
    /* 0048b84e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b850: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b853: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0048b856: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b85bu); f_005ea1cf();
    /* 0048b85b: jmp 0x48b8a6 */ goto L_0048b8a6;
L_0048b85d:; BB(0x0048b85d);
    /* 0048b85d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b85f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b862: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0048b865: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b86au); f_005ea1cf();
    /* 0048b86a: jmp 0x48b8a6 */ goto L_0048b8a6;
L_0048b86c:; BB(0x0048b86c);
    /* 0048b86c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b86e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b871: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b874: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b879u); f_005ea1cf();
    /* 0048b879: jmp 0x48b8a6 */ goto L_0048b8a6;
L_0048b87b:; BB(0x0048b87b);
    /* 0048b87b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b87d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b880: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0048b883: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b888u); f_005ea1cf();
    /* 0048b888: jmp 0x48b8a6 */ goto L_0048b8a6;
L_0048b88a:; BB(0x0048b88a);
    /* 0048b88a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b88c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b88f: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0048b892: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b897u); f_005ea1cf();
    /* 0048b897: jmp 0x48b8a6 */ goto L_0048b8a6;
L_0048b899:; BB(0x0048b899);
    /* 0048b899: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b89b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b89e: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 0048b8a1: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48b8a6u); f_005ea1cf();
L_0048b8a6:; BB(0x0048b8a6);
    /* 0048b8a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b8a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b8a9: ret 4 */ FN_RET(0x0048b7f9); r_esp += 8; return;
}

void f_0048b8ed(void) /* FUN_0048b8ed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b8ed);
    /* 0048b8ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b8ee: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b8f0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b8f3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048b8f6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b8f9: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0048b8fc: xor ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b8ff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b902: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 0048b905: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b90c: jmp 0x48b917 */ goto L_0048b917;
L_0048b90e:; BB(0x0048b90e);
    /* 0048b90e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b911: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b914: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048b917:; BB(0x0048b917);
    /* 0048b917: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b91a: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b91d: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48b922u); f_005dd4d2();
    /* 0048b922: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b925: jge 0x48b95d */ if ((fS==fO)) goto L_0048b95d;
L_0048b927:; BB(0x0048b927);
    /* 0048b927: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b92a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b92b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b92e: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b931: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48b936u); f_005dd560();
    /* 0048b936: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048b939: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b93c: cmp dword ptr [edx + 0x6c], 0 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b940: je 0x48b951 */ if (fZ) goto L_0048b951;
L_0048b942:; BB(0x0048b942);
    /* 0048b942: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b947: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b94a: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x48b94fu); f_005ea454();
    /* 0048b94f: jmp 0x48b95b */ goto L_0048b95b;
L_0048b951:; BB(0x0048b951);
    /* 0048b951: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b953: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048b956: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x48b95bu); f_005ea454();
L_0048b95b:; BB(0x0048b95b);
    /* 0048b95b: jmp 0x48b90e */ goto L_0048b90e;
L_0048b95d:; BB(0x0048b95d);
    /* 0048b95d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b95f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b960: ret  */ FN_RET(0x0048b8ed); r_esp += 4; return;
}

void f_0048b961(void) /* FUN_0048b961 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b961);
    /* 0048b961: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b962: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b964: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b965: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048b968: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b96b: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x48b970u); f_005d5d20();
    /* 0048b970: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b973: mov dword ptr [eax], 0x636edc */ W32((u32)(r_eax), 0x636edcu);
    /* 0048b979: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b97c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048b97f: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 0048b985: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b988: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048b98b: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 0048b991: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b994: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b996: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b997: ret 8 */ FN_RET(0x0048b961); r_esp += 12; return;
}

void f_0048b99a(void) /* FUN_0048b99a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b99a);
    /* 0048b99a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b99b: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b99d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b99e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048b9a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b9a4: mov dword ptr [eax], 0x636edc */ W32((u32)(r_eax), 0x636edcu);
    /* 0048b9aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b9ad: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x48b9b2u); f_005d5dfb();
    /* 0048b9b2: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b9b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b9b5: ret  */ FN_RET(0x0048b99a); r_esp += 4; return;
}

void f_0048b9b6(void) /* FUN_0048b9b6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b9b6);
    /* 0048b9b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b9b7: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b9b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b9ba: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048b9bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b9c0: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b9c4: je 0x48b9c8 */ if (fZ) goto L_0048b9c8;
L_0048b9c6:; BB(0x0048b9c6);
    /* 0048b9c6: jmp 0x48b9e8 */ goto L_0048b9e8;
L_0048b9c8:; BB(0x0048b9c8);
    /* 0048b9c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b9ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b9cd: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x48b9d2u); f_005e40dc();
    /* 0048b9d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b9d5: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x48b9dau); f_005ea28a();
    /* 0048b9da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b9dd: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 0048b9e3: call 0x48b3c8 */ r_esp -= 4; W32(r_esp, 0x48b9e8u); f_0048b3c8();
L_0048b9e8:; BB(0x0048b9e8);
    /* 0048b9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b9eb: ret  */ FN_RET(0x0048b9b6); r_esp += 4; return;
}

void f_0048b9ec(void) /* FUN_0048b9ec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048b9ec);
    /* 0048b9ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b9ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b9ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b9f0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048b9f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b9f6: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x48b9fbu); f_005ea2c1();
    /* 0048b9fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048b9fe: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0048ba04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ba08: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0048ba0e: call 0x48b41b */ r_esp -= 4; W32(r_esp, 0x48ba13u); f_0048b41b();
    /* 0048ba13: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ba15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ba16: ret  */ FN_RET(0x0048b9ec); r_esp += 4; return;
}

void f_0048ba17(void) /* FUN_0048ba17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ba17);
    /* 0048ba17: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba18: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ba1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba1b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048ba1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048ba21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ba25: call 0x5d6084 */ r_esp -= 4; W32(r_esp, 0x48ba2au); f_005d6084();
    /* 0048ba2a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ba2d: cmp dword ptr [ecx + 0x7c], 0 */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ba31: je 0x48ba3d */ if (fZ) goto L_0048ba3d;
L_0048ba33:; BB(0x0048ba33);
    /* 0048ba33: mov dword ptr [0x6f7048], 1 */ W32((u32)(0x6f7048u), 0x1u);
L_0048ba3d:; BB(0x0048ba3d);
    /* 0048ba3d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048ba40: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048ba43: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ba45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ba46: ret 4 */ FN_RET(0x0048ba17); r_esp += 8; return;
}

void f_0048ba49(void) /* FUN_0048ba49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ba49);
    /* 0048ba49: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba4a: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ba4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba4d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048ba50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ba53: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 0048ba5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ba5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ba5d: ret  */ FN_RET(0x0048ba49); r_esp += 4; return;
}

void f_0048ba5e(void) /* FUN_0048ba5e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ba5e);
    /* 0048ba5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba5f: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ba61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba62: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048ba65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ba68: call 0x5d667b */ r_esp -= 4; W32(r_esp, 0x48ba6du); f_005d667b();
    /* 0048ba6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ba70: cmp dword ptr [eax + 0x9c], 1 */ {  u32 a = R32((u32)(r_eax+0x9cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ba77: jne 0x48ba82 */ if (!fZ) goto L_0048ba82;
L_0048ba79:; BB(0x0048ba79);
    /* 0048ba79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ba7c: mov dword ptr [0x6f704c], ecx */ W32((u32)(0x6f704cu), r_ecx);
L_0048ba82:; BB(0x0048ba82);
    /* 0048ba82: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ba84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ba85: ret  */ FN_RET(0x0048ba5e); r_esp += 4; return;
}

void f_0048ba86(void) /* FUN_0048ba86 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ba86);
    /* 0048ba86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba87: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ba89: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ba8c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048ba8f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ba92: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x48ba97u); f_005e9d30();
    /* 0048ba97: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ba9a: mov dword ptr [eax], 0x636f4c */ W32((u32)(r_eax), 0x636f4cu);
    /* 0048baa0: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048baa5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48baaau); f_0048ab58();
    /* 0048baaa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048baad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048bab0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bab4: je 0x48bacb */ if (fZ) goto L_0048bacb;
L_0048bab6:; BB(0x0048bab6);
    /* 0048bab6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0048bab9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048baba: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0048babd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048babe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bac1: call 0x48b961 */ r_esp -= 4; W32(r_esp, 0x48bac6u); f_0048b961();
    /* 0048bac6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048bac9: jmp 0x48bad2 */ goto L_0048bad2;
L_0048bacb:; BB(0x0048bacb);
    /* 0048bacb: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0048bad2:; BB(0x0048bad2);
    /* 0048bad2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bad5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bad8: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 0048badb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048bade: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048badf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bae2: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0048bae5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bae8: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0048baeb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048baed: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x48baf0u); call_ind(t); }
    /* 0048baf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048baf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048baf4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048baf7: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0048bafa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bafd: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0048bb00: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bb02: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x48bb05u); call_ind(t); }
    /* 0048bb05: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bb08: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0048bb0b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bb0e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0048bb11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bb13: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48bb16u); call_ind(t); }
    /* 0048bb16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb1e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bb21: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0048bb24: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x48bb29u); f_005d5ff2();
    /* 0048bb29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb2b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bb2e: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x48bb33u); f_005ea514();
    /* 0048bb33: push 0x4da */ { u32 v = 0x4dau; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bb3b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48bb40u); f_005ea0c3();
    /* 0048bb40: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048bb43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bb47: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48bb4cu); f_005ea1cf();
    /* 0048bb4c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bb4f: call 0x5e9e15 */ r_esp -= 4; W32(r_esp, 0x48bb54u); f_005e9e15();
    /* 0048bb54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bb59: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x48bb5eu); f_005ea454();
    /* 0048bb5e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bb61: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0048bb64: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 0048bb67: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bb6a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bb6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bb6d: ret 0xc */ FN_RET(0x0048ba86); r_esp += 16; return;
}

void f_0048bb70(void) /* FUN_0048bb70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048bb70);
    /* 0048bb70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb71: mov ebp, esp */ r_ebp = r_esp;
    /* 0048bb73: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048bb76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048bb79: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bb7c: mov dword ptr [eax], 0x636f4c */ W32((u32)(r_eax), 0x636f4cu);
    /* 0048bb82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bb85: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0048bb88: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048bb8b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bb8e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048bb91: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bb95: je 0x48bba8 */ if (fZ) goto L_0048bba8;
L_0048bb97:; BB(0x0048bb97);
    /* 0048bb97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bb9c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048bb9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bba1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48bba3u); call_ind(t); }
    /* 0048bba3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048bba6: jmp 0x48bbaf */ goto L_0048bbaf;
L_0048bba8:; BB(0x0048bba8);
    /* 0048bba8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0048bbaf:; BB(0x0048bbaf);
    /* 0048bbaf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bbb2: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 0048bbb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bbbc: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x48bbc1u); f_005e9dde();
    /* 0048bbc1: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bbc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bbc4: ret  */ FN_RET(0x0048bb70); r_esp += 4; return;
}

void f_0048bbc5(void) /* FUN_0048bbc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048bbc5);
    /* 0048bbc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bbc6: mov ebp, esp */ r_ebp = r_esp;
    /* 0048bbc8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048bbcb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048bbce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048bbd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bbd2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bbd5: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x48bbdau); f_005d9738();
    /* 0048bbda: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048bbdd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bbe1: je 0x48bc37 */ if (fZ) goto L_0048bc37;
L_0048bbe3:; BB(0x0048bbe3);
    /* 0048bbe3: cmp dword ptr [0x6f7048], 0 */ {  u32 a = R32((u32)(0x6f7048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bbea: je 0x48bc24 */ if (fZ) goto L_0048bc24;
L_0048bbec:; BB(0x0048bbec);
    /* 0048bbec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bbef: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0048bbf2: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0048bbf5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048bbf8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bbfc: je 0x48bc11 */ if (fZ) goto L_0048bc11;
L_0048bbfe:; BB(0x0048bbfe);
    /* 0048bbfe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc01: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0048bc04: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc07: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0048bc0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bc0c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48bc0fu); call_ind(t); }
    /* 0048bc0f: jmp 0x48bc22 */ goto L_0048bc22;
L_0048bc11:; BB(0x0048bc11);
    /* 0048bc11: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc14: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0048bc17: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc1a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0048bc1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bc1f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48bc22u); call_ind(t); }
L_0048bc22:; BB(0x0048bc22);
    /* 0048bc22: jmp 0x48bc35 */ goto L_0048bc35;
L_0048bc24:; BB(0x0048bc24);
    /* 0048bc24: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc27: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0048bc2a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc2d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0048bc30: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bc32: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48bc35u); call_ind(t); }
L_0048bc35:; BB(0x0048bc35);
    /* 0048bc35: jmp 0x48bc48 */ goto L_0048bc48;
L_0048bc37:; BB(0x0048bc37);
    /* 0048bc37: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc3a: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0048bc3d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc40: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0048bc43: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bc45: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48bc48u); call_ind(t); }
L_0048bc48:; BB(0x0048bc48);
    /* 0048bc48: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048bc4b: cmp dword ptr [eax + 0x18], 2 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bc4f: jne 0x48bcc4 */ if (!fZ) goto L_0048bcc4;
L_0048bc51:; BB(0x0048bc51);
    /* 0048bc51: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bc55: je 0x48bc97 */ if (fZ) goto L_0048bc97;
L_0048bc57:; BB(0x0048bc57);
    /* 0048bc57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc5a: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0048bc5d: call 0x48ba49 */ r_esp -= 4; W32(r_esp, 0x48bc62u); f_0048ba49();
    /* 0048bc62: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc65: mov eax, dword ptr [0x6f704c] */ r_eax = R32((u32)(0x6f704cu));
    /* 0048bc6a: cmp eax, dword ptr [edx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bc6d: jne 0x48bc8b */ if (!fZ) goto L_0048bc8b;
L_0048bc6f:; BB(0x0048bc6f);
    /* 0048bc6f: mov dword ptr [0x6f704c], 0 */ W32((u32)(0x6f704cu), 0x0u);
    /* 0048bc79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc7c: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0048bc7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bc80: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc83: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0048bc86: call 0x48b64b */ r_esp -= 4; W32(r_esp, 0x48bc8bu); f_0048b64b();
L_0048bc8b:; BB(0x0048bc8b);
    /* 0048bc8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048bc8e: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 0048bc95: jmp 0x48bcba */ goto L_0048bcba;
L_0048bc97:; BB(0x0048bc97);
    /* 0048bc97: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bc9a: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 0048bc9d: call 0x48ba49 */ r_esp -= 4; W32(r_esp, 0x48bca2u); f_0048ba49();
    /* 0048bca2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bca5: mov ecx, dword ptr [0x6f704c] */ r_ecx = R32((u32)(0x6f704cu));
    /* 0048bcab: cmp ecx, dword ptr [eax + 0x6c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bcae: jne 0x48bcba */ if (!fZ) goto L_0048bcba;
L_0048bcb0:; BB(0x0048bcb0);
    /* 0048bcb0: mov dword ptr [0x6f704c], 0 */ W32((u32)(0x6f704cu), 0x0u);
L_0048bcba:; BB(0x0048bcba);
    /* 0048bcba: mov dword ptr [0x6f7048], 0 */ W32((u32)(0x6f7048u), 0x0u);
L_0048bcc4:; BB(0x0048bcc4);
    /* 0048bcc4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048bcc7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048bcca: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bccc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bccd: ret 4 */ FN_RET(0x0048bbc5); r_esp += 8; return;
}

void f_0048bcd0(void) /* FUN_0048bcd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048bcd0);
    /* 0048bcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bcd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048bcd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bcd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048bcd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bcda: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x48bcdfu); f_005ea2c1();
    /* 0048bcdf: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bce1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bce2: ret  */ FN_RET(0x0048bcd0); r_esp += 4; return;
}

void f_0048bce3(void) /* FUN_0048bce3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048bce3);
    /* 0048bce3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bce4: mov ebp, esp */ r_ebp = r_esp;
    /* 0048bce6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bce7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048bcea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bced: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x48bcf2u); f_005ea28a();
    /* 0048bcf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bcf5: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0048bcf8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bcfb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0048bcfe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bd00: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48bd03u); call_ind(t); }
    /* 0048bd03: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bd05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bd06: ret  */ FN_RET(0x0048bce3); r_esp += 4; return;
}

void f_0048bd07(void) /* FUN_0048bd07 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048bd07);
    /* 0048bd07: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd08: mov ebp, esp */ r_ebp = r_esp;
    /* 0048bd0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd0b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048bd0e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048bd11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bd15: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x48bd1au); f_005d975e();
    /* 0048bd1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048bd1d: sub ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048bd20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd21: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bd24: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 0048bd27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bd2a: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0048bd2d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048bd2f: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x48bd32u); call_ind(t); }
    /* 0048bd32: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bd34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bd35: ret 4 */ FN_RET(0x0048bd07); r_esp += 8; return;
}

void f_0048bd38(void) /* FUN_0048bd38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048bd38);
    /* 0048bd38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd39: mov ebp, esp */ r_ebp = r_esp;
    /* 0048bd3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd3c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048bd3f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048bd42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd43: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048bd46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bd4a: call 0x5e9f7d */ r_esp -= 4; W32(r_esp, 0x48bd4fu); f_005e9f7d();
    /* 0048bd4f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0048bd52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048bd56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bd5a: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0048bd5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bd60: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0048bd63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bd65: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48bd68u); call_ind(t); }
    /* 0048bd68: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bd6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bd6b: ret 8 */ FN_RET(0x0048bd38); r_esp += 12; return;
}

void f_0048bd70(void) /* FUN_0048bd70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048bd70);
    /* 0048bd70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd71: mov ebp, esp */ r_ebp = r_esp;
    /* 0048bd73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048bd77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bd7a: call 0x48ae81 */ r_esp -= 4; W32(r_esp, 0x48bd7fu); f_0048ae81();
    /* 0048bd7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048bd82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048bd85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bd87: je 0x48bd95 */ if (fZ) goto L_0048bd95;
L_0048bd89:; BB(0x0048bd89);
    /* 0048bd89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bd8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd8d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48bd92u); f_0048ac1b();
    /* 0048bd92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048bd95:; BB(0x0048bd95);
    /* 0048bd95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bd98: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bd9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bd9b: ret 4 */ FN_RET(0x0048bd70); r_esp += 8; return;
}

void f_0048bda0(void) /* FUN_0048bda0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048bda0);
    /* 0048bda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048bda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bda4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048bda7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bdaa: call 0x48b99a */ r_esp -= 4; W32(r_esp, 0x48bdafu); f_0048b99a();
    /* 0048bdaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048bdb2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048bdb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bdb7: je 0x48bdc5 */ if (fZ) goto L_0048bdc5;
L_0048bdb9:; BB(0x0048bdb9);
    /* 0048bdb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bdbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bdbd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48bdc2u); f_0048ac1b();
    /* 0048bdc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048bdc5:; BB(0x0048bdc5);
    /* 0048bdc5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bdc8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bdca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bdcb: ret 4 */ FN_RET(0x0048bda0); r_esp += 8; return;
}

void f_0048bdd0(void) /* FUN_0048bdd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048bdd0);
    /* 0048bdd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bdd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048bdd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bdd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048bdd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bdda: call 0x48bb70 */ r_esp -= 4; W32(r_esp, 0x48bddfu); f_0048bb70();
    /* 0048bddf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048bde2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048bde5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bde7: je 0x48bdf5 */ if (fZ) goto L_0048bdf5;
L_0048bde9:; BB(0x0048bde9);
    /* 0048bde9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bdec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bded: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48bdf2u); f_0048ac1b();
    /* 0048bdf2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048bdf5:; BB(0x0048bdf5);
    /* 0048bdf5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bdf8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bdfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bdfb: ret 4 */ FN_RET(0x0048bdd0); r_esp += 8; return;
}

void f_0048be00(void) /* FUN_0048be00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048be00);
    /* 0048be00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048be01: mov ebp, esp */ r_ebp = r_esp;
    /* 0048be03: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048be06: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048be09: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048be0c: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x48be11u); f_005dfbf0();
    /* 0048be11: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048be14: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048be17: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x48be1cu); f_005dd290();
    /* 0048be1c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048be1f: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048be22: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x48be27u); f_005dd290();
    /* 0048be27: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048be2a: mov dword ptr [eax], 0x636f94 */ W32((u32)(r_eax), 0x636f94u);
    /* 0048be30: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048be33: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048be36: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0048be39: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048be3c: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0048be43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048be46: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0048be4d: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0048be4f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48be54u); f_0048ab58();
    /* 0048be54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048be57: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048be5a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048be5e: je 0x48be6d */ if (fZ) goto L_0048be6d;
L_0048be60:; BB(0x0048be60);
    /* 0048be60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048be63: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x48be68u); f_005e3fb0();
    /* 0048be68: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048be6b: jmp 0x48be74 */ goto L_0048be74;
L_0048be6d:; BB(0x0048be6d);
    /* 0048be6d: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0048be74:; BB(0x0048be74);
    /* 0048be74: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048be77: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048be7a: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0048be7d: push 0x1d4ff */ { u32 v = 0x1d4ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048be82: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048be85: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0048be88: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48be8du); f_005ea0c3();
    /* 0048be8d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048be90: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0048be93: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048be96: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0048be99: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048be9b: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x48be9eu); call_ind(t); }
    /* 0048be9e: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bea0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bea3: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0048bea6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bea9: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0048beac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048beae: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48beb1u); call_ind(t); }
    /* 0048beb1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048beb4: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0048beb7: mov dword ptr [ecx + 0x6c], 0xa */ W32((u32)(r_ecx+0x6cu), 0xau);
    /* 0048bebe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bec1: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0048bec4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bec7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0048beca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048becc: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x48becfu); call_ind(t); }
    /* 0048becf: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bed1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48bed6u); f_0048ab58();
    /* 0048bed6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048bed9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048bedc: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bee0: je 0x48beef */ if (fZ) goto L_0048beef;
L_0048bee2:; BB(0x0048bee2);
    /* 0048bee2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bee5: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x48beeau); f_005e3fb0();
    /* 0048beea: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048beed: jmp 0x48bef6 */ goto L_0048bef6;
L_0048beef:; BB(0x0048beef);
    /* 0048beef: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0048bef6:; BB(0x0048bef6);
    /* 0048bef6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bef9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048befc: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 0048beff: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bf02: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0048bf05: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bf08: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0048bf0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bf0d: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48bf10u); call_ind(t); }
    /* 0048bf10: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bf13: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0048bf16: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bf19: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0048bf1c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bf1e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48bf21u); call_ind(t); }
    /* 0048bf21: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bf26: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48bf2bu); f_0048ab58();
    /* 0048bf2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048bf2e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048bf31: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bf35: je 0x48bf48 */ if (fZ) goto L_0048bf48;
L_0048bf37:; BB(0x0048bf37);
    /* 0048bf37: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bf3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bf3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bf3e: call 0x48ac70 */ r_esp -= 4; W32(r_esp, 0x48bf43u); f_0048ac70();
    /* 0048bf43: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0048bf46: jmp 0x48bf4f */ goto L_0048bf4f;
L_0048bf48:; BB(0x0048bf48);
    /* 0048bf48: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0048bf4f:; BB(0x0048bf4f);
    /* 0048bf4f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bf52: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048bf55: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 0048bf58: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bf5b: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0048bf5e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bf61: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0048bf64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bf66: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48bf69u); call_ind(t); }
    /* 0048bf69: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bf6c: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0048bf6f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bf72: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0048bf75: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048bf77: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48bf7au); call_ind(t); }
    /* 0048bf7a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bf7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bf7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bf80: ret 4 */ FN_RET(0x0048be00); r_esp += 8; return;
}

void f_0048bf83(void) /* FUN_0048bf83 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048bf83);
    /* 0048bf83: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bf84: mov ebp, esp */ r_ebp = r_esp;
    /* 0048bf86: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048bf89: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048bf8c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048bf8f: mov dword ptr [eax], 0x636f94 */ W32((u32)(r_eax), 0x636f94u);
    /* 0048bf95: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048bf98: call 0x48c396 */ r_esp -= 4; W32(r_esp, 0x48bf9du); f_0048c396();
    /* 0048bf9d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048bfa0: cmp dword ptr [ecx + 0x58], 0 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bfa4: je 0x48bfdd */ if (fZ) goto L_0048bfdd;
L_0048bfa6:; BB(0x0048bfa6);
    /* 0048bfa6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048bfa9: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0048bfac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048bfaf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048bfb2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048bfb5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bfb9: je 0x48bfcc */ if (fZ) goto L_0048bfcc;
L_0048bfbb:; BB(0x0048bfbb);
    /* 0048bfbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bfbd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bfc0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048bfc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048bfc5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48bfc7u); call_ind(t); }
    /* 0048bfc7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048bfca: jmp 0x48bfd3 */ goto L_0048bfd3;
L_0048bfcc:; BB(0x0048bfcc);
    /* 0048bfcc: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0048bfd3:; BB(0x0048bfd3);
    /* 0048bfd3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048bfd6: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
L_0048bfdd:; BB(0x0048bfdd);
    /* 0048bfdd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048bfe0: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0048bfe3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048bfe6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048bfe9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048bfec: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bff0: je 0x48c003 */ if (fZ) goto L_0048c003;
L_0048bff2:; BB(0x0048bff2);
    /* 0048bff2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bff4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bff7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048bff9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bffc: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48bffeu); call_ind(t); }
    /* 0048bffe: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048c001: jmp 0x48c00a */ goto L_0048c00a;
L_0048c003:; BB(0x0048c003);
    /* 0048c003: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0048c00a:; BB(0x0048c00a);
    /* 0048c00a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c00d: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 0048c014: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c017: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0048c01a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048c01d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048c020: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048c023: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c027: je 0x48c03a */ if (fZ) goto L_0048c03a;
L_0048c029:; BB(0x0048c029);
    /* 0048c029: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c02b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048c02e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048c030: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048c033: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48c035u); call_ind(t); }
    /* 0048c035: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048c038: jmp 0x48c041 */ goto L_0048c041;
L_0048c03a:; BB(0x0048c03a);
    /* 0048c03a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0048c041:; BB(0x0048c041);
    /* 0048c041: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c044: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 0048c04b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c04e: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c051: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x48c056u); f_005dd2d3();
    /* 0048c056: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c059: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c05c: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x48c061u); f_005dd2d3();
    /* 0048c061: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c064: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x48c069u); f_005dfc0f();
    /* 0048c069: mov esp, ebp */ r_esp = r_ebp;
    /* 0048c06b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048c06c: ret  */ FN_RET(0x0048bf83); r_esp += 4; return;
}

void f_0048c06d(void) /* FUN_0048c06d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048c06d);
    /* 0048c06d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048c06e: mov ebp, esp */ r_ebp = r_esp;
    /* 0048c070: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048c073: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048c076: cmp dword ptr [ebp + 8], 0x4b4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4b4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c07d: je 0x48c0c5 */ if (fZ) goto L_0048c0c5;
L_0048c07f:; BB(0x0048c07f);
    /* 0048c07f: cmp dword ptr [ebp + 8], 0x4b7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4b7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c086: je 0x48c0c5 */ if (fZ) goto L_0048c0c5;
L_0048c088:; BB(0x0048c088);
    /* 0048c088: cmp dword ptr [ebp + 8], 0x4b5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4b5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c08f: je 0x48c0c5 */ if (fZ) goto L_0048c0c5;
L_0048c091:; BB(0x0048c091);
    /* 0048c091: cmp dword ptr [ebp + 8], 0x4b6 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4b6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c098: je 0x48c0c5 */ if (fZ) goto L_0048c0c5;
L_0048c09a:; BB(0x0048c09a);
    /* 0048c09a: cmp dword ptr [ebp + 8], 0x4b2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4b2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c0a1: je 0x48c0c5 */ if (fZ) goto L_0048c0c5;
L_0048c0a3:; BB(0x0048c0a3);
    /* 0048c0a3: cmp dword ptr [ebp + 8], 0x4b1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c0aa: je 0x48c0c5 */ if (fZ) goto L_0048c0c5;
L_0048c0ac:; BB(0x0048c0ac);
    /* 0048c0ac: cmp dword ptr [ebp + 8], 0x4b3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4b3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c0b3: je 0x48c0c5 */ if (fZ) goto L_0048c0c5;
L_0048c0b5:; BB(0x0048c0b5);
    /* 0048c0b5: cmp dword ptr [ebp + 8], 0x4cd */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4cdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c0bc: je 0x48c0c5 */ if (fZ) goto L_0048c0c5;
L_0048c0be:; BB(0x0048c0be);
    /* 0048c0be: mov dword ptr [ebp + 8], 0x4b3 */ W32((u32)(r_ebp+0x8u), 0x4b3u);
L_0048c0c5:; BB(0x0048c0c5);
    /* 0048c0c5: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c0c9: je 0x48c0da */ if (fZ) goto L_0048c0da;
L_0048c0cb:; BB(0x0048c0cb);
    /* 0048c0cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048c0ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c0cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c0d2: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 0048c0d5: call 0x48b7f9 */ r_esp -= 4; W32(r_esp, 0x48c0dau); f_0048b7f9();
L_0048c0da:; BB(0x0048c0da);
    /* 0048c0da: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c0de: jne 0x48c0f0 */ if (!fZ) goto L_0048c0f0;
L_0048c0e0:; BB(0x0048c0e0);
    /* 0048c0e0: mov edx, dword ptr [0x6f7050] */ r_edx = R32((u32)(0x6f7050u));
    /* 0048c0e6: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c0e9: jne 0x48c0f0 */ if (!fZ) goto L_0048c0f0;
L_0048c0eb:; BB(0x0048c0eb);
    /* 0048c0eb: jmp 0x48c34f */ goto L_0048c34f;
L_0048c0f0:; BB(0x0048c0f0);
    /* 0048c0f0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c0f3: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0048c0fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c0fd: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0048c100: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c103: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0048c106: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048c108: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48c10bu); call_ind(t); }
    /* 0048c10b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c10d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c110: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0048c113: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x48c118u); f_005e4060();
    /* 0048c118: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048c11b: mov dword ptr [0x6f7050], ecx */ W32((u32)(0x6f7050u), r_ecx);
    /* 0048c121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c124: call 0x48c396 */ r_esp -= 4; W32(r_esp, 0x48c129u); f_0048c396();
    /* 0048c129: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c12c: call 0x48d172 */ r_esp -= 4; W32(r_esp, 0x48c131u); f_0048d172();
    /* 0048c131: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048c134: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0048c137: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048c13a: sub eax, 0x4b1 */ {  u32 a = r_eax; u32 b = 0x4b1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048c13f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048c142: cmp dword ptr [ebp - 0x10], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048c146: ja 0x48c304 */ if ((!fC&&!fZ)) goto L_0048c304;
L_0048c14c:; BB(0x0048c14c);
    /* 0048c14c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048c14f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c151: mov cl, byte ptr [edx + 0x48c379] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+0x48c379u))) & 0xffu);
    /* 0048c157: jmp dword ptr [ecx*4 + 0x48c355] */ { u32 t = R32((u32)(r_ecx*4+0x48c355u)); switch (t) { case 0x48c26fu: goto L_0048c26f; case 0x48c23au: goto L_0048c23a; case 0x48c2a6u: goto L_0048c2a6; case 0x48c15eu: goto L_0048c15e; case 0x48c1ccu: goto L_0048c1cc; case 0x48c203u: goto L_0048c203; case 0x48c195u: goto L_0048c195; case 0x48c2dau: goto L_0048c2da; case 0x48c304u: goto L_0048c304; default: UNSUP(0x0048c157, "jump table entry is not a known target"); } }
L_0048c15e:; BB(0x0048c15e);
    /* 0048c15e: push 0x46d */ { u32 v = 0x46du; r_esp -= 4; W32(r_esp, v); }
    /* 0048c163: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c166: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0048c169: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x48c16eu); f_005e5ec3();
    /* 0048c16e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c170: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c173: call 0x48c477 */ r_esp -= 4; W32(r_esp, 0x48c178u); f_0048c477();
    /* 0048c178: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c17a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c17d: call 0x48c9b7 */ r_esp -= 4; W32(r_esp, 0x48c182u); f_0048c9b7();
    /* 0048c182: mov dword ptr [ebp - 4], 0x19d */ W32((u32)(r_ebp+0xfffffffcu), 0x19du);
    /* 0048c189: mov dword ptr [ebp - 8], 0x148 */ W32((u32)(r_ebp+0xfffffff8u), 0x148u);
    /* 0048c190: jmp 0x48c336 */ goto L_0048c336;
L_0048c195:; BB(0x0048c195);
    /* 0048c195: push 0x47f */ { u32 v = 0x47fu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c19a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c19d: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0048c1a0: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x48c1a5u); f_005e5ec3();
    /* 0048c1a5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c1a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c1aa: call 0x48c477 */ r_esp -= 4; W32(r_esp, 0x48c1afu); f_0048c477();
    /* 0048c1af: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c1b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c1b4: call 0x48c9b7 */ r_esp -= 4; W32(r_esp, 0x48c1b9u); f_0048c9b7();
    /* 0048c1b9: mov dword ptr [ebp - 4], 0x19d */ W32((u32)(r_ebp+0xfffffffcu), 0x19du);
    /* 0048c1c0: mov dword ptr [ebp - 8], 0x148 */ W32((u32)(r_ebp+0xfffffff8u), 0x148u);
    /* 0048c1c7: jmp 0x48c336 */ goto L_0048c336;
L_0048c1cc:; BB(0x0048c1cc);
    /* 0048c1cc: push 0x48e */ { u32 v = 0x48eu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c1d1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c1d4: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0048c1d7: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x48c1dcu); f_005e5ec3();
    /* 0048c1dc: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c1de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c1e1: call 0x48c477 */ r_esp -= 4; W32(r_esp, 0x48c1e6u); f_0048c477();
    /* 0048c1e6: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c1e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c1eb: call 0x48c9b7 */ r_esp -= 4; W32(r_esp, 0x48c1f0u); f_0048c9b7();
    /* 0048c1f0: mov dword ptr [ebp - 4], 0x19d */ W32((u32)(r_ebp+0xfffffffcu), 0x19du);
    /* 0048c1f7: mov dword ptr [ebp - 8], 0x148 */ W32((u32)(r_ebp+0xfffffff8u), 0x148u);
    /* 0048c1fe: jmp 0x48c336 */ goto L_0048c336;
L_0048c203:; BB(0x0048c203);
    /* 0048c203: push 0x486 */ { u32 v = 0x486u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c208: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c20b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0048c20e: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x48c213u); f_005e5ec3();
    /* 0048c213: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c215: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c218: call 0x48c477 */ r_esp -= 4; W32(r_esp, 0x48c21du); f_0048c477();
    /* 0048c21d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c21f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c222: call 0x48c9b7 */ r_esp -= 4; W32(r_esp, 0x48c227u); f_0048c9b7();
    /* 0048c227: mov dword ptr [ebp - 4], 0x19d */ W32((u32)(r_ebp+0xfffffffcu), 0x19du);
    /* 0048c22e: mov dword ptr [ebp - 8], 0x148 */ W32((u32)(r_ebp+0xfffffff8u), 0x148u);
    /* 0048c235: jmp 0x48c336 */ goto L_0048c336;
L_0048c23a:; BB(0x0048c23a);
    /* 0048c23a: push 0x15fe0 */ { u32 v = 0x15fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c23f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c242: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0048c245: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x48c24au); f_005e5ec3();
    /* 0048c24a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c24d: call 0x48d11c */ r_esp -= 4; W32(r_esp, 0x48c252u); f_0048d11c();
    /* 0048c252: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c254: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c257: call 0x48c477 */ r_esp -= 4; W32(r_esp, 0x48c25cu); f_0048c477();
    /* 0048c25c: mov dword ptr [ebp - 4], 0x19d */ W32((u32)(r_ebp+0xfffffffcu), 0x19du);
    /* 0048c263: mov dword ptr [ebp - 8], 0x148 */ W32((u32)(r_ebp+0xfffffff8u), 0x148u);
    /* 0048c26a: jmp 0x48c336 */ goto L_0048c336;
L_0048c26f:; BB(0x0048c26f);
    /* 0048c26f: push 0x49e */ { u32 v = 0x49eu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c274: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c277: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0048c27a: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x48c27fu); f_005e5ec3();
    /* 0048c27f: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c281: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c284: call 0x48c477 */ r_esp -= 4; W32(r_esp, 0x48c289u); f_0048c477();
    /* 0048c289: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c28b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c28e: call 0x48c9b7 */ r_esp -= 4; W32(r_esp, 0x48c293u); f_0048c9b7();
    /* 0048c293: mov dword ptr [ebp - 4], 0x19d */ W32((u32)(r_ebp+0xfffffffcu), 0x19du);
    /* 0048c29a: mov dword ptr [ebp - 8], 0x148 */ W32((u32)(r_ebp+0xfffffff8u), 0x148u);
    /* 0048c2a1: jmp 0x48c336 */ goto L_0048c336;
L_0048c2a6:; BB(0x0048c2a6);
    /* 0048c2a6: push 0x41c */ { u32 v = 0x41cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c2ab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c2ae: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0048c2b1: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x48c2b6u); f_005e5ec3();
    /* 0048c2b6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c2b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c2bb: call 0x48c477 */ r_esp -= 4; W32(r_esp, 0x48c2c0u); f_0048c477();
    /* 0048c2c0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c2c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c2c5: call 0x48c9b7 */ r_esp -= 4; W32(r_esp, 0x48c2cau); f_0048c9b7();
    /* 0048c2ca: mov dword ptr [ebp - 4], 0x19d */ W32((u32)(r_ebp+0xfffffffcu), 0x19du);
    /* 0048c2d1: mov dword ptr [ebp - 8], 0x148 */ W32((u32)(r_ebp+0xfffffff8u), 0x148u);
    /* 0048c2d8: jmp 0x48c336 */ goto L_0048c336;
L_0048c2da:; BB(0x0048c2da);
    /* 0048c2da: push 0x4cc */ { u32 v = 0x4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c2df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c2e2: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0048c2e5: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x48c2eau); f_005e5ec3();
    /* 0048c2ea: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c2ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c2ef: call 0x48c477 */ r_esp -= 4; W32(r_esp, 0x48c2f4u); f_0048c477();
    /* 0048c2f4: mov dword ptr [ebp - 4], 0x19d */ W32((u32)(r_ebp+0xfffffffcu), 0x19du);
    /* 0048c2fb: mov dword ptr [ebp - 8], 0x148 */ W32((u32)(r_ebp+0xfffffff8u), 0x148u);
    /* 0048c302: jmp 0x48c336 */ goto L_0048c336;
L_0048c304:; BB(0x0048c304);
    /* 0048c304: push 0x41c */ { u32 v = 0x41cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c309: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c30c: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0048c30f: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x48c314u); f_005e5ec3();
    /* 0048c314: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c316: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c319: call 0x48c477 */ r_esp -= 4; W32(r_esp, 0x48c31eu); f_0048c477();
    /* 0048c31e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c320: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c323: call 0x48c9b7 */ r_esp -= 4; W32(r_esp, 0x48c328u); f_0048c9b7();
    /* 0048c328: mov dword ptr [ebp - 4], 0x19d */ W32((u32)(r_ebp+0xfffffffcu), 0x19du);
    /* 0048c32f: mov dword ptr [ebp - 8], 0x148 */ W32((u32)(r_ebp+0xfffffff8u), 0x148u);
L_0048c336:; BB(0x0048c336);
    /* 0048c336: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048c339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c33a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c33d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c33e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c341: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 0048c344: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c347: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0048c34a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048c34c: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x48c34fu); call_ind(t); }
L_0048c34f:; BB(0x0048c34f);
    /* 0048c34f: mov esp, ebp */ r_esp = r_ebp;
    /* 0048c351: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048c352: ret 8 */ FN_RET(0x0048c06d); r_esp += 12; return;
}

void f_0048c396(void) /* FUN_0048c396 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048c396);
    /* 0048c396: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048c397: mov ebp, esp */ r_ebp = r_esp;
    /* 0048c399: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048c39c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0048c39f:; BB(0x0048c39f);
    /* 0048c39f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c3a2: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c3a5: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48c3aau); f_005dd4d2();
    /* 0048c3aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c3ac: je 0x48c40e */ if (fZ) goto L_0048c40e;
L_0048c3ae:; BB(0x0048c3ae);
    /* 0048c3ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3b0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c3b3: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c3b6: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48c3bbu); f_005dd560();
    /* 0048c3bb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048c3be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c3c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3c2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c3c5: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c3c8: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x48c3cdu); f_005dd469();
    /* 0048c3cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c3d2: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x48c3d7u); f_005e4060();
    /* 0048c3d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c3da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048c3dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c3df: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48c3e2u); call_ind(t); }
    /* 0048c3e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c3e5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048c3e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048c3eb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048c3ee: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c3f2: je 0x48c405 */ if (fZ) goto L_0048c405;
L_0048c3f4:; BB(0x0048c3f4);
    /* 0048c3f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3f6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c3f9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048c3fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c3fe: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48c400u); call_ind(t); }
    /* 0048c400: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048c403: jmp 0x48c40c */ goto L_0048c40c;
L_0048c405:; BB(0x0048c405);
    /* 0048c405: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0048c40c:; BB(0x0048c40c);
    /* 0048c40c: jmp 0x48c39f */ goto L_0048c39f;
L_0048c40e:; BB(0x0048c40e);
    /* 0048c40e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c411: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c414: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48c419u); f_005dd4d2();
    /* 0048c419: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c41b: je 0x48c473 */ if (fZ) goto L_0048c473;
L_0048c41d:; BB(0x0048c41d);
    /* 0048c41d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c41f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c422: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c425: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48c42au); f_005dd560();
    /* 0048c42a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048c42d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048c430: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c431: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c434: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c437: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x48c43cu); f_005dd469();
    /* 0048c43c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048c43f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048c441: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048c444: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x48c447u); call_ind(t); }
    /* 0048c447: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048c44a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0048c44d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048c450: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0048c453: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c457: je 0x48c46a */ if (fZ) goto L_0048c46a;
L_0048c459:; BB(0x0048c459);
    /* 0048c459: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c45b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048c45e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048c460: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048c463: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48c465u); call_ind(t); }
    /* 0048c465: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048c468: jmp 0x48c471 */ goto L_0048c471;
L_0048c46a:; BB(0x0048c46a);
    /* 0048c46a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0048c471:; BB(0x0048c471);
    /* 0048c471: jmp 0x48c40e */ goto L_0048c40e;
L_0048c473:; BB(0x0048c473);
    /* 0048c473: mov esp, ebp */ r_esp = r_ebp;
    /* 0048c475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048c476: ret  */ FN_RET(0x0048c396); r_esp += 4; return;
}

void f_0048c477(void) /* FUN_0048c477 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048c477);
    /* 0048c477: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048c478: mov ebp, esp */ r_ebp = r_esp;
    /* 0048c47a: sub esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048c480: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 0048c486: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048c48d: jmp 0x48c498 */ goto L_0048c498;
L_0048c48f:; BB(0x0048c48f);
    /* 0048c48f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c492: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048c495: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048c498:; BB(0x0048c498);
    /* 0048c498: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c49b: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048c49e: jge 0x48c970 */ if ((fS==fO)) goto L_0048c970;
L_0048c4a4:; BB(0x0048c4a4);
    /* 0048c4a4: mov edx, dword ptr [0x6f7050] */ r_edx = R32((u32)(0x6f7050u));
    /* 0048c4aa: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0048c4b0: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 0048c4b6: sub eax, 0x4b1 */ {  u32 a = r_eax; u32 b = 0x4b1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048c4bb: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0048c4c1: cmp dword ptr [ebp - 0xa8], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048c4c8: ja 0x48c883 */ if ((!fC&&!fZ)) goto L_0048c883;
L_0048c4ce:; BB(0x0048c4ce);
    /* 0048c4ce: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 0048c4d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c4d6: mov cl, byte ptr [edx + 0x48c99a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+0x48c99au))) & 0xffu);
    /* 0048c4dc: jmp dword ptr [ecx*4 + 0x48c976] */ { u32 t = R32((u32)(r_ecx*4+0x48c976u)); switch (t) { case 0x48c72cu: goto L_0048c72c; case 0x48c6b7u: goto L_0048c6b7; case 0x48c7a1u: goto L_0048c7a1; case 0x48c4e3u: goto L_0048c4e3; case 0x48c5cdu: goto L_0048c5cd; case 0x48c642u: goto L_0048c642; case 0x48c558u: goto L_0048c558; case 0x48c813u: goto L_0048c813; case 0x48c883u: goto L_0048c883; default: UNSUP(0x0048c4dc, "jump table entry is not a known target"); } }
L_0048c4e3:; BB(0x0048c4e3);
    /* 0048c4e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c4e6: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c4e9: mov ecx, dword ptr [eax + 0x68b458] */ r_ecx = R32((u32)(r_eax+0x68b458u));
    /* 0048c4ef: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0048c4f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c4f8: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c4fb: mov eax, dword ptr [edx + 0x68b45c] */ r_eax = R32((u32)(r_edx+0x68b45cu));
    /* 0048c501: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0048c507: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c50a: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c50d: mov edx, dword ptr [ecx + 0x68b460] */ r_edx = R32((u32)(r_ecx+0x68b460u));
    /* 0048c513: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048c516: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c519: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c51c: mov ecx, dword ptr [eax + 0x68b464] */ r_ecx = R32((u32)(r_eax+0x68b464u));
    /* 0048c522: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048c525: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c528: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c52b: mov eax, dword ptr [edx + 0x68b468] */ r_eax = R32((u32)(r_edx+0x68b468u));
    /* 0048c531: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0048c537: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c53a: shl ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048c53d: add ecx, 0x68b538 */ {  u32 a = r_ecx; u32 b = 0x68b538u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c544: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 0048c54a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c54b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48c550u); f_00624510();
    /* 0048c550: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c553: jmp 0x48c883 */ goto L_0048c883;
L_0048c558:; BB(0x0048c558);
    /* 0048c558: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c55b: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c55e: mov ecx, dword ptr [eax + 0x68a8b0] */ r_ecx = R32((u32)(r_eax+0x68a8b0u));
    /* 0048c564: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0048c56a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c56d: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c570: mov eax, dword ptr [edx + 0x68a8b4] */ r_eax = R32((u32)(r_edx+0x68a8b4u));
    /* 0048c576: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0048c57c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c57f: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c582: mov edx, dword ptr [ecx + 0x68a8b8] */ r_edx = R32((u32)(r_ecx+0x68a8b8u));
    /* 0048c588: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048c58b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c58e: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c591: mov ecx, dword ptr [eax + 0x68a8bc] */ r_ecx = R32((u32)(r_eax+0x68a8bcu));
    /* 0048c597: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048c59a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c59d: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c5a0: mov eax, dword ptr [edx + 0x68a8c0] */ r_eax = R32((u32)(r_edx+0x68a8c0u));
    /* 0048c5a6: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0048c5ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c5af: shl ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048c5b2: add ecx, 0x68aa40 */ {  u32 a = r_ecx; u32 b = 0x68aa40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c5b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c5b9: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 0048c5bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c5c0: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48c5c5u); f_00624510();
    /* 0048c5c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c5c8: jmp 0x48c883 */ goto L_0048c883;
L_0048c5cd:; BB(0x0048c5cd);
    /* 0048c5cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c5d0: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c5d3: mov ecx, dword ptr [eax + 0x6897a0] */ r_ecx = R32((u32)(r_eax+0x6897a0u));
    /* 0048c5d9: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0048c5df: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c5e2: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c5e5: mov eax, dword ptr [edx + 0x6897a4] */ r_eax = R32((u32)(r_edx+0x6897a4u));
    /* 0048c5eb: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0048c5f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c5f4: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c5f7: mov edx, dword ptr [ecx + 0x6897a8] */ r_edx = R32((u32)(r_ecx+0x6897a8u));
    /* 0048c5fd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048c600: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c603: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c606: mov ecx, dword ptr [eax + 0x6897ac] */ r_ecx = R32((u32)(r_eax+0x6897acu));
    /* 0048c60c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048c60f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c612: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c615: mov eax, dword ptr [edx + 0x6897b0] */ r_eax = R32((u32)(r_edx+0x6897b0u));
    /* 0048c61b: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0048c621: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c624: shl ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048c627: add ecx, 0x6898b8 */ {  u32 a = r_ecx; u32 b = 0x6898b8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c62d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c62e: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 0048c634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c635: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48c63au); f_00624510();
    /* 0048c63a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c63d: jmp 0x48c883 */ goto L_0048c883;
L_0048c642:; BB(0x0048c642);
    /* 0048c642: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c645: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c648: mov ecx, dword ptr [eax + 0x689fe0] */ r_ecx = R32((u32)(r_eax+0x689fe0u));
    /* 0048c64e: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0048c654: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c657: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c65a: mov eax, dword ptr [edx + 0x689fe4] */ r_eax = R32((u32)(r_edx+0x689fe4u));
    /* 0048c660: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0048c666: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c669: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c66c: mov edx, dword ptr [ecx + 0x689fe8] */ r_edx = R32((u32)(r_ecx+0x689fe8u));
    /* 0048c672: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048c675: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c678: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c67b: mov ecx, dword ptr [eax + 0x689fec] */ r_ecx = R32((u32)(r_eax+0x689fecu));
    /* 0048c681: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048c684: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c687: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c68a: mov eax, dword ptr [edx + 0x689ff0] */ r_eax = R32((u32)(r_edx+0x689ff0u));
    /* 0048c690: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0048c696: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c699: shl ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048c69c: add ecx, 0x68a110 */ {  u32 a = r_ecx; u32 b = 0x68a110u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c6a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c6a3: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 0048c6a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c6aa: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48c6afu); f_00624510();
    /* 0048c6af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c6b2: jmp 0x48c883 */ goto L_0048c883;
L_0048c6b7:; BB(0x0048c6b7);
    /* 0048c6b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c6ba: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c6bd: mov ecx, dword ptr [eax + 0x689538] */ r_ecx = R32((u32)(r_eax+0x689538u));
    /* 0048c6c3: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0048c6c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c6cc: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c6cf: mov eax, dword ptr [edx + 0x68953c] */ r_eax = R32((u32)(r_edx+0x68953cu));
    /* 0048c6d5: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0048c6db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c6de: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c6e1: mov edx, dword ptr [ecx + 0x689540] */ r_edx = R32((u32)(r_ecx+0x689540u));
    /* 0048c6e7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048c6ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c6ed: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c6f0: mov ecx, dword ptr [eax + 0x689544] */ r_ecx = R32((u32)(r_eax+0x689544u));
    /* 0048c6f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048c6f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c6fc: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c6ff: mov eax, dword ptr [edx + 0x689548] */ r_eax = R32((u32)(r_edx+0x689548u));
    /* 0048c705: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0048c70b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c70e: shl ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048c711: add ecx, 0x689588 */ {  u32 a = r_ecx; u32 b = 0x689588u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c717: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c718: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 0048c71e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c71f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48c724u); f_00624510();
    /* 0048c724: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c727: jmp 0x48c883 */ goto L_0048c883;
L_0048c72c:; BB(0x0048c72c);
    /* 0048c72c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c72f: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c732: mov ecx, dword ptr [eax + 0x687b80] */ r_ecx = R32((u32)(r_eax+0x687b80u));
    /* 0048c738: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0048c73e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c741: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c744: mov eax, dword ptr [edx + 0x687b84] */ r_eax = R32((u32)(r_edx+0x687b84u));
    /* 0048c74a: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0048c750: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c753: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c756: mov edx, dword ptr [ecx + 0x687b88] */ r_edx = R32((u32)(r_ecx+0x687b88u));
    /* 0048c75c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048c75f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c762: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c765: mov ecx, dword ptr [eax + 0x687b8c] */ r_ecx = R32((u32)(r_eax+0x687b8cu));
    /* 0048c76b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048c76e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c771: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c774: mov eax, dword ptr [edx + 0x687b90] */ r_eax = R32((u32)(r_edx+0x687b90u));
    /* 0048c77a: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0048c780: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c783: shl ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048c786: add ecx, 0x687ef0 */ {  u32 a = r_ecx; u32 b = 0x687ef0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c78c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c78d: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 0048c793: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c794: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48c799u); f_00624510();
    /* 0048c799: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c79c: jmp 0x48c883 */ goto L_0048c883;
L_0048c7a1:; BB(0x0048c7a1);
    /* 0048c7a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c7a4: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c7a7: mov ecx, dword ptr [eax + 0x687670] */ r_ecx = R32((u32)(r_eax+0x687670u));
    /* 0048c7ad: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0048c7b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c7b6: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c7b9: mov eax, dword ptr [edx + 0x687674] */ r_eax = R32((u32)(r_edx+0x687674u));
    /* 0048c7bf: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0048c7c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c7c8: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c7cb: mov edx, dword ptr [ecx + 0x687678] */ r_edx = R32((u32)(r_ecx+0x687678u));
    /* 0048c7d1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048c7d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c7d7: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c7da: mov ecx, dword ptr [eax + 0x68767c] */ r_ecx = R32((u32)(r_eax+0x68767cu));
    /* 0048c7e0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048c7e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c7e6: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c7e9: mov eax, dword ptr [edx + 0x687680] */ r_eax = R32((u32)(r_edx+0x687680u));
    /* 0048c7ef: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0048c7f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c7f8: shl ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048c7fb: add ecx, 0x687710 */ {  u32 a = r_ecx; u32 b = 0x687710u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c801: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c802: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 0048c808: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c809: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48c80eu); f_00624510();
    /* 0048c80e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c811: jmp 0x48c883 */ goto L_0048c883;
L_0048c813:; BB(0x0048c813);
    /* 0048c813: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c816: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c819: mov ecx, dword ptr [eax + 0x68bb00] */ r_ecx = R32((u32)(r_eax+0x68bb00u));
    /* 0048c81f: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0048c825: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c828: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c82b: mov eax, dword ptr [edx + 0x68bb04] */ r_eax = R32((u32)(r_edx+0x68bb04u));
    /* 0048c831: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0048c837: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c83a: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c83d: mov edx, dword ptr [ecx + 0x68bb08] */ r_edx = R32((u32)(r_ecx+0x68bb08u));
    /* 0048c843: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048c846: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c849: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c84c: mov ecx, dword ptr [eax + 0x68bb0c] */ r_ecx = R32((u32)(r_eax+0x68bb0cu));
    /* 0048c852: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048c855: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c858: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048c85b: mov eax, dword ptr [edx + 0x68bb10] */ r_eax = R32((u32)(r_edx+0x68bb10u));
    /* 0048c861: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0048c867: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c86a: shl ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048c86d: add ecx, 0x68bb50 */ {  u32 a = r_ecx; u32 b = 0x68bb50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c874: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 0048c87a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c87b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48c880u); f_00624510();
    /* 0048c880: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048c883:; BB(0x0048c883);
    /* 0048c883: push 0x1a0 */ { u32 v = 0x1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c888: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48c88du); f_0048ab58();
    /* 0048c88d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c890: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0048c896: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c89d: je 0x48c8dd */ if (fZ) goto L_0048c8dd;
L_0048c89f:; BB(0x0048c89f);
    /* 0048c89f: lea eax, [ebp - 0x8c] */ r_eax = (u32)(r_ebp+0xffffff74u);
    /* 0048c8a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8a6: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0048c8ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8ad: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c8b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048c8b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8b5: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0048c8bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8bc: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0048c8c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8c3: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0048c8c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8ca: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0048c8d0: call 0x48d19b */ r_esp -= 4; W32(r_esp, 0x48c8d5u); f_0048d19b();
    /* 0048c8d5: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0048c8db: jmp 0x48c8e7 */ goto L_0048c8e7;
L_0048c8dd:; BB(0x0048c8dd);
    /* 0048c8dd: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_0048c8e7:; BB(0x0048c8e7);
    /* 0048c8e7: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0048c8ed: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 0048c8f3: mov edx, dword ptr [0x6f7050] */ r_edx = R32((u32)(0x6f7050u));
    /* 0048c8f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8fa: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0048c900: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48c905u); f_005ea0c3();
    /* 0048c905: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c907: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0048c90d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048c90f: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0048c915: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48c918u); call_ind(t); }
    /* 0048c918: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c91b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c91c: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0048c922: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48c927u); f_005ea1cf();
    /* 0048c927: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0048c92d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048c92f: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0048c935: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48c938u); call_ind(t); }
    /* 0048c938: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c93a: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0048c940: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x48c945u); f_005ea454();
    /* 0048c945: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0048c94b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048c94d: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0048c953: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48c956u); call_ind(t); }
    /* 0048c956: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0048c95c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c95d: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0048c963: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c966: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x48c96bu); f_005dd425();
    /* 0048c96b: jmp 0x48c48f */ goto L_0048c48f;
L_0048c970:; BB(0x0048c970);
    /* 0048c970: mov esp, ebp */ r_esp = r_ebp;
    /* 0048c972: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048c973: ret 4 */ FN_RET(0x0048c477); r_esp += 8; return;
}

void f_0048c9b7(void) /* FUN_0048c9b7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048c9b7);
    /* 0048c9b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048c9b8: mov ebp, esp */ r_ebp = r_esp;
    /* 0048c9ba: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048c9bd: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048c9c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048c9c7: jmp 0x48c9d2 */ goto L_0048c9d2;
L_0048c9c9:; BB(0x0048c9c9);
    /* 0048c9c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c9cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048c9cf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048c9d2:; BB(0x0048c9d2);
    /* 0048c9d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048c9d5: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048c9d8: jge 0x48cae0 */ if ((fS==fO)) goto L_0048cae0;
L_0048c9de:; BB(0x0048c9de);
    /* 0048c9de: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0048c9e5: mov edx, dword ptr [0x6f7050] */ r_edx = R32((u32)(0x6f7050u));
    /* 0048c9eb: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0048c9ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048c9f1: sub eax, 0x4b1 */ {  u32 a = r_eax; u32 b = 0x4b1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048c9f6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048c9f9: cmp dword ptr [ebp - 0x18], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048c9fd: ja 0x48ca70 */ if ((!fC&&!fZ)) goto L_0048ca70;
L_0048c9ff:; BB(0x0048c9ff);
    /* 0048c9ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048ca02: jmp dword ptr [ecx*4 + 0x48cae6] */ { u32 t = R32((u32)(r_ecx*4+0x48cae6u)); switch (t) { case 0x48ca54u: goto L_0048ca54; case 0x48ca45u: goto L_0048ca45; case 0x48ca63u: goto L_0048ca63; case 0x48ca09u: goto L_0048ca09; case 0x48ca27u: goto L_0048ca27; case 0x48ca36u: goto L_0048ca36; case 0x48ca18u: goto L_0048ca18; default: UNSUP(0x0048ca02, "jump table entry is not a known target"); } }
L_0048ca09:; BB(0x0048ca09);
    /* 0048ca09: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ca0c: mov eax, dword ptr [edx*4 + 0x68bab8] */ r_eax = R32((u32)(r_edx*4+0x68bab8u));
    /* 0048ca13: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048ca16: jmp 0x48ca70 */ goto L_0048ca70;
L_0048ca18:; BB(0x0048ca18);
    /* 0048ca18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ca1b: mov edx, dword ptr [ecx*4 + 0x68b440] */ r_edx = R32((u32)(r_ecx*4+0x68b440u));
    /* 0048ca22: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0048ca25: jmp 0x48ca70 */ goto L_0048ca70;
L_0048ca27:; BB(0x0048ca27);
    /* 0048ca27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ca2a: mov ecx, dword ptr [eax*4 + 0x689fb8] */ r_ecx = R32((u32)(r_eax*4+0x689fb8u));
    /* 0048ca31: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048ca34: jmp 0x48ca70 */ goto L_0048ca70;
L_0048ca36:; BB(0x0048ca36);
    /* 0048ca36: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ca39: mov eax, dword ptr [edx*4 + 0x68a890] */ r_eax = R32((u32)(r_edx*4+0x68a890u));
    /* 0048ca40: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048ca43: jmp 0x48ca70 */ goto L_0048ca70;
L_0048ca45:; BB(0x0048ca45);
    /* 0048ca45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ca48: mov edx, dword ptr [ecx*4 + 0x689788] */ r_edx = R32((u32)(r_ecx*4+0x689788u));
    /* 0048ca4f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0048ca52: jmp 0x48ca70 */ goto L_0048ca70;
L_0048ca54:; BB(0x0048ca54);
    /* 0048ca54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ca57: mov ecx, dword ptr [eax*4 + 0x6894f0] */ r_ecx = R32((u32)(r_eax*4+0x6894f0u));
    /* 0048ca5e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048ca61: jmp 0x48ca70 */ goto L_0048ca70;
L_0048ca63:; BB(0x0048ca63);
    /* 0048ca63: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ca66: mov eax, dword ptr [edx*4 + 0x687b10] */ r_eax = R32((u32)(r_edx*4+0x687b10u));
    /* 0048ca6d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0048ca70:; BB(0x0048ca70);
    /* 0048ca70: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ca72: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48ca77u); f_0048ab58();
    /* 0048ca77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ca7a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048ca7d: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ca81: je 0x48ca90 */ if (fZ) goto L_0048ca90;
L_0048ca83:; BB(0x0048ca83);
    /* 0048ca83: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ca86: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x48ca8bu); f_005e3fb0();
    /* 0048ca8b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0048ca8e: jmp 0x48ca97 */ goto L_0048ca97;
L_0048ca90:; BB(0x0048ca90);
    /* 0048ca90: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0048ca97:; BB(0x0048ca97);
    /* 0048ca97: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ca9a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048ca9d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048caa0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048caa1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048caa4: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48caa9u); f_005ea0c3();
    /* 0048caa9: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0048caab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048caae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048cab0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cab3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48cab6u); call_ind(t); }
    /* 0048cab6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cab9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048cabb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cabe: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48cac1u); call_ind(t); }
    /* 0048cac1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cac4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048cac6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cac9: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48caccu); call_ind(t); }
    /* 0048cacc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cacf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cad0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048cad3: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048cad6: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x48cadbu); f_005dd425();
    /* 0048cadb: jmp 0x48c9c9 */ goto L_0048c9c9;
L_0048cae0:; BB(0x0048cae0);
    /* 0048cae0: mov esp, ebp */ r_esp = r_ebp;
    /* 0048cae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048cae3: ret 4 */ FN_RET(0x0048c9b7); r_esp += 8; return;
}

void f_0048cb02(void) /* FUN_0048cb02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048cb02);
    /* 0048cb02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb03: mov ebp, esp */ r_ebp = r_esp;
    /* 0048cb05: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048cb08: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048cb0b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048cb0e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0048cb11: xor ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048cb14: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048cb17: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0048cb1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048cb21: jmp 0x48cb2c */ goto L_0048cb2c;
L_0048cb23:; BB(0x0048cb23);
    /* 0048cb23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048cb26: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048cb29: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048cb2c:; BB(0x0048cb2c);
    /* 0048cb2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048cb2f: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048cb32: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48cb37u); f_005dd4d2();
    /* 0048cb37: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cb3a: jge 0x48cb72 */ if ((fS==fO)) goto L_0048cb72;
L_0048cb3c:; BB(0x0048cb3c);
    /* 0048cb3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048cb3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048cb43: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048cb46: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48cb4bu); f_005dd560();
    /* 0048cb4b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048cb4e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048cb51: cmp dword ptr [edx + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cb55: je 0x48cb66 */ if (fZ) goto L_0048cb66;
L_0048cb57:; BB(0x0048cb57);
    /* 0048cb57: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb5c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cb5f: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x48cb64u); f_005ea454();
    /* 0048cb64: jmp 0x48cb70 */ goto L_0048cb70;
L_0048cb66:; BB(0x0048cb66);
    /* 0048cb66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb68: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cb6b: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x48cb70u); f_005ea454();
L_0048cb70:; BB(0x0048cb70);
    /* 0048cb70: jmp 0x48cb23 */ goto L_0048cb23;
L_0048cb72:; BB(0x0048cb72);
    /* 0048cb72: mov esp, ebp */ r_esp = r_ebp;
    /* 0048cb74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048cb75: ret  */ FN_RET(0x0048cb02); r_esp += 4; return;
}

void f_0048cb76(void) /* FUN_0048cb76 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048cb76);
    /* 0048cb76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb77: mov ebp, esp */ r_ebp = r_esp;
    /* 0048cb79: sub esp, 0x12c */ {  u32 a = r_esp; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048cb7f: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 0048cb85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048cb88: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 0048cb8e: cmp dword ptr [ebp - 0x120], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048cb95: ja 0x48cece */ if ((!fC&&!fZ)) goto L_0048cece;
L_0048cb9b:; BB(0x0048cb9b);
    /* 0048cb9b: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 0048cba1: jmp dword ptr [ecx*4 + 0x48ced4] */ { u32 t = R32((u32)(r_ecx*4+0x48ced4u)); switch (t) { case 0x48cba8u: goto L_0048cba8; case 0x48cbadu: goto L_0048cbad; case 0x48cbc3u: goto L_0048cbc3; case 0x48cdc0u: goto L_0048cdc0; case 0x48ceceu: goto L_0048cece; case 0x48cdd3u: goto L_0048cdd3; case 0x48cd38u: goto L_0048cd38; case 0x48cd27u: goto L_0048cd27; case 0x48cd5au: goto L_0048cd5a; case 0x48cd49u: goto L_0048cd49; case 0x48cbf8u: goto L_0048cbf8; case 0x48cd16u: goto L_0048cd16; case 0x48ccc3u: goto L_0048ccc3; case 0x48ccf4u: goto L_0048ccf4; case 0x48cd5cu: goto L_0048cd5c; case 0x48cd6du: goto L_0048cd6d; case 0x48cd7du: goto L_0048cd7d; case 0x48cd8eu: goto L_0048cd8e; default: UNSUP(0x0048cba1, "jump table entry is not a known target"); } }
L_0048cba8:; BB(0x0048cba8);
    /* 0048cba8: jmp 0x48cece */ goto L_0048cece;
L_0048cbad:; BB(0x0048cbad);
    /* 0048cbad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cbaf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0048cbb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cbb3: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048cbb9: call 0x48c06d */ r_esp -= 4; W32(r_esp, 0x48cbbeu); f_0048c06d();
    /* 0048cbbe: jmp 0x48cece */ goto L_0048cece;
L_0048cbc3:; BB(0x0048cbc3);
    /* 0048cbc3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048cbc6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048cbc9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0048cbcc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048cbcf: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0048cbd2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048cbd5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048cbd8: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 0048cbde: cmp dword ptr [ebp - 0x124], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048cbe5: ja 0x48cd9f */ if ((!fC&&!fZ)) goto L_0048cd9f;
L_0048cbeb:; BB(0x0048cbeb);
    /* 0048cbeb: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0048cbf1: jmp dword ptr [ecx*4 + 0x48ceec] */ { u32 t = R32((u32)(r_ecx*4+0x48ceecu)); switch (t) { case 0x48cdd3u: goto L_0048cdd3; case 0x48ceceu: goto L_0048cece; case 0x48cdc0u: goto L_0048cdc0; case 0x48cbc3u: goto L_0048cbc3; case 0x48cbadu: goto L_0048cbad; case 0x48cba8u: goto L_0048cba8; case 0x48cd38u: goto L_0048cd38; case 0x48cd27u: goto L_0048cd27; case 0x48cd5au: goto L_0048cd5a; case 0x48cd49u: goto L_0048cd49; case 0x48cbf8u: goto L_0048cbf8; case 0x48cd16u: goto L_0048cd16; case 0x48ccc3u: goto L_0048ccc3; case 0x48ccf4u: goto L_0048ccf4; case 0x48cd5cu: goto L_0048cd5c; case 0x48cd6du: goto L_0048cd6d; case 0x48cd7du: goto L_0048cd7d; case 0x48cd8eu: goto L_0048cd8e; default: UNSUP(0x0048cbf1, "jump table entry is not a known target"); } }
L_0048cbf8:; BB(0x0048cbf8);
    /* 0048cbf8: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cbfc: jne 0x48cc5a */ if (!fZ) goto L_0048cc5a;
L_0048cbfe:; BB(0x0048cbfe);
    /* 0048cbfe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc00: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cc06: call 0x460a16 */ r_esp -= 4; W32(r_esp, 0x48cc0bu); f_00460a16();
    /* 0048cc0b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cc0e: jle 0x48cc5a */ if ((fZ||fS!=fO)) goto L_0048cc5a;
L_0048cc10:; BB(0x0048cc10);
    /* 0048cc10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc12: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cc18: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x48cc1du); f_0045c419();
    /* 0048cc1d: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048cc20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc21: push 0x68bd50 */ { u32 v = 0x68bd50u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc26: lea edx, [ebp - 0x114] */ r_edx = (u32)(r_ebp+0xfffffeecu);
    /* 0048cc2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc2d: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x48cc32u); f_00624050();
    /* 0048cc32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048cc35: push 0x2004 */ { u32 v = 0x2004u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc3a: push 0x68bda4 */ { u32 v = 0x68bda4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc3f: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 0048cc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc48: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x48cc4du); f_0060f9f3();
    /* 0048cc4d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048cc50: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cc53: je 0x48cc5a */ if (fZ) goto L_0048cc5a;
L_0048cc55:; BB(0x0048cc55);
    /* 0048cc55: jmp 0x48cece */ goto L_0048cece;
L_0048cc5a:; BB(0x0048cc5a);
    /* 0048cc5a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0048cc61: jmp 0x48cc6c */ goto L_0048cc6c;
L_0048cc63:; BB(0x0048cc63);
    /* 0048cc63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048cc66: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048cc69: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0048cc6c:; BB(0x0048cc6c);
    /* 0048cc6c: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cc70: jge 0x48cc85 */ if ((fS==fO)) goto L_0048cc85;
L_0048cc72:; BB(0x0048cc72);
    /* 0048cc72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc74: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048cc77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc78: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cc7e: call 0x45b9d1 */ r_esp -= 4; W32(r_esp, 0x48cc83u); f_0045b9d1();
    /* 0048cc83: jmp 0x48cc63 */ goto L_0048cc63;
L_0048cc85:; BB(0x0048cc85);
    /* 0048cc85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc87: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc89: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cc8f: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x48cc94u); f_0045c4ac();
    /* 0048cc94: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048cc97: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048cc9a: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0048cc9e: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 0048cca2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cca4: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048ccaa: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x48ccafu); f_0045c8df();
    /* 0048ccaf: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0048ccb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ccb3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048ccb9: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x48ccbeu); f_0045d8fe();
    /* 0048ccbe: jmp 0x48cda6 */ goto L_0048cda6;
L_0048ccc3:; BB(0x0048ccc3);
    /* 0048ccc3: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0048ccc8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cccb: mov dword ptr [eax + 0x12eb0], ecx */ W32((u32)(r_eax+0x12eb0u), r_ecx);
    /* 0048ccd1: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0048ccd7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ccda: mov dword ptr [edx + 0x12eac], eax */ W32((u32)(r_edx+0x12eacu), r_eax);
    /* 0048cce0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cce6: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0048cce9: mov dword ptr [ecx + 0x12eb4], edx */ W32((u32)(r_ecx+0x12eb4u), r_edx);
    /* 0048ccef: jmp 0x48cda6 */ goto L_0048cda6;
L_0048ccf4:; BB(0x0048ccf4);
    /* 0048ccf4: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0048ccf9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ccfc: mov dword ptr [eax + 0x12ebc], ecx */ W32((u32)(r_eax+0x12ebcu), r_ecx);
    /* 0048cd02: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0048cd08: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048cd0b: mov dword ptr [edx + 0x12eb8], eax */ W32((u32)(r_edx+0x12eb8u), r_eax);
    /* 0048cd11: jmp 0x48cda6 */ goto L_0048cda6;
L_0048cd16:; BB(0x0048cd16);
    /* 0048cd16: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0048cd19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cd1a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cd20: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x48cd25u); f_0045d8fe();
    /* 0048cd25: jmp 0x48cda6 */ goto L_0048cda6;
L_0048cd27:; BB(0x0048cd27);
    /* 0048cd27: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0048cd2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cd2b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cd31: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x48cd36u); f_0045d8fe();
    /* 0048cd36: jmp 0x48cda6 */ goto L_0048cda6;
L_0048cd38:; BB(0x0048cd38);
    /* 0048cd38: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0048cd3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cd3c: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cd42: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x48cd47u); f_0045d8fe();
    /* 0048cd47: jmp 0x48cda6 */ goto L_0048cda6;
L_0048cd49:; BB(0x0048cd49);
    /* 0048cd49: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0048cd4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cd4d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cd53: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x48cd58u); f_0045d8fe();
    /* 0048cd58: jmp 0x48cda6 */ goto L_0048cda6;
L_0048cd5a:; BB(0x0048cd5a);
    /* 0048cd5a: jmp 0x48cda6 */ goto L_0048cda6;
L_0048cd5c:; BB(0x0048cd5c);
    /* 0048cd5c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0048cd5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cd60: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cd66: call 0x45d8fe */ r_esp -= 4; W32(r_esp, 0x48cd6bu); f_0045d8fe();
    /* 0048cd6b: jmp 0x48cda6 */ goto L_0048cda6;
L_0048cd6d:; BB(0x0048cd6d);
    /* 0048cd6d: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0048cd72: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cd75: mov dword ptr [eax + 0x12ec0], ecx */ W32((u32)(r_eax+0x12ec0u), r_ecx);
    /* 0048cd7b: jmp 0x48cda6 */ goto L_0048cda6;
L_0048cd7d:; BB(0x0048cd7d);
    /* 0048cd7d: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0048cd83: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cd86: mov dword ptr [edx + 0x12ec0], eax */ W32((u32)(r_edx+0x12ec0u), r_eax);
    /* 0048cd8c: jmp 0x48cda6 */ goto L_0048cda6;
L_0048cd8e:; BB(0x0048cd8e);
    /* 0048cd8e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cd94: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048cd97: mov dword ptr [ecx + 0x12ec0], edx */ W32((u32)(r_ecx+0x12ec0u), r_edx);
    /* 0048cd9d: jmp 0x48cda6 */ goto L_0048cda6;
L_0048cd9f:; BB(0x0048cd9f);
    /* 0048cd9f: mov dword ptr [ebp - 0xc], 0x2328 */ W32((u32)(r_ebp+0xfffffff4u), 0x2328u);
L_0048cda6:; BB(0x0048cda6);
    /* 0048cda6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048cda9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cdaa: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cdb0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048cdb2: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048cdb8: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x48cdbbu); call_ind(t); }
    /* 0048cdbb: jmp 0x48cece */ goto L_0048cece;
L_0048cdc0:; BB(0x0048cdc0);
    /* 0048cdc0: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048cdc6: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0048cdc9: call 0x4499a0 */ r_esp -= 4; W32(r_esp, 0x48cdceu); f_004499a0();
    /* 0048cdce: jmp 0x48cece */ goto L_0048cece;
L_0048cdd3:; BB(0x0048cdd3);
    /* 0048cdd3: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048cdd9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0048cddc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048cddf: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048cde5: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0048cde8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048cdeb: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 0048cdf1: cmp dword ptr [ebp - 0x128], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffed8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cdf8: je 0x48cdff */ if (fZ) goto L_0048cdff;
L_0048cdfa:; BB(0x0048cdfa);
    /* 0048cdfa: jmp 0x48cece */ goto L_0048cece;
L_0048cdff:; BB(0x0048cdff);
    /* 0048cdff: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048ce05: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048ce08: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ce0b: jne 0x48cece */ if (!fZ) goto L_0048cece;
L_0048ce11:; BB(0x0048ce11);
    /* 0048ce11: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ce18: jne 0x48cece */ if (!fZ) goto L_0048cece;
L_0048ce1e:; BB(0x0048ce1e);
    /* 0048ce1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce20: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048ce26: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0048ce29: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x48ce2eu); f_005e4060();
    /* 0048ce2e: push 0x15ff8 */ { u32 v = 0x15ff8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce33: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048ce39: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 0048ce3c: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48ce41u); f_005ea0c3();
    /* 0048ce41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce43: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048ce49: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0048ce4c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48ce51u); f_005ea1cf();
    /* 0048ce51: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce53: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048ce59: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0048ce5c: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048ce62: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0048ce65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ce67: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48ce6au); call_ind(t); }
    /* 0048ce6a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce6c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48ce71u); f_0048ab58();
    /* 0048ce71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ce74: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 0048ce7a: cmp dword ptr [ebp - 0x118], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ce81: je 0x48ce98 */ if (fZ) goto L_0048ce98;
L_0048ce83:; BB(0x0048ce83);
    /* 0048ce83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce85: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0048ce8b: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x48ce90u); f_005d7b34();
    /* 0048ce90: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 0048ce96: jmp 0x48cea2 */ goto L_0048cea2;
L_0048ce98:; BB(0x0048ce98);
    /* 0048ce98: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
L_0048cea2:; BB(0x0048cea2);
    /* 0048cea2: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 0048cea8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cea9: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048ceaf: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0048ceb2: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x48ceb7u); f_005e4060();
    /* 0048ceb7: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048cebd: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 0048cec0: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048cec6: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0048cec9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048cecb: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x48ceceu); call_ind(t); }
L_0048cece:; BB(0x0048cece);
    /* 0048cece: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ced0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ced1: ret 0x14 */ FN_RET(0x0048cb76); r_esp += 24; return;
}

void f_0048cf1c(void) /* FUN_0048cf1c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048cf1c);
    /* 0048cf1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048cf1d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048cf1f: sub esp, 0x120 */ {  u32 a = r_esp; u32 b = 0x120u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048cf25: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 0048cf2b: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048cf31: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048cf34: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48cf39u); f_005dd4d2();
    /* 0048cf39: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048cf3c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cf40: jne 0x48cf47 */ if (!fZ) goto L_0048cf47;
L_0048cf42:; BB(0x0048cf42);
    /* 0048cf42: jmp 0x48d118 */ goto L_0048d118;
L_0048cf47:; BB(0x0048cf47);
    /* 0048cf47: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0048cf51: jmp 0x48cf62 */ goto L_0048cf62;
L_0048cf53:; BB(0x0048cf53);
    /* 0048cf53: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048cf59: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048cf5c: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
L_0048cf62:; BB(0x0048cf62);
    /* 0048cf62: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048cf68: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cf6b: jge 0x48cfa8 */ if ((fS==fO)) goto L_0048cfa8;
L_0048cf6d:; BB(0x0048cf6d);
    /* 0048cf6d: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048cf73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cf74: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048cf7a: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048cf7d: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48cf82u); f_005dd560();
    /* 0048cf82: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 0048cf88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cf8a: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 0048cf90: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x48cf95u); f_005e4060();
    /* 0048cf95: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 0048cf9b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048cf9d: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 0048cfa3: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48cfa6u); call_ind(t); }
    /* 0048cfa6: jmp 0x48cf53 */ goto L_0048cf53;
L_0048cfa8:; BB(0x0048cfa8);
    /* 0048cfa8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048cfab: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048cfac: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0048cfb1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0048cfb1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048cfb1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048cfb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cfb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cfb6: call 0x60ee42 */ r_esp -= 4; W32(r_esp, 0x48cfbbu); f_0060ee42();
    /* 0048cfbb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048cfbe: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 0048cfc4: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0048cfce: jmp 0x48cfdf */ goto L_0048cfdf;
L_0048cfd0:; BB(0x0048cfd0);
    /* 0048cfd0: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048cfd6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048cfd9: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
L_0048cfdf:; BB(0x0048cfdf);
    /* 0048cfdf: cmp dword ptr [ebp - 0x10c], 0x40 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cfe6: jge 0x48cffb */ if ((fS==fO)) goto L_0048cffb;
L_0048cfe8:; BB(0x0048cfe8);
    /* 0048cfe8: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048cfee: mov dword ptr [ebp + eax*4 - 0x104], 0 */ W32((u32)(r_ebp+r_eax*4+0xfffffefcu), 0x0u);
    /* 0048cff9: jmp 0x48cfd0 */ goto L_0048cfd0;
L_0048cffb:; BB(0x0048cffb);
    /* 0048cffb: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0048d005: jmp 0x48d016 */ goto L_0048d016;
L_0048d007:; BB(0x0048d007);
    /* 0048d007: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048d00d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d010: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
L_0048d016:; BB(0x0048d016);
    /* 0048d016: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048d01c: cmp edx, dword ptr [ebp - 0x108] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffef8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d022: jge 0x48d03d */ if ((fS==fO)) goto L_0048d03d;
L_0048d024:; BB(0x0048d024);
    /* 0048d024: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d027: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d028: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x48d02du); f_0060ee31();
    /* 0048d02d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048d030: mov dword ptr [ebp + eax*4 - 0x104], 1 */ W32((u32)(r_ebp+r_eax*4+0xfffffefcu), 0x1u);
    /* 0048d03b: jmp 0x48d007 */ goto L_0048d007;
L_0048d03d:; BB(0x0048d03d);
    /* 0048d03d: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0048d047: jmp 0x48d058 */ goto L_0048d058;
L_0048d049:; BB(0x0048d049);
    /* 0048d049: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048d04f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d052: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
L_0048d058:; BB(0x0048d058);
    /* 0048d058: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048d05e: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d061: jge 0x48d118 */ if ((fS==fO)) goto L_0048d118;
L_0048d067:; BB(0x0048d067);
    /* 0048d067: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048d06d: cmp dword ptr [ebp + eax*4 - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax*4+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d075: je 0x48d113 */ if (fZ) goto L_0048d113;
L_0048d07b:; BB(0x0048d07b);
    /* 0048d07b: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0048d081: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d082: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0048d088: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d08b: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48d090u); f_005dd560();
    /* 0048d090: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 0048d096: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d098: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0048d09e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48d0a3u); f_005ea1cf();
    /* 0048d0a3: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0048d0a9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048d0ab: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0048d0b1: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x48d0b4u); call_ind(t); }
    /* 0048d0b4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d0b6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d0b8: call 0x60ee42 */ r_esp -= 4; W32(r_esp, 0x48d0bdu); f_0060ee42();
    /* 0048d0bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048d0c0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0048d0c6: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 0048d0c9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d0cb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48d0d0u); f_0048ab58();
    /* 0048d0d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048d0d3: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 0048d0d9: cmp dword ptr [ebp - 0x118], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d0e0: je 0x48d0f7 */ if (fZ) goto L_0048d0f7;
L_0048d0e2:; BB(0x0048d0e2);
    /* 0048d0e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d0e4: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0048d0ea: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x48d0efu); f_005d7b34();
    /* 0048d0ef: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 0048d0f5: jmp 0x48d101 */ goto L_0048d101;
L_0048d0f7:; BB(0x0048d0f7);
    /* 0048d0f7: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
L_0048d101:; BB(0x0048d101);
    /* 0048d101: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 0048d107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d108: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0048d10e: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x48d113u); f_005e4060();
L_0048d113:; BB(0x0048d113);
    /* 0048d113: jmp 0x48d049 */ goto L_0048d049;
L_0048d118:; BB(0x0048d118);
    /* 0048d118: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d11a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d11b: ret  */ FN_RET(0x0048cf1c); r_esp += 4; return;
}

void f_0048d11c(void) /* FUN_0048d11c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d11c);
    /* 0048d11c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d11d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d11f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d122: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048d125: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d127: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48d12cu); f_0048ab58();
    /* 0048d12c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048d12f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048d132: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d136: je 0x48d147 */ if (fZ) goto L_0048d147;
L_0048d138:; BB(0x0048d138);
    /* 0048d138: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d13a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d13d: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x48d142u); f_005d7698();
    /* 0048d142: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048d145: jmp 0x48d14e */ goto L_0048d14e;
L_0048d147:; BB(0x0048d147);
    /* 0048d147: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0048d14e:; BB(0x0048d14e);
    /* 0048d14e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d151: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d152: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d155: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0048d158: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x48d15du); f_005e4060();
    /* 0048d15d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d160: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0048d163: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d166: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0048d169: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048d16b: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x48d16eu); call_ind(t); }
    /* 0048d16e: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d170: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d171: ret  */ FN_RET(0x0048d11c); r_esp += 4; return;
}

void f_0048d172(void) /* FUN_0048d172 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d172);
    /* 0048d172: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d173: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d175: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d176: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048d179: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d17b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d17e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0048d181: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x48d186u); f_005e4060();
    /* 0048d186: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d189: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0048d18c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d18f: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0048d192: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048d194: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48d197u); call_ind(t); }
    /* 0048d197: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d199: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d19a: ret  */ FN_RET(0x0048d172); r_esp += 4; return;
}

void f_0048d19b(void) /* FUN_0048d19b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d19b);
    /* 0048d19b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d19c: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d19e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d19f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048d1a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d1a5: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x48d1aau); f_005e3fb0();
    /* 0048d1aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d1ad: mov dword ptr [eax], 0x636f9c */ W32((u32)(r_eax), 0x636f9cu);
    /* 0048d1b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d1b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d1b8: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x48d1bdu); f_005ea514();
    /* 0048d1bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d1c0: mov dword ptr [ecx + 0x198], 0 */ W32((u32)(r_ecx+0x198u), 0x0u);
    /* 0048d1ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d1cd: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0048d1d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d1da: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 0048d1e4: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0048d1e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d1e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d1eb: add edx, 0x98 */ {  u32 a = r_edx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048d1f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d1f2: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x48d1f7u); f_00624510();
    /* 0048d1f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048d1fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d1fd: add eax, 0x98 */ {  u32 a = r_eax; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d202: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d203: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x48d208u); f_00624990();
    /* 0048d208: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048d20b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d20e: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 0048d214: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d217: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048d21a: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 0048d21d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d220: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0048d223: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0048d226: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d229: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0048d22c: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 0048d232: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d235: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0048d238: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 0048d23e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d241: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0048d244: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 0048d24a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d24d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048d250: mov dword ptr [eax + 0x19c], ecx */ W32((u32)(r_eax+0x19cu), r_ecx);
    /* 0048d256: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d259: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d25b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d25c: ret 0x1c */ FN_RET(0x0048d19b); r_esp += 32; return;
}

void f_0048d25f(void) /* FUN_0048d25f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d25f);
    /* 0048d25f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d260: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d262: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d265: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048d268: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d26b: mov dword ptr [eax], 0x636f9c */ W32((u32)(r_eax), 0x636f9cu);
    /* 0048d271: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d274: cmp dword ptr [ecx + 0x198], 0 */ {  u32 a = R32((u32)(r_ecx+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d27b: je 0x48d2ba */ if (fZ) goto L_0048d2ba;
L_0048d27d:; BB(0x0048d27d);
    /* 0048d27d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d280: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0048d286: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048d289: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d28c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048d28f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d293: je 0x48d2a6 */ if (fZ) goto L_0048d2a6;
L_0048d295:; BB(0x0048d295);
    /* 0048d295: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d297: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d29a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048d29c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d29f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48d2a1u); call_ind(t); }
    /* 0048d2a1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048d2a4: jmp 0x48d2ad */ goto L_0048d2ad;
L_0048d2a6:; BB(0x0048d2a6);
    /* 0048d2a6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0048d2ad:; BB(0x0048d2ad);
    /* 0048d2ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d2b0: mov dword ptr [ecx + 0x198], 0 */ W32((u32)(r_ecx+0x198u), 0x0u);
L_0048d2ba:; BB(0x0048d2ba);
    /* 0048d2ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d2bd: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x48d2c2u); f_005e3fed();
    /* 0048d2c2: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d2c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d2c5: ret  */ FN_RET(0x0048d25f); r_esp += 4; return;
}

void f_0048d2c6(void) /* FUN_0048d2c6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d2c6);
    /* 0048d2c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d2c7: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d2c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d2ca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048d2cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d2d0: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d2d4: jne 0x48d2e8 */ if (!fZ) goto L_0048d2e8;
L_0048d2d6:; BB(0x0048d2d6);
    /* 0048d2d6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048d2d9: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d2dd: jne 0x48d2e8 */ if (!fZ) goto L_0048d2e8;
L_0048d2df:; BB(0x0048d2df);
    /* 0048d2df: cmp dword ptr [0x6f6868], 0 */ {  u32 a = R32((u32)(0x6f6868u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d2e6: je 0x48d2fc */ if (fZ) goto L_0048d2fc;
L_0048d2e8:; BB(0x0048d2e8);
    /* 0048d2e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d2eb: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0048d2f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048d2f7: jmp 0x48d3b9 */ goto L_0048d3b9;
L_0048d2fc:; BB(0x0048d2fc);
    /* 0048d2fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048d2ff: cmp dword ptr [eax + 0x18], 3 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d303: jne 0x48d33d */ if (!fZ) goto L_0048d33d;
L_0048d305:; BB(0x0048d305);
    /* 0048d305: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d308: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d30f: je 0x48d33d */ if (fZ) goto L_0048d33d;
L_0048d311:; BB(0x0048d311);
    /* 0048d311: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048d314: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d315: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d318: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x48d31du); f_005d9738();
    /* 0048d31d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d31f: je 0x48d330 */ if (fZ) goto L_0048d330;
L_0048d321:; BB(0x0048d321);
    /* 0048d321: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d324: mov dword ptr [eax + 0x90], 1 */ W32((u32)(r_eax+0x90u), 0x1u);
    /* 0048d32e: jmp 0x48d33d */ goto L_0048d33d;
L_0048d330:; BB(0x0048d330);
    /* 0048d330: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d333: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
L_0048d33d:; BB(0x0048d33d);
    /* 0048d33d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048d340: cmp dword ptr [edx + 0x18], 2 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d344: jne 0x48d3b3 */ if (!fZ) goto L_0048d3b3;
L_0048d346:; BB(0x0048d346);
    /* 0048d346: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048d349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d34a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d34d: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x48d352u); f_005d9738();
    /* 0048d352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d354: je 0x48d3b3 */ if (fZ) goto L_0048d3b3;
L_0048d356:; BB(0x0048d356);
    /* 0048d356: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d359: cmp dword ptr [ecx + 0x78], 3 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d35d: jne 0x48d367 */ if (!fZ) goto L_0048d367;
L_0048d35f:; BB(0x0048d35f);
    /* 0048d35f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d362: call 0x48d637 */ r_esp -= 4; W32(r_esp, 0x48d367u); f_0048d637();
L_0048d367:; BB(0x0048d367);
    /* 0048d367: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048d36a: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 0048d371: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d374: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 0048d37a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d37b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d37e: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0048d384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d385: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d388: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 0048d38e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d38f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d392: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0048d395: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d396: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d399: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0048d39c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d39d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d3a0: mov ecx, dword ptr [ecx + 0x19c] */ r_ecx = R32((u32)(r_ecx+0x19cu));
    /* 0048d3a6: call 0x48cb76 */ r_esp -= 4; W32(r_esp, 0x48d3abu); f_0048cb76();
    /* 0048d3ab: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048d3ae: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048d3b1: jmp 0x48d3b9 */ goto L_0048d3b9;
L_0048d3b3:; BB(0x0048d3b3);
    /* 0048d3b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048d3b6: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_0048d3b9:; BB(0x0048d3b9);
    /* 0048d3b9: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d3bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d3bc: ret 4 */ FN_RET(0x0048d2c6); r_esp += 8; return;
}

void f_0048d3bf(void) /* FUN_0048d3bf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d3bf);
    /* 0048d3bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d3c0: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d3c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d3c3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048d3c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d3c9: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d3d0: jne 0x48d3d4 */ if (!fZ) goto L_0048d3d4;
L_0048d3d2:; BB(0x0048d3d2);
    /* 0048d3d2: jmp 0x48d42c */ goto L_0048d42c;
L_0048d3d4:; BB(0x0048d3d4);
    /* 0048d3d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d3d7: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d3de: je 0x48d40b */ if (fZ) goto L_0048d40b;
L_0048d3e0:; BB(0x0048d3e0);
    /* 0048d3e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d3e3: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 0048d3e9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d3ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d3ef: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 0048d3f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d3f8: cmp dword ptr [edx + 0x94], 0x14 */ {  u32 a = R32((u32)(r_edx+0x94u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d3ff: jl 0x48d409 */ if ((fS!=fO)) goto L_0048d409;
L_0048d401:; BB(0x0048d401);
    /* 0048d401: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d404: call 0x48d430 */ r_esp -= 4; W32(r_esp, 0x48d409u); f_0048d430();
L_0048d409:; BB(0x0048d409);
    /* 0048d409: jmp 0x48d42c */ goto L_0048d42c;
L_0048d40b:; BB(0x0048d40b);
    /* 0048d40b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d40e: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 0048d418: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d41b: cmp dword ptr [ecx + 0x198], 0 */ {  u32 a = R32((u32)(r_ecx+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d422: je 0x48d42c */ if (fZ) goto L_0048d42c;
L_0048d424:; BB(0x0048d424);
    /* 0048d424: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d427: call 0x48d637 */ r_esp -= 4; W32(r_esp, 0x48d42cu); f_0048d637();
L_0048d42c:; BB(0x0048d42c);
    /* 0048d42c: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d42e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d42f: ret  */ FN_RET(0x0048d3bf); r_esp += 4; return;
}

void f_0048d430(void) /* FUN_0048d430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d430);
    /* 0048d430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d431: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d433: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d436: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0048d439: mov dword ptr [ebp - 4], 0xffffffee */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffeeu);
    /* 0048d440: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d443: cmp dword ptr [eax + 0x198], 0 */ {  u32 a = R32((u32)(r_eax+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d44a: jne 0x48d633 */ if (!fZ) goto L_0048d633;
L_0048d450:; BB(0x0048d450);
    /* 0048d450: push 0x88c */ { u32 v = 0x88cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048d455: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48d45au); f_0048ab58();
    /* 0048d45a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048d45d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048d460: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d464: je 0x48d473 */ if (fZ) goto L_0048d473;
L_0048d466:; BB(0x0048d466);
    /* 0048d466: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048d469: call 0x42683b */ r_esp -= 4; W32(r_esp, 0x48d46eu); f_0042683b();
    /* 0048d46e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048d471: jmp 0x48d47a */ goto L_0048d47a;
L_0048d473:; BB(0x0048d473);
    /* 0048d473: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0048d47a:; BB(0x0048d47a);
    /* 0048d47a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d47d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048d480: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 0048d486: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d489: add eax, 0x98 */ {  u32 a = r_eax; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d48e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d48f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d492: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 0048d498: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d49b: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0048d4a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048d4a3: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x48d4a6u); call_ind(t); }
    /* 0048d4a6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d4a9: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 0048d4af: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d4b2: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0048d4b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048d4ba: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48d4bdu); call_ind(t); }
    /* 0048d4bd: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4bf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d4c2: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 0048d4c8: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x48d4cdu); f_005e87aa();
    /* 0048d4cd: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4cf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d4d2: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 0048d4d8: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x48d4ddu); f_005e8e99();
    /* 0048d4dd: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4e2: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4e7: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4ec: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d4ef: mov ecx, dword ptr [edx + 0x198] */ r_ecx = R32((u32)(r_edx+0x198u));
    /* 0048d4f5: call 0x5e8b5a */ r_esp -= 4; W32(r_esp, 0x48d4fau); f_005e8b5a();
    /* 0048d4fa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d4fd: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x48d502u); f_005d9883();
    /* 0048d502: add eax, 0x1388 */ {  u32 a = r_eax; u32 b = 0x1388u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d507: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d508: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d50b: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 0048d511: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d514: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0048d51a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048d51c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48d51fu); call_ind(t); }
    /* 0048d51f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d522: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 0048d528: call 0x5e8f1b */ r_esp -= 4; W32(r_esp, 0x48d52du); f_005e8f1b();
    /* 0048d52d: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d530: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048d533: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d536: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d537: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d53a: mov ecx, dword ptr [edx + 0x198] */ r_ecx = R32((u32)(r_edx+0x198u));
    /* 0048d540: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x48d545u); f_005e8740();
    /* 0048d545: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d548: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 0048d54e: call 0x5e8f42 */ r_esp -= 4; W32(r_esp, 0x48d553u); f_005e8f42();
    /* 0048d553: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0048d556: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048d559: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d55a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d55d: mov ecx, dword ptr [edx + 0x198] */ r_ecx = R32((u32)(r_edx+0x198u));
    /* 0048d563: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x48d568u); f_005e8775();
    /* 0048d568: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d56a: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0048d56f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0048d572: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d575: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48d57au); f_005dd560();
    /* 0048d57a: mov ecx, eax */ r_ecx = r_eax;
    /* 0048d57c: call 0x5e07b4 */ r_esp -= 4; W32(r_esp, 0x48d581u); f_005e07b4();
    /* 0048d581: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048d584: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d586: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0048d58c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0048d58f: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d592: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48d597u); f_005dd560();
    /* 0048d597: mov ecx, eax */ r_ecx = r_eax;
    /* 0048d599: call 0x5e07c5 */ r_esp -= 4; W32(r_esp, 0x48d59eu); f_005e07c5();
    /* 0048d59e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048d5a1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048d5a4: sub edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048d5a7: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048d5aa: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0048d5ad: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d5b1: jge 0x48d5ba */ if ((fS==fO)) goto L_0048d5ba;
L_0048d5b3:; BB(0x0048d5b3);
    /* 0048d5b3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0048d5ba:; BB(0x0048d5ba);
    /* 0048d5ba: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048d5bd: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d5c0: cmp eax, 0x1e0 */ {  u32 a = r_eax; u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d5c5: jle 0x48d5d2 */ if ((fZ||fS!=fO)) goto L_0048d5d2;
L_0048d5c7:; BB(0x0048d5c7);
    /* 0048d5c7: mov ecx, 0x1e0 */ r_ecx = 0x1e0u;
    /* 0048d5cc: sub ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d5cf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0048d5d2:; BB(0x0048d5d2);
    /* 0048d5d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048d5d5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048d5d8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d5dc: jge 0x48d5e5 */ if ((fS==fO)) goto L_0048d5e5;
L_0048d5de:; BB(0x0048d5de);
    /* 0048d5de: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0048d5e5:; BB(0x0048d5e5);
    /* 0048d5e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d5e8: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d5eb: cmp eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d5f0: jle 0x48d5fd */ if ((fZ||fS!=fO)) goto L_0048d5fd;
L_0048d5f2:; BB(0x0048d5f2);
    /* 0048d5f2: mov ecx, 0x280 */ r_ecx = 0x280u;
    /* 0048d5f7: sub ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d5fa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0048d5fd:; BB(0x0048d5fd);
    /* 0048d5fd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048d600: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d601: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d605: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d608: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 0048d60e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d611: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0048d617: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048d619: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48d61cu); call_ind(t); }
    /* 0048d61c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d61f: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 0048d625: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d628: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0048d62e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048d630: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48d633u); call_ind(t); }
L_0048d633:; BB(0x0048d633);
    /* 0048d633: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d635: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d636: ret  */ FN_RET(0x0048d430); r_esp += 4; return;
}

void f_0048d637(void) /* FUN_0048d637 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d637);
    /* 0048d637: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d638: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d63a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d63d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048d640: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d643: cmp dword ptr [eax + 0x198], 0 */ {  u32 a = R32((u32)(r_eax+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d64a: je 0x48d6a0 */ if (fZ) goto L_0048d6a0;
L_0048d64c:; BB(0x0048d64c);
    /* 0048d64c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d64f: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 0048d655: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d658: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0048d65e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048d660: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48d663u); call_ind(t); }
    /* 0048d663: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d666: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 0048d66c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048d66f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d672: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0048d675: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d679: je 0x48d68c */ if (fZ) goto L_0048d68c;
L_0048d67b:; BB(0x0048d67b);
    /* 0048d67b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d67d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d680: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048d682: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d685: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48d687u); call_ind(t); }
    /* 0048d687: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048d68a: jmp 0x48d693 */ goto L_0048d693;
L_0048d68c:; BB(0x0048d68c);
    /* 0048d68c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0048d693:; BB(0x0048d693);
    /* 0048d693: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d696: mov dword ptr [eax + 0x198], 0 */ W32((u32)(r_eax+0x198u), 0x0u);
L_0048d6a0:; BB(0x0048d6a0);
    /* 0048d6a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d6a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d6a3: ret  */ FN_RET(0x0048d637); r_esp += 4; return;
}

void f_0048d6b0(void) /* FUN_0048d6b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d6b0);
    /* 0048d6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d6b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d6b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048d6b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d6ba: call 0x48bf83 */ r_esp -= 4; W32(r_esp, 0x48d6bfu); f_0048bf83();
    /* 0048d6bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048d6c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048d6c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d6c7: je 0x48d6d5 */ if (fZ) goto L_0048d6d5;
L_0048d6c9:; BB(0x0048d6c9);
    /* 0048d6c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d6cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d6cd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48d6d2u); f_0048ac1b();
    /* 0048d6d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048d6d5:; BB(0x0048d6d5);
    /* 0048d6d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d6d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d6da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d6db: ret 4 */ FN_RET(0x0048d6b0); r_esp += 8; return;
}

void f_0048d6e0(void) /* FUN_0048d6e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d6e0);
    /* 0048d6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d6e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d6e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048d6e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d6ea: call 0x48d25f */ r_esp -= 4; W32(r_esp, 0x48d6efu); f_0048d25f();
    /* 0048d6ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048d6f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048d6f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d6f7: je 0x48d705 */ if (fZ) goto L_0048d705;
L_0048d6f9:; BB(0x0048d6f9);
    /* 0048d6f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d6fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d6fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x48d702u); f_0048ac1b();
    /* 0048d702: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048d705:; BB(0x0048d705);
    /* 0048d705: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d708: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d70a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d70b: ret 4 */ FN_RET(0x0048d6e0); r_esp += 8; return;
}

void f_0048d710(void) /* FUN_0048d710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d710);
    /* 0048d710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d711: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d713: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d716: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048d719: mov dword ptr [0x6f8458], eax */ W32((u32)(0x6f8458u), r_eax);
    /* 0048d71e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048d721: mov dword ptr [0x6f8460], ecx */ W32((u32)(0x6f8460u), r_ecx);
    /* 0048d727: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0048d72a: mov dword ptr [0x6f845c], edx */ W32((u32)(0x6f845cu), r_edx);
    /* 0048d730: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048d737: jmp 0x48d742 */ goto L_0048d742;
L_0048d739:; BB(0x0048d739);
    /* 0048d739: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d73c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d73f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0048d742:; BB(0x0048d742);
    /* 0048d742: cmp dword ptr [ebp - 8], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d749: jge 0x48d7a7 */ if ((fS==fO)) goto L_0048d7a7;
L_0048d74b:; BB(0x0048d74b);
    /* 0048d74b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d74e: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048d751: add ecx, 0x6f7458 */ {  u32 a = r_ecx; u32 b = 0x6f7458u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d757: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048d75a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d75d: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048d760: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048d761: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048d767: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d769: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048d76c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d76f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0048d772: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d775: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d778: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0048d77b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0048d77e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d781: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d784: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0048d787: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0048d789: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d78c: mov dword ptr [eax*4 + 0x6f7058], 0x100 */ W32((u32)(r_eax*4+0x6f7058u), 0x100u);
    /* 0048d797: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d79a: mov dword ptr [ecx*4 + 0x6f8468], 0 */ W32((u32)(r_ecx*4+0x6f8468u), 0x0u);
    /* 0048d7a5: jmp 0x48d739 */ goto L_0048d739;
L_0048d7a7:; BB(0x0048d7a7);
    /* 0048d7a7: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d7a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d7aa: ret  */ FN_RET(0x0048d710); r_esp += 4; return;
}

void f_0048d7ab(void) /* FUN_0048d7ab */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d7ab);
    /* 0048d7ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d7ac: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d7ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048d7b1: mov dword ptr [0x6f8458], eax */ W32((u32)(0x6f8458u), r_eax);
    /* 0048d7b6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048d7b9: mov dword ptr [0x6f8460], ecx */ W32((u32)(0x6f8460u), r_ecx);
    /* 0048d7bf: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0048d7c2: mov dword ptr [0x6f845c], edx */ W32((u32)(0x6f845cu), r_edx);
    /* 0048d7c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d7c9: ret  */ FN_RET(0x0048d7ab); r_esp += 4; return;
}

void f_0048d7ca(void) /* FUN_0048d7ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d7ca);
    /* 0048d7ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d7cb: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d7cd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d7d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048d7d7: jmp 0x48d7e2 */ goto L_0048d7e2;
L_0048d7d9:; BB(0x0048d7d9);
    /* 0048d7d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d7dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d7df: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048d7e2:; BB(0x0048d7e2);
    /* 0048d7e2: cmp dword ptr [ebp - 4], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d7e9: jge 0x48d839 */ if ((fS==fO)) goto L_0048d839;
L_0048d7eb:; BB(0x0048d7eb);
    /* 0048d7eb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048d7f2: jmp 0x48d7fd */ goto L_0048d7fd;
L_0048d7f4:; BB(0x0048d7f4);
    /* 0048d7f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d7f7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d7fa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0048d7fd:; BB(0x0048d7fd);
    /* 0048d7fd: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d801: jge 0x48d828 */ if ((fS==fO)) goto L_0048d828;
L_0048d803:; BB(0x0048d803);
    /* 0048d803: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d806: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0048d809: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d80c: mov ecx, dword ptr [edx + eax*4 + 0x6f7458] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x6f7458u));
    /* 0048d813: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0048d816: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d819: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0048d81c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d81f: mov dword ptr [edx + eax*4 + 0x6f7458], ecx */ W32((u32)(r_edx+r_eax*4+0x6f7458u), r_ecx);
    /* 0048d826: jmp 0x48d7f4 */ goto L_0048d7f4;
L_0048d828:; BB(0x0048d828);
    /* 0048d828: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d82b: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048d82e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d831: mov dword ptr [ecx + 0x6f7464], edx */ W32((u32)(r_ecx+0x6f7464u), r_edx);
    /* 0048d837: jmp 0x48d7d9 */ goto L_0048d7d9;
L_0048d839:; BB(0x0048d839);
    /* 0048d839: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d83b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d83c: ret  */ FN_RET(0x0048d7ca); r_esp += 4; return;
}

void f_0048d83d(void) /* FUN_0048d83d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d83d);
    /* 0048d83d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d83e: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d840: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d843: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0048d84a: jmp 0x48d855 */ goto L_0048d855;
L_0048d84c:; BB(0x0048d84c);
    /* 0048d84c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d84f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048d852: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048d855:; BB(0x0048d855);
    /* 0048d855: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d859: jl 0x48d8f2 */ if ((fS!=fO)) goto L_0048d8f2;
L_0048d85f:; BB(0x0048d85f);
    /* 0048d85f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048d866: jmp 0x48d871 */ goto L_0048d871;
L_0048d868:; BB(0x0048d868);
    /* 0048d868: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d86b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d86e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0048d871:; BB(0x0048d871);
    /* 0048d871: cmp dword ptr [ebp - 8], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d878: jge 0x48d8ed */ if ((fS==fO)) goto L_0048d8ed;
L_0048d87a:; BB(0x0048d87a);
    /* 0048d87a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048d87d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0048d880: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048d883: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048d886: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0048d889: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048d88c: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d890: jl 0x48d8c8 */ if ((fS!=fO)) goto L_0048d8c8;
L_0048d892:; BB(0x0048d892);
    /* 0048d892: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d895: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048d898: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048d89b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048d89d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d8a0: mov al, byte ptr [eax + ecx*4 + 0x6f7458] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx*4+0x6f7458u))) & 0xffu);
    /* 0048d8a7: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0048d8a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048d8ac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048d8ae: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0048d8b1: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048d8b6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048d8b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048d8bc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048d8be: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048d8c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048d8c4: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0048d8c6: jmp 0x48d8e8 */ goto L_0048d8e8;
L_0048d8c8:; BB(0x0048d8c8);
    /* 0048d8c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048d8cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d8cc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d8cf: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0048d8d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d8d5: mov ecx, dword ptr [edx + eax*4 + 0x6f7458] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x6f7458u));
    /* 0048d8dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d8dd: call 0x626330 */ r_esp -= 4; W32(r_esp, 0x48d8e2u); f_00626330();
    /* 0048d8e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048d8e5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0048d8e8:; BB(0x0048d8e8);
    /* 0048d8e8: jmp 0x48d868 */ goto L_0048d868;
L_0048d8ed:; BB(0x0048d8ed);
    /* 0048d8ed: jmp 0x48d84c */ goto L_0048d84c;
L_0048d8f2:; BB(0x0048d8f2);
    /* 0048d8f2: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d8f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d8f5: ret  */ FN_RET(0x0048d83d); r_esp += 4; return;
}

void f_0048d8f6(void) /* FUN_0048d8f6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d8f6);
    /* 0048d8f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d8f7: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d8f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d8fa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048d901: jmp 0x48d90c */ goto L_0048d90c;
L_0048d903:; BB(0x0048d903);
    /* 0048d903: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d906: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d909: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048d90c:; BB(0x0048d90c);
    /* 0048d90c: cmp dword ptr [ebp - 4], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d913: jge 0x48d961 */ if ((fS==fO)) goto L_0048d961;
L_0048d915:; BB(0x0048d915);
    /* 0048d915: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d918: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048d91b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d91e: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048d921: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048d924: mov cl, byte ptr [ecx + 0x6f7458] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x6f7458u))) & 0xffu);
    /* 0048d92a: mov byte ptr [eax + edx], cl */ W8((u32)(r_eax+r_edx), (u8)r_ecx);
    /* 0048d92d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d930: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0048d933: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d936: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048d939: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048d93c: mov dl, byte ptr [edx + 0x6f745c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x6f745cu))) & 0xffu);
    /* 0048d942: mov byte ptr [ecx + eax + 1], dl */ W8((u32)(r_ecx+r_eax+0x1u), (u8)r_edx);
    /* 0048d946: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d949: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048d94c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d94f: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048d952: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048d955: mov al, byte ptr [eax + 0x6f7460] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x6f7460u))) & 0xffu);
    /* 0048d95b: mov byte ptr [edx + ecx + 2], al */ W8((u32)(r_edx+r_ecx+0x2u), (u8)r_eax);
    /* 0048d95f: jmp 0x48d903 */ goto L_0048d903;
L_0048d961:; BB(0x0048d961);
    /* 0048d961: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d963: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d964: ret  */ FN_RET(0x0048d8f6); r_esp += 4; return;
}

void f_0048d965(void) /* FUN_0048d965 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048d965);
    /* 0048d965: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d966: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d968: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d96b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0048d972: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0048d979: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0048d980: jmp 0x48d98b */ goto L_0048d98b;
L_0048d982:; BB(0x0048d982);
    /* 0048d982: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048d985: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d988: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0048d98b:; BB(0x0048d98b);
    /* 0048d98b: cmp dword ptr [ebp - 0x18], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d992: jge 0x48dadf */ if ((fS==fO)) goto L_0048dadf;
L_0048d998:; BB(0x0048d998);
    /* 0048d998: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048d99b: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048d99e: add ecx, 0x6f7458 */ {  u32 a = r_ecx; u32 b = 0x6f7458u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d9a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048d9a7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048d9aa: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0048d9ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048d9b0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0048d9b3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048d9b6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048d9b9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048d9bc: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0048d9bf: jmp 0x48d9ca */ goto L_0048d9ca;
L_0048d9c1:; BB(0x0048d9c1);
    /* 0048d9c1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048d9c4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d9c7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0048d9ca:; BB(0x0048d9ca);
    /* 0048d9ca: cmp dword ptr [ebp - 0x1c], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d9d1: jge 0x48d9fe */ if ((fS==fO)) goto L_0048d9fe;
L_0048d9d3:; BB(0x0048d9d3);
    /* 0048d9d3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048d9d6: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048d9d9: add ecx, 0x6f7458 */ {  u32 a = r_ecx; u32 b = 0x6f7458u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d9df: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048d9e2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d9e5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0048d9e8: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d9eb: jge 0x48d9fc */ if ((fS==fO)) goto L_0048d9fc;
L_0048d9ed:; BB(0x0048d9ed);
    /* 0048d9ed: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048d9f0: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048d9f3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048d9f6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0048d9f9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0048d9fc:; BB(0x0048d9fc);
    /* 0048d9fc: jmp 0x48d9c1 */ goto L_0048d9c1;
L_0048d9fe:; BB(0x0048d9fe);
    /* 0048d9fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048da01: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048da04: add ecx, 0x6f7458 */ {  u32 a = r_ecx; u32 b = 0x6f7458u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048da0a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048da0d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048da10: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048da13: je 0x48da89 */ if (fZ) goto L_0048da89;
L_0048da15:; BB(0x0048da15);
    /* 0048da15: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048da18: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0048da1a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048da1d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048da20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048da23: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0048da25: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0048da27: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048da2a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048da2d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0048da2f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048da32: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0048da35: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0048da38: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048da3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048da3e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0048da41: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0048da44: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048da47: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048da4a: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0048da4d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048da50: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048da53: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0048da56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048da59: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048da5c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048da5f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0048da62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048da65: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048da68: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0048da6b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048da6e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0048da71: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048da74: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048da77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048da7a: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0048da7d: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0048da80: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048da83: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048da86: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_0048da89:; BB(0x0048da89);
    /* 0048da89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048da8c: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048da8f: je 0x48dada */ if (fZ) goto L_0048dada;
L_0048da91:; BB(0x0048da91);
    /* 0048da91: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048da94: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048da97: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0048da99: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048da9c: mov dword ptr [eax*4 + 0x6f8868], edx */ W32((u32)(r_eax*4+0x6f8868u), r_edx);
    /* 0048daa3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048daa6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048daa9: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048daac: jmp 0x48dab7 */ goto L_0048dab7;
L_0048daae:; BB(0x0048daae);
    /* 0048daae: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048dab1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048dab4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0048dab7:; BB(0x0048dab7);
    /* 0048dab7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048daba: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dabd: jge 0x48dace */ if ((fS==fO)) goto L_0048dace;
L_0048dabf:; BB(0x0048dabf);
    /* 0048dabf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048dac2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048dac5: mov dword ptr [ecx*4 + 0x6f8868], edx */ W32((u32)(r_ecx*4+0x6f8868u), r_edx);
    /* 0048dacc: jmp 0x48daae */ goto L_0048daae;
L_0048dace:; BB(0x0048dace);
    /* 0048dace: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048dad1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048dad4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048dad7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0048dada:; BB(0x0048dada);
    /* 0048dada: jmp 0x48d982 */ goto L_0048d982;
L_0048dadf:; BB(0x0048dadf);
    /* 0048dadf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dae2: add edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048dae8: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0048daea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048daed: mov dword ptr [eax*4 + 0x6f8868], edx */ W32((u32)(r_eax*4+0x6f8868u), r_edx);
    /* 0048daf4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048daf7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dafa: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048dafd: jmp 0x48db08 */ goto L_0048db08;
L_0048daff:; BB(0x0048daff);
    /* 0048daff: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048db02: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048db05: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0048db08:; BB(0x0048db08);
    /* 0048db08: cmp dword ptr [ebp - 0x1c], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048db0f: jge 0x48db21 */ if ((fS==fO)) goto L_0048db21;
L_0048db11:; BB(0x0048db11);
    /* 0048db11: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048db14: mov dword ptr [eax*4 + 0x6f8868], 0xff */ W32((u32)(r_eax*4+0x6f8868u), 0xffu);
    /* 0048db1f: jmp 0x48daff */ goto L_0048daff;
L_0048db21:; BB(0x0048db21);
    /* 0048db21: mov esp, ebp */ r_esp = r_ebp;
    /* 0048db23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048db24: ret  */ FN_RET(0x0048d965); r_esp += 4; return;
}

void f_0048db25(void) /* FUN_0048db25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048db25);
    /* 0048db25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048db26: mov ebp, esp */ r_ebp = r_esp;
    /* 0048db28: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048db2b: mov dword ptr [ebp - 0x1c], 0x3e8 */ W32((u32)(r_ebp+0xffffffe4u), 0x3e8u);
    /* 0048db32: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0048db39: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048db3c: mov ecx, dword ptr [eax*4 + 0x6f8868] */ r_ecx = R32((u32)(r_eax*4+0x6f8868u));
    /* 0048db43: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048db46: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048db49: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048db4c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0048db4f:; BB(0x0048db4f);
    /* 0048db4f: cmp dword ptr [ebp - 0x14], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048db56: jl 0x48db62 */ if ((fS!=fO)) goto L_0048db62;
L_0048db58:; BB(0x0048db58);
    /* 0048db58: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048db5c: jl 0x48dccb */ if ((fS!=fO)) goto L_0048dccb;
L_0048db62:; BB(0x0048db62);
    /* 0048db62: cmp dword ptr [ebp - 0x14], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048db69: jge 0x48dc15 */ if ((fS==fO)) goto L_0048dc15;
L_0048db6f:; BB(0x0048db6f);
    /* 0048db6f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048db72: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048db75: add eax, 0x6f7458 */ {  u32 a = r_eax; u32 b = 0x6f7458u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048db7a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048db7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048db80: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0048db83: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048db86: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0048db89: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048db8c: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048db8f: jl 0x48db9a */ if ((fS!=fO)) goto L_0048db9a;
L_0048db91:; BB(0x0048db91);
    /* 0048db91: mov dword ptr [ebp - 0x14], 0x100 */ W32((u32)(r_ebp+0xffffffecu), 0x100u);
    /* 0048db98: jmp 0x48dc15 */ goto L_0048dc15;
L_0048db9a:; BB(0x0048db9a);
    /* 0048db9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048db9d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dba0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048dba3: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dba7: jge 0x48dbb1 */ if ((fS==fO)) goto L_0048dbb1;
L_0048dba9:; BB(0x0048dba9);
    /* 0048dba9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dbac: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048dbae: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0048dbb1:; BB(0x0048dbb1);
    /* 0048dbb1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dbb4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0048dbb6: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dbb9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048dbbc: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dbc0: jge 0x48dbca */ if ((fS==fO)) goto L_0048dbca;
L_0048dbc2:; BB(0x0048dbc2);
    /* 0048dbc2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048dbc5: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048dbc7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0048dbca:; BB(0x0048dbca);
    /* 0048dbca: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dbcd: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048dbd0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048dbd3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dbd6: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dbd9: jge 0x48dc15 */ if ((fS==fO)) goto L_0048dc15;
L_0048dbdb:; BB(0x0048dbdb);
    /* 0048dbdb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dbde: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048dbe1: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048dbe4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048dbe7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dbeb: jge 0x48dbf5 */ if ((fS==fO)) goto L_0048dbf5;
L_0048dbed:; BB(0x0048dbed);
    /* 0048dbed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048dbf0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dbf2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0048dbf5:; BB(0x0048dbf5);
    /* 0048dbf5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dbf8: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048dbfb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0048dbfe: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dc01: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dc04: jge 0x48dc15 */ if ((fS==fO)) goto L_0048dc15;
L_0048dc06:; BB(0x0048dc06);
    /* 0048dc06: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dc09: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048dc0c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dc0f: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0048dc12: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0048dc15:; BB(0x0048dc15);
    /* 0048dc15: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dc19: jl 0x48dcc6 */ if ((fS!=fO)) goto L_0048dcc6;
L_0048dc1f:; BB(0x0048dc1f);
    /* 0048dc1f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048dc22: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048dc25: add ecx, 0x6f7458 */ {  u32 a = r_ecx; u32 b = 0x6f7458u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dc2b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048dc2e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dc31: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048dc34: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048dc37: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048dc3a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dc3d: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dc40: jl 0x48dc4b */ if ((fS!=fO)) goto L_0048dc4b;
L_0048dc42:; BB(0x0048dc42);
    /* 0048dc42: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 0048dc49: jmp 0x48dcc6 */ goto L_0048dcc6;
L_0048dc4b:; BB(0x0048dc4b);
    /* 0048dc4b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048dc4e: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048dc51: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0048dc54: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dc58: jge 0x48dc62 */ if ((fS==fO)) goto L_0048dc62;
L_0048dc5a:; BB(0x0048dc5a);
    /* 0048dc5a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dc5d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048dc5f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0048dc62:; BB(0x0048dc62);
    /* 0048dc62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dc65: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048dc67: sub edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048dc6a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0048dc6d: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dc71: jge 0x48dc7b */ if ((fS==fO)) goto L_0048dc7b;
L_0048dc73:; BB(0x0048dc73);
    /* 0048dc73: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048dc76: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048dc78: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0048dc7b:; BB(0x0048dc7b);
    /* 0048dc7b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dc7e: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dc81: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048dc84: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dc87: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dc8a: jge 0x48dcc6 */ if ((fS==fO)) goto L_0048dcc6;
L_0048dc8c:; BB(0x0048dc8c);
    /* 0048dc8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dc8f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0048dc92: sub ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dc95: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048dc98: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dc9c: jge 0x48dca6 */ if ((fS==fO)) goto L_0048dca6;
L_0048dc9e:; BB(0x0048dc9e);
    /* 0048dc9e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048dca1: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048dca3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0048dca6:; BB(0x0048dca6);
    /* 0048dca6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dca9: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048dcac: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048dcaf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dcb2: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dcb5: jge 0x48dcc6 */ if ((fS==fO)) goto L_0048dcc6;
L_0048dcb7:; BB(0x0048dcb7);
    /* 0048dcb7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dcba: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0048dcbd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dcc0: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0048dcc3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0048dcc6:; BB(0x0048dcc6);
    /* 0048dcc6: jmp 0x48db4f */ goto L_0048db4f;
L_0048dccb:; BB(0x0048dccb);
    /* 0048dccb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048dcce: mov esp, ebp */ r_esp = r_ebp;
    /* 0048dcd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048dcd1: ret  */ FN_RET(0x0048db25); r_esp += 4; return;
}

void f_0048dcd2(void) /* FUN_0048dcd2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048dcd2);
    /* 0048dcd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048dcd3: mov ebp, esp */ r_ebp = r_esp;
    /* 0048dcd5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048dcd8: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048dcdb: add eax, 0x6f7458 */ {  u32 a = r_eax; u32 b = 0x6f7458u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048dce0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048dce1: ret  */ FN_RET(0x0048dcd2); r_esp += 4; return;
}

void f_0048dce2(void) /* FUN_0048dce2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048dce2);
    /* 0048dce2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048dce3: mov ebp, esp */ r_ebp = r_esp;
    /* 0048dce5: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048dce8: mov dword ptr [ebp - 0x30], 0x7fffffff */ W32((u32)(r_ebp+0xffffffd0u), 0x7fffffffu);
    /* 0048dcef: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0048dcf2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048dcf5: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 0048dcfc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048dcff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048dd02: mov dword ptr [ebp - 4], 0x6f8468 */ W32((u32)(r_ebp+0xfffffffcu), 0x6f8468u);
    /* 0048dd09: mov dword ptr [ebp - 0x20], 0x6f7058 */ W32((u32)(r_ebp+0xffffffe0u), 0x6f7058u);
    /* 0048dd10: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0048dd17: jmp 0x48dd22 */ goto L_0048dd22;
L_0048dd19:; BB(0x0048dd19);
    /* 0048dd19: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048dd1c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048dd1f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_0048dd22:; BB(0x0048dd22);
    /* 0048dd22: cmp dword ptr [ebp - 0x24], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dd29: jge 0x48de15 */ if ((fS==fO)) goto L_0048de15;
L_0048dd2f:; BB(0x0048dd2f);
    /* 0048dd2f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048dd32: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048dd35: add eax, 0x6f7458 */ {  u32 a = r_eax; u32 b = 0x6f7458u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048dd3a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0048dd3d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048dd40: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048dd42: sub edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048dd45: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0048dd48: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dd4c: jge 0x48dd56 */ if ((fS==fO)) goto L_0048dd56;
L_0048dd4e:; BB(0x0048dd4e);
    /* 0048dd4e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048dd51: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048dd53: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0048dd56:; BB(0x0048dd56);
    /* 0048dd56: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048dd59: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0048dd5c: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048dd5f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0048dd62: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dd66: jge 0x48dd70 */ if ((fS==fO)) goto L_0048dd70;
L_0048dd68:; BB(0x0048dd68);
    /* 0048dd68: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dd6b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048dd6d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0048dd70:; BB(0x0048dd70);
    /* 0048dd70: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048dd73: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dd76: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048dd79: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048dd7c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048dd7f: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048dd82: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048dd85: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dd89: jge 0x48dd93 */ if ((fS==fO)) goto L_0048dd93;
L_0048dd8b:; BB(0x0048dd8b);
    /* 0048dd8b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048dd8e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dd90: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0048dd93:; BB(0x0048dd93);
    /* 0048dd93: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048dd96: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048dd99: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0048dd9c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048dd9f: cmp eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dda2: jge 0x48ddb0 */ if ((fS==fO)) goto L_0048ddb0;
L_0048dda4:; BB(0x0048dda4);
    /* 0048dda4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048dda7: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0048ddaa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048ddad: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0048ddb0:; BB(0x0048ddb0);
    /* 0048ddb0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ddb3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0048ddb5: sar ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0048ddb8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ddbb: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048ddbd: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0048ddc0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048ddc3: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ddc6: jge 0x48ddd4 */ if ((fS==fO)) goto L_0048ddd4;
L_0048ddc8:; BB(0x0048ddc8);
    /* 0048ddc8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048ddcb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048ddce: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048ddd1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0048ddd4:; BB(0x0048ddd4);
    /* 0048ddd4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ddd7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0048ddd9: sar ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0048dddc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048dddf: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048dde2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048dde4: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048dde7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ddea: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0048ddec: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ddef: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048ddf2: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0048ddf5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ddf8: shl eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048ddfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ddfe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048de00: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048de02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048de05: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0048de07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048de0a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048de0d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048de10: jmp 0x48dd19 */ goto L_0048dd19;
L_0048de15:; BB(0x0048de15);
    /* 0048de15: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048de18: mov eax, dword ptr [edx*4 + 0x6f7058] */ r_eax = R32((u32)(r_edx*4+0x6f7058u));
    /* 0048de1f: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048de22: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048de25: mov dword ptr [ecx*4 + 0x6f7058], eax */ W32((u32)(r_ecx*4+0x6f7058u), r_eax);
    /* 0048de2c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048de2f: mov eax, dword ptr [edx*4 + 0x6f8468] */ r_eax = R32((u32)(r_edx*4+0x6f8468u));
    /* 0048de36: sub eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048de3b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048de3e: mov dword ptr [ecx*4 + 0x6f8468], eax */ W32((u32)(r_ecx*4+0x6f8468u), r_eax);
    /* 0048de45: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048de48: mov esp, ebp */ r_esp = r_ebp;
    /* 0048de4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048de4b: ret  */ FN_RET(0x0048dce2); r_esp += 4; return;
}

void f_0048de4c(void) /* FUN_0048de4c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048de4c);
    /* 0048de4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048de4d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048de4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048de50: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048de53: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048de56: add eax, 0x6f7458 */ {  u32 a = r_eax; u32 b = 0x6f7458u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048de5b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048de5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048de61: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048de63: sub edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048de66: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048de69: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048de6c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048de6d: and edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048de73: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048de75: sar eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048de78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048de7b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048de7d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048de7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048de82: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0048de84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048de87: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048de8a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048de8d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048de90: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048de92: sub eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048de95: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048de98: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048de9b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048de9c: and edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048dea2: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048dea4: sar eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048dea7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048deaa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0048deac: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048deae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048deb1: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0048deb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048deb6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048deb9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048debc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048debf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048dec1: sub edx, dword ptr [ebp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048dec4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048dec7: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048deca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048decb: and edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048ded1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ded3: sar eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048ded6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ded9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048dedb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048dedd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dee0: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0048dee2: mov esp, ebp */ r_esp = r_ebp;
    /* 0048dee4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048dee5: ret  */ FN_RET(0x0048de4c); r_esp += 4; return;
}

void f_0048dee6(void) /* FUN_0048dee6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048dee6);
    /* 0048dee6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048dee7: mov ebp, esp */ r_ebp = r_esp;
    /* 0048dee9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048deec: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048deef: sub eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048def2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048def5: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048def9: jge 0x48df02 */ if ((fS==fO)) goto L_0048df02;
L_0048defb:; BB(0x0048defb);
    /* 0048defb: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
L_0048df02:; BB(0x0048df02);
    /* 0048df02: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048df05: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048df08: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048df0b: cmp dword ptr [ebp - 0x1c], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048df12: jle 0x48df1b */ if ((fZ||fS!=fO)) goto L_0048df1b;
L_0048df14:; BB(0x0048df14);
    /* 0048df14: mov dword ptr [ebp - 0x1c], 0x100 */ W32((u32)(r_ebp+0xffffffe4u), 0x100u);
L_0048df1b:; BB(0x0048df1b);
    /* 0048df1b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0048df1e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048df21: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0048df24: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048df27: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048df2a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048df2d: mov dword ptr [ebp - 8], 0x6f8c68 */ W32((u32)(r_ebp+0xfffffff8u), 0x6f8c68u);
L_0048df34:; BB(0x0048df34);
    /* 0048df34: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048df37: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048df3a: jl 0x48df48 */ if ((fS!=fO)) goto L_0048df48;
L_0048df3c:; BB(0x0048df3c);
    /* 0048df3c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048df3f: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048df42: jle 0x48e0ae */ if ((fZ||fS!=fO)) goto L_0048e0ae;
L_0048df48:; BB(0x0048df48);
    /* 0048df48: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048df4b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048df4e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048df51: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048df54: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048df56: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0048df59: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048df5c: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048df5f: jge 0x48e001 */ if ((fS==fO)) goto L_0048e001;
L_0048df65:; BB(0x0048df65);
    /* 0048df65: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048df68: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048df6b: add ecx, 0x6f7458 */ {  u32 a = r_ecx; u32 b = 0x6f7458u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048df71: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048df74: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048df77: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048df79: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048df7c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048df7f: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048df82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048df83: and edx, 0x3ffff */ {  u32 a = r_edx; u32 b = 0x3ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048df89: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048df8b: sar eax, 0x12 */ { u32 c = (18u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048df8e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048df91: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0048df93: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048df95: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048df98: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0048df9a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048df9d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048dfa0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048dfa3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dfa6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048dfa8: sub edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048dfab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048dfae: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048dfb1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048dfb2: and edx, 0x3ffff */ {  u32 a = r_edx; u32 b = 0x3ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048dfb8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048dfba: sar eax, 0x12 */ { u32 c = (18u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048dfbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dfc0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048dfc2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048dfc4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dfc7: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0048dfc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dfcc: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dfcf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048dfd2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dfd5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048dfd7: sub eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048dfda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048dfdd: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048dfe0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048dfe1: and edx, 0x3ffff */ {  u32 a = r_edx; u32 b = 0x3ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048dfe7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048dfe9: sar eax, 0x12 */ { u32 c = (18u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048dfec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dfef: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0048dff1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dff3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048dff6: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0048dff8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048dffb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048dffe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0048e001:; BB(0x0048e001);
    /* 0048e001: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048e004: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048e007: jle 0x48e0a9 */ if ((fZ||fS!=fO)) goto L_0048e0a9;
L_0048e00d:; BB(0x0048e00d);
    /* 0048e00d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048e010: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0048e013: add edx, 0x6f7458 */ {  u32 a = r_edx; u32 b = 0x6f7458u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048e019: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0048e01c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e01f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0048e021: sub ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e024: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e027: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e02a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e02b: and edx, 0x3ffff */ {  u32 a = r_edx; u32 b = 0x3ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048e031: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e033: sar eax, 0x12 */ { u32 c = (18u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048e036: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e039: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0048e03b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e03d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e040: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0048e042: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e045: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e048: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048e04b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e04e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048e050: sub edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048e053: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e056: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e059: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e05a: and edx, 0x3ffff */ {  u32 a = r_edx; u32 b = 0x3ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048e060: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e062: sar eax, 0x12 */ { u32 c = (18u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048e065: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e068: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048e06a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048e06c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e06f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0048e071: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e074: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e077: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048e07a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e07d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048e07f: sub eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048e082: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e085: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e088: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e089: and edx, 0x3ffff */ {  u32 a = r_edx; u32 b = 0x3ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048e08f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e091: sar eax, 0x12 */ { u32 c = (18u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048e094: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e097: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0048e099: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e09b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e09e: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0048e0a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048e0a3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048e0a6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0048e0a9:; BB(0x0048e0a9);
    /* 0048e0a9: jmp 0x48df34 */ goto L_0048df34;
L_0048e0ae:; BB(0x0048e0ae);
    /* 0048e0ae: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e0b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e0b1: ret  */ FN_RET(0x0048dee6); r_esp += 4; return;
}

void f_0048e0b2(void) /* FUN_0048e0b2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e0b2);
    /* 0048e0b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e0b3: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e0b5: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e0b8: mov eax, dword ptr [0x6f845c] */ r_eax = R32((u32)(0x6f845cu));
    /* 0048e0bd: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048e0c0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e0c1: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0048e0c6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0048e0c6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048e0c6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048e0c8: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e0cb: mov dword ptr [0x6f8464], eax */ W32((u32)(0x6f8464u), r_eax);
    /* 0048e0d0: mov edx, dword ptr [0x6f8458] */ r_edx = R32((u32)(0x6f8458u));
    /* 0048e0d6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0048e0d9: mov eax, dword ptr [0x6f8458] */ r_eax = R32((u32)(0x6f8458u));
    /* 0048e0de: add eax, dword ptr [0x6f8460] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6f8460u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e0e4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048e0e7: mov ecx, dword ptr [0x6f845c] */ r_ecx = R32((u32)(0x6f845cu));
    /* 0048e0ed: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e0f0: mov eax, dword ptr [0x6f8460] */ r_eax = R32((u32)(0x6f8460u));
    /* 0048e0f5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e0f6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0048e0f6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048e0f6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048e0f8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0048e0fb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e0fe: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e0ff: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0048e104: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0048e104, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048e104, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048e106: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048e109: mov dword ptr [ebp - 8], 0x400 */ W32((u32)(r_ebp+0xfffffff8u), 0x400u);
    /* 0048e110: mov dword ptr [ebp - 0x30], 0x800 */ W32((u32)(r_ebp+0xffffffd0u), 0x800u);
    /* 0048e117: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0048e11a: sar edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0048e11d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0048e120: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048e124: jg 0x48e12d */ if ((!fZ&&fS==fO)) goto L_0048e12d;
L_0048e126:; BB(0x0048e126);
    /* 0048e126: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0048e12d:; BB(0x0048e12d);
    /* 0048e12d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0048e134: jmp 0x48e13f */ goto L_0048e13f;
L_0048e136:; BB(0x0048e136);
    /* 0048e136: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e139: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e13c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0048e13f:; BB(0x0048e13f);
    /* 0048e13f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e142: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048e145: jge 0x48e176 */ if ((fS==fO)) goto L_0048e176;
L_0048e147:; BB(0x0048e147);
    /* 0048e147: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048e14a: imul eax, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e14e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e151: imul edx, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e155: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048e157: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048e15a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048e15d: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e161: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e162: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0048e162, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048e162, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048e164: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e167: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e16a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e16d: mov dword ptr [eax*4 + 0x6f8c68], edx */ W32((u32)(r_eax*4+0x6f8c68u), r_edx);
    /* 0048e174: jmp 0x48e136 */ goto L_0048e136;
L_0048e176:; BB(0x0048e176);
    /* 0048e176: mov eax, dword ptr [0x6f8460] */ r_eax = R32((u32)(0x6f8460u));
    /* 0048e17b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e17c: mov ecx, 0x1f3 */ r_ecx = 0x1f3u;
    /* 0048e181: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0048e181, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048e181, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048e183: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e185: je 0x48e190 */ if (fZ) goto L_0048e190;
L_0048e187:; BB(0x0048e187);
    /* 0048e187: mov dword ptr [ebp - 0x34], 0x5d9 */ W32((u32)(r_ebp+0xffffffccu), 0x5d9u);
    /* 0048e18e: jmp 0x48e1cb */ goto L_0048e1cb;
L_0048e190:; BB(0x0048e190);
    /* 0048e190: mov eax, dword ptr [0x6f8460] */ r_eax = R32((u32)(0x6f8460u));
    /* 0048e195: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e196: mov ecx, 0x1eb */ r_ecx = 0x1ebu;
    /* 0048e19b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0048e19b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048e19b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048e19d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e19f: je 0x48e1aa */ if (fZ) goto L_0048e1aa;
L_0048e1a1:; BB(0x0048e1a1);
    /* 0048e1a1: mov dword ptr [ebp - 0x34], 0x5c1 */ W32((u32)(r_ebp+0xffffffccu), 0x5c1u);
    /* 0048e1a8: jmp 0x48e1cb */ goto L_0048e1cb;
L_0048e1aa:; BB(0x0048e1aa);
    /* 0048e1aa: mov eax, dword ptr [0x6f8460] */ r_eax = R32((u32)(0x6f8460u));
    /* 0048e1af: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e1b0: mov ecx, 0x1e7 */ r_ecx = 0x1e7u;
    /* 0048e1b5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0048e1b5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048e1b5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048e1b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e1b9: je 0x48e1c4 */ if (fZ) goto L_0048e1c4;
L_0048e1bb:; BB(0x0048e1bb);
    /* 0048e1bb: mov dword ptr [ebp - 0x34], 0x5b5 */ W32((u32)(r_ebp+0xffffffccu), 0x5b5u);
    /* 0048e1c2: jmp 0x48e1cb */ goto L_0048e1cb;
L_0048e1c4:; BB(0x0048e1c4);
    /* 0048e1c4: mov dword ptr [ebp - 0x34], 0x5e5 */ W32((u32)(r_ebp+0xffffffccu), 0x5e5u);
L_0048e1cb:; BB(0x0048e1cb);
    /* 0048e1cb: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0048e1d2:; BB(0x0048e1d2);
    /* 0048e1d2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e1d5: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048e1d8: jge 0x48e31a */ if ((fS==fO)) goto L_0048e31a;
L_0048e1de:; BB(0x0048e1de);
    /* 0048e1de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e1e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e1e3: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0048e1e5: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048e1e8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048e1eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e1ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e1f0: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 0048e1f3: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048e1f6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048e1f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e1fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048e1fe: mov dl, byte ptr [ecx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 0048e201: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0048e204: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0048e207: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e20a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e20b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048e20e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e20f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048e212: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e213: call 0x48dce2 */ r_esp -= 4; W32(r_esp, 0x48e218u); f_0048dce2();
    /* 0048e218: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e21b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0048e21e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e221: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e222: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048e225: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e226: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048e229: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e22a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048e22d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e22e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e231: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e232: call 0x48de4c */ r_esp -= 4; W32(r_esp, 0x48e237u); f_0048de4c();
    /* 0048e237: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e23a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e23e: je 0x48e25c */ if (fZ) goto L_0048e25c;
L_0048e240:; BB(0x0048e240);
    /* 0048e240: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e243: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e244: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048e247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e248: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048e24b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e24c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048e24f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e250: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048e253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e254: call 0x48dee6 */ r_esp -= 4; W32(r_esp, 0x48e259u); f_0048dee6();
    /* 0048e259: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048e25c:; BB(0x0048e25c);
    /* 0048e25c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e25f: add ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e262: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048e265: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e268: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0048e26b: jb 0x48e279 */ if (fC) goto L_0048e279;
L_0048e26d:; BB(0x0048e26d);
    /* 0048e26d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e270: sub eax, dword ptr [0x6f8460] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6f8460u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048e276: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048e279:; BB(0x0048e279);
    /* 0048e279: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e27c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e27f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048e282: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e285: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e286: idiv dword ptr [ebp - 0x28] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffd8u)); if (!d) UNSUP(0x0048e286, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048e286, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048e289: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e28b: jne 0x48e315 */ if (!fZ) goto L_0048e315;
L_0048e291:; BB(0x0048e291);
    /* 0048e291: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e294: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e295: idiv dword ptr [0x6f8464] */ { i32 d = (i32)R32((u32)(0x6f8464u)); if (!d) UNSUP(0x0048e295, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048e295, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048e29b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e29e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048e2a0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0048e2a3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0048e2a6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e2a7: mov ecx, 0x1e */ r_ecx = 0x1eu;
    /* 0048e2ac: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0048e2ac, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048e2ac, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048e2ae: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0048e2b1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048e2b3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0048e2b6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0048e2b9: sar eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048e2bc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048e2bf: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048e2c3: jg 0x48e2cc */ if ((!fZ&&fS==fO)) goto L_0048e2cc;
L_0048e2c5:; BB(0x0048e2c5);
    /* 0048e2c5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0048e2cc:; BB(0x0048e2cc);
    /* 0048e2cc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0048e2d3: jmp 0x48e2de */ goto L_0048e2de;
L_0048e2d5:; BB(0x0048e2d5);
    /* 0048e2d5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048e2d8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e2db: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_0048e2de:; BB(0x0048e2de);
    /* 0048e2de: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048e2e1: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048e2e4: jge 0x48e315 */ if ((fS==fO)) goto L_0048e315;
L_0048e2e6:; BB(0x0048e2e6);
    /* 0048e2e6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048e2e9: imul eax, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e2ed: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048e2f0: imul ecx, dword ptr [ebp - 0x2c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffd4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e2f4: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048e2f6: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048e2f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048e2fc: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e300: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e301: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0048e301, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048e301, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0048e303: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e306: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e309: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048e30c: mov dword ptr [eax*4 + 0x6f8c68], edx */ W32((u32)(r_eax*4+0x6f8c68u), r_edx);
    /* 0048e313: jmp 0x48e2d5 */ goto L_0048e2d5;
L_0048e315:; BB(0x0048e315);
    /* 0048e315: jmp 0x48e1d2 */ goto L_0048e1d2;
L_0048e31a:; BB(0x0048e31a);
    /* 0048e31a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e31c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e31d: ret  */ FN_RET(0x0048e0b2); r_esp += 4; return;
}

void f_0048e320(void) /* FUN_0048e320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e320);
    /* 0048e320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e321: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e324: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048e327: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e32a: mov dword ptr [eax], 0x636fec */ W32((u32)(r_eax), 0x636fecu);
    /* 0048e330: mov ecx, dword ptr [0x6f8ce8] */ r_ecx = R32((u32)(0x6f8ce8u));
    /* 0048e336: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e339: mov dword ptr [0x6f8ce8], ecx */ W32((u32)(0x6f8ce8u), r_ecx);
    /* 0048e33f: mov edx, dword ptr [0x6f8cec] */ r_edx = R32((u32)(0x6f8cecu));
    /* 0048e345: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048e348: mov dword ptr [0x6f8cec], edx */ W32((u32)(0x6f8cecu), r_edx);
    /* 0048e34e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e351: mov ecx, dword ptr [0x6f8cec] */ r_ecx = R32((u32)(0x6f8cecu));
    /* 0048e357: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0048e35a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e35d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e35f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e360: ret  */ FN_RET(0x0048e320); r_esp += 4; return;
}

void f_0048e361(void) /* FUN_0048e361 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e361);
    /* 0048e361: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e362: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e364: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e365: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048e368: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e36b: mov dword ptr [eax], 0x636fec */ W32((u32)(r_eax), 0x636fecu);
    /* 0048e371: mov ecx, dword ptr [0x6f8ce8] */ r_ecx = R32((u32)(0x6f8ce8u));
    /* 0048e377: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e37a: mov dword ptr [0x6f8ce8], ecx */ W32((u32)(0x6f8ce8u), r_ecx);
    /* 0048e380: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e383: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0048e38a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e38c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e38d: ret  */ FN_RET(0x0048e361); r_esp += 4; return;
}

void f_0048e38e(void) /* FUN_0048e38e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e38e);
    /* 0048e38e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e38f: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e391: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e392: ret  */ FN_RET(0x0048e38e); r_esp += 4; return;
}

void f_0048e393(void) /* FUN_0048e393 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e393);
    /* 0048e393: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e394: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e396: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e397: ret  */ FN_RET(0x0048e393); r_esp += 4; return;
}

void f_0048e398(void) /* FUN_0048e398 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e398);
    /* 0048e398: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e399: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e39b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e39c: ret  */ FN_RET(0x0048e398); r_esp += 4; return;
}

void f_0048e3a0(void) /* FUN_0048e3a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e3a0);
    /* 0048e3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e3a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048e3a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3a7: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x48e3acu); f_0060fc40();
    /* 0048e3ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e3af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e3b0: ret  */ FN_RET(0x0048e3a0); r_esp += 4; return;
}

void f_0048e3b1(void) /* FUN_0048e3b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e3b1);
    /* 0048e3b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3b2: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e3b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048e3b7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0048e3ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3bb: call 0x626460 */ r_esp -= 4; W32(r_esp, 0x48e3c0u); f_00626460();
    /* 0048e3c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e3c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e3c4: ret  */ FN_RET(0x0048e3b1); r_esp += 4; return;
}

void f_0048e3c5(void) /* FUN_0048e3c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e3c5);
    /* 0048e3c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3c6: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e3c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048e3d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3d2: push 0x68bde8 */ { u32 v = 0x68bde8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3d9: call dword ptr [0x633164] */ { u32 t = R32((u32)(0x633164u)); r_esp -= 4; W32(r_esp, 0x48e3dfu); call_ind(t); }
    /* 0048e3df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e3e0: ret  */ FN_RET(0x0048e3c5); r_esp += 4; return;
}

void f_0048e3f0(void) /* FUN_0048e3f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e3f0);
    /* 0048e3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e3f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048e3f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e3fa: call 0x46c640 */ r_esp -= 4; W32(r_esp, 0x48e3ffu); f_0046c640();
    /* 0048e3ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e402: mov dword ptr [eax], 0x636ff4 */ W32((u32)(r_eax), 0x636ff4u);
    /* 0048e408: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e40a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e40d: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x48e412u); f_005ea514();
    /* 0048e412: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e415: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 0048e41f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e422: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e424: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e425: ret  */ FN_RET(0x0048e3f0); r_esp += 4; return;
}

void f_0048e426(void) /* FUN_0048e426 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e426);
    /* 0048e426: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e427: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e429: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e42c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048e42f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e432: mov dword ptr [eax], 0x636ff4 */ W32((u32)(r_eax), 0x636ff4u);
    /* 0048e438: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e43b: cmp dword ptr [ecx + 0xc0], 0 */ {  u32 a = R32((u32)(r_ecx+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e442: je 0x48e481 */ if (fZ) goto L_0048e481;
L_0048e444:; BB(0x0048e444);
    /* 0048e444: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e447: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048e44d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048e450: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e453: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048e456: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e45a: je 0x48e46d */ if (fZ) goto L_0048e46d;
L_0048e45c:; BB(0x0048e45c);
    /* 0048e45c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e45e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e461: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048e463: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e466: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48e468u); call_ind(t); }
    /* 0048e468: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048e46b: jmp 0x48e474 */ goto L_0048e474;
L_0048e46d:; BB(0x0048e46d);
    /* 0048e46d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0048e474:; BB(0x0048e474);
    /* 0048e474: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e477: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
L_0048e481:; BB(0x0048e481);
    /* 0048e481: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e484: call 0x46c66c */ r_esp -= 4; W32(r_esp, 0x48e489u); f_0046c66c();
    /* 0048e489: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e48b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e48c: ret  */ FN_RET(0x0048e426); r_esp += 4; return;
}

void f_0048e48d(void) /* FUN_0048e48d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e48d);
    /* 0048e48d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e48e: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e490: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e493: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048e496: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048e499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e49a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e49d: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x48e4a2u); f_005d9738();
    /* 0048e4a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e4a4: jne 0x48e4b2 */ if (!fZ) goto L_0048e4b2;
L_0048e4a6:; BB(0x0048e4a6);
    /* 0048e4a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e4a9: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e4b0: je 0x48e4bb */ if (fZ) goto L_0048e4bb;
L_0048e4b2:; BB(0x0048e4b2);
    /* 0048e4b2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048e4b5: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e4b9: je 0x48e4c2 */ if (fZ) goto L_0048e4c2;
L_0048e4bb:; BB(0x0048e4bb);
    /* 0048e4bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e4bd: jmp 0x48e600 */ goto L_0048e600;
L_0048e4c2:; BB(0x0048e4c2);
    /* 0048e4c2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048e4c5: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e4c9: jne 0x48e4e5 */ if (!fZ) goto L_0048e4e5;
L_0048e4cb:; BB(0x0048e4cb);
    /* 0048e4cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e4ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e4cf: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048e4d5: call 0x4940ab */ r_esp -= 4; W32(r_esp, 0x48e4dau); f_004940ab();
    /* 0048e4da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e4dc: jne 0x48e4e5 */ if (!fZ) goto L_0048e4e5;
L_0048e4de:; BB(0x0048e4de);
    /* 0048e4de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e4e0: jmp 0x48e600 */ goto L_0048e600;
L_0048e4e5:; BB(0x0048e4e5);
    /* 0048e4e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048e4e8: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0048e4eb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048e4ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e4f1: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e4f4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048e4f7: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048e4fb: ja 0x48e5fa */ if ((!fC&&!fZ)) goto L_0048e5fa;
L_0048e501:; BB(0x0048e501);
    /* 0048e501: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e504: jmp dword ptr [edx*4 + 0x48e606] */ { u32 t = R32((u32)(r_edx*4+0x48e606u)); switch (t) { case 0x48e50bu: goto L_0048e50b; case 0x48e597u: goto L_0048e597; case 0x48e554u: goto L_0048e554; case 0x48e5b0u: goto L_0048e5b0; default: UNSUP(0x0048e504, "jump table entry is not a known target"); } }
L_0048e50b:; BB(0x0048e50b);
    /* 0048e50b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048e50e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0048e511: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e514: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e516: je 0x48e545 */ if (fZ) goto L_0048e545;
L_0048e518:; BB(0x0048e518);
    /* 0048e518: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e51b: cmp dword ptr [edx + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e522: jne 0x48e545 */ if (!fZ) goto L_0048e545;
L_0048e524:; BB(0x0048e524);
    /* 0048e524: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e528: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e52b: call 0x46ca74 */ r_esp -= 4; W32(r_esp, 0x48e530u); f_0046ca74();
    /* 0048e530: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048e536: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0048e53a: mov ecx, dword ptr [edx + 0x138] */ r_ecx = R32((u32)(r_edx+0x138u));
    /* 0048e540: call 0x48f7f9 */ r_esp -= 4; W32(r_esp, 0x48e545u); f_0048f7f9();
L_0048e545:; BB(0x0048e545);
    /* 0048e545: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048e548: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 0048e54f: jmp 0x48e5fa */ goto L_0048e5fa;
L_0048e554:; BB(0x0048e554);
    /* 0048e554: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e557: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e55e: je 0x48e595 */ if (fZ) goto L_0048e595;
L_0048e560:; BB(0x0048e560);
    /* 0048e560: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048e563: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e566: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0048e569: sub ecx, dword ptr [eax + 0xa4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e56f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e570: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048e573: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e576: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0048e579: sub ecx, dword ptr [eax + 0xa0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e57f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e580: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e583: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048e585: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e588: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x48e58bu); call_ind(t); }
    /* 0048e58b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048e58e: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_0048e595:; BB(0x0048e595);
    /* 0048e595: jmp 0x48e5fa */ goto L_0048e5fa;
L_0048e597:; BB(0x0048e597);
    /* 0048e597: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e59a: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 0048e5a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048e5a7: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 0048e5ae: jmp 0x48e5fa */ goto L_0048e5fa;
L_0048e5b0:; BB(0x0048e5b0);
    /* 0048e5b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048e5b3: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0048e5b7: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e5ba: jne 0x48e5fa */ if (!fZ) goto L_0048e5fa;
L_0048e5bc:; BB(0x0048e5bc);
    /* 0048e5bc: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048e5c2: call 0x492079 */ r_esp -= 4; W32(r_esp, 0x48e5c7u); f_00492079();
    /* 0048e5c7: mov ecx, dword ptr [eax + 0x138] */ r_ecx = R32((u32)(r_eax+0x138u));
    /* 0048e5cd: call 0x48f7a3 */ r_esp -= 4; W32(r_esp, 0x48e5d2u); f_0048f7a3();
    /* 0048e5d2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e5d5: jne 0x48e5fa */ if (!fZ) goto L_0048e5fa;
L_0048e5d7:; BB(0x0048e5d7);
    /* 0048e5d7: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048e5dd: call 0x492462 */ r_esp -= 4; W32(r_esp, 0x48e5e2u); f_00492462();
    /* 0048e5e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e5e4: mov eax, dword ptr [0x6f8d04] */ r_eax = R32((u32)(0x6f8d04u));
    /* 0048e5e9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0048e5ec: mov edx, dword ptr [0x6f8d04] */ r_edx = R32((u32)(0x6f8d04u));
    /* 0048e5f2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048e5f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e5f7: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x48e5fau); call_ind(t); }
L_0048e5fa:; BB(0x0048e5fa);
    /* 0048e5fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048e5fd: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_0048e600:; BB(0x0048e600);
    /* 0048e600: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e602: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e603: ret 4 */ FN_RET(0x0048e48d); r_esp += 8; return;
}

void f_0048e616(void) /* FUN_0048e616 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e616);
    /* 0048e616: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e617: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e619: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e61c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048e61f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e622: call 0x46c688 */ r_esp -= 4; W32(r_esp, 0x48e627u); f_0046c688();
    /* 0048e627: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e62a: cmp dword ptr [eax + 0xc0], 0 */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e631: jne 0x48e666 */ if (!fZ) goto L_0048e666;
L_0048e633:; BB(0x0048e633);
    /* 0048e633: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048e635: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48e63au); f_0048ab58();
    /* 0048e63a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e63d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048e640: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e644: je 0x48e653 */ if (fZ) goto L_0048e653;
L_0048e646:; BB(0x0048e646);
    /* 0048e646: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e649: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x48e64eu); f_005e9d30();
    /* 0048e64e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048e651: jmp 0x48e65a */ goto L_0048e65a;
L_0048e653:; BB(0x0048e653);
    /* 0048e653: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0048e65a:; BB(0x0048e65a);
    /* 0048e65a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e65d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048e660: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
L_0048e666:; BB(0x0048e666);
    /* 0048e666: push 0x18a89 */ { u32 v = 0x18a89u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e66b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e66e: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048e674: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48e679u); f_005ea0c3();
    /* 0048e679: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e67c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048e67e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e681: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x48e684u); call_ind(t); }
    /* 0048e684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e685: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e688: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e68a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e68d: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x48e690u); call_ind(t); }
    /* 0048e690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e691: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e694: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048e69a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e69d: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048e6a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e6a5: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48e6a8u); call_ind(t); }
    /* 0048e6a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e6ab: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x48e6b0u); f_005d9883();
    /* 0048e6b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e6b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e6b4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e6b7: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048e6bd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e6c0: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048e6c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e6c8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48e6cbu); call_ind(t); }
    /* 0048e6cb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e6ce: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048e6d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e6d7: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048e6dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e6df: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48e6e2u); call_ind(t); }
    /* 0048e6e2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e6e5: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048e6eb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048e6ee: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048e6f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e6f6: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48e6f9u); call_ind(t); }
    /* 0048e6f9: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e6fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e6fc: ret  */ FN_RET(0x0048e616); r_esp += 4; return;
}

void f_0048e6fd(void) /* FUN_0048e6fd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e6fd);
    /* 0048e6fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e6fe: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e700: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e703: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048e706: mov dword ptr [ebp - 0x14], 0x7d5 */ W32((u32)(r_ebp+0xffffffecu), 0x7d5u);
    /* 0048e70d: mov dword ptr [ebp - 0x10], 0x7d4 */ W32((u32)(r_ebp+0xfffffff0u), 0x7d4u);
    /* 0048e714: mov dword ptr [ebp - 0xc], 0x7d3 */ W32((u32)(r_ebp+0xfffffff4u), 0x7d3u);
    /* 0048e71b: mov dword ptr [ebp - 8], 0x7d2 */ W32((u32)(r_ebp+0xfffffff8u), 0x7d2u);
    /* 0048e722: mov dword ptr [ebp - 4], 0x7d6 */ W32((u32)(r_ebp+0xfffffffcu), 0x7d6u);
    /* 0048e729: mov eax, dword ptr [0x6f8d04] */ r_eax = R32((u32)(0x6f8d04u));
    /* 0048e72e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e730: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 0048e736: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x48e739u); call_ind(t); }
    /* 0048e739: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e73b: je 0x48e749 */ if (fZ) goto L_0048e749;
L_0048e73d:; BB(0x0048e73d);
    /* 0048e73d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048e740: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0048e744: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048e747: jmp 0x48e750 */ goto L_0048e750;
L_0048e749:; BB(0x0048e749);
    /* 0048e749: mov dword ptr [ebp - 0x20], 0x7dd */ W32((u32)(r_ebp+0xffffffe0u), 0x7ddu);
L_0048e750:; BB(0x0048e750);
    /* 0048e750: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e753: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0048e756: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048e759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e75a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e75d: call 0x46c873 */ r_esp -= 4; W32(r_esp, 0x48e762u); f_0046c873();
    /* 0048e762: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048e765: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e766: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e769: call 0x46c88c */ r_esp -= 4; W32(r_esp, 0x48e76eu); f_0046c88c();
    /* 0048e76e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048e771: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e772: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e775: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48e77au); f_005ea0c3();
    /* 0048e77a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e77d: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0048e787: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e789: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e78c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48e791u); f_005ea1cf();
    /* 0048e791: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e794: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048e796: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e799: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48e79cu); call_ind(t); }
    /* 0048e79c: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e79e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e79f: ret 4 */ FN_RET(0x0048e6fd); r_esp += 8; return;
}

void f_0048e7a2(void) /* FUN_0048e7a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e7a2);
    /* 0048e7a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e7a3: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e7a5: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e7a8: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048e7ab: mov dword ptr [ebp - 0x18], 0x7d5 */ W32((u32)(r_ebp+0xffffffe8u), 0x7d5u);
    /* 0048e7b2: mov dword ptr [ebp - 0x14], 0x7d4 */ W32((u32)(r_ebp+0xffffffecu), 0x7d4u);
    /* 0048e7b9: mov dword ptr [ebp - 0x10], 0x7d3 */ W32((u32)(r_ebp+0xfffffff0u), 0x7d3u);
    /* 0048e7c0: mov dword ptr [ebp - 0xc], 0x7d2 */ W32((u32)(r_ebp+0xfffffff4u), 0x7d2u);
    /* 0048e7c7: mov dword ptr [ebp - 8], 0x7d6 */ W32((u32)(r_ebp+0xfffffff8u), 0x7d6u);
    /* 0048e7ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e7d1: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x48e7d6u); f_0046ca47();
    /* 0048e7d6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048e7d9: mov eax, dword ptr [0x6f8d04] */ r_eax = R32((u32)(0x6f8d04u));
    /* 0048e7de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e7e0: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 0048e7e6: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x48e7e9u); call_ind(t); }
    /* 0048e7e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e7eb: je 0x48e7f9 */ if (fZ) goto L_0048e7f9;
L_0048e7ed:; BB(0x0048e7ed);
    /* 0048e7ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048e7f0: mov ecx, dword ptr [ebp + eax*4 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 0048e7f4: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0048e7f7: jmp 0x48e800 */ goto L_0048e800;
L_0048e7f9:; BB(0x0048e7f9);
    /* 0048e7f9: mov dword ptr [ebp - 0x24], 0x7dd */ W32((u32)(r_ebp+0xffffffdcu), 0x7ddu);
L_0048e800:; BB(0x0048e800);
    /* 0048e800: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e803: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0048e806: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e809: mov dword ptr [eax + 0xbc], 1 */ W32((u32)(r_eax+0xbcu), 0x1u);
    /* 0048e813: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e816: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e817: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e81a: call 0x46c873 */ r_esp -= 4; W32(r_esp, 0x48e81fu); f_0046c873();
    /* 0048e81f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e822: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e823: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e826: call 0x46c88c */ r_esp -= 4; W32(r_esp, 0x48e82bu); f_0046c88c();
    /* 0048e82b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e82e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e82f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e832: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48e837u); f_005ea0c3();
    /* 0048e837: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e83b: jne 0x48e851 */ if (!fZ) goto L_0048e851;
L_0048e83d:; BB(0x0048e83d);
    /* 0048e83d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e840: call 0x46ca1a */ r_esp -= 4; W32(r_esp, 0x48e845u); f_0046ca1a();
    /* 0048e845: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e848: je 0x48e851 */ if (fZ) goto L_0048e851;
L_0048e84a:; BB(0x0048e84a);
    /* 0048e84a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0048e851:; BB(0x0048e851);
    /* 0048e851: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e855: jne 0x48e863 */ if (!fZ) goto L_0048e863;
L_0048e857:; BB(0x0048e857);
    /* 0048e857: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e859: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e85c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48e861u); f_005ea1cf();
    /* 0048e861: jmp 0x48e87e */ goto L_0048e87e;
L_0048e863:; BB(0x0048e863);
    /* 0048e863: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e866: call 0x46ca1a */ r_esp -= 4; W32(r_esp, 0x48e86bu); f_0046ca1a();
    /* 0048e86b: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e86e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e871: lea edx, [eax + ecx - 1] */ r_edx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 0048e875: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e876: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e879: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48e87eu); f_005ea1cf();
L_0048e87e:; BB(0x0048e87e);
    /* 0048e87e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e881: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e883: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048e886: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48e889u); call_ind(t); }
    /* 0048e889: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e88b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e88c: ret 4 */ FN_RET(0x0048e7a2); r_esp += 8; return;
}

void f_0048e88f(void) /* FUN_0048e88f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e88f);
    /* 0048e88f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e890: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e892: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e895: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0048e898: mov dword ptr [ebp - 0x20], 0x31 */ W32((u32)(r_ebp+0xffffffe0u), 0x31u);
    /* 0048e89f: mov dword ptr [ebp - 0x1c], 0xa6 */ W32((u32)(r_ebp+0xffffffe4u), 0xa6u);
    /* 0048e8a6: mov dword ptr [ebp - 0x18], 0xcb */ W32((u32)(r_ebp+0xffffffe8u), 0xcbu);
    /* 0048e8ad: mov dword ptr [ebp - 0x14], 0x15a */ W32((u32)(r_ebp+0xffffffecu), 0x15au);
    /* 0048e8b4: mov dword ptr [ebp - 0x10], 0x178 */ W32((u32)(r_ebp+0xfffffff0u), 0x178u);
    /* 0048e8bb: mov dword ptr [ebp - 0xc], 0x15a */ W32((u32)(r_ebp+0xfffffff4u), 0x15au);
    /* 0048e8c2: mov dword ptr [ebp - 8], 0x218 */ W32((u32)(r_ebp+0xfffffff8u), 0x218u);
    /* 0048e8c9: mov dword ptr [ebp - 4], 0xa6 */ W32((u32)(r_ebp+0xfffffffcu), 0xa6u);
    /* 0048e8d0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e8d3: cmp dword ptr [eax + 0xc0], 0 */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e8da: je 0x48e99f */ if (fZ) goto L_0048e99f;
L_0048e8e0:; BB(0x0048e8e0);
    /* 0048e8e0: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048e8e6: cmp dword ptr [ecx + 0x150], 0 */ {  u32 a = R32((u32)(r_ecx+0x150u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e8ed: je 0x48e930 */ if (fZ) goto L_0048e930;
L_0048e8ef:; BB(0x0048e8ef);
    /* 0048e8ef: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e8f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048e8f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e8f7: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x48e8fau); call_ind(t); }
    /* 0048e8fa: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0048e8fe: add eax, dword ptr [ebp + ecx*8 - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*8+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e902: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e903: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e906: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048e908: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e90b: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x48e90eu); call_ind(t); }
    /* 0048e90e: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0048e912: add eax, dword ptr [ebp + ecx*8 - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*8+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e917: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e91a: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 0048e920: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e923: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 0048e929: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048e92b: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x48e92eu); call_ind(t); }
    /* 0048e92e: jmp 0x48e965 */ goto L_0048e965;
L_0048e930:; BB(0x0048e930);
    /* 0048e930: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e933: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048e935: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e938: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x48e93bu); call_ind(t); }
    /* 0048e93b: add eax, 0x47 */ {  u32 a = r_eax; u32 b = 0x47u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e93e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e93f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e942: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e944: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e947: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x48e94au); call_ind(t); }
    /* 0048e94a: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e94d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e94e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e951: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048e957: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e95a: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048e960: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e962: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48e965u); call_ind(t); }
L_0048e965:; BB(0x0048e965);
    /* 0048e965: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e968: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x48e96du); f_005d9883();
    /* 0048e96d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e971: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e974: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048e97a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e97d: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048e983: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e985: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48e988u); call_ind(t); }
    /* 0048e988: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e98b: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048e991: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048e994: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048e99a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e99c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48e99fu); call_ind(t); }
L_0048e99f:; BB(0x0048e99f);
    /* 0048e99f: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e9a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e9a2: ret 4 */ FN_RET(0x0048e88f); r_esp += 8; return;
}

void f_0048e9a5(void) /* FUN_0048e9a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e9a5);
    /* 0048e9a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e9a6: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e9a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e9a9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048e9ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e9af: call 0x46c69b */ r_esp -= 4; W32(r_esp, 0x48e9b4u); f_0046c69b();
    /* 0048e9b4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048e9b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e9b9: call 0x46ca5b */ r_esp -= 4; W32(r_esp, 0x48e9beu); f_0046ca5b();
    /* 0048e9be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e9c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e9c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e9c6: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48e9c9u); call_ind(t); }
    /* 0048e9c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e9cc: cmp dword ptr [eax + 0xc0], 0 */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e9d3: je 0x48e9ec */ if (fZ) goto L_0048e9ec;
L_0048e9d5:; BB(0x0048e9d5);
    /* 0048e9d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e9d8: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 0048e9de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048e9e1: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048e9e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048e9e9: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48e9ecu); call_ind(t); }
L_0048e9ec:; BB(0x0048e9ec);
    /* 0048e9ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0048e9ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e9ef: ret  */ FN_RET(0x0048e9a5); r_esp += 4; return;
}

void f_0048e9f0(void) /* FUN_0048e9f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048e9f0);
    /* 0048e9f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e9f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048e9f3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e9f6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048e9f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048e9fc: call 0x46cb10 */ r_esp -= 4; W32(r_esp, 0x48ea01u); f_0046cb10();
    /* 0048ea01: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ea04: mov dword ptr [eax], 0x637044 */ W32((u32)(r_eax), 0x637044u);
    /* 0048ea0a: push 0x3fc */ { u32 v = 0x3fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ea0f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48ea14u); f_0048ab58();
    /* 0048ea14: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ea17: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048ea1a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ea1e: je 0x48ea2d */ if (fZ) goto L_0048ea2d;
L_0048ea20:; BB(0x0048ea20);
    /* 0048ea20: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ea23: call 0x5b9c90 */ r_esp -= 4; W32(r_esp, 0x48ea28u); f_005b9c90();
    /* 0048ea28: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048ea2b: jmp 0x48ea34 */ goto L_0048ea34;
L_0048ea2d:; BB(0x0048ea2d);
    /* 0048ea2d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0048ea34:; BB(0x0048ea34);
    /* 0048ea34: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ea37: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ea3a: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0048ea3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ea3f: call 0x6243e0 */ r_esp -= 4; W32(r_esp, 0x48ea44u); f_006243e0();
    /* 0048ea44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ea47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ea48: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ea4b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0048ea4e: call 0x5b9cd5 */ r_esp -= 4; W32(r_esp, 0x48ea53u); f_005b9cd5();
    /* 0048ea53: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048ea5a: jmp 0x48ea65 */ goto L_0048ea65;
L_0048ea5c:; BB(0x0048ea5c);
    /* 0048ea5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ea5f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ea62: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0048ea65:; BB(0x0048ea65);
    /* 0048ea65: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ea69: jge 0x48ead0 */ if ((fS==fO)) goto L_0048ead0;
L_0048ea6b:; BB(0x0048ea6b);
    /* 0048ea6b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048ea72: jmp 0x48ea7d */ goto L_0048ea7d;
L_0048ea74:; BB(0x0048ea74);
    /* 0048ea74: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ea77: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048ea7a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0048ea7d:; BB(0x0048ea7d);
    /* 0048ea7d: cmp dword ptr [ebp - 8], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ea81: jge 0x48eace */ if ((fS==fO)) goto L_0048eace;
L_0048ea83:; BB(0x0048ea83);
    /* 0048ea83: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ea88: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48ea8du); f_0048ab58();
    /* 0048ea8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ea90: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048ea93: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ea97: je 0x48eaa6 */ if (fZ) goto L_0048eaa6;
L_0048ea99:; BB(0x0048ea99);
    /* 0048ea99: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048ea9c: call 0x48e3f0 */ r_esp -= 4; W32(r_esp, 0x48eaa1u); f_0048e3f0();
    /* 0048eaa1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048eaa4: jmp 0x48eaad */ goto L_0048eaad;
L_0048eaa6:; BB(0x0048eaa6);
    /* 0048eaa6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0048eaad:; BB(0x0048eaad);
    /* 0048eaad: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048eab0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048eab3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048eab5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048eab8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048eab9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048eabc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048eabf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048eac0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048eac3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048eac4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048eac7: call 0x46cd40 */ r_esp -= 4; W32(r_esp, 0x48eaccu); f_0046cd40();
    /* 0048eacc: jmp 0x48ea74 */ goto L_0048ea74;
L_0048eace:; BB(0x0048eace);
    /* 0048eace: jmp 0x48ea5c */ goto L_0048ea5c;
L_0048ead0:; BB(0x0048ead0);
    /* 0048ead0: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ead5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48eadau); f_0048ab58();
    /* 0048eada: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048eadd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048eae0: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048eae4: je 0x48eaf3 */ if (fZ) goto L_0048eaf3;
L_0048eae6:; BB(0x0048eae6);
    /* 0048eae6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048eae9: call 0x48e3f0 */ r_esp -= 4; W32(r_esp, 0x48eaeeu); f_0048e3f0();
    /* 0048eaee: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048eaf1: jmp 0x48eafa */ goto L_0048eafa;
L_0048eaf3:; BB(0x0048eaf3);
    /* 0048eaf3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0048eafa:; BB(0x0048eafa);
    /* 0048eafa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048eafd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048eb00: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048eb03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048eb04: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048eb07: call 0x5dd3ac */ r_esp -= 4; W32(r_esp, 0x48eb0cu); f_005dd3ac();
    /* 0048eb0c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0048eb0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048eb11: call 0x46ca2e */ r_esp -= 4; W32(r_esp, 0x48eb16u); f_0046ca2e();
    /* 0048eb16: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048eb18: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048eb1b: call 0x46ca01 */ r_esp -= 4; W32(r_esp, 0x48eb20u); f_0046ca01();
    /* 0048eb20: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048eb23: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048eb25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048eb28: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48eb2bu); call_ind(t); }
    /* 0048eb2b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048eb2e: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 0048eb35: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048eb38: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 0048eb3f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048eb42: mov dword ptr [edx + 0x20], 0x34 */ W32((u32)(r_edx+0x20u), 0x34u);
    /* 0048eb49: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048eb4c: mov esp, ebp */ r_esp = r_ebp;
    /* 0048eb4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048eb4f: ret  */ FN_RET(0x0048e9f0); r_esp += 4; return;
}

void f_0048eb50(void) /* FUN_0048eb50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048eb50);
    /* 0048eb50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048eb51: mov ebp, esp */ r_ebp = r_esp;
    /* 0048eb53: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048eb56: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0048eb59: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048eb5c: mov dword ptr [eax], 0x637044 */ W32((u32)(r_eax), 0x637044u);
L_0048eb62:; BB(0x0048eb62);
    /* 0048eb62: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048eb65: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48eb6au); f_005dd4d2();
    /* 0048eb6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048eb6c: je 0x48ebb3 */ if (fZ) goto L_0048ebb3;
L_0048eb6e:; BB(0x0048eb6e);
    /* 0048eb6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048eb70: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048eb73: call 0x48ebec */ r_esp -= 4; W32(r_esp, 0x48eb78u); f_0048ebec();
    /* 0048eb78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048eb7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048eb7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048eb7f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048eb82: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x48eb87u); f_005dd469();
    /* 0048eb87: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048eb8a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0048eb8d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048eb90: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048eb93: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048eb97: je 0x48ebaa */ if (fZ) goto L_0048ebaa;
L_0048eb99:; BB(0x0048eb99);
    /* 0048eb99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048eb9b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048eb9e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048eba0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048eba3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48eba5u); call_ind(t); }
    /* 0048eba5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0048eba8: jmp 0x48ebb1 */ goto L_0048ebb1;
L_0048ebaa:; BB(0x0048ebaa);
    /* 0048ebaa: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0048ebb1:; BB(0x0048ebb1);
    /* 0048ebb1: jmp 0x48eb62 */ goto L_0048eb62;
L_0048ebb3:; BB(0x0048ebb3);
    /* 0048ebb3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048ebb6: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0048ebb9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048ebbc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048ebbf: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0048ebc2: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ebc6: je 0x48ebd9 */ if (fZ) goto L_0048ebd9;
L_0048ebc8:; BB(0x0048ebc8);
    /* 0048ebc8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ebca: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ebcd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ebcf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ebd2: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48ebd4u); call_ind(t); }
    /* 0048ebd4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048ebd7: jmp 0x48ebe0 */ goto L_0048ebe0;
L_0048ebd9:; BB(0x0048ebd9);
    /* 0048ebd9: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0048ebe0:; BB(0x0048ebe0);
    /* 0048ebe0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048ebe3: call 0x46cb2f */ r_esp -= 4; W32(r_esp, 0x48ebe8u); f_0046cb2f();
    /* 0048ebe8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ebea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ebeb: ret  */ FN_RET(0x0048eb50); r_esp += 4; return;
}

void f_0048ebec(void) /* FUN_0048ebec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ebec);
    /* 0048ebec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ebed: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ebef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ebf0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048ebf3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048ebf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ebf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ebfa: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48ebffu); f_005dd560();
    /* 0048ebff: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ec01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ec02: ret 4 */ FN_RET(0x0048ebec); r_esp += 8; return;
}

void f_0048ec05(void) /* FUN_0048ec05 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ec05);
    /* 0048ec05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ec06: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ec08: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ec0b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048ec0e: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0048ec12: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ec15: jne 0x48ec27 */ if (!fZ) goto L_0048ec27;
L_0048ec17:; BB(0x0048ec17);
    /* 0048ec17: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0048ec1e: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0048ec25: jmp 0x48ec57 */ goto L_0048ec57;
L_0048ec27:; BB(0x0048ec27);
    /* 0048ec27: movsx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0048ec2b: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ec31: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0048ec34: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048ec37: movsx edx, byte ptr [ebp + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0048ec3b: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048ec3e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0048ec41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ec44: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ec47: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048ec4a: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ec4e: jne 0x48ec57 */ if (!fZ) goto L_0048ec57;
L_0048ec50:; BB(0x0048ec50);
    /* 0048ec50: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
L_0048ec57:; BB(0x0048ec57);
    /* 0048ec57: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0048ec5e: jmp 0x48ec69 */ goto L_0048ec69;
L_0048ec60:; BB(0x0048ec60);
    /* 0048ec60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ec63: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ec66: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0048ec69:; BB(0x0048ec69);
    /* 0048ec69: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ec6c: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48ec71u); f_005dd4d2();
    /* 0048ec71: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ec74: jge 0x48ecb6 */ if ((fS==fO)) goto L_0048ecb6;
L_0048ec76:; BB(0x0048ec76);
    /* 0048ec76: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ec79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ec7a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ec7d: call 0x48ebec */ r_esp -= 4; W32(r_esp, 0x48ec82u); f_0048ebec();
    /* 0048ec82: mov ecx, eax */ r_ecx = r_eax;
    /* 0048ec84: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x48ec89u); f_0046ca47();
    /* 0048ec89: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ec8c: jne 0x48ecb4 */ if (!fZ) goto L_0048ecb4;
L_0048ec8e:; BB(0x0048ec8e);
    /* 0048ec8e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ec91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ec92: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ec95: call 0x48ebec */ r_esp -= 4; W32(r_esp, 0x48ec9au); f_0048ebec();
    /* 0048ec9a: mov ecx, eax */ r_ecx = r_eax;
    /* 0048ec9c: call 0x46ca1a */ r_esp -= 4; W32(r_esp, 0x48eca1u); f_0046ca1a();
    /* 0048eca1: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048eca4: jne 0x48ecb4 */ if (!fZ) goto L_0048ecb4;
L_0048eca6:; BB(0x0048eca6);
    /* 0048eca6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048eca9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ecaa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ecad: call 0x48ebec */ r_esp -= 4; W32(r_esp, 0x48ecb2u); f_0048ebec();
    /* 0048ecb2: jmp 0x48ecb8 */ goto L_0048ecb8;
L_0048ecb4:; BB(0x0048ecb4);
    /* 0048ecb4: jmp 0x48ec60 */ goto L_0048ec60;
L_0048ecb6:; BB(0x0048ecb6);
    /* 0048ecb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0048ecb8:; BB(0x0048ecb8);
    /* 0048ecb8: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ecba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ecbb: ret 4 */ FN_RET(0x0048ec05); r_esp += 8; return;
}

void f_0048ecbe(void) /* FUN_0048ecbe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ecbe);
    /* 0048ecbe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ecbf: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ecc1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ecc4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048ecc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ecca: call 0x46c250 */ r_esp -= 4; W32(r_esp, 0x48eccfu); f_0046c250();
    /* 0048eccf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ecd2: mov dword ptr [eax], 0x637054 */ W32((u32)(r_eax), 0x637054u);
    /* 0048ecd8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048ecdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ecdc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ecdf: call 0x46c28b */ r_esp -= 4; W32(r_esp, 0x48ece4u); f_0046c28b();
    /* 0048ece4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ece6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ece9: call 0x46c327 */ r_esp -= 4; W32(r_esp, 0x48eceeu); f_0046c327();
    /* 0048ecee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ecf1: call 0x48f67e */ r_esp -= 4; W32(r_esp, 0x48ecf6u); f_0048f67e();
    /* 0048ecf6: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ecf8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48ecfdu); f_0048ab58();
    /* 0048ecfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ed00: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048ed03: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ed07: je 0x48ed16 */ if (fZ) goto L_0048ed16;
L_0048ed09:; BB(0x0048ed09);
    /* 0048ed09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ed0c: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x48ed11u); f_005e9d30();
    /* 0048ed11: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048ed14: jmp 0x48ed1d */ goto L_0048ed1d;
L_0048ed16:; BB(0x0048ed16);
    /* 0048ed16: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0048ed1d:; BB(0x0048ed1d);
    /* 0048ed1d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed20: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ed23: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 0048ed26: push 0x13b2 */ { u32 v = 0x13b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed2e: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0048ed31: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48ed36u); f_005ea0c3();
    /* 0048ed36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed38: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed3b: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 0048ed3e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48ed43u); f_005ea1cf();
    /* 0048ed43: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed46: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0048ed49: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed4c: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0048ed4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ed51: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48ed54u); call_ind(t); }
    /* 0048ed54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed58: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed5b: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0048ed5e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed61: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0048ed64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ed66: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48ed69u); call_ind(t); }
    /* 0048ed69: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed6b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed6e: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0048ed71: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed74: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0048ed77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ed79: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48ed7cu); call_ind(t); }
    /* 0048ed7c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed7f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0048ed82: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed85: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0048ed88: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ed8a: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48ed8du); call_ind(t); }
    /* 0048ed8d: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed8f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48ed94u); f_0048ab58();
    /* 0048ed94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ed97: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048ed9a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ed9e: je 0x48edad */ if (fZ) goto L_0048edad;
L_0048eda0:; BB(0x0048eda0);
    /* 0048eda0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048eda3: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x48eda8u); f_005e9d30();
    /* 0048eda8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048edab: jmp 0x48edb4 */ goto L_0048edb4;
L_0048edad:; BB(0x0048edad);
    /* 0048edad: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0048edb4:; BB(0x0048edb4);
    /* 0048edb4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048edb7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048edba: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 0048edbd: push 0x13b2 */ { u32 v = 0x13b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048edc2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048edc5: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 0048edc8: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x48edcdu); f_005ea0c3();
    /* 0048edcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048edcf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048edd2: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0048edd5: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48eddau); f_005ea1cf();
    /* 0048edda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048eddd: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0048ede0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ede3: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0048ede6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ede8: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x48edebu); call_ind(t); }
    /* 0048edeb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048eded: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048edef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048edf2: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0048edf5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048edf8: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0048edfb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048edfd: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48ee00u); call_ind(t); }
    /* 0048ee00: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee02: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ee05: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0048ee08: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ee0b: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0048ee0e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ee10: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48ee13u); call_ind(t); }
    /* 0048ee13: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ee16: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0048ee19: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ee1c: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0048ee1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ee21: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48ee24u); call_ind(t); }
    /* 0048ee24: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ee27: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 0048ee2e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ee31: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ee33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ee34: ret 4 */ FN_RET(0x0048ecbe); r_esp += 8; return;
}

void f_0048ee37(void) /* FUN_0048ee37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ee37);
    /* 0048ee37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee38: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ee3a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ee3d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048ee40: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ee43: mov dword ptr [eax], 0x637054 */ W32((u32)(r_eax), 0x637054u);
    /* 0048ee49: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ee4c: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ee50: je 0x48ee89 */ if (fZ) goto L_0048ee89;
L_0048ee52:; BB(0x0048ee52);
    /* 0048ee52: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ee55: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0048ee58: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048ee5b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ee5e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048ee61: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ee65: je 0x48ee78 */ if (fZ) goto L_0048ee78;
L_0048ee67:; BB(0x0048ee67);
    /* 0048ee67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ee6c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048ee6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ee71: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48ee73u); call_ind(t); }
    /* 0048ee73: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048ee76: jmp 0x48ee7f */ goto L_0048ee7f;
L_0048ee78:; BB(0x0048ee78);
    /* 0048ee78: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0048ee7f:; BB(0x0048ee7f);
    /* 0048ee7f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ee82: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
L_0048ee89:; BB(0x0048ee89);
    /* 0048ee89: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ee8c: cmp dword ptr [edx + 0x68], 0 */ {  u32 a = R32((u32)(r_edx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ee90: je 0x48eec9 */ if (fZ) goto L_0048eec9;
L_0048ee92:; BB(0x0048ee92);
    /* 0048ee92: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ee95: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0048ee98: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0048ee9b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048ee9e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0048eea1: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048eea5: je 0x48eeb8 */ if (fZ) goto L_0048eeb8;
L_0048eea7:; BB(0x0048eea7);
    /* 0048eea7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048eea9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048eeac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048eeae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048eeb1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x48eeb3u); call_ind(t); }
    /* 0048eeb3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048eeb6: jmp 0x48eebf */ goto L_0048eebf;
L_0048eeb8:; BB(0x0048eeb8);
    /* 0048eeb8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0048eebf:; BB(0x0048eebf);
    /* 0048eebf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048eec2: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
L_0048eec9:; BB(0x0048eec9);
    /* 0048eec9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048eecc: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048eed0: je 0x48ef09 */ if (fZ) goto L_0048ef09;
L_0048eed2:; BB(0x0048eed2);
    /* 0048eed2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048eed5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0048eed8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048eedb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048eede: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048eee1: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048eee5: je 0x48eef8 */ if (fZ) goto L_0048eef8;
L_0048eee7:; BB(0x0048eee7);
    /* 0048eee7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048eee9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048eeec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048eeee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048eef1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x48eef3u); call_ind(t); }
    /* 0048eef3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048eef6: jmp 0x48eeff */ goto L_0048eeff;
L_0048eef8:; BB(0x0048eef8);
    /* 0048eef8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0048eeff:; BB(0x0048eeff);
    /* 0048eeff: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ef02: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_0048ef09:; BB(0x0048ef09);
    /* 0048ef09: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ef0c: call 0x46c26f */ r_esp -= 4; W32(r_esp, 0x48ef11u); f_0046c26f();
    /* 0048ef11: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ef13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ef14: ret  */ FN_RET(0x0048ee37); r_esp += 4; return;
}

void f_0048ef15(void) /* FUN_0048ef15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ef15);
    /* 0048ef15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ef16: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ef18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ef19: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048ef1c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048ef1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ef20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ef23: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x48ef28u); f_005dd560();
    /* 0048ef28: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ef2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ef2b: ret 4 */ FN_RET(0x0048ef15); r_esp += 8; return;
}

void f_0048ef2e(void) /* FUN_0048ef2e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ef2e);
    /* 0048ef2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ef2f: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ef31: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ef34: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048ef37: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 0048ef3e: mov eax, dword ptr [0x6f8d04] */ r_eax = R32((u32)(0x6f8d04u));
    /* 0048ef43: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ef45: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 0048ef4b: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x48ef4eu); call_ind(t); }
    /* 0048ef4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ef50: jne 0x48ef59 */ if (!fZ) goto L_0048ef59;
L_0048ef52:; BB(0x0048ef52);
    /* 0048ef52: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
L_0048ef59:; BB(0x0048ef59);
    /* 0048ef59: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ef5c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0048ef5f: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ef62: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ef65: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0048ef68: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ef6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ef6b: ret  */ FN_RET(0x0048ef2e); r_esp += 4; return;
}

void f_0048ef6c(void) /* FUN_0048ef6c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ef6c);
    /* 0048ef6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ef6d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ef6f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ef72: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048ef75: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 0048ef7c: mov eax, dword ptr [0x6f8d04] */ r_eax = R32((u32)(0x6f8d04u));
    /* 0048ef81: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ef83: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 0048ef89: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x48ef8cu); call_ind(t); }
    /* 0048ef8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ef8e: jne 0x48efad */ if (!fZ) goto L_0048efad;
L_0048ef90:; BB(0x0048ef90);
    /* 0048ef90: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ef93: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x48ef98u); f_0046c2a1();
    /* 0048ef98: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ef9b: jne 0x48efa6 */ if (!fZ) goto L_0048efa6;
L_0048ef9d:; BB(0x0048ef9d);
    /* 0048ef9d: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 0048efa4: jmp 0x48efad */ goto L_0048efad;
L_0048efa6:; BB(0x0048efa6);
    /* 0048efa6: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
L_0048efad:; BB(0x0048efad);
    /* 0048efad: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048efb0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0048efb3: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048efb6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048efb9: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0048efbc: mov esp, ebp */ r_esp = r_ebp;
    /* 0048efbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048efbf: ret  */ FN_RET(0x0048ef6c); r_esp += 4; return;
}

void f_0048efc0(void) /* FUN_0048efc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048efc0);
    /* 0048efc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048efc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048efc3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048efc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048efc9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048efcc: call 0x46c2ef */ r_esp -= 4; W32(r_esp, 0x48efd1u); f_0046c2ef();
    /* 0048efd1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048efd4: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0048efd7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048efda: call 0x46c316 */ r_esp -= 4; W32(r_esp, 0x48efdfu); f_0046c316();
    /* 0048efdf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048efe2: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0048efe5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048efec: jmp 0x48eff7 */ goto L_0048eff7;
L_0048efee:; BB(0x0048efee);
    /* 0048efee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048eff1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048eff4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048eff7:; BB(0x0048eff7);
    /* 0048eff7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048effa: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48efffu); f_005dd4d2();
    /* 0048efff: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f002: jge 0x48f074 */ if ((fS==fO)) goto L_0048f074;
L_0048f004:; BB(0x0048f004);
    /* 0048f004: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f007: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0048f00a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f00b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f00e: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0048f011: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f012: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f015: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f016: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f019: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f01eu); f_0048ef15();
    /* 0048f01e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0048f021: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f024: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f026: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f029: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48f02cu); call_ind(t); }
    /* 0048f02c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f02f: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f033: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f036: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f037: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f03a: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f03fu); f_0048ef15();
    /* 0048f03f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048f042: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048f045: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048f047: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048f04a: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x48f04du); call_ind(t); }
    /* 0048f04d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f050: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f051: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f054: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f059u); f_0048ef15();
    /* 0048f059: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048f05c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f05f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048f061: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f064: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x48f067u); call_ind(t); }
    /* 0048f067: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f06a: call 0x48ef6c */ r_esp -= 4; W32(r_esp, 0x48f06fu); f_0048ef6c();
    /* 0048f06f: jmp 0x48efee */ goto L_0048efee;
L_0048f074:; BB(0x0048f074);
    /* 0048f074: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f076: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f077: ret  */ FN_RET(0x0048efc0); r_esp += 4; return;
}

void f_0048f078(void) /* FUN_0048f078 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048f078);
    /* 0048f078: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f079: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f07b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f07e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f07f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048f082: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048f088: jmp 0x48f096 */ goto L_0048f096;
L_0048f08a:; BB(0x0048f08a);
    /* 0048f08a: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0048f08e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0048f092: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0048f096:; BB(0x0048f096);
    /* 0048f096: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048f09a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f09d: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48f0a2u); f_005dd4d2();
    /* 0048f0a2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f0a4: jge 0x48f0c5 */ if ((fS==fO)) goto L_0048f0c5;
L_0048f0a6:; BB(0x0048f0a6);
    /* 0048f0a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f0a9: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x48f0aeu); f_0046c2a1();
    /* 0048f0ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f0af: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048f0b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f0b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f0b7: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f0bcu); f_0048ef15();
    /* 0048f0bc: mov ecx, eax */ r_ecx = r_eax;
    /* 0048f0be: call 0x48e7a2 */ r_esp -= 4; W32(r_esp, 0x48f0c3u); f_0048e7a2();
    /* 0048f0c3: jmp 0x48f08a */ goto L_0048f08a;
L_0048f0c5:; BB(0x0048f0c5);
    /* 0048f0c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048f0c6: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f0c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f0c9: ret  */ FN_RET(0x0048f078); r_esp += 4; return;
}

void f_0048f0ca(void) /* FUN_0048f0ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048f0ca);
    /* 0048f0ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f0cb: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f0cd: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f0d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f0d1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048f0d4: mov eax, dword ptr [0x6f8d04] */ r_eax = R32((u32)(0x6f8d04u));
    /* 0048f0d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f0db: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 0048f0e1: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x48f0e4u); call_ind(t); }
    /* 0048f0e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f0e6: je 0x48f219 */ if (fZ) goto L_0048f219;
L_0048f0ec:; BB(0x0048f0ec);
    /* 0048f0ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f0ef: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x48f0f4u); f_0046c2a1();
    /* 0048f0f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f0f6: je 0x48f105 */ if (fZ) goto L_0048f105;
L_0048f0f8:; BB(0x0048f0f8);
    /* 0048f0f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f0fb: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x48f100u); f_0046c2a1();
    /* 0048f100: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f103: jne 0x48f15b */ if (!fZ) goto L_0048f15b;
L_0048f105:; BB(0x0048f105);
    /* 0048f105: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f107: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f10a: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f10fu); f_0048ef15();
    /* 0048f10f: mov ecx, eax */ r_ecx = r_eax;
    /* 0048f111: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x48f116u); f_005ea54c();
    /* 0048f116: mov esi, eax */ r_esi = r_eax;
    /* 0048f118: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f11b: call 0x46c2ef */ r_esp -= 4; W32(r_esp, 0x48f120u); f_0046c2ef();
    /* 0048f120: lea eax, [esi + eax + 0xa] */ r_eax = (u32)(r_esi+r_eax+0xau);
    /* 0048f124: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0048f128: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f12a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f12d: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f132u); f_0048ef15();
    /* 0048f132: mov ecx, eax */ r_ecx = r_eax;
    /* 0048f134: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x48f139u); f_005ea57d();
    /* 0048f139: mov esi, eax */ r_esi = r_eax;
    /* 0048f13b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f13e: call 0x46c316 */ r_esp -= 4; W32(r_esp, 0x48f143u); f_0046c316();
    /* 0048f143: lea ecx, [esi + eax + 0x1e] */ r_ecx = (u32)(r_esi+r_eax+0x1eu);
    /* 0048f147: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 0048f14b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048f14f: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048f152: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
    /* 0048f156: jmp 0x48f20c */ goto L_0048f20c;
L_0048f15b:; BB(0x0048f15b);
    /* 0048f15b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f15e: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x48f163u); f_0046c2a1();
    /* 0048f163: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f166: je 0x48f1bb */ if (fZ) goto L_0048f1bb;
L_0048f168:; BB(0x0048f168);
    /* 0048f168: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f16a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f16d: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f172u); f_0048ef15();
    /* 0048f172: mov ecx, eax */ r_ecx = r_eax;
    /* 0048f174: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x48f179u); f_005ea54c();
    /* 0048f179: mov esi, eax */ r_esi = r_eax;
    /* 0048f17b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f17e: call 0x46c2ef */ r_esp -= 4; W32(r_esp, 0x48f183u); f_0046c2ef();
    /* 0048f183: lea eax, [esi + eax + 8] */ r_eax = (u32)(r_esi+r_eax+0x8u);
    /* 0048f187: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0048f18b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f18d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f190: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f195u); f_0048ef15();
    /* 0048f195: mov ecx, eax */ r_ecx = r_eax;
    /* 0048f197: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x48f19cu); f_005ea57d();
    /* 0048f19c: mov esi, eax */ r_esi = r_eax;
    /* 0048f19e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f1a1: call 0x46c316 */ r_esp -= 4; W32(r_esp, 0x48f1a6u); f_0046c316();
    /* 0048f1a6: lea ecx, [esi + eax + 0x23] */ r_ecx = (u32)(r_esi+r_eax+0x23u);
    /* 0048f1aa: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 0048f1ae: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048f1b2: add edx, 0x52 */ {  u32 a = r_edx; u32 b = 0x52u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048f1b5: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
    /* 0048f1b9: jmp 0x48f20c */ goto L_0048f20c;
L_0048f1bb:; BB(0x0048f1bb);
    /* 0048f1bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f1bd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f1c0: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f1c5u); f_0048ef15();
    /* 0048f1c5: mov ecx, eax */ r_ecx = r_eax;
    /* 0048f1c7: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x48f1ccu); f_005ea54c();
    /* 0048f1cc: mov esi, eax */ r_esi = r_eax;
    /* 0048f1ce: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f1d1: call 0x46c2ef */ r_esp -= 4; W32(r_esp, 0x48f1d6u); f_0046c2ef();
    /* 0048f1d6: lea eax, [esi + eax + 7] */ r_eax = (u32)(r_esi+r_eax+0x7u);
    /* 0048f1da: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0048f1de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f1e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f1e3: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f1e8u); f_0048ef15();
    /* 0048f1e8: mov ecx, eax */ r_ecx = r_eax;
    /* 0048f1ea: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x48f1efu); f_005ea57d();
    /* 0048f1ef: mov esi, eax */ r_esi = r_eax;
    /* 0048f1f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f1f4: call 0x46c316 */ r_esp -= 4; W32(r_esp, 0x48f1f9u); f_0046c316();
    /* 0048f1f9: lea ecx, [esi + eax + 0x1f] */ r_ecx = (u32)(r_esi+r_eax+0x1fu);
    /* 0048f1fd: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 0048f201: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048f205: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048f208: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
L_0048f20c:; BB(0x0048f20c);
    /* 0048f20c: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0048f210: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f213: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 0048f217: jmp 0x48f24d */ goto L_0048f24d;
L_0048f219:; BB(0x0048f219);
    /* 0048f219: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f21c: call 0x46c2ef */ r_esp -= 4; W32(r_esp, 0x48f221u); f_0046c2ef();
    /* 0048f221: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048f224: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0048f228: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f22b: call 0x46c316 */ r_esp -= 4; W32(r_esp, 0x48f230u); f_0046c316();
    /* 0048f230: add eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f233: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0048f237: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048f23b: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048f23e: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 0048f242: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0048f246: add edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048f249: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0048f24d:; BB(0x0048f24d);
    /* 0048f24d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048f24f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f253: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0048f256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f257: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f25a: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0048f25d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48f262u); f_005ea1cf();
    /* 0048f262: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0048f266: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f267: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0048f26b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f26c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f26f: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0048f272: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f275: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0048f278: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f27a: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48f27du); call_ind(t); }
    /* 0048f27d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f280: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0048f283: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f286: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0048f289: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f28b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48f28eu); call_ind(t); }
    /* 0048f28e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048f290: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f294: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0048f297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f298: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f29b: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0048f29e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x48f2a3u); f_005ea1cf();
    /* 0048f2a3: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0048f2a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f2a8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048f2ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f2ad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f2b0: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0048f2b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f2b6: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0048f2b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f2bb: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48f2beu); call_ind(t); }
    /* 0048f2be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f2c1: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0048f2c4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f2c7: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0048f2ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f2cc: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x48f2cfu); call_ind(t); }
    /* 0048f2cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048f2d0: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f2d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f2d3: ret 8 */ FN_RET(0x0048f0ca); r_esp += 12; return;
}

void f_0048f2d6(void) /* FUN_0048f2d6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048f2d6);
    /* 0048f2d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f2d7: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f2d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f2da: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048f2dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f2e0: call 0x5dd52a */ r_esp -= 4; W32(r_esp, 0x48f2e5u); f_005dd52a();
    /* 0048f2e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f2e8: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0048f2eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f2ee: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0048f2f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f2f3: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48f2f6u); call_ind(t); }
    /* 0048f2f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f2f9: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0048f2fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f2ff: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0048f302: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f304: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x48f307u); call_ind(t); }
    /* 0048f307: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f30a: call 0x46c2ef */ r_esp -= 4; W32(r_esp, 0x48f30fu); f_0046c2ef();
    /* 0048f30f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f312: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0048f315: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f318: call 0x46c316 */ r_esp -= 4; W32(r_esp, 0x48f31du); f_0046c316();
    /* 0048f31d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f320: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0048f323: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f326: mov dword ptr [eax + 0x4c], 0xffffffff */ W32((u32)(r_eax+0x4cu), 0xffffffffu);
    /* 0048f32d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f330: mov dword ptr [ecx + 0x50], 0xffffffff */ W32((u32)(r_ecx+0x50u), 0xffffffffu);
    /* 0048f337: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f33a: mov dword ptr [edx + 0x54], 0xffffffff */ W32((u32)(r_edx+0x54u), 0xffffffffu);
    /* 0048f341: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f344: mov dword ptr [eax + 0x58], 0xffffffff */ W32((u32)(r_eax+0x58u), 0xffffffffu);
    /* 0048f34b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f34e: call 0x48f67e */ r_esp -= 4; W32(r_esp, 0x48f353u); f_0048f67e();
    /* 0048f353: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f356: ret  */ FN_RET(0x0048f2d6); r_esp += 4; return;
}

void f_0048f357(void) /* FUN_0048f357 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048f357);
    /* 0048f357: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f358: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f35a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f35d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f35e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048f361: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f364: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x48f369u); f_0046c2a1();
    /* 0048f369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f36a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f36d: call 0x46ca5b */ r_esp -= 4; W32(r_esp, 0x48f372u); f_0046ca5b();
    /* 0048f372: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f375: call 0x46c375 */ r_esp -= 4; W32(r_esp, 0x48f37au); f_0046c375();
    /* 0048f37a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f37b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f37e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f380: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f383: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48f386u); call_ind(t); }
    /* 0048f386: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f389: call 0x48ef6c */ r_esp -= 4; W32(r_esp, 0x48f38eu); f_0048ef6c();
    /* 0048f38e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f391: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48f396u); f_005dd4d2();
    /* 0048f396: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f398: jne 0x48f3ab */ if (!fZ) goto L_0048f3ab;
L_0048f39a:; BB(0x0048f39a);
    /* 0048f39a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f39d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f39e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f3a1: call 0x5dd3ac */ r_esp -= 4; W32(r_esp, 0x48f3a6u); f_005dd3ac();
    /* 0048f3a6: jmp 0x48f435 */ goto L_0048f435;
L_0048f3ab:; BB(0x0048f3ab);
    /* 0048f3ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f3ae: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x48f3b3u); f_0046ca47();
    /* 0048f3b3: mov esi, eax */ r_esi = r_eax;
    /* 0048f3b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f3b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f3ba: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f3bfu); f_0048ef15();
    /* 0048f3bf: mov ecx, eax */ r_ecx = r_eax;
    /* 0048f3c1: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x48f3c6u); f_0046ca47();
    /* 0048f3c6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f3c8: jl 0x48f3d8 */ if ((fS!=fO)) goto L_0048f3d8;
L_0048f3ca:; BB(0x0048f3ca);
    /* 0048f3ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f3cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f3ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f3d1: call 0x5dd3ac */ r_esp -= 4; W32(r_esp, 0x48f3d6u); f_005dd3ac();
    /* 0048f3d6: jmp 0x48f435 */ goto L_0048f435;
L_0048f3d8:; BB(0x0048f3d8);
    /* 0048f3d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f3db: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48f3e0u); f_005dd4d2();
    /* 0048f3e0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048f3e3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048f3e6: jmp 0x48f3f1 */ goto L_0048f3f1;
L_0048f3e8:; BB(0x0048f3e8);
    /* 0048f3e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f3eb: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048f3ee: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0048f3f1:; BB(0x0048f3f1);
    /* 0048f3f1: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f3f5: jle 0x48f435 */ if ((fZ||fS!=fO)) goto L_0048f435;
L_0048f3f7:; BB(0x0048f3f7);
    /* 0048f3f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f3fa: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x48f3ffu); f_0046ca47();
    /* 0048f3ff: mov esi, eax */ r_esi = r_eax;
    /* 0048f401: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f405: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f408: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f40du); f_0048ef15();
    /* 0048f40d: mov ecx, eax */ r_ecx = r_eax;
    /* 0048f40f: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x48f414u); f_0046ca47();
    /* 0048f414: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f416: jg 0x48f433 */ if ((!fZ&&fS==fO)) goto L_0048f433;
L_0048f418:; BB(0x0048f418);
    /* 0048f418: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f41b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f41c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f41f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f420: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f423: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f428u); f_0048ef15();
    /* 0048f428: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f429: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f42c: call 0x5dd63a */ r_esp -= 4; W32(r_esp, 0x48f431u); f_005dd63a();
    /* 0048f431: jmp 0x48f435 */ goto L_0048f435;
L_0048f433:; BB(0x0048f433);
    /* 0048f433: jmp 0x48f3e8 */ goto L_0048f3e8;
L_0048f435:; BB(0x0048f435);
    /* 0048f435: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f438: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48f43du); f_005dd4d2();
    /* 0048f43d: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f440: jne 0x48f47a */ if (!fZ) goto L_0048f47a;
L_0048f442:; BB(0x0048f442);
    /* 0048f442: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048f449: jmp 0x48f454 */ goto L_0048f454;
L_0048f44b:; BB(0x0048f44b);
    /* 0048f44b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f44e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f451: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048f454:; BB(0x0048f454);
    /* 0048f454: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f458: jge 0x48f47a */ if ((fS==fO)) goto L_0048f47a;
L_0048f45a:; BB(0x0048f45a);
    /* 0048f45a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f45d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f45e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f461: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f466u); f_0048ef15();
    /* 0048f466: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f467: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f46a: call 0x48f481 */ r_esp -= 4; W32(r_esp, 0x48f46fu); f_0048f481();
    /* 0048f46f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f472: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048f475: mov byte ptr [edx + 0x5c], al */ W8((u32)(r_edx+0x5cu), (u8)r_eax);
    /* 0048f478: jmp 0x48f44b */ goto L_0048f44b;
L_0048f47a:; BB(0x0048f47a);
    /* 0048f47a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048f47b: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f47d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f47e: ret 4 */ FN_RET(0x0048f357); r_esp += 8; return;
}

void f_0048f481(void) /* FUN_0048f481 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048f481);
    /* 0048f481: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f482: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f484: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f487: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048f48a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f48d: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x48f492u); f_0046ca47();
    /* 0048f492: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f495: jne 0x48f49d */ if (!fZ) goto L_0048f49d;
L_0048f497:; BB(0x0048f497);
    /* 0048f497: mov byte ptr [ebp - 8], 0 */ W8((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048f49b: jmp 0x48f4ab */ goto L_0048f4ab;
L_0048f49d:; BB(0x0048f49d);
    /* 0048f49d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f4a0: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x48f4a5u); f_0046ca47();
    /* 0048f4a5: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048f4a8: mov byte ptr [ebp - 8], al */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_eax);
L_0048f4ab:; BB(0x0048f4ab);
    /* 0048f4ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f4ae: call 0x46ca1a */ r_esp -= 4; W32(r_esp, 0x48f4b3u); f_0046ca1a();
    /* 0048f4b3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f4b6: jne 0x48f4be */ if (!fZ) goto L_0048f4be;
L_0048f4b8:; BB(0x0048f4b8);
    /* 0048f4b8: mov byte ptr [ebp - 4], 0x50 */ W8((u32)(r_ebp+0xfffffffcu), 0x50u);
    /* 0048f4bc: jmp 0x48f4cc */ goto L_0048f4cc;
L_0048f4be:; BB(0x0048f4be);
    /* 0048f4be: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f4c1: call 0x46ca1a */ r_esp -= 4; W32(r_esp, 0x48f4c6u); f_0046ca1a();
    /* 0048f4c6: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0048f4c9: mov byte ptr [ebp - 4], al */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_eax);
L_0048f4cc:; BB(0x0048f4cc);
    /* 0048f4cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f4cf: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048f4d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f4d7: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0048f4dd: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048f4df: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f4e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f4e2: ret 4 */ FN_RET(0x0048f481); r_esp += 8; return;
}

void f_0048f4e5(void) /* FUN_0048f4e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048f4e5);
    /* 0048f4e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f4e6: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f4e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f4eb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048f4ee: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0048f4f5: jmp 0x48f500 */ goto L_0048f500;
L_0048f4f7:; BB(0x0048f4f7);
    /* 0048f4f7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f4fa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f4fd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0048f500:; BB(0x0048f500);
    /* 0048f500: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f504: jge 0x48f524 */ if ((fS==fO)) goto L_0048f524;
L_0048f506:; BB(0x0048f506);
    /* 0048f506: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f509: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f50a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f50d: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f512u); f_0048ef15();
    /* 0048f512: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f513: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f516: call 0x48f481 */ r_esp -= 4; W32(r_esp, 0x48f51bu); f_0048f481();
    /* 0048f51b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f51e: mov byte ptr [ebp + edx - 8], al */ W8((u32)(r_ebp+r_edx+0xfffffff8u), (u8)r_eax);
    /* 0048f522: jmp 0x48f4f7 */ goto L_0048f4f7;
L_0048f524:; BB(0x0048f524);
    /* 0048f524: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f527: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f52b: jne 0x48f560 */ if (!fZ) goto L_0048f560;
L_0048f52d:; BB(0x0048f52d);
    /* 0048f52d: push 0x37c */ { u32 v = 0x37cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048f532: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48f537u); f_0048ab58();
    /* 0048f537: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048f53a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048f53d: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f541: je 0x48f550 */ if (fZ) goto L_0048f550;
L_0048f543:; BB(0x0048f543);
    /* 0048f543: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048f546: call 0x497530 */ r_esp -= 4; W32(r_esp, 0x48f54bu); f_00497530();
    /* 0048f54b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048f54e: jmp 0x48f557 */ goto L_0048f557;
L_0048f550:; BB(0x0048f550);
    /* 0048f550: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0048f557:; BB(0x0048f557);
    /* 0048f557: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f55a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048f55d: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
L_0048f560:; BB(0x0048f560);
    /* 0048f560: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0048f563: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f564: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f567: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 0048f56a: call 0x497591 */ r_esp -= 4; W32(r_esp, 0x48f56fu); f_00497591();
    /* 0048f56f: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f571: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f572: ret  */ FN_RET(0x0048f4e5); r_esp += 4; return;
}

void f_0048f573(void) /* FUN_0048f573 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048f573);
    /* 0048f573: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f574: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f576: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f579: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0048f57c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0048f583: jmp 0x48f58e */ goto L_0048f58e;
L_0048f585:; BB(0x0048f585);
    /* 0048f585: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f588: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f58b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0048f58e:; BB(0x0048f58e);
    /* 0048f58e: cmp dword ptr [ebp - 0x14], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f592: jge 0x48f5b2 */ if ((fS==fO)) goto L_0048f5b2;
L_0048f594:; BB(0x0048f594);
    /* 0048f594: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f597: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f598: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048f59b: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f5a0u); f_0048ef15();
    /* 0048f5a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f5a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048f5a4: call 0x48f481 */ r_esp -= 4; W32(r_esp, 0x48f5a9u); f_0048f481();
    /* 0048f5a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f5ac: mov byte ptr [ebp + edx - 8], al */ W8((u32)(r_ebp+r_edx+0xfffffff8u), (u8)r_eax);
    /* 0048f5b0: jmp 0x48f585 */ goto L_0048f585;
L_0048f5b2:; BB(0x0048f5b2);
    /* 0048f5b2: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0048f5b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f5b6: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0048f5b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f5ba: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0048f5bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f5be: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048f5c1: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0048f5c4: call 0x49ac6b */ r_esp -= 4; W32(r_esp, 0x48f5c9u); f_0049ac6b();
    /* 0048f5c9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0048f5d0: jmp 0x48f5db */ goto L_0048f5db;
L_0048f5d2:; BB(0x0048f5d2);
    /* 0048f5d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f5d5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048f5d8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0048f5db:; BB(0x0048f5db);
    /* 0048f5db: cmp dword ptr [ebp - 0x14], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f5df: jge 0x48f635 */ if ((fS==fO)) goto L_0048f635;
L_0048f5e1:; BB(0x0048f5e1);
    /* 0048f5e1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f5e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f5e5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048f5e8: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f5edu); f_0048ef15();
    /* 0048f5ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f5ee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048f5f1: call 0x48f481 */ r_esp -= 4; W32(r_esp, 0x48f5f6u); f_0048f481();
    /* 0048f5f6: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0048f5f9: movsx ecx, byte ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 0048f5fd: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f5ff: jne 0x48f60a */ if (!fZ) goto L_0048f60a;
L_0048f601:; BB(0x0048f601);
    /* 0048f601: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048f604: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f607: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
L_0048f60a:; BB(0x0048f60a);
    /* 0048f60a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f60d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f60e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048f611: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f616u); f_0048ef15();
    /* 0048f616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f617: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048f61a: call 0x48f481 */ r_esp -= 4; W32(r_esp, 0x48f61fu); f_0048f481();
    /* 0048f61f: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0048f622: movsx eax, byte ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff0u));
    /* 0048f626: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f628: jne 0x48f633 */ if (!fZ) goto L_0048f633;
L_0048f62a:; BB(0x0048f62a);
    /* 0048f62a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048f62d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048f630: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
L_0048f633:; BB(0x0048f633);
    /* 0048f633: jmp 0x48f5d2 */ goto L_0048f5d2;
L_0048f635:; BB(0x0048f635);
    /* 0048f635: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f637: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f638: ret  */ FN_RET(0x0048f573); r_esp += 4; return;
}

void f_0048f639(void) /* FUN_0048f639 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048f639);
    /* 0048f639: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f63a: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f63c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f63d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0048f640: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f644: jne 0x48f660 */ if (!fZ) goto L_0048f660;
L_0048f646:; BB(0x0048f646);
    /* 0048f646: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f649: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0048f64c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f64d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f650: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f655u); f_0048ef15();
    /* 0048f655: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f656: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f659: call 0x48f481 */ r_esp -= 4; W32(r_esp, 0x48f65eu); f_0048f481();
    /* 0048f65e: jmp 0x48f678 */ goto L_0048f678;
L_0048f660:; BB(0x0048f660);
    /* 0048f660: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f663: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0048f666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f667: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f66a: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f66fu); f_0048ef15();
    /* 0048f66f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f670: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f673: call 0x48f481 */ r_esp -= 4; W32(r_esp, 0x48f678u); f_0048f481();
L_0048f678:; BB(0x0048f678);
    /* 0048f678: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f67a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f67b: ret 4 */ FN_RET(0x0048f639); r_esp += 8; return;
}

void f_0048f67e(void) /* FUN_0048f67e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048f67e);
    /* 0048f67e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f67f: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f681: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f684: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0048f687: mov dword ptr [ebp - 0x28], 0xffffffd3 */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffd3u);
    /* 0048f68e: mov dword ptr [ebp - 0x24], 0xfffffff1 */ W32((u32)(r_ebp+0xffffffdcu), 0xfffffff1u);
    /* 0048f695: mov dword ptr [ebp - 0x20], 0xffffffc9 */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffc9u);
    /* 0048f69c: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0048f6a3: mov dword ptr [ebp - 0x18], 0xffffffd3 */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffd3u);
    /* 0048f6aa: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0048f6b1: mov dword ptr [ebp - 0x10], 0xffffffc7 */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffc7u);
    /* 0048f6b8: mov dword ptr [ebp - 0xc], 0xfffffff1 */ W32((u32)(r_ebp+0xfffffff4u), 0xfffffff1u);
    /* 0048f6bf: mov dword ptr [ebp - 8], 0xffffffc9 */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffc9u);
    /* 0048f6c6: mov dword ptr [ebp - 4], 0xffffffba */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffbau);
    /* 0048f6cd: mov dword ptr [ebp - 0x50], 6 */ W32((u32)(r_ebp+0xffffffb0u), 0x6u);
    /* 0048f6d4: mov dword ptr [ebp - 0x4c], 0x55 */ W32((u32)(r_ebp+0xffffffb4u), 0x55u);
    /* 0048f6db: mov dword ptr [ebp - 0x48], 0x9d */ W32((u32)(r_ebp+0xffffffb8u), 0x9du);
    /* 0048f6e2: mov dword ptr [ebp - 0x44], 0x10e */ W32((u32)(r_ebp+0xffffffbcu), 0x10eu);
    /* 0048f6e9: mov dword ptr [ebp - 0x40], 0x148 */ W32((u32)(r_ebp+0xffffffc0u), 0x148u);
    /* 0048f6f0: mov dword ptr [ebp - 0x3c], 0x10e */ W32((u32)(r_ebp+0xffffffc4u), 0x10eu);
    /* 0048f6f7: mov dword ptr [ebp - 0x38], 0x1de */ W32((u32)(r_ebp+0xffffffc8u), 0x1deu);
    /* 0048f6fe: mov dword ptr [ebp - 0x34], 0x55 */ W32((u32)(r_ebp+0xffffffccu), 0x55u);
    /* 0048f705: mov dword ptr [ebp - 0x30], 0xf0 */ W32((u32)(r_ebp+0xffffffd0u), 0xf0u);
    /* 0048f70c: mov dword ptr [ebp - 0x2c], 0x55 */ W32((u32)(r_ebp+0xffffffd4u), 0x55u);
    /* 0048f713: mov eax, dword ptr [0x6f8d04] */ r_eax = R32((u32)(0x6f8d04u));
    /* 0048f718: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f71a: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 0048f720: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x48f723u); call_ind(t); }
    /* 0048f723: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f725: je 0x48f738 */ if (fZ) goto L_0048f738;
L_0048f727:; BB(0x0048f727);
    /* 0048f727: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0048f72a: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x48f72fu); f_0046c2a1();
    /* 0048f72f: mov eax, dword ptr [ebp + eax*8 - 0x28] */ r_eax = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 0048f733: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0048f736: jmp 0x48f747 */ goto L_0048f747;
L_0048f738:; BB(0x0048f738);
    /* 0048f738: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0048f73b: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x48f740u); f_0046c2a1();
    /* 0048f740: mov ecx, dword ptr [ebp + eax*8 - 0x50] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffb0u));
    /* 0048f744: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
L_0048f747:; BB(0x0048f747);
    /* 0048f747: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0048f74a: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0048f74d: mov eax, dword ptr [0x6f8d04] */ r_eax = R32((u32)(0x6f8d04u));
    /* 0048f752: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f754: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 0048f75a: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x48f75du); call_ind(t); }
    /* 0048f75d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f75f: je 0x48f772 */ if (fZ) goto L_0048f772;
L_0048f761:; BB(0x0048f761);
    /* 0048f761: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0048f764: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x48f769u); f_0046c2a1();
    /* 0048f769: mov eax, dword ptr [ebp + eax*8 - 0x24] */ r_eax = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 0048f76d: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0048f770: jmp 0x48f781 */ goto L_0048f781;
L_0048f772:; BB(0x0048f772);
    /* 0048f772: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0048f775: call 0x46c2a1 */ r_esp -= 4; W32(r_esp, 0x48f77au); f_0046c2a1();
    /* 0048f77a: mov ecx, dword ptr [ebp + eax*8 - 0x4c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffb4u));
    /* 0048f77e: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
L_0048f781:; BB(0x0048f781);
    /* 0048f781: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0048f784: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0048f787: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0048f78a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f78b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0048f78e: call 0x46c2d9 */ r_esp -= 4; W32(r_esp, 0x48f793u); f_0046c2d9();
    /* 0048f793: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0048f796: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f797: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0048f79a: call 0x46c300 */ r_esp -= 4; W32(r_esp, 0x48f79fu); f_0046c300();
    /* 0048f79f: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f7a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f7a2: ret  */ FN_RET(0x0048f67e); r_esp += 4; return;
}

void f_0048f7a3(void) /* FUN_0048f7a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048f7a3);
    /* 0048f7a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f7a4: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f7a6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f7a9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048f7ac: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048f7b3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048f7ba: jmp 0x48f7c5 */ goto L_0048f7c5;
L_0048f7bc:; BB(0x0048f7bc);
    /* 0048f7bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f7bf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f7c2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048f7c5:; BB(0x0048f7c5);
    /* 0048f7c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f7c8: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x48f7cdu); f_005dd4d2();
    /* 0048f7cd: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f7d0: jge 0x48f7f2 */ if ((fS==fO)) goto L_0048f7f2;
L_0048f7d2:; BB(0x0048f7d2);
    /* 0048f7d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048f7d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f7d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f7d9: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48f7deu); f_0048ef15();
    /* 0048f7de: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f7e5: je 0x48f7f0 */ if (fZ) goto L_0048f7f0;
L_0048f7e7:; BB(0x0048f7e7);
    /* 0048f7e7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f7ea: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048f7ed: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0048f7f0:; BB(0x0048f7f0);
    /* 0048f7f0: jmp 0x48f7bc */ goto L_0048f7bc;
L_0048f7f2:; BB(0x0048f7f2);
    /* 0048f7f2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048f7f5: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f7f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f7f8: ret  */ FN_RET(0x0048f7a3); r_esp += 4; return;
}

void f_0048f7f9(void) /* FUN_0048f7f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048f7f9);
    /* 0048f7f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f7fa: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f7fc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f7ff: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048f802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f805: call 0x48f7a3 */ r_esp -= 4; W32(r_esp, 0x48f80au); f_0048f7a3();
    /* 0048f80a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048f80d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f810: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f817: je 0x48f901 */ if (fZ) goto L_0048f901;
L_0048f81d:; BB(0x0048f81d);
    /* 0048f81d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f820: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 0048f82a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048f82d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048f82f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f832: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x48f835u); call_ind(t); }
    /* 0048f835: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048f838: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f839: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f83c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048f83e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f841: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x48f844u); call_ind(t); }
    /* 0048f844: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f845: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f848: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f84a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f84d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48f850u); call_ind(t); }
    /* 0048f850: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f853: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048f859: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048f85c: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048f862: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f864: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x48f867u); call_ind(t); }
    /* 0048f867: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048f86a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f86b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f86e: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048f874: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048f877: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048f87d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f87f: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x48f882u); call_ind(t); }
    /* 0048f882: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f883: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f886: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048f88c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048f88f: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048f895: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f897: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48f89au); call_ind(t); }
    /* 0048f89a: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f89e: jne 0x48f8eb */ if (!fZ) goto L_0048f8eb;
L_0048f8a0:; BB(0x0048f8a0);
    /* 0048f8a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f8a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f8a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f8a7: call 0x5dd5d7 */ r_esp -= 4; W32(r_esp, 0x48f8acu); f_005dd5d7();
    /* 0048f8ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f8af: cmp dword ptr [ecx + 0x50], eax */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f8b2: jne 0x48f8c0 */ if (!fZ) goto L_0048f8c0;
L_0048f8b4:; BB(0x0048f8b4);
    /* 0048f8b4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f8b7: mov dword ptr [edx + 0x50], 0xffffffff */ W32((u32)(r_edx+0x50u), 0xffffffffu);
    /* 0048f8be: jmp 0x48f8e9 */ goto L_0048f8e9;
L_0048f8c0:; BB(0x0048f8c0);
    /* 0048f8c0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f8c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f8c6: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0048f8c9: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 0048f8cc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f8cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f8d2: mov dl, byte ptr [ecx + 0x49] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x49u))) & 0xffu);
    /* 0048f8d5: mov byte ptr [eax + 0x48], dl */ W8((u32)(r_eax+0x48u), (u8)r_edx);
    /* 0048f8d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f8db: mov dword ptr [eax + 0x50], 0xffffffff */ W32((u32)(r_eax+0x50u), 0xffffffffu);
    /* 0048f8e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f8e5: mov byte ptr [ecx + 0x49], 0xff */ W8((u32)(r_ecx+0x49u), 0xffu);
L_0048f8e9:; BB(0x0048f8e9);
    /* 0048f8e9: jmp 0x48f8fc */ goto L_0048f8fc;
L_0048f8eb:; BB(0x0048f8eb);
    /* 0048f8eb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f8ee: mov dword ptr [edx + 0x4c], 0xffffffff */ W32((u32)(r_edx+0x4cu), 0xffffffffu);
    /* 0048f8f5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f8f8: mov byte ptr [eax + 0x48], 0xff */ W8((u32)(r_eax+0x48u), 0xffu);
L_0048f8fc:; BB(0x0048f8fc);
    /* 0048f8fc: jmp 0x48f9d9 */ goto L_0048f9d9;
L_0048f901:; BB(0x0048f901);
    /* 0048f901: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f905: jle 0x48f90c */ if ((fZ||fS!=fO)) goto L_0048f90c;
L_0048f907:; BB(0x0048f907);
    /* 0048f907: jmp 0x48faf3 */ goto L_0048faf3;
L_0048f90c:; BB(0x0048f90c);
    /* 0048f90c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f90f: mov dword ptr [ecx + 0x84], 1 */ W32((u32)(r_ecx+0x84u), 0x1u);
    /* 0048f919: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048f91c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048f91e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f921: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x48f924u); call_ind(t); }
    /* 0048f924: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f928: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f92b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048f92d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f930: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x48f933u); call_ind(t); }
    /* 0048f933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f934: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f937: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f939: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048f93c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48f93fu); call_ind(t); }
    /* 0048f93f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f942: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048f948: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048f94b: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048f951: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f953: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x48f956u); call_ind(t); }
    /* 0048f956: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f959: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f95a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f95d: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048f963: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048f966: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048f96c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f96e: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x48f971u); call_ind(t); }
    /* 0048f971: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f972: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f975: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048f97b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048f97e: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048f984: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048f986: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48f989u); call_ind(t); }
    /* 0048f989: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f98d: jne 0x48f9b5 */ if (!fZ) goto L_0048f9b5;
L_0048f98f:; BB(0x0048f98f);
    /* 0048f98f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048f992: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f993: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f996: call 0x5dd5d7 */ r_esp -= 4; W32(r_esp, 0x48f99bu); f_005dd5d7();
    /* 0048f99b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f99e: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0048f9a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048f9a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f9a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f9a8: call 0x48f481 */ r_esp -= 4; W32(r_esp, 0x48f9adu); f_0048f481();
    /* 0048f9ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f9b0: mov byte ptr [ecx + 0x48], al */ W8((u32)(r_ecx+0x48u), (u8)r_eax);
    /* 0048f9b3: jmp 0x48f9d9 */ goto L_0048f9d9;
L_0048f9b5:; BB(0x0048f9b5);
    /* 0048f9b5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048f9b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f9b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f9bc: call 0x5dd5d7 */ r_esp -= 4; W32(r_esp, 0x48f9c1u); f_005dd5d7();
    /* 0048f9c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f9c4: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 0048f9c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048f9ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f9cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f9ce: call 0x48f481 */ r_esp -= 4; W32(r_esp, 0x48f9d3u); f_0048f481();
    /* 0048f9d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f9d6: mov byte ptr [ecx + 0x49], al */ W8((u32)(r_ecx+0x49u), (u8)r_eax);
L_0048f9d9:; BB(0x0048f9d9);
    /* 0048f9d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f9dc: call 0x48f7a3 */ r_esp -= 4; W32(r_esp, 0x48f9e1u); f_0048f7a3();
    /* 0048f9e1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f9e4: jne 0x48fada */ if (!fZ) goto L_0048fada;
L_0048f9ea:; BB(0x0048f9ea);
    /* 0048f9ea: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 0048f9f0: cmp dword ptr [edx + 0x144], 0 */ {  u32 a = R32((u32)(r_edx+0x144u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f9f7: je 0x48facd */ if (fZ) goto L_0048facd;
L_0048f9fd:; BB(0x0048f9fd);
    /* 0048f9fd: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 0048fa02: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fa06: jne 0x48faae */ if (!fZ) goto L_0048faae;
L_0048fa0c:; BB(0x0048fa0c);
    /* 0048fa0c: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fa11: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x48fa16u); f_0048ab58();
    /* 0048fa16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048fa19: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048fa1c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fa20: je 0x48fa33 */ if (fZ) goto L_0048fa33;
L_0048fa22:; BB(0x0048fa22);
    /* 0048fa22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fa24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fa26: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fa29: call 0x4959b1 */ r_esp -= 4; W32(r_esp, 0x48fa2eu); f_004959b1();
    /* 0048fa2e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048fa31: jmp 0x48fa3a */ goto L_0048fa3a;
L_0048fa33:; BB(0x0048fa33);
    /* 0048fa33: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0048fa3a:; BB(0x0048fa3a);
    /* 0048fa3a: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048fa40: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048fa43: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0048fa46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fa48: push 0x415 */ { u32 v = 0x415u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fa4d: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 0048fa52: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0048fa55: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x48fa5au); f_005e0461();
    /* 0048fa5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fa5c: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048fa62: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0048fa65: call 0x495aa4 */ r_esp -= 4; W32(r_esp, 0x48fa6au); f_00495aa4();
    /* 0048fa6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fa6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fa6e: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 0048fa74: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 0048fa77: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x48fa7cu); f_005d81dc();
    /* 0048fa7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fa7e: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 0048fa83: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0048fa86: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x48fa8bu); f_005e06e1();
    /* 0048fa8b: add eax, 0xb9 */ {  u32 a = r_eax; u32 b = 0xb9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048fa90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fa91: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048fa97: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0048fa9a: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x48fa9fu); f_005e06d0();
    /* 0048fa9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048faa0: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 0048faa6: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 0048faa9: call 0x5d81bb */ r_esp -= 4; W32(r_esp, 0x48faaeu); f_005d81bb();
L_0048faae:; BB(0x0048faae);
    /* 0048faae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fab0: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 0048fab5: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0048fab8: call 0x495aa4 */ r_esp -= 4; W32(r_esp, 0x48fabdu); f_00495aa4();
    /* 0048fabd: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048fac3: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0048fac6: call 0x495d36 */ r_esp -= 4; W32(r_esp, 0x48facbu); f_00495d36();
    /* 0048facb: jmp 0x48fad8 */ goto L_0048fad8;
L_0048facd:; BB(0x0048facd);
    /* 0048facd: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048fad3: call 0x494140 */ r_esp -= 4; W32(r_esp, 0x48fad8u); f_00494140();
L_0048fad8:; BB(0x0048fad8);
    /* 0048fad8: jmp 0x48faf3 */ goto L_0048faf3;
L_0048fada:; BB(0x0048fada);
    /* 0048fada: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 0048fae0: cmp dword ptr [edx + 0x40], 0 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fae4: je 0x48faf3 */ if (fZ) goto L_0048faf3;
L_0048fae6:; BB(0x0048fae6);
    /* 0048fae6: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 0048faeb: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0048faee: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x48faf3u); f_005e03cc();
L_0048faf3:; BB(0x0048faf3);
    /* 0048faf3: mov esp, ebp */ r_esp = r_ebp;
    /* 0048faf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048faf6: ret 4 */ FN_RET(0x0048f7f9); r_esp += 8; return;
}

void f_0048faf9(void) /* FUN_0048faf9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048faf9);
    /* 0048faf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048fafa: mov ebp, esp */ r_ebp = r_esp;
    /* 0048fafc: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048faff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048fb00: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048fb03: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0048fb0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fb0d: call 0x46c2ef */ r_esp -= 4; W32(r_esp, 0x48fb12u); f_0046c2ef();
    /* 0048fb12: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fb15: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0048fb18: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fb1b: call 0x46c316 */ r_esp -= 4; W32(r_esp, 0x48fb20u); f_0046c316();
    /* 0048fb20: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fb23: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0048fb26: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048fb2d: jmp 0x48fb38 */ goto L_0048fb38;
L_0048fb2f:; BB(0x0048fb2f);
    /* 0048fb2f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fb32: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048fb35: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0048fb38:; BB(0x0048fb38);
    /* 0048fb38: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048fb3c: jge 0x48fc4b */ if ((fS==fO)) goto L_0048fc4b;
L_0048fb42:; BB(0x0048fb42);
    /* 0048fb42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fb45: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fb48: cmp edx, dword ptr [ecx + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fb4b: je 0x48fbb5 */ if (fZ) goto L_0048fbb5;
L_0048fb4d:; BB(0x0048fb4d);
    /* 0048fb4d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fb50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fb53: cmp ecx, dword ptr [eax + 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x50u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fb56: je 0x48fbb5 */ if (fZ) goto L_0048fbb5;
L_0048fb58:; BB(0x0048fb58);
    /* 0048fb58: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fb5b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0048fb5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fb5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fb62: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0048fb65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fb66: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fb69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fb6a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fb6d: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fb72u); f_0048ef15();
    /* 0048fb72: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0048fb75: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048fb78: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048fb7a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048fb7d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48fb80u); call_ind(t); }
    /* 0048fb80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fb83: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048fb86: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048fb89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fb8a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fb8d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048fb90: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0048fb93: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fb96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fb97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fb9a: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fb9fu); f_0048ef15();
    /* 0048fb9f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048fba2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048fba5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048fba7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048fbaa: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48fbadu); call_ind(t); }
    /* 0048fbad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fbb0: call 0x48ef6c */ r_esp -= 4; W32(r_esp, 0x48fbb5u); f_0048ef6c();
L_0048fbb5:; BB(0x0048fbb5);
    /* 0048fbb5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fbb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fbb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fbbc: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fbc1u); f_0048ef15();
    /* 0048fbc1: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048fbc7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048fbca: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048fbcd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048fbcf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048fbd2: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x48fbd5u); call_ind(t); }
    /* 0048fbd5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fbd7: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048fbdd: call 0x49243f */ r_esp -= 4; W32(r_esp, 0x48fbe2u); f_0049243f();
    /* 0048fbe2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fbe4: je 0x48fc27 */ if (fZ) goto L_0048fc27;
L_0048fbe6:; BB(0x0048fbe6);
    /* 0048fbe6: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048fbec: call 0x492079 */ r_esp -= 4; W32(r_esp, 0x48fbf1u); f_00492079();
    /* 0048fbf1: mov ecx, eax */ r_ecx = r_eax;
    /* 0048fbf3: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x48fbf8u); f_004259f1();
    /* 0048fbf8: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048fbfe: cmp eax, dword ptr [ecx + 0x134] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x134u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fc04: je 0x48fc27 */ if (fZ) goto L_0048fc27;
L_0048fc06:; BB(0x0048fc06);
    /* 0048fc06: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048fc0c: call 0x492ba6 */ r_esp -= 4; W32(r_esp, 0x48fc11u); f_00492ba6();
    /* 0048fc11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc12: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fc15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fc19: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fc1eu); f_0048ef15();
    /* 0048fc1e: mov ecx, eax */ r_ecx = r_eax;
    /* 0048fc20: call 0x48e6fd */ r_esp -= 4; W32(r_esp, 0x48fc25u); f_0048e6fd();
    /* 0048fc25: jmp 0x48fc46 */ goto L_0048fc46;
L_0048fc27:; BB(0x0048fc27);
    /* 0048fc27: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0048fc2d: call 0x492ba6 */ r_esp -= 4; W32(r_esp, 0x48fc32u); f_00492ba6();
    /* 0048fc32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc33: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fc36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fc3a: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fc3fu); f_0048ef15();
    /* 0048fc3f: mov ecx, eax */ r_ecx = r_eax;
    /* 0048fc41: call 0x48e7a2 */ r_esp -= 4; W32(r_esp, 0x48fc46u); f_0048e7a2();
L_0048fc46:; BB(0x0048fc46);
    /* 0048fc46: jmp 0x48fb2f */ goto L_0048fb2f;
L_0048fc4b:; BB(0x0048fc4b);
    /* 0048fc4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fc4e: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0048fc51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fc55: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fc5au); f_0048ef15();
    /* 0048fc5a: mov ecx, eax */ r_ecx = r_eax;
    /* 0048fc5c: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x48fc61u); f_0046ca47();
    /* 0048fc61: mov esi, eax */ r_esi = r_eax;
    /* 0048fc63: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fc66: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0048fc69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc6a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fc6d: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fc72u); f_0048ef15();
    /* 0048fc72: mov ecx, eax */ r_ecx = r_eax;
    /* 0048fc74: call 0x46ca47 */ r_esp -= 4; W32(r_esp, 0x48fc79u); f_0046ca47();
    /* 0048fc79: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048fc7b: jl 0x48fd4a */ if ((fS!=fO)) goto L_0048fd4a;
L_0048fc81:; BB(0x0048fc81);
    /* 0048fc81: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fc84: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0048fc87: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048fc8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fc8e: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0048fc91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc92: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fc95: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0048fc98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fc9c: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fca1u); f_0048ef15();
    /* 0048fca1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048fca4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048fca7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048fca9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048fcac: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x48fcafu); call_ind(t); }
    /* 0048fcaf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fcb2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0048fcb5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048fcb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fcb9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fcbc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048fcbf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048fcc2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fcc5: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0048fcc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fcc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fccc: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fcd1u); f_0048ef15();
    /* 0048fcd1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048fcd4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048fcd7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048fcd9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048fcdc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x48fcdfu); call_ind(t); }
    /* 0048fcdf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fce2: call 0x48ef6c */ r_esp -= 4; W32(r_esp, 0x48fce7u); f_0048ef6c();
    /* 0048fce7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fcea: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0048fced: add ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048fcf0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fcf1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fcf4: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0048fcf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fcf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fcfb: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0048fcfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fcff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fd02: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fd07u); f_0048ef15();
    /* 0048fd07: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0048fd0a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048fd0d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048fd0f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048fd12: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48fd15u); call_ind(t); }
    /* 0048fd15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fd18: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048fd1b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0048fd1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fd1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fd22: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048fd25: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0048fd28: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fd2b: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0048fd2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fd2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fd32: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fd37u); f_0048ef15();
    /* 0048fd37: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0048fd3a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048fd3d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048fd3f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048fd42: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x48fd45u); call_ind(t); }
    /* 0048fd45: jmp 0x48fe0e */ goto L_0048fe0e;
L_0048fd4a:; BB(0x0048fd4a);
    /* 0048fd4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fd4d: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0048fd50: add edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048fd53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fd54: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fd57: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0048fd5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fd5b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fd5e: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0048fd61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fd62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fd65: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fd6au); f_0048ef15();
    /* 0048fd6a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0048fd6d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048fd70: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048fd72: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048fd75: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48fd78u); call_ind(t); }
    /* 0048fd78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fd7b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0048fd7e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048fd81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fd82: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fd85: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048fd88: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0048fd8b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fd8e: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0048fd91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fd92: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fd95: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fd9au); f_0048ef15();
    /* 0048fd9a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0048fd9d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0048fda0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048fda2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0048fda5: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x48fda8u); call_ind(t); }
    /* 0048fda8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fdab: call 0x48ef6c */ r_esp -= 4; W32(r_esp, 0x48fdb0u); f_0048ef6c();
    /* 0048fdb0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fdb3: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0048fdb6: add edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fdba: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fdbd: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0048fdc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fdc1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fdc4: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0048fdc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fdc8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fdcb: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fdd0u); f_0048ef15();
    /* 0048fdd0: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0048fdd3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0048fdd6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048fdd8: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0048fddb: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48fddeu); call_ind(t); }
    /* 0048fdde: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fde1: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0048fde4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0048fde7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fde8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fdeb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048fdee: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0048fdf1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fdf4: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0048fdf7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fdf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fdfb: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fe00u); f_0048ef15();
    /* 0048fe00: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0048fe03: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0048fe06: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048fe08: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0048fe0b: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x48fe0eu); call_ind(t); }
L_0048fe0e:; BB(0x0048fe0e);
    /* 0048fe0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048fe0f: mov esp, ebp */ r_esp = r_ebp;
    /* 0048fe11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048fe12: ret  */ FN_RET(0x0048faf9); r_esp += 4; return;
}

void f_0048fe13(void) /* FUN_0048fe13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048fe13);
    /* 0048fe13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048fe14: mov ebp, esp */ r_ebp = r_esp;
    /* 0048fe16: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048fe19: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0048fe1c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fe1f: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0048fe22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fe23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fe26: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fe2bu); f_0048ef15();
    /* 0048fe2b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0048fe2e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fe31: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0048fe34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fe35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fe38: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48fe3du); f_0048ef15();
    /* 0048fe3d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048fe40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fe43: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048fe45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fe48: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x48fe4bu); call_ind(t); }
    /* 0048fe4b: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048fe4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fe4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fe52: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048fe54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fe57: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x48fe5au); call_ind(t); }
    /* 0048fe5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fe5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fe5e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048fe60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fe63: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48fe66u); call_ind(t); }
    /* 0048fe66: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fe69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048fe6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fe6e: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x48fe71u); call_ind(t); }
    /* 0048fe71: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048fe74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fe75: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fe78: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048fe7a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fe7d: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x48fe80u); call_ind(t); }
    /* 0048fe80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fe81: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fe84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048fe86: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fe89: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48fe8cu); call_ind(t); }
    /* 0048fe8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fe8f: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048fe95: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fe98: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048fe9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048fea0: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x48fea3u); call_ind(t); }
    /* 0048fea3: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048fea6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fea7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048feaa: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048feb0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048feb3: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048feb9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048febb: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x48febeu); call_ind(t); }
    /* 0048febe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048febf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fec2: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048fec8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048fecb: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048fed1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048fed3: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48fed6u); call_ind(t); }
    /* 0048fed6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fed9: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048fedf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fee2: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048fee8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048feea: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x48feedu); call_ind(t); }
    /* 0048feed: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048fef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fef1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fef4: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048fefa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048fefd: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048ff03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ff05: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x48ff08u); call_ind(t); }
    /* 0048ff08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff09: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ff0c: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0048ff12: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ff15: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0048ff1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0048ff1d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x48ff20u); call_ind(t); }
    /* 0048ff20: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ff23: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0048ff26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ff2a: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48ff2fu); f_0048ef15();
    /* 0048ff2f: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 0048ff39: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ff3c: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0048ff3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ff43: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48ff48u); f_0048ef15();
    /* 0048ff48: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 0048ff52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ff55: mov dword ptr [ecx + 0x4c], 0xffffffff */ W32((u32)(r_ecx+0x4cu), 0xffffffffu);
    /* 0048ff5c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ff5f: mov dword ptr [edx + 0x50], 0xffffffff */ W32((u32)(r_edx+0x50u), 0xffffffffu);
    /* 0048ff66: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ff68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ff69: ret  */ FN_RET(0x0048fe13); r_esp += 4; return;
}

void f_0048ff6a(void) /* FUN_0048ff6a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ff6a);
    /* 0048ff6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff6b: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ff6d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ff70: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0048ff73: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048ff7a: jmp 0x48ff85 */ goto L_0048ff85;
L_0048ff7c:; BB(0x0048ff7c);
    /* 0048ff7c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ff7f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ff82: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048ff85:; BB(0x0048ff85);
    /* 0048ff85: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ff89: jge 0x48ffdf */ if ((fS==fO)) goto L_0048ffdf;
L_0048ff8b:; BB(0x0048ff8b);
    /* 0048ff8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ff8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff8f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ff92: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48ff97u); f_0048ef15();
    /* 0048ff97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff98: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ff9b: call 0x48f481 */ r_esp -= 4; W32(r_esp, 0x48ffa0u); f_0048f481();
    /* 0048ffa0: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0048ffa3: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0048ffa7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ffa9: jne 0x48ffb4 */ if (!fZ) goto L_0048ffb4;
L_0048ffab:; BB(0x0048ffab);
    /* 0048ffab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ffae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ffb1: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
L_0048ffb4:; BB(0x0048ffb4);
    /* 0048ffb4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ffb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ffb8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ffbb: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x48ffc0u); f_0048ef15();
    /* 0048ffc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ffc1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ffc4: call 0x48f481 */ r_esp -= 4; W32(r_esp, 0x48ffc9u); f_0048f481();
    /* 0048ffc9: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 0048ffcc: movsx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 0048ffd0: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ffd2: jne 0x48ffdd */ if (!fZ) goto L_0048ffdd;
L_0048ffd4:; BB(0x0048ffd4);
    /* 0048ffd4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048ffd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048ffda: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
L_0048ffdd:; BB(0x0048ffdd);
    /* 0048ffdd: jmp 0x48ff7c */ goto L_0048ff7c;
L_0048ffdf:; BB(0x0048ffdf);
    /* 0048ffdf: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ffe1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ffe2: ret 8 */ FN_RET(0x0048ff6a); r_esp += 12; return;
}

void f_0048ffe5(void) /* FUN_0048ffe5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048ffe5);
    /* 0048ffe5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ffe6: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ffe8: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ffeb: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0048ffee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048fff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fff2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048fff5: call 0x425366 */ r_esp -= 4; W32(r_esp, 0x48fffau); f_00425366();
    /* 0048fffa: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048fffd: mov dword ptr [ecx], 0x63705c */ W32((u32)(r_ecx), 0x63705cu);
    /* 00490003: mov dword ptr [ebp - 0x24], 0x13 */ W32((u32)(r_ebp+0xffffffdcu), 0x13u);
    /* 0049000a: mov dword ptr [ebp - 0x20], 0xa9 */ W32((u32)(r_ebp+0xffffffe0u), 0xa9u);
    /* 00490011: mov dword ptr [ebp - 0x1c], 0x4f */ W32((u32)(r_ebp+0xffffffe4u), 0x4fu);
    /* 00490018: mov dword ptr [ebp - 0x18], 0x12d */ W32((u32)(r_ebp+0xffffffe8u), 0x12du);
    /* 0049001f: mov dword ptr [ebp - 0x14], 0x1cd */ W32((u32)(r_ebp+0xffffffecu), 0x1cdu);
    /* 00490026: mov dword ptr [ebp - 0x10], 0x126 */ W32((u32)(r_ebp+0xfffffff0u), 0x126u);
    /* 0049002d: mov dword ptr [ebp - 0xc], 0x20e */ W32((u32)(r_ebp+0xfffffff4u), 0x20eu);
    /* 00490034: mov dword ptr [ebp - 8], 0xaa */ W32((u32)(r_ebp+0xfffffff8u), 0xaau);
    /* 0049003b: mov dword ptr [ebp - 4], 0x66 */ W32((u32)(r_ebp+0xfffffffcu), 0x66u);
    /* 00490042: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00490049: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0049004c: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 00490053: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00490055: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x49005au); f_0048ab58();
    /* 0049005a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049005d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00490060: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490064: je 0x490077 */ if (fZ) goto L_00490077;
L_00490066:; BB(0x00490066);
    /* 00490066: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00490069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049006a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0049006d: call 0x48ecbe */ r_esp -= 4; W32(r_esp, 0x490072u); f_0048ecbe();
    /* 00490072: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00490075: jmp 0x49007e */ goto L_0049007e;
L_00490077:; BB(0x00490077);
    /* 00490077: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0049007e:; BB(0x0049007e);
    /* 0049007e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00490081: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00490084: mov dword ptr [ecx + 0x138], edx */ W32((u32)(r_ecx+0x138u), r_edx);
    /* 0049008a: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049008e: jge 0x49012e */ if ((fS==fO)) goto L_0049012e;
L_00490094:; BB(0x00490094);
    /* 00490094: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490098: jge 0x4900a2 */ if ((fS==fO)) goto L_004900a2;
L_0049009a:; BB(0x0049009a);
    /* 0049009a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049009d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004900a0: jmp 0x4900ab */ goto L_004900ab;
L_004900a2:; BB(0x004900a2);
    /* 004900a2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004900a5: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004900a8: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_004900ab:; BB(0x004900ab);
    /* 004900ab: push 0x3250 */ { u32 v = 0x3250u; r_esp -= 4; W32(r_esp, v); }
    /* 004900b0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4900b5u); f_0048ab58();
    /* 004900b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004900b8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004900bb: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004900bf: je 0x4900e2 */ if (fZ) goto L_004900e2;
L_004900c1:; BB(0x004900c1);
    /* 004900c1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004900c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004900c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004900c8: mov ecx, dword ptr [ebp + eax*8 - 0x20] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffe0u));
    /* 004900cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004900cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004900d0: mov eax, dword ptr [ebp + edx*8 - 0x24] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffdcu));
    /* 004900d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004900d5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004900d8: call 0x41e7f0 */ r_esp -= 4; W32(r_esp, 0x4900ddu); f_0041e7f0();
    /* 004900dd: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004900e0: jmp 0x4900e9 */ goto L_004900e9;
L_004900e2:; BB(0x004900e2);
    /* 004900e2: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004900e9:; BB(0x004900e9);
    /* 004900e9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004900ec: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004900ef: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 004900f2: cmp dword ptr [0x6f8e2c], 0 */ {  u32 a = R32((u32)(0x6f8e2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004900f9: jne 0x490106 */ if (!fZ) goto L_00490106;
L_004900fb:; BB(0x004900fb);
    /* 004900fb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004900fe: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00490101: call 0x41fb49 */ r_esp -= 4; W32(r_esp, 0x490106u); f_0041fb49();
L_00490106:; BB(0x00490106);
    /* 00490106: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00490109: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x49010eu); f_004259a0();
    /* 0049010e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490110: jne 0x49012e */ if (!fZ) goto L_0049012e;
L_00490112:; BB(0x00490112);
    /* 00490112: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00490114: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 0049011a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0049011c: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 00490122: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x490125u); call_ind(t); }
    /* 00490125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490126: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00490129: call 0x425c32 */ r_esp -= 4; W32(r_esp, 0x49012eu); f_00425c32();
L_0049012e:; BB(0x0049012e);
    /* 0049012e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00490131: mov esp, ebp */ r_esp = r_ebp;
    /* 00490133: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490134: ret 4 */ FN_RET(0x0048ffe5); r_esp += 8; return;
}

void f_00490137(void) /* FUN_00490137 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00490137);
    /* 00490137: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490138: mov ebp, esp */ r_ebp = r_esp;
    /* 0049013a: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049013d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00490140: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00490143: mov dword ptr [eax], 0x63705c */ W32((u32)(r_eax), 0x63705cu);
    /* 00490149: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049014c: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0049014f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00490152: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490155: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00490158: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049015c: je 0x49016f */ if (fZ) goto L_0049016f;
L_0049015e:; BB(0x0049015e);
    /* 0049015e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00490160: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490163: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00490165: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490168: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x49016au); call_ind(t); }
    /* 0049016a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0049016d: jmp 0x490176 */ goto L_00490176;
L_0049016f:; BB(0x0049016f);
    /* 0049016f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00490176:; BB(0x00490176);
    /* 00490176: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00490179: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 00490180: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490183: mov edx, dword ptr [ecx + 0x138] */ r_edx = R32((u32)(r_ecx+0x138u));
    /* 00490189: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0049018c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0049018f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00490192: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490196: je 0x4901a9 */ if (fZ) goto L_004901a9;
L_00490198:; BB(0x00490198);
    /* 00490198: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049019a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049019d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0049019f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004901a2: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4901a4u); call_ind(t); }
    /* 004901a4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004901a7: jmp 0x4901b0 */ goto L_004901b0;
L_004901a9:; BB(0x004901a9);
    /* 004901a9: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004901b0:; BB(0x004901b0);
    /* 004901b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004901b3: mov dword ptr [eax + 0x138], 0 */ W32((u32)(r_eax+0x138u), 0x0u);
    /* 004901bd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004901c0: call 0x425495 */ r_esp -= 4; W32(r_esp, 0x4901c5u); f_00425495();
    /* 004901c5: mov esp, ebp */ r_esp = r_ebp;
    /* 004901c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004901c8: ret  */ FN_RET(0x00490137); r_esp += 4; return;
}

void f_004901c9(void) /* FUN_004901c9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004901c9);
    /* 004901c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004901ca: mov ebp, esp */ r_ebp = r_esp;
    /* 004901cc: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004901cf: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004901d2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004901d5: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x4901dau); f_004259f1();
    /* 004901da: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004901de: mov word ptr [ebp - 0xc], 3 */ W16((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 004901e4: mov word ptr [ebp - 0xa], 3 */ W16((u32)(r_ebp+0xfffffff6u), 0x3u);
    /* 004901ea: mov word ptr [ebp - 8], 2 */ W16((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 004901f0: mov word ptr [ebp - 6], 2 */ W16((u32)(r_ebp+0xfffffffau), 0x2u);
    /* 004901f6: mov dword ptr [ebp - 0x2c], 0x5a */ W32((u32)(r_ebp+0xffffffd4u), 0x5au);
    /* 004901fd: mov dword ptr [ebp - 0x28], 0x50 */ W32((u32)(r_ebp+0xffffffd8u), 0x50u);
    /* 00490204: mov dword ptr [ebp - 0x24], 0x6e */ W32((u32)(r_ebp+0xffffffdcu), 0x6eu);
    /* 0049020b: mov dword ptr [ebp - 0x20], 0xbe */ W32((u32)(r_ebp+0xffffffe0u), 0xbeu);
    /* 00490212: mov dword ptr [ebp - 0x1c], 0x118 */ W32((u32)(r_ebp+0xffffffe4u), 0x118u);
    /* 00490219: mov dword ptr [ebp - 0x18], 0xbe */ W32((u32)(r_ebp+0xffffffe8u), 0xbeu);
    /* 00490220: mov dword ptr [ebp - 0x14], 0x136 */ W32((u32)(r_ebp+0xffffffecu), 0x136u);
    /* 00490227: mov dword ptr [ebp - 0x10], 0x50 */ W32((u32)(r_ebp+0xfffffff0u), 0x50u);
    /* 0049022e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00490231: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00490234: call 0x426404 */ r_esp -= 4; W32(r_esp, 0x490239u); f_00426404();
    /* 00490239: cmp dword ptr [0x6f8e2c], 0 */ {  u32 a = R32((u32)(0x6f8e2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490240: je 0x490279 */ if (fZ) goto L_00490279;
L_00490242:; BB(0x00490242);
    /* 00490242: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00490246: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490249: je 0x490279 */ if (fZ) goto L_00490279;
L_0049024b:; BB(0x0049024b);
    /* 0049024b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0049024f: movsx eax, word ptr [ebp + edx*2 - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edx*2+0xfffffff4u));
    /* 00490254: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490255: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00490259: mov edx, dword ptr [ebp + ecx*8 - 0x28] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffd8u));
    /* 0049025d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049025e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00490262: mov ecx, dword ptr [ebp + eax*8 - 0x2c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd4u));
    /* 00490266: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490267: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0049026b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049026c: mov eax, dword ptr [0x6f8e2c] */ r_eax = R32((u32)(0x6f8e2cu));
    /* 00490271: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00490274: call 0x42a5c0 */ r_esp -= 4; W32(r_esp, 0x490279u); f_0042a5c0();
L_00490279:; BB(0x00490279);
    /* 00490279: mov esp, ebp */ r_esp = r_ebp;
    /* 0049027b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049027c: ret  */ FN_RET(0x004901c9); r_esp += 4; return;
}

void f_0049027d(void) /* FUN_0049027d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0049027d);
    /* 0049027d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049027e: mov ebp, esp */ r_ebp = r_esp;
    /* 00490280: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490281: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00490284: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490287: cmp dword ptr [eax + 0x134], 0 */ {  u32 a = R32((u32)(r_eax+0x134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049028e: je 0x4902a3 */ if (fZ) goto L_004902a3;
L_00490290:; BB(0x00490290);
    /* 00490290: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490293: cmp dword ptr [ecx + 0x130], 0 */ {  u32 a = R32((u32)(r_ecx+0x130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049029a: je 0x4902a3 */ if (fZ) goto L_004902a3;
L_0049029c:; BB(0x0049029c);
    /* 0049029c: mov eax, 2 */ r_eax = 0x2u;
    /* 004902a1: jmp 0x4902c4 */ goto L_004902c4;
L_004902a3:; BB(0x004902a3);
    /* 004902a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004902a6: cmp dword ptr [edx + 0x134], 0 */ {  u32 a = R32((u32)(r_edx+0x134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004902ad: jne 0x4902bf */ if (!fZ) goto L_004902bf;
L_004902af:; BB(0x004902af);
    /* 004902af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004902b2: cmp dword ptr [eax + 0x130], 0 */ {  u32 a = R32((u32)(r_eax+0x130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004902b9: jne 0x4902bf */ if (!fZ) goto L_004902bf;
L_004902bb:; BB(0x004902bb);
    /* 004902bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004902bd: jmp 0x4902c4 */ goto L_004902c4;
L_004902bf:; BB(0x004902bf);
    /* 004902bf: mov eax, 1 */ r_eax = 0x1u;
L_004902c4:; BB(0x004902c4);
    /* 004902c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004902c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004902c7: ret  */ FN_RET(0x0049027d); r_esp += 4; return;
}

void f_004902c8(void) /* FUN_004902c8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004902c8);
    /* 004902c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004902c9: mov ebp, esp */ r_ebp = r_esp;
    /* 004902cb: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004902ce: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004902d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004902d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004902d6: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004902d9: call 0x420532 */ r_esp -= 4; W32(r_esp, 0x4902deu); f_00420532();
    /* 004902de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004902e5: jmp 0x4902f0 */ goto L_004902f0;
L_004902e7:; BB(0x004902e7);
    /* 004902e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004902ea: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004902ed: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004902f0:; BB(0x004902f0);
    /* 004902f0: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004902f4: jge 0x49033a */ if ((fS==fO)) goto L_0049033a;
L_004902f6:; BB(0x004902f6);
    /* 004902f6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004902f9: cmp dword ptr [edx + 0x138], 0 */ {  u32 a = R32((u32)(r_edx+0x138u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490300: je 0x490338 */ if (fZ) goto L_00490338;
L_00490302:; BB(0x00490302);
    /* 00490302: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490305: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490306: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490309: mov ecx, dword ptr [ecx + 0x138] */ r_ecx = R32((u32)(r_ecx+0x138u));
    /* 0049030f: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x490314u); f_0048ef15();
    /* 00490314: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490316: je 0x490338 */ if (fZ) goto L_00490338;
L_00490318:; BB(0x00490318);
    /* 00490318: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049031b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049031c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0049031f: mov ecx, dword ptr [eax + 0x138] */ r_ecx = R32((u32)(r_eax+0x138u));
    /* 00490325: call 0x48ef15 */ r_esp -= 4; W32(r_esp, 0x49032au); f_0048ef15();
    /* 0049032a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0049032d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490330: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00490332: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490335: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x490338u); call_ind(t); }
L_00490338:; BB(0x00490338);
    /* 00490338: jmp 0x4902e7 */ goto L_004902e7;
L_0049033a:; BB(0x0049033a);
    /* 0049033a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049033d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049033e: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490344: call 0x49535f */ r_esp -= 4; W32(r_esp, 0x490349u); f_0049535f();
    /* 00490349: mov esp, ebp */ r_esp = r_ebp;
    /* 0049034b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049034c: ret  */ FN_RET(0x004902c8); r_esp += 4; return;
}

void f_0049034d(void) /* FUN_0049034d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0049034d);
    /* 0049034d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049034e: mov ebp, esp */ r_ebp = r_esp;
    /* 00490350: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490351: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00490354: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490357: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x49035cu); f_004259f1();
    /* 0049035c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049035f: jne 0x49036b */ if (!fZ) goto L_0049036b;
L_00490361:; BB(0x00490361);
    /* 00490361: mov eax, 1 */ r_eax = 0x1u;
    /* 00490366: jmp 0x4904bb */ goto L_004904bb;
L_0049036b:; BB(0x0049036b);
    /* 0049036b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049036e: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x490373u); f_00425973();
    /* 00490373: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490375: jne 0x49037e */ if (!fZ) goto L_0049037e;
L_00490377:; BB(0x00490377);
    /* 00490377: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00490379: jmp 0x4904bb */ goto L_004904bb;
L_0049037e:; BB(0x0049037e);
    /* 0049037e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00490380: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490386: call 0x49243f */ r_esp -= 4; W32(r_esp, 0x49038bu); f_0049243f();
    /* 0049038b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049038d: je 0x4903a2 */ if (fZ) goto L_004903a2;
L_0049038f:; BB(0x0049038f);
    /* 0049038f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490392: call 0x425a05 */ r_esp -= 4; W32(r_esp, 0x490397u); f_00425a05();
    /* 00490397: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490399: jne 0x4903a2 */ if (!fZ) goto L_004903a2;
L_0049039b:; BB(0x0049039b);
    /* 0049039b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049039d: jmp 0x4904bb */ goto L_004904bb;
L_004903a2:; BB(0x004903a2);
    /* 004903a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004903a4: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 004903aa: call 0x49243f */ r_esp -= 4; W32(r_esp, 0x4903afu); f_0049243f();
    /* 004903af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004903b1: je 0x4903dc */ if (fZ) goto L_004903dc;
L_004903b3:; BB(0x004903b3);
    /* 004903b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004903b6: call 0x425a05 */ r_esp -= 4; W32(r_esp, 0x4903bbu); f_00425a05();
    /* 004903bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004903bd: je 0x4903d5 */ if (fZ) goto L_004903d5;
L_004903bf:; BB(0x004903bf);
    /* 004903bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004903c2: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x4903c7u); f_004259f1();
    /* 004903c7: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 004903cd: cmp eax, dword ptr [ecx + 0x134] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x134u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004903d3: jne 0x4903dc */ if (!fZ) goto L_004903dc;
L_004903d5:; BB(0x004903d5);
    /* 004903d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004903d7: jmp 0x4904bb */ goto L_004904bb;
L_004903dc:; BB(0x004903dc);
    /* 004903dc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004903de: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 004903e4: call 0x49243f */ r_esp -= 4; W32(r_esp, 0x4903e9u); f_0049243f();
    /* 004903e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004903eb: je 0x490418 */ if (fZ) goto L_00490418;
L_004903ed:; BB(0x004903ed);
    /* 004903ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004903f0: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x4903f5u); f_004259f1();
    /* 004903f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004903f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004903f9: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x4903feu); f_004259f1();
    /* 004903fe: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490404: mov ecx, dword ptr [edx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 00490408: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x49040du); f_004280b4();
    /* 0049040d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049040f: jne 0x490418 */ if (!fZ) goto L_00490418;
L_00490411:; BB(0x00490411);
    /* 00490411: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00490413: jmp 0x4904bb */ goto L_004904bb;
L_00490418:; BB(0x00490418);
    /* 00490418: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0049041a: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490420: call 0x49243f */ r_esp -= 4; W32(r_esp, 0x490425u); f_0049243f();
    /* 00490425: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490427: je 0x490467 */ if (fZ) goto L_00490467;
L_00490429:; BB(0x00490429);
    /* 00490429: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049042c: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x490431u); f_004259f1();
    /* 00490431: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490437: cmp eax, dword ptr [ecx + 0x134] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x134u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049043d: je 0x490467 */ if (fZ) goto L_00490467;
L_0049043f:; BB(0x0049043f);
    /* 0049043f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490442: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x490447u); f_004259f1();
    /* 00490447: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490448: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049044b: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x490450u); f_004259f1();
    /* 00490450: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490456: mov ecx, dword ptr [edx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 0049045a: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x49045fu); f_004280b4();
    /* 0049045f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490461: jne 0x490467 */ if (!fZ) goto L_00490467;
L_00490463:; BB(0x00490463);
    /* 00490463: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00490465: jmp 0x4904bb */ goto L_004904bb;
L_00490467:; BB(0x00490467);
    /* 00490467: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00490469: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0049046f: call 0x49243f */ r_esp -= 4; W32(r_esp, 0x490474u); f_0049243f();
    /* 00490474: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490476: je 0x4904b6 */ if (fZ) goto L_004904b6;
L_00490478:; BB(0x00490478);
    /* 00490478: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049047b: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x490480u); f_004259f1();
    /* 00490480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490481: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490484: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x490489u); f_004259f1();
    /* 00490489: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0049048f: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00490493: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x490498u); f_004280b4();
    /* 00490498: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049049a: jne 0x4904b6 */ if (!fZ) goto L_004904b6;
L_0049049c:; BB(0x0049049c);
    /* 0049049c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049049f: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x4904a4u); f_004259f1();
    /* 004904a4: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 004904aa: cmp eax, dword ptr [edx + 0x134] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x134u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004904b0: je 0x4904b6 */ if (fZ) goto L_004904b6;
L_004904b2:; BB(0x004904b2);
    /* 004904b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004904b4: jmp 0x4904bb */ goto L_004904bb;
L_004904b6:; BB(0x004904b6);
    /* 004904b6: mov eax, 1 */ r_eax = 0x1u;
L_004904bb:; BB(0x004904bb);
    /* 004904bb: mov esp, ebp */ r_esp = r_ebp;
    /* 004904bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004904be: ret  */ FN_RET(0x0049034d); r_esp += 4; return;
}

void f_004904bf(void) /* FUN_004904bf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004904bf);
    /* 004904bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004904c0: mov ebp, esp */ r_ebp = r_esp;
    /* 004904c2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004904c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004904c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004904c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004904cc: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x4904d1u); f_004259f1();
    /* 004904d1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004904d4: jne 0x4904dd */ if (!fZ) goto L_004904dd;
L_004904d6:; BB(0x004904d6);
    /* 004904d6: mov eax, 1 */ r_eax = 0x1u;
    /* 004904db: jmp 0x490549 */ goto L_00490549;
L_004904dd:; BB(0x004904dd);
    /* 004904dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004904e0: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x4904e5u); f_004259a0();
    /* 004904e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004904e7: jne 0x4904ed */ if (!fZ) goto L_004904ed;
L_004904e9:; BB(0x004904e9);
    /* 004904e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004904eb: jmp 0x490549 */ goto L_00490549;
L_004904ed:; BB(0x004904ed);
    /* 004904ed: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 004904f3: call 0x4950c7 */ r_esp -= 4; W32(r_esp, 0x4904f8u); f_004950c7();
    /* 004904f8: mov esi, eax */ r_esi = r_eax;
    /* 004904fa: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 00490500: call 0x44897d */ r_esp -= 4; W32(r_esp, 0x490505u); f_0044897d();
    /* 00490505: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00490508: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0049050b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0049050e: call 0x49034d */ r_esp -= 4; W32(r_esp, 0x490513u); f_0049034d();
    /* 00490513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490515: je 0x490547 */ if (fZ) goto L_00490547;
L_00490517:; BB(0x00490517);
    /* 00490517: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0049051a: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x49051fu); f_004259cd();
    /* 0049051f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490520: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00490526: call 0x460901 */ r_esp -= 4; W32(r_esp, 0x49052bu); f_00460901();
    /* 0049052b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049052e: jne 0x490547 */ if (!fZ) goto L_00490547;
L_00490530:; BB(0x00490530);
    /* 00490530: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490533: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00490536: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x49053bu); f_00426819();
    /* 0049053b: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049053e: jl 0x490547 */ if ((fS!=fO)) goto L_00490547;
L_00490540:; BB(0x00490540);
    /* 00490540: mov eax, 1 */ r_eax = 0x1u;
    /* 00490545: jmp 0x490549 */ goto L_00490549;
L_00490547:; BB(0x00490547);
    /* 00490547: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00490549:; BB(0x00490549);
    /* 00490549: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049054a: mov esp, ebp */ r_esp = r_ebp;
    /* 0049054c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049054d: ret  */ FN_RET(0x004904bf); r_esp += 4; return;
}

void f_0049054e(void) /* FUN_0049054e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0049054e);
    /* 0049054e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049054f: mov ebp, esp */ r_ebp = r_esp;
    /* 00490551: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490554: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00490557: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 0049055e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00490565: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049056c: jmp 0x490577 */ goto L_00490577;
L_0049056e:; BB(0x0049056e);
    /* 0049056e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490571: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00490574: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00490577:; BB(0x00490577);
    /* 00490577: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049057b: jge 0x4905c7 */ if ((fS==fO)) goto L_004905c7;
L_0049057d:; BB(0x0049057d);
    /* 0049057d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490580: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490586: cmp dword ptr [edx + ecx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049058b: je 0x4905c5 */ if (fZ) goto L_004905c5;
L_0049058d:; BB(0x0049058d);
    /* 0049058d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490590: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490596: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0049059a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0049059d: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x4905a2u); f_00426819();
    /* 004905a2: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004905a5: jle 0x4905c5 */ if ((fZ||fS!=fO)) goto L_004905c5;
L_004905a7:; BB(0x004905a7);
    /* 004905a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004905aa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004905ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004905b0: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 004905b6: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 004905ba: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004905bd: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x4905c2u); f_00426819();
    /* 004905c2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004905c5:; BB(0x004905c5);
    /* 004905c5: jmp 0x49056e */ goto L_0049056e;
L_004905c7:; BB(0x004905c7);
    /* 004905c7: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 004905cd: cmp dword ptr [ecx + 0x12c], 1 */ {  u32 a = R32((u32)(r_ecx+0x12cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004905d4: je 0x4905ee */ if (fZ) goto L_004905ee;
L_004905d6:; BB(0x004905d6);
    /* 004905d6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004905d9: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 004905de: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 004905e2: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004905e5: jne 0x4905ee */ if (!fZ) goto L_004905ee;
L_004905e7:; BB(0x004905e7);
    /* 004905e7: mov eax, 1 */ r_eax = 0x1u;
    /* 004905ec: jmp 0x4905f0 */ goto L_004905f0;
L_004905ee:; BB(0x004905ee);
    /* 004905ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004905f0:; BB(0x004905f0);
    /* 004905f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004905f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004905f3: ret  */ FN_RET(0x0049054e); r_esp += 4; return;
}

void f_004905f4(void) /* FUN_004905f4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004905f4);
    /* 004905f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004905f5: mov ebp, esp */ r_ebp = r_esp;
    /* 004905f7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004905fa: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004905fd: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00490604: mov dword ptr [ebp - 4], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9aca00u);
    /* 0049060b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00490612: jmp 0x49061d */ goto L_0049061d;
L_00490614:; BB(0x00490614);
    /* 00490614: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490617: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049061a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0049061d:; BB(0x0049061d);
    /* 0049061d: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490621: jge 0x49066d */ if ((fS==fO)) goto L_0049066d;
L_00490623:; BB(0x00490623);
    /* 00490623: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490626: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 0049062c: cmp dword ptr [edx + ecx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490631: je 0x49066b */ if (fZ) goto L_0049066b;
L_00490633:; BB(0x00490633);
    /* 00490633: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490636: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 0049063c: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00490640: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00490643: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x490648u); f_00426819();
    /* 00490648: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049064b: jge 0x49066b */ if ((fS==fO)) goto L_0049066b;
L_0049064d:; BB(0x0049064d);
    /* 0049064d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490650: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00490653: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490656: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 0049065c: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00490660: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00490663: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x490668u); f_00426819();
    /* 00490668: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0049066b:; BB(0x0049066b);
    /* 0049066b: jmp 0x490614 */ goto L_00490614;
L_0049066d:; BB(0x0049066d);
    /* 0049066d: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490673: cmp dword ptr [ecx + 0x12c], 1 */ {  u32 a = R32((u32)(r_ecx+0x12cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049067a: je 0x490694 */ if (fZ) goto L_00490694;
L_0049067c:; BB(0x0049067c);
    /* 0049067c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049067f: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490684: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00490688: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049068b: jne 0x490694 */ if (!fZ) goto L_00490694;
L_0049068d:; BB(0x0049068d);
    /* 0049068d: mov eax, 1 */ r_eax = 0x1u;
    /* 00490692: jmp 0x490696 */ goto L_00490696;
L_00490694:; BB(0x00490694);
    /* 00490694: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00490696:; BB(0x00490696);
    /* 00490696: mov esp, ebp */ r_esp = r_ebp;
    /* 00490698: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490699: ret  */ FN_RET(0x004905f4); r_esp += 4; return;
}

void f_0049069a(void) /* FUN_0049069a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0049069a);
    /* 0049069a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049069b: mov ebp, esp */ r_ebp = r_esp;
    /* 0049069d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049069e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004906a1: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 004906a7: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x4906acu); f_00448ca3();
    /* 004906ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004906ae: je 0x4906d0 */ if (fZ) goto L_004906d0;
L_004906b0:; BB(0x004906b0);
    /* 004906b0: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 004906b6: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x4906bbu); f_00448e5d();
    /* 004906bb: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 004906c1: cmp dword ptr [ecx + 0x12c], eax */ {  u32 a = R32((u32)(r_ecx+0x12cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004906c7: jl 0x4906d0 */ if ((fS!=fO)) goto L_004906d0;
L_004906c9:; BB(0x004906c9);
    /* 004906c9: mov eax, 1 */ r_eax = 0x1u;
    /* 004906ce: jmp 0x4906d2 */ goto L_004906d2;
L_004906d0:; BB(0x004906d0);
    /* 004906d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004906d2:; BB(0x004906d2);
    /* 004906d2: mov esp, ebp */ r_esp = r_ebp;
    /* 004906d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004906d5: ret  */ FN_RET(0x0049069a); r_esp += 4; return;
}

void f_004906d6(void) /* FUN_004906d6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004906d6);
    /* 004906d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004906d7: mov ebp, esp */ r_ebp = r_esp;
    /* 004906d9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004906dc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004906df: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004906e6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004906ed: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004906f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004906f1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004906f4: mov edx, dword ptr [ecx + 0x138] */ r_edx = R32((u32)(r_ecx+0x138u));
    /* 004906fa: mov al, byte ptr [edx + 0x49] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x49u))) & 0xffu);
    /* 004906fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004906fe: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00490701: mov edx, dword ptr [ecx + 0x138] */ r_edx = R32((u32)(r_ecx+0x138u));
    /* 00490707: mov al, byte ptr [edx + 0x48] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x48u))) & 0xffu);
    /* 0049070a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049070b: mov ecx, dword ptr [0x6f8d00] */ r_ecx = R32((u32)(0x6f8d00u));
    /* 00490711: call 0x49b128 */ r_esp -= 4; W32(r_esp, 0x490716u); f_0049b128();
    /* 00490716: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00490719: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049071a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049071d: mov eax, dword ptr [edx + 0x138] */ r_eax = R32((u32)(r_edx+0x138u));
    /* 00490723: mov cl, byte ptr [eax + 0x49] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x49u))) & 0xffu);
    /* 00490726: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490727: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049072a: mov eax, dword ptr [edx + 0x138] */ r_eax = R32((u32)(r_edx+0x138u));
    /* 00490730: mov cl, byte ptr [eax + 0x48] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x48u))) & 0xffu);
    /* 00490733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490734: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00490737: mov eax, dword ptr [edx + 0x138] */ r_eax = R32((u32)(r_edx+0x138u));
    /* 0049073d: add eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00490740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490741: mov ecx, dword ptr [0x6f8d00] */ r_ecx = R32((u32)(0x6f8d00u));
    /* 00490747: call 0x49b1f1 */ r_esp -= 4; W32(r_esp, 0x49074cu); f_0049b1f1();
    /* 0049074c: movsx ecx, byte ptr [ebp - 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff8u));
    /* 00490750: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490753: jne 0x49075c */ if (!fZ) goto L_0049075c;
L_00490755:; BB(0x00490755);
    /* 00490755: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_0049075c:; BB(0x0049075c);
    /* 0049075c: movsx edx, byte ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe8u));
    /* 00490760: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490763: jl 0x49076c */ if ((fS!=fO)) goto L_0049076c;
L_00490765:; BB(0x00490765);
    /* 00490765: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_0049076c:; BB(0x0049076c);
    /* 0049076c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490770: je 0x49077f */ if (fZ) goto L_0049077f;
L_00490772:; BB(0x00490772);
    /* 00490772: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490776: je 0x49077f */ if (fZ) goto L_0049077f;
L_00490778:; BB(0x00490778);
    /* 00490778: mov eax, 1 */ r_eax = 0x1u;
    /* 0049077d: jmp 0x490781 */ goto L_00490781;
L_0049077f:; BB(0x0049077f);
    /* 0049077f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00490781:; BB(0x00490781);
    /* 00490781: mov esp, ebp */ r_esp = r_ebp;
    /* 00490783: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490784: ret  */ FN_RET(0x004906d6); r_esp += 4; return;
}

void f_00490785(void) /* FUN_00490785 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00490785);
    /* 00490785: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490786: mov ebp, esp */ r_ebp = r_esp;
    /* 00490788: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049078b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0049078e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00490795: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0049079c: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0049079f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004907a0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004907a3: mov edx, dword ptr [ecx + 0x138] */ r_edx = R32((u32)(r_ecx+0x138u));
    /* 004907a9: mov al, byte ptr [edx + 0x49] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x49u))) & 0xffu);
    /* 004907ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004907ad: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004907b0: mov edx, dword ptr [ecx + 0x138] */ r_edx = R32((u32)(r_ecx+0x138u));
    /* 004907b6: mov al, byte ptr [edx + 0x48] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x48u))) & 0xffu);
    /* 004907b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004907ba: mov ecx, dword ptr [0x6f8d00] */ r_ecx = R32((u32)(0x6f8d00u));
    /* 004907c0: call 0x49b128 */ r_esp -= 4; W32(r_esp, 0x4907c5u); f_0049b128();
    /* 004907c5: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004907c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004907c9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004907cc: mov eax, dword ptr [edx + 0x138] */ r_eax = R32((u32)(r_edx+0x138u));
    /* 004907d2: mov cl, byte ptr [eax + 0x49] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x49u))) & 0xffu);
    /* 004907d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004907d6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004907d9: mov eax, dword ptr [edx + 0x138] */ r_eax = R32((u32)(r_edx+0x138u));
    /* 004907df: mov cl, byte ptr [eax + 0x48] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x48u))) & 0xffu);
    /* 004907e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004907e3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004907e6: mov eax, dword ptr [edx + 0x138] */ r_eax = R32((u32)(r_edx+0x138u));
    /* 004907ec: add eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004907ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004907f0: mov ecx, dword ptr [0x6f8d00] */ r_ecx = R32((u32)(0x6f8d00u));
    /* 004907f6: call 0x49b1f1 */ r_esp -= 4; W32(r_esp, 0x4907fbu); f_0049b1f1();
    /* 004907fb: movsx ecx, byte ptr [ebp - 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff8u));
    /* 004907ff: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490802: jne 0x490814 */ if (!fZ) goto L_00490814;
L_00490804:; BB(0x00490804);
    /* 00490804: movsx edx, byte ptr [ebp - 5] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffbu));
    /* 00490808: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049080b: jg 0x490814 */ if ((!fZ&&fS==fO)) goto L_00490814;
L_0049080d:; BB(0x0049080d);
    /* 0049080d: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_00490814:; BB(0x00490814);
    /* 00490814: movsx eax, byte ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe8u));
    /* 00490818: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049081b: jg 0x49082d */ if ((!fZ&&fS==fO)) goto L_0049082d;
L_0049081d:; BB(0x0049081d);
    /* 0049081d: movsx ecx, byte ptr [ebp - 0x17] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe9u));
    /* 00490821: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490824: jge 0x49082d */ if ((fS==fO)) goto L_0049082d;
L_00490826:; BB(0x00490826);
    /* 00490826: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_0049082d:; BB(0x0049082d);
    /* 0049082d: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490831: je 0x490840 */ if (fZ) goto L_00490840;
L_00490833:; BB(0x00490833);
    /* 00490833: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490837: je 0x490840 */ if (fZ) goto L_00490840;
L_00490839:; BB(0x00490839);
    /* 00490839: mov eax, 1 */ r_eax = 0x1u;
    /* 0049083e: jmp 0x490842 */ goto L_00490842;
L_00490840:; BB(0x00490840);
    /* 00490840: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00490842:; BB(0x00490842);
    /* 00490842: mov esp, ebp */ r_esp = r_ebp;
    /* 00490844: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490845: ret  */ FN_RET(0x00490785); r_esp += 4; return;
}

void f_00490846(void) /* FUN_00490846 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00490846);
    /* 00490846: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490847: mov ebp, esp */ r_ebp = r_esp;
    /* 00490849: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049084a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0049084d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00490850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490851: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490854: call 0x426b30 */ r_esp -= 4; W32(r_esp, 0x490859u); f_00426b30();
    /* 00490859: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049085c: mov dword ptr [ecx], 0x63708c */ W32((u32)(r_ecx), 0x63708cu);
    /* 00490862: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490865: mov esp, ebp */ r_esp = r_ebp;
    /* 00490867: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490868: ret 4 */ FN_RET(0x00490846); r_esp += 8; return;
}

void f_0049086b(void) /* FUN_0049086b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0049086b);
    /* 0049086b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049086c: mov ebp, esp */ r_ebp = r_esp;
    /* 0049086e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049086f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00490872: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490875: mov dword ptr [eax], 0x63708c */ W32((u32)(r_eax), 0x63708cu);
    /* 0049087b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049087e: call 0x426c3d */ r_esp -= 4; W32(r_esp, 0x490883u); f_00426c3d();
    /* 00490883: mov esp, ebp */ r_esp = r_ebp;
    /* 00490885: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490886: ret  */ FN_RET(0x0049086b); r_esp += 4; return;
}

void f_00490887(void) /* FUN_00490887 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00490887);
    /* 00490887: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490888: mov ebp, esp */ r_ebp = r_esp;
    /* 0049088a: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049088d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00490890: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00490895: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00490898: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0049089e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004908a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004908a3: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x4908a6u); call_ind(t); }
    /* 004908a6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004908a9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004908b0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004908b7: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004908be: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004908c5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004908cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004908d3: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 004908d8: cmp dword ptr [eax + 0x134], 4 */ {  u32 a = R32((u32)(r_eax+0x134u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004908df: jne 0x4908f6 */ if (!fZ) goto L_004908f6;
L_004908e1:; BB(0x004908e1);
    /* 004908e1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004908e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004908e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004908e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004908e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004908ec: call 0x427a2f */ r_esp -= 4; W32(r_esp, 0x4908f1u); f_00427a2f();
    /* 004908f1: jmp 0x490b83 */ goto L_00490b83;
L_004908f6:; BB(0x004908f6);
    /* 004908f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004908f9: call 0x426dfb */ r_esp -= 4; W32(r_esp, 0x4908feu); f_00426dfb();
    /* 004908fe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490901: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00490904: mov dword ptr [eax + 0xd4], ecx */ W32((u32)(r_eax+0xd4u), r_ecx);
    /* 0049090a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0049090d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00490910: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490914: je 0x49092f */ if (fZ) goto L_0049092f;
L_00490916:; BB(0x00490916);
    /* 00490916: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049091a: je 0x490a43 */ if (fZ) goto L_00490a43;
L_00490920:; BB(0x00490920);
    /* 00490920: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490924: je 0x490a69 */ if (fZ) goto L_00490a69;
L_0049092a:; BB(0x0049092a);
    /* 0049092a: jmp 0x490b83 */ goto L_00490b83;
L_0049092f:; BB(0x0049092f);
    /* 0049092f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490932: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00490934: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490937: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x49093au); call_ind(t); }
    /* 0049093a: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0049093d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049093e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490941: call 0x426ef0 */ r_esp -= 4; W32(r_esp, 0x490946u); f_00426ef0();
    /* 00490946: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490949: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x49094eu); f_004259f1();
    /* 0049094e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490951: je 0x49099f */ if (fZ) goto L_0049099f;
L_00490953:; BB(0x00490953);
    /* 00490953: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490956: cmp dword ptr [ecx + 0x110], 0 */ {  u32 a = R32((u32)(r_ecx+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049095d: jle 0x49096c */ if ((fZ||fS!=fO)) goto L_0049096c;
L_0049095f:; BB(0x0049095f);
    /* 0049095f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490962: mov dword ptr [edx + 0x110], 0 */ W32((u32)(r_edx+0x110u), 0x0u);
L_0049096c:; BB(0x0049096c);
    /* 0049096c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0049096f: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 00490975: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00490978: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049097b: mov dword ptr [edx + 0x110], ecx */ W32((u32)(r_edx+0x110u), r_ecx);
    /* 00490981: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00490984: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00490987: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0049098a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049098d: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00490990: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00490993: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00490996: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00490997: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049099a: call 0x425ca4 */ r_esp -= 4; W32(r_esp, 0x49099fu); f_00425ca4();
L_0049099f:; BB(0x0049099f);
    /* 0049099f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004909a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004909a3: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x4909a8u); f_00624700();
    /* 004909a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004909ab: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004909ae: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004909b1: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004909b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004909b7: call 0x4279ed */ r_esp -= 4; W32(r_esp, 0x4909bcu); f_004279ed();
    /* 004909bc: fmul qword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd0u));
    /* 004909bf: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x4909c4u); f_00624144();
    /* 004909c4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004909c7: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 004909ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004909cb: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 004909d1: mov eax, dword ptr [edx + 0x134] */ r_eax = R32((u32)(r_edx+0x134u));
    /* 004909d7: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 004909dd: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 004909e1: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004909e4: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x4909e9u); f_004267ae();
    /* 004909e9: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 004909ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004909ed: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 004909f3: mov edx, dword ptr [ecx + 0x134] */ r_edx = R32((u32)(r_ecx+0x134u));
    /* 004909f9: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 004909fe: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00490a02: call 0x425ca4 */ r_esp -= 4; W32(r_esp, 0x490a07u); f_00425ca4();
    /* 00490a07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00490a09: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00490a0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490a0d: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490a13: mov eax, dword ptr [edx + 0x134] */ r_eax = R32((u32)(r_edx+0x134u));
    /* 00490a19: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490a1f: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00490a23: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490a29: mov eax, dword ptr [edx + 0x134] */ r_eax = R32((u32)(r_edx+0x134u));
    /* 00490a2f: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490a35: mov eax, dword ptr [edx + eax*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_eax*4+0xcu));
    /* 00490a39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00490a3b: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x490a3eu); call_ind(t); }
    /* 00490a3e: jmp 0x490b83 */ goto L_00490b83;
L_00490a43:; BB(0x00490a43);
    /* 00490a43: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490a46: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x490a4bu); f_004259f1();
    /* 00490a4b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490a4e: je 0x490a64 */ if (fZ) goto L_00490a64;
L_00490a50:; BB(0x00490a50);
    /* 00490a50: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490a53: add eax, 0xc4 */ {  u32 a = r_eax; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00490a58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490a59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490a5c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00490a5f: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x490a64u); f_004267ae();
L_00490a64:; BB(0x00490a64);
    /* 00490a64: jmp 0x490b83 */ goto L_00490b83;
L_00490a69:; BB(0x00490a69);
    /* 00490a69: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00490a6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00490a6d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490a70: call 0x426ef0 */ r_esp -= 4; W32(r_esp, 0x490a75u); f_00426ef0();
    /* 00490a75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490a78: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x490a7du); f_004259f1();
    /* 00490a7d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490a80: je 0x490b32 */ if (fZ) goto L_00490b32;
L_00490a86:; BB(0x00490a86);
    /* 00490a86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00490a89: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490a90: jge 0x490a9f */ if ((fS==fO)) goto L_00490a9f;
L_00490a92:; BB(0x00490a92);
    /* 00490a92: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490a95: mov dword ptr [ecx + 0x110], 0 */ W32((u32)(r_ecx+0x110u), 0x0u);
L_00490a9f:; BB(0x00490a9f);
    /* 00490a9f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490aa2: mov eax, dword ptr [edx + 0x110] */ r_eax = R32((u32)(r_edx+0x110u));
    /* 00490aa8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00490aab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490aae: mov dword ptr [ecx + 0x110], eax */ W32((u32)(r_ecx+0x110u), r_eax);
    /* 00490ab4: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00490ab7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00490ab8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490abb: call 0x426ef0 */ r_esp -= 4; W32(r_esp, 0x490ac0u); f_00426ef0();
    /* 00490ac0: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 00490ac3: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00490ac6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490ac9: call 0x4279ed */ r_esp -= 4; W32(r_esp, 0x490aceu); f_004279ed();
    /* 00490ace: fmul qword ptr [ebp - 0x38] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc8u));
    /* 00490ad1: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x490ad6u); f_00624144();
    /* 00490ad6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00490ad9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490adc: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00490ae2: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00490ae5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00490ae8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490aeb: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00490af1: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00490af4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00490af7: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00490afa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490afb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490afe: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00490b01: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x490b06u); f_004267ae();
    /* 00490b06: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00490b09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490b0a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490b0d: call 0x425ca4 */ r_esp -= 4; W32(r_esp, 0x490b12u); f_00425ca4();
    /* 00490b12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00490b14: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00490b17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490b18: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490b1b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00490b1d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490b20: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x490b23u); call_ind(t); }
    /* 00490b23: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00490b26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490b27: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490b2a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00490b2c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490b2f: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x490b32u); call_ind(t); }
L_00490b32:; BB(0x00490b32);
    /* 00490b32: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490b35: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00490b38: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00490b3b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490b3e: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00490b41: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00490b44: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00490b47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490b48: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490b4e: mov edx, dword ptr [ecx + 0x134] */ r_edx = R32((u32)(r_ecx+0x134u));
    /* 00490b54: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490b59: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00490b5d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00490b60: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x490b65u); f_004267ae();
    /* 00490b65: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00490b68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00490b69: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490b6e: mov ecx, dword ptr [eax + 0x134] */ r_ecx = R32((u32)(r_eax+0x134u));
    /* 00490b74: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490b7a: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00490b7e: call 0x425ca4 */ r_esp -= 4; W32(r_esp, 0x490b83u); f_00425ca4();
L_00490b83:; BB(0x00490b83);
    /* 00490b83: mov esp, ebp */ r_esp = r_ebp;
    /* 00490b85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490b86: ret 8 */ FN_RET(0x00490887); r_esp += 12; return;
}

void f_00490b89(void) /* FUN_00490b89 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00490b89);
    /* 00490b89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490b8a: mov ebp, esp */ r_ebp = r_esp;
    /* 00490b8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490b8d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00490b90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490b93: call 0x427c22 */ r_esp -= 4; W32(r_esp, 0x490b98u); f_00427c22();
    /* 00490b98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490b9b: mov dword ptr [eax], 0x6370f4 */ W32((u32)(r_eax), 0x6370f4u);
    /* 00490ba1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490ba4: mov esp, ebp */ r_esp = r_ebp;
    /* 00490ba6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490ba7: ret  */ FN_RET(0x00490b89); r_esp += 4; return;
}

void f_00490ba8(void) /* FUN_00490ba8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00490ba8);
    /* 00490ba8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490ba9: mov ebp, esp */ r_ebp = r_esp;
    /* 00490bab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490bac: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00490baf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490bb2: mov dword ptr [eax], 0x6370f4 */ W32((u32)(r_eax), 0x6370f4u);
    /* 00490bb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490bbb: call 0x427cb2 */ r_esp -= 4; W32(r_esp, 0x490bc0u); f_00427cb2();
    /* 00490bc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00490bc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490bc3: ret  */ FN_RET(0x00490ba8); r_esp += 4; return;
}

void f_00490bc4(void) /* FUN_00490bc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00490bc4);
    /* 00490bc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490bc5: mov ebp, esp */ r_ebp = r_esp;
    /* 00490bc7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490bca: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00490bcd: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00490bd2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x490bd7u); f_0048ab58();
    /* 00490bd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00490bda: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00490bdd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490be1: je 0x490bf4 */ if (fZ) goto L_00490bf4;
L_00490be3:; BB(0x00490be3);
    /* 00490be3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490be6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490be7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490bea: call 0x490846 */ r_esp -= 4; W32(r_esp, 0x490befu); f_00490846();
    /* 00490bef: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00490bf2: jmp 0x490bfb */ goto L_00490bfb;
L_00490bf4:; BB(0x00490bf4);
    /* 00490bf4: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00490bfb:; BB(0x00490bfb);
    /* 00490bfb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490bfe: mov esp, ebp */ r_esp = r_ebp;
    /* 00490c00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490c01: ret  */ FN_RET(0x00490bc4); r_esp += 4; return;
}

void f_00490c02(void) /* FUN_00490c02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00490c02);
    /* 00490c02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490c03: mov ebp, esp */ r_ebp = r_esp;
    /* 00490c05: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490c08: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00490c0b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00490c11: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x490c16u); f_0045cb0a();
    /* 00490c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490c18: je 0x490c31 */ if (fZ) goto L_00490c31;
L_00490c1a:; BB(0x00490c1a);
    /* 00490c1a: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490c21: jne 0x490c31 */ if (!fZ) goto L_00490c31;
L_00490c23:; BB(0x00490c23);
    /* 00490c23: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490c28: cmp dword ptr [eax + 0x164], 0 */ {  u32 a = R32((u32)(r_eax+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490c2f: je 0x490c49 */ if (fZ) goto L_00490c49;
L_00490c31:; BB(0x00490c31);
    /* 00490c31: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490c35: je 0x490c44 */ if (fZ) goto L_00490c44;
L_00490c37:; BB(0x00490c37);
    /* 00490c37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00490c39: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00490c3c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00490c3e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00490c41: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x490c44u); call_ind(t); }
L_00490c44:; BB(0x00490c44);
    /* 00490c44: jmp 0x490d48 */ goto L_00490d48;
L_00490c49:; BB(0x00490c49);
    /* 00490c49: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490c4e: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490c52: je 0x490cc8 */ if (fZ) goto L_00490cc8;
L_00490c54:; BB(0x00490c54);
    /* 00490c54: push 0x7e7 */ { u32 v = 0x7e7u; r_esp -= 4; W32(r_esp, v); }
    /* 00490c59: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490c5f: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00490c62: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x490c67u); f_005ea0c3();
    /* 00490c67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00490c69: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490c6f: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00490c72: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x490c77u); f_005ea1cf();
    /* 00490c77: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490c7c: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00490c7f: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490c85: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00490c88: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00490c8a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x490c8du); call_ind(t); }
    /* 00490c8d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00490c8f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x490c94u); f_0048ab58();
    /* 00490c94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00490c97: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00490c9a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490c9e: je 0x490caf */ if (fZ) goto L_00490caf;
L_00490ca0:; BB(0x00490ca0);
    /* 00490ca0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00490ca2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490ca5: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x490caau); f_005d7b34();
    /* 00490caa: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00490cad: jmp 0x490cb6 */ goto L_00490cb6;
L_00490caf:; BB(0x00490caf);
    /* 00490caf: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00490cb6:; BB(0x00490cb6);
    /* 00490cb6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00490cb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490cba: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490cc0: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00490cc3: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x490cc8u); f_005e4060();
L_00490cc8:; BB(0x00490cc8);
    /* 00490cc8: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490cce: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490cd2: je 0x490d48 */ if (fZ) goto L_00490d48;
L_00490cd4:; BB(0x00490cd4);
    /* 00490cd4: push 0x7e6 */ { u32 v = 0x7e6u; r_esp -= 4; W32(r_esp, v); }
    /* 00490cd9: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490cde: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00490ce1: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x490ce6u); f_005ea0c3();
    /* 00490ce6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00490ce8: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490cee: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00490cf1: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x490cf6u); f_005ea1cf();
    /* 00490cf6: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490cfc: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00490cff: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490d04: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00490d07: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00490d09: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x490d0cu); call_ind(t); }
    /* 00490d0c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00490d0e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x490d13u); f_0048ab58();
    /* 00490d13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00490d16: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00490d19: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490d1d: je 0x490d30 */ if (fZ) goto L_00490d30;
L_00490d1f:; BB(0x00490d1f);
    /* 00490d1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00490d22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490d23: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490d26: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x490d2bu); f_005d7b34();
    /* 00490d2b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00490d2e: jmp 0x490d37 */ goto L_00490d37;
L_00490d30:; BB(0x00490d30);
    /* 00490d30: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00490d37:; BB(0x00490d37);
    /* 00490d37: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490d3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00490d3b: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490d40: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00490d43: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x490d48u); f_005e4060();
L_00490d48:; BB(0x00490d48);
    /* 00490d48: mov esp, ebp */ r_esp = r_ebp;
    /* 00490d4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490d4b: ret 4 */ FN_RET(0x00490c02); r_esp += 8; return;
}

void f_00490d4e(void) /* FUN_00490d4e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00490d4e);
    /* 00490d4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490d4f: mov ebp, esp */ r_ebp = r_esp;
    /* 00490d51: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490d54: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00490d57: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00490d5d: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x490d62u); f_0045cb0a();
    /* 00490d62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490d64: je 0x490d7d */ if (fZ) goto L_00490d7d;
L_00490d66:; BB(0x00490d66);
    /* 00490d66: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490d6d: jne 0x490d7d */ if (!fZ) goto L_00490d7d;
L_00490d6f:; BB(0x00490d6f);
    /* 00490d6f: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490d74: cmp dword ptr [eax + 0x164], 0 */ {  u32 a = R32((u32)(r_eax+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490d7b: je 0x490d95 */ if (fZ) goto L_00490d95;
L_00490d7d:; BB(0x00490d7d);
    /* 00490d7d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490d81: je 0x490d90 */ if (fZ) goto L_00490d90;
L_00490d83:; BB(0x00490d83);
    /* 00490d83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00490d85: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00490d88: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00490d8a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00490d8d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x490d90u); call_ind(t); }
L_00490d90:; BB(0x00490d90);
    /* 00490d90: jmp 0x490e69 */ goto L_00490e69;
L_00490d95:; BB(0x00490d95);
    /* 00490d95: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490d9a: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490d9e: je 0x490dfe */ if (fZ) goto L_00490dfe;
L_00490da0:; BB(0x00490da0);
    /* 00490da0: push 0x7e9 */ { u32 v = 0x7e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00490da5: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490dab: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00490dae: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x490db3u); f_005ea0c3();
    /* 00490db3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00490db5: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490dbb: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00490dbe: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x490dc3u); f_005ea1cf();
    /* 00490dc3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00490dc5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x490dcau); f_0048ab58();
    /* 00490dca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00490dcd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00490dd0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490dd4: je 0x490de5 */ if (fZ) goto L_00490de5;
L_00490dd6:; BB(0x00490dd6);
    /* 00490dd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00490dd8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490ddb: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x490de0u); f_005d7b34();
    /* 00490de0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00490de3: jmp 0x490dec */ goto L_00490dec;
L_00490de5:; BB(0x00490de5);
    /* 00490de5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00490dec:; BB(0x00490dec);
    /* 00490dec: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00490def: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490df0: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490df6: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00490df9: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x490dfeu); f_005e4060();
L_00490dfe:; BB(0x00490dfe);
    /* 00490dfe: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490e04: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490e08: je 0x490e69 */ if (fZ) goto L_00490e69;
L_00490e0a:; BB(0x00490e0a);
    /* 00490e0a: push 0x7e8 */ { u32 v = 0x7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00490e0f: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490e14: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00490e17: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x490e1cu); f_005ea0c3();
    /* 00490e1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00490e1e: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490e24: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00490e27: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x490e2cu); f_005ea1cf();
    /* 00490e2c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00490e2e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x490e33u); f_0048ab58();
    /* 00490e33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00490e36: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00490e39: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490e3d: je 0x490e50 */ if (fZ) goto L_00490e50;
L_00490e3f:; BB(0x00490e3f);
    /* 00490e3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00490e42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00490e43: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490e46: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x490e4bu); f_005d7b34();
    /* 00490e4b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00490e4e: jmp 0x490e57 */ goto L_00490e57;
L_00490e50:; BB(0x00490e50);
    /* 00490e50: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00490e57:; BB(0x00490e57);
    /* 00490e57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00490e5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490e5b: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490e61: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00490e64: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x490e69u); f_005e4060();
L_00490e69:; BB(0x00490e69);
    /* 00490e69: mov esp, ebp */ r_esp = r_ebp;
    /* 00490e6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490e6c: ret 4 */ FN_RET(0x00490d4e); r_esp += 8; return;
}

void f_00490e6f(void) /* FUN_00490e6f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00490e6f);
    /* 00490e6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490e70: mov ebp, esp */ r_ebp = r_esp;
    /* 00490e72: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490e75: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00490e78: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00490e7f: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490e85: call 0x492079 */ r_esp -= 4; W32(r_esp, 0x490e8au); f_00492079();
    /* 00490e8a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00490e8d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00490e91: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00490e94: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490e98: je 0x490ea8 */ if (fZ) goto L_00490ea8;
L_00490e9a:; BB(0x00490e9a);
    /* 00490e9a: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490e9e: je 0x490eb1 */ if (fZ) goto L_00490eb1;
L_00490ea0:; BB(0x00490ea0);
    /* 00490ea0: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490ea4: je 0x490ee7 */ if (fZ) goto L_00490ee7;
L_00490ea6:; BB(0x00490ea6);
    /* 00490ea6: jmp 0x490f26 */ goto L_00490f26;
L_00490ea8:; BB(0x00490ea8);
    /* 00490ea8: mov dword ptr [ebp - 8], 0xcb52 */ W32((u32)(r_ebp+0xfffffff8u), 0xcb52u);
    /* 00490eaf: jmp 0x490f26 */ goto L_00490f26;
L_00490eb1:; BB(0x00490eb1);
    /* 00490eb1: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490eb7: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00490eba: call 0x4906d6 */ r_esp -= 4; W32(r_esp, 0x490ebfu); f_004906d6();
    /* 00490ebf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490ec1: je 0x490ecc */ if (fZ) goto L_00490ecc;
L_00490ec3:; BB(0x00490ec3);
    /* 00490ec3: mov dword ptr [ebp - 8], 0xcc33 */ W32((u32)(r_ebp+0xfffffff8u), 0xcc33u);
    /* 00490eca: jmp 0x490ee5 */ goto L_00490ee5;
L_00490ecc:; BB(0x00490ecc);
    /* 00490ecc: mov edx, dword ptr [0x6f8d08] */ r_edx = R32((u32)(0x6f8d08u));
    /* 00490ed2: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00490ed5: call 0x490785 */ r_esp -= 4; W32(r_esp, 0x490edau); f_00490785();
    /* 00490eda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490edc: je 0x490ee5 */ if (fZ) goto L_00490ee5;
L_00490ede:; BB(0x00490ede);
    /* 00490ede: mov dword ptr [ebp - 8], 0xcc4c */ W32((u32)(r_ebp+0xfffffff8u), 0xcc4cu);
L_00490ee5:; BB(0x00490ee5);
    /* 00490ee5: jmp 0x490f26 */ goto L_00490f26;
L_00490ee7:; BB(0x00490ee7);
    /* 00490ee7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490eea: call 0x49027d */ r_esp -= 4; W32(r_esp, 0x490eefu); f_0049027d();
    /* 00490eef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490ef2: jne 0x490efd */ if (!fZ) goto L_00490efd;
L_00490ef4:; BB(0x00490ef4);
    /* 00490ef4: mov dword ptr [ebp - 8], 0xcc01 */ W32((u32)(r_ebp+0xfffffff8u), 0xcc01u);
    /* 00490efb: jmp 0x490f26 */ goto L_00490f26;
L_00490efd:; BB(0x00490efd);
    /* 00490efd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490f00: call 0x49027d */ r_esp -= 4; W32(r_esp, 0x490f05u); f_0049027d();
    /* 00490f05: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490f08: jne 0x490f13 */ if (!fZ) goto L_00490f13;
L_00490f0a:; BB(0x00490f0a);
    /* 00490f0a: mov dword ptr [ebp - 8], 0xcbcf */ W32((u32)(r_ebp+0xfffffff8u), 0xcbcfu);
    /* 00490f11: jmp 0x490f26 */ goto L_00490f26;
L_00490f13:; BB(0x00490f13);
    /* 00490f13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00490f16: call 0x49027d */ r_esp -= 4; W32(r_esp, 0x490f1bu); f_0049027d();
    /* 00490f1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490f1d: jne 0x490f26 */ if (!fZ) goto L_00490f26;
L_00490f1f:; BB(0x00490f1f);
    /* 00490f1f: mov dword ptr [ebp - 8], 0xcb6b */ W32((u32)(r_ebp+0xfffffff8u), 0xcb6bu);
L_00490f26:; BB(0x00490f26);
    /* 00490f26: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490f2a: push 0x68bdf4 */ { u32 v = 0x68bdf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00490f2f: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x490f34u); f_0060fc40();
    /* 00490f34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00490f37: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490f3b: je 0x490f79 */ if (fZ) goto L_00490f79;
L_00490f3d:; BB(0x00490f3d);
    /* 00490f3d: mov ecx, dword ptr [0x6f8d08] */ r_ecx = R32((u32)(0x6f8d08u));
    /* 00490f43: cmp dword ptr [ecx + 0x15c], 0 */ {  u32 a = R32((u32)(r_ecx+0x15cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490f4a: je 0x490f79 */ if (fZ) goto L_00490f79;
L_00490f4c:; BB(0x00490f4c);
    /* 00490f4c: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00490f50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490f52: je 0x490f62 */ if (fZ) goto L_00490f62;
L_00490f54:; BB(0x00490f54);
    /* 00490f54: mov eax, dword ptr [0x6f8d08] */ r_eax = R32((u32)(0x6f8d08u));
    /* 00490f59: cmp dword ptr [eax + 0x134], 4 */ {  u32 a = R32((u32)(r_eax+0x134u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490f60: jne 0x490f79 */ if (!fZ) goto L_00490f79;
L_00490f62:; BB(0x00490f62);
    /* 00490f62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00490f64: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00490f67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490f68: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00490f6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00490f6c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490f6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00490f71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490f74: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x490f77u); call_ind(t); }
    /* 00490f77: jmp 0x490f8c */ goto L_00490f8c;
L_00490f79:; BB(0x00490f79);
    /* 00490f79: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490f7d: je 0x490f8c */ if (fZ) goto L_00490f8c;
L_00490f7f:; BB(0x00490f7f);
    /* 00490f7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00490f81: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00490f84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00490f86: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00490f89: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x490f8cu); call_ind(t); }
L_00490f8c:; BB(0x00490f8c);
    /* 00490f8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00490f8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490f8f: ret 8 */ FN_RET(0x00490e6f); r_esp += 12; return;
}

void f_00490f92(void) /* FUN_00490f92 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00490f92);
    /* 00490f92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490f93: mov ebp, esp */ r_ebp = r_esp;
    /* 00490f95: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490f98: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00490f9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490f9e: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x490fa3u); f_005dfbf0();
    /* 00490fa3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490fa6: mov dword ptr [eax], 0x63715c */ W32((u32)(r_eax), 0x63715cu);
    /* 00490fac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490faf: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00490fb6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490fb9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00490fc0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490fc3: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 00490fca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490fcd: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 00490fd4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490fd7: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 00490fde: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490fe1: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 00490fe8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490feb: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 00490ff2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490ff5: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 00490ffc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490fff: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 00491006: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00491008: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0049100e: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x491013u); f_0045c419();
    /* 00491013: movsx ecx, byte ptr [eax + 0x92] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 0049101a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0049101c: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0049101e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049101f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491022: mov dword ptr [edx + 0x168], ecx */ W32((u32)(r_edx+0x168u), r_ecx);
    /* 00491028: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049102b: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 00491032: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00491039: jmp 0x491044 */ goto L_00491044;
L_0049103b:; BB(0x0049103b);
    /* 0049103b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049103e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00491041: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00491044:; BB(0x00491044);
    /* 00491044: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491048: jge 0x49105a */ if ((fS==fO)) goto L_0049105a;
L_0049104a:; BB(0x0049104a);
    /* 0049104a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049104d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491050: mov dword ptr [eax + edx*4 + 0xc], 0 */ W32((u32)(r_eax+r_edx*4+0xcu), 0x0u);
    /* 00491058: jmp 0x49103b */ goto L_0049103b;
L_0049105a:; BB(0x0049105a);
    /* 0049105a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00491061: jmp 0x49106c */ goto L_0049106c;
L_00491063:; BB(0x00491063);
    /* 00491063: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00491066: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00491069: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0049106c:; BB(0x0049106c);
    /* 0049106c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491070: jge 0x491082 */ if ((fS==fO)) goto L_00491082;
L_00491072:; BB(0x00491072);
    /* 00491072: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00491075: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491078: mov dword ptr [eax + edx*4 + 0x20], 0 */ W32((u32)(r_eax+r_edx*4+0x20u), 0x0u);
    /* 00491080: jmp 0x491063 */ goto L_00491063;
L_00491082:; BB(0x00491082);
    /* 00491082: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00491084: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491087: call 0x49544e */ r_esp -= 4; W32(r_esp, 0x49108cu); f_0049544e();
    /* 0049108c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049108f: mov dword ptr [ecx + 0x140], 0 */ W32((u32)(r_ecx+0x140u), 0x0u);
    /* 00491099: push 0x37c */ { u32 v = 0x37cu; r_esp -= 4; W32(r_esp, v); }
    /* 0049109e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4910a3u); f_0048ab58();
    /* 004910a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004910a6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004910a9: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004910ad: je 0x4910bc */ if (fZ) goto L_004910bc;
L_004910af:; BB(0x004910af);
    /* 004910af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004910b2: call 0x497530 */ r_esp -= 4; W32(r_esp, 0x4910b7u); f_00497530();
    /* 004910b7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004910ba: jmp 0x4910c3 */ goto L_004910c3;
L_004910bc:; BB(0x004910bc);
    /* 004910bc: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004910c3:; BB(0x004910c3);
    /* 004910c3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004910c6: mov dword ptr [0x6f8d00], edx */ W32((u32)(0x6f8d00u), r_edx);
    /* 004910cc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004910cf: mov dword ptr [eax + 0x12c], 0 */ W32((u32)(r_eax+0x12cu), 0x0u);
    /* 004910d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004910dc: mov dword ptr [ecx + 0x130], 0 */ W32((u32)(r_ecx+0x130u), 0x0u);
    /* 004910e6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004910e9: mov dword ptr [edx + 0x134], 4 */ W32((u32)(r_edx+0x134u), 0x4u);
    /* 004910f3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004910f6: mov dword ptr [eax + 0x138], 0xffffffff */ W32((u32)(r_eax+0x138u), 0xffffffffu);
    /* 00491100: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491103: mov dword ptr [ecx + 0x160], 0 */ W32((u32)(r_ecx+0x160u), 0x0u);
    /* 0049110d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049110f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491112: call 0x492412 */ r_esp -= 4; W32(r_esp, 0x491117u); f_00492412();
    /* 00491117: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049111a: mov esp, ebp */ r_esp = r_ebp;
    /* 0049111c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049111d: ret  */ FN_RET(0x00490f92); r_esp += 4; return;
}

void f_0049111e(void) /* FUN_0049111e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0049111e);
    /* 0049111e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049111f: mov ebp, esp */ r_ebp = r_esp;
    /* 00491121: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00491127: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0049112a: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0049112d: mov dword ptr [eax], 0x63715c */ W32((u32)(r_eax), 0x63715cu);
    /* 00491133: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00491136: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049113a: je 0x491173 */ if (fZ) goto L_00491173;
L_0049113c:; BB(0x0049113c);
    /* 0049113c: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0049113f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00491142: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00491145: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491148: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0049114b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049114f: je 0x491162 */ if (fZ) goto L_00491162;
L_00491151:; BB(0x00491151);
    /* 00491151: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00491153: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00491156: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00491158: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0049115b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x49115du); call_ind(t); }
    /* 0049115d: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00491160: jmp 0x491169 */ goto L_00491169;
L_00491162:; BB(0x00491162);
    /* 00491162: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00491169:; BB(0x00491169);
    /* 00491169: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0049116c: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
L_00491173:; BB(0x00491173);
    /* 00491173: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00491176: cmp dword ptr [edx + 0x34], 0 */ {  u32 a = R32((u32)(r_edx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049117a: je 0x4911b3 */ if (fZ) goto L_004911b3;
L_0049117c:; BB(0x0049117c);
    /* 0049117c: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0049117f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00491182: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00491185: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00491188: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0049118b: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049118f: je 0x4911a2 */ if (fZ) goto L_004911a2;
L_00491191:; BB(0x00491191);
    /* 00491191: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00491193: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00491196: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00491198: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0049119b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x49119du); call_ind(t); }
    /* 0049119d: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004911a0: jmp 0x4911a9 */ goto L_004911a9;
L_004911a2:; BB(0x004911a2);
    /* 004911a2: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_004911a9:; BB(0x004911a9);
    /* 004911a9: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004911ac: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_004911b3:; BB(0x004911b3);
    /* 004911b3: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004911b6: cmp dword ptr [ecx + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004911ba: je 0x4911f3 */ if (fZ) goto L_004911f3;
L_004911bc:; BB(0x004911bc);
    /* 004911bc: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004911bf: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004911c2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004911c5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004911c8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004911cb: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004911cf: je 0x4911e2 */ if (fZ) goto L_004911e2;
L_004911d1:; BB(0x004911d1);
    /* 004911d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004911d3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004911d6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004911d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004911db: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4911ddu); call_ind(t); }
    /* 004911dd: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 004911e0: jmp 0x4911e9 */ goto L_004911e9;
L_004911e2:; BB(0x004911e2);
    /* 004911e2: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_004911e9:; BB(0x004911e9);
    /* 004911e9: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004911ec: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_004911f3:; BB(0x004911f3);
    /* 004911f3: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004911f6: cmp dword ptr [edx + 0x40], 0 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004911fa: je 0x491233 */ if (fZ) goto L_00491233;
L_004911fc:; BB(0x004911fc);
    /* 004911fc: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004911ff: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00491202: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00491205: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00491208: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0049120b: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049120f: je 0x491222 */ if (fZ) goto L_00491222;
L_00491211:; BB(0x00491211);
    /* 00491211: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00491213: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491216: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00491218: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049121b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x49121du); call_ind(t); }
    /* 0049121d: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00491220: jmp 0x491229 */ goto L_00491229;
L_00491222:; BB(0x00491222);
    /* 00491222: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00491229:; BB(0x00491229);
    /* 00491229: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0049122c: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_00491233:; BB(0x00491233);
    /* 00491233: cmp dword ptr [0x6f8d00], 0 */ {  u32 a = R32((u32)(0x6f8d00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049123a: je 0x491279 */ if (fZ) goto L_00491279;
L_0049123c:; BB(0x0049123c);
    /* 0049123c: mov ecx, dword ptr [0x6f8d00] */ r_ecx = R32((u32)(0x6f8d00u));
    /* 00491242: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00491245: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00491248: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0049124b: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049124f: je 0x491265 */ if (fZ) goto L_00491265;
L_00491251:; BB(0x00491251);
    /* 00491251: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00491253: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00491256: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00491258: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049125b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x49125du); call_ind(t); }
    /* 0049125d: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00491263: jmp 0x49126f */ goto L_0049126f;
L_00491265:; BB(0x00491265);
    /* 00491265: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0049126f:; BB(0x0049126f);
    /* 0049126f: mov dword ptr [0x6f8d00], 0 */ W32((u32)(0x6f8d00u), 0x0u);
L_00491279:; BB(0x00491279);
    /* 00491279: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0049127c: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491280: je 0x4912bf */ if (fZ) goto L_004912bf;
L_00491282:; BB(0x00491282);
    /* 00491282: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00491285: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00491288: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0049128b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0049128e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00491291: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491295: je 0x4912ab */ if (fZ) goto L_004912ab;
L_00491297:; BB(0x00491297);
    /* 00491297: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00491299: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0049129c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0049129e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004912a1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4912a3u); call_ind(t); }
    /* 004912a3: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 004912a9: jmp 0x4912b5 */ goto L_004912b5;
L_004912ab:; BB(0x004912ab);
    /* 004912ab: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_004912b5:; BB(0x004912b5);
    /* 004912b5: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004912b8: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_004912bf:; BB(0x004912bf);
    /* 004912bf: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004912c2: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004912c6: je 0x491305 */ if (fZ) goto L_00491305;
L_004912c8:; BB(0x004912c8);
    /* 004912c8: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004912cb: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004912ce: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004912d1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004912d4: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004912d7: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004912db: je 0x4912f1 */ if (fZ) goto L_004912f1;
L_004912dd:; BB(0x004912dd);
    /* 004912dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004912df: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004912e2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004912e4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004912e7: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4912e9u); call_ind(t); }
    /* 004912e9: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004912ef: jmp 0x4912fb */ goto L_004912fb;
L_004912f1:; BB(0x004912f1);
    /* 004912f1: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_004912fb:; BB(0x004912fb);
    /* 004912fb: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004912fe: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_00491305:; BB(0x00491305);
    /* 00491305: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00491308: cmp dword ptr [edx + 0x48], 0 */ {  u32 a = R32((u32)(r_edx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049130c: je 0x49134b */ if (fZ) goto L_0049134b;
L_0049130e:; BB(0x0049130e);
    /* 0049130e: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00491311: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00491314: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00491317: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0049131a: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0049131d: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491321: je 0x491337 */ if (fZ) goto L_00491337;
L_00491323:; BB(0x00491323);
    /* 00491323: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00491325: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00491328: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0049132a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0049132d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x49132fu); call_ind(t); }
    /* 0049132f: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00491335: jmp 0x491341 */ goto L_00491341;
L_00491337:; BB(0x00491337);
    /* 00491337: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00491341:; BB(0x00491341);
    /* 00491341: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00491344: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0049134b:; BB(0x0049134b);
    /* 0049134b: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0049134e: cmp dword ptr [ecx + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491352: je 0x491391 */ if (fZ) goto L_00491391;
L_00491354:; BB(0x00491354);
    /* 00491354: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00491357: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0049135a: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0049135d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00491360: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00491363: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491367: je 0x49137d */ if (fZ) goto L_0049137d;
L_00491369:; BB(0x00491369);
    /* 00491369: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049136b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0049136e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00491370: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00491373: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x491375u); call_ind(t); }
    /* 00491375: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0049137b: jmp 0x491387 */ goto L_00491387;
L_0049137d:; BB(0x0049137d);
    /* 0049137d: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_00491387:; BB(0x00491387);
    /* 00491387: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0049138a: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
L_00491391:; BB(0x00491391);
    /* 00491391: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00491394: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491398: je 0x4913d7 */ if (fZ) goto L_004913d7;
L_0049139a:; BB(0x0049139a);
    /* 0049139a: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0049139d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 004913a0: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 004913a3: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 004913a6: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 004913a9: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004913ad: je 0x4913c3 */ if (fZ) goto L_004913c3;
L_004913af:; BB(0x004913af);
    /* 004913af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004913b1: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004913b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004913b6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004913b9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4913bbu); call_ind(t); }
    /* 004913bb: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 004913c1: jmp 0x4913cd */ goto L_004913cd;
L_004913c3:; BB(0x004913c3);
    /* 004913c3: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_004913cd:; BB(0x004913cd);
    /* 004913cd: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004913d0: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_004913d7:; BB(0x004913d7);
    /* 004913d7: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004913da: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004913de: je 0x49141d */ if (fZ) goto L_0049141d;
L_004913e0:; BB(0x004913e0);
    /* 004913e0: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004913e3: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004913e6: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004913e9: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004913ec: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004913ef: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004913f3: je 0x491409 */ if (fZ) goto L_00491409;
L_004913f5:; BB(0x004913f5);
    /* 004913f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004913f7: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004913fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004913fc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004913ff: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x491401u); call_ind(t); }
    /* 00491401: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00491407: jmp 0x491413 */ goto L_00491413;
L_00491409:; BB(0x00491409);
    /* 00491409: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_00491413:; BB(0x00491413);
    /* 00491413: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00491416: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
L_0049141d:; BB(0x0049141d);
    /* 0049141d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00491424: jmp 0x49142f */ goto L_0049142f;
L_00491426:; BB(0x00491426);
    /* 00491426: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00491429: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049142c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0049142f:; BB(0x0049142f);
    /* 0049142f: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491433: jge 0x491489 */ if ((fS==fO)) goto L_00491489;
L_00491435:; BB(0x00491435);
    /* 00491435: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00491438: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0049143b: cmp dword ptr [ecx + eax*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491440: je 0x491487 */ if (fZ) goto L_00491487;
L_00491442:; BB(0x00491442);
    /* 00491442: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00491445: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00491448: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0049144c: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0049144f: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00491452: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00491455: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491459: je 0x49146f */ if (fZ) goto L_0049146f;
L_0049145b:; BB(0x0049145b);
    /* 0049145b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049145d: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00491460: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00491462: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00491465: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x491467u); call_ind(t); }
    /* 00491467: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0049146d: jmp 0x491479 */ goto L_00491479;
L_0049146f:; BB(0x0049146f);
    /* 0049146f: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_00491479:; BB(0x00491479);
    /* 00491479: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049147c: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0049147f: mov dword ptr [ecx + eax*4 + 0xc], 0 */ W32((u32)(r_ecx+r_eax*4+0xcu), 0x0u);
L_00491487:; BB(0x00491487);
    /* 00491487: jmp 0x491426 */ goto L_00491426;
L_00491489:; BB(0x00491489);
    /* 00491489: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00491490: jmp 0x49149b */ goto L_0049149b;
L_00491492:; BB(0x00491492);
    /* 00491492: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00491495: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00491498: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0049149b:; BB(0x0049149b);
    /* 0049149b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049149f: jge 0x4914f5 */ if ((fS==fO)) goto L_004914f5;
L_004914a1:; BB(0x004914a1);
    /* 004914a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004914a4: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004914a7: cmp dword ptr [ecx + eax*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004914ac: je 0x4914f3 */ if (fZ) goto L_004914f3;
L_004914ae:; BB(0x004914ae);
    /* 004914ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004914b1: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004914b4: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 004914b8: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 004914bb: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004914be: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 004914c1: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004914c5: je 0x4914db */ if (fZ) goto L_004914db;
L_004914c7:; BB(0x004914c7);
    /* 004914c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004914c9: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 004914cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004914ce: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004914d1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4914d3u); call_ind(t); }
    /* 004914d3: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 004914d9: jmp 0x4914e5 */ goto L_004914e5;
L_004914db:; BB(0x004914db);
    /* 004914db: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_004914e5:; BB(0x004914e5);
    /* 004914e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004914e8: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004914eb: mov dword ptr [ecx + eax*4 + 0x20], 0 */ W32((u32)(r_ecx+r_eax*4+0x20u), 0x0u);
L_004914f3:; BB(0x004914f3);
    /* 004914f3: jmp 0x491492 */ goto L_00491492;
L_004914f5:; BB(0x004914f5);
    /* 004914f5: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004914f8: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x4914fdu); f_005dfc0f();
    /* 004914fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004914ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491500: ret  */ FN_RET(0x0049111e); r_esp += 4; return;
}

void f_00491501(void) /* FUN_00491501 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00491501);
    /* 00491501: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00491502: mov ebp, esp */ r_ebp = r_esp;
    /* 00491504: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00491507: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0049150a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00491511: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00491518: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049151b: call 0x49159e */ r_esp -= 4; W32(r_esp, 0x491520u); f_0049159e();
    /* 00491520: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491523: call 0x49182c */ r_esp -= 4; W32(r_esp, 0x491528u); f_0049182c();
    /* 00491528: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049152b: call 0x4918ca */ r_esp -= 4; W32(r_esp, 0x491530u); f_004918ca();
    /* 00491530: cmp dword ptr [0x6f8e2c], 0 */ {  u32 a = R32((u32)(0x6f8e2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491537: jne 0x491544 */ if (!fZ) goto L_00491544;
L_00491539:; BB(0x00491539);
    /* 00491539: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 0049153f: call 0x44912b */ r_esp -= 4; W32(r_esp, 0x491544u); f_0044912b();
L_00491544:; BB(0x00491544);
    /* 00491544: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491547: call 0x49199b */ r_esp -= 4; W32(r_esp, 0x49154cu); f_0049199b();
    /* 0049154c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049154e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491551: call 0x492b8d */ r_esp -= 4; W32(r_esp, 0x491556u); f_00492b8d();
    /* 00491556: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491559: call 0x492219 */ r_esp -= 4; W32(r_esp, 0x49155eu); f_00492219();
    /* 0049155e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491560: je 0x491583 */ if (fZ) goto L_00491583;
L_00491562:; BB(0x00491562);
    /* 00491562: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00491564: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491567: call 0x492412 */ r_esp -= 4; W32(r_esp, 0x49156cu); f_00492412();
    /* 0049156c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049156f: mov ecx, dword ptr [eax + 0x138] */ r_ecx = R32((u32)(r_eax+0x138u));
    /* 00491575: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00491578: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00491579: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049157c: call 0x492b8d */ r_esp -= 4; W32(r_esp, 0x491581u); f_00492b8d();
    /* 00491581: jmp 0x49159a */ goto L_0049159a;
L_00491583:; BB(0x00491583);
    /* 00491583: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491586: mov dword ptr [edx + 0x134], 4 */ W32((u32)(r_edx+0x134u), 0x4u);
    /* 00491590: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00491592: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491595: call 0x492412 */ r_esp -= 4; W32(r_esp, 0x49159au); f_00492412();
L_0049159a:; BB(0x0049159a);
    /* 0049159a: mov esp, ebp */ r_esp = r_ebp;
    /* 0049159c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049159d: ret  */ FN_RET(0x00491501); r_esp += 4; return;
}

void f_0049159e(void) /* FUN_0049159e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0049159e);
    /* 0049159e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049159f: mov ebp, esp */ r_ebp = r_esp;
    /* 004915a1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004915a4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004915a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004915a9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004915ab: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004915b1: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x4915b6u); f_0045c4ac();
    /* 004915b6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004915b9: cmp dword ptr [0x6f8e2c], 0 */ {  u32 a = R32((u32)(0x6f8e2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004915c0: jne 0x491735 */ if (!fZ) goto L_00491735;
L_004915c6:; BB(0x004915c6);
    /* 004915c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004915c9: call 0x491f9a */ r_esp -= 4; W32(r_esp, 0x4915ceu); f_00491f9a();
    /* 004915ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004915d0: je 0x4916d5 */ if (fZ) goto L_004916d5;
L_004915d6:; BB(0x004915d6);
    /* 004915d6: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 004915dc: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x4915e1u); f_00448ca3();
    /* 004915e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004915e3: je 0x491601 */ if (fZ) goto L_00491601;
L_004915e5:; BB(0x004915e5);
    /* 004915e5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004915e8: mov dword ptr [eax + 0x14c], 1 */ W32((u32)(r_eax+0x14cu), 0x1u);
    /* 004915f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004915f5: mov dword ptr [ecx + 0x158], 0 */ W32((u32)(r_ecx+0x158u), 0x0u);
    /* 004915ff: jmp 0x49165b */ goto L_0049165b;
L_00491601:; BB(0x00491601);
    /* 00491601: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00491604: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00491607: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049160a: mov dword ptr [ecx + 0x14c], eax */ W32((u32)(r_ecx+0x14cu), r_eax);
    /* 00491610: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00491616: call 0x45d917 */ r_esp -= 4; W32(r_esp, 0x49161bu); f_0045d917();
    /* 0049161b: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0049161e: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491621: jne 0x491632 */ if (!fZ) goto L_00491632;
L_00491623:; BB(0x00491623);
    /* 00491623: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491626: mov dword ptr [eax + 0x158], 0 */ W32((u32)(r_eax+0x158u), 0x0u);
    /* 00491630: jmp 0x49165b */ goto L_0049165b;
L_00491632:; BB(0x00491632);
    /* 00491632: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00491635: movsx edx, byte ptr [ecx + 5] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x5u));
    /* 00491639: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049163c: mov dword ptr [eax + 0x158], edx */ W32((u32)(r_eax+0x158u), r_edx);
    /* 00491642: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491645: cmp dword ptr [ecx + 0x158], 0 */ {  u32 a = R32((u32)(r_ecx+0x158u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049164c: jne 0x49165b */ if (!fZ) goto L_0049165b;
L_0049164e:; BB(0x0049164e);
    /* 0049164e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491651: mov dword ptr [edx + 0x134], 4 */ W32((u32)(r_edx+0x134u), 0x4u);
L_0049165b:; BB(0x0049165b);
    /* 0049165b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0049165e: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 00491662: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491665: mov dword ptr [edx + 0x150], ecx */ W32((u32)(r_edx+0x150u), r_ecx);
    /* 0049166b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049166d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00491673: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x491678u); f_0045c419();
    /* 00491678: movsx eax, byte ptr [eax + 0x92] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 0049167f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00491681: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00491683: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00491684: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491687: cmp dword ptr [ecx + 0x168], eax */ {  u32 a = R32((u32)(r_ecx+0x168u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049168d: je 0x4916d5 */ if (fZ) goto L_004916d5;
L_0049168f:; BB(0x0049168f);
    /* 0049168f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00491691: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00491697: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x49169cu); f_0045c419();
    /* 0049169c: movsx edx, byte ptr [eax + 0x92] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 004916a3: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 004916a5: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 004916a7: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004916a8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004916ab: mov dword ptr [eax + 0x168], edx */ W32((u32)(r_eax+0x168u), r_edx);
    /* 004916b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004916b4: cmp dword ptr [ecx + 0x168], 0 */ {  u32 a = R32((u32)(r_ecx+0x168u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004916bb: je 0x4916ca */ if (fZ) goto L_004916ca;
L_004916bd:; BB(0x004916bd);
    /* 004916bd: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 004916c3: call 0x44a94b */ r_esp -= 4; W32(r_esp, 0x4916c8u); f_0044a94b();
    /* 004916c8: jmp 0x4916d5 */ goto L_004916d5;
L_004916ca:; BB(0x004916ca);
    /* 004916ca: mov ecx, dword ptr [0x6f8d04] */ r_ecx = R32((u32)(0x6f8d04u));
    /* 004916d0: call 0x44a84f */ r_esp -= 4; W32(r_esp, 0x4916d5u); f_0044a84f();
L_004916d5:; BB(0x004916d5);
    /* 004916d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004916d8: movsx eax, byte ptr [edx + 2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x2u));
    /* 004916dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004916df: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
    /* 004916e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004916e8: movsx eax, byte ptr [edx + 3] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3u));
    /* 004916ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004916ef: mov dword ptr [ecx + 0x144], eax */ W32((u32)(r_ecx+0x144u), r_eax);
    /* 004916f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004916f8: movsx eax, byte ptr [edx + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x4u));
    /* 004916fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004916ff: mov dword ptr [ecx + 0x148], eax */ W32((u32)(r_ecx+0x148u), r_eax);
    /* 00491705: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00491708: movsx eax, byte ptr [edx + 6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6u));
    /* 0049170c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049170f: mov dword ptr [ecx + 0x15c], eax */ W32((u32)(r_ecx+0x15cu), r_eax);
    /* 00491715: cmp dword ptr [0x6f8d00], 0 */ {  u32 a = R32((u32)(0x6f8d00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049171c: je 0x491733 */ if (fZ) goto L_00491733;
L_0049171e:; BB(0x0049171e);
    /* 0049171e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491721: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00491727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491728: mov ecx, dword ptr [0x6f8d00] */ r_ecx = R32((u32)(0x6f8d00u));
    /* 0049172e: call 0x497d19 */ r_esp -= 4; W32(r_esp, 0x491733u); f_00497d19();
L_00491733:; BB(0x00491733);
    /* 00491733: jmp 0x491776 */ goto L_00491776;
L_00491735:; BB(0x00491735);
    /* 00491735: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491738: mov dword ptr [ecx + 0x14c], 1 */ W32((u32)(r_ecx+0x14cu), 0x1u);
    /* 00491742: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491745: mov dword ptr [edx + 0x150], 1 */ W32((u32)(r_edx+0x150u), 0x1u);
    /* 0049174f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491752: mov dword ptr [eax + 0x154], 1 */ W32((u32)(r_eax+0x154u), 0x1u);
    /* 0049175c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049175f: mov dword ptr [ecx + 0x158], 0 */ W32((u32)(r_ecx+0x158u), 0x0u);
    /* 00491769: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049176c: mov dword ptr [edx + 0x15c], 0 */ W32((u32)(r_edx+0x15cu), 0x0u);
L_00491776:; BB(0x00491776);
    /* 00491776: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0049177d: jmp 0x491788 */ goto L_00491788;
L_0049177f:; BB(0x0049177f);
    /* 0049177f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00491782: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00491785: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00491788:; BB(0x00491788);
    /* 00491788: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049178c: jge 0x4917c5 */ if ((fS==fO)) goto L_004917c5;
L_0049178e:; BB(0x0049178e);
    /* 0049178e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00491791: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491794: cmp dword ptr [edx + ecx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491799: je 0x4917c3 */ if (fZ) goto L_004917c3;
L_0049179b:; BB(0x0049179b);
    /* 0049179b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0049179e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004917a1: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 004917a5: cmp dword ptr [edx + 0x138], 0 */ {  u32 a = R32((u32)(r_edx+0x138u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004917ac: je 0x4917c3 */ if (fZ) goto L_004917c3;
L_004917ae:; BB(0x004917ae);
    /* 004917ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004917b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004917b4: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 004917b8: mov ecx, dword ptr [edx + 0x138] */ r_ecx = R32((u32)(r_edx+0x138u));
    /* 004917be: call 0x48f67e */ r_esp -= 4; W32(r_esp, 0x4917c3u); f_0048f67e();
L_004917c3:; BB(0x004917c3);
    /* 004917c3: jmp 0x49177f */ goto L_0049177f;
L_004917c5:; BB(0x004917c5);
    /* 004917c5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004917c8: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004917cc: je 0x49180e */ if (fZ) goto L_0049180e;
L_004917ce:; BB(0x004917ce);
    /* 004917ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004917d1: cmp dword ptr [ecx + 0x158], 0 */ {  u32 a = R32((u32)(r_ecx+0x158u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004917d8: je 0x49180e */ if (fZ) goto L_0049180e;
L_004917da:; BB(0x004917da);
    /* 004917da: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004917dd: cmp dword ptr [edx + 0x138], -1 */ {  u32 a = R32((u32)(r_edx+0x138u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004917e4: jle 0x49180e */ if ((fZ||fS!=fO)) goto L_0049180e;
L_004917e6:; BB(0x004917e6);
    /* 004917e6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004917e9: mov ecx, dword ptr [eax + 0x138] */ r_ecx = R32((u32)(r_eax+0x138u));
    /* 004917ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004917f0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004917f3: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004917f6: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4917fbu); f_005ea1cf();
    /* 004917fb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004917fe: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00491801: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491804: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00491807: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00491809: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x49180cu); call_ind(t); }
    /* 0049180c: jmp 0x491828 */ goto L_00491828;
L_0049180e:; BB(0x0049180e);
    /* 0049180e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491811: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491815: je 0x491828 */ if (fZ) goto L_00491828;
L_00491817:; BB(0x00491817);
    /* 00491817: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049181a: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 0049181d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491820: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00491823: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00491825: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x491828u); call_ind(t); }
L_00491828:; BB(0x00491828);
    /* 00491828: mov esp, ebp */ r_esp = r_ebp;
    /* 0049182a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049182b: ret  */ FN_RET(0x0049159e); r_esp += 4; return;
}

