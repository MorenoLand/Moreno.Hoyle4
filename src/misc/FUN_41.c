#include "protos.h"

void f_005d8e32(void) /* FUN_005d8e32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8e32);
    /* 005d8e32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8e33: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8e35: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8e38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8e39: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d8e3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d8e43: jmp 0x5d8e4e */ goto L_005d8e4e;
L_005d8e45:; BB(0x005d8e45);
    /* 005d8e45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8e48: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8e4b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d8e4e:; BB(0x005d8e4e);
    /* 005d8e4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8e51: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d8e56u); f_005e24af();
    /* 005d8e56: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8e59: jge 0x5d8eb8 */ if ((fS==fO)) goto L_005d8eb8;
L_005d8e5b:; BB(0x005d8e5b);
    /* 005d8e5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8e5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8e5f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8e62: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d8e67u); f_005e246d();
    /* 005d8e67: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8e69: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5d8e6eu); f_005e345f();
    /* 005d8e6e: mov esi, eax */ r_esi = r_eax;
    /* 005d8e70: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8e73: call 0x5e1d6d */ r_esp -= 4; W32(r_esp, 0x5d8e78u); f_005e1d6d();
    /* 005d8e78: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8e7a: jne 0x5d8eb6 */ if (!fZ) goto L_005d8eb6;
L_005d8e7c:; BB(0x005d8e7c);
    /* 005d8e7c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8e7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8e82: cmp eax, dword ptr [edx + 0xd4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xd4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8e88: jl 0x5d8eaa */ if ((fS!=fO)) goto L_005d8eaa;
L_005d8e8a:; BB(0x005d8e8a);
    /* 005d8e8a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8e8d: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 005d8e93: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8e96: add edx, dword ptr [eax + 0xd0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d8e9c: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8e9f: jge 0x5d8eaa */ if ((fS==fO)) goto L_005d8eaa;
L_005d8ea1:; BB(0x005d8ea1);
    /* 005d8ea1: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005d8ea8: jmp 0x5d8eb1 */ goto L_005d8eb1;
L_005d8eaa:; BB(0x005d8eaa);
    /* 005d8eaa: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005d8eb1:; BB(0x005d8eb1);
    /* 005d8eb1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8eb4: jmp 0x5d8eba */ goto L_005d8eba;
L_005d8eb6:; BB(0x005d8eb6);
    /* 005d8eb6: jmp 0x5d8e45 */ goto L_005d8e45;
L_005d8eb8:; BB(0x005d8eb8);
    /* 005d8eb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d8eba:; BB(0x005d8eba);
    /* 005d8eba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d8ebb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8ebd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8ebe: ret  */ FN_RET(0x005d8e32); r_esp += 4; return;
}

void f_005d8ebf(void) /* FUN_005d8ebf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8ebf);
    /* 005d8ebf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8ec0: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8ec2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8ec3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8ec6: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8eca: jne 0x5d8ee3 */ if (!fZ) goto L_005d8ee3;
L_005d8ecc:; BB(0x005d8ecc);
    /* 005d8ecc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8ecf: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 005d8ed5: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8ed8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8ed9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8edc: call 0x5d8f04 */ r_esp -= 4; W32(r_esp, 0x5d8ee1u); f_005d8f04();
    /* 005d8ee1: jmp 0x5d8efe */ goto L_005d8efe;
L_005d8ee3:; BB(0x005d8ee3);
    /* 005d8ee3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8ee7: jne 0x5d8efe */ if (!fZ) goto L_005d8efe;
L_005d8ee9:; BB(0x005d8ee9);
    /* 005d8ee9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8eec: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005d8ef2: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8ef5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8ef6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8ef9: call 0x5d8f04 */ r_esp -= 4; W32(r_esp, 0x5d8efeu); f_005d8f04();
L_005d8efe:; BB(0x005d8efe);
    /* 005d8efe: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8f00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8f01: ret 8 */ FN_RET(0x005d8ebf); r_esp += 12; return;
}

void f_005d8f04(void) /* FUN_005d8f04 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8f04);
    /* 005d8f04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8f05: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8f07: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8f0a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d8f0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8f10: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d8f15u); f_005e24af();
    /* 005d8f15: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d8f18: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8f1c: je 0x5d9022 */ if (fZ) goto L_005d9022;
L_005d8f22:; BB(0x005d8f22);
    /* 005d8f22: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8f25: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8f28: sub ecx, dword ptr [eax + 0xd0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xd0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8f2e: cmp dword ptr [ebp + 8], ecx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8f31: jle 0x5d8f42 */ if ((fZ||fS!=fO)) goto L_005d8f42;
L_005d8f33:; BB(0x005d8f33);
    /* 005d8f33: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8f36: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8f39: sub eax, dword ptr [edx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xd0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d8f3f: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005d8f42:; BB(0x005d8f42);
    /* 005d8f42: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8f46: jge 0x5d8f57 */ if ((fS==fO)) goto L_005d8f57;
L_005d8f48:; BB(0x005d8f48);
    /* 005d8f48: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8f4b: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 005d8f55: jmp 0x5d8f63 */ goto L_005d8f63;
L_005d8f57:; BB(0x005d8f57);
    /* 005d8f57: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8f5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8f5d: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
L_005d8f63:; BB(0x005d8f63);
    /* 005d8f63: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8f66: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5d8f6bu); f_005e06e1();
    /* 005d8f6b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8f6e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d8f71: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d8f78: jmp 0x5d8f83 */ goto L_005d8f83;
L_005d8f7a:; BB(0x005d8f7a);
    /* 005d8f7a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8f7d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8f80: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005d8f83:; BB(0x005d8f83);
    /* 005d8f83: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8f86: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8f89: jge 0x5d9022 */ if ((fS==fO)) goto L_005d9022;
L_005d8f8f:; BB(0x005d8f8f);
    /* 005d8f8f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8f92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8f93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8f96: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d8f9bu); f_005e246d();
    /* 005d8f9b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d8f9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8fa1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8fa4: cmp edx, dword ptr [ecx + 0xd4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xd4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8faa: jl 0x5d8fc3 */ if ((fS!=fO)) goto L_005d8fc3;
L_005d8fac:; BB(0x005d8fac);
    /* 005d8fac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8faf: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 005d8fb5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8fb8: add ecx, dword ptr [edx + 0xd0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8fbe: cmp dword ptr [ebp - 0x10], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8fc1: jl 0x5d8fdc */ if ((fS!=fO)) goto L_005d8fdc;
L_005d8fc3:; BB(0x005d8fc3);
    /* 005d8fc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8fc6: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5d8fcbu); f_005d9690();
    /* 005d8fcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8fcd: je 0x5d8fda */ if (fZ) goto L_005d8fda;
L_005d8fcf:; BB(0x005d8fcf);
    /* 005d8fcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8fd2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8fd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8fd7: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5d8fdau); call_ind(t); }
L_005d8fda:; BB(0x005d8fda);
    /* 005d8fda: jmp 0x5d901d */ goto L_005d901d;
L_005d8fdc:; BB(0x005d8fdc);
    /* 005d8fdc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8fdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8fe0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8fe3: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5d8fe8u); f_005e06d0();
    /* 005d8fe8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8feb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8fec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8fef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8ff1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8ff4: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5d8ff7u); call_ind(t); }
    /* 005d8ff7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8ffa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8ffd: add ecx, dword ptr [eax + 0xc8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9003: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d9006: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9009: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x5d900eu); f_005e07a3();
    /* 005d900e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9010: je 0x5d901d */ if (fZ) goto L_005d901d;
L_005d9012:; BB(0x005d9012);
    /* 005d9012: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9015: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d901a: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5d901du); call_ind(t); }
L_005d901d:; BB(0x005d901d);
    /* 005d901d: jmp 0x5d8f7a */ goto L_005d8f7a;
L_005d9022:; BB(0x005d9022);
    /* 005d9022: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9025: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 005d902b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d902c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d902f: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005d9035: call 0x5e729b */ r_esp -= 4; W32(r_esp, 0x5d903au); f_005e729b();
    /* 005d903a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d903c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d903d: ret 4 */ FN_RET(0x005d8f04); r_esp += 8; return;
}

void f_005d9040(void) /* FUN_005d9040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9040);
    /* 005d9040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9041: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9047: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d904a: call 0x5e1de5 */ r_esp -= 4; W32(r_esp, 0x5d904fu); f_005e1de5();
    /* 005d904f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9052: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9059: je 0x5d9093 */ if (fZ) goto L_005d9093;
L_005d905b:; BB(0x005d905b);
    /* 005d905b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d905e: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 005d9064: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9067: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005d906d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d906f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d9072u); call_ind(t); }
    /* 005d9072: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9075: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d907au); f_005e24af();
    /* 005d907a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d907d: cmp eax, dword ptr [ecx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9083: jle 0x5d9093 */ if ((fZ||fS!=fO)) goto L_005d9093;
L_005d9085:; BB(0x005d9085);
    /* 005d9085: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9088: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 005d908e: call 0x5e71b8 */ r_esp -= 4; W32(r_esp, 0x5d9093u); f_005e71b8();
L_005d9093:; BB(0x005d9093);
    /* 005d9093: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9096: call 0x5d8e32 */ r_esp -= 4; W32(r_esp, 0x5d909bu); f_005d8e32();
    /* 005d909b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d909d: je 0x5d90b3 */ if (fZ) goto L_005d90b3;
L_005d909f:; BB(0x005d909f);
    /* 005d909f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d90a2: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 005d90a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d90a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d90ac: call 0x5d8f04 */ r_esp -= 4; W32(r_esp, 0x5d90b1u); f_005d8f04();
    /* 005d90b1: jmp 0x5d90c4 */ goto L_005d90c4;
L_005d90b3:; BB(0x005d90b3);
    /* 005d90b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d90b6: call 0x5e1d6d */ r_esp -= 4; W32(r_esp, 0x5d90bbu); f_005e1d6d();
    /* 005d90bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d90bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d90bf: call 0x5d8f04 */ r_esp -= 4; W32(r_esp, 0x5d90c4u); f_005d8f04();
L_005d90c4:; BB(0x005d90c4);
    /* 005d90c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005d90c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d90c7: ret  */ FN_RET(0x005d9040); r_esp += 4; return;
}

void f_005d90c8(void) /* FUN_005d90c8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d90c8);
    /* 005d90c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d90c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d90cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d90cc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d90cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d90d2: call 0x5e1fc7 */ r_esp -= 4; W32(r_esp, 0x5d90d7u); f_005e1fc7();
    /* 005d90d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d90da: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d90e1: je 0x5d90fa */ if (fZ) goto L_005d90fa;
L_005d90e3:; BB(0x005d90e3);
    /* 005d90e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d90e6: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 005d90ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d90ef: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005d90f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d90f7: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5d90fau); call_ind(t); }
L_005d90fa:; BB(0x005d90fa);
    /* 005d90fa: mov esp, ebp */ r_esp = r_ebp;
    /* 005d90fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d90fd: ret  */ FN_RET(0x005d90c8); r_esp += 4; return;
}

void f_005d90fe(void) /* FUN_005d90fe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d90fe);
    /* 005d90fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d90ff: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9101: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9102: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9105: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d9108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9109: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d910c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d910d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d9110: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9111: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9114: call 0x5e2328 */ r_esp -= 4; W32(r_esp, 0x5d9119u); f_005e2328();
    /* 005d9119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d911b: je 0x5d9124 */ if (fZ) goto L_005d9124;
L_005d911d:; BB(0x005d911d);
    /* 005d911d: mov eax, 1 */ r_eax = 0x1u;
    /* 005d9122: jmp 0x5d915c */ goto L_005d915c;
L_005d9124:; BB(0x005d9124);
    /* 005d9124: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9127: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d912e: je 0x5d915a */ if (fZ) goto L_005d915a;
L_005d9130:; BB(0x005d9130);
    /* 005d9130: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d9133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9134: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d9137: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9138: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d913b: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005d9141: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9144: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005d914a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d914c: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d914fu); call_ind(t); }
    /* 005d914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9151: je 0x5d915a */ if (fZ) goto L_005d915a;
L_005d9153:; BB(0x005d9153);
    /* 005d9153: mov eax, 1 */ r_eax = 0x1u;
    /* 005d9158: jmp 0x5d915c */ goto L_005d915c;
L_005d915a:; BB(0x005d915a);
    /* 005d915a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d915c:; BB(0x005d915c);
    /* 005d915c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d915e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d915f: ret 0xc */ FN_RET(0x005d90fe); r_esp += 16; return;
}

void f_005d9162(void) /* FUN_005d9162 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9162);
    /* 005d9162: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9163: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9165: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9166: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9169: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d916c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d916d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9170: call 0x5d8862 */ r_esp -= 4; W32(r_esp, 0x5d9175u); f_005d8862();
    /* 005d9175: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9178: cmp dword ptr [ecx + 0xcc], 0 */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d917f: je 0x5d91a3 */ if (fZ) goto L_005d91a3;
L_005d9181:; BB(0x005d9181);
    /* 005d9181: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9184: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9187: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 005d918d: cmp ecx, dword ptr [eax + 0xbc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xbcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9193: jl 0x5d91a3 */ if ((fS!=fO)) goto L_005d91a3;
L_005d9195:; BB(0x005d9195);
    /* 005d9195: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9198: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 005d919e: call 0x5e7208 */ r_esp -= 4; W32(r_esp, 0x5d91a3u); f_005e7208();
L_005d91a3:; BB(0x005d91a3);
    /* 005d91a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d91a6: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 005d91ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d91ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d91b0: call 0x5d8f04 */ r_esp -= 4; W32(r_esp, 0x5d91b5u); f_005d8f04();
    /* 005d91b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d91b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91b8: ret 4 */ FN_RET(0x005d9162); r_esp += 8; return;
}

void f_005d91bb(void) /* FUN_005d91bb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d91bb);
    /* 005d91bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d91bc: mov ebp, esp */ r_ebp = r_esp;
    /* 005d91be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d91bf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d91c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d91c5: call 0x5d8990 */ r_esp -= 4; W32(r_esp, 0x5d91cau); f_005d8990();
    /* 005d91ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d91cd: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
    /* 005d91d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d91da: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 005d91e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d91e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d91e4: call 0x5d8f04 */ r_esp -= 4; W32(r_esp, 0x5d91e9u); f_005d8f04();
    /* 005d91e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d91eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91ec: ret  */ FN_RET(0x005d91bb); r_esp += 4; return;
}

void f_005d9219(void) /* FUN_005d9219 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9219);
    /* 005d9219: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d921a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d921c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d921d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9220: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9223: mov dword ptr [eax], 0x63b864 */ W32((u32)(r_eax), 0x63b864u);
    /* 005d9229: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d922c: call 0x5e69b1 */ r_esp -= 4; W32(r_esp, 0x5d9231u); f_005e69b1();
    /* 005d9231: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9233: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9234: ret  */ FN_RET(0x005d9219); r_esp += 4; return;
}

void f_005d9235(void) /* FUN_005d9235 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9235);
    /* 005d9235: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9236: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9238: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9239: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d923c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d923f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9240: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9244: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9247: call 0x5d96ba */ r_esp -= 4; W32(r_esp, 0x5d924cu); f_005d96ba();
    /* 005d924c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d924e: je 0x5d925a */ if (fZ) goto L_005d925a;
L_005d9250:; BB(0x005d9250);
    /* 005d9250: mov eax, 1 */ r_eax = 0x1u;
    /* 005d9255: jmp 0x5d92e3 */ goto L_005d92e3;
L_005d925a:; BB(0x005d925a);
    /* 005d925a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d925d: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9261: je 0x5d9287 */ if (fZ) goto L_005d9287;
L_005d9263:; BB(0x005d9263);
    /* 005d9263: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d9266: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9267: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d926a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d926b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d926e: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005d9271: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9274: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005d9277: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9279: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x5d927cu); call_ind(t); }
    /* 005d927c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d927e: je 0x5d9287 */ if (fZ) goto L_005d9287;
L_005d9280:; BB(0x005d9280);
    /* 005d9280: mov eax, 1 */ r_eax = 0x1u;
    /* 005d9285: jmp 0x5d92e3 */ goto L_005d92e3;
L_005d9287:; BB(0x005d9287);
    /* 005d9287: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d928a: cmp dword ptr [ecx + 0x40], 0 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d928e: je 0x5d92b4 */ if (fZ) goto L_005d92b4;
L_005d9290:; BB(0x005d9290);
    /* 005d9290: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d9293: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9294: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9298: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d929b: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005d929e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d92a1: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005d92a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d92a6: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d92a9u); call_ind(t); }
    /* 005d92a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d92ab: je 0x5d92b4 */ if (fZ) goto L_005d92b4;
L_005d92ad:; BB(0x005d92ad);
    /* 005d92ad: mov eax, 1 */ r_eax = 0x1u;
    /* 005d92b2: jmp 0x5d92e3 */ goto L_005d92e3;
L_005d92b4:; BB(0x005d92b4);
    /* 005d92b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d92b7: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d92bb: je 0x5d92e1 */ if (fZ) goto L_005d92e1;
L_005d92bd:; BB(0x005d92bd);
    /* 005d92bd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d92c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d92c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d92c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d92c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d92c8: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005d92cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d92ce: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005d92d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d92d3: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d92d6u); call_ind(t); }
    /* 005d92d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d92d8: je 0x5d92e1 */ if (fZ) goto L_005d92e1;
L_005d92da:; BB(0x005d92da);
    /* 005d92da: mov eax, 1 */ r_eax = 0x1u;
    /* 005d92df: jmp 0x5d92e3 */ goto L_005d92e3;
L_005d92e1:; BB(0x005d92e1);
    /* 005d92e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d92e3:; BB(0x005d92e3);
    /* 005d92e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d92e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d92e6: ret 8 */ FN_RET(0x005d9235); r_esp += 12; return;
}

void f_005d92e9(void) /* FUN_005d92e9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d92e9);
    /* 005d92e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d92ea: mov ebp, esp */ r_ebp = r_esp;
    /* 005d92ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d92ed: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d92f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d92f3: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005d92f6: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d92fbu); f_005e24af();
    /* 005d92fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d92fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d92fe: ret  */ FN_RET(0x005d92e9); r_esp += 4; return;
}

void f_005d92ff(void) /* FUN_005d92ff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d92ff);
    /* 005d92ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9300: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9302: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9303: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9306: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9309: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005d930c: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 005d9312: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9314: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9315: ret  */ FN_RET(0x005d92ff); r_esp += 4; return;
}

void f_005d9316(void) /* FUN_005d9316 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9316);
    /* 005d9316: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9317: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9319: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d931a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d931d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d9320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9321: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9324: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9325: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9328: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 005d932b: call 0x5d8ebf */ r_esp -= 4; W32(r_esp, 0x5d9330u); f_005d8ebf();
    /* 005d9330: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9332: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9333: ret 8 */ FN_RET(0x005d9316); r_esp += 12; return;
}

void f_005d9336(void) /* FUN_005d9336 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9336);
    /* 005d9336: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9337: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9339: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d933a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d933d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9341: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9344: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 005d9347: call 0x5d8f04 */ r_esp -= 4; W32(r_esp, 0x5d934cu); f_005d8f04();
    /* 005d934c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d934e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d934f: ret 4 */ FN_RET(0x005d9336); r_esp += 8; return;
}

void f_005d9360(void) /* FUN_005d9360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9360);
    /* 005d9360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9361: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9367: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d936a: ret 4 */ FN_RET(0x005d9360); r_esp += 8; return;
}

void f_005d9370(void) /* FUN_005d9370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9370);
    /* 005d9370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9371: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9377: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d937a: call 0x5d86b2 */ r_esp -= 4; W32(r_esp, 0x5d937fu); f_005d86b2();
    /* 005d937f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9382: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d9385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9387: je 0x5d9395 */ if (fZ) goto L_005d9395;
L_005d9389:; BB(0x005d9389);
    /* 005d9389: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d938c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d938d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d9392u); f_0048ac1b();
    /* 005d9392: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d9395:; BB(0x005d9395);
    /* 005d9395: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9398: mov esp, ebp */ r_esp = r_ebp;
    /* 005d939a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d939b: ret 4 */ FN_RET(0x005d9370); r_esp += 8; return;
}

void f_005d93a0(void) /* FUN_005d93a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d93a0);
    /* 005d93a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d93a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d93a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d93a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d93a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d93aa: call 0x5d8a5d */ r_esp -= 4; W32(r_esp, 0x5d93afu); f_005d8a5d();
    /* 005d93af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d93b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d93b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d93b7: je 0x5d93c5 */ if (fZ) goto L_005d93c5;
L_005d93b9:; BB(0x005d93b9);
    /* 005d93b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d93bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d93bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d93c2u); f_0048ac1b();
    /* 005d93c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d93c5:; BB(0x005d93c5);
    /* 005d93c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d93c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d93ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d93cb: ret 4 */ FN_RET(0x005d93a0); r_esp += 8; return;
}

void f_005d93d0(void) /* FUN_005d93d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d93d0);
    /* 005d93d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d93d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d93d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d93d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d93d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d93da: call 0x5d9219 */ r_esp -= 4; W32(r_esp, 0x5d93dfu); f_005d9219();
    /* 005d93df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d93e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d93e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d93e7: je 0x5d93f5 */ if (fZ) goto L_005d93f5;
L_005d93e9:; BB(0x005d93e9);
    /* 005d93e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d93ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d93ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d93f2u); f_0048ac1b();
    /* 005d93f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d93f5:; BB(0x005d93f5);
    /* 005d93f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d93f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d93fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d93fb: ret 4 */ FN_RET(0x005d93d0); r_esp += 8; return;
}

void f_005d9400(void) /* FUN_005d9400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9400);
    /* 005d9400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9401: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d940a: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5d940fu); f_005dfbf0();
    /* 005d940f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9412: mov dword ptr [eax], 0x63b8bc */ W32((u32)(r_eax), 0x63b8bcu);
    /* 005d9418: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d941b: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005d9422: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9425: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005d942c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d942f: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005d9436: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9439: mov byte ptr [ecx + 0x14], 0 */ W8((u32)(r_ecx+0x14u), 0x0u);
    /* 005d943d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9440: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 005d9447: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d944a: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 005d9451: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9454: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 005d945b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d945e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9460: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9461: ret  */ FN_RET(0x005d9400); r_esp += 4; return;
}

void f_005d9462(void) /* FUN_005d9462 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9462);
    /* 005d9462: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9463: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9465: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9466: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9469: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d946c: mov dword ptr [eax], 0x63b8bc */ W32((u32)(r_eax), 0x63b8bcu);
    /* 005d9472: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9475: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5d947au); f_005dfc0f();
    /* 005d947a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d947c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d947d: ret  */ FN_RET(0x005d9462); r_esp += 4; return;
}

void f_005d9480(void) /* FUN_005d9480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9480);
    /* 005d9480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9481: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9487: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d948a: call 0x5d9462 */ r_esp -= 4; W32(r_esp, 0x5d948fu); f_005d9462();
    /* 005d948f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9492: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d9495: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9497: je 0x5d94a5 */ if (fZ) goto L_005d94a5;
L_005d9499:; BB(0x005d9499);
    /* 005d9499: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d949c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d949d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d94a2u); f_0048ac1b();
    /* 005d94a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d94a5:; BB(0x005d94a5);
    /* 005d94a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d94a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d94aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d94ab: ret 4 */ FN_RET(0x005d9480); r_esp += 8; return;
}

void f_005d94b0(void) /* FUN_005d94b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d94b0);
    /* 005d94b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d94b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d94b3: call 0x5d94bf */ r_esp -= 4; W32(r_esp, 0x5d94b8u); f_005d94bf();
    /* 005d94b8: call 0x5d94ce */ r_esp -= 4; W32(r_esp, 0x5d94bdu); f_005d94ce();
    /* 005d94bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d94be: ret  */ FN_RET(0x005d94b0); r_esp += 4; return;
}

void f_005d94bf(void) /* FUN_005d94bf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d94bf);
    /* 005d94bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d94c0: mov ebp, esp */ r_ebp = r_esp;
    /* 005d94c2: mov ecx, 0x6fc3c0 */ r_ecx = 0x6fc3c0u;
    /* 005d94c7: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x5d94ccu); f_005dd290();
    /* 005d94cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d94cd: ret  */ FN_RET(0x005d94bf); r_esp += 4; return;
}

void f_005d94ce(void) /* FUN_005d94ce */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d94ce);
    /* 005d94ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d94cf: mov ebp, esp */ r_ebp = r_esp;
    /* 005d94d1: push 0x5d94e0 */ { u32 v = 0x5d94e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d94d6: call 0x624a90 */ r_esp -= 4; W32(r_esp, 0x5d94dbu); f_00624a90();
    /* 005d94db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d94de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d94df: ret  */ FN_RET(0x005d94ce); r_esp += 4; return;
}

void f_005d94e0(void) /* FUN_005d94e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d94e0);
    /* 005d94e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d94e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d94e3: mov ecx, 0x6fc3c0 */ r_ecx = 0x6fc3c0u;
    /* 005d94e8: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x5d94edu); f_005dd2d3();
    /* 005d94ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d94ee: ret  */ FN_RET(0x005d94e0); r_esp += 4; return;
}

void f_005d94ef(void) /* FUN_005d94ef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d94ef);
    /* 005d94ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d94f0: mov ebp, esp */ r_ebp = r_esp;
    /* 005d94f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d94f3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d94f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d94f9: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5d94feu); f_005dfbf0();
    /* 005d94fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9501: mov dword ptr [eax], 0x63b8c4 */ W32((u32)(r_eax), 0x63b8c4u);
    /* 005d9507: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d950a: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 005d9511: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9514: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 005d951b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d951e: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 005d9525: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9528: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 005d952f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9532: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 005d9539: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d953c: mov dword ptr [eax + 0x24], 1 */ W32((u32)(r_eax+0x24u), 0x1u);
    /* 005d9543: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9546: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005d954d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9550: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005d9557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d955a: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 005d9561: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9564: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9565: mov ecx, 0x6fc3c0 */ r_ecx = 0x6fc3c0u;
    /* 005d956a: call 0x5dd3ac */ r_esp -= 4; W32(r_esp, 0x5d956fu); f_005dd3ac();
    /* 005d956f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9572: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9574: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9575: ret  */ FN_RET(0x005d94ef); r_esp += 4; return;
}

void f_005d9576(void) /* FUN_005d9576 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9576);
    /* 005d9576: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9577: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9579: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d957a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d957d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9580: mov dword ptr [eax], 0x63b8c4 */ W32((u32)(r_eax), 0x63b8c4u);
    /* 005d9586: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9589: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d958d: je 0x5d95a9 */ if (fZ) goto L_005d95a9;
L_005d958f:; BB(0x005d958f);
    /* 005d958f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9592: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9596: je 0x5d95a7 */ if (fZ) goto L_005d95a7;
L_005d9598:; BB(0x005d9598);
    /* 005d9598: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d959b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d959c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d959f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d95a2: call 0x5dfec7 */ r_esp -= 4; W32(r_esp, 0x5d95a7u); f_005dfec7();
L_005d95a7:; BB(0x005d95a7);
    /* 005d95a7: jmp 0x5d95b7 */ goto L_005d95b7;
L_005d95a9:; BB(0x005d95a9);
    /* 005d95a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d95ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d95ad: mov ecx, 0x6fc3c0 */ r_ecx = 0x6fc3c0u;
    /* 005d95b2: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5d95b7u); f_005dd469();
L_005d95b7:; BB(0x005d95b7);
    /* 005d95b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d95ba: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5d95bfu); f_005dfc0f();
    /* 005d95bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005d95c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d95c2: ret  */ FN_RET(0x005d9576); r_esp += 4; return;
}

void f_005d95c3(void) /* FUN_005d95c3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d95c3);
    /* 005d95c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d95c4: mov ebp, esp */ r_ebp = r_esp;
    /* 005d95c6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d95c9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d95cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d95cf: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d95d3: jne 0x5d95ee */ if (!fZ) goto L_005d95ee;
L_005d95d5:; BB(0x005d95d5);
    /* 005d95d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d95d7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d95dd: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d95e0: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d95e3: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d95e8u); f_005dd560();
    /* 005d95e8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d95eb: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_005d95ee:; BB(0x005d95ee);
    /* 005d95ee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d95f1: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d95f5: je 0x5d9639 */ if (fZ) goto L_005d9639;
L_005d95f7:; BB(0x005d95f7);
    /* 005d95f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d95fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d95fb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d95fe: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d9601: call 0x5dfe8c */ r_esp -= 4; W32(r_esp, 0x5d9606u); f_005dfe8c();
    /* 005d9606: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9609: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005d960c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d960f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9611: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9614: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9616: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9619: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5d961cu); call_ind(t); }
    /* 005d961c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d961f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9620: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9623: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9625: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9628: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5d962bu); call_ind(t); }
    /* 005d962b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d962e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d962f: mov ecx, 0x6fc3c0 */ r_ecx = 0x6fc3c0u;
    /* 005d9634: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5d9639u); f_005dd469();
L_005d9639:; BB(0x005d9639);
    /* 005d9639: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d963c: mov dword ptr [edx + 0x28], 1 */ W32((u32)(r_edx+0x28u), 0x1u);
    /* 005d9643: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9645: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9646: ret  */ FN_RET(0x005d95c3); r_esp += 4; return;
}

void f_005d9647(void) /* FUN_005d9647 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9647);
    /* 005d9647: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9648: mov ebp, esp */ r_ebp = r_esp;
    /* 005d964a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d964b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d964e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9651: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9653: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9656: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5d9659u); call_ind(t); }
    /* 005d9659: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d965c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d965d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9660: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9661: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9664: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9666: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9669: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5d966cu); call_ind(t); }
    /* 005d966c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005d966f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9670: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9673: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9675: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9678: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5d967bu); call_ind(t); }
    /* 005d967b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d967d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d967e: ret 0xc */ FN_RET(0x005d9647); r_esp += 16; return;
}

void f_005d9681(void) /* FUN_005d9681 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9681);
    /* 005d9681: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9682: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9684: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9685: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9688: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d968a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d968c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d968d: ret 4 */ FN_RET(0x005d9681); r_esp += 8; return;
}

void f_005d9690(void) /* FUN_005d9690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9690);
    /* 005d9690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9691: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9697: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d969a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d969c: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d96a0: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005d96a3: mov eax, ecx */ r_eax = r_ecx;
    /* 005d96a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d96a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d96a8: ret  */ FN_RET(0x005d9690); r_esp += 4; return;
}

void f_005d96a9(void) /* FUN_005d96a9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d96a9);
    /* 005d96a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d96aa: mov ebp, esp */ r_ebp = r_esp;
    /* 005d96ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d96ad: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d96b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d96b3: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 005d96b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d96b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d96b9: ret  */ FN_RET(0x005d96a9); r_esp += 4; return;
}

void f_005d96ba(void) /* FUN_005d96ba */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d96ba);
    /* 005d96ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d96bb: mov ebp, esp */ r_ebp = r_esp;
    /* 005d96bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d96be: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d96c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d96c4: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5d96c9u); f_005d9690();
    /* 005d96c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d96cb: je 0x5d9700 */ if (fZ) goto L_005d9700;
L_005d96cd:; BB(0x005d96cd);
    /* 005d96cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d96d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d96d3: cmp ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d96d6: jl 0x5d9700 */ if ((fS!=fO)) goto L_005d9700;
