#include "protos.h"

void f_00411987(void) /* FUN_00411987 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411987);
    /* 00411987: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411988: mov ebp, esp */ r_ebp = r_esp;
    /* 0041198a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041198b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041198e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411990: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00411996: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x41199bu); f_0060e7bd();
    /* 0041199b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041199d: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004119a2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004119a5: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004119ab: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004119ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004119b0: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4119b3u); call_ind(t); }
    /* 004119b3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004119b7: je 0x4119dd */ if (fZ) goto L_004119dd;
L_004119b9:; BB(0x004119b9);
    /* 004119b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004119bc: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4119c1u); f_0040f81e();
    /* 004119c1: mov ecx, eax */ r_ecx = r_eax;
    /* 004119c3: call 0x40c9c3 */ r_esp -= 4; W32(r_esp, 0x4119c8u); f_0040c9c3();
    /* 004119c8: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004119cd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004119d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004119d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004119d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004119d6: call 0x413656 */ r_esp -= 4; W32(r_esp, 0x4119dbu); f_00413656();
    /* 004119db: jmp 0x4119f5 */ goto L_004119f5;
L_004119dd:; BB(0x004119dd);
    /* 004119dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004119df: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004119e5: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004119e8: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004119ed: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004119f0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004119f2: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x4119f5u); call_ind(t); }
L_004119f5:; BB(0x004119f5);
    /* 004119f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004119f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004119f8: ret 4 */ FN_RET(0x00411987); r_esp += 8; return;
}

void f_004119fb(void) /* FUN_004119fb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004119fb);
    /* 004119fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004119fc: mov ebp, esp */ r_ebp = r_esp;
    /* 004119fe: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411a01: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00411a04: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411a07: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x411a0cu); f_0040f81e();
    /* 00411a0c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00411a0f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411a12: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00411a15: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 00411a1b: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x411a20u); f_0040c28d();
    /* 00411a20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411a22: je 0x411afc */ if (fZ) goto L_00411afc;
L_00411a28:; BB(0x00411a28);
    /* 00411a28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411a2b: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x411a30u); f_00425d41();
    /* 00411a30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411a33: call 0x40cb8a */ r_esp -= 4; W32(r_esp, 0x411a38u); f_0040cb8a();
    /* 00411a38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411a3a: je 0x411a46 */ if (fZ) goto L_00411a46;
L_00411a3c:; BB(0x00411a3c);
    /* 00411a3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411a3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411a41: call 0x40cadc */ r_esp -= 4; W32(r_esp, 0x411a46u); f_0040cadc();
L_00411a46:; BB(0x00411a46);
    /* 00411a46: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411a49: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 00411a4f: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x411a54u); f_0040c28d();
    /* 00411a54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411a56: je 0x411aaa */ if (fZ) goto L_00411aaa;
L_00411a58:; BB(0x00411a58);
    /* 00411a58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411a5b: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00411a61: call 0x40ada9 */ r_esp -= 4; W32(r_esp, 0x411a66u); f_0040ada9();
    /* 00411a66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411a69: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 00411a6f: call 0x40b1cb */ r_esp -= 4; W32(r_esp, 0x411a74u); f_0040b1cb();
    /* 00411a74: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00411a76: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411a79: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 00411a7f: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x411a84u); f_0040bcd8();
    /* 00411a84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411a86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411a88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411a8b: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x411a90u); f_004259f1();
    /* 00411a90: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411a93: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00411a97: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00411a9a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00411a9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411aa0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00411aa2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411aa5: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x411aa8u); call_ind(t); }
    /* 00411aa8: jmp 0x411afa */ goto L_00411afa;
L_00411aaa:; BB(0x00411aaa);
    /* 00411aaa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411aad: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00411ab3: call 0x40ada9 */ r_esp -= 4; W32(r_esp, 0x411ab8u); f_0040ada9();
    /* 00411ab8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411abb: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 00411ac1: call 0x40b1cb */ r_esp -= 4; W32(r_esp, 0x411ac6u); f_0040b1cb();
    /* 00411ac6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411ac8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411acb: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 00411ad1: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x411ad6u); f_0040bcd8();
    /* 00411ad6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411ad8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411ada: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411add: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x411ae2u); f_004259f1();
    /* 00411ae2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411ae5: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00411ae9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00411aec: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00411aef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00411af2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00411af4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00411af7: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x411afau); call_ind(t); }
L_00411afa:; BB(0x00411afa);
    /* 00411afa: jmp 0x411b12 */ goto L_00411b12;
L_00411afc:; BB(0x00411afc);
    /* 00411afc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411aff: call 0x40cb8a */ r_esp -= 4; W32(r_esp, 0x411b04u); f_0040cb8a();
    /* 00411b04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411b06: je 0x411b12 */ if (fZ) goto L_00411b12;
L_00411b08:; BB(0x00411b08);
    /* 00411b08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411b0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411b0d: call 0x40cadc */ r_esp -= 4; W32(r_esp, 0x411b12u); f_0040cadc();
L_00411b12:; BB(0x00411b12);
    /* 00411b12: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411b14: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00411b19: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00411b1c: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00411b22: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00411b25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411b27: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x411b2au); call_ind(t); }
    /* 00411b2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411b2c: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00411b31: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00411b34: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00411b3a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00411b3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411b3f: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x411b42u); call_ind(t); }
    /* 00411b42: mov esp, ebp */ r_esp = r_ebp;
    /* 00411b44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411b45: ret  */ FN_RET(0x004119fb); r_esp += 4; return;
}

void f_00411b46(void) /* FUN_00411b46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411b46);
    /* 00411b46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411b47: mov ebp, esp */ r_ebp = r_esp;
    /* 00411b49: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411b4c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00411b4f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411b52: movsx ecx, word ptr [eax + 0xcc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xccu));
    /* 00411b59: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00411b5b: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00411b5d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411b5e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00411b61: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411b65: je 0x411ba8 */ if (fZ) goto L_00411ba8;
L_00411b67:; BB(0x00411b67);
    /* 00411b67: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00411b6d: call 0x45cc47 */ r_esp -= 4; W32(r_esp, 0x411b72u); f_0045cc47();
    /* 00411b72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411b74: je 0x411ba8 */ if (fZ) goto L_00411ba8;
L_00411b76:; BB(0x00411b76);
    /* 00411b76: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00411b7c: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00411b7f: cmp dword ptr [eax + 0x9c], 0 */ {  u32 a = R32((u32)(r_eax+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411b86: jne 0x411ba8 */ if (!fZ) goto L_00411ba8;
L_00411b88:; BB(0x00411b88);
    /* 00411b88: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00411b8e: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00411b91: mov dword ptr [edx + 0x9c], 1 */ W32((u32)(r_edx+0x9cu), 0x1u);
    /* 00411b9b: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00411ba1: call 0x60e9a5 */ r_esp -= 4; W32(r_esp, 0x411ba6u); f_0060e9a5();
    /* 00411ba6: jmp 0x411be7 */ goto L_00411be7;
L_00411ba8:; BB(0x00411ba8);
    /* 00411ba8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411baa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411bad: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x411bb2u); f_005d6635();
    /* 00411bb2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411bb5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00411bb8: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x411bbdu); f_005e03cc();
    /* 00411bbd: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00411bc3: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00411bc6: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x411bcbu); f_005e0a55();
    /* 00411bcb: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00411bd1: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00411bd8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411bdc: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00411be2: call 0x411987 */ r_esp -= 4; W32(r_esp, 0x411be7u); f_00411987();
L_00411be7:; BB(0x00411be7);
    /* 00411be7: mov esp, ebp */ r_esp = r_ebp;
    /* 00411be9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411bea: ret  */ FN_RET(0x00411b46); r_esp += 4; return;
}

void f_00411beb(void) /* FUN_00411beb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411beb);
    /* 00411beb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411bec: mov ebp, esp */ r_ebp = r_esp;
    /* 00411bee: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411bf1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00411bf4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00411bf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411bf8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00411bfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411bfc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411bff: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x411c04u); f_005d80f0();
    /* 00411c04: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411c07: mov dword ptr [edx], 0x6339cc */ W32((u32)(r_edx), 0x6339ccu);
    /* 00411c0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411c10: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 00411c1a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00411c20: jmp 0x411c2e */ goto L_00411c2e;
L_00411c22:; BB(0x00411c22);
    /* 00411c22: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00411c26: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00411c2a: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00411c2e:; BB(0x00411c2e);
    /* 00411c2e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00411c32: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411c35: jge 0x411c4b */ if ((fS==fO)) goto L_00411c4b;
L_00411c37:; BB(0x00411c37);
    /* 00411c37: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00411c3b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411c3e: mov dword ptr [ecx + eax*4 + 0x90], 0 */ W32((u32)(r_ecx+r_eax*4+0x90u), 0x0u);
    /* 00411c49: jmp 0x411c22 */ goto L_00411c22;
L_00411c4b:; BB(0x00411c4b);
    /* 00411c4b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411c4e: mov dword ptr [edx + 0x98], 0 */ W32((u32)(r_edx+0x98u), 0x0u);
    /* 00411c58: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411c5b: mov esp, ebp */ r_esp = r_ebp;
    /* 00411c5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411c5e: ret 8 */ FN_RET(0x00411beb); r_esp += 12; return;
}

void f_00411c61(void) /* FUN_00411c61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411c61);
    /* 00411c61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411c62: mov ebp, esp */ r_ebp = r_esp;
    /* 00411c64: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411c67: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00411c6a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411c6d: mov dword ptr [eax], 0x6339cc */ W32((u32)(r_eax), 0x6339ccu);
    /* 00411c73: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411c76: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411c7d: je 0x411cbc */ if (fZ) goto L_00411cbc;
L_00411c7f:; BB(0x00411c7f);
    /* 00411c7f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411c82: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00411c88: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00411c8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411c8e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00411c91: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411c95: je 0x411ca8 */ if (fZ) goto L_00411ca8;
L_00411c97:; BB(0x00411c97);
    /* 00411c97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411c99: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411c9c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00411c9e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411ca1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x411ca3u); call_ind(t); }
    /* 00411ca3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00411ca6: jmp 0x411caf */ goto L_00411caf;
L_00411ca8:; BB(0x00411ca8);
    /* 00411ca8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00411caf:; BB(0x00411caf);
    /* 00411caf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411cb2: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
L_00411cbc:; BB(0x00411cbc);
    /* 00411cbc: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00411cc2: jmp 0x411cd0 */ goto L_00411cd0;
L_00411cc4:; BB(0x00411cc4);
    /* 00411cc4: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00411cc8: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00411ccc: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00411cd0:; BB(0x00411cd0);
    /* 00411cd0: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00411cd4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411cd7: jge 0x411d33 */ if ((fS==fO)) goto L_00411d33;
L_00411cd9:; BB(0x00411cd9);
    /* 00411cd9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00411cdd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411ce0: cmp dword ptr [edx + ecx*4 + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411ce8: je 0x411d31 */ if (fZ) goto L_00411d31;
L_00411cea:; BB(0x00411cea);
    /* 00411cea: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00411cee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411cf1: mov edx, dword ptr [ecx + eax*4 + 0x90] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 00411cf8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00411cfb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411cfe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00411d01: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411d05: je 0x411d18 */ if (fZ) goto L_00411d18;
L_00411d07:; BB(0x00411d07);
    /* 00411d07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411d09: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00411d0c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00411d0e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00411d11: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x411d13u); call_ind(t); }
    /* 00411d13: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00411d16: jmp 0x411d1f */ goto L_00411d1f;
L_00411d18:; BB(0x00411d18);
    /* 00411d18: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00411d1f:; BB(0x00411d1f);
    /* 00411d1f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00411d23: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411d26: mov dword ptr [ecx + eax*4 + 0x90], 0 */ W32((u32)(r_ecx+r_eax*4+0x90u), 0x0u);
L_00411d31:; BB(0x00411d31);
    /* 00411d31: jmp 0x411cc4 */ goto L_00411cc4;
L_00411d33:; BB(0x00411d33);
    /* 00411d33: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411d36: cmp dword ptr [edx + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411d3d: je 0x411d7c */ if (fZ) goto L_00411d7c;
L_00411d3f:; BB(0x00411d3f);
    /* 00411d3f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411d42: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00411d48: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00411d4b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411d4e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00411d51: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411d55: je 0x411d68 */ if (fZ) goto L_00411d68;
L_00411d57:; BB(0x00411d57);
    /* 00411d57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411d59: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00411d5c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411d5e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00411d61: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x411d63u); call_ind(t); }
    /* 00411d63: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00411d66: jmp 0x411d6f */ goto L_00411d6f;
L_00411d68:; BB(0x00411d68);
    /* 00411d68: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00411d6f:; BB(0x00411d6f);
    /* 00411d6f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411d72: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
L_00411d7c:; BB(0x00411d7c);
    /* 00411d7c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00411d7f: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x411d84u); f_005d8154();
    /* 00411d84: mov esp, ebp */ r_esp = r_ebp;
    /* 00411d86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411d87: ret  */ FN_RET(0x00411c61); r_esp += 4; return;
}

void f_00411d88(void) /* FUN_00411d88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411d88);
    /* 00411d88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411d89: mov ebp, esp */ r_ebp = r_esp;
    /* 00411d8b: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411d8e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00411d91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411d93: push 0x43d */ { u32 v = 0x43du; r_esp -= 4; W32(r_esp, v); }
    /* 00411d98: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411d9b: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x411da0u); f_005e0461();
    /* 00411da0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00411da2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411da5: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x411daau); f_005e0731();
    /* 00411daa: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00411dac: push 0x64cc60 */ { u32 v = 0x64cc60u; r_esp -= 4; W32(r_esp, v); }
    /* 00411db1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411db4: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x411db9u); f_005d825e();
    /* 00411db9: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00411dbe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x411dc3u); f_0048ab58();
    /* 00411dc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411dc6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00411dc9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411dcd: je 0x411ddc */ if (fZ) goto L_00411ddc;
L_00411dcf:; BB(0x00411dcf);
    /* 00411dcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411dd2: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x411dd7u); f_005e8590();
    /* 00411dd7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00411dda: jmp 0x411de3 */ goto L_00411de3;
L_00411ddc:; BB(0x00411ddc);
    /* 00411ddc: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00411de3:; BB(0x00411de3);
    /* 00411de3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411de6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00411de9: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
    /* 00411def: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411df2: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00411df8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411dfb: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00411dfe: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e00: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e03: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 00411e09: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x411e0eu); f_005e8e99();
    /* 00411e0e: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e10: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e12: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e15: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00411e1b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e1e: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00411e24: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411e26: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x411e29u); call_ind(t); }
    /* 00411e29: push 0xbb */ { u32 v = 0xbbu; r_esp -= 4; W32(r_esp, v); }
    /* 00411e2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e31: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00411e37: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x411e3cu); f_005e8740();
    /* 00411e3c: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e3e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e41: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00411e47: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x411e4cu); f_005e8775();
    /* 00411e4c: push 0x64cc6c */ { u32 v = 0x64cc6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00411e51: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e54: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 00411e5a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e5d: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00411e63: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00411e65: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x411e68u); call_ind(t); }
    /* 00411e68: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00411e6a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e6d: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00411e73: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x411e78u); f_005e87aa();
    /* 00411e78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411e7a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e7d: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 00411e83: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e86: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00411e8c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00411e8e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x411e91u); call_ind(t); }
    /* 00411e91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e94: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00411e9a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411e9d: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00411ea3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411ea5: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x411ea8u); call_ind(t); }
    /* 00411ea8: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411ead: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x411eb2u); f_0048ab58();
    /* 00411eb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411eb5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00411eb8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411ebc: je 0x411ed7 */ if (fZ) goto L_00411ed7;
L_00411ebe:; BB(0x00411ebe);
    /* 00411ebe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411ec1: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x411ec6u); f_005d5d20();
    /* 00411ec6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411ec9: mov dword ptr [eax], 0x6339e4 */ W32((u32)(r_eax), 0x6339e4u);
    /* 00411ecf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411ed2: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00411ed5: jmp 0x411ede */ goto L_00411ede;
L_00411ed7:; BB(0x00411ed7);
    /* 00411ed7: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00411ede:; BB(0x00411ede);
    /* 00411ede: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411ee1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411ee4: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 00411eea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411eed: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00411ef3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411ef6: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00411ef9: push 0x64cc8c */ { u32 v = 0x64cc8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00411efe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f01: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00411f07: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f0a: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00411f10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411f12: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x411f15u); call_ind(t); }
    /* 00411f15: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f17: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f19: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f1b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f1e: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00411f24: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f27: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00411f2d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411f2f: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x411f32u); call_ind(t); }
    /* 00411f32: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00411f37: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f3a: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00411f40: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f43: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00411f49: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411f4b: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x411f4eu); call_ind(t); }
    /* 00411f4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f55: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00411f5b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f5e: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00411f64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411f66: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x411f69u); call_ind(t); }
    /* 00411f69: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f6e: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00411f70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f73: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00411f79: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f7c: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00411f82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411f84: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x411f87u); call_ind(t); }
    /* 00411f87: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f89: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f8c: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00411f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411f95: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00411f9b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411f9d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x411fa0u); call_ind(t); }
    /* 00411fa0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411fa3: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00411fa9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411fac: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00411fb2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411fb4: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x411fb7u); call_ind(t); }
    /* 00411fb7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411fba: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00411fc0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411fc3: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00411fc9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411fcb: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x411fceu); call_ind(t); }
    /* 00411fce: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 00411fd0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00411fd3: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00411fd9: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x411fdeu); f_005d65d6();
    /* 00411fde: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 00411fe0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411fe3: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00411fe9: call 0x5d65f9 */ r_esp -= 4; W32(r_esp, 0x411feeu); f_005d65f9();
    /* 00411fee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411ff1: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00411ff7: mov word ptr [eax + 0xcc], 0 */ W16((u32)(r_eax+0xccu), 0x0u);
    /* 00412000: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412005: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x41200au); f_0048ab58();
    /* 0041200a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041200d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00412010: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412014: je 0x41202f */ if (fZ) goto L_0041202f;
L_00412016:; BB(0x00412016);
    /* 00412016: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412019: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x41201eu); f_005d5d20();
    /* 0041201e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412021: mov dword ptr [ecx], 0x6339e4 */ W32((u32)(r_ecx), 0x6339e4u);
    /* 00412027: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041202a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0041202d: jmp 0x412036 */ goto L_00412036;
L_0041202f:; BB(0x0041202f);
    /* 0041202f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00412036:; BB(0x00412036);
    /* 00412036: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00412039: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041203c: mov dword ptr [eax + 0x94], ecx */ W32((u32)(r_eax+0x94u), r_ecx);
    /* 00412042: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412045: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 0041204b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041204e: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00412051: push 0x64cc90 */ { u32 v = 0x64cc90u; r_esp -= 4; W32(r_esp, v); }
    /* 00412056: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412059: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 0041205f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00412062: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 00412068: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041206a: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x41206du); call_ind(t); }
    /* 0041206d: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0041206f: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00412071: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00412073: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412076: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 0041207c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041207f: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00412085: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412087: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x41208au); call_ind(t); }
    /* 0041208a: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0041208f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00412092: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00412098: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041209b: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 004120a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004120a3: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x4120a6u); call_ind(t); }
    /* 004120a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004120a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004120aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004120ad: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004120b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004120b6: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 004120bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004120be: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4120c1u); call_ind(t); }
    /* 004120c1: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 004120c6: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 004120c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004120cb: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004120d1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004120d4: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 004120da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004120dc: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4120dfu); call_ind(t); }
    /* 004120df: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004120e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004120e4: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004120ea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004120ed: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 004120f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004120f5: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4120f8u); call_ind(t); }
    /* 004120f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004120fb: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00412101: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412104: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 0041210a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041210c: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x41210fu); call_ind(t); }
    /* 0041210f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00412112: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00412118: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041211b: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00412121: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412123: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x412126u); call_ind(t); }
    /* 00412126: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00412128: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041212b: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00412131: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x412136u); f_005d65d6();
    /* 00412136: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00412138: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041213b: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00412141: call 0x5d65f9 */ r_esp -= 4; W32(r_esp, 0x412146u); f_005d65f9();
    /* 00412146: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412149: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 0041214f: mov word ptr [eax + 0xcc], 1 */ W16((u32)(r_eax+0xccu), 0x1u);
    /* 00412158: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041215a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x41215fu); f_0048ab58();
    /* 0041215f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412162: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00412165: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412169: je 0x412178 */ if (fZ) goto L_00412178;
L_0041216b:; BB(0x0041216b);
    /* 0041216b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041216e: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x412173u); f_005e9d30();
    /* 00412173: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00412176: jmp 0x41217f */ goto L_0041217f;
L_00412178:; BB(0x00412178);
    /* 00412178: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0041217f:; BB(0x0041217f);
    /* 0041217f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412182: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00412185: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 0041218b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041218e: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00412194: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412197: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0041219a: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 0041219f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004121a2: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 004121a8: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4121adu); f_005ea0c3();
    /* 004121ad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004121b0: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 004121b6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004121b9: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 004121bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004121c1: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4121c4u); call_ind(t); }
    /* 004121c4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004121c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004121c9: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 004121cf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004121d2: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 004121d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004121da: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4121ddu); call_ind(t); }
    /* 004121dd: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 004121e2: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 004121e4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004121e7: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 004121ed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004121f0: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 004121f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004121f8: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4121fbu); call_ind(t); }
    /* 004121fb: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004121fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00412200: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00412206: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x41220bu); f_005ea454();
    /* 0041220b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041220e: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00412214: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412217: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0041221d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041221f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x412222u); call_ind(t); }
    /* 00412222: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00412225: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
    /* 0041222f: mov esp, ebp */ r_esp = r_ebp;
    /* 00412231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412232: ret  */ FN_RET(0x00411d88); r_esp += 4; return;
}

void f_00412233(void) /* FUN_00412233 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412233);
    /* 00412233: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412234: mov ebp, esp */ r_ebp = r_esp;
    /* 00412236: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412237: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041223a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041223d: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x412242u); f_005e030e();
    /* 00412242: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412245: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0041224b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041224e: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00412254: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412256: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x412259u); call_ind(t); }
    /* 00412259: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041225c: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00412262: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412265: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0041226b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041226d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x412270u); call_ind(t); }
    /* 00412270: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412273: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00412279: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041227c: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00412282: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412284: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x412287u); call_ind(t); }
    /* 00412287: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041228e: je 0x4122a8 */ if (fZ) goto L_004122a8;
L_00412290:; BB(0x00412290);
    /* 00412290: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00412292: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412294: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00412296: push 0xfc9 */ { u32 v = 0xfc9u; r_esp -= 4; W32(r_esp, v); }
    /* 0041229b: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004122a0: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004122a3: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4122a8u); f_005e8389();
L_004122a8:; BB(0x004122a8);
    /* 004122a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004122aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004122ab: ret  */ FN_RET(0x00412233); r_esp += 4; return;
}

void f_004122ac(void) /* FUN_004122ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004122ac);
    /* 004122ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004122ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004122af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004122b0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004122b3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004122b7: je 0x412393 */ if (fZ) goto L_00412393;
L_004122bd:; BB(0x004122bd);
    /* 004122bd: push 0x1a9 */ { u32 v = 0x1a9u; r_esp -= 4; W32(r_esp, v); }
    /* 004122c2: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004122c7: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 004122ca: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x4122cfu); f_00443fda();
    /* 004122cf: push 0x1aa */ { u32 v = 0x1aau; r_esp -= 4; W32(r_esp, v); }
    /* 004122d4: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 004122da: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 004122dd: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x4122e2u); f_00443fda();
    /* 004122e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004122e5: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4122eau); f_0040f81e();
    /* 004122ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004122ec: call 0x40cd45 */ r_esp -= 4; W32(r_esp, 0x4122f1u); f_0040cd45();
    /* 004122f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004122f3: je 0x41230a */ if (fZ) goto L_0041230a;
L_004122f5:; BB(0x004122f5);
    /* 004122f5: push 0x1ab */ { u32 v = 0x1abu; r_esp -= 4; W32(r_esp, v); }
    /* 004122fa: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00412300: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00412303: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x412308u); f_00443fda();
    /* 00412308: jmp 0x41231c */ goto L_0041231c;
L_0041230a:; BB(0x0041230a);
    /* 0041230a: push 0x1ab */ { u32 v = 0x1abu; r_esp -= 4; W32(r_esp, v); }
    /* 0041230f: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00412314: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00412317: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x41231cu); f_00444067();
L_0041231c:; BB(0x0041231c);
    /* 0041231c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041231f: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x412324u); f_0040f81e();
    /* 00412324: mov ecx, eax */ r_ecx = r_eax;
    /* 00412326: call 0x40cdbf */ r_esp -= 4; W32(r_esp, 0x41232bu); f_0040cdbf();
    /* 0041232b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041232d: je 0x412344 */ if (fZ) goto L_00412344;
L_0041232f:; BB(0x0041232f);
    /* 0041232f: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 00412334: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041233a: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0041233d: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x412342u); f_00443fda();
    /* 00412342: jmp 0x412357 */ goto L_00412357;
L_00412344:; BB(0x00412344);
    /* 00412344: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 00412349: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0041234f: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00412352: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x412357u); f_00444067();
L_00412357:; BB(0x00412357);
    /* 00412357: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041235a: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41235fu); f_0040f81e();
    /* 0041235f: mov ecx, eax */ r_ecx = r_eax;
    /* 00412361: call 0x40ce80 */ r_esp -= 4; W32(r_esp, 0x412366u); f_0040ce80();
    /* 00412366: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412368: je 0x41237e */ if (fZ) goto L_0041237e;
L_0041236a:; BB(0x0041236a);
    /* 0041236a: push 0x1ad */ { u32 v = 0x1adu; r_esp -= 4; W32(r_esp, v); }
    /* 0041236f: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00412374: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00412377: call 0x443fda */ r_esp -= 4; W32(r_esp, 0x41237cu); f_00443fda();
    /* 0041237c: jmp 0x412391 */ goto L_00412391;
L_0041237e:; BB(0x0041237e);
    /* 0041237e: push 0x1ad */ { u32 v = 0x1adu; r_esp -= 4; W32(r_esp, v); }
    /* 00412383: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00412389: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0041238c: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x412391u); f_00444067();
L_00412391:; BB(0x00412391);
    /* 00412391: jmp 0x4123f0 */ goto L_004123f0;
L_00412393:; BB(0x00412393);
    /* 00412393: push 0x1a9 */ { u32 v = 0x1a9u; r_esp -= 4; W32(r_esp, v); }
    /* 00412398: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0041239e: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 004123a1: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x4123a6u); f_00444067();
    /* 004123a6: push 0x1aa */ { u32 v = 0x1aau; r_esp -= 4; W32(r_esp, v); }
    /* 004123ab: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004123b0: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 004123b3: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x4123b8u); f_00444067();
    /* 004123b8: push 0x1ab */ { u32 v = 0x1abu; r_esp -= 4; W32(r_esp, v); }
    /* 004123bd: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 004123c3: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 004123c6: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x4123cbu); f_00444067();
    /* 004123cb: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 004123d0: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004123d6: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 004123d9: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x4123deu); f_00444067();
    /* 004123de: push 0x1ad */ { u32 v = 0x1adu; r_esp -= 4; W32(r_esp, v); }
    /* 004123e3: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004123e8: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 004123eb: call 0x444067 */ r_esp -= 4; W32(r_esp, 0x4123f0u); f_00444067();
L_004123f0:; BB(0x004123f0);
    /* 004123f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004123f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004123f3: ret 4 */ FN_RET(0x004122ac); r_esp += 8; return;
}

void f_004123f6(void) /* FUN_004123f6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004123f6);
    /* 004123f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004123f7: mov ebp, esp */ r_ebp = r_esp;
    /* 004123f9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004123fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004123fd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00412400: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412403: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x412408u); f_0040f81e();
    /* 00412408: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0041240e: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x412413u); f_0040c28d();
    /* 00412413: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412415: je 0x412501 */ if (fZ) goto L_00412501;
L_0041241b:; BB(0x0041241b);
    /* 0041241b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041241e: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x412423u); f_0040f81e();
    /* 00412423: mov dword ptr [eax + 0x144], 0 */ W32((u32)(r_eax+0x144u), 0x0u);
    /* 0041242d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412430: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x412435u); f_0040f81e();
    /* 00412435: mov dword ptr [eax + 0x138], 1 */ W32((u32)(r_eax+0x138u), 0x1u);
    /* 0041243f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412442: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x412447u); f_0040f81e();
    /* 00412447: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0041244d: call 0x40adf8 */ r_esp -= 4; W32(r_esp, 0x412452u); f_0040adf8();
    /* 00412452: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412454: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412457: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41245cu); f_0040f81e();
    /* 0041245c: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00412462: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x412467u); f_0040bcd8();
    /* 00412467: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041246a: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x41246fu); f_0040f9c4();
    /* 0041246f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412472: mov esi, dword ptr [ecx + eax*4 + 0x20] */ r_esi = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00412476: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412479: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41247eu); f_0040f81e();
    /* 0041247e: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 00412484: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00412487: mov ecx, dword ptr [esi + eax*4 + 0x6c] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x6cu));
    /* 0041248b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041248e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00412490: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00412492: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412495: call 0x427a0a */ r_esp -= 4; W32(r_esp, 0x41249au); f_00427a0a();
    /* 0041249a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041249d: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4124a2u); f_0040f81e();
    /* 004124a2: mov ecx, eax */ r_ecx = r_eax;
    /* 004124a4: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x4124a9u); f_00425d41();
    /* 004124a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004124ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004124ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004124b0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004124b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004124b5: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x4124b8u); call_ind(t); }
    /* 004124b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004124ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004124bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004124bf: call 0x427a0a */ r_esp -= 4; W32(r_esp, 0x4124c4u); f_00427a0a();
    /* 004124c4: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004124cb: jne 0x4124fc */ if (!fZ) goto L_004124fc;
L_004124cd:; BB(0x004124cd);
    /* 004124cd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004124cf: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 004124d5: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004124d8: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004124de: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004124e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004124e3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4124e6u); call_ind(t); }
    /* 004124e6: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004124eb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004124ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004124ef: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004124f1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004124f4: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004124f7: call 0x40d34d */ r_esp -= 4; W32(r_esp, 0x4124fcu); f_0040d34d();
L_004124fc:; BB(0x004124fc);
    /* 004124fc: jmp 0x412644 */ goto L_00412644;
L_00412501:; BB(0x00412501);
    /* 00412501: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412504: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x412509u); f_0040f81e();
    /* 00412509: mov eax, dword ptr [eax + 0x130] */ r_eax = R32((u32)(r_eax+0x130u));
    /* 0041250f: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412513: je 0x412528 */ if (fZ) goto L_00412528;
L_00412515:; BB(0x00412515);
    /* 00412515: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412518: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41251du); f_0040f81e();
    /* 0041251d: mov ecx, eax */ r_ecx = r_eax;
    /* 0041251f: call 0x40cdbf */ r_esp -= 4; W32(r_esp, 0x412524u); f_0040cdbf();
    /* 00412524: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412526: je 0x41254c */ if (fZ) goto L_0041254c;
L_00412528:; BB(0x00412528);
    /* 00412528: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041252b: cmp dword ptr [ecx + 0x80], 1 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412532: jle 0x4125a6 */ if ((fZ||fS!=fO)) goto L_004125a6;
L_00412534:; BB(0x00412534);
    /* 00412534: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412537: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41253cu); f_0040f81e();
    /* 0041253c: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00412542: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x412547u); f_0040bff5();
    /* 00412547: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041254a: jne 0x4125a6 */ if (!fZ) goto L_004125a6;
L_0041254c:; BB(0x0041254c);
    /* 0041254c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041254f: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x412554u); f_0040f81e();
    /* 00412554: mov dword ptr [eax + 0x144], 1 */ W32((u32)(r_eax+0x144u), 0x1u);
    /* 0041255e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412561: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x412566u); f_0040f81e();
    /* 00412566: mov dword ptr [eax + 0x138], 1 */ W32((u32)(r_eax+0x138u), 0x1u);
    /* 00412570: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00412572: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00412578: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0041257b: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00412580: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00412583: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00412585: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x412588u); call_ind(t); }
    /* 00412588: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041258a: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00412590: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00412593: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00412599: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041259c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041259e: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4125a1u); call_ind(t); }
    /* 004125a1: jmp 0x412644 */ goto L_00412644;
L_004125a6:; BB(0x004125a6);
    /* 004125a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004125a9: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4125aeu); f_0040f81e();
    /* 004125ae: mov dword ptr [eax + 0x144], 0xffffffff */ W32((u32)(r_eax+0x144u), 0xffffffffu);
    /* 004125b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004125bb: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4125c0u); f_0040f81e();
    /* 004125c0: mov dword ptr [eax + 0x138], 0 */ W32((u32)(r_eax+0x138u), 0x0u);
    /* 004125ca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004125cd: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4125d2u); f_0040f81e();
    /* 004125d2: mov ecx, eax */ r_ecx = r_eax;
    /* 004125d4: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x4125d9u); f_004259a0();
    /* 004125d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004125db: je 0x41262f */ if (fZ) goto L_0041262f;
L_004125dd:; BB(0x004125dd);
    /* 004125dd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004125e0: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 004125ea: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004125f0: call 0x45cbf1 */ r_esp -= 4; W32(r_esp, 0x4125f5u); f_0045cbf1();
    /* 004125f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004125f7: je 0x412618 */ if (fZ) goto L_00412618;
L_004125f9:; BB(0x004125f9);
    /* 004125f9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004125fb: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00412601: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x412606u); f_0060e7bd();
    /* 00412606: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412609: call 0x414a7c */ r_esp -= 4; W32(r_esp, 0x41260eu); f_00414a7c();
    /* 0041260e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412611: call 0x414b5e */ r_esp -= 4; W32(r_esp, 0x412616u); f_00414b5e();
    /* 00412616: jmp 0x412625 */ goto L_00412625;
L_00412618:; BB(0x00412618);
    /* 00412618: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041261a: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00412620: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x412625u); f_0060e7bd();
L_00412625:; BB(0x00412625);
    /* 00412625: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412628: call 0x412649 */ r_esp -= 4; W32(r_esp, 0x41262du); f_00412649();
    /* 0041262d: jmp 0x412644 */ goto L_00412644;
L_0041262f:; BB(0x0041262f);
    /* 0041262f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412631: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00412637: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x41263cu); f_0060e7bd();
    /* 0041263c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041263f: call 0x412705 */ r_esp -= 4; W32(r_esp, 0x412644u); f_00412705();
L_00412644:; BB(0x00412644);
    /* 00412644: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00412645: mov esp, ebp */ r_esp = r_ebp;
    /* 00412647: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412648: ret  */ FN_RET(0x004123f6); r_esp += 4; return;
}

void f_00412649(void) /* FUN_00412649 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412649);
    /* 00412649: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041264a: mov ebp, esp */ r_ebp = r_esp;
    /* 0041264c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041264f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00412652: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412654: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412657: call 0x4122ac */ r_esp -= 4; W32(r_esp, 0x41265cu); f_004122ac();
    /* 0041265c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041265f: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412663: jne 0x4126f6 */ if (!fZ) goto L_004126f6;
L_00412669:; BB(0x00412669);
    /* 00412669: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041266e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x412673u); f_0048ab58();
    /* 00412673: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412676: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00412679: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041267d: je 0x412690 */ if (fZ) goto L_00412690;
L_0041267f:; BB(0x0041267f);
    /* 0041267f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412681: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412683: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412686: call 0x415fae */ r_esp -= 4; W32(r_esp, 0x41268bu); f_00415fae();
    /* 0041268b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041268e: jmp 0x412697 */ goto L_00412697;
L_00412690:; BB(0x00412690);
    /* 00412690: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00412697:; BB(0x00412697);
    /* 00412697: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041269a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041269d: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 004126a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004126a2: push 0x1396 */ { u32 v = 0x1396u; r_esp -= 4; W32(r_esp, v); }
    /* 004126a7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004126aa: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004126ad: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x4126b2u); f_005e0461();
    /* 004126b2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004126b5: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004126b8: call 0x416119 */ r_esp -= 4; W32(r_esp, 0x4126bdu); f_00416119();
    /* 004126bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004126bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004126c1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004126c4: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004126c7: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x4126ccu); f_005d81dc();
    /* 004126cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004126ce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004126d1: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004126d4: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x4126d9u); f_005e06e1();
    /* 004126d9: add eax, 0xaa */ {  u32 a = r_eax; u32 b = 0xaau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004126de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004126df: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004126e2: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004126e5: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x4126eau); f_005e06d0();
    /* 004126ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004126eb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004126ee: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004126f1: call 0x5d81bb */ r_esp -= 4; W32(r_esp, 0x4126f6u); f_005d81bb();
L_004126f6:; BB(0x004126f6);
    /* 004126f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004126f9: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004126fc: call 0x41634b */ r_esp -= 4; W32(r_esp, 0x412701u); f_0041634b();
    /* 00412701: mov esp, ebp */ r_esp = r_ebp;
    /* 00412703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412704: ret  */ FN_RET(0x00412649); r_esp += 4; return;
}

void f_00412705(void) /* FUN_00412705 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412705);
    /* 00412705: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412706: mov ebp, esp */ r_ebp = r_esp;
    /* 00412708: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041270b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041270e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412711: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x412716u); f_0040f81e();
    /* 00412716: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00412719: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041271c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041271d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412720: call 0x41276f */ r_esp -= 4; W32(r_esp, 0x412725u); f_0041276f();
    /* 00412725: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412728: mov dword ptr [ecx + 0x144], eax */ W32((u32)(r_ecx+0x144u), r_eax);
    /* 0041272e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412731: mov dword ptr [edx + 0x138], 1 */ W32((u32)(r_edx+0x138u), 0x1u);
    /* 0041273b: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0041273d: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00412742: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00412745: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0041274b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041274e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412750: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x412753u); call_ind(t); }
    /* 00412753: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412755: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041275a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041275d: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00412763: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412766: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412768: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41276bu); call_ind(t); }
    /* 0041276b: mov esp, ebp */ r_esp = r_ebp;
    /* 0041276d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041276e: ret  */ FN_RET(0x00412705); r_esp += 4; return;
}

void f_0041276f(void) /* FUN_0041276f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041276f);
    /* 0041276f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412770: mov ebp, esp */ r_ebp = r_esp;
    /* 00412772: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412775: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00412778: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0041277f: jmp 0x41278a */ goto L_0041278a;
L_00412781:; BB(0x00412781);
    /* 00412781: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412784: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412787: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0041278a:; BB(0x0041278a);
    /* 0041278a: cmp dword ptr [ebp - 0x1c], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041278e: jge 0x4127a2 */ if ((fS==fO)) goto L_004127a2;
L_00412790:; BB(0x00412790);
    /* 00412790: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412793: mov byte ptr [ebp + ecx - 0x18], 0xff */ W8((u32)(r_ebp+r_ecx+0xffffffe8u), 0xffu);
    /* 00412798: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041279b: mov byte ptr [ebp + edx - 0x34], 0xff */ W8((u32)(r_ebp+r_edx+0xffffffccu), 0xffu);
    /* 004127a0: jmp 0x412781 */ goto L_00412781;
L_004127a2:; BB(0x004127a2);
    /* 004127a2: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 004127a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004127a6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004127a9: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 004127af: call 0x40b0ef */ r_esp -= 4; W32(r_esp, 0x4127b4u); f_0040b0ef();
    /* 004127b4: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 004127b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004127b8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004127bb: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004127be: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 004127c4: call 0x40b0ef */ r_esp -= 4; W32(r_esp, 0x4127c9u); f_0040b0ef();
    /* 004127c9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004127cc: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 004127d2: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 004127d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004127d6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004127d9: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x4127deu); f_004259f1();
    /* 004127de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004127e0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004127e3: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004127e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004127e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004127ea: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 004127f0: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x4127f5u); f_005dd4d2();
    /* 004127f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004127f6: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004127f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004127fa: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004127fd: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00412800: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00412806: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x41280bu); f_005dd4d2();
    /* 0041280b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041280c: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0041280f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412810: mov ecx, dword ptr [0x6f578c] */ r_ecx = R32((u32)(0x6f578cu));
    /* 00412816: call 0x4185ed */ r_esp -= 4; W32(r_esp, 0x41281bu); f_004185ed();
    /* 0041281b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0041281e: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00412824: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412825: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00412828: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0041282e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041282f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00412832: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00412838: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412839: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0041283c: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00412842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412843: mov ecx, dword ptr [0x6f578c] */ r_ecx = R32((u32)(0x6f578cu));
    /* 00412849: call 0x4186a2 */ r_esp -= 4; W32(r_esp, 0x41284eu); f_004186a2();
    /* 0041284e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00412851: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 00412857: call 0x40c332 */ r_esp -= 4; W32(r_esp, 0x41285cu); f_0040c332();
    /* 0041285c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041285d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00412860: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x412865u); f_004259a0();
    /* 00412865: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412866: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00412869: call 0x40cca4 */ r_esp -= 4; W32(r_esp, 0x41286eu); f_0040cca4();
    /* 0041286e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041286f: mov ecx, dword ptr [0x6f578c] */ r_ecx = R32((u32)(0x6f578cu));
    /* 00412875: call 0x4186d3 */ r_esp -= 4; W32(r_esp, 0x41287au); f_004186d3();
    /* 0041287a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041287d: add edx, 0x140 */ {  u32 a = r_edx; u32 b = 0x140u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412883: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412884: mov ecx, dword ptr [0x6f578c] */ r_ecx = R32((u32)(0x6f578cu));
    /* 0041288a: call 0x41889b */ r_esp -= 4; W32(r_esp, 0x41288fu); f_0041889b();
    /* 0041288f: mov esp, ebp */ r_esp = r_ebp;
    /* 00412891: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412892: ret 4 */ FN_RET(0x0041276f); r_esp += 8; return;
}

void f_00412895(void) /* FUN_00412895 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412895);
    /* 00412895: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412896: mov ebp, esp */ r_ebp = r_esp;
    /* 00412898: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041289b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041289e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004128a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004128a8: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4128adu); f_0040f81e();
    /* 004128ad: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004128b0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004128b3: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 004128b9: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004128bc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004128c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004128ca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004128cd: call 0x40ada9 */ r_esp -= 4; W32(r_esp, 0x4128d2u); f_0040ada9();
    /* 004128d2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004128d5: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x4128dau); f_0040c28d();
    /* 004128da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004128dc: je 0x412931 */ if (fZ) goto L_00412931;
L_004128de:; BB(0x004128de);
    /* 004128de: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004128e1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004128e4: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 004128ea: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x4128efu); f_0040c28d();
    /* 004128ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004128f1: je 0x412931 */ if (fZ) goto L_00412931;
L_004128f3:; BB(0x004128f3);
    /* 004128f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004128f6: call 0x40b1cb */ r_esp -= 4; W32(r_esp, 0x4128fbu); f_0040b1cb();
    /* 004128fb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004128fd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00412900: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x412905u); f_0040bcd8();
    /* 00412905: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412908: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x41290du); f_00425d41();
    /* 0041290d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041290f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412911: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412914: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x412919u); f_004259f1();
    /* 00412919: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041291c: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00412920: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00412923: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00412926: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00412929: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041292b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041292e: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x412931u); call_ind(t); }
L_00412931:; BB(0x00412931);
    /* 00412931: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00412938: jmp 0x412943 */ goto L_00412943;
L_0041293a:; BB(0x0041293a);
    /* 0041293a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041293d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412940: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00412943:; BB(0x00412943);
    /* 00412943: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00412946: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412949: cmp edx, dword ptr [ecx + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041294c: jge 0x4129e4 */ if ((fS==fO)) goto L_004129e4;
L_00412952:; BB(0x00412952);
    /* 00412952: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00412955: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412958: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 0041295b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041295e: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x412963u); f_0040bff5();
    /* 00412963: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412966: jg 0x41297d */ if ((!fZ&&fS==fO)) goto L_0041297d;
L_00412968:; BB(0x00412968);
    /* 00412968: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041296b: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x412970u); f_0040c28d();
    /* 00412970: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412972: jne 0x41297d */ if (!fZ) goto L_0041297d;
L_00412974:; BB(0x00412974);
    /* 00412974: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00412977: cmp dword ptr [edx + 0x44], 0 */ {  u32 a = R32((u32)(r_edx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041297b: je 0x41297f */ if (fZ) goto L_0041297f;
L_0041297d:; BB(0x0041297d);
    /* 0041297d: jmp 0x41293a */ goto L_0041293a;
L_0041297f:; BB(0x0041297f);
    /* 0041297f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412982: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x412987u); f_0040f9c4();
    /* 00412987: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041298a: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0041298e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00412991: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00412994: mov edx, dword ptr [edx + ecx*4 + 0x6c] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x6cu));
    /* 00412998: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0041299b: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0041299e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041299f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004129a2: call 0x426ef0 */ r_esp -= 4; W32(r_esp, 0x4129a7u); f_00426ef0();
    /* 004129a7: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004129ab: jle 0x4129df */ if ((fZ||fS!=fO)) goto L_004129df;
L_004129ad:; BB(0x004129ad);
    /* 004129ad: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004129b1: jne 0x4129c9 */ if (!fZ) goto L_004129c9;
L_004129b3:; BB(0x004129b3);
    /* 004129b3: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 004129ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004129bd: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4129c2u); f_0040f81e();
    /* 004129c2: mov ecx, eax */ r_ecx = r_eax;
    /* 004129c4: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x4129c9u); f_00425d41();
L_004129c9:; BB(0x004129c9);
    /* 004129c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004129cb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004129ce: call 0x40c48e */ r_esp -= 4; W32(r_esp, 0x4129d3u); f_0040c48e();
    /* 004129d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004129d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004129d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004129d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004129dc: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x4129dfu); call_ind(t); }
L_004129df:; BB(0x004129df);
    /* 004129df: jmp 0x41293a */ goto L_0041293a;
L_004129e4:; BB(0x004129e4);
    /* 004129e4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004129e6: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004129eb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004129ee: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004129f4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004129f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004129f9: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4129fcu); call_ind(t); }
    /* 004129fc: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00412a01: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00412a04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412a05: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00412a07: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412a0a: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00412a0d: call 0x40d34d */ r_esp -= 4; W32(r_esp, 0x412a12u); f_0040d34d();
    /* 00412a12: mov esp, ebp */ r_esp = r_ebp;
    /* 00412a14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412a15: ret  */ FN_RET(0x00412895); r_esp += 4; return;
}

void f_00412a16(void) /* FUN_00412a16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412a16);
    /* 00412a16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412a17: mov ebp, esp */ r_ebp = r_esp;
    /* 00412a19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412a1a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00412a1d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412a20: cmp dword ptr [eax + 0x60], 0 */ {  u32 a = R32((u32)(r_eax+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412a24: jle 0x412a28 */ if ((fZ||fS!=fO)) goto L_00412a28;
L_00412a26:; BB(0x00412a26);
    /* 00412a26: jmp 0x412a7e */ goto L_00412a7e;
L_00412a28:; BB(0x00412a28);
    /* 00412a28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412a2b: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00412a31: mov eax, dword ptr [edx + 0x1c9c] */ r_eax = R32((u32)(r_edx+0x1c9cu));
    /* 00412a37: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00412a3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412a40: call 0x40f0a3 */ r_esp -= 4; W32(r_esp, 0x412a45u); f_0040f0a3();
    /* 00412a45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412a48: call 0x412a82 */ r_esp -= 4; W32(r_esp, 0x412a4du); f_00412a82();
    /* 00412a4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412a4f: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00412a55: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00412a58: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00412a5e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412a61: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412a63: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x412a66u); call_ind(t); }
    /* 00412a66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412a68: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00412a6d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00412a70: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00412a76: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412a79: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412a7b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x412a7eu); call_ind(t); }
L_00412a7e:; BB(0x00412a7e);
    /* 00412a7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00412a80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412a81: ret  */ FN_RET(0x00412a16); r_esp += 4; return;
}

void f_00412a82(void) /* FUN_00412a82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412a82);
    /* 00412a82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412a83: mov ebp, esp */ r_ebp = r_esp;
    /* 00412a85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412a86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00412a89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412a8c: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00412a8f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00412a92: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412a95: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 00412a98: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00412a9e: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x412aa3u); f_00448e5d();
    /* 00412aa3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412aa6: cmp dword ptr [ecx + 0x60], eax */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412aa9: jle 0x412ac4 */ if ((fZ||fS!=fO)) goto L_00412ac4;
L_00412aab:; BB(0x00412aab);
    /* 00412aab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412aae: call 0x412d87 */ r_esp -= 4; W32(r_esp, 0x412ab3u); f_00412d87();
    /* 00412ab3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412ab6: je 0x412ac4 */ if (fZ) goto L_00412ac4;
L_00412ab8:; BB(0x00412ab8);
    /* 00412ab8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412aba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412abd: call 0x412ada */ r_esp -= 4; W32(r_esp, 0x412ac2u); f_00412ada();
    /* 00412ac2: jmp 0x412ad6 */ goto L_00412ad6;
L_00412ac4:; BB(0x00412ac4);
    /* 00412ac4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412ac7: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00412aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412acb: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00412ad1: call 0x448ea9 */ r_esp -= 4; W32(r_esp, 0x412ad6u); f_00448ea9();
L_00412ad6:; BB(0x00412ad6);
    /* 00412ad6: mov esp, ebp */ r_esp = r_ebp;
    /* 00412ad8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412ad9: ret  */ FN_RET(0x00412a82); r_esp += 4; return;
}

void f_00412ada(void) /* FUN_00412ada */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412ada);
    /* 00412ada: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412adb: mov ebp, esp */ r_ebp = r_esp;
    /* 00412add: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412ae0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00412ae3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00412aea: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00412af1: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00412af8: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00412aff: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00412b05: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x412b0au); f_00448e5d();
    /* 00412b0a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412b0d: cmp dword ptr [ecx + 0x60], eax */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412b10: jg 0x412b23 */ if ((!fZ&&fS==fO)) goto L_00412b23;
L_00412b12:; BB(0x00412b12);
    /* 00412b12: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412b15: call 0x412fd4 */ r_esp -= 4; W32(r_esp, 0x412b1au); f_00412fd4();
    /* 00412b1a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412b1d: jne 0x412bf4 */ if (!fZ) goto L_00412bf4;
L_00412b23:; BB(0x00412b23);
    /* 00412b23: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412b26: call 0x412fd4 */ r_esp -= 4; W32(r_esp, 0x412b2bu); f_00412fd4();
    /* 00412b2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412b2d: jne 0x412b4d */ if (!fZ) goto L_00412b4d;
L_00412b2f:; BB(0x00412b2f);
    /* 00412b2f: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00412b34: push 0x64cc94 */ { u32 v = 0x64cc94u; r_esp -= 4; W32(r_esp, v); }
    /* 00412b39: push 0x64cca4 */ { u32 v = 0x64cca4u; r_esp -= 4; W32(r_esp, v); }
    /* 00412b3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412b40: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x412b45u); f_0060f9f3();
    /* 00412b45: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412b48: jmp 0x412bf4 */ goto L_00412bf4;
L_00412b4d:; BB(0x00412b4d);
    /* 00412b4d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412b50: call 0x412d87 */ r_esp -= 4; W32(r_esp, 0x412b55u); f_00412d87();
    /* 00412b55: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00412b58: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412b5c: je 0x412b8c */ if (fZ) goto L_00412b8c;
L_00412b5e:; BB(0x00412b5e);
    /* 00412b5e: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00412b61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412b62: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00412b68: call 0x448e71 */ r_esp -= 4; W32(r_esp, 0x412b6du); f_00448e71();
    /* 00412b6d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412b70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412b71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412b74: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412b77: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00412b7b: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x412b80u); f_004259cd();
    /* 00412b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412b81: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00412b87: call 0x448d62 */ r_esp -= 4; W32(r_esp, 0x412b8cu); f_00448d62();
L_00412b8c:; BB(0x00412b8c);
    /* 00412b8c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412b8f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412b92: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00412b96: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x412b9bu); f_004259a0();
    /* 00412b9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412b9d: je 0x412bf4 */ if (fZ) goto L_00412bf4;
L_00412b9f:; BB(0x00412b9f);
    /* 00412b9f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412ba2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412ba5: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00412ba9: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00412bac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412bad: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00412bb3: call 0x45c475 */ r_esp -= 4; W32(r_esp, 0x412bb8u); f_0045c475();
    /* 00412bb8: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00412bbb: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00412bbe: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00412bc1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00412bc4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00412bc7: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412bca: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00412bcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412bcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412bd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412bd3: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00412bd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412bd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412bd9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412bdc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412bdf: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00412be3: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x412be8u); f_004259cd();
    /* 00412be8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412be9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00412bef: call 0x45cde1 */ r_esp -= 4; W32(r_esp, 0x412bf4u); f_0045cde1();
L_00412bf4:; BB(0x00412bf4);
    /* 00412bf4: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00412bfa: mov dword ptr [ecx + 0x12ec4], 0 */ W32((u32)(r_ecx+0x12ec4u), 0x0u);
    /* 00412c04: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 00412c09: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00412c0f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00412c11: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00412c17: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x412c1au); call_ind(t); }
    /* 00412c1a: mov esp, ebp */ r_esp = r_ebp;
    /* 00412c1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412c1d: ret 4 */ FN_RET(0x00412ada); r_esp += 8; return;
}

void f_00412c20(void) /* FUN_00412c20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412c20);
    /* 00412c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00412c23: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412c26: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00412c29: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00412c30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412c37: jmp 0x412c42 */ goto L_00412c42;
L_00412c39:; BB(0x00412c39);
    /* 00412c39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412c3c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412c3f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00412c42:; BB(0x00412c42);
    /* 00412c42: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412c46: jge 0x412c83 */ if ((fS==fO)) goto L_00412c83;
L_00412c48:; BB(0x00412c48);
    /* 00412c48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412c4b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412c4e: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00412c52: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x412c57u); f_00425973();
    /* 00412c57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412c59: je 0x412c81 */ if (fZ) goto L_00412c81;
L_00412c5b:; BB(0x00412c5b);
    /* 00412c5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412c5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412c61: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00412c65: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412c6au); f_0040c983();
    /* 00412c6a: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412c6d: jge 0x412c81 */ if ((fS==fO)) goto L_00412c81;
L_00412c6f:; BB(0x00412c6f);
    /* 00412c6f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412c72: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412c75: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00412c79: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412c7eu); f_0040c983();
    /* 00412c7e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00412c81:; BB(0x00412c81);
    /* 00412c81: jmp 0x412c39 */ goto L_00412c39;
L_00412c83:; BB(0x00412c83);
    /* 00412c83: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412c86: mov esp, ebp */ r_esp = r_ebp;
    /* 00412c88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412c89: ret  */ FN_RET(0x00412c20); r_esp += 4; return;
}

void f_00412c8a(void) /* FUN_00412c8a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412c8a);
    /* 00412c8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412c8b: mov ebp, esp */ r_ebp = r_esp;
    /* 00412c8d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412c90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00412c91: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00412c94: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412c9b: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00412ca2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00412ca9: jmp 0x412cb4 */ goto L_00412cb4;
L_00412cab:; BB(0x00412cab);
    /* 00412cab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412cae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412cb1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00412cb4:; BB(0x00412cb4);
    /* 00412cb4: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412cb8: jge 0x412cf5 */ if ((fS==fO)) goto L_00412cf5;
L_00412cba:; BB(0x00412cba);
    /* 00412cba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412cbd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412cc0: cmp dword ptr [edx + ecx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412cc5: je 0x412cf3 */ if (fZ) goto L_00412cf3;
L_00412cc7:; BB(0x00412cc7);
    /* 00412cc7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412cca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412ccd: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00412cd1: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412cd6u); f_0040c983();
    /* 00412cd6: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412cd9: jge 0x412cf3 */ if ((fS==fO)) goto L_00412cf3;
L_00412cdb:; BB(0x00412cdb);
    /* 00412cdb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412cde: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00412ce1: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00412ce5: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412ceau); f_0040c983();
    /* 00412cea: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00412ced: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412cf0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00412cf3:; BB(0x00412cf3);
    /* 00412cf3: jmp 0x412cab */ goto L_00412cab;
L_00412cf5:; BB(0x00412cf5);
    /* 00412cf5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412cf8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00412cfb: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00412d02: jmp 0x412d0d */ goto L_00412d0d;
L_00412d04:; BB(0x00412d04);
    /* 00412d04: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412d07: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412d0a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00412d0d:; BB(0x00412d0d);
    /* 00412d0d: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412d11: jge 0x412d7f */ if ((fS==fO)) goto L_00412d7f;
L_00412d13:; BB(0x00412d13);
    /* 00412d13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412d16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412d19: cmp dword ptr [edx + ecx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412d1e: je 0x412d7d */ if (fZ) goto L_00412d7d;
L_00412d20:; BB(0x00412d20);
    /* 00412d20: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412d23: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412d26: je 0x412d7d */ if (fZ) goto L_00412d7d;
L_00412d28:; BB(0x00412d28);
    /* 00412d28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412d2b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412d2e: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00412d32: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412d37u); f_0040c983();
    /* 00412d37: mov esi, eax */ r_esi = r_eax;
    /* 00412d39: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00412d3e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412d40: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00412d46: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x412d49u); call_ind(t); }
    /* 00412d49: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412d4b: jl 0x412d7d */ if ((fS!=fO)) goto L_00412d7d;
L_00412d4d:; BB(0x00412d4d);
    /* 00412d4d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412d50: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412d53: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00412d57: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412d5cu); f_0040c983();
    /* 00412d5c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412d5f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00412d61: cmp dword ptr [ebp - 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412d64: jle 0x412d7d */ if ((fZ||fS!=fO)) goto L_00412d7d;
L_00412d66:; BB(0x00412d66);
    /* 00412d66: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412d69: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412d6c: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00412d70: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412d75u); f_0040c983();
    /* 00412d75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412d78: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00412d7a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00412d7d:; BB(0x00412d7d);
    /* 00412d7d: jmp 0x412d04 */ goto L_00412d04;
L_00412d7f:; BB(0x00412d7f);
    /* 00412d7f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412d82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00412d83: mov esp, ebp */ r_esp = r_ebp;
    /* 00412d85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412d86: ret  */ FN_RET(0x00412c8a); r_esp += 4; return;
}

void f_00412d87(void) /* FUN_00412d87 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412d87);
    /* 00412d87: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412d88: mov ebp, esp */ r_ebp = r_esp;
    /* 00412d8a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412d8d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00412d90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412d97: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00412d9e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00412da5: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00412dac: jmp 0x412db7 */ goto L_00412db7;
L_00412dae:; BB(0x00412dae);
    /* 00412dae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412db1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412db4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00412db7:; BB(0x00412db7);
    /* 00412db7: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412dbb: jge 0x412e22 */ if ((fS==fO)) goto L_00412e22;
L_00412dbd:; BB(0x00412dbd);
    /* 00412dbd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412dc0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412dc3: cmp dword ptr [edx + ecx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412dc8: je 0x412e20 */ if (fZ) goto L_00412e20;
L_00412dca:; BB(0x00412dca);
    /* 00412dca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412dcd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412dd0: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00412dd4: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412dd9u); f_0040c983();
    /* 00412dd9: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412ddc: jle 0x412dff */ if ((fZ||fS!=fO)) goto L_00412dff;
L_00412dde:; BB(0x00412dde);
    /* 00412dde: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00412de5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412de8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00412deb: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00412def: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412df4u); f_0040c983();
    /* 00412df4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00412df7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412dfa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00412dfd: jmp 0x412e20 */ goto L_00412e20;
L_00412dff:; BB(0x00412dff);
    /* 00412dff: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412e03: je 0x412e20 */ if (fZ) goto L_00412e20;
L_00412e05:; BB(0x00412e05);
    /* 00412e05: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412e08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00412e0b: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00412e0f: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412e14u); f_0040c983();
    /* 00412e14: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412e17: jne 0x412e20 */ if (!fZ) goto L_00412e20;
L_00412e19:; BB(0x00412e19);
    /* 00412e19: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_00412e20:; BB(0x00412e20);
    /* 00412e20: jmp 0x412dae */ goto L_00412dae;
L_00412e22:; BB(0x00412e22);
    /* 00412e22: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412e26: je 0x412e2d */ if (fZ) goto L_00412e2d;
L_00412e28:; BB(0x00412e28);
    /* 00412e28: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00412e2b: jmp 0x412e30 */ goto L_00412e30;
L_00412e2d:; BB(0x00412e2d);
    /* 00412e2d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_00412e30:; BB(0x00412e30);
    /* 00412e30: mov esp, ebp */ r_esp = r_ebp;
    /* 00412e32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412e33: ret  */ FN_RET(0x00412d87); r_esp += 4; return;
}

void f_00412e34(void) /* FUN_00412e34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412e34);
    /* 00412e34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412e35: mov ebp, esp */ r_ebp = r_esp;
    /* 00412e37: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412e3a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00412e3d: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 00412e44: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00412e4b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00412e52: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00412e59: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00412e5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412e5d: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00412e63: call 0x448e71 */ r_esp -= 4; W32(r_esp, 0x412e68u); f_00448e71();
    /* 00412e68: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412e6b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00412e6c: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00412e71: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00412e71, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00412e71, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00412e73: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00412e76: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00412e7d: jmp 0x412e88 */ goto L_00412e88;
L_00412e7f:; BB(0x00412e7f);
    /* 00412e7f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412e82: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412e85: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00412e88:; BB(0x00412e88);
    /* 00412e88: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412e8c: jge 0x412eb6 */ if ((fS==fO)) goto L_00412eb6;
L_00412e8e:; BB(0x00412e8e);
    /* 00412e8e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412e91: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00412e94: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00412e98: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412e9du); f_0040c983();
    /* 00412e9d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00412ea0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412ea3: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412ea6: jle 0x412eb4 */ if ((fZ||fS!=fO)) goto L_00412eb4;
L_00412ea8:; BB(0x00412ea8);
    /* 00412ea8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412eab: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00412eae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412eb1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00412eb4:; BB(0x00412eb4);
    /* 00412eb4: jmp 0x412e7f */ goto L_00412e7f;
L_00412eb6:; BB(0x00412eb6);
    /* 00412eb6: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00412ebd: jmp 0x412ec8 */ goto L_00412ec8;
L_00412ebf:; BB(0x00412ebf);
    /* 00412ebf: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412ec2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412ec5: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00412ec8:; BB(0x00412ec8);
    /* 00412ec8: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412ecc: jge 0x412f00 */ if ((fS==fO)) goto L_00412f00;
L_00412ece:; BB(0x00412ece);
    /* 00412ece: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412ed1: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412ed4: jne 0x412ed8 */ if (!fZ) goto L_00412ed8;
L_00412ed6:; BB(0x00412ed6);
    /* 00412ed6: jmp 0x412ebf */ goto L_00412ebf;
L_00412ed8:; BB(0x00412ed8);
    /* 00412ed8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412edb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00412ede: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00412ee2: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412ee7u); f_0040c983();
    /* 00412ee7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00412eea: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412eed: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412ef0: jle 0x412efe */ if ((fZ||fS!=fO)) goto L_00412efe;
L_00412ef2:; BB(0x00412ef2);
    /* 00412ef2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412ef5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00412ef8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412efb: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_00412efe:; BB(0x00412efe);
    /* 00412efe: jmp 0x412ebf */ goto L_00412ebf;
L_00412f00:; BB(0x00412f00);
    /* 00412f00: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412f04: je 0x412f0c */ if (fZ) goto L_00412f0c;
L_00412f06:; BB(0x00412f06);
    /* 00412f06: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412f0a: jne 0x412f11 */ if (!fZ) goto L_00412f11;
L_00412f0c:; BB(0x00412f0c);
    /* 00412f0c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00412f0f: jmp 0x412f24 */ goto L_00412f24;
L_00412f11:; BB(0x00412f11);
    /* 00412f11: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412f14: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00412f17: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412f1a: jle 0x412f21 */ if ((fZ||fS!=fO)) goto L_00412f21;
L_00412f1c:; BB(0x00412f1c);
    /* 00412f1c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00412f1f: jmp 0x412f24 */ goto L_00412f24;
L_00412f21:; BB(0x00412f21);
    /* 00412f21: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00412f24:; BB(0x00412f24);
    /* 00412f24: mov esp, ebp */ r_esp = r_ebp;
    /* 00412f26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412f27: ret  */ FN_RET(0x00412e34); r_esp += 4; return;
}

void f_00412f28(void) /* FUN_00412f28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412f28);
    /* 00412f28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412f29: mov ebp, esp */ r_ebp = r_esp;
    /* 00412f2b: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412f2e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00412f31: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 00412f38: mov dword ptr [ebp - 0x20], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe0u), 0x3b9aca00u);
    /* 00412f3f: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00412f42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412f43: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00412f49: call 0x448e71 */ r_esp -= 4; W32(r_esp, 0x412f4eu); f_00448e71();
    /* 00412f4e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412f51: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00412f53: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00412f54: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00412f59: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00412f59, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00412f59, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00412f5b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00412f5e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00412f65: jmp 0x412f70 */ goto L_00412f70;
L_00412f67:; BB(0x00412f67);
    /* 00412f67: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412f6a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412f6d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_00412f70:; BB(0x00412f70);
    /* 00412f70: cmp dword ptr [ebp - 0x1c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412f74: jge 0x412fa4 */ if ((fS==fO)) goto L_00412fa4;
L_00412f76:; BB(0x00412f76);
    /* 00412f76: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412f79: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00412f7c: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00412f80: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x412f85u); f_0040c983();
    /* 00412f85: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00412f88: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412f8c: jle 0x412fa2 */ if ((fZ||fS!=fO)) goto L_00412fa2;
L_00412f8e:; BB(0x00412f8e);
    /* 00412f8e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412f91: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412f94: jge 0x412fa2 */ if ((fS==fO)) goto L_00412fa2;
L_00412f96:; BB(0x00412f96);
    /* 00412f96: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412f99: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00412f9c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412f9f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00412fa2:; BB(0x00412fa2);
    /* 00412fa2: jmp 0x412f67 */ goto L_00412f67;
L_00412fa4:; BB(0x00412fa4);
    /* 00412fa4: cmp dword ptr [ebp - 0x20], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412fab: jne 0x412fb2 */ if (!fZ) goto L_00412fb2;
L_00412fad:; BB(0x00412fad);
    /* 00412fad: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00412fb0: jmp 0x412fd0 */ goto L_00412fd0;
L_00412fb2:; BB(0x00412fb2);
    /* 00412fb2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00412fb5: call 0x412c20 */ r_esp -= 4; W32(r_esp, 0x412fbau); f_00412c20();
    /* 00412fba: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00412fbd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412fc0: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00412fc3: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412fc6: jle 0x412fcd */ if ((fZ||fS!=fO)) goto L_00412fcd;
L_00412fc8:; BB(0x00412fc8);
    /* 00412fc8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00412fcb: jmp 0x412fd0 */ goto L_00412fd0;
L_00412fcd:; BB(0x00412fcd);
    /* 00412fcd: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00412fd0:; BB(0x00412fd0);
    /* 00412fd0: mov esp, ebp */ r_esp = r_ebp;
    /* 00412fd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412fd3: ret  */ FN_RET(0x00412f28); r_esp += 4; return;
}

void f_00412fd4(void) /* FUN_00412fd4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412fd4);
    /* 00412fd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412fd5: mov ebp, esp */ r_ebp = r_esp;
    /* 00412fd7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412fda: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00412fdd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412fe4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00412feb: jmp 0x412ff6 */ goto L_00412ff6;
L_00412fed:; BB(0x00412fed);
    /* 00412fed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412ff0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412ff3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00412ff6:; BB(0x00412ff6);
    /* 00412ff6: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412ffa: jge 0x41301a */ if ((fS==fO)) goto L_0041301a;
L_00412ffc:; BB(0x00412ffc);
    /* 00412ffc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412fff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00413002: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00413006: call 0x40cbbf */ r_esp -= 4; W32(r_esp, 0x41300bu); f_0040cbbf();
    /* 0041300b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041300d: je 0x413018 */ if (fZ) goto L_00413018;
L_0041300f:; BB(0x0041300f);
    /* 0041300f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413012: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00413015: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00413018:; BB(0x00413018);
    /* 00413018: jmp 0x412fed */ goto L_00412fed;
L_0041301a:; BB(0x0041301a);
    /* 0041301a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041301d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041301f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413020: ret  */ FN_RET(0x00412fd4); r_esp += 4; return;
}

void f_00413021(void) /* FUN_00413021 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00413021);
    /* 00413021: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413022: mov ebp, esp */ r_ebp = r_esp;
    /* 00413024: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413025: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00413028: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041302e: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x413033u); f_00448ca3();
    /* 00413033: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413035: jne 0x41303b */ if (!fZ) goto L_0041303b;
L_00413037:; BB(0x00413037);
    /* 00413037: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00413039: jmp 0x413071 */ goto L_00413071;
L_0041303b:; BB(0x0041303b);
    /* 0041303b: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00413041: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x413046u); f_00448e5d();
    /* 00413046: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413049: cmp dword ptr [ecx + 0x60], eax */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041304c: jl 0x41305b */ if ((fS!=fO)) goto L_0041305b;
L_0041304e:; BB(0x0041304e);
    /* 0041304e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413051: call 0x412d87 */ r_esp -= 4; W32(r_esp, 0x413056u); f_00412d87();
    /* 00413056: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413059: jne 0x413068 */ if (!fZ) goto L_00413068;
L_0041305b:; BB(0x0041305b);
    /* 0041305b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041305e: call 0x412fd4 */ r_esp -= 4; W32(r_esp, 0x413063u); f_00412fd4();
    /* 00413063: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413066: jne 0x41306f */ if (!fZ) goto L_0041306f;
L_00413068:; BB(0x00413068);
    /* 00413068: mov eax, 1 */ r_eax = 0x1u;
    /* 0041306d: jmp 0x413071 */ goto L_00413071;
L_0041306f:; BB(0x0041306f);
    /* 0041306f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00413071:; BB(0x00413071);
    /* 00413071: mov esp, ebp */ r_esp = r_ebp;
    /* 00413073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413074: ret  */ FN_RET(0x00413021); r_esp += 4; return;
}

void f_00413075(void) /* FUN_00413075 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00413075);
    /* 00413075: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413076: mov ebp, esp */ r_ebp = r_esp;
    /* 00413078: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041307b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041307c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041307f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413081: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413083: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00413089: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x41308eu); f_0045c4ac();
    /* 0041308e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00413091: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413094: movsx esi, byte ptr [eax + 0xe] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+0xeu));
    /* 00413098: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041309b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0041309e: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 004130a4: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x4130a9u); f_005d71b9();
    /* 004130a9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004130ab: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004130ad: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004130ae: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004130b0: je 0x4130eb */ if (fZ) goto L_004130eb;
L_004130b2:; BB(0x004130b2);
    /* 004130b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004130b5: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004130b8: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 004130be: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x4130c3u); f_005d71b9();
    /* 004130c3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004130c5: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004130c7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004130c8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004130cb: mov byte ptr [edx + 0xe], al */ W8((u32)(r_edx+0xeu), (u8)r_eax);
    /* 004130ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004130d1: movsx ecx, byte ptr [eax + 0xe] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xeu));
    /* 004130d5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004130d8: mov dword ptr [edx + 0xc0], ecx */ W32((u32)(r_edx+0xc0u), r_ecx);
    /* 004130de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004130e0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004130e6: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x4130ebu); f_0045c8df();
L_004130eb:; BB(0x004130eb);
    /* 004130eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004130ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004130ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004130ef: ret  */ FN_RET(0x00413075); r_esp += 4; return;
}

void f_004130f0(void) /* FUN_004130f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004130f0);
    /* 004130f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004130f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004130f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004130f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004130f9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004130fc: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413100: jne 0x41316a */ if (!fZ) goto L_0041316a;
L_00413102:; BB(0x00413102);
    /* 00413102: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413107: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x41310cu); f_0048ab58();
    /* 0041310c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041310f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00413112: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413116: je 0x413129 */ if (fZ) goto L_00413129;
L_00413118:; BB(0x00413118);
    /* 00413118: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041311a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041311c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041311f: call 0x416e67 */ r_esp -= 4; W32(r_esp, 0x413124u); f_00416e67();
    /* 00413124: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00413127: jmp 0x413130 */ goto L_00413130;
L_00413129:; BB(0x00413129);
    /* 00413129: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00413130:; BB(0x00413130);
    /* 00413130: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00413133: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00413136: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00413139: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041313b: push 0x13a0 */ { u32 v = 0x13a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413140: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00413143: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00413146: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x41314bu); f_005e0461();
    /* 0041314b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041314e: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 00413151: call 0x416fa0 */ r_esp -= 4; W32(r_esp, 0x413156u); f_00416fa0();
    /* 00413156: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413158: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041315a: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041315f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00413162: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 00413165: call 0x5d81bb */ r_esp -= 4; W32(r_esp, 0x41316au); f_005d81bb();
L_0041316a:; BB(0x0041316a);
    /* 0041316a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041316d: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00413170: call 0x4171fb */ r_esp -= 4; W32(r_esp, 0x413175u); f_004171fb();
    /* 00413175: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00413178: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0041317b: call 0x417375 */ r_esp -= 4; W32(r_esp, 0x413180u); f_00417375();
    /* 00413180: mov esp, ebp */ r_esp = r_ebp;
    /* 00413182: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413183: ret  */ FN_RET(0x004130f0); r_esp += 4; return;
}

void f_00413184(void) /* FUN_00413184 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00413184);
    /* 00413184: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413185: mov ebp, esp */ r_ebp = r_esp;
    /* 00413187: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041318a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0041318d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00413194: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041319b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004131a2: jmp 0x4131ad */ goto L_004131ad;
L_004131a4:; BB(0x004131a4);
    /* 004131a4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004131a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004131aa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004131ad:; BB(0x004131ad);
    /* 004131ad: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004131b1: jge 0x4131df */ if ((fS==fO)) goto L_004131df;
L_004131b3:; BB(0x004131b3);
    /* 004131b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004131b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004131b7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004131ba: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004131bd: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 004131c1: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x4131c6u); f_004280b4();
    /* 004131c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004131c8: je 0x4131dd */ if (fZ) goto L_004131dd;
L_004131ca:; BB(0x004131ca);
    /* 004131ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004131cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004131ce: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004131d1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004131d4: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 004131d8: call 0x428686 */ r_esp -= 4; W32(r_esp, 0x4131ddu); f_00428686();
L_004131dd:; BB(0x004131dd);
    /* 004131dd: jmp 0x4131a4 */ goto L_004131a4;
L_004131df:; BB(0x004131df);
    /* 004131df: mov esp, ebp */ r_esp = r_ebp;
    /* 004131e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004131e2: ret 4 */ FN_RET(0x00413184); r_esp += 8; return;
}

void f_004131e5(void) /* FUN_004131e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004131e5);
    /* 004131e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004131e6: mov ebp, esp */ r_ebp = r_esp;
    /* 004131e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004131eb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004131ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004131f1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004131f4: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x4131f9u); f_005dd4d2();
    /* 004131f9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004131fd: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00413204: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041320b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041320f: jne 0x413225 */ if (!fZ) goto L_00413225;
L_00413211:; BB(0x00413211);
    /* 00413211: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00413217: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00413219: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041321f: call dword ptr [edx + 0x80] */ { u32 t = R32((u32)(r_edx+0x80u)); r_esp -= 4; W32(r_esp, 0x413225u); call_ind(t); }
L_00413225:; BB(0x00413225);
    /* 00413225: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041322b: jmp 0x413239 */ goto L_00413239;
L_0041322d:; BB(0x0041322d);
    /* 0041322d: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00413231: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00413235: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_00413239:; BB(0x00413239);
    /* 00413239: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0041323d: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413240: jge 0x41325a */ if ((fS==fO)) goto L_0041325a;
L_00413242:; BB(0x00413242);
    /* 00413242: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00413246: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00413249: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0041324d: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 00413253: call 0x40ae56 */ r_esp -= 4; W32(r_esp, 0x413258u); f_0040ae56();
    /* 00413258: jmp 0x41322d */ goto L_0041322d;
L_0041325a:; BB(0x0041325a);
    /* 0041325a: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00413260: jmp 0x41326e */ goto L_0041326e;
L_00413262:; BB(0x00413262);
    /* 00413262: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00413266: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0041326a: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0041326e:; BB(0x0041326e);
    /* 0041326e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00413272: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00413276: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413278: jge 0x413293 */ if ((fS==fO)) goto L_00413293;
L_0041327a:; BB(0x0041327a);
    /* 0041327a: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0041327e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041327f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00413282: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00413285: call 0x40a6c6 */ r_esp -= 4; W32(r_esp, 0x41328au); f_0040a6c6();
    /* 0041328a: mov ecx, eax */ r_ecx = r_eax;
    /* 0041328c: call 0x40a268 */ r_esp -= 4; W32(r_esp, 0x413291u); f_0040a268();
    /* 00413291: jmp 0x413262 */ goto L_00413262;
L_00413293:; BB(0x00413293);
    /* 00413293: mov esp, ebp */ r_esp = r_ebp;
    /* 00413295: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413296: ret 4 */ FN_RET(0x004131e5); r_esp += 8; return;
}

void f_00413299(void) /* FUN_00413299 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00413299);
    /* 00413299: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041329a: mov ebp, esp */ r_ebp = r_esp;
    /* 0041329c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041329d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004132a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004132a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004132a6: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 004132ac: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004132b3: je 0x4132d7 */ if (fZ) goto L_004132d7;
L_004132b5:; BB(0x004132b5);
    /* 004132b5: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004132b9: je 0x4132ca */ if (fZ) goto L_004132ca;
L_004132bb:; BB(0x004132bb);
    /* 004132bb: push 0x64ccb0 */ { u32 v = 0x64ccb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004132c0: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x4132c5u); f_0060fc40();
    /* 004132c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004132c8: jmp 0x4132d7 */ goto L_004132d7;
L_004132ca:; BB(0x004132ca);
    /* 004132ca: push 0x64ccd0 */ { u32 v = 0x64ccd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004132cf: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x4132d4u); f_0060fc40();
    /* 004132d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004132d7:; BB(0x004132d7);
    /* 004132d7: mov esp, ebp */ r_esp = r_ebp;
    /* 004132d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004132da: ret 4 */ FN_RET(0x00413299); r_esp += 8; return;
}

void f_004132dd(void) /* FUN_004132dd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004132dd);
    /* 004132dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004132de: mov ebp, esp */ r_ebp = r_esp;
    /* 004132e0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004132e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004132e4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004132e7: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004132ed: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4132f2u); f_0040f81e();
    /* 004132f2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004132f5: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004132fb: call 0x45cc47 */ r_esp -= 4; W32(r_esp, 0x413300u); f_0045cc47();
    /* 00413300: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413302: je 0x41334c */ if (fZ) goto L_0041334c;
L_00413304:; BB(0x00413304);
    /* 00413304: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00413307: cmp dword ptr [eax + 0xc8], 0 */ {  u32 a = R32((u32)(r_eax+0xc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041330e: jne 0x41334c */ if (!fZ) goto L_0041334c;
L_00413310:; BB(0x00413310);
    /* 00413310: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00413314: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413317: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413318: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041331b: call 0x41276f */ r_esp -= 4; W32(r_esp, 0x413320u); f_0041276f();
    /* 00413320: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413322: je 0x41334c */ if (fZ) goto L_0041334c;
L_00413324:; BB(0x00413324);
    /* 00413324: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00413327: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0041332a: call 0x41634b */ r_esp -= 4; W32(r_esp, 0x41332fu); f_0041634b();
    /* 0041332f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00413332: mov dword ptr [eax + 0xc8], 1 */ W32((u32)(r_eax+0xc8u), 0x1u);
    /* 0041333c: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00413342: call 0x60e9a5 */ r_esp -= 4; W32(r_esp, 0x413347u); f_0060e9a5();
    /* 00413347: jmp 0x4133db */ goto L_004133db;
L_0041334c:; BB(0x0041334c);
    /* 0041334c: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00413350: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413353: mov dword ptr [edx + 0x144], ecx */ W32((u32)(r_edx+0x144u), r_ecx);
    /* 00413359: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041335c: mov dword ptr [eax + 0x138], 1 */ W32((u32)(r_eax+0x138u), 0x1u);
    /* 00413366: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413368: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041336b: call 0x4122ac */ r_esp -= 4; W32(r_esp, 0x413370u); f_004122ac();
    /* 00413370: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413377: je 0x41338b */ if (fZ) goto L_0041338b;
L_00413379:; BB(0x00413379);
    /* 00413379: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0041337d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041337e: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 00413384: call 0x41cf69 */ r_esp -= 4; W32(r_esp, 0x413389u); f_0041cf69();
    /* 00413389: jmp 0x4133c7 */ goto L_004133c7;
L_0041338b:; BB(0x0041338b);
    /* 0041338b: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00413391: call 0x4486c9 */ r_esp -= 4; W32(r_esp, 0x413396u); f_004486c9();
    /* 00413396: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00413398: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0041339e: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004133a1: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004133a6: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004133a9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004133ab: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4133aeu); call_ind(t); }
    /* 004133ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004133b0: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 004133b6: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004133b9: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004133bf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004133c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004133c4: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4133c7u); call_ind(t); }
L_004133c7:; BB(0x004133c7);
    /* 004133c7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004133ca: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004133ce: je 0x4133db */ if (fZ) goto L_004133db;
L_004133d0:; BB(0x004133d0);
    /* 004133d0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004133d3: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004133d6: call 0x416457 */ r_esp -= 4; W32(r_esp, 0x4133dbu); f_00416457();
L_004133db:; BB(0x004133db);
    /* 004133db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004133dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004133de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004133df: ret 4 */ FN_RET(0x004132dd); r_esp += 8; return;
}

void f_004133e2(void) /* FUN_004133e2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004133e2);
    /* 004133e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004133e3: mov ebp, esp */ r_ebp = r_esp;
    /* 004133e5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004133e8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004133eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004133ee: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4133f3u); f_0040f81e();
    /* 004133f3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004133f6: push 0x64ccf4 */ { u32 v = 0x64ccf4u; r_esp -= 4; W32(r_esp, v); }
    /* 004133fb: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x413400u); f_0060fc40();
    /* 00413400: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413403: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00413405: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041340a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041340d: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00413413: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00413416: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00413418: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x41341bu); call_ind(t); }
    /* 0041341b: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00413420: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00413423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413424: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413426: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00413429: call 0x413656 */ r_esp -= 4; W32(r_esp, 0x41342eu); f_00413656();
    /* 0041342e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413431: mov eax, dword ptr [edx + 0x144] */ r_eax = R32((u32)(r_edx+0x144u));
    /* 00413437: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041343a: mov esp, ebp */ r_esp = r_ebp;
    /* 0041343c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041343d: ret  */ FN_RET(0x004133e2); r_esp += 4; return;
}

void f_0041343e(void) /* FUN_0041343e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041343e);
    /* 0041343e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041343f: mov ebp, esp */ r_ebp = r_esp;
    /* 00413441: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00413444: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00413447: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041344a: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41344fu); f_0040f81e();
    /* 0041344f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00413452: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00413454: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00413459: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041345c: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00413462: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00413465: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00413467: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x41346au); call_ind(t); }
    /* 0041346a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041346d: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 00413473: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00413476: cmp dword ptr [ebp - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041347a: ja 0x4135e2 */ if ((!fC&&!fZ)) goto L_004135e2;
L_00413480:; BB(0x00413480);
    /* 00413480: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00413483: jmp dword ptr [edx*4 + 0x4135e6] */ { u32 t = R32((u32)(r_edx*4+0x4135e6u)); switch (t) { case 0x41348au: goto L_0041348a; case 0x4134a7u: goto L_004134a7; case 0x413555u: goto L_00413555; case 0x4134edu: goto L_004134ed; case 0x4135aeu: goto L_004135ae; default: UNSUP(0x00413483, "jump table entry is not a known target"); } }
L_0041348a:; BB(0x0041348a);
    /* 0041348a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041348c: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00413491: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00413494: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0041349a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041349d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041349f: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4134a2u); call_ind(t); }
    /* 004134a2: jmp 0x4135e2 */ goto L_004135e2;
L_004134a7:; BB(0x004134a7);
    /* 004134a7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004134a9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4134aeu); f_0048ab58();
    /* 004134ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004134b1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004134b4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004134b8: je 0x4134d0 */ if (fZ) goto L_004134d0;
L_004134ba:; BB(0x004134ba);
    /* 004134ba: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004134bf: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004134c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004134c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004134c6: call 0x417cc9 */ r_esp -= 4; W32(r_esp, 0x4134cbu); f_00417cc9();
    /* 004134cb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004134ce: jmp 0x4134d7 */ goto L_004134d7;
L_004134d0:; BB(0x004134d0);
    /* 004134d0: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004134d7:; BB(0x004134d7);
    /* 004134d7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004134da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004134db: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004134e0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004134e3: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x4134e8u); f_005e62ca();
    /* 004134e8: jmp 0x4135e2 */ goto L_004135e2;
L_004134ed:; BB(0x004134ed);
    /* 004134ed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004134f0: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x4134f5u); f_0040f9c4();
    /* 004134f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004134f8: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 004134fc: call 0x40de96 */ r_esp -= 4; W32(r_esp, 0x413501u); f_0040de96();
    /* 00413501: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413504: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 0041350a: call 0x40b9e1 */ r_esp -= 4; W32(r_esp, 0x41350fu); f_0040b9e1();
    /* 0041350f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00413511: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x413516u); f_0048ab58();
    /* 00413516: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413519: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041351c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413520: je 0x413538 */ if (fZ) goto L_00413538;
L_00413522:; BB(0x00413522);
    /* 00413522: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00413527: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041352a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041352b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041352e: call 0x417cc9 */ r_esp -= 4; W32(r_esp, 0x413533u); f_00417cc9();
    /* 00413533: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00413536: jmp 0x41353f */ goto L_0041353f;
L_00413538:; BB(0x00413538);
    /* 00413538: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0041353f:; BB(0x0041353f);
    /* 0041353f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00413542: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413543: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00413548: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041354b: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x413550u); f_005e62ca();
    /* 00413550: jmp 0x4135e2 */ goto L_004135e2;
L_00413555:; BB(0x00413555);
    /* 00413555: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00413558: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x41355du); f_0040f9c4();
    /* 0041355d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00413560: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00413564: call 0x40de96 */ r_esp -= 4; W32(r_esp, 0x413569u); f_0040de96();
    /* 00413569: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0041356b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x413570u); f_0048ab58();
    /* 00413570: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413573: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00413576: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041357a: je 0x413593 */ if (fZ) goto L_00413593;
L_0041357c:; BB(0x0041357c);
    /* 0041357c: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00413582: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00413585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413586: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00413589: call 0x417cc9 */ r_esp -= 4; W32(r_esp, 0x41358eu); f_00417cc9();
    /* 0041358e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00413591: jmp 0x41359a */ goto L_0041359a;
L_00413593:; BB(0x00413593);
    /* 00413593: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0041359a:; BB(0x0041359a);
    /* 0041359a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041359d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041359e: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004135a4: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004135a7: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x4135acu); f_005e62ca();
    /* 004135ac: jmp 0x4135e2 */ goto L_004135e2;
L_004135ae:; BB(0x004135ae);
    /* 004135ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004135b1: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x4135b6u); f_00425d41();
    /* 004135b6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004135b9: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x4135beu); f_0040f9c4();
    /* 004135be: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004135c1: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 004135c5: call 0x40de96 */ r_esp -= 4; W32(r_esp, 0x4135cau); f_0040de96();
    /* 004135ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004135cc: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004135d2: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004135d5: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004135da: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004135dd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004135df: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x4135e2u); call_ind(t); }
L_004135e2:; BB(0x004135e2);
    /* 004135e2: mov esp, ebp */ r_esp = r_ebp;
    /* 004135e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004135e5: ret  */ FN_RET(0x0041343e); r_esp += 4; return;
}

void f_004135fa(void) /* FUN_004135fa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004135fa);
    /* 004135fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004135fb: mov ebp, esp */ r_ebp = r_esp;
    /* 004135fd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00413600: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00413603: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00413606: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41360bu); f_0040f81e();
    /* 0041360b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041360e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00413610: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00413615: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00413618: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0041361e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00413621: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00413623: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x413626u); call_ind(t); }
    /* 00413626: push 0x64cd04 */ { u32 v = 0x64cd04u; r_esp -= 4; W32(r_esp, v); }
    /* 0041362b: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x413630u); f_0060fc40();
    /* 00413630: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413633: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00413638: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041363b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041363c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041363e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00413641: call 0x413656 */ r_esp -= 4; W32(r_esp, 0x413646u); f_00413656();
    /* 00413646: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413649: mov eax, dword ptr [edx + 0x144] */ r_eax = R32((u32)(r_edx+0x144u));
    /* 0041364f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00413652: mov esp, ebp */ r_esp = r_ebp;
    /* 00413654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413655: ret  */ FN_RET(0x004135fa); r_esp += 4; return;
}

void f_00413656(void) /* FUN_00413656 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00413656);
    /* 00413656: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413657: mov ebp, esp */ r_ebp = r_esp;
    /* 00413659: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041365c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041365d: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00413660: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413663: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x413668u); f_0040f81e();
    /* 00413668: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0041366b: mov word ptr [ebp - 0x38], 0xfffe */ W16((u32)(r_ebp+0xffffffc8u), 0xfffeu);
    /* 00413671: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00413678: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041367f: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413683: je 0x4136dc */ if (fZ) goto L_004136dc;
L_00413685:; BB(0x00413685);
    /* 00413685: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413688: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x41368du); f_004259f1();
    /* 0041368d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413690: jne 0x4136aa */ if (!fZ) goto L_004136aa;
L_00413692:; BB(0x00413692);
    /* 00413692: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413696: je 0x4136a5 */ if (fZ) goto L_004136a5;
L_00413698:; BB(0x00413698);
    /* 00413698: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041369a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041369d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041369f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004136a2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4136a5u); call_ind(t); }
L_004136a5:; BB(0x004136a5);
    /* 004136a5: jmp 0x41410e */ goto L_0041410e;
L_004136aa:; BB(0x004136aa);
    /* 004136aa: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004136ad: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 004136b3: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004136b6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004136b9: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x4136beu); f_004259a0();
    /* 004136be: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004136c1: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004136c5: je 0x4136d4 */ if (fZ) goto L_004136d4;
L_004136c7:; BB(0x004136c7);
    /* 004136c7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004136ca: call 0x40f868 */ r_esp -= 4; W32(r_esp, 0x4136cfu); f_0040f868();
    /* 004136cf: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004136d2: jmp 0x4136da */ goto L_004136da;
L_004136d4:; BB(0x004136d4);
    /* 004136d4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004136d7: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_004136da:; BB(0x004136da);
    /* 004136da: jmp 0x4136e7 */ goto L_004136e7;
L_004136dc:; BB(0x004136dc);
    /* 004136dc: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004136df: call 0x40f868 */ r_esp -= 4; W32(r_esp, 0x4136e4u); f_0040f868();
    /* 004136e4: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_004136e7:; BB(0x004136e7);
    /* 004136e7: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004136eb: jne 0x413705 */ if (!fZ) goto L_00413705;
L_004136ed:; BB(0x004136ed);
    /* 004136ed: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004136f1: je 0x413700 */ if (fZ) goto L_00413700;
L_004136f3:; BB(0x004136f3);
    /* 004136f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004136f5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004136f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004136fa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004136fd: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x413700u); call_ind(t); }
L_00413700:; BB(0x00413700);
    /* 00413700: jmp 0x41410e */ goto L_0041410e;
L_00413705:; BB(0x00413705);
    /* 00413705: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00413709: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0041370c: cmp dword ptr [ebp - 0x40], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00413710: ja 0x4140c5 */ if ((!fC&&!fZ)) goto L_004140c5;
L_00413716:; BB(0x00413716);
    /* 00413716: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00413719: jmp dword ptr [ecx*4 + 0x414115] */ { u32 t = R32((u32)(r_ecx*4+0x414115u)); switch (t) { case 0x413720u: goto L_00413720; case 0x413753u: goto L_00413753; case 0x413901u: goto L_00413901; case 0x413bbdu: goto L_00413bbd; case 0x413eb1u: goto L_00413eb1; case 0x413773u: goto L_00413773; case 0x41386eu: goto L_0041386e; case 0x4138ceu: goto L_004138ce; case 0x41389eu: goto L_0041389e; default: UNSUP(0x00413719, "jump table entry is not a known target"); } }
L_00413720:; BB(0x00413720);
    /* 00413720: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413724: jne 0x41374e */ if (!fZ) goto L_0041374e;
L_00413726:; BB(0x00413726);
    /* 00413726: mov word ptr [ebp - 0x38], 0x68 */ W16((u32)(r_ebp+0xffffffc8u), 0x68u);
    /* 0041372c: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413732: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413739: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413740: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413747: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
L_0041374e:; BB(0x0041374e);
    /* 0041374e: jmp 0x4140c5 */ goto L_004140c5;
L_00413753:; BB(0x00413753);
    /* 00413753: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413756: mov eax, dword ptr [edx + 0x144] */ r_eax = R32((u32)(r_edx+0x144u));
    /* 0041375c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0041375f: cmp dword ptr [ebp - 0x44], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00413763: ja 0x4138fc */ if ((!fC&&!fZ)) goto L_004138fc;
L_00413769:; BB(0x00413769);
    /* 00413769: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0041376c: jmp dword ptr [ecx*4 + 0x414129] */ { u32 t = R32((u32)(r_ecx*4+0x414129u)); switch (t) { case 0x413eb1u: goto L_00413eb1; case 0x413bbdu: goto L_00413bbd; case 0x413901u: goto L_00413901; case 0x413753u: goto L_00413753; case 0x413720u: goto L_00413720; case 0x413773u: goto L_00413773; case 0x41386eu: goto L_0041386e; case 0x4138ceu: goto L_004138ce; case 0x41389eu: goto L_0041389e; default: UNSUP(0x0041376c, "jump table entry is not a known target"); } }
L_00413773:; BB(0x00413773);
    /* 00413773: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413776: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 0041377c: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x413781u); f_0040c28d();
    /* 00413781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413783: je 0x4137bd */ if (fZ) goto L_004137bd;
L_00413785:; BB(0x00413785);
    /* 00413785: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00413788: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0041378a: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0041378c: and eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041378f: add eax, 0x6b */ {  u32 a = r_eax; u32 b = 0x6bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00413792: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 00413796: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 0041379c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004137a3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004137aa: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004137b1: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
    /* 004137b8: jmp 0x413869 */ goto L_00413869;
L_004137bd:; BB(0x004137bd);
    /* 004137bd: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004137c1: jne 0x413869 */ if (!fZ) goto L_00413869;
L_004137c7:; BB(0x004137c7);
    /* 004137c7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004137ca: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 004137d0: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x4137d5u); f_0040bff5();
    /* 004137d5: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004137d8: jge 0x413804 */ if ((fS==fO)) goto L_00413804;
L_004137da:; BB(0x004137da);
    /* 004137da: mov word ptr [ebp - 0x38], 0x65 */ W16((u32)(r_ebp+0xffffffc8u), 0x65u);
    /* 004137e0: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 004137e6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004137ed: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004137f4: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004137fb: mov dword ptr [ebp - 0x14], 0x3ff00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3ff00000u);
    /* 00413802: jmp 0x413869 */ goto L_00413869;
L_00413804:; BB(0x00413804);
    /* 00413804: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413807: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 0041380d: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x413812u); f_0040bff5();
    /* 00413812: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413815: jge 0x413841 */ if ((fS==fO)) goto L_00413841;
L_00413817:; BB(0x00413817);
    /* 00413817: mov word ptr [ebp - 0x38], 0x73 */ W16((u32)(r_ebp+0xffffffc8u), 0x73u);
    /* 0041381d: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413823: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0041382a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413831: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413838: mov dword ptr [ebp - 0x14], 0x3ff00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3ff00000u);
    /* 0041383f: jmp 0x413869 */ goto L_00413869;
L_00413841:; BB(0x00413841);
    /* 00413841: mov word ptr [ebp - 0x38], 0x74 */ W16((u32)(r_ebp+0xffffffc8u), 0x74u);
    /* 00413847: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 0041384d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413854: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0041385b: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413862: mov dword ptr [ebp - 0x14], 0x3ff00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3ff00000u);
L_00413869:; BB(0x00413869);
    /* 00413869: jmp 0x4138fc */ goto L_004138fc;
L_0041386e:; BB(0x0041386e);
    /* 0041386e: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413872: jne 0x41389c */ if (!fZ) goto L_0041389c;
L_00413874:; BB(0x00413874);
    /* 00413874: mov word ptr [ebp - 0x38], 0x64 */ W16((u32)(r_ebp+0xffffffc8u), 0x64u);
    /* 0041387a: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413880: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413887: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0041388e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413895: mov dword ptr [ebp - 0x14], 0x3ff00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3ff00000u);
L_0041389c:; BB(0x0041389c);
    /* 0041389c: jmp 0x4138fc */ goto L_004138fc;
L_0041389e:; BB(0x0041389e);
    /* 0041389e: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004138a2: jne 0x4138cc */ if (!fZ) goto L_004138cc;
L_004138a4:; BB(0x004138a4);
    /* 004138a4: mov word ptr [ebp - 0x38], 0x67 */ W16((u32)(r_ebp+0xffffffc8u), 0x67u);
    /* 004138aa: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 004138b0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004138b7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004138be: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004138c5: mov dword ptr [ebp - 0x14], 0x3ff00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3ff00000u);
L_004138cc:; BB(0x004138cc);
    /* 004138cc: jmp 0x4138fc */ goto L_004138fc;
L_004138ce:; BB(0x004138ce);
    /* 004138ce: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004138d2: jne 0x4138fc */ if (!fZ) goto L_004138fc;
L_004138d4:; BB(0x004138d4);
    /* 004138d4: mov word ptr [ebp - 0x38], 0x66 */ W16((u32)(r_ebp+0xffffffc8u), 0x66u);
    /* 004138da: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 004138e0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004138e7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004138ee: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004138f5: mov dword ptr [ebp - 0x14], 0x3ff00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3ff00000u);
L_004138fc:; BB(0x004138fc);
    /* 004138fc: jmp 0x4140c5 */ goto L_004140c5;
L_00413901:; BB(0x00413901);
    /* 00413901: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413904: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0041390a: call 0x40c1a9 */ r_esp -= 4; W32(r_esp, 0x41390fu); f_0040c1a9();
    /* 0041390f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413911: je 0x413958 */ if (fZ) goto L_00413958;
L_00413913:; BB(0x00413913);
    /* 00413913: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00413916: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00413918: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0041391a: and ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0041391d: add ecx, 0x6a */ {  u32 a = r_ecx; u32 b = 0x6au; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00413920: mov word ptr [ebp - 0x38], cx */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_ecx);
    /* 00413924: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00413926: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041392a: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041392d: add edx, 0x154 */ {  u32 a = r_edx; u32 b = 0x154u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00413933: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 00413937: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0041393e: mov dword ptr [ebp - 0x24], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffdcu), 0x3fe00000u);
    /* 00413945: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0041394c: mov dword ptr [ebp - 0x14], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe00000u);
    /* 00413953: jmp 0x413bb8 */ goto L_00413bb8;
L_00413958:; BB(0x00413958);
    /* 00413958: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041395b: cmp dword ptr [eax + 0x144], 1 */ {  u32 a = R32((u32)(r_eax+0x144u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413962: jne 0x413aa7 */ if (!fZ) goto L_00413aa7;
L_00413968:; BB(0x00413968);
    /* 00413968: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041396c: je 0x413a67 */ if (fZ) goto L_00413a67;
L_00413972:; BB(0x00413972);
    /* 00413972: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413975: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x41397au); f_005dd4d2();
    /* 0041397a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041397d: jle 0x4139b5 */ if ((fZ||fS!=fO)) goto L_004139b5;
L_0041397f:; BB(0x0041397f);
    /* 0041397f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413982: cmp dword ptr [ecx + 0x4c], 1 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413986: jne 0x4139b5 */ if (!fZ) goto L_004139b5;
L_00413988:; BB(0x00413988);
    /* 00413988: mov word ptr [ebp - 0x38], 0x72 */ W16((u32)(r_ebp+0xffffffc8u), 0x72u);
    /* 0041398e: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413994: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0041399b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004139a2: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004139a9: mov dword ptr [ebp - 0x14], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe00000u);
    /* 004139b0: jmp 0x413a65 */ goto L_00413a65;
L_004139b5:; BB(0x004139b5);
    /* 004139b5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004139b8: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x4139bdu); f_0040bff5();
    /* 004139bd: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004139c0: jge 0x4139f9 */ if ((fS==fO)) goto L_004139f9;
L_004139c2:; BB(0x004139c2);
    /* 004139c2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004139c5: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x4139cau); f_0040bff5();
    /* 004139ca: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004139cd: jl 0x4139f9 */ if ((fS!=fO)) goto L_004139f9;
L_004139cf:; BB(0x004139cf);
    /* 004139cf: mov word ptr [ebp - 0x38], 0x6d */ W16((u32)(r_ebp+0xffffffc8u), 0x6du);
    /* 004139d5: mov word ptr [ebp - 4], 0x155 */ W16((u32)(r_ebp+0xfffffffcu), 0x155u);
    /* 004139db: mov dword ptr [ebp - 0x28], 0x9999999a */ W32((u32)(r_ebp+0xffffffd8u), 0x9999999au);
    /* 004139e2: mov dword ptr [ebp - 0x24], 0x3fd99999 */ W32((u32)(r_ebp+0xffffffdcu), 0x3fd99999u);
    /* 004139e9: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004139f0: mov dword ptr [ebp - 0x14], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe00000u);
    /* 004139f7: jmp 0x413a65 */ goto L_00413a65;
L_004139f9:; BB(0x004139f9);
    /* 004139f9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004139fc: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x413a01u); f_0040bff5();
    /* 00413a01: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413a04: jge 0x413a3d */ if ((fS==fO)) goto L_00413a3d;
L_00413a06:; BB(0x00413a06);
    /* 00413a06: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413a09: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x413a0eu); f_0040bff5();
    /* 00413a0e: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413a11: jl 0x413a3d */ if ((fS!=fO)) goto L_00413a3d;
L_00413a13:; BB(0x00413a13);
    /* 00413a13: mov word ptr [ebp - 0x38], 0x6c */ W16((u32)(r_ebp+0xffffffc8u), 0x6cu);
    /* 00413a19: mov word ptr [ebp - 4], 0x153 */ W16((u32)(r_ebp+0xfffffffcu), 0x153u);
    /* 00413a1f: mov dword ptr [ebp - 0x28], 0x9999999a */ W32((u32)(r_ebp+0xffffffd8u), 0x9999999au);
    /* 00413a26: mov dword ptr [ebp - 0x24], 0x3fd99999 */ W32((u32)(r_ebp+0xffffffdcu), 0x3fd99999u);
    /* 00413a2d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413a34: mov dword ptr [ebp - 0x14], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe00000u);
    /* 00413a3b: jmp 0x413a65 */ goto L_00413a65;
L_00413a3d:; BB(0x00413a3d);
    /* 00413a3d: mov word ptr [ebp - 0x38], 0x6c */ W16((u32)(r_ebp+0xffffffc8u), 0x6cu);
    /* 00413a43: mov word ptr [ebp - 4], 0x153 */ W16((u32)(r_ebp+0xfffffffcu), 0x153u);
    /* 00413a49: mov dword ptr [ebp - 0x28], 0xd70a3d71 */ W32((u32)(r_ebp+0xffffffd8u), 0xd70a3d71u);
    /* 00413a50: mov dword ptr [ebp - 0x24], 0x3fe570a3 */ W32((u32)(r_ebp+0xffffffdcu), 0x3fe570a3u);
    /* 00413a57: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413a5e: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
L_00413a65:; BB(0x00413a65);
    /* 00413a65: jmp 0x413aa2 */ goto L_00413aa2;
L_00413a67:; BB(0x00413a67);
    /* 00413a67: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413a6a: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 00413a70: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x413a75u); f_0040bff5();
    /* 00413a75: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413a78: jne 0x413aa2 */ if (!fZ) goto L_00413aa2;
L_00413a7a:; BB(0x00413a7a);
    /* 00413a7a: mov word ptr [ebp - 0x38], 0x152 */ W16((u32)(r_ebp+0xffffffc8u), 0x152u);
    /* 00413a80: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413a86: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413a8d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413a94: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413a9b: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
L_00413aa2:; BB(0x00413aa2);
    /* 00413aa2: jmp 0x413bb8 */ goto L_00413bb8;
L_00413aa7:; BB(0x00413aa7);
    /* 00413aa7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413aaa: cmp dword ptr [eax + 0x144], 2 */ {  u32 a = R32((u32)(r_eax+0x144u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413ab1: jne 0x413b62 */ if (!fZ) goto L_00413b62;
L_00413ab7:; BB(0x00413ab7);
    /* 00413ab7: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413abb: je 0x413b2b */ if (fZ) goto L_00413b2b;
L_00413abd:; BB(0x00413abd);
    /* 00413abd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413ac0: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x413ac5u); f_0040bff5();
    /* 00413ac5: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413ac8: jne 0x413af4 */ if (!fZ) goto L_00413af4;
L_00413aca:; BB(0x00413aca);
    /* 00413aca: mov word ptr [ebp - 0x38], 0x6e */ W16((u32)(r_ebp+0xffffffc8u), 0x6eu);
    /* 00413ad0: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413ad6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413add: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413ae4: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413aeb: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
    /* 00413af2: jmp 0x413b29 */ goto L_00413b29;
L_00413af4:; BB(0x00413af4);
    /* 00413af4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413af7: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x413afcu); f_0040bff5();
    /* 00413afc: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413aff: jge 0x413b29 */ if ((fS==fO)) goto L_00413b29;
L_00413b01:; BB(0x00413b01);
    /* 00413b01: mov word ptr [ebp - 0x38], 0x6f */ W16((u32)(r_ebp+0xffffffc8u), 0x6fu);
    /* 00413b07: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413b0d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413b14: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413b1b: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413b22: mov dword ptr [ebp - 0x14], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe00000u);
L_00413b29:; BB(0x00413b29);
    /* 00413b29: jmp 0x413b60 */ goto L_00413b60;
L_00413b2b:; BB(0x00413b2b);
    /* 00413b2b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413b2e: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x413b33u); f_0040bff5();
    /* 00413b33: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b36: jne 0x413b60 */ if (!fZ) goto L_00413b60;
L_00413b38:; BB(0x00413b38);
    /* 00413b38: mov word ptr [ebp - 0x38], 0x152 */ W16((u32)(r_ebp+0xffffffc8u), 0x152u);
    /* 00413b3e: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413b44: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413b4b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413b52: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413b59: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
L_00413b60:; BB(0x00413b60);
    /* 00413b60: jmp 0x413bb8 */ goto L_00413bb8;
L_00413b62:; BB(0x00413b62);
    /* 00413b62: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413b65: cmp dword ptr [ecx + 0x144], 3 */ {  u32 a = R32((u32)(r_ecx+0x144u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b6c: jne 0x413bb8 */ if (!fZ) goto L_00413bb8;
L_00413b6e:; BB(0x00413b6e);
    /* 00413b6e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413b71: cmp dword ptr [edx + 0x48], 0 */ {  u32 a = R32((u32)(r_edx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b75: je 0x413bb8 */ if (fZ) goto L_00413bb8;
L_00413b77:; BB(0x00413b77);
    /* 00413b77: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413b7a: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x413b7fu); f_0040bff5();
    /* 00413b7f: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b82: jne 0x413bb8 */ if (!fZ) goto L_00413bb8;
L_00413b84:; BB(0x00413b84);
    /* 00413b84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00413b86: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b8a: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00413b8d: add eax, 0x152 */ {  u32 a = r_eax; u32 b = 0x152u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00413b92: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 00413b96: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413b9c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413ba3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413baa: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413bb1: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
L_00413bb8:; BB(0x00413bb8);
    /* 00413bb8: jmp 0x4140c5 */ goto L_004140c5;
L_00413bbd:; BB(0x00413bbd);
    /* 00413bbd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413bc0: cmp dword ptr [ecx + 0x4c], 1 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413bc4: jne 0x413da5 */ if (!fZ) goto L_00413da5;
L_00413bca:; BB(0x00413bca);
    /* 00413bca: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413bcd: call 0x40bc65 */ r_esp -= 4; W32(r_esp, 0x413bd2u); f_0040bc65();
    /* 00413bd2: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00413bd5: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413bd8: jne 0x413c4b */ if (!fZ) goto L_00413c4b;
L_00413bda:; BB(0x00413bda);
    /* 00413bda: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413bde: je 0x413c0a */ if (fZ) goto L_00413c0a;
L_00413be0:; BB(0x00413be0);
    /* 00413be0: mov word ptr [ebp - 0x38], 0x13c */ W16((u32)(r_ebp+0xffffffc8u), 0x13cu);
    /* 00413be6: mov word ptr [ebp - 4], 0x153 */ W16((u32)(r_ebp+0xfffffffcu), 0x153u);
    /* 00413bec: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413bf3: mov dword ptr [ebp - 0x24], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffdcu), 0x3fe00000u);
    /* 00413bfa: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413c01: mov dword ptr [ebp - 0x14], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe00000u);
    /* 00413c08: jmp 0x413c46 */ goto L_00413c46;
L_00413c0a:; BB(0x00413c0a);
    /* 00413c0a: mov word ptr [ebp - 0x38], 0x69 */ W16((u32)(r_ebp+0xffffffc8u), 0x69u);
    /* 00413c10: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00413c12: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x413c17u); f_0060ee31();
    /* 00413c17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413c1a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00413c1c: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00413c1e: and eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00413c21: add eax, 0x13b */ {  u32 a = r_eax; u32 b = 0x13bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00413c26: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00413c2a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413c31: mov dword ptr [ebp - 0x24], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffdcu), 0x3fe80000u);
    /* 00413c38: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413c3f: mov dword ptr [ebp - 0x14], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe00000u);
L_00413c46:; BB(0x00413c46);
    /* 00413c46: jmp 0x413da0 */ goto L_00413da0;
L_00413c4b:; BB(0x00413c4b);
    /* 00413c4b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413c4e: call 0x40bc65 */ r_esp -= 4; W32(r_esp, 0x413c53u); f_0040bc65();
    /* 00413c53: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00413c56: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413c59: jne 0x413da0 */ if (!fZ) goto L_00413da0;
L_00413c5f:; BB(0x00413c5f);
    /* 00413c5f: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413c63: je 0x413ccd */ if (fZ) goto L_00413ccd;
L_00413c65:; BB(0x00413c65);
    /* 00413c65: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413c68: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x413c6du); f_0040c983();
    /* 00413c6d: mov esi, eax */ r_esi = r_eax;
    /* 00413c6f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00413c75: call 0x45d917 */ r_esp -= 4; W32(r_esp, 0x413c7au); f_0045d917();
    /* 00413c7a: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00413c7d: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413c7f: jle 0x413ccd */ if ((fZ||fS!=fO)) goto L_00413ccd;
L_00413c81:; BB(0x00413c81);
    /* 00413c81: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413c84: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x413c89u); f_0040c983();
    /* 00413c89: mov esi, eax */ r_esi = r_eax;
    /* 00413c8b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00413c91: call 0x45d917 */ r_esp -= 4; W32(r_esp, 0x413c96u); f_0045d917();
    /* 00413c96: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00413c99: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00413c9c: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413c9e: jge 0x413ccd */ if ((fS==fO)) goto L_00413ccd;
L_00413ca0:; BB(0x00413ca0);
    /* 00413ca0: mov word ptr [ebp - 0x38], 0x13f */ W16((u32)(r_ebp+0xffffffc8u), 0x13fu);
    /* 00413ca6: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413cac: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413cb3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413cba: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413cc1: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
    /* 00413cc8: jmp 0x413da0 */ goto L_00413da0;
L_00413ccd:; BB(0x00413ccd);
    /* 00413ccd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413cd0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00413cd3: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x413cd8u); f_00426819();
    /* 00413cd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413cda: jne 0x413d48 */ if (!fZ) goto L_00413d48;
L_00413cdc:; BB(0x00413cdc);
    /* 00413cdc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413cdf: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00413ce2: call 0x42682a */ r_esp -= 4; W32(r_esp, 0x413ce7u); f_0042682a();
    /* 00413ce7: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 00413cea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413cec: jne 0x413d48 */ if (!fZ) goto L_00413d48;
L_00413cee:; BB(0x00413cee);
    /* 00413cee: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413cf2: je 0x413d1e */ if (fZ) goto L_00413d1e;
L_00413cf4:; BB(0x00413cf4);
    /* 00413cf4: mov word ptr [ebp - 0x38], 0x150 */ W16((u32)(r_ebp+0xffffffc8u), 0x150u);
    /* 00413cfa: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413d00: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413d07: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413d0e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413d15: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
    /* 00413d1c: jmp 0x413d46 */ goto L_00413d46;
L_00413d1e:; BB(0x00413d1e);
    /* 00413d1e: mov word ptr [ebp - 0x38], 0x14f */ W16((u32)(r_ebp+0xffffffc8u), 0x14fu);
    /* 00413d24: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413d2a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413d31: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413d38: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413d3f: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
L_00413d46:; BB(0x00413d46);
    /* 00413d46: jmp 0x413da0 */ goto L_00413da0;
L_00413d48:; BB(0x00413d48);
    /* 00413d48: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413d4c: je 0x413d78 */ if (fZ) goto L_00413d78;
L_00413d4e:; BB(0x00413d4e);
    /* 00413d4e: mov word ptr [ebp - 0x38], 0x13e */ W16((u32)(r_ebp+0xffffffc8u), 0x13eu);
    /* 00413d54: mov word ptr [ebp - 4], 0x155 */ W16((u32)(r_ebp+0xfffffffcu), 0x155u);
    /* 00413d5a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413d61: mov dword ptr [ebp - 0x24], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffdcu), 0x3fe00000u);
    /* 00413d68: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413d6f: mov dword ptr [ebp - 0x14], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe00000u);
    /* 00413d76: jmp 0x413da0 */ goto L_00413da0;
L_00413d78:; BB(0x00413d78);
    /* 00413d78: mov word ptr [ebp - 0x38], 0x13d */ W16((u32)(r_ebp+0xffffffc8u), 0x13du);
    /* 00413d7e: mov word ptr [ebp - 4], 0x154 */ W16((u32)(r_ebp+0xfffffffcu), 0x154u);
    /* 00413d84: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413d8b: mov dword ptr [ebp - 0x24], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffdcu), 0x3fe00000u);
    /* 00413d92: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413d99: mov dword ptr [ebp - 0x14], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe00000u);
L_00413da0:; BB(0x00413da0);
    /* 00413da0: jmp 0x413eac */ goto L_00413eac;
L_00413da5:; BB(0x00413da5);
    /* 00413da5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413da8: call 0x40bc65 */ r_esp -= 4; W32(r_esp, 0x413dadu); f_0040bc65();
    /* 00413dad: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00413db0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413db2: je 0x413dc8 */ if (fZ) goto L_00413dc8;
L_00413db4:; BB(0x00413db4);
    /* 00413db4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00413db7: call 0x40bc65 */ r_esp -= 4; W32(r_esp, 0x413dbcu); f_0040bc65();
    /* 00413dbc: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00413dbf: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413dc2: jne 0x413eac */ if (!fZ) goto L_00413eac;
L_00413dc8:; BB(0x00413dc8);
    /* 00413dc8: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413dcc: je 0x413e33 */ if (fZ) goto L_00413e33;
L_00413dce:; BB(0x00413dce);
    /* 00413dce: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413dd1: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x413dd6u); f_0040c983();
    /* 00413dd6: mov esi, eax */ r_esi = r_eax;
    /* 00413dd8: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00413dde: call 0x45d917 */ r_esp -= 4; W32(r_esp, 0x413de3u); f_0045d917();
    /* 00413de3: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00413de6: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413de8: jle 0x413e33 */ if ((fZ||fS!=fO)) goto L_00413e33;
L_00413dea:; BB(0x00413dea);
    /* 00413dea: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413ded: call 0x40c983 */ r_esp -= 4; W32(r_esp, 0x413df2u); f_0040c983();
    /* 00413df2: mov esi, eax */ r_esi = r_eax;
    /* 00413df4: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00413dfa: call 0x45d917 */ r_esp -= 4; W32(r_esp, 0x413dffu); f_0045d917();
    /* 00413dff: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00413e02: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00413e05: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413e07: jge 0x413e33 */ if ((fS==fO)) goto L_00413e33;
L_00413e09:; BB(0x00413e09);
    /* 00413e09: mov word ptr [ebp - 0x38], 0x13f */ W16((u32)(r_ebp+0xffffffc8u), 0x13fu);
    /* 00413e0f: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413e15: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413e1c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413e23: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413e2a: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
    /* 00413e31: jmp 0x413eac */ goto L_00413eac;
L_00413e33:; BB(0x00413e33);
    /* 00413e33: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413e36: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00413e39: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x413e3eu); f_00426819();
    /* 00413e3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413e40: jne 0x413eac */ if (!fZ) goto L_00413eac;
L_00413e42:; BB(0x00413e42);
    /* 00413e42: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413e45: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00413e48: call 0x42682a */ r_esp -= 4; W32(r_esp, 0x413e4du); f_0042682a();
    /* 00413e4d: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00413e50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413e52: jne 0x413eac */ if (!fZ) goto L_00413eac;
L_00413e54:; BB(0x00413e54);
    /* 00413e54: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413e58: je 0x413e84 */ if (fZ) goto L_00413e84;
L_00413e5a:; BB(0x00413e5a);
    /* 00413e5a: mov word ptr [ebp - 0x38], 0x150 */ W16((u32)(r_ebp+0xffffffc8u), 0x150u);
    /* 00413e60: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413e66: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413e6d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413e74: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413e7b: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
    /* 00413e82: jmp 0x413eac */ goto L_00413eac;
L_00413e84:; BB(0x00413e84);
    /* 00413e84: mov word ptr [ebp - 0x38], 0x14f */ W16((u32)(r_ebp+0xffffffc8u), 0x14fu);
    /* 00413e8a: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413e90: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413e97: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413e9e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413ea5: mov dword ptr [ebp - 0x14], 0x3fe80000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe80000u);
L_00413eac:; BB(0x00413eac);
    /* 00413eac: jmp 0x4140c5 */ goto L_004140c5;
L_00413eb1:; BB(0x00413eb1);
    /* 00413eb1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413eb4: call 0x413021 */ r_esp -= 4; W32(r_esp, 0x413eb9u); f_00413021();
    /* 00413eb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413ebb: je 0x413f54 */ if (fZ) goto L_00413f54;
L_00413ec1:; BB(0x00413ec1);
    /* 00413ec1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413ec4: call 0x412d87 */ r_esp -= 4; W32(r_esp, 0x413ec9u); f_00412d87();
    /* 00413ec9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413ecc: cmp dword ptr [ecx + eax*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413ed1: je 0x413f15 */ if (fZ) goto L_00413f15;
L_00413ed3:; BB(0x00413ed3);
    /* 00413ed3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413ed6: call 0x412d87 */ r_esp -= 4; W32(r_esp, 0x413edbu); f_00412d87();
    /* 00413edb: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413ede: mov ecx, dword ptr [edx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_eax*4+0xcu));
    /* 00413ee2: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x413ee7u); f_004259a0();
    /* 00413ee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413ee9: je 0x413f15 */ if (fZ) goto L_00413f15;
L_00413eeb:; BB(0x00413eeb);
    /* 00413eeb: mov word ptr [ebp - 0x38], 0x146 */ W16((u32)(r_ebp+0xffffffc8u), 0x146u);
    /* 00413ef1: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413ef7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413efe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413f05: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413f0c: mov dword ptr [ebp - 0x14], 0x3ff00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3ff00000u);
    /* 00413f13: jmp 0x413f4f */ goto L_00413f4f;
L_00413f15:; BB(0x00413f15);
    /* 00413f15: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413f18: call 0x412d87 */ r_esp -= 4; W32(r_esp, 0x413f1du); f_00412d87();
    /* 00413f1d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413f20: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00413f24: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00413f27: mov word ptr [ebp - 0x38], 0x145 */ W16((u32)(r_ebp+0xffffffc8u), 0x145u);
    /* 00413f2d: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00413f33: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00413f3a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00413f41: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00413f48: mov dword ptr [ebp - 0x14], 0x3ff00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3ff00000u);
L_00413f4f:; BB(0x00413f4f);
    /* 00413f4f: jmp 0x4140c5 */ goto L_004140c5;
L_00413f54:; BB(0x00413f54);
    /* 00413f54: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413f57: cmp dword ptr [eax + 0x60], 2 */ {  u32 a = R32((u32)(r_eax+0x60u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413f5b: jle 0x4140c5 */ if ((fZ||fS!=fO)) goto L_004140c5;
L_00413f61:; BB(0x00413f61);
    /* 00413f61: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413f64: call 0x412f28 */ r_esp -= 4; W32(r_esp, 0x413f69u); f_00412f28();
    /* 00413f69: mov word ptr [ebp - 0x2c], ax */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_eax);
    /* 00413f6d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413f70: call 0x412e34 */ r_esp -= 4; W32(r_esp, 0x413f75u); f_00412e34();
    /* 00413f75: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 00413f79: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00413f7d: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413f80: je 0x414024 */ if (fZ) goto L_00414024;
L_00413f86:; BB(0x00413f86);
    /* 00413f86: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00413f8a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413f8d: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00413f91: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 00413f97: cmp dword ptr [edx + 0x4c], 1 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413f9b: jne 0x414024 */ if (!fZ) goto L_00414024;
L_00413fa1:; BB(0x00413fa1);
    /* 00413fa1: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00413fa5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413fa8: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00413fac: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 00413fb2: call 0x40c48e */ r_esp -= 4; W32(r_esp, 0x413fb7u); f_0040c48e();
    /* 00413fb7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413fba: jne 0x414024 */ if (!fZ) goto L_00414024;
L_00413fbc:; BB(0x00413fbc);
    /* 00413fbc: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00413fc0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413fc3: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00413fc7: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x413fccu); f_004259a0();
    /* 00413fcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413fce: jne 0x413fde */ if (!fZ) goto L_00413fde;
L_00413fd0:; BB(0x00413fd0);
    /* 00413fd0: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00413fd4: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413fd7: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00413fdb: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00413fde:; BB(0x00413fde);
    /* 00413fde: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00413fe2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413fe5: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00413fe9: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x413feeu); f_004259a0();
    /* 00413fee: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00413ff0: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00413ff2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00413ff4: add eax, 0x141 */ {  u32 a = r_eax; u32 b = 0x141u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00413ff9: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 00413ffd: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00414003: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0041400a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00414011: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00414018: mov dword ptr [ebp - 0x14], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe00000u);
    /* 0041401f: jmp 0x4140c5 */ goto L_004140c5;
L_00414024:; BB(0x00414024);
    /* 00414024: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 00414028: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041402b: je 0x4140c5 */ if (fZ) goto L_004140c5;
L_00414031:; BB(0x00414031);
    /* 00414031: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 00414035: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00414038: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0041403c: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 00414042: cmp dword ptr [edx + 0x4c], 1 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414046: jne 0x4140c5 */ if (!fZ) goto L_004140c5;
L_00414048:; BB(0x00414048);
    /* 00414048: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0041404c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041404f: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00414053: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 00414059: call 0x40c48e */ r_esp -= 4; W32(r_esp, 0x41405eu); f_0040c48e();
    /* 0041405e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414060: jne 0x4140c5 */ if (!fZ) goto L_004140c5;
L_00414062:; BB(0x00414062);
    /* 00414062: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 00414066: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00414069: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0041406d: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x414072u); f_004259a0();
    /* 00414072: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414074: jne 0x414084 */ if (!fZ) goto L_00414084;
L_00414076:; BB(0x00414076);
    /* 00414076: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0041407a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041407d: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00414081: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00414084:; BB(0x00414084);
    /* 00414084: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 00414088: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041408b: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0041408f: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x414094u); f_004259a0();
    /* 00414094: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00414096: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00414098: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041409a: add eax, 0x143 */ {  u32 a = r_eax; u32 b = 0x143u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041409f: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 004140a3: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 004140a9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004140b0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004140b7: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004140be: mov dword ptr [ebp - 0x14], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffecu), 0x3fe00000u);
L_004140c5:; BB(0x004140c5);
    /* 004140c5: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004140c9: cmp ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004140cc: je 0x4140fb */ if (fZ) goto L_004140fb;
L_004140ce:; BB(0x004140ce);
    /* 004140ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004140d0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004140d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004140d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004140d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004140d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004140db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004140dc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004140df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004140e0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004140e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004140e4: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004140e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004140e9: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004140ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004140ee: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004140f1: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004140f4: call 0x42099e */ r_esp -= 4; W32(r_esp, 0x4140f9u); f_0042099e();
    /* 004140f9: jmp 0x41410e */ goto L_0041410e;
L_004140fb:; BB(0x004140fb);
    /* 004140fb: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004140ff: je 0x41410e */ if (fZ) goto L_0041410e;
L_00414101:; BB(0x00414101);
    /* 00414101: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414103: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00414106: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00414108: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041410b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41410eu); call_ind(t); }
L_0041410e:; BB(0x0041410e);
    /* 0041410e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041410f: mov esp, ebp */ r_esp = r_ebp;
    /* 00414111: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414112: ret 8 */ FN_RET(0x00413656); r_esp += 12; return;
}

void f_00414139(void) /* FUN_00414139 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00414139);
    /* 00414139: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041413a: mov ebp, esp */ r_ebp = r_esp;
    /* 0041413c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041413f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00414142: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414148: jmp 0x414156 */ goto L_00414156;
L_0041414a:; BB(0x0041414a);
    /* 0041414a: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0041414e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00414152: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00414156:; BB(0x00414156);
    /* 00414156: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0041415a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041415d: jge 0x4141bb */ if ((fS==fO)) goto L_004141bb;
L_0041415f:; BB(0x0041415f);
    /* 0041415f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00414163: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414166: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0041416a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0041416d: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x414172u); f_00426819();
    /* 00414172: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00414175: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00414179: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041417c: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00414180: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x414185u); f_004259a0();
    /* 00414185: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414187: je 0x4141b9 */ if (fZ) goto L_004141b9;
L_00414189:; BB(0x00414189);
    /* 00414189: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0041418f: call 0x45d917 */ r_esp -= 4; W32(r_esp, 0x414194u); f_0045d917();
    /* 00414194: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00414197: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041419a: cmp dword ptr [ebp - 8], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041419d: jge 0x4141b9 */ if ((fS==fO)) goto L_004141b9;
L_0041419f:; BB(0x0041419f);
    /* 0041419f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004141a5: call 0x45d917 */ r_esp -= 4; W32(r_esp, 0x4141aau); f_0045d917();
    /* 004141aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004141ad: cmp dword ptr [ebp - 8], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004141b0: jle 0x4141b9 */ if ((fZ||fS!=fO)) goto L_004141b9;
L_004141b2:; BB(0x004141b2);
    /* 004141b2: mov eax, 1 */ r_eax = 0x1u;
    /* 004141b7: jmp 0x4141bd */ goto L_004141bd;
L_004141b9:; BB(0x004141b9);
    /* 004141b9: jmp 0x41414a */ goto L_0041414a;
L_004141bb:; BB(0x004141bb);
    /* 004141bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004141bd:; BB(0x004141bd);
    /* 004141bd: mov esp, ebp */ r_esp = r_ebp;
    /* 004141bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004141c0: ret  */ FN_RET(0x00414139); r_esp += 4; return;
}

void f_004141c1(void) /* FUN_004141c1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004141c1);
    /* 004141c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004141c2: mov ebp, esp */ r_ebp = r_esp;
    /* 004141c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004141c7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004141ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004141cd: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4141d2u); f_0040f81e();
    /* 004141d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004141d5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004141d7: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004141dc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004141df: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004141e5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004141e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004141ea: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4141edu); call_ind(t); }
    /* 004141ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004141f0: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 004141f6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004141f9: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004141fd: ja 0x414401 */ if ((!fC&&!fZ)) goto L_00414401;
L_00414203:; BB(0x00414203);
    /* 00414203: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414206: jmp dword ptr [edx*4 + 0x4144a8] */ { u32 t = R32((u32)(r_edx*4+0x4144a8u)); switch (t) { case 0x414266u: goto L_00414266; case 0x4142a5u: goto L_004142a5; case 0x41420du: goto L_0041420d; case 0x414387u: goto L_00414387; default: UNSUP(0x00414206, "jump table entry is not a known target"); } }
L_0041420d:; BB(0x0041420d);
    /* 0041420d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414210: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00414216: call 0x40adf8 */ r_esp -= 4; W32(r_esp, 0x41421bu); f_0040adf8();
    /* 0041421b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041421e: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 00414224: call 0x40c1a9 */ r_esp -= 4; W32(r_esp, 0x414229u); f_0040c1a9();
    /* 00414229: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041422b: je 0x414266 */ if (fZ) goto L_00414266;
L_0041422d:; BB(0x0041422d);
    /* 0041422d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414230: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x414235u); f_0040f9c4();
    /* 00414235: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414238: mov eax, dword ptr [edx + eax*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 0041423c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041423f: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 00414245: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00414248: mov edx, dword ptr [eax + ecx*4 + 0x6c] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x6cu));
    /* 0041424c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0041424f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414252: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x414257u); f_00425d41();
    /* 00414257: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414259: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041425b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041425e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00414260: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414263: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x414266u); call_ind(t); }
L_00414266:; BB(0x00414266);
    /* 00414266: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414269: cmp dword ptr [eax + 0x144], 4 */ {  u32 a = R32((u32)(r_eax+0x144u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414270: jne 0x414292 */ if (!fZ) goto L_00414292;
L_00414272:; BB(0x00414272);
    /* 00414272: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00414274: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414277: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0041427d: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x414282u); f_0040bcd8();
    /* 00414282: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414285: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 0041428b: mov dword ptr [eax + 0x44], 1 */ W32((u32)(r_eax+0x44u), 0x1u);
L_00414292:; BB(0x00414292);
    /* 00414292: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414295: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0041429b: call 0x40bf4f */ r_esp -= 4; W32(r_esp, 0x4142a0u); f_0040bf4f();
    /* 004142a0: jmp 0x414401 */ goto L_00414401;
L_004142a5:; BB(0x004142a5);
    /* 004142a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004142a8: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 004142ae: call 0x40c1a9 */ r_esp -= 4; W32(r_esp, 0x4142b3u); f_0040c1a9();
    /* 004142b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004142b5: je 0x41430e */ if (fZ) goto L_0041430e;
L_004142b7:; BB(0x004142b7);
    /* 004142b7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004142ba: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 004142c0: call 0x40adf8 */ r_esp -= 4; W32(r_esp, 0x4142c5u); f_0040adf8();
    /* 004142c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004142c8: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x4142cdu); f_0040f9c4();
    /* 004142cd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004142d0: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 004142d4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004142d7: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 004142dd: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 004142e0: mov ecx, dword ptr [edx + eax*4 + 0x6c] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x6cu));
    /* 004142e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004142e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004142ea: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x4142efu); f_00425d41();
    /* 004142ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004142f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004142f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004142f6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004142f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004142fb: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x4142feu); call_ind(t); }
    /* 004142fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414301: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 00414307: call 0x40bf4f */ r_esp -= 4; W32(r_esp, 0x41430cu); f_0040bf4f();
    /* 0041430c: jmp 0x414385 */ goto L_00414385;
L_0041430e:; BB(0x0041430e);
    /* 0041430e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414311: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 00414317: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041431b: je 0x414339 */ if (fZ) goto L_00414339;
L_0041431d:; BB(0x0041431d);
    /* 0041431d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414320: call 0x40cdbf */ r_esp -= 4; W32(r_esp, 0x414325u); f_0040cdbf();
    /* 00414325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414327: jne 0x414339 */ if (!fZ) goto L_00414339;
L_00414329:; BB(0x00414329);
    /* 00414329: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041432c: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 00414332: call 0x40bf4f */ r_esp -= 4; W32(r_esp, 0x414337u); f_0040bf4f();
    /* 00414337: jmp 0x414385 */ goto L_00414385;
L_00414339:; BB(0x00414339);
    /* 00414339: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041433c: cmp dword ptr [edx + 0x80], 1 */ {  u32 a = R32((u32)(r_edx+0x80u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414343: jle 0x414368 */ if ((fZ||fS!=fO)) goto L_00414368;
L_00414345:; BB(0x00414345);
    /* 00414345: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414348: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0041434e: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x414353u); f_0040bff5();
    /* 00414353: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414356: jne 0x414368 */ if (!fZ) goto L_00414368;
L_00414358:; BB(0x00414358);
    /* 00414358: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041435b: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 00414361: call 0x40bf4f */ r_esp -= 4; W32(r_esp, 0x414366u); f_0040bf4f();
    /* 00414366: jmp 0x414385 */ goto L_00414385;
L_00414368:; BB(0x00414368);
    /* 00414368: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041436a: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00414370: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00414373: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00414378: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0041437b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041437d: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x414380u); call_ind(t); }
    /* 00414380: jmp 0x4144a4 */ goto L_004144a4;
L_00414385:; BB(0x00414385);
    /* 00414385: jmp 0x414401 */ goto L_00414401;
L_00414387:; BB(0x00414387);
    /* 00414387: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041438a: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 00414390: call 0x40c562 */ r_esp -= 4; W32(r_esp, 0x414395u); f_0040c562();
    /* 00414395: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414398: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 0041439e: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004143a2: je 0x4143c0 */ if (fZ) goto L_004143c0;
L_004143a4:; BB(0x004143a4);
    /* 004143a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004143a7: call 0x40cdbf */ r_esp -= 4; W32(r_esp, 0x4143acu); f_0040cdbf();
    /* 004143ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004143ae: jne 0x4143c0 */ if (!fZ) goto L_004143c0;
L_004143b0:; BB(0x004143b0);
    /* 004143b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004143b3: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 004143b9: call 0x40bf4f */ r_esp -= 4; W32(r_esp, 0x4143beu); f_0040bf4f();
    /* 004143be: jmp 0x414401 */ goto L_00414401;
L_004143c0:; BB(0x004143c0);
    /* 004143c0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004143c3: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 004143c9: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x4143ceu); f_0040bff5();
    /* 004143ce: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004143d1: jne 0x4143e3 */ if (!fZ) goto L_004143e3;
L_004143d3:; BB(0x004143d3);
    /* 004143d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004143d6: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 004143dc: call 0x40bf4f */ r_esp -= 4; W32(r_esp, 0x4143e1u); f_0040bf4f();
    /* 004143e1: jmp 0x414401 */ goto L_00414401;
L_004143e3:; BB(0x004143e3);
    /* 004143e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004143e5: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 004143eb: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004143ee: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004143f4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004143f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004143f9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4143fcu); call_ind(t); }
    /* 004143fc: jmp 0x4144a4 */ goto L_004144a4;
L_00414401:; BB(0x00414401);
    /* 00414401: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414404: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 0041440a: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041440e: je 0x414443 */ if (fZ) goto L_00414443;
L_00414410:; BB(0x00414410);
    /* 00414410: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00414412: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00414418: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0041441b: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00414420: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00414423: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00414425: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x414428u); call_ind(t); }
    /* 00414428: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041442a: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00414430: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00414433: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00414439: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041443c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041443e: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x414441u); call_ind(t); }
    /* 00414441: jmp 0x4144a4 */ goto L_004144a4;
L_00414443:; BB(0x00414443);
    /* 00414443: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414446: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41444bu); f_0040f81e();
    /* 0041444b: mov dword ptr [eax + 0x144], 0xffffffff */ W32((u32)(r_eax+0x144u), 0xffffffffu);
    /* 00414455: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00414457: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x41445cu); f_0048ab58();
    /* 0041445c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041445f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00414462: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414466: je 0x41447e */ if (fZ) goto L_0041447e;
L_00414468:; BB(0x00414468);
    /* 00414468: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041446d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00414470: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414471: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414474: call 0x417cc9 */ r_esp -= 4; W32(r_esp, 0x414479u); f_00417cc9();
    /* 00414479: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041447c: jmp 0x414485 */ goto L_00414485;
L_0041447e:; BB(0x0041447e);
    /* 0041447e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00414485:; BB(0x00414485);
    /* 00414485: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414488: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414489: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041448e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00414491: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x414496u); f_005e62ca();
    /* 00414496: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414499: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0041449f: call 0x40c562 */ r_esp -= 4; W32(r_esp, 0x4144a4u); f_0040c562();
L_004144a4:; BB(0x004144a4);
    /* 004144a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004144a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004144a7: ret  */ FN_RET(0x004141c1); r_esp += 4; return;
}

void f_004144bc(void) /* FUN_004144bc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004144bc);
    /* 004144bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004144bd: mov ebp, esp */ r_ebp = r_esp;
    /* 004144bf: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004144c2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004144c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004144c8: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004144cb: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 004144d1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004144d4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004144d6: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004144db: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004144de: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004144e4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004144e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004144e9: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4144ecu); call_ind(t); }
    /* 004144ec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004144ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004144f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004144f3: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x4144f8u); f_0040ad48();
    /* 004144f8: mov ecx, eax */ r_ecx = r_eax;
    /* 004144fa: call 0x40a360 */ r_esp -= 4; W32(r_esp, 0x4144ffu); f_0040a360();
    /* 004144ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414502: call 0x40b1cb */ r_esp -= 4; W32(r_esp, 0x414507u); f_0040b1cb();
    /* 00414507: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041450a: call 0x40b35e */ r_esp -= 4; W32(r_esp, 0x41450fu); f_0040b35e();
    /* 0041450f: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00414514: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00414517: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414518: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041451a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041451d: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00414520: call 0x40d34d */ r_esp -= 4; W32(r_esp, 0x414525u); f_0040d34d();
    /* 00414525: mov esp, ebp */ r_esp = r_ebp;
    /* 00414527: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414528: ret  */ FN_RET(0x004144bc); r_esp += 4; return;
}

void f_00414529(void) /* FUN_00414529 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00414529);
    /* 00414529: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041452a: mov ebp, esp */ r_ebp = r_esp;
    /* 0041452c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041452f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00414532: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414535: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00414538: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 0041453e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00414541: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414544: call 0x4145f0 */ r_esp -= 4; W32(r_esp, 0x414549u); f_004145f0();
    /* 00414549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041454b: jne 0x414593 */ if (!fZ) goto L_00414593;
L_0041454d:; BB(0x0041454d);
    /* 0041454d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041454f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414552: call 0x40f9ab */ r_esp -= 4; W32(r_esp, 0x414557u); f_0040f9ab();
    /* 00414557: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00414559: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041455c: call 0x40f7d4 */ r_esp -= 4; W32(r_esp, 0x414561u); f_0040f7d4();
    /* 00414561: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00414563: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00414568: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041456b: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00414571: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00414574: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00414576: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x414579u); call_ind(t); }
    /* 00414579: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041457b: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00414580: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00414583: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00414589: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041458c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041458e: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x414591u); call_ind(t); }
    /* 00414591: jmp 0x4145ec */ goto L_004145ec;
L_00414593:; BB(0x00414593);
    /* 00414593: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00414595: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041459a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041459d: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004145a3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004145a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004145a8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4145abu); call_ind(t); }
    /* 004145ab: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004145ad: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4145b2u); f_0048ab58();
    /* 004145b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004145b5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004145b8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004145bc: je 0x4145d4 */ if (fZ) goto L_004145d4;
L_004145be:; BB(0x004145be);
    /* 004145be: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004145c3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004145c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004145c7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004145ca: call 0x417cc9 */ r_esp -= 4; W32(r_esp, 0x4145cfu); f_00417cc9();
    /* 004145cf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004145d2: jmp 0x4145db */ goto L_004145db;
L_004145d4:; BB(0x004145d4);
    /* 004145d4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004145db:; BB(0x004145db);
    /* 004145db: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004145de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004145df: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004145e4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004145e7: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x4145ecu); f_005e62ca();
L_004145ec:; BB(0x004145ec);
    /* 004145ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004145ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004145ef: ret  */ FN_RET(0x00414529); r_esp += 4; return;
}

void f_004145f0(void) /* FUN_004145f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004145f0);
    /* 004145f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004145f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004145f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004145f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004145f9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004145fc: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004145ff: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 00414605: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00414608: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041460b: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x414610u); f_0040bff5();
    /* 00414610: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414613: jle 0x41461c */ if ((fZ||fS!=fO)) goto L_0041461c;
L_00414615:; BB(0x00414615);
    /* 00414615: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414617: jmp 0x4146ae */ goto L_004146ae;
L_0041461c:; BB(0x0041461c);
    /* 0041461c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041461f: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x414624u); f_0040bff5();
    /* 00414624: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414627: jne 0x414646 */ if (!fZ) goto L_00414646;
L_00414629:; BB(0x00414629);
    /* 00414629: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041462c: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x414631u); f_0040c107();
    /* 00414631: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414634: je 0x414642 */ if (fZ) goto L_00414642;
L_00414636:; BB(0x00414636);
    /* 00414636: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414639: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414640: jne 0x414646 */ if (!fZ) goto L_00414646;
L_00414642:; BB(0x00414642);
    /* 00414642: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414644: jmp 0x4146ae */ goto L_004146ae;
L_00414646:; BB(0x00414646);
    /* 00414646: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041464c: jmp 0x41465a */ goto L_0041465a;
L_0041464e:; BB(0x0041464e);
    /* 0041464e: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00414652: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00414656: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_0041465a:; BB(0x0041465a);
    /* 0041465a: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041465e: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414661: jge 0x4146ac */ if ((fS==fO)) goto L_004146ac;
L_00414663:; BB(0x00414663);
    /* 00414663: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00414667: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041466a: cmp dword ptr [ecx + eax*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041466f: je 0x4146aa */ if (fZ) goto L_004146aa;
L_00414671:; BB(0x00414671);
    /* 00414671: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00414675: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414678: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0041467c: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0041467f: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x414684u); f_0041f839();
    /* 00414684: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414687: je 0x4146aa */ if (fZ) goto L_004146aa;
L_00414689:; BB(0x00414689);
    /* 00414689: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041468d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414690: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00414694: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0041469a: call 0x40c1ca */ r_esp -= 4; W32(r_esp, 0x41469fu); f_0040c1ca();
    /* 0041469f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004146a1: jne 0x4146aa */ if (!fZ) goto L_004146aa;
L_004146a3:; BB(0x004146a3);
    /* 004146a3: mov eax, 1 */ r_eax = 0x1u;
    /* 004146a8: jmp 0x4146ae */ goto L_004146ae;
L_004146aa:; BB(0x004146aa);
    /* 004146aa: jmp 0x41464e */ goto L_0041464e;
L_004146ac:; BB(0x004146ac);
    /* 004146ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004146ae:; BB(0x004146ae);
    /* 004146ae: mov esp, ebp */ r_esp = r_ebp;
    /* 004146b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004146b1: ret  */ FN_RET(0x004145f0); r_esp += 4; return;
}

void f_004146b2(void) /* FUN_004146b2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004146b2);
    /* 004146b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004146b3: mov ebp, esp */ r_ebp = r_esp;
    /* 004146b5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004146b8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004146bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004146be: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4146c3u); f_0040f81e();
    /* 004146c3: mov eax, dword ptr [eax + 0x130] */ r_eax = R32((u32)(r_eax+0x130u));
    /* 004146c9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004146cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004146cf: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004146d2: call 0x40a6df */ r_esp -= 4; W32(r_esp, 0x4146d7u); f_0040a6df();
    /* 004146d7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004146da: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004146dd: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004146e0: call 0x40a85e */ r_esp -= 4; W32(r_esp, 0x4146e5u); f_0040a85e();
    /* 004146e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004146e8: call 0x40b43a */ r_esp -= 4; W32(r_esp, 0x4146edu); f_0040b43a();
    /* 004146ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004146f0: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004146f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004146f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004146f7: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 004146fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004146fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004146fe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00414700: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414703: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x414706u); call_ind(t); }
    /* 00414706: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414709: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41470eu); f_0040f81e();
    /* 0041470e: cmp dword ptr [eax + 0x144], 2 */ {  u32 a = R32((u32)(r_eax+0x144u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414715: jne 0x414724 */ if (!fZ) goto L_00414724;
L_00414717:; BB(0x00414717);
    /* 00414717: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041471a: mov dword ptr [eax + 0xc4], 1 */ W32((u32)(r_eax+0xc4u), 0x1u);
L_00414724:; BB(0x00414724);
    /* 00414724: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414727: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414728: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041472b: call 0x40affe */ r_esp -= 4; W32(r_esp, 0x414730u); f_0040affe();
    /* 00414730: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00414732: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414735: call 0x40a360 */ r_esp -= 4; W32(r_esp, 0x41473au); f_0040a360();
    /* 0041473a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041473d: call 0x40b1cb */ r_esp -= 4; W32(r_esp, 0x414742u); f_0040b1cb();
    /* 00414742: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414745: call 0x40c1a9 */ r_esp -= 4; W32(r_esp, 0x41474au); f_0040c1a9();
    /* 0041474a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041474c: jne 0x41477b */ if (!fZ) goto L_0041477b;
L_0041474e:; BB(0x0041474e);
    /* 0041474e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414751: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x414756u); f_0040f81e();
    /* 00414756: cmp dword ptr [eax + 0x144], 2 */ {  u32 a = R32((u32)(r_eax+0x144u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041475d: je 0x41477b */ if (fZ) goto L_0041477b;
L_0041475f:; BB(0x0041475f);
    /* 0041475f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414762: cmp dword ptr [edx + 0x48], 0 */ {  u32 a = R32((u32)(r_edx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414766: jne 0x41477b */ if (!fZ) goto L_0041477b;
L_00414768:; BB(0x00414768);
    /* 00414768: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041476b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041476c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041476e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414771: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00414774: call 0x40d34d */ r_esp -= 4; W32(r_esp, 0x414779u); f_0040d34d();
    /* 00414779: jmp 0x41478e */ goto L_0041478e;
L_0041477b:; BB(0x0041477b);
    /* 0041477b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041477f: je 0x41478e */ if (fZ) goto L_0041478e;
L_00414781:; BB(0x00414781);
    /* 00414781: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00414783: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00414786: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00414788: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041478b: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x41478eu); call_ind(t); }
L_0041478e:; BB(0x0041478e);
    /* 0041478e: mov esp, ebp */ r_esp = r_ebp;
    /* 00414790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414791: ret 4 */ FN_RET(0x004146b2); r_esp += 8; return;
}

void f_00414794(void) /* FUN_00414794 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00414794);
    /* 00414794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414795: mov ebp, esp */ r_ebp = r_esp;
    /* 00414797: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041479a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0041479d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004147a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004147a4: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 004147a8: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 004147ae: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004147b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004147b4: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004147b7: call 0x40a6df */ r_esp -= 4; W32(r_esp, 0x4147bcu); f_0040a6df();
    /* 004147bc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004147bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004147c2: call 0x40b43a */ r_esp -= 4; W32(r_esp, 0x4147c7u); f_0040b43a();
    /* 004147c7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004147ca: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004147cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004147ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004147d1: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 004147d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004147d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004147d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004147da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004147dd: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4147e0u); call_ind(t); }
    /* 004147e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004147e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004147e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004147e7: call 0x40affe */ r_esp -= 4; W32(r_esp, 0x4147ecu); f_0040affe();
    /* 004147ec: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004147f0: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004147f3: jne 0x414820 */ if (!fZ) goto L_00414820;
L_004147f5:; BB(0x004147f5);
    /* 004147f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004147f8: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x4147fdu); f_005dd4d2();
    /* 004147fd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414800: jne 0x414811 */ if (!fZ) goto L_00414811;
L_00414802:; BB(0x00414802);
    /* 00414802: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00414806: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041480a: call 0x40a2aa */ r_esp -= 4; W32(r_esp, 0x41480fu); f_0040a2aa();
    /* 0041480f: jmp 0x41481e */ goto L_0041481e;
L_00414811:; BB(0x00414811);
    /* 00414811: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00414815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414816: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414819: call 0x40a360 */ r_esp -= 4; W32(r_esp, 0x41481eu); f_0040a360();
L_0041481e:; BB(0x0041481e);
    /* 0041481e: jmp 0x41486f */ goto L_0041486f;
L_00414820:; BB(0x00414820);
    /* 00414820: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414823: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00414826: call 0x40a7ca */ r_esp -= 4; W32(r_esp, 0x41482bu); f_0040a7ca();
    /* 0041482b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041482e: jne 0x414862 */ if (!fZ) goto L_00414862;
L_00414830:; BB(0x00414830);
    /* 00414830: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00414834: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414837: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0041483b: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x414840u); f_004259a0();
    /* 00414840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414842: je 0x414853 */ if (fZ) goto L_00414853;
L_00414844:; BB(0x00414844);
    /* 00414844: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00414848: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414849: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041484c: call 0x40a360 */ r_esp -= 4; W32(r_esp, 0x414851u); f_0040a360();
    /* 00414851: jmp 0x414860 */ goto L_00414860;
L_00414853:; BB(0x00414853);
    /* 00414853: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00414857: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414858: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041485b: call 0x40a2aa */ r_esp -= 4; W32(r_esp, 0x414860u); f_0040a2aa();
L_00414860:; BB(0x00414860);
    /* 00414860: jmp 0x41486f */ goto L_0041486f;
L_00414862:; BB(0x00414862);
    /* 00414862: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00414866: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414867: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041486a: call 0x40a360 */ r_esp -= 4; W32(r_esp, 0x41486fu); f_0040a360();
L_0041486f:; BB(0x0041486f);
    /* 0041486f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414872: call 0x40b1cb */ r_esp -= 4; W32(r_esp, 0x414877u); f_0040b1cb();
    /* 00414877: mov esp, ebp */ r_esp = r_ebp;
    /* 00414879: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041487a: ret 4 */ FN_RET(0x00414794); r_esp += 8; return;
}

void f_0041487d(void) /* FUN_0041487d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041487d);
    /* 0041487d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041487e: mov ebp, esp */ r_ebp = r_esp;
    /* 00414880: sub esp, 0x578 */ {  u32 a = r_esp; u32 b = 0x578u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414886: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00414887: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00414888: mov dword ptr [ebp - 0x568], ecx */ W32((u32)(r_ebp+0xfffffa98u), r_ecx);
    /* 0041488e: mov ecx, 0x2c */ r_ecx = 0x2cu;
    /* 00414893: mov esi, 0x64cd1c */ r_esi = 0x64cd1cu;
    /* 00414898: lea edi, [ebp - 0x4b4] */ r_edi = (u32)(r_ebp+0xfffffb4cu);
    /* 0041489e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 004148a0: movsw word ptr es:[edi], word ptr [esi] */ W16(r_edi, R16(r_esi)); r_esi += rt_df ? -2 : 2; r_edi += rt_df ? -2 : 2;
    /* 004148a2: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 004148a3: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004148a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004148aa: jle 0x41491b */ if ((fZ||fS!=fO)) goto L_0041491b;
L_004148ac:; BB(0x004148ac);
    /* 004148ac: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004148b0: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004148b3: jle 0x4148c1 */ if ((fZ||fS!=fO)) goto L_004148c1;
L_004148b5:; BB(0x004148b5);
    /* 004148b5: mov dword ptr [ebp - 0x56c], 0x64cdd0 */ W32((u32)(r_ebp+0xfffffa94u), 0x64cdd0u);
    /* 004148bf: jmp 0x4148cb */ goto L_004148cb;
L_004148c1:; BB(0x004148c1);
    /* 004148c1: mov dword ptr [ebp - 0x56c], 0x64cde0 */ W32((u32)(r_ebp+0xfffffa94u), 0x64cde0u);
L_004148cb:; BB(0x004148cb);
    /* 004148cb: mov edx, dword ptr [ebp - 0x56c] */ r_edx = R32((u32)(r_ebp+0xfffffa94u));
    /* 004148d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004148d2: lea eax, [ebp - 0x544] */ r_eax = (u32)(r_ebp+0xfffffabcu);
    /* 004148d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004148d9: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4148deu); f_00624510();
    /* 004148de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004148e1: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004148e5: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004148e8: jle 0x4148f6 */ if ((fZ||fS!=fO)) goto L_004148f6;
L_004148ea:; BB(0x004148ea);
    /* 004148ea: mov dword ptr [ebp - 0x570], 0x64cde8 */ W32((u32)(r_ebp+0xfffffa90u), 0x64cde8u);
    /* 004148f4: jmp 0x414900 */ goto L_00414900;
L_004148f6:; BB(0x004148f6);
    /* 004148f6: mov dword ptr [ebp - 0x570], 0x64cdf8 */ W32((u32)(r_ebp+0xfffffa90u), 0x64cdf8u);
L_00414900:; BB(0x00414900);
    /* 00414900: mov edx, dword ptr [ebp - 0x570] */ r_edx = R32((u32)(r_ebp+0xfffffa90u));
    /* 00414906: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414907: lea eax, [ebp - 0x564] */ r_eax = (u32)(r_ebp+0xfffffa9cu);
    /* 0041490d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041490e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414913u); f_00624510();
    /* 00414913: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414916: jmp 0x4149b8 */ goto L_004149b8;
L_0041491b:; BB(0x0041491b);
    /* 0041491b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0041491f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414922: jge 0x414990 */ if ((fS==fO)) goto L_00414990;
L_00414924:; BB(0x00414924);
    /* 00414924: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00414928: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041492b: jle 0x414939 */ if ((fZ||fS!=fO)) goto L_00414939;
L_0041492d:; BB(0x0041492d);
    /* 0041492d: mov dword ptr [ebp - 0x574], 0x64ce04 */ W32((u32)(r_ebp+0xfffffa8cu), 0x64ce04u);
    /* 00414937: jmp 0x414943 */ goto L_00414943;
L_00414939:; BB(0x00414939);
    /* 00414939: mov dword ptr [ebp - 0x574], 0x64ce14 */ W32((u32)(r_ebp+0xfffffa8cu), 0x64ce14u);
L_00414943:; BB(0x00414943);
    /* 00414943: mov eax, dword ptr [ebp - 0x574] */ r_eax = R32((u32)(r_ebp+0xfffffa8cu));
    /* 00414949: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041494a: lea ecx, [ebp - 0x544] */ r_ecx = (u32)(r_ebp+0xfffffabcu);
    /* 00414950: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414951: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414956u); f_00624510();
    /* 00414956: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414959: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0041495d: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414960: jle 0x41496e */ if ((fZ||fS!=fO)) goto L_0041496e;
L_00414962:; BB(0x00414962);
    /* 00414962: mov dword ptr [ebp - 0x578], 0x64ce1c */ W32((u32)(r_ebp+0xfffffa88u), 0x64ce1cu);
    /* 0041496c: jmp 0x414978 */ goto L_00414978;
L_0041496e:; BB(0x0041496e);
    /* 0041496e: mov dword ptr [ebp - 0x578], 0x64ce30 */ W32((u32)(r_ebp+0xfffffa88u), 0x64ce30u);
L_00414978:; BB(0x00414978);
    /* 00414978: mov eax, dword ptr [ebp - 0x578] */ r_eax = R32((u32)(r_ebp+0xfffffa88u));
    /* 0041497e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041497f: lea ecx, [ebp - 0x564] */ r_ecx = (u32)(r_ebp+0xfffffa9cu);
    /* 00414985: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414986: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41498bu); f_00624510();
    /* 0041498b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041498e: jmp 0x4149b8 */ goto L_004149b8;
L_00414990:; BB(0x00414990);
    /* 00414990: push 0x64ce40 */ { u32 v = 0x64ce40u; r_esp -= 4; W32(r_esp, v); }
    /* 00414995: lea edx, [ebp - 0x544] */ r_edx = (u32)(r_ebp+0xfffffabcu);
    /* 0041499b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041499c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4149a1u); f_00624510();
    /* 004149a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004149a4: push 0x64ce4c */ { u32 v = 0x64ce4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004149a9: lea eax, [ebp - 0x564] */ r_eax = (u32)(r_ebp+0xfffffa9cu);
    /* 004149af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004149b0: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4149b5u); f_00624510();
    /* 004149b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004149b8:; BB(0x004149b8);
    /* 004149b8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004149bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004149bd: lea edx, [ebp - 0x564] */ r_edx = (u32)(r_ebp+0xfffffa9cu);
    /* 004149c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004149c4: lea eax, [ebp - 0x544] */ r_eax = (u32)(r_ebp+0xfffffabcu);
    /* 004149ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004149cb: push 0x64ce54 */ { u32 v = 0x64ce54u; r_esp -= 4; W32(r_esp, v); }
    /* 004149d0: lea ecx, [ebp - 0x534] */ r_ecx = (u32)(r_ebp+0xfffffaccu);
    /* 004149d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004149d7: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4149dcu); f_00624050();
    /* 004149dc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004149df: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004149e3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004149e6: jle 0x414a0c */ if ((fZ||fS!=fO)) goto L_00414a0c;
L_004149e8:; BB(0x004149e8);
    /* 004149e8: lea eax, [ebp - 0x534] */ r_eax = (u32)(r_ebp+0xfffffaccu);
    /* 004149ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004149ef: lea ecx, [ebp - 0x4b4] */ r_ecx = (u32)(r_ebp+0xfffffb4cu);
    /* 004149f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004149f6: push 0x64ce8c */ { u32 v = 0x64ce8cu; r_esp -= 4; W32(r_esp, v); }
    /* 004149fb: lea edx, [ebp - 0x400] */ r_edx = (u32)(r_ebp+0xfffffc00u);
    /* 00414a01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414a02: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x414a07u); f_00624050();
    /* 00414a07: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414a0a: jmp 0x414a5b */ goto L_00414a5b;
L_00414a0c:; BB(0x00414a0c);
    /* 00414a0c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00414a10: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414a13: jge 0x414a39 */ if ((fS==fO)) goto L_00414a39;
L_00414a15:; BB(0x00414a15);
    /* 00414a15: lea ecx, [ebp - 0x534] */ r_ecx = (u32)(r_ebp+0xfffffaccu);
    /* 00414a1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414a1c: lea edx, [ebp - 0x4b4] */ r_edx = (u32)(r_ebp+0xfffffb4cu);
    /* 00414a22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414a23: push 0x64cfdc */ { u32 v = 0x64cfdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00414a28: lea eax, [ebp - 0x400] */ r_eax = (u32)(r_ebp+0xfffffc00u);
    /* 00414a2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414a2f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x414a34u); f_00624050();
    /* 00414a34: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414a37: jmp 0x414a5b */ goto L_00414a5b;
L_00414a39:; BB(0x00414a39);
    /* 00414a39: lea ecx, [ebp - 0x534] */ r_ecx = (u32)(r_ebp+0xfffffaccu);
    /* 00414a3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414a40: lea edx, [ebp - 0x4b4] */ r_edx = (u32)(r_ebp+0xfffffb4cu);
    /* 00414a46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414a47: push 0x64d12c */ { u32 v = 0x64d12cu; r_esp -= 4; W32(r_esp, v); }
    /* 00414a4c: lea eax, [ebp - 0x400] */ r_eax = (u32)(r_ebp+0xfffffc00u);
    /* 00414a52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414a53: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x414a58u); f_00624050();
    /* 00414a58: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00414a5b:; BB(0x00414a5b);
    /* 00414a5b: lea ecx, [ebp - 0x400] */ r_ecx = (u32)(r_ebp+0xfffffc00u);
    /* 00414a61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414a62: push 0x64d170 */ { u32 v = 0x64d170u; r_esp -= 4; W32(r_esp, v); }
    /* 00414a67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414a69: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00414a6f: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x414a74u); f_0060e8c0();
    /* 00414a74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00414a75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00414a76: mov esp, ebp */ r_esp = r_ebp;
    /* 00414a78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414a79: ret 4 */ FN_RET(0x0041487d); r_esp += 8; return;
}

void f_00414a7c(void) /* FUN_00414a7c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00414a7c);
    /* 00414a7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414a7d: mov ebp, esp */ r_ebp = r_esp;
    /* 00414a7f: sub esp, 0x408 */ {  u32 a = r_esp; u32 b = 0x408u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414a85: mov dword ptr [ebp - 0x408], ecx */ W32((u32)(r_ebp+0xfffffbf8u), r_ecx);
    /* 00414a8b: mov ecx, dword ptr [ebp - 0x408] */ r_ecx = R32((u32)(r_ebp+0xfffffbf8u));
    /* 00414a91: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x414a96u); f_0040f81e();
    /* 00414a96: mov dword ptr [ebp - 0x404], eax */ W32((u32)(r_ebp+0xfffffbfcu), r_eax);
    /* 00414a9c: push 0x64d17c */ { u32 v = 0x64d17cu; r_esp -= 4; W32(r_esp, v); }
    /* 00414aa1: lea eax, [ebp - 0x400] */ r_eax = (u32)(r_ebp+0xfffffc00u);
    /* 00414aa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414aa8: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414aadu); f_00624510();
    /* 00414aad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414ab0: push 0x64d1d0 */ { u32 v = 0x64d1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414ab5: lea ecx, [ebp - 0x400] */ r_ecx = (u32)(r_ebp+0xfffffc00u);
    /* 00414abb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414abc: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x414ac1u); f_00624520();
    /* 00414ac1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414ac4: push 0x64d210 */ { u32 v = 0x64d210u; r_esp -= 4; W32(r_esp, v); }
    /* 00414ac9: lea edx, [ebp - 0x400] */ r_edx = (u32)(r_ebp+0xfffffc00u);
    /* 00414acf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414ad0: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x414ad5u); f_00624520();
    /* 00414ad5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414ad8: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00414ade: call 0x40cd45 */ r_esp -= 4; W32(r_esp, 0x414ae3u); f_0040cd45();
    /* 00414ae3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414ae5: je 0x414afb */ if (fZ) goto L_00414afb;
L_00414ae7:; BB(0x00414ae7);
    /* 00414ae7: push 0x64d25c */ { u32 v = 0x64d25cu; r_esp -= 4; W32(r_esp, v); }
    /* 00414aec: lea eax, [ebp - 0x400] */ r_eax = (u32)(r_ebp+0xfffffc00u);
    /* 00414af2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414af3: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x414af8u); f_00624520();
    /* 00414af8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00414afb:; BB(0x00414afb);
    /* 00414afb: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00414b01: call 0x40cdbf */ r_esp -= 4; W32(r_esp, 0x414b06u); f_0040cdbf();
    /* 00414b06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414b08: je 0x414b1e */ if (fZ) goto L_00414b1e;
L_00414b0a:; BB(0x00414b0a);
    /* 00414b0a: push 0x64d2c8 */ { u32 v = 0x64d2c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b0f: lea ecx, [ebp - 0x400] */ r_ecx = (u32)(r_ebp+0xfffffc00u);
    /* 00414b15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414b16: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x414b1bu); f_00624520();
    /* 00414b1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00414b1e:; BB(0x00414b1e);
    /* 00414b1e: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00414b24: call 0x40ce80 */ r_esp -= 4; W32(r_esp, 0x414b29u); f_0040ce80();
    /* 00414b29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414b2b: je 0x414b41 */ if (fZ) goto L_00414b41;
L_00414b2d:; BB(0x00414b2d);
    /* 00414b2d: push 0x64d328 */ { u32 v = 0x64d328u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b32: lea edx, [ebp - 0x400] */ r_edx = (u32)(r_ebp+0xfffffc00u);
    /* 00414b38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414b39: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x414b3eu); f_00624520();
    /* 00414b3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00414b41:; BB(0x00414b41);
    /* 00414b41: lea eax, [ebp - 0x400] */ r_eax = (u32)(r_ebp+0xfffffc00u);
    /* 00414b47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414b48: push 0x64d378 */ { u32 v = 0x64d378u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b4f: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00414b55: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x414b5au); f_0060e8c0();
    /* 00414b5a: mov esp, ebp */ r_esp = r_ebp;
    /* 00414b5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414b5d: ret  */ FN_RET(0x00414a7c); r_esp += 4; return;
}

void f_00414b5e(void) /* FUN_00414b5e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00414b5e);
    /* 00414b5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414b5f: mov ebp, esp */ r_ebp = r_esp;
    /* 00414b61: sub esp, 0x660 */ {  u32 a = r_esp; u32 b = 0x660u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414b67: mov dword ptr [ebp - 0x65c], ecx */ W32((u32)(r_ebp+0xfffff9a4u), r_ecx);
    /* 00414b6d: mov ecx, dword ptr [ebp - 0x65c] */ r_ecx = R32((u32)(r_ebp+0xfffff9a4u));
    /* 00414b73: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x414b78u); f_0040f81e();
    /* 00414b78: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00414b7e: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x414b83u); f_0040bff5();
    /* 00414b83: mov word ptr [ebp - 0x64c], ax */ W16((u32)(r_ebp+0xfffff9b4u), (u16)r_eax);
    /* 00414b8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b8c: mov eax, dword ptr [ebp - 0x65c] */ r_eax = R32((u32)(r_ebp+0xfffff9a4u));
    /* 00414b92: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00414b95: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 00414b9b: call 0x40ad48 */ r_esp -= 4; W32(r_esp, 0x414ba0u); f_0040ad48();
    /* 00414ba0: mov ecx, eax */ r_ecx = r_eax;
    /* 00414ba2: call 0x40a4d9 */ r_esp -= 4; W32(r_esp, 0x414ba7u); f_0040a4d9();
    /* 00414ba7: mov word ptr [ebp - 0x448], ax */ W16((u32)(r_ebp+0xfffffbb8u), (u16)r_eax);
    /* 00414bae: mov ecx, dword ptr [ebp - 0x65c] */ r_ecx = R32((u32)(r_ebp+0xfffff9a4u));
    /* 00414bb4: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x414bb9u); f_0040f81e();
    /* 00414bb9: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00414bbf: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x414bc4u); f_0040c107();
    /* 00414bc4: movsx edx, word ptr [ebp - 0x64c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414bcb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00414bcd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414bcf: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00414bd2: mov dword ptr [ebp - 0x404], ecx */ W32((u32)(r_ebp+0xfffffbfcu), r_ecx);
    /* 00414bd8: movsx edx, word ptr [ebp - 0x64c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414bdf: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414be2: jge 0x414bfc */ if ((fS==fO)) goto L_00414bfc;
L_00414be4:; BB(0x00414be4);
    /* 00414be4: movsx eax, word ptr [ebp - 0x64c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414beb: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414bee: je 0x414bfc */ if (fZ) goto L_00414bfc;
L_00414bf0:; BB(0x00414bf0);
    /* 00414bf0: movsx ecx, word ptr [ebp - 0x64c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414bf7: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414bfa: jne 0x414c15 */ if (!fZ) goto L_00414c15;
L_00414bfc:; BB(0x00414bfc);
    /* 00414bfc: push 0x64d380 */ { u32 v = 0x64d380u; r_esp -= 4; W32(r_esp, v); }
    /* 00414c01: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 00414c07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414c08: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414c0du); f_00624510();
    /* 00414c0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414c10: jmp 0x414cfb */ goto L_00414cfb;
L_00414c15:; BB(0x00414c15);
    /* 00414c15: movsx eax, word ptr [ebp - 0x64c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414c1c: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414c1f: jge 0x414c5a */ if ((fS==fO)) goto L_00414c5a;
L_00414c21:; BB(0x00414c21);
    /* 00414c21: movsx ecx, word ptr [ebp - 0x64c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414c28: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414c2b: je 0x414c5a */ if (fZ) goto L_00414c5a;
L_00414c2d:; BB(0x00414c2d);
    /* 00414c2d: movsx edx, word ptr [ebp - 0x64c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414c34: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414c37: je 0x414c5a */ if (fZ) goto L_00414c5a;
L_00414c39:; BB(0x00414c39);
    /* 00414c39: movsx eax, word ptr [ebp - 0x64c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414c40: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414c43: jl 0x414c73 */ if ((fS!=fO)) goto L_00414c73;
L_00414c45:; BB(0x00414c45);
    /* 00414c45: movsx ecx, word ptr [ebp - 0x64c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414c4c: cmp ecx, 0x13 */ {  u32 a = r_ecx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414c4f: jg 0x414c73 */ if ((!fZ&&fS==fO)) goto L_00414c73;
L_00414c51:; BB(0x00414c51);
    /* 00414c51: cmp dword ptr [ebp - 0x404], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414c58: je 0x414c73 */ if (fZ) goto L_00414c73;
L_00414c5a:; BB(0x00414c5a);
    /* 00414c5a: push 0x64d38c */ { u32 v = 0x64d38cu; r_esp -= 4; W32(r_esp, v); }
    /* 00414c5f: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 00414c65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414c66: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414c6bu); f_00624510();
    /* 00414c6b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414c6e: jmp 0x414cfb */ goto L_00414cfb;
L_00414c73:; BB(0x00414c73);
    /* 00414c73: movsx eax, word ptr [ebp - 0x64c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414c7a: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414c7d: je 0x414c97 */ if (fZ) goto L_00414c97;
L_00414c7f:; BB(0x00414c7f);
    /* 00414c7f: movsx ecx, word ptr [ebp - 0x64c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414c86: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414c89: je 0x414c97 */ if (fZ) goto L_00414c97;
L_00414c8b:; BB(0x00414c8b);
    /* 00414c8b: movsx edx, word ptr [ebp - 0x64c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414c92: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414c95: jne 0x414cad */ if (!fZ) goto L_00414cad;
L_00414c97:; BB(0x00414c97);
    /* 00414c97: push 0x64d394 */ { u32 v = 0x64d394u; r_esp -= 4; W32(r_esp, v); }
    /* 00414c9c: lea eax, [ebp - 0x414] */ r_eax = (u32)(r_ebp+0xfffffbecu);
    /* 00414ca2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414ca3: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414ca8u); f_00624510();
    /* 00414ca8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414cab: jmp 0x414cfb */ goto L_00414cfb;
L_00414cad:; BB(0x00414cad);
    /* 00414cad: movsx ecx, word ptr [ebp - 0x64c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414cb4: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414cb7: jg 0x414ccf */ if ((!fZ&&fS==fO)) goto L_00414ccf;
L_00414cb9:; BB(0x00414cb9);
    /* 00414cb9: push 0x64d39c */ { u32 v = 0x64d39cu; r_esp -= 4; W32(r_esp, v); }
    /* 00414cbe: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 00414cc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414cc5: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414ccau); f_00624510();
    /* 00414cca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414ccd: jmp 0x414cfb */ goto L_00414cfb;
L_00414ccf:; BB(0x00414ccf);
    /* 00414ccf: movsx eax, word ptr [ebp - 0x64c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414cd6: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414cd9: jl 0x414cfb */ if ((fS!=fO)) goto L_00414cfb;
L_00414cdb:; BB(0x00414cdb);
    /* 00414cdb: movsx ecx, word ptr [ebp - 0x64c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414ce2: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414ce5: jg 0x414cfb */ if ((!fZ&&fS==fO)) goto L_00414cfb;
L_00414ce7:; BB(0x00414ce7);
    /* 00414ce7: push 0x64d3a4 */ { u32 v = 0x64d3a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00414cec: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 00414cf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414cf3: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414cf8u); f_00624510();
    /* 00414cf8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00414cfb:; BB(0x00414cfb);
    /* 00414cfb: movsx eax, word ptr [ebp - 0x448] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbb8u));
    /* 00414d02: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414d05: jl 0x414d20 */ if ((fS!=fO)) goto L_00414d20;
L_00414d07:; BB(0x00414d07);
    /* 00414d07: push 0x64d3b0 */ { u32 v = 0x64d3b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414d0c: lea ecx, [ebp - 0x424] */ r_ecx = (u32)(r_ebp+0xfffffbdcu);
    /* 00414d12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414d13: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414d18u); f_00624510();
    /* 00414d18: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414d1b: jmp 0x414dd9 */ goto L_00414dd9;
L_00414d20:; BB(0x00414d20);
    /* 00414d20: movsx edx, word ptr [ebp - 0x448] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbb8u));
    /* 00414d27: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414d2a: je 0x414d38 */ if (fZ) goto L_00414d38;
L_00414d2c:; BB(0x00414d2c);
    /* 00414d2c: movsx eax, word ptr [ebp - 0x448] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbb8u));
    /* 00414d33: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414d36: jne 0x414d51 */ if (!fZ) goto L_00414d51;
L_00414d38:; BB(0x00414d38);
    /* 00414d38: push 0x64d3bc */ { u32 v = 0x64d3bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00414d3d: lea ecx, [ebp - 0x424] */ r_ecx = (u32)(r_ebp+0xfffffbdcu);
    /* 00414d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414d44: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414d49u); f_00624510();
    /* 00414d49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414d4c: jmp 0x414dd9 */ goto L_00414dd9;
L_00414d51:; BB(0x00414d51);
    /* 00414d51: movsx edx, word ptr [ebp - 0x448] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbb8u));
    /* 00414d58: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414d5b: je 0x414d69 */ if (fZ) goto L_00414d69;
L_00414d5d:; BB(0x00414d5d);
    /* 00414d5d: movsx eax, word ptr [ebp - 0x448] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbb8u));
    /* 00414d64: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414d67: jne 0x414d7f */ if (!fZ) goto L_00414d7f;
L_00414d69:; BB(0x00414d69);
    /* 00414d69: push 0x64d3c4 */ { u32 v = 0x64d3c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00414d6e: lea ecx, [ebp - 0x424] */ r_ecx = (u32)(r_ebp+0xfffffbdcu);
    /* 00414d74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414d75: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414d7au); f_00624510();
    /* 00414d7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414d7d: jmp 0x414dd9 */ goto L_00414dd9;
L_00414d7f:; BB(0x00414d7f);
    /* 00414d7f: movsx edx, word ptr [ebp - 0x448] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbb8u));
    /* 00414d86: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414d89: je 0x414d97 */ if (fZ) goto L_00414d97;
L_00414d8b:; BB(0x00414d8b);
    /* 00414d8b: movsx eax, word ptr [ebp - 0x448] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbb8u));
    /* 00414d92: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414d95: jne 0x414dad */ if (!fZ) goto L_00414dad;
L_00414d97:; BB(0x00414d97);
    /* 00414d97: push 0x64d3cc */ { u32 v = 0x64d3ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00414d9c: lea ecx, [ebp - 0x424] */ r_ecx = (u32)(r_ebp+0xfffffbdcu);
    /* 00414da2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414da3: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414da8u); f_00624510();
    /* 00414da8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414dab: jmp 0x414dd9 */ goto L_00414dd9;
L_00414dad:; BB(0x00414dad);
    /* 00414dad: movsx edx, word ptr [ebp - 0x448] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbb8u));
    /* 00414db4: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414db7: je 0x414dc5 */ if (fZ) goto L_00414dc5;
L_00414db9:; BB(0x00414db9);
    /* 00414db9: movsx eax, word ptr [ebp - 0x448] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbb8u));
    /* 00414dc0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414dc3: jne 0x414dd9 */ if (!fZ) goto L_00414dd9;
L_00414dc5:; BB(0x00414dc5);
    /* 00414dc5: push 0x64d3d4 */ { u32 v = 0x64d3d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00414dca: lea ecx, [ebp - 0x424] */ r_ecx = (u32)(r_ebp+0xfffffbdcu);
    /* 00414dd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414dd1: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414dd6u); f_00624510();
    /* 00414dd6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00414dd9:; BB(0x00414dd9);
    /* 00414dd9: lea edx, [ebp - 0x650] */ r_edx = (u32)(r_ebp+0xfffff9b0u);
    /* 00414ddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414de0: lea eax, [ebp - 0x434] */ r_eax = (u32)(r_ebp+0xfffffbccu);
    /* 00414de6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414de7: mov ecx, dword ptr [ebp - 0x65c] */ r_ecx = R32((u32)(r_ebp+0xfffff9a4u));
    /* 00414ded: call 0x4159c2 */ r_esp -= 4; W32(r_esp, 0x414df2u); f_004159c2();
    /* 00414df2: mov ecx, dword ptr [ebp - 0x404] */ r_ecx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00414df8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414df9: mov dx, word ptr [ebp - 0x448] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffbb8u))) & 0xffffu);
    /* 00414e00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414e01: mov ax, word ptr [ebp - 0x64c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffff9b4u))) & 0xffffu);
    /* 00414e08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414e09: lea ecx, [ebp - 0x648] */ r_ecx = (u32)(r_ebp+0xfffff9b8u);
    /* 00414e0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414e10: mov ecx, dword ptr [ebp - 0x65c] */ r_ecx = R32((u32)(r_ebp+0xfffff9a4u));
    /* 00414e16: call 0x414f5a */ r_esp -= 4; W32(r_esp, 0x414e1bu); f_00414f5a();
    /* 00414e1b: mov dx, word ptr [ebp - 0x448] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffbb8u))) & 0xffffu);
    /* 00414e22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414e23: mov ax, word ptr [ebp - 0x64c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffff9b4u))) & 0xffffu);
    /* 00414e2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414e2b: mov ecx, dword ptr [ebp - 0x650] */ r_ecx = R32((u32)(r_ebp+0xfffff9b0u));
    /* 00414e31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414e32: lea edx, [ebp - 0x658] */ r_edx = (u32)(r_ebp+0xfffff9a8u);
    /* 00414e38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414e39: mov ecx, dword ptr [ebp - 0x65c] */ r_ecx = R32((u32)(r_ebp+0xfffff9a4u));
    /* 00414e3f: call 0x415b01 */ r_esp -= 4; W32(r_esp, 0x414e44u); f_00415b01();
    /* 00414e44: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00414e46: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00414e49: mov dword ptr [ebp - 0x444], ecx */ W32((u32)(r_ebp+0xfffffbbcu), r_ecx);
    /* 00414e4f: mov dword ptr [ebp - 0x440], edx */ W32((u32)(r_ebp+0xfffffbc0u), r_edx);
    /* 00414e55: mov eax, dword ptr [ebp - 0x444] */ r_eax = R32((u32)(r_ebp+0xfffffbbcu));
    /* 00414e5b: add eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414e5e: mov dword ptr [ebp - 0x444], eax */ W32((u32)(r_ebp+0xfffffbbcu), r_eax);
    /* 00414e64: mov ecx, dword ptr [ebp - 0x440] */ r_ecx = R32((u32)(r_ebp+0xfffffbc0u));
    /* 00414e6a: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00414e6d: mov dword ptr [ebp - 0x440], ecx */ W32((u32)(r_ebp+0xfffffbc0u), r_ecx);
    /* 00414e73: movsx edx, word ptr [ebp - 0x448] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbb8u));
    /* 00414e7a: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414e7d: jne 0x414e95 */ if (!fZ) goto L_00414e95;
L_00414e7f:; BB(0x00414e7f);
    /* 00414e7f: push 0x64d3e0 */ { u32 v = 0x64d3e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414e84: lea eax, [ebp - 0x43c] */ r_eax = (u32)(r_ebp+0xfffffbc4u);
    /* 00414e8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414e8b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414e90u); f_00624510();
    /* 00414e90: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414e93: jmp 0x414eb1 */ goto L_00414eb1;
L_00414e95:; BB(0x00414e95);
    /* 00414e95: movsx ecx, word ptr [ebp - 0x448] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbb8u));
    /* 00414e9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414e9d: push 0x64d3e4 */ { u32 v = 0x64d3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00414ea2: lea edx, [ebp - 0x43c] */ r_edx = (u32)(r_ebp+0xfffffbc4u);
    /* 00414ea8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414ea9: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x414eaeu); f_00624050();
    /* 00414eae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00414eb1:; BB(0x00414eb1);
    /* 00414eb1: cmp dword ptr [ebp - 0x404], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414eb8: je 0x414ec6 */ if (fZ) goto L_00414ec6;
L_00414eba:; BB(0x00414eba);
    /* 00414eba: mov dword ptr [ebp - 0x660], 0x64d3e8 */ W32((u32)(r_ebp+0xfffff9a0u), 0x64d3e8u);
    /* 00414ec4: jmp 0x414ed0 */ goto L_00414ed0;
L_00414ec6:; BB(0x00414ec6);
    /* 00414ec6: mov dword ptr [ebp - 0x660], 0x64d3f0 */ W32((u32)(r_ebp+0xfffff9a0u), 0x64d3f0u);
L_00414ed0:; BB(0x00414ed0);
    /* 00414ed0: lea eax, [ebp - 0x648] */ r_eax = (u32)(r_ebp+0xfffff9b8u);
    /* 00414ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414ed7: lea ecx, [ebp - 0x434] */ r_ecx = (u32)(r_ebp+0xfffffbccu);
    /* 00414edd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414ede: lea edx, [ebp - 0x424] */ r_edx = (u32)(r_ebp+0xfffffbdcu);
    /* 00414ee4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414ee5: lea eax, [ebp - 0x43c] */ r_eax = (u32)(r_ebp+0xfffffbc4u);
    /* 00414eeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414eec: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 00414ef2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414ef3: movsx edx, word ptr [ebp - 0x64c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9b4u));
    /* 00414efa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414efb: mov eax, dword ptr [ebp - 0x660] */ r_eax = R32((u32)(r_ebp+0xfffff9a0u));
    /* 00414f01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414f02: push 0x64d3f8 */ { u32 v = 0x64d3f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00414f07: lea ecx, [ebp - 0x400] */ r_ecx = (u32)(r_ebp+0xfffffc00u);
    /* 00414f0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414f0e: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x414f13u); f_00624050();
    /* 00414f13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414f16: lea edx, [ebp - 0x400] */ r_edx = (u32)(r_ebp+0xfffffc00u);
    /* 00414f1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414f1d: push 0x64d464 */ { u32 v = 0x64d464u; r_esp -= 4; W32(r_esp, v); }
    /* 00414f22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414f24: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00414f2a: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x414f2fu); f_0060e8c0();
    /* 00414f2f: mov eax, dword ptr [ebp - 0x440] */ r_eax = R32((u32)(r_ebp+0xfffffbc0u));
    /* 00414f35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414f36: mov ecx, dword ptr [ebp - 0x444] */ r_ecx = R32((u32)(r_ebp+0xfffffbbcu));
    /* 00414f3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414f3d: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 00414f42: mov edx, dword ptr [ebp - 0x650] */ r_edx = R32((u32)(r_ebp+0xfffff9b0u));
    /* 00414f48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414f49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414f4b: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00414f51: call 0x60e932 */ r_esp -= 4; W32(r_esp, 0x414f56u); f_0060e932();
    /* 00414f56: mov esp, ebp */ r_esp = r_ebp;
    /* 00414f58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414f59: ret  */ FN_RET(0x00414b5e); r_esp += 4; return;
}

void f_00414f5a(void) /* FUN_00414f5a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00414f5a);
    /* 00414f5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414f5b: mov ebp, esp */ r_ebp = r_esp;
    /* 00414f5d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414f60: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00414f63: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414f66: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x414f6bu); f_0040f81e();
    /* 00414f6b: mov ecx, eax */ r_ecx = r_eax;
    /* 00414f6d: call 0x40cdbf */ r_esp -= 4; W32(r_esp, 0x414f72u); f_0040cdbf();
    /* 00414f72: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00414f75: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414f78: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x414f7du); f_0040f81e();
    /* 00414f7d: mov ecx, eax */ r_ecx = r_eax;
    /* 00414f7f: call 0x40cd45 */ r_esp -= 4; W32(r_esp, 0x414f84u); f_0040cd45();
    /* 00414f84: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00414f87: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414f8a: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x414f8fu); f_0040f81e();
    /* 00414f8f: mov ecx, eax */ r_ecx = r_eax;
    /* 00414f91: call 0x40ce80 */ r_esp -= 4; W32(r_esp, 0x414f96u); f_0040ce80();
    /* 00414f96: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00414f99: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 00414f9d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414fa0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414fa3: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00414fa6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00414fa9: cmp dword ptr [ebp - 0x14], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00414fad: ja 0x415974 */ if ((!fC&&!fZ)) goto L_00415974;
L_00414fb3:; BB(0x00414fb3);
    /* 00414fb3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414fb6: jmp dword ptr [edx*4 + 0x41597a] */ { u32 t = R32((u32)(r_edx*4+0x41597au)); switch (t) { case 0x414fbdu: goto L_00414fbd; case 0x415008u: goto L_00415008; case 0x41501eu: goto L_0041501e; case 0x415069u: goto L_00415069; case 0x41507fu: goto L_0041507f; case 0x4150e6u: goto L_004150e6; case 0x415127u: goto L_00415127; case 0x4151a7u: goto L_004151a7; case 0x4151f2u: goto L_004151f2; case 0x4152e1u: goto L_004152e1; case 0x4153a7u: goto L_004153a7; case 0x4154a5u: goto L_004154a5; case 0x4155a8u: goto L_004155a8; case 0x4156f2u: goto L_004156f2; case 0x415772u: goto L_00415772; case 0x4158f2u: goto L_004158f2; case 0x41591eu: goto L_0041591e; case 0x415963u: goto L_00415963; default: UNSUP(0x00414fb6, "jump table entry is not a known target"); } }
L_00414fbd:; BB(0x00414fbd);
    /* 00414fbd: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414fc1: je 0x414ff2 */ if (fZ) goto L_00414ff2;
L_00414fc3:; BB(0x00414fc3);
    /* 00414fc3: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00414fc7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414fca: jge 0x414fdf */ if ((fS==fO)) goto L_00414fdf;
L_00414fcc:; BB(0x00414fcc);
    /* 00414fcc: push 0x64d470 */ { u32 v = 0x64d470u; r_esp -= 4; W32(r_esp, v); }
    /* 00414fd1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00414fd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414fd5: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414fdau); f_00624510();
    /* 00414fda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414fdd: jmp 0x414ff0 */ goto L_00414ff0;
L_00414fdf:; BB(0x00414fdf);
    /* 00414fdf: push 0x64d558 */ { u32 v = 0x64d558u; r_esp -= 4; W32(r_esp, v); }
    /* 00414fe4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00414fe7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414fe8: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x414fedu); f_00624510();
    /* 00414fed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00414ff0:; BB(0x00414ff0);
    /* 00414ff0: jmp 0x415003 */ goto L_00415003;
L_00414ff2:; BB(0x00414ff2);
    /* 00414ff2: push 0x64d5c4 */ { u32 v = 0x64d5c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00414ff7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00414ffa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414ffb: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415000u); f_00624510();
    /* 00415000: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415003:; BB(0x00415003);
    /* 00415003: jmp 0x415974 */ goto L_00415974;
L_00415008:; BB(0x00415008);
    /* 00415008: push 0x64d600 */ { u32 v = 0x64d600u; r_esp -= 4; W32(r_esp, v); }
    /* 0041500d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415010: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415011: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415016u); f_00624510();
    /* 00415016: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415019: jmp 0x415974 */ goto L_00415974;
L_0041501e:; BB(0x0041501e);
    /* 0041501e: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415022: je 0x415053 */ if (fZ) goto L_00415053;
L_00415024:; BB(0x00415024);
    /* 00415024: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415028: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041502b: jge 0x415040 */ if ((fS==fO)) goto L_00415040;
L_0041502d:; BB(0x0041502d);
    /* 0041502d: push 0x64d63c */ { u32 v = 0x64d63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00415032: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415035: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415036: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41503bu); f_00624510();
    /* 0041503b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041503e: jmp 0x415051 */ goto L_00415051;
L_00415040:; BB(0x00415040);
    /* 00415040: push 0x64d724 */ { u32 v = 0x64d724u; r_esp -= 4; W32(r_esp, v); }
    /* 00415045: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415048: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415049: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41504eu); f_00624510();
    /* 0041504e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415051:; BB(0x00415051);
    /* 00415051: jmp 0x415064 */ goto L_00415064;
L_00415053:; BB(0x00415053);
    /* 00415053: push 0x64d790 */ { u32 v = 0x64d790u; r_esp -= 4; W32(r_esp, v); }
    /* 00415058: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041505b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041505c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415061u); f_00624510();
    /* 00415061: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415064:; BB(0x00415064);
    /* 00415064: jmp 0x415974 */ goto L_00415974;
L_00415069:; BB(0x00415069);
    /* 00415069: push 0x64d7cc */ { u32 v = 0x64d7ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0041506e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415072: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415077u); f_00624510();
    /* 00415077: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041507a: jmp 0x415974 */ goto L_00415974;
L_0041507f:; BB(0x0041507f);
    /* 0041507f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415083: je 0x4150d0 */ if (fZ) goto L_004150d0;
L_00415085:; BB(0x00415085);
    /* 00415085: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415089: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041508c: jg 0x4150a1 */ if ((!fZ&&fS==fO)) goto L_004150a1;
L_0041508e:; BB(0x0041508e);
    /* 0041508e: push 0x64d808 */ { u32 v = 0x64d808u; r_esp -= 4; W32(r_esp, v); }
    /* 00415093: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415096: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415097: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41509cu); f_00624510();
    /* 0041509c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041509f: jmp 0x4150ce */ goto L_004150ce;
L_004150a1:; BB(0x004150a1);
    /* 004150a1: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004150a5: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004150a8: jg 0x4150bd */ if ((!fZ&&fS==fO)) goto L_004150bd;
L_004150aa:; BB(0x004150aa);
    /* 004150aa: push 0x64d894 */ { u32 v = 0x64d894u; r_esp -= 4; W32(r_esp, v); }
    /* 004150af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004150b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004150b3: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4150b8u); f_00624510();
    /* 004150b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004150bb: jmp 0x4150ce */ goto L_004150ce;
L_004150bd:; BB(0x004150bd);
    /* 004150bd: push 0x64d984 */ { u32 v = 0x64d984u; r_esp -= 4; W32(r_esp, v); }
    /* 004150c2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004150c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004150c6: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4150cbu); f_00624510();
    /* 004150cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004150ce:; BB(0x004150ce);
    /* 004150ce: jmp 0x4150e1 */ goto L_004150e1;
L_004150d0:; BB(0x004150d0);
    /* 004150d0: push 0x64d9ec */ { u32 v = 0x64d9ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004150d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004150d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004150d9: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4150deu); f_00624510();
    /* 004150de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004150e1:; BB(0x004150e1);
    /* 004150e1: jmp 0x415974 */ goto L_00415974;
L_004150e6:; BB(0x004150e6);
    /* 004150e6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004150ea: je 0x415111 */ if (fZ) goto L_00415111;
L_004150ec:; BB(0x004150ec);
    /* 004150ec: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004150f0: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004150f3: jl 0x415111 */ if ((fS!=fO)) goto L_00415111;
L_004150f5:; BB(0x004150f5);
    /* 004150f5: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004150f9: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004150fc: jg 0x415111 */ if ((!fZ&&fS==fO)) goto L_00415111;
L_004150fe:; BB(0x004150fe);
    /* 004150fe: push 0x64da28 */ { u32 v = 0x64da28u; r_esp -= 4; W32(r_esp, v); }
    /* 00415103: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415106: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415107: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41510cu); f_00624510();
    /* 0041510c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041510f: jmp 0x415122 */ goto L_00415122;
L_00415111:; BB(0x00415111);
    /* 00415111: push 0x64dad0 */ { u32 v = 0x64dad0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415116: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415119: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041511a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41511fu); f_00624510();
    /* 0041511f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415122:; BB(0x00415122);
    /* 00415122: jmp 0x415974 */ goto L_00415974;
L_00415127:; BB(0x00415127);
    /* 00415127: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041512b: je 0x41515c */ if (fZ) goto L_0041515c;
L_0041512d:; BB(0x0041512d);
    /* 0041512d: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415131: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415134: jg 0x415149 */ if ((!fZ&&fS==fO)) goto L_00415149;
L_00415136:; BB(0x00415136);
    /* 00415136: push 0x64db0c */ { u32 v = 0x64db0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041513b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041513e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041513f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415144u); f_00624510();
    /* 00415144: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415147: jmp 0x41515a */ goto L_0041515a;
L_00415149:; BB(0x00415149);
    /* 00415149: push 0x64dbfc */ { u32 v = 0x64dbfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041514e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415151: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415152: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415157u); f_00624510();
    /* 00415157: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041515a:; BB(0x0041515a);
    /* 0041515a: jmp 0x4151a2 */ goto L_004151a2;
L_0041515c:; BB(0x0041515c);
    /* 0041515c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415160: je 0x415191 */ if (fZ) goto L_00415191;
L_00415162:; BB(0x00415162);
    /* 00415162: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415166: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415169: jg 0x41517e */ if ((!fZ&&fS==fO)) goto L_0041517e;
L_0041516b:; BB(0x0041516b);
    /* 0041516b: push 0x64dcb4 */ { u32 v = 0x64dcb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00415170: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415174: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415179u); f_00624510();
    /* 00415179: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041517c: jmp 0x41518f */ goto L_0041518f;
L_0041517e:; BB(0x0041517e);
    /* 0041517e: push 0x64dd60 */ { u32 v = 0x64dd60u; r_esp -= 4; W32(r_esp, v); }
    /* 00415183: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415186: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415187: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41518cu); f_00624510();
    /* 0041518c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041518f:; BB(0x0041518f);
    /* 0041518f: jmp 0x4151a2 */ goto L_004151a2;
L_00415191:; BB(0x00415191);
    /* 00415191: push 0x64ddf8 */ { u32 v = 0x64ddf8u; r_esp -= 4; W32(r_esp, v); }
    /* 00415196: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415199: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041519a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41519fu); f_00624510();
    /* 0041519f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004151a2:; BB(0x004151a2);
    /* 004151a2: jmp 0x415974 */ goto L_00415974;
L_004151a7:; BB(0x004151a7);
    /* 004151a7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004151ab: je 0x4151dc */ if (fZ) goto L_004151dc;
L_004151ad:; BB(0x004151ad);
    /* 004151ad: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004151b1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004151b4: jg 0x4151c9 */ if ((!fZ&&fS==fO)) goto L_004151c9;
L_004151b6:; BB(0x004151b6);
    /* 004151b6: push 0x64de34 */ { u32 v = 0x64de34u; r_esp -= 4; W32(r_esp, v); }
    /* 004151bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004151be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004151bf: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4151c4u); f_00624510();
    /* 004151c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004151c7: jmp 0x4151da */ goto L_004151da;
L_004151c9:; BB(0x004151c9);
    /* 004151c9: push 0x64deec */ { u32 v = 0x64deecu; r_esp -= 4; W32(r_esp, v); }
    /* 004151ce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004151d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004151d2: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4151d7u); f_00624510();
    /* 004151d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004151da:; BB(0x004151da);
    /* 004151da: jmp 0x4151ed */ goto L_004151ed;
L_004151dc:; BB(0x004151dc);
    /* 004151dc: push 0x64dfac */ { u32 v = 0x64dfacu; r_esp -= 4; W32(r_esp, v); }
    /* 004151e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004151e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004151e5: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4151eau); f_00624510();
    /* 004151ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004151ed:; BB(0x004151ed);
    /* 004151ed: jmp 0x415974 */ goto L_00415974;
L_004151f2:; BB(0x004151f2);
    /* 004151f2: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004151f6: je 0x41520e */ if (fZ) goto L_0041520e;
L_004151f8:; BB(0x004151f8);
    /* 004151f8: push 0x64dfe8 */ { u32 v = 0x64dfe8u; r_esp -= 4; W32(r_esp, v); }
    /* 004151fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415200: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415201: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415206u); f_00624510();
    /* 00415206: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415209: jmp 0x4152dc */ goto L_004152dc;
L_0041520e:; BB(0x0041520e);
    /* 0041520e: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415212: je 0x415267 */ if (fZ) goto L_00415267;
L_00415214:; BB(0x00415214);
    /* 00415214: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415218: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041521b: jg 0x415230 */ if ((!fZ&&fS==fO)) goto L_00415230;
L_0041521d:; BB(0x0041521d);
    /* 0041521d: push 0x64e058 */ { u32 v = 0x64e058u; r_esp -= 4; W32(r_esp, v); }
    /* 00415222: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415225: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415226: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41522bu); f_00624510();
    /* 0041522b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041522e: jmp 0x415265 */ goto L_00415265;
L_00415230:; BB(0x00415230);
    /* 00415230: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415234: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415237: jg 0x415254 */ if ((!fZ&&fS==fO)) goto L_00415254;
L_00415239:; BB(0x00415239);
    /* 00415239: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041523d: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00415240: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415241: push 0x64e110 */ { u32 v = 0x64e110u; r_esp -= 4; W32(r_esp, v); }
    /* 00415246: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415249: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041524a: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x41524fu); f_00624050();
    /* 0041524f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415252: jmp 0x415265 */ goto L_00415265;
L_00415254:; BB(0x00415254);
    /* 00415254: push 0x64e204 */ { u32 v = 0x64e204u; r_esp -= 4; W32(r_esp, v); }
    /* 00415259: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041525c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041525d: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415262u); f_00624510();
    /* 00415262: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415265:; BB(0x00415265);
    /* 00415265: jmp 0x4152dc */ goto L_004152dc;
L_00415267:; BB(0x00415267);
    /* 00415267: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041526b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041526e: jg 0x415283 */ if ((!fZ&&fS==fO)) goto L_00415283;
L_00415270:; BB(0x00415270);
    /* 00415270: push 0x64e320 */ { u32 v = 0x64e320u; r_esp -= 4; W32(r_esp, v); }
    /* 00415275: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415279: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41527eu); f_00624510();
    /* 0041527e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415281: jmp 0x4152dc */ goto L_004152dc;
L_00415283:; BB(0x00415283);
    /* 00415283: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415287: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041528a: jg 0x4152a7 */ if ((!fZ&&fS==fO)) goto L_004152a7;
L_0041528c:; BB(0x0041528c);
    /* 0041528c: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415290: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00415293: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415294: push 0x64e4b8 */ { u32 v = 0x64e4b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00415299: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041529c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041529d: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4152a2u); f_00624050();
    /* 004152a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004152a5: jmp 0x4152dc */ goto L_004152dc;
L_004152a7:; BB(0x004152a7);
    /* 004152a7: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004152ab: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004152ae: jg 0x4152cb */ if ((!fZ&&fS==fO)) goto L_004152cb;
L_004152b0:; BB(0x004152b0);
    /* 004152b0: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004152b4: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004152b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004152b8: push 0x64e54c */ { u32 v = 0x64e54cu; r_esp -= 4; W32(r_esp, v); }
    /* 004152bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004152c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004152c1: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4152c6u); f_00624050();
    /* 004152c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004152c9: jmp 0x4152dc */ goto L_004152dc;
L_004152cb:; BB(0x004152cb);
    /* 004152cb: push 0x64e5dc */ { u32 v = 0x64e5dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004152d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004152d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004152d4: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4152d9u); f_00624510();
    /* 004152d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004152dc:; BB(0x004152dc);
    /* 004152dc: jmp 0x415974 */ goto L_00415974;
L_004152e1:; BB(0x004152e1);
    /* 004152e1: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004152e5: je 0x415325 */ if (fZ) goto L_00415325;
L_004152e7:; BB(0x004152e7);
    /* 004152e7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004152eb: je 0x4152f6 */ if (fZ) goto L_004152f6;
L_004152ed:; BB(0x004152ed);
    /* 004152ed: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004152f1: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004152f4: je 0x4152ff */ if (fZ) goto L_004152ff;
L_004152f6:; BB(0x004152f6);
    /* 004152f6: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004152fa: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004152fd: jne 0x415312 */ if (!fZ) goto L_00415312;
L_004152ff:; BB(0x004152ff);
    /* 004152ff: push 0x64e650 */ { u32 v = 0x64e650u; r_esp -= 4; W32(r_esp, v); }
    /* 00415304: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415307: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415308: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41530du); f_00624510();
    /* 0041530d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415310: jmp 0x415323 */ goto L_00415323;
L_00415312:; BB(0x00415312);
    /* 00415312: push 0x64e79c */ { u32 v = 0x64e79cu; r_esp -= 4; W32(r_esp, v); }
    /* 00415317: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041531a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041531b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415320u); f_00624510();
    /* 00415320: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415323:; BB(0x00415323);
    /* 00415323: jmp 0x4153a2 */ goto L_004153a2;
L_00415325:; BB(0x00415325);
    /* 00415325: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415329: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041532c: jg 0x415349 */ if ((!fZ&&fS==fO)) goto L_00415349;
L_0041532e:; BB(0x0041532e);
    /* 0041532e: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415332: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00415335: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415336: push 0x64e7d8 */ { u32 v = 0x64e7d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041533b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041533e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041533f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x415344u); f_00624050();
    /* 00415344: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415347: jmp 0x4153a2 */ goto L_004153a2;
L_00415349:; BB(0x00415349);
    /* 00415349: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041534d: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415350: jg 0x41536d */ if ((!fZ&&fS==fO)) goto L_0041536d;
L_00415352:; BB(0x00415352);
    /* 00415352: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415356: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00415359: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041535a: push 0x64e960 */ { u32 v = 0x64e960u; r_esp -= 4; W32(r_esp, v); }
    /* 0041535f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415362: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415363: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x415368u); f_00624050();
    /* 00415368: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041536b: jmp 0x4153a2 */ goto L_004153a2;
L_0041536d:; BB(0x0041536d);
    /* 0041536d: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415371: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415374: jg 0x415391 */ if ((!fZ&&fS==fO)) goto L_00415391;
L_00415376:; BB(0x00415376);
    /* 00415376: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041537a: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041537d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041537e: push 0x64ea24 */ { u32 v = 0x64ea24u; r_esp -= 4; W32(r_esp, v); }
    /* 00415383: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415386: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415387: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x41538cu); f_00624050();
    /* 0041538c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041538f: jmp 0x4153a2 */ goto L_004153a2;
L_00415391:; BB(0x00415391);
    /* 00415391: push 0x64eae0 */ { u32 v = 0x64eae0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415396: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415399: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041539a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41539fu); f_00624510();
    /* 0041539f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004153a2:; BB(0x004153a2);
    /* 004153a2: jmp 0x415974 */ goto L_00415974;
L_004153a7:; BB(0x004153a7);
    /* 004153a7: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004153ab: je 0x4153ee */ if (fZ) goto L_004153ee;
L_004153ad:; BB(0x004153ad);
    /* 004153ad: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004153b1: je 0x4153bc */ if (fZ) goto L_004153bc;
L_004153b3:; BB(0x004153b3);
    /* 004153b3: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004153b7: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004153ba: je 0x4153c5 */ if (fZ) goto L_004153c5;
L_004153bc:; BB(0x004153bc);
    /* 004153bc: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004153c0: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004153c3: jne 0x4153d8 */ if (!fZ) goto L_004153d8;
L_004153c5:; BB(0x004153c5);
    /* 004153c5: push 0x64eb84 */ { u32 v = 0x64eb84u; r_esp -= 4; W32(r_esp, v); }
    /* 004153ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004153cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004153ce: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4153d3u); f_00624510();
    /* 004153d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004153d6: jmp 0x4153e9 */ goto L_004153e9;
L_004153d8:; BB(0x004153d8);
    /* 004153d8: push 0x64ecd0 */ { u32 v = 0x64ecd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004153dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004153e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004153e1: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4153e6u); f_00624510();
    /* 004153e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004153e9:; BB(0x004153e9);
    /* 004153e9: jmp 0x4154a0 */ goto L_004154a0;
L_004153ee:; BB(0x004153ee);
    /* 004153ee: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004153f2: je 0x415447 */ if (fZ) goto L_00415447;
L_004153f4:; BB(0x004153f4);
    /* 004153f4: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004153f8: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004153fb: jg 0x415410 */ if ((!fZ&&fS==fO)) goto L_00415410;
L_004153fd:; BB(0x004153fd);
    /* 004153fd: push 0x64ed0c */ { u32 v = 0x64ed0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00415402: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415405: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415406: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41540bu); f_00624510();
    /* 0041540b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041540e: jmp 0x415445 */ goto L_00415445;
L_00415410:; BB(0x00415410);
    /* 00415410: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415414: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415417: jg 0x415434 */ if ((!fZ&&fS==fO)) goto L_00415434;
L_00415419:; BB(0x00415419);
    /* 00415419: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041541d: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00415420: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415421: push 0x64edf8 */ { u32 v = 0x64edf8u; r_esp -= 4; W32(r_esp, v); }
    /* 00415426: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415429: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041542a: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x41542fu); f_00624050();
    /* 0041542f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415432: jmp 0x415445 */ goto L_00415445;
L_00415434:; BB(0x00415434);
    /* 00415434: push 0x64ef08 */ { u32 v = 0x64ef08u; r_esp -= 4; W32(r_esp, v); }
    /* 00415439: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041543c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041543d: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415442u); f_00624510();
    /* 00415442: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415445:; BB(0x00415445);
    /* 00415445: jmp 0x4154a0 */ goto L_004154a0;
L_00415447:; BB(0x00415447);
    /* 00415447: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041544b: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041544e: jg 0x41546b */ if ((!fZ&&fS==fO)) goto L_0041546b;
L_00415450:; BB(0x00415450);
    /* 00415450: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415454: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415458: push 0x64f00c */ { u32 v = 0x64f00cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041545d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415460: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415461: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x415466u); f_00624050();
    /* 00415466: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415469: jmp 0x4154a0 */ goto L_004154a0;
L_0041546b:; BB(0x0041546b);
    /* 0041546b: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041546f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415472: jg 0x41548f */ if ((!fZ&&fS==fO)) goto L_0041548f;
L_00415474:; BB(0x00415474);
    /* 00415474: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415478: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041547b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041547c: push 0x64f0cc */ { u32 v = 0x64f0ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00415481: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415484: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415485: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x41548au); f_00624050();
    /* 0041548a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041548d: jmp 0x4154a0 */ goto L_004154a0;
L_0041548f:; BB(0x0041548f);
    /* 0041548f: push 0x64f188 */ { u32 v = 0x64f188u; r_esp -= 4; W32(r_esp, v); }
    /* 00415494: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415497: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415498: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41549du); f_00624510();
    /* 0041549d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004154a0:; BB(0x004154a0);
    /* 004154a0: jmp 0x415974 */ goto L_00415974;
L_004154a5:; BB(0x004154a5);
    /* 004154a5: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004154a9: je 0x415528 */ if (fZ) goto L_00415528;
L_004154ab:; BB(0x004154ab);
    /* 004154ab: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004154af: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004154b2: jg 0x4154c7 */ if ((!fZ&&fS==fO)) goto L_004154c7;
L_004154b4:; BB(0x004154b4);
    /* 004154b4: push 0x64f228 */ { u32 v = 0x64f228u; r_esp -= 4; W32(r_esp, v); }
    /* 004154b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004154bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004154bd: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4154c2u); f_00624510();
    /* 004154c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004154c5: jmp 0x415526 */ goto L_00415526;
L_004154c7:; BB(0x004154c7);
    /* 004154c7: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004154cb: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004154ce: jg 0x4154fc */ if ((!fZ&&fS==fO)) goto L_004154fc;
L_004154d0:; BB(0x004154d0);
    /* 004154d0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004154d4: je 0x4154e9 */ if (fZ) goto L_004154e9;
L_004154d6:; BB(0x004154d6);
    /* 004154d6: push 0x64f264 */ { u32 v = 0x64f264u; r_esp -= 4; W32(r_esp, v); }
    /* 004154db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004154de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004154df: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4154e4u); f_00624510();
    /* 004154e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004154e7: jmp 0x4154fa */ goto L_004154fa;
L_004154e9:; BB(0x004154e9);
    /* 004154e9: push 0x64f3b0 */ { u32 v = 0x64f3b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004154ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004154f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004154f2: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4154f7u); f_00624510();
    /* 004154f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004154fa:; BB(0x004154fa);
    /* 004154fa: jmp 0x415526 */ goto L_00415526;
L_004154fc:; BB(0x004154fc);
    /* 004154fc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415500: je 0x415515 */ if (fZ) goto L_00415515;
L_00415502:; BB(0x00415502);
    /* 00415502: push 0x64f3ec */ { u32 v = 0x64f3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00415507: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041550a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041550b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415510u); f_00624510();
    /* 00415510: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415513: jmp 0x415526 */ goto L_00415526;
L_00415515:; BB(0x00415515);
    /* 00415515: push 0x64f470 */ { u32 v = 0x64f470u; r_esp -= 4; W32(r_esp, v); }
    /* 0041551a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041551d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041551e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415523u); f_00624510();
    /* 00415523: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415526:; BB(0x00415526);
    /* 00415526: jmp 0x4155a3 */ goto L_004155a3;
L_00415528:; BB(0x00415528);
    /* 00415528: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041552c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041552f: jg 0x41554c */ if ((!fZ&&fS==fO)) goto L_0041554c;
L_00415531:; BB(0x00415531);
    /* 00415531: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415535: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00415538: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415539: push 0x64f4ac */ { u32 v = 0x64f4acu; r_esp -= 4; W32(r_esp, v); }
    /* 0041553e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415541: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415542: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x415547u); f_00624050();
    /* 00415547: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041554a: jmp 0x4155a3 */ goto L_004155a3;
L_0041554c:; BB(0x0041554c);
    /* 0041554c: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415550: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415553: jne 0x41556e */ if (!fZ) goto L_0041556e;
L_00415555:; BB(0x00415555);
    /* 00415555: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415559: je 0x41556e */ if (fZ) goto L_0041556e;
L_0041555b:; BB(0x0041555b);
    /* 0041555b: push 0x64f56c */ { u32 v = 0x64f56cu; r_esp -= 4; W32(r_esp, v); }
    /* 00415560: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415563: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415564: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415569u); f_00624510();
    /* 00415569: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041556c: jmp 0x4155a3 */ goto L_004155a3;
L_0041556e:; BB(0x0041556e);
    /* 0041556e: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415572: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415575: jg 0x415592 */ if ((!fZ&&fS==fO)) goto L_00415592;
L_00415577:; BB(0x00415577);
    /* 00415577: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041557b: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041557e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041557f: push 0x64f5e4 */ { u32 v = 0x64f5e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00415584: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415587: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415588: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x41558du); f_00624050();
    /* 0041558d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415590: jmp 0x4155a3 */ goto L_004155a3;
L_00415592:; BB(0x00415592);
    /* 00415592: push 0x64f6a0 */ { u32 v = 0x64f6a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415597: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041559a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041559b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4155a0u); f_00624510();
    /* 004155a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004155a3:; BB(0x004155a3);
    /* 004155a3: jmp 0x415974 */ goto L_00415974;
L_004155a8:; BB(0x004155a8);
    /* 004155a8: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004155ac: je 0x415632 */ if (fZ) goto L_00415632;
L_004155b2:; BB(0x004155b2);
    /* 004155b2: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004155b6: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004155b9: jg 0x4155ce */ if ((!fZ&&fS==fO)) goto L_004155ce;
L_004155bb:; BB(0x004155bb);
    /* 004155bb: push 0x64f740 */ { u32 v = 0x64f740u; r_esp -= 4; W32(r_esp, v); }
    /* 004155c0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004155c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004155c4: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4155c9u); f_00624510();
    /* 004155c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004155cc: jmp 0x41562d */ goto L_0041562d;
L_004155ce:; BB(0x004155ce);
    /* 004155ce: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004155d2: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004155d5: jg 0x415603 */ if ((!fZ&&fS==fO)) goto L_00415603;
L_004155d7:; BB(0x004155d7);
    /* 004155d7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004155db: je 0x4155f0 */ if (fZ) goto L_004155f0;
L_004155dd:; BB(0x004155dd);
    /* 004155dd: push 0x64f77c */ { u32 v = 0x64f77cu; r_esp -= 4; W32(r_esp, v); }
    /* 004155e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004155e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004155e6: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4155ebu); f_00624510();
    /* 004155eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004155ee: jmp 0x415601 */ goto L_00415601;
L_004155f0:; BB(0x004155f0);
    /* 004155f0: push 0x64f8c8 */ { u32 v = 0x64f8c8u; r_esp -= 4; W32(r_esp, v); }
    /* 004155f5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004155f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004155f9: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4155feu); f_00624510();
    /* 004155fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415601:; BB(0x00415601);
    /* 00415601: jmp 0x41562d */ goto L_0041562d;
L_00415603:; BB(0x00415603);
    /* 00415603: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415607: je 0x41561c */ if (fZ) goto L_0041561c;
L_00415609:; BB(0x00415609);
    /* 00415609: push 0x64f904 */ { u32 v = 0x64f904u; r_esp -= 4; W32(r_esp, v); }
    /* 0041560e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415611: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415612: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415617u); f_00624510();
    /* 00415617: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041561a: jmp 0x41562d */ goto L_0041562d;
L_0041561c:; BB(0x0041561c);
    /* 0041561c: push 0x64f988 */ { u32 v = 0x64f988u; r_esp -= 4; W32(r_esp, v); }
    /* 00415621: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415624: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415625: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41562au); f_00624510();
    /* 0041562a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041562d:; BB(0x0041562d);
    /* 0041562d: jmp 0x4156ed */ goto L_004156ed;
L_00415632:; BB(0x00415632);
    /* 00415632: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415636: je 0x41564e */ if (fZ) goto L_0041564e;
L_00415638:; BB(0x00415638);
    /* 00415638: push 0x64f9c4 */ { u32 v = 0x64f9c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041563d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415640: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415641: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415646u); f_00624510();
    /* 00415646: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415649: jmp 0x4156ed */ goto L_004156ed;
L_0041564e:; BB(0x0041564e);
    /* 0041564e: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415652: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415655: jg 0x415672 */ if ((!fZ&&fS==fO)) goto L_00415672;
L_00415657:; BB(0x00415657);
    /* 00415657: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041565b: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041565e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041565f: push 0x64fa60 */ { u32 v = 0x64fa60u; r_esp -= 4; W32(r_esp, v); }
    /* 00415664: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415667: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415668: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x41566du); f_00624050();
    /* 0041566d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415670: jmp 0x4156ed */ goto L_004156ed;
L_00415672:; BB(0x00415672);
    /* 00415672: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415676: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415679: jl 0x415694 */ if ((fS!=fO)) goto L_00415694;
L_0041567b:; BB(0x0041567b);
    /* 0041567b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041567f: je 0x415694 */ if (fZ) goto L_00415694;
L_00415681:; BB(0x00415681);
    /* 00415681: push 0x64fb20 */ { u32 v = 0x64fb20u; r_esp -= 4; W32(r_esp, v); }
    /* 00415686: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415689: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041568a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41568fu); f_00624510();
    /* 0041568f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415692: jmp 0x4156ed */ goto L_004156ed;
L_00415694:; BB(0x00415694);
    /* 00415694: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415698: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041569b: jge 0x4156b8 */ if ((fS==fO)) goto L_004156b8;
L_0041569d:; BB(0x0041569d);
    /* 0041569d: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004156a1: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004156a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004156a5: push 0x64fb94 */ { u32 v = 0x64fb94u; r_esp -= 4; W32(r_esp, v); }
    /* 004156aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004156ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004156ae: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4156b3u); f_00624050();
    /* 004156b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004156b6: jmp 0x4156ed */ goto L_004156ed;
L_004156b8:; BB(0x004156b8);
    /* 004156b8: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004156bc: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004156bf: jne 0x4156dc */ if (!fZ) goto L_004156dc;
L_004156c1:; BB(0x004156c1);
    /* 004156c1: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004156c5: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004156c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004156c9: push 0x64fc50 */ { u32 v = 0x64fc50u; r_esp -= 4; W32(r_esp, v); }
    /* 004156ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004156d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004156d2: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4156d7u); f_00624050();
    /* 004156d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004156da: jmp 0x4156ed */ goto L_004156ed;
L_004156dc:; BB(0x004156dc);
    /* 004156dc: push 0x64fdc4 */ { u32 v = 0x64fdc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004156e1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004156e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004156e5: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4156eau); f_00624510();
    /* 004156ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004156ed:; BB(0x004156ed);
    /* 004156ed: jmp 0x415974 */ goto L_00415974;
L_004156f2:; BB(0x004156f2);
    /* 004156f2: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004156f6: je 0x41575c */ if (fZ) goto L_0041575c;
L_004156f8:; BB(0x004156f8);
    /* 004156f8: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004156fc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004156ff: jne 0x415714 */ if (!fZ) goto L_00415714;
L_00415701:; BB(0x00415701);
    /* 00415701: push 0x64fe64 */ { u32 v = 0x64fe64u; r_esp -= 4; W32(r_esp, v); }
    /* 00415706: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415709: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041570a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41570fu); f_00624510();
    /* 0041570f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415712: jmp 0x41575a */ goto L_0041575a;
L_00415714:; BB(0x00415714);
    /* 00415714: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415718: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041571b: jg 0x415749 */ if ((!fZ&&fS==fO)) goto L_00415749;
L_0041571d:; BB(0x0041571d);
    /* 0041571d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415721: je 0x415736 */ if (fZ) goto L_00415736;
L_00415723:; BB(0x00415723);
    /* 00415723: push 0x64feac */ { u32 v = 0x64feacu; r_esp -= 4; W32(r_esp, v); }
    /* 00415728: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041572b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041572c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415731u); f_00624510();
    /* 00415731: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415734: jmp 0x415747 */ goto L_00415747;
L_00415736:; BB(0x00415736);
    /* 00415736: push 0x64fff0 */ { u32 v = 0x64fff0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041573b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041573e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041573f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415744u); f_00624510();
    /* 00415744: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415747:; BB(0x00415747);
    /* 00415747: jmp 0x41575a */ goto L_0041575a;
L_00415749:; BB(0x00415749);
    /* 00415749: push 0x650038 */ { u32 v = 0x650038u; r_esp -= 4; W32(r_esp, v); }
    /* 0041574e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415751: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415752: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415757u); f_00624510();
    /* 00415757: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041575a:; BB(0x0041575a);
    /* 0041575a: jmp 0x41576d */ goto L_0041576d;
L_0041575c:; BB(0x0041575c);
    /* 0041575c: push 0x6500ac */ { u32 v = 0x6500acu; r_esp -= 4; W32(r_esp, v); }
    /* 00415761: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415765: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41576au); f_00624510();
    /* 0041576a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041576d:; BB(0x0041576d);
    /* 0041576d: jmp 0x415974 */ goto L_00415974;
L_00415772:; BB(0x00415772);
    /* 00415772: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415776: je 0x41584f */ if (fZ) goto L_0041584f;
L_0041577c:; BB(0x0041577c);
    /* 0041577c: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415780: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415783: jne 0x41579b */ if (!fZ) goto L_0041579b;
L_00415785:; BB(0x00415785);
    /* 00415785: push 0x6500f0 */ { u32 v = 0x6500f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041578a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041578d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041578e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415793u); f_00624510();
    /* 00415793: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415796: jmp 0x41584a */ goto L_0041584a;
L_0041579b:; BB(0x0041579b);
    /* 0041579b: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041579f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004157a2: jg 0x4157d0 */ if ((!fZ&&fS==fO)) goto L_004157d0;
L_004157a4:; BB(0x004157a4);
    /* 004157a4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004157a8: je 0x4157bd */ if (fZ) goto L_004157bd;
L_004157aa:; BB(0x004157aa);
    /* 004157aa: push 0x650150 */ { u32 v = 0x650150u; r_esp -= 4; W32(r_esp, v); }
    /* 004157af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004157b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004157b3: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4157b8u); f_00624510();
    /* 004157b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004157bb: jmp 0x4157ce */ goto L_004157ce;
L_004157bd:; BB(0x004157bd);
    /* 004157bd: push 0x650298 */ { u32 v = 0x650298u; r_esp -= 4; W32(r_esp, v); }
    /* 004157c2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004157c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004157c6: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4157cbu); f_00624510();
    /* 004157cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004157ce:; BB(0x004157ce);
    /* 004157ce: jmp 0x41584a */ goto L_0041584a;
L_004157d0:; BB(0x004157d0);
    /* 004157d0: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004157d4: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004157d7: jg 0x415815 */ if ((!fZ&&fS==fO)) goto L_00415815;
L_004157d9:; BB(0x004157d9);
    /* 004157d9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004157dd: je 0x4157fa */ if (fZ) goto L_004157fa;
L_004157df:; BB(0x004157df);
    /* 004157df: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004157e3: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004157e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004157e7: push 0x6502f4 */ { u32 v = 0x6502f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004157ec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004157ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004157f0: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4157f5u); f_00624050();
    /* 004157f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004157f8: jmp 0x415813 */ goto L_00415813;
L_004157fa:; BB(0x004157fa);
    /* 004157fa: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004157fe: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415801: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415802: push 0x650394 */ { u32 v = 0x650394u; r_esp -= 4; W32(r_esp, v); }
    /* 00415807: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041580a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041580b: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x415810u); f_00624050();
    /* 00415810: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415813:; BB(0x00415813);
    /* 00415813: jmp 0x41584a */ goto L_0041584a;
L_00415815:; BB(0x00415815);
    /* 00415815: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415819: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041581c: jg 0x415839 */ if ((!fZ&&fS==fO)) goto L_00415839;
L_0041581e:; BB(0x0041581e);
    /* 0041581e: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415822: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415825: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415826: push 0x650408 */ { u32 v = 0x650408u; r_esp -= 4; W32(r_esp, v); }
    /* 0041582b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041582e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041582f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x415834u); f_00624050();
    /* 00415834: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415837: jmp 0x41584a */ goto L_0041584a;
L_00415839:; BB(0x00415839);
    /* 00415839: push 0x65049c */ { u32 v = 0x65049cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041583e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415842: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415847u); f_00624510();
    /* 00415847: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041584a:; BB(0x0041584a);
    /* 0041584a: jmp 0x4158ed */ goto L_004158ed;
L_0041584f:; BB(0x0041584f);
    /* 0041584f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415853: je 0x4158dc */ if (fZ) goto L_004158dc;
L_00415859:; BB(0x00415859);
    /* 00415859: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041585d: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415860: jg 0x415875 */ if ((!fZ&&fS==fO)) goto L_00415875;
L_00415862:; BB(0x00415862);
    /* 00415862: push 0x650564 */ { u32 v = 0x650564u; r_esp -= 4; W32(r_esp, v); }
    /* 00415867: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041586a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041586b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415870u); f_00624510();
    /* 00415870: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415873: jmp 0x4158da */ goto L_004158da;
L_00415875:; BB(0x00415875);
    /* 00415875: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415879: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041587c: jne 0x415891 */ if (!fZ) goto L_00415891;
L_0041587e:; BB(0x0041587e);
    /* 0041587e: push 0x650674 */ { u32 v = 0x650674u; r_esp -= 4; W32(r_esp, v); }
    /* 00415883: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415886: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415887: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41588cu); f_00624510();
    /* 0041588c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041588f: jmp 0x4158da */ goto L_004158da;
L_00415891:; BB(0x00415891);
    /* 00415891: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415895: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415898: jne 0x4158ad */ if (!fZ) goto L_004158ad;
L_0041589a:; BB(0x0041589a);
    /* 0041589a: push 0x6506f8 */ { u32 v = 0x6506f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041589f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004158a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004158a3: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4158a8u); f_00624510();
    /* 004158a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004158ab: jmp 0x4158da */ goto L_004158da;
L_004158ad:; BB(0x004158ad);
    /* 004158ad: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004158b1: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004158b4: jne 0x4158c9 */ if (!fZ) goto L_004158c9;
L_004158b6:; BB(0x004158b6);
    /* 004158b6: push 0x6507a0 */ { u32 v = 0x6507a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004158bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004158be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004158bf: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4158c4u); f_00624510();
    /* 004158c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004158c7: jmp 0x4158da */ goto L_004158da;
L_004158c9:; BB(0x004158c9);
    /* 004158c9: push 0x650848 */ { u32 v = 0x650848u; r_esp -= 4; W32(r_esp, v); }
    /* 004158ce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004158d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004158d2: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4158d7u); f_00624510();
    /* 004158d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004158da:; BB(0x004158da);
    /* 004158da: jmp 0x4158ed */ goto L_004158ed;
L_004158dc:; BB(0x004158dc);
    /* 004158dc: push 0x650928 */ { u32 v = 0x650928u; r_esp -= 4; W32(r_esp, v); }
    /* 004158e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004158e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004158e5: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4158eau); f_00624510();
    /* 004158ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004158ed:; BB(0x004158ed);
    /* 004158ed: jmp 0x415974 */ goto L_00415974;
L_004158f2:; BB(0x004158f2);
    /* 004158f2: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004158f6: je 0x41590b */ if (fZ) goto L_0041590b;
L_004158f8:; BB(0x004158f8);
    /* 004158f8: push 0x65096c */ { u32 v = 0x65096cu; r_esp -= 4; W32(r_esp, v); }
    /* 004158fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415900: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415901: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415906u); f_00624510();
    /* 00415906: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415909: jmp 0x41591c */ goto L_0041591c;
L_0041590b:; BB(0x0041590b);
    /* 0041590b: push 0x6509a8 */ { u32 v = 0x6509a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00415910: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415913: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415914: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415919u); f_00624510();
    /* 00415919: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041591c:; BB(0x0041591c);
    /* 0041591c: jmp 0x415974 */ goto L_00415974;
L_0041591e:; BB(0x0041591e);
    /* 0041591e: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415922: je 0x415937 */ if (fZ) goto L_00415937;
L_00415924:; BB(0x00415924);
    /* 00415924: push 0x6509ec */ { u32 v = 0x6509ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00415929: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041592c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041592d: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415932u); f_00624510();
    /* 00415932: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415935: jmp 0x415961 */ goto L_00415961;
L_00415937:; BB(0x00415937);
    /* 00415937: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041593b: je 0x415950 */ if (fZ) goto L_00415950;
L_0041593d:; BB(0x0041593d);
    /* 0041593d: push 0x650a28 */ { u32 v = 0x650a28u; r_esp -= 4; W32(r_esp, v); }
    /* 00415942: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415945: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415946: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41594bu); f_00624510();
    /* 0041594b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041594e: jmp 0x415961 */ goto L_00415961;
L_00415950:; BB(0x00415950);
    /* 00415950: push 0x650ac8 */ { u32 v = 0x650ac8u; r_esp -= 4; W32(r_esp, v); }
    /* 00415955: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415958: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415959: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x41595eu); f_00624510();
    /* 0041595e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415961:; BB(0x00415961);
    /* 00415961: jmp 0x415974 */ goto L_00415974;
L_00415963:; BB(0x00415963);
    /* 00415963: push 0x650b0c */ { u32 v = 0x650b0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00415968: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041596b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041596c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415971u); f_00624510();
    /* 00415971: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00415974:; BB(0x00415974);
    /* 00415974: mov esp, ebp */ r_esp = r_ebp;
    /* 00415976: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415977: ret 0x10 */ FN_RET(0x00414f5a); r_esp += 20; return;
}

void f_004159c2(void) /* FUN_004159c2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004159c2);
    /* 004159c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004159c3: mov ebp, esp */ r_ebp = r_esp;
    /* 004159c5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004159c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004159c9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004159cc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004159cf: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4159d4u); f_0040f81e();
    /* 004159d4: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 004159da: call 0x40c107 */ r_esp -= 4; W32(r_esp, 0x4159dfu); f_0040c107();
    /* 004159df: mov esi, eax */ r_esi = r_eax;
    /* 004159e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004159e4: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4159e9u); f_0040f81e();
    /* 004159e9: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 004159ef: call 0x40bff5 */ r_esp -= 4; W32(r_esp, 0x4159f4u); f_0040bff5();
    /* 004159f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004159f6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004159f8: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004159fb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004159fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415a01: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x415a06u); f_0040f81e();
    /* 00415a06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415a07: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415a0a: call 0x41276f */ r_esp -= 4; W32(r_esp, 0x415a0fu); f_0041276f();
    /* 00415a0f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00415a12: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00415a16: ja 0x415ae6 */ if ((!fC&&!fZ)) goto L_00415ae6;
L_00415a1c:; BB(0x00415a1c);
    /* 00415a1c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00415a1f: jmp dword ptr [edx*4 + 0x415aed] */ { u32 t = R32((u32)(r_edx*4+0x415aedu)); switch (t) { case 0x415a26u: goto L_00415a26; case 0x415a56u: goto L_00415a56; case 0x415a83u: goto L_00415a83; case 0x415ab0u: goto L_00415ab0; case 0x415accu: goto L_00415acc; default: UNSUP(0x00415a1f, "jump table entry is not a known target"); } }
L_00415a26:; BB(0x00415a26);
    /* 00415a26: push 0x650b60 */ { u32 v = 0x650b60u; r_esp -= 4; W32(r_esp, v); }
    /* 00415a2b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415a2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415a2f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415a34u); f_00624510();
    /* 00415a34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415a37: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415a3b: je 0x415a48 */ if (fZ) goto L_00415a48;
L_00415a3d:; BB(0x00415a3d);
    /* 00415a3d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00415a40: mov dword ptr [ecx], 0x13b5 */ W32((u32)(r_ecx), 0x13b5u);
    /* 00415a46: jmp 0x415a51 */ goto L_00415a51;
L_00415a48:; BB(0x00415a48);
    /* 00415a48: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00415a4b: mov dword ptr [edx], 0x13b4 */ W32((u32)(r_edx), 0x13b4u);
L_00415a51:; BB(0x00415a51);
    /* 00415a51: jmp 0x415ae6 */ goto L_00415ae6;
L_00415a56:; BB(0x00415a56);
    /* 00415a56: push 0x650b68 */ { u32 v = 0x650b68u; r_esp -= 4; W32(r_esp, v); }
    /* 00415a5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415a5f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415a64u); f_00624510();
    /* 00415a64: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415a67: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415a6b: je 0x415a78 */ if (fZ) goto L_00415a78;
L_00415a6d:; BB(0x00415a6d);
    /* 00415a6d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00415a70: mov dword ptr [ecx], 0x13b5 */ W32((u32)(r_ecx), 0x13b5u);
    /* 00415a76: jmp 0x415a81 */ goto L_00415a81;
L_00415a78:; BB(0x00415a78);
    /* 00415a78: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00415a7b: mov dword ptr [edx], 0x13b4 */ W32((u32)(r_edx), 0x13b4u);
L_00415a81:; BB(0x00415a81);
    /* 00415a81: jmp 0x415ae6 */ goto L_00415ae6;
L_00415a83:; BB(0x00415a83);
    /* 00415a83: push 0x650b6c */ { u32 v = 0x650b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00415a88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415a8c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415a91u); f_00624510();
    /* 00415a91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415a94: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415a98: je 0x415aa5 */ if (fZ) goto L_00415aa5;
L_00415a9a:; BB(0x00415a9a);
    /* 00415a9a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00415a9d: mov dword ptr [ecx], 0x13b3 */ W32((u32)(r_ecx), 0x13b3u);
    /* 00415aa3: jmp 0x415aae */ goto L_00415aae;
L_00415aa5:; BB(0x00415aa5);
    /* 00415aa5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00415aa8: mov dword ptr [edx], 0x13b8 */ W32((u32)(r_edx), 0x13b8u);
L_00415aae:; BB(0x00415aae);
    /* 00415aae: jmp 0x415ae6 */ goto L_00415ae6;
L_00415ab0:; BB(0x00415ab0);
    /* 00415ab0: push 0x650b78 */ { u32 v = 0x650b78u; r_esp -= 4; W32(r_esp, v); }
    /* 00415ab5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415ab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415ab9: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415abeu); f_00624510();
    /* 00415abe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415ac1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00415ac4: mov dword ptr [ecx], 0x13b6 */ W32((u32)(r_ecx), 0x13b6u);
    /* 00415aca: jmp 0x415ae6 */ goto L_00415ae6;
L_00415acc:; BB(0x00415acc);
    /* 00415acc: push 0x650b80 */ { u32 v = 0x650b80u; r_esp -= 4; W32(r_esp, v); }
    /* 00415ad1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415ad4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415ad5: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x415adau); f_00624510();
    /* 00415ada: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415add: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00415ae0: mov dword ptr [eax], 0x13b7 */ W32((u32)(r_eax), 0x13b7u);
L_00415ae6:; BB(0x00415ae6);
    /* 00415ae6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00415ae7: mov esp, ebp */ r_esp = r_ebp;
    /* 00415ae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415aea: ret 8 */ FN_RET(0x004159c2); r_esp += 12; return;
}

void f_00415b01(void) /* FUN_00415b01 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415b01);
    /* 00415b01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415b02: mov ebp, esp */ r_ebp = r_esp;
    /* 00415b04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415b07: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00415b0a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00415b0d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00415b10: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00415b13: sub ecx, 0x13b3 */ {  u32 a = r_ecx; u32 b = 0x13b3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00415b19: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00415b1c: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00415b20: ja 0x415cb5 */ if ((!fC&&!fZ)) goto L_00415cb5;
L_00415b26:; BB(0x00415b26);
    /* 00415b26: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00415b29: jmp dword ptr [edx*4 + 0x415ceb] */ { u32 t = R32((u32)(r_edx*4+0x415cebu)); switch (t) { case 0x415b77u: goto L_00415b77; case 0x415c73u: goto L_00415c73; case 0x415c40u: goto L_00415c40; case 0x415c16u: goto L_00415c16; case 0x415b30u: goto L_00415b30; case 0x415bbeu: goto L_00415bbe; default: UNSUP(0x00415b29, "jump table entry is not a known target"); } }
L_00415b30:; BB(0x00415b30);
    /* 00415b30: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415b34: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415b37: jl 0x415b41 */ if ((fS!=fO)) goto L_00415b41;
L_00415b39:; BB(0x00415b39);
    /* 00415b39: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00415b3f: jmp 0x415b72 */ goto L_00415b72;
L_00415b41:; BB(0x00415b41);
    /* 00415b41: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415b45: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415b48: jne 0x415b52 */ if (!fZ) goto L_00415b52;
L_00415b4a:; BB(0x00415b4a);
    /* 00415b4a: mov word ptr [ebp - 8], 1 */ W16((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00415b50: jmp 0x415b72 */ goto L_00415b72;
L_00415b52:; BB(0x00415b52);
    /* 00415b52: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415b56: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415b59: jne 0x415b63 */ if (!fZ) goto L_00415b63;
L_00415b5b:; BB(0x00415b5b);
    /* 00415b5b: mov word ptr [ebp - 8], 2 */ W16((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00415b61: jmp 0x415b72 */ goto L_00415b72;
L_00415b63:; BB(0x00415b63);
    /* 00415b63: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415b67: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415b6a: jne 0x415b72 */ if (!fZ) goto L_00415b72;
L_00415b6c:; BB(0x00415b6c);
    /* 00415b6c: mov word ptr [ebp - 8], 3 */ W16((u32)(r_ebp+0xfffffff8u), 0x3u);
L_00415b72:; BB(0x00415b72);
    /* 00415b72: jmp 0x415cb5 */ goto L_00415cb5;
L_00415b77:; BB(0x00415b77);
    /* 00415b77: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415b7b: cmp ecx, 0x13 */ {  u32 a = r_ecx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415b7e: jl 0x415b88 */ if ((fS!=fO)) goto L_00415b88;
L_00415b80:; BB(0x00415b80);
    /* 00415b80: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00415b86: jmp 0x415bb9 */ goto L_00415bb9;
L_00415b88:; BB(0x00415b88);
    /* 00415b88: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415b8c: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415b8f: jl 0x415b99 */ if ((fS!=fO)) goto L_00415b99;
L_00415b91:; BB(0x00415b91);
    /* 00415b91: mov word ptr [ebp - 8], 1 */ W16((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00415b97: jmp 0x415bb9 */ goto L_00415bb9;
L_00415b99:; BB(0x00415b99);
    /* 00415b99: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415b9d: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415ba0: jl 0x415baa */ if ((fS!=fO)) goto L_00415baa;
L_00415ba2:; BB(0x00415ba2);
    /* 00415ba2: mov word ptr [ebp - 8], 2 */ W16((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00415ba8: jmp 0x415bb9 */ goto L_00415bb9;
L_00415baa:; BB(0x00415baa);
    /* 00415baa: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415bae: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415bb1: jl 0x415bb9 */ if ((fS!=fO)) goto L_00415bb9;
L_00415bb3:; BB(0x00415bb3);
    /* 00415bb3: mov word ptr [ebp - 8], 3 */ W16((u32)(r_ebp+0xfffffff8u), 0x3u);
L_00415bb9:; BB(0x00415bb9);
    /* 00415bb9: jmp 0x415cb5 */ goto L_00415cb5;
L_00415bbe:; BB(0x00415bbe);
    /* 00415bbe: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415bc2: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415bc5: jne 0x415bcf */ if (!fZ) goto L_00415bcf;
L_00415bc7:; BB(0x00415bc7);
    /* 00415bc7: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00415bcd: jmp 0x415c11 */ goto L_00415c11;
L_00415bcf:; BB(0x00415bcf);
    /* 00415bcf: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415bd3: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415bd6: jne 0x415be0 */ if (!fZ) goto L_00415be0;
L_00415bd8:; BB(0x00415bd8);
    /* 00415bd8: mov word ptr [ebp - 8], 1 */ W16((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00415bde: jmp 0x415c11 */ goto L_00415c11;
L_00415be0:; BB(0x00415be0);
    /* 00415be0: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415be4: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415be7: jne 0x415bf1 */ if (!fZ) goto L_00415bf1;
L_00415be9:; BB(0x00415be9);
    /* 00415be9: mov word ptr [ebp - 8], 2 */ W16((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00415bef: jmp 0x415c11 */ goto L_00415c11;
L_00415bf1:; BB(0x00415bf1);
    /* 00415bf1: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415bf5: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415bf8: jne 0x415c02 */ if (!fZ) goto L_00415c02;
L_00415bfa:; BB(0x00415bfa);
    /* 00415bfa: mov word ptr [ebp - 8], 3 */ W16((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00415c00: jmp 0x415c11 */ goto L_00415c11;
L_00415c02:; BB(0x00415c02);
    /* 00415c02: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415c06: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415c09: jne 0x415c11 */ if (!fZ) goto L_00415c11;
L_00415c0b:; BB(0x00415c0b);
    /* 00415c0b: mov word ptr [ebp - 8], 4 */ W16((u32)(r_ebp+0xfffffff8u), 0x4u);
L_00415c11:; BB(0x00415c11);
    /* 00415c11: jmp 0x415cb5 */ goto L_00415cb5;
L_00415c16:; BB(0x00415c16);
    /* 00415c16: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415c1a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415c1d: jne 0x415c27 */ if (!fZ) goto L_00415c27;
L_00415c1f:; BB(0x00415c1f);
    /* 00415c1f: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00415c25: jmp 0x415c3e */ goto L_00415c3e;
L_00415c27:; BB(0x00415c27);
    /* 00415c27: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415c2b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00415c2c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00415c2e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00415c30: mov edx, 0xa */ r_edx = 0xau;
    /* 00415c35: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00415c37: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00415c3a: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_00415c3e:; BB(0x00415c3e);
    /* 00415c3e: jmp 0x415cb5 */ goto L_00415cb5;
L_00415c40:; BB(0x00415c40);
    /* 00415c40: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415c44: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415c47: jl 0x415c51 */ if ((fS!=fO)) goto L_00415c51;
L_00415c49:; BB(0x00415c49);
    /* 00415c49: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00415c4f: jmp 0x415c71 */ goto L_00415c71;
L_00415c51:; BB(0x00415c51);
    /* 00415c51: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415c55: cmp ecx, 0x12 */ {  u32 a = r_ecx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415c58: jne 0x415c62 */ if (!fZ) goto L_00415c62;
L_00415c5a:; BB(0x00415c5a);
    /* 00415c5a: mov word ptr [ebp - 8], 1 */ W16((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00415c60: jmp 0x415c71 */ goto L_00415c71;
L_00415c62:; BB(0x00415c62);
    /* 00415c62: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415c66: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415c69: jl 0x415c71 */ if ((fS!=fO)) goto L_00415c71;
L_00415c6b:; BB(0x00415c6b);
    /* 00415c6b: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00415c71:; BB(0x00415c71);
    /* 00415c71: jmp 0x415cb5 */ goto L_00415cb5;
L_00415c73:; BB(0x00415c73);
    /* 00415c73: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415c77: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415c7a: jl 0x415c84 */ if ((fS!=fO)) goto L_00415c84;
L_00415c7c:; BB(0x00415c7c);
    /* 00415c7c: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00415c82: jmp 0x415cb5 */ goto L_00415cb5;
L_00415c84:; BB(0x00415c84);
    /* 00415c84: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415c88: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415c8b: jl 0x415c95 */ if ((fS!=fO)) goto L_00415c95;
L_00415c8d:; BB(0x00415c8d);
    /* 00415c8d: mov word ptr [ebp - 8], 1 */ W16((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00415c93: jmp 0x415cb5 */ goto L_00415cb5;
L_00415c95:; BB(0x00415c95);
    /* 00415c95: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415c99: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415c9c: jne 0x415ca6 */ if (!fZ) goto L_00415ca6;
L_00415c9e:; BB(0x00415c9e);
    /* 00415c9e: mov word ptr [ebp - 8], 2 */ W16((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00415ca4: jmp 0x415cb5 */ goto L_00415cb5;
L_00415ca6:; BB(0x00415ca6);
    /* 00415ca6: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00415caa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415cad: jl 0x415cb5 */ if ((fS!=fO)) goto L_00415cb5;
L_00415caf:; BB(0x00415caf);
    /* 00415caf: mov word ptr [ebp - 8], 3 */ W16((u32)(r_ebp+0xfffffff8u), 0x3u);
L_00415cb5:; BB(0x00415cb5);
    /* 00415cb5: movsx ecx, word ptr [ebp + 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 00415cb9: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00415cbc: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 00415cc0: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00415cc4: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00415cc7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00415cca: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00415cce: imul eax, eax, 0x12 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x12u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00415cd1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00415cd4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415cd7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00415cda: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00415cdc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00415cdf: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00415ce2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415ce5: mov esp, ebp */ r_esp = r_ebp;
    /* 00415ce7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415ce8: ret 0x10 */ FN_RET(0x00415b01); r_esp += 20; return;
}

void f_00415d03(void) /* FUN_00415d03 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415d03);
    /* 00415d03: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415d04: mov ebp, esp */ r_ebp = r_esp;
    /* 00415d06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415d07: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415d0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415d0d: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x415d12u); f_005d5d20();
    /* 00415d12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415d15: mov dword ptr [eax], 0x633a54 */ W32((u32)(r_eax), 0x633a54u);
    /* 00415d1b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415d1e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415d21: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 00415d27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415d2a: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00415d34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00415d36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415d39: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x415d3eu); f_005ea514();
    /* 00415d3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415d41: mov esp, ebp */ r_esp = r_ebp;
    /* 00415d43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415d44: ret 4 */ FN_RET(0x00415d03); r_esp += 8; return;
}

void f_00415d47(void) /* FUN_00415d47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415d47);
    /* 00415d47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415d48: mov ebp, esp */ r_ebp = r_esp;
    /* 00415d4a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415d4d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00415d50: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00415d53: mov dword ptr [eax], 0x633a54 */ W32((u32)(r_eax), 0x633a54u);
    /* 00415d59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00415d5c: cmp dword ptr [ecx + 0xcc], 0 */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415d63: je 0x415da2 */ if (fZ) goto L_00415da2;
L_00415d65:; BB(0x00415d65);
    /* 00415d65: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00415d68: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00415d6e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00415d71: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415d74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415d77: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415d7b: je 0x415d8e */ if (fZ) goto L_00415d8e;
L_00415d7d:; BB(0x00415d7d);
    /* 00415d7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00415d7f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415d82: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00415d84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415d87: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x415d89u); call_ind(t); }
    /* 00415d89: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00415d8c: jmp 0x415d95 */ goto L_00415d95;
L_00415d8e:; BB(0x00415d8e);
    /* 00415d8e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00415d95:; BB(0x00415d95);
    /* 00415d95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00415d98: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
L_00415da2:; BB(0x00415da2);
    /* 00415da2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00415da5: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x415daau); f_005d5dfb();
    /* 00415daa: mov esp, ebp */ r_esp = r_ebp;
    /* 00415dac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415dad: ret  */ FN_RET(0x00415d47); r_esp += 4; return;
}

void f_00415dae(void) /* FUN_00415dae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415dae);
    /* 00415dae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415daf: mov ebp, esp */ r_ebp = r_esp;
    /* 00415db1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415db2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415db5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00415db8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415db9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415dbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415dbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415dc0: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x415dc5u); f_005d6b88();
    /* 00415dc5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415dc8: cmp dword ptr [edx + 0xcc], 0 */ {  u32 a = R32((u32)(r_edx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415dcf: je 0x415df6 */ if (fZ) goto L_00415df6;
L_00415dd1:; BB(0x00415dd1);
    /* 00415dd1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00415dd4: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415dd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415dd8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415ddb: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00415dde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415ddf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415de2: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00415de8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415deb: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00415df1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00415df3: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x415df6u); call_ind(t); }
L_00415df6:; BB(0x00415df6);
    /* 00415df6: mov esp, ebp */ r_esp = r_ebp;
    /* 00415df8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415df9: ret 8 */ FN_RET(0x00415dae); r_esp += 12; return;
}

void f_00415dfc(void) /* FUN_00415dfc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415dfc);
    /* 00415dfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415dfd: mov ebp, esp */ r_ebp = r_esp;
    /* 00415dff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415e00: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415e03: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415e06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415e07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415e0a: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x415e0fu); f_005d6b4e();
    /* 00415e0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415e12: cmp dword ptr [ecx + 0xcc], 0 */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415e19: je 0x415e39 */ if (fZ) goto L_00415e39;
L_00415e1b:; BB(0x00415e1b);
    /* 00415e1b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415e1e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00415e21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415e22: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415e25: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00415e2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415e2e: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00415e34: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00415e36: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x415e39u); call_ind(t); }
L_00415e39:; BB(0x00415e39);
    /* 00415e39: mov esp, ebp */ r_esp = r_ebp;
    /* 00415e3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415e3c: ret 4 */ FN_RET(0x00415dfc); r_esp += 8; return;
}

void f_00415e3f(void) /* FUN_00415e3f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415e3f);
    /* 00415e3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415e40: mov ebp, esp */ r_ebp = r_esp;
    /* 00415e42: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415e45: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00415e48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415e4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415e4c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415e4f: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x415e54u); f_005d5e59();
    /* 00415e54: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415e57: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415e5e: jne 0x415f3b */ if (!fZ) goto L_00415f3b;
L_00415e64:; BB(0x00415e64);
    /* 00415e64: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00415e66: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x415e6bu); f_0048ab58();
    /* 00415e6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415e6e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00415e71: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415e75: je 0x415e84 */ if (fZ) goto L_00415e84;
L_00415e77:; BB(0x00415e77);
    /* 00415e77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415e7a: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x415e7fu); f_005e9d30();
    /* 00415e7f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00415e82: jmp 0x415e8b */ goto L_00415e8b;
L_00415e84:; BB(0x00415e84);
    /* 00415e84: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00415e8b:; BB(0x00415e8b);
    /* 00415e8b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415e8e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00415e91: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00415e97: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415e9a: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00415ea0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415ea3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00415ea6: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00415ea9: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 00415eae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415eb1: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00415eb7: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x415ebcu); f_005ea0c3();
    /* 00415ebc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415ebf: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00415ec5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415ec8: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00415ece: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00415ed0: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x415ed3u); call_ind(t); }
    /* 00415ed3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415ed6: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x415edbu); f_005d9883();
    /* 00415edb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415ede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415edf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415ee2: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00415ee8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415eeb: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00415ef1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00415ef3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x415ef6u); call_ind(t); }
    /* 00415ef6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415ef9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00415efb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415efe: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x415f01u); call_ind(t); }
    /* 00415f01: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415f04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415f05: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415f08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00415f0a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415f0d: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x415f10u); call_ind(t); }
    /* 00415f10: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415f13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415f14: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415f17: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00415f1d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415f20: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00415f26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00415f28: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x415f2bu); call_ind(t); }
    /* 00415f2b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00415f2d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415f30: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00415f36: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x415f3bu); f_005ea454();
L_00415f3b:; BB(0x00415f3b);
    /* 00415f3b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415f3e: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00415f44: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415f47: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00415f4d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00415f4f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x415f52u); call_ind(t); }
    /* 00415f52: mov esp, ebp */ r_esp = r_ebp;
    /* 00415f54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415f55: ret  */ FN_RET(0x00415e3f); r_esp += 4; return;
}

void f_00415f56(void) /* FUN_00415f56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415f56);
    /* 00415f56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415f57: mov ebp, esp */ r_ebp = r_esp;
    /* 00415f59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415f5a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415f5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415f5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415f62: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x415f67u); f_005d6635();
    /* 00415f67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415f6a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00415f6d: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x415f72u); f_005e03cc();
    /* 00415f72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415f75: mov dx, word ptr [ecx + 0xd0] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0xd0u))) & 0xffffu);
    /* 00415f7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415f7d: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00415f83: call 0x4132dd */ r_esp -= 4; W32(r_esp, 0x415f88u); f_004132dd();
    /* 00415f88: mov esp, ebp */ r_esp = r_ebp;
    /* 00415f8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415f8b: ret  */ FN_RET(0x00415f56); r_esp += 4; return;
}

void f_00415f8c(void) /* FUN_00415f8c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415f8c);
    /* 00415f8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415f8d: mov ebp, esp */ r_ebp = r_esp;
    /* 00415f8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415f90: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415f93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415f96: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00415f9c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415f9f: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00415fa5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00415fa7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x415faau); call_ind(t); }
    /* 00415faa: mov esp, ebp */ r_esp = r_ebp;
    /* 00415fac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415fad: ret  */ FN_RET(0x00415f8c); r_esp += 4; return;
}

void f_00415fae(void) /* FUN_00415fae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415fae);
    /* 00415fae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415faf: mov ebp, esp */ r_ebp = r_esp;
    /* 00415fb1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415fb4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00415fb7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00415fba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415fbb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415fbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415fbf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415fc2: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x415fc7u); f_005d80f0();
    /* 00415fc7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415fca: mov dword ptr [edx], 0x633ac4 */ W32((u32)(r_edx), 0x633ac4u);
    /* 00415fd0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00415fd7: jmp 0x415fe2 */ goto L_00415fe2;
L_00415fd9:; BB(0x00415fd9);
    /* 00415fd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415fdc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415fdf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00415fe2:; BB(0x00415fe2);
    /* 00415fe2: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415fe6: jge 0x415ffb */ if ((fS==fO)) goto L_00415ffb;
L_00415fe8:; BB(0x00415fe8);
    /* 00415fe8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415feb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415fee: mov dword ptr [edx + ecx*4 + 0x8c], 0 */ W32((u32)(r_edx+r_ecx*4+0x8cu), 0x0u);
    /* 00415ff9: jmp 0x415fd9 */ goto L_00415fd9;
L_00415ffb:; BB(0x00415ffb);
    /* 00415ffb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415ffe: mov esp, ebp */ r_esp = r_ebp;
    /* 00416000: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416001: ret 8 */ FN_RET(0x00415fae); r_esp += 12; return;
}

void f_00416004(void) /* FUN_00416004 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416004);
    /* 00416004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416005: mov ebp, esp */ r_ebp = r_esp;
    /* 00416007: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041600a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0041600d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416010: mov dword ptr [eax], 0x633ac4 */ W32((u32)(r_eax), 0x633ac4u);
    /* 00416016: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041601d: jmp 0x416028 */ goto L_00416028;
L_0041601f:; BB(0x0041601f);
    /* 0041601f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416022: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416025: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00416028:; BB(0x00416028);
    /* 00416028: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041602c: jge 0x416085 */ if ((fS==fO)) goto L_00416085;
L_0041602e:; BB(0x0041602e);
    /* 0041602e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416031: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416034: cmp dword ptr [eax + edx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041603c: je 0x416083 */ if (fZ) goto L_00416083;
L_0041603e:; BB(0x0041603e);
    /* 0041603e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416041: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416044: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0041604b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041604e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416051: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00416054: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416058: je 0x41606b */ if (fZ) goto L_0041606b;
L_0041605a:; BB(0x0041605a);
    /* 0041605a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041605c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041605f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00416061: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416064: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x416066u); call_ind(t); }
    /* 00416066: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00416069: jmp 0x416072 */ goto L_00416072;
L_0041606b:; BB(0x0041606b);
    /* 0041606b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00416072:; BB(0x00416072);
    /* 00416072: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416075: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416078: mov dword ptr [edx + ecx*4 + 0x8c], 0 */ W32((u32)(r_edx+r_ecx*4+0x8cu), 0x0u);
L_00416083:; BB(0x00416083);
    /* 00416083: jmp 0x41601f */ goto L_0041601f;
L_00416085:; BB(0x00416085);
    /* 00416085: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416088: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x41608du); f_005d8154();
    /* 0041608d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041608f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416090: ret  */ FN_RET(0x00416004); r_esp += 4; return;
}

void f_00416091(void) /* FUN_00416091 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416091);
    /* 00416091: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416092: mov ebp, esp */ r_ebp = r_esp;
    /* 00416094: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416097: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041609a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041609d: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004160a1: jne 0x4160ac */ if (!fZ) goto L_004160ac;
L_004160a3:; BB(0x004160a3);
    /* 004160a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004160a6: cmp dword ptr [ecx + 0x40], 0 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004160aa: jne 0x4160b4 */ if (!fZ) goto L_004160b4;
L_004160ac:; BB(0x004160ac);
    /* 004160ac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004160af: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004160b2: jmp 0x416113 */ goto L_00416113;
L_004160b4:; BB(0x004160b4);
    /* 004160b4: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004160bb: jne 0x416107 */ if (!fZ) goto L_00416107;
L_004160bd:; BB(0x004160bd);
    /* 004160bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004160c0: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004160c4: jne 0x416107 */ if (!fZ) goto L_00416107;
L_004160c6:; BB(0x004160c6);
    /* 004160c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004160c9: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 004160cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004160ce: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x4160d3u); f_00624600();
    /* 004160d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004160d6: cmp eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004160d9: jne 0x416107 */ if (!fZ) goto L_00416107;
L_004160db:; BB(0x004160db);
    /* 004160db: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004160e1: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x4160e6u); f_0040f81e();
    /* 004160e6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004160e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004160ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004160ed: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004160f3: call 0x41276f */ r_esp -= 4; W32(r_esp, 0x4160f8u); f_0041276f();
    /* 004160f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004160fb: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00416102: call 0x415f8c */ r_esp -= 4; W32(r_esp, 0x416107u); f_00415f8c();
L_00416107:; BB(0x00416107);
    /* 00416107: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041610a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041610b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041610e: call 0x5dff5e */ r_esp -= 4; W32(r_esp, 0x416113u); f_005dff5e();
L_00416113:; BB(0x00416113);
    /* 00416113: mov esp, ebp */ r_esp = r_ebp;
    /* 00416115: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416116: ret 4 */ FN_RET(0x00416091); r_esp += 8; return;
}

void f_00416119(void) /* FUN_00416119 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416119);
    /* 00416119: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041611a: mov ebp, esp */ r_ebp = r_esp;
    /* 0041611c: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041611f: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00416122: mov dword ptr [ebp - 0x14], 0x650b8c */ W32((u32)(r_ebp+0xffffffecu), 0x650b8cu);
    /* 00416129: mov dword ptr [ebp - 0x10], 0x650b94 */ W32((u32)(r_ebp+0xfffffff0u), 0x650b94u);
    /* 00416130: mov dword ptr [ebp - 0xc], 0x650b98 */ W32((u32)(r_ebp+0xfffffff4u), 0x650b98u);
    /* 00416137: mov dword ptr [ebp - 8], 0x650ba0 */ W32((u32)(r_ebp+0xfffffff8u), 0x650ba0u);
    /* 0041613e: mov dword ptr [ebp - 4], 0x650ba8 */ W32((u32)(r_ebp+0xfffffffcu), 0x650ba8u);
    /* 00416145: mov dword ptr [ebp - 0x40], 0x4b */ W32((u32)(r_ebp+0xffffffc0u), 0x4bu);
    /* 0041614c: mov dword ptr [ebp - 0x3c], 0x23 */ W32((u32)(r_ebp+0xffffffc4u), 0x23u);
    /* 00416153: mov dword ptr [ebp - 0x38], 8 */ W32((u32)(r_ebp+0xffffffc8u), 0x8u);
    /* 0041615a: mov dword ptr [ebp - 0x34], 0x23 */ W32((u32)(r_ebp+0xffffffccu), 0x23u);
    /* 00416161: mov dword ptr [ebp - 0x30], 0x4b */ W32((u32)(r_ebp+0xffffffd0u), 0x4bu);
    /* 00416168: mov dword ptr [ebp - 0x2c], 0x3e */ W32((u32)(r_ebp+0xffffffd4u), 0x3eu);
    /* 0041616f: mov dword ptr [ebp - 0x28], 8 */ W32((u32)(r_ebp+0xffffffd8u), 0x8u);
    /* 00416176: mov dword ptr [ebp - 0x24], 0x3e */ W32((u32)(r_ebp+0xffffffdcu), 0x3eu);
    /* 0041617d: mov dword ptr [ebp - 0x20], 8 */ W32((u32)(r_ebp+0xffffffe0u), 0x8u);
    /* 00416184: mov dword ptr [ebp - 0x1c], 0x5a */ W32((u32)(r_ebp+0xffffffe4u), 0x5au);
    /* 0041618b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0041618d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416190: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x416195u); f_005e0731();
    /* 00416195: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00416197: push 0x650bb4 */ { u32 v = 0x650bb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041619c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041619f: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x4161a4u); f_005d825e();
    /* 004161a4: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004161ab: jmp 0x4161b6 */ goto L_004161b6;
L_004161ad:; BB(0x004161ad);
    /* 004161ad: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004161b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004161b3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_004161b6:; BB(0x004161b6);
    /* 004161b6: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004161ba: jge 0x416347 */ if ((fS==fO)) goto L_00416347;
L_004161c0:; BB(0x004161c0);
    /* 004161c0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004161c3: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004161c6: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004161ce: jne 0x416342 */ if (!fZ) goto L_00416342;
L_004161d4:; BB(0x004161d4);
    /* 004161d4: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 004161d9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4161deu); f_0048ab58();
    /* 004161de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004161e1: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004161e4: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004161e8: je 0x4161fb */ if (fZ) goto L_004161fb;
L_004161ea:; BB(0x004161ea);
    /* 004161ea: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004161ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004161ee: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004161f1: call 0x415d03 */ r_esp -= 4; W32(r_esp, 0x4161f6u); f_00415d03();
    /* 004161f6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004161f9: jmp 0x416202 */ goto L_00416202;
L_004161fb:; BB(0x004161fb);
    /* 004161fb: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00416202:; BB(0x00416202);
    /* 00416202: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416205: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416208: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041620b: mov dword ptr [edx + ecx*4 + 0x8c], eax */ W32((u32)(r_edx+r_ecx*4+0x8cu), r_eax);
    /* 00416212: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416215: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416218: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0041621f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416222: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00416225: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416228: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0041622c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041622d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416230: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416233: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0041623a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041623d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416240: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 00416247: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416249: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x41624cu); call_ind(t); }
    /* 0041624c: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0041624e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00416250: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00416252: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416255: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416258: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0041625f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416262: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416265: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0041626c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041626e: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x416271u); call_ind(t); }
    /* 00416271: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00416276: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416279: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041627c: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00416283: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416286: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416289: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 00416290: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416292: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x416295u); call_ind(t); }
    /* 00416295: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416298: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041629b: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 004162a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004162a5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004162a8: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004162af: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004162b1: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4162b4u); call_ind(t); }
    /* 004162b4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004162b7: mov edx, dword ptr [ebp + ecx*8 - 0x3c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffc4u));
    /* 004162bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004162bc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004162bf: mov ecx, dword ptr [ebp + eax*8 - 0x40] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffc0u));
    /* 004162c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004162c4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004162c7: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004162ca: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004162d1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004162d4: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004162d7: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004162de: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004162e0: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4162e3u); call_ind(t); }
    /* 004162e3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004162e5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004162e8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004162eb: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 004162f2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004162f5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004162f8: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 004162ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416301: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x416304u); call_ind(t); }
    /* 00416304: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416307: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041630a: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00416311: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416314: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416317: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0041631e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00416320: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x416323u); call_ind(t); }
    /* 00416323: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416326: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416329: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00416330: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416333: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00416336: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 0041633d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041633f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x416342u); call_ind(t); }
L_00416342:; BB(0x00416342);
    /* 00416342: jmp 0x4161ad */ goto L_004161ad;
L_00416347:; BB(0x00416347);
    /* 00416347: mov esp, ebp */ r_esp = r_ebp;
    /* 00416349: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041634a: ret  */ FN_RET(0x00416119); r_esp += 4; return;
}

void f_0041634b(void) /* FUN_0041634b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041634b);
    /* 0041634b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041634c: mov ebp, esp */ r_ebp = r_esp;
    /* 0041634e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416351: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00416354: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041635a: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41635fu); f_0040f81e();
    /* 0041635f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00416362: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416365: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x41636au); f_005e030e();
    /* 0041636a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00416371: jmp 0x41637c */ goto L_0041637c;
L_00416373:; BB(0x00416373);
    /* 00416373: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416376: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416379: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0041637c:; BB(0x0041637c);
    /* 0041637c: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416380: jge 0x4163a3 */ if ((fS==fO)) goto L_004163a3;
L_00416382:; BB(0x00416382);
    /* 00416382: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416385: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416388: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0041638f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416392: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416395: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 0041639c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041639e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4163a1u); call_ind(t); }
    /* 004163a1: jmp 0x416373 */ goto L_00416373;
L_004163a3:; BB(0x004163a3);
    /* 004163a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004163a6: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 004163ac: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004163b0: je 0x4163c9 */ if (fZ) goto L_004163c9;
L_004163b2:; BB(0x004163b2);
    /* 004163b2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004163b5: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 004163bb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004163be: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 004163c4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004163c6: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x4163c9u); call_ind(t); }
L_004163c9:; BB(0x004163c9);
    /* 004163c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004163cc: call 0x40cd45 */ r_esp -= 4; W32(r_esp, 0x4163d1u); f_0040cd45();
    /* 004163d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004163d3: jne 0x4163ec */ if (!fZ) goto L_004163ec;
L_004163d5:; BB(0x004163d5);
    /* 004163d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004163d8: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 004163de: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004163e1: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 004163e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004163e9: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x4163ecu); call_ind(t); }
L_004163ec:; BB(0x004163ec);
    /* 004163ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004163ef: call 0x40cdbf */ r_esp -= 4; W32(r_esp, 0x4163f4u); f_0040cdbf();
    /* 004163f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004163f6: jne 0x41640f */ if (!fZ) goto L_0041640f;
L_004163f8:; BB(0x004163f8);
    /* 004163f8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004163fb: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00416401: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416404: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0041640a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041640c: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x41640fu); call_ind(t); }
L_0041640f:; BB(0x0041640f);
    /* 0041640f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416412: call 0x40ce80 */ r_esp -= 4; W32(r_esp, 0x416417u); f_0040ce80();
    /* 00416417: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416419: jne 0x416432 */ if (!fZ) goto L_00416432;
L_0041641b:; BB(0x0041641b);
    /* 0041641b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041641e: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00416424: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416427: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0041642d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041642f: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x416432u); call_ind(t); }
L_00416432:; BB(0x00416432);
    /* 00416432: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416439: je 0x416453 */ if (fZ) goto L_00416453;
L_0041643b:; BB(0x0041643b);
    /* 0041643b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041643d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416441: push 0xfc9 */ { u32 v = 0xfc9u; r_esp -= 4; W32(r_esp, v); }
    /* 00416446: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0041644b: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0041644e: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x416453u); f_005e8389();
L_00416453:; BB(0x00416453);
    /* 00416453: mov esp, ebp */ r_esp = r_ebp;
    /* 00416455: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416456: ret  */ FN_RET(0x0041634b); r_esp += 4; return;
}

void f_00416457(void) /* FUN_00416457 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416457);
    /* 00416457: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416458: mov ebp, esp */ r_ebp = r_esp;
    /* 0041645a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041645d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00416460: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416463: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x416468u); f_005e03cc();
    /* 00416468: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041646e: jmp 0x41647c */ goto L_0041647c;
L_00416470:; BB(0x00416470);
    /* 00416470: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00416474: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00416478: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0041647c:; BB(0x0041647c);
    /* 0041647c: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00416480: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416483: jge 0x4164f9 */ if ((fS==fO)) goto L_004164f9;
L_00416485:; BB(0x00416485);
    /* 00416485: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00416489: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041648c: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00416493: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00416497: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041649a: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004164a1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004164a3: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4164a6u); call_ind(t); }
    /* 004164a6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004164aa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004164ad: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 004164b4: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 004164ba: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004164be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004164c1: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004164c8: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 004164ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004164d0: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4164d3u); call_ind(t); }
    /* 004164d3: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004164d7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004164da: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 004164e1: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004164e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004164e8: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004164ef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004164f1: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x4164f4u); call_ind(t); }
    /* 004164f4: jmp 0x416470 */ goto L_00416470;
L_004164f9:; BB(0x004164f9);
    /* 004164f9: mov esp, ebp */ r_esp = r_ebp;
    /* 004164fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004164fc: ret  */ FN_RET(0x00416457); r_esp += 4; return;
}

void f_004164fd(void) /* FUN_004164fd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004164fd);
    /* 004164fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004164fe: mov ebp, esp */ r_ebp = r_esp;
    /* 00416500: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00416501: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00416504: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416507: call 0x5d94ef */ r_esp -= 4; W32(r_esp, 0x41650cu); f_005d94ef();
    /* 0041650c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041650f: mov dword ptr [eax], 0x633adc */ W32((u32)(r_eax), 0x633adcu);
    /* 00416515: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416518: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0041651f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416522: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00416529: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041652c: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 00416533: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416536: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 0041653d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416540: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 00416547: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041654a: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 00416551: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416554: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0041655b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041655e: mov dword ptr [edx + 0x18], 0x280 */ W32((u32)(r_edx+0x18u), 0x280u);
    /* 00416565: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416568: mov dword ptr [eax + 0x1c], 0x1e0 */ W32((u32)(r_eax+0x1cu), 0x1e0u);
    /* 0041656f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416572: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 00416579: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041657c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041657e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041657f: ret  */ FN_RET(0x004164fd); r_esp += 4; return;
}

void f_00416580(void) /* FUN_00416580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416580);
    /* 00416580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416581: mov ebp, esp */ r_ebp = r_esp;
    /* 00416583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00416584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00416587: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041658a: mov dword ptr [eax], 0x633adc */ W32((u32)(r_eax), 0x633adcu);
    /* 00416590: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416593: call 0x5d9576 */ r_esp -= 4; W32(r_esp, 0x416598u); f_005d9576();
    /* 00416598: mov esp, ebp */ r_esp = r_ebp;
    /* 0041659a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041659b: ret  */ FN_RET(0x00416580); r_esp += 4; return;
}

void f_0041659c(void) /* FUN_0041659c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041659c);
    /* 0041659c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041659d: mov ebp, esp */ r_ebp = r_esp;
    /* 0041659f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004165a2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004165a5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004165a8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004165ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004165ac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004165af: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004165b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004165b3: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 004165b9: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 004165bc: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004165c2: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004165c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004165c7: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x4165cau); call_ind(t); }
    /* 004165ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004165cc: je 0x4165d5 */ if (fZ) goto L_004165d5;
L_004165ce:; BB(0x004165ce);
    /* 004165ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004165d0: jmp 0x4166ef */ goto L_004166ef;
L_004165d5:; BB(0x004165d5);
    /* 004165d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004165d8: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004165dc: je 0x4165e5 */ if (fZ) goto L_004165e5;
L_004165de:; BB(0x004165de);
    /* 004165de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004165e0: jmp 0x4166ef */ goto L_004166ef;
L_004165e5:; BB(0x004165e5);
    /* 004165e5: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004165ec: jne 0x4165ff */ if (!fZ) goto L_004165ff;
L_004165ee:; BB(0x004165ee);
    /* 004165ee: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004165f0: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004165f6: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x4165fbu); f_0040f7fb();
    /* 004165fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004165fd: je 0x41661b */ if (fZ) goto L_0041661b;
L_004165ff:; BB(0x004165ff);
    /* 004165ff: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416606: je 0x416626 */ if (fZ) goto L_00416626;
L_00416608:; BB(0x00416608);
    /* 00416608: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 0041660e: call 0x41adab */ r_esp -= 4; W32(r_esp, 0x416613u); f_0041adab();
    /* 00416613: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00416616: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416619: je 0x416626 */ if (fZ) goto L_00416626;
L_0041661b:; BB(0x0041661b);
    /* 0041661b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041661e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00416621: jmp 0x4166ef */ goto L_004166ef;
L_00416626:; BB(0x00416626);
    /* 00416626: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00416629: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0041662c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041662f: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416633: je 0x416640 */ if (fZ) goto L_00416640;
L_00416635:; BB(0x00416635);
    /* 00416635: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416639: je 0x4166aa */ if (fZ) goto L_004166aa;
L_0041663b:; BB(0x0041663b);
    /* 0041663b: jmp 0x4166ed */ goto L_004166ed;
L_00416640:; BB(0x00416640);
    /* 00416640: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00416643: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00416646: and eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416649: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041664b: je 0x4166a8 */ if (fZ) goto L_004166a8;
L_0041664d:; BB(0x0041664d);
    /* 0041664d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416650: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416654: jne 0x4166a8 */ if (!fZ) goto L_004166a8;
L_00416656:; BB(0x00416656);
    /* 00416656: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416659: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041665c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0041665f: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 00416662: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416665: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00416668: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0041666b: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0041666e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416671: mov dword ptr [edx + 0x2c], 1 */ W32((u32)(r_edx+0x2cu), 0x1u);
    /* 00416678: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041667b: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0041667e: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00416681: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416683: je 0x416691 */ if (fZ) goto L_00416691;
L_00416685:; BB(0x00416685);
    /* 00416685: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416688: mov dword ptr [edx + 0x40], 8 */ W32((u32)(r_edx+0x40u), 0x8u);
    /* 0041668f: jmp 0x4166a8 */ goto L_004166a8;
L_00416691:; BB(0x00416691);
    /* 00416691: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00416694: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00416697: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0041669a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041669c: je 0x4166a8 */ if (fZ) goto L_004166a8;
L_0041669e:; BB(0x0041669e);
    /* 0041669e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004166a1: mov dword ptr [edx + 0x40], 0x10 */ W32((u32)(r_edx+0x40u), 0x10u);
L_004166a8:; BB(0x004166a8);
    /* 004166a8: jmp 0x4166ed */ goto L_004166ed;
L_004166aa:; BB(0x004166aa);
    /* 004166aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004166ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004166b0: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004166b3: and edx, dword ptr [ecx + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x40u)); u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004166b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004166b8: je 0x4166ed */ if (fZ) goto L_004166ed;
L_004166ba:; BB(0x004166ba);
    /* 004166ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004166bd: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004166c1: je 0x4166ed */ if (fZ) goto L_004166ed;
L_004166c3:; BB(0x004166c3);
    /* 004166c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004166c6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004166c9: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004166cc: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 004166cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004166d2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004166d5: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 004166d8: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004166db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004166de: call 0x4166f5 */ r_esp -= 4; W32(r_esp, 0x4166e3u); f_004166f5();
    /* 004166e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004166e6: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_004166ed:; BB(0x004166ed);
    /* 004166ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004166ef:; BB(0x004166ef);
    /* 004166ef: mov esp, ebp */ r_esp = r_ebp;
    /* 004166f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004166f2: ret 4 */ FN_RET(0x0041659c); r_esp += 8; return;
}

void f_004166f5(void) /* FUN_004166f5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004166f5);
    /* 004166f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004166f6: mov ebp, esp */ r_ebp = r_esp;
    /* 004166f8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004166fb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004166fe: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416705: jne 0x416749 */ if (!fZ) goto L_00416749;
L_00416707:; BB(0x00416707);
    /* 00416707: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041670d: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x416712u); f_0040f81e();
    /* 00416712: mov ecx, eax */ r_ecx = r_eax;
    /* 00416714: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x416719u); f_004259a0();
    /* 00416719: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041671b: je 0x416742 */ if (fZ) goto L_00416742;
L_0041671d:; BB(0x0041671d);
    /* 0041671d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041671f: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416725: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x41672au); f_0040f7fb();
    /* 0041672a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041672c: je 0x416742 */ if (fZ) goto L_00416742;
L_0041672e:; BB(0x0041672e);
    /* 0041672e: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416734: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x416739u); f_0040f81e();
    /* 00416739: cmp dword ptr [eax + 0x138], 1 */ {  u32 a = R32((u32)(r_eax+0x138u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416740: jne 0x416747 */ if (!fZ) goto L_00416747;
L_00416742:; BB(0x00416742);
    /* 00416742: jmp 0x416882 */ goto L_00416882;
L_00416747:; BB(0x00416747);
    /* 00416747: jmp 0x41678e */ goto L_0041678e;
L_00416749:; BB(0x00416749);
    /* 00416749: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 0041674f: call 0x41adab */ r_esp -= 4; W32(r_esp, 0x416754u); f_0041adab();
    /* 00416754: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00416757: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041675a: jne 0x416789 */ if (!fZ) goto L_00416789;
L_0041675c:; BB(0x0041675c);
    /* 0041675c: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416762: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x416767u); f_0040f9c4();
    /* 00416767: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 0041676d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00416770: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416773: jne 0x416789 */ if (!fZ) goto L_00416789;
L_00416775:; BB(0x00416775);
    /* 00416775: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041677b: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x416780u); f_0040f81e();
    /* 00416780: cmp dword ptr [eax + 0x138], 1 */ {  u32 a = R32((u32)(r_eax+0x138u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416787: jne 0x41678e */ if (!fZ) goto L_0041678e;
L_00416789:; BB(0x00416789);
    /* 00416789: jmp 0x416882 */ goto L_00416882;
L_0041678e:; BB(0x0041678e);
    /* 0041678e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416791: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416794: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00416797: sub edx, dword ptr [ecx + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x30u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041679a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041679b: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x4167a0u); f_00624700();
    /* 004167a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004167a3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004167a6: cmp dword ptr [ebp - 4], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004167aa: jge 0x4167b3 */ if ((fS==fO)) goto L_004167b3;
L_004167ac:; BB(0x004167ac);
    /* 004167ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004167b3:; BB(0x004167b3);
    /* 004167b3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004167b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004167b9: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004167bc: sub edx, dword ptr [ecx + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004167bf: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004167c2: cmp dword ptr [ebp - 8], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004167c6: jge 0x4167cf */ if ((fS==fO)) goto L_004167cf;
L_004167c8:; BB(0x004167c8);
    /* 004167c8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_004167cf:; BB(0x004167cf);
    /* 004167cf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004167d2: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004167d5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004167d8: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004167dc: je 0x4167e9 */ if (fZ) goto L_004167e9;
L_004167de:; BB(0x004167de);
    /* 004167de: cmp dword ptr [ebp - 0x10], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004167e2: je 0x41682c */ if (fZ) goto L_0041682c;
L_004167e4:; BB(0x004167e4);
    /* 004167e4: jmp 0x416882 */ goto L_00416882;
L_004167e9:; BB(0x004167e9);
    /* 004167e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004167ec: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004167ef: jle 0x4167fe */ if ((fZ||fS!=fO)) goto L_004167fe;
L_004167f1:; BB(0x004167f1);
    /* 004167f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004167f3: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004167f9: call 0x4132dd */ r_esp -= 4; W32(r_esp, 0x4167feu); f_004132dd();
L_004167fe:; BB(0x004167fe);
    /* 004167fe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416801: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416804: jle 0x41682a */ if ((fZ||fS!=fO)) goto L_0041682a;
L_00416806:; BB(0x00416806);
    /* 00416806: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041680c: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x416811u); f_0040f81e();
    /* 00416811: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00416817: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041681b: jne 0x41682a */ if (!fZ) goto L_0041682a;
L_0041681d:; BB(0x0041681d);
    /* 0041681d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041681f: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416825: call 0x4132dd */ r_esp -= 4; W32(r_esp, 0x41682au); f_004132dd();
L_0041682a:; BB(0x0041682a);
    /* 0041682a: jmp 0x416882 */ goto L_00416882;
L_0041682c:; BB(0x0041682c);
    /* 0041682c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041682f: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416832: jle 0x416857 */ if ((fZ||fS!=fO)) goto L_00416857;
L_00416834:; BB(0x00416834);
    /* 00416834: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041683a: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41683fu); f_0040f81e();
    /* 0041683f: mov ecx, eax */ r_ecx = r_eax;
    /* 00416841: call 0x40cdbf */ r_esp -= 4; W32(r_esp, 0x416846u); f_0040cdbf();
    /* 00416846: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416848: je 0x416857 */ if (fZ) goto L_00416857;
L_0041684a:; BB(0x0041684a);
    /* 0041684a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041684c: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416852: call 0x4132dd */ r_esp -= 4; W32(r_esp, 0x416857u); f_004132dd();
L_00416857:; BB(0x00416857);
    /* 00416857: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041685a: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041685d: jle 0x416882 */ if ((fZ||fS!=fO)) goto L_00416882;
L_0041685f:; BB(0x0041685f);
    /* 0041685f: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416865: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41686au); f_0040f81e();
    /* 0041686a: mov ecx, eax */ r_ecx = r_eax;
    /* 0041686c: call 0x40cd45 */ r_esp -= 4; W32(r_esp, 0x416871u); f_0040cd45();
    /* 00416871: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416873: je 0x416882 */ if (fZ) goto L_00416882;
L_00416875:; BB(0x00416875);
    /* 00416875: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00416877: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041687d: call 0x4132dd */ r_esp -= 4; W32(r_esp, 0x416882u); f_004132dd();
L_00416882:; BB(0x00416882);
    /* 00416882: mov esp, ebp */ r_esp = r_ebp;
    /* 00416884: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416885: ret  */ FN_RET(0x004166f5); r_esp += 4; return;
}

void f_00416886(void) /* FUN_00416886 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416886);
    /* 00416886: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416887: mov ebp, esp */ r_ebp = r_esp;
    /* 00416889: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041688a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041688d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416890: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x416895u); f_005d5d20();
    /* 00416895: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416898: mov dword ptr [eax], 0x633b24 */ W32((u32)(r_eax), 0x633b24u);
    /* 0041689e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004168a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004168a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004168a4: ret  */ FN_RET(0x00416886); r_esp += 4; return;
}

void f_004168a5(void) /* FUN_004168a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004168a5);
    /* 004168a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004168a6: mov ebp, esp */ r_ebp = r_esp;
    /* 004168a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004168a9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004168ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004168af: mov dword ptr [eax], 0x633b24 */ W32((u32)(r_eax), 0x633b24u);
    /* 004168b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004168b8: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x4168bdu); f_005d5dfb();
    /* 004168bd: mov esp, ebp */ r_esp = r_ebp;
    /* 004168bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004168c0: ret  */ FN_RET(0x004168a5); r_esp += 4; return;
}

void f_004168c1(void) /* FUN_004168c1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004168c1);
    /* 004168c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004168c2: mov ebp, esp */ r_ebp = r_esp;
    /* 004168c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004168c5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004168c8: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004168cf: je 0x41691d */ if (fZ) goto L_0041691d;
L_004168d1:; BB(0x004168d1);
    /* 004168d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004168d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004168d6: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x4168dbu); f_005d6635();
    /* 004168db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004168de: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004168e1: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x4168e6u); f_005e03cc();
    /* 004168e6: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004168ec: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004168ef: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 004168f5: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x4168fau); f_005d71b9();
    /* 004168fa: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004168fc: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004168fe: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004168ff: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416905: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 0041690b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041690d: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416913: call 0x413299 */ r_esp -= 4; W32(r_esp, 0x416918u); f_00413299();
    /* 00416918: jmp 0x4169d3 */ goto L_004169d3;
L_0041691d:; BB(0x0041691d);
    /* 0041691d: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00416923: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00416926: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x41692bu); f_005e63b4();
    /* 0041692b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041692e: jne 0x416971 */ if (!fZ) goto L_00416971;
L_00416930:; BB(0x00416930);
    /* 00416930: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416936: call 0x411574 */ r_esp -= 4; W32(r_esp, 0x41693bu); f_00411574();
    /* 0041693b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041693d: je 0x416971 */ if (fZ) goto L_00416971;
L_0041693f:; BB(0x0041693f);
    /* 0041693f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00416941: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00416946: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00416949: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0041694f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00416952: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416954: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x416957u); call_ind(t); }
    /* 00416957: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416959: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041695e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00416961: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00416967: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041696a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041696c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41696fu); call_ind(t); }
    /* 0041696f: jmp 0x4169d3 */ goto L_004169d3;
L_00416971:; BB(0x00416971);
    /* 00416971: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00416973: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416979: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x41697eu); f_0040f7fb();
    /* 0041697e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416980: je 0x4169d3 */ if (fZ) goto L_004169d3;
L_00416982:; BB(0x00416982);
    /* 00416982: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416984: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416987: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x41698cu); f_005d6635();
    /* 0041698c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041698f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00416992: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x416997u); f_005e03cc();
    /* 00416997: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041699d: call 0x413075 */ r_esp -= 4; W32(r_esp, 0x4169a2u); f_00413075();
    /* 004169a2: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004169a4: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 004169aa: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004169ad: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004169b3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004169b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004169b8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4169bbu); call_ind(t); }
    /* 004169bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004169bd: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 004169c2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004169c5: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 004169cb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004169ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004169d0: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4169d3u); call_ind(t); }
L_004169d3:; BB(0x004169d3);
    /* 004169d3: mov esp, ebp */ r_esp = r_ebp;
    /* 004169d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004169d6: ret  */ FN_RET(0x004168c1); r_esp += 4; return;
}

void f_004169d7(void) /* FUN_004169d7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004169d7);
    /* 004169d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004169d8: mov ebp, esp */ r_ebp = r_esp;
    /* 004169da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004169db: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004169de: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004169e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004169e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004169e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004169e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004169e9: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x4169eeu); f_005d80f0();
    /* 004169ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004169f1: mov dword ptr [edx], 0x633b94 */ W32((u32)(r_edx), 0x633b94u);
    /* 004169f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004169fa: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 00416a04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416a07: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 00416a11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416a14: mov esp, ebp */ r_esp = r_ebp;
    /* 00416a16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416a17: ret 8 */ FN_RET(0x004169d7); r_esp += 12; return;
}

void f_00416a1a(void) /* FUN_00416a1a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416a1a);
    /* 00416a1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416a1b: mov ebp, esp */ r_ebp = r_esp;
    /* 00416a1d: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416a20: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00416a23: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00416a26: mov dword ptr [eax], 0x633b94 */ W32((u32)(r_eax), 0x633b94u);
    /* 00416a2c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00416a2f: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a36: je 0x416a75 */ if (fZ) goto L_00416a75;
L_00416a38:; BB(0x00416a38);
    /* 00416a38: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00416a3b: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00416a41: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00416a44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416a47: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00416a4a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a4e: je 0x416a61 */ if (fZ) goto L_00416a61;
L_00416a50:; BB(0x00416a50);
    /* 00416a50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416a52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416a55: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00416a57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416a5a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x416a5cu); call_ind(t); }
    /* 00416a5c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00416a5f: jmp 0x416a68 */ goto L_00416a68;
L_00416a61:; BB(0x00416a61);
    /* 00416a61: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00416a68:; BB(0x00416a68);
    /* 00416a68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00416a6b: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
L_00416a75:; BB(0x00416a75);
    /* 00416a75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00416a78: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a7f: je 0x416abe */ if (fZ) goto L_00416abe;
L_00416a81:; BB(0x00416a81);
    /* 00416a81: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00416a84: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00416a8a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00416a8d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416a90: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00416a93: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a97: je 0x416aaa */ if (fZ) goto L_00416aaa;
L_00416a99:; BB(0x00416a99);
    /* 00416a99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416a9b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416a9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416aa0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416aa3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x416aa5u); call_ind(t); }
    /* 00416aa5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00416aa8: jmp 0x416ab1 */ goto L_00416ab1;
L_00416aaa:; BB(0x00416aaa);
    /* 00416aaa: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00416ab1:; BB(0x00416ab1);
    /* 00416ab1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00416ab4: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
L_00416abe:; BB(0x00416abe);
    /* 00416abe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00416ac1: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x416ac6u); f_005d8154();
    /* 00416ac6: mov esp, ebp */ r_esp = r_ebp;
    /* 00416ac8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416ac9: ret  */ FN_RET(0x00416a1a); r_esp += 4; return;
}

void f_00416aca(void) /* FUN_00416aca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416aca);
    /* 00416aca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416acb: mov ebp, esp */ r_ebp = r_esp;
    /* 00416acd: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416ad0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00416ad3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ad5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416ad8: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x416addu); f_005e0731();
    /* 00416add: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00416ae3: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x416ae8u); f_00448ca3();
    /* 00416ae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416aea: je 0x416b0c */ if (fZ) goto L_00416b0c;
L_00416aec:; BB(0x00416aec);
    /* 00416aec: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416af2: call 0x413021 */ r_esp -= 4; W32(r_esp, 0x416af7u); f_00413021();
    /* 00416af7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416af9: je 0x416b0c */ if (fZ) goto L_00416b0c;
L_00416afb:; BB(0x00416afb);
    /* 00416afb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00416afd: push 0x650bbc */ { u32 v = 0x650bbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416b05: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x416b0au); f_005d825e();
    /* 00416b0a: jmp 0x416b1b */ goto L_00416b1b;
L_00416b0c:; BB(0x00416b0c);
    /* 00416b0c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00416b0e: push 0x650bcc */ { u32 v = 0x650bccu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416b16: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x416b1bu); f_005d825e();
L_00416b1b:; BB(0x00416b1b);
    /* 00416b1b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416b1e: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b25: jne 0x416b5d */ if (!fZ) goto L_00416b5d;
L_00416b27:; BB(0x00416b27);
    /* 00416b27: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b2c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x416b31u); f_0048ab58();
    /* 00416b31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b34: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00416b37: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b3b: je 0x416b4a */ if (fZ) goto L_00416b4a;
L_00416b3d:; BB(0x00416b3d);
    /* 00416b3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416b40: call 0x416886 */ r_esp -= 4; W32(r_esp, 0x416b45u); f_00416886();
    /* 00416b45: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00416b48: jmp 0x416b51 */ goto L_00416b51;
L_00416b4a:; BB(0x00416b4a);
    /* 00416b4a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00416b51:; BB(0x00416b51);
    /* 00416b51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416b54: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416b57: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
L_00416b5d:; BB(0x00416b5d);
    /* 00416b5d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416b60: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00416b66: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416b69: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00416b6c: push 0x650bd8 */ { u32 v = 0x650bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00416b71: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416b74: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00416b7a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416b7d: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00416b83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416b85: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x416b88u); call_ind(t); }
    /* 00416b88: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b8a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00416b8c: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00416b8e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416b91: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00416b97: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416b9a: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00416ba0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416ba2: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x416ba5u); call_ind(t); }
    /* 00416ba5: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00416baa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416bad: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00416bb3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416bb6: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00416bbc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416bbe: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x416bc1u); call_ind(t); }
    /* 00416bc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416bc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416bc5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416bc8: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00416bce: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416bd1: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00416bd7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416bd9: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x416bdcu); call_ind(t); }
    /* 00416bdc: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00416bde: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00416be0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416be3: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00416be9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416bec: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00416bf2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416bf4: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x416bf7u); call_ind(t); }
    /* 00416bf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416bf9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416bfc: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00416c02: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416c05: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00416c0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416c0d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x416c10u); call_ind(t); }
    /* 00416c10: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00416c12: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00416c14: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00416c16: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00416c18: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416c1b: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00416c21: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x416c26u); f_005d5ff2();
    /* 00416c26: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00416c28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416c2b: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00416c31: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x416c36u); f_005d65d6();
    /* 00416c36: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416c39: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416c40: jne 0x416c7a */ if (!fZ) goto L_00416c7a;
L_00416c42:; BB(0x00416c42);
    /* 00416c42: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00416c47: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x416c4cu); f_0048ab58();
    /* 00416c4c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416c4f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00416c52: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416c56: je 0x416c67 */ if (fZ) goto L_00416c67;
L_00416c58:; BB(0x00416c58);
    /* 00416c58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416c5a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416c5d: call 0x5d6e50 */ r_esp -= 4; W32(r_esp, 0x416c62u); f_005d6e50();
    /* 00416c62: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00416c65: jmp 0x416c6e */ goto L_00416c6e;
L_00416c67:; BB(0x00416c67);
    /* 00416c67: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00416c6e:; BB(0x00416c6e);
    /* 00416c6e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416c71: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00416c74: mov dword ptr [eax + 0x90], ecx */ W32((u32)(r_eax+0x90u), r_ecx);
L_00416c7a:; BB(0x00416c7a);
    /* 00416c7a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416c7d: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00416c83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416c86: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00416c89: push 0x650be4 */ { u32 v = 0x650be4u; r_esp -= 4; W32(r_esp, v); }
    /* 00416c8e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416c91: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 00416c97: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416c9a: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 00416ca0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00416ca2: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x416ca5u); call_ind(t); }
    /* 00416ca5: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ca7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416ca9: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00416cab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416cae: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00416cb4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416cb7: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00416cbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416cbf: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x416cc2u); call_ind(t); }
    /* 00416cc2: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00416cc7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416cca: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00416cd0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416cd3: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00416cd9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416cdb: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x416cdeu); call_ind(t); }
    /* 00416cde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ce0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ce2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416ce5: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00416ceb: call 0x5d7422 */ r_esp -= 4; W32(r_esp, 0x416cf0u); f_005d7422();
    /* 00416cf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416cf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416cf4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416cf7: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00416cfd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416d00: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00416d06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416d08: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x416d0bu); call_ind(t); }
    /* 00416d0b: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d0d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00416d0f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416d12: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00416d18: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416d1b: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00416d21: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416d23: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x416d26u); call_ind(t); }
    /* 00416d26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d28: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416d2b: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00416d31: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416d34: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00416d3a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416d3c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x416d3fu); call_ind(t); }
    /* 00416d3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00416d41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416d42: ret  */ FN_RET(0x00416aca); r_esp += 4; return;
}

void f_00416d43(void) /* FUN_00416d43 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416d43);
    /* 00416d43: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416d44: mov ebp, esp */ r_ebp = r_esp;
    /* 00416d46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00416d47: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00416d4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416d4d: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x416d52u); f_005e030e();
    /* 00416d52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416d55: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d5c: je 0x416d75 */ if (fZ) goto L_00416d75;
L_00416d5e:; BB(0x00416d5e);
    /* 00416d5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416d61: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00416d67: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416d6a: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00416d70: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416d72: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x416d75u); call_ind(t); }
L_00416d75:; BB(0x00416d75);
    /* 00416d75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416d78: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d7f: je 0x416daf */ if (fZ) goto L_00416daf;
L_00416d81:; BB(0x00416d81);
    /* 00416d81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416d84: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00416d8a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416d8d: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00416d93: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416d95: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x416d98u); call_ind(t); }
    /* 00416d98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416d9b: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00416da1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416da4: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00416daa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416dac: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x416dafu); call_ind(t); }
L_00416daf:; BB(0x00416daf);
    /* 00416daf: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416db6: je 0x416dd0 */ if (fZ) goto L_00416dd0;
L_00416db8:; BB(0x00416db8);
    /* 00416db8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416dba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416dbc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416dbe: push 0xfc9 */ { u32 v = 0xfc9u; r_esp -= 4; W32(r_esp, v); }
    /* 00416dc3: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00416dc8: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00416dcb: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x416dd0u); f_005e8389();
L_00416dd0:; BB(0x00416dd0);
    /* 00416dd0: mov esp, ebp */ r_esp = r_ebp;
    /* 00416dd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416dd3: ret  */ FN_RET(0x00416d43); r_esp += 4; return;
}

void f_00416dd4(void) /* FUN_00416dd4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416dd4);
    /* 00416dd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416dd5: mov ebp, esp */ r_ebp = r_esp;
    /* 00416dd7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00416dd8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00416ddb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416dde: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x416de3u); f_005d5d20();
    /* 00416de3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416de6: mov dword ptr [eax], 0x633bac */ W32((u32)(r_eax), 0x633bacu);
    /* 00416dec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416def: mov esp, ebp */ r_esp = r_ebp;
    /* 00416df1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416df2: ret  */ FN_RET(0x00416dd4); r_esp += 4; return;
}

void f_00416df3(void) /* FUN_00416df3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416df3);
    /* 00416df3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416df4: mov ebp, esp */ r_ebp = r_esp;
    /* 00416df6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00416df7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00416dfa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416dfd: mov dword ptr [eax], 0x633bac */ W32((u32)(r_eax), 0x633bacu);
    /* 00416e03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416e06: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x416e0bu); f_005d5dfb();
    /* 00416e0b: mov esp, ebp */ r_esp = r_ebp;
    /* 00416e0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416e0e: ret  */ FN_RET(0x00416df3); r_esp += 4; return;
}

void f_00416e0f(void) /* FUN_00416e0f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416e0f);
    /* 00416e0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416e10: mov ebp, esp */ r_ebp = r_esp;
    /* 00416e12: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416e15: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00416e18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e1c: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00416e22: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x416e27u); f_0045c4ac();
    /* 00416e27: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00416e2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416e2d: mov byte ptr [eax + 0xd], 0 */ W8((u32)(r_eax+0xdu), 0x0u);
    /* 00416e31: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00416e37: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
    /* 00416e41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e43: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00416e49: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x416e4eu); f_0045c8df();
    /* 00416e4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416e53: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x416e58u); f_005d6635();
    /* 00416e58: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416e5b: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00416e5e: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x416e63u); f_005e03cc();
    /* 00416e63: mov esp, ebp */ r_esp = r_ebp;
    /* 00416e65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416e66: ret  */ FN_RET(0x00416e0f); r_esp += 4; return;
}

void f_00416e67(void) /* FUN_00416e67 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416e67);
    /* 00416e67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416e68: mov ebp, esp */ r_ebp = r_esp;
    /* 00416e6a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416e6d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00416e70: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00416e73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416e74: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00416e77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00416e78: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416e7b: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x416e80u); f_005d80f0();
    /* 00416e80: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416e83: mov dword ptr [edx], 0x633c1c */ W32((u32)(r_edx), 0x633c1cu);
    /* 00416e89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416e8c: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
    /* 00416e96: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00416e9d: jmp 0x416ea8 */ goto L_00416ea8;
L_00416e9f:; BB(0x00416e9f);
    /* 00416e9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416ea2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416ea5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00416ea8:; BB(0x00416ea8);
    /* 00416ea8: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416eac: jge 0x416ec1 */ if ((fS==fO)) goto L_00416ec1;
L_00416eae:; BB(0x00416eae);
    /* 00416eae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416eb1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416eb4: mov dword ptr [eax + edx*4 + 0x8c], 0 */ W32((u32)(r_eax+r_edx*4+0x8cu), 0x0u);
    /* 00416ebf: jmp 0x416e9f */ goto L_00416e9f;
L_00416ec1:; BB(0x00416ec1);
    /* 00416ec1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416ec4: mov esp, ebp */ r_esp = r_ebp;
    /* 00416ec6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416ec7: ret 8 */ FN_RET(0x00416e67); r_esp += 12; return;
}

void f_00416eca(void) /* FUN_00416eca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416eca);
    /* 00416eca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416ecb: mov ebp, esp */ r_ebp = r_esp;
    /* 00416ecd: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416ed0: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00416ed3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416ed6: mov dword ptr [eax], 0x633c1c */ W32((u32)(r_eax), 0x633c1cu);
    /* 00416edc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416edf: cmp dword ptr [ecx + 0x9c], 0 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416ee6: je 0x416f25 */ if (fZ) goto L_00416f25;
L_00416ee8:; BB(0x00416ee8);
    /* 00416ee8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416eeb: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00416ef1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00416ef4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416ef7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00416efa: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416efe: je 0x416f11 */ if (fZ) goto L_00416f11;
L_00416f00:; BB(0x00416f00);
    /* 00416f00: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f02: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416f05: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00416f07: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416f0a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x416f0cu); call_ind(t); }
    /* 00416f0c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00416f0f: jmp 0x416f18 */ goto L_00416f18;
L_00416f11:; BB(0x00416f11);
    /* 00416f11: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00416f18:; BB(0x00416f18);
    /* 00416f18: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416f1b: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
L_00416f25:; BB(0x00416f25);
    /* 00416f25: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00416f2c: jmp 0x416f37 */ goto L_00416f37;
L_00416f2e:; BB(0x00416f2e);
    /* 00416f2e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416f31: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416f34: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00416f37:; BB(0x00416f37);
    /* 00416f37: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416f3b: jge 0x416f94 */ if ((fS==fO)) goto L_00416f94;
L_00416f3d:; BB(0x00416f3d);
    /* 00416f3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416f40: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416f43: cmp dword ptr [ecx + eax*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416f4b: je 0x416f92 */ if (fZ) goto L_00416f92;
L_00416f4d:; BB(0x00416f4d);
    /* 00416f4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416f50: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416f53: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00416f5a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00416f5d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00416f60: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00416f63: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416f67: je 0x416f7a */ if (fZ) goto L_00416f7a;
L_00416f69:; BB(0x00416f69);
    /* 00416f69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f6b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416f6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416f70: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416f73: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x416f75u); call_ind(t); }
    /* 00416f75: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00416f78: jmp 0x416f81 */ goto L_00416f81;
L_00416f7a:; BB(0x00416f7a);
    /* 00416f7a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00416f81:; BB(0x00416f81);
    /* 00416f81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416f84: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416f87: mov dword ptr [ecx + eax*4 + 0x8c], 0 */ W32((u32)(r_ecx+r_eax*4+0x8cu), 0x0u);
L_00416f92:; BB(0x00416f92);
    /* 00416f92: jmp 0x416f2e */ goto L_00416f2e;
L_00416f94:; BB(0x00416f94);
    /* 00416f94: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416f97: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x416f9cu); f_005d8154();
    /* 00416f9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00416f9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416f9f: ret  */ FN_RET(0x00416eca); r_esp += 4; return;
}

void f_00416fa0(void) /* FUN_00416fa0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416fa0);
    /* 00416fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00416fa3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416fa6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00416fa9: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00416fab: push 0x650bf8 */ { u32 v = 0x650bf8u; r_esp -= 4; W32(r_esp, v); }
    /* 00416fb0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416fb3: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x416fb8u); f_005d825e();
    /* 00416fb8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416fbb: cmp dword ptr [eax + 0x9c], 0 */ {  u32 a = R32((u32)(r_eax+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416fc2: jne 0x416ffa */ if (!fZ) goto L_00416ffa;
L_00416fc4:; BB(0x00416fc4);
    /* 00416fc4: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00416fc9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x416fceu); f_0048ab58();
    /* 00416fce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416fd1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00416fd4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416fd8: je 0x416fe7 */ if (fZ) goto L_00416fe7;
L_00416fda:; BB(0x00416fda);
    /* 00416fda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416fdd: call 0x416dd4 */ r_esp -= 4; W32(r_esp, 0x416fe2u); f_00416dd4();
    /* 00416fe2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00416fe5: jmp 0x416fee */ goto L_00416fee;
L_00416fe7:; BB(0x00416fe7);
    /* 00416fe7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00416fee:; BB(0x00416fee);
    /* 00416fee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416ff1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00416ff4: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
L_00416ffa:; BB(0x00416ffa);
    /* 00416ffa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416ffd: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00417003: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417006: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00417009: push 0x1771 */ { u32 v = 0x1771u; r_esp -= 4; W32(r_esp, v); }
    /* 0041700e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417011: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00417017: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041701a: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00417020: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417022: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x417025u); call_ind(t); }
    /* 00417025: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417027: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417029: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041702c: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00417032: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417035: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0041703b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041703d: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x417040u); call_ind(t); }
    /* 00417040: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00417042: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00417044: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417047: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0041704d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417050: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00417056: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417058: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x41705bu); call_ind(t); }
    /* 0041705b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041705d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417060: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00417066: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417069: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0041706f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417071: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417074u); call_ind(t); }
    /* 00417074: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00417076: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00417078: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041707a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041707c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041707f: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00417085: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x41708au); f_005d5ff2();
    /* 0041708a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0041708c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041708f: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00417095: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x41709au); f_005d65d6();
    /* 0041709a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004170a1: jmp 0x4170ac */ goto L_004170ac;
L_004170a3:; BB(0x004170a3);
    /* 004170a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004170a6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004170a9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004170ac:; BB(0x004170ac);
    /* 004170ac: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004170b0: jge 0x4171f7 */ if ((fS==fO)) goto L_004171f7;
L_004170b6:; BB(0x004170b6);
    /* 004170b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004170b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004170bc: cmp dword ptr [ecx + eax*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004170c4: jne 0x417100 */ if (!fZ) goto L_00417100;
L_004170c6:; BB(0x004170c6);
    /* 004170c6: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 004170cb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4170d0u); f_0048ab58();
    /* 004170d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004170d3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004170d6: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004170da: je 0x4170e9 */ if (fZ) goto L_004170e9;
L_004170dc:; BB(0x004170dc);
    /* 004170dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004170df: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4170e4u); f_005e8590();
    /* 004170e4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004170e7: jmp 0x4170f0 */ goto L_004170f0;
L_004170e9:; BB(0x004170e9);
    /* 004170e9: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_004170f0:; BB(0x004170f0);
    /* 004170f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004170f3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004170f6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004170f9: mov dword ptr [eax + edx*4 + 0x8c], ecx */ W32((u32)(r_eax+r_edx*4+0x8cu), r_ecx);
L_00417100:; BB(0x00417100);
    /* 00417100: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417103: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417106: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0041710d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417110: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00417113: push 0x6f5798 */ { u32 v = 0x6f5798u; r_esp -= 4; W32(r_esp, v); }
    /* 00417118: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041711b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041711e: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00417125: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417128: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041712b: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00417132: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417134: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x417137u); call_ind(t); }
    /* 00417137: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041713a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041713d: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00417144: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417147: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041714a: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 00417151: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417153: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x417156u); call_ind(t); }
    /* 00417156: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00417158: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041715b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041715e: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00417165: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x41716au); f_005e87aa();
    /* 0041716a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041716d: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00417170: add edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417173: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417174: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00417176: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417179: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041717c: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00417183: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417186: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417189: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00417190: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417192: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x417195u); call_ind(t); }
    /* 00417195: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417197: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041719a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041719d: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 004171a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004171a7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004171aa: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 004171b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004171b3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4171b6u); call_ind(t); }
    /* 004171b6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004171b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004171bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004171be: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 004171c5: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x4171cau); f_005e8e99();
    /* 004171ca: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004171cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004171cf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004171d2: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004171d9: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x4171deu); f_005e8740();
    /* 004171de: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004171e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004171e3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004171e6: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 004171ed: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x4171f2u); f_005e8775();
    /* 004171f2: jmp 0x4170a3 */ goto L_004170a3;
L_004171f7:; BB(0x004171f7);
    /* 004171f7: mov esp, ebp */ r_esp = r_ebp;
    /* 004171f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004171fa: ret  */ FN_RET(0x00416fa0); r_esp += 4; return;
}

void f_004171fb(void) /* FUN_004171fb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004171fb);
    /* 004171fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004171fc: mov ebp, esp */ r_ebp = r_esp;
    /* 004171fe: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417201: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00417204: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041720a: call 0x410421 */ r_esp -= 4; W32(r_esp, 0x41720fu); f_00410421();
    /* 0041720f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00417212: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417217: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041721a: call 0x40a7ca */ r_esp -= 4; W32(r_esp, 0x41721fu); f_0040a7ca();
    /* 0041721f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00417222: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417228: sub eax, dword ptr [ecx + 0x74] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x74u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041722b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041722e: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417234: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00417237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417238: push 0x650c04 */ { u32 v = 0x650c04u; r_esp -= 4; W32(r_esp, v); }
    /* 0041723d: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00417240: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417241: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x417247u); call_ind(t); }
    /* 00417247: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041724a: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 0041724d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041724e: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00417251: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00417257: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0041725a: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00417260: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417262: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x417265u); call_ind(t); }
    /* 00417265: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041726a: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0041726d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041726e: push 0x650c18 */ { u32 v = 0x650c18u; r_esp -= 4; W32(r_esp, v); }
    /* 00417273: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 00417276: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417277: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x41727du); call_ind(t); }
    /* 0041727d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417280: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 00417283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417284: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00417287: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 0041728d: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00417290: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00417296: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417298: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x41729bu); call_ind(t); }
    /* 0041729b: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 004172a0: cmp dword ptr [eax + 0x6c], 1 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004172a4: jle 0x4172b9 */ if ((fZ||fS!=fO)) goto L_004172b9;
L_004172a6:; BB(0x004172a6);
    /* 004172a6: push 0x650c28 */ { u32 v = 0x650c28u; r_esp -= 4; W32(r_esp, v); }
    /* 004172ab: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 004172ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004172af: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4172b4u); f_00624050();
    /* 004172b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004172b7: jmp 0x4172e9 */ goto L_004172e9;
L_004172b9:; BB(0x004172b9);
    /* 004172b9: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 004172bf: cmp dword ptr [edx + 0x6c], -1 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004172c3: jge 0x4172d8 */ if ((fS==fO)) goto L_004172d8;
L_004172c5:; BB(0x004172c5);
    /* 004172c5: push 0x650c40 */ { u32 v = 0x650c40u; r_esp -= 4; W32(r_esp, v); }
    /* 004172ca: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 004172cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004172ce: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4172d3u); f_00624050();
    /* 004172d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004172d6: jmp 0x4172e9 */ goto L_004172e9;
L_004172d8:; BB(0x004172d8);
    /* 004172d8: push 0x650c54 */ { u32 v = 0x650c54u; r_esp -= 4; W32(r_esp, v); }
    /* 004172dd: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 004172e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004172e1: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4172e6u); f_00624050();
    /* 004172e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004172e9:; BB(0x004172e9);
    /* 004172e9: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 004172ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004172ed: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004172f0: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004172f6: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004172f9: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 004172ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417301: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x417304u); call_ind(t); }
    /* 00417304: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00417308: jle 0x417322 */ if ((fZ||fS!=fO)) goto L_00417322;
L_0041730a:; BB(0x0041730a);
    /* 0041730a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041730d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041730e: push 0x650c64 */ { u32 v = 0x650c64u; r_esp -= 4; W32(r_esp, v); }
    /* 00417313: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00417316: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417317: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x41731du); call_ind(t); }
    /* 0041731d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417320: jmp 0x417356 */ goto L_00417356;
L_00417322:; BB(0x00417322);
    /* 00417322: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00417326: jge 0x417340 */ if ((fS==fO)) goto L_00417340;
L_00417328:; BB(0x00417328);
    /* 00417328: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041732b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041732c: push 0x650c7c */ { u32 v = 0x650c7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00417331: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 00417334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417335: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x41733bu); call_ind(t); }
    /* 0041733b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041733e: jmp 0x417356 */ goto L_00417356;
L_00417340:; BB(0x00417340);
    /* 00417340: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417344: push 0x650c94 */ { u32 v = 0x650c94u; r_esp -= 4; W32(r_esp, v); }
    /* 00417349: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 0041734c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041734d: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x417353u); call_ind(t); }
    /* 00417353: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00417356:; BB(0x00417356);
    /* 00417356: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 00417359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041735a: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0041735d: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00417363: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00417366: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0041736c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041736e: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x417371u); call_ind(t); }
    /* 00417371: mov esp, ebp */ r_esp = r_ebp;
    /* 00417373: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417374: ret  */ FN_RET(0x004171fb); r_esp += 4; return;
}

void f_00417375(void) /* FUN_00417375 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417375);
    /* 00417375: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417376: mov ebp, esp */ r_ebp = r_esp;
    /* 00417378: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041737b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041737e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417381: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x417386u); f_005e030e();
    /* 00417386: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417389: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0041738f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417392: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00417398: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041739a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x41739du); call_ind(t); }
    /* 0041739d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004173a4: jmp 0x4173af */ goto L_004173af;
L_004173a6:; BB(0x004173a6);
    /* 004173a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004173a9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004173ac: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004173af:; BB(0x004173af);
    /* 004173af: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004173b3: jge 0x4173d6 */ if ((fS==fO)) goto L_004173d6;
L_004173b5:; BB(0x004173b5);
    /* 004173b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004173b8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004173bb: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 004173c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004173c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004173c8: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 004173cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004173d1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4173d4u); call_ind(t); }
    /* 004173d4: jmp 0x4173a6 */ goto L_004173a6;
L_004173d6:; BB(0x004173d6);
    /* 004173d6: mov esp, ebp */ r_esp = r_ebp;
    /* 004173d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004173d9: ret  */ FN_RET(0x00417375); r_esp += 4; return;
}

void f_004173da(void) /* FUN_004173da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004173da);
    /* 004173da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004173db: mov ebp, esp */ r_ebp = r_esp;
    /* 004173dd: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004173e0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004173e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004173e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004173e7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004173ea: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x4173efu); f_005e626d();
    /* 004173ef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004173f2: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 004173f5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004173f8: cmp dword ptr [ebp - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004173fc: ja 0x41775d */ if ((!fC&&!fZ)) goto L_0041775d;
L_00417402:; BB(0x00417402);
    /* 00417402: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00417405: jmp dword ptr [eax*4 + 0x417763] */ { u32 t = R32((u32)(r_eax*4+0x417763u)); switch (t) { case 0x41740cu: goto L_0041740c; case 0x4174ddu: goto L_004174dd; case 0x417575u: goto L_00417575; case 0x41768fu: goto L_0041768f; case 0x4176d8u: goto L_004176d8; default: UNSUP(0x00417405, "jump table entry is not a known target"); } }
L_0041740c:; BB(0x0041740c);
    /* 0041740c: mov word ptr [0x64cc28], 0 */ W16((u32)(0x64cc28u), 0x0u);
L_00417415:; BB(0x00417415);
    /* 00417415: movsx ecx, word ptr [0x64cc28] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x64cc28u));
    /* 0041741c: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417422: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00417426: call 0x40cbbf */ r_esp -= 4; W32(r_esp, 0x41742bu); f_0040cbbf();
    /* 0041742b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041742d: jne 0x417441 */ if (!fZ) goto L_00417441;
L_0041742f:; BB(0x0041742f);
    /* 0041742f: mov ax, word ptr [0x64cc28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x64cc28u))) & 0xffffu);
    /* 00417435: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00417439: mov word ptr [0x64cc28], ax */ W16((u32)(0x64cc28u), (u16)r_eax);
    /* 0041743f: jmp 0x417415 */ goto L_00417415;
L_00417441:; BB(0x00417441);
    /* 00417441: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417443: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417446: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417448: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041744b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x41744eu); call_ind(t); }
    /* 0041744e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417450: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00417456: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x41745bu); f_0045cd25();
    /* 0041745b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041745e: jge 0x41746c */ if ((fS==fO)) goto L_0041746c;
L_00417460:; BB(0x00417460);
    /* 00417460: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417465: mov dword ptr [eax + 0x54], 1 */ W32((u32)(r_eax+0x54u), 0x1u);
L_0041746c:; BB(0x0041746c);
    /* 0041746c: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00417472: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x417477u); f_0045cb0a();
    /* 00417477: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417479: je 0x4174cb */ if (fZ) goto L_004174cb;
L_0041747b:; BB(0x0041747b);
    /* 0041747b: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417482: jne 0x4174cb */ if (!fZ) goto L_004174cb;
L_00417484:; BB(0x00417484);
    /* 00417484: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041748a: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041748e: jne 0x4174cb */ if (!fZ) goto L_004174cb;
L_00417490:; BB(0x00417490);
    /* 00417490: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00417492: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x417497u); f_0048ab58();
    /* 00417497: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041749a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041749d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004174a1: je 0x4174b6 */ if (fZ) goto L_004174b6;
L_004174a3:; BB(0x004174a3);
    /* 004174a3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004174a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004174a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004174a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004174ac: call 0x41800d */ r_esp -= 4; W32(r_esp, 0x4174b1u); f_0041800d();
    /* 004174b1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004174b4: jmp 0x4174bd */ goto L_004174bd;
L_004174b6:; BB(0x004174b6);
    /* 004174b6: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004174bd:; BB(0x004174bd);
    /* 004174bd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004174c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004174c1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004174c4: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x4174c9u); f_005e62ca();
    /* 004174c9: jmp 0x4174d8 */ goto L_004174d8;
L_004174cb:; BB(0x004174cb);
    /* 004174cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004174cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004174d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004174d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004174d5: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4174d8u); call_ind(t); }
L_004174d8:; BB(0x004174d8);
    /* 004174d8: jmp 0x41775d */ goto L_0041775d;
L_004174dd:; BB(0x004174dd);
    /* 004174dd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004174df: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004174e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004174e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004174e7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4174eau); call_ind(t); }
    /* 004174ea: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004174f0: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x4174f5u); f_0045cb0a();
    /* 004174f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004174f7: je 0x417550 */ if (fZ) goto L_00417550;
L_004174f9:; BB(0x004174f9);
    /* 004174f9: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417500: jne 0x417550 */ if (!fZ) goto L_00417550;
L_00417502:; BB(0x00417502);
    /* 00417502: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417507: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041750b: jne 0x417550 */ if (!fZ) goto L_00417550;
L_0041750d:; BB(0x0041750d);
    /* 0041750d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041750f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x417514u); f_0048ab58();
    /* 00417514: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417517: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041751a: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041751e: je 0x41753b */ if (fZ) goto L_0041753b;
L_00417520:; BB(0x00417520);
    /* 00417520: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417524: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417526: mov dx, word ptr [0x64cc28] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x64cc28u))) & 0xffffu);
    /* 0041752d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041752e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417531: call 0x417777 */ r_esp -= 4; W32(r_esp, 0x417536u); f_00417777();
    /* 00417536: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00417539: jmp 0x417542 */ goto L_00417542;
L_0041753b:; BB(0x0041753b);
    /* 0041753b: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00417542:; BB(0x00417542);
    /* 00417542: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417545: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417546: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417549: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x41754eu); f_005e62ca();
    /* 0041754e: jmp 0x417570 */ goto L_00417570;
L_00417550:; BB(0x00417550);
    /* 00417550: mov cx, word ptr [0x64cc28] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x64cc28u))) & 0xffffu);
    /* 00417557: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417558: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041755e: call 0x414794 */ r_esp -= 4; W32(r_esp, 0x417563u); f_00414794();
    /* 00417563: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417565: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417568: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041756a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041756d: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x417570u); call_ind(t); }
L_00417570:; BB(0x00417570);
    /* 00417570: jmp 0x41775d */ goto L_0041775d;
L_00417575:; BB(0x00417575);
    /* 00417575: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041757b: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0041757e: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 00417584: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x417589u); f_005dd4d2();
    /* 00417589: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041758c: jne 0x4175ad */ if (!fZ) goto L_004175ad;
L_0041758e:; BB(0x0041758e);
    /* 0041758e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417590: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00417593: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417595: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417598: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x41759bu); call_ind(t); }
    /* 0041759b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041759d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004175a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004175a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004175a5: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4175a8u); call_ind(t); }
    /* 004175a8: jmp 0x41768a */ goto L_0041768a;
L_004175ad:; BB(0x004175ad);
    /* 004175ad: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004175b3: jmp 0x4175c1 */ goto L_004175c1;
L_004175b5:; BB(0x004175b5);
    /* 004175b5: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004175b9: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004175bd: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004175c1:; BB(0x004175c1);
    /* 004175c1: mov cx, word ptr [0x64cc28] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x64cc28u))) & 0xffffu);
    /* 004175c8: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004175cc: mov word ptr [0x64cc28], cx */ W16((u32)(0x64cc28u), (u16)r_ecx);
    /* 004175d3: movsx edx, word ptr [0x64cc28] */ r_edx = (u32)(i32)(i16)R16((u32)(0x64cc28u));
    /* 004175da: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004175dd: jle 0x4175e8 */ if ((fZ||fS!=fO)) goto L_004175e8;
L_004175df:; BB(0x004175df);
    /* 004175df: mov word ptr [0x64cc28], 0 */ W16((u32)(0x64cc28u), 0x0u);
L_004175e8:; BB(0x004175e8);
    /* 004175e8: movsx eax, word ptr [0x64cc28] */ r_eax = (u32)(i32)(i16)R16((u32)(0x64cc28u));
    /* 004175ef: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004175f5: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 004175f9: call 0x40cbbf */ r_esp -= 4; W32(r_esp, 0x4175feu); f_0040cbbf();
    /* 004175fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417600: jne 0x41760e */ if (!fZ) goto L_0041760e;
L_00417602:; BB(0x00417602);
    /* 00417602: movsx edx, word ptr [0x64cc28] */ r_edx = (u32)(i32)(i16)R16((u32)(0x64cc28u));
    /* 00417609: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041760c: jne 0x417610 */ if (!fZ) goto L_00417610;
L_0041760e:; BB(0x0041760e);
    /* 0041760e: jmp 0x417612 */ goto L_00417612;
L_00417610:; BB(0x00417610);
    /* 00417610: jmp 0x4175b5 */ goto L_004175b5;
L_00417612:; BB(0x00417612);
    /* 00417612: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417614: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417617: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417619: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041761c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x41761fu); call_ind(t); }
    /* 0041761f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00417625: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x41762au); f_0045cb0a();
    /* 0041762a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041762c: je 0x41767d */ if (fZ) goto L_0041767d;
L_0041762e:; BB(0x0041762e);
    /* 0041762e: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417635: jne 0x41767d */ if (!fZ) goto L_0041767d;
L_00417637:; BB(0x00417637);
    /* 00417637: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041763c: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417640: jne 0x41767d */ if (!fZ) goto L_0041767d;
L_00417642:; BB(0x00417642);
    /* 00417642: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00417644: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x417649u); f_0048ab58();
    /* 00417649: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041764c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041764f: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417653: je 0x417668 */ if (fZ) goto L_00417668;
L_00417655:; BB(0x00417655);
    /* 00417655: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417658: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417659: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041765b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041765e: call 0x41800d */ r_esp -= 4; W32(r_esp, 0x417663u); f_0041800d();
    /* 00417663: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00417666: jmp 0x41766f */ goto L_0041766f;
L_00417668:; BB(0x00417668);
    /* 00417668: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0041766f:; BB(0x0041766f);
    /* 0041766f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417672: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417673: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417676: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x41767bu); f_005e62ca();
    /* 0041767b: jmp 0x41768a */ goto L_0041768a;
L_0041767d:; BB(0x0041767d);
    /* 0041767d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041767f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00417682: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417684: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417687: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41768au); call_ind(t); }
L_0041768a:; BB(0x0041768a);
    /* 0041768a: jmp 0x41775d */ goto L_0041775d;
L_0041768f:; BB(0x0041768f);
    /* 0041768f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00417695: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x41769au); f_0045cb0a();
    /* 0041769a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041769c: je 0x4176c6 */ if (fZ) goto L_004176c6;
L_0041769e:; BB(0x0041769e);
    /* 0041769e: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004176a5: jne 0x4176c6 */ if (!fZ) goto L_004176c6;
L_004176a7:; BB(0x004176a7);
    /* 004176a7: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 004176ac: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004176b0: jne 0x4176c6 */ if (!fZ) goto L_004176c6;
L_004176b2:; BB(0x004176b2);
    /* 004176b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004176b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004176b6: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 004176bc: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004176bf: call 0x40d26a */ r_esp -= 4; W32(r_esp, 0x4176c4u); f_0040d26a();
    /* 004176c4: jmp 0x4176d3 */ goto L_004176d3;
L_004176c6:; BB(0x004176c6);
    /* 004176c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004176c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004176cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004176cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004176d0: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4176d3u); call_ind(t); }
L_004176d3:; BB(0x004176d3);
    /* 004176d3: jmp 0x41775d */ goto L_0041775d;
L_004176d8:; BB(0x004176d8);
    /* 004176d8: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 004176dd: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 004176e4: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004176ea: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 004176ed: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 004176f3: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004176f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004176f8: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4176fbu); call_ind(t); }
    /* 004176fb: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417700: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00417703: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417709: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0041770c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041770e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x417711u); call_ind(t); }
    /* 00417711: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417713: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417719: call 0x40f9ab */ r_esp -= 4; W32(r_esp, 0x41771eu); f_0040f9ab();
    /* 0041771e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00417720: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00417725: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00417728: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 0041772e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00417731: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417733: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417736u); call_ind(t); }
    /* 00417736: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417738: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 0041773d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00417740: mov edx, dword ptr [0x6f579c] */ r_edx = R32((u32)(0x6f579cu));
    /* 00417746: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00417749: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041774b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41774eu); call_ind(t); }
    /* 0041774e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417750: mov eax, dword ptr [0x6f579c] */ r_eax = R32((u32)(0x6f579cu));
    /* 00417755: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00417758: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x41775du); f_005e62ca();
L_0041775d:; BB(0x0041775d);
    /* 0041775d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041775f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417760: ret 4 */ FN_RET(0x004173da); r_esp += 8; return;
}

void f_00417777(void) /* FUN_00417777 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417777);
    /* 00417777: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417778: mov ebp, esp */ r_ebp = r_esp;
    /* 0041777a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041777d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417780: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00417783: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417784: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417787: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x41778cu); f_005e6160();
    /* 0041778c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041778f: mov dword ptr [ecx], 0x633c34 */ W32((u32)(r_ecx), 0x633c34u);
    /* 00417795: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417798: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0041779c: mov word ptr [edx + 0x20], ax */ W16((u32)(r_edx+0x20u), (u16)r_eax);
    /* 004177a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004177a3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004177a6: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 004177a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004177ac: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 004177b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004177b6: movsx edx, word ptr [ecx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 004177ba: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004177bd: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004177c1: ja 0x417833 */ if ((!fC&&!fZ)) goto L_00417833;
L_004177c3:; BB(0x004177c3);
    /* 004177c3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004177c6: jmp dword ptr [eax*4 + 0x41789e] */ { u32 t = R32((u32)(r_eax*4+0x41789eu)); switch (t) { case 0x4177cdu: goto L_004177cd; case 0x4177e2u: goto L_004177e2; case 0x4177f7u: goto L_004177f7; case 0x41780bu: goto L_0041780b; case 0x417820u: goto L_00417820; default: UNSUP(0x004177c6, "jump table entry is not a known target"); } }
L_004177cd:; BB(0x004177cd);
    /* 004177cd: push 0x13a7 */ { u32 v = 0x13a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004177d2: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004177d8: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 004177db: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4177e0u); f_005ea0c3();
    /* 004177e0: jmp 0x417833 */ goto L_00417833;
L_004177e2:; BB(0x004177e2);
    /* 004177e2: push 0x13a8 */ { u32 v = 0x13a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004177e7: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 004177ed: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 004177f0: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4177f5u); f_005ea0c3();
    /* 004177f5: jmp 0x417833 */ goto L_00417833;
L_004177f7:; BB(0x004177f7);
    /* 004177f7: push 0x13a9 */ { u32 v = 0x13a9u; r_esp -= 4; W32(r_esp, v); }
    /* 004177fc: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417801: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00417804: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x417809u); f_005ea0c3();
    /* 00417809: jmp 0x417833 */ goto L_00417833;
L_0041780b:; BB(0x0041780b);
    /* 0041780b: push 0x13aa */ { u32 v = 0x13aau; r_esp -= 4; W32(r_esp, v); }
    /* 00417810: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417816: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00417819: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x41781eu); f_005ea0c3();
    /* 0041781e: jmp 0x417833 */ goto L_00417833;
L_00417820:; BB(0x00417820);
    /* 00417820: push 0x13ab */ { u32 v = 0x13abu; r_esp -= 4; W32(r_esp, v); }
    /* 00417825: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041782b: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0041782e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x417833u); f_005ea0c3();
L_00417833:; BB(0x00417833);
    /* 00417833: push 0x13a6 */ { u32 v = 0x13a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00417838: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041783d: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00417840: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x417845u); f_005ea0c3();
    /* 00417845: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417847: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041784d: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00417850: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x417855u); f_005ea1cf();
    /* 00417855: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417857: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041785d: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00417860: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x417865u); f_005ea1cf();
    /* 00417865: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00417867: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041786c: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0041786f: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417875: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00417878: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041787a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x41787du); call_ind(t); }
    /* 0041787d: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0041787f: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417884: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00417887: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041788d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00417890: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417892: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417895u); call_ind(t); }
    /* 00417895: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417898: mov esp, ebp */ r_esp = r_ebp;
    /* 0041789a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041789b: ret 0xc */ FN_RET(0x00417777); r_esp += 16; return;
}

void f_004178b2(void) /* FUN_004178b2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004178b2);
    /* 004178b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004178b3: mov ebp, esp */ r_ebp = r_esp;
    /* 004178b5: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004178b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004178b9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004178bc: mov dword ptr [ebp - 0x20], 0x18a8b */ W32((u32)(r_ebp+0xffffffe0u), 0x18a8bu);
    /* 004178c3: mov dword ptr [ebp - 0x1c], 0x18a8c */ W32((u32)(r_ebp+0xffffffe4u), 0x18a8cu);
    /* 004178ca: mov dword ptr [ebp - 0x18], 0x18a8d */ W32((u32)(r_ebp+0xffffffe8u), 0x18a8du);
    /* 004178d1: mov word ptr [ebp - 0x14], 6 */ W16((u32)(r_ebp+0xffffffecu), 0x6u);
    /* 004178d7: mov word ptr [ebp - 0x12], 6 */ W16((u32)(r_ebp+0xffffffeeu), 0x6u);
    /* 004178dd: mov word ptr [ebp - 0x10], 6 */ W16((u32)(r_ebp+0xfffffff0u), 0x6u);
    /* 004178e3: mov word ptr [ebp - 0xe], 5 */ W16((u32)(r_ebp+0xfffffff2u), 0x5u);
    /* 004178e9: mov word ptr [ebp - 0xc], 5 */ W16((u32)(r_ebp+0xfffffff4u), 0x5u);
    /* 004178ef: mov word ptr [ebp - 0xa], 7 */ W16((u32)(r_ebp+0xfffffff6u), 0x7u);
    /* 004178f5: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 004178fa: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004178fd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417900: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417906: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00417909: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041790c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041790f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417910: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417913: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x417918u); f_005e626d();
    /* 00417918: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041791b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0041791e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00417921: cmp dword ptr [ebp - 0x28], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00417925: ja 0x417cae */ if ((!fC&&!fZ)) goto L_00417cae;
L_0041792b:; BB(0x0041792b);
    /* 0041792b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041792e: jmp dword ptr [ecx*4 + 0x417cb5] */ { u32 t = R32((u32)(r_ecx*4+0x417cb5u)); switch (t) { case 0x417935u: goto L_00417935; case 0x4179bbu: goto L_004179bb; case 0x417afau: goto L_00417afa; case 0x417b6cu: goto L_00417b6c; case 0x417c6bu: goto L_00417c6b; default: UNSUP(0x0041792e, "jump table entry is not a known target"); } }
L_00417935:; BB(0x00417935);
    /* 00417935: mov word ptr [0x6f5780], 0 */ W16((u32)(0x6f5780u), 0x0u);
    /* 0041793e: mov word ptr [0x6f5770], 0 */ W16((u32)(0x6f5770u), 0x0u);
    /* 00417947: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041794a: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x41794fu); f_005ea2f8();
    /* 0041794f: mov word ptr [0x6f577c], ax */ W16((u32)(0x6f577cu), (u16)r_eax);
    /* 00417955: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417958: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x41795du); f_005ea2f8();
    /* 0041795d: mov word ptr [0x6f5774], ax */ W16((u32)(0x6f5774u), (u16)r_eax);
    /* 00417963: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417965: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417968: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x41796du); f_005ea1cf();
    /* 0041796d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041796f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417972: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x417977u); f_005ea1cf();
    /* 00417977: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041797d: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00417980: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417985: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00417988: call 0x40a82b */ r_esp -= 4; W32(r_esp, 0x41798du); f_0040a82b();
    /* 0041798d: cmp dword ptr [esi + 0x24], eax */ {  u32 a = R32((u32)(r_esi+0x24u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417990: jne 0x41799c */ if (!fZ) goto L_0041799c;
L_00417992:; BB(0x00417992);
    /* 00417992: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417995: mov dword ptr [ecx + 0x28], 1 */ W32((u32)(r_ecx+0x28u), 0x1u);
L_0041799c:; BB(0x0041799c);
    /* 0041799c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041799e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004179a1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004179a3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004179a6: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4179a9u); call_ind(t); }
    /* 004179a9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004179ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004179ae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004179b0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004179b3: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4179b6u); call_ind(t); }
    /* 004179b6: jmp 0x417cae */ goto L_00417cae;
L_004179bb:; BB(0x004179bb);
    /* 004179bb: mov ax, word ptr [0x6f5780] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6f5780u))) & 0xffffu);
    /* 004179c1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004179c5: mov word ptr [0x6f5780], ax */ W16((u32)(0x6f5780u), (u16)r_eax);
    /* 004179cb: movsx ecx, word ptr [0x6f5780] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 004179d2: movsx edx, word ptr [0x6f577c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x6f577cu));
    /* 004179d9: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004179db: jg 0x4179ed */ if ((!fZ&&fS==fO)) goto L_004179ed;
L_004179dd:; BB(0x004179dd);
    /* 004179dd: movsx eax, word ptr [0x6f5780] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 004179e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004179e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004179e8: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4179edu); f_005ea1cf();
L_004179ed:; BB(0x004179ed);
    /* 004179ed: movsx ecx, word ptr [0x6f5780] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 004179f4: movsx edx, word ptr [0x6f5774] */ r_edx = (u32)(i32)(i16)R16((u32)(0x6f5774u));
    /* 004179fb: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004179fd: jg 0x417a0f */ if ((!fZ&&fS==fO)) goto L_00417a0f;
L_004179ff:; BB(0x004179ff);
    /* 004179ff: movsx eax, word ptr [0x6f5780] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417a06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417a07: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417a0a: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x417a0fu); f_005ea1cf();
L_00417a0f:; BB(0x00417a0f);
    /* 00417a0f: movsx ecx, word ptr [0x6f5780] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417a16: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417a19: movsx eax, word ptr [edx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 00417a1d: movsx edx, word ptr [ebp + eax*2 - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xffffffecu));
    /* 00417a22: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00417a25: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417a27: jne 0x417a4e */ if (!fZ) goto L_00417a4e;
L_00417a29:; BB(0x00417a29);
    /* 00417a29: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417a2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417a2d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417a2f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417a31: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x417a36u); f_0060ee31();
    /* 00417a36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417a39: mov eax, dword ptr [ebp + eax*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 00417a3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417a3e: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 00417a44: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00417a47: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x417a4cu); f_005e8389();
    /* 00417a4c: jmp 0x417a90 */ goto L_00417a90;
L_00417a4e:; BB(0x00417a4e);
    /* 00417a4e: movsx edx, word ptr [0x6f5780] */ r_edx = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417a55: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417a58: movsx ecx, word ptr [eax + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 00417a5c: movsx eax, word ptr [ebp + ecx*2 - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx*2+0xffffffecu));
    /* 00417a61: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417a63: jne 0x417a90 */ if (!fZ) goto L_00417a90;
L_00417a65:; BB(0x00417a65);
    /* 00417a65: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417a68: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417a6c: je 0x417a7d */ if (fZ) goto L_00417a7d;
L_00417a6e:; BB(0x00417a6e);
    /* 00417a6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417a70: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417a76: call 0x4146b2 */ r_esp -= 4; W32(r_esp, 0x417a7bu); f_004146b2();
    /* 00417a7b: jmp 0x417a90 */ goto L_00417a90;
L_00417a7d:; BB(0x00417a7d);
    /* 00417a7d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417a80: mov ax, word ptr [edx + 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x20u))) & 0xffffu);
    /* 00417a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417a85: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417a8b: call 0x414794 */ r_esp -= 4; W32(r_esp, 0x417a90u); f_00414794();
L_00417a90:; BB(0x00417a90);
    /* 00417a90: movsx ecx, word ptr [0x6f5780] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417a97: movsx edx, word ptr [0x6f577c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x6f577cu));
    /* 00417a9e: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00417aa0: jl 0x417ab4 */ if ((fS!=fO)) goto L_00417ab4;
L_00417aa2:; BB(0x00417aa2);
    /* 00417aa2: movsx eax, word ptr [0x6f5780] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417aa9: movsx ecx, word ptr [0x6f5774] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5774u));
    /* 00417ab0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00417ab2: jge 0x417ac3 */ if ((fS==fO)) goto L_00417ac3;
L_00417ab4:; BB(0x00417ab4);
    /* 00417ab4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ab6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417ab9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417abb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417abe: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x417ac1u); call_ind(t); }
    /* 00417ac1: jmp 0x417ae8 */ goto L_00417ae8;
L_00417ac3:; BB(0x00417ac3);
    /* 00417ac3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417ac6: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417aca: je 0x417adb */ if (fZ) goto L_00417adb;
L_00417acc:; BB(0x00417acc);
    /* 00417acc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ace: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417ad1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417ad3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417ad6: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x417ad9u); call_ind(t); }
    /* 00417ad9: jmp 0x417ae8 */ goto L_00417ae8;
L_00417adb:; BB(0x00417adb);
    /* 00417adb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00417add: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417ae0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417ae2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417ae5: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417ae8u); call_ind(t); }
L_00417ae8:; BB(0x00417ae8);
    /* 00417ae8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00417aea: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417aed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417aef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417af2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x417af5u); call_ind(t); }
    /* 00417af5: jmp 0x417cae */ goto L_00417cae;
L_00417afa:; BB(0x00417afa);
    /* 00417afa: mov word ptr [0x6f5780], 0 */ W16((u32)(0x6f5780u), 0x0u);
    /* 00417b03: push 0x13af */ { u32 v = 0x13afu; r_esp -= 4; W32(r_esp, v); }
    /* 00417b08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417b0b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x417b10u); f_005ea0c3();
    /* 00417b10: push 0x13ae */ { u32 v = 0x13aeu; r_esp -= 4; W32(r_esp, v); }
    /* 00417b15: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417b18: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x417b1du); f_005ea0c3();
    /* 00417b1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417b22: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x417b27u); f_005ea1cf();
    /* 00417b27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417b2c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x417b31u); f_005ea1cf();
    /* 00417b31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417b34: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x417b39u); f_005ea2f8();
    /* 00417b39: mov word ptr [0x6f577c], ax */ W16((u32)(0x6f577cu), (u16)r_eax);
    /* 00417b3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417b42: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x417b47u); f_005ea2f8();
    /* 00417b47: mov word ptr [0x6f5774], ax */ W16((u32)(0x6f5774u), (u16)r_eax);
    /* 00417b4d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b4f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417b52: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417b54: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417b57: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417b5au); call_ind(t); }
    /* 00417b5a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b5c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417b5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417b61: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417b64: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x417b67u); call_ind(t); }
    /* 00417b67: jmp 0x417cae */ goto L_00417cae;
L_00417b6c:; BB(0x00417b6c);
    /* 00417b6c: mov ax, word ptr [0x6f5780] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6f5780u))) & 0xffffu);
    /* 00417b72: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00417b76: mov word ptr [0x6f5780], ax */ W16((u32)(0x6f5780u), (u16)r_eax);
    /* 00417b7c: movsx ecx, word ptr [0x6f5780] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417b83: movsx edx, word ptr [0x6f577c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x6f577cu));
    /* 00417b8a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00417b8c: jg 0x417b9e */ if ((!fZ&&fS==fO)) goto L_00417b9e;
L_00417b8e:; BB(0x00417b8e);
    /* 00417b8e: movsx eax, word ptr [0x6f5780] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417b95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417b96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417b99: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x417b9eu); f_005ea1cf();
L_00417b9e:; BB(0x00417b9e);
    /* 00417b9e: movsx ecx, word ptr [0x6f5780] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417ba5: movsx edx, word ptr [0x6f5774] */ r_edx = (u32)(i32)(i16)R16((u32)(0x6f5774u));
    /* 00417bac: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00417bae: jg 0x417bc0 */ if ((!fZ&&fS==fO)) goto L_00417bc0;
L_00417bb0:; BB(0x00417bb0);
    /* 00417bb0: movsx eax, word ptr [0x6f5780] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417bb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417bb8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417bbb: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x417bc0u); f_005ea1cf();
L_00417bc0:; BB(0x00417bc0);
    /* 00417bc0: movsx ecx, word ptr [0x6f5780] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417bc7: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417bca: jne 0x417be4 */ if (!fZ) goto L_00417be4;
L_00417bcc:; BB(0x00417bcc);
    /* 00417bcc: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417bd2: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00417bd5: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417bda: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00417bdd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417bdf: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x417be2u); call_ind(t); }
    /* 00417be2: jmp 0x417c1c */ goto L_00417c1c;
L_00417be4:; BB(0x00417be4);
    /* 00417be4: movsx ecx, word ptr [0x6f5780] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417beb: movsx edx, word ptr [ebp - 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff6u));
    /* 00417bef: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417bf1: jne 0x417c1c */ if (!fZ) goto L_00417c1c;
L_00417bf3:; BB(0x00417bf3);
    /* 00417bf3: push 0x13b1 */ { u32 v = 0x13b1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417bf8: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417bfd: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00417c00: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x417c05u); f_005ea0c3();
    /* 00417c05: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417c0b: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00417c0e: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417c14: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00417c17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417c19: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x417c1cu); call_ind(t); }
L_00417c1c:; BB(0x00417c1c);
    /* 00417c1c: movsx eax, word ptr [0x6f5780] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417c23: movsx ecx, word ptr [0x6f577c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f577cu));
    /* 00417c2a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00417c2c: jl 0x417c40 */ if ((fS!=fO)) goto L_00417c40;
L_00417c2e:; BB(0x00417c2e);
    /* 00417c2e: movsx edx, word ptr [0x6f5780] */ r_edx = (u32)(i32)(i16)R16((u32)(0x6f5780u));
    /* 00417c35: movsx eax, word ptr [0x6f5774] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5774u));
    /* 00417c3c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00417c3e: jge 0x417c4f */ if ((fS==fO)) goto L_00417c4f;
L_00417c40:; BB(0x00417c40);
    /* 00417c40: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c42: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417c45: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417c47: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417c4a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417c4du); call_ind(t); }
    /* 00417c4d: jmp 0x417c5c */ goto L_00417c5c;
L_00417c4f:; BB(0x00417c4f);
    /* 00417c4f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c51: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417c54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417c56: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417c59: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417c5cu); call_ind(t); }
L_00417c5c:; BB(0x00417c5c);
    /* 00417c5c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c5e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417c61: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417c63: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417c66: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x417c69u); call_ind(t); }
    /* 00417c69: jmp 0x417cae */ goto L_00417cae;
L_00417c6b:; BB(0x00417c6b);
    /* 00417c6b: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417c70: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417c72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417c75: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417c78u); call_ind(t); }
    /* 00417c78: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c7a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417c7d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417c7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417c82: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417c85u); call_ind(t); }
    /* 00417c85: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417c88: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417c8c: je 0x417cae */ if (fZ) goto L_00417cae;
L_00417c8e:; BB(0x00417c8e);
    /* 00417c8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c90: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417c93: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00417c96: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417c99: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00417c9c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417c9e: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x417ca1u); call_ind(t); }
    /* 00417ca1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ca3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417ca6: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00417ca9: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x417caeu); f_005e62ca();
L_00417cae:; BB(0x00417cae);
    /* 00417cae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00417caf: mov esp, ebp */ r_esp = r_ebp;
    /* 00417cb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417cb2: ret 4 */ FN_RET(0x004178b2); r_esp += 8; return;
}

void f_00417cc9(void) /* FUN_00417cc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417cc9);
    /* 00417cc9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417cca: mov ebp, esp */ r_ebp = r_esp;
    /* 00417ccc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417ccd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417cd0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00417cd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417cd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417cd7: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x417cdcu); f_005e6160();
    /* 00417cdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417cdf: mov dword ptr [ecx], 0x633c4c */ W32((u32)(r_ecx), 0x633c4cu);
    /* 00417ce5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417ce8: mov esp, ebp */ r_esp = r_ebp;
    /* 00417cea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417ceb: ret 4 */ FN_RET(0x00417cc9); r_esp += 8; return;
}

void f_00417cee(void) /* FUN_00417cee */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417cee);
    /* 00417cee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417cef: mov ebp, esp */ r_ebp = r_esp;
    /* 00417cf1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417cf4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00417cf7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00417cfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417cfb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417cfe: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x417d03u); f_005e626d();
    /* 00417d03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417d06: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00417d09: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00417d0c: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00417d10: ja 0x417fef */ if ((!fC&&!fZ)) goto L_00417fef;
L_00417d16:; BB(0x00417d16);
    /* 00417d16: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417d19: jmp dword ptr [eax*4 + 0x417ff5] */ { u32 t = R32((u32)(r_eax*4+0x417ff5u)); switch (t) { case 0x417d20u: goto L_00417d20; case 0x417d69u: goto L_00417d69; case 0x417e06u: goto L_00417e06; case 0x417ed3u: goto L_00417ed3; case 0x417f29u: goto L_00417f29; case 0x417fc6u: goto L_00417fc6; default: UNSUP(0x00417d19, "jump table entry is not a known target"); } }
L_00417d20:; BB(0x00417d20);
    /* 00417d20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417d25: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417d27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417d2a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417d2du); call_ind(t); }
    /* 00417d2d: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417d33: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x417d38u); f_0040f81e();
    /* 00417d38: cmp dword ptr [eax + 0x144], 2 */ {  u32 a = R32((u32)(r_eax+0x144u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417d3f: jne 0x417d57 */ if (!fZ) goto L_00417d57;
L_00417d41:; BB(0x00417d41);
    /* 00417d41: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417d44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417d45: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d47: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417d4d: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00417d50: call 0x40d34d */ r_esp -= 4; W32(r_esp, 0x417d55u); f_0040d34d();
    /* 00417d55: jmp 0x417d64 */ goto L_00417d64;
L_00417d57:; BB(0x00417d57);
    /* 00417d57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d59: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417d5c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417d5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417d61: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x417d64u); call_ind(t); }
L_00417d64:; BB(0x00417d64);
    /* 00417d64: jmp 0x417fef */ goto L_00417fef;
L_00417d69:; BB(0x00417d69);
    /* 00417d69: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d6b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00417d71: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x417d76u); f_0045cd25();
    /* 00417d76: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00417d79: jge 0x417d88 */ if ((fS==fO)) goto L_00417d88;
L_00417d7b:; BB(0x00417d7b);
    /* 00417d7b: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417d81: mov dword ptr [ecx + 0x54], 1 */ W32((u32)(r_ecx+0x54u), 0x1u);
L_00417d88:; BB(0x00417d88);
    /* 00417d88: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d8a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417d8d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417d8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417d92: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x417d95u); call_ind(t); }
    /* 00417d95: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00417d9b: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x417da0u); f_0045cb0a();
    /* 00417da0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417da2: je 0x417df4 */ if (fZ) goto L_00417df4;
L_00417da4:; BB(0x00417da4);
    /* 00417da4: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417dab: jne 0x417df4 */ if (!fZ) goto L_00417df4;
L_00417dad:; BB(0x00417dad);
    /* 00417dad: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417db3: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417db7: jne 0x417df4 */ if (!fZ) goto L_00417df4;
L_00417db9:; BB(0x00417db9);
    /* 00417db9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00417dbb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x417dc0u); f_0048ab58();
    /* 00417dc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417dc3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00417dc6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417dca: je 0x417ddf */ if (fZ) goto L_00417ddf;
L_00417dcc:; BB(0x00417dcc);
    /* 00417dcc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417dcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417dd0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417dd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417dd5: call 0x41800d */ r_esp -= 4; W32(r_esp, 0x417ddau); f_0041800d();
    /* 00417dda: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00417ddd: jmp 0x417de6 */ goto L_00417de6;
L_00417ddf:; BB(0x00417ddf);
    /* 00417ddf: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00417de6:; BB(0x00417de6);
    /* 00417de6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00417de9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417dea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417ded: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x417df2u); f_005e62ca();
    /* 00417df2: jmp 0x417e01 */ goto L_00417e01;
L_00417df4:; BB(0x00417df4);
    /* 00417df4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417df6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417df9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417dfb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417dfe: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x417e01u); call_ind(t); }
L_00417e01:; BB(0x00417e01);
    /* 00417e01: jmp 0x417fef */ goto L_00417fef;
L_00417e06:; BB(0x00417e06);
    /* 00417e06: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e08: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417e0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417e0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417e10: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417e13u); call_ind(t); }
    /* 00417e13: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00417e19: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x417e1eu); f_0045cb0a();
    /* 00417e1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417e20: je 0x417e84 */ if (fZ) goto L_00417e84;
L_00417e22:; BB(0x00417e22);
    /* 00417e22: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417e29: jne 0x417e84 */ if (!fZ) goto L_00417e84;
L_00417e2b:; BB(0x00417e2b);
    /* 00417e2b: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417e30: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417e34: jne 0x417e84 */ if (!fZ) goto L_00417e84;
L_00417e36:; BB(0x00417e36);
    /* 00417e36: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00417e38: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x417e3du); f_0048ab58();
    /* 00417e3d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417e40: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00417e43: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417e47: je 0x417e6f */ if (fZ) goto L_00417e6f;
L_00417e49:; BB(0x00417e49);
    /* 00417e49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417e4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417e4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e4f: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417e55: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x417e5au); f_0040f81e();
    /* 00417e5a: mov ecx, eax */ r_ecx = r_eax;
    /* 00417e5c: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x417e61u); f_004259f1();
    /* 00417e61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417e62: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417e65: call 0x417777 */ r_esp -= 4; W32(r_esp, 0x417e6au); f_00417777();
    /* 00417e6a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00417e6d: jmp 0x417e76 */ goto L_00417e76;
L_00417e6f:; BB(0x00417e6f);
    /* 00417e6f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00417e76:; BB(0x00417e76);
    /* 00417e76: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00417e79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417e7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417e7d: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x417e82u); f_005e62ca();
    /* 00417e82: jmp 0x417ece */ goto L_00417ece;
L_00417e84:; BB(0x00417e84);
    /* 00417e84: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417e87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417e88: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417e8e: call 0x4146b2 */ r_esp -= 4; W32(r_esp, 0x417e93u); f_004146b2();
    /* 00417e93: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417e99: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00417e9c: call 0x40a7fe */ r_esp -= 4; W32(r_esp, 0x417ea1u); f_0040a7fe();
    /* 00417ea1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417ea3: je 0x417ece */ if (fZ) goto L_00417ece;
L_00417ea5:; BB(0x00417ea5);
    /* 00417ea5: push 0x13b1 */ { u32 v = 0x13b1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417eaa: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417eb0: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00417eb3: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x417eb8u); f_005ea0c3();
    /* 00417eb8: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417ebd: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00417ec0: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417ec6: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00417ec9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417ecb: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x417eceu); call_ind(t); }
L_00417ece:; BB(0x00417ece);
    /* 00417ece: jmp 0x417fef */ goto L_00417fef;
L_00417ed3:; BB(0x00417ed3);
    /* 00417ed3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ed5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417ed8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417eda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417edd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417ee0u); call_ind(t); }
    /* 00417ee0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00417ee6: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x417eebu); f_0045cb0a();
    /* 00417eeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417eed: je 0x417f17 */ if (fZ) goto L_00417f17;
L_00417eef:; BB(0x00417eef);
    /* 00417eef: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417ef6: jne 0x417f17 */ if (!fZ) goto L_00417f17;
L_00417ef8:; BB(0x00417ef8);
    /* 00417ef8: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417efd: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417f01: jne 0x417f17 */ if (!fZ) goto L_00417f17;
L_00417f03:; BB(0x00417f03);
    /* 00417f03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417f06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417f07: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417f0d: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00417f10: call 0x40d26a */ r_esp -= 4; W32(r_esp, 0x417f15u); f_0040d26a();
    /* 00417f15: jmp 0x417f24 */ goto L_00417f24;
L_00417f17:; BB(0x00417f17);
    /* 00417f17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417f19: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417f1c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417f1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417f21: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x417f24u); call_ind(t); }
L_00417f24:; BB(0x00417f24);
    /* 00417f24: jmp 0x417fef */ goto L_00417fef;
L_00417f29:; BB(0x00417f29);
    /* 00417f29: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00417f2b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417f2e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417f30: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417f33: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x417f36u); call_ind(t); }
    /* 00417f36: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417f3b: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 00417f42: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417f48: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00417f4b: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417f51: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00417f54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417f56: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x417f59u); call_ind(t); }
    /* 00417f59: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00417f5e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00417f61: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00417f67: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00417f6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417f6c: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x417f6fu); call_ind(t); }
    /* 00417f6f: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417f75: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x417f7au); f_0040f81e();
    /* 00417f7a: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00417f80: call 0x40c1a9 */ r_esp -= 4; W32(r_esp, 0x417f85u); f_0040c1a9();
    /* 00417f85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417f87: je 0x417fb7 */ if (fZ) goto L_00417fb7;
L_00417f89:; BB(0x00417f89);
    /* 00417f89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417f8b: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417f91: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x417f96u); f_0040f81e();
    /* 00417f96: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00417f9c: call 0x40bcd8 */ r_esp -= 4; W32(r_esp, 0x417fa1u); f_0040bcd8();
    /* 00417fa1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417fa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417fa5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00417fa7: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00417fad: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00417fb0: call 0x40d34d */ r_esp -= 4; W32(r_esp, 0x417fb5u); f_0040d34d();
    /* 00417fb5: jmp 0x417fc4 */ goto L_00417fc4;
L_00417fb7:; BB(0x00417fb7);
    /* 00417fb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417fb9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417fbc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417fbe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417fc1: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x417fc4u); call_ind(t); }
L_00417fc4:; BB(0x00417fc4);
    /* 00417fc4: jmp 0x417fef */ goto L_00417fef;
L_00417fc6:; BB(0x00417fc6);
    /* 00417fc6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417fc9: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417fcd: je 0x417fef */ if (fZ) goto L_00417fef;
L_00417fcf:; BB(0x00417fcf);
    /* 00417fcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417fd1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417fd4: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00417fd7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417fda: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00417fdd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417fdf: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x417fe2u); call_ind(t); }
    /* 00417fe2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417fe4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417fe7: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00417fea: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x417fefu); f_005e62ca();
L_00417fef:; BB(0x00417fef);
    /* 00417fef: mov esp, ebp */ r_esp = r_ebp;
    /* 00417ff1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417ff2: ret 4 */ FN_RET(0x00417cee); r_esp += 8; return;
}

void f_0041800d(void) /* FUN_0041800d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041800d);
    /* 0041800d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041800e: mov ebp, esp */ r_ebp = r_esp;
    /* 00418010: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418011: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418014: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00418017: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418018: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041801b: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x418020u); f_005e6160();
    /* 00418020: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418023: mov dword ptr [ecx], 0x633c64 */ W32((u32)(r_ecx), 0x633c64u);
    /* 00418029: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041802c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041802f: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00418032: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418036: je 0x418060 */ if (fZ) goto L_00418060;
L_00418038:; BB(0x00418038);
    /* 00418038: push 0x13a2 */ { u32 v = 0x13a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041803d: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00418043: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00418046: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x41804bu); f_005ea0c3();
    /* 0041804b: push 0x13a3 */ { u32 v = 0x13a3u; r_esp -= 4; W32(r_esp, v); }
    /* 00418050: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00418056: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00418059: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x41805eu); f_005ea0c3();
    /* 0041805e: jmp 0x418085 */ goto L_00418085;
L_00418060:; BB(0x00418060);
    /* 00418060: push 0x13a4 */ { u32 v = 0x13a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00418065: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041806a: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0041806d: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x418072u); f_005ea0c3();
    /* 00418072: push 0x13a5 */ { u32 v = 0x13a5u; r_esp -= 4; W32(r_esp, v); }
    /* 00418077: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041807d: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00418080: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x418085u); f_005ea0c3();
L_00418085:; BB(0x00418085);
    /* 00418085: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418087: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041808d: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00418090: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x418095u); f_005ea1cf();
    /* 00418095: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418097: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041809c: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0041809f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4180a4u); f_005ea1cf();
    /* 004180a4: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004180aa: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 004180ad: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 004180b3: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 004180b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004180b8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4180bbu); call_ind(t); }
    /* 004180bb: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 004180c0: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004180c3: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 004180c9: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004180cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004180ce: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4180d1u); call_ind(t); }
    /* 004180d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004180d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004180d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004180d7: ret 8 */ FN_RET(0x0041800d); r_esp += 12; return;
}

void f_004180da(void) /* FUN_004180da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004180da);
    /* 004180da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004180db: mov ebp, esp */ r_ebp = r_esp;
    /* 004180dd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004180e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004180e1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004180e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004180e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004180e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004180eb: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x4180f0u); f_005e626d();
    /* 004180f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004180f3: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 004180f6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004180f9: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004180fd: je 0x418114 */ if (fZ) goto L_00418114;
L_004180ff:; BB(0x004180ff);
    /* 004180ff: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418103: je 0x418163 */ if (fZ) goto L_00418163;
L_00418105:; BB(0x00418105);
    /* 00418105: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418109: je 0x418271 */ if (fZ) goto L_00418271;
L_0041810f:; BB(0x0041810f);
    /* 0041810f: jmp 0x41829a */ goto L_0041829a;
L_00418114:; BB(0x00418114);
    /* 00418114: mov word ptr [0x6f5778], 0 */ W16((u32)(0x6f5778u), 0x0u);
    /* 0041811d: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00418122: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00418125: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x41812au); f_005ea2f8();
    /* 0041812a: mov word ptr [0x6f5784], ax */ W16((u32)(0x6f5784u), (u16)r_eax);
    /* 00418130: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00418136: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00418139: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x41813eu); f_005ea2f8();
    /* 0041813e: mov word ptr [0x6f5788], ax */ W16((u32)(0x6f5788u), (u16)r_eax);
    /* 00418144: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418146: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418149: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041814b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041814e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x418151u); call_ind(t); }
    /* 00418151: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00418153: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418156: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00418158: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041815b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41815eu); call_ind(t); }
    /* 0041815e: jmp 0x41829a */ goto L_0041829a;
L_00418163:; BB(0x00418163);
    /* 00418163: mov ax, word ptr [0x6f5778] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6f5778u))) & 0xffffu);
    /* 00418169: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0041816d: mov word ptr [0x6f5778], ax */ W16((u32)(0x6f5778u), (u16)r_eax);
    /* 00418173: movsx ecx, word ptr [0x6f5778] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5778u));
    /* 0041817a: movsx edx, word ptr [0x6f5788] */ r_edx = (u32)(i32)(i16)R16((u32)(0x6f5788u));
    /* 00418181: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418183: jg 0x41819b */ if ((!fZ&&fS==fO)) goto L_0041819b;
L_00418185:; BB(0x00418185);
    /* 00418185: movsx eax, word ptr [0x6f5778] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5778u));
    /* 0041818c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041818d: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00418193: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00418196: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x41819bu); f_005ea1cf();
L_0041819b:; BB(0x0041819b);
    /* 0041819b: movsx edx, word ptr [0x6f5778] */ r_edx = (u32)(i32)(i16)R16((u32)(0x6f5778u));
    /* 004181a2: movsx eax, word ptr [0x6f5784] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5784u));
    /* 004181a9: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004181ab: jg 0x4181c3 */ if ((!fZ&&fS==fO)) goto L_004181c3;
L_004181ad:; BB(0x004181ad);
    /* 004181ad: movsx ecx, word ptr [0x6f5778] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5778u));
    /* 004181b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004181b5: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 004181bb: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 004181be: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4181c3u); f_005ea1cf();
L_004181c3:; BB(0x004181c3);
    /* 004181c3: movsx eax, word ptr [0x6f5778] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5778u));
    /* 004181ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004181cd: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004181d0: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 004181d2: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 004181d4: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004181d7: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004181da: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004181dc: jne 0x418222 */ if (!fZ) goto L_00418222;
L_004181de:; BB(0x004181de);
    /* 004181de: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 004181e3: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 004181e6: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004181ec: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004181ef: call 0x40a82b */ r_esp -= 4; W32(r_esp, 0x4181f4u); f_0040a82b();
    /* 004181f4: cmp dword ptr [esi + 0x24], eax */ {  u32 a = R32((u32)(r_esi+0x24u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004181f7: jne 0x418222 */ if (!fZ) goto L_00418222;
L_004181f9:; BB(0x004181f9);
    /* 004181f9: push 0x13a1 */ { u32 v = 0x13a1u; r_esp -= 4; W32(r_esp, v); }
    /* 004181fe: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00418204: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00418207: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x41820cu); f_005ea0c3();
    /* 0041820c: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00418211: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00418214: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041821a: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0041821d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041821f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x418222u); call_ind(t); }
L_00418222:; BB(0x00418222);
    /* 00418222: movsx eax, word ptr [0x6f5778] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5778u));
    /* 00418229: movsx ecx, word ptr [0x6f5784] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x6f5784u));
    /* 00418230: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418232: jl 0x418246 */ if ((fS!=fO)) goto L_00418246;
L_00418234:; BB(0x00418234);
    /* 00418234: movsx edx, word ptr [0x6f5778] */ r_edx = (u32)(i32)(i16)R16((u32)(0x6f5778u));
    /* 0041823b: movsx eax, word ptr [0x6f5788] */ r_eax = (u32)(i32)(i16)R16((u32)(0x6f5788u));
    /* 00418242: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418244: jge 0x418255 */ if ((fS==fO)) goto L_00418255;
L_00418246:; BB(0x00418246);
    /* 00418246: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418248: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041824b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041824d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418250: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x418253u); call_ind(t); }
    /* 00418253: jmp 0x418262 */ goto L_00418262;
L_00418255:; BB(0x00418255);
    /* 00418255: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00418257: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041825a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041825c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041825f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x418262u); call_ind(t); }
L_00418262:; BB(0x00418262);
    /* 00418262: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00418264: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418267: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00418269: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041826c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41826fu); call_ind(t); }
    /* 0041826f: jmp 0x41829a */ goto L_0041829a;
L_00418271:; BB(0x00418271);
    /* 00418271: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418274: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418278: je 0x41829a */ if (fZ) goto L_0041829a;
L_0041827a:; BB(0x0041827a);
    /* 0041827a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041827c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041827f: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00418282: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418285: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00418288: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041828a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41828du); call_ind(t); }
    /* 0041828d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041828f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418292: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00418295: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x41829au); f_005e62ca();
L_0041829a:; BB(0x0041829a);
    /* 0041829a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041829b: mov esp, ebp */ r_esp = r_ebp;
    /* 0041829d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041829e: ret 4 */ FN_RET(0x004180da); r_esp += 8; return;
}

void f_004182b0(void) /* FUN_004182b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004182b0);
    /* 004182b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004182b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004182b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004182b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004182b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004182ba: call 0x40a239 */ r_esp -= 4; W32(r_esp, 0x4182bfu); f_0040a239();
    /* 004182bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004182c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004182c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004182c7: je 0x4182d5 */ if (fZ) goto L_004182d5;
L_004182c9:; BB(0x004182c9);
    /* 004182c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004182cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004182cd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4182d2u); f_0048ac1b();
    /* 004182d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004182d5:; BB(0x004182d5);
    /* 004182d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004182d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004182da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004182db: ret 4 */ FN_RET(0x004182b0); r_esp += 8; return;
}

void f_004182e0(void) /* FUN_004182e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004182e0);
    /* 004182e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004182e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004182e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004182e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004182e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004182ea: call 0x40a62a */ r_esp -= 4; W32(r_esp, 0x4182efu); f_0040a62a();
    /* 004182ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004182f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004182f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004182f7: je 0x418305 */ if (fZ) goto L_00418305;
L_004182f9:; BB(0x004182f9);
    /* 004182f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004182fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004182fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x418302u); f_0048ac1b();
    /* 00418302: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00418305:; BB(0x00418305);
    /* 00418305: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418308: mov esp, ebp */ r_esp = r_ebp;
    /* 0041830a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041830b: ret 4 */ FN_RET(0x004182e0); r_esp += 8; return;
}

void f_00418310(void) /* FUN_00418310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418310);
    /* 00418310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418311: mov ebp, esp */ r_ebp = r_esp;
    /* 00418313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041831a: call 0x40ac54 */ r_esp -= 4; W32(r_esp, 0x41831fu); f_0040ac54();
    /* 0041831f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00418322: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00418325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418327: je 0x418335 */ if (fZ) goto L_00418335;
L_00418329:; BB(0x00418329);
    /* 00418329: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041832c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041832d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x418332u); f_0048ac1b();
    /* 00418332: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00418335:; BB(0x00418335);
    /* 00418335: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418338: mov esp, ebp */ r_esp = r_ebp;
    /* 0041833a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041833b: ret 4 */ FN_RET(0x00418310); r_esp += 8; return;
}

void f_00418340(void) /* FUN_00418340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418340);
    /* 00418340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418341: mov ebp, esp */ r_ebp = r_esp;
    /* 00418343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041834a: call 0x40c874 */ r_esp -= 4; W32(r_esp, 0x41834fu); f_0040c874();
    /* 0041834f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00418352: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00418355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418357: je 0x418365 */ if (fZ) goto L_00418365;
L_00418359:; BB(0x00418359);
    /* 00418359: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041835c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041835d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x418362u); f_0048ac1b();
    /* 00418362: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00418365:; BB(0x00418365);
    /* 00418365: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418368: mov esp, ebp */ r_esp = r_ebp;
    /* 0041836a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041836b: ret 4 */ FN_RET(0x00418340); r_esp += 8; return;
}

void f_00418370(void) /* FUN_00418370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418370);
    /* 00418370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418371: mov ebp, esp */ r_ebp = r_esp;
    /* 00418373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418377: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041837a: call 0x40d5dc */ r_esp -= 4; W32(r_esp, 0x41837fu); f_0040d5dc();
    /* 0041837f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00418382: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00418385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418387: je 0x418395 */ if (fZ) goto L_00418395;
L_00418389:; BB(0x00418389);
    /* 00418389: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041838c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041838d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x418392u); f_0048ac1b();
    /* 00418392: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00418395:; BB(0x00418395);
    /* 00418395: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418398: mov esp, ebp */ r_esp = r_ebp;
    /* 0041839a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041839b: ret 4 */ FN_RET(0x00418370); r_esp += 8; return;
}

void f_004183a0(void) /* FUN_004183a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004183a0);
    /* 004183a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004183a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004183a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004183a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004183a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004183aa: call 0x40de3c */ r_esp -= 4; W32(r_esp, 0x4183afu); f_0040de3c();
    /* 004183af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004183b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004183b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004183b7: je 0x4183c5 */ if (fZ) goto L_004183c5;
L_004183b9:; BB(0x004183b9);
    /* 004183b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004183bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004183bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4183c2u); f_0048ac1b();
    /* 004183c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004183c5:; BB(0x004183c5);
    /* 004183c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004183c8: mov esp, ebp */ r_esp = r_ebp;
    /* 004183ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004183cb: ret 4 */ FN_RET(0x004183a0); r_esp += 8; return;
}

void f_004183d0(void) /* FUN_004183d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004183d0);
    /* 004183d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004183d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004183d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004183d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004183d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004183da: call 0x40e8a0 */ r_esp -= 4; W32(r_esp, 0x4183dfu); f_0040e8a0();
    /* 004183df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004183e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004183e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004183e7: je 0x4183f5 */ if (fZ) goto L_004183f5;
L_004183e9:; BB(0x004183e9);
    /* 004183e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004183ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004183ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4183f2u); f_0048ac1b();
    /* 004183f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004183f5:; BB(0x004183f5);
    /* 004183f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004183f8: mov esp, ebp */ r_esp = r_ebp;
    /* 004183fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004183fb: ret 4 */ FN_RET(0x004183d0); r_esp += 8; return;
}

void f_00418400(void) /* FUN_00418400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418400);
    /* 00418400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418401: mov ebp, esp */ r_ebp = r_esp;
    /* 00418403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041840a: call 0x411c61 */ r_esp -= 4; W32(r_esp, 0x41840fu); f_00411c61();
    /* 0041840f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00418412: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00418415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418417: je 0x418425 */ if (fZ) goto L_00418425;
L_00418419:; BB(0x00418419);
    /* 00418419: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041841c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041841d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x418422u); f_0048ac1b();
    /* 00418422: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00418425:; BB(0x00418425);
    /* 00418425: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418428: mov esp, ebp */ r_esp = r_ebp;
    /* 0041842a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041842b: ret 4 */ FN_RET(0x00418400); r_esp += 8; return;
}

void f_00418430(void) /* FUN_00418430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418430);
    /* 00418430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418431: mov ebp, esp */ r_ebp = r_esp;
    /* 00418433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418437: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041843a: call 0x415d47 */ r_esp -= 4; W32(r_esp, 0x41843fu); f_00415d47();
    /* 0041843f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00418442: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00418445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418447: je 0x418455 */ if (fZ) goto L_00418455;
L_00418449:; BB(0x00418449);
    /* 00418449: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041844c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041844d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x418452u); f_0048ac1b();
    /* 00418452: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00418455:; BB(0x00418455);
    /* 00418455: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418458: mov esp, ebp */ r_esp = r_ebp;
    /* 0041845a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041845b: ret 4 */ FN_RET(0x00418430); r_esp += 8; return;
}

void f_00418460(void) /* FUN_00418460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418460);
    /* 00418460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418461: mov ebp, esp */ r_ebp = r_esp;
    /* 00418463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418467: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041846a: call 0x416004 */ r_esp -= 4; W32(r_esp, 0x41846fu); f_00416004();
    /* 0041846f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00418472: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00418475: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418477: je 0x418485 */ if (fZ) goto L_00418485;
L_00418479:; BB(0x00418479);
    /* 00418479: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041847c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041847d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x418482u); f_0048ac1b();
    /* 00418482: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00418485:; BB(0x00418485);
    /* 00418485: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418488: mov esp, ebp */ r_esp = r_ebp;
    /* 0041848a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041848b: ret 4 */ FN_RET(0x00418460); r_esp += 8; return;
}

void f_00418490(void) /* FUN_00418490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418490);
    /* 00418490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418491: mov ebp, esp */ r_ebp = r_esp;
    /* 00418493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418497: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041849a: call 0x416580 */ r_esp -= 4; W32(r_esp, 0x41849fu); f_00416580();
    /* 0041849f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004184a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004184a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004184a7: je 0x4184b5 */ if (fZ) goto L_004184b5;
L_004184a9:; BB(0x004184a9);
    /* 004184a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004184ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004184ad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4184b2u); f_0048ac1b();
    /* 004184b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004184b5:; BB(0x004184b5);
    /* 004184b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004184b8: mov esp, ebp */ r_esp = r_ebp;
    /* 004184ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004184bb: ret 4 */ FN_RET(0x00418490); r_esp += 8; return;
}

void f_004184c0(void) /* FUN_004184c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004184c0);
    /* 004184c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004184c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004184c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004184c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004184c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004184ca: call 0x4168a5 */ r_esp -= 4; W32(r_esp, 0x4184cfu); f_004168a5();
    /* 004184cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004184d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004184d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004184d7: je 0x4184e5 */ if (fZ) goto L_004184e5;
L_004184d9:; BB(0x004184d9);
    /* 004184d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004184dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004184dd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4184e2u); f_0048ac1b();
    /* 004184e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004184e5:; BB(0x004184e5);
    /* 004184e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004184e8: mov esp, ebp */ r_esp = r_ebp;
    /* 004184ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004184eb: ret 4 */ FN_RET(0x004184c0); r_esp += 8; return;
}

void f_004184f0(void) /* FUN_004184f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004184f0);
    /* 004184f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004184f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004184f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004184f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004184f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004184fa: call 0x416a1a */ r_esp -= 4; W32(r_esp, 0x4184ffu); f_00416a1a();
    /* 004184ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00418502: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00418505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418507: je 0x418515 */ if (fZ) goto L_00418515;
L_00418509:; BB(0x00418509);
    /* 00418509: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041850c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041850d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x418512u); f_0048ac1b();
    /* 00418512: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00418515:; BB(0x00418515);
    /* 00418515: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418518: mov esp, ebp */ r_esp = r_ebp;
    /* 0041851a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041851b: ret 4 */ FN_RET(0x004184f0); r_esp += 8; return;
}

void f_00418520(void) /* FUN_00418520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418520);
    /* 00418520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418521: mov ebp, esp */ r_ebp = r_esp;
    /* 00418523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418527: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041852a: call 0x416df3 */ r_esp -= 4; W32(r_esp, 0x41852fu); f_00416df3();
    /* 0041852f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00418532: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00418535: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418537: je 0x418545 */ if (fZ) goto L_00418545;
L_00418539:; BB(0x00418539);
    /* 00418539: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041853c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041853d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x418542u); f_0048ac1b();
    /* 00418542: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00418545:; BB(0x00418545);
    /* 00418545: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418548: mov esp, ebp */ r_esp = r_ebp;
    /* 0041854a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041854b: ret 4 */ FN_RET(0x00418520); r_esp += 8; return;
}

void f_00418550(void) /* FUN_00418550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418550);
    /* 00418550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418551: mov ebp, esp */ r_ebp = r_esp;
    /* 00418553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418557: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041855a: call 0x416eca */ r_esp -= 4; W32(r_esp, 0x41855fu); f_00416eca();
    /* 0041855f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00418562: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00418565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418567: je 0x418575 */ if (fZ) goto L_00418575;
L_00418569:; BB(0x00418569);
    /* 00418569: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041856c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041856d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x418572u); f_0048ac1b();
    /* 00418572: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00418575:; BB(0x00418575);
    /* 00418575: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418578: mov esp, ebp */ r_esp = r_ebp;
    /* 0041857a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041857b: ret 4 */ FN_RET(0x00418550); r_esp += 8; return;
}

void f_004185d1(void) /* FUN_004185d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004185d1);
    /* 004185d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004185d2: mov ebp, esp */ r_ebp = r_esp;
    /* 004185d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004185d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004185d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004185db: mov dword ptr [eax], 0x633c7c */ W32((u32)(r_eax), 0x633c7cu);
    /* 004185e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004185e4: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x4185e9u); f_005dfc0f();
    /* 004185e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004185eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004185ec: ret  */ FN_RET(0x004185d1); r_esp += 4; return;
}

void f_004185ed(void) /* FUN_004185ed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004185ed);
    /* 004185ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004185ee: mov ebp, esp */ r_ebp = r_esp;
    /* 004185f0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004185f3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004185f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004185fd: jmp 0x418608 */ goto L_00418608;
L_004185ff:; BB(0x004185ff);
    /* 004185ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418602: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418605: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00418608:; BB(0x00418608);
    /* 00418608: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041860c: jge 0x418632 */ if ((fS==fO)) goto L_00418632;
L_0041860e:; BB(0x0041860e);
    /* 0041860e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418611: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418614: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00418617: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041861a: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0041861c: mov byte ptr [ecx + 0x21], al */ W8((u32)(r_ecx+0x21u), (u8)r_eax);
    /* 0041861f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418622: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418625: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00418628: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041862b: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0041862d: mov byte ptr [ecx + 0xc], al */ W8((u32)(r_ecx+0xcu), (u8)r_eax);
    /* 00418630: jmp 0x4185ff */ goto L_004185ff;
L_00418632:; BB(0x00418632);
    /* 00418632: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418635: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00418638: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0041863b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041863e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00418641: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00418644: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418647: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0041864a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0041864d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418650: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00418653: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00418656: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418659: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 00418660: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00418667: jmp 0x418672 */ goto L_00418672;
L_00418669:; BB(0x00418669);
    /* 00418669: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041866c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041866f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00418672:; BB(0x00418672);
    /* 00418672: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418676: jge 0x41869c */ if ((fS==fO)) goto L_0041869c;
L_00418678:; BB(0x00418678);
    /* 00418678: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041867b: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041867e: movsx eax, byte ptr [edx + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xcu));
    /* 00418682: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418685: je 0x418698 */ if (fZ) goto L_00418698;
L_00418687:; BB(0x00418687);
    /* 00418687: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041868a: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0041868d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00418690: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418693: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 00418696: jmp 0x41869a */ goto L_0041869a;
L_00418698:; BB(0x00418698);
    /* 00418698: jmp 0x41869c */ goto L_0041869c;
L_0041869a:; BB(0x0041869a);
    /* 0041869a: jmp 0x418669 */ goto L_00418669;
L_0041869c:; BB(0x0041869c);
    /* 0041869c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041869e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041869f: ret 0x18 */ FN_RET(0x004185ed); r_esp += 28; return;
}

void f_004186a2(void) /* FUN_004186a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004186a2);
    /* 004186a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004186a3: mov ebp, esp */ r_ebp = r_esp;
    /* 004186a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004186a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004186a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004186ac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004186af: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 004186b2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004186b5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004186b8: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 004186bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004186be: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004186c1: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 004186c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004186c7: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004186ca: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 004186cd: mov esp, ebp */ r_esp = r_ebp;
    /* 004186cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004186d0: ret 0x10 */ FN_RET(0x004186a2); r_esp += 20; return;
}

void f_004186d3(void) /* FUN_004186d3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004186d3);
    /* 004186d3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004186d4: mov ebp, esp */ r_ebp = r_esp;
    /* 004186d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004186d7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004186da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004186dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004186e0: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 004186e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004186e6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004186e9: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 004186ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004186ef: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004186f2: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 004186f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004186f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004186f8: ret 0xc */ FN_RET(0x004186d3); r_esp += 16; return;
}

void f_004186fb(void) /* FUN_004186fb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004186fb);
    /* 004186fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004186fc: mov ebp, esp */ r_ebp = r_esp;
    /* 004186fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004186ff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418702: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 00418706: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00418709: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041870b: jne 0x418714 */ if (!fZ) goto L_00418714;
L_0041870d:; BB(0x0041870d);
    /* 0041870d: mov eax, 0xb */ r_eax = 0xbu;
    /* 00418712: jmp 0x418734 */ goto L_00418734;
L_00418714:; BB(0x00418714);
    /* 00418714: movsx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 00418718: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0041871b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041871e: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418721: jle 0x41872a */ if ((fZ||fS!=fO)) goto L_0041872a;
L_00418723:; BB(0x00418723);
    /* 00418723: mov eax, 0xa */ r_eax = 0xau;
    /* 00418728: jmp 0x418734 */ goto L_00418734;
L_0041872a:; BB(0x0041872a);
    /* 0041872a: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0041872e: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00418731: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00418734:; BB(0x00418734);
    /* 00418734: mov esp, ebp */ r_esp = r_ebp;
    /* 00418736: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418737: ret 4 */ FN_RET(0x004186fb); r_esp += 8; return;
}

void f_0041873a(void) /* FUN_0041873a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041873a);
    /* 0041873a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041873b: mov ebp, esp */ r_ebp = r_esp;
    /* 0041873d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418740: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00418743: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041874a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00418751: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00418758: jmp 0x418763 */ goto L_00418763;
L_0041875a:; BB(0x0041875a);
    /* 0041875a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041875d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418760: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00418763:; BB(0x00418763);
    /* 00418763: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00418766: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418769: cmp edx, dword ptr [ecx + 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041876c: jge 0x4187d0 */ if ((fS==fO)) goto L_004187d0;
L_0041876e:; BB(0x0041876e);
    /* 0041876e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418772: je 0x418796 */ if (fZ) goto L_00418796;
L_00418774:; BB(0x00418774);
    /* 00418774: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00418777: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041877a: mov cl, byte ptr [eax + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xcu))) & 0xffu);
    /* 0041877d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041877e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00418781: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x418786u); f_004186fb();
    /* 00418786: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418789: jne 0x418796 */ if (!fZ) goto L_00418796;
L_0041878b:; BB(0x0041878b);
    /* 0041878b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041878e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00418791: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00418794: jmp 0x4187ce */ goto L_004187ce;
L_00418796:; BB(0x00418796);
    /* 00418796: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00418799: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041879c: mov cl, byte ptr [eax + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xcu))) & 0xffu);
    /* 0041879f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004187a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004187a3: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x4187a8u); f_004186fb();
    /* 004187a8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004187ab: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004187ad: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004187b0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004187b3: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004187b6: mov cl, byte ptr [eax + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xcu))) & 0xffu);
    /* 004187b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004187ba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004187bd: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x4187c2u); f_004186fb();
    /* 004187c2: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004187c5: jne 0x4187ce */ if (!fZ) goto L_004187ce;
L_004187c7:; BB(0x004187c7);
    /* 004187c7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_004187ce:; BB(0x004187ce);
    /* 004187ce: jmp 0x41875a */ goto L_0041875a;
L_004187d0:; BB(0x004187d0);
    /* 004187d0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004187d3: mov esp, ebp */ r_esp = r_ebp;
    /* 004187d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004187d6: ret  */ FN_RET(0x0041873a); r_esp += 4; return;
}

void f_004187d7(void) /* FUN_004187d7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004187d7);
    /* 004187d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004187d8: mov ebp, esp */ r_ebp = r_esp;
    /* 004187da: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004187dd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004187e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004187e7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004187ee: jmp 0x4187f9 */ goto L_004187f9;
L_004187f0:; BB(0x004187f0);
    /* 004187f0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004187f3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004187f6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004187f9:; BB(0x004187f9);
    /* 004187f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004187fc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004187ff: cmp edx, dword ptr [ecx + 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418802: jge 0x418842 */ if ((fS==fO)) goto L_00418842;
L_00418804:; BB(0x00418804);
    /* 00418804: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418807: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041880a: mov cl, byte ptr [eax + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xcu))) & 0xffu);
    /* 0041880d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041880e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418811: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x418816u); f_004186fb();
    /* 00418816: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418819: jne 0x418826 */ if (!fZ) goto L_00418826;
L_0041881b:; BB(0x0041881b);
    /* 0041881b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041881e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00418821: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00418824: jmp 0x418840 */ goto L_00418840;
L_00418826:; BB(0x00418826);
    /* 00418826: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418829: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041882c: mov cl, byte ptr [eax + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xcu))) & 0xffu);
    /* 0041882f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418830: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418833: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x418838u); f_004186fb();
    /* 00418838: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041883b: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041883d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00418840:; BB(0x00418840);
    /* 00418840: jmp 0x4187f0 */ goto L_004187f0;
L_00418842:; BB(0x00418842);
    /* 00418842: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418845: mov esp, ebp */ r_esp = r_ebp;
    /* 00418847: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418848: ret  */ FN_RET(0x004187d7); r_esp += 4; return;
}

void f_00418849(void) /* FUN_00418849 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418849);
    /* 00418849: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041884a: mov ebp, esp */ r_ebp = r_esp;
    /* 0041884c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041884f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00418850: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418853: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418856: cmp dword ptr [eax + 0x38], 2 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041885a: jne 0x41888c */ if (!fZ) goto L_0041888c;
L_0041885c:; BB(0x0041885c);
    /* 0041885c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041885f: mov dl, byte ptr [ecx + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0xcu))) & 0xffu);
    /* 00418862: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418863: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418866: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x41886bu); f_004186fb();
    /* 0041886b: mov esi, eax */ r_esi = r_eax;
    /* 0041886d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418870: mov cl, byte ptr [eax + 0xd] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xdu))) & 0xffu);
    /* 00418873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418874: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418877: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x41887cu); f_004186fb();
    /* 0041887c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041887e: cmp esi, 0x15 */ {  u32 a = r_esi; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418881: jne 0x41888c */ if (!fZ) goto L_0041888c;
L_00418883:; BB(0x00418883);
    /* 00418883: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0041888a: jmp 0x418893 */ goto L_00418893;
L_0041888c:; BB(0x0041888c);
    /* 0041888c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00418893:; BB(0x00418893);
    /* 00418893: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00418897: mov esp, ebp */ r_esp = r_ebp;
    /* 00418899: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041889a: ret  */ FN_RET(0x00418849); r_esp += 4; return;
}

void f_0041889b(void) /* FUN_0041889b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041889b);
    /* 0041889b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041889c: mov ebp, esp */ r_ebp = r_esp;
    /* 0041889e: sub esp, 0x4f0 */ {  u32 a = r_esp; u32 b = 0x4f0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004188a4: mov dword ptr [ebp - 0x4ec], ecx */ W32((u32)(r_ebp+0xfffffb14u), r_ecx);
    /* 004188aa: mov dword ptr [ebp - 0x4e4], 2 */ W32((u32)(r_ebp+0xfffffb1cu), 0x2u);
    /* 004188b4: mov dword ptr [ebp - 0x4e0], 2 */ W32((u32)(r_ebp+0xfffffb20u), 0x2u);
    /* 004188be: mov dword ptr [ebp - 0x4dc], 2 */ W32((u32)(r_ebp+0xfffffb24u), 0x2u);
    /* 004188c8: mov dword ptr [ebp - 0x4d8], 2 */ W32((u32)(r_ebp+0xfffffb28u), 0x2u);
    /* 004188d2: mov dword ptr [ebp - 0x4d4], 2 */ W32((u32)(r_ebp+0xfffffb2cu), 0x2u);
    /* 004188dc: mov dword ptr [ebp - 0x4d0], 2 */ W32((u32)(r_ebp+0xfffffb30u), 0x2u);
    /* 004188e6: mov dword ptr [ebp - 0x4cc], 2 */ W32((u32)(r_ebp+0xfffffb34u), 0x2u);
    /* 004188f0: mov dword ptr [ebp - 0x4c8], 2 */ W32((u32)(r_ebp+0xfffffb38u), 0x2u);
    /* 004188fa: mov dword ptr [ebp - 0x4c4], 2 */ W32((u32)(r_ebp+0xfffffb3cu), 0x2u);
    /* 00418904: mov dword ptr [ebp - 0x4c0], 2 */ W32((u32)(r_ebp+0xfffffb40u), 0x2u);
    /* 0041890e: mov dword ptr [ebp - 0x4bc], 1 */ W32((u32)(r_ebp+0xfffffb44u), 0x1u);
    /* 00418918: mov dword ptr [ebp - 0x4b8], 1 */ W32((u32)(r_ebp+0xfffffb48u), 0x1u);
    /* 00418922: mov dword ptr [ebp - 0x4b4], 1 */ W32((u32)(r_ebp+0xfffffb4cu), 0x1u);
    /* 0041892c: mov dword ptr [ebp - 0x4b0], 1 */ W32((u32)(r_ebp+0xfffffb50u), 0x1u);
    /* 00418936: mov dword ptr [ebp - 0x4ac], 1 */ W32((u32)(r_ebp+0xfffffb54u), 0x1u);
    /* 00418940: mov dword ptr [ebp - 0x4a8], 1 */ W32((u32)(r_ebp+0xfffffb58u), 0x1u);
    /* 0041894a: mov dword ptr [ebp - 0x4a4], 1 */ W32((u32)(r_ebp+0xfffffb5cu), 0x1u);
    /* 00418954: mov dword ptr [ebp - 0x4a0], 1 */ W32((u32)(r_ebp+0xfffffb60u), 0x1u);
    /* 0041895e: mov dword ptr [ebp - 0x49c], 1 */ W32((u32)(r_ebp+0xfffffb64u), 0x1u);
    /* 00418968: mov dword ptr [ebp - 0x498], 1 */ W32((u32)(r_ebp+0xfffffb68u), 0x1u);
    /* 00418972: mov dword ptr [ebp - 0x494], 1 */ W32((u32)(r_ebp+0xfffffb6cu), 0x1u);
    /* 0041897c: mov dword ptr [ebp - 0x490], 1 */ W32((u32)(r_ebp+0xfffffb70u), 0x1u);
    /* 00418986: mov dword ptr [ebp - 0x48c], 1 */ W32((u32)(r_ebp+0xfffffb74u), 0x1u);
    /* 00418990: mov dword ptr [ebp - 0x488], 1 */ W32((u32)(r_ebp+0xfffffb78u), 0x1u);
    /* 0041899a: mov dword ptr [ebp - 0x484], 1 */ W32((u32)(r_ebp+0xfffffb7cu), 0x1u);
    /* 004189a4: mov dword ptr [ebp - 0x480], 1 */ W32((u32)(r_ebp+0xfffffb80u), 0x1u);
    /* 004189ae: mov dword ptr [ebp - 0x47c], 1 */ W32((u32)(r_ebp+0xfffffb84u), 0x1u);
    /* 004189b8: mov dword ptr [ebp - 0x478], 1 */ W32((u32)(r_ebp+0xfffffb88u), 0x1u);
    /* 004189c2: mov dword ptr [ebp - 0x474], 1 */ W32((u32)(r_ebp+0xfffffb8cu), 0x1u);
    /* 004189cc: mov dword ptr [ebp - 0x470], 1 */ W32((u32)(r_ebp+0xfffffb90u), 0x1u);
    /* 004189d6: mov dword ptr [ebp - 0x46c], 1 */ W32((u32)(r_ebp+0xfffffb94u), 0x1u);
    /* 004189e0: mov dword ptr [ebp - 0x468], 1 */ W32((u32)(r_ebp+0xfffffb98u), 0x1u);
    /* 004189ea: mov dword ptr [ebp - 0x464], 1 */ W32((u32)(r_ebp+0xfffffb9cu), 0x1u);
    /* 004189f4: mov dword ptr [ebp - 0x460], 1 */ W32((u32)(r_ebp+0xfffffba0u), 0x1u);
    /* 004189fe: mov dword ptr [ebp - 0x45c], 1 */ W32((u32)(r_ebp+0xfffffba4u), 0x1u);
    /* 00418a08: mov dword ptr [ebp - 0x458], 1 */ W32((u32)(r_ebp+0xfffffba8u), 0x1u);
    /* 00418a12: mov dword ptr [ebp - 0x454], 1 */ W32((u32)(r_ebp+0xfffffbacu), 0x1u);
    /* 00418a1c: mov dword ptr [ebp - 0x450], 1 */ W32((u32)(r_ebp+0xfffffbb0u), 0x1u);
    /* 00418a26: mov dword ptr [ebp - 0x44c], 1 */ W32((u32)(r_ebp+0xfffffbb4u), 0x1u);
    /* 00418a30: mov dword ptr [ebp - 0x448], 1 */ W32((u32)(r_ebp+0xfffffbb8u), 0x1u);
    /* 00418a3a: mov dword ptr [ebp - 0x444], 1 */ W32((u32)(r_ebp+0xfffffbbcu), 0x1u);
    /* 00418a44: mov dword ptr [ebp - 0x440], 1 */ W32((u32)(r_ebp+0xfffffbc0u), 0x1u);
    /* 00418a4e: mov dword ptr [ebp - 0x43c], 1 */ W32((u32)(r_ebp+0xfffffbc4u), 0x1u);
    /* 00418a58: mov dword ptr [ebp - 0x438], 1 */ W32((u32)(r_ebp+0xfffffbc8u), 0x1u);
    /* 00418a62: mov dword ptr [ebp - 0x434], 1 */ W32((u32)(r_ebp+0xfffffbccu), 0x1u);
    /* 00418a6c: mov dword ptr [ebp - 0x430], 1 */ W32((u32)(r_ebp+0xfffffbd0u), 0x1u);
    /* 00418a76: mov dword ptr [ebp - 0x42c], 1 */ W32((u32)(r_ebp+0xfffffbd4u), 0x1u);
    /* 00418a80: mov dword ptr [ebp - 0x428], 1 */ W32((u32)(r_ebp+0xfffffbd8u), 0x1u);
    /* 00418a8a: mov dword ptr [ebp - 0x424], 1 */ W32((u32)(r_ebp+0xfffffbdcu), 0x1u);
    /* 00418a94: mov dword ptr [ebp - 0x420], 1 */ W32((u32)(r_ebp+0xfffffbe0u), 0x1u);
    /* 00418a9e: mov dword ptr [ebp - 0x41c], 1 */ W32((u32)(r_ebp+0xfffffbe4u), 0x1u);
    /* 00418aa8: mov dword ptr [ebp - 0x418], 3 */ W32((u32)(r_ebp+0xfffffbe8u), 0x3u);
    /* 00418ab2: mov dword ptr [ebp - 0x414], 3 */ W32((u32)(r_ebp+0xfffffbecu), 0x3u);
    /* 00418abc: mov dword ptr [ebp - 0x410], 3 */ W32((u32)(r_ebp+0xfffffbf0u), 0x3u);
    /* 00418ac6: mov dword ptr [ebp - 0x40c], 3 */ W32((u32)(r_ebp+0xfffffbf4u), 0x3u);
    /* 00418ad0: mov dword ptr [ebp - 0x408], 1 */ W32((u32)(r_ebp+0xfffffbf8u), 0x1u);
    /* 00418ada: mov dword ptr [ebp - 0x404], 1 */ W32((u32)(r_ebp+0xfffffbfcu), 0x1u);
    /* 00418ae4: mov dword ptr [ebp - 0x400], 1 */ W32((u32)(r_ebp+0xfffffc00u), 0x1u);
    /* 00418aee: mov dword ptr [ebp - 0x3fc], 1 */ W32((u32)(r_ebp+0xfffffc04u), 0x1u);
    /* 00418af8: mov dword ptr [ebp - 0x3f8], 1 */ W32((u32)(r_ebp+0xfffffc08u), 0x1u);
    /* 00418b02: mov dword ptr [ebp - 0x3f4], 3 */ W32((u32)(r_ebp+0xfffffc0cu), 0x3u);
    /* 00418b0c: mov dword ptr [ebp - 0x3f0], 3 */ W32((u32)(r_ebp+0xfffffc10u), 0x3u);
    /* 00418b16: mov dword ptr [ebp - 0x3ec], 3 */ W32((u32)(r_ebp+0xfffffc14u), 0x3u);
    /* 00418b20: mov dword ptr [ebp - 0x3e8], 3 */ W32((u32)(r_ebp+0xfffffc18u), 0x3u);
    /* 00418b2a: mov dword ptr [ebp - 0x3e4], 3 */ W32((u32)(r_ebp+0xfffffc1cu), 0x3u);
    /* 00418b34: mov dword ptr [ebp - 0x3e0], 3 */ W32((u32)(r_ebp+0xfffffc20u), 0x3u);
    /* 00418b3e: mov dword ptr [ebp - 0x3dc], 3 */ W32((u32)(r_ebp+0xfffffc24u), 0x3u);
    /* 00418b48: mov dword ptr [ebp - 0x3d8], 3 */ W32((u32)(r_ebp+0xfffffc28u), 0x3u);
    /* 00418b52: mov dword ptr [ebp - 0x3d4], 1 */ W32((u32)(r_ebp+0xfffffc2cu), 0x1u);
    /* 00418b5c: mov dword ptr [ebp - 0x3d0], 1 */ W32((u32)(r_ebp+0xfffffc30u), 0x1u);
    /* 00418b66: mov dword ptr [ebp - 0x3cc], 3 */ W32((u32)(r_ebp+0xfffffc34u), 0x3u);
    /* 00418b70: mov dword ptr [ebp - 0x3c8], 3 */ W32((u32)(r_ebp+0xfffffc38u), 0x3u);
    /* 00418b7a: mov dword ptr [ebp - 0x3c4], 3 */ W32((u32)(r_ebp+0xfffffc3cu), 0x3u);
    /* 00418b84: mov dword ptr [ebp - 0x3c0], 3 */ W32((u32)(r_ebp+0xfffffc40u), 0x3u);
    /* 00418b8e: mov dword ptr [ebp - 0x3bc], 3 */ W32((u32)(r_ebp+0xfffffc44u), 0x3u);
    /* 00418b98: mov dword ptr [ebp - 0x3b8], 3 */ W32((u32)(r_ebp+0xfffffc48u), 0x3u);
    /* 00418ba2: mov dword ptr [ebp - 0x3b4], 3 */ W32((u32)(r_ebp+0xfffffc4cu), 0x3u);
    /* 00418bac: mov dword ptr [ebp - 0x3b0], 3 */ W32((u32)(r_ebp+0xfffffc50u), 0x3u);
    /* 00418bb6: mov dword ptr [ebp - 0x3ac], 3 */ W32((u32)(r_ebp+0xfffffc54u), 0x3u);
    /* 00418bc0: mov dword ptr [ebp - 0x3a8], 1 */ W32((u32)(r_ebp+0xfffffc58u), 0x1u);
    /* 00418bca: mov dword ptr [ebp - 0x3a4], 1 */ W32((u32)(r_ebp+0xfffffc5cu), 0x1u);
    /* 00418bd4: mov dword ptr [ebp - 0x3a0], 1 */ W32((u32)(r_ebp+0xfffffc60u), 0x1u);
    /* 00418bde: mov dword ptr [ebp - 0x39c], 2 */ W32((u32)(r_ebp+0xfffffc64u), 0x2u);
    /* 00418be8: mov dword ptr [ebp - 0x398], 2 */ W32((u32)(r_ebp+0xfffffc68u), 0x2u);
    /* 00418bf2: mov dword ptr [ebp - 0x394], 2 */ W32((u32)(r_ebp+0xfffffc6cu), 0x2u);
    /* 00418bfc: mov dword ptr [ebp - 0x390], 1 */ W32((u32)(r_ebp+0xfffffc70u), 0x1u);
    /* 00418c06: mov dword ptr [ebp - 0x38c], 1 */ W32((u32)(r_ebp+0xfffffc74u), 0x1u);
    /* 00418c10: mov dword ptr [ebp - 0x388], 1 */ W32((u32)(r_ebp+0xfffffc78u), 0x1u);
    /* 00418c1a: mov dword ptr [ebp - 0x384], 1 */ W32((u32)(r_ebp+0xfffffc7cu), 0x1u);
    /* 00418c24: mov dword ptr [ebp - 0x380], 1 */ W32((u32)(r_ebp+0xfffffc80u), 0x1u);
    /* 00418c2e: mov dword ptr [ebp - 0x37c], 2 */ W32((u32)(r_ebp+0xfffffc84u), 0x2u);
    /* 00418c38: mov dword ptr [ebp - 0x378], 2 */ W32((u32)(r_ebp+0xfffffc88u), 0x2u);
    /* 00418c42: mov dword ptr [ebp - 0x374], 2 */ W32((u32)(r_ebp+0xfffffc8cu), 0x2u);
    /* 00418c4c: mov dword ptr [ebp - 0x370], 2 */ W32((u32)(r_ebp+0xfffffc90u), 0x2u);
    /* 00418c56: mov dword ptr [ebp - 0x36c], 2 */ W32((u32)(r_ebp+0xfffffc94u), 0x2u);
    /* 00418c60: mov dword ptr [ebp - 0x368], 1 */ W32((u32)(r_ebp+0xfffffc98u), 0x1u);
    /* 00418c6a: mov dword ptr [ebp - 0x364], 1 */ W32((u32)(r_ebp+0xfffffc9cu), 0x1u);
    /* 00418c74: mov dword ptr [ebp - 0x360], 1 */ W32((u32)(r_ebp+0xfffffca0u), 0x1u);
    /* 00418c7e: mov dword ptr [ebp - 0x35c], 1 */ W32((u32)(r_ebp+0xfffffca4u), 0x1u);
    /* 00418c88: mov dword ptr [ebp - 0x358], 1 */ W32((u32)(r_ebp+0xfffffca8u), 0x1u);
    /* 00418c92: mov dword ptr [ebp - 0x354], 2 */ W32((u32)(r_ebp+0xfffffcacu), 0x2u);
    /* 00418c9c: mov dword ptr [ebp - 0x350], 2 */ W32((u32)(r_ebp+0xfffffcb0u), 0x2u);
    /* 00418ca6: mov dword ptr [ebp - 0x34c], 2 */ W32((u32)(r_ebp+0xfffffcb4u), 0x2u);
    /* 00418cb0: mov dword ptr [ebp - 0x348], 2 */ W32((u32)(r_ebp+0xfffffcb8u), 0x2u);
    /* 00418cba: mov dword ptr [ebp - 0x344], 2 */ W32((u32)(r_ebp+0xfffffcbcu), 0x2u);
    /* 00418cc4: mov dword ptr [ebp - 0x340], 1 */ W32((u32)(r_ebp+0xfffffcc0u), 0x1u);
    /* 00418cce: mov dword ptr [ebp - 0x33c], 1 */ W32((u32)(r_ebp+0xfffffcc4u), 0x1u);
    /* 00418cd8: mov dword ptr [ebp - 0x338], 1 */ W32((u32)(r_ebp+0xfffffcc8u), 0x1u);
    /* 00418ce2: mov dword ptr [ebp - 0x334], 1 */ W32((u32)(r_ebp+0xfffffcccu), 0x1u);
    /* 00418cec: mov dword ptr [ebp - 0x330], 1 */ W32((u32)(r_ebp+0xfffffcd0u), 0x1u);
    /* 00418cf6: mov dword ptr [ebp - 0x32c], 2 */ W32((u32)(r_ebp+0xfffffcd4u), 0x2u);
    /* 00418d00: mov dword ptr [ebp - 0x328], 2 */ W32((u32)(r_ebp+0xfffffcd8u), 0x2u);
    /* 00418d0a: mov dword ptr [ebp - 0x324], 2 */ W32((u32)(r_ebp+0xfffffcdcu), 0x2u);
    /* 00418d14: mov dword ptr [ebp - 0x320], 2 */ W32((u32)(r_ebp+0xfffffce0u), 0x2u);
    /* 00418d1e: mov dword ptr [ebp - 0x31c], 2 */ W32((u32)(r_ebp+0xfffffce4u), 0x2u);
    /* 00418d28: mov dword ptr [ebp - 0x318], 1 */ W32((u32)(r_ebp+0xfffffce8u), 0x1u);
    /* 00418d32: mov dword ptr [ebp - 0x314], 1 */ W32((u32)(r_ebp+0xfffffcecu), 0x1u);
    /* 00418d3c: mov dword ptr [ebp - 0x310], 1 */ W32((u32)(r_ebp+0xfffffcf0u), 0x1u);
    /* 00418d46: mov dword ptr [ebp - 0x30c], 5 */ W32((u32)(r_ebp+0xfffffcf4u), 0x5u);
    /* 00418d50: mov dword ptr [ebp - 0x308], 1 */ W32((u32)(r_ebp+0xfffffcf8u), 0x1u);
    /* 00418d5a: mov dword ptr [ebp - 0x304], 2 */ W32((u32)(r_ebp+0xfffffcfcu), 0x2u);
    /* 00418d64: mov dword ptr [ebp - 0x300], 2 */ W32((u32)(r_ebp+0xfffffd00u), 0x2u);
    /* 00418d6e: mov dword ptr [ebp - 0x2fc], 2 */ W32((u32)(r_ebp+0xfffffd04u), 0x2u);
    /* 00418d78: mov dword ptr [ebp - 0x2f8], 2 */ W32((u32)(r_ebp+0xfffffd08u), 0x2u);
    /* 00418d82: mov dword ptr [ebp - 0x2f4], 2 */ W32((u32)(r_ebp+0xfffffd0cu), 0x2u);
    /* 00418d8c: mov dword ptr [ebp - 0x2f0], 1 */ W32((u32)(r_ebp+0xfffffd10u), 0x1u);
    /* 00418d96: mov dword ptr [ebp - 0x2ec], 1 */ W32((u32)(r_ebp+0xfffffd14u), 0x1u);
    /* 00418da0: mov dword ptr [ebp - 0x2e8], 5 */ W32((u32)(r_ebp+0xfffffd18u), 0x5u);
    /* 00418daa: mov dword ptr [ebp - 0x2e4], 5 */ W32((u32)(r_ebp+0xfffffd1cu), 0x5u);
    /* 00418db4: mov dword ptr [ebp - 0x2e0], 5 */ W32((u32)(r_ebp+0xfffffd20u), 0x5u);
    /* 00418dbe: mov dword ptr [ebp - 0x2dc], 1 */ W32((u32)(r_ebp+0xfffffd24u), 0x1u);
    /* 00418dc8: mov dword ptr [ebp - 0x2d8], 1 */ W32((u32)(r_ebp+0xfffffd28u), 0x1u);
    /* 00418dd2: mov dword ptr [ebp - 0x2d4], 1 */ W32((u32)(r_ebp+0xfffffd2cu), 0x1u);
    /* 00418ddc: mov dword ptr [ebp - 0x2d0], 3 */ W32((u32)(r_ebp+0xfffffd30u), 0x3u);
    /* 00418de6: mov dword ptr [ebp - 0x2cc], 3 */ W32((u32)(r_ebp+0xfffffd34u), 0x3u);
    /* 00418df0: mov dword ptr [ebp - 0x2c8], 1 */ W32((u32)(r_ebp+0xfffffd38u), 0x1u);
    /* 00418dfa: mov dword ptr [ebp - 0x2c4], 1 */ W32((u32)(r_ebp+0xfffffd3cu), 0x1u);
    /* 00418e04: mov dword ptr [ebp - 0x2c0], 1 */ W32((u32)(r_ebp+0xfffffd40u), 0x1u);
    /* 00418e0e: mov dword ptr [ebp - 0x2bc], 1 */ W32((u32)(r_ebp+0xfffffd44u), 0x1u);
    /* 00418e18: mov dword ptr [ebp - 0x2b8], 1 */ W32((u32)(r_ebp+0xfffffd48u), 0x1u);
    /* 00418e22: mov dword ptr [ebp - 0x2b4], 1 */ W32((u32)(r_ebp+0xfffffd4cu), 0x1u);
    /* 00418e2c: mov dword ptr [ebp - 0x2b0], 1 */ W32((u32)(r_ebp+0xfffffd50u), 0x1u);
    /* 00418e36: mov dword ptr [ebp - 0x2ac], 1 */ W32((u32)(r_ebp+0xfffffd54u), 0x1u);
    /* 00418e40: mov dword ptr [ebp - 0x2a8], 3 */ W32((u32)(r_ebp+0xfffffd58u), 0x3u);
    /* 00418e4a: mov dword ptr [ebp - 0x2a4], 3 */ W32((u32)(r_ebp+0xfffffd5cu), 0x3u);
    /* 00418e54: mov dword ptr [ebp - 0x2a0], 1 */ W32((u32)(r_ebp+0xfffffd60u), 0x1u);
    /* 00418e5e: mov dword ptr [ebp - 0x29c], 1 */ W32((u32)(r_ebp+0xfffffd64u), 0x1u);
    /* 00418e68: mov dword ptr [ebp - 0x298], 1 */ W32((u32)(r_ebp+0xfffffd68u), 0x1u);
    /* 00418e72: mov dword ptr [ebp - 0x294], 1 */ W32((u32)(r_ebp+0xfffffd6cu), 0x1u);
    /* 00418e7c: mov dword ptr [ebp - 0x290], 1 */ W32((u32)(r_ebp+0xfffffd70u), 0x1u);
    /* 00418e86: mov dword ptr [ebp - 0x28c], 1 */ W32((u32)(r_ebp+0xfffffd74u), 0x1u);
    /* 00418e90: mov dword ptr [ebp - 0x288], 1 */ W32((u32)(r_ebp+0xfffffd78u), 0x1u);
    /* 00418e9a: mov dword ptr [ebp - 0x284], 3 */ W32((u32)(r_ebp+0xfffffd7cu), 0x3u);
    /* 00418ea4: mov dword ptr [ebp - 0x280], 3 */ W32((u32)(r_ebp+0xfffffd80u), 0x3u);
    /* 00418eae: mov dword ptr [ebp - 0x27c], 3 */ W32((u32)(r_ebp+0xfffffd84u), 0x3u);
    /* 00418eb8: mov dword ptr [ebp - 0x278], 1 */ W32((u32)(r_ebp+0xfffffd88u), 0x1u);
    /* 00418ec2: mov dword ptr [ebp - 0x274], 1 */ W32((u32)(r_ebp+0xfffffd8cu), 0x1u);
    /* 00418ecc: mov dword ptr [ebp - 0x270], 1 */ W32((u32)(r_ebp+0xfffffd90u), 0x1u);
    /* 00418ed6: mov dword ptr [ebp - 0x26c], 1 */ W32((u32)(r_ebp+0xfffffd94u), 0x1u);
    /* 00418ee0: mov dword ptr [ebp - 0x268], 1 */ W32((u32)(r_ebp+0xfffffd98u), 0x1u);
    /* 00418eea: mov dword ptr [ebp - 0x264], 1 */ W32((u32)(r_ebp+0xfffffd9cu), 0x1u);
    /* 00418ef4: mov dword ptr [ebp - 0x260], 1 */ W32((u32)(r_ebp+0xfffffda0u), 0x1u);
    /* 00418efe: mov dword ptr [ebp - 0x25c], 3 */ W32((u32)(r_ebp+0xfffffda4u), 0x3u);
    /* 00418f08: mov dword ptr [ebp - 0x258], 3 */ W32((u32)(r_ebp+0xfffffda8u), 0x3u);
    /* 00418f12: mov dword ptr [ebp - 0x254], 3 */ W32((u32)(r_ebp+0xfffffdacu), 0x3u);
    /* 00418f1c: mov dword ptr [ebp - 0x250], 1 */ W32((u32)(r_ebp+0xfffffdb0u), 0x1u);
    /* 00418f26: mov dword ptr [ebp - 0x24c], 1 */ W32((u32)(r_ebp+0xfffffdb4u), 0x1u);
    /* 00418f30: mov dword ptr [ebp - 0x248], 1 */ W32((u32)(r_ebp+0xfffffdb8u), 0x1u);
    /* 00418f3a: mov dword ptr [ebp - 0x244], 1 */ W32((u32)(r_ebp+0xfffffdbcu), 0x1u);
    /* 00418f44: mov dword ptr [ebp - 0x240], 1 */ W32((u32)(r_ebp+0xfffffdc0u), 0x1u);
    /* 00418f4e: mov dword ptr [ebp - 0x23c], 1 */ W32((u32)(r_ebp+0xfffffdc4u), 0x1u);
    /* 00418f58: mov dword ptr [ebp - 0x238], 3 */ W32((u32)(r_ebp+0xfffffdc8u), 0x3u);
    /* 00418f62: mov dword ptr [ebp - 0x234], 3 */ W32((u32)(r_ebp+0xfffffdccu), 0x3u);
    /* 00418f6c: mov dword ptr [ebp - 0x230], 3 */ W32((u32)(r_ebp+0xfffffdd0u), 0x3u);
    /* 00418f76: mov dword ptr [ebp - 0x22c], 3 */ W32((u32)(r_ebp+0xfffffdd4u), 0x3u);
    /* 00418f80: mov dword ptr [ebp - 0x228], 1 */ W32((u32)(r_ebp+0xfffffdd8u), 0x1u);
    /* 00418f8a: mov dword ptr [ebp - 0x224], 1 */ W32((u32)(r_ebp+0xfffffddcu), 0x1u);
    /* 00418f94: mov dword ptr [ebp - 0x220], 1 */ W32((u32)(r_ebp+0xfffffde0u), 0x1u);
    /* 00418f9e: mov dword ptr [ebp - 0x21c], 1 */ W32((u32)(r_ebp+0xfffffde4u), 0x1u);
    /* 00418fa8: mov dword ptr [ebp - 0x218], 1 */ W32((u32)(r_ebp+0xfffffde8u), 0x1u);
    /* 00418fb2: mov dword ptr [ebp - 0x214], 2 */ W32((u32)(r_ebp+0xfffffdecu), 0x2u);
    /* 00418fbc: mov dword ptr [ebp - 0x210], 3 */ W32((u32)(r_ebp+0xfffffdf0u), 0x3u);
    /* 00418fc6: mov dword ptr [ebp - 0x20c], 3 */ W32((u32)(r_ebp+0xfffffdf4u), 0x3u);
    /* 00418fd0: mov dword ptr [ebp - 0x208], 3 */ W32((u32)(r_ebp+0xfffffdf8u), 0x3u);
    /* 00418fda: mov dword ptr [ebp - 0x204], 3 */ W32((u32)(r_ebp+0xfffffdfcu), 0x3u);
    /* 00418fe4: mov dword ptr [ebp - 0x200], 2 */ W32((u32)(r_ebp+0xfffffe00u), 0x2u);
    /* 00418fee: mov dword ptr [ebp - 0x1fc], 2 */ W32((u32)(r_ebp+0xfffffe04u), 0x2u);
    /* 00418ff8: mov dword ptr [ebp - 0x1f8], 1 */ W32((u32)(r_ebp+0xfffffe08u), 0x1u);
    /* 00419002: mov dword ptr [ebp - 0x1f4], 1 */ W32((u32)(r_ebp+0xfffffe0cu), 0x1u);
    /* 0041900c: mov dword ptr [ebp - 0x1f0], 1 */ W32((u32)(r_ebp+0xfffffe10u), 0x1u);
    /* 00419016: mov dword ptr [ebp - 0x1ec], 2 */ W32((u32)(r_ebp+0xfffffe14u), 0x2u);
    /* 00419020: mov dword ptr [ebp - 0x1e8], 2 */ W32((u32)(r_ebp+0xfffffe18u), 0x2u);
    /* 0041902a: mov dword ptr [ebp - 0x1e4], 2 */ W32((u32)(r_ebp+0xfffffe1cu), 0x2u);
    /* 00419034: mov dword ptr [ebp - 0x1e0], 2 */ W32((u32)(r_ebp+0xfffffe20u), 0x2u);
    /* 0041903e: mov dword ptr [ebp - 0x1dc], 2 */ W32((u32)(r_ebp+0xfffffe24u), 0x2u);
    /* 00419048: mov dword ptr [ebp - 0x1d8], 2 */ W32((u32)(r_ebp+0xfffffe28u), 0x2u);
    /* 00419052: mov dword ptr [ebp - 0x1d4], 2 */ W32((u32)(r_ebp+0xfffffe2cu), 0x2u);
    /* 0041905c: mov dword ptr [ebp - 0x1d0], 2 */ W32((u32)(r_ebp+0xfffffe30u), 0x2u);
    /* 00419066: mov dword ptr [ebp - 0x1cc], 2 */ W32((u32)(r_ebp+0xfffffe34u), 0x2u);
    /* 00419070: mov dword ptr [ebp - 0x1c8], 2 */ W32((u32)(r_ebp+0xfffffe38u), 0x2u);
    /* 0041907a: mov dword ptr [ebp - 0x1c4], 2 */ W32((u32)(r_ebp+0xfffffe3cu), 0x2u);
    /* 00419084: mov dword ptr [ebp - 0x1c0], 2 */ W32((u32)(r_ebp+0xfffffe40u), 0x2u);
    /* 0041908e: mov dword ptr [ebp - 0x1bc], 2 */ W32((u32)(r_ebp+0xfffffe44u), 0x2u);
    /* 00419098: mov dword ptr [ebp - 0x1b8], 2 */ W32((u32)(r_ebp+0xfffffe48u), 0x2u);
    /* 004190a2: mov dword ptr [ebp - 0x1b4], 2 */ W32((u32)(r_ebp+0xfffffe4cu), 0x2u);
    /* 004190ac: mov dword ptr [ebp - 0x1b0], 2 */ W32((u32)(r_ebp+0xfffffe50u), 0x2u);
    /* 004190b6: mov dword ptr [ebp - 0x1ac], 2 */ W32((u32)(r_ebp+0xfffffe54u), 0x2u);
    /* 004190c0: mov dword ptr [ebp - 0x1a8], 2 */ W32((u32)(r_ebp+0xfffffe58u), 0x2u);
    /* 004190ca: mov dword ptr [ebp - 0x1a4], 2 */ W32((u32)(r_ebp+0xfffffe5cu), 0x2u);
    /* 004190d4: mov dword ptr [ebp - 0x1a0], 2 */ W32((u32)(r_ebp+0xfffffe60u), 0x2u);
    /* 004190de: mov dword ptr [ebp - 0x19c], 4 */ W32((u32)(r_ebp+0xfffffe64u), 0x4u);
    /* 004190e8: mov dword ptr [ebp - 0x198], 4 */ W32((u32)(r_ebp+0xfffffe68u), 0x4u);
    /* 004190f2: mov dword ptr [ebp - 0x194], 4 */ W32((u32)(r_ebp+0xfffffe6cu), 0x4u);
    /* 004190fc: mov dword ptr [ebp - 0x190], 4 */ W32((u32)(r_ebp+0xfffffe70u), 0x4u);
    /* 00419106: mov dword ptr [ebp - 0x18c], 4 */ W32((u32)(r_ebp+0xfffffe74u), 0x4u);
    /* 00419110: mov dword ptr [ebp - 0x188], 4 */ W32((u32)(r_ebp+0xfffffe78u), 0x4u);
    /* 0041911a: mov dword ptr [ebp - 0x184], 1 */ W32((u32)(r_ebp+0xfffffe7cu), 0x1u);
    /* 00419124: mov dword ptr [ebp - 0x180], 1 */ W32((u32)(r_ebp+0xfffffe80u), 0x1u);
    /* 0041912e: mov dword ptr [ebp - 0x17c], 1 */ W32((u32)(r_ebp+0xfffffe84u), 0x1u);
    /* 00419138: mov dword ptr [ebp - 0x178], 1 */ W32((u32)(r_ebp+0xfffffe88u), 0x1u);
    /* 00419142: mov dword ptr [ebp - 0x174], 4 */ W32((u32)(r_ebp+0xfffffe8cu), 0x4u);
    /* 0041914c: mov dword ptr [ebp - 0x170], 4 */ W32((u32)(r_ebp+0xfffffe90u), 0x4u);
    /* 00419156: mov dword ptr [ebp - 0x16c], 4 */ W32((u32)(r_ebp+0xfffffe94u), 0x4u);
    /* 00419160: mov dword ptr [ebp - 0x168], 4 */ W32((u32)(r_ebp+0xfffffe98u), 0x4u);
    /* 0041916a: mov dword ptr [ebp - 0x164], 4 */ W32((u32)(r_ebp+0xfffffe9cu), 0x4u);
    /* 00419174: mov dword ptr [ebp - 0x160], 4 */ W32((u32)(r_ebp+0xfffffea0u), 0x4u);
    /* 0041917e: mov dword ptr [ebp - 0x15c], 1 */ W32((u32)(r_ebp+0xfffffea4u), 0x1u);
    /* 00419188: mov dword ptr [ebp - 0x158], 1 */ W32((u32)(r_ebp+0xfffffea8u), 0x1u);
    /* 00419192: mov dword ptr [ebp - 0x154], 1 */ W32((u32)(r_ebp+0xfffffeacu), 0x1u);
    /* 0041919c: mov dword ptr [ebp - 0x150], 1 */ W32((u32)(r_ebp+0xfffffeb0u), 0x1u);
    /* 004191a6: mov dword ptr [ebp - 0x14c], 1 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1u);
    /* 004191b0: mov dword ptr [ebp - 0x148], 1 */ W32((u32)(r_ebp+0xfffffeb8u), 0x1u);
    /* 004191ba: mov dword ptr [ebp - 0x144], 1 */ W32((u32)(r_ebp+0xfffffebcu), 0x1u);
    /* 004191c4: mov dword ptr [ebp - 0x140], 4 */ W32((u32)(r_ebp+0xfffffec0u), 0x4u);
    /* 004191ce: mov dword ptr [ebp - 0x13c], 4 */ W32((u32)(r_ebp+0xfffffec4u), 0x4u);
    /* 004191d8: mov dword ptr [ebp - 0x138], 1 */ W32((u32)(r_ebp+0xfffffec8u), 0x1u);
    /* 004191e2: mov dword ptr [ebp - 0x134], 1 */ W32((u32)(r_ebp+0xfffffeccu), 0x1u);
    /* 004191ec: mov dword ptr [ebp - 0x130], 1 */ W32((u32)(r_ebp+0xfffffed0u), 0x1u);
    /* 004191f6: mov dword ptr [ebp - 0x12c], 1 */ W32((u32)(r_ebp+0xfffffed4u), 0x1u);
    /* 00419200: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
    /* 0041920a: mov dword ptr [ebp - 0x124], 3 */ W32((u32)(r_ebp+0xfffffedcu), 0x3u);
    /* 00419214: mov dword ptr [ebp - 0x120], 3 */ W32((u32)(r_ebp+0xfffffee0u), 0x3u);
    /* 0041921e: mov dword ptr [ebp - 0x11c], 3 */ W32((u32)(r_ebp+0xfffffee4u), 0x3u);
    /* 00419228: mov dword ptr [ebp - 0x118], 3 */ W32((u32)(r_ebp+0xfffffee8u), 0x3u);
    /* 00419232: mov dword ptr [ebp - 0x114], 3 */ W32((u32)(r_ebp+0xfffffeecu), 0x3u);
    /* 0041923c: mov dword ptr [ebp - 0x110], 3 */ W32((u32)(r_ebp+0xfffffef0u), 0x3u);
    /* 00419246: mov dword ptr [ebp - 0x10c], 3 */ W32((u32)(r_ebp+0xfffffef4u), 0x3u);
    /* 00419250: mov dword ptr [ebp - 0x108], 3 */ W32((u32)(r_ebp+0xfffffef8u), 0x3u);
    /* 0041925a: mov dword ptr [ebp - 0x104], 1 */ W32((u32)(r_ebp+0xfffffefcu), 0x1u);
    /* 00419264: mov dword ptr [ebp - 0x100], 1 */ W32((u32)(r_ebp+0xffffff00u), 0x1u);
    /* 0041926e: mov dword ptr [ebp - 0xfc], 4 */ W32((u32)(r_ebp+0xffffff04u), 0x4u);
    /* 00419278: mov dword ptr [ebp - 0xf8], 4 */ W32((u32)(r_ebp+0xffffff08u), 0x4u);
    /* 00419282: mov dword ptr [ebp - 0xf4], 4 */ W32((u32)(r_ebp+0xffffff0cu), 0x4u);
    /* 0041928c: mov dword ptr [ebp - 0xf0], 4 */ W32((u32)(r_ebp+0xffffff10u), 0x4u);
    /* 00419296: mov dword ptr [ebp - 0xec], 4 */ W32((u32)(r_ebp+0xffffff14u), 0x4u);
    /* 004192a0: mov dword ptr [ebp - 0xe8], 1 */ W32((u32)(r_ebp+0xffffff18u), 0x1u);
    /* 004192aa: mov dword ptr [ebp - 0xe4], 1 */ W32((u32)(r_ebp+0xffffff1cu), 0x1u);
    /* 004192b4: mov dword ptr [ebp - 0xe0], 1 */ W32((u32)(r_ebp+0xffffff20u), 0x1u);
    /* 004192be: mov dword ptr [ebp - 0xdc], 1 */ W32((u32)(r_ebp+0xffffff24u), 0x1u);
    /* 004192c8: mov dword ptr [ebp - 0xd8], 1 */ W32((u32)(r_ebp+0xffffff28u), 0x1u);
    /* 004192d2: mov dword ptr [ebp - 0xd4], 4 */ W32((u32)(r_ebp+0xffffff2cu), 0x4u);
    /* 004192dc: mov dword ptr [ebp - 0xd0], 4 */ W32((u32)(r_ebp+0xffffff30u), 0x4u);
    /* 004192e6: mov dword ptr [ebp - 0xcc], 4 */ W32((u32)(r_ebp+0xffffff34u), 0x4u);
    /* 004192f0: mov dword ptr [ebp - 0xc8], 4 */ W32((u32)(r_ebp+0xffffff38u), 0x4u);
    /* 004192fa: mov dword ptr [ebp - 0xc4], 4 */ W32((u32)(r_ebp+0xffffff3cu), 0x4u);
    /* 00419304: mov dword ptr [ebp - 0xc0], 4 */ W32((u32)(r_ebp+0xffffff40u), 0x4u);
    /* 0041930e: mov dword ptr [ebp - 0xbc], 1 */ W32((u32)(r_ebp+0xffffff44u), 0x1u);
    /* 00419318: mov dword ptr [ebp - 0xb8], 1 */ W32((u32)(r_ebp+0xffffff48u), 0x1u);
    /* 00419322: mov dword ptr [ebp - 0xb4], 1 */ W32((u32)(r_ebp+0xffffff4cu), 0x1u);
    /* 0041932c: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 00419336: mov dword ptr [ebp - 0xac], 4 */ W32((u32)(r_ebp+0xffffff54u), 0x4u);
    /* 00419340: mov dword ptr [ebp - 0xa8], 4 */ W32((u32)(r_ebp+0xffffff58u), 0x4u);
    /* 0041934a: mov dword ptr [ebp - 0xa4], 4 */ W32((u32)(r_ebp+0xffffff5cu), 0x4u);
    /* 00419354: mov dword ptr [ebp - 0xa0], 4 */ W32((u32)(r_ebp+0xffffff60u), 0x4u);
    /* 0041935e: mov dword ptr [ebp - 0x9c], 4 */ W32((u32)(r_ebp+0xffffff64u), 0x4u);
    /* 00419368: mov dword ptr [ebp - 0x98], 4 */ W32((u32)(r_ebp+0xffffff68u), 0x4u);
    /* 00419372: mov dword ptr [ebp - 0x94], 4 */ W32((u32)(r_ebp+0xffffff6cu), 0x4u);
    /* 0041937c: mov dword ptr [ebp - 0x90], 4 */ W32((u32)(r_ebp+0xffffff70u), 0x4u);
    /* 00419386: mov dword ptr [ebp - 0x8c], 4 */ W32((u32)(r_ebp+0xffffff74u), 0x4u);
    /* 00419390: mov dword ptr [ebp - 0x88], 4 */ W32((u32)(r_ebp+0xffffff78u), 0x4u);
    /* 0041939a: mov dword ptr [ebp - 0x84], 4 */ W32((u32)(r_ebp+0xffffff7cu), 0x4u);
    /* 004193a4: mov dword ptr [ebp - 0x80], 4 */ W32((u32)(r_ebp+0xffffff80u), 0x4u);
    /* 004193ab: mov dword ptr [ebp - 0x7c], 4 */ W32((u32)(r_ebp+0xffffff84u), 0x4u);
    /* 004193b2: mov dword ptr [ebp - 0x78], 4 */ W32((u32)(r_ebp+0xffffff88u), 0x4u);
    /* 004193b9: mov dword ptr [ebp - 0x74], 4 */ W32((u32)(r_ebp+0xffffff8cu), 0x4u);
    /* 004193c0: mov dword ptr [ebp - 0x70], 2 */ W32((u32)(r_ebp+0xffffff90u), 0x2u);
    /* 004193c7: mov dword ptr [ebp - 0x6c], 4 */ W32((u32)(r_ebp+0xffffff94u), 0x4u);
    /* 004193ce: mov dword ptr [ebp - 0x68], 4 */ W32((u32)(r_ebp+0xffffff98u), 0x4u);
    /* 004193d5: mov dword ptr [ebp - 0x64], 2 */ W32((u32)(r_ebp+0xffffff9cu), 0x2u);
    /* 004193dc: mov dword ptr [ebp - 0x60], 2 */ W32((u32)(r_ebp+0xffffffa0u), 0x2u);
    /* 004193e3: mov dword ptr [ebp - 0x5c], 2 */ W32((u32)(r_ebp+0xffffffa4u), 0x2u);
    /* 004193ea: mov dword ptr [ebp - 0x58], 2 */ W32((u32)(r_ebp+0xffffffa8u), 0x2u);
    /* 004193f1: mov dword ptr [ebp - 0x54], 2 */ W32((u32)(r_ebp+0xffffffacu), 0x2u);
    /* 004193f8: mov dword ptr [ebp - 0x50], 2 */ W32((u32)(r_ebp+0xffffffb0u), 0x2u);
    /* 004193ff: mov dword ptr [ebp - 0x4c], 2 */ W32((u32)(r_ebp+0xffffffb4u), 0x2u);
    /* 00419406: mov dword ptr [ebp - 0x48], 2 */ W32((u32)(r_ebp+0xffffffb8u), 0x2u);
    /* 0041940d: mov dword ptr [ebp - 0x44], 2 */ W32((u32)(r_ebp+0xffffffbcu), 0x2u);
    /* 00419414: mov dword ptr [ebp - 0x40], 2 */ W32((u32)(r_ebp+0xffffffc0u), 0x2u);
    /* 0041941b: mov dword ptr [ebp - 0x3c], 2 */ W32((u32)(r_ebp+0xffffffc4u), 0x2u);
    /* 00419422: mov dword ptr [ebp - 0x38], 2 */ W32((u32)(r_ebp+0xffffffc8u), 0x2u);
    /* 00419429: mov dword ptr [ebp - 0x34], 4 */ W32((u32)(r_ebp+0xffffffccu), 0x4u);
    /* 00419430: mov dword ptr [ebp - 0x30], 4 */ W32((u32)(r_ebp+0xffffffd0u), 0x4u);
    /* 00419437: mov dword ptr [ebp - 0x2c], 4 */ W32((u32)(r_ebp+0xffffffd4u), 0x4u);
    /* 0041943e: mov dword ptr [ebp - 0x28], 4 */ W32((u32)(r_ebp+0xffffffd8u), 0x4u);
    /* 00419445: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 0041944c: mov dword ptr [ebp - 0x20], 4 */ W32((u32)(r_ebp+0xffffffe0u), 0x4u);
    /* 00419453: mov dword ptr [ebp - 0x1c], 4 */ W32((u32)(r_ebp+0xffffffe4u), 0x4u);
    /* 0041945a: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 00419461: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 00419468: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 0041946f: mov eax, dword ptr [ebp - 0x4ec] */ r_eax = R32((u32)(r_ebp+0xfffffb14u));
    /* 00419475: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419478: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 0041947b: mov ecx, dword ptr [ebp - 0x4ec] */ r_ecx = R32((u32)(r_ebp+0xfffffb14u));
    /* 00419481: call 0x418849 */ r_esp -= 4; W32(r_esp, 0x419486u); f_00418849();
    /* 00419486: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419488: je 0x419499 */ if (fZ) goto L_00419499;
L_0041948a:; BB(0x0041948a);
    /* 0041948a: mov dword ptr [ebp - 0x4e8], 0 */ W32((u32)(r_ebp+0xfffffb18u), 0x0u);
    /* 00419494: jmp 0x41960e */ goto L_0041960e;
L_00419499:; BB(0x00419499);
    /* 00419499: mov edx, dword ptr [ebp - 0x4ec] */ r_edx = R32((u32)(r_ebp+0xfffffb14u));
    /* 0041949f: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004194a3: je 0x4194b5 */ if (fZ) goto L_004194b5;
L_004194a5:; BB(0x004194a5);
    /* 004194a5: mov ecx, dword ptr [ebp - 0x4ec] */ r_ecx = R32((u32)(r_ebp+0xfffffb14u));
    /* 004194ab: call 0x4198c4 */ r_esp -= 4; W32(r_esp, 0x4194b0u); f_004198c4();
    /* 004194b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004194b3: jmp 0x4194c3 */ goto L_004194c3;
L_004194b5:; BB(0x004194b5);
    /* 004194b5: mov ecx, dword ptr [ebp - 0x4ec] */ r_ecx = R32((u32)(r_ebp+0xfffffb14u));
    /* 004194bb: call 0x41962e */ r_esp -= 4; W32(r_esp, 0x4194c0u); f_0041962e();
    /* 004194c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004194c3:; BB(0x004194c3);
    /* 004194c3: mov ecx, dword ptr [ebp - 0x4ec] */ r_ecx = R32((u32)(r_ebp+0xfffffb14u));
    /* 004194c9: call 0x4198c4 */ r_esp -= 4; W32(r_esp, 0x4194ceu); f_004198c4();
    /* 004194ce: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004194d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004194d4: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004194d7: lea ecx, [ebp + eax - 0x4e4] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffb1cu);
    /* 004194de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004194e1: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 004194e4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004194e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004194ea: mov dword ptr [ebp - 0x4f0], ecx */ W32((u32)(r_ebp+0xfffffb10u), r_ecx);
    /* 004194f0: mov edx, dword ptr [ebp - 0x4f0] */ r_edx = R32((u32)(r_ebp+0xfffffb10u));
    /* 004194f6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004194f9: mov dword ptr [ebp - 0x4f0], edx */ W32((u32)(r_ebp+0xfffffb10u), r_edx);
    /* 004194ff: cmp dword ptr [ebp - 0x4f0], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffb10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00419506: ja 0x41960e */ if ((!fC&&!fZ)) goto L_0041960e;
L_0041950c:; BB(0x0041950c);
    /* 0041950c: mov eax, dword ptr [ebp - 0x4f0] */ r_eax = R32((u32)(r_ebp+0xfffffb10u));
    /* 00419512: jmp dword ptr [eax*4 + 0x41961a] */ { u32 t = R32((u32)(r_eax*4+0x41961au)); switch (t) { case 0x419519u: goto L_00419519; case 0x419528u: goto L_00419528; case 0x419537u: goto L_00419537; case 0x4195bcu: goto L_004195bc; case 0x4195c8u: goto L_004195c8; default: UNSUP(0x00419512, "jump table entry is not a known target"); } }
L_00419519:; BB(0x00419519);
    /* 00419519: mov dword ptr [ebp - 0x4e8], 1 */ W32((u32)(r_ebp+0xfffffb18u), 0x1u);
    /* 00419523: jmp 0x41960e */ goto L_0041960e;
L_00419528:; BB(0x00419528);
    /* 00419528: mov dword ptr [ebp - 0x4e8], 0 */ W32((u32)(r_ebp+0xfffffb18u), 0x0u);
    /* 00419532: jmp 0x41960e */ goto L_0041960e;
L_00419537:; BB(0x00419537);
    /* 00419537: mov ecx, dword ptr [ebp - 0x4ec] */ r_ecx = R32((u32)(r_ebp+0xfffffb14u));
    /* 0041953d: cmp dword ptr [ecx + 0x54], 2 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419541: jg 0x41955b */ if ((!fZ&&fS==fO)) goto L_0041955b;
L_00419543:; BB(0x00419543);
    /* 00419543: mov edx, dword ptr [ebp - 0x4ec] */ r_edx = R32((u32)(r_ebp+0xfffffb14u));
    /* 00419549: cmp dword ptr [edx + 0x40], 1 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041954d: jle 0x419567 */ if ((fZ||fS!=fO)) goto L_00419567;
L_0041954f:; BB(0x0041954f);
    /* 0041954f: mov eax, dword ptr [ebp - 0x4ec] */ r_eax = R32((u32)(r_ebp+0xfffffb14u));
    /* 00419555: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419559: jne 0x419567 */ if (!fZ) goto L_00419567;
L_0041955b:; BB(0x0041955b);
    /* 0041955b: mov dword ptr [ebp - 0x4e8], 1 */ W32((u32)(r_ebp+0xfffffb18u), 0x1u);
    /* 00419565: jmp 0x4195a1 */ goto L_004195a1;
L_00419567:; BB(0x00419567);
    /* 00419567: mov ecx, dword ptr [ebp - 0x4ec] */ r_ecx = R32((u32)(r_ebp+0xfffffb14u));
    /* 0041956d: cmp dword ptr [ecx + 0x58], 0 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419571: je 0x419597 */ if (fZ) goto L_00419597;
L_00419573:; BB(0x00419573);
    /* 00419573: mov edx, dword ptr [ebp - 0x4ec] */ r_edx = R32((u32)(r_ebp+0xfffffb14u));
    /* 00419579: cmp dword ptr [edx + 0x64], 0 */ {  u32 a = R32((u32)(r_edx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041957d: je 0x41958b */ if (fZ) goto L_0041958b;
L_0041957f:; BB(0x0041957f);
    /* 0041957f: mov dword ptr [ebp - 0x4e8], 2 */ W32((u32)(r_ebp+0xfffffb18u), 0x2u);
    /* 00419589: jmp 0x419595 */ goto L_00419595;
L_0041958b:; BB(0x0041958b);
    /* 0041958b: mov dword ptr [ebp - 0x4e8], 1 */ W32((u32)(r_ebp+0xfffffb18u), 0x1u);
L_00419595:; BB(0x00419595);
    /* 00419595: jmp 0x4195a1 */ goto L_004195a1;
L_00419597:; BB(0x00419597);
    /* 00419597: mov dword ptr [ebp - 0x4e8], 1 */ W32((u32)(r_ebp+0xfffffb18u), 0x1u);
L_004195a1:; BB(0x004195a1);
    /* 004195a1: cmp dword ptr [ebp - 0x4e8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffb18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004195a8: jne 0x4195ba */ if (!fZ) goto L_004195ba;
L_004195aa:; BB(0x004195aa);
    /* 004195aa: cmp dword ptr [ebp - 4], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004195ae: jne 0x4195ba */ if (!fZ) goto L_004195ba;
L_004195b0:; BB(0x004195b0);
    /* 004195b0: mov dword ptr [ebp - 0x4e8], 0 */ W32((u32)(r_ebp+0xfffffb18u), 0x0u);
L_004195ba:; BB(0x004195ba);
    /* 004195ba: jmp 0x41960e */ goto L_0041960e;
L_004195bc:; BB(0x004195bc);
    /* 004195bc: mov dword ptr [ebp - 0x4e8], 3 */ W32((u32)(r_ebp+0xfffffb18u), 0x3u);
    /* 004195c6: jmp 0x41960e */ goto L_0041960e;
L_004195c8:; BB(0x004195c8);
    /* 004195c8: mov eax, dword ptr [ebp - 0x4ec] */ r_eax = R32((u32)(r_ebp+0xfffffb14u));
    /* 004195ce: cmp dword ptr [eax + 0x54], 2 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004195d2: jg 0x4195e0 */ if ((!fZ&&fS==fO)) goto L_004195e0;
L_004195d4:; BB(0x004195d4);
    /* 004195d4: mov ecx, dword ptr [ebp - 0x4ec] */ r_ecx = R32((u32)(r_ebp+0xfffffb14u));
    /* 004195da: cmp dword ptr [ecx + 0x40], 1 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004195de: je 0x4195ec */ if (fZ) goto L_004195ec;
L_004195e0:; BB(0x004195e0);
    /* 004195e0: mov dword ptr [ebp - 0x4e8], 1 */ W32((u32)(r_ebp+0xfffffb18u), 0x1u);
    /* 004195ea: jmp 0x41960e */ goto L_0041960e;
L_004195ec:; BB(0x004195ec);
    /* 004195ec: mov edx, dword ptr [ebp - 0x4ec] */ r_edx = R32((u32)(r_ebp+0xfffffb14u));
    /* 004195f2: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004195f6: je 0x419604 */ if (fZ) goto L_00419604;
L_004195f8:; BB(0x004195f8);
    /* 004195f8: mov dword ptr [ebp - 0x4e8], 4 */ W32((u32)(r_ebp+0xfffffb18u), 0x4u);
    /* 00419602: jmp 0x41960e */ goto L_0041960e;
L_00419604:; BB(0x00419604);
    /* 00419604: mov dword ptr [ebp - 0x4e8], 1 */ W32((u32)(r_ebp+0xfffffb18u), 0x1u);
L_0041960e:; BB(0x0041960e);
    /* 0041960e: mov eax, dword ptr [ebp - 0x4e8] */ r_eax = R32((u32)(r_ebp+0xfffffb18u));
    /* 00419614: mov esp, ebp */ r_esp = r_ebp;
    /* 00419616: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419617: ret 4 */ FN_RET(0x0041889b); r_esp += 8; return;
}

void f_0041962e(void) /* FUN_0041962e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041962e);
    /* 0041962e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041962f: mov ebp, esp */ r_ebp = r_esp;
    /* 00419631: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419634: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00419635: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00419638: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041963b: cmp dword ptr [eax + 0x54], 2 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041963f: jne 0x419710 */ if (!fZ) goto L_00419710;
L_00419645:; BB(0x00419645);
    /* 00419645: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419648: mov dl, byte ptr [ecx + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0xcu))) & 0xffu);
    /* 0041964b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041964c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041964f: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x419654u); f_004186fb();
    /* 00419654: mov esi, eax */ r_esi = r_eax;
    /* 00419656: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419659: mov cl, byte ptr [eax + 0xd] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xdu))) & 0xffu);
    /* 0041965c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041965d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419660: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x419665u); f_004186fb();
    /* 00419665: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419667: jne 0x419710 */ if (!fZ) goto L_00419710;
L_0041966d:; BB(0x0041966d);
    /* 0041966d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419670: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00419673: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419676: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419679: cmp dword ptr [ecx + 0x40], eax */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041967c: jge 0x419710 */ if ((fS==fO)) goto L_00419710;
L_00419682:; BB(0x00419682);
    /* 00419682: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419685: mov al, byte ptr [edx + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xcu))) & 0xffu);
    /* 00419688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419689: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041968c: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x419691u); f_004186fb();
    /* 00419691: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419694: jne 0x4196ec */ if (!fZ) goto L_004196ec;
L_00419696:; BB(0x00419696);
    /* 00419696: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419699: cmp dword ptr [ecx + 0x58], 0 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041969d: je 0x4196d0 */ if (fZ) goto L_004196d0;
L_0041969f:; BB(0x0041969f);
    /* 0041969f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004196a2: cmp dword ptr [edx + 0x44], 0 */ {  u32 a = R32((u32)(r_edx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004196a6: jne 0x4196b1 */ if (!fZ) goto L_004196b1;
L_004196a8:; BB(0x004196a8);
    /* 004196a8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004196ab: cmp dword ptr [eax + 0x40], 1 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004196af: jne 0x4196d0 */ if (!fZ) goto L_004196d0;
L_004196b1:; BB(0x004196b1);
    /* 004196b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004196b4: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004196b8: jne 0x4196c6 */ if (!fZ) goto L_004196c6;
L_004196ba:; BB(0x004196ba);
    /* 004196ba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004196bd: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 004196c0: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
L_004196c6:; BB(0x004196c6);
    /* 004196c6: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 004196cb: jmp 0x4198bf */ goto L_004198bf;
L_004196d0:; BB(0x004196d0);
    /* 004196d0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004196d3: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 004196d6: cmp dword ptr [edx], 1 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004196d9: jne 0x4196e2 */ if (!fZ) goto L_004196e2;
L_004196db:; BB(0x004196db);
    /* 004196db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004196dd: jmp 0x4198bf */ goto L_004198bf;
L_004196e2:; BB(0x004196e2);
    /* 004196e2: mov eax, 0xd */ r_eax = 0xdu;
    /* 004196e7: jmp 0x4198bf */ goto L_004198bf;
L_004196ec:; BB(0x004196ec);
    /* 004196ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004196ef: call 0x41873a */ r_esp -= 4; W32(r_esp, 0x4196f4u); f_0041873a();
    /* 004196f4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004196f5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004196f7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004196f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004196fc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004196ff: cmp dword ptr [eax + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419703: je 0x419710 */ if (fZ) goto L_00419710;
L_00419705:; BB(0x00419705);
    /* 00419705: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419708: add eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041970b: jmp 0x4198bf */ goto L_004198bf;
L_00419710:; BB(0x00419710);
    /* 00419710: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419713: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00419716: cmp dword ptr [edx], 1 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419719: jne 0x419722 */ if (!fZ) goto L_00419722;
L_0041971b:; BB(0x0041971b);
    /* 0041971b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041971d: jmp 0x4198bf */ goto L_004198bf;
L_00419722:; BB(0x00419722);
    /* 00419722: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419725: call 0x41873a */ r_esp -= 4; W32(r_esp, 0x41972au); f_0041873a();
    /* 0041972a: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041972d: je 0x41973c */ if (fZ) goto L_0041973c;
L_0041972f:; BB(0x0041972f);
    /* 0041972f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419732: call 0x4187d7 */ r_esp -= 4; W32(r_esp, 0x419737u); f_004187d7();
    /* 00419737: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041973a: jne 0x419743 */ if (!fZ) goto L_00419743;
L_0041973c:; BB(0x0041973c);
    /* 0041973c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041973e: jmp 0x4198bf */ goto L_004198bf;
L_00419743:; BB(0x00419743);
    /* 00419743: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419746: call 0x41873a */ r_esp -= 4; W32(r_esp, 0x41974bu); f_0041873a();
    /* 0041974b: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041974e: jge 0x41978a */ if ((fS==fO)) goto L_0041978a;
L_00419750:; BB(0x00419750);
    /* 00419750: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419753: call 0x41873a */ r_esp -= 4; W32(r_esp, 0x419758u); f_0041873a();
    /* 00419758: mov esi, eax */ r_esi = r_eax;
    /* 0041975a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041975d: call 0x4187d7 */ r_esp -= 4; W32(r_esp, 0x419762u); f_004187d7();
    /* 00419762: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419764: je 0x41978a */ if (fZ) goto L_0041978a;
L_00419766:; BB(0x00419766);
    /* 00419766: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419769: call 0x41873a */ r_esp -= 4; W32(r_esp, 0x41976eu); f_0041873a();
    /* 0041976e: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419771: je 0x419780 */ if (fZ) goto L_00419780;
L_00419773:; BB(0x00419773);
    /* 00419773: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419776: call 0x41873a */ r_esp -= 4; W32(r_esp, 0x41977bu); f_0041873a();
    /* 0041977b: jmp 0x4198bf */ goto L_004198bf;
L_00419780:; BB(0x00419780);
    /* 00419780: mov eax, 0xd */ r_eax = 0xdu;
    /* 00419785: jmp 0x4198bf */ goto L_004198bf;
L_0041978a:; BB(0x0041978a);
    /* 0041978a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041978d: call 0x41873a */ r_esp -= 4; W32(r_esp, 0x419792u); f_0041873a();
    /* 00419792: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419795: jge 0x4197a1 */ if ((fS==fO)) goto L_004197a1;
L_00419797:; BB(0x00419797);
    /* 00419797: mov eax, 1 */ r_eax = 0x1u;
    /* 0041979c: jmp 0x4198bf */ goto L_004198bf;
L_004197a1:; BB(0x004197a1);
    /* 004197a1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004197a4: cmp dword ptr [eax + 0x54], 2 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004197a8: jne 0x419804 */ if (!fZ) goto L_00419804;
L_004197aa:; BB(0x004197aa);
    /* 004197aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004197ad: mov dl, byte ptr [ecx + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0xcu))) & 0xffu);
    /* 004197b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004197b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004197b4: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x4197b9u); f_004186fb();
    /* 004197b9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004197bc: jne 0x4197d2 */ if (!fZ) goto L_004197d2;
L_004197be:; BB(0x004197be);
    /* 004197be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004197c1: mov cl, byte ptr [eax + 0xd] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xdu))) & 0xffu);
    /* 004197c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004197c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004197c8: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x4197cdu); f_004186fb();
    /* 004197cd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004197d0: je 0x4197fa */ if (fZ) goto L_004197fa;
L_004197d2:; BB(0x004197d2);
    /* 004197d2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004197d5: mov al, byte ptr [edx + 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xdu))) & 0xffu);
    /* 004197d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004197d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004197dc: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x4197e1u); f_004186fb();
    /* 004197e1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004197e4: jne 0x419804 */ if (!fZ) goto L_00419804;
L_004197e6:; BB(0x004197e6);
    /* 004197e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004197e9: mov dl, byte ptr [ecx + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0xcu))) & 0xffu);
    /* 004197ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004197ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004197f0: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x4197f5u); f_004186fb();
    /* 004197f5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004197f8: jne 0x419804 */ if (!fZ) goto L_00419804;
L_004197fa:; BB(0x004197fa);
    /* 004197fa: mov eax, 2 */ r_eax = 0x2u;
    /* 004197ff: jmp 0x4198bf */ goto L_004198bf;
L_00419804:; BB(0x00419804);
    /* 00419804: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419807: cmp dword ptr [eax + 0x54], 2 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041980b: jne 0x419864 */ if (!fZ) goto L_00419864;
L_0041980d:; BB(0x0041980d);
    /* 0041980d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419810: mov dl, byte ptr [ecx + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0xcu))) & 0xffu);
    /* 00419813: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419814: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419817: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x41981cu); f_004186fb();
    /* 0041981c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041981f: jne 0x419835 */ if (!fZ) goto L_00419835;
L_00419821:; BB(0x00419821);
    /* 00419821: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419824: mov cl, byte ptr [eax + 0xd] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xdu))) & 0xffu);
    /* 00419827: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419828: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041982b: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x419830u); f_004186fb();
    /* 00419830: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419833: je 0x41985d */ if (fZ) goto L_0041985d;
L_00419835:; BB(0x00419835);
    /* 00419835: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419838: mov al, byte ptr [edx + 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xdu))) & 0xffu);
    /* 0041983b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041983c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041983f: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x419844u); f_004186fb();
    /* 00419844: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419847: jne 0x419864 */ if (!fZ) goto L_00419864;
L_00419849:; BB(0x00419849);
    /* 00419849: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041984c: mov dl, byte ptr [ecx + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0xcu))) & 0xffu);
    /* 0041984f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419850: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419853: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x419858u); f_004186fb();
    /* 00419858: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041985b: jne 0x419864 */ if (!fZ) goto L_00419864;
L_0041985d:; BB(0x0041985d);
    /* 0041985d: mov eax, 3 */ r_eax = 0x3u;
    /* 00419862: jmp 0x4198bf */ goto L_004198bf;
L_00419864:; BB(0x00419864);
    /* 00419864: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419867: call 0x41873a */ r_esp -= 4; W32(r_esp, 0x41986cu); f_0041873a();
    /* 0041986c: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041986f: jge 0x41987e */ if ((fS==fO)) goto L_0041987e;
L_00419871:; BB(0x00419871);
    /* 00419871: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419874: call 0x41873a */ r_esp -= 4; W32(r_esp, 0x419879u); f_0041873a();
    /* 00419879: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041987c: jmp 0x4198bf */ goto L_004198bf;
L_0041987e:; BB(0x0041987e);
    /* 0041987e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419881: call 0x41873a */ r_esp -= 4; W32(r_esp, 0x419886u); f_0041873a();
    /* 00419886: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419889: jge 0x41988f */ if ((fS==fO)) goto L_0041988f;
L_0041988b:; BB(0x0041988b);
    /* 0041988b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041988d: jmp 0x4198bf */ goto L_004198bf;
L_0041988f:; BB(0x0041988f);
    /* 0041988f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419892: call 0x4187d7 */ r_esp -= 4; W32(r_esp, 0x419897u); f_004187d7();
    /* 00419897: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041989a: jge 0x4198a3 */ if ((fS==fO)) goto L_004198a3;
L_0041989c:; BB(0x0041989c);
    /* 0041989c: mov eax, 1 */ r_eax = 0x1u;
    /* 004198a1: jmp 0x4198bf */ goto L_004198bf;
L_004198a3:; BB(0x004198a3);
    /* 004198a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004198a6: call 0x4187d7 */ r_esp -= 4; W32(r_esp, 0x4198abu); f_004187d7();
    /* 004198ab: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004198ae: jge 0x4198bd */ if ((fS==fO)) goto L_004198bd;
L_004198b0:; BB(0x004198b0);
    /* 004198b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004198b3: call 0x4187d7 */ r_esp -= 4; W32(r_esp, 0x4198b8u); f_004187d7();
    /* 004198b8: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004198bb: jmp 0x4198bf */ goto L_004198bf;
L_004198bd:; BB(0x004198bd);
    /* 004198bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004198bf:; BB(0x004198bf);
    /* 004198bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004198c0: mov esp, ebp */ r_esp = r_ebp;
    /* 004198c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004198c3: ret  */ FN_RET(0x0041962e); r_esp += 4; return;
}

void f_004198c4(void) /* FUN_004198c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004198c4);
    /* 004198c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004198c5: mov ebp, esp */ r_ebp = r_esp;
    /* 004198c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004198c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004198cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004198ce: mov cl, byte ptr [eax + 0x22] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x22u))) & 0xffu);
    /* 004198d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004198d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004198d5: call 0x4186fb */ r_esp -= 4; W32(r_esp, 0x4198dau); f_004186fb();
    /* 004198da: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004198dd: mov esp, ebp */ r_esp = r_ebp;
    /* 004198df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004198e0: ret  */ FN_RET(0x004198c4); r_esp += 4; return;
}

void f_004198f0(void) /* FUN_004198f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004198f0);
    /* 004198f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004198f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004198f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004198f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004198f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004198fa: call 0x4185d1 */ r_esp -= 4; W32(r_esp, 0x4198ffu); f_004185d1();
    /* 004198ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00419902: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00419905: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419907: je 0x419915 */ if (fZ) goto L_00419915;
L_00419909:; BB(0x00419909);
    /* 00419909: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041990c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041990d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x419912u); f_0048ac1b();
    /* 00419912: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00419915:; BB(0x00419915);
    /* 00419915: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419918: mov esp, ebp */ r_esp = r_ebp;
    /* 0041991a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041991b: ret 4 */ FN_RET(0x004198f0); r_esp += 8; return;
}

void f_00419920(void) /* FUN_00419920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419920);
    /* 00419920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419921: mov ebp, esp */ r_ebp = r_esp;
    /* 00419923: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419926: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00419929: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041992c: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x419931u); f_00446fe0();
    /* 00419931: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419934: mov dword ptr [eax], 0x633c84 */ W32((u32)(r_eax), 0x633c84u);
    /* 0041993a: push 0x65100c */ { u32 v = 0x65100cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041993f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00419945: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x41994au); f_005da413();
    /* 0041994a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041994d: mov dword ptr [0x6f579c], ecx */ W32((u32)(0x6f579cu), r_ecx);
    /* 00419953: push 0x138d */ { u32 v = 0x138du; r_esp -= 4; W32(r_esp, v); }
    /* 00419958: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041995b: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x419960u); f_005e5ec3();
    /* 00419960: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00419966: jmp 0x419974 */ goto L_00419974;
L_00419968:; BB(0x00419968);
    /* 00419968: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0041996c: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00419970: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00419974:; BB(0x00419974);
    /* 00419974: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00419978: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041997b: jge 0x41999a */ if ((fS==fO)) goto L_0041999a;
L_0041997d:; BB(0x0041997d);
    /* 0041997d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00419981: add ecx, 0x7d2 */ {  u32 a = r_ecx; u32 b = 0x7d2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419987: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419988: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041998a: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00419990: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00419993: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x419998u); f_005ba9e1();
    /* 00419998: jmp 0x419968 */ goto L_00419968;
L_0041999a:; BB(0x0041999a);
    /* 0041999a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004199a0: jmp 0x4199ae */ goto L_004199ae;
L_004199a2:; BB(0x004199a2);
    /* 004199a2: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004199a6: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004199aa: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004199ae:; BB(0x004199ae);
    /* 004199ae: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004199b2: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004199b5: jge 0x4199d3 */ if ((fS==fO)) goto L_004199d3;
L_004199b7:; BB(0x004199b7);
    /* 004199b7: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004199bb: add edx, 0x13a2 */ {  u32 a = r_edx; u32 b = 0x13a2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004199c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004199c2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004199c4: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 004199c9: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004199cc: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x4199d1u); f_005ba9e1();
    /* 004199d1: jmp 0x4199a2 */ goto L_004199a2;
L_004199d3:; BB(0x004199d3);
    /* 004199d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004199d6: mov esp, ebp */ r_esp = r_ebp;
    /* 004199d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004199d9: ret  */ FN_RET(0x00419920); r_esp += 4; return;
}

void f_004199da(void) /* FUN_004199da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004199da);
    /* 004199da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004199db: mov ebp, esp */ r_ebp = r_esp;
    /* 004199dd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004199e0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004199e3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004199e6: mov dword ptr [eax], 0x633c84 */ W32((u32)(r_eax), 0x633c84u);
    /* 004199ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004199ee: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004199f4: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x4199f9u); f_005da413();
    /* 004199f9: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 004199ff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00419a02: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419a05: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00419a08: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419a0c: je 0x419a1f */ if (fZ) goto L_00419a1f;
L_00419a0e:; BB(0x00419a0e);
    /* 00419a0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00419a10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419a13: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00419a15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419a18: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x419a1au); call_ind(t); }
    /* 00419a1a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00419a1d: jmp 0x419a26 */ goto L_00419a26;
L_00419a1f:; BB(0x00419a1f);
    /* 00419a1f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00419a26:; BB(0x00419a26);
    /* 00419a26: mov dword ptr [0x6f57a0], 0 */ W32((u32)(0x6f57a0u), 0x0u);
    /* 00419a30: mov dword ptr [0x6f579c], 0 */ W32((u32)(0x6f579cu), 0x0u);
    /* 00419a3a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419a3d: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x419a42u); f_0044711a();
    /* 00419a42: mov esp, ebp */ r_esp = r_ebp;
    /* 00419a44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419a45: ret  */ FN_RET(0x004199da); r_esp += 4; return;
}

void f_00419a46(void) /* FUN_00419a46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419a46);
    /* 00419a46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419a47: mov ebp, esp */ r_ebp = r_esp;
    /* 00419a49: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419a4c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00419a4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419a52: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x419a57u); f_004476a6();
    /* 00419a57: cmp dword ptr [0x6f57a0], 0 */ {  u32 a = R32((u32)(0x6f57a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419a5e: jne 0x419a92 */ if (!fZ) goto L_00419a92;
L_00419a60:; BB(0x00419a60);
    /* 00419a60: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00419a65: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x419a6au); f_0048ab58();
    /* 00419a6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419a6d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00419a70: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419a74: je 0x419a83 */ if (fZ) goto L_00419a83;
L_00419a76:; BB(0x00419a76);
    /* 00419a76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419a79: call 0x40e741 */ r_esp -= 4; W32(r_esp, 0x419a7eu); f_0040e741();
    /* 00419a7e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00419a81: jmp 0x419a8a */ goto L_00419a8a;
L_00419a83:; BB(0x00419a83);
    /* 00419a83: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00419a8a:; BB(0x00419a8a);
    /* 00419a8a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00419a8d: mov dword ptr [0x6f57a0], eax */ W32((u32)(0x6f57a0u), r_eax);
L_00419a92:; BB(0x00419a92);
    /* 00419a92: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00419a94: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x419a99u); f_0048ab58();
    /* 00419a99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419a9c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00419a9f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419aa3: je 0x419ac0 */ if (fZ) goto L_00419ac0;
L_00419aa5:; BB(0x00419aa5);
    /* 00419aa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419aa7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419aaa: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x419aafu); f_005e6160();
    /* 00419aaf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419ab2: mov dword ptr [ecx], 0x633d3c */ W32((u32)(r_ecx), 0x633d3cu);
    /* 00419ab8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419abb: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00419abe: jmp 0x419ac7 */ goto L_00419ac7;
L_00419ac0:; BB(0x00419ac0);
    /* 00419ac0: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00419ac7:; BB(0x00419ac7);
    /* 00419ac7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00419aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419acb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419ace: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x419ad3u); f_005e5d66();
    /* 00419ad3: mov esp, ebp */ r_esp = r_ebp;
    /* 00419ad5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419ad6: ret  */ FN_RET(0x00419a46); r_esp += 4; return;
}

void f_00419ad7(void) /* FUN_00419ad7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419ad7);
    /* 00419ad7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419ad8: mov ebp, esp */ r_ebp = r_esp;
    /* 00419ada: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419add: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00419ae0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00419ae7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00419aee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00419af1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419af2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00419af5: call 0x447ba4 */ r_esp -= 4; W32(r_esp, 0x419afau); f_00447ba4();
    /* 00419afa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419afd: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419b01: je 0x419b0a */ if (fZ) goto L_00419b0a;
L_00419b03:; BB(0x00419b03);
    /* 00419b03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419b05: jmp 0x419bea */ goto L_00419bea;
L_00419b0a:; BB(0x00419b0a);
    /* 00419b0a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419b0d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00419b10: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419b13: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419b17: je 0x419b24 */ if (fZ) goto L_00419b24;
L_00419b19:; BB(0x00419b19);
    /* 00419b19: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419b1d: je 0x419b59 */ if (fZ) goto L_00419b59;
L_00419b1f:; BB(0x00419b1f);
    /* 00419b1f: jmp 0x419be4 */ goto L_00419be4;
L_00419b24:; BB(0x00419b24);
    /* 00419b24: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419b2a: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00419b2d: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x419b32u); f_005d96a9();
    /* 00419b32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419b34: je 0x419b48 */ if (fZ) goto L_00419b48;
L_00419b36:; BB(0x00419b36);
    /* 00419b36: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00419b3c: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00419b3f: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x419b44u); f_005d96a9();
    /* 00419b44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419b46: jne 0x419b54 */ if (!fZ) goto L_00419b54;
L_00419b48:; BB(0x00419b48);
    /* 00419b48: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00419b4d: mov dword ptr [eax + 0x54], 1 */ W32((u32)(r_eax+0x54u), 0x1u);
L_00419b54:; BB(0x00419b54);
    /* 00419b54: jmp 0x419be4 */ goto L_00419be4;
L_00419b59:; BB(0x00419b59);
    /* 00419b59: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419b5c: mov dl, byte ptr [ecx + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x14u))) & 0xffu);
    /* 00419b5f: mov byte ptr [ebp - 0x18], dl */ W8((u32)(r_ebp+0xffffffe8u), (u8)r_edx);
    /* 00419b62: cmp byte ptr [ebp - 0x18], 0x20 */ {  u32 a = R8((u32)(r_ebp+0xffffffe8u)); u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00419b66: je 0x419b6a */ if (fZ) goto L_00419b6a;
L_00419b68:; BB(0x00419b68);
    /* 00419b68: jmp 0x419be4 */ goto L_00419be4;
L_00419b6a:; BB(0x00419b6a);
    /* 00419b6a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00419b6d: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 00419b74: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419b7a: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x419b7fu); f_0040f9c4();
    /* 00419b7f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00419b83: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00419b87: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419b8a: jle 0x419be4 */ if ((fZ||fS!=fO)) goto L_00419be4;
L_00419b8c:; BB(0x00419b8c);
    /* 00419b8c: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00419b90: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419b93: jge 0x419be4 */ if ((fS==fO)) goto L_00419be4;
L_00419b95:; BB(0x00419b95);
    /* 00419b95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00419b97: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00419b9b: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419ba1: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00419ba5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00419ba9: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00419bae: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00419bb2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00419bb4: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x419bb7u); call_ind(t); }
    /* 00419bb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419bb9: je 0x419be4 */ if (fZ) goto L_00419be4;
L_00419bbb:; BB(0x00419bbb);
    /* 00419bbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00419bbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419bbf: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00419bc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419bc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00419bc5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00419bc9: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00419bce: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00419bd2: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00419bd6: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00419bdb: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00419bdf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00419be1: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x419be4u); call_ind(t); }
L_00419be4:; BB(0x00419be4);
    /* 00419be4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419be7: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
L_00419bea:; BB(0x00419bea);
    /* 00419bea: mov esp, ebp */ r_esp = r_ebp;
    /* 00419bec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419bed: ret 4 */ FN_RET(0x00419ad7); r_esp += 8; return;
}

void f_00419bf0(void) /* FUN_00419bf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419bf0);
    /* 00419bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00419bf3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419bf6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419bf9: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419c00: jne 0x419c1a */ if (!fZ) goto L_00419c1a;
L_00419c02:; BB(0x00419c02);
    /* 00419c02: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419c08: call 0x40f68c */ r_esp -= 4; W32(r_esp, 0x419c0du); f_0040f68c();
    /* 00419c0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419c0f: je 0x419c1a */ if (fZ) goto L_00419c1a;
L_00419c11:; BB(0x00419c11);
    /* 00419c11: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00419c18: jmp 0x419c21 */ goto L_00419c21;
L_00419c1a:; BB(0x00419c1a);
    /* 00419c1a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00419c21:; BB(0x00419c21);
    /* 00419c21: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419c24: mov esp, ebp */ r_esp = r_ebp;
    /* 00419c26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419c27: ret  */ FN_RET(0x00419bf0); r_esp += 4; return;
}

void f_00419c28(void) /* FUN_00419c28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419c28);
    /* 00419c28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419c29: mov ebp, esp */ r_ebp = r_esp;
    /* 00419c2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419c2c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419c2f: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419c35: call 0x40f6a1 */ r_esp -= 4; W32(r_esp, 0x419c3au); f_0040f6a1();
    /* 00419c3a: mov esp, ebp */ r_esp = r_ebp;
    /* 00419c3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419c3d: ret  */ FN_RET(0x00419c28); r_esp += 4; return;
}

void f_00419c3e(void) /* FUN_00419c3e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419c3e);
    /* 00419c3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419c3f: mov ebp, esp */ r_ebp = r_esp;
    /* 00419c41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419c42: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419c45: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419c4b: call 0x40ed2d */ r_esp -= 4; W32(r_esp, 0x419c50u); f_0040ed2d();
    /* 00419c50: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00419c55: cmp dword ptr [eax + 0xbc], 0 */ {  u32 a = R32((u32)(r_eax+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419c5c: je 0x419c69 */ if (fZ) goto L_00419c69;
L_00419c5e:; BB(0x00419c5e);
    /* 00419c5e: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419c64: call 0x4130f0 */ r_esp -= 4; W32(r_esp, 0x419c69u); f_004130f0();
L_00419c69:; BB(0x00419c69);
    /* 00419c69: mov esp, ebp */ r_esp = r_ebp;
    /* 00419c6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419c6c: ret  */ FN_RET(0x00419c3e); r_esp += 4; return;
}

void f_00419c6d(void) /* FUN_00419c6d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419c6d);
    /* 00419c6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419c6e: mov ebp, esp */ r_ebp = r_esp;
    /* 00419c70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419c71: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419c74: cmp dword ptr [0x6f57a0], 0 */ {  u32 a = R32((u32)(0x6f57a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419c7b: je 0x419c8a */ if (fZ) goto L_00419c8a;
L_00419c7d:; BB(0x00419c7d);
    /* 00419c7d: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419c83: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x419c88u); f_0040f81e();
    /* 00419c88: jmp 0x419c8c */ goto L_00419c8c;
L_00419c8a:; BB(0x00419c8a);
    /* 00419c8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00419c8c:; BB(0x00419c8c);
    /* 00419c8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00419c8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419c8f: ret  */ FN_RET(0x00419c6d); r_esp += 4; return;
}

void f_00419c90(void) /* FUN_00419c90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419c90);
    /* 00419c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00419c93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419c96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00419c99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00419ca0: jmp 0x419cab */ goto L_00419cab;
L_00419ca2:; BB(0x00419ca2);
    /* 00419ca2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419ca5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419ca8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00419cab:; BB(0x00419cab);
    /* 00419cab: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419caf: jge 0x419ce7 */ if ((fS==fO)) goto L_00419ce7;
L_00419cb1:; BB(0x00419cb1);
    /* 00419cb1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419cb4: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00419cba: cmp dword ptr [edx + ecx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419cbf: je 0x419ce5 */ if (fZ) goto L_00419ce5;
L_00419cc1:; BB(0x00419cc1);
    /* 00419cc1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419cc4: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419cca: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00419cce: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00419cd1: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419cd4: jne 0x419ce5 */ if (!fZ) goto L_00419ce5;
L_00419cd6:; BB(0x00419cd6);
    /* 00419cd6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419cd9: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00419cdf: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00419ce3: jmp 0x419ce9 */ goto L_00419ce9;
L_00419ce5:; BB(0x00419ce5);
    /* 00419ce5: jmp 0x419ca2 */ goto L_00419ca2;
L_00419ce7:; BB(0x00419ce7);
    /* 00419ce7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00419ce9:; BB(0x00419ce9);
    /* 00419ce9: mov esp, ebp */ r_esp = r_ebp;
    /* 00419ceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419cec: ret 4 */ FN_RET(0x00419c90); r_esp += 8; return;
}

void f_00419cef(void) /* FUN_00419cef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419cef);
    /* 00419cef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419cf0: mov ebp, esp */ r_ebp = r_esp;
    /* 00419cf2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419cf5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00419cf8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00419cff: jmp 0x419d0a */ goto L_00419d0a;
L_00419d01:; BB(0x00419d01);
    /* 00419d01: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419d04: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419d07: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00419d0a:; BB(0x00419d0a);
    /* 00419d0a: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419d0e: jge 0x419d69 */ if ((fS==fO)) goto L_00419d69;
L_00419d10:; BB(0x00419d10);
    /* 00419d10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419d13: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00419d19: cmp dword ptr [edx + ecx*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419d1e: je 0x419d67 */ if (fZ) goto L_00419d67;
L_00419d20:; BB(0x00419d20);
    /* 00419d20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419d23: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419d29: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00419d2d: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x419d32u); f_004259a0();
    /* 00419d32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419d34: je 0x419d67 */ if (fZ) goto L_00419d67;
L_00419d36:; BB(0x00419d36);
    /* 00419d36: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419d39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419d3a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419d3d: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419d43: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00419d47: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x419d4cu); f_004259cd();
    /* 00419d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419d4d: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x419d52u); f_006240c0();
    /* 00419d52: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419d55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419d57: jne 0x419d67 */ if (!fZ) goto L_00419d67;
L_00419d59:; BB(0x00419d59);
    /* 00419d59: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419d5c: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00419d61: mov eax, dword ptr [eax + edx*4 + 0xc] */ r_eax = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00419d65: jmp 0x419d6b */ goto L_00419d6b;
L_00419d67:; BB(0x00419d67);
    /* 00419d67: jmp 0x419d01 */ goto L_00419d01;
L_00419d69:; BB(0x00419d69);
    /* 00419d69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00419d6b:; BB(0x00419d6b);
    /* 00419d6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00419d6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419d6e: ret 4 */ FN_RET(0x00419cef); r_esp += 8; return;
}

void f_00419d71(void) /* FUN_00419d71 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419d71);
    /* 00419d71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419d72: mov ebp, esp */ r_ebp = r_esp;
    /* 00419d74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419d75: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419d78: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00419d7b: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419d81: cmp dword ptr [ecx + eax*4 + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419d86: je 0x419d96 */ if (fZ) goto L_00419d96;
L_00419d88:; BB(0x00419d88);
    /* 00419d88: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419d8b: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00419d90: mov eax, dword ptr [eax + edx*4 + 0xc] */ r_eax = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00419d94: jmp 0x419d98 */ goto L_00419d98;
L_00419d96:; BB(0x00419d96);
    /* 00419d96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00419d98:; BB(0x00419d98);
    /* 00419d98: mov esp, ebp */ r_esp = r_ebp;
    /* 00419d9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419d9b: ret 4 */ FN_RET(0x00419d71); r_esp += 8; return;
}

void f_00419d9e(void) /* FUN_00419d9e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419d9e);
    /* 00419d9e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419d9f: mov ebp, esp */ r_ebp = r_esp;
    /* 00419da1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419da2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419da5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00419da7: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419dad: call 0x40f9ab */ r_esp -= 4; W32(r_esp, 0x419db2u); f_0040f9ab();
    /* 00419db2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00419db4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419db7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00419dba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419dbd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00419dc0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00419dc2: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x419dc5u); call_ind(t); }
    /* 00419dc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419dc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419dca: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00419dcd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419dd0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00419dd3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00419dd5: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x419dd8u); call_ind(t); }
    /* 00419dd8: mov esp, ebp */ r_esp = r_ebp;
    /* 00419dda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419ddb: ret  */ FN_RET(0x00419d9e); r_esp += 4; return;
}

void f_00419ddc(void) /* FUN_00419ddc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419ddc);
    /* 00419ddc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419ddd: mov ebp, esp */ r_ebp = r_esp;
    /* 00419ddf: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419de2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00419de3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00419de6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00419ded: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00419df4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00419df7: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x419dfcu); f_00448ca3();
    /* 00419dfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419dfe: je 0x419e07 */ if (fZ) goto L_00419e07;
L_00419e00:; BB(0x00419e00);
    /* 00419e00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419e02: jmp 0x419f0d */ goto L_00419f0d;
L_00419e07:; BB(0x00419e07);
    /* 00419e07: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419e0b: jne 0x419e1b */ if (!fZ) goto L_00419e1b;
L_00419e0d:; BB(0x00419e0d);
    /* 00419e0d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00419e10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00419e12: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00419e15: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x419e18u); call_ind(t); }
    /* 00419e18: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00419e1b:; BB(0x00419e1b);
    /* 00419e1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419e1d: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419e23: call 0x40f7fb */ r_esp -= 4; W32(r_esp, 0x419e28u); f_0040f7fb();
    /* 00419e28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419e2a: je 0x419f0b */ if (fZ) goto L_00419f0b;
L_00419e30:; BB(0x00419e30);
    /* 00419e30: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419e33: call 0x425a05 */ r_esp -= 4; W32(r_esp, 0x419e38u); f_00425a05();
    /* 00419e38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419e3a: jne 0x419f0b */ if (!fZ) goto L_00419f0b;
L_00419e40:; BB(0x00419e40);
    /* 00419e40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00419e43: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419e4a: je 0x419e5c */ if (fZ) goto L_00419e5c;
L_00419e4c:; BB(0x00419e4c);
    /* 00419e4c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419e4f: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x419e54u); f_004259a0();
    /* 00419e54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419e56: jne 0x419f0b */ if (!fZ) goto L_00419f0b;
L_00419e5c:; BB(0x00419e5c);
    /* 00419e5c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00419e63: jmp 0x419e6e */ goto L_00419e6e;
L_00419e65:; BB(0x00419e65);
    /* 00419e65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419e68: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419e6b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00419e6e:; BB(0x00419e6e);
    /* 00419e6e: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419e72: jge 0x419f04 */ if ((fS==fO)) goto L_00419f04;
L_00419e78:; BB(0x00419e78);
    /* 00419e78: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419e7b: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x419e80u); f_004259f1();
    /* 00419e80: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419e83: jne 0x419e87 */ if (!fZ) goto L_00419e87;
L_00419e85:; BB(0x00419e85);
    /* 00419e85: jmp 0x419e65 */ goto L_00419e65;
L_00419e87:; BB(0x00419e87);
    /* 00419e87: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419e8a: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x419e8fu); f_004259a0();
    /* 00419e8f: mov esi, eax */ r_esi = r_eax;
    /* 00419e91: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419e94: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00419e99: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00419e9d: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x419ea2u); f_004259a0();
    /* 00419ea2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419ea4: jne 0x419eff */ if (!fZ) goto L_00419eff;
L_00419ea6:; BB(0x00419ea6);
    /* 00419ea6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419ea9: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 00419eaf: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00419eb3: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x419eb8u); f_004259cd();
    /* 00419eb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419eb9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419ebc: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x419ec1u); f_004259cd();
    /* 00419ec1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419ec2: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x419ec7u); f_006240c0();
    /* 00419ec7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419eca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419ecc: jne 0x419eff */ if (!fZ) goto L_00419eff;
L_00419ece:; BB(0x00419ece);
    /* 00419ece: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00419ed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419ed2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419ed5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419ed6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00419ed9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00419edb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00419ede: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x419ee1u); call_ind(t); }
    /* 00419ee1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419ee5: jne 0x419eed */ if (!fZ) goto L_00419eed;
L_00419ee7:; BB(0x00419ee7);
    /* 00419ee7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419eeb: je 0x419ef1 */ if (fZ) goto L_00419ef1;
L_00419eed:; BB(0x00419eed);
    /* 00419eed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419eef: jmp 0x419f0d */ goto L_00419f0d;
L_00419ef1:; BB(0x00419ef1);
    /* 00419ef1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00419ef8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00419eff:; BB(0x00419eff);
    /* 00419eff: jmp 0x419e65 */ goto L_00419e65;
L_00419f04:; BB(0x00419f04);
    /* 00419f04: mov eax, 1 */ r_eax = 0x1u;
    /* 00419f09: jmp 0x419f0d */ goto L_00419f0d;
L_00419f0b:; BB(0x00419f0b);
    /* 00419f0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00419f0d:; BB(0x00419f0d);
    /* 00419f0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00419f0e: mov esp, ebp */ r_esp = r_ebp;
    /* 00419f10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419f11: ret 4 */ FN_RET(0x00419ddc); r_esp += 8; return;
}

void f_00419f14(void) /* FUN_00419f14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419f14);
    /* 00419f14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419f15: mov ebp, esp */ r_ebp = r_esp;
    /* 00419f17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419f18: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419f1b: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419f21: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x419f26u); f_0040f9c4();
    /* 00419f26: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00419f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419f2a: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419f30: call 0x40f9ab */ r_esp -= 4; W32(r_esp, 0x419f35u); f_0040f9ab();
    /* 00419f35: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00419f37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419f3a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00419f3d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419f40: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00419f43: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00419f45: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x419f48u); call_ind(t); }
    /* 00419f48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419f4a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419f4d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00419f50: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419f53: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00419f56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00419f58: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x419f5bu); call_ind(t); }
    /* 00419f5b: mov esp, ebp */ r_esp = r_ebp;
    /* 00419f5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419f5e: ret  */ FN_RET(0x00419f14); r_esp += 4; return;
}

void f_00419f5f(void) /* FUN_00419f5f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419f5f);
    /* 00419f5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419f60: mov ebp, esp */ r_ebp = r_esp;
    /* 00419f62: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419f65: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00419f68: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00419f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419f6c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419f6f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00419f71: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419f74: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x419f77u); call_ind(t); }
    /* 00419f77: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00419f7a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419f7e: jne 0x419f87 */ if (!fZ) goto L_00419f87;
L_00419f80:; BB(0x00419f80);
    /* 00419f80: mov eax, 1 */ r_eax = 0x1u;
    /* 00419f85: jmp 0x419fac */ goto L_00419fac;
L_00419f87:; BB(0x00419f87);
    /* 00419f87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419f8a: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x419f8fu); f_004259f1();
    /* 00419f8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419f90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419f93: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x419f98u); f_004259f1();
    /* 00419f98: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419f9e: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00419fa2: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x419fa7u); f_004280b4();
    /* 00419fa7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00419fa9: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00419fab: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00419fac:; BB(0x00419fac);
    /* 00419fac: mov esp, ebp */ r_esp = r_ebp;
    /* 00419fae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419faf: ret 4 */ FN_RET(0x00419f5f); r_esp += 8; return;
}

void f_00419fb2(void) /* FUN_00419fb2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419fb2);
    /* 00419fb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419fb3: mov ebp, esp */ r_ebp = r_esp;
    /* 00419fb5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419fb8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00419fbb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00419fc2: jmp 0x419fcd */ goto L_00419fcd;
L_00419fc4:; BB(0x00419fc4);
    /* 00419fc4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419fc7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419fca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00419fcd:; BB(0x00419fcd);
    /* 00419fcd: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419fd1: jge 0x419fe4 */ if ((fS==fO)) goto L_00419fe4;
L_00419fd3:; BB(0x00419fd3);
    /* 00419fd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419fd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419fd7: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 00419fdd: call 0x413184 */ r_esp -= 4; W32(r_esp, 0x419fe2u); f_00413184();
    /* 00419fe2: jmp 0x419fc4 */ goto L_00419fc4;
L_00419fe4:; BB(0x00419fe4);
    /* 00419fe4: mov esp, ebp */ r_esp = r_ebp;
    /* 00419fe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419fe7: ret  */ FN_RET(0x00419fb2); r_esp += 4; return;
}

void f_00419fe8(void) /* FUN_00419fe8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419fe8);
    /* 00419fe8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419fe9: mov ebp, esp */ r_ebp = r_esp;
    /* 00419feb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419fec: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419fef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00419ff2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419ff3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419ff6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419ff7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419ffa: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 00419fff: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0041a003: call 0x428175 */ r_esp -= 4; W32(r_esp, 0x41a008u); f_00428175();
    /* 0041a008: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a00a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a00b: ret 8 */ FN_RET(0x00419fe8); r_esp += 12; return;
}

void f_0041a00e(void) /* FUN_0041a00e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a00e);
    /* 0041a00e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a00f: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a011: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a014: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0041a017: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041a01a: call 0x44895a */ r_esp -= 4; W32(r_esp, 0x41a01fu); f_0044895a();
    /* 0041a01f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041a022: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0041a029: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a02f: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41a034u); f_0040f81e();
    /* 0041a034: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041a037: cmp dword ptr [0x6f57a0], 0 */ {  u32 a = R32((u32)(0x6f57a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a03e: je 0x41a046 */ if (fZ) goto L_0041a046;
L_0041a040:; BB(0x0041a040);
    /* 0041a040: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a044: jne 0x41a04b */ if (!fZ) goto L_0041a04b;
L_0041a046:; BB(0x0041a046);
    /* 0041a046: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a049: jmp 0x41a0a8 */ goto L_0041a0a8;
L_0041a04b:; BB(0x0041a04b);
    /* 0041a04b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041a052: jmp 0x41a05d */ goto L_0041a05d;
L_0041a054:; BB(0x0041a054);
    /* 0041a054: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a057: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a05a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0041a05d:; BB(0x0041a05d);
    /* 0041a05d: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a061: jge 0x41a098 */ if ((fS==fO)) goto L_0041a098;
L_0041a063:; BB(0x0041a063);
    /* 0041a063: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a069: call 0x40f9c4 */ r_esp -= 4; W32(r_esp, 0x41a06eu); f_0040f9c4();
    /* 0041a06e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a071: jne 0x41a075 */ if (!fZ) goto L_0041a075;
L_0041a073:; BB(0x0041a073);
    /* 0041a073: jmp 0x41a054 */ goto L_0041a054;
L_0041a075:; BB(0x0041a075);
    /* 0041a075: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a078: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a07e: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0041a082: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a085: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0041a088: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a08b: jne 0x41a096 */ if (!fZ) goto L_0041a096;
L_0041a08d:; BB(0x0041a08d);
    /* 0041a08d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041a090: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a093: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0041a096:; BB(0x0041a096);
    /* 0041a096: jmp 0x41a054 */ goto L_0041a054;
L_0041a098:; BB(0x0041a098);
    /* 0041a098: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a09c: jle 0x41a0a5 */ if ((fZ||fS!=fO)) goto L_0041a0a5;
L_0041a09e:; BB(0x0041a09e);
    /* 0041a09e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a0a1: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041a0a3: jmp 0x41a0a8 */ goto L_0041a0a8;
L_0041a0a5:; BB(0x0041a0a5);
    /* 0041a0a5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_0041a0a8:; BB(0x0041a0a8);
    /* 0041a0a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a0aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a0ab: ret  */ FN_RET(0x0041a00e); r_esp += 4; return;
}

void f_0041a0ac(void) /* FUN_0041a0ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a0ac);
    /* 0041a0ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a0af: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a0b2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0041a0b5: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a0bc: je 0x41a0f8 */ if (fZ) goto L_0041a0f8;
L_0041a0be:; BB(0x0041a0be);
    /* 0041a0be: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 0041a0c4: call 0x41adab */ r_esp -= 4; W32(r_esp, 0x41a0c9u); f_0041adab();
    /* 0041a0c9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0041a0cc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a0cf: jne 0x41a0f8 */ if (!fZ) goto L_0041a0f8;
L_0041a0d1:; BB(0x0041a0d1);
    /* 0041a0d1: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0041a0d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0d5: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a0db: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41a0e0u); f_0040f81e();
    /* 0041a0e0: mov ecx, eax */ r_ecx = r_eax;
    /* 0041a0e2: call 0x40c997 */ r_esp -= 4; W32(r_esp, 0x41a0e7u); f_0040c997();
    /* 0041a0e7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a0ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0eb: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 0041a0f1: call 0x41c480 */ r_esp -= 4; W32(r_esp, 0x41a0f6u); f_0041c480();
    /* 0041a0f6: jmp 0x41a12e */ goto L_0041a12e;
L_0041a0f8:; BB(0x0041a0f8);
    /* 0041a0f8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a0fb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041a0fe: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x41a103u); f_005e63b4();
    /* 0041a103: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a106: jne 0x41a12e */ if (!fZ) goto L_0041a12e;
L_0041a108:; BB(0x0041a108);
    /* 0041a108: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a10a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a10d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0041a110: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a113: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041a116: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041a118: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x41a11bu); call_ind(t); }
    /* 0041a11b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a11d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a120: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041a123: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a126: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041a129: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041a12b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41a12eu); call_ind(t); }
L_0041a12e:; BB(0x0041a12e);
    /* 0041a12e: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a131: ret  */ FN_RET(0x0041a0ac); r_esp += 4; return;
}

void f_0041a132(void) /* FUN_0041a132 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a132);
    /* 0041a132: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a133: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a135: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a136: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a139: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a13e: mov eax, dword ptr [eax + 0xb8] */ r_eax = R32((u32)(r_eax+0xb8u));
    /* 0041a144: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a146: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a147: ret  */ FN_RET(0x0041a132); r_esp += 4; return;
}

void f_0041a148(void) /* FUN_0041a148 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a148);
    /* 0041a148: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a149: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a14b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a14c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a14f: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a154: mov eax, dword ptr [eax + 0xc4] */ r_eax = R32((u32)(r_eax+0xc4u));
    /* 0041a15a: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a15c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a15d: ret  */ FN_RET(0x0041a148); r_esp += 4; return;
}

void f_0041a15e(void) /* FUN_0041a15e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a15e);
    /* 0041a15e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a15f: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a161: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a164: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041a167: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a16e: jmp 0x41a179 */ goto L_0041a179;
L_0041a170:; BB(0x0041a170);
    /* 0041a170: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a173: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a176: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041a179:; BB(0x0041a179);
    /* 0041a179: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a17d: jge 0x41a1ab */ if ((fS==fO)) goto L_0041a1ab;
L_0041a17f:; BB(0x0041a17f);
    /* 0041a17f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a181: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a184: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a18a: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0041a18e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a18f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a192: call 0x44848a */ r_esp -= 4; W32(r_esp, 0x41a197u); f_0044848a();
    /* 0041a197: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a19a: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a1a0: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0041a1a4: call 0x4287ab */ r_esp -= 4; W32(r_esp, 0x41a1a9u); f_004287ab();
    /* 0041a1a9: jmp 0x41a170 */ goto L_0041a170;
L_0041a1ab:; BB(0x0041a1ab);
    /* 0041a1ab: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a1ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a1ae: ret  */ FN_RET(0x0041a15e); r_esp += 4; return;
}

void f_0041a1af(void) /* FUN_0041a1af */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a1af);
    /* 0041a1af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a1b0: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a1b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a1b3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a1b6: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a1bc: call 0x412c20 */ r_esp -= 4; W32(r_esp, 0x41a1c1u); f_00412c20();
    /* 0041a1c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a1c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a1c4: ret  */ FN_RET(0x0041a1af); r_esp += 4; return;
}

void f_0041a1c5(void) /* FUN_0041a1c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a1c5);
    /* 0041a1c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a1c6: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a1c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a1c9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a1cc: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a1d2: call 0x412c8a */ r_esp -= 4; W32(r_esp, 0x41a1d7u); f_00412c8a();
    /* 0041a1d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a1d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a1da: ret  */ FN_RET(0x0041a1c5); r_esp += 4; return;
}

void f_0041a1db(void) /* FUN_0041a1db */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a1db);
    /* 0041a1db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a1dc: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a1de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a1df: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a1e2: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a1e7: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 0041a1ea: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a1ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a1ed: ret  */ FN_RET(0x0041a1db); r_esp += 4; return;
}

void f_0041a1ee(void) /* FUN_0041a1ee */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a1ee);
    /* 0041a1ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a1ef: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a1f1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a1f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041a1f5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0041a1f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a1ff: jmp 0x41a20a */ goto L_0041a20a;
L_0041a201:; BB(0x0041a201);
    /* 0041a201: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a204: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a207: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041a20a:; BB(0x0041a20a);
    /* 0041a20a: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a20e: jge 0x41a306 */ if ((fS==fO)) goto L_0041a306;
L_0041a214:; BB(0x0041a214);
    /* 0041a214: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a217: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a21d: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0041a221: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0041a224: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x41a229u); f_0041f839();
    /* 0041a229: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a22c: je 0x41a2d3 */ if (fZ) goto L_0041a2d3;
L_0041a232:; BB(0x0041a232);
    /* 0041a232: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a235: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041a238: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041a23b: jmp 0x41a246 */ goto L_0041a246;
L_0041a23d:; BB(0x0041a23d);
    /* 0041a23d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a240: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041a243: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0041a246:; BB(0x0041a246);
    /* 0041a246: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a24a: jge 0x41a2d1 */ if ((fS==fO)) goto L_0041a2d1;
L_0041a250:; BB(0x0041a250);
    /* 0041a250: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a253: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a259: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0041a25d: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0041a260: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x41a265u); f_0041f839();
    /* 0041a265: mov esi, eax */ r_esi = r_eax;
    /* 0041a267: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a26a: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a270: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0041a274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0041a277: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x41a27cu); f_0041f839();
    /* 0041a27c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a27e: jne 0x41a2cc */ if (!fZ) goto L_0041a2cc;
L_0041a280:; BB(0x0041a280);
    /* 0041a280: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a283: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a289: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0041a28d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0041a290: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041a293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a294: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a297: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a29c: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0041a2a0: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0041a2a3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041a2a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a2a7: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x41a2acu); f_006240c0();
    /* 0041a2ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a2af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a2b1: jne 0x41a2cc */ if (!fZ) goto L_0041a2cc;
L_0041a2b3:; BB(0x0041a2b3);
    /* 0041a2b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a2b5: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a2b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a2ba: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a2c0: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0041a2c4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0041a2c7: call 0x41f510 */ r_esp -= 4; W32(r_esp, 0x41a2ccu); f_0041f510();
L_0041a2cc:; BB(0x0041a2cc);
    /* 0041a2cc: jmp 0x41a23d */ goto L_0041a23d;
L_0041a2d1:; BB(0x0041a2d1);
    /* 0041a2d1: jmp 0x41a301 */ goto L_0041a301;
L_0041a2d3:; BB(0x0041a2d3);
    /* 0041a2d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a2d5: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a2d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a2da: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a2e0: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0041a2e4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0041a2e7: call 0x41f510 */ r_esp -= 4; W32(r_esp, 0x41a2ecu); f_0041f510();
    /* 0041a2ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a2ef: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a2f5: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0041a2f9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0041a2fc: call 0x41fb49 */ r_esp -= 4; W32(r_esp, 0x41a301u); f_0041fb49();
L_0041a301:; BB(0x0041a301);
    /* 0041a301: jmp 0x41a201 */ goto L_0041a201;
L_0041a306:; BB(0x0041a306);
    /* 0041a306: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a30d: jmp 0x41a318 */ goto L_0041a318;
L_0041a30f:; BB(0x0041a30f);
    /* 0041a30f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a312: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041a315: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0041a318:; BB(0x0041a318);
    /* 0041a318: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a31c: jge 0x41a354 */ if ((fS==fO)) goto L_0041a354;
L_0041a31e:; BB(0x0041a31e);
    /* 0041a31e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a321: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a326: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0041a32a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0041a32d: call 0x426404 */ r_esp -= 4; W32(r_esp, 0x41a332u); f_00426404();
    /* 0041a332: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a334: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a337: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041a339: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a33c: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x41a33fu); call_ind(t); }
    /* 0041a33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a340: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a343: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a349: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0041a34d: call 0x425c32 */ r_esp -= 4; W32(r_esp, 0x41a352u); f_00425c32();
    /* 0041a352: jmp 0x41a30f */ goto L_0041a30f;
L_0041a354:; BB(0x0041a354);
    /* 0041a354: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a359: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
    /* 0041a360: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a362: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a364: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a366: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a369: call 0x4489a0 */ r_esp -= 4; W32(r_esp, 0x41a36eu); f_004489a0();
    /* 0041a36e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a36f: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a371: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a372: ret  */ FN_RET(0x0041a1ee); r_esp += 4; return;
}

void f_0041a373(void) /* FUN_0041a373 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a373);
    /* 0041a373: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a374: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a376: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a377: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a37a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a37d: call 0x448c8b */ r_esp -= 4; W32(r_esp, 0x41a382u); f_00448c8b();
    /* 0041a382: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a388: call 0x412a16 */ r_esp -= 4; W32(r_esp, 0x41a38du); f_00412a16();
    /* 0041a38d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a38f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a390: ret  */ FN_RET(0x0041a373); r_esp += 4; return;
}

void f_0041a391(void) /* FUN_0041a391 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a391);
    /* 0041a391: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a392: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a394: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a397: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041a398: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041a39b: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a3a1: call 0x40f81e */ r_esp -= 4; W32(r_esp, 0x41a3a6u); f_0040f81e();
    /* 0041a3a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041a3a9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0041a3af: call 0x45cbf1 */ r_esp -= 4; W32(r_esp, 0x41a3b4u); f_0045cbf1();
    /* 0041a3b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a3b6: je 0x41a3c4 */ if (fZ) goto L_0041a3c4;
L_0041a3b8:; BB(0x0041a3b8);
    /* 0041a3b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a3bb: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x41a3c0u); f_00448ca3();
    /* 0041a3c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a3c2: je 0x41a3c9 */ if (fZ) goto L_0041a3c9;
L_0041a3c4:; BB(0x0041a3c4);
    /* 0041a3c4: jmp 0x41a44a */ goto L_0041a44a;
L_0041a3c9:; BB(0x0041a3c9);
    /* 0041a3c9: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a3ce: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a3d2: je 0x41a40a */ if (fZ) goto L_0041a40a;
L_0041a3d4:; BB(0x0041a3d4);
    /* 0041a3d4: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a3da: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0041a3dd: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x41a3e2u); f_005e07a3();
    /* 0041a3e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a3e4: je 0x41a40a */ if (fZ) goto L_0041a40a;
L_0041a3e6:; BB(0x0041a3e6);
    /* 0041a3e6: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a3ec: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 0041a3ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a3f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a3f3: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a3f9: call 0x41276f */ r_esp -= 4; W32(r_esp, 0x41a3feu); f_0041276f();
    /* 0041a3fe: mov ecx, dword ptr [esi + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x8cu));
    /* 0041a405: call 0x415f8c */ r_esp -= 4; W32(r_esp, 0x41a40au); f_00415f8c();
L_0041a40a:; BB(0x0041a40a);
    /* 0041a40a: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a410: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a414: je 0x41a44a */ if (fZ) goto L_0041a44a;
L_0041a416:; BB(0x0041a416);
    /* 0041a416: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a41c: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0041a41f: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x41a424u); f_005e07a3();
    /* 0041a424: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a426: je 0x41a44a */ if (fZ) goto L_0041a44a;
L_0041a428:; BB(0x0041a428);
    /* 0041a428: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a42d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0041a430: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0041a436: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a43c: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0041a43f: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 0041a445: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041a447: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x41a44au); call_ind(t); }
L_0041a44a:; BB(0x0041a44a);
    /* 0041a44a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a44b: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a44d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a44e: ret 4 */ FN_RET(0x0041a391); r_esp += 8; return;
}

void f_0041a451(void) /* FUN_0041a451 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a451);
    /* 0041a451: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a452: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a454: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a457: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0041a45a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041a461: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a468: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041a46f: jmp 0x41a47a */ goto L_0041a47a;
L_0041a471:; BB(0x0041a471);
    /* 0041a471: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a474: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a477: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0041a47a:; BB(0x0041a47a);
    /* 0041a47a: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a47e: jge 0x41a4f8 */ if ((fS==fO)) goto L_0041a4f8;
L_0041a480:; BB(0x0041a480);
    /* 0041a480: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041a483: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041a485: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041a488: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x41a48bu); call_ind(t); }
    /* 0041a48b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a48d: je 0x41a4e4 */ if (fZ) goto L_0041a4e4;
L_0041a48f:; BB(0x0041a48f);
    /* 0041a48f: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0041a492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a493: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a496: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a49c: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0041a4a0: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x41a4a5u); f_004259f1();
    /* 0041a4a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a4a6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041a4a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041a4ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041a4ae: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x41a4b1u); call_ind(t); }
    /* 0041a4b1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a4b5: jne 0x41a4bd */ if (!fZ) goto L_0041a4bd;
L_0041a4b7:; BB(0x0041a4b7);
    /* 0041a4b7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a4bb: je 0x41a4d6 */ if (fZ) goto L_0041a4d6;
L_0041a4bd:; BB(0x0041a4bd);
    /* 0041a4bd: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0041a4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a4c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a4c4: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a4ca: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0041a4ce: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041a4d1: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x41a4d6u); f_004267ae();
L_0041a4d6:; BB(0x0041a4d6);
    /* 0041a4d6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041a4dd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0041a4e4:; BB(0x0041a4e4);
    /* 0041a4e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a4e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a4e8: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a4ee: call 0x413184 */ r_esp -= 4; W32(r_esp, 0x41a4f3u); f_00413184();
    /* 0041a4f3: jmp 0x41a471 */ goto L_0041a471;
L_0041a4f8:; BB(0x0041a4f8);
    /* 0041a4f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a4fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a4fb: ret  */ FN_RET(0x0041a451); r_esp += 4; return;
}

void f_0041a4fc(void) /* FUN_0041a4fc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a4fc);
    /* 0041a4fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a4fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a4ff: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a502: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0041a505: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a509: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a50c: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x41a511u); f_005e626d();
    /* 0041a511: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a514: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0041a517: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0041a51a: cmp dword ptr [ebp - 0x10], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041a51e: ja 0x41a86d */ if ((!fC&&!fZ)) goto L_0041a86d;
L_0041a524:; BB(0x0041a524);
    /* 0041a524: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041a527: jmp dword ptr [eax*4 + 0x41a873] */ { u32 t = R32((u32)(r_eax*4+0x41a873u)); switch (t) { case 0x41a52eu: goto L_0041a52e; case 0x41a5c5u: goto L_0041a5c5; case 0x41a5deu: goto L_0041a5de; case 0x41a5eeu: goto L_0041a5ee; case 0x41a5feu: goto L_0041a5fe; case 0x41a644u: goto L_0041a644; case 0x41a654u: goto L_0041a654; case 0x41a664u: goto L_0041a664; case 0x41a674u: goto L_0041a674; case 0x41a684u: goto L_0041a684; case 0x41a694u: goto L_0041a694; case 0x41a6a4u: goto L_0041a6a4; case 0x41a6b4u: goto L_0041a6b4; case 0x41a6c4u: goto L_0041a6c4; case 0x41a6d4u: goto L_0041a6d4; case 0x41a6e4u: goto L_0041a6e4; case 0x41a6f4u: goto L_0041a6f4; case 0x41a73du: goto L_0041a73d; case 0x41a84au: goto L_0041a84a; default: UNSUP(0x0041a527, "jump table entry is not a known target"); } }
L_0041a52e:; BB(0x0041a52e);
    /* 0041a52e: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a534: call 0x40ec9d */ r_esp -= 4; W32(r_esp, 0x41a539u); f_0040ec9d();
    /* 0041a539: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a53b: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a541: call 0x4122ac */ r_esp -= 4; W32(r_esp, 0x41a546u); f_004122ac();
    /* 0041a546: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a54d: jne 0x41a587 */ if (!fZ) goto L_0041a587;
L_0041a54f:; BB(0x0041a54f);
    /* 0041a54f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a551: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a554: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041a556: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a559: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x41a55cu); call_ind(t); }
    /* 0041a55c: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041a562: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x41a567u); f_00448ca3();
    /* 0041a567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a569: je 0x41a578 */ if (fZ) goto L_0041a578;
L_0041a56b:; BB(0x0041a56b);
    /* 0041a56b: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041a571: call 0x448ccc */ r_esp -= 4; W32(r_esp, 0x41a576u); f_00448ccc();
    /* 0041a576: jmp 0x41a585 */ goto L_0041a585;
L_0041a578:; BB(0x0041a578);
    /* 0041a578: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a57a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a57d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041a57f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a582: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41a585u); call_ind(t); }
L_0041a585:; BB(0x0041a585);
    /* 0041a585: jmp 0x41a5c0 */ goto L_0041a5c0;
L_0041a587:; BB(0x0041a587);
    /* 0041a587: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a589: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a58e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a590: mov eax, dword ptr [0x6f5b34] */ r_eax = R32((u32)(0x6f5b34u));
    /* 0041a595: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041a598: call 0x42a130 */ r_esp -= 4; W32(r_esp, 0x41a59du); f_0042a130();
    /* 0041a59d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a59f: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a5a5: call 0x413299 */ r_esp -= 4; W32(r_esp, 0x41a5aau); f_00413299();
    /* 0041a5aa: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 0041a5b0: call 0x41ab6c */ r_esp -= 4; W32(r_esp, 0x41a5b5u); f_0041ab6c();
    /* 0041a5b5: mov ecx, dword ptr [0x6f5b34] */ r_ecx = R32((u32)(0x6f5b34u));
    /* 0041a5bb: call 0x41adbe */ r_esp -= 4; W32(r_esp, 0x41a5c0u); f_0041adbe();
L_0041a5c0:; BB(0x0041a5c0);
    /* 0041a5c0: jmp 0x41a86d */ goto L_0041a86d;
L_0041a5c5:; BB(0x0041a5c5);
    /* 0041a5c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a5c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a5c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a5cb: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a5d1: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 0041a5d4: call 0x40d34d */ r_esp -= 4; W32(r_esp, 0x41a5d9u); f_0040d34d();
    /* 0041a5d9: jmp 0x41a86d */ goto L_0041a86d;
L_0041a5de:; BB(0x0041a5de);
    /* 0041a5de: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a5e4: call 0x40faa5 */ r_esp -= 4; W32(r_esp, 0x41a5e9u); f_0040faa5();
    /* 0041a5e9: jmp 0x41a86d */ goto L_0041a86d;
L_0041a5ee:; BB(0x0041a5ee);
    /* 0041a5ee: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a5f4: call 0x411504 */ r_esp -= 4; W32(r_esp, 0x41a5f9u); f_00411504();
    /* 0041a5f9: jmp 0x41a86d */ goto L_0041a86d;
L_0041a5fe:; BB(0x0041a5fe);
    /* 0041a5fe: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a600: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x41a605u); f_0048ab58();
    /* 0041a605: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a608: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041a60b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a60f: je 0x41a62c */ if (fZ) goto L_0041a62c;
L_0041a611:; BB(0x0041a611);
    /* 0041a611: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a613: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a616: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x41a61bu); f_005e6160();
    /* 0041a61b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a61e: mov dword ptr [eax], 0x633d54 */ W32((u32)(r_eax), 0x633d54u);
    /* 0041a624: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a627: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0041a62a: jmp 0x41a633 */ goto L_0041a633;
L_0041a62c:; BB(0x0041a62c);
    /* 0041a62c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0041a633:; BB(0x0041a633);
    /* 0041a633: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041a636: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a637: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a63a: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x41a63fu); f_005e62ca();
    /* 0041a63f: jmp 0x41a86d */ goto L_0041a86d;
L_0041a644:; BB(0x0041a644);
    /* 0041a644: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a64a: call 0x411765 */ r_esp -= 4; W32(r_esp, 0x41a64fu); f_00411765();
    /* 0041a64f: jmp 0x41a86d */ goto L_0041a86d;
L_0041a654:; BB(0x0041a654);
    /* 0041a654: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a65a: call 0x4117b2 */ r_esp -= 4; W32(r_esp, 0x41a65fu); f_004117b2();
    /* 0041a65f: jmp 0x41a86d */ goto L_0041a86d;
L_0041a664:; BB(0x0041a664);
    /* 0041a664: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a66a: call 0x4119fb */ r_esp -= 4; W32(r_esp, 0x41a66fu); f_004119fb();
    /* 0041a66f: jmp 0x41a86d */ goto L_0041a86d;
L_0041a674:; BB(0x0041a674);
    /* 0041a674: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a67a: call 0x4123f6 */ r_esp -= 4; W32(r_esp, 0x41a67fu); f_004123f6();
    /* 0041a67f: jmp 0x41a86d */ goto L_0041a86d;
L_0041a684:; BB(0x0041a684);
    /* 0041a684: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a68a: call 0x4133e2 */ r_esp -= 4; W32(r_esp, 0x41a68fu); f_004133e2();
    /* 0041a68f: jmp 0x41a86d */ goto L_0041a86d;
L_0041a694:; BB(0x0041a694);
    /* 0041a694: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a69a: call 0x41343e */ r_esp -= 4; W32(r_esp, 0x41a69fu); f_0041343e();
    /* 0041a69f: jmp 0x41a86d */ goto L_0041a86d;
L_0041a6a4:; BB(0x0041a6a4);
    /* 0041a6a4: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a6aa: call 0x4135fa */ r_esp -= 4; W32(r_esp, 0x41a6afu); f_004135fa();
    /* 0041a6af: jmp 0x41a86d */ goto L_0041a86d;
L_0041a6b4:; BB(0x0041a6b4);
    /* 0041a6b4: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a6ba: call 0x4141c1 */ r_esp -= 4; W32(r_esp, 0x41a6bfu); f_004141c1();
    /* 0041a6bf: jmp 0x41a86d */ goto L_0041a86d;
L_0041a6c4:; BB(0x0041a6c4);
    /* 0041a6c4: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a6ca: call 0x4144bc */ r_esp -= 4; W32(r_esp, 0x41a6cfu); f_004144bc();
    /* 0041a6cf: jmp 0x41a86d */ goto L_0041a86d;
L_0041a6d4:; BB(0x0041a6d4);
    /* 0041a6d4: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a6da: call 0x414529 */ r_esp -= 4; W32(r_esp, 0x41a6dfu); f_00414529();
    /* 0041a6df: jmp 0x41a86d */ goto L_0041a86d;
L_0041a6e4:; BB(0x0041a6e4);
    /* 0041a6e4: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a6ea: call 0x412895 */ r_esp -= 4; W32(r_esp, 0x41a6efu); f_00412895();
    /* 0041a6ef: jmp 0x41a86d */ goto L_0041a86d;
L_0041a6f4:; BB(0x0041a6f4);
    /* 0041a6f4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a6f6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a6f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041a6fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a6fe: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x41a701u); call_ind(t); }
    /* 0041a701: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a706: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0041a709: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 0041a70f: call 0x40c28d */ r_esp -= 4; W32(r_esp, 0x41a714u); f_0040c28d();
    /* 0041a714: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a716: jne 0x41a72b */ if (!fZ) goto L_0041a72b;
L_0041a718:; BB(0x0041a718);
    /* 0041a718: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a71b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a71c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a71e: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a724: call 0x413656 */ r_esp -= 4; W32(r_esp, 0x41a729u); f_00413656();
    /* 0041a729: jmp 0x41a738 */ goto L_0041a738;
L_0041a72b:; BB(0x0041a72b);
    /* 0041a72b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a72d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a730: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041a732: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a735: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41a738u); call_ind(t); }
L_0041a738:; BB(0x0041a738);
    /* 0041a738: jmp 0x41a86d */ goto L_0041a86d;
L_0041a73d:; BB(0x0041a73d);
    /* 0041a73d: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a742: cmp dword ptr [eax + 0xc0], 0 */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a749: je 0x41a81a */ if (fZ) goto L_0041a81a;
L_0041a74f:; BB(0x0041a74f);
    /* 0041a74f: mov ecx, dword ptr [0x6f579c] */ r_ecx = R32((u32)(0x6f579cu));
    /* 0041a755: call 0x448432 */ r_esp -= 4; W32(r_esp, 0x41a75au); f_00448432();
    /* 0041a75a: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a760: cmp dword ptr [ecx + 0x3c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a764: jne 0x41a7fd */ if (!fZ) goto L_0041a7fd;
L_0041a76a:; BB(0x0041a76a);
    /* 0041a76a: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a76f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x41a774u); f_0048ab58();
    /* 0041a774: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a777: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041a77a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a77e: je 0x41a791 */ if (fZ) goto L_0041a791;
L_0041a780:; BB(0x0041a780);
    /* 0041a780: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a782: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a784: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a787: call 0x4169d7 */ r_esp -= 4; W32(r_esp, 0x41a78cu); f_004169d7();
    /* 0041a78c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041a78f: jmp 0x41a798 */ goto L_0041a798;
L_0041a791:; BB(0x0041a791);
    /* 0041a791: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0041a798:; BB(0x0041a798);
    /* 0041a798: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a79e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041a7a1: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0041a7a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a7a6: push 0x415 */ { u32 v = 0x415u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a7ab: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a7b1: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0041a7b4: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x41a7b9u); f_005e0461();
    /* 0041a7b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a7bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a7bd: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a7c3: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0041a7c6: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x41a7cbu); f_005d81dc();
    /* 0041a7cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a7cd: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a7d2: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0041a7d5: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x41a7dau); f_005e06e1();
    /* 0041a7da: add eax, 0xaa */ {  u32 a = r_eax; u32 b = 0xaau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a7df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a7e0: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a7e6: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0041a7e9: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x41a7eeu); f_005e06d0();
    /* 0041a7ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a7ef: mov edx, dword ptr [0x6f57a0] */ r_edx = R32((u32)(0x6f57a0u));
    /* 0041a7f5: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0041a7f8: call 0x5d81bb */ r_esp -= 4; W32(r_esp, 0x41a7fdu); f_005d81bb();
L_0041a7fd:; BB(0x0041a7fd);
    /* 0041a7fd: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a802: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0041a805: call 0x416aca */ r_esp -= 4; W32(r_esp, 0x41a80au); f_00416aca();
    /* 0041a80a: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a810: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0041a813: call 0x416d43 */ r_esp -= 4; W32(r_esp, 0x41a818u); f_00416d43();
    /* 0041a818: jmp 0x41a848 */ goto L_0041a848;
L_0041a81a:; BB(0x0041a81a);
    /* 0041a81a: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a81c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a81f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041a821: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a824: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x41a827u); call_ind(t); }
    /* 0041a827: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a829: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0041a82f: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x41a834u); f_0045cd25();
    /* 0041a834: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041a837: add eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a83c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a83d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a840: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041a842: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a845: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x41a848u); call_ind(t); }
L_0041a848:; BB(0x0041a848);
    /* 0041a848: jmp 0x41a86d */ goto L_0041a86d;
L_0041a84a:; BB(0x0041a84a);
    /* 0041a84a: cmp dword ptr [0x6f5b34], 0 */ {  u32 a = R32((u32)(0x6f5b34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a851: jne 0x41a860 */ if (!fZ) goto L_0041a860;
L_0041a853:; BB(0x0041a853);
    /* 0041a853: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a859: call 0x40f6a1 */ r_esp -= 4; W32(r_esp, 0x41a85eu); f_0040f6a1();
    /* 0041a85e: jmp 0x41a86d */ goto L_0041a86d;
L_0041a860:; BB(0x0041a860);
    /* 0041a860: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a862: mov ecx, dword ptr [0x6f57a0] */ r_ecx = R32((u32)(0x6f57a0u));
    /* 0041a868: call 0x413299 */ r_esp -= 4; W32(r_esp, 0x41a86du); f_00413299();
L_0041a86d:; BB(0x0041a86d);
    /* 0041a86d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a86f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a870: ret 4 */ FN_RET(0x0041a4fc); r_esp += 8; return;
}

void f_0041a8c0(void) /* FUN_0041a8c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a8c0);
    /* 0041a8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a8c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a8c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a8c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a8ca: call 0x4199da */ r_esp -= 4; W32(r_esp, 0x41a8cfu); f_004199da();
    /* 0041a8cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a8d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041a8d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a8d7: je 0x41a8e5 */ if (fZ) goto L_0041a8e5;
L_0041a8d9:; BB(0x0041a8d9);
    /* 0041a8d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a8dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a8dd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x41a8e2u); f_0048ac1b();
    /* 0041a8e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041a8e5:; BB(0x0041a8e5);
    /* 0041a8e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a8e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a8ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a8eb: ret 4 */ FN_RET(0x0041a8c0); r_esp += 8; return;
}

void f_0041a8f0(void) /* FUN_0041a8f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a8f0);
    /* 0041a8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a8f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a8f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a8f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a8fa: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x41a8ffu); f_005dfbf0();
    /* 0041a8ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a902: mov dword ptr [eax], 0x633e4c */ W32((u32)(r_eax), 0x633e4cu);
    /* 0041a908: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a90b: mov dword ptr [ecx], 0x633ddc */ W32((u32)(r_ecx), 0x633ddcu);
    /* 0041a911: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a914: mov dword ptr [edx], 0x633d6c */ W32((u32)(r_edx), 0x633d6cu);
    /* 0041a91a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a91d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041a920: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0041a923: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a926: mov dword ptr [0x6f5b34], edx */ W32((u32)(0x6f5b34u), r_edx);
    /* 0041a92c: push 0x7dd */ { u32 v = 0x7ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0041a931: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a933: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 0041a938: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0041a93b: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x41a940u); f_005ba9e1();
    /* 0041a940: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a943: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a945: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a946: ret 4 */ FN_RET(0x0041a8f0); r_esp += 8; return;
}

void f_0041a949(void) /* FUN_0041a949 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a949);
    /* 0041a949: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a94a: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a94c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a94d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a950: mov dword ptr [0x6f5b34], 0 */ W32((u32)(0x6f5b34u), 0x0u);
    /* 0041a95a: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a95c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a95d: ret  */ FN_RET(0x0041a949); r_esp += 4; return;
}

void f_0041a95e(void) /* FUN_0041a95e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a95e);
    /* 0041a95e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a95f: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a961: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a962: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a965: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a968: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041a96b: call 0x5edd97 */ r_esp -= 4; W32(r_esp, 0x41a970u); f_005edd97();
    /* 0041a970: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a972: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a973: ret  */ FN_RET(0x0041a95e); r_esp += 4; return;
}

void f_0041a974(void) /* FUN_0041a974 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a974);
    /* 0041a974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a975: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a977: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a97a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a97d: cmp dword ptr [0x6f57a0], 0 */ {  u32 a = R32((u32)(0x6f57a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a984: je 0x41a996 */ if (fZ) goto L_0041a996;
L_0041a986:; BB(0x0041a986);
    /* 0041a986: mov eax, dword ptr [0x6f57a0] */ r_eax = R32((u32)(0x6f57a0u));
    /* 0041a98b: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0041a991: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041a994: jmp 0x41a99d */ goto L_0041a99d;
L_0041a996:; BB(0x0041a996);
    /* 0041a996: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0041a99d:; BB(0x0041a99d);
    /* 0041a99d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a9a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a9a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a9a3: ret  */ FN_RET(0x0041a974); r_esp += 4; return;
}

void f_0041a9a4(void) /* FUN_0041a9a4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a9a4);
    /* 0041a9a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a9a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a9a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a9a8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a9ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041a9ad: cmp dword ptr [0x6f57a0], 0 */ {  u32 a = R32((u32)(0x6f57a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a9b4: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041a9b7: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a9b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a9ba: ret  */ FN_RET(0x0041a9a4); r_esp += 4; return;
}

void f_0041a9bb(void) /* FUN_0041a9bb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a9bb);
    /* 0041a9bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a9bc: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a9be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a9bf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a9c2: cmp dword ptr [0x6f57a0], 0 */ {  u32 a = R32((u32)(0x6f57a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a9c9: jne 0x41a9d0 */ if (!fZ) goto L_0041a9d0;
L_0041a9cb:; BB(0x0041a9cb);
    /* 0041a9cb: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0041a9ce: jmp 0x41a9d3 */ goto L_0041a9d3;
L_0041a9d0:; BB(0x0041a9d0);
    /* 0041a9d0: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_0041a9d3:; BB(0x0041a9d3);
    /* 0041a9d3: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a9d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a9d6: ret  */ FN_RET(0x0041a9bb); r_esp += 4; return;
}

void f_0041a9d7(void) /* FUN_0041a9d7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a9d7);
    /* 0041a9d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a9d8: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a9da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a9db: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a9de: cmp dword ptr [0x6f57a0], 0 */ {  u32 a = R32((u32)(0x6f57a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a9e5: jne 0x41a9eb */ if (!fZ) goto L_0041a9eb;
L_0041a9e7:; BB(0x0041a9e7);
    /* 0041a9e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041a9e9: jmp 0x41a9f0 */ goto L_0041a9f0;
L_0041a9eb:; BB(0x0041a9eb);
    /* 0041a9eb: mov eax, 1 */ r_eax = 0x1u;
L_0041a9f0:; BB(0x0041a9f0);
    /* 0041a9f0: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a9f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a9f3: ret  */ FN_RET(0x0041a9d7); r_esp += 4; return;
}