L_005d96d8:; BB(0x005d96d8);
    /* 005d96d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d96db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d96de: cmp eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d96e1: jg 0x5d9700 */ if ((!fZ&&fS==fO)) goto L_005d9700;
L_005d96e3:; BB(0x005d96e3);
    /* 005d96e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d96e6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d96e9: cmp edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d96ec: jl 0x5d9700 */ if ((fS!=fO)) goto L_005d9700;
L_005d96ee:; BB(0x005d96ee);
    /* 005d96ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d96f1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d96f4: cmp ecx, dword ptr [eax + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d96f7: jg 0x5d9700 */ if ((!fZ&&fS==fO)) goto L_005d9700;
L_005d96f9:; BB(0x005d96f9);
    /* 005d96f9: mov eax, 1 */ r_eax = 0x1u;
    /* 005d96fe: jmp 0x5d9702 */ goto L_005d9702;
L_005d9700:; BB(0x005d9700);
    /* 005d9700: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d9702:; BB(0x005d9702);
    /* 005d9702: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9705: ret 8 */ FN_RET(0x005d96ba); r_esp += 12; return;
}

void f_005d9708(void) /* FUN_005d9708 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9708);
    /* 005d9708: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9709: mov ebp, esp */ r_ebp = r_esp;
    /* 005d970b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d970c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d970f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9712: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9714: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9717: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d971au); call_ind(t); }
    /* 005d971a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d971b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d971e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9720: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9723: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5d9726u); call_ind(t); }
    /* 005d9726: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9727: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d972a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d972c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d972f: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d9732u); call_ind(t); }
    /* 005d9732: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9734: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9735: ret 4 */ FN_RET(0x005d9708); r_esp += 8; return;
}

void f_005d9738(void) /* FUN_005d9738 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9738);
    /* 005d9738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9739: mov ebp, esp */ r_ebp = r_esp;
    /* 005d973b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d973c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d973f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9742: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d9745: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9746: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d9749: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d974c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d974d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9750: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d9752: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9755: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d9758u); call_ind(t); }
    /* 005d9758: mov esp, ebp */ r_esp = r_ebp;
    /* 005d975a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d975b: ret 4 */ FN_RET(0x005d9738); r_esp += 8; return;
}

void f_005d975e(void) /* FUN_005d975e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d975e);
    /* 005d975e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d975f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9761: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9764: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9765: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d9768: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d976b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d976e: cmp ecx, dword ptr [eax + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9771: jne 0x5d9778 */ if (!fZ) goto L_005d9778;
L_005d9773:; BB(0x005d9773);
    /* 005d9773: jmp 0x5d987c */ goto L_005d987c;
L_005d9778:; BB(0x005d9778);
    /* 005d9778: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d977b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d977e: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005d9781: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9784: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9788: jne 0x5d978f */ if (!fZ) goto L_005d978f;
L_005d978a:; BB(0x005d978a);
    /* 005d978a: jmp 0x5d987c */ goto L_005d987c;
L_005d978f:; BB(0x005d978f);
    /* 005d978f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9792: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9793: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9796: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d9799: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5d979eu); f_005dd469();
    /* 005d979e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005d97a5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005d97ac: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d97af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d97b0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d97b3: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005d97b6: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d97bbu); f_005dd560();
    /* 005d97bb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005d97be:; BB(0x005d97be);
    /* 005d97be: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d97c2: je 0x5d97fd */ if (fZ) goto L_005d97fd;
L_005d97c4:; BB(0x005d97c4);
    /* 005d97c4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d97c7: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5d97ccu); f_005d9883();
    /* 005d97cc: mov esi, eax */ r_esi = r_eax;
    /* 005d97ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d97d1: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5d97d6u); f_005d9883();
    /* 005d97d6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d97d8: jle 0x5d97fd */ if ((fZ||fS!=fO)) goto L_005d97fd;
L_005d97da:; BB(0x005d97da);
    /* 005d97da: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d97dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d97e0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d97e3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d97e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d97e9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d97ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d97ed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d97f0: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d97f3: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d97f8u); f_005dd560();
    /* 005d97f8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d97fb: jmp 0x5d97be */ goto L_005d97be;
L_005d97fd:; BB(0x005d97fd);
    /* 005d97fd: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9801: je 0x5d9818 */ if (fZ) goto L_005d9818;
L_005d9803:; BB(0x005d9803);
    /* 005d9803: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9806: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9807: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d980a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d980b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d980e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d9811: call 0x5dd63a */ r_esp -= 4; W32(r_esp, 0x5d9816u); f_005dd63a();
    /* 005d9816: jmp 0x5d9827 */ goto L_005d9827;
L_005d9818:; BB(0x005d9818);
    /* 005d9818: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d981b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d981c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d981f: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005d9822: call 0x5dd3ac */ r_esp -= 4; W32(r_esp, 0x5d9827u); f_005dd3ac();
L_005d9827:; BB(0x005d9827);
    /* 005d9827: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d982a: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d982e: je 0x5d987c */ if (fZ) goto L_005d987c;
L_005d9830:; BB(0x005d9830);
    /* 005d9830: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9833: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9837: je 0x5d987c */ if (fZ) goto L_005d987c;
L_005d9839:; BB(0x005d9839);
    /* 005d9839: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d983c: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5d9841u); f_005d9690();
    /* 005d9841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9843: je 0x5d987c */ if (fZ) goto L_005d987c;
L_005d9845:; BB(0x005d9845);
    /* 005d9845: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9848: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005d984b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d984c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d984f: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005d9852: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9853: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9856: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d9859: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d985a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d985d: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005d9860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9861: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005d9864: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9865: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5d986bu); call_ind(t); }
    /* 005d986b: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005d986e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d986f: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005d9874: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d9877: call 0x61cf53 */ r_esp -= 4; W32(r_esp, 0x5d987cu); f_0061cf53();
L_005d987c:; BB(0x005d987c);
    /* 005d987c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d987d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d987f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9880: ret 4 */ FN_RET(0x005d975e); r_esp += 8; return;
}

void f_005d9883(void) /* FUN_005d9883 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9883);
    /* 005d9883: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9884: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9886: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9887: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d988a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d988d: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 005d9890: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9892: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9893: ret  */ FN_RET(0x005d9883); r_esp += 4; return;
}

void f_005d9894(void) /* FUN_005d9894 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9894);
    /* 005d9894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9895: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9897: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9898: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d989b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d989d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d989e: ret 4 */ FN_RET(0x005d9894); r_esp += 8; return;
}

void f_005d98a1(void) /* FUN_005d98a1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d98a1);
    /* 005d98a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d98a2: mov ebp, esp */ r_ebp = r_esp;
    /* 005d98a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d98a5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d98a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d98ab: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 005d98ae: mov esp, ebp */ r_esp = r_ebp;
    /* 005d98b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d98b1: ret  */ FN_RET(0x005d98a1); r_esp += 4; return;
}

void f_005d98b2(void) /* FUN_005d98b2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d98b2);
    /* 005d98b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d98b3: mov ebp, esp */ r_ebp = r_esp;
    /* 005d98b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d98b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d98b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d98bc: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 005d98bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005d98c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d98c2: ret  */ FN_RET(0x005d98b2); r_esp += 4; return;
}

void f_005d98c3(void) /* FUN_005d98c3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d98c3);
    /* 005d98c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d98c4: mov ebp, esp */ r_ebp = r_esp;
    /* 005d98c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d98c7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d98ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d98cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d98d0: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 005d98d3: sub eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d98d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d98d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d98d9: ret  */ FN_RET(0x005d98c3); r_esp += 4; return;
}

void f_005d98da(void) /* FUN_005d98da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d98da);
    /* 005d98da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d98db: mov ebp, esp */ r_ebp = r_esp;
    /* 005d98dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d98de: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d98e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d98e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d98e7: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 005d98ea: sub eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d98ed: mov esp, ebp */ r_esp = r_ebp;
    /* 005d98ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d98f0: ret  */ FN_RET(0x005d98da); r_esp += 4; return;
}

void f_005d9916(void) /* FUN_005d9916 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9916);
    /* 005d9916: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9917: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9919: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d991a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d991d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9920: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d9923: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9926: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9929: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 005d992c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d992e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d992f: ret 4 */ FN_RET(0x005d9916); r_esp += 8; return;
}

void f_005d9932(void) /* FUN_005d9932 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9932);
    /* 005d9932: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9933: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9935: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9936: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9939: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d993c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d993f: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9942: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9945: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 005d9948: mov esp, ebp */ r_esp = r_ebp;
    /* 005d994a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d994b: ret 4 */ FN_RET(0x005d9932); r_esp += 8; return;
}

void f_005d994e(void) /* FUN_005d994e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d994e);
    /* 005d994e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d994f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9951: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9954: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d9957: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d995a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d995d: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005d9960: sub edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9963: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d9966: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9969: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d996c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005d996f: sub edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9972: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d9975: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9978: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d997b: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005d997e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9981: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d9984: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005d9987: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d998a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d998b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d998e: call 0x5d9916 */ r_esp -= 4; W32(r_esp, 0x5d9993u); f_005d9916();
    /* 005d9993: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9996: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9997: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d999a: call 0x5d9932 */ r_esp -= 4; W32(r_esp, 0x5d999fu); f_005d9932();
    /* 005d999f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d99a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d99a2: ret 8 */ FN_RET(0x005d994e); r_esp += 12; return;
}

void f_005d99a5(void) /* FUN_005d99a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d99a5);
    /* 005d99a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d99a6: mov ebp, esp */ r_ebp = r_esp;
    /* 005d99a8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d99ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d99ac: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d99af: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d99b2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d99b5: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5d99bau); f_005e06f2();
    /* 005d99ba: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d99bb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d99bd: mov esi, eax */ r_esi = r_eax;
    /* 005d99bf: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005d99c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d99c4: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5d99c9u); f_005d98c3();
    /* 005d99c9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d99ca: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d99cc: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005d99ce: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005d99d0: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 005d99d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d99d6: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d99d9: call 0x5e0709 */ r_esp -= 4; W32(r_esp, 0x5d99deu); f_005e0709();
    /* 005d99de: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d99df: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d99e1: mov esi, eax */ r_esi = r_eax;
    /* 005d99e3: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005d99e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d99e8: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5d99edu); f_005d98da();
    /* 005d99ed: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d99ee: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d99f0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005d99f2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005d99f4: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 005d99f7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d99fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d99fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d99fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d99ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9a02: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d9a04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9a07: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5d9a0au); call_ind(t); }
    /* 005d9a0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9a0b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9a0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9a0e: ret  */ FN_RET(0x005d99a5); r_esp += 4; return;
}

void f_005d9a0f(void) /* FUN_005d9a0f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9a0f);
    /* 005d9a0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a10: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9a12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a13: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9a16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a19: mov dword ptr [eax + 0x24], 1 */ W32((u32)(r_eax+0x24u), 0x1u);
    /* 005d9a20: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9a22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9a23: ret  */ FN_RET(0x005d9a0f); r_esp += 4; return;
}

void f_005d9a24(void) /* FUN_005d9a24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9a24);
    /* 005d9a24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a25: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9a27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a28: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9a2b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a2e: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 005d9a35: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9a37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9a38: ret  */ FN_RET(0x005d9a24); r_esp += 4; return;
}

void f_005d9a39(void) /* FUN_005d9a39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9a39);
    /* 005d9a39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a3a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9a3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a3d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9a40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a43: cmp dword ptr [eax + 0x10], 0x2710 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9a4a: jge 0x5d9a6b */ if ((fS==fO)) goto L_005d9a6b;
L_005d9a4c:; BB(0x005d9a4c);
    /* 005d9a4c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a4f: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005d9a52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a56: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d9a59: add ecx, 0x2710 */ {  u32 a = r_ecx; u32 b = 0x2710u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9a5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a60: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a63: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9a65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a68: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5d9a6bu); call_ind(t); }
L_005d9a6b:; BB(0x005d9a6b);
    /* 005d9a6b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9a6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9a6e: ret  */ FN_RET(0x005d9a39); r_esp += 4; return;
}

void f_005d9a6f(void) /* FUN_005d9a6f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9a6f);
    /* 005d9a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a70: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9a72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a73: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9a76: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a79: cmp dword ptr [eax + 0x10], 0x2710 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9a80: jl 0x5d9aa1 */ if ((fS!=fO)) goto L_005d9aa1;
L_005d9a82:; BB(0x005d9a82);
    /* 005d9a82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a85: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005d9a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a8c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d9a8f: sub ecx, 0x2710 */ {  u32 a = r_ecx; u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9a95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a96: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a99: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9a9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9a9e: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5d9aa1u); call_ind(t); }
L_005d9aa1:; BB(0x005d9aa1);
    /* 005d9aa1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9aa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9aa4: ret  */ FN_RET(0x005d9a6f); r_esp += 4; return;
}

void f_005d9aa5(void) /* FUN_005d9aa5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9aa5);
    /* 005d9aa5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9aa6: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9aa8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9aab: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d9aae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9ab1: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005d9ab4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ab5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9ab8: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005d9abb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9abc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9abf: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005d9ac2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ac3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9ac6: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d9ac9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9aca: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005d9acd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ace: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5d9ad4u); call_ind(t); }
    /* 005d9ad4: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005d9ad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ad8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9adb: call 0x5d9ae4 */ r_esp -= 4; W32(r_esp, 0x5d9ae0u); f_005d9ae4();
    /* 005d9ae0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9ae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9ae3: ret  */ FN_RET(0x005d9aa5); r_esp += 4; return;
}

void f_005d9ae4(void) /* FUN_005d9ae4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9ae4);
    /* 005d9ae4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ae5: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9ae7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ae8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9aeb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9aee: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9af2: je 0x5d9b03 */ if (fZ) goto L_005d9b03;
L_005d9af4:; BB(0x005d9af4);
    /* 005d9af4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9af7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9af8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9afb: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d9afe: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5d9b03u); f_005e087b();
L_005d9b03:; BB(0x005d9b03);
    /* 005d9b03: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9b05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9b06: ret 4 */ FN_RET(0x005d9ae4); r_esp += 8; return;
}

void f_005d9b09(void) /* FUN_005d9b09 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9b09);
    /* 005d9b09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b0a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9b0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b0d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9b10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b13: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9b17: je 0x5d9b30 */ if (fZ) goto L_005d9b30;
L_005d9b19:; BB(0x005d9b19);
    /* 005d9b19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b1c: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5d9b21u); f_005d9aa5();
    /* 005d9b21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b25: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b28: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d9b2b: call 0x5dfec7 */ r_esp -= 4; W32(r_esp, 0x5d9b30u); f_005dfec7();
L_005d9b30:; BB(0x005d9b30);
    /* 005d9b30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9b36: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005d9b39: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b3c: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9b40: je 0x5d9b59 */ if (fZ) goto L_005d9b59;
L_005d9b42:; BB(0x005d9b42);
    /* 005d9b42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b49: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d9b4c: call 0x5dfe8c */ r_esp -= 4; W32(r_esp, 0x5d9b51u); f_005dfe8c();
    /* 005d9b51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b54: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5d9b59u); f_005d9aa5();
L_005d9b59:; BB(0x005d9b59);
    /* 005d9b59: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9b5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9b5c: ret 4 */ FN_RET(0x005d9b09); r_esp += 8; return;
}

void f_005d9b60(void) /* FUN_005d9b60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9b60);
    /* 005d9b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9b63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9b67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b6a: call 0x5d9576 */ r_esp -= 4; W32(r_esp, 0x5d9b6fu); f_005d9576();
    /* 005d9b6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9b72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d9b75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9b77: je 0x5d9b85 */ if (fZ) goto L_005d9b85;
L_005d9b79:; BB(0x005d9b79);
    /* 005d9b79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b7d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d9b82u); f_0048ac1b();
    /* 005d9b82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d9b85:; BB(0x005d9b85);
    /* 005d9b85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b88: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9b8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9b8b: ret 4 */ FN_RET(0x005d9b60); r_esp += 8; return;
}

void f_005d9b90(void) /* FUN_005d9b90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9b90);
    /* 005d9b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b91: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9b93: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9b96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d9b99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9b9c: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5d9ba1u); f_005dfbf0();
    /* 005d9ba1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9ba4: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9ba7: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x5d9bacu); f_005dd290();
    /* 005d9bac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9baf: mov dword ptr [eax], 0x63b90c */ W32((u32)(r_eax), 0x63b90cu);
    /* 005d9bb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9bb8: call 0x5da4b1 */ r_esp -= 4; W32(r_esp, 0x5d9bbdu); f_005da4b1();
    /* 005d9bbd: mov dword ptr [0x6fc3d4], 1 */ W32((u32)(0x6fc3d4u), 0x1u);
    /* 005d9bc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9bca: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 005d9bd1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9bd4: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x5d9bd9u); f_005d9e34();
    /* 005d9bd9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9bdc: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005d9bdf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9be2: mov dword ptr [eax + 0x34], 0xffffffff */ W32((u32)(r_eax+0x34u), 0xffffffffu);
    /* 005d9be9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9bec: mov dword ptr [ecx + 0x38], 0xffffffff */ W32((u32)(r_ecx+0x38u), 0xffffffffu);
    /* 005d9bf3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9bf6: mov dword ptr [edx + 0x3c], 0xffffffff */ W32((u32)(r_edx+0x3cu), 0xffffffffu);
    /* 005d9bfd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9c00: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005d9c07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9c0a: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 005d9c11: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c13: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d9c18u); f_0048ab58();
    /* 005d9c18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9c1b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d9c1e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9c22: je 0x5d9c33 */ if (fZ) goto L_005d9c33;
L_005d9c24:; BB(0x005d9c24);
    /* 005d9c24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9c29: call 0x5e82f0 */ r_esp -= 4; W32(r_esp, 0x5d9c2eu); f_005e82f0();
    /* 005d9c2e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d9c31: jmp 0x5d9c3a */ goto L_005d9c3a;
L_005d9c33:; BB(0x005d9c33);
    /* 005d9c33: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d9c3a:; BB(0x005d9c3a);
    /* 005d9c3a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9c3d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9c40: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005d9c43: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c45: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d9c4au); f_0048ab58();
    /* 005d9c4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9c4d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d9c50: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9c54: je 0x5d9c65 */ if (fZ) goto L_005d9c65;
L_005d9c56:; BB(0x005d9c56);
    /* 005d9c56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c58: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9c5b: call 0x5e82f0 */ r_esp -= 4; W32(r_esp, 0x5d9c60u); f_005e82f0();
    /* 005d9c60: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d9c63: jmp 0x5d9c6c */ goto L_005d9c6c;
L_005d9c65:; BB(0x005d9c65);
    /* 005d9c65: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005d9c6c:; BB(0x005d9c6c);
    /* 005d9c6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9c6f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9c72: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 005d9c75: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9c78: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d9c7b: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 005d9c82: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9c85: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 005d9c8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c8e: push 0x699ac8 */ { u32 v = 0x699ac8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c93: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005d9c98: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005d9c9b: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x5d9ca0u); f_0061ba62();
    /* 005d9ca0: mov dword ptr [0x6f6f20], eax */ W32((u32)(0x6f6f20u), r_eax);
    /* 005d9ca5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ca7: push 0x699ad8 */ { u32 v = 0x699ad8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9cac: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005d9cb2: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 005d9cb5: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x5d9cbau); f_0061ba62();
    /* 005d9cba: mov dword ptr [0x6f6f24], eax */ W32((u32)(0x6f6f24u), r_eax);
    /* 005d9cbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9cc1: push 0x699ae8 */ { u32 v = 0x699ae8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9cc6: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005d9ccc: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005d9ccf: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x5d9cd4u); f_0061ba62();
    /* 005d9cd4: mov dword ptr [0x6f6f28], eax */ W32((u32)(0x6f6f28u), r_eax);
    /* 005d9cd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9cdb: push 0x699afc */ { u32 v = 0x699afcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ce0: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005d9ce5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005d9ce8: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x5d9cedu); f_0061ba62();
    /* 005d9ced: mov dword ptr [0x6f6f2c], eax */ W32((u32)(0x6f6f2cu), r_eax);
    /* 005d9cf2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9cf5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9cf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9cf8: ret  */ FN_RET(0x005d9b90); r_esp += 4; return;
}

void f_005d9cf9(void) /* FUN_005d9cf9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9cf9);
    /* 005d9cf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9cfa: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9cfc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9cff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d9d02: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9d05: mov dword ptr [eax], 0x63b90c */ W32((u32)(r_eax), 0x63b90cu);
    /* 005d9d0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9d10: call 0x5da14d */ r_esp -= 4; W32(r_esp, 0x5d9d15u); f_005da14d();
    /* 005d9d15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d17: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9d1a: call 0x5da082 */ r_esp -= 4; W32(r_esp, 0x5d9d1fu); f_005da082();
    /* 005d9d1f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9d22: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005d9d25: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d9d28: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9d2b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d9d2e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9d32: je 0x5d9d45 */ if (fZ) goto L_005d9d45;
L_005d9d34:; BB(0x005d9d34);
    /* 005d9d34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9d39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d9d3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9d3e: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d9d40u); call_ind(t); }
    /* 005d9d40: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d9d43: jmp 0x5d9d4c */ goto L_005d9d4c;
L_005d9d45:; BB(0x005d9d45);
    /* 005d9d45: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005d9d4c:; BB(0x005d9d4c);
    /* 005d9d4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9d4f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d9d52: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d9d55: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9d58: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d9d5b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9d5f: je 0x5d9d72 */ if (fZ) goto L_005d9d72;
L_005d9d61:; BB(0x005d9d61);
    /* 005d9d61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d63: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9d66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9d68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9d6b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d9d6du); call_ind(t); }
    /* 005d9d6d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d9d70: jmp 0x5d9d79 */ goto L_005d9d79;
L_005d9d72:; BB(0x005d9d72);
    /* 005d9d72: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005d9d79:; BB(0x005d9d79);
    /* 005d9d79: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9d7c: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9d7f: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x5d9d84u); f_005dd2d3();
    /* 005d9d84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9d87: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5d9d8cu); f_005dfc0f();
    /* 005d9d8c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9d8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9d8f: ret  */ FN_RET(0x005d9cf9); r_esp += 4; return;
}

void f_005d9d90(void) /* FUN_005d9d90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9d90);
    /* 005d9d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d91: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9d97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9d9a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9d9d: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 005d9da0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9da2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9da3: ret 4 */ FN_RET(0x005d9d90); r_esp += 8; return;
}

void f_005d9da6(void) /* FUN_005d9da6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9da6);
    /* 005d9da6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9da7: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9da9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9daa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9dad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9db0: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 005d9db3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9db5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9db6: ret  */ FN_RET(0x005d9da6); r_esp += 4; return;
}

void f_005d9db7(void) /* FUN_005d9db7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9db7);
    /* 005d9db7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9db8: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9dba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9dbb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9dbe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9dc1: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9dc5: je 0x5d9df9 */ if (fZ) goto L_005d9df9;
L_005d9dc7:; BB(0x005d9dc7);
    /* 005d9dc7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9dca: cmp dword ptr [ecx + 0x18], 0x15 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9dce: je 0x5d9de2 */ if (fZ) goto L_005d9de2;
L_005d9dd0:; BB(0x005d9dd0);
    /* 005d9dd0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d9dd3: cmp dword ptr [edx + 0x18], 0x16 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9dd7: je 0x5d9de2 */ if (fZ) goto L_005d9de2;
L_005d9dd9:; BB(0x005d9dd9);
    /* 005d9dd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9ddc: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9de0: jne 0x5d9df9 */ if (!fZ) goto L_005d9df9;
L_005d9de2:; BB(0x005d9de2);
    /* 005d9de2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9de5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9de6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9de9: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005d9dec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9def: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005d9df2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9df4: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5d9df7u); call_ind(t); }
    /* 005d9df7: jmp 0x5d9e17 */ goto L_005d9e17;
L_005d9df9:; BB(0x005d9df9);
    /* 005d9df9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9dfc: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9e00: je 0x5d9e17 */ if (fZ) goto L_005d9e17;
L_005d9e02:; BB(0x005d9e02);
    /* 005d9e02: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d9e05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9e09: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d9e0c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9e0f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d9e12: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9e14: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d9e17u); call_ind(t); }
L_005d9e17:; BB(0x005d9e17);
    /* 005d9e17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9e1a: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d9e1d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9e1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9e20: ret 4 */ FN_RET(0x005d9db7); r_esp += 8; return;
}

void f_005d9e23(void) /* FUN_005d9e23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9e23);
    /* 005d9e23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e24: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9e26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e27: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9e2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9e2d: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 005d9e30: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9e32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9e33: ret  */ FN_RET(0x005d9e23); r_esp += 4; return;
}

void f_005d9e34(void) /* FUN_005d9e34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9e34);
    /* 005d9e34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e35: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9e37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e38: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9e3b: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005d9e40: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d9e43: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005d9e49: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d9e4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9e4e: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5d9e51u); call_ind(t); }
    /* 005d9e51: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9e53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9e54: ret  */ FN_RET(0x005d9e34); r_esp += 4; return;
}

void f_005d9e55(void) /* FUN_005d9e55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9e55);
    /* 005d9e55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e56: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9e58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e59: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9e5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9e5f: call 0x5d9f7e */ r_esp -= 4; W32(r_esp, 0x5d9e64u); f_005d9f7e();
L_005d9e64:; BB(0x005d9e64);
    /* 005d9e64: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9e67: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9e6b: jne 0x5d9e7a */ if (!fZ) goto L_005d9e7a;
L_005d9e6d:; BB(0x005d9e6d);
    /* 005d9e6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9e70: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d9e72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9e75: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5d9e78u); call_ind(t); }
    /* 005d9e78: jmp 0x5d9e64 */ goto L_005d9e64;
L_005d9e7a:; BB(0x005d9e7a);
    /* 005d9e7a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9e7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9e7d: ret  */ FN_RET(0x005d9e55); r_esp += 4; return;
}

void f_005d9e7e(void) /* FUN_005d9e7e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9e7e);
    /* 005d9e7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e7f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9e81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e82: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9e85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9e88: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005d9e8b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9e8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9e8e: ret  */ FN_RET(0x005d9e7e); r_esp += 4; return;
}

void f_005d9e8f(void) /* FUN_005d9e8f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9e8f);
    /* 005d9e8f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e90: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9e92: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9e98: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005d9e9e: cmp dword ptr [0x6fc474], 0 */ {  u32 a = R32((u32)(0x6fc474u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9ea5: je 0x5d9eae */ if (fZ) goto L_005d9eae;
L_005d9ea7:; BB(0x005d9ea7);
    /* 005d9ea7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d9ea9: jmp 0x5d9f78 */ goto L_005d9f78;
L_005d9eae:; BB(0x005d9eae);
    /* 005d9eae: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005d9eb4: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9eb8: jne 0x5d9ec0 */ if (!fZ) goto L_005d9ec0;
L_005d9eba:; BB(0x005d9eba);
    /* 005d9eba: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9ebe: je 0x5d9ecf */ if (fZ) goto L_005d9ecf;
L_005d9ec0:; BB(0x005d9ec0);
    /* 005d9ec0: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005d9ec6: mov dword ptr [ecx + 0x2c], 1 */ W32((u32)(r_ecx+0x2cu), 0x1u);
    /* 005d9ecd: jmp 0x5d9f41 */ goto L_005d9f41;
L_005d9ecf:; BB(0x005d9ecf);
    /* 005d9ecf: mov edx, dword ptr [0x68712c] */ r_edx = R32((u32)(0x68712cu));
    /* 005d9ed5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ed6: push 0x699b10 */ { u32 v = 0x699b10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9edb: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 005d9ede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9edf: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5d9ee4u); f_00624050();
    /* 005d9ee4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9ee7: push 0x2024 */ { u32 v = 0x2024u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9eec: push 0x699b34 */ { u32 v = 0x699b34u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ef1: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 005d9ef4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ef7: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5d9efcu); f_0060f9f3();
    /* 005d9efc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9eff: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9f02: jne 0x5d9f41 */ if (!fZ) goto L_005d9f41;
L_005d9f04:; BB(0x005d9f04);
    /* 005d9f04: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005d9f0a: cmp dword ptr [edx + 0x3c], 0x232c */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x232cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9f11: je 0x5d9f34 */ if (fZ) goto L_005d9f34;
L_005d9f13:; BB(0x005d9f13);
    /* 005d9f13: cmp dword ptr [0x6f6f30], 0 */ {  u32 a = R32((u32)(0x6f6f30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9f1a: jne 0x5d9f34 */ if (!fZ) goto L_005d9f34;
L_005d9f1c:; BB(0x005d9f1c);
    /* 005d9f1c: push 0x232c */ { u32 v = 0x232cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f21: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005d9f27: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9f29: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005d9f2f: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d9f32u); call_ind(t); }
    /* 005d9f32: jmp 0x5d9f41 */ goto L_005d9f41;
L_005d9f34:; BB(0x005d9f34);
    /* 005d9f34: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005d9f3a: mov dword ptr [eax + 0x2c], 1 */ W32((u32)(r_eax+0x2cu), 0x1u);
L_005d9f41:; BB(0x005d9f41);
    /* 005d9f41: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005d9f47: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9f4b: jne 0x5d9f68 */ if (!fZ) goto L_005d9f68;
L_005d9f4d:; BB(0x005d9f4d);
    /* 005d9f4d: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005d9f53: cmp dword ptr [edx + 0x34], 0x232c */ {  u32 a = R32((u32)(r_edx+0x34u)); u32 b = 0x232cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9f5a: je 0x5d9f68 */ if (fZ) goto L_005d9f68;
L_005d9f5c:; BB(0x005d9f5c);
    /* 005d9f5c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 005d9f66: jmp 0x5d9f72 */ goto L_005d9f72;
L_005d9f68:; BB(0x005d9f68);
    /* 005d9f68: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
L_005d9f72:; BB(0x005d9f72);
    /* 005d9f72: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
L_005d9f78:; BB(0x005d9f78);
    /* 005d9f78: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9f7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9f7b: ret 4 */ FN_RET(0x005d9e8f); r_esp += 8; return;
}

void f_005d9f7e(void) /* FUN_005d9f7e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9f7e);
    /* 005d9f7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f7f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9f81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f82: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9f85: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9f87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9f88: ret  */ FN_RET(0x005d9f7e); r_esp += 4; return;
}

void f_005d9f89(void) /* FUN_005d9f89 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9f89);
    /* 005d9f89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f8a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9f8c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9f8f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9f92: mov eax, dword ptr [0x6fc3dc] */ r_eax = R32((u32)(0x6fc3dcu));
    /* 005d9f97: mov dword ptr [0x6fc3d8], eax */ W32((u32)(0x6fc3d8u), r_eax);
    /* 005d9f9c: call dword ptr [0x633290] */ { u32 t = R32((u32)(0x633290u)); r_esp -= 4; W32(r_esp, 0x5d9fa2u); call_ind(t); }
    /* 005d9fa2: mov dword ptr [0x6f5324], eax */ W32((u32)(0x6f5324u), r_eax);
    /* 005d9fa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9faa: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x5d9fafu); f_005d9e34();
    /* 005d9faf: mov dword ptr [0x6fc3dc], eax */ W32((u32)(0x6fc3dcu), r_eax);
    /* 005d9fb4: mov ecx, dword ptr [0x6fc3dc] */ r_ecx = R32((u32)(0x6fc3dcu));
    /* 005d9fba: cmp ecx, dword ptr [0x6fc3d8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x6fc3d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9fc0: jne 0x5d9fc7 */ if (!fZ) goto L_005d9fc7;
L_005d9fc2:; BB(0x005d9fc2);
    /* 005d9fc2: jmp 0x5da07e */ goto L_005da07e;
L_005d9fc7:; BB(0x005d9fc7);
    /* 005d9fc7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9fca: mov eax, dword ptr [0x6fc3dc] */ r_eax = R32((u32)(0x6fc3dcu));
    /* 005d9fcf: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005d9fd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9fd5: cmp dword ptr [ecx + 0x34], -1 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9fd9: je 0x5d9fea */ if (fZ) goto L_005d9fea;
L_005d9fdb:; BB(0x005d9fdb);
    /* 005d9fdb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9fde: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005d9fe1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9fe2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9fe5: call 0x5da10f */ r_esp -= 4; W32(r_esp, 0x5d9feau); f_005da10f();
L_005d9fea:; BB(0x005d9fea);
    /* 005d9fea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9fed: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9ff1: je 0x5d9ffe */ if (fZ) goto L_005d9ffe;
L_005d9ff3:; BB(0x005d9ff3);
    /* 005d9ff3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9ff6: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005d9ff9: call 0x5e63c5 */ r_esp -= 4; W32(r_esp, 0x5d9ffeu); f_005e63c5();
L_005d9ffe:; BB(0x005d9ffe);
    /* 005d9ffe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da001: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da005: je 0x5da042 */ if (fZ) goto L_005da042;
L_005da007:; BB(0x005da007);
    /* 005da007: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da00a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005da00d: call 0x5e5f8e */ r_esp -= 4; W32(r_esp, 0x5da012u); f_005e5f8e();
    /* 005da012: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da014: je 0x5da031 */ if (fZ) goto L_005da031;
L_005da016:; BB(0x005da016);
    /* 005da016: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da019: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005da01c: call 0x5e5f8e */ r_esp -= 4; W32(r_esp, 0x5da021u); f_005e5f8e();
    /* 005da021: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005da024: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da027: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da029: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da02c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5da02fu); call_ind(t); }
    /* 005da02f: jmp 0x5da042 */ goto L_005da042;
L_005da031:; BB(0x005da031);
    /* 005da031: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da034: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005da037: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da03a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005da03d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da03f: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5da042u); call_ind(t); }
L_005da042:; BB(0x005da042);
    /* 005da042: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da049: je 0x5da056 */ if (fZ) goto L_005da056;
L_005da04b:; BB(0x005da04b);
    /* 005da04b: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005da051: call 0x5ebcfa */ r_esp -= 4; W32(r_esp, 0x5da056u); f_005ebcfa();
L_005da056:; BB(0x005da056);
    /* 005da056: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005da05b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da05d: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da063: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5da066u); call_ind(t); }
    /* 005da066: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005da06b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005da06e: call 0x61d4b3 */ r_esp -= 4; W32(r_esp, 0x5da073u); f_0061d4b3();
    /* 005da073: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da079: call 0x402f6c */ r_esp -= 4; W32(r_esp, 0x5da07eu); f_00402f6c();
L_005da07e:; BB(0x005da07e);
    /* 005da07e: mov esp, ebp */ r_esp = r_ebp;
    /* 005da080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da081: ret  */ FN_RET(0x005d9f89); r_esp += 4; return;
}

void f_005da082(void) /* FUN_005da082 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da082);
    /* 005da082: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da083: mov ebp, esp */ r_ebp = r_esp;
    /* 005da085: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da088: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005da08b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da08e: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da092: je 0x5da0c1 */ if (fZ) goto L_005da0c1;
L_005da094:; BB(0x005da094);
    /* 005da094: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da097: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005da09a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005da09d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da0a0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005da0a3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da0a7: je 0x5da0ba */ if (fZ) goto L_005da0ba;
L_005da0a9:; BB(0x005da0a9);
    /* 005da0a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005da0ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da0ae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005da0b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da0b3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5da0b5u); call_ind(t); }
    /* 005da0b5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005da0b8: jmp 0x5da0c1 */ goto L_005da0c1;
L_005da0ba:; BB(0x005da0ba);
    /* 005da0ba: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005da0c1:; BB(0x005da0c1);
    /* 005da0c1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da0c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da0c7: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 005da0ca: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da0cd: cmp dword ptr [edx + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da0d1: je 0x5da0e2 */ if (fZ) goto L_005da0e2;
L_005da0d3:; BB(0x005da0d3);
    /* 005da0d3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da0d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da0d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da0da: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005da0dd: call 0x5e624a */ r_esp -= 4; W32(r_esp, 0x5da0e2u); f_005e624a();
L_005da0e2:; BB(0x005da0e2);
    /* 005da0e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005da0e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da0e5: ret 4 */ FN_RET(0x005da082); r_esp += 8; return;
}

void f_005da0e8(void) /* FUN_005da0e8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da0e8);
    /* 005da0e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da0e9: mov ebp, esp */ r_ebp = r_esp;
    /* 005da0eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da0ec: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da0ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da0f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da0f5: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 005da0f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005da0fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da0fb: ret 4 */ FN_RET(0x005da0e8); r_esp += 8; return;
}

void f_005da0fe(void) /* FUN_005da0fe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da0fe);
    /* 005da0fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da0ff: mov ebp, esp */ r_ebp = r_esp;
    /* 005da101: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da102: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da105: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da108: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 005da10b: mov esp, ebp */ r_esp = r_ebp;
    /* 005da10d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da10e: ret  */ FN_RET(0x005da0fe); r_esp += 4; return;
}

void f_005da10f(void) /* FUN_005da10f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da10f);
    /* 005da10f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da110: mov ebp, esp */ r_ebp = r_esp;
    /* 005da112: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da113: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da116: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da119: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da11c: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005da11f: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005da122: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da125: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da128: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 005da12b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da12e: mov dword ptr [edx + 0x34], 0xffffffff */ W32((u32)(r_edx+0x34u), 0xffffffffu);
    /* 005da135: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da138: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005da13b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da13c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da13f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005da141: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da144: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x5da147u); call_ind(t); }
    /* 005da147: mov esp, ebp */ r_esp = r_ebp;
    /* 005da149: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da14a: ret 4 */ FN_RET(0x005da10f); r_esp += 8; return;
}

void f_005da14d(void) /* FUN_005da14d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da14d);
    /* 005da14d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da14e: mov ebp, esp */ r_ebp = r_esp;
    /* 005da150: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da153: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da154: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005da157: mov byte ptr [ebp - 0x28], 0 */ W8((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005da15b: mov byte ptr [ebp - 0x27], 0 */ W8((u32)(r_ebp+0xffffffd9u), 0x0u);
    /* 005da15f: mov byte ptr [ebp - 0x26], 0 */ W8((u32)(r_ebp+0xffffffdau), 0x0u);
    /* 005da163: mov byte ptr [ebp - 0x25], 0xff */ W8((u32)(r_ebp+0xffffffdbu), 0xffu);
    /* 005da167: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005da169: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005da16c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da16d: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da172: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 005da177: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da179: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da17b: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da181: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005da184: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005da187: call 0x45aad0 */ r_esp -= 4; W32(r_esp, 0x5da18cu); f_0045aad0();
    /* 005da18c: push 0x4e8 */ { u32 v = 0x4e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005da191: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005da193: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005da198: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005da19b: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x5da1a0u); f_005ba399();
    /* 005da1a0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005da1a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1a7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005da1aa: call 0x60c0d5 */ r_esp -= 4; W32(r_esp, 0x5da1afu); f_0060c0d5();
    /* 005da1af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da1b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1b4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005da1b7: call 0x60c0a4 */ r_esp -= 4; W32(r_esp, 0x5da1bcu); f_0060c0a4();
    /* 005da1bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da1bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1c1: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005da1c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da1c5: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5da1cbu); call_ind(t); }
    /* 005da1cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1cf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005da1d2: call 0x60c0d5 */ r_esp -= 4; W32(r_esp, 0x5da1d7u); f_0060c0d5();
    /* 005da1d7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005da1d8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da1da: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005da1dc: mov esi, 0xf0 */ r_esi = 0xf0u;
    /* 005da1e1: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005da1e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1e7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005da1ea: call 0x60c0d5 */ r_esp -= 4; W32(r_esp, 0x5da1efu); f_0060c0d5();
    /* 005da1ef: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005da1f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da1f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da1f6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005da1f9: call 0x60c0a4 */ r_esp -= 4; W32(r_esp, 0x5da1feu); f_0060c0a4();
    /* 005da1fe: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005da1ff: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da201: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005da203: mov esi, 0x140 */ r_esi = 0x140u;
    /* 005da208: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005da20a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da20c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da20e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005da211: call 0x60c0a4 */ r_esp -= 4; W32(r_esp, 0x5da216u); f_0060c0a4();
    /* 005da216: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005da218: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da219: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da21b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da21d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005da220: call 0x60c0d5 */ r_esp -= 4; W32(r_esp, 0x5da225u); f_0060c0d5();
    /* 005da225: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005da226: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da228: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005da22a: mov edx, 0xf0 */ r_edx = 0xf0u;
    /* 005da22f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005da231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da232: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da234: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da236: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005da239: call 0x60c0a4 */ r_esp -= 4; W32(r_esp, 0x5da23eu); f_0060c0a4();
    /* 005da23e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005da23f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da241: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005da243: mov ecx, 0x140 */ r_ecx = 0x140u;
    /* 005da248: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005da24a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da24b: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005da24e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da24f: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5da255u); call_ind(t); }
    /* 005da255: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da258: mov eax, esp */ r_eax = r_esp;
    /* 005da25a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005da25d: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005da25f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005da262: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005da265: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da268: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005da26b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005da26e: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005da271: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da274: mov eax, esp */ r_eax = r_esp;
    /* 005da276: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005da279: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005da27b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da27e: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005da281: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da284: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005da287: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da28a: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005da28d: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005da292: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005da295: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005da298: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da299: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da29b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da29d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005da2a0: call 0x60c16b */ r_esp -= 4; W32(r_esp, 0x5da2a5u); f_0060c16b();
    /* 005da2a5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005da2a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da2a9: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da2af: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005da2b2: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x5da2b7u); f_005ba79b();
    /* 005da2b7: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da2bc: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 005da2c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da2c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da2c5: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 005da2c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da2c9: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5da2cfu); call_ind(t); }
    /* 005da2cf: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005da2d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da2d3: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da2d9: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005da2dc: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005da2e2: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005da2e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da2e7: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5da2eau); call_ind(t); }
    /* 005da2ea: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005da2ed: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da2f1: je 0x5da3b9 */ if (fZ) goto L_005da3b9;
L_005da2f7:; BB(0x005da2f7);
    /* 005da2f7: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da2fd: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da301: je 0x5da32b */ if (fZ) goto L_005da32b;
L_005da303:; BB(0x005da303);
    /* 005da303: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005da305: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005da307: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005da30d: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005da310: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005da315: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005da318: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005da31a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5da31du); call_ind(t); }
    /* 005da31d: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da323: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005da326: call 0x600259 */ r_esp -= 4; W32(r_esp, 0x5da32bu); f_00600259();
L_005da32b:; BB(0x005da32b);
    /* 005da32b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005da32e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005da331: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005da334: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005da337: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005da33a: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da33e: je 0x5da351 */ if (fZ) goto L_005da351;
L_005da340:; BB(0x005da340);
    /* 005da340: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005da342: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005da345: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005da347: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005da34a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5da34cu); call_ind(t); }
    /* 005da34c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005da34f: jmp 0x5da358 */ goto L_005da358;
L_005da351:; BB(0x005da351);
    /* 005da351: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005da358:; BB(0x005da358);
    /* 005da358: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005da35b: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
L_005da362:; BB(0x005da362);
    /* 005da362: mov ecx, 0x6fc3c0 */ r_ecx = 0x6fc3c0u;
    /* 005da367: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5da36cu); f_005dd4d2();
    /* 005da36c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da36e: je 0x5da3b9 */ if (fZ) goto L_005da3b9;
L_005da370:; BB(0x005da370);
    /* 005da370: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da372: mov ecx, 0x6fc3c0 */ r_ecx = 0x6fc3c0u;
    /* 005da377: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5da37cu); f_005dd560();
    /* 005da37c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005da37f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005da382: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da383: mov ecx, 0x6fc3c0 */ r_ecx = 0x6fc3c0u;
    /* 005da388: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5da38du); f_005dd469();
    /* 005da38d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005da390: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005da393: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005da396: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005da399: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da39d: je 0x5da3b0 */ if (fZ) goto L_005da3b0;
L_005da39f:; BB(0x005da39f);
    /* 005da39f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005da3a1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005da3a4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005da3a6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005da3a9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5da3abu); call_ind(t); }
    /* 005da3ab: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005da3ae: jmp 0x5da3b7 */ goto L_005da3b7;
L_005da3b0:; BB(0x005da3b0);
    /* 005da3b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005da3b7:; BB(0x005da3b7);
    /* 005da3b7: jmp 0x5da362 */ goto L_005da362;
L_005da3b9:; BB(0x005da3b9);
    /* 005da3b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da3bb: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da3c1: call 0x6102d3 */ r_esp -= 4; W32(r_esp, 0x5da3c6u); f_006102d3();
    /* 005da3c6: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da3cc: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005da3cf: call 0x61d33f */ r_esp -= 4; W32(r_esp, 0x5da3d4u); f_0061d33f();
    /* 005da3d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da3d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005da3d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da3d8: ret 4 */ FN_RET(0x005da14d); r_esp += 8; return;
}

void f_005da3db(void) /* FUN_005da3db */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da3db);
    /* 005da3db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da3dc: mov ebp, esp */ r_ebp = r_esp;
    /* 005da3de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da3df: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da3e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da3e5: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 005da3e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005da3ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da3eb: ret  */ FN_RET(0x005da3db); r_esp += 4; return;
}

void f_005da3ec(void) /* FUN_005da3ec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da3ec);
    /* 005da3ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da3ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005da3ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da3f0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da3f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da3f6: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 005da3f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005da3fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da3fc: ret  */ FN_RET(0x005da3ec); r_esp += 4; return;
}

void f_005da3fd(void) /* FUN_005da3fd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da3fd);
    /* 005da3fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da3fe: mov ebp, esp */ r_ebp = r_esp;
    /* 005da400: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da401: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da404: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da407: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da40a: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 005da40d: mov esp, ebp */ r_esp = r_ebp;
    /* 005da40f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da410: ret 4 */ FN_RET(0x005da3fd); r_esp += 8; return;
}

void f_005da413(void) /* FUN_005da413 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da413);
    /* 005da413: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da414: mov ebp, esp */ r_ebp = r_esp;
    /* 005da416: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da41c: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 005da422: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da426: je 0x5da468 */ if (fZ) goto L_005da468;
L_005da428:; BB(0x005da428);
    /* 005da428: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da42b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da42c: mov ecx, dword ptr [0x687130] */ r_ecx = R32((u32)(0x687130u));
    /* 005da432: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da433: push 0x699b40 */ { u32 v = 0x699b40u; r_esp -= 4; W32(r_esp, v); }
    /* 005da438: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 005da43e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da43f: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x5da445u); call_ind(t); }
    /* 005da445: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da448: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005da44e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da44f: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da455: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005da458: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005da45e: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005da461: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da463: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5da466u); call_ind(t); }
    /* 005da466: jmp 0x5da485 */ goto L_005da485;
L_005da468:; BB(0x005da468);
    /* 005da468: mov eax, dword ptr [0x687130] */ r_eax = R32((u32)(0x687130u));
    /* 005da46d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da46e: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da474: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005da477: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005da47d: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005da480: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da482: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5da485u); call_ind(t); }
L_005da485:; BB(0x005da485);
    /* 005da485: mov esp, ebp */ r_esp = r_ebp;
    /* 005da487: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da488: ret 4 */ FN_RET(0x005da413); r_esp += 8; return;
}

void f_005da48b(void) /* FUN_005da48b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da48b);
    /* 005da48b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da48c: mov ebp, esp */ r_ebp = r_esp;
    /* 005da48e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da48f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da492: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da495: mov dword ptr [eax + 0x40], 1 */ W32((u32)(r_eax+0x40u), 0x1u);
    /* 005da49c: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da4a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005da4a4: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da4aa: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5da4adu); call_ind(t); }
    /* 005da4ad: mov esp, ebp */ r_esp = r_ebp;
    /* 005da4af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da4b0: ret  */ FN_RET(0x005da48b); r_esp += 4; return;
}

void f_005da4b1(void) /* FUN_005da4b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da4b1);
    /* 005da4b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da4b2: mov ebp, esp */ r_ebp = r_esp;
    /* 005da4b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da4b5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da4b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da4bb: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 005da4c2: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da4c8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005da4ca: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005da4d0: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5da4d3u); call_ind(t); }
    /* 005da4d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005da4d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da4d6: ret  */ FN_RET(0x005da4b1); r_esp += 4; return;
}

void f_005da4e0(void) /* FUN_005da4e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da4e0);
    /* 005da4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005da4e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da4e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da4e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da4ea: call 0x5d9cf9 */ r_esp -= 4; W32(r_esp, 0x5da4efu); f_005d9cf9();
    /* 005da4ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da4f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005da4f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da4f7: je 0x5da505 */ if (fZ) goto L_005da505;
L_005da4f9:; BB(0x005da4f9);
    /* 005da4f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da4fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da4fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5da502u); f_0048ac1b();
    /* 005da502: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005da505:; BB(0x005da505);
    /* 005da505: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da508: mov esp, ebp */ r_esp = r_ebp;
    /* 005da50a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da50b: ret 4 */ FN_RET(0x005da4e0); r_esp += 8; return;
}

void f_005da510(void) /* FUN_005da510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da510);
    /* 005da510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da511: mov ebp, esp */ r_ebp = r_esp;
    /* 005da513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da517: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da51a: call 0x5d94ef */ r_esp -= 4; W32(r_esp, 0x5da51fu); f_005d94ef();
    /* 005da51f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da522: mov dword ptr [eax], 0x63b924 */ W32((u32)(r_eax), 0x63b924u);
    /* 005da528: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da52b: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 005da532: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da535: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 005da53c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da53f: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 005da546: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da549: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 005da550: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da553: mov dword ptr [edx + 0x48], 0xffffffff */ W32((u32)(r_edx+0x48u), 0xffffffffu);
    /* 005da55a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da55d: mov cl, byte ptr [0x68709a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x68709au))) & 0xffu);
    /* 005da563: mov byte ptr [eax + 0x2e], cl */ W8((u32)(r_eax+0x2eu), (u8)r_ecx);
    /* 005da566: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da569: mov al, byte ptr [0x687099] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x687099u))) & 0xffu);
    /* 005da56e: mov byte ptr [edx + 0x2d], al */ W8((u32)(r_edx+0x2du), (u8)r_eax);
    /* 005da571: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da574: mov dl, byte ptr [0x687098] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x687098u))) & 0xffu);
    /* 005da57a: mov byte ptr [ecx + 0x2c], dl */ W8((u32)(r_ecx+0x2cu), (u8)r_edx);
    /* 005da57d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da580: mov cl, byte ptr [0x68709e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x68709eu))) & 0xffu);
    /* 005da586: mov byte ptr [eax + 0x32], cl */ W8((u32)(r_eax+0x32u), (u8)r_ecx);
    /* 005da589: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da58c: mov al, byte ptr [0x68709d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x68709du))) & 0xffu);
    /* 005da591: mov byte ptr [edx + 0x31], al */ W8((u32)(r_edx+0x31u), (u8)r_eax);
    /* 005da594: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da597: mov dl, byte ptr [0x68709c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x68709cu))) & 0xffu);
    /* 005da59d: mov byte ptr [ecx + 0x30], dl */ W8((u32)(r_ecx+0x30u), (u8)r_edx);
    /* 005da5a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da5a3: mov cl, byte ptr [0x6870a2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x6870a2u))) & 0xffu);
    /* 005da5a9: mov byte ptr [eax + 0x36], cl */ W8((u32)(r_eax+0x36u), (u8)r_ecx);
    /* 005da5ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da5af: mov al, byte ptr [0x6870a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6870a1u))) & 0xffu);
    /* 005da5b4: mov byte ptr [edx + 0x35], al */ W8((u32)(r_edx+0x35u), (u8)r_eax);
    /* 005da5b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da5ba: mov dl, byte ptr [0x6870a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x6870a0u))) & 0xffu);
    /* 005da5c0: mov byte ptr [ecx + 0x34], dl */ W8((u32)(r_ecx+0x34u), (u8)r_edx);
    /* 005da5c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da5c6: mov esp, ebp */ r_esp = r_ebp;
    /* 005da5c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da5c9: ret  */ FN_RET(0x005da510); r_esp += 4; return;
}

void f_005da5ca(void) /* FUN_005da5ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da5ca);
    /* 005da5ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da5cb: mov ebp, esp */ r_ebp = r_esp;
    /* 005da5cd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da5d0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005da5d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da5d6: mov dword ptr [eax], 0x63b924 */ W32((u32)(r_eax), 0x63b924u);
    /* 005da5dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da5df: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da5e3: je 0x5da5fa */ if (fZ) goto L_005da5fa;
L_005da5e5:; BB(0x005da5e5);
    /* 005da5e5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da5e8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005da5eb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005da5ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da5f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da5f2: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5da5f7u); f_0048ac1b();
    /* 005da5f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005da5fa:; BB(0x005da5fa);
    /* 005da5fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da5fd: call 0x5d9576 */ r_esp -= 4; W32(r_esp, 0x5da602u); f_005d9576();
    /* 005da602: mov esp, ebp */ r_esp = r_ebp;
    /* 005da604: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da605: ret  */ FN_RET(0x005da5ca); r_esp += 4; return;
}

void f_005da606(void) /* FUN_005da606 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da606);
    /* 005da606: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da607: mov ebp, esp */ r_ebp = r_esp;
    /* 005da609: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da60c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da60d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005da610: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da613: call 0x5d95c3 */ r_esp -= 4; W32(r_esp, 0x5da618u); f_005d95c3();
    /* 005da618: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da61b: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da61f: jne 0x5da651 */ if (!fZ) goto L_005da651;
L_005da621:; BB(0x005da621);
    /* 005da621: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005da623: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5da628u); f_0048ab58();
    /* 005da628: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da62b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005da62e: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da632: je 0x5da641 */ if (fZ) goto L_005da641;
L_005da634:; BB(0x005da634);
    /* 005da634: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da637: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x5da63cu); f_005e4bb0();
    /* 005da63c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005da63f: jmp 0x5da648 */ goto L_005da648;
L_005da641:; BB(0x005da641);
    /* 005da641: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005da648:; BB(0x005da648);
    /* 005da648: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da64b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005da64e: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
L_005da651:; BB(0x005da651);
    /* 005da651: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da654: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da658: jne 0x5da68a */ if (!fZ) goto L_005da68a;
L_005da65a:; BB(0x005da65a);
    /* 005da65a: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005da65c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5da661u); f_0048ab58();
    /* 005da661: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da664: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005da667: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da66b: je 0x5da67a */ if (fZ) goto L_005da67a;
L_005da66d:; BB(0x005da66d);
    /* 005da66d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005da670: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x5da675u); f_005e4bb0();
    /* 005da675: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005da678: jmp 0x5da681 */ goto L_005da681;
L_005da67a:; BB(0x005da67a);
    /* 005da67a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005da681:; BB(0x005da681);
    /* 005da681: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da684: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005da687: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
L_005da68a:; BB(0x005da68a);
    /* 005da68a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da68d: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da691: jne 0x5da6c6 */ if (!fZ) goto L_005da6c6;
L_005da693:; BB(0x005da693);
    /* 005da693: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005da698: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5da69du); f_0048ab58();
    /* 005da69d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da6a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005da6a3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da6a7: je 0x5da6b6 */ if (fZ) goto L_005da6b6;
L_005da6a9:; BB(0x005da6a9);
    /* 005da6a9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005da6ac: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5da6b1u); f_005e8590();
    /* 005da6b1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005da6b4: jmp 0x5da6bd */ goto L_005da6bd;
L_005da6b6:; BB(0x005da6b6);
    /* 005da6b6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005da6bd:; BB(0x005da6bd);
    /* 005da6bd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da6c0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005da6c3: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
L_005da6c6:; BB(0x005da6c6);
    /* 005da6c6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da6c9: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005da6cc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da6cf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005da6d2: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005da6d5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da6d8: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005da6db: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da6de: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005da6e1: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005da6e4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da6e7: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005da6ea: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da6ed: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005da6f0: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005da6f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da6f6: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5da6fbu); f_005d98da();
    /* 005da6fb: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da6fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da6ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da702: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5da707u); f_005d98c3();
    /* 005da707: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da70a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da70b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da70e: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005da711: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da714: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005da717: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da719: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5da71cu); call_ind(t); }
    /* 005da71c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da71f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da721: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da724: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5da727u); call_ind(t); }
    /* 005da727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da728: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da72b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da72d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da730: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5da733u); call_ind(t); }
    /* 005da733: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da734: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da737: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005da73a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da73d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005da740: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da742: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5da745u); call_ind(t); }
    /* 005da745: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da748: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005da74b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da74e: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005da751: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da753: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5da756u); call_ind(t); }
    /* 005da756: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da759: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5da75eu); f_005d98da();
    /* 005da75e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da761: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da762: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da765: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5da76au); f_005d98c3();
    /* 005da76a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da76d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da76e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da771: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005da774: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da777: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005da77a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da77c: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5da77fu); call_ind(t); }
    /* 005da77f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da782: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da784: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da787: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5da78au); call_ind(t); }
    /* 005da78a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da78d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da78e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da791: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da793: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da796: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5da799u); call_ind(t); }
    /* 005da799: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da79c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da79d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7a0: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005da7a3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7a6: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005da7a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da7ab: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5da7aeu); call_ind(t); }
    /* 005da7ae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7b1: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005da7b4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7b7: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005da7ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da7bc: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5da7bfu); call_ind(t); }
    /* 005da7bf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da7c4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7c7: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5da7cau); call_ind(t); }
    /* 005da7ca: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da7cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da7ce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da7d3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7d6: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5da7d9u); call_ind(t); }
    /* 005da7d9: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da7dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da7dd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7e0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005da7e3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7e6: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005da7e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da7eb: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5da7eeu); call_ind(t); }
    /* 005da7ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7f1: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da7f5: je 0x5da87e */ if (fZ) goto L_005da87e;
L_005da7fb:; BB(0x005da7fb);
    /* 005da7fb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da7fe: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 005da801: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da802: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da805: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005da808: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da80b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005da80e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da810: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5da813u); call_ind(t); }
    /* 005da813: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da816: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005da819: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x5da81eu); f_005e8dcc();
    /* 005da81e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005da821: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da824: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005da827: call 0x5e8e87 */ r_esp -= 4; W32(r_esp, 0x5da82cu); f_005e8e87();
    /* 005da82c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005da82f: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da832: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005da835: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da838: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5da83du); f_005d98c3();
    /* 005da83d: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da840: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da842: jge 0x5da84f */ if ((fS==fO)) goto L_005da84f;
L_005da844:; BB(0x005da844);
    /* 005da844: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da847: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da84a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005da84d: jmp 0x5da85d */ goto L_005da85d;
L_005da84f:; BB(0x005da84f);
    /* 005da84f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da852: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5da857u); f_005d98c3();
    /* 005da857: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da85a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_005da85d:; BB(0x005da85d);
    /* 005da85d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005da860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da861: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da864: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005da867: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5da86cu); f_005e8740();
    /* 005da86c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da86f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da872: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da873: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da876: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005da879: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5da87eu); f_005e8775();
L_005da87e:; BB(0x005da87e);
    /* 005da87e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da881: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 005da884: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da885: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da888: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005da88b: call 0x5e8b9e */ r_esp -= 4; W32(r_esp, 0x5da890u); f_005e8b9e();
    /* 005da890: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005da892: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da895: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005da898: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5da89du); f_005e8e99();
    /* 005da89d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8a0: cmp dword ptr [edx + 0x48], -1 */ {  u32 a = R32((u32)(r_edx+0x48u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da8a4: je 0x5da8b8 */ if (fZ) goto L_005da8b8;
L_005da8a6:; BB(0x005da8a6);
    /* 005da8a6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8a9: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005da8ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da8ad: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8b0: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005da8b3: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5da8b8u); f_005e87aa();
L_005da8b8:; BB(0x005da8b8);
    /* 005da8b8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8bb: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005da8be: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8c1: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005da8c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da8c6: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5da8c9u); call_ind(t); }
    /* 005da8c9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8cc: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005da8cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da8d0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8d3: call 0x5da981 */ r_esp -= 4; W32(r_esp, 0x5da8d8u); f_005da981();
    /* 005da8d8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8db: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005da8de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da8df: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8e2: call 0x5da9f6 */ r_esp -= 4; W32(r_esp, 0x5da8e7u); f_005da9f6();
    /* 005da8e7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8ea: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005da8ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da8ee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8f1: call 0x5daa6c */ r_esp -= 4; W32(r_esp, 0x5da8f6u); f_005daa6c();
    /* 005da8f6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da8f9: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5da8feu); f_005d9883();
    /* 005da8fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da8ff: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da902: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da904: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da907: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5da90au); call_ind(t); }
    /* 005da90a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da90d: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da911: jne 0x5da91e */ if (!fZ) goto L_005da91e;
L_005da913:; BB(0x005da913);
    /* 005da913: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da916: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005da918: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da91b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5da91eu); call_ind(t); }
L_005da91e:; BB(0x005da91e);
    /* 005da91e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da91f: mov esp, ebp */ r_esp = r_ebp;
    /* 005da921: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da922: ret  */ FN_RET(0x005da606); r_esp += 4; return;
}

void f_005da923(void) /* FUN_005da923 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da923);
    /* 005da923: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da924: mov ebp, esp */ r_ebp = r_esp;
    /* 005da926: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da927: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da92a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da92d: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005da930: mov byte ptr [eax + 0x2e], cl */ W8((u32)(r_eax+0x2eu), (u8)r_ecx);
    /* 005da933: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da936: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005da939: mov byte ptr [edx + 0x2d], al */ W8((u32)(r_edx+0x2du), (u8)r_eax);
    /* 005da93c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da93f: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005da942: mov byte ptr [ecx + 0x2c], dl */ W8((u32)(r_ecx+0x2cu), (u8)r_edx);
    /* 005da945: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da948: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da94c: je 0x5da960 */ if (fZ) goto L_005da960;
L_005da94e:; BB(0x005da94e);
    /* 005da94e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da951: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 005da954: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da955: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da958: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005da95b: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5da960u); f_005e4eac();
L_005da960:; BB(0x005da960);
    /* 005da960: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da963: cmp dword ptr [ecx + 0x40], 0 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da967: je 0x5da97b */ if (fZ) goto L_005da97b;
L_005da969:; BB(0x005da969);
    /* 005da969: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da96c: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005da96f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da970: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da973: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005da976: call 0x5e8b9e */ r_esp -= 4; W32(r_esp, 0x5da97bu); f_005e8b9e();
L_005da97b:; BB(0x005da97b);
    /* 005da97b: mov esp, ebp */ r_esp = r_ebp;
    /* 005da97d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da97e: ret 0xc */ FN_RET(0x005da923); r_esp += 16; return;
}

void f_005da981(void) /* FUN_005da981 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da981);
    /* 005da981: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da982: mov ebp, esp */ r_ebp = r_esp;
    /* 005da984: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da985: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da988: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005da98b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da98c: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 005da98f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da990: mov dl, byte ptr [ebp + 0xa] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005da993: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da994: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da997: call 0x5da923 */ r_esp -= 4; W32(r_esp, 0x5da99cu); f_005da923();
    /* 005da99c: mov esp, ebp */ r_esp = r_ebp;
    /* 005da99e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da99f: ret 4 */ FN_RET(0x005da981); r_esp += 8; return;
}

void f_005da9a2(void) /* FUN_005da9a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da9a2);
    /* 005da9a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da9a3: mov ebp, esp */ r_ebp = r_esp;
    /* 005da9a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da9a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da9a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da9ac: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005da9af: mov byte ptr [eax + 0x32], cl */ W8((u32)(r_eax+0x32u), (u8)r_ecx);
    /* 005da9b2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da9b5: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005da9b8: mov byte ptr [edx + 0x31], al */ W8((u32)(r_edx+0x31u), (u8)r_eax);
    /* 005da9bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da9be: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005da9c1: mov byte ptr [ecx + 0x30], dl */ W8((u32)(r_ecx+0x30u), (u8)r_edx);
    /* 005da9c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da9c7: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da9cb: je 0x5da9f0 */ if (fZ) goto L_005da9f0;
L_005da9cd:; BB(0x005da9cd);
    /* 005da9cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da9d0: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005da9d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da9d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da9d7: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005da9da: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5da9dfu); f_005e4f18();
    /* 005da9df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da9e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da9e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da9e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da9e8: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 005da9eb: call 0x5e4e52 */ r_esp -= 4; W32(r_esp, 0x5da9f0u); f_005e4e52();
L_005da9f0:; BB(0x005da9f0);
    /* 005da9f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005da9f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da9f3: ret 0xc */ FN_RET(0x005da9a2); r_esp += 16; return;
}

void f_005da9f6(void) /* FUN_005da9f6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da9f6);
    /* 005da9f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da9f7: mov ebp, esp */ r_ebp = r_esp;
    /* 005da9f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da9fa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da9fd: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005daa00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005daa01: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 005daa04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa05: mov dl, byte ptr [ebp + 0xa] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005daa08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa0c: call 0x5da9a2 */ r_esp -= 4; W32(r_esp, 0x5daa11u); f_005da9a2();
    /* 005daa11: mov esp, ebp */ r_esp = r_ebp;
    /* 005daa13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daa14: ret 4 */ FN_RET(0x005da9f6); r_esp += 8; return;
}

void f_005daa17(void) /* FUN_005daa17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005daa17);
    /* 005daa17: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005daa18: mov ebp, esp */ r_ebp = r_esp;
    /* 005daa1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa1b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005daa1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa21: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005daa24: mov byte ptr [eax + 0x36], cl */ W8((u32)(r_eax+0x36u), (u8)r_ecx);
    /* 005daa27: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa2a: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005daa2d: mov byte ptr [edx + 0x35], al */ W8((u32)(r_edx+0x35u), (u8)r_eax);
    /* 005daa30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa33: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005daa36: mov byte ptr [ecx + 0x34], dl */ W8((u32)(r_ecx+0x34u), (u8)r_edx);
    /* 005daa39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa3c: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daa40: je 0x5daa66 */ if (fZ) goto L_005daa66;
L_005daa42:; BB(0x005daa42);
    /* 005daa42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa45: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005daa48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa4c: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005daa4f: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5daa54u); f_005e4f18();
    /* 005daa54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa57: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 005daa5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa5e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005daa61: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5daa66u); f_005e4eac();
L_005daa66:; BB(0x005daa66);
    /* 005daa66: mov esp, ebp */ r_esp = r_ebp;
    /* 005daa68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daa69: ret 0xc */ FN_RET(0x005daa17); r_esp += 16; return;
}

void f_005daa6c(void) /* FUN_005daa6c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005daa6c);
    /* 005daa6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005daa6d: mov ebp, esp */ r_ebp = r_esp;
    /* 005daa6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa70: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005daa73: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005daa76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005daa77: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 005daa7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa7b: mov dl, byte ptr [ebp + 0xa] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005daa7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa82: call 0x5daa17 */ r_esp -= 4; W32(r_esp, 0x5daa87u); f_005daa17();
    /* 005daa87: mov esp, ebp */ r_esp = r_ebp;
    /* 005daa89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daa8a: ret 4 */ FN_RET(0x005daa6c); r_esp += 8; return;
}

void f_005daa8d(void) /* FUN_005daa8d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005daa8d);
    /* 005daa8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005daa8e: mov ebp, esp */ r_ebp = r_esp;
    /* 005daa90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa91: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005daa94: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005daa97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005daa98: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005daa9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa9f: call 0x5d994e */ r_esp -= 4; W32(r_esp, 0x5daaa4u); f_005d994e();
    /* 005daaa4: mov esp, ebp */ r_esp = r_ebp;
    /* 005daaa6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daaa7: ret 8 */ FN_RET(0x005daa8d); r_esp += 12; return;
}

void f_005daaaa(void) /* FUN_005daaaa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005daaaa);
    /* 005daaaa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005daaab: mov ebp, esp */ r_ebp = r_esp;
    /* 005daaad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daaae: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005daab1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005daab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005daab5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005daab8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daab9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daabc: call 0x5d98f1 */ r_esp -= 4; W32(r_esp, 0x5daac1u); f_005d98f1();
    /* 005daac1: mov esp, ebp */ r_esp = r_ebp;
    /* 005daac3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daac4: ret 8 */ FN_RET(0x005daaaa); r_esp += 12; return;
}

void f_005daac7(void) /* FUN_005daac7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005daac7);
    /* 005daac7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005daac8: mov ebp, esp */ r_ebp = r_esp;
    /* 005daaca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daacb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005daace: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daad1: call 0x5d9a24 */ r_esp -= 4; W32(r_esp, 0x5daad6u); f_005d9a24();
    /* 005daad6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daad9: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daadd: je 0x5daaf0 */ if (fZ) goto L_005daaf0;
L_005daadf:; BB(0x005daadf);
    /* 005daadf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daae2: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 005daae5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daae8: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005daaeb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005daaed: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5daaf0u); call_ind(t); }
L_005daaf0:; BB(0x005daaf0);
    /* 005daaf0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daaf3: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daaf7: je 0x5dab0a */ if (fZ) goto L_005dab0a;
L_005daaf9:; BB(0x005daaf9);
    /* 005daaf9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daafc: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005daaff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab02: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005dab05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dab07: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5dab0au); call_ind(t); }
L_005dab0a:; BB(0x005dab0a);
    /* 005dab0a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab0d: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dab11: je 0x5dab2d */ if (fZ) goto L_005dab2d;
L_005dab13:; BB(0x005dab13);
    /* 005dab13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab16: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dab1a: je 0x5dab2d */ if (fZ) goto L_005dab2d;
L_005dab1c:; BB(0x005dab1c);
    /* 005dab1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab1f: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005dab22: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab25: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005dab28: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dab2a: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5dab2du); call_ind(t); }
L_005dab2d:; BB(0x005dab2d);
    /* 005dab2d: mov esp, ebp */ r_esp = r_ebp;
    /* 005dab2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dab30: ret  */ FN_RET(0x005daac7); r_esp += 4; return;
}

void f_005dab31(void) /* FUN_005dab31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dab31);
    /* 005dab31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dab32: mov ebp, esp */ r_ebp = r_esp;
    /* 005dab34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dab35: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dab38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab3b: call 0x5d9a0f */ r_esp -= 4; W32(r_esp, 0x5dab40u); f_005d9a0f();
    /* 005dab40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab43: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dab47: je 0x5dab5a */ if (fZ) goto L_005dab5a;
L_005dab49:; BB(0x005dab49);
    /* 005dab49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab4c: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 005dab4f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab52: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005dab55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dab57: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5dab5au); call_ind(t); }
L_005dab5a:; BB(0x005dab5a);
    /* 005dab5a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab5d: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dab61: je 0x5dab74 */ if (fZ) goto L_005dab74;
L_005dab63:; BB(0x005dab63);
    /* 005dab63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab66: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005dab69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab6c: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005dab6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dab71: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5dab74u); call_ind(t); }
L_005dab74:; BB(0x005dab74);
    /* 005dab74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab77: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dab7b: je 0x5dab8e */ if (fZ) goto L_005dab8e;
L_005dab7d:; BB(0x005dab7d);
    /* 005dab7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab80: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005dab83: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab86: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005dab89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dab8b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5dab8eu); call_ind(t); }
L_005dab8e:; BB(0x005dab8e);
    /* 005dab8e: mov esp, ebp */ r_esp = r_ebp;
    /* 005dab90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dab91: ret  */ FN_RET(0x005dab31); r_esp += 4; return;
}

void f_005dab92(void) /* FUN_005dab92 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dab92);
    /* 005dab92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dab93: mov ebp, esp */ r_ebp = r_esp;
    /* 005dab95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dab96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dab99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dab9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dab9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daba0: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x5daba5u); f_005d975e();
    /* 005daba5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daba8: cmp dword ptr [ecx + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dabac: je 0x5dabc6 */ if (fZ) goto L_005dabc6;
L_005dabae:; BB(0x005dabae);
    /* 005dabae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dabb1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dabb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dabb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dabb8: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005dabbb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dabbe: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005dabc1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dabc3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5dabc6u); call_ind(t); }
L_005dabc6:; BB(0x005dabc6);
    /* 005dabc6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dabc9: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dabcd: je 0x5dabe4 */ if (fZ) goto L_005dabe4;
L_005dabcf:; BB(0x005dabcf);
    /* 005dabcf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dabd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dabd3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dabd6: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005dabd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dabdc: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005dabdf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dabe1: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5dabe4u); call_ind(t); }
L_005dabe4:; BB(0x005dabe4);
    /* 005dabe4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dabe7: cmp dword ptr [ecx + 0x40], 0 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dabeb: je 0x5dac05 */ if (fZ) goto L_005dac05;
L_005dabed:; BB(0x005dabed);
    /* 005dabed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dabf0: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dabf3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dabf4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dabf7: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005dabfa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dabfd: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005dac00: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dac02: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5dac05u); call_ind(t); }
L_005dac05:; BB(0x005dac05);
    /* 005dac05: mov esp, ebp */ r_esp = r_ebp;
    /* 005dac07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dac08: ret 4 */ FN_RET(0x005dab92); r_esp += 8; return;
}

void f_005dac0b(void) /* FUN_005dac0b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dac0b);
    /* 005dac0b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dac0c: mov ebp, esp */ r_ebp = r_esp;
    /* 005dac0e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dac11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dac12: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005dac15: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dac18: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dac1c: je 0x5dac3d */ if (fZ) goto L_005dac3d;
L_005dac1e:; BB(0x005dac1e);
    /* 005dac1e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dac21: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 005dac24: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005dac27: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dac2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dac2b: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5dac30u); f_0048ac1b();
    /* 005dac30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dac33: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dac36: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_005dac3d:; BB(0x005dac3d);
    /* 005dac3d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dac41: je 0x5dad08 */ if (fZ) goto L_005dad08;
L_005dac47:; BB(0x005dac47);
    /* 005dac47: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dac4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dac4b: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x5dac50u); f_00624990();
    /* 005dac50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dac53: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dac56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dac57: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5dac5cu); f_0048ab58();
    /* 005dac5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dac5f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dac62: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 005dac65: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dac68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dac69: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dac6c: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005dac6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dac70: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5dac75u); f_00624510();
    /* 005dac75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dac78: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dac7b: cmp dword ptr [edx + 0x40], 0 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dac7f: je 0x5dad08 */ if (fZ) goto L_005dad08;
L_005dac85:; BB(0x005dac85);
    /* 005dac85: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dac88: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005dac8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dac8c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dac8f: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005dac92: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dac95: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005dac98: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dac9a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5dac9du); call_ind(t); }
    /* 005dac9d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005daca0: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005daca3: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x5daca8u); f_005e8dcc();
    /* 005daca8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dacab: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dacae: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005dacb1: call 0x5e8e87 */ r_esp -= 4; W32(r_esp, 0x5dacb6u); f_005e8e87();
    /* 005dacb6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005dacb9: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dacbc: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005dacbf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dacc2: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5dacc7u); f_005d98c3();
    /* 005dacc7: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dacca: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daccc: jge 0x5dacd9 */ if ((fS==fO)) goto L_005dacd9;
L_005dacce:; BB(0x005dacce);
    /* 005dacce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dacd1: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dacd4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dacd7: jmp 0x5dace7 */ goto L_005dace7;
L_005dacd9:; BB(0x005dacd9);
    /* 005dacd9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dacdc: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5dace1u); f_005d98c3();
    /* 005dace1: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dace4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005dace7:; BB(0x005dace7);
    /* 005dace7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dacea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daceb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dacee: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005dacf1: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5dacf6u); f_005e8740();
    /* 005dacf6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dacf9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dacfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dacfd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dad00: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005dad03: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5dad08u); f_005e8775();
L_005dad08:; BB(0x005dad08);
    /* 005dad08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dad09: mov esp, ebp */ r_esp = r_ebp;
    /* 005dad0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dad0c: ret 4 */ FN_RET(0x005dac0b); r_esp += 8; return;
}

void f_005dad0f(void) /* FUN_005dad0f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dad0f);
    /* 005dad0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dad10: mov ebp, esp */ r_ebp = r_esp;
    /* 005dad12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad13: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dad16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dad19: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dad1d: je 0x5dad34 */ if (fZ) goto L_005dad34;
L_005dad1f:; BB(0x005dad1f);
    /* 005dad1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dad22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad23: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dad26: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005dad29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dad2c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005dad2f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dad31: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5dad34u); call_ind(t); }
L_005dad34:; BB(0x005dad34);
    /* 005dad34: mov esp, ebp */ r_esp = r_ebp;
    /* 005dad36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dad37: ret 4 */ FN_RET(0x005dad0f); r_esp += 8; return;
}

void f_005dad3a(void) /* FUN_005dad3a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dad3a);
    /* 005dad3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dad3b: mov ebp, esp */ r_ebp = r_esp;
    /* 005dad3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad3e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dad41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dad44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dad47: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 005dad4a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dad4d: cmp dword ptr [edx + 0x40], 0 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dad51: je 0x5dad65 */ if (fZ) goto L_005dad65;
L_005dad53:; BB(0x005dad53);
    /* 005dad53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dad56: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005dad59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad5a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dad5d: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005dad60: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5dad65u); f_005e87aa();
L_005dad65:; BB(0x005dad65);
    /* 005dad65: mov esp, ebp */ r_esp = r_ebp;
    /* 005dad67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dad68: ret 4 */ FN_RET(0x005dad3a); r_esp += 8; return;
}

void f_005dad70(void) /* FUN_005dad70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dad70);
    /* 005dad70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dad71: mov ebp, esp */ r_ebp = r_esp;
    /* 005dad73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dad77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dad7a: call 0x5da5ca */ r_esp -= 4; W32(r_esp, 0x5dad7fu); f_005da5ca();
    /* 005dad7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dad82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dad85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dad87: je 0x5dad95 */ if (fZ) goto L_005dad95;
L_005dad89:; BB(0x005dad89);
    /* 005dad89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dad8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad8d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5dad92u); f_0048ac1b();
    /* 005dad92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dad95:; BB(0x005dad95);
    /* 005dad95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dad98: mov esp, ebp */ r_esp = r_ebp;
    /* 005dad9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dad9b: ret 4 */ FN_RET(0x005dad70); r_esp += 8; return;
}

void f_005dada0(void) /* FUN_005dada0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dada0);
    /* 005dada0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dada1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dada3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dada4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dada7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dadaa: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5dadafu); f_005e8590();
    /* 005dadaf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dadb2: mov dword ptr [eax], 0x63b96c */ W32((u32)(r_eax), 0x63b96cu);
    /* 005dadb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dadbb: mov dword ptr [ecx + 0x898], 0 */ W32((u32)(r_ecx+0x898u), 0x0u);
    /* 005dadc5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dadc8: mov dword ptr [edx + 0x89c], 0 */ W32((u32)(r_edx+0x89cu), 0x0u);
    /* 005dadd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dadd5: mov dword ptr [eax + 0x8a0], 0 */ W32((u32)(r_eax+0x8a0u), 0x0u);
    /* 005daddf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dade2: mov dword ptr [ecx + 0x8a4], 0 */ W32((u32)(r_ecx+0x8a4u), 0x0u);
    /* 005dadec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dadef: mov dword ptr [edx + 0x888], 0 */ W32((u32)(r_edx+0x888u), 0x0u);
    /* 005dadf9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dadfc: mov dword ptr [eax + 0x88c], 0 */ W32((u32)(r_eax+0x88cu), 0x0u);
    /* 005dae06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dae09: mov dword ptr [ecx + 0x890], 0 */ W32((u32)(r_ecx+0x890u), 0x0u);
    /* 005dae13: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 005dae18: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dae1a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dae1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dae1f: call 0x5db0b9 */ r_esp -= 4; W32(r_esp, 0x5dae24u); f_005db0b9();
    /* 005dae24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dae27: mov esp, ebp */ r_esp = r_ebp;
    /* 005dae29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dae2a: ret  */ FN_RET(0x005dada0); r_esp += 4; return;
}

void f_005dae2b(void) /* FUN_005dae2b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dae2b);
    /* 005dae2b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dae2c: mov ebp, esp */ r_ebp = r_esp;
    /* 005dae2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dae2f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dae32: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dae35: mov dword ptr [eax], 0x63b96c */ W32((u32)(r_eax), 0x63b96cu);
    /* 005dae3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dae3e: call 0x5e8680 */ r_esp -= 4; W32(r_esp, 0x5dae43u); f_005e8680();
    /* 005dae43: mov esp, ebp */ r_esp = r_ebp;
    /* 005dae45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dae46: ret  */ FN_RET(0x005dae2b); r_esp += 4; return;
}

void f_005dae47(void) /* FUN_005dae47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dae47);
    /* 005dae47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dae48: mov ebp, esp */ r_ebp = r_esp;
    /* 005dae4a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dae4d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dae50: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dae53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dae54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dae57: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x5dae5cu); f_005d9738();
    /* 005dae5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dae5e: jne 0x5dae6c */ if (!fZ) goto L_005dae6c;
L_005dae60:; BB(0x005dae60);
    /* 005dae60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dae63: cmp dword ptr [ecx + 0x89c], 0 */ {  u32 a = R32((u32)(r_ecx+0x89cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dae6a: je 0x5dae75 */ if (fZ) goto L_005dae75;
L_005dae6c:; BB(0x005dae6c);
    /* 005dae6c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dae6f: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dae73: je 0x5dae7c */ if (fZ) goto L_005dae7c;
L_005dae75:; BB(0x005dae75);
    /* 005dae75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dae77: jmp 0x5daf76 */ goto L_005daf76;
L_005dae7c:; BB(0x005dae7c);
    /* 005dae7c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dae7f: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005dae82: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dae85: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dae89: je 0x5dae9a */ if (fZ) goto L_005dae9a;
L_005dae8b:; BB(0x005dae8b);
    /* 005dae8b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dae8f: je 0x5daf40 */ if (fZ) goto L_005daf40;
L_005dae95:; BB(0x005dae95);
    /* 005dae95: jmp 0x5daf70 */ goto L_005daf70;
L_005dae9a:; BB(0x005dae9a);
    /* 005dae9a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dae9d: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005daea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005daea1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005daea4: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005daea7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005daea8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daeab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005daead: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daeb0: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5daeb3u); call_ind(t); }
    /* 005daeb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daeb5: je 0x5daece */ if (fZ) goto L_005daece;
L_005daeb7:; BB(0x005daeb7);
    /* 005daeb7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005daeba: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005daebd: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005daec0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daec2: je 0x5daece */ if (fZ) goto L_005daece;
L_005daec4:; BB(0x005daec4);
    /* 005daec4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005daec7: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
L_005daece:; BB(0x005daece);
    /* 005daece: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005daed1: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005daed4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daed5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005daed8: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005daedb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005daedc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daedf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005daee1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daee4: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5daee7u); call_ind(t); }
    /* 005daee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daee9: je 0x5daf3e */ if (fZ) goto L_005daf3e;
L_005daeeb:; BB(0x005daeeb);
    /* 005daeeb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005daeee: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005daef1: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005daef4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daef6: je 0x5daf3e */ if (fZ) goto L_005daf3e;
L_005daef8:; BB(0x005daef8);
    /* 005daef8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daefb: cmp dword ptr [edx + 0x89c], 0 */ {  u32 a = R32((u32)(r_edx+0x89cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daf02: jne 0x5daf3e */ if (!fZ) goto L_005daf3e;
L_005daf04:; BB(0x005daf04);
    /* 005daf04: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf07: mov dword ptr [eax + 0x89c], 1 */ W32((u32)(r_eax+0x89cu), 0x1u);
    /* 005daf11: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005daf14: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 005daf1b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf1e: call 0x5db008 */ r_esp -= 4; W32(r_esp, 0x5daf23u); f_005db008();
    /* 005daf23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daf25: jne 0x5daf3e */ if (!fZ) goto L_005daf3e;
L_005daf27:; BB(0x005daf27);
    /* 005daf27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf2a: call 0x5db035 */ r_esp -= 4; W32(r_esp, 0x5daf2fu); f_005db035();
    /* 005daf2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005daf30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf33: mov ecx, dword ptr [edx + 0x898] */ r_ecx = R32((u32)(r_edx+0x898u));
    /* 005daf39: call 0x5dc5c1 */ r_esp -= 4; W32(r_esp, 0x5daf3eu); f_005dc5c1();
L_005daf3e:; BB(0x005daf3e);
    /* 005daf3e: jmp 0x5daf70 */ goto L_005daf70;
L_005daf40:; BB(0x005daf40);
    /* 005daf40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005daf43: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005daf46: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005daf49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daf4b: je 0x5daf70 */ if (fZ) goto L_005daf70;
L_005daf4d:; BB(0x005daf4d);
    /* 005daf4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf50: cmp dword ptr [edx + 0x89c], 0 */ {  u32 a = R32((u32)(r_edx+0x89cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daf57: je 0x5daf70 */ if (fZ) goto L_005daf70;
L_005daf59:; BB(0x005daf59);
    /* 005daf59: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf5c: mov dword ptr [eax + 0x89c], 0 */ W32((u32)(r_eax+0x89cu), 0x0u);
    /* 005daf66: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005daf69: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_005daf70:; BB(0x005daf70);
    /* 005daf70: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005daf73: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
L_005daf76:; BB(0x005daf76);
    /* 005daf76: mov esp, ebp */ r_esp = r_ebp;
    /* 005daf78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daf79: ret 4 */ FN_RET(0x005dae47); r_esp += 8; return;
}

void f_005daf7c(void) /* FUN_005daf7c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005daf7c);
    /* 005daf7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005daf7d: mov ebp, esp */ r_ebp = r_esp;
    /* 005daf7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daf80: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005daf83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf86: mov dword ptr [eax + 0x8a0], 1 */ W32((u32)(r_eax+0x8a0u), 0x1u);
    /* 005daf90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf93: mov edx, dword ptr [ecx + 0x88c] */ r_edx = R32((u32)(r_ecx+0x88cu));
    /* 005daf99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005daf9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf9d: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5dafa2u); f_005e87aa();
    /* 005dafa2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dafa5: add eax, 0x894 */ {  u32 a = r_eax; u32 b = 0x894u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dafaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dafab: mov ecx, esp */ r_ecx = r_esp;
    /* 005dafad: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 005dafb0: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005dafb3: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 005dafb6: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005dafb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dafbc: call 0x5db136 */ r_esp -= 4; W32(r_esp, 0x5dafc1u); f_005db136();
    /* 005dafc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dafc4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dafc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dafc9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5dafccu); call_ind(t); }
    /* 005dafcc: mov esp, ebp */ r_esp = r_ebp;
    /* 005dafce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dafcf: ret  */ FN_RET(0x005daf7c); r_esp += 4; return;
}

void f_005dafd0(void) /* FUN_005dafd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dafd0);
    /* 005dafd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dafd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dafd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dafd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dafd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dafda: mov dword ptr [eax + 0x8a0], 0 */ W32((u32)(r_eax+0x8a0u), 0x0u);
    /* 005dafe4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dafe7: mov edx, dword ptr [ecx + 0x888] */ r_edx = R32((u32)(r_ecx+0x888u));
    /* 005dafed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dafee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daff1: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5daff6u); f_005e87aa();
    /* 005daff6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005daff8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005daffa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005daffc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dafff: call 0x5e8b5a */ r_esp -= 4; W32(r_esp, 0x5db004u); f_005e8b5a();
    /* 005db004: mov esp, ebp */ r_esp = r_ebp;
    /* 005db006: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db007: ret  */ FN_RET(0x005dafd0); r_esp += 4; return;
}

void f_005db008(void) /* FUN_005db008 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db008);
    /* 005db008: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db009: mov ebp, esp */ r_ebp = r_esp;
    /* 005db00b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db00c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db00f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db012: mov eax, dword ptr [eax + 0x8a0] */ r_eax = R32((u32)(r_eax+0x8a0u));
    /* 005db018: mov esp, ebp */ r_esp = r_ebp;
    /* 005db01a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db01b: ret  */ FN_RET(0x005db008); r_esp += 4; return;
}

void f_005db01c(void) /* FUN_005db01c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db01c);
    /* 005db01c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db01d: mov ebp, esp */ r_ebp = r_esp;
    /* 005db01f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db020: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db023: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db026: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005db029: mov dword ptr [eax + 0x8a4], ecx */ W32((u32)(r_eax+0x8a4u), r_ecx);
    /* 005db02f: mov esp, ebp */ r_esp = r_ebp;
    /* 005db031: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db032: ret 4 */ FN_RET(0x005db01c); r_esp += 8; return;
}

void f_005db035(void) /* FUN_005db035 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db035);
    /* 005db035: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db036: mov ebp, esp */ r_ebp = r_esp;
    /* 005db038: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db039: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db03c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db03f: mov eax, dword ptr [eax + 0x8a4] */ r_eax = R32((u32)(r_eax+0x8a4u));
    /* 005db045: mov esp, ebp */ r_esp = r_ebp;
    /* 005db047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db048: ret  */ FN_RET(0x005db035); r_esp += 4; return;
}

void f_005db049(void) /* FUN_005db049 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db049);
    /* 005db049: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db04a: mov ebp, esp */ r_ebp = r_esp;
    /* 005db04c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db04d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db050: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db053: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005db056: mov dword ptr [eax + 0x898], ecx */ W32((u32)(r_eax+0x898u), r_ecx);
    /* 005db05c: mov esp, ebp */ r_esp = r_ebp;
    /* 005db05e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db05f: ret 4 */ FN_RET(0x005db049); r_esp += 8; return;
}

void f_005db062(void) /* FUN_005db062 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db062);
    /* 005db062: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db063: mov ebp, esp */ r_ebp = r_esp;
    /* 005db065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db066: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db069: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db06c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005db06f: mov dword ptr [eax + 0x888], ecx */ W32((u32)(r_eax+0x888u), r_ecx);
    /* 005db075: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db078: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005db07b: mov dword ptr [edx + 0x890], eax */ W32((u32)(r_edx+0x890u), r_eax);
    /* 005db081: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db084: mov edx, dword ptr [ecx + 0x888] */ r_edx = R32((u32)(r_ecx+0x888u));
    /* 005db08a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db08b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db08e: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5db093u); f_005e87aa();
    /* 005db093: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db097: je 0x5db0a7 */ if (fZ) goto L_005db0a7;
L_005db099:; BB(0x005db099);
    /* 005db099: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db09c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005db09f: mov dword ptr [eax + 0x88c], ecx */ W32((u32)(r_eax+0x88cu), r_ecx);
    /* 005db0a5: jmp 0x5db0b3 */ goto L_005db0b3;
L_005db0a7:; BB(0x005db0a7);
    /* 005db0a7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db0aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005db0ad: mov dword ptr [edx + 0x88c], eax */ W32((u32)(r_edx+0x88cu), r_eax);
L_005db0b3:; BB(0x005db0b3);
    /* 005db0b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005db0b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db0b6: ret 0xc */ FN_RET(0x005db062); r_esp += 16; return;
}

void f_005db0b9(void) /* FUN_005db0b9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db0b9);
    /* 005db0b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db0ba: mov ebp, esp */ r_ebp = r_esp;
    /* 005db0bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db0bd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db0c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db0c3: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005db0c6: mov byte ptr [eax + 0x894], cl */ W8((u32)(r_eax+0x894u), (u8)r_ecx);
    /* 005db0cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db0cf: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005db0d2: mov byte ptr [edx + 0x895], al */ W8((u32)(r_edx+0x895u), (u8)r_eax);
    /* 005db0d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db0db: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005db0de: mov byte ptr [ecx + 0x896], dl */ W8((u32)(r_ecx+0x896u), (u8)r_edx);
    /* 005db0e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db0e7: call 0x5db008 */ r_esp -= 4; W32(r_esp, 0x5db0ecu); f_005db008();
    /* 005db0ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db0ee: je 0x5db10f */ if (fZ) goto L_005db10f;
L_005db0f0:; BB(0x005db0f0);
    /* 005db0f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db0f3: add eax, 0x894 */ {  u32 a = r_eax; u32 b = 0x894u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005db0f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db0f9: mov ecx, esp */ r_ecx = r_esp;
    /* 005db0fb: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 005db0fe: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005db101: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 005db104: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005db107: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db10a: call 0x5db136 */ r_esp -= 4; W32(r_esp, 0x5db10fu); f_005db136();
L_005db10f:; BB(0x005db10f);
    /* 005db10f: mov esp, ebp */ r_esp = r_ebp;
    /* 005db111: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db112: ret 0xc */ FN_RET(0x005db0b9); r_esp += 16; return;
}

void f_005db115(void) /* FUN_005db115 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db115);
    /* 005db115: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db116: mov ebp, esp */ r_ebp = r_esp;
    /* 005db118: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db119: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db11c: mov al, byte ptr [ebp + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005db11f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db120: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 005db123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db124: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005db127: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db128: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db12b: call 0x5db0b9 */ r_esp -= 4; W32(r_esp, 0x5db130u); f_005db0b9();
    /* 005db130: mov esp, ebp */ r_esp = r_ebp;
    /* 005db132: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db133: ret 4 */ FN_RET(0x005db115); r_esp += 8; return;
}

void f_005db136(void) /* FUN_005db136 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db136);
    /* 005db136: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db137: mov ebp, esp */ r_ebp = r_esp;
    /* 005db139: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db13c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005db13f: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005db142: mov byte ptr [ebp - 2], al */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_eax);
    /* 005db145: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 005db148: mov byte ptr [ebp - 3], cl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ecx);
    /* 005db14b: mov dl, byte ptr [ebp + 0xa] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005db14e: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
    /* 005db151: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db155: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005db158: call 0x5e8b9e */ r_esp -= 4; W32(r_esp, 0x5db15du); f_005e8b9e();
    /* 005db15d: mov esp, ebp */ r_esp = r_ebp;
    /* 005db15f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db160: ret 4 */ FN_RET(0x005db136); r_esp += 8; return;
}

void f_005db163(void) /* FUN_005db163 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db163);
    /* 005db163: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db164: mov ebp, esp */ r_ebp = r_esp;
    /* 005db166: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db167: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db16a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db16c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db16f: call 0x5e6882 */ r_esp -= 4; W32(r_esp, 0x5db174u); f_005e6882();
    /* 005db174: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db177: mov dword ptr [eax], 0x63b9bc */ W32((u32)(r_eax), 0x63b9bcu);
    /* 005db17d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db180: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005db183: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 005db186: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db189: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005db18c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db18f: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005db192: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005db195: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db198: mov esp, ebp */ r_esp = r_ebp;
    /* 005db19a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db19b: ret 4 */ FN_RET(0x005db163); r_esp += 8; return;
}

void f_005db19e(void) /* FUN_005db19e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db19e);
    /* 005db19e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db19f: mov ebp, esp */ r_ebp = r_esp;
    /* 005db1a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db1a2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db1a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db1a8: mov dword ptr [eax], 0x63b9bc */ W32((u32)(r_eax), 0x63b9bcu);
    /* 005db1ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db1b1: call 0x5e69b1 */ r_esp -= 4; W32(r_esp, 0x5db1b6u); f_005e69b1();
    /* 005db1b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005db1b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db1b9: ret  */ FN_RET(0x005db19e); r_esp += 4; return;
}

void f_005db1ba(void) /* FUN_005db1ba */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db1ba);
    /* 005db1ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db1bb: mov ebp, esp */ r_ebp = r_esp;
    /* 005db1bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db1be: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db1c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db1c4: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005db1c7: call 0x5dc489 */ r_esp -= 4; W32(r_esp, 0x5db1ccu); f_005dc489();
    /* 005db1cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005db1ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db1cf: ret  */ FN_RET(0x005db1ba); r_esp += 4; return;
}

void f_005db1e6(void) /* FUN_005db1e6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db1e6);
    /* 005db1e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db1e7: mov ebp, esp */ r_ebp = r_esp;
    /* 005db1e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db1ea: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db1ed: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005db1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db1f1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005db1f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db1f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db1f8: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 005db1fb: call 0x5dc444 */ r_esp -= 4; W32(r_esp, 0x5db200u); f_005dc444();
    /* 005db200: mov esp, ebp */ r_esp = r_ebp;
    /* 005db202: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db203: ret 8 */ FN_RET(0x005db1e6); r_esp += 12; return;
}

void f_005db206(void) /* FUN_005db206 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db206);
    /* 005db206: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db207: mov ebp, esp */ r_ebp = r_esp;
    /* 005db209: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db20a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db20d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005db210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db211: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db214: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 005db217: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5db21cu); f_005dc2f8();
    /* 005db21c: mov esp, ebp */ r_esp = r_ebp;
    /* 005db21e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db21f: ret 4 */ FN_RET(0x005db206); r_esp += 8; return;
}

void f_005db222(void) /* FUN_005db222 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db222);
    /* 005db222: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db223: mov ebp, esp */ r_ebp = r_esp;
    /* 005db225: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db226: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db229: mov esp, ebp */ r_esp = r_ebp;
    /* 005db22b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db22c: ret  */ FN_RET(0x005db222); r_esp += 4; return;
}

void f_005db22d(void) /* FUN_005db22d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db22d);
    /* 005db22d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db22e: mov ebp, esp */ r_ebp = r_esp;
    /* 005db230: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db231: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db234: mov esp, ebp */ r_esp = r_ebp;
    /* 005db236: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db237: ret  */ FN_RET(0x005db22d); r_esp += 4; return;
}

void f_005db238(void) /* FUN_005db238 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db238);
    /* 005db238: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db239: mov ebp, esp */ r_ebp = r_esp;
    /* 005db23b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db23e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005db241: mov byte ptr [ebp - 0x10], 5 */ W8((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 005db245: mov byte ptr [ebp - 0xf], 5 */ W8((u32)(r_ebp+0xfffffff1u), 0x5u);
    /* 005db249: mov byte ptr [ebp - 0xe], 0x82 */ W8((u32)(r_ebp+0xfffffff2u), 0x82u);
    /* 005db24d: mov byte ptr [ebp - 0x14], 0xff */ W8((u32)(r_ebp+0xffffffecu), 0xffu);
    /* 005db251: mov byte ptr [ebp - 0x13], 0xff */ W8((u32)(r_ebp+0xffffffedu), 0xffu);
    /* 005db255: mov byte ptr [ebp - 0x12], 0xff */ W8((u32)(r_ebp+0xffffffeeu), 0xffu);
    /* 005db259: mov byte ptr [ebp - 0xc], 1 */ W8((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005db25d: mov byte ptr [ebp - 0xb], 1 */ W8((u32)(r_ebp+0xfffffff5u), 0x1u);
    /* 005db261: mov byte ptr [ebp - 0xa], 1 */ W8((u32)(r_ebp+0xfffffff6u), 0x1u);
    /* 005db265: mov byte ptr [ebp - 8], 0xff */ W8((u32)(r_ebp+0xfffffff8u), 0xffu);
    /* 005db269: mov byte ptr [ebp - 7], 0xff */ W8((u32)(r_ebp+0xfffffff9u), 0xffu);
    /* 005db26d: mov byte ptr [ebp - 6], 0xff */ W8((u32)(r_ebp+0xfffffffau), 0xffu);
    /* 005db271: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005db275: mov byte ptr [ebp - 3], 1 */ W8((u32)(r_ebp+0xfffffffdu), 0x1u);
    /* 005db279: mov byte ptr [ebp - 2], 1 */ W8((u32)(r_ebp+0xfffffffeu), 0x1u);
    /* 005db27d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db280: mov dword ptr [eax], 0xffffffff */ W32((u32)(r_eax), 0xffffffffu);
    /* 005db286: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db289: mov dword ptr [ecx + 4], 0xffffffff */ W32((u32)(r_ecx+0x4u), 0xffffffffu);
    /* 005db290: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db293: mov dword ptr [edx + 8], 0xffffffff */ W32((u32)(r_edx+0x8u), 0xffffffffu);
    /* 005db29a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db29d: mov dword ptr [eax + 0xc], 0xffffffff */ W32((u32)(r_eax+0xcu), 0xffffffffu);
    /* 005db2a4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db2a7: mov dword ptr [ecx + 0x10], 0xffffffff */ W32((u32)(r_ecx+0x10u), 0xffffffffu);
    /* 005db2ae: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db2b1: mov dword ptr [edx + 0x14], 0xffffffff */ W32((u32)(r_edx+0x14u), 0xffffffffu);
    /* 005db2b8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db2bb: mov dword ptr [eax + 0x18], 0xf */ W32((u32)(r_eax+0x18u), 0xfu);
    /* 005db2c2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db2c5: mov dword ptr [ecx + 0x1c], 0xffffffff */ W32((u32)(r_ecx+0x1cu), 0xffffffffu);
    /* 005db2cc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db2cf: mov dword ptr [edx + 0x20], 0xffffffff */ W32((u32)(r_edx+0x20u), 0xffffffffu);
    /* 005db2d6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db2d9: mov dword ptr [eax + 0x24], 0xffffffff */ W32((u32)(r_eax+0x24u), 0xffffffffu);
    /* 005db2e0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db2e3: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 005db2ea: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db2ed: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 005db2f4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db2f7: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 005db2fe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db301: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 005db308: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db30b: mov dword ptr [edx + 0x38], 0x98 */ W32((u32)(r_edx+0x38u), 0x98u);
    /* 005db312: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db315: mov dword ptr [eax + 0x3c], 0x4d */ W32((u32)(r_eax+0x3cu), 0x4du);
    /* 005db31c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db31f: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005db322: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 005db326: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005db329: mov al, byte ptr [ebp - 0xe] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff2u))) & 0xffu);
    /* 005db32c: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005db32f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db332: add ecx, 0x4f */ {  u32 a = r_ecx; u32 b = 0x4fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005db335: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 005db339: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005db33c: mov al, byte ptr [ebp - 0x12] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffeeu))) & 0xffu);
    /* 005db33f: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005db342: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db345: add ecx, 0x52 */ {  u32 a = r_ecx; u32 b = 0x52u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005db348: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005db34c: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005db34f: mov al, byte ptr [ebp - 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 005db352: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005db355: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db358: add ecx, 0x55 */ {  u32 a = r_ecx; u32 b = 0x55u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005db35b: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005db35f: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005db362: mov al, byte ptr [ebp - 6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffau))) & 0xffu);
    /* 005db365: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005db368: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db36b: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005db36e: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005db372: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005db375: mov al, byte ptr [ebp - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 005db378: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005db37b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db37e: mov dword ptr [ecx + 0x40], 1 */ W32((u32)(r_ecx+0x40u), 0x1u);
    /* 005db385: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db388: mov dword ptr [edx + 0x44], 1 */ W32((u32)(r_edx+0x44u), 0x1u);
    /* 005db38f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db392: mov dword ptr [eax + 0x48], 4 */ W32((u32)(r_eax+0x48u), 0x4u);
    /* 005db399: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db39c: mov dword ptr [ecx + 0x5c], 1 */ W32((u32)(r_ecx+0x5cu), 0x1u);
    /* 005db3a3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db3a6: mov dword ptr [edx + 0x60], 1 */ W32((u32)(r_edx+0x60u), 0x1u);
    /* 005db3ad: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db3b0: mov dword ptr [eax + 0x64], 1 */ W32((u32)(r_eax+0x64u), 0x1u);
    /* 005db3b7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db3ba: mov dword ptr [ecx + 0x68], 1 */ W32((u32)(r_ecx+0x68u), 0x1u);
    /* 005db3c1: push 0x6fc3e0 */ { u32 v = 0x6fc3e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db3c6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db3c9: add edx, 0x6c */ {  u32 a = r_edx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005db3cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db3cd: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5db3d2u); f_00624510();
    /* 005db3d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db3d5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db3d8: mov dword ptr [eax + 0xd0], 0xffffffff */ W32((u32)(r_eax+0xd0u), 0xffffffffu);
    /* 005db3e2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db3e5: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 005db3ef: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db3f2: mov dword ptr [edx + 0xd8], 0 */ W32((u32)(r_edx+0xd8u), 0x0u);
    /* 005db3fc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db3ff: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
    /* 005db409: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db40c: mov dword ptr [ecx + 0xe0], 0 */ W32((u32)(r_ecx+0xe0u), 0x0u);
    /* 005db416: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db419: mov esp, ebp */ r_esp = r_ebp;
    /* 005db41b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db41c: ret  */ FN_RET(0x005db238); r_esp += 4; return;
}

void f_005db41d(void) /* FUN_005db41d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db41d);
    /* 005db41d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db41e: mov ebp, esp */ r_ebp = r_esp;
    /* 005db420: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db421: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db424: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db427: call 0x5d94ef */ r_esp -= 4; W32(r_esp, 0x5db42cu); f_005d94ef();
    /* 005db42c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db42f: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005db432: call 0x5db238 */ r_esp -= 4; W32(r_esp, 0x5db437u); f_005db238();
    /* 005db437: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db43a: mov dword ptr [eax], 0x63ba14 */ W32((u32)(r_eax), 0x63ba14u);
    /* 005db440: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db443: mov dword ptr [ecx + 0x110], 0 */ W32((u32)(r_ecx+0x110u), 0x0u);
    /* 005db44d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db450: mov dword ptr [edx + 0x114], 0 */ W32((u32)(r_edx+0x114u), 0x0u);
    /* 005db45a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db45d: mov dword ptr [eax + 0x118], 0 */ W32((u32)(r_eax+0x118u), 0x0u);
    /* 005db467: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db46a: mov dword ptr [ecx + 0x11c], 0 */ W32((u32)(r_ecx+0x11cu), 0x0u);
    /* 005db474: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db477: mov dword ptr [edx + 0x120], 0 */ W32((u32)(r_edx+0x120u), 0x0u);
    /* 005db481: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db484: mov dword ptr [eax + 0x124], 0 */ W32((u32)(r_eax+0x124u), 0x0u);
    /* 005db48e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db491: mov dword ptr [ecx + 0x128], 0 */ W32((u32)(r_ecx+0x128u), 0x0u);
    /* 005db49b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db49e: mov dword ptr [edx + 0x12c], 0 */ W32((u32)(r_edx+0x12cu), 0x0u);
    /* 005db4a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db4ab: mov dword ptr [eax + 0x130], 0 */ W32((u32)(r_eax+0x130u), 0x0u);
    /* 005db4b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db4b8: mov dword ptr [ecx + 0x134], 0 */ W32((u32)(r_ecx+0x134u), 0x0u);
    /* 005db4c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db4c5: mov dword ptr [edx + 0x138], 0 */ W32((u32)(r_edx+0x138u), 0x0u);
    /* 005db4cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db4d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005db4d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db4d5: ret  */ FN_RET(0x005db41d); r_esp += 4; return;
}

void f_005db4d6(void) /* FUN_005db4d6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db4d6);
    /* 005db4d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db4d7: mov ebp, esp */ r_ebp = r_esp;
    /* 005db4d9: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db4dc: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005db4df: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db4e2: mov dword ptr [eax], 0x63ba14 */ W32((u32)(r_eax), 0x63ba14u);
    /* 005db4e8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db4eb: mov edx, dword ptr [ecx + 0x114] */ r_edx = R32((u32)(r_ecx+0x114u));
    /* 005db4f1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005db4f4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005db4f7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005db4fa: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db4fe: je 0x5db511 */ if (fZ) goto L_005db511;
L_005db500:; BB(0x005db500);
    /* 005db500: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005db502: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005db505: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005db507: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005db50a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5db50cu); call_ind(t); }
    /* 005db50c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005db50f: jmp 0x5db518 */ goto L_005db518;
L_005db511:; BB(0x005db511);
    /* 005db511: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005db518:; BB(0x005db518);
    /* 005db518: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db51b: mov ecx, dword ptr [eax + 0x118] */ r_ecx = R32((u32)(r_eax+0x118u));
    /* 005db521: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005db524: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db527: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005db52a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db52e: je 0x5db541 */ if (fZ) goto L_005db541;
L_005db530:; BB(0x005db530);
    /* 005db530: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005db532: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db535: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db537: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db53a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5db53cu); call_ind(t); }
    /* 005db53c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005db53f: jmp 0x5db548 */ goto L_005db548;
L_005db541:; BB(0x005db541);
    /* 005db541: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005db548:; BB(0x005db548);
    /* 005db548: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db54b: mov ecx, dword ptr [eax + 0x11c] */ r_ecx = R32((u32)(r_eax+0x11cu));
    /* 005db551: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005db554: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005db557: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005db55a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db55e: je 0x5db571 */ if (fZ) goto L_005db571;
L_005db560:; BB(0x005db560);
    /* 005db560: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005db562: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db565: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db567: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db56a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5db56cu); call_ind(t); }
    /* 005db56c: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005db56f: jmp 0x5db578 */ goto L_005db578;
L_005db571:; BB(0x005db571);
    /* 005db571: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005db578:; BB(0x005db578);
    /* 005db578: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db57b: mov ecx, dword ptr [eax + 0x120] */ r_ecx = R32((u32)(r_eax+0x120u));
    /* 005db581: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005db584: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005db587: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005db58a: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db58e: je 0x5db5a1 */ if (fZ) goto L_005db5a1;
L_005db590:; BB(0x005db590);
    /* 005db590: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005db592: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005db595: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db597: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005db59a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5db59cu); call_ind(t); }
    /* 005db59c: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005db59f: jmp 0x5db5a8 */ goto L_005db5a8;
L_005db5a1:; BB(0x005db5a1);
    /* 005db5a1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005db5a8:; BB(0x005db5a8);
    /* 005db5a8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db5ab: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 005db5b1: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005db5b4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005db5b7: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005db5ba: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db5be: je 0x5db5d1 */ if (fZ) goto L_005db5d1;
L_005db5c0:; BB(0x005db5c0);
    /* 005db5c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005db5c2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005db5c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db5c7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005db5ca: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5db5ccu); call_ind(t); }
    /* 005db5cc: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005db5cf: jmp 0x5db5d8 */ goto L_005db5d8;
L_005db5d1:; BB(0x005db5d1);
    /* 005db5d1: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_005db5d8:; BB(0x005db5d8);
    /* 005db5d8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db5db: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db5e2: je 0x5db682 */ if (fZ) goto L_005db682;
L_005db5e8:; BB(0x005db5e8);
    /* 005db5e8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db5eb: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005db5f1: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5db5f6u); f_005dd4d2();
    /* 005db5f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db5f8: je 0x5db645 */ if (fZ) goto L_005db645;
L_005db5fa:; BB(0x005db5fa);
    /* 005db5fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db5fc: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db5ff: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5db604u); f_005dc2bd();
    /* 005db604: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005db607: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db60a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db60b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db60e: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 005db614: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5db619u); f_005dd469();
    /* 005db619: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db61c: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005db61f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db622: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005db625: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db629: je 0x5db63c */ if (fZ) goto L_005db63c;
L_005db62b:; BB(0x005db62b);
    /* 005db62b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005db62d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005db630: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db632: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005db635: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5db637u); call_ind(t); }
    /* 005db637: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005db63a: jmp 0x5db643 */ goto L_005db643;
L_005db63c:; BB(0x005db63c);
    /* 005db63c: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005db643:; BB(0x005db643);
    /* 005db643: jmp 0x5db5e8 */ goto L_005db5e8;
L_005db645:; BB(0x005db645);
    /* 005db645: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db648: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 005db64e: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005db651: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005db654: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005db657: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db65b: je 0x5db66e */ if (fZ) goto L_005db66e;
L_005db65d:; BB(0x005db65d);
    /* 005db65d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005db65f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005db662: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db664: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005db667: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5db669u); call_ind(t); }
    /* 005db669: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005db66c: jmp 0x5db675 */ goto L_005db675;
L_005db66e:; BB(0x005db66e);
    /* 005db66e: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005db675:; BB(0x005db675);
    /* 005db675: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db678: mov dword ptr [eax + 0x110], 0 */ W32((u32)(r_eax+0x110u), 0x0u);
L_005db682:; BB(0x005db682);
    /* 005db682: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db685: call 0x5d9576 */ r_esp -= 4; W32(r_esp, 0x5db68au); f_005d9576();
    /* 005db68a: mov esp, ebp */ r_esp = r_ebp;
    /* 005db68c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db68d: ret  */ FN_RET(0x005db4d6); r_esp += 4; return;
}

void f_005db68e(void) /* FUN_005db68e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db68e);
    /* 005db68e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db68f: mov ebp, esp */ r_ebp = r_esp;
    /* 005db691: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db694: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005db695: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005db696: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005db699: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db69c: call 0x5d95c3 */ r_esp -= 4; W32(r_esp, 0x5db6a1u); f_005d95c3();
    /* 005db6a1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db6a5: je 0x5db6b7 */ if (fZ) goto L_005db6b7;
L_005db6a7:; BB(0x005db6a7);
    /* 005db6a7: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005db6aa: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 005db6ad: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005db6b0: mov ecx, 0x39 */ r_ecx = 0x39u;
    /* 005db6b5: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
L_005db6b7:; BB(0x005db6b7);
    /* 005db6b7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db6ba: cmp dword ptr [eax + 0x30], -1 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db6be: je 0x5db767 */ if (fZ) goto L_005db767;
L_005db6c4:; BB(0x005db6c4);
    /* 005db6c4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db6c7: cmp dword ptr [ecx + 0x118], 0 */ {  u32 a = R32((u32)(r_ecx+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db6ce: jne 0x5db703 */ if (!fZ) goto L_005db703;
L_005db6d0:; BB(0x005db6d0);
    /* 005db6d0: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005db6d2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5db6d7u); f_0048ab58();
    /* 005db6d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db6da: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005db6dd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db6e1: je 0x5db6f0 */ if (fZ) goto L_005db6f0;
L_005db6e3:; BB(0x005db6e3);
    /* 005db6e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db6e6: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5db6ebu); f_005e3fb0();
    /* 005db6eb: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005db6ee: jmp 0x5db6f7 */ goto L_005db6f7;
L_005db6f0:; BB(0x005db6f0);
    /* 005db6f0: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005db6f7:; BB(0x005db6f7);
    /* 005db6f7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db6fa: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005db6fd: mov dword ptr [edx + 0x118], eax */ W32((u32)(r_edx+0x118u), r_eax);
L_005db703:; BB(0x005db703);
    /* 005db703: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db706: mov edx, dword ptr [ecx + 0x118] */ r_edx = R32((u32)(r_ecx+0x118u));
    /* 005db70c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db70f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005db712: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005db715: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005db717: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db71a: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005db71d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db71e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db721: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005db724: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db725: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db728: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005db72b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db72c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db72f: mov ecx, dword ptr [edx + 0x118] */ r_ecx = R32((u32)(r_edx+0x118u));
    /* 005db735: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x5db73au); f_005e9f50();
    /* 005db73a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db73d: mov ecx, dword ptr [eax + 0x118] */ r_ecx = R32((u32)(r_eax+0x118u));
    /* 005db743: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5db748u); f_005d98c3();
    /* 005db748: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db74b: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 005db74e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db751: mov ecx, dword ptr [edx + 0x118] */ r_ecx = R32((u32)(r_edx+0x118u));
    /* 005db757: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5db75cu); f_005d98da();
    /* 005db75c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db75f: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 005db762: jmp 0x5db8d2 */ goto L_005db8d2;
L_005db767:; BB(0x005db767);
    /* 005db767: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db76a: cmp dword ptr [edx + 0x11c], 0 */ {  u32 a = R32((u32)(r_edx+0x11cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db771: jne 0x5db7a6 */ if (!fZ) goto L_005db7a6;
L_005db773:; BB(0x005db773);
    /* 005db773: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005db775: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5db77au); f_0048ab58();
    /* 005db77a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db77d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005db780: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db784: je 0x5db793 */ if (fZ) goto L_005db793;
L_005db786:; BB(0x005db786);
    /* 005db786: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005db789: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x5db78eu); f_005e4bb0();
    /* 005db78e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005db791: jmp 0x5db79a */ goto L_005db79a;
L_005db793:; BB(0x005db793);
    /* 005db793: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005db79a:; BB(0x005db79a);
    /* 005db79a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db79d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005db7a0: mov dword ptr [eax + 0x11c], ecx */ W32((u32)(r_eax+0x11cu), r_ecx);
L_005db7a6:; BB(0x005db7a6);
    /* 005db7a6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db7a9: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 005db7af: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db7b2: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005db7b5: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005db7b8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db7bb: mov ecx, dword ptr [eax + 0x11c] */ r_ecx = R32((u32)(r_eax+0x11cu));
    /* 005db7c1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db7c4: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 005db7ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db7cc: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5db7cfu); call_ind(t); }
    /* 005db7cf: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db7d2: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005db7d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db7d6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db7d9: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005db7dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db7dd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db7e0: mov ecx, dword ptr [ecx + 0x11c] */ r_ecx = R32((u32)(r_ecx+0x11cu));
    /* 005db7e6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db7e9: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 005db7ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db7f1: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5db7f4u); call_ind(t); }
    /* 005db7f4: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db7f7: add eax, 0x7b */ {  u32 a = r_eax; u32 b = 0x7bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005db7fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db7fb: mov ecx, esp */ r_ecx = r_esp;
    /* 005db7fd: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 005db800: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005db803: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 005db806: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005db809: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005db80c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db80d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db810: call 0x5dd1d1 */ r_esp -= 4; W32(r_esp, 0x5db815u); f_005dd1d1();
    /* 005db815: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db817: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db818: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db81b: mov ecx, dword ptr [eax + 0x11c] */ r_ecx = R32((u32)(r_eax+0x11cu));
    /* 005db821: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5db826u); f_005e4eac();
    /* 005db826: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db829: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db830: je 0x5db847 */ if (fZ) goto L_005db847;
L_005db832:; BB(0x005db832);
    /* 005db832: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db835: cmp dword ptr [edx + 0x88], 0 */ {  u32 a = R32((u32)(r_edx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db83c: je 0x5db87b */ if (fZ) goto L_005db87b;
L_005db83e:; BB(0x005db83e);
    /* 005db83e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db841: cmp dword ptr [eax + 0x2c], -1 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db845: je 0x5db87b */ if (fZ) goto L_005db87b;
L_005db847:; BB(0x005db847);
    /* 005db847: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db84a: add ecx, 0x7b */ {  u32 a = r_ecx; u32 b = 0x7bu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005db84d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db84e: mov edx, esp */ r_edx = r_esp;
    /* 005db850: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 005db853: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 005db856: mov cl, byte ptr [ecx + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 005db859: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 005db85c: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005db85f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db860: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db863: call 0x5dd1d1 */ r_esp -= 4; W32(r_esp, 0x5db868u); f_005dd1d1();
    /* 005db868: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005db86a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db86b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db86e: mov ecx, dword ptr [ecx + 0x11c] */ r_ecx = R32((u32)(r_ecx+0x11cu));
    /* 005db874: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5db879u); f_005e4f18();
    /* 005db879: jmp 0x5db8ad */ goto L_005db8ad;
L_005db87b:; BB(0x005db87b);
    /* 005db87b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db87e: add edx, 0x7e */ {  u32 a = r_edx; u32 b = 0x7eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005db881: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db882: mov eax, esp */ r_eax = r_esp;
    /* 005db884: mov cx, word ptr [edx] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 005db887: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005db88a: mov dl, byte ptr [edx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 005db88d: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005db890: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005db893: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db894: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db897: call 0x5dd1d1 */ r_esp -= 4; W32(r_esp, 0x5db89cu); f_005dd1d1();
    /* 005db89c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005db89e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db89f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db8a2: mov ecx, dword ptr [edx + 0x11c] */ r_ecx = R32((u32)(r_edx+0x11cu));
    /* 005db8a8: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5db8adu); f_005e4f18();
L_005db8ad:; BB(0x005db8ad);
    /* 005db8ad: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db8b0: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005db8b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db8b4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db8b7: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005db8ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db8bb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db8be: mov ecx, dword ptr [ecx + 0x11c] */ r_ecx = R32((u32)(r_ecx+0x11cu));
    /* 005db8c4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db8c7: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 005db8cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db8cf: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5db8d2u); call_ind(t); }
L_005db8d2:; BB(0x005db8d2);
    /* 005db8d2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db8d5: cmp dword ptr [eax + 0x2c], -1 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db8d9: je 0x5db951 */ if (fZ) goto L_005db951;
L_005db8db:; BB(0x005db8db);
    /* 005db8db: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db8de: cmp dword ptr [ecx + 0x114], 0 */ {  u32 a = R32((u32)(r_ecx+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db8e5: jne 0x5db91a */ if (!fZ) goto L_005db91a;
L_005db8e7:; BB(0x005db8e7);
    /* 005db8e7: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005db8e9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5db8eeu); f_0048ab58();
    /* 005db8ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db8f1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005db8f4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db8f8: je 0x5db907 */ if (fZ) goto L_005db907;
L_005db8fa:; BB(0x005db8fa);
    /* 005db8fa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db8fd: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5db902u); f_005e3fb0();
    /* 005db902: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005db905: jmp 0x5db90e */ goto L_005db90e;
L_005db907:; BB(0x005db907);
    /* 005db907: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005db90e:; BB(0x005db90e);
    /* 005db90e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db911: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db914: mov dword ptr [edx + 0x114], eax */ W32((u32)(r_edx+0x114u), r_eax);
L_005db91a:; BB(0x005db91a);
    /* 005db91a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db91d: mov edx, dword ptr [ecx + 0x114] */ r_edx = R32((u32)(r_ecx+0x114u));
    /* 005db923: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db926: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005db929: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005db92c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005db92e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db931: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005db934: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db935: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db938: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005db93b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db93c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db93f: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005db942: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db943: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db946: mov ecx, dword ptr [edx + 0x114] */ r_ecx = R32((u32)(r_edx+0x114u));
    /* 005db94c: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x5db951u); f_005e9f50();
L_005db951:; BB(0x005db951);
    /* 005db951: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db954: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db95b: jne 0x5db994 */ if (!fZ) goto L_005db994;
L_005db95d:; BB(0x005db95d);
    /* 005db95d: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005db95f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5db964u); f_0048ab58();
    /* 005db964: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db967: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005db96a: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db96e: je 0x5db981 */ if (fZ) goto L_005db981;
L_005db970:; BB(0x005db970);
    /* 005db970: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db974: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005db977: call 0x5db163 */ r_esp -= 4; W32(r_esp, 0x5db97cu); f_005db163();
    /* 005db97c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005db97f: jmp 0x5db988 */ goto L_005db988;
L_005db981:; BB(0x005db981);
    /* 005db981: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005db988:; BB(0x005db988);
    /* 005db988: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db98b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005db98e: mov dword ptr [edx + 0x124], eax */ W32((u32)(r_edx+0x124u), r_eax);
L_005db994:; BB(0x005db994);
    /* 005db994: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db997: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005db99a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db99b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db99e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005db9a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db9a2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db9a5: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005db9a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db9a9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db9ac: mov ecx, dword ptr [ecx + 0x124] */ r_ecx = R32((u32)(r_ecx+0x124u));
    /* 005db9b2: call 0x5e70a6 */ r_esp -= 4; W32(r_esp, 0x5db9b7u); f_005e70a6();
    /* 005db9b7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db9ba: mov ecx, dword ptr [edx + 0x124] */ r_ecx = R32((u32)(r_edx+0x124u));
    /* 005db9c0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db9c3: mov edx, dword ptr [eax + 0x124] */ r_edx = R32((u32)(r_eax+0x124u));
    /* 005db9c9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005db9cb: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5db9ceu); call_ind(t); }
    /* 005db9ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db9d1: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db9d8: je 0x5dba18 */ if (fZ) goto L_005dba18;
L_005db9da:; BB(0x005db9da);
    /* 005db9da: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db9dd: cmp dword ptr [edx + 0x2c], -1 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db9e1: jne 0x5dba18 */ if (!fZ) goto L_005dba18;
L_005db9e3:; BB(0x005db9e3);
    /* 005db9e3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db9e6: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005db9e9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005db9ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db9ed: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db9f0: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005db9f6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005db9f9: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5db9feu); f_005d98c3();
    /* 005db9fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db9ff: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba02: mov ecx, dword ptr [ecx + 0x124] */ r_ecx = R32((u32)(r_ecx+0x124u));
    /* 005dba08: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba0b: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005dba11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dba13: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5dba16u); call_ind(t); }
    /* 005dba16: jmp 0x5dba48 */ goto L_005dba48;
L_005dba18:; BB(0x005dba18);
    /* 005dba18: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba1b: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005dba1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dba1f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba22: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005dba28: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005dba2b: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5dba30u); f_005d98c3();
    /* 005dba30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dba31: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba34: mov ecx, dword ptr [ecx + 0x124] */ r_ecx = R32((u32)(r_ecx+0x124u));
    /* 005dba3a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba3d: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005dba43: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dba45: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5dba48u); call_ind(t); }
L_005dba48:; BB(0x005dba48);
    /* 005dba48: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005dba4a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba4d: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 005dba53: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba56: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005dba5c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dba5e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5dba61u); call_ind(t); }
    /* 005dba61: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba64: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dba6b: je 0x5dbaad */ if (fZ) goto L_005dbaad;
L_005dba6d:; BB(0x005dba6d);
    /* 005dba6d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba70: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 005dba73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dba74: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba77: mov esi, dword ptr [eax + 0x5c] */ r_esi = R32((u32)(r_eax+0x5cu));
    /* 005dba7a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba7d: add esi, dword ptr [ecx + 0x64] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x64u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005dba80: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba83: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005dba89: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005dba8c: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5dba91u); f_005d98c3();
    /* 005dba91: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005dba93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dba94: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dba97: mov ecx, dword ptr [ecx + 0x124] */ r_ecx = R32((u32)(r_ecx+0x124u));
    /* 005dba9d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbaa0: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005dbaa6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dbaa8: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5dbaabu); call_ind(t); }
    /* 005dbaab: jmp 0x5dbad8 */ goto L_005dbad8;
L_005dbaad:; BB(0x005dbaad);
    /* 005dbaad: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbab0: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005dbab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbab4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbab7: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005dbaba: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbabd: add eax, dword ptr [ecx + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x64u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbac1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbac4: mov ecx, dword ptr [edx + 0x124] */ r_ecx = R32((u32)(r_edx+0x124u));
    /* 005dbaca: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbacd: mov edx, dword ptr [eax + 0x124] */ r_edx = R32((u32)(r_eax+0x124u));
    /* 005dbad3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dbad5: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5dbad8u); call_ind(t); }
L_005dbad8:; BB(0x005dbad8);
    /* 005dbad8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbadb: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbae2: je 0x5dbb1b */ if (fZ) goto L_005dbb1b;
L_005dbae4:; BB(0x005dbae4);
    /* 005dbae4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbae7: add edx, 0x81 */ {  u32 a = r_edx; u32 b = 0x81u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dbaed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbaee: mov eax, esp */ r_eax = r_esp;
    /* 005dbaf0: mov cx, word ptr [edx] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 005dbaf3: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005dbaf6: mov dl, byte ptr [edx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 005dbaf9: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005dbafc: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005dbaff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb00: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbb03: call 0x5dd1d1 */ r_esp -= 4; W32(r_esp, 0x5dbb08u); f_005dd1d1();
    /* 005dbb08: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005dbb0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb0b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbb0e: mov ecx, dword ptr [edx + 0x124] */ r_ecx = R32((u32)(r_edx+0x124u));
    /* 005dbb14: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5dbb19u); f_005e4eac();
    /* 005dbb19: jmp 0x5dbb2f */ goto L_005dbb2f;
L_005dbb1b:; BB(0x005dbb1b);
    /* 005dbb1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb21: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbb24: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 005dbb2a: call 0x5e4e52 */ r_esp -= 4; W32(r_esp, 0x5dbb2fu); f_005e4e52();
L_005dbb2f:; BB(0x005dbb2f);
    /* 005dbb2f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbb32: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbb39: je 0x5dbb72 */ if (fZ) goto L_005dbb72;
L_005dbb3b:; BB(0x005dbb3b);
    /* 005dbb3b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbb3e: add edx, 0x84 */ {  u32 a = r_edx; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dbb44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb45: mov eax, esp */ r_eax = r_esp;
    /* 005dbb47: mov cx, word ptr [edx] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 005dbb4a: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005dbb4d: mov dl, byte ptr [edx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 005dbb50: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005dbb53: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005dbb56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb57: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbb5a: call 0x5dd1d1 */ r_esp -= 4; W32(r_esp, 0x5dbb5fu); f_005dd1d1();
    /* 005dbb5f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005dbb61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb62: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbb65: mov ecx, dword ptr [edx + 0x124] */ r_ecx = R32((u32)(r_edx+0x124u));
    /* 005dbb6b: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5dbb70u); f_005e4f18();
    /* 005dbb70: jmp 0x5dbb86 */ goto L_005dbb86;
L_005dbb72:; BB(0x005dbb72);
    /* 005dbb72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb78: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbb7b: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 005dbb81: call 0x5e4e7f */ r_esp -= 4; W32(r_esp, 0x5dbb86u); f_005e4e7f();
L_005dbb86:; BB(0x005dbb86);
    /* 005dbb86: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbb89: cmp dword ptr [ecx + 0x34], -1 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbb8d: je 0x5dbbfb */ if (fZ) goto L_005dbbfb;
L_005dbb8f:; BB(0x005dbb8f);
    /* 005dbb8f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbb92: cmp dword ptr [edx + 0x120], 0 */ {  u32 a = R32((u32)(r_edx+0x120u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbb99: jne 0x5dbbce */ if (!fZ) goto L_005dbbce;
L_005dbb9b:; BB(0x005dbb9b);
    /* 005dbb9b: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb9d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5dbba2u); f_0048ab58();
    /* 005dbba2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbba5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005dbba8: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbbac: je 0x5dbbbb */ if (fZ) goto L_005dbbbb;
L_005dbbae:; BB(0x005dbbae);
    /* 005dbbae: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dbbb1: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5dbbb6u); f_005e3fb0();
    /* 005dbbb6: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005dbbb9: jmp 0x5dbbc2 */ goto L_005dbbc2;
L_005dbbbb:; BB(0x005dbbbb);
    /* 005dbbbb: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005dbbc2:; BB(0x005dbbc2);
    /* 005dbbc2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbbc5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005dbbc8: mov dword ptr [eax + 0x120], ecx */ W32((u32)(r_eax+0x120u), r_ecx);
L_005dbbce:; BB(0x005dbbce);
    /* 005dbbce: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbbd1: mov eax, dword ptr [edx + 0x120] */ r_eax = R32((u32)(r_edx+0x120u));
    /* 005dbbd7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbbda: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005dbbdd: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005dbbe0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbbe2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbbe4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbbe6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbbe9: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005dbbec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbbed: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbbf0: mov ecx, dword ptr [edx + 0x120] */ r_ecx = R32((u32)(r_edx+0x120u));
    /* 005dbbf6: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x5dbbfbu); f_005e9f50();
L_005dbbfb:; BB(0x005dbbfb);
    /* 005dbbfb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbbfe: cmp dword ptr [eax + 0x128], 0 */ {  u32 a = R32((u32)(r_eax+0x128u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc05: jne 0x5dbd53 */ if (!fZ) goto L_005dbd53;
L_005dbc0b:; BB(0x005dbc0b);
    /* 005dbc0b: push 0x6fc3e4 */ { u32 v = 0x6fc3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbc10: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc13: add ecx, 0x98 */ {  u32 a = r_ecx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbc19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbc1a: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5dbc1fu); f_006240c0();
    /* 005dbc1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbc22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc24: je 0x5dbd53 */ if (fZ) goto L_005dbd53;
L_005dbc2a:; BB(0x005dbc2a);
    /* 005dbc2a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc2d: cmp dword ptr [edx + 0x10c], 0 */ {  u32 a = R32((u32)(r_edx+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc34: jne 0x5dbc45 */ if (!fZ) goto L_005dbc45;
L_005dbc36:; BB(0x005dbc36);
    /* 005dbc36: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc39: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc3c: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 005dbc3f: mov dword ptr [eax + 0x10c], edx */ W32((u32)(r_eax+0x10cu), r_edx);
L_005dbc45:; BB(0x005dbc45);
    /* 005dbc45: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc48: cmp dword ptr [eax + 0x108], 0 */ {  u32 a = R32((u32)(r_eax+0x108u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc4f: jne 0x5dbc60 */ if (!fZ) goto L_005dbc60;
L_005dbc51:; BB(0x005dbc51);
    /* 005dbc51: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc54: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc57: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005dbc5a: mov dword ptr [ecx + 0x108], eax */ W32((u32)(r_ecx+0x108u), r_eax);
L_005dbc60:; BB(0x005dbc60);
    /* 005dbc60: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc63: cmp dword ptr [ecx + 0xfc], -1 */ {  u32 a = R32((u32)(r_ecx+0xfcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc6a: jne 0x5dbc7b */ if (!fZ) goto L_005dbc7b;
L_005dbc6c:; BB(0x005dbc6c);
    /* 005dbc6c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc6f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc72: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005dbc75: mov dword ptr [edx + 0xfc], ecx */ W32((u32)(r_edx+0xfcu), r_ecx);
L_005dbc7b:; BB(0x005dbc7b);
    /* 005dbc7b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc7e: cmp dword ptr [edx + 0x100], 0 */ {  u32 a = R32((u32)(r_edx+0x100u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc85: jne 0x5dbc96 */ if (!fZ) goto L_005dbc96;
L_005dbc87:; BB(0x005dbc87);
    /* 005dbc87: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc8a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc8d: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005dbc90: mov dword ptr [eax + 0x100], edx */ W32((u32)(r_eax+0x100u), r_edx);
L_005dbc96:; BB(0x005dbc96);
    /* 005dbc96: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbc99: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbca0: jne 0x5dbcbd */ if (!fZ) goto L_005dbcbd;
L_005dbca2:; BB(0x005dbca2);
    /* 005dbca2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbca5: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbca8: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 005dbcab: sub eax, dword ptr [edx + 0x10c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x10cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbcb1: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbcb4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbcb7: mov dword ptr [ecx + 0x104], eax */ W32((u32)(r_ecx+0x104u), r_eax);
L_005dbcbd:; BB(0x005dbcbd);
    /* 005dbcbd: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbcc2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5dbcc7u); f_0048ab58();
    /* 005dbcc7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbcca: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005dbccd: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbcd1: je 0x5dbce0 */ if (fZ) goto L_005dbce0;
L_005dbcd3:; BB(0x005dbcd3);
    /* 005dbcd3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005dbcd6: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5dbcdbu); f_005e8590();
    /* 005dbcdb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005dbcde: jmp 0x5dbce7 */ goto L_005dbce7;
L_005dbce0:; BB(0x005dbce0);
    /* 005dbce0: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005dbce7:; BB(0x005dbce7);
    /* 005dbce7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbcea: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005dbced: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 005dbcf3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbcf6: mov edx, dword ptr [ecx + 0x128] */ r_edx = R32((u32)(r_ecx+0x128u));
    /* 005dbcfc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbcff: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005dbd02: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005dbd05: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd07: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd09: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd0c: mov eax, dword ptr [edx + 0x104] */ r_eax = R32((u32)(r_edx+0x104u));
    /* 005dbd12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd13: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd16: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 005dbd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd1d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd20: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 005dbd26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd27: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd2a: mov eax, dword ptr [edx + 0x108] */ r_eax = R32((u32)(r_edx+0x108u));
    /* 005dbd30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd31: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd34: add ecx, 0x98 */ {  u32 a = r_ecx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbd3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd3b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd3e: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 005dbd44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd45: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd48: mov ecx, dword ptr [ecx + 0x128] */ r_ecx = R32((u32)(r_ecx+0x128u));
    /* 005dbd4e: call 0x5e86e0 */ r_esp -= 4; W32(r_esp, 0x5dbd53u); f_005e86e0();
L_005dbd53:; BB(0x005dbd53);
    /* 005dbd53: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd56: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd59: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005dbd5c: mov dword ptr [edx + 0x138], ecx */ W32((u32)(r_edx+0x138u), r_ecx);
    /* 005dbd62: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd65: cmp dword ptr [edx + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbd6c: je 0x5dbd93 */ if (fZ) goto L_005dbd93;
L_005dbd6e:; BB(0x005dbd6e);
    /* 005dbd6e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd71: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 005dbd77: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005dbd7a: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5dbd7fu); f_005d98c3();
    /* 005dbd7f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd82: mov ecx, dword ptr [edx + 0x138] */ r_ecx = R32((u32)(r_edx+0x138u));
    /* 005dbd88: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbd8a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd8d: mov dword ptr [edx + 0x138], ecx */ W32((u32)(r_edx+0x138u), r_ecx);
L_005dbd93:; BB(0x005dbd93);
    /* 005dbd93: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd96: cmp dword ptr [eax + 0x2c], -1 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbd9a: je 0x5dbdc3 */ if (fZ) goto L_005dbdc3;
L_005dbd9c:; BB(0x005dbd9c);
    /* 005dbd9c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbd9f: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbda6: je 0x5dbdc3 */ if (fZ) goto L_005dbdc3;
L_005dbda8:; BB(0x005dbda8);
    /* 005dbda8: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbdab: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005dbdae: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbdb1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbdb4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005dbdb5: idiv dword ptr [ecx + 0x44] */ { i32 d = (i32)R32((u32)(r_ecx+0x44u)); if (!d) UNSUP(0x005dbdb5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005dbdb5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005dbdb8: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbdbb: mov dword ptr [edx + 0x130], eax */ W32((u32)(r_edx+0x130u), r_eax);
    /* 005dbdc1: jmp 0x5dbdd9 */ goto L_005dbdd9;
L_005dbdc3:; BB(0x005dbdc3);
    /* 005dbdc3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbdc6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbdc9: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 005dbdcc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005dbdcd: idiv dword ptr [ecx + 0x44] */ { i32 d = (i32)R32((u32)(r_ecx+0x44u)); if (!d) UNSUP(0x005dbdcd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005dbdcd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005dbdd0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbdd3: mov dword ptr [edx + 0x130], eax */ W32((u32)(r_edx+0x130u), r_eax);
L_005dbdd9:; BB(0x005dbdd9);
    /* 005dbdd9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbddc: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbde3: jne 0x5dbe18 */ if (!fZ) goto L_005dbe18;
L_005dbde5:; BB(0x005dbde5);
    /* 005dbde5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbde7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5dbdecu); f_0048ab58();
    /* 005dbdec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbdef: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005dbdf2: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbdf6: je 0x5dbe05 */ if (fZ) goto L_005dbe05;
L_005dbdf8:; BB(0x005dbdf8);
    /* 005dbdf8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005dbdfb: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x5dbe00u); f_005dd290();
    /* 005dbe00: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005dbe03: jmp 0x5dbe0c */ goto L_005dbe0c;
L_005dbe05:; BB(0x005dbe05);
    /* 005dbe05: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005dbe0c:; BB(0x005dbe0c);
    /* 005dbe0c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dbe0f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005dbe12: mov dword ptr [ecx + 0x110], edx */ W32((u32)(r_ecx+0x110u), r_edx);
L_005dbe18:; BB(0x005dbe18);
    /* 005dbe18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dbe19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dbe1a: mov esp, ebp */ r_esp = r_ebp;
    /* 005dbe1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbe1d: ret 4 */ FN_RET(0x005db68e); r_esp += 8; return;
}

void f_005dbe20(void) /* FUN_005dbe20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dbe20);
    /* 005dbe20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe21: mov ebp, esp */ r_ebp = r_esp;
    /* 005dbe23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dbe26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dbe29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbe2c: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5dbe31u); f_005d96a9();
    /* 005dbe31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbe33: jne 0x5dbe3e */ if (!fZ) goto L_005dbe3e;
L_005dbe35:; BB(0x005dbe35);
    /* 005dbe35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dbe38: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbe3c: je 0x5dbe45 */ if (fZ) goto L_005dbe45;
L_005dbe3e:; BB(0x005dbe3e);
    /* 005dbe3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dbe40: jmp 0x5dbff6 */ goto L_005dbff6;
L_005dbe45:; BB(0x005dbe45);
    /* 005dbe45: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dbe48: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005dbe4b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005dbe4e: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbe52: je 0x5dbe59 */ if (fZ) goto L_005dbe59;
L_005dbe54:; BB(0x005dbe54);
    /* 005dbe54: jmp 0x5dbff0 */ goto L_005dbff0;
L_005dbe59:; BB(0x005dbe59);
    /* 005dbe59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dbe5c: cmp dword ptr [eax + 0x1c], 0x20 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbe60: jne 0x5dbff0 */ if (!fZ) goto L_005dbff0;
L_005dbe66:; BB(0x005dbe66);
    /* 005dbe66: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dbe69: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 005dbe70: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dbe73: mov al, byte ptr [edx + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x14u))) & 0xffu);
    /* 005dbe76: mov byte ptr [ebp - 0x10], al */ W8((u32)(r_ebp+0xfffffff0u), (u8)r_eax);
    /* 005dbe79: cmp byte ptr [ebp - 0x10], 1 */ {  u32 a = R8((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005dbe7d: je 0x5dbe8e */ if (fZ) goto L_005dbe8e;
L_005dbe7f:; BB(0x005dbe7f);
    /* 005dbe7f: cmp byte ptr [ebp - 0x10], 2 */ {  u32 a = R8((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005dbe83: je 0x5dbf37 */ if (fZ) goto L_005dbf37;
L_005dbe89:; BB(0x005dbe89);
    /* 005dbe89: jmp 0x5dbff0 */ goto L_005dbff0;
L_005dbe8e:; BB(0x005dbe8e);
    /* 005dbe8e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbe91: call 0x5dcc52 */ r_esp -= 4; W32(r_esp, 0x5dbe96u); f_005dcc52();
    /* 005dbe96: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dbe99: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dbe9d: jle 0x5dbf32 */ if ((fZ||fS!=fO)) goto L_005dbf32;
L_005dbea3:; BB(0x005dbea3);
    /* 005dbea3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dbea6: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbea9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbeaa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbead: call 0x5dce1d */ r_esp -= 4; W32(r_esp, 0x5dbeb2u); f_005dce1d();
    /* 005dbeb2: mov ecx, eax */ r_ecx = r_eax;
    /* 005dbeb4: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5dbeb9u); f_005d96a9();
    /* 005dbeb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbebb: je 0x5dbf23 */ if (fZ) goto L_005dbf23;
L_005dbebd:; BB(0x005dbebd);
    /* 005dbebd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbec0: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dbec6: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dbecbu); f_005dd4d2();
    /* 005dbecb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbece: cmp eax, dword ptr [ecx + 0x130] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x130u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dbed4: jle 0x5dbf23 */ if ((fZ||fS!=fO)) goto L_005dbf23;
L_005dbed6:; BB(0x005dbed6);
    /* 005dbed6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbed9: call 0x5dd020 */ r_esp -= 4; W32(r_esp, 0x5dbedeu); f_005dd020();
    /* 005dbede: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbee0: je 0x5dbef0 */ if (fZ) goto L_005dbef0;
L_005dbee2:; BB(0x005dbee2);
    /* 005dbee2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbee4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbee6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbee9: call 0x5dc444 */ r_esp -= 4; W32(r_esp, 0x5dbeeeu); f_005dc444();
    /* 005dbeee: jmp 0x5dbf23 */ goto L_005dbf23;
L_005dbef0:; BB(0x005dbef0);
    /* 005dbef0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbef3: call 0x5dcd5b */ r_esp -= 4; W32(r_esp, 0x5dbef8u); f_005dcd5b();
    /* 005dbef8: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dbefb: jle 0x5dbf0e */ if ((fZ||fS!=fO)) goto L_005dbf0e;
L_005dbefd:; BB(0x005dbefd);
    /* 005dbefd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dbf00: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dbf03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf04: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbf07: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dbf0cu); f_005dc2f8();
    /* 005dbf0c: jmp 0x5dbf23 */ goto L_005dbf23;
L_005dbf0e:; BB(0x005dbf0e);
    /* 005dbf0e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbf11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dbf14: sub ecx, dword ptr [eax + 0x130] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x130u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbf1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbf1e: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dbf23u); f_005dc2f8();
L_005dbf23:; BB(0x005dbf23);
    /* 005dbf23: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dbf26: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dbf29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf2a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbf2d: call 0x5dc5c1 */ r_esp -= 4; W32(r_esp, 0x5dbf32u); f_005dc5c1();
L_005dbf32:; BB(0x005dbf32);
    /* 005dbf32: jmp 0x5dbff0 */ goto L_005dbff0;
L_005dbf37:; BB(0x005dbf37);
    /* 005dbf37: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbf3a: call 0x5dcc52 */ r_esp -= 4; W32(r_esp, 0x5dbf3fu); f_005dcc52();
    /* 005dbf3f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dbf42: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbf45: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 005dbf4b: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dbf50u); f_005dd4d2();
    /* 005dbf50: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbf53: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dbf56: jge 0x5dbff0 */ if ((fS==fO)) goto L_005dbff0;
L_005dbf5c:; BB(0x005dbf5c);
    /* 005dbf5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dbf5f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbf62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf63: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbf66: call 0x5dce1d */ r_esp -= 4; W32(r_esp, 0x5dbf6bu); f_005dce1d();
    /* 005dbf6b: mov ecx, eax */ r_ecx = r_eax;
    /* 005dbf6d: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5dbf72u); f_005d96a9();
    /* 005dbf72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbf74: je 0x5dbfe1 */ if (fZ) goto L_005dbfe1;
L_005dbf76:; BB(0x005dbf76);
    /* 005dbf76: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbf79: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dbf7f: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dbf84u); f_005dd4d2();
    /* 005dbf84: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbf87: cmp eax, dword ptr [ecx + 0x130] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x130u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dbf8d: jle 0x5dbfe1 */ if ((fZ||fS!=fO)) goto L_005dbfe1;
L_005dbf8f:; BB(0x005dbf8f);
    /* 005dbf8f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbf92: call 0x5dd020 */ r_esp -= 4; W32(r_esp, 0x5dbf97u); f_005dd020();
    /* 005dbf97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbf99: je 0x5dbfa9 */ if (fZ) goto L_005dbfa9;
L_005dbf9b:; BB(0x005dbf9b);
    /* 005dbf9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbfa2: call 0x5dc444 */ r_esp -= 4; W32(r_esp, 0x5dbfa7u); f_005dc444();
    /* 005dbfa7: jmp 0x5dbfe1 */ goto L_005dbfe1;
L_005dbfa9:; BB(0x005dbfa9);
    /* 005dbfa9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbfac: call 0x5dcd5b */ r_esp -= 4; W32(r_esp, 0x5dbfb1u); f_005dcd5b();
    /* 005dbfb1: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dbfb4: jle 0x5dbfc7 */ if ((fZ||fS!=fO)) goto L_005dbfc7;
L_005dbfb6:; BB(0x005dbfb6);
    /* 005dbfb6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dbfb9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dbfbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfbd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbfc0: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dbfc5u); f_005dc2f8();
    /* 005dbfc5: jmp 0x5dbfe1 */ goto L_005dbfe1;
L_005dbfc7:; BB(0x005dbfc7);
    /* 005dbfc7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbfca: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 005dbfd0: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbfd3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dbfd6: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dbfd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfd9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbfdc: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dbfe1u); f_005dc2f8();
L_005dbfe1:; BB(0x005dbfe1);
    /* 005dbfe1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dbfe4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbfe7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfe8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dbfeb: call 0x5dc5c1 */ r_esp -= 4; W32(r_esp, 0x5dbff0u); f_005dc5c1();
L_005dbff0:; BB(0x005dbff0);
    /* 005dbff0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dbff3: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
L_005dbff6:; BB(0x005dbff6);
    /* 005dbff6: mov esp, ebp */ r_esp = r_ebp;
    /* 005dbff8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbff9: ret 4 */ FN_RET(0x005dbe20); r_esp += 8; return;
}

void f_005dbffc(void) /* FUN_005dbffc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dbffc);
    /* 005dbffc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbffd: mov ebp, esp */ r_ebp = r_esp;
    /* 005dbfff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc000: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc003: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc006: call 0x5d9a24 */ r_esp -= 4; W32(r_esp, 0x5dc00bu); f_005d9a24();
    /* 005dc00b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc00e: cmp dword ptr [eax + 0x114], 0 */ {  u32 a = R32((u32)(r_eax+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc015: je 0x5dc02e */ if (fZ) goto L_005dc02e;
L_005dc017:; BB(0x005dc017);
    /* 005dc017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc01a: mov ecx, dword ptr [ecx + 0x114] */ r_ecx = R32((u32)(r_ecx+0x114u));
    /* 005dc020: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc023: mov eax, dword ptr [edx + 0x114] */ r_eax = R32((u32)(r_edx+0x114u));
    /* 005dc029: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc02b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5dc02eu); call_ind(t); }
L_005dc02e:; BB(0x005dc02e);
    /* 005dc02e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc031: cmp dword ptr [eax + 0x118], 0 */ {  u32 a = R32((u32)(r_eax+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc038: je 0x5dc051 */ if (fZ) goto L_005dc051;
L_005dc03a:; BB(0x005dc03a);
    /* 005dc03a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc03d: mov ecx, dword ptr [ecx + 0x118] */ r_ecx = R32((u32)(r_ecx+0x118u));
    /* 005dc043: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc046: mov eax, dword ptr [edx + 0x118] */ r_eax = R32((u32)(r_edx+0x118u));
    /* 005dc04c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc04e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5dc051u); call_ind(t); }
L_005dc051:; BB(0x005dc051);
    /* 005dc051: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc054: cmp dword ptr [eax + 0x11c], 0 */ {  u32 a = R32((u32)(r_eax+0x11cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc05b: je 0x5dc074 */ if (fZ) goto L_005dc074;
L_005dc05d:; BB(0x005dc05d);
    /* 005dc05d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc060: mov ecx, dword ptr [ecx + 0x11c] */ r_ecx = R32((u32)(r_ecx+0x11cu));
    /* 005dc066: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc069: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 005dc06f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc071: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5dc074u); call_ind(t); }
L_005dc074:; BB(0x005dc074);
    /* 005dc074: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc077: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc07e: je 0x5dc097 */ if (fZ) goto L_005dc097;
L_005dc080:; BB(0x005dc080);
    /* 005dc080: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc083: mov ecx, dword ptr [ecx + 0x124] */ r_ecx = R32((u32)(r_ecx+0x124u));
    /* 005dc089: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc08c: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005dc092: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc094: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5dc097u); call_ind(t); }
L_005dc097:; BB(0x005dc097);
    /* 005dc097: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc09a: cmp dword ptr [eax + 0x128], 0 */ {  u32 a = R32((u32)(r_eax+0x128u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc0a1: je 0x5dc0ba */ if (fZ) goto L_005dc0ba;
L_005dc0a3:; BB(0x005dc0a3);
    /* 005dc0a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc0a6: mov ecx, dword ptr [ecx + 0x128] */ r_ecx = R32((u32)(r_ecx+0x128u));
    /* 005dc0ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc0af: mov eax, dword ptr [edx + 0x128] */ r_eax = R32((u32)(r_edx+0x128u));
    /* 005dc0b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc0b7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5dc0bau); call_ind(t); }
L_005dc0ba:; BB(0x005dc0ba);
    /* 005dc0ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc0bd: call 0x5dd020 */ r_esp -= 4; W32(r_esp, 0x5dc0c2u); f_005dd020();
    /* 005dc0c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc0c4: je 0x5dc0da */ if (fZ) goto L_005dc0da;
L_005dc0c6:; BB(0x005dc0c6);
    /* 005dc0c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc0c9: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 005dc0cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc0d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc0d3: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dc0d8u); f_005dc2f8();
    /* 005dc0d8: jmp 0x5dc0eb */ goto L_005dc0eb;
L_005dc0da:; BB(0x005dc0da);
    /* 005dc0da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc0dd: call 0x5dcc52 */ r_esp -= 4; W32(r_esp, 0x5dc0e2u); f_005dcc52();
    /* 005dc0e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc0e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc0e6: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dc0ebu); f_005dc2f8();
L_005dc0eb:; BB(0x005dc0eb);
    /* 005dc0eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc0ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc0ee: ret  */ FN_RET(0x005dbffc); r_esp += 4; return;
}

void f_005dc0ef(void) /* FUN_005dc0ef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc0ef);
    /* 005dc0ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc0f0: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc0f2: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc0f5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dc0f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc0fb: call 0x5d9a0f */ r_esp -= 4; W32(r_esp, 0x5dc100u); f_005d9a0f();
    /* 005dc100: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc103: cmp dword ptr [eax + 0x114], 0 */ {  u32 a = R32((u32)(r_eax+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc10a: je 0x5dc123 */ if (fZ) goto L_005dc123;
L_005dc10c:; BB(0x005dc10c);
    /* 005dc10c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc10f: mov ecx, dword ptr [ecx + 0x114] */ r_ecx = R32((u32)(r_ecx+0x114u));
    /* 005dc115: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc118: mov eax, dword ptr [edx + 0x114] */ r_eax = R32((u32)(r_edx+0x114u));
    /* 005dc11e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc120: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5dc123u); call_ind(t); }
L_005dc123:; BB(0x005dc123);
    /* 005dc123: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc126: cmp dword ptr [eax + 0x118], 0 */ {  u32 a = R32((u32)(r_eax+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc12d: je 0x5dc146 */ if (fZ) goto L_005dc146;
L_005dc12f:; BB(0x005dc12f);
    /* 005dc12f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc132: mov ecx, dword ptr [ecx + 0x118] */ r_ecx = R32((u32)(r_ecx+0x118u));
    /* 005dc138: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc13b: mov eax, dword ptr [edx + 0x118] */ r_eax = R32((u32)(r_edx+0x118u));
    /* 005dc141: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc143: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5dc146u); call_ind(t); }
L_005dc146:; BB(0x005dc146);
    /* 005dc146: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc149: cmp dword ptr [eax + 0x11c], 0 */ {  u32 a = R32((u32)(r_eax+0x11cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc150: je 0x5dc169 */ if (fZ) goto L_005dc169;
L_005dc152:; BB(0x005dc152);
    /* 005dc152: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc155: mov ecx, dword ptr [ecx + 0x11c] */ r_ecx = R32((u32)(r_ecx+0x11cu));
    /* 005dc15b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc15e: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 005dc164: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc166: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5dc169u); call_ind(t); }
L_005dc169:; BB(0x005dc169);
    /* 005dc169: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc16c: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc173: je 0x5dc18c */ if (fZ) goto L_005dc18c;
L_005dc175:; BB(0x005dc175);
    /* 005dc175: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc178: mov ecx, dword ptr [ecx + 0x124] */ r_ecx = R32((u32)(r_ecx+0x124u));
    /* 005dc17e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc181: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005dc187: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc189: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5dc18cu); call_ind(t); }
L_005dc18c:; BB(0x005dc18c);
    /* 005dc18c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc193: jmp 0x5dc19e */ goto L_005dc19e;
L_005dc195:; BB(0x005dc195);
    /* 005dc195: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc198: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dc19b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dc19e:; BB(0x005dc19e);
    /* 005dc19e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc1a1: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dc1a7: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc1acu); f_005dd4d2();
    /* 005dc1ac: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc1af: jge 0x5dc1cd */ if ((fS==fO)) goto L_005dc1cd;
L_005dc1b1:; BB(0x005dc1b1);
    /* 005dc1b1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc1b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc1b8: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dc1bdu); f_005dc2bd();
    /* 005dc1bd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005dc1c0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc1c3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc1c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc1c8: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5dc1cbu); call_ind(t); }
    /* 005dc1cb: jmp 0x5dc195 */ goto L_005dc195;
L_005dc1cd:; BB(0x005dc1cd);
    /* 005dc1cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc1cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc1d0: ret  */ FN_RET(0x005dc0ef); r_esp += 4; return;
}

void f_005dc1d1(void) /* FUN_005dc1d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc1d1);
    /* 005dc1d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1d2: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc1d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc1d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dc1db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc1df: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x5dc1e4u); f_005d975e();
    /* 005dc1e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc1e7: cmp dword ptr [ecx + 0x114], 0 */ {  u32 a = R32((u32)(r_ecx+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc1ee: je 0x5dc20b */ if (fZ) goto L_005dc20b;
L_005dc1f0:; BB(0x005dc1f0);
    /* 005dc1f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dc1f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc1f7: mov ecx, dword ptr [eax + 0x114] */ r_ecx = R32((u32)(r_eax+0x114u));
    /* 005dc1fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc200: mov eax, dword ptr [edx + 0x114] */ r_eax = R32((u32)(r_edx+0x114u));
    /* 005dc206: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc208: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5dc20bu); call_ind(t); }
L_005dc20b:; BB(0x005dc20b);
    /* 005dc20b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc20e: cmp dword ptr [eax + 0x118], 0 */ {  u32 a = R32((u32)(r_eax+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc215: je 0x5dc235 */ if (fZ) goto L_005dc235;
L_005dc217:; BB(0x005dc217);
    /* 005dc217: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc21a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc21d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc21e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc221: mov ecx, dword ptr [edx + 0x118] */ r_ecx = R32((u32)(r_edx+0x118u));
    /* 005dc227: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc22a: mov edx, dword ptr [eax + 0x118] */ r_edx = R32((u32)(r_eax+0x118u));
    /* 005dc230: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dc232: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5dc235u); call_ind(t); }
L_005dc235:; BB(0x005dc235);
    /* 005dc235: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc238: cmp dword ptr [ecx + 0x11c], 0 */ {  u32 a = R32((u32)(r_ecx+0x11cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc23f: je 0x5dc25f */ if (fZ) goto L_005dc25f;
L_005dc241:; BB(0x005dc241);
    /* 005dc241: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dc244: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dc247: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc248: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc24b: mov ecx, dword ptr [eax + 0x11c] */ r_ecx = R32((u32)(r_eax+0x11cu));
    /* 005dc251: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc254: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 005dc25a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc25c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5dc25fu); call_ind(t); }
L_005dc25f:; BB(0x005dc25f);
    /* 005dc25f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc262: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc269: je 0x5dc289 */ if (fZ) goto L_005dc289;
L_005dc26b:; BB(0x005dc26b);
    /* 005dc26b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc26e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc271: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc272: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc275: mov ecx, dword ptr [edx + 0x124] */ r_ecx = R32((u32)(r_edx+0x124u));
    /* 005dc27b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc27e: mov edx, dword ptr [eax + 0x124] */ r_edx = R32((u32)(r_eax+0x124u));
    /* 005dc284: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dc286: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5dc289u); call_ind(t); }
L_005dc289:; BB(0x005dc289);
    /* 005dc289: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc28b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc28c: ret 4 */ FN_RET(0x005dc1d1); r_esp += 8; return;
}

void f_005dc28f(void) /* FUN_005dc28f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc28f);
    /* 005dc28f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc290: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc292: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc293: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc296: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc299: mov eax, dword ptr [eax + 0x5c] */ r_eax = R32((u32)(r_eax+0x5cu));
    /* 005dc29c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc29f: add eax, dword ptr [ecx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dc2a2: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc2a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc2a5: ret  */ FN_RET(0x005dc28f); r_esp += 4; return;
}

void f_005dc2a6(void) /* FUN_005dc2a6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc2a6);
    /* 005dc2a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2a7: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc2a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2aa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc2ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc2b0: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 005dc2b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc2b6: add eax, dword ptr [ecx + 0x70] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x70u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dc2b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc2bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc2bc: ret  */ FN_RET(0x005dc2a6); r_esp += 4; return;
}

void f_005dc2bd(void) /* FUN_005dc2bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc2bd);
    /* 005dc2bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2be: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc2c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2c1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc2c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc2c7: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc2ce: je 0x5dc2dc */ if (fZ) goto L_005dc2dc;
L_005dc2d0:; BB(0x005dc2d0);
    /* 005dc2d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc2d3: call 0x5dc489 */ r_esp -= 4; W32(r_esp, 0x5dc2d8u); f_005dc489();
    /* 005dc2d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc2da: jne 0x5dc2e0 */ if (!fZ) goto L_005dc2e0;
L_005dc2dc:; BB(0x005dc2dc);
    /* 005dc2dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dc2de: jmp 0x5dc2f2 */ goto L_005dc2f2;
L_005dc2e0:; BB(0x005dc2e0);
    /* 005dc2e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc2e7: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dc2ed: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dc2f2u); f_005dd560();
L_005dc2f2:; BB(0x005dc2f2);
    /* 005dc2f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc2f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc2f5: ret 4 */ FN_RET(0x005dc2bd); r_esp += 8; return;
}

void f_005dc2f8(void) /* FUN_005dc2f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc2f8);
    /* 005dc2f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc2fb: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc2fe: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dc301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc304: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 005dc30a: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc30fu); f_005dd4d2();
    /* 005dc30f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dc312: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc316: je 0x5dc426 */ if (fZ) goto L_005dc426;
L_005dc31c:; BB(0x005dc31c);
    /* 005dc31c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc31f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc322: sub edx, dword ptr [ecx + 0x130] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x130u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dc328: cmp dword ptr [ebp + 8], edx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc32b: jle 0x5dc33c */ if ((fZ||fS!=fO)) goto L_005dc33c;
L_005dc32d:; BB(0x005dc32d);
    /* 005dc32d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc330: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc333: sub ecx, dword ptr [eax + 0x130] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x130u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc339: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005dc33c:; BB(0x005dc33c);
    /* 005dc33c: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc340: jge 0x5dc351 */ if ((fS==fO)) goto L_005dc351;
L_005dc342:; BB(0x005dc342);
    /* 005dc342: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc345: mov dword ptr [edx + 0x12c], 0 */ W32((u32)(r_edx+0x12cu), 0x0u);
    /* 005dc34f: jmp 0x5dc35d */ goto L_005dc35d;
L_005dc351:; BB(0x005dc351);
    /* 005dc351: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc354: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc357: mov dword ptr [eax + 0x12c], ecx */ W32((u32)(r_eax+0x12cu), r_ecx);
L_005dc35d:; BB(0x005dc35d);
    /* 005dc35d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc35f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc362: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dc367u); f_005dc2bd();
    /* 005dc367: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dc36a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc36d: call 0x5e8f42 */ r_esp -= 4; W32(r_esp, 0x5dc372u); f_005e8f42();
    /* 005dc372: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005dc375: mov dword ptr [ebp - 0xc], 0xf */ W32((u32)(r_ebp+0xfffffff4u), 0xfu);
    /* 005dc37c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dc383: jmp 0x5dc38e */ goto L_005dc38e;
L_005dc385:; BB(0x005dc385);
    /* 005dc385: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc388: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dc38b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005dc38e:; BB(0x005dc38e);
    /* 005dc38e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc391: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc394: jge 0x5dc426 */ if ((fS==fO)) goto L_005dc426;
L_005dc39a:; BB(0x005dc39a);
    /* 005dc39a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc39d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc39e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc3a1: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dc3a6u); f_005dc2bd();
    /* 005dc3a6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dc3a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc3ac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc3af: cmp eax, dword ptr [edx + 0x12c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x12cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc3b5: jl 0x5dc3ce */ if ((fS!=fO)) goto L_005dc3ce;
L_005dc3b7:; BB(0x005dc3b7);
    /* 005dc3b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc3ba: mov edx, dword ptr [ecx + 0x12c] */ r_edx = R32((u32)(r_ecx+0x12cu));
    /* 005dc3c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc3c3: add edx, dword ptr [eax + 0x130] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x130u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dc3c9: cmp dword ptr [ebp - 8], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc3cc: jl 0x5dc3e7 */ if ((fS!=fO)) goto L_005dc3e7;
L_005dc3ce:; BB(0x005dc3ce);
    /* 005dc3ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc3d1: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5dc3d6u); f_005d9690();
    /* 005dc3d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc3d8: je 0x5dc3e5 */ if (fZ) goto L_005dc3e5;
L_005dc3da:; BB(0x005dc3da);
    /* 005dc3da: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc3dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dc3df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc3e2: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5dc3e5u); call_ind(t); }
L_005dc3e5:; BB(0x005dc3e5);
    /* 005dc3e5: jmp 0x5dc421 */ goto L_005dc421;
L_005dc3e7:; BB(0x005dc3e7);
    /* 005dc3e7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc3ea: call 0x5dc2a6 */ r_esp -= 4; W32(r_esp, 0x5dc3efu); f_005dc2a6();
    /* 005dc3ef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc3f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc3f5: sub edx, dword ptr [ecx + 0x12c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x12cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dc3fb: imul edx, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dc3ff: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dc401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc402: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc405: call 0x5dc28f */ r_esp -= 4; W32(r_esp, 0x5dc40au); f_005dc28f();
    /* 005dc40a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc40b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc40e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc410: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc413: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5dc416u); call_ind(t); }
    /* 005dc416: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc419: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc41b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc41e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5dc421u); call_ind(t); }
L_005dc421:; BB(0x005dc421);
    /* 005dc421: jmp 0x5dc385 */ goto L_005dc385;
L_005dc426:; BB(0x005dc426);
    /* 005dc426: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc429: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 005dc42f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc430: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc433: mov ecx, dword ptr [edx + 0x124] */ r_ecx = R32((u32)(r_edx+0x124u));
    /* 005dc439: call 0x5e729b */ r_esp -= 4; W32(r_esp, 0x5dc43eu); f_005e729b();
    /* 005dc43e: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc440: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc441: ret 4 */ FN_RET(0x005dc2f8); r_esp += 8; return;
}

void f_005dc444(void) /* FUN_005dc444 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc444);
    /* 005dc444: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc445: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc447: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc448: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc44b: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc44f: jne 0x5dc468 */ if (!fZ) goto L_005dc468;
L_005dc451:; BB(0x005dc451);
    /* 005dc451: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc454: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 005dc45a: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc45d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc45e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc461: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dc466u); f_005dc2f8();
    /* 005dc466: jmp 0x5dc483 */ goto L_005dc483;
L_005dc468:; BB(0x005dc468);
    /* 005dc468: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc46c: jne 0x5dc483 */ if (!fZ) goto L_005dc483;
L_005dc46e:; BB(0x005dc46e);
    /* 005dc46e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc471: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 005dc477: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dc47a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc47b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc47e: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dc483u); f_005dc2f8();
L_005dc483:; BB(0x005dc483);
    /* 005dc483: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc485: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc486: ret 8 */ FN_RET(0x005dc444); r_esp += 12; return;
}

void f_005dc489(void) /* FUN_005dc489 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc489);
    /* 005dc489: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc48a: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc48c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc48d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc490: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc493: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 005dc499: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc49eu); f_005dd4d2();
    /* 005dc49e: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc4a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc4a1: ret  */ FN_RET(0x005dc489); r_esp += 4; return;
}

void f_005dc4b6(void) /* FUN_005dc4b6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc4b6);
    /* 005dc4b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4b7: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc4b9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc4bc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dc4bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc4c2: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 005dc4c8: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc4cdu); f_005dd4d2();
    /* 005dc4cd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dc4d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc4d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc4d7: call 0x5db01c */ r_esp -= 4; W32(r_esp, 0x5dc4dcu); f_005db01c();
    /* 005dc4dc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dc4df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4e0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc4e3: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 005dc4e9: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x5dc4eeu); f_005dd425();
    /* 005dc4ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc4f1: cmp dword ptr [ecx + 0x34], -1 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc4f5: jne 0x5dc514 */ if (!fZ) goto L_005dc514;
L_005dc4f7:; BB(0x005dc4f7);
    /* 005dc4f7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc4fa: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dc4fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4fe: mov eax, esp */ r_eax = r_esp;
    /* 005dc500: mov cx, word ptr [edx] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 005dc503: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005dc506: mov dl, byte ptr [edx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 005dc509: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005dc50c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc50f: call 0x5db115 */ r_esp -= 4; W32(r_esp, 0x5dc514u); f_005db115();
L_005dc514:; BB(0x005dc514);
    /* 005dc514: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc517: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc518: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc51b: call 0x5db049 */ r_esp -= 4; W32(r_esp, 0x5dc520u); f_005db049();
    /* 005dc520: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc523: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc526: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005dc529: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005dc52c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc52f: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005dc532: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc533: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc536: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005dc539: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc53a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc53d: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005dc540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc541: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc544: call 0x5db062 */ r_esp -= 4; W32(r_esp, 0x5dc549u); f_005db062();
    /* 005dc549: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc54c: mov edx, dword ptr [ecx + 0x138] */ r_edx = R32((u32)(r_ecx+0x138u));
    /* 005dc552: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc553: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc556: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5dc55bu); f_005e8740();
    /* 005dc55b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc55e: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005dc561: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc562: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc565: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5dc56au); f_005e8775();
    /* 005dc56a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc56c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc56f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005dc572: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc573: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc576: call 0x5e8eba */ r_esp -= 4; W32(r_esp, 0x5dc57bu); f_005e8eba();
    /* 005dc57b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc57e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc581: cmp edx, dword ptr [ecx + 0x130] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x130u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc587: jl 0x5dc5b8 */ if ((fS!=fO)) goto L_005dc5b8;
L_005dc589:; BB(0x005dc589);
    /* 005dc589: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc58c: mov ecx, dword ptr [eax + 0x134] */ r_ecx = R32((u32)(r_eax+0x134u));
    /* 005dc592: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc595: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc598: mov dword ptr [edx + 0x134], ecx */ W32((u32)(r_edx+0x134u), r_ecx);
    /* 005dc59e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc5a1: cmp dword ptr [eax + 0x134], 1 */ {  u32 a = R32((u32)(r_eax+0x134u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc5a8: jne 0x5dc5b8 */ if (!fZ) goto L_005dc5b8;
L_005dc5aa:; BB(0x005dc5aa);
    /* 005dc5aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc5ad: mov ecx, dword ptr [ecx + 0x124] */ r_ecx = R32((u32)(r_ecx+0x124u));
    /* 005dc5b3: call 0x5e71b8 */ r_esp -= 4; W32(r_esp, 0x5dc5b8u); f_005e71b8();
L_005dc5b8:; BB(0x005dc5b8);
    /* 005dc5b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc5bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc5bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc5be: ret 4 */ FN_RET(0x005dc4b6); r_esp += 8; return;
}

void f_005dc5c1(void) /* FUN_005dc5c1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc5c1);
    /* 005dc5c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc5c2: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc5c4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc5c7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dc5ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc5d1: jmp 0x5dc5dc */ goto L_005dc5dc;
L_005dc5d3:; BB(0x005dc5d3);
    /* 005dc5d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc5d6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dc5d9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dc5dc:; BB(0x005dc5dc);
    /* 005dc5dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc5df: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dc5e5: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc5eau); f_005dd4d2();
    /* 005dc5ea: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc5ed: jge 0x5dc637 */ if ((fS==fO)) goto L_005dc637;
L_005dc5ef:; BB(0x005dc5ef);
    /* 005dc5ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc5f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc5f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc5f6: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dc5fbu); f_005dc2bd();
    /* 005dc5fb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005dc5fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc601: call 0x5db035 */ r_esp -= 4; W32(r_esp, 0x5dc606u); f_005db035();
    /* 005dc606: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc609: jne 0x5dc621 */ if (!fZ) goto L_005dc621;
L_005dc60b:; BB(0x005dc60b);
    /* 005dc60b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc60e: call 0x5db008 */ r_esp -= 4; W32(r_esp, 0x5dc613u); f_005db008();
    /* 005dc613: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc615: jne 0x5dc61f */ if (!fZ) goto L_005dc61f;
L_005dc617:; BB(0x005dc617);
    /* 005dc617: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc61a: call 0x5daf7c */ r_esp -= 4; W32(r_esp, 0x5dc61fu); f_005daf7c();
L_005dc61f:; BB(0x005dc61f);
    /* 005dc61f: jmp 0x5dc635 */ goto L_005dc635;
L_005dc621:; BB(0x005dc621);
    /* 005dc621: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc624: call 0x5db008 */ r_esp -= 4; W32(r_esp, 0x5dc629u); f_005db008();
    /* 005dc629: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc62b: je 0x5dc635 */ if (fZ) goto L_005dc635;
L_005dc62d:; BB(0x005dc62d);
    /* 005dc62d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc630: call 0x5dafd0 */ r_esp -= 4; W32(r_esp, 0x5dc635u); f_005dafd0();
L_005dc635:; BB(0x005dc635);
    /* 005dc635: jmp 0x5dc5d3 */ goto L_005dc5d3;
L_005dc637:; BB(0x005dc637);
    /* 005dc637: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc63a: call 0x5dd020 */ r_esp -= 4; W32(r_esp, 0x5dc63fu); f_005dd020();
    /* 005dc63f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc641: jne 0x5dc678 */ if (!fZ) goto L_005dc678;
L_005dc643:; BB(0x005dc643);
    /* 005dc643: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc646: call 0x5dcd5b */ r_esp -= 4; W32(r_esp, 0x5dc64bu); f_005dcd5b();
    /* 005dc64b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc64e: jle 0x5dc65e */ if ((fZ||fS!=fO)) goto L_005dc65e;
L_005dc650:; BB(0x005dc650);
    /* 005dc650: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dc653: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc654: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc657: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dc65cu); f_005dc2f8();
    /* 005dc65c: jmp 0x5dc678 */ goto L_005dc678;
L_005dc65e:; BB(0x005dc65e);
    /* 005dc65e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc661: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 005dc667: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dc66a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dc66d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dc66f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc670: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc673: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dc678u); f_005dc2f8();
L_005dc678:; BB(0x005dc678);
    /* 005dc678: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc67b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc67c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc67f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dc681: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc684: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5dc687u); call_ind(t); }
    /* 005dc687: mov eax, 1 */ r_eax = 0x1u;
    /* 005dc68c: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc68e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc68f: ret 4 */ FN_RET(0x005dc5c1); r_esp += 8; return;
}

void f_005dc692(void) /* FUN_005dc692 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc692);
    /* 005dc692: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc693: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc695: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc698: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dc69b: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 005dc6a2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005dc6a9: jmp 0x5dc6b4 */ goto L_005dc6b4;
L_005dc6ab:; BB(0x005dc6ab);
    /* 005dc6ab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc6ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dc6b1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005dc6b4:; BB(0x005dc6b4);
    /* 005dc6b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc6b7: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dc6bd: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc6c2u); f_005dd4d2();
    /* 005dc6c2: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc6c5: jge 0x5dc758 */ if ((fS==fO)) goto L_005dc758;
L_005dc6cb:; BB(0x005dc6cb);
    /* 005dc6cb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc6ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc6cf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc6d2: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dc6d7u); f_005dc2bd();
    /* 005dc6d7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dc6da: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc6de: je 0x5dc6fd */ if (fZ) goto L_005dc6fd;
L_005dc6e0:; BB(0x005dc6e0);
    /* 005dc6e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dc6e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc6e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc6e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dc6e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc6ec: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5dc6efu); call_ind(t); }
    /* 005dc6ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc6f0: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x5dc6f5u); f_006325b0();
    /* 005dc6f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc6f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dc6fb: jmp 0x5dc718 */ goto L_005dc718;
L_005dc6fd:; BB(0x005dc6fd);
    /* 005dc6fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dc700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc701: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc704: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dc706: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc709: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5dc70cu); call_ind(t); }
    /* 005dc70c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc70d: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5dc712u); f_006240c0();
    /* 005dc712: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc715: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dc718:; BB(0x005dc718);
    /* 005dc718: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc71c: jne 0x5dc73f */ if (!fZ) goto L_005dc73f;
L_005dc71e:; BB(0x005dc71e);
    /* 005dc71e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc721: call 0x5db035 */ r_esp -= 4; W32(r_esp, 0x5dc726u); f_005db035();
    /* 005dc726: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005dc729: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc72c: call 0x5db008 */ r_esp -= 4; W32(r_esp, 0x5dc731u); f_005db008();
    /* 005dc731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc733: jne 0x5dc73d */ if (!fZ) goto L_005dc73d;
L_005dc735:; BB(0x005dc735);
    /* 005dc735: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc738: call 0x5daf7c */ r_esp -= 4; W32(r_esp, 0x5dc73du); f_005daf7c();
L_005dc73d:; BB(0x005dc73d);
    /* 005dc73d: jmp 0x5dc753 */ goto L_005dc753;
L_005dc73f:; BB(0x005dc73f);
    /* 005dc73f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc742: call 0x5db008 */ r_esp -= 4; W32(r_esp, 0x5dc747u); f_005db008();
    /* 005dc747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc749: je 0x5dc753 */ if (fZ) goto L_005dc753;
L_005dc74b:; BB(0x005dc74b);
    /* 005dc74b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc74e: call 0x5dafd0 */ r_esp -= 4; W32(r_esp, 0x5dc753u); f_005dafd0();
L_005dc753:; BB(0x005dc753);
    /* 005dc753: jmp 0x5dc6ab */ goto L_005dc6ab;
L_005dc758:; BB(0x005dc758);
    /* 005dc758: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc75c: jne 0x5dc778 */ if (!fZ) goto L_005dc778;
L_005dc75e:; BB(0x005dc75e);
    /* 005dc75e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dc765: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc769: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc76c: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dc771u); f_005dc2bd();
    /* 005dc771: mov ecx, eax */ r_ecx = r_eax;
    /* 005dc773: call 0x5daf7c */ r_esp -= 4; W32(r_esp, 0x5dc778u); f_005daf7c();
L_005dc778:; BB(0x005dc778);
    /* 005dc778: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc77b: call 0x5dd020 */ r_esp -= 4; W32(r_esp, 0x5dc780u); f_005dd020();
    /* 005dc780: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc782: jne 0x5dc7b9 */ if (!fZ) goto L_005dc7b9;
L_005dc784:; BB(0x005dc784);
    /* 005dc784: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc787: call 0x5dcd5b */ r_esp -= 4; W32(r_esp, 0x5dc78cu); f_005dcd5b();
    /* 005dc78c: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc78f: jle 0x5dc79f */ if ((fZ||fS!=fO)) goto L_005dc79f;
L_005dc791:; BB(0x005dc791);
    /* 005dc791: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc794: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc795: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc798: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dc79du); f_005dc2f8();
    /* 005dc79d: jmp 0x5dc7b9 */ goto L_005dc7b9;
L_005dc79f:; BB(0x005dc79f);
    /* 005dc79f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc7a2: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 005dc7a8: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dc7ab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc7ae: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc7b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc7b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc7b4: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dc7b9u); f_005dc2f8();
L_005dc7b9:; BB(0x005dc7b9);
    /* 005dc7b9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc7bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc7bd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc7c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc7c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc7c5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5dc7c8u); call_ind(t); }
    /* 005dc7c8: mov eax, 1 */ r_eax = 0x1u;
    /* 005dc7cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc7cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc7d0: ret 8 */ FN_RET(0x005dc692); r_esp += 12; return;
}

void f_005dc7d3(void) /* FUN_005dc7d3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc7d3);
    /* 005dc7d3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc7d4: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc7d6: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc7d9: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005dc7dc: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 005dc7e3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc7e6: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc7ed: je 0x5dc9a8 */ if (fZ) goto L_005dc9a8;
L_005dc7f3:; BB(0x005dc7f3);
    /* 005dc7f3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dc7fa: jmp 0x5dc805 */ goto L_005dc805;
L_005dc7fc:; BB(0x005dc7fc);
    /* 005dc7fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc7ff: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc802: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005dc805:; BB(0x005dc805);
    /* 005dc805: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc808: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dc80e: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc813u); f_005dd4d2();
    /* 005dc813: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc816: jge 0x5dc8c8 */ if ((fS==fO)) goto L_005dc8c8;
L_005dc81c:; BB(0x005dc81c);
    /* 005dc81c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc81f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc820: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc823: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dc828u); f_005dc2bd();
    /* 005dc828: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005dc82b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc82f: je 0x5dc84e */ if (fZ) goto L_005dc84e;
L_005dc831:; BB(0x005dc831);
    /* 005dc831: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc834: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dc836: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc839: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5dc83cu); call_ind(t); }
    /* 005dc83c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc83d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dc840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc841: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x5dc846u); f_006325b0();
    /* 005dc846: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc849: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dc84c: jmp 0x5dc869 */ goto L_005dc869;
L_005dc84e:; BB(0x005dc84e);
    /* 005dc84e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc851: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dc853: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc856: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5dc859u); call_ind(t); }
    /* 005dc859: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc85a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dc85d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc85e: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5dc863u); f_006240c0();
    /* 005dc863: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc866: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dc869:; BB(0x005dc869);
    /* 005dc869: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc86d: jne 0x5dc8c3 */ if (!fZ) goto L_005dc8c3;
L_005dc86f:; BB(0x005dc86f);
    /* 005dc86f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc872: call 0x5db035 */ r_esp -= 4; W32(r_esp, 0x5dc877u); f_005db035();
    /* 005dc877: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dc87a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc87d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dc87f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc882: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5dc885u); call_ind(t); }
    /* 005dc885: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc889: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc88c: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dc892: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5dc897u); f_005dd469();
    /* 005dc897: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc89a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005dc89d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dc8a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dc8a3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc8a7: je 0x5dc8ba */ if (fZ) goto L_005dc8ba;
L_005dc8a9:; BB(0x005dc8a9);
    /* 005dc8a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8ab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc8ae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dc8b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc8b3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5dc8b5u); call_ind(t); }
    /* 005dc8b5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dc8b8: jmp 0x5dc8c1 */ goto L_005dc8c1;
L_005dc8ba:; BB(0x005dc8ba);
    /* 005dc8ba: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005dc8c1:; BB(0x005dc8c1);
    /* 005dc8c1: jmp 0x5dc8c8 */ goto L_005dc8c8;
L_005dc8c3:; BB(0x005dc8c3);
    /* 005dc8c3: jmp 0x5dc7fc */ goto L_005dc7fc;
L_005dc8c8:; BB(0x005dc8c8);
    /* 005dc8c8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dc8cf: jmp 0x5dc8da */ goto L_005dc8da;
L_005dc8d1:; BB(0x005dc8d1);
    /* 005dc8d1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc8d4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dc8d7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005dc8da:; BB(0x005dc8da);
    /* 005dc8da: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc8dd: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dc8e3: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc8e8u); f_005dd4d2();
    /* 005dc8e8: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc8eb: jge 0x5dc906 */ if ((fS==fO)) goto L_005dc906;
L_005dc8ed:; BB(0x005dc8ed);
    /* 005dc8ed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc8f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc8f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8f5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc8f8: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dc8fdu); f_005dc2bd();
    /* 005dc8fd: mov ecx, eax */ r_ecx = r_eax;
    /* 005dc8ff: call 0x5db01c */ r_esp -= 4; W32(r_esp, 0x5dc904u); f_005db01c();
    /* 005dc904: jmp 0x5dc8d1 */ goto L_005dc8d1;
L_005dc906:; BB(0x005dc906);
    /* 005dc906: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc909: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dc90f: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc914u); f_005dd4d2();
    /* 005dc914: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc917: cmp eax, dword ptr [edx + 0x130] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x130u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc91d: jl 0x5dc94e */ if ((fS!=fO)) goto L_005dc94e;
L_005dc91f:; BB(0x005dc91f);
    /* 005dc91f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc922: mov ecx, dword ptr [eax + 0x134] */ r_ecx = R32((u32)(r_eax+0x134u));
    /* 005dc928: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc92b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc92e: mov dword ptr [edx + 0x134], ecx */ W32((u32)(r_edx+0x134u), r_ecx);
    /* 005dc934: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc937: cmp dword ptr [eax + 0x134], 0 */ {  u32 a = R32((u32)(r_eax+0x134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc93e: jne 0x5dc94e */ if (!fZ) goto L_005dc94e;
L_005dc940:; BB(0x005dc940);
    /* 005dc940: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc943: mov ecx, dword ptr [ecx + 0x124] */ r_ecx = R32((u32)(r_ecx+0x124u));
    /* 005dc949: call 0x5e7208 */ r_esp -= 4; W32(r_esp, 0x5dc94eu); f_005e7208();
L_005dc94e:; BB(0x005dc94e);
    /* 005dc94e: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc952: je 0x5dc996 */ if (fZ) goto L_005dc996;
L_005dc954:; BB(0x005dc954);
    /* 005dc954: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc957: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dc95d: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc962u); f_005dd4d2();
    /* 005dc962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc964: je 0x5dc996 */ if (fZ) goto L_005dc996;
L_005dc966:; BB(0x005dc966);
    /* 005dc966: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc969: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 005dc96f: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc974u); f_005dd4d2();
    /* 005dc974: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc977: jne 0x5dc98a */ if (!fZ) goto L_005dc98a;
L_005dc979:; BB(0x005dc979);
    /* 005dc979: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc97c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc97f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc980: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc983: call 0x5dc5c1 */ r_esp -= 4; W32(r_esp, 0x5dc988u); f_005dc5c1();
    /* 005dc988: jmp 0x5dc996 */ goto L_005dc996;
L_005dc98a:; BB(0x005dc98a);
    /* 005dc98a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc98d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc98e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc991: call 0x5dc5c1 */ r_esp -= 4; W32(r_esp, 0x5dc996u); f_005dc5c1();
L_005dc996:; BB(0x005dc996);
    /* 005dc996: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc999: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 005dc99f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc9a0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc9a3: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dc9a8u); f_005dc2f8();
L_005dc9a8:; BB(0x005dc9a8);
    /* 005dc9a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc9aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc9ab: ret 8 */ FN_RET(0x005dc7d3); r_esp += 12; return;
}

void f_005dc9ae(void) /* FUN_005dc9ae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc9ae);
    /* 005dc9ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc9af: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc9b1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc9b4: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dc9b7: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 005dc9be: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dc9c1: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc9c8: je 0x5dcb43 */ if (fZ) goto L_005dcb43;
L_005dc9ce:; BB(0x005dc9ce);
    /* 005dc9ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc9d5: jmp 0x5dc9e0 */ goto L_005dc9e0;
L_005dc9d7:; BB(0x005dc9d7);
    /* 005dc9d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc9da: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc9dd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005dc9e0:; BB(0x005dc9e0);
    /* 005dc9e0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dc9e3: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dc9e9: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dc9eeu); f_005dd4d2();
    /* 005dc9ee: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc9f1: jge 0x5dca63 */ if ((fS==fO)) goto L_005dca63;
L_005dc9f3:; BB(0x005dc9f3);
    /* 005dc9f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc9f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc9f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dc9fa: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dc9ffu); f_005dc2bd();
    /* 005dc9ff: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005dca02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dca05: call 0x5db035 */ r_esp -= 4; W32(r_esp, 0x5dca0au); f_005db035();
    /* 005dca0a: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dca0d: jne 0x5dca5e */ if (!fZ) goto L_005dca5e;
L_005dca0f:; BB(0x005dca0f);
    /* 005dca0f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dca12: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dca15: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dca18: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dca1a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dca1d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5dca20u); call_ind(t); }
    /* 005dca20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dca23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dca24: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dca27: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dca2d: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5dca32u); f_005dd469();
    /* 005dca32: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dca35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dca38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dca3b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005dca3e: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dca42: je 0x5dca55 */ if (fZ) goto L_005dca55;
L_005dca44:; BB(0x005dca44);
    /* 005dca44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dca46: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dca49: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dca4b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dca4e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5dca50u); call_ind(t); }
    /* 005dca50: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dca53: jmp 0x5dca5c */ goto L_005dca5c;
L_005dca55:; BB(0x005dca55);
    /* 005dca55: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dca5c:; BB(0x005dca5c);
    /* 005dca5c: jmp 0x5dca63 */ goto L_005dca63;
L_005dca5e:; BB(0x005dca5e);
    /* 005dca5e: jmp 0x5dc9d7 */ goto L_005dc9d7;
L_005dca63:; BB(0x005dca63);
    /* 005dca63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dca6a: jmp 0x5dca75 */ goto L_005dca75;
L_005dca6c:; BB(0x005dca6c);
    /* 005dca6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dca6f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dca72: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005dca75:; BB(0x005dca75);
    /* 005dca75: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dca78: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dca7e: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dca83u); f_005dd4d2();
    /* 005dca83: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dca86: jge 0x5dcaa1 */ if ((fS==fO)) goto L_005dcaa1;
L_005dca88:; BB(0x005dca88);
    /* 005dca88: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dca8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dca8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dca8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dca90: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dca93: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dca98u); f_005dc2bd();
    /* 005dca98: mov ecx, eax */ r_ecx = r_eax;
    /* 005dca9a: call 0x5db01c */ r_esp -= 4; W32(r_esp, 0x5dca9fu); f_005db01c();
    /* 005dca9f: jmp 0x5dca6c */ goto L_005dca6c;
L_005dcaa1:; BB(0x005dcaa1);
    /* 005dcaa1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcaa4: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dcaaa: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dcaafu); f_005dd4d2();
    /* 005dcaaf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcab2: cmp eax, dword ptr [ecx + 0x130] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x130u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcab8: jl 0x5dcae9 */ if ((fS!=fO)) goto L_005dcae9;
L_005dcaba:; BB(0x005dcaba);
    /* 005dcaba: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcabd: mov eax, dword ptr [edx + 0x134] */ r_eax = R32((u32)(r_edx+0x134u));
    /* 005dcac3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dcac6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcac9: mov dword ptr [ecx + 0x134], eax */ W32((u32)(r_ecx+0x134u), r_eax);
    /* 005dcacf: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcad2: cmp dword ptr [edx + 0x134], 0 */ {  u32 a = R32((u32)(r_edx+0x134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcad9: jne 0x5dcae9 */ if (!fZ) goto L_005dcae9;
L_005dcadb:; BB(0x005dcadb);
    /* 005dcadb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcade: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 005dcae4: call 0x5e7208 */ r_esp -= 4; W32(r_esp, 0x5dcae9u); f_005e7208();
L_005dcae9:; BB(0x005dcae9);
    /* 005dcae9: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcaed: je 0x5dcb31 */ if (fZ) goto L_005dcb31;
L_005dcaef:; BB(0x005dcaef);
    /* 005dcaef: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcaf2: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dcaf8: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dcafdu); f_005dd4d2();
    /* 005dcafd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcaff: je 0x5dcb31 */ if (fZ) goto L_005dcb31;
L_005dcb01:; BB(0x005dcb01);
    /* 005dcb01: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcb04: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dcb0a: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dcb0fu); f_005dd4d2();
    /* 005dcb0f: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcb12: jne 0x5dcb25 */ if (!fZ) goto L_005dcb25;
L_005dcb14:; BB(0x005dcb14);
    /* 005dcb14: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcb17: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dcb1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb1b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcb1e: call 0x5dc5c1 */ r_esp -= 4; W32(r_esp, 0x5dcb23u); f_005dc5c1();
    /* 005dcb23: jmp 0x5dcb31 */ goto L_005dcb31;
L_005dcb25:; BB(0x005dcb25);
    /* 005dcb25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcb28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb29: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcb2c: call 0x5dc5c1 */ r_esp -= 4; W32(r_esp, 0x5dcb31u); f_005dc5c1();
L_005dcb31:; BB(0x005dcb31);
    /* 005dcb31: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcb34: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 005dcb3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb3b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcb3e: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dcb43u); f_005dc2f8();
L_005dcb43:; BB(0x005dcb43);
    /* 005dcb43: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcb45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcb46: ret 4 */ FN_RET(0x005dc9ae); r_esp += 8; return;
}

void f_005dcb49(void) /* FUN_005dcb49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcb49);
    /* 005dcb49: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb4a: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcb4c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcb4f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005dcb52: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcb55: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcb5c: jne 0x5dcb63 */ if (!fZ) goto L_005dcb63;
L_005dcb5e:; BB(0x005dcb5e);
    /* 005dcb5e: jmp 0x5dcbf7 */ goto L_005dcbf7;
L_005dcb63:; BB(0x005dcb63);
    /* 005dcb63: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcb66: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dcb6c: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dcb71u); f_005dd4d2();
    /* 005dcb71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcb73: je 0x5dcbcb */ if (fZ) goto L_005dcbcb;
L_005dcb75:; BB(0x005dcb75);
    /* 005dcb75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb77: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcb7a: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dcb7fu); f_005dc2bd();
    /* 005dcb7f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dcb82: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcb85: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dcb87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcb8a: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5dcb8du); call_ind(t); }
    /* 005dcb8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcb90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb91: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcb94: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dcb9a: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5dcb9fu); f_005dd469();
    /* 005dcb9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcba2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005dcba5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcba8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dcbab: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcbaf: je 0x5dcbc2 */ if (fZ) goto L_005dcbc2;
L_005dcbb1:; BB(0x005dcbb1);
    /* 005dcbb1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcbb3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcbb6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dcbb8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcbbb: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5dcbbdu); call_ind(t); }
    /* 005dcbbd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dcbc0: jmp 0x5dcbc9 */ goto L_005dcbc9;
L_005dcbc2:; BB(0x005dcbc2);
    /* 005dcbc2: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005dcbc9:; BB(0x005dcbc9);
    /* 005dcbc9: jmp 0x5dcb63 */ goto L_005dcb63;
L_005dcbcb:; BB(0x005dcbcb);
    /* 005dcbcb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcbce: mov dword ptr [ecx + 0x12c], 0 */ W32((u32)(r_ecx+0x12cu), 0x0u);
    /* 005dcbd8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcbdb: mov dword ptr [edx + 0x134], 0 */ W32((u32)(r_edx+0x134u), 0x0u);
    /* 005dcbe5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcbe8: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 005dcbee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcbef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcbf2: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dcbf7u); f_005dc2f8();
L_005dcbf7:; BB(0x005dcbf7);
    /* 005dcbf7: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcbf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcbfa: ret  */ FN_RET(0x005dcb49); r_esp += 4; return;
}

void f_005dcbfb(void) /* FUN_005dcbfb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcbfb);
    /* 005dcbfb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcbfc: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcbfe: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcc01: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dcc04: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dcc0b: jmp 0x5dcc16 */ goto L_005dcc16;
L_005dcc0d:; BB(0x005dcc0d);
    /* 005dcc0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcc10: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dcc13: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dcc16:; BB(0x005dcc16);
    /* 005dcc16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcc19: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dcc1f: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dcc24u); f_005dd4d2();
    /* 005dcc24: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcc27: jge 0x5dcc4e */ if ((fS==fO)) goto L_005dcc4e;
L_005dcc29:; BB(0x005dcc29);
    /* 005dcc29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcc2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcc2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcc30: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dcc35u); f_005dc2bd();
    /* 005dcc35: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005dcc38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcc3b: call 0x5db008 */ r_esp -= 4; W32(r_esp, 0x5dcc40u); f_005db008();
    /* 005dcc40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcc42: je 0x5dcc4c */ if (fZ) goto L_005dcc4c;
L_005dcc44:; BB(0x005dcc44);
    /* 005dcc44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcc47: call 0x5dafd0 */ r_esp -= 4; W32(r_esp, 0x5dcc4cu); f_005dafd0();
L_005dcc4c:; BB(0x005dcc4c);
    /* 005dcc4c: jmp 0x5dcc0d */ goto L_005dcc0d;
L_005dcc4e:; BB(0x005dcc4e);
    /* 005dcc4e: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcc50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcc51: ret  */ FN_RET(0x005dcbfb); r_esp += 4; return;
}

void f_005dcc52(void) /* FUN_005dcc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcc52);
    /* 005dcc52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcc53: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcc55: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcc58: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dcc5b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dcc62: jmp 0x5dcc6d */ goto L_005dcc6d;
L_005dcc64:; BB(0x005dcc64);
    /* 005dcc64: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcc67: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dcc6a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dcc6d:; BB(0x005dcc6d);
    /* 005dcc6d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcc70: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dcc76: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dcc7bu); f_005dd4d2();
    /* 005dcc7b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcc7e: jge 0x5dccae */ if ((fS==fO)) goto L_005dccae;
L_005dcc80:; BB(0x005dcc80);
    /* 005dcc80: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcc83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcc84: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcc87: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dcc8cu); f_005dc2bd();
    /* 005dcc8c: mov ecx, eax */ r_ecx = r_eax;
    /* 005dcc8e: call 0x5db008 */ r_esp -= 4; W32(r_esp, 0x5dcc93u); f_005db008();
    /* 005dcc93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcc95: je 0x5dccac */ if (fZ) goto L_005dccac;
L_005dcc97:; BB(0x005dcc97);
    /* 005dcc97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcc9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcc9b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcc9e: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dcca3u); f_005dc2bd();
    /* 005dcca3: mov ecx, eax */ r_ecx = r_eax;
    /* 005dcca5: call 0x5db035 */ r_esp -= 4; W32(r_esp, 0x5dccaau); f_005db035();
    /* 005dccaa: jmp 0x5dccb1 */ goto L_005dccb1;
L_005dccac:; BB(0x005dccac);
    /* 005dccac: jmp 0x5dcc64 */ goto L_005dcc64;
L_005dccae:; BB(0x005dccae);
    /* 005dccae: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005dccb1:; BB(0x005dccb1);
    /* 005dccb1: mov esp, ebp */ r_esp = r_ebp;
    /* 005dccb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dccb4: ret  */ FN_RET(0x005dcc52); r_esp += 4; return;
}

void f_005dccb5(void) /* FUN_005dccb5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dccb5);
    /* 005dccb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dccb6: mov ebp, esp */ r_ebp = r_esp;
    /* 005dccb8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dccbb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005dccbe: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dccc1: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dccc8: je 0x5dcd52 */ if (fZ) goto L_005dcd52;
L_005dccce:; BB(0x005dccce);
    /* 005dccce: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005dccd5: jmp 0x5dcce0 */ goto L_005dcce0;
L_005dccd7:; BB(0x005dccd7);
    /* 005dccd7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dccda: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dccdd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005dcce0:; BB(0x005dcce0);
    /* 005dcce0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcce3: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dcce9: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dcceeu); f_005dd4d2();
    /* 005dccee: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dccf1: jge 0x5dcd52 */ if ((fS==fO)) goto L_005dcd52;
L_005dccf3:; BB(0x005dccf3);
    /* 005dccf3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dccf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dccf7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dccfa: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dccffu); f_005dc2bd();
    /* 005dccff: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005dcd02: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcd06: je 0x5dcd25 */ if (fZ) goto L_005dcd25;
L_005dcd08:; BB(0x005dcd08);
    /* 005dcd08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dcd0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcd0c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcd0f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dcd11: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcd14: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5dcd17u); call_ind(t); }
    /* 005dcd17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcd18: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x5dcd1du); f_006325b0();
    /* 005dcd1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcd20: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dcd23: jmp 0x5dcd40 */ goto L_005dcd40;
L_005dcd25:; BB(0x005dcd25);
    /* 005dcd25: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dcd28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcd29: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcd2c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dcd2e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcd31: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5dcd34u); call_ind(t); }
    /* 005dcd34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcd35: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5dcd3au); f_006240c0();
    /* 005dcd3a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcd3d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dcd40:; BB(0x005dcd40);
    /* 005dcd40: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcd44: jne 0x5dcd50 */ if (!fZ) goto L_005dcd50;
L_005dcd46:; BB(0x005dcd46);
    /* 005dcd46: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcd49: call 0x5db035 */ r_esp -= 4; W32(r_esp, 0x5dcd4eu); f_005db035();
    /* 005dcd4e: jmp 0x5dcd55 */ goto L_005dcd55;
L_005dcd50:; BB(0x005dcd50);
    /* 005dcd50: jmp 0x5dccd7 */ goto L_005dccd7;
L_005dcd52:; BB(0x005dcd52);
    /* 005dcd52: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005dcd55:; BB(0x005dcd55);
    /* 005dcd55: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcd57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcd58: ret 8 */ FN_RET(0x005dccb5); r_esp += 12; return;
}

void f_005dcd5b(void) /* FUN_005dcd5b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcd5b);
    /* 005dcd5b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcd5c: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcd5e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcd61: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dcd64: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcd67: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcd6e: je 0x5dcdbc */ if (fZ) goto L_005dcdbc;
L_005dcd70:; BB(0x005dcd70);
    /* 005dcd70: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dcd77: jmp 0x5dcd82 */ goto L_005dcd82;
L_005dcd79:; BB(0x005dcd79);
    /* 005dcd79: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcd7c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dcd7f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005dcd82:; BB(0x005dcd82);
    /* 005dcd82: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcd85: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dcd8b: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dcd90u); f_005dd4d2();
    /* 005dcd90: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcd93: jge 0x5dcdbc */ if ((fS==fO)) goto L_005dcdbc;
L_005dcd95:; BB(0x005dcd95);
    /* 005dcd95: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcd98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcd99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcd9c: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dcda1u); f_005dc2bd();
    /* 005dcda1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dcda4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcda7: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5dcdacu); f_005d9690();
    /* 005dcdac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcdae: je 0x5dcdba */ if (fZ) goto L_005dcdba;
L_005dcdb0:; BB(0x005dcdb0);
    /* 005dcdb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcdb3: call 0x5db035 */ r_esp -= 4; W32(r_esp, 0x5dcdb8u); f_005db035();
    /* 005dcdb8: jmp 0x5dcdbe */ goto L_005dcdbe;
L_005dcdba:; BB(0x005dcdba);
    /* 005dcdba: jmp 0x5dcd79 */ goto L_005dcd79;
L_005dcdbc:; BB(0x005dcdbc);
    /* 005dcdbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005dcdbe:; BB(0x005dcdbe);
    /* 005dcdbe: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcdc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcdc1: ret  */ FN_RET(0x005dcd5b); r_esp += 4; return;
}

void f_005dcdc2(void) /* FUN_005dcdc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcdc2);
    /* 005dcdc2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcdc3: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcdc5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcdc8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dcdcb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dcdd2: jmp 0x5dcddd */ goto L_005dcddd;
L_005dcdd4:; BB(0x005dcdd4);
    /* 005dcdd4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcdd7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dcdda: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dcddd:; BB(0x005dcddd);
    /* 005dcddd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcde0: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dcde6: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dcdebu); f_005dd4d2();
    /* 005dcdeb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcdee: jge 0x5dce17 */ if ((fS==fO)) goto L_005dce17;
L_005dcdf0:; BB(0x005dcdf0);
    /* 005dcdf0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcdf3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcdf4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcdf7: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dcdfcu); f_005dc2bd();
    /* 005dcdfc: mov ecx, eax */ r_ecx = r_eax;
    /* 005dcdfe: call 0x5db008 */ r_esp -= 4; W32(r_esp, 0x5dce03u); f_005db008();
    /* 005dce03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dce05: je 0x5dce15 */ if (fZ) goto L_005dce15;
L_005dce07:; BB(0x005dce07);
    /* 005dce07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dce0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dce0b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dce0e: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dce13u); f_005dc2bd();
    /* 005dce13: jmp 0x5dce19 */ goto L_005dce19;
L_005dce15:; BB(0x005dce15);
    /* 005dce15: jmp 0x5dcdd4 */ goto L_005dcdd4;
L_005dce17:; BB(0x005dce17);
    /* 005dce17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005dce19:; BB(0x005dce19);
    /* 005dce19: mov esp, ebp */ r_esp = r_ebp;
    /* 005dce1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dce1c: ret  */ FN_RET(0x005dcdc2); r_esp += 4; return;
}

void f_005dce1d(void) /* FUN_005dce1d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dce1d);
    /* 005dce1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dce1e: mov ebp, esp */ r_ebp = r_esp;
    /* 005dce20: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dce23: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dce26: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dce29: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dce30: je 0x5dce7a */ if (fZ) goto L_005dce7a;
L_005dce32:; BB(0x005dce32);
    /* 005dce32: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dce39: jmp 0x5dce44 */ goto L_005dce44;
L_005dce3b:; BB(0x005dce3b);
    /* 005dce3b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dce3e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dce41: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005dce44:; BB(0x005dce44);
    /* 005dce44: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dce47: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dce4d: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dce52u); f_005dd4d2();
    /* 005dce52: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dce55: jge 0x5dce7a */ if ((fS==fO)) goto L_005dce7a;
L_005dce57:; BB(0x005dce57);
    /* 005dce57: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dce5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dce5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dce5e: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dce63u); f_005dc2bd();
    /* 005dce63: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dce66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dce69: call 0x5db035 */ r_esp -= 4; W32(r_esp, 0x5dce6eu); f_005db035();
    /* 005dce6e: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dce71: jne 0x5dce78 */ if (!fZ) goto L_005dce78;
L_005dce73:; BB(0x005dce73);
    /* 005dce73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dce76: jmp 0x5dce7c */ goto L_005dce7c;
L_005dce78:; BB(0x005dce78);
    /* 005dce78: jmp 0x5dce3b */ goto L_005dce3b;
L_005dce7a:; BB(0x005dce7a);
    /* 005dce7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005dce7c:; BB(0x005dce7c);
    /* 005dce7c: mov esp, ebp */ r_esp = r_ebp;
    /* 005dce7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dce7f: ret 4 */ FN_RET(0x005dce1d); r_esp += 8; return;
}

void f_005dce82(void) /* FUN_005dce82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dce82);
    /* 005dce82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dce83: mov ebp, esp */ r_ebp = r_esp;
    /* 005dce85: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dce88: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005dce8b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dce8e: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dce95: je 0x5dcf16 */ if (fZ) goto L_005dcf16;
L_005dce97:; BB(0x005dce97);
    /* 005dce97: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005dce9e: jmp 0x5dcea9 */ goto L_005dcea9;
L_005dcea0:; BB(0x005dcea0);
    /* 005dcea0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcea3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dcea6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005dcea9:; BB(0x005dcea9);
    /* 005dcea9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dceac: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dceb2: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dceb7u); f_005dd4d2();
    /* 005dceb7: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dceba: jge 0x5dcf16 */ if ((fS==fO)) goto L_005dcf16;
L_005dcebc:; BB(0x005dcebc);
    /* 005dcebc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcec0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcec3: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dcec8u); f_005dc2bd();
    /* 005dcec8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005dcecb: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcecf: je 0x5dceee */ if (fZ) goto L_005dceee;
L_005dced1:; BB(0x005dced1);
    /* 005dced1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dced4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dced5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dced8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dceda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcedd: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5dcee0u); call_ind(t); }
    /* 005dcee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcee1: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x5dcee6u); f_006325b0();
    /* 005dcee6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcee9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dceec: jmp 0x5dcf09 */ goto L_005dcf09;
L_005dceee:; BB(0x005dceee);
    /* 005dceee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dcef1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcef2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcef5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dcef7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcefa: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5dcefdu); call_ind(t); }
    /* 005dcefd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcefe: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5dcf03u); f_006240c0();
    /* 005dcf03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcf06: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dcf09:; BB(0x005dcf09);
    /* 005dcf09: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcf0d: jne 0x5dcf14 */ if (!fZ) goto L_005dcf14;
L_005dcf0f:; BB(0x005dcf0f);
    /* 005dcf0f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcf12: jmp 0x5dcf18 */ goto L_005dcf18;
L_005dcf14:; BB(0x005dcf14);
    /* 005dcf14: jmp 0x5dcea0 */ goto L_005dcea0;
L_005dcf16:; BB(0x005dcf16);
    /* 005dcf16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005dcf18:; BB(0x005dcf18);
    /* 005dcf18: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcf1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcf1b: ret 8 */ FN_RET(0x005dce82); r_esp += 12; return;
}

void f_005dcf1e(void) /* FUN_005dcf1e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcf1e);
    /* 005dcf1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf1f: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcf21: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcf24: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dcf27: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcf2a: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcf31: je 0x5dcf7a */ if (fZ) goto L_005dcf7a;
L_005dcf33:; BB(0x005dcf33);
    /* 005dcf33: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dcf3a: jmp 0x5dcf45 */ goto L_005dcf45;
L_005dcf3c:; BB(0x005dcf3c);
    /* 005dcf3c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcf3f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dcf42: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005dcf45:; BB(0x005dcf45);
    /* 005dcf45: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcf48: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dcf4e: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dcf53u); f_005dd4d2();
    /* 005dcf53: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcf56: jge 0x5dcf7a */ if ((fS==fO)) goto L_005dcf7a;
L_005dcf58:; BB(0x005dcf58);
    /* 005dcf58: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcf5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcf5f: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dcf64u); f_005dc2bd();
    /* 005dcf64: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dcf67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcf6a: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5dcf6fu); f_005d9690();
    /* 005dcf6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcf71: je 0x5dcf78 */ if (fZ) goto L_005dcf78;
L_005dcf73:; BB(0x005dcf73);
    /* 005dcf73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcf76: jmp 0x5dcf7c */ goto L_005dcf7c;
L_005dcf78:; BB(0x005dcf78);
    /* 005dcf78: jmp 0x5dcf3c */ goto L_005dcf3c;
L_005dcf7a:; BB(0x005dcf7a);
    /* 005dcf7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005dcf7c:; BB(0x005dcf7c);
    /* 005dcf7c: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcf7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcf7f: ret  */ FN_RET(0x005dcf1e); r_esp += 4; return;
}

void f_005dcf80(void) /* FUN_005dcf80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcf80);
    /* 005dcf80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf81: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcf83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dcf87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcf8a: call 0x5dcc52 */ r_esp -= 4; W32(r_esp, 0x5dcf8fu); f_005dcc52();
    /* 005dcf8f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcf92: jne 0x5dcf9b */ if (!fZ) goto L_005dcf9b;
L_005dcf94:; BB(0x005dcf94);
    /* 005dcf94: mov eax, 0x6fc3e8 */ r_eax = 0x6fc3e8u;
    /* 005dcf99: jmp 0x5dcfac */ goto L_005dcfac;
L_005dcf9b:; BB(0x005dcf9b);
    /* 005dcf9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcf9e: call 0x5dcc52 */ r_esp -= 4; W32(r_esp, 0x5dcfa3u); f_005dcc52();
    /* 005dcfa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcfa4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcfa7: call 0x5dcfb0 */ r_esp -= 4; W32(r_esp, 0x5dcfacu); f_005dcfb0();
L_005dcfac:; BB(0x005dcfac);
    /* 005dcfac: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcfae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcfaf: ret  */ FN_RET(0x005dcf80); r_esp += 4; return;
}

void f_005dcfb0(void) /* FUN_005dcfb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcfb0);
    /* 005dcfb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcfb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcfb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcfb6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dcfb9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcfbc: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcfc3: je 0x5dd015 */ if (fZ) goto L_005dd015;
L_005dcfc5:; BB(0x005dcfc5);
    /* 005dcfc5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dcfcc: jmp 0x5dcfd7 */ goto L_005dcfd7;
L_005dcfce:; BB(0x005dcfce);
    /* 005dcfce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcfd1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dcfd4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005dcfd7:; BB(0x005dcfd7);
    /* 005dcfd7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcfda: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dcfe0: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dcfe5u); f_005dd4d2();
    /* 005dcfe5: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcfe8: jge 0x5dd015 */ if ((fS==fO)) goto L_005dd015;
L_005dcfea:; BB(0x005dcfea);
    /* 005dcfea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcfed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcfee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcff1: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dcff6u); f_005dc2bd();
    /* 005dcff6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dcff9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcffc: call 0x5db035 */ r_esp -= 4; W32(r_esp, 0x5dd001u); f_005db035();
    /* 005dd001: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd004: jne 0x5dd013 */ if (!fZ) goto L_005dd013;
L_005dd006:; BB(0x005dd006);
    /* 005dd006: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd009: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dd00b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd00e: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5dd011u); call_ind(t); }
    /* 005dd011: jmp 0x5dd01a */ goto L_005dd01a;
L_005dd013:; BB(0x005dd013);
    /* 005dd013: jmp 0x5dcfce */ goto L_005dcfce;
L_005dd015:; BB(0x005dd015);
    /* 005dd015: mov eax, 0x6fc3ec */ r_eax = 0x6fc3ecu;
L_005dd01a:; BB(0x005dd01a);
    /* 005dd01a: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd01c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd01d: ret 4 */ FN_RET(0x005dcfb0); r_esp += 8; return;
}

void f_005dd020(void) /* FUN_005dd020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd020);
    /* 005dd020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd021: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd023: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd026: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dd029: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dd030: jmp 0x5dd03b */ goto L_005dd03b;
L_005dd032:; BB(0x005dd032);
    /* 005dd032: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd035: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd038: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dd03b:; BB(0x005dd03b);
    /* 005dd03b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd03e: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dd044: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dd049u); f_005dd4d2();
    /* 005dd049: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd04c: jge 0x5dd0a1 */ if ((fS==fO)) goto L_005dd0a1;
L_005dd04e:; BB(0x005dd04e);
    /* 005dd04e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd051: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd052: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd055: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dd05au); f_005dc2bd();
    /* 005dd05a: mov ecx, eax */ r_ecx = r_eax;
    /* 005dd05c: call 0x5db008 */ r_esp -= 4; W32(r_esp, 0x5dd061u); f_005db008();
    /* 005dd061: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd063: je 0x5dd09f */ if (fZ) goto L_005dd09f;
L_005dd065:; BB(0x005dd065);
    /* 005dd065: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd068: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd06b: cmp ecx, dword ptr [eax + 0x12c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x12cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd071: jl 0x5dd093 */ if ((fS!=fO)) goto L_005dd093;
L_005dd073:; BB(0x005dd073);
    /* 005dd073: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd076: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 005dd07c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd07f: add eax, dword ptr [ecx + 0x130] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x130u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd085: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd088: jge 0x5dd093 */ if ((fS==fO)) goto L_005dd093;
L_005dd08a:; BB(0x005dd08a);
    /* 005dd08a: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005dd091: jmp 0x5dd09a */ goto L_005dd09a;
L_005dd093:; BB(0x005dd093);
    /* 005dd093: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005dd09a:; BB(0x005dd09a);
    /* 005dd09a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd09d: jmp 0x5dd0a3 */ goto L_005dd0a3;
L_005dd09f:; BB(0x005dd09f);
    /* 005dd09f: jmp 0x5dd032 */ goto L_005dd032;
L_005dd0a1:; BB(0x005dd0a1);
    /* 005dd0a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005dd0a3:; BB(0x005dd0a3);
    /* 005dd0a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd0a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd0a6: ret  */ FN_RET(0x005dd020); r_esp += 4; return;
}

void f_005dd0a7(void) /* FUN_005dd0a7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd0a7);
    /* 005dd0a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd0a8: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd0aa: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd0ad: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dd0b0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd0b3: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd0ba: je 0x5dd153 */ if (fZ) goto L_005dd153;
L_005dd0c0:; BB(0x005dd0c0);
    /* 005dd0c0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dd0c7: jmp 0x5dd0d2 */ goto L_005dd0d2;
L_005dd0c9:; BB(0x005dd0c9);
    /* 005dd0c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd0cc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd0cf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005dd0d2:; BB(0x005dd0d2);
    /* 005dd0d2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd0d5: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005dd0db: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dd0e0u); f_005dd4d2();
    /* 005dd0e0: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd0e3: jge 0x5dd153 */ if ((fS==fO)) goto L_005dd153;
L_005dd0e5:; BB(0x005dd0e5);
    /* 005dd0e5: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd0e9: je 0x5dd117 */ if (fZ) goto L_005dd117;
L_005dd0eb:; BB(0x005dd0eb);
    /* 005dd0eb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd0ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd0ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd0f2: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dd0f7u); f_005dc2bd();
    /* 005dd0f7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dd0fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd0fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dd0ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd102: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5dd105u); call_ind(t); }
    /* 005dd105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd106: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd10a: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x5dd10fu); f_006325b0();
    /* 005dd10f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd112: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dd115: jmp 0x5dd141 */ goto L_005dd141;
L_005dd117:; BB(0x005dd117);
    /* 005dd117: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd11a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd11b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd11e: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dd123u); f_005dc2bd();
    /* 005dd123: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dd126: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dd129: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dd12b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dd12e: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5dd131u); call_ind(t); }
    /* 005dd131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd132: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dd135: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd136: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5dd13bu); f_006240c0();
    /* 005dd13b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd13e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dd141:; BB(0x005dd141);
    /* 005dd141: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd145: jne 0x5dd14e */ if (!fZ) goto L_005dd14e;
L_005dd147:; BB(0x005dd147);
    /* 005dd147: mov eax, 1 */ r_eax = 0x1u;
    /* 005dd14c: jmp 0x5dd155 */ goto L_005dd155;
L_005dd14e:; BB(0x005dd14e);
    /* 005dd14e: jmp 0x5dd0c9 */ goto L_005dd0c9;
L_005dd153:; BB(0x005dd153);
    /* 005dd153: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005dd155:; BB(0x005dd155);
    /* 005dd155: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd157: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd158: ret 8 */ FN_RET(0x005dd0a7); r_esp += 12; return;
}

void f_005dd15b(void) /* FUN_005dd15b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd15b);
    /* 005dd15b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd15c: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd15e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd161: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dd164: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd167: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd168: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd16b: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 005dd171: call 0x5dd6cf */ r_esp -= 4; W32(r_esp, 0x5dd176u); f_005dd6cf();
    /* 005dd176: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dd17d: jmp 0x5dd188 */ goto L_005dd188;
L_005dd17f:; BB(0x005dd17f);
    /* 005dd17f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd182: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dd185: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005dd188:; BB(0x005dd188);
    /* 005dd188: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd18b: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 005dd191: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dd196u); f_005dd4d2();
    /* 005dd196: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd199: jge 0x5dd1b4 */ if ((fS==fO)) goto L_005dd1b4;
L_005dd19b:; BB(0x005dd19b);
    /* 005dd19b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd19e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd19f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd1a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd1a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd1a6: call 0x5dc2bd */ r_esp -= 4; W32(r_esp, 0x5dd1abu); f_005dc2bd();
    /* 005dd1ab: mov ecx, eax */ r_ecx = r_eax;
    /* 005dd1ad: call 0x5db01c */ r_esp -= 4; W32(r_esp, 0x5dd1b2u); f_005db01c();
    /* 005dd1b2: jmp 0x5dd17f */ goto L_005dd17f;
L_005dd1b4:; BB(0x005dd1b4);
    /* 005dd1b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd1b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd1b9: call 0x5dc2f8 */ r_esp -= 4; W32(r_esp, 0x5dd1beu); f_005dc2f8();
    /* 005dd1be: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd1c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd1c1: ret 4 */ FN_RET(0x005dd15b); r_esp += 8; return;
}

void f_005dd1c4(void) /* FUN_005dd1c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd1c4);
    /* 005dd1c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd1c5: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd1c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd1c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd1cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd1cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd1ce: ret 4 */ FN_RET(0x005dd1c4); r_esp += 8; return;
}

