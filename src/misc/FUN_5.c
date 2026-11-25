#include "protos.h"

void f_00424886(void) /* FUN_00424886 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424886);
    /* 00424886: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424887: mov ebp, esp */ r_ebp = r_esp;
    /* 00424889: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042488c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042488f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424892: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00424898: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042489b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042489e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004248a1: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 004248a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004248aa: mov esp, ebp */ r_esp = r_ebp;
    /* 004248ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004248ad: ret 4 */ FN_RET(0x00424886); r_esp += 8; return;
}

void f_004248b0(void) /* FUN_004248b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004248b0);
    /* 004248b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004248b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004248b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004248b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004248b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004248ba: cmp dword ptr [eax + 0x18], 2 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004248be: jne 0x4248c8 */ if (!fZ) goto L_004248c8;
L_004248c0:; BB(0x004248c0);
    /* 004248c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004248c3: call 0x4248da */ r_esp -= 4; W32(r_esp, 0x4248c8u); f_004248da();
L_004248c8:; BB(0x004248c8);
    /* 004248c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004248cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004248cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004248cf: call 0x5e4142 */ r_esp -= 4; W32(r_esp, 0x4248d4u); f_005e4142();
    /* 004248d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004248d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004248d7: ret 4 */ FN_RET(0x004248b0); r_esp += 8; return;
}

void f_004248da(void) /* FUN_004248da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004248da);
    /* 004248da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004248db: mov ebp, esp */ r_ebp = r_esp;
    /* 004248dd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004248e0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004248e3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004248e6: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 004248ec: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 004248ef: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004248f2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004248f6: je 0x42491c */ if (fZ) goto L_0042491c;
L_004248f8:; BB(0x004248f8);
    /* 004248f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004248fb: call 0x5e49f3 */ r_esp -= 4; W32(r_esp, 0x424900u); f_005e49f3();
    /* 00424900: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424902: je 0x42491c */ if (fZ) goto L_0042491c;
L_00424904:; BB(0x00424904);
    /* 00424904: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00424909: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0042490c: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x424911u); f_005e84af();
    /* 00424911: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424914: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00424916: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424919: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x42491cu); call_ind(t); }
L_0042491c:; BB(0x0042491c);
    /* 0042491c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042491e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042491f: ret  */ FN_RET(0x004248da); r_esp += 4; return;
}

void f_00424920(void) /* FUN_00424920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424920);
    /* 00424920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424921: mov ebp, esp */ r_ebp = r_esp;
    /* 00424923: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424926: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00424929: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042492c: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x424931u); f_005e4035();
    /* 00424931: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424934: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042493b: jne 0x424970 */ if (!fZ) goto L_00424970;
L_0042493d:; BB(0x0042493d);
    /* 0042493d: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0042493f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x424944u); f_0048ab58();
    /* 00424944: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424947: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042494a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042494e: je 0x42495d */ if (fZ) goto L_0042495d;
L_00424950:; BB(0x00424950);
    /* 00424950: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424953: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x424958u); f_005e3fb0();
    /* 00424958: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0042495b: jmp 0x424964 */ goto L_00424964;
L_0042495d:; BB(0x0042495d);
    /* 0042495d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00424964:; BB(0x00424964);
    /* 00424964: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424967: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042496a: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
L_00424970:; BB(0x00424970);
    /* 00424970: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424973: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00424979: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042497c: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 00424982: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00424984: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x424987u); call_ind(t); }
    /* 00424987: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042498a: call 0x424993 */ r_esp -= 4; W32(r_esp, 0x42498fu); f_00424993();
    /* 0042498f: mov esp, ebp */ r_esp = r_ebp;
    /* 00424991: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424992: ret  */ FN_RET(0x00424920); r_esp += 4; return;
}

void f_00424993(void) /* FUN_00424993 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424993);
    /* 00424993: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424994: mov ebp, esp */ r_ebp = r_esp;
    /* 00424996: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424999: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042499c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004249a3: jmp 0x4249ae */ goto L_004249ae;
L_004249a5:; BB(0x004249a5);
    /* 004249a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004249a8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004249ab: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004249ae:; BB(0x004249ae);
    /* 004249ae: cmp dword ptr [ebp - 4], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004249b2: jge 0x4249c2 */ if ((fS==fO)) goto L_004249c2;
L_004249b4:; BB(0x004249b4);
    /* 004249b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004249b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004249b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004249bb: call 0x4249c6 */ r_esp -= 4; W32(r_esp, 0x4249c0u); f_004249c6();
    /* 004249c0: jmp 0x4249a5 */ goto L_004249a5;
L_004249c2:; BB(0x004249c2);
    /* 004249c2: mov esp, ebp */ r_esp = r_ebp;
    /* 004249c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004249c5: ret  */ FN_RET(0x00424993); r_esp += 4; return;
}

void f_004249c6(void) /* FUN_004249c6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004249c6);
    /* 004249c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004249c7: mov ebp, esp */ r_ebp = r_esp;
    /* 004249c9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004249cc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004249cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004249d2: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004249d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004249d8: mov dword ptr [ecx + eax + 0x94], 0xffffffff */ W32((u32)(r_ecx+r_eax+0x94u), 0xffffffffu);
    /* 004249e3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004249ea: jmp 0x4249f5 */ goto L_004249f5;
L_004249ec:; BB(0x004249ec);
    /* 004249ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004249ef: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004249f2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004249f5:; BB(0x004249f5);
    /* 004249f5: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004249f9: jge 0x424a18 */ if ((fS==fO)) goto L_00424a18;
L_004249fb:; BB(0x004249fb);
    /* 004249fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004249fe: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424a01: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424a04: lea edx, [ecx + eax + 0x94] */ r_edx = (u32)(r_ecx+r_eax+0x94u);
    /* 00424a0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424a0e: mov dword ptr [edx + eax*4 + 4], 0 */ W32((u32)(r_edx+r_eax*4+0x4u), 0x0u);
    /* 00424a16: jmp 0x4249ec */ goto L_004249ec;
L_00424a18:; BB(0x00424a18);
    /* 00424a18: mov esp, ebp */ r_esp = r_ebp;
    /* 00424a1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424a1b: ret 4 */ FN_RET(0x004249c6); r_esp += 8; return;
}

void f_00424a1e(void) /* FUN_00424a1e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424a1e);
    /* 00424a1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424a1f: mov ebp, esp */ r_ebp = r_esp;
    /* 00424a21: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424a24: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00424a27: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00424a2e: jmp 0x424a39 */ goto L_00424a39;
L_00424a30:; BB(0x00424a30);
    /* 00424a30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424a33: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00424a36: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00424a39:; BB(0x00424a39);
    /* 00424a39: cmp dword ptr [ebp - 4], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424a3d: jge 0x424a59 */ if ((fS==fO)) goto L_00424a59;
L_00424a3f:; BB(0x00424a3f);
    /* 00424a3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424a42: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424a45: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424a48: cmp dword ptr [edx + ecx + 0x94], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x94u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424a50: jne 0x424a57 */ if (!fZ) goto L_00424a57;
L_00424a52:; BB(0x00424a52);
    /* 00424a52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424a55: jmp 0x424a5c */ goto L_00424a5c;
L_00424a57:; BB(0x00424a57);
    /* 00424a57: jmp 0x424a30 */ goto L_00424a30;
L_00424a59:; BB(0x00424a59);
    /* 00424a59: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00424a5c:; BB(0x00424a5c);
    /* 00424a5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00424a5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424a5f: ret  */ FN_RET(0x00424a1e); r_esp += 4; return;
}

void f_00424a60(void) /* FUN_00424a60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424a60);
    /* 00424a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00424a63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424a66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00424a69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00424a70: jmp 0x424a7b */ goto L_00424a7b;
L_00424a72:; BB(0x00424a72);
    /* 00424a72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424a75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00424a78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00424a7b:; BB(0x00424a7b);
    /* 00424a7b: cmp dword ptr [ebp - 4], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424a7f: jge 0x424ae5 */ if ((fS==fO)) goto L_00424ae5;
L_00424a81:; BB(0x00424a81);
    /* 00424a81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424a84: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424a87: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424a8a: cmp dword ptr [edx + ecx + 0x94], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x94u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424a92: je 0x424aa9 */ if (fZ) goto L_00424aa9;
L_00424a94:; BB(0x00424a94);
    /* 00424a94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424a97: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424a9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424a9d: mov edx, dword ptr [ecx + eax + 0x94] */ r_edx = R32((u32)(r_ecx+r_eax+0x94u));
    /* 00424aa4: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424aa7: jne 0x424ae3 */ if (!fZ) goto L_00424ae3;
L_00424aa9:; BB(0x00424aa9);
    /* 00424aa9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424aac: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424aaf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424ab2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00424ab5: mov dword ptr [ecx + eax + 0x94], edx */ W32((u32)(r_ecx+r_eax+0x94u), r_edx);
    /* 00424abc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424abf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424ac0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424ac3: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424ac6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424ac9: mov eax, dword ptr [edx + ecx + 0x94] */ r_eax = R32((u32)(r_edx+r_ecx+0x94u));
    /* 00424ad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424ad1: push 0x652744 */ { u32 v = 0x652744u; r_esp -= 4; W32(r_esp, v); }
    /* 00424ad6: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x424adbu); f_0060fc40();
    /* 00424adb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424ade: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424ae1: jmp 0x424b36 */ goto L_00424b36;
L_00424ae3:; BB(0x00424ae3);
    /* 00424ae3: jmp 0x424a72 */ goto L_00424a72;
L_00424ae5:; BB(0x00424ae5);
    /* 00424ae5: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00424ae7: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x424aecu); f_0060ee31();
    /* 00424aec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424aef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00424af2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424af5: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424af8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424afb: mov eax, dword ptr [edx + ecx + 0x94] */ r_eax = R32((u32)(r_edx+r_ecx+0x94u));
    /* 00424b02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424b03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424b06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424b07: push 0x65276c */ { u32 v = 0x65276cu; r_esp -= 4; W32(r_esp, v); }
    /* 00424b0c: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x424b11u); f_0060fc40();
    /* 00424b11: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424b14: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424b17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424b18: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424b1b: call 0x4249c6 */ r_esp -= 4; W32(r_esp, 0x424b20u); f_004249c6();
    /* 00424b20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424b23: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424b26: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424b29: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00424b2c: mov dword ptr [ecx + eax + 0x94], edx */ W32((u32)(r_ecx+r_eax+0x94u), r_edx);
    /* 00424b33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00424b36:; BB(0x00424b36);
    /* 00424b36: mov esp, ebp */ r_esp = r_ebp;
    /* 00424b38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424b39: ret 4 */ FN_RET(0x00424a60); r_esp += 8; return;
}

void f_00424b3c(void) /* FUN_00424b3c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424b3c);
    /* 00424b3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424b3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00424b3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424b40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00424b41: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424b44: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424b47: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424b4e: je 0x424b63 */ if (fZ) goto L_00424b63;
L_00424b50:; BB(0x00424b50);
    /* 00424b50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424b53: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424b5a: je 0x424b63 */ if (fZ) goto L_00424b63;
L_00424b5c:; BB(0x00424b5c);
    /* 00424b5c: mov eax, 1 */ r_eax = 0x1u;
    /* 00424b61: jmp 0x424bc1 */ goto L_00424bc1;
L_00424b63:; BB(0x00424b63);
    /* 00424b63: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424b66: cmp dword ptr [edx + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424b6d: jne 0x424b73 */ if (!fZ) goto L_00424b73;
L_00424b6f:; BB(0x00424b6f);
    /* 00424b6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424b71: jmp 0x424bc1 */ goto L_00424bc1;
L_00424b73:; BB(0x00424b73);
    /* 00424b73: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00424b79: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x424b7eu); f_0045cd09();
    /* 00424b7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424b80: jne 0x424b86 */ if (!fZ) goto L_00424b86;
L_00424b82:; BB(0x00424b82);
    /* 00424b82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424b84: jmp 0x424bc1 */ goto L_00424bc1;
L_00424b86:; BB(0x00424b86);
    /* 00424b86: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00424b8c: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x424b91u); f_0045cd09();
    /* 00424b91: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424b94: jne 0x424b9d */ if (!fZ) goto L_00424b9d;
L_00424b96:; BB(0x00424b96);
    /* 00424b96: mov eax, 1 */ r_eax = 0x1u;
    /* 00424b9b: jmp 0x424bc1 */ goto L_00424bc1;
L_00424b9d:; BB(0x00424b9d);
    /* 00424b9d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00424b9f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x424ba4u); f_0060ee31();
    /* 00424ba4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424ba7: mov esi, eax */ r_esi = r_eax;
    /* 00424ba9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00424baf: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x424bb4u); f_0045cd09();
    /* 00424bb4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424bb6: jge 0x424bbf */ if ((fS==fO)) goto L_00424bbf;
L_00424bb8:; BB(0x00424bb8);
    /* 00424bb8: mov eax, 1 */ r_eax = 0x1u;
    /* 00424bbd: jmp 0x424bc1 */ goto L_00424bc1;
L_00424bbf:; BB(0x00424bbf);
    /* 00424bbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00424bc1:; BB(0x00424bc1);
    /* 00424bc1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424bc2: mov esp, ebp */ r_esp = r_ebp;
    /* 00424bc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424bc5: ret  */ FN_RET(0x00424b3c); r_esp += 4; return;
}

void f_00424bc6(void) /* FUN_00424bc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424bc6);
    /* 00424bc6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424bc7: mov ebp, esp */ r_ebp = r_esp;
    /* 00424bc9: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424bcc: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00424bcf: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00424bd1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x424bd6u); f_0048ab58();
    /* 00424bd6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424bd9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00424bdc: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424be0: je 0x424bf3 */ if (fZ) goto L_00424bf3;
L_00424be2:; BB(0x00424be2);
    /* 00424be2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00424be5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424be6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00424be9: call 0x5e41c0 */ r_esp -= 4; W32(r_esp, 0x424beeu); f_005e41c0();
    /* 00424bee: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00424bf1: jmp 0x424bfa */ goto L_00424bfa;
L_00424bf3:; BB(0x00424bf3);
    /* 00424bf3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00424bfa:; BB(0x00424bfa);
    /* 00424bfa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00424bfd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424c00: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00424c03: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00424c05: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00424c08: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x424c0bu); call_ind(t); }
    /* 00424c0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424c0d: je 0x424c15 */ if (fZ) goto L_00424c15;
L_00424c0f:; BB(0x00424c0f);
    /* 00424c0f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424c13: jne 0x424c59 */ if (!fZ) goto L_00424c59;
L_00424c15:; BB(0x00424c15);
    /* 00424c15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424c18: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00424c1b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00424c1e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00424c21: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424c25: je 0x424c38 */ if (fZ) goto L_00424c38;
L_00424c27:; BB(0x00424c27);
    /* 00424c27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00424c29: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424c2c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00424c2e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424c31: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x424c33u); call_ind(t); }
    /* 00424c33: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00424c36: jmp 0x424c3f */ goto L_00424c3f;
L_00424c38:; BB(0x00424c38);
    /* 00424c38: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00424c3f:; BB(0x00424c3f);
    /* 00424c3f: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424c43: je 0x424c54 */ if (fZ) goto L_00424c54;
L_00424c45:; BB(0x00424c45);
    /* 00424c45: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00424c48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424c49: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00424c4c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00424c4e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00424c51: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x424c54u); call_ind(t); }
L_00424c54:; BB(0x00424c54);
    /* 00424c54: jmp 0x424cde */ goto L_00424cde;
L_00424c59:; BB(0x00424c59);
    /* 00424c59: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00424c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424c5d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00424c60: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00424c63: add edx, dword ptr [ecx + 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00424c69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424c6a: push 0x6527b4 */ { u32 v = 0x6527b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00424c6f: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x424c74u); f_0060fc40();
    /* 00424c74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424c77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424c7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424c7b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00424c7e: call 0x424a60 */ r_esp -= 4; W32(r_esp, 0x424c83u); f_00424a60();
    /* 00424c83: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00424c86: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424c89: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424c8c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00424c8f: lea eax, [edx + ecx + 0x94] */ r_eax = (u32)(r_edx+r_ecx+0x94u);
    /* 00424c96: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00424c99: mov dword ptr [eax + ecx*4 + 4], 1 */ W32((u32)(r_eax+r_ecx*4+0x4u), 0x1u);
    /* 00424ca1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424ca4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424ca5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00424ca8: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00424cae: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x424cb3u); f_005e4060();
    /* 00424cb3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00424cb9: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00424cbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424cbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424cc0: call 0x5e4ac5 */ r_esp -= 4; W32(r_esp, 0x424cc5u); f_005e4ac5();
    /* 00424cc5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00424cc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424cc9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00424ccc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00424ccf: add edx, dword ptr [ecx + 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00424cd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424cd6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424cd9: call 0x5e4325 */ r_esp -= 4; W32(r_esp, 0x424cdeu); f_005e4325();
L_00424cde:; BB(0x00424cde);
    /* 00424cde: mov esp, ebp */ r_esp = r_ebp;
    /* 00424ce0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424ce1: ret 0x10 */ FN_RET(0x00424bc6); r_esp += 20; return;
}

void f_00424ce4(void) /* FUN_00424ce4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424ce4);
    /* 00424ce4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424ce5: mov ebp, esp */ r_ebp = r_esp;
    /* 00424ce7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424cea: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424ced: cmp dword ptr [ebp + 0xc], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424cf4: jge 0x424d33 */ if ((fS==fO)) goto L_00424d33;
L_00424cf6:; BB(0x00424cf6);
    /* 00424cf6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424cf9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00424cfc: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00424d00: ja 0x424d33 */ if ((!fC&&!fZ)) goto L_00424d33;
L_00424d02:; BB(0x00424d02);
    /* 00424d02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424d05: jmp dword ptr [ecx*4 + 0x424d50] */ { u32 t = R32((u32)(r_ecx*4+0x424d50u)); switch (t) { case 0x424d1au: goto L_00424d1a; case 0x424d0cu: goto L_00424d0c; case 0x424d33u: goto L_00424d33; case 0x424d27u: goto L_00424d27; default: UNSUP(0x00424d05, "jump table entry is not a known target"); } }
L_00424d0c:; BB(0x00424d0c);
    /* 00424d0c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00424d0f: add edx, 0xc738 */ {  u32 a = r_edx; u32 b = 0xc738u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00424d15: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00424d18: jmp 0x424d33 */ goto L_00424d33;
L_00424d1a:; BB(0x00424d1a);
    /* 00424d1a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00424d1d: add eax, 0xcb20 */ {  u32 a = r_eax; u32 b = 0xcb20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00424d22: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00424d25: jmp 0x424d33 */ goto L_00424d33;
L_00424d27:; BB(0x00424d27);
    /* 00424d27: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00424d2a: add ecx, 0xc350 */ {  u32 a = r_ecx; u32 b = 0xc350u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00424d30: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_00424d33:; BB(0x00424d33);
    /* 00424d33: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00424d36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424d37: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00424d3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424d3b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00424d3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424d3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424d42: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00424d44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424d47: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x424d4au); call_ind(t); }
    /* 00424d4a: mov esp, ebp */ r_esp = r_ebp;
    /* 00424d4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424d4d: ret 0x10 */ FN_RET(0x00424ce4); r_esp += 20; return;
}

void f_00424d68(void) /* FUN_00424d68 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424d68);
    /* 00424d68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424d69: mov ebp, esp */ r_ebp = r_esp;
    /* 00424d6b: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424d6e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00424d6f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00424d72: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00424d79: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00424d7b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x424d80u); f_0048ab58();
    /* 00424d80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424d83: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00424d86: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424d8a: je 0x424d9b */ if (fZ) goto L_00424d9b;
L_00424d8c:; BB(0x00424d8c);
    /* 00424d8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424d8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00424d91: call 0x5e41c0 */ r_esp -= 4; W32(r_esp, 0x424d96u); f_005e41c0();
    /* 00424d96: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00424d99: jmp 0x424da2 */ goto L_00424da2;
L_00424d9b:; BB(0x00424d9b);
    /* 00424d9b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00424da2:; BB(0x00424da2);
    /* 00424da2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00424da5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00424da8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424daa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00424dad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00424db0: add edx, dword ptr [ecx + 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00424db6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424db7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00424dba: call 0x5e4adb */ r_esp -= 4; W32(r_esp, 0x424dbfu); f_005e4adb();
    /* 00424dbf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00424dc2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00424dc5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00424dc8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00424dcb: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00424dce: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424dd2: je 0x424de5 */ if (fZ) goto L_00424de5;
L_00424dd4:; BB(0x00424dd4);
    /* 00424dd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00424dd6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00424dd9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00424ddb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00424dde: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x424de0u); call_ind(t); }
    /* 00424de0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00424de3: jmp 0x424dec */ goto L_00424dec;
L_00424de5:; BB(0x00424de5);
    /* 00424de5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00424dec:; BB(0x00424dec);
    /* 00424dec: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424df0: jne 0x424e0c */ if (!fZ) goto L_00424e0c;
L_00424df2:; BB(0x00424df2);
    /* 00424df2: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424df6: je 0x424e07 */ if (fZ) goto L_00424e07;
L_00424df8:; BB(0x00424df8);
    /* 00424df8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00424dfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424dfc: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00424dff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00424e01: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00424e04: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x424e07u); call_ind(t); }
L_00424e07:; BB(0x00424e07);
    /* 00424e07: jmp 0x424f29 */ goto L_00424f29;
L_00424e0c:; BB(0x00424e0c);
    /* 00424e0c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424e0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424e10: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00424e13: call 0x424a60 */ r_esp -= 4; W32(r_esp, 0x424e18u); f_00424a60();
    /* 00424e18: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00424e1b: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424e1f: jg 0x424e29 */ if ((!fZ&&fS==fO)) goto L_00424e29;
L_00424e21:; BB(0x00424e21);
    /* 00424e21: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424e24: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00424e27: jmp 0x424e6b */ goto L_00424e6b;
L_00424e29:; BB(0x00424e29);
    /* 00424e29: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00424e2f: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x424e34u); f_0045cd09();
    /* 00424e34: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424e37: jne 0x424e41 */ if (!fZ) goto L_00424e41;
L_00424e39:; BB(0x00424e39);
    /* 00424e39: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424e3c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00424e3f: jmp 0x424e6b */ goto L_00424e6b;
L_00424e41:; BB(0x00424e41);
    /* 00424e41: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e43: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x424e48u); f_0060ee31();
    /* 00424e48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424e4b: mov esi, eax */ r_esi = r_eax;
    /* 00424e4d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00424e53: call 0x45cd09 */ r_esp -= 4; W32(r_esp, 0x424e58u); f_0045cd09();
    /* 00424e58: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424e5a: jl 0x424e65 */ if ((fS!=fO)) goto L_00424e65;
L_00424e5c:; BB(0x00424e5c);
    /* 00424e5c: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00424e63: jmp 0x424e6b */ goto L_00424e6b;
L_00424e65:; BB(0x00424e65);
    /* 00424e65: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424e68: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00424e6b:; BB(0x00424e6b);
    /* 00424e6b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00424e72: jmp 0x424e7d */ goto L_00424e7d;
L_00424e74:; BB(0x00424e74);
    /* 00424e74: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424e77: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00424e7a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00424e7d:; BB(0x00424e7d);
    /* 00424e7d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424e80: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424e83: jge 0x424eb7 */ if ((fS==fO)) goto L_00424eb7;
L_00424e85:; BB(0x00424e85);
    /* 00424e85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424e88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424e89: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x424e8eu); f_0060ee31();
    /* 00424e8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424e91: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00424e94: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00424e97: imul edx, edx, 0x7c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424e9a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00424e9d: lea ecx, [eax + edx + 0x94] */ r_ecx = (u32)(r_eax+r_edx+0x94u);
    /* 00424ea4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00424ea7: cmp dword ptr [ecx + edx*4 + 4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424eac: jne 0x424eb5 */ if (!fZ) goto L_00424eb5;
L_00424eae:; BB(0x00424eae);
    /* 00424eae: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_00424eb5:; BB(0x00424eb5);
    /* 00424eb5: jmp 0x424e74 */ goto L_00424e74;
L_00424eb7:; BB(0x00424eb7);
    /* 00424eb7: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424ebb: jne 0x424ed6 */ if (!fZ) goto L_00424ed6;
L_00424ebd:; BB(0x00424ebd);
    /* 00424ebd: push 0x6527d8 */ { u32 v = 0x6527d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00424ec2: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x424ec7u); f_0060fc40();
    /* 00424ec7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424eca: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00424ecd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424ece: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00424ed1: call 0x4249c6 */ r_esp -= 4; W32(r_esp, 0x424ed6u); f_004249c6();
L_00424ed6:; BB(0x00424ed6);
    /* 00424ed6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00424ed9: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424edc: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00424edf: lea eax, [edx + ecx + 0x94] */ r_eax = (u32)(r_edx+r_ecx+0x94u);
    /* 00424ee6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00424ee9: cmp dword ptr [eax + ecx*4 + 4], 1 */ {  u32 a = R32((u32)(r_eax+r_ecx*4+0x4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424eee: jne 0x424f0e */ if (!fZ) goto L_00424f0e;
L_00424ef0:; BB(0x00424ef0);
    /* 00424ef0: push 0x6527fc */ { u32 v = 0x6527fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00424ef5: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x424efau); f_0060fc40();
    /* 00424efa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424efd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424f00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424f01: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x424f06u); f_0060ee31();
    /* 00424f06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424f09: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00424f0c: jmp 0x424ed6 */ goto L_00424ed6;
L_00424f0e:; BB(0x00424f0e);
    /* 00424f0e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00424f11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424f12: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00424f15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424f16: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00424f19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424f1a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424f1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424f1e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00424f21: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00424f23: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00424f26: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x424f29u); call_ind(t); }
L_00424f29:; BB(0x00424f29);
    /* 00424f29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424f2a: mov esp, ebp */ r_esp = r_ebp;
    /* 00424f2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424f2d: ret 0xc */ FN_RET(0x00424d68); r_esp += 16; return;
}

void f_00424f30(void) /* FUN_00424f30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424f30);
    /* 00424f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00424f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424f37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424f3a: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x424f3fu); f_005e3fb0();
    /* 00424f3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424f42: mov dword ptr [eax], 0x6340c4 */ W32((u32)(r_eax), 0x6340c4u);
    /* 00424f48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424f4b: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 00424f52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424f55: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 00424f5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424f5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00424f61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424f62: ret  */ FN_RET(0x00424f30); r_esp += 4; return;
}

void f_00424f63(void) /* FUN_00424f63 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424f63);
    /* 00424f63: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424f64: mov ebp, esp */ r_ebp = r_esp;
    /* 00424f66: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424f69: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00424f6c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00424f6f: mov dword ptr [eax], 0x6340c4 */ W32((u32)(r_eax), 0x6340c4u);
    /* 00424f75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00424f78: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 00424f7b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00424f7e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424f81: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00424f84: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424f88: je 0x424f9b */ if (fZ) goto L_00424f9b;
L_00424f8a:; BB(0x00424f8a);
    /* 00424f8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00424f8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424f8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00424f91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424f94: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x424f96u); call_ind(t); }
    /* 00424f96: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00424f99: jmp 0x424fa2 */ goto L_00424fa2;
L_00424f9b:; BB(0x00424f9b);
    /* 00424f9b: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00424fa2:; BB(0x00424fa2);
    /* 00424fa2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00424fa5: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 00424fac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00424faf: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 00424fb2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00424fb5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424fb8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00424fbb: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424fbf: je 0x424fd2 */ if (fZ) goto L_00424fd2;
L_00424fc1:; BB(0x00424fc1);
    /* 00424fc1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00424fc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00424fc6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00424fc8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00424fcb: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x424fcdu); call_ind(t); }
    /* 00424fcd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00424fd0: jmp 0x424fd9 */ goto L_00424fd9;
L_00424fd2:; BB(0x00424fd2);
    /* 00424fd2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00424fd9:; BB(0x00424fd9);
    /* 00424fd9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00424fdc: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 00424fe3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00424fe6: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x424febu); f_005e3fed();
    /* 00424feb: mov esp, ebp */ r_esp = r_ebp;
    /* 00424fed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424fee: ret  */ FN_RET(0x00424f63); r_esp += 4; return;
}

void f_00424fef(void) /* FUN_00424fef */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424fef);
    /* 00424fef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424ff0: mov ebp, esp */ r_ebp = r_esp;
    /* 00424ff2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424ff3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424ff6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424ff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424ffa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424ffd: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 00425000: call 0x5e8a95 */ r_esp -= 4; W32(r_esp, 0x425005u); f_005e8a95();
    /* 00425005: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425008: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x42500du); f_005d9690();
    /* 0042500d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042500f: je 0x425022 */ if (fZ) goto L_00425022;
L_00425011:; BB(0x00425011);
    /* 00425011: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425014: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 00425017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042501a: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 0042501d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042501f: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x425022u); call_ind(t); }
L_00425022:; BB(0x00425022);
    /* 00425022: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00425025: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425026: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425029: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 0042502c: call 0x5e8a95 */ r_esp -= 4; W32(r_esp, 0x425031u); f_005e8a95();
    /* 00425031: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425034: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x425039u); f_005d9690();
    /* 00425039: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042503b: je 0x42504e */ if (fZ) goto L_0042504e;
L_0042503d:; BB(0x0042503d);
    /* 0042503d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425040: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00425043: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425046: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00425049: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042504b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x42504eu); call_ind(t); }
L_0042504e:; BB(0x0042504e);
    /* 0042504e: mov esp, ebp */ r_esp = r_ebp;
    /* 00425050: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425051: ret 8 */ FN_RET(0x00424fef); r_esp += 12; return;
}

void f_00425054(void) /* FUN_00425054 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425054);
    /* 00425054: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425055: mov ebp, esp */ r_ebp = r_esp;
    /* 00425057: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042505a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042505d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425060: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x425065u); f_005e4035();
    /* 00425065: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425068: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042506c: jne 0x4250a1 */ if (!fZ) goto L_004250a1;
L_0042506e:; BB(0x0042506e);
    /* 0042506e: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00425073: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x425078u); f_0048ab58();
    /* 00425078: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042507b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042507e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425082: je 0x425091 */ if (fZ) goto L_00425091;
L_00425084:; BB(0x00425084);
    /* 00425084: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425087: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x42508cu); f_005e8590();
    /* 0042508c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042508f: jmp 0x425098 */ goto L_00425098;
L_00425091:; BB(0x00425091);
    /* 00425091: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00425098:; BB(0x00425098);
    /* 00425098: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042509b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042509e: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
L_004250a1:; BB(0x004250a1);
    /* 004250a1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004250a4: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004250a7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004250aa: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004250ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004250af: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4250b2u); call_ind(t); }
    /* 004250b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004250b5: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x4250bau); f_005d9883();
    /* 004250ba: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004250bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004250be: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004250c1: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004250c4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004250c7: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004250ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004250cc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4250cfu); call_ind(t); }
    /* 004250cf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004250d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004250d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004250d7: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x4250dau); call_ind(t); }
    /* 004250da: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004250dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004250de: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004250e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004250e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004250e6: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x4250e9u); call_ind(t); }
    /* 004250e9: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004250ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004250ed: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004250f0: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004250f3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004250f6: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004250f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004250fb: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4250feu); call_ind(t); }
    /* 004250fe: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00425100: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425103: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00425106: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x42510bu); f_005e87aa();
    /* 0042510b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042510e: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x425113u); f_005d98c3();
    /* 00425113: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00425116: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425117: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042511a: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 0042511d: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x425122u); f_005e8740();
    /* 00425122: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00425124: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425127: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 0042512a: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x42512fu); f_005e8775();
    /* 0042512f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00425131: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425134: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00425137: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x42513cu); f_005e8e99();
    /* 0042513c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042513f: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 00425142: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425145: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00425148: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042514a: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x42514du); call_ind(t); }
    /* 0042514d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425150: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425154: jne 0x425189 */ if (!fZ) goto L_00425189;
L_00425156:; BB(0x00425156);
    /* 00425156: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0042515b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x425160u); f_0048ab58();
    /* 00425160: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425163: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00425166: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042516a: je 0x425179 */ if (fZ) goto L_00425179;
L_0042516c:; BB(0x0042516c);
    /* 0042516c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042516f: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x425174u); f_005e8590();
    /* 00425174: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00425177: jmp 0x425180 */ goto L_00425180;
L_00425179:; BB(0x00425179);
    /* 00425179: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00425180:; BB(0x00425180);
    /* 00425180: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425183: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00425186: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
L_00425189:; BB(0x00425189);
    /* 00425189: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042518c: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0042518f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425192: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00425195: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425197: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x42519au); call_ind(t); }
    /* 0042519a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042519d: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x4251a2u); f_005d9883();
    /* 004251a2: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004251a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004251a6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004251a9: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004251ac: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004251af: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 004251b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004251b4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4251b7u); call_ind(t); }
    /* 004251b7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004251ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004251bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004251bf: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x4251c2u); call_ind(t); }
    /* 004251c2: add eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004251c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004251c6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004251c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004251cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004251ce: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x4251d1u); call_ind(t); }
    /* 004251d1: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004251d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004251d5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004251d8: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004251db: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004251de: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 004251e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004251e3: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4251e6u); call_ind(t); }
    /* 004251e6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004251e8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004251eb: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004251ee: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4251f3u); f_005e87aa();
    /* 004251f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004251f6: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x4251fbu); f_005d98c3();
    /* 004251fb: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004251fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004251ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425202: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 00425205: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x42520au); f_005e8740();
    /* 0042520a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0042520c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042520f: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 00425212: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x425217u); f_005e8775();
    /* 00425217: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00425219: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042521c: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0042521f: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x425224u); f_005e8e99();
    /* 00425224: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425227: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 0042522a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042522d: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00425230: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425232: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x425235u); call_ind(t); }
    /* 00425235: mov esp, ebp */ r_esp = r_ebp;
    /* 00425237: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425238: ret  */ FN_RET(0x00425054); r_esp += 4; return;
}

void f_00425239(void) /* FUN_00425239 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425239);
    /* 00425239: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042523a: mov ebp, esp */ r_ebp = r_esp;
    /* 0042523c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042523d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425240: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425243: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x425248u); f_005ea2c1();
    /* 00425248: mov esp, ebp */ r_esp = r_ebp;
    /* 0042524a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042524b: ret  */ FN_RET(0x00425239); r_esp += 4; return;
}

void f_0042524c(void) /* FUN_0042524c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042524c);
    /* 0042524c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042524d: mov ebp, esp */ r_ebp = r_esp;
    /* 0042524f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425250: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425253: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425256: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00425259: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042525c: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0042525f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425261: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x425264u); call_ind(t); }
    /* 00425264: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425267: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0042526a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042526d: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00425270: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425272: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x425275u); call_ind(t); }
    /* 00425275: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425278: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x42527du); f_005ea28a();
    /* 0042527d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042527f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425280: ret  */ FN_RET(0x0042524c); r_esp += 4; return;
}

void f_00425281(void) /* FUN_00425281 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425281);
    /* 00425281: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425282: mov ebp, esp */ r_ebp = r_esp;
    /* 00425284: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425285: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425288: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042528b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042528d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425290: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x425293u); call_ind(t); }
    /* 00425293: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425295: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425298: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x42529du); f_005ea1cf();
    /* 0042529d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004252a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004252a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252a4: call 0x5d7b59 */ r_esp -= 4; W32(r_esp, 0x4252a9u); f_005d7b59();
    /* 004252a9: mov esp, ebp */ r_esp = r_ebp;
    /* 004252ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004252ac: ret 4 */ FN_RET(0x00425281); r_esp += 8; return;
}

void f_004252af(void) /* FUN_004252af */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004252af);
    /* 004252af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004252b0: mov ebp, esp */ r_ebp = r_esp;
    /* 004252b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004252b3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004252b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252b9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004252bc: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 004252bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252c2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004252c5: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 004252c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004252ca: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4252cdu); call_ind(t); }
    /* 004252cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252d0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004252d3: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 004252d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252d9: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004252dc: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 004252df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004252e1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4252e4u); call_ind(t); }
    /* 004252e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004252e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252e9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004252ec: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4252f1u); f_005ea1cf();
    /* 004252f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252f4: call 0x5d765a */ r_esp -= 4; W32(r_esp, 0x4252f9u); f_005d765a();
    /* 004252f9: mov esp, ebp */ r_esp = r_ebp;
    /* 004252fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004252fc: ret  */ FN_RET(0x004252af); r_esp += 4; return;
}

void f_004252fd(void) /* FUN_004252fd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004252fd);
    /* 004252fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004252fe: mov ebp, esp */ r_ebp = r_esp;
    /* 00425300: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425301: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425304: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425306: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425309: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x42530eu); f_005ea1cf();
    /* 0042530e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425311: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00425314: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00425317: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0042531a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042531c: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x42531fu); call_ind(t); }
    /* 0042531f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425322: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00425325: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00425328: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0042532b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042532d: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x425330u); call_ind(t); }
    /* 00425330: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425334: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425337: call 0x5d7b59 */ r_esp -= 4; W32(r_esp, 0x42533cu); f_005d7b59();
    /* 0042533c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042533e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042533f: ret 4 */ FN_RET(0x004252fd); r_esp += 8; return;
}

void f_00425342(void) /* FUN_00425342 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425342);
    /* 00425342: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425343: mov ebp, esp */ r_ebp = r_esp;
    /* 00425345: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425346: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425349: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042534c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0042534f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425352: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00425355: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425357: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x42535au); call_ind(t); }
    /* 0042535a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042535d: call 0x5d765a */ r_esp -= 4; W32(r_esp, 0x425362u); f_005d765a();
    /* 00425362: mov esp, ebp */ r_esp = r_ebp;
    /* 00425364: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425365: ret  */ FN_RET(0x00425342); r_esp += 4; return;
}

void f_00425366(void) /* FUN_00425366 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425366);
    /* 00425366: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425367: mov ebp, esp */ r_ebp = r_esp;
    /* 00425369: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042536c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042536f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425372: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x425377u); f_005dfbf0();
    /* 00425377: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042537a: mov dword ptr [eax], 0x634114 */ W32((u32)(r_eax), 0x634114u);
    /* 00425380: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00425387: jmp 0x425392 */ goto L_00425392;
L_00425389:; BB(0x00425389);
    /* 00425389: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042538c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042538f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00425392:; BB(0x00425392);
    /* 00425392: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425396: jge 0x4253b9 */ if ((fS==fO)) goto L_004253b9;
L_00425398:; BB(0x00425398);
    /* 00425398: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042539b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042539e: mov dword ptr [eax + edx*4 + 0x14], 0 */ W32((u32)(r_eax+r_edx*4+0x14u), 0x0u);
    /* 004253a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004253a9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004253ac: mov dword ptr [edx + ecx*4 + 0x8c], 0 */ W32((u32)(r_edx+r_ecx*4+0x8cu), 0x0u);
    /* 004253b7: jmp 0x425389 */ goto L_00425389;
L_004253b9:; BB(0x004253b9);
    /* 004253b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004253bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004253bf: mov dword ptr [eax + 0x108], ecx */ W32((u32)(r_eax+0x108u), r_ecx);
    /* 004253c5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004253c8: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 004253cf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004253d2: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 004253d9: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004253db: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4253e0u); f_0048ab58();
    /* 004253e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004253e3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004253e6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004253ea: je 0x4253fd */ if (fZ) goto L_004253fd;
L_004253ec:; BB(0x004253ec);
    /* 004253ec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004253ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004253f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004253f3: call 0x426385 */ r_esp -= 4; W32(r_esp, 0x4253f8u); f_00426385();
    /* 004253f8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004253fb: jmp 0x425404 */ goto L_00425404;
L_004253fd:; BB(0x004253fd);
    /* 004253fd: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00425404:; BB(0x00425404);
    /* 00425404: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425407: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042540a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0042540d: push 0x3fc */ { u32 v = 0x3fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00425412: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x425417u); f_0048ab58();
    /* 00425417: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042541a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0042541d: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425421: je 0x425430 */ if (fZ) goto L_00425430;
L_00425423:; BB(0x00425423);
    /* 00425423: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425426: call 0x5b9c90 */ r_esp -= 4; W32(r_esp, 0x42542bu); f_005b9c90();
    /* 0042542b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042542e: jmp 0x425437 */ goto L_00425437;
L_00425430:; BB(0x00425430);
    /* 00425430: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00425437:; BB(0x00425437);
    /* 00425437: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042543a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042543d: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00425440: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425443: mov dword ptr [eax + 0x110], 0 */ W32((u32)(r_eax+0x110u), 0x0u);
    /* 0042544d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425450: mov dword ptr [ecx + 0x10c], 0 */ W32((u32)(r_ecx+0x10cu), 0x0u);
    /* 0042545a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042545d: mov dword ptr [edx + 0x104], 0 */ W32((u32)(r_edx+0x104u), 0x0u);
    /* 00425467: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042546a: mov dword ptr [eax + 0x12c], 0 */ W32((u32)(r_eax+0x12cu), 0x0u);
    /* 00425474: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425477: call 0x425c59 */ r_esp -= 4; W32(r_esp, 0x42547cu); f_00425c59();
    /* 0042547c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042547f: call 0x425b72 */ r_esp -= 4; W32(r_esp, 0x425484u); f_00425b72();
    /* 00425484: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425487: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x42548cu); f_00425d41();
    /* 0042548c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042548f: mov esp, ebp */ r_esp = r_ebp;
    /* 00425491: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425492: ret 4 */ FN_RET(0x00425366); r_esp += 8; return;
}

void f_00425495(void) /* FUN_00425495 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425495);
    /* 00425495: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425496: mov ebp, esp */ r_ebp = r_esp;
    /* 00425498: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042549b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0042549e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004254a1: mov dword ptr [eax], 0x634114 */ W32((u32)(r_eax), 0x634114u);
    /* 004254a7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004254aa: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004254ae: je 0x4254e7 */ if (fZ) goto L_004254e7;
L_004254b0:; BB(0x004254b0);
    /* 004254b0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004254b3: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004254b6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004254b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004254bc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004254bf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004254c3: je 0x4254d6 */ if (fZ) goto L_004254d6;
L_004254c5:; BB(0x004254c5);
    /* 004254c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004254c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004254ca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004254cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004254cf: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4254d1u); call_ind(t); }
    /* 004254d1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004254d4: jmp 0x4254dd */ goto L_004254dd;
L_004254d6:; BB(0x004254d6);
    /* 004254d6: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_004254dd:; BB(0x004254dd);
    /* 004254dd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004254e0: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
L_004254e7:; BB(0x004254e7);
    /* 004254e7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004254ea: cmp dword ptr [edx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004254ee: je 0x425527 */ if (fZ) goto L_00425527;
L_004254f0:; BB(0x004254f0);
    /* 004254f0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004254f3: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004254f6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004254f9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004254fc: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004254ff: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425503: je 0x425516 */ if (fZ) goto L_00425516;
L_00425505:; BB(0x00425505);
    /* 00425505: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00425507: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042550a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042550c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042550f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x425511u); call_ind(t); }
    /* 00425511: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00425514: jmp 0x42551d */ goto L_0042551d;
L_00425516:; BB(0x00425516);
    /* 00425516: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0042551d:; BB(0x0042551d);
    /* 0042551d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00425520: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
L_00425527:; BB(0x00425527);
    /* 00425527: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042552a: call 0x425a3f */ r_esp -= 4; W32(r_esp, 0x42552fu); f_00425a3f();
    /* 0042552f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00425532: call 0x42625b */ r_esp -= 4; W32(r_esp, 0x425537u); f_0042625b();
    /* 00425537: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042553a: call 0x4262e7 */ r_esp -= 4; W32(r_esp, 0x42553fu); f_004262e7();
    /* 0042553f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00425542: mov edx, dword ptr [ecx + 0x12c] */ r_edx = R32((u32)(r_ecx+0x12cu));
    /* 00425548: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0042554b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042554e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00425551: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425555: je 0x425568 */ if (fZ) goto L_00425568;
L_00425557:; BB(0x00425557);
    /* 00425557: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00425559: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042555c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042555e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00425561: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x425563u); call_ind(t); }
    /* 00425563: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00425566: jmp 0x42556f */ goto L_0042556f;
L_00425568:; BB(0x00425568);
    /* 00425568: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0042556f:; BB(0x0042556f);
    /* 0042556f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00425572: mov dword ptr [eax + 0x12c], 0 */ W32((u32)(r_eax+0x12cu), 0x0u);
    /* 0042557c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042557f: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x425584u); f_005dfc0f();
    /* 00425584: mov esp, ebp */ r_esp = r_ebp;
    /* 00425586: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425587: ret  */ FN_RET(0x00425495); r_esp += 4; return;
}

void f_00425588(void) /* FUN_00425588 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425588);
    /* 00425588: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425589: mov ebp, esp */ r_ebp = r_esp;
    /* 0042558b: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042558e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00425591: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425594: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425598: jne 0x42559f */ if (!fZ) goto L_0042559f;
L_0042559a:; BB(0x0042559a);
    /* 0042559a: jmp 0x4256aa */ goto L_004256aa;
L_0042559f:; BB(0x0042559f);
    /* 0042559f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004255a2: cmp dword ptr [ecx + 0x12c], 0 */ {  u32 a = R32((u32)(r_ecx+0x12cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004255a9: jne 0x4255e1 */ if (!fZ) goto L_004255e1;
L_004255ab:; BB(0x004255ab);
    /* 004255ab: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004255b0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4255b5u); f_0048ab58();
    /* 004255b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004255b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004255bb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004255bf: je 0x4255ce */ if (fZ) goto L_004255ce;
L_004255c1:; BB(0x004255c1);
    /* 004255c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004255c4: call 0x424f30 */ r_esp -= 4; W32(r_esp, 0x4255c9u); f_00424f30();
    /* 004255c9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004255cc: jmp 0x4255d5 */ goto L_004255d5;
L_004255ce:; BB(0x004255ce);
    /* 004255ce: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_004255d5:; BB(0x004255d5);
    /* 004255d5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004255d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004255db: mov dword ptr [edx + 0x12c], eax */ W32((u32)(r_edx+0x12cu), r_eax);
L_004255e1:; BB(0x004255e1);
    /* 004255e1: push 0x4e2 */ { u32 v = 0x4e2u; r_esp -= 4; W32(r_esp, v); }
    /* 004255e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004255e9: mov ecx, dword ptr [ecx + 0x12c] */ r_ecx = R32((u32)(r_ecx+0x12cu));
    /* 004255ef: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4255f4u); f_005ea0c3();
    /* 004255f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004255f7: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004255fa: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x4255ffu); f_00420800();
    /* 004255ff: mov ecx, eax */ r_ecx = r_eax;
    /* 00425601: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x425606u); f_005d9883();
    /* 00425606: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00425609: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042560a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042560d: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 00425613: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425616: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 0042561c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042561e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x425621u); call_ind(t); }
    /* 00425621: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425624: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00425627: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x42562cu); f_00420800();
    /* 0042562c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042562f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425632: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00425634: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425637: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x42563au); call_ind(t); }
    /* 0042563a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042563b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042563e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00425641: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x425646u); f_00420800();
    /* 00425646: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00425649: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042564c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042564e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00425651: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x425654u); call_ind(t); }
    /* 00425654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425655: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425658: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 0042565e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425661: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 00425667: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425669: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x42566cu); call_ind(t); }
    /* 0042566c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042566f: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 00425675: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425678: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 0042567e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425680: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x425683u); call_ind(t); }
    /* 00425683: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425685: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425688: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 0042568e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x425693u); f_005ea1cf();
    /* 00425693: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425696: mov ecx, dword ptr [ecx + 0x12c] */ r_ecx = R32((u32)(r_ecx+0x12cu));
    /* 0042569c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042569f: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 004256a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004256a7: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4256aau); call_ind(t); }
L_004256aa:; BB(0x004256aa);
    /* 004256aa: mov esp, ebp */ r_esp = r_ebp;
    /* 004256ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004256ad: ret  */ FN_RET(0x00425588); r_esp += 4; return;
}

void f_004256ae(void) /* FUN_004256ae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004256ae);
    /* 004256ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004256af: mov ebp, esp */ r_ebp = r_esp;
    /* 004256b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004256b2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004256b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004256b8: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004256bc: jne 0x4256c2 */ if (!fZ) goto L_004256c2;
L_004256be:; BB(0x004256be);
    /* 004256be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004256c0: jmp 0x4256d9 */ goto L_004256d9;
L_004256c2:; BB(0x004256c2);
    /* 004256c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004256c5: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 004256c8: call 0x4212a1 */ r_esp -= 4; W32(r_esp, 0x4256cdu); f_004212a1();
    /* 004256cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004256ce: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004256d4: call 0x46027d */ r_esp -= 4; W32(r_esp, 0x4256d9u); f_0046027d();
L_004256d9:; BB(0x004256d9);
    /* 004256d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004256db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004256dc: ret  */ FN_RET(0x004256ae); r_esp += 4; return;
}

void f_004256dd(void) /* FUN_004256dd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004256dd);
    /* 004256dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004256de: mov ebp, esp */ r_ebp = r_esp;
    /* 004256e0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004256e3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004256e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004256e9: cmp dword ptr [eax + 0x12c], 0 */ {  u32 a = R32((u32)(r_eax+0x12cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004256f0: je 0x425704 */ if (fZ) goto L_00425704;
L_004256f2:; BB(0x004256f2);
    /* 004256f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004256f5: mov ecx, dword ptr [ecx + 0x12c] */ r_ecx = R32((u32)(r_ecx+0x12cu));
    /* 004256fb: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x425700u); f_005d96a9();
    /* 00425700: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425702: jne 0x42573d */ if (!fZ) goto L_0042573d;
L_00425704:; BB(0x00425704);
    /* 00425704: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425707: mov eax, dword ptr [edx + 0x108] */ r_eax = R32((u32)(r_edx+0x108u));
    /* 0042570d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042570e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425711: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00425714: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00425717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425718: push 0x652820 */ { u32 v = 0x652820u; r_esp -= 4; W32(r_esp, v); }
    /* 0042571d: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x425722u); f_0060fc40();
    /* 00425722: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425725: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425729: je 0x425738 */ if (fZ) goto L_00425738;
L_0042572b:; BB(0x0042572b);
    /* 0042572b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042572d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425730: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00425732: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425735: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x425738u); call_ind(t); }
L_00425738:; BB(0x00425738);
    /* 00425738: jmp 0x4257d4 */ goto L_004257d4;
L_0042573d:; BB(0x0042573d);
    /* 0042573d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425740: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 00425746: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425747: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042574a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0042574d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00425750: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425751: push 0x65284c */ { u32 v = 0x65284cu; r_esp -= 4; W32(r_esp, v); }
    /* 00425756: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x42575bu); f_0060fc40();
    /* 0042575b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042575e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00425761: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425762: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00425765: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425766: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425769: mov ecx, dword ptr [ecx + 0x12c] */ r_ecx = R32((u32)(r_ecx+0x12cu));
    /* 0042576f: call 0x424fef */ r_esp -= 4; W32(r_esp, 0x425774u); f_00424fef();
    /* 00425774: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00425776: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x42577bu); f_0048ab58();
    /* 0042577b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042577e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00425781: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425785: je 0x4257a4 */ if (fZ) goto L_004257a4;
L_00425787:; BB(0x00425787);
    /* 00425787: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042578a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042578b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042578e: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x425793u); f_005d7b34();
    /* 00425793: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425796: mov dword ptr [eax], 0x634144 */ W32((u32)(r_eax), 0x634144u);
    /* 0042579c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042579f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004257a2: jmp 0x4257ab */ goto L_004257ab;
L_004257a4:; BB(0x004257a4);
    /* 004257a4: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_004257ab:; BB(0x004257ab);
    /* 004257ab: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004257ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004257af: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004257b2: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 004257b8: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x4257bdu); f_005e4060();
    /* 004257bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004257c0: mov ecx, dword ptr [ecx + 0x12c] */ r_ecx = R32((u32)(r_ecx+0x12cu));
    /* 004257c6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004257c9: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 004257cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004257d1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4257d4u); call_ind(t); }
L_004257d4:; BB(0x004257d4);
    /* 004257d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004257d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004257d7: ret 0xc */ FN_RET(0x004256dd); r_esp += 16; return;
}

void f_004257da(void) /* FUN_004257da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004257da);
    /* 004257da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004257db: mov ebp, esp */ r_ebp = r_esp;
    /* 004257dd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004257e0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004257e3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004257e6: cmp dword ptr [eax + 0x12c], 0 */ {  u32 a = R32((u32)(r_eax+0x12cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004257ed: je 0x425801 */ if (fZ) goto L_00425801;
L_004257ef:; BB(0x004257ef);
    /* 004257ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004257f2: mov ecx, dword ptr [ecx + 0x12c] */ r_ecx = R32((u32)(r_ecx+0x12cu));
    /* 004257f8: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x4257fdu); f_005d96a9();
    /* 004257fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004257ff: je 0x425816 */ if (fZ) goto L_00425816;
L_00425801:; BB(0x00425801);
    /* 00425801: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425805: je 0x425814 */ if (fZ) goto L_00425814;
L_00425807:; BB(0x00425807);
    /* 00425807: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425809: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042580c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042580e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425811: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x425814u); call_ind(t); }
L_00425814:; BB(0x00425814);
    /* 00425814: jmp 0x42585f */ goto L_0042585f;
L_00425816:; BB(0x00425816);
    /* 00425816: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00425818: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x42581du); f_0048ab58();
    /* 0042581d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425820: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00425823: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425827: je 0x425846 */ if (fZ) goto L_00425846;
L_00425829:; BB(0x00425829);
    /* 00425829: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042582c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042582d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425830: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x425835u); f_005d7b34();
    /* 00425835: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425838: mov dword ptr [edx], 0x63415c */ W32((u32)(r_edx), 0x63415cu);
    /* 0042583e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425841: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00425844: jmp 0x42584d */ goto L_0042584d;
L_00425846:; BB(0x00425846);
    /* 00425846: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0042584d:; BB(0x0042584d);
    /* 0042584d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425850: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425851: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425854: mov ecx, dword ptr [edx + 0x12c] */ r_ecx = R32((u32)(r_edx+0x12cu));
    /* 0042585a: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x42585fu); f_005e4060();
L_0042585f:; BB(0x0042585f);
    /* 0042585f: mov esp, ebp */ r_esp = r_ebp;
    /* 00425861: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425862: ret 4 */ FN_RET(0x004257da); r_esp += 8; return;
}

void f_00425865(void) /* FUN_00425865 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425865);
    /* 00425865: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425866: mov ebp, esp */ r_ebp = r_esp;
    /* 00425868: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425869: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042586c: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00425871: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00425874: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x425879u); f_00448ca3();
    /* 00425879: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042587b: jne 0x425892 */ if (!fZ) goto L_00425892;
L_0042587d:; BB(0x0042587d);
    /* 0042587d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425880: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00425883: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00425886: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00425889: movsx eax, word ptr [eax + 0x652662] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x652662u));
    /* 00425890: jmp 0x4258ed */ goto L_004258ed;
L_00425892:; BB(0x00425892);
    /* 00425892: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425895: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00425897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042589a: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x42589du); call_ind(t); }
    /* 0042589d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042589f: je 0x4258b6 */ if (fZ) goto L_004258b6;
L_004258a1:; BB(0x004258a1);
    /* 004258a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004258a4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004258a7: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004258aa: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004258ad: movsx eax, word ptr [edx + 0x652664] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x652664u));
    /* 004258b4: jmp 0x4258ed */ goto L_004258ed;
L_004258b6:; BB(0x004258b6);
    /* 004258b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004258b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004258bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004258be: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4258c1u); call_ind(t); }
    /* 004258c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004258c3: je 0x4258da */ if (fZ) goto L_004258da;
L_004258c5:; BB(0x004258c5);
    /* 004258c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004258c8: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004258cb: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004258ce: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004258d1: movsx eax, word ptr [edx + 0x652666] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x652666u));
    /* 004258d8: jmp 0x4258ed */ goto L_004258ed;
L_004258da:; BB(0x004258da);
    /* 004258da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004258dd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004258e0: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004258e3: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004258e6: movsx eax, word ptr [edx + 0x652668] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x652668u));
L_004258ed:; BB(0x004258ed);
    /* 004258ed: mov esp, ebp */ r_esp = r_ebp;
    /* 004258ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004258f0: ret  */ FN_RET(0x00425865); r_esp += 4; return;
}

void f_004258f1(void) /* FUN_004258f1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004258f1);
    /* 004258f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004258f2: mov ebp, esp */ r_ebp = r_esp;
    /* 004258f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004258f5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004258f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004258fb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004258fe: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00425901: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00425904: fld dword ptr [edx + 0x65266c] */ FPUSH(R_F32((u32)(r_edx+0x65266cu)));
    /* 0042590a: mov esp, ebp */ r_esp = r_ebp;
    /* 0042590c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042590d: ret  */ FN_RET(0x004258f1); r_esp += 4; return;
}

void f_0042590e(void) /* FUN_0042590e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042590e);
    /* 0042590e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042590f: mov ebp, esp */ r_ebp = r_esp;
    /* 00425911: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425917: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042591a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042591c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042591f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x425922u); call_ind(t); }
    /* 00425922: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425924: jne 0x42593e */ if (!fZ) goto L_0042593e;
L_00425926:; BB(0x00425926);
    /* 00425926: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425929: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042592b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042592e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x425931u); call_ind(t); }
    /* 00425931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425933: jne 0x42593e */ if (!fZ) goto L_0042593e;
L_00425935:; BB(0x00425935);
    /* 00425935: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0042593c: jmp 0x425945 */ goto L_00425945;
L_0042593e:; BB(0x0042593e);
    /* 0042593e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00425945:; BB(0x00425945);
    /* 00425945: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425948: mov esp, ebp */ r_esp = r_ebp;
    /* 0042594a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042594b: ret  */ FN_RET(0x0042590e); r_esp += 4; return;
}

void f_0042594c(void) /* FUN_0042594c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042594c);
    /* 0042594c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042594d: mov ebp, esp */ r_ebp = r_esp;
    /* 0042594f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425950: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425953: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425955: mov esp, ebp */ r_esp = r_ebp;
    /* 00425957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425958: ret  */ FN_RET(0x0042594c); r_esp += 4; return;
}

void f_00425959(void) /* FUN_00425959 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425959);
    /* 00425959: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042595a: mov ebp, esp */ r_ebp = r_esp;
    /* 0042595c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042595d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425960: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425962: mov esp, ebp */ r_esp = r_ebp;
    /* 00425964: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425965: ret  */ FN_RET(0x00425959); r_esp += 4; return;
}

void f_00425966(void) /* FUN_00425966 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425966);
    /* 00425966: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425967: mov ebp, esp */ r_ebp = r_esp;
    /* 00425969: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042596a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042596d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042596f: mov esp, ebp */ r_esp = r_ebp;
    /* 00425971: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425972: ret  */ FN_RET(0x00425966); r_esp += 4; return;
}

void f_00425973(void) /* FUN_00425973 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425973);
    /* 00425973: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425974: mov ebp, esp */ r_ebp = r_esp;
    /* 00425976: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425977: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042597a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042597d: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425981: je 0x42599a */ if (fZ) goto L_0042599a;
L_00425983:; BB(0x00425983);
    /* 00425983: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425986: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00425989: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x42598eu); f_0041f839();
    /* 0042598e: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425991: je 0x42599a */ if (fZ) goto L_0042599a;
L_00425993:; BB(0x00425993);
    /* 00425993: mov eax, 1 */ r_eax = 0x1u;
    /* 00425998: jmp 0x42599c */ goto L_0042599c;
L_0042599a:; BB(0x0042599a);
    /* 0042599a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0042599c:; BB(0x0042599c);
    /* 0042599c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042599e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042599f: ret  */ FN_RET(0x00425973); r_esp += 4; return;
}

void f_004259a0(void) /* FUN_004259a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004259a0);
    /* 004259a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004259a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004259a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004259a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004259a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004259aa: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004259ae: je 0x4259c7 */ if (fZ) goto L_004259c7;
L_004259b0:; BB(0x004259b0);
    /* 004259b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004259b3: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 004259b6: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x4259bbu); f_0041f839();
    /* 004259bb: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004259be: jne 0x4259c7 */ if (!fZ) goto L_004259c7;
L_004259c0:; BB(0x004259c0);
    /* 004259c0: mov eax, 1 */ r_eax = 0x1u;
    /* 004259c5: jmp 0x4259c9 */ goto L_004259c9;
L_004259c7:; BB(0x004259c7);
    /* 004259c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004259c9:; BB(0x004259c9);
    /* 004259c9: mov esp, ebp */ r_esp = r_ebp;
    /* 004259cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004259cc: ret  */ FN_RET(0x004259a0); r_esp += 4; return;
}

void f_004259cd(void) /* FUN_004259cd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004259cd);
    /* 004259cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004259ce: mov ebp, esp */ r_ebp = r_esp;
    /* 004259d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004259d1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004259d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004259d7: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004259db: je 0x4259e8 */ if (fZ) goto L_004259e8;
L_004259dd:; BB(0x004259dd);
    /* 004259dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004259e0: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004259e3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004259e6: jmp 0x4259ed */ goto L_004259ed;
L_004259e8:; BB(0x004259e8);
    /* 004259e8: mov eax, 0x6f5b68 */ r_eax = 0x6f5b68u;
L_004259ed:; BB(0x004259ed);
    /* 004259ed: mov esp, ebp */ r_esp = r_ebp;
    /* 004259ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004259f0: ret  */ FN_RET(0x004259cd); r_esp += 4; return;
}

void f_004259f1(void) /* FUN_004259f1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004259f1);
    /* 004259f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004259f2: mov ebp, esp */ r_ebp = r_esp;
    /* 004259f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004259f5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004259f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004259fb: mov eax, dword ptr [eax + 0x108] */ r_eax = R32((u32)(r_eax+0x108u));
    /* 00425a01: mov esp, ebp */ r_esp = r_ebp;
    /* 00425a03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425a04: ret  */ FN_RET(0x004259f1); r_esp += 4; return;
}

void f_00425a05(void) /* FUN_00425a05 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425a05);
    /* 00425a05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425a06: mov ebp, esp */ r_ebp = r_esp;
    /* 00425a08: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425a0b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00425a0e: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00425a11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425a12: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00425a15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425a16: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00425a1c: call 0x45d949 */ r_esp -= 4; W32(r_esp, 0x425a21u); f_0045d949();
    /* 00425a21: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00425a24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425a25: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00425a28: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00425a2b: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x425a30u); f_004267fb();
    /* 00425a30: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425a33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425a35: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425a38: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00425a3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00425a3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425a3e: ret  */ FN_RET(0x00425a05); r_esp += 4; return;
}

void f_00425a3f(void) /* FUN_00425a3f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425a3f);
    /* 00425a3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425a40: mov ebp, esp */ r_ebp = r_esp;
    /* 00425a42: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425a45: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00425a48: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425a4b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00425a4e: cmp dword ptr [ecx + 0x1c], 1 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425a52: jg 0x425a83 */ if ((!fZ&&fS==fO)) goto L_00425a83;
L_00425a54:; BB(0x00425a54);
    /* 00425a54: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425a57: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00425a5a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00425a5d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425a60: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425a63: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425a67: je 0x425a7a */ if (fZ) goto L_00425a7a;
L_00425a69:; BB(0x00425a69);
    /* 00425a69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00425a6b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425a6e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00425a70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425a73: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x425a75u); call_ind(t); }
    /* 00425a75: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00425a78: jmp 0x425a81 */ goto L_00425a81;
L_00425a7a:; BB(0x00425a7a);
    /* 00425a7a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00425a81:; BB(0x00425a81);
    /* 00425a81: jmp 0x425a98 */ goto L_00425a98;
L_00425a83:; BB(0x00425a83);
    /* 00425a83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425a86: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00425a89: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00425a8c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00425a8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425a92: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00425a95: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
L_00425a98:; BB(0x00425a98);
    /* 00425a98: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425a9b: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 00425aa2: mov esp, ebp */ r_esp = r_ebp;
    /* 00425aa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425aa5: ret  */ FN_RET(0x00425a3f); r_esp += 4; return;
}

void f_00425aa6(void) /* FUN_00425aa6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425aa6);
    /* 00425aa6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425aa7: mov ebp, esp */ r_ebp = r_esp;
    /* 00425aa9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425aac: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00425aaf: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00425ab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425ab3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425ab6: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00425ab9: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x425abeu); f_004267fb();
    /* 00425abe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425ac1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00425ac4: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00425ac7: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00425aca: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00425acd: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00425ad0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425ad3: call 0x425a3f */ r_esp -= 4; W32(r_esp, 0x425ad8u); f_00425a3f();
    /* 00425ad8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425adb: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 00425ae2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00425ae4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x425ae9u); f_0048ab58();
    /* 00425ae9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425aec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00425aef: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425af3: je 0x425b06 */ if (fZ) goto L_00425b06;
L_00425af5:; BB(0x00425af5);
    /* 00425af5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425af8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425af9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00425afc: call 0x426385 */ r_esp -= 4; W32(r_esp, 0x425b01u); f_00426385();
    /* 00425b01: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00425b04: jmp 0x425b0d */ goto L_00425b0d;
L_00425b06:; BB(0x00425b06);
    /* 00425b06: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00425b0d:; BB(0x00425b0d);
    /* 00425b0d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425b10: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00425b13: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00425b16: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425b19: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00425b1c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425b1f: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00425b22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425b25: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00425b28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425b2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425b2c: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00425b2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425b30: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425b33: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00425b36: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x425b3bu); f_00426561();
    /* 00425b3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00425b3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425b3e: ret  */ FN_RET(0x00425aa6); r_esp += 4; return;
}

void f_00425b3f(void) /* FUN_00425b3f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425b3f);
    /* 00425b3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425b40: mov ebp, esp */ r_ebp = r_esp;
    /* 00425b42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425b43: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425b46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425b49: call 0x425a3f */ r_esp -= 4; W32(r_esp, 0x425b4eu); f_00425a3f();
    /* 00425b4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425b51: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425b54: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00425b57: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425b5a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00425b5d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00425b60: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425b63: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425b66: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00425b69: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00425b6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00425b6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425b6f: ret 4 */ FN_RET(0x00425b3f); r_esp += 8; return;
}

void f_00425b72(void) /* FUN_00425b72 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425b72);
    /* 00425b72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425b73: mov ebp, esp */ r_ebp = r_esp;
    /* 00425b75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425b76: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425b79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425b7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425b7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425b80: call 0x425c32 */ r_esp -= 4; W32(r_esp, 0x425b85u); f_00425c32();
    /* 00425b85: mov esp, ebp */ r_esp = r_ebp;
    /* 00425b87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425b88: ret  */ FN_RET(0x00425b72); r_esp += 4; return;
}

void f_00425bad(void) /* FUN_00425bad */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425bad);
    /* 00425bad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425bae: mov ebp, esp */ r_ebp = r_esp;
    /* 00425bb0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425bb3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00425bb6: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00425bb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425bba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425bbd: call 0x425b89 */ r_esp -= 4; W32(r_esp, 0x425bc2u); f_00425b89();
    /* 00425bc2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425bc5: mov esp, ebp */ r_esp = r_ebp;
    /* 00425bc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425bc8: ret  */ FN_RET(0x00425bad); r_esp += 4; return;
}

void f_00425bc9(void) /* FUN_00425bc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425bc9);
    /* 00425bc9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425bca: mov ebp, esp */ r_ebp = r_esp;
    /* 00425bcc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425bcf: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00425bd2: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00425bd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425bd6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425bd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425bda: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425bdd: add edx, 0x114 */ {  u32 a = r_edx; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425be3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425be4: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x425be9u); f_00429a59();
    /* 00425be9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425bec: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00425bef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425bf0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425bf3: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x425bf8u); f_00425bfe();
    /* 00425bf8: mov esp, ebp */ r_esp = r_ebp;
    /* 00425bfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425bfb: ret 4 */ FN_RET(0x00425bc9); r_esp += 8; return;
}

void f_00425bfe(void) /* FUN_00425bfe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425bfe);
    /* 00425bfe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425bff: mov ebp, esp */ r_ebp = r_esp;
    /* 00425c01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425c02: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425c05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425c08: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00425c0a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00425c0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425c10: mov dword ptr [eax + 0x114], ecx */ W32((u32)(r_eax+0x114u), r_ecx);
    /* 00425c16: mov dword ptr [eax + 0x118], edx */ W32((u32)(r_eax+0x118u), r_edx);
    /* 00425c1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425c1e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00425c24: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00425c27: call 0x447faa */ r_esp -= 4; W32(r_esp, 0x425c2cu); f_00447faa();
    /* 00425c2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00425c2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425c2f: ret 4 */ FN_RET(0x00425bfe); r_esp += 8; return;
}

void f_00425c32(void) /* FUN_00425c32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425c32);
    /* 00425c32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425c33: mov ebp, esp */ r_ebp = r_esp;
    /* 00425c35: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425c38: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00425c3b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425c3e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00425c41: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00425c44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425c47: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00425c4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425c4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425c4e: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x425c53u); f_00425bfe();
    /* 00425c53: mov esp, ebp */ r_esp = r_ebp;
    /* 00425c55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425c56: ret 8 */ FN_RET(0x00425c32); r_esp += 12; return;
}

void f_00425c59(void) /* FUN_00425c59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425c59);
    /* 00425c59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425c5a: mov ebp, esp */ r_ebp = r_esp;
    /* 00425c5c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425c5f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00425c62: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00425c69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00425c70: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00425c73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425c74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425c77: call 0x425ce5 */ r_esp -= 4; W32(r_esp, 0x425c7cu); f_00425ce5();
    /* 00425c7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00425c7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425c7f: ret  */ FN_RET(0x00425c59); r_esp += 4; return;
}

void f_00425ca4(void) /* FUN_00425ca4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425ca4);
    /* 00425ca4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425ca5: mov ebp, esp */ r_ebp = r_esp;
    /* 00425ca7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425caa: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00425cad: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00425cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425cb1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425cb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425cb5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425cb8: add edx, 0x11c */ {  u32 a = r_edx; u32 b = 0x11cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425cbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425cbf: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x425cc4u); f_00429a59();
    /* 00425cc4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425cc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425cca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425ccb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425cce: call 0x425d8a */ r_esp -= 4; W32(r_esp, 0x425cd3u); f_00425d8a();
    /* 00425cd3: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00425cd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425cd7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425cda: call 0x425ce5 */ r_esp -= 4; W32(r_esp, 0x425cdfu); f_00425ce5();
    /* 00425cdf: mov esp, ebp */ r_esp = r_ebp;
    /* 00425ce1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425ce2: ret 4 */ FN_RET(0x00425ca4); r_esp += 8; return;
}

void f_00425ce5(void) /* FUN_00425ce5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425ce5);
    /* 00425ce5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425ce6: mov ebp, esp */ r_ebp = r_esp;
    /* 00425ce8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425ce9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425cec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425cef: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00425cf1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00425cf4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425cf7: mov dword ptr [eax + 0x11c], ecx */ W32((u32)(r_eax+0x11cu), r_ecx);
    /* 00425cfd: mov dword ptr [eax + 0x120], edx */ W32((u32)(r_eax+0x120u), r_edx);
    /* 00425d03: mov esp, ebp */ r_esp = r_ebp;
    /* 00425d05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425d06: ret 4 */ FN_RET(0x00425ce5); r_esp += 8; return;
}

void f_00425d09(void) /* FUN_00425d09 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425d09);
    /* 00425d09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425d0a: mov ebp, esp */ r_ebp = r_esp;
    /* 00425d0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425d0d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425d10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425d13: cmp dword ptr [eax + 0x11c], 0 */ {  u32 a = R32((u32)(r_eax+0x11cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425d1a: jl 0x425d34 */ if ((fS!=fO)) goto L_00425d34;
L_00425d1c:; BB(0x00425d1c);
    /* 00425d1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425d1f: cmp dword ptr [ecx + 0x11c], 0 */ {  u32 a = R32((u32)(r_ecx+0x11cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425d26: jne 0x425d3b */ if (!fZ) goto L_00425d3b;
L_00425d28:; BB(0x00425d28);
    /* 00425d28: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425d2b: cmp dword ptr [edx + 0x120], 0 */ {  u32 a = R32((u32)(r_edx+0x120u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425d32: jge 0x425d3b */ if ((fS==fO)) goto L_00425d3b;
L_00425d34:; BB(0x00425d34);
    /* 00425d34: mov eax, 1 */ r_eax = 0x1u;
    /* 00425d39: jmp 0x425d3d */ goto L_00425d3d;
L_00425d3b:; BB(0x00425d3b);
    /* 00425d3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00425d3d:; BB(0x00425d3d);
    /* 00425d3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00425d3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425d40: ret  */ FN_RET(0x00425d09); r_esp += 4; return;
}

void f_00425d41(void) /* FUN_00425d41 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425d41);
    /* 00425d41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425d42: mov ebp, esp */ r_ebp = r_esp;
    /* 00425d44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425d45: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425d48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425d4b: mov dword ptr [eax + 0x124], 0 */ W32((u32)(r_eax+0x124u), 0x0u);
    /* 00425d55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425d58: mov dword ptr [ecx + 0x128], 0 */ W32((u32)(r_ecx+0x128u), 0x0u);
    /* 00425d62: mov esp, ebp */ r_esp = r_ebp;
    /* 00425d64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425d65: ret  */ FN_RET(0x00425d41); r_esp += 4; return;
}

void f_00425d8a(void) /* FUN_00425d8a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425d8a);
    /* 00425d8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425d8b: mov ebp, esp */ r_ebp = r_esp;
    /* 00425d8d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425d90: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00425d93: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00425d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425d97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425d9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425d9b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425d9e: add edx, 0x124 */ {  u32 a = r_edx; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425da4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425da5: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x425daau); f_00429a59();
    /* 00425daa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425dad: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00425db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425db1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425db4: call 0x425dbf */ r_esp -= 4; W32(r_esp, 0x425db9u); f_00425dbf();
    /* 00425db9: mov esp, ebp */ r_esp = r_ebp;
    /* 00425dbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425dbc: ret 4 */ FN_RET(0x00425d8a); r_esp += 8; return;
}

void f_00425dbf(void) /* FUN_00425dbf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425dbf);
    /* 00425dbf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425dc0: mov ebp, esp */ r_ebp = r_esp;
    /* 00425dc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425dc3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425dc6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425dc9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00425dcb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00425dce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425dd1: mov dword ptr [eax + 0x124], ecx */ W32((u32)(r_eax+0x124u), r_ecx);
    /* 00425dd7: mov dword ptr [eax + 0x128], edx */ W32((u32)(r_eax+0x128u), r_edx);
    /* 00425ddd: mov esp, ebp */ r_esp = r_ebp;
    /* 00425ddf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425de0: ret 4 */ FN_RET(0x00425dbf); r_esp += 8; return;
}

void f_00425de3(void) /* FUN_00425de3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425de3);
    /* 00425de3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425de4: mov ebp, esp */ r_ebp = r_esp;
    /* 00425de6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425de7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425dea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425ded: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425df4: jl 0x425e0e */ if ((fS!=fO)) goto L_00425e0e;
L_00425df6:; BB(0x00425df6);
    /* 00425df6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425df9: cmp dword ptr [ecx + 0x124], 0 */ {  u32 a = R32((u32)(r_ecx+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425e00: jne 0x425e15 */ if (!fZ) goto L_00425e15;
L_00425e02:; BB(0x00425e02);
    /* 00425e02: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425e05: cmp dword ptr [edx + 0x128], 0 */ {  u32 a = R32((u32)(r_edx+0x128u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425e0c: jge 0x425e15 */ if ((fS==fO)) goto L_00425e15;
L_00425e0e:; BB(0x00425e0e);
    /* 00425e0e: mov eax, 1 */ r_eax = 0x1u;
    /* 00425e13: jmp 0x425e17 */ goto L_00425e17;
L_00425e15:; BB(0x00425e15);
    /* 00425e15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00425e17:; BB(0x00425e17);
    /* 00425e17: mov esp, ebp */ r_esp = r_ebp;
    /* 00425e19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425e1a: ret  */ FN_RET(0x00425de3); r_esp += 4; return;
}

void f_00425e1b(void) /* FUN_00425e1b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425e1b);
    /* 00425e1b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425e1c: mov ebp, esp */ r_ebp = r_esp;
    /* 00425e1e: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425e24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00425e25: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00425e28: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 00425e2f: mov dword ptr [ebp - 0x58], 0x5f5e100 */ W32((u32)(r_ebp+0xffffffa8u), 0x5f5e100u);
    /* 00425e36: mov dword ptr [ebp - 0x54], 0x989680 */ W32((u32)(r_ebp+0xffffffacu), 0x989680u);
    /* 00425e3d: mov dword ptr [ebp - 0x50], 0xf4240 */ W32((u32)(r_ebp+0xffffffb0u), 0xf4240u);
    /* 00425e44: mov dword ptr [ebp - 0x4c], 0x7a120 */ W32((u32)(r_ebp+0xffffffb4u), 0x7a120u);
    /* 00425e4b: mov dword ptr [ebp - 0x48], 0x186a0 */ W32((u32)(r_ebp+0xffffffb8u), 0x186a0u);
    /* 00425e52: mov dword ptr [ebp - 0x44], 0xc350 */ W32((u32)(r_ebp+0xffffffbcu), 0xc350u);
    /* 00425e59: mov dword ptr [ebp - 0x40], 0x61a8 */ W32((u32)(r_ebp+0xffffffc0u), 0x61a8u);
    /* 00425e60: mov dword ptr [ebp - 0x3c], 0x2710 */ W32((u32)(r_ebp+0xffffffc4u), 0x2710u);
    /* 00425e67: mov dword ptr [ebp - 0x38], 0x1388 */ W32((u32)(r_ebp+0xffffffc8u), 0x1388u);
    /* 00425e6e: mov dword ptr [ebp - 0x34], 0x3e8 */ W32((u32)(r_ebp+0xffffffccu), 0x3e8u);
    /* 00425e75: mov dword ptr [ebp - 0x30], 0x1f4 */ W32((u32)(r_ebp+0xffffffd0u), 0x1f4u);
    /* 00425e7c: mov dword ptr [ebp - 0x2c], 0x64 */ W32((u32)(r_ebp+0xffffffd4u), 0x64u);
    /* 00425e83: mov dword ptr [ebp - 0x28], 0x32 */ W32((u32)(r_ebp+0xffffffd8u), 0x32u);
    /* 00425e8a: mov dword ptr [ebp - 0x24], 0x19 */ W32((u32)(r_ebp+0xffffffdcu), 0x19u);
    /* 00425e91: mov dword ptr [ebp - 0x20], 0xa */ W32((u32)(r_ebp+0xffffffe0u), 0xau);
    /* 00425e98: mov dword ptr [ebp - 0x1c], 5 */ W32((u32)(r_ebp+0xffffffe4u), 0x5u);
    /* 00425e9f: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 00425ea6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00425ead: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00425eb0: mov ecx, dword ptr [ebp + eax*4 - 0x58] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffa8u));
    /* 00425eb4: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00425eb7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00425ebe: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00425ec5: mov dword ptr [ebp - 0x68], 0xfaa */ W32((u32)(r_ebp+0xffffff98u), 0xfaau);
    /* 00425ecc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00425ecf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00425ed1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00425ed4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425ed7: mov dl, byte ptr [ecx + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4u))) & 0xffu);
    /* 00425eda: mov byte ptr [ebp - 0xc], dl */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_edx);
    /* 00425edd: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425ee1: je 0x425ee8 */ if (fZ) goto L_00425ee8;
L_00425ee3:; BB(0x00425ee3);
    /* 00425ee3: jmp 0x426254 */ goto L_00426254;
L_00425ee8:; BB(0x00425ee8);
    /* 00425ee8: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425eec: je 0x425efb */ if (fZ) goto L_00425efb;
L_00425eee:; BB(0x00425eee);
    /* 00425eee: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00425ef1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425ef3: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00425ef6: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x425ef9u); call_ind(t); }
    /* 00425ef9: jmp 0x425f06 */ goto L_00425f06;
L_00425efb:; BB(0x00425efb);
    /* 00425efb: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00425efe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425f00: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00425f03: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x425f06u); call_ind(t); }
L_00425f06:; BB(0x00425f06);
    /* 00425f06: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425f0a: jne 0x425f19 */ if (!fZ) goto L_00425f19;
L_00425f0c:; BB(0x00425f0c);
    /* 00425f0c: movsx eax, byte ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 00425f10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425f12: jne 0x425f19 */ if (!fZ) goto L_00425f19;
L_00425f14:; BB(0x00425f14);
    /* 00425f14: jmp 0x426254 */ goto L_00426254;
L_00425f19:; BB(0x00425f19);
    /* 00425f19: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425f1d: jle 0x426254 */ if ((fZ||fS!=fO)) goto L_00426254;
L_00425f23:; BB(0x00425f23);
    /* 00425f23: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425f26: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00425f27: idiv dword ptr [ebp - 0x64] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffff9cu)); if (!d) UNSUP(0x00425f27, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00425f27, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00425f2a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00425f2d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425f30: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00425f31: idiv dword ptr [ebp - 0x64] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffff9cu)); if (!d) UNSUP(0x00425f31, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00425f31, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00425f34: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00425f37: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00425f3e: jmp 0x425f49 */ goto L_00425f49;
L_00425f40:; BB(0x00425f40);
    /* 00425f40: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00425f43: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425f46: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
L_00425f49:; BB(0x00425f49);
    /* 00425f49: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00425f4c: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425f4f: jge 0x42623c */ if ((fS==fO)) goto L_0042623c;
L_00425f55:; BB(0x00425f55);
    /* 00425f55: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425f59: je 0x4260b4 */ if (fZ) goto L_004260b4;
L_00425f5f:; BB(0x00425f5f);
    /* 00425f5f: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00425f62: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00425f65: call 0x4207d8 */ r_esp -= 4; W32(r_esp, 0x425f6au); f_004207d8();
    /* 00425f6a: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00425f6d: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00425f70: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00425f73: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00425f76: call 0x4207ec */ r_esp -= 4; W32(r_esp, 0x425f7bu); f_004207ec();
    /* 00425f7b: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00425f7e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00425f81: cmp dword ptr [ebp - 0x6c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425f85: jle 0x425fab */ if ((fZ||fS!=fO)) goto L_00425fab;
L_00425f87:; BB(0x00425f87);
    /* 00425f87: cmp dword ptr [ebp - 0x6c], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425f8b: jge 0x425fab */ if ((fS==fO)) goto L_00425fab;
L_00425f8d:; BB(0x00425f8d);
    /* 00425f8d: mov esi, 0x10 */ r_esi = 0x10u;
    /* 00425f92: sub esi, dword ptr [ebp - 0x6c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffff94u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00425f95: imul esi, esi, 3 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00425f98: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00425f9a: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x425f9fu); f_0060ee31();
    /* 00425f9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425fa2: lea edx, [esi + eax - 2] */ r_edx = (u32)(r_esi+r_eax+0xfffffffeu);
    /* 00425fa6: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00425fa9: jmp 0x425fd0 */ goto L_00425fd0;
L_00425fab:; BB(0x00425fab);
    /* 00425fab: cmp dword ptr [ebp - 0x6c], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425faf: jne 0x425fba */ if (!fZ) goto L_00425fba;
L_00425fb1:; BB(0x00425fb1);
    /* 00425fb1: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00425fb8: jmp 0x425fd0 */ goto L_00425fd0;
L_00425fba:; BB(0x00425fba);
    /* 00425fba: cmp dword ptr [ebp - 0x6c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425fbe: jle 0x425fc9 */ if ((fZ||fS!=fO)) goto L_00425fc9;
L_00425fc0:; BB(0x00425fc0);
    /* 00425fc0: mov dword ptr [ebp - 0x70], 0x1f */ W32((u32)(r_ebp+0xffffff90u), 0x1fu);
    /* 00425fc7: jmp 0x425fd0 */ goto L_00425fd0;
L_00425fc9:; BB(0x00425fc9);
    /* 00425fc9: mov dword ptr [ebp - 0x70], 0x20 */ W32((u32)(r_ebp+0xffffff90u), 0x20u);
L_00425fd0:; BB(0x00425fd0);
    /* 00425fd0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00425fd2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x425fd7u); f_0048ab58();
    /* 00425fd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425fda: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00425fdd: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425fe1: je 0x425ff3 */ if (fZ) goto L_00425ff3;
L_00425fe3:; BB(0x00425fe3);
    /* 00425fe3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00425fe6: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x425febu); f_005e9d30();
    /* 00425feb: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00425ff1: jmp 0x425ffd */ goto L_00425ffd;
L_00425ff3:; BB(0x00425ff3);
    /* 00425ff3: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00425ffd:; BB(0x00425ffd);
    /* 00425ffd: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426000: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00426003: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00426009: mov dword ptr [ecx + eax*4 + 0x14], edx */ W32((u32)(r_ecx+r_eax*4+0x14u), r_edx);
    /* 0042600d: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00426010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426011: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426014: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00426017: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042601b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x426020u); f_005ea0c3();
    /* 00426020: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00426023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426024: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426027: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0042602a: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042602e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x426033u); f_005ea1cf();
    /* 00426033: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426036: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00426039: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042603d: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426040: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00426043: mov edx, dword ptr [eax + edx*4 + 0x14] */ r_edx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 00426047: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00426049: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x42604cu); call_ind(t); }
    /* 0042604c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0042604f: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00426051: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426054: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00426056: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426057: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042605a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042605b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0042605e: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00426061: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 00426065: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426068: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0042606b: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042606f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426071: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x426074u); call_ind(t); }
    /* 00426074: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426077: add eax, 0xc9 */ {  u32 a = r_eax; u32 b = 0xc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042607c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042607d: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426080: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00426083: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 00426087: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0042608a: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0042608d: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 00426091: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426093: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x426096u); call_ind(t); }
    /* 00426096: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426099: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0042609c: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 004260a0: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004260a3: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 004260a6: mov edx, dword ptr [eax + edx*4 + 0x14] */ r_edx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 004260aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004260ac: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4260afu); call_ind(t); }
    /* 004260af: jmp 0x426226 */ goto L_00426226;
L_004260b4:; BB(0x004260b4);
    /* 004260b4: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004260b7: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 004260ba: call 0x4207d8 */ r_esp -= 4; W32(r_esp, 0x4260bfu); f_004207d8();
    /* 004260bf: add eax, 0x4b */ {  u32 a = r_eax; u32 b = 0x4bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004260c2: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 004260c5: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 004260c8: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004260cb: call 0x4207ec */ r_esp -= 4; W32(r_esp, 0x4260d0u); f_004207ec();
    /* 004260d0: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004260d3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004260d6: cmp dword ptr [ebp - 0x6c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004260da: jle 0x426100 */ if ((fZ||fS!=fO)) goto L_00426100;
L_004260dc:; BB(0x004260dc);
    /* 004260dc: cmp dword ptr [ebp - 0x6c], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004260e0: jge 0x426100 */ if ((fS==fO)) goto L_00426100;
L_004260e2:; BB(0x004260e2);
    /* 004260e2: mov esi, 0x10 */ r_esi = 0x10u;
    /* 004260e7: sub esi, dword ptr [ebp - 0x6c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffff94u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004260ea: imul esi, esi, 3 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004260ed: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004260ef: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4260f4u); f_0060ee31();
    /* 004260f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004260f7: lea eax, [esi + eax - 2] */ r_eax = (u32)(r_esi+r_eax+0xfffffffeu);
    /* 004260fb: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004260fe: jmp 0x426125 */ goto L_00426125;
L_00426100:; BB(0x00426100);
    /* 00426100: cmp dword ptr [ebp - 0x6c], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426104: jne 0x42610f */ if (!fZ) goto L_0042610f;
L_00426106:; BB(0x00426106);
    /* 00426106: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 0042610d: jmp 0x426125 */ goto L_00426125;
L_0042610f:; BB(0x0042610f);
    /* 0042610f: cmp dword ptr [ebp - 0x6c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426113: jle 0x42611e */ if ((fZ||fS!=fO)) goto L_0042611e;
L_00426115:; BB(0x00426115);
    /* 00426115: mov dword ptr [ebp - 0x70], 0x1f */ W32((u32)(r_ebp+0xffffff90u), 0x1fu);
    /* 0042611c: jmp 0x426125 */ goto L_00426125;
L_0042611e:; BB(0x0042611e);
    /* 0042611e: mov dword ptr [ebp - 0x70], 0x20 */ W32((u32)(r_ebp+0xffffff90u), 0x20u);
L_00426125:; BB(0x00426125);
    /* 00426125: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00426127: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x42612cu); f_0048ab58();
    /* 0042612c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042612f: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00426132: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426136: je 0x426148 */ if (fZ) goto L_00426148;
L_00426138:; BB(0x00426138);
    /* 00426138: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0042613b: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x426140u); f_005e9d30();
    /* 00426140: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00426146: jmp 0x426152 */ goto L_00426152;
L_00426148:; BB(0x00426148);
    /* 00426148: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00426152:; BB(0x00426152);
    /* 00426152: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426155: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00426158: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0042615e: mov dword ptr [edx + ecx*4 + 0x8c], eax */ W32((u32)(r_edx+r_ecx*4+0x8cu), r_eax);
    /* 00426165: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00426168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426169: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0042616c: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0042616f: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00426176: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x42617bu); f_005ea0c3();
    /* 0042617b: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0042617e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042617f: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426182: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00426185: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0042618c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x426191u); f_005ea1cf();
    /* 00426191: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426194: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00426197: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0042619e: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004261a1: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 004261a4: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 004261ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004261ad: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4261b0u); call_ind(t); }
    /* 004261b0: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004261b3: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004261b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004261b8: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004261ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004261bb: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004261be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004261bf: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004261c2: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004261c5: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 004261cc: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004261cf: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 004261d2: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004261d9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004261db: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4261deu); call_ind(t); }
    /* 004261de: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004261e1: add ecx, 0xc9 */ {  u32 a = r_ecx; u32 b = 0xc9u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004261e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004261e8: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004261eb: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 004261ee: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 004261f5: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004261f8: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 004261fb: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00426202: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00426204: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x426207u); call_ind(t); }
    /* 00426207: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0042620a: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0042620d: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00426214: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426217: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0042621a: mov eax, dword ptr [edx + eax*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8cu));
    /* 00426221: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426223: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x426226u); call_ind(t); }
L_00426226:; BB(0x00426226);
    /* 00426226: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00426229: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042622c: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0042622f: cmp dword ptr [ebp - 0x5c], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426233: jne 0x426237 */ if (!fZ) goto L_00426237;
L_00426235:; BB(0x00426235);
    /* 00426235: jmp 0x426254 */ goto L_00426254;
L_00426237:; BB(0x00426237);
    /* 00426237: jmp 0x425f40 */ goto L_00425f40;
L_0042623c:; BB(0x0042623c);
    /* 0042623c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0042623f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426242: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00426245: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00426248: mov eax, dword ptr [ebp + edx*4 - 0x58] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffa8u));
    /* 0042624c: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0042624f: jmp 0x425f19 */ goto L_00425f19;
L_00426254:; BB(0x00426254);
    /* 00426254: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00426255: mov esp, ebp */ r_esp = r_ebp;
    /* 00426257: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426258: ret 8 */ FN_RET(0x00425e1b); r_esp += 12; return;
}

void f_0042625b(void) /* FUN_0042625b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042625b);
    /* 0042625b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042625c: mov ebp, esp */ r_ebp = r_esp;
    /* 0042625e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426261: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00426264: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042626b: jmp 0x426276 */ goto L_00426276;
L_0042626d:; BB(0x0042626d);
    /* 0042626d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426270: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426273: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00426276:; BB(0x00426276);
    /* 00426276: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042627a: jge 0x4262e3 */ if ((fS==fO)) goto L_004262e3;
L_0042627c:; BB(0x0042627c);
    /* 0042627c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042627f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426282: cmp dword ptr [edx + ecx*4 + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426287: je 0x4262e1 */ if (fZ) goto L_004262e1;
L_00426289:; BB(0x00426289);
    /* 00426289: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042628c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042628f: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00426293: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426296: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426299: mov edx, dword ptr [eax + edx*4 + 0x14] */ r_edx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 0042629d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042629f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4262a2u); call_ind(t); }
    /* 004262a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004262a5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004262a8: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 004262ac: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004262af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004262b2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004262b5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004262b9: je 0x4262cc */ if (fZ) goto L_004262cc;
L_004262bb:; BB(0x004262bb);
    /* 004262bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004262bd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004262c0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004262c2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004262c5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4262c7u); call_ind(t); }
    /* 004262c7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004262ca: jmp 0x4262d3 */ goto L_004262d3;
L_004262cc:; BB(0x004262cc);
    /* 004262cc: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_004262d3:; BB(0x004262d3);
    /* 004262d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004262d6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004262d9: mov dword ptr [edx + ecx*4 + 0x14], 0 */ W32((u32)(r_edx+r_ecx*4+0x14u), 0x0u);
L_004262e1:; BB(0x004262e1);
    /* 004262e1: jmp 0x42626d */ goto L_0042626d;
L_004262e3:; BB(0x004262e3);
    /* 004262e3: mov esp, ebp */ r_esp = r_ebp;
    /* 004262e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004262e6: ret  */ FN_RET(0x0042625b); r_esp += 4; return;
}

void f_004262e7(void) /* FUN_004262e7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004262e7);
    /* 004262e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004262e8: mov ebp, esp */ r_ebp = r_esp;
    /* 004262ea: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004262ed: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004262f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004262f7: jmp 0x426302 */ goto L_00426302;
L_004262f9:; BB(0x004262f9);
    /* 004262f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004262fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004262ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00426302:; BB(0x00426302);
    /* 00426302: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426306: jge 0x426381 */ if ((fS==fO)) goto L_00426381;
L_00426308:; BB(0x00426308);
    /* 00426308: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042630b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042630e: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426316: je 0x42637c */ if (fZ) goto L_0042637c;
L_00426318:; BB(0x00426318);
    /* 00426318: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042631b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042631e: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00426325: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426328: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042632b: mov edx, dword ptr [eax + edx*4 + 0x8c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 00426332: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00426334: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x426337u); call_ind(t); }
    /* 00426337: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042633a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042633d: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00426344: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00426347: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042634a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042634d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426351: je 0x426364 */ if (fZ) goto L_00426364;
L_00426353:; BB(0x00426353);
    /* 00426353: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426355: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426358: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042635a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042635d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x42635fu); call_ind(t); }
    /* 0042635f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00426362: jmp 0x42636b */ goto L_0042636b;
L_00426364:; BB(0x00426364);
    /* 00426364: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0042636b:; BB(0x0042636b);
    /* 0042636b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042636e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426371: mov dword ptr [edx + ecx*4 + 0x8c], 0 */ W32((u32)(r_edx+r_ecx*4+0x8cu), 0x0u);
L_0042637c:; BB(0x0042637c);
    /* 0042637c: jmp 0x4262f9 */ goto L_004262f9;
L_00426381:; BB(0x00426381);
    /* 00426381: mov esp, ebp */ r_esp = r_ebp;
    /* 00426383: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426384: ret  */ FN_RET(0x004262e7); r_esp += 4; return;
}

void f_00426385(void) /* FUN_00426385 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426385);
    /* 00426385: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426386: mov ebp, esp */ r_ebp = r_esp;
    /* 00426388: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042638b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042638e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426391: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x426396u); f_005dfbf0();
    /* 00426396: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426399: mov dword ptr [eax], 0x634174 */ W32((u32)(r_eax), 0x634174u);
    /* 0042639f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004263a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004263ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004263b0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004263b3: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004263b6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004263b9: mov dword ptr [eax + 0x1c], 1 */ W32((u32)(r_eax+0x1cu), 0x1u);
    /* 004263c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004263c3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004263c6: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 004263c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004263cc: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 004263cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004263d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004263d3: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 004263d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004263d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004263da: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x4263dfu); f_00426561();
    /* 004263df: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004263e2: mov esp, ebp */ r_esp = r_ebp;
    /* 004263e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004263e5: ret 4 */ FN_RET(0x00426385); r_esp += 8; return;
}

void f_004263e8(void) /* FUN_004263e8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004263e8);
    /* 004263e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004263e9: mov ebp, esp */ r_ebp = r_esp;
    /* 004263eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004263ec: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004263ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004263f2: mov dword ptr [eax], 0x634174 */ W32((u32)(r_eax), 0x634174u);
    /* 004263f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004263fb: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x426400u); f_005dfc0f();
    /* 00426400: mov esp, ebp */ r_esp = r_ebp;
    /* 00426402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426403: ret  */ FN_RET(0x004263e8); r_esp += 4; return;
}

void f_00426404(void) /* FUN_00426404 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426404);
    /* 00426404: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426405: mov ebp, esp */ r_ebp = r_esp;
    /* 00426407: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042640a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042640d: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00426412: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00426415: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x42641au); f_00448ca3();
    /* 0042641a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042641c: je 0x426461 */ if (fZ) goto L_00426461;
L_0042641e:; BB(0x0042641e);
    /* 0042641e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426421: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00426424: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x426429u); f_004259a0();
    /* 00426429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042642b: je 0x42644d */ if (fZ) goto L_0042644d;
L_0042642d:; BB(0x0042642d);
    /* 0042642d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426430: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00426433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426434: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426436: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426439: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0042643c: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x426441u); f_004259cd();
    /* 00426441: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426442: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00426448: call 0x45cfb2 */ r_esp -= 4; W32(r_esp, 0x42644du); f_0045cfb2();
L_0042644d:; BB(0x0042644d);
    /* 0042644d: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00426450: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426451: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00426457: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0042645a: call 0x448e71 */ r_esp -= 4; W32(r_esp, 0x42645fu); f_00448e71();
    /* 0042645f: jmp 0x4264a9 */ goto L_004264a9;
L_00426461:; BB(0x00426461);
    /* 00426461: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426464: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00426467: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x42646cu); f_004259a0();
    /* 0042646c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042646e: je 0x42648f */ if (fZ) goto L_0042648f;
L_00426470:; BB(0x00426470);
    /* 00426470: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00426473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426474: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426476: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426479: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0042647c: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x426481u); f_004259cd();
    /* 00426481: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426482: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00426488: call 0x45cfb2 */ r_esp -= 4; W32(r_esp, 0x42648du); f_0045cfb2();
    /* 0042648d: jmp 0x4264a9 */ goto L_004264a9;
L_0042648f:; BB(0x0042648f);
    /* 0042648f: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00426492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426493: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00426499: call 0x45e3e4 */ r_esp -= 4; W32(r_esp, 0x42649eu); f_0045e3e4();
    /* 0042649e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004264a0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004264a3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004264a6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004264a9:; BB(0x004264a9);
    /* 004264a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004264ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004264ad: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004264b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004264b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004264b4: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x4264b9u); f_00426561();
    /* 004264b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004264bc: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004264bf: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x4264c4u); f_004259a0();
    /* 004264c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004264c6: je 0x42655d */ if (fZ) goto L_0042655d;
L_004264cc:; BB(0x004264cc);
    /* 004264cc: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 004264d2: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004264d5: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x4264dau); f_00448ca3();
    /* 004264da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004264dc: jne 0x42655d */ if (!fZ) goto L_0042655d;
L_004264de:; BB(0x004264de);
    /* 004264de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004264e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004264e3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004264e6: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004264e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004264ea: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004264f0: call 0x45c736 */ r_esp -= 4; W32(r_esp, 0x4264f5u); f_0045c736();
    /* 004264f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004264f6: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004264fc: call 0x45e662 */ r_esp -= 4; W32(r_esp, 0x426501u); f_0045e662();
    /* 00426501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426503: je 0x42651f */ if (fZ) goto L_0042651f;
L_00426505:; BB(0x00426505);
    /* 00426505: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426508: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0042650b: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x426510u); f_004259cd();
    /* 00426510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426511: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00426517: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0042651a: call 0x448ae7 */ r_esp -= 4; W32(r_esp, 0x42651fu); f_00448ae7();
L_0042651f:; BB(0x0042651f);
    /* 0042651f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426522: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00426525: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00426528: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426529: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0042652f: call 0x45c736 */ r_esp -= 4; W32(r_esp, 0x426534u); f_0045c736();
    /* 00426534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426535: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0042653b: call 0x45e71c */ r_esp -= 4; W32(r_esp, 0x426540u); f_0045e71c();
    /* 00426540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426542: je 0x42655d */ if (fZ) goto L_0042655d;
L_00426544:; BB(0x00426544);
    /* 00426544: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426547: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0042654a: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x42654fu); f_004259cd();
    /* 0042654f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426550: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00426555: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00426558: call 0x448b70 */ r_esp -= 4; W32(r_esp, 0x42655du); f_00448b70();
L_0042655d:; BB(0x0042655d);
    /* 0042655d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042655f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426560: ret  */ FN_RET(0x00426404); r_esp += 4; return;
}

void f_00426561(void) /* FUN_00426561 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426561);
    /* 00426561: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426562: mov ebp, esp */ r_ebp = r_esp;
    /* 00426564: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426567: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00426568: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00426569: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042656c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00426573: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0042657a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042657d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0042657f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00426582: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426585: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00426588: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0042658b: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 00426591: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00426593: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00426595: and ecx, 0x3b9aca00 */ {  u32 a = r_ecx; u32 b = 0x3b9aca00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0042659b: add ecx, 0x3b9aca00 */ {  u32 a = r_ecx; u32 b = 0x3b9aca00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004265a1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004265a4: cmp dword ptr [edx + 0xc], ecx */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004265a7: jl 0x4265cc */ if ((fS!=fO)) goto L_004265cc;
L_004265a9:; BB(0x004265a9);
    /* 004265a9: mov eax, dword ptr [0x6fc470] */ r_eax = R32((u32)(0x6fc470u));
    /* 004265ae: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004265b0: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004265b2: and eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004265b7: add eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004265bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004265bf: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004265c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004265c5: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
L_004265cc:; BB(0x004265cc);
    /* 004265cc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004265cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004265d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004265d3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004265d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004265d7: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004265dc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004265df: call 0x44848a */ r_esp -= 4; W32(r_esp, 0x4265e4u); f_0044848a();
    /* 004265e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004265e7: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004265ea: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x4265efu); f_004259a0();
    /* 004265ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004265f1: je 0x42676d */ if (fZ) goto L_0042676d;
L_004265f7:; BB(0x004265f7);
    /* 004265f7: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 004265fd: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00426600: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x426605u); f_00448ca3();
    /* 00426605: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426607: je 0x426691 */ if (fZ) goto L_00426691;
L_0042660d:; BB(0x0042660d);
    /* 0042660d: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00426610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426611: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00426617: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0042661a: call 0x448e71 */ r_esp -= 4; W32(r_esp, 0x42661fu); f_00448e71();
    /* 0042661f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426622: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00426625: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00426628: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042662b: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042662e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00426631: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00426634: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426635: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00426638: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042663c: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042663f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426640: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x426645u); f_00429a59();
    /* 00426645: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426648: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042664b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042664e: add edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00426651: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00426654: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426657: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042665a: add ecx, dword ptr [eax + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042665d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426660: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426667: jne 0x42668c */ if (!fZ) goto L_0042668c;
L_00426669:; BB(0x00426669);
    /* 00426669: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042666b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042666d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042666f: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00426672: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426673: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426675: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426678: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0042667b: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x426680u); f_004259cd();
    /* 00426680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426681: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00426687: call 0x45cde1 */ r_esp -= 4; W32(r_esp, 0x42668cu); f_0045cde1();
L_0042668c:; BB(0x0042668c);
    /* 0042668c: jmp 0x42676b */ goto L_0042676b;
L_00426691:; BB(0x00426691);
    /* 00426691: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426698: jne 0x42676b */ if (!fZ) goto L_0042676b;
L_0042669e:; BB(0x0042669e);
    /* 0042669e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004266a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004266a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004266a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004266a6: cmp dword ptr [0x6f6a20], 0 */ {  u32 a = R32((u32)(0x6f6a20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004266ad: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004266b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004266b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004266b4: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004266b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004266b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004266ba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004266bd: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004266c0: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x4266c5u); f_004259cd();
    /* 004266c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004266c6: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004266cc: call 0x45cde1 */ r_esp -= 4; W32(r_esp, 0x4266d1u); f_0045cde1();
    /* 004266d1: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004266d5: jne 0x42676b */ if (!fZ) goto L_0042676b;
L_004266db:; BB(0x004266db);
    /* 004266db: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004266de: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004266e1: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004266e5: je 0x42676b */ if (fZ) goto L_0042676b;
L_004266eb:; BB(0x004266eb);
    /* 004266eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004266ed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004266f0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004266f3: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004266f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004266f7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004266fd: call 0x45c736 */ r_esp -= 4; W32(r_esp, 0x426702u); f_0045c736();
    /* 00426702: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426703: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00426709: call 0x45e662 */ r_esp -= 4; W32(r_esp, 0x42670eu); f_0045e662();
    /* 0042670e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426710: je 0x42672c */ if (fZ) goto L_0042672c;
L_00426712:; BB(0x00426712);
    /* 00426712: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426715: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00426718: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x42671du); f_004259cd();
    /* 0042671d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042671e: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00426724: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00426727: call 0x448ae7 */ r_esp -= 4; W32(r_esp, 0x42672cu); f_00448ae7();
L_0042672c:; BB(0x0042672c);
    /* 0042672c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042672f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00426732: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00426735: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426736: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0042673c: call 0x45c736 */ r_esp -= 4; W32(r_esp, 0x426741u); f_0045c736();
    /* 00426741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426742: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00426748: call 0x45e71c */ r_esp -= 4; W32(r_esp, 0x42674du); f_0045e71c();
    /* 0042674d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042674f: je 0x42676b */ if (fZ) goto L_0042676b;
L_00426751:; BB(0x00426751);
    /* 00426751: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426754: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00426757: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x42675cu); f_004259cd();
    /* 0042675c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042675d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00426763: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00426766: call 0x448b70 */ r_esp -= 4; W32(r_esp, 0x42676bu); f_00448b70();
L_0042676b:; BB(0x0042676b);
    /* 0042676b: jmp 0x4267a6 */ goto L_004267a6;
L_0042676d:; BB(0x0042676d);
    /* 0042676d: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426774: jne 0x4267a6 */ if (!fZ) goto L_004267a6;
L_00426776:; BB(0x00426776);
    /* 00426776: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426779: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042677c: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426780: je 0x4267a6 */ if (fZ) goto L_004267a6;
L_00426782:; BB(0x00426782);
    /* 00426782: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426785: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 00426788: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 0042678b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042678e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00426791: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00426794: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426795: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0042679b: call 0x45c475 */ r_esp -= 4; W32(r_esp, 0x4267a0u); f_0045c475();
    /* 004267a0: mov dword ptr [eax + 0x44], esi */ W32((u32)(r_eax+0x44u), r_esi);
    /* 004267a3: mov dword ptr [eax + 0x48], edi */ W32((u32)(r_eax+0x48u), r_edi);
L_004267a6:; BB(0x004267a6);
    /* 004267a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004267a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004267a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004267aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004267ab: ret 0xc */ FN_RET(0x00426561); r_esp += 16; return;
}

void f_004267ae(void) /* FUN_004267ae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004267ae);
    /* 004267ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004267af: mov ebp, esp */ r_ebp = r_esp;
    /* 004267b1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004267b4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004267b7: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004267ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004267bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004267be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004267bf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004267c2: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004267c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004267c6: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x4267cbu); f_00429a59();
    /* 004267cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004267ce: cmp dword ptr [ebp - 8], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004267d5: jl 0x4267e5 */ if ((fS!=fO)) goto L_004267e5;
L_004267d7:; BB(0x004267d7);
    /* 004267d7: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 004267de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004267e5:; BB(0x004267e5);
    /* 004267e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004267e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004267e9: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004267ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004267ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004267f0: call 0x426561 */ r_esp -= 4; W32(r_esp, 0x4267f5u); f_00426561();
    /* 004267f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004267f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004267f8: ret 4 */ FN_RET(0x004267ae); r_esp += 8; return;
}

void f_004267fb(void) /* FUN_004267fb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004267fb);
    /* 004267fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004267fc: mov ebp, esp */ r_ebp = r_esp;
    /* 004267fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004267ff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426802: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426805: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00426808: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0042680b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042680e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00426810: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00426813: mov esp, ebp */ r_esp = r_ebp;
    /* 00426815: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426816: ret 4 */ FN_RET(0x004267fb); r_esp += 8; return;
}

void f_00426819(void) /* FUN_00426819 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426819);
    /* 00426819: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042681a: mov ebp, esp */ r_ebp = r_esp;
    /* 0042681c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042681d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426820: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426823: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00426826: mov esp, ebp */ r_esp = r_ebp;
    /* 00426828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426829: ret  */ FN_RET(0x00426819); r_esp += 4; return;
}

void f_0042682a(void) /* FUN_0042682a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042682a);
    /* 0042682a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042682b: mov ebp, esp */ r_ebp = r_esp;
    /* 0042682d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042682e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426831: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426834: mov al, byte ptr [eax + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x10u))) & 0xffu);
    /* 00426837: mov esp, ebp */ r_esp = r_ebp;
    /* 00426839: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042683a: ret  */ FN_RET(0x0042682a); r_esp += 4; return;
}

void f_0042683b(void) /* FUN_0042683b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042683b);
    /* 0042683b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042683c: mov ebp, esp */ r_ebp = r_esp;
    /* 0042683e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042683f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426842: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426845: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x42684au); f_005e8590();
    /* 0042684a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042684d: mov dword ptr [eax], 0x63417c */ W32((u32)(r_eax), 0x63417cu);
    /* 00426853: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426856: mov dword ptr [ecx + 0x888], 0 */ W32((u32)(r_ecx+0x888u), 0x0u);
    /* 00426860: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426863: mov esp, ebp */ r_esp = r_ebp;
    /* 00426865: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426866: ret  */ FN_RET(0x0042683b); r_esp += 4; return;
}

void f_00426867(void) /* FUN_00426867 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426867);
    /* 00426867: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426868: mov ebp, esp */ r_ebp = r_esp;
    /* 0042686a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042686d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426870: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426873: mov dword ptr [eax], 0x63417c */ W32((u32)(r_eax), 0x63417cu);
    /* 00426879: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042687c: cmp dword ptr [ecx + 0x888], 0 */ {  u32 a = R32((u32)(r_ecx+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426883: je 0x4268c2 */ if (fZ) goto L_004268c2;
L_00426885:; BB(0x00426885);
    /* 00426885: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426888: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 0042688e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00426891: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426897: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042689b: je 0x4268ae */ if (fZ) goto L_004268ae;
L_0042689d:; BB(0x0042689d);
    /* 0042689d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042689f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004268a2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004268a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004268a7: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4268a9u); call_ind(t); }
    /* 004268a9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004268ac: jmp 0x4268b5 */ goto L_004268b5;
L_004268ae:; BB(0x004268ae);
    /* 004268ae: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004268b5:; BB(0x004268b5);
    /* 004268b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004268b8: mov dword ptr [ecx + 0x888], 0 */ W32((u32)(r_ecx+0x888u), 0x0u);
L_004268c2:; BB(0x004268c2);
    /* 004268c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004268c5: call 0x5e8680 */ r_esp -= 4; W32(r_esp, 0x4268cau); f_005e8680();
    /* 004268ca: mov esp, ebp */ r_esp = r_ebp;
    /* 004268cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004268cd: ret  */ FN_RET(0x00426867); r_esp += 4; return;
}

void f_004268ce(void) /* FUN_004268ce */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004268ce);
    /* 004268ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004268cf: mov ebp, esp */ r_ebp = r_esp;
    /* 004268d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004268d4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004268d7: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004268db: mov byte ptr [ebp - 3], 0 */ W8((u32)(r_ebp+0xfffffffdu), 0x0u);
    /* 004268df: mov byte ptr [ebp - 2], 0 */ W8((u32)(r_ebp+0xfffffffeu), 0x0u);
    /* 004268e3: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 004268e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004268ea: call 0x5e4fdf */ r_esp -= 4; W32(r_esp, 0x4268efu); f_005e4fdf();
    /* 004268ef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004268f2: cmp dword ptr [eax + 0x888], 0 */ {  u32 a = R32((u32)(r_eax+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004268f9: jne 0x426994 */ if (!fZ) goto L_00426994;
L_004268ff:; BB(0x004268ff);
    /* 004268ff: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00426901: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x426906u); f_0048ab58();
    /* 00426906: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426909: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042690c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426910: je 0x42691f */ if (fZ) goto L_0042691f;
L_00426912:; BB(0x00426912);
    /* 00426912: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426915: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x42691au); f_005e4bb0();
    /* 0042691a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042691d: jmp 0x426926 */ goto L_00426926;
L_0042691f:; BB(0x0042691f);
    /* 0042691f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00426926:; BB(0x00426926);
    /* 00426926: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426929: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042692c: mov dword ptr [ecx + 0x888], edx */ W32((u32)(r_ecx+0x888u), r_edx);
    /* 00426932: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426935: mov ecx, dword ptr [eax + 0x888] */ r_ecx = R32((u32)(r_eax+0x888u));
    /* 0042693b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042693e: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 00426944: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426946: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x426949u); call_ind(t); }
    /* 00426949: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042694c: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x426951u); f_005d9883();
    /* 00426951: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00426954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426955: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426958: mov ecx, dword ptr [eax + 0x888] */ r_ecx = R32((u32)(r_eax+0x888u));
    /* 0042695e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426961: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 00426967: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426969: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x42696cu); call_ind(t); }
    /* 0042696c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042696e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426970: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426972: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426975: mov ecx, dword ptr [eax + 0x888] */ r_ecx = R32((u32)(r_eax+0x888u));
    /* 0042697b: call 0x5e4e52 */ r_esp -= 4; W32(r_esp, 0x426980u); f_005e4e52();
    /* 00426980: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426982: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426984: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426986: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426989: mov ecx, dword ptr [ecx + 0x888] */ r_ecx = R32((u32)(r_ecx+0x888u));
    /* 0042698f: call 0x5e4e7f */ r_esp -= 4; W32(r_esp, 0x426994u); f_005e4e7f();
L_00426994:; BB(0x00426994);
    /* 00426994: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426997: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x42699cu); f_005d98da();
    /* 0042699c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042699d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004269a0: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x4269a5u); f_005d98c3();
    /* 004269a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004269a6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004269a9: mov ecx, dword ptr [edx + 0x888] */ r_ecx = R32((u32)(r_edx+0x888u));
    /* 004269af: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004269b2: mov edx, dword ptr [eax + 0x888] */ r_edx = R32((u32)(r_eax+0x888u));
    /* 004269b8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004269ba: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x4269bdu); call_ind(t); }
    /* 004269bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004269c0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004269c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004269c5: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x4269c8u); call_ind(t); }
    /* 004269c8: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004269cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004269cc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004269cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004269d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004269d4: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x4269d7u); call_ind(t); }
    /* 004269d7: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004269da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004269db: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004269de: mov ecx, dword ptr [eax + 0x888] */ r_ecx = R32((u32)(r_eax+0x888u));
    /* 004269e4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004269e7: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 004269ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004269ef: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4269f2u); call_ind(t); }
    /* 004269f2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004269f5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004269f7: mov cl, byte ptr [eax + 0x868] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x868u))) & 0xffu);
    /* 004269fd: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426a03: jne 0x426a1c */ if (!fZ) goto L_00426a1c;
L_00426a05:; BB(0x00426a05);
    /* 00426a05: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426a08: mov ecx, dword ptr [edx + 0x888] */ r_ecx = R32((u32)(r_edx+0x888u));
    /* 00426a0e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426a11: mov edx, dword ptr [eax + 0x888] */ r_edx = R32((u32)(r_eax+0x888u));
    /* 00426a17: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00426a19: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x426a1cu); call_ind(t); }
L_00426a1c:; BB(0x00426a1c);
    /* 00426a1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00426a1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426a1f: ret  */ FN_RET(0x004268ce); r_esp += 4; return;
}

void f_00426a20(void) /* FUN_00426a20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426a20);
    /* 00426a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00426a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426a27: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00426a2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a2f: call 0x426abe */ r_esp -= 4; W32(r_esp, 0x426a34u); f_00426abe();
    /* 00426a34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a37: call 0x5e4faf */ r_esp -= 4; W32(r_esp, 0x426a3cu); f_005e4faf();
    /* 00426a3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a3f: cmp dword ptr [eax + 0x888], 0 */ {  u32 a = R32((u32)(r_eax+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426a46: je 0x426a6c */ if (fZ) goto L_00426a6c;
L_00426a48:; BB(0x00426a48);
    /* 00426a48: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00426a4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a50: call 0x426abe */ r_esp -= 4; W32(r_esp, 0x426a55u); f_00426abe();
    /* 00426a55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a58: mov ecx, dword ptr [ecx + 0x888] */ r_ecx = R32((u32)(r_ecx+0x888u));
    /* 00426a5e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a61: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 00426a67: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426a69: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x426a6cu); call_ind(t); }
L_00426a6c:; BB(0x00426a6c);
    /* 00426a6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00426a6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426a6f: ret  */ FN_RET(0x00426a20); r_esp += 4; return;
}

void f_00426a70(void) /* FUN_00426a70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426a70);
    /* 00426a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00426a73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426a74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426a77: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00426a7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426a7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426a7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426a7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a82: call 0x5e4f55 */ r_esp -= 4; W32(r_esp, 0x426a87u); f_005e4f55();
    /* 00426a87: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a8a: cmp dword ptr [edx + 0x888], 0 */ {  u32 a = R32((u32)(r_edx+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426a91: je 0x426ab8 */ if (fZ) goto L_00426ab8;
L_00426a93:; BB(0x00426a93);
    /* 00426a93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00426a96: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426a99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426a9a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426a9d: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426aa0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426aa1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426aa4: mov ecx, dword ptr [edx + 0x888] */ r_ecx = R32((u32)(r_edx+0x888u));
    /* 00426aaa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426aad: mov edx, dword ptr [eax + 0x888] */ r_edx = R32((u32)(r_eax+0x888u));
    /* 00426ab3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00426ab5: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x426ab8u); call_ind(t); }
L_00426ab8:; BB(0x00426ab8);
    /* 00426ab8: mov esp, ebp */ r_esp = r_ebp;
    /* 00426aba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426abb: ret 8 */ FN_RET(0x00426a70); r_esp += 12; return;
}

void f_00426abe(void) /* FUN_00426abe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426abe);
    /* 00426abe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426abf: mov ebp, esp */ r_ebp = r_esp;
    /* 00426ac1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426ac2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426ac5: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00426ac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426ac9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426acc: call 0x5e9b70 */ r_esp -= 4; W32(r_esp, 0x426ad1u); f_005e9b70();
    /* 00426ad1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426ad4: cmp dword ptr [ecx + 0x888], 0 */ {  u32 a = R32((u32)(r_ecx+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426adb: je 0x426b2a */ if (fZ) goto L_00426b2a;
L_00426add:; BB(0x00426add);
    /* 00426add: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426ae0: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x426ae5u); f_005d9690();
    /* 00426ae5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426ae7: je 0x426b2a */ if (fZ) goto L_00426b2a;
L_00426ae9:; BB(0x00426ae9);
    /* 00426ae9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00426aec: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00426af2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426af8: jge 0x426b13 */ if ((fS==fO)) goto L_00426b13;
L_00426afa:; BB(0x00426afa);
    /* 00426afa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426afd: mov ecx, dword ptr [eax + 0x888] */ r_ecx = R32((u32)(r_eax+0x888u));
    /* 00426b03: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426b06: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 00426b0c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426b0e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x426b11u); call_ind(t); }
    /* 00426b11: jmp 0x426b2a */ goto L_00426b2a;
L_00426b13:; BB(0x00426b13);
    /* 00426b13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426b16: mov ecx, dword ptr [eax + 0x888] */ r_ecx = R32((u32)(r_eax+0x888u));
    /* 00426b1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426b1f: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 00426b25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426b27: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x426b2au); call_ind(t); }
L_00426b2a:; BB(0x00426b2a);
    /* 00426b2a: mov esp, ebp */ r_esp = r_ebp;
    /* 00426b2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426b2d: ret 4 */ FN_RET(0x00426abe); r_esp += 8; return;
}

void f_00426b30(void) /* FUN_00426b30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426b30);
    /* 00426b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00426b33: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426b36: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00426b39: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426b3c: call 0x5d94ef */ r_esp -= 4; W32(r_esp, 0x426b41u); f_005d94ef();
    /* 00426b41: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426b44: mov dword ptr [eax], 0x6341cc */ W32((u32)(r_eax), 0x6341ccu);
    /* 00426b4a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426b4d: mov dword ptr [ecx + 0xd8], 0xffffffff */ W32((u32)(r_ecx+0xd8u), 0xffffffffu);
    /* 00426b57: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426b5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426b5d: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00426b60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426b67: jmp 0x426b72 */ goto L_00426b72;
L_00426b69:; BB(0x00426b69);
    /* 00426b69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426b6c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426b6f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00426b72:; BB(0x00426b72);
    /* 00426b72: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426b76: jge 0x426b88 */ if ((fS==fO)) goto L_00426b88;
L_00426b78:; BB(0x00426b78);
    /* 00426b78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426b7b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426b7e: mov dword ptr [eax + edx*4 + 0x30], 0 */ W32((u32)(r_eax+r_edx*4+0x30u), 0x0u);
    /* 00426b86: jmp 0x426b69 */ goto L_00426b69;
L_00426b88:; BB(0x00426b88);
    /* 00426b88: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426b8b: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 00426b95: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426b98: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 00426ba2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426ba5: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 00426baf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426bb2: mov dword ptr [ecx + 0xb8], 0xfffffffc */ W32((u32)(r_ecx+0xb8u), 0xfffffffcu);
    /* 00426bbc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426bbf: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00426bc2: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x426bc7u); f_005ea54c();
    /* 00426bc7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426bca: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 00426bd0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426bd3: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00426bd6: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x426bdbu); f_005ea57d();
    /* 00426bdb: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00426bde: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426be1: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 00426be7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426bea: mov dword ptr [edx + 0xa8], 0 */ W32((u32)(r_edx+0xa8u), 0x0u);
    /* 00426bf4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426bf7: mov dword ptr [eax + 0xd4], 1 */ W32((u32)(r_eax+0xd4u), 0x1u);
    /* 00426c01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426c03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426c05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426c08: call 0x426f4c */ r_esp -= 4; W32(r_esp, 0x426c0du); f_00426f4c();
    /* 00426c0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426c0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426c11: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x426c16u); f_004298bc();
    /* 00426c16: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426c19: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00426c1c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00426c1f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426c22: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426c25: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00426c2b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426c2e: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 00426c34: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426c37: mov esp, ebp */ r_esp = r_ebp;
    /* 00426c39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426c3a: ret 4 */ FN_RET(0x00426b30); r_esp += 8; return;
}

void f_00426c3d(void) /* FUN_00426c3d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426c3d);
    /* 00426c3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426c3e: mov ebp, esp */ r_ebp = r_esp;
    /* 00426c40: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426c43: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426c46: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426c49: mov dword ptr [eax], 0x6341cc */ W32((u32)(r_eax), 0x6341ccu);
    /* 00426c4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426c52: call 0x42727e */ r_esp -= 4; W32(r_esp, 0x426c57u); f_0042727e();
    /* 00426c57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426c5a: cmp dword ptr [ecx + 0xa8], 0 */ {  u32 a = R32((u32)(r_ecx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426c61: je 0x426ca0 */ if (fZ) goto L_00426ca0;
L_00426c63:; BB(0x00426c63);
    /* 00426c63: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426c66: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00426c6c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00426c6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426c72: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426c75: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426c79: je 0x426c8c */ if (fZ) goto L_00426c8c;
L_00426c7b:; BB(0x00426c7b);
    /* 00426c7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426c7d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426c80: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00426c82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426c85: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x426c87u); call_ind(t); }
    /* 00426c87: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00426c8a: jmp 0x426c93 */ goto L_00426c93;
L_00426c8c:; BB(0x00426c8c);
    /* 00426c8c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00426c93:; BB(0x00426c93);
    /* 00426c93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426c96: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
L_00426ca0:; BB(0x00426ca0);
    /* 00426ca0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426ca3: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 00426caa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426cad: call 0x5d9576 */ r_esp -= 4; W32(r_esp, 0x426cb2u); f_005d9576();
    /* 00426cb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00426cb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426cb5: ret  */ FN_RET(0x00426c3d); r_esp += 4; return;
}

void f_00426cb6(void) /* FUN_00426cb6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426cb6);
    /* 00426cb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426cb7: mov ebp, esp */ r_ebp = r_esp;
    /* 00426cb9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426cbc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426cbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426cc2: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426cc6: je 0x426cd0 */ if (fZ) goto L_00426cd0;
L_00426cc8:; BB(0x00426cc8);
    /* 00426cc8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426ccb: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00426cce: jmp 0x426d2d */ goto L_00426d2d;
L_00426cd0:; BB(0x00426cd0);
    /* 00426cd0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00426cd3: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00426cd6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00426cd9: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426cdd: je 0x426ce1 */ if (fZ) goto L_00426ce1;
L_00426cdf:; BB(0x00426cdf);
    /* 00426cdf: jmp 0x426d27 */ goto L_00426d27;
L_00426ce1:; BB(0x00426ce1);
    /* 00426ce1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426ce4: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00426ce7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426ce8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426ceb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00426cee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426cef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426cf2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00426cf4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426cf7: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x426cfau); call_ind(t); }
    /* 00426cfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426cfc: je 0x426d1f */ if (fZ) goto L_00426d1f;
L_00426cfe:; BB(0x00426cfe);
    /* 00426cfe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d01: add ecx, 0xc4 */ {  u32 a = r_ecx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426d07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426d08: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d0b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00426d0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d10: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x426d13u); call_ind(t); }
    /* 00426d13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426d16: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 00426d1d: jmp 0x426d27 */ goto L_00426d27;
L_00426d1f:; BB(0x00426d1f);
    /* 00426d1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d22: call 0x427980 */ r_esp -= 4; W32(r_esp, 0x426d27u); f_00427980();
L_00426d27:; BB(0x00426d27);
    /* 00426d27: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00426d2a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
L_00426d2d:; BB(0x00426d2d);
    /* 00426d2d: mov esp, ebp */ r_esp = r_ebp;
    /* 00426d2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426d30: ret 4 */ FN_RET(0x00426cb6); r_esp += 8; return;
}

void f_00426d33(void) /* FUN_00426d33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426d33);
    /* 00426d33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426d34: mov ebp, esp */ r_ebp = r_esp;
    /* 00426d36: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426d39: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00426d3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426d43: jmp 0x426d4e */ goto L_00426d4e;
L_00426d45:; BB(0x00426d45);
    /* 00426d45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d48: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426d4b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00426d4e:; BB(0x00426d4e);
    /* 00426d4e: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426d52: jge 0x426d95 */ if ((fS==fO)) goto L_00426d95;
L_00426d54:; BB(0x00426d54);
    /* 00426d54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d57: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426d5a: cmp dword ptr [edx + ecx*4 + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426d5f: je 0x426d8f */ if (fZ) goto L_00426d8f;
L_00426d61:; BB(0x00426d61);
    /* 00426d61: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00426d64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426d65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426d68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426d69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d6c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426d6f: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00426d73: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d76: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426d79: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00426d7d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00426d7f: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x426d82u); call_ind(t); }
    /* 00426d82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426d84: je 0x426d8d */ if (fZ) goto L_00426d8d;
L_00426d86:; BB(0x00426d86);
    /* 00426d86: mov eax, 1 */ r_eax = 0x1u;
    /* 00426d8b: jmp 0x426d97 */ goto L_00426d97;
L_00426d8d:; BB(0x00426d8d);
    /* 00426d8d: jmp 0x426d93 */ goto L_00426d93;
L_00426d8f:; BB(0x00426d8f);
    /* 00426d8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00426d91: jmp 0x426d97 */ goto L_00426d97;
L_00426d93:; BB(0x00426d93);
    /* 00426d93: jmp 0x426d45 */ goto L_00426d45;
L_00426d95:; BB(0x00426d95);
    /* 00426d95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00426d97:; BB(0x00426d97);
    /* 00426d97: mov esp, ebp */ r_esp = r_ebp;
    /* 00426d99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426d9a: ret 8 */ FN_RET(0x00426d33); r_esp += 12; return;
}

void f_00426d9d(void) /* FUN_00426d9d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426d9d);
    /* 00426d9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426d9e: mov ebp, esp */ r_ebp = r_esp;
    /* 00426da0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426da3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00426da6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00426dad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426db4: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00426db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426db8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426dbb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00426dbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426dc0: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x426dc3u); call_ind(t); }
    /* 00426dc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426dc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426dc7: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x426dccu); f_004298bc();
    /* 00426dcc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426dcf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00426dd2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00426dd5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426dd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426ddb: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 00426de1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426de4: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 00426dea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426ded: mov dword ptr [eax + 0xd4], 0xffffffff */ W32((u32)(r_eax+0xd4u), 0xffffffffu);
    /* 00426df7: mov esp, ebp */ r_esp = r_ebp;
    /* 00426df9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426dfa: ret  */ FN_RET(0x00426d9d); r_esp += 4; return;
}

void f_00426dfb(void) /* FUN_00426dfb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426dfb);
    /* 00426dfb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426dfc: mov ebp, esp */ r_ebp = r_esp;
    /* 00426dfe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426dff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426e02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426e05: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00426e0b: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00426e11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426e14: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 00426e1a: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 00426e20: mov esp, ebp */ r_esp = r_ebp;
    /* 00426e22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426e23: ret  */ FN_RET(0x00426dfb); r_esp += 4; return;
}

void f_00426e24(void) /* FUN_00426e24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426e24);
    /* 00426e24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426e25: mov ebp, esp */ r_ebp = r_esp;
    /* 00426e27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426e28: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426e2b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426e2e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00426e30: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00426e33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426e36: mov dword ptr [eax + 0xc4], ecx */ W32((u32)(r_eax+0xc4u), r_ecx);
    /* 00426e3c: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 00426e42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426e45: cmp dword ptr [ecx + 0xc4], 0 */ {  u32 a = R32((u32)(r_ecx+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426e4c: jg 0x426e5a */ if ((!fZ&&fS==fO)) goto L_00426e5a;
L_00426e4e:; BB(0x00426e4e);
    /* 00426e4e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426e51: cmp dword ptr [edx + 0xc8], 0 */ {  u32 a = R32((u32)(r_edx+0xc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426e58: jle 0x426eca */ if ((fZ||fS!=fO)) goto L_00426eca;
L_00426e5a:; BB(0x00426e5a);
    /* 00426e5a: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00426e5f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00426e62: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00426e68: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00426e6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426e6d: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x426e70u); call_ind(t); }
    /* 00426e70: mov ecx, eax */ r_ecx = r_eax;
    /* 00426e72: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x426e77u); f_004259f1();
    /* 00426e77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426e7a: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 00426e80: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00426e82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426e84: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00426e86: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426e8b: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00426e91: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00426e94: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00426e97: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x426e9cu); f_005e8389();
    /* 00426e9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426e9f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00426ea1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426ea4: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x426ea7u); call_ind(t); }
    /* 00426ea7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426eaa: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426eb1: je 0x426ec8 */ if (fZ) goto L_00426ec8;
L_00426eb3:; BB(0x00426eb3);
    /* 00426eb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426eb6: add ecx, 0xc4 */ {  u32 a = r_ecx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426ebc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426ebd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426ec0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00426ec2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426ec5: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x426ec8u); call_ind(t); }
L_00426ec8:; BB(0x00426ec8);
    /* 00426ec8: jmp 0x426eea */ goto L_00426eea;
L_00426eca:; BB(0x00426eca);
    /* 00426eca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426ecd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00426ecf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426ed2: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x426ed5u); call_ind(t); }
    /* 00426ed5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426ed8: call 0x427980 */ r_esp -= 4; W32(r_esp, 0x426eddu); f_00427980();
    /* 00426edd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426ee0: mov dword ptr [eax + 0xd8], 0xffffffff */ W32((u32)(r_eax+0xd8u), 0xffffffffu);
L_00426eea:; BB(0x00426eea);
    /* 00426eea: mov esp, ebp */ r_esp = r_ebp;
    /* 00426eec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426eed: ret 4 */ FN_RET(0x00426e24); r_esp += 8; return;
}

void f_00426ef0(void) /* FUN_00426ef0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426ef0);
    /* 00426ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00426ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426ef7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426efa: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00426f00: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00426f06: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426f09: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00426f0b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00426f0e: mov esp, ebp */ r_esp = r_ebp;
    /* 00426f10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426f11: ret 4 */ FN_RET(0x00426ef0); r_esp += 8; return;
}

void f_00426f14(void) /* FUN_00426f14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426f14);
    /* 00426f14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426f15: mov ebp, esp */ r_ebp = r_esp;
    /* 00426f17: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426f1a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426f1d: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00426f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426f21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426f24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426f25: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426f28: add edx, 0xc4 */ {  u32 a = r_edx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00426f2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426f2f: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x426f34u); f_00429a59();
    /* 00426f34: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426f37: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00426f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426f3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426f3e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00426f40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426f43: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x426f46u); call_ind(t); }
    /* 00426f46: mov esp, ebp */ r_esp = r_ebp;
    /* 00426f48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426f49: ret 4 */ FN_RET(0x00426f14); r_esp += 8; return;
}

void f_00426f4c(void) /* FUN_00426f4c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426f4c);
    /* 00426f4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426f4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00426f4f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426f52: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426f55: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426f58: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00426f5b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00426f5e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426f61: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00426f64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426f65: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426f68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426f6a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426f6d: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x426f70u); call_ind(t); }
    /* 00426f70: mov esp, ebp */ r_esp = r_ebp;
    /* 00426f72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426f73: ret 8 */ FN_RET(0x00426f4c); r_esp += 12; return;
}

void f_00426f76(void) /* FUN_00426f76 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426f76);
    /* 00426f76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426f77: mov ebp, esp */ r_ebp = r_esp;
    /* 00426f79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426f7a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426f7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426f80: mov eax, dword ptr [eax + 0xc4] */ r_eax = R32((u32)(r_eax+0xc4u));
    /* 00426f86: mov esp, ebp */ r_esp = r_ebp;
    /* 00426f88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426f89: ret  */ FN_RET(0x00426f76); r_esp += 4; return;
}

void f_00426f8a(void) /* FUN_00426f8a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426f8a);
    /* 00426f8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426f8b: mov ebp, esp */ r_ebp = r_esp;
    /* 00426f8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426f8e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426f91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426f94: mov al, byte ptr [eax + 0xc8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xc8u))) & 0xffu);
    /* 00426f9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00426f9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426f9d: ret  */ FN_RET(0x00426f8a); r_esp += 4; return;
}

void f_00426f9e(void) /* FUN_00426f9e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426f9e);
    /* 00426f9e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426f9f: mov ebp, esp */ r_ebp = r_esp;
    /* 00426fa1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426fa2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426fa5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426fa8: mov eax, dword ptr [eax + 0xd8] */ r_eax = R32((u32)(r_eax+0xd8u));
    /* 00426fae: mov esp, ebp */ r_esp = r_ebp;
    /* 00426fb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426fb1: ret  */ FN_RET(0x00426f9e); r_esp += 4; return;
}

void f_00426fb2(void) /* FUN_00426fb2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426fb2);
    /* 00426fb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426fb3: mov ebp, esp */ r_ebp = r_esp;
    /* 00426fb5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426fb8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426fbb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00426fc2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00426fc9: jmp 0x426fd4 */ goto L_00426fd4;
L_00426fcb:; BB(0x00426fcb);
    /* 00426fcb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426fce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426fd1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00426fd4:; BB(0x00426fd4);
    /* 00426fd4: cmp dword ptr [ebp - 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426fd8: jge 0x426ff1 */ if ((fS==fO)) goto L_00426ff1;
L_00426fda:; BB(0x00426fda);
    /* 00426fda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426fdd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426fe0: cmp dword ptr [edx + ecx*4 + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426fe5: jne 0x426fe9 */ if (!fZ) goto L_00426fe9;
L_00426fe7:; BB(0x00426fe7);
    /* 00426fe7: jmp 0x426ff1 */ goto L_00426ff1;
L_00426fe9:; BB(0x00426fe9);
    /* 00426fe9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426fec: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00426fef: jmp 0x426fcb */ goto L_00426fcb;
L_00426ff1:; BB(0x00426ff1);
    /* 00426ff1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426ff4: mov esp, ebp */ r_esp = r_ebp;
    /* 00426ff6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426ff7: ret  */ FN_RET(0x00426fb2); r_esp += 4; return;
}

void f_00426ff8(void) /* FUN_00426ff8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426ff8);
    /* 00426ff8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426ff9: mov ebp, esp */ r_ebp = r_esp;
    /* 00426ffb: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426ffe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00426fff: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00427002: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00427009: mov dword ptr [ebp - 0x54], 0x5f5e100 */ W32((u32)(r_ebp+0xffffffacu), 0x5f5e100u);
    /* 00427010: mov dword ptr [ebp - 0x50], 0x989680 */ W32((u32)(r_ebp+0xffffffb0u), 0x989680u);
    /* 00427017: mov dword ptr [ebp - 0x4c], 0xf4240 */ W32((u32)(r_ebp+0xffffffb4u), 0xf4240u);
    /* 0042701e: mov dword ptr [ebp - 0x48], 0x7a120 */ W32((u32)(r_ebp+0xffffffb8u), 0x7a120u);
    /* 00427025: mov dword ptr [ebp - 0x44], 0x186a0 */ W32((u32)(r_ebp+0xffffffbcu), 0x186a0u);
    /* 0042702c: mov dword ptr [ebp - 0x40], 0xc350 */ W32((u32)(r_ebp+0xffffffc0u), 0xc350u);
    /* 00427033: mov dword ptr [ebp - 0x3c], 0x61a8 */ W32((u32)(r_ebp+0xffffffc4u), 0x61a8u);
    /* 0042703a: mov dword ptr [ebp - 0x38], 0x2710 */ W32((u32)(r_ebp+0xffffffc8u), 0x2710u);
    /* 00427041: mov dword ptr [ebp - 0x34], 0x1388 */ W32((u32)(r_ebp+0xffffffccu), 0x1388u);
    /* 00427048: mov dword ptr [ebp - 0x30], 0x3e8 */ W32((u32)(r_ebp+0xffffffd0u), 0x3e8u);
    /* 0042704f: mov dword ptr [ebp - 0x2c], 0x1f4 */ W32((u32)(r_ebp+0xffffffd4u), 0x1f4u);
    /* 00427056: mov dword ptr [ebp - 0x28], 0x64 */ W32((u32)(r_ebp+0xffffffd8u), 0x64u);
    /* 0042705d: mov dword ptr [ebp - 0x24], 0x32 */ W32((u32)(r_ebp+0xffffffdcu), 0x32u);
    /* 00427064: mov dword ptr [ebp - 0x20], 0x19 */ W32((u32)(r_ebp+0xffffffe0u), 0x19u);
    /* 0042706b: mov dword ptr [ebp - 0x1c], 0xa */ W32((u32)(r_ebp+0xffffffe4u), 0xau);
    /* 00427072: mov dword ptr [ebp - 0x18], 5 */ W32((u32)(r_ebp+0xffffffe8u), 0x5u);
    /* 00427079: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00427080: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00427087: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0042708a: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00427090: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00427093: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00427096: mov al, byte ptr [edx + 0xc8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xc8u))) & 0xffu);
    /* 0042709c: mov byte ptr [ebp - 4], al */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_eax);
    /* 0042709f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004270a2: mov edx, dword ptr [ebp + ecx*4 - 0x54] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffacu));
    /* 004270a6: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 004270a9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004270b0: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 004270b7: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004270ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004270bc: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004270bf: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x4270c2u); call_ind(t); }
    /* 004270c2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004270c6: jne 0x4270cd */ if (!fZ) goto L_004270cd;
L_004270c8:; BB(0x004270c8);
    /* 004270c8: jmp 0x427279 */ goto L_00427279;
L_004270cd:; BB(0x004270cd);
    /* 004270cd: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004270d0: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 004270d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004270d7: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 004270dd: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004270e0: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004270e5: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004270e8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004270ea: call dword ptr [eax + 0x98] */ { u32 t = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, 0x4270f0u); call_ind(t); }
    /* 004270f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004270f2: je 0x4270f9 */ if (fZ) goto L_004270f9;
L_004270f4:; BB(0x004270f4);
    /* 004270f4: jmp 0x427279 */ goto L_00427279;
L_004270f9:; BB(0x004270f9);
    /* 004270f9: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004270fd: jle 0x427279 */ if ((fZ||fS!=fO)) goto L_00427279;
L_00427103:; BB(0x00427103);
    /* 00427103: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427106: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00427107: idiv dword ptr [ebp - 0x60] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffa0u)); if (!d) UNSUP(0x00427107, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00427107, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0042710a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0042710d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427110: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00427111: idiv dword ptr [ebp - 0x60] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffa0u)); if (!d) UNSUP(0x00427111, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00427111, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00427114: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00427117: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0042711e: jmp 0x427129 */ goto L_00427129;
L_00427120:; BB(0x00427120);
    /* 00427120: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00427123: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00427126: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
L_00427129:; BB(0x00427129);
    /* 00427129: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0042712c: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042712f: jge 0x427261 */ if ((fS==fO)) goto L_00427261;
L_00427135:; BB(0x00427135);
    /* 00427135: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0042713a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x42713fu); f_0048ab58();
    /* 0042713f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427142: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00427145: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427149: je 0x427158 */ if (fZ) goto L_00427158;
L_0042714b:; BB(0x0042714b);
    /* 0042714b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0042714e: call 0x5d4d90 */ r_esp -= 4; W32(r_esp, 0x427153u); f_005d4d90();
    /* 00427153: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00427156: jmp 0x42715f */ goto L_0042715f;
L_00427158:; BB(0x00427158);
    /* 00427158: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0042715f:; BB(0x0042715f);
    /* 0042715f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00427162: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00427165: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00427168: mov dword ptr [ecx + eax*4 + 0x30], edx */ W32((u32)(r_ecx+r_eax*4+0x30u), r_edx);
    /* 0042716c: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0042716f: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00427175: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427176: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00427179: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0042717c: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00427180: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x427185u); f_005ea0c3();
    /* 00427185: mov esi, 0x10 */ r_esi = 0x10u;
    /* 0042718a: sub esi, dword ptr [ebp - 0x64] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0042718d: imul esi, esi, 3 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00427190: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00427192: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x427197u); f_0060ee31();
    /* 00427197: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042719a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042719c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042719d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004271a0: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004271a3: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 004271a7: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4271acu); f_005ea1cf();
    /* 004271ac: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004271af: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004271b2: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 004271b6: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004271b9: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004271bc: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 004271c0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004271c2: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4271c5u); call_ind(t); }
    /* 004271c5: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004271c8: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004271cb: imul edx, dword ptr [ecx + 0xb8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0xb8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004271d2: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004271d5: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 004271db: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004271dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004271de: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004271e1: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 004271e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004271e8: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004271eb: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004271ee: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 004271f2: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004271f5: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004271f8: mov eax, dword ptr [edx + eax*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_eax*4+0x30u));
    /* 004271fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004271fe: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x427201u); call_ind(t); }
    /* 00427201: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00427204: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427207: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427208: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0042720b: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0042720e: mov ecx, dword ptr [edx + ecx*4 + 0x30] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 00427212: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00427215: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00427218: mov eax, dword ptr [edx + eax*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_eax*4+0x30u));
    /* 0042721c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042721e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x427221u); call_ind(t); }
    /* 00427221: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427223: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00427226: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00427229: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 0042722d: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x427232u); f_005ea514();
    /* 00427232: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00427235: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00427238: mov ecx, dword ptr [eax + edx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0042723c: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0042723f: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00427242: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 00427246: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00427248: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x42724bu); call_ind(t); }
    /* 0042724b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0042724e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00427251: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00427254: cmp dword ptr [ebp - 0x58], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427258: jne 0x42725c */ if (!fZ) goto L_0042725c;
L_0042725a:; BB(0x0042725a);
    /* 0042725a: jmp 0x427279 */ goto L_00427279;
L_0042725c:; BB(0x0042725c);
    /* 0042725c: jmp 0x427120 */ goto L_00427120;
L_00427261:; BB(0x00427261);
    /* 00427261: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00427264: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00427267: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0042726a: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0042726d: mov ecx, dword ptr [ebp + eax*4 - 0x54] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffacu));
    /* 00427271: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00427274: jmp 0x4270f9 */ goto L_004270f9;
L_00427279:; BB(0x00427279);
    /* 00427279: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042727a: mov esp, ebp */ r_esp = r_ebp;
    /* 0042727c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042727d: ret  */ FN_RET(0x00426ff8); r_esp += 4; return;
}

void f_0042727e(void) /* FUN_0042727e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042727e);
    /* 0042727e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042727f: mov ebp, esp */ r_ebp = r_esp;
    /* 00427281: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427284: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00427287: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042728e: jmp 0x427299 */ goto L_00427299;
L_00427290:; BB(0x00427290);
    /* 00427290: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427293: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427296: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00427299:; BB(0x00427299);
    /* 00427299: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042729d: jge 0x427306 */ if ((fS==fO)) goto L_00427306;
L_0042729f:; BB(0x0042729f);
    /* 0042729f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004272a2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004272a5: cmp dword ptr [edx + ecx*4 + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004272aa: je 0x427304 */ if (fZ) goto L_00427304;
L_004272ac:; BB(0x004272ac);
    /* 004272ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004272af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004272b2: mov ecx, dword ptr [ecx + eax*4 + 0x30] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x30u));
    /* 004272b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004272b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004272bc: mov edx, dword ptr [eax + edx*4 + 0x30] */ r_edx = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 004272c0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004272c2: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4272c5u); call_ind(t); }
    /* 004272c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004272c8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004272cb: mov eax, dword ptr [edx + ecx*4 + 0x30] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x30u));
    /* 004272cf: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004272d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004272d5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004272d8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004272dc: je 0x4272ef */ if (fZ) goto L_004272ef;
L_004272de:; BB(0x004272de);
    /* 004272de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004272e0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004272e3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004272e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004272e8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4272eau); call_ind(t); }
    /* 004272ea: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004272ed: jmp 0x4272f6 */ goto L_004272f6;
L_004272ef:; BB(0x004272ef);
    /* 004272ef: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_004272f6:; BB(0x004272f6);
    /* 004272f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004272f9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004272fc: mov dword ptr [edx + ecx*4 + 0x30], 0 */ W32((u32)(r_edx+r_ecx*4+0x30u), 0x0u);
L_00427304:; BB(0x00427304);
    /* 00427304: jmp 0x427290 */ goto L_00427290;
L_00427306:; BB(0x00427306);
    /* 00427306: mov esp, ebp */ r_esp = r_ebp;
    /* 00427308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427309: ret  */ FN_RET(0x0042727e); r_esp += 4; return;
}

void f_0042730a(void) /* FUN_0042730a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042730a);
    /* 0042730a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042730b: mov ebp, esp */ r_ebp = r_esp;
    /* 0042730d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042730e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427311: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427314: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427317: mov dword ptr [eax + 0xdc], ecx */ W32((u32)(r_eax+0xdcu), r_ecx);
    /* 0042731d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042731f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427320: ret 4 */ FN_RET(0x0042730a); r_esp += 8; return;
}

void f_00427323(void) /* FUN_00427323 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427323);
    /* 00427323: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427324: mov ebp, esp */ r_ebp = r_esp;
    /* 00427326: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427327: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042732a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042732d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427330: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 00427336: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427339: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042733c: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 00427342: mov esp, ebp */ r_esp = r_ebp;
    /* 00427344: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427345: ret 8 */ FN_RET(0x00427323); r_esp += 12; return;
}

void f_00427348(void) /* FUN_00427348 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427348);
    /* 00427348: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427349: mov ebp, esp */ r_ebp = r_esp;
    /* 0042734b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042734c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042734f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427352: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427355: mov dword ptr [eax + 0xb4], ecx */ W32((u32)(r_eax+0xb4u), r_ecx);
    /* 0042735b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042735e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00427361: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 00427367: mov esp, ebp */ r_esp = r_ebp;
    /* 00427369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042736a: ret 8 */ FN_RET(0x00427348); r_esp += 12; return;
}

void f_0042736d(void) /* FUN_0042736d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042736d);
    /* 0042736d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042736e: mov ebp, esp */ r_ebp = r_esp;
    /* 00427370: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427371: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427374: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427377: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042737a: mov dword ptr [eax + 0xbc], ecx */ W32((u32)(r_eax+0xbcu), r_ecx);
    /* 00427380: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427383: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00427386: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 0042738c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042738e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042738f: ret 8 */ FN_RET(0x0042736d); r_esp += 12; return;
}

void f_00427392(void) /* FUN_00427392 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427392);
    /* 00427392: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427393: mov ebp, esp */ r_ebp = r_esp;
    /* 00427395: sub esp, 0x19c */ {  u32 a = r_esp; u32 b = 0x19cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042739b: mov dword ptr [ebp - 0x198], ecx */ W32((u32)(r_ebp+0xfffffe68u), r_ecx);
    /* 004273a1: mov byte ptr [ebp - 0x24], 0 */ W8((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004273a5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004273a8: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004273ab: jne 0x4273bb */ if (!fZ) goto L_004273bb;
L_004273ad:; BB(0x004273ad);
    /* 004273ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004273b0: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004273b4: jne 0x4273bb */ if (!fZ) goto L_004273bb;
L_004273b6:; BB(0x004273b6);
    /* 004273b6: jmp 0x42797a */ goto L_0042797a;
L_004273bb:; BB(0x004273bb);
    /* 004273bb: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 004273c1: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004273c4: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004273c9: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004273cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004273ce: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x4273d1u); call_ind(t); }
    /* 004273d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004273d3: jne 0x4273da */ if (!fZ) goto L_004273da;
L_004273d5:; BB(0x004273d5);
    /* 004273d5: jmp 0x42797a */ goto L_0042797a;
L_004273da:; BB(0x004273da);
    /* 004273da: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004273e0: cmp dword ptr [ecx + 0xa8], 0 */ {  u32 a = R32((u32)(r_ecx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004273e7: je 0x42740b */ if (fZ) goto L_0042740b;
L_004273e9:; BB(0x004273e9);
    /* 004273e9: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004273ef: mov ecx, dword ptr [edx + 0xa8] */ r_ecx = R32((u32)(r_edx+0xa8u));
    /* 004273f5: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 004273fb: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 00427401: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00427403: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x427406u); call_ind(t); }
    /* 00427406: jmp 0x427523 */ goto L_00427523;
L_0042740b:; BB(0x0042740b);
    /* 0042740b: push 0x88c */ { u32 v = 0x88cu; r_esp -= 4; W32(r_esp, v); }
    /* 00427410: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x427415u); f_0048ab58();
    /* 00427415: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427418: mov dword ptr [ebp - 0x17c], eax */ W32((u32)(r_ebp+0xfffffe84u), r_eax);
    /* 0042741e: cmp dword ptr [ebp - 0x17c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427425: je 0x42743a */ if (fZ) goto L_0042743a;
L_00427427:; BB(0x00427427);
    /* 00427427: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 0042742d: call 0x42683b */ r_esp -= 4; W32(r_esp, 0x427432u); f_0042683b();
    /* 00427432: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 00427438: jmp 0x427444 */ goto L_00427444;
L_0042743a:; BB(0x0042743a);
    /* 0042743a: mov dword ptr [ebp - 0x19c], 0 */ W32((u32)(r_ebp+0xfffffe64u), 0x0u);
L_00427444:; BB(0x00427444);
    /* 00427444: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042744a: mov edx, dword ptr [ebp - 0x19c] */ r_edx = R32((u32)(r_ebp+0xfffffe64u));
    /* 00427450: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 00427456: push 0x6f5b6c */ { u32 v = 0x6f5b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042745b: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427461: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00427467: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042746d: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00427473: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427475: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x427478u); call_ind(t); }
    /* 00427478: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042747e: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00427484: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042748a: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00427490: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427492: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x427495u); call_ind(t); }
    /* 00427495: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00427497: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042749d: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 004274a3: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4274a8u); f_005e87aa();
    /* 004274a8: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 004274aa: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004274b0: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 004274b6: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x4274bbu); f_005e8740();
    /* 004274bb: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004274bd: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004274c3: mov ecx, dword ptr [edx + 0xa8] */ r_ecx = R32((u32)(r_edx+0xa8u));
    /* 004274c9: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x4274ceu); f_005e8775();
    /* 004274ce: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004274d3: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 004274d9: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 004274df: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004274e5: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 004274eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004274ed: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4274f0u); call_ind(t); }
    /* 004274f0: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004274f2: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 004274f8: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 004274fe: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x427503u); f_005e8e99();
    /* 00427503: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00427508: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042750d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00427512: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427518: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 0042751e: call 0x5e8b5a */ r_esp -= 4; W32(r_esp, 0x427523u); f_005e8b5a();
L_00427523:; BB(0x00427523);
    /* 00427523: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00427525: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0042752b: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x427530u); f_0045b93e();
    /* 00427530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427532: je 0x427727 */ if (fZ) goto L_00427727;
L_00427538:; BB(0x00427538);
    /* 00427538: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0042753a: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427540: mov ecx, dword ptr [edx + 0xa8] */ r_ecx = R32((u32)(r_edx+0xa8u));
    /* 00427546: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x42754bu); f_005e8e99();
    /* 0042754b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042754d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0042754f: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427555: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0042755b: call 0x5e8eba */ r_esp -= 4; W32(r_esp, 0x427560u); f_005e8eba();
    /* 00427560: mov byte ptr [ebp - 0x174], 0 */ W8((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 00427567: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0042756e: mov dword ptr [ebp - 0x178], 0 */ W32((u32)(r_ebp+0xfffffe88u), 0x0u);
    /* 00427578: jmp 0x427589 */ goto L_00427589;
L_0042757a:; BB(0x0042757a);
    /* 0042757a: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 00427580: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00427583: mov dword ptr [ebp - 0x178], ecx */ W32((u32)(r_ebp+0xfffffe88u), r_ecx);
L_00427589:; BB(0x00427589);
    /* 00427589: cmp dword ptr [ebp - 0x178], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffe88u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427590: jge 0x4276cd */ if ((fS==fO)) goto L_004276cd;
L_00427596:; BB(0x00427596);
    /* 00427596: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042759c: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0042759f: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 004275a5: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004275a8: mov edx, dword ptr [eax + ecx + 0x6c] */ r_edx = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 004275ac: cmp dword ptr [edx + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004275b0: je 0x4276c8 */ if (fZ) goto L_004276c8;
L_004275b6:; BB(0x004275b6);
    /* 004275b6: mov al, byte ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdcu))) & 0xffu);
    /* 004275b9: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004275bb: mov byte ptr [ebp - 0x24], al */ W8((u32)(r_ebp+0xffffffdcu), (u8)r_eax);
    /* 004275be: push 0x652874 */ { u32 v = 0x652874u; r_esp -= 4; W32(r_esp, v); }
    /* 004275c3: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 004275c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004275c7: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4275ccu); f_00624510();
    /* 004275cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004275cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004275d1: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004275d7: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004275da: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 004275e0: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004275e3: mov edx, dword ptr [eax + ecx + 0x6c] */ r_edx = R32((u32)(r_eax+r_ecx+0x6cu));
    /* 004275e7: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 004275ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004275ee: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x4275f3u); f_004298bc();
    /* 004275f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004275f6: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 004275fc: mov dword ptr [ebp - 0x180], edx */ W32((u32)(r_ebp+0xfffffe80u), r_edx);
    /* 00427602: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427604: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427606: lea ecx, [ebp - 0x184] */ r_ecx = (u32)(r_ebp+0xfffffe7cu);
    /* 0042760c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042760d: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00427610: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427611: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x427616u); f_004298d8();
    /* 00427616: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427619: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0042761c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042761d: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 00427623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427624: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0042762a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0042762d: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00427632: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00427635: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00427637: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x42763au); call_ind(t); }
    /* 0042763a: mov ecx, eax */ r_ecx = r_eax;
    /* 0042763c: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x427641u); f_004259cd();
    /* 00427641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427642: push 0x652878 */ { u32 v = 0x652878u; r_esp -= 4; W32(r_esp, v); }
    /* 00427647: lea ecx, [ebp - 0x74] */ r_ecx = (u32)(r_ebp+0xffffff8cu);
    /* 0042764a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042764b: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x427651u); call_ind(t); }
    /* 00427651: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427654: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 00427657: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427658: lea eax, [ebp - 0x174] */ r_eax = (u32)(r_ebp+0xfffffe8cu);
    /* 0042765e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042765f: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x427664u); f_00624520();
    /* 00427664: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427667: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042766c: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427672: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 00427678: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x42767du); f_005e8740();
    /* 0042767d: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 00427680: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427681: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427687: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0042768d: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427693: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00427699: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042769b: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x42769eu); call_ind(t); }
    /* 0042769e: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 004276a4: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 004276aa: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x4276afu); f_005e8dcc();
    /* 004276af: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004276b2: jle 0x4276c8 */ if ((fZ||fS!=fO)) goto L_004276c8;
L_004276b4:; BB(0x004276b4);
    /* 004276b4: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004276ba: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 004276c0: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x4276c5u); f_005e8dcc();
    /* 004276c5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_004276c8:; BB(0x004276c8);
    /* 004276c8: jmp 0x42757a */ goto L_0042757a;
L_004276cd:; BB(0x004276cd);
    /* 004276cd: movsx edx, byte ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdcu));
    /* 004276d1: imul edx, edx, 0xf */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xfu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004276d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004276d5: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 004276db: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 004276e1: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x4276e6u); f_005e8775();
    /* 004276e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004276e9: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004276ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004276ed: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004276f3: mov ecx, dword ptr [edx + 0xa8] */ r_ecx = R32((u32)(r_edx+0xa8u));
    /* 004276f9: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x4276feu); f_005e8740();
    /* 004276fe: lea eax, [ebp - 0x174] */ r_eax = (u32)(r_ebp+0xfffffe8cu);
    /* 00427704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427705: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042770b: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 00427711: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427717: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0042771d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042771f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x427722u); call_ind(t); }
    /* 00427722: jmp 0x4278e4 */ goto L_004278e4;
L_00427727:; BB(0x00427727);
    /* 00427727: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427729: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0042772f: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x427734u); f_0045b93e();
    /* 00427734: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427736: je 0x427854 */ if (fZ) goto L_00427854;
L_0042773c:; BB(0x0042773c);
    /* 0042773c: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427742: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00427748: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427749: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 0042774f: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00427752: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00427757: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0042775a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042775c: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x42775fu); call_ind(t); }
    /* 0042775f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427761: je 0x427854 */ if (fZ) goto L_00427854;
L_00427767:; BB(0x00427767);
    /* 00427767: push 0x652880 */ { u32 v = 0x652880u; r_esp -= 4; W32(r_esp, v); }
    /* 0042776c: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0042776f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427770: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x427775u); f_00624510();
    /* 00427775: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427778: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042777a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042777d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042777f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427780: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x427785u); f_004298bc();
    /* 00427785: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427788: mov dword ptr [ebp - 0x18c], eax */ W32((u32)(r_ebp+0xfffffe74u), r_eax);
    /* 0042778e: mov dword ptr [ebp - 0x188], edx */ W32((u32)(r_ebp+0xfffffe78u), r_edx);
    /* 00427794: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427796: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427798: lea ecx, [ebp - 0x18c] */ r_ecx = (u32)(r_ebp+0xfffffe74u);
    /* 0042779e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042779f: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 004277a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004277a3: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x4277a8u); f_004298d8();
    /* 004277a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004277ab: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 004277ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004277af: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004277b5: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 004277bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004277bc: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004277c1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004277c4: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 004277ca: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004277cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004277cf: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x4277d2u); call_ind(t); }
    /* 004277d2: mov ecx, eax */ r_ecx = r_eax;
    /* 004277d4: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x4277d9u); f_004259cd();
    /* 004277d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004277da: push 0x652884 */ { u32 v = 0x652884u; r_esp -= 4; W32(r_esp, v); }
    /* 004277df: lea eax, [ebp - 0x174] */ r_eax = (u32)(r_ebp+0xfffffe8cu);
    /* 004277e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004277e6: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4277ecu); call_ind(t); }
    /* 004277ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004277ef: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 004277f4: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004277fa: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 00427800: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x427805u); f_005e8740();
    /* 00427805: lea edx, [ebp - 0x174] */ r_edx = (u32)(r_ebp+0xfffffe8cu);
    /* 0042780b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042780c: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427812: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00427818: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042781e: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00427824: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427826: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x427829u); call_ind(t); }
    /* 00427829: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042782f: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00427835: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x42783au); f_005e8dcc();
    /* 0042783a: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042783d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042783e: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427844: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 0042784a: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x42784fu); f_005e8740();
    /* 0042784f: jmp 0x4278e4 */ goto L_004278e4;
L_00427854:; BB(0x00427854);
    /* 00427854: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427857: cmp dword ptr [edx], 0xf4240 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042785d: jl 0x427874 */ if ((fS!=fO)) goto L_00427874;
L_0042785f:; BB(0x0042785f);
    /* 0042785f: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00427861: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427867: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0042786d: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x427872u); f_005e8740();
    /* 00427872: jmp 0x427887 */ goto L_00427887;
L_00427874:; BB(0x00427874);
    /* 00427874: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00427876: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042787c: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 00427882: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x427887u); f_005e8740();
L_00427887:; BB(0x00427887);
    /* 00427887: push 0x65288c */ { u32 v = 0x65288cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042788c: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 0042788f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427890: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x427895u); f_00624510();
    /* 00427895: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427898: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042789a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042789d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0042789f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004278a0: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x4278a5u); f_004298bc();
    /* 004278a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004278a8: mov dword ptr [ebp - 0x194], eax */ W32((u32)(r_ebp+0xfffffe6cu), r_eax);
    /* 004278ae: mov dword ptr [ebp - 0x190], edx */ W32((u32)(r_ebp+0xfffffe70u), r_edx);
    /* 004278b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004278b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004278b8: lea edx, [ebp - 0x194] */ r_edx = (u32)(r_ebp+0xfffffe6cu);
    /* 004278be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004278bf: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 004278c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004278c3: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x4278c8u); f_004298d8();
    /* 004278c8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004278cb: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 004278ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004278cf: push 0x652890 */ { u32 v = 0x652890u; r_esp -= 4; W32(r_esp, v); }
    /* 004278d4: lea edx, [ebp - 0x174] */ r_edx = (u32)(r_ebp+0xfffffe8cu);
    /* 004278da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004278db: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4278e1u); call_ind(t); }
    /* 004278e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004278e4:; BB(0x004278e4);
    /* 004278e4: lea eax, [ebp - 0x174] */ r_eax = (u32)(r_ebp+0xfffffe8cu);
    /* 004278ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004278eb: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004278f1: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 004278f7: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004278fd: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00427903: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427905: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x427908u); call_ind(t); }
    /* 00427908: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042790e: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00427914: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427915: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042791b: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00427921: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427922: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427928: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 0042792e: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427934: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0042793a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042793c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x42793fu); call_ind(t); }
    /* 0042793f: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427945: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0042794b: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427951: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00427957: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427959: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x42795cu); call_ind(t); }
    /* 0042795c: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 00427962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427963: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00427969: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0042796c: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00427972: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00427975: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427977: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x42797au); call_ind(t); }
L_0042797a:; BB(0x0042797a);
    /* 0042797a: mov esp, ebp */ r_esp = r_ebp;
    /* 0042797c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042797d: ret 4 */ FN_RET(0x00427392); r_esp += 8; return;
}

void f_00427980(void) /* FUN_00427980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427980);
    /* 00427980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427981: mov ebp, esp */ r_ebp = r_esp;
    /* 00427983: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427986: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00427989: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042798c: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427993: je 0x4279e9 */ if (fZ) goto L_004279e9;
L_00427995:; BB(0x00427995);
    /* 00427995: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427998: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 0042799e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004279a1: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 004279a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004279a9: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4279acu); call_ind(t); }
    /* 004279ac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004279af: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 004279b5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004279b8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004279bb: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004279be: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004279c2: je 0x4279d5 */ if (fZ) goto L_004279d5;
L_004279c4:; BB(0x004279c4);
    /* 004279c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004279c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004279c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004279cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004279ce: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4279d0u); call_ind(t); }
    /* 004279d0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004279d3: jmp 0x4279dc */ goto L_004279dc;
L_004279d5:; BB(0x004279d5);
    /* 004279d5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004279dc:; BB(0x004279dc);
    /* 004279dc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004279df: mov dword ptr [eax + 0xa8], 0 */ W32((u32)(r_eax+0xa8u), 0x0u);
L_004279e9:; BB(0x004279e9);
    /* 004279e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004279eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004279ec: ret  */ FN_RET(0x00427980); r_esp += 4; return;
}

void f_004279ed(void) /* FUN_004279ed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004279ed);
    /* 004279ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004279ee: mov ebp, esp */ r_ebp = r_esp;
    /* 004279f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004279f1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004279f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004279f7: fild dword ptr [eax + 0xe0] */ FPUSH((long double)(i32)R32((u32)(r_eax+0xe0u)));
    /* 004279fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427a00: fidiv dword ptr [ecx + 0xe4] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ecx+0xe4u));
    /* 00427a06: mov esp, ebp */ r_esp = r_ebp;
    /* 00427a08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427a09: ret  */ FN_RET(0x004279ed); r_esp += 4; return;
}

void f_00427a0a(void) /* FUN_00427a0a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427a0a);
    /* 00427a0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427a0b: mov ebp, esp */ r_ebp = r_esp;
    /* 00427a0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427a0e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427a11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427a14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427a17: mov dword ptr [eax + 0xe0], ecx */ W32((u32)(r_eax+0xe0u), r_ecx);
    /* 00427a1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427a20: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00427a23: mov dword ptr [edx + 0xe4], eax */ W32((u32)(r_edx+0xe4u), r_eax);
    /* 00427a29: mov esp, ebp */ r_esp = r_ebp;
    /* 00427a2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427a2c: ret 8 */ FN_RET(0x00427a0a); r_esp += 12; return;
}

void f_00427a2f(void) /* FUN_00427a2f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427a2f);
    /* 00427a2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427a30: mov ebp, esp */ r_ebp = r_esp;
    /* 00427a32: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427a35: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00427a38: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00427a3d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00427a40: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00427a46: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00427a49: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427a4b: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x427a4eu); call_ind(t); }
    /* 00427a4e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00427a51: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00427a58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00427a5f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00427a66: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00427a6d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427a70: call 0x426dfb */ r_esp -= 4; W32(r_esp, 0x427a75u); f_00426dfb();
    /* 00427a75: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427a78: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427a7b: mov dword ptr [eax + 0xd4], ecx */ W32((u32)(r_eax+0xd4u), r_ecx);
    /* 00427a81: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427a84: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00427a87: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00427a8b: ja 0x427c0c */ if ((!fC&&!fZ)) goto L_00427c0c;
L_00427a91:; BB(0x00427a91);
    /* 00427a91: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00427a94: jmp dword ptr [eax*4 + 0x427c12] */ { u32 t = R32((u32)(r_eax*4+0x427c12u)); switch (t) { case 0x427a9bu: goto L_00427a9b; case 0x427b09u: goto L_00427b09; case 0x427b3cu: goto L_00427b3c; case 0x427b23u: goto L_00427b23; default: UNSUP(0x00427a94, "jump table entry is not a known target"); } }
L_00427a9b:; BB(0x00427a9b);
    /* 00427a9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427a9e: cmp dword ptr [ecx + 0x110], 0 */ {  u32 a = R32((u32)(r_ecx+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427aa5: jle 0x427ab4 */ if ((fZ||fS!=fO)) goto L_00427ab4;
L_00427aa7:; BB(0x00427aa7);
    /* 00427aa7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427aaa: mov dword ptr [edx + 0x110], 0 */ W32((u32)(r_edx+0x110u), 0x0u);
L_00427ab4:; BB(0x00427ab4);
    /* 00427ab4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427ab7: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 00427abd: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00427ac0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427ac3: mov dword ptr [edx + 0x110], ecx */ W32((u32)(r_edx+0x110u), r_ecx);
    /* 00427ac9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427acd: je 0x427ada */ if (fZ) goto L_00427ada;
L_00427acf:; BB(0x00427acf);
    /* 00427acf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427ad2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427ad4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427ad7: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x427adau); call_ind(t); }
L_00427ada:; BB(0x00427ada);
    /* 00427ada: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00427add: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427ade: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427ae1: call 0x426ef0 */ r_esp -= 4; W32(r_esp, 0x427ae6u); f_00426ef0();
    /* 00427ae6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427ae9: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00427aec: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00427aef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427af2: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00427af5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00427af8: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00427afb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427afc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427aff: call 0x425ca4 */ r_esp -= 4; W32(r_esp, 0x427b04u); f_00425ca4();
    /* 00427b04: jmp 0x427c0c */ goto L_00427c0c;
L_00427b09:; BB(0x00427b09);
    /* 00427b09: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427b0c: add ecx, 0xc4 */ {  u32 a = r_ecx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00427b12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427b13: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427b16: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00427b19: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x427b1eu); f_004267ae();
    /* 00427b1e: jmp 0x427c0c */ goto L_00427c0c;
L_00427b23:; BB(0x00427b23);
    /* 00427b23: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427b26: add eax, 0xc4 */ {  u32 a = r_eax; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427b2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427b2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427b2f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00427b32: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x427b37u); f_004267ae();
    /* 00427b37: jmp 0x427c0c */ goto L_00427c0c;
L_00427b3c:; BB(0x00427b3c);
    /* 00427b3c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427b3f: cmp dword ptr [edx + 0x110], 0 */ {  u32 a = R32((u32)(r_edx+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427b46: jge 0x427b55 */ if ((fS==fO)) goto L_00427b55;
L_00427b48:; BB(0x00427b48);
    /* 00427b48: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427b4b: mov dword ptr [eax + 0x110], 0 */ W32((u32)(r_eax+0x110u), 0x0u);
L_00427b55:; BB(0x00427b55);
    /* 00427b55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427b58: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 00427b5e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00427b61: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427b64: mov dword ptr [eax + 0x110], edx */ W32((u32)(r_eax+0x110u), r_edx);
    /* 00427b6a: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00427b6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427b6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427b71: call 0x426ef0 */ r_esp -= 4; W32(r_esp, 0x427b76u); f_00426ef0();
    /* 00427b76: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 00427b79: fstp qword ptr [ebp - 0x2c] */ W_F64((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00427b7c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427b7f: call 0x4279ed */ r_esp -= 4; W32(r_esp, 0x427b84u); f_004279ed();
    /* 00427b84: fmul qword ptr [ebp - 0x2c] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd4u));
    /* 00427b87: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00427b8a: fld qword ptr [ebp - 0x14] */ FPUSH(R_F64((u32)(r_ebp+0xffffffecu)));
    /* 00427b8d: fcomp qword ptr [0x634230] */ fx_compare(ST(0), R_F64((u32)(0x634230u))); FPOP();
    /* 00427b93: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00427b95: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00427b98: jne 0x427ba8 */ if (!fZ) goto L_00427ba8;
L_00427b9a:; BB(0x00427b9a);
    /* 00427b9a: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00427ba1: mov dword ptr [ebp - 0x10], 0x41cdcd65 */ W32((u32)(r_ebp+0xfffffff0u), 0x41cdcd65u);
L_00427ba8:; BB(0x00427ba8);
    /* 00427ba8: fld qword ptr [ebp - 0x14] */ FPUSH(R_F64((u32)(r_ebp+0xffffffecu)));
    /* 00427bab: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x427bb0u); f_00624144();
    /* 00427bb0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00427bb3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427bb6: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00427bbc: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427bbf: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00427bc2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427bc5: mov edx, dword ptr [ecx + 0xc8] */ r_edx = R32((u32)(r_ecx+0xc8u));
    /* 00427bcb: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00427bce: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00427bd1: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00427bd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427bd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427bd8: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00427bdb: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x427be0u); f_004267ae();
    /* 00427be0: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00427be3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427be4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427be7: call 0x425ca4 */ r_esp -= 4; W32(r_esp, 0x427becu); f_00425ca4();
    /* 00427bec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427bee: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00427bf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427bf2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427bf5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00427bf7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427bfa: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x427bfdu); call_ind(t); }
    /* 00427bfd: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00427c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427c01: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427c04: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00427c06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427c09: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x427c0cu); call_ind(t); }
L_00427c0c:; BB(0x00427c0c);
    /* 00427c0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00427c0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427c0f: ret 8 */ FN_RET(0x00427a2f); r_esp += 12; return;
}

void f_00427c22(void) /* FUN_00427c22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427c22);
    /* 00427c22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427c23: mov ebp, esp */ r_ebp = r_esp;
    /* 00427c25: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427c28: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00427c2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427c2e: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x427c33u); f_005e9d30();
    /* 00427c33: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427c36: mov dword ptr [eax], 0x63423c */ W32((u32)(r_eax), 0x63423cu);
    /* 00427c3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427c3f: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 00427c49: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427c4c: mov dword ptr [edx + 0xbc], 0 */ W32((u32)(r_edx+0xbcu), 0x0u);
    /* 00427c56: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427c58: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427c5b: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x427c60u); f_005ea514();
    /* 00427c60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00427c67: jmp 0x427c72 */ goto L_00427c72;
L_00427c69:; BB(0x00427c69);
    /* 00427c69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427c6c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427c6f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00427c72:; BB(0x00427c72);
    /* 00427c72: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427c76: jge 0x427cab */ if ((fS==fO)) goto L_00427cab;
L_00427c78:; BB(0x00427c78);
    /* 00427c78: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00427c7f: jmp 0x427c8a */ goto L_00427c8a;
L_00427c81:; BB(0x00427c81);
    /* 00427c81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427c84: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00427c87: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00427c8a:; BB(0x00427c8a);
    /* 00427c8a: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427c8e: jge 0x427ca9 */ if ((fS==fO)) goto L_00427ca9;
L_00427c90:; BB(0x00427c90);
    /* 00427c90: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427c93: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00427c96: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427c99: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 00427c9d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427ca0: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
    /* 00427ca7: jmp 0x427c81 */ goto L_00427c81;
L_00427ca9:; BB(0x00427ca9);
    /* 00427ca9: jmp 0x427c69 */ goto L_00427c69;
L_00427cab:; BB(0x00427cab);
    /* 00427cab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427cae: mov esp, ebp */ r_esp = r_ebp;
    /* 00427cb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427cb1: ret  */ FN_RET(0x00427c22); r_esp += 4; return;
}

void f_00427cb2(void) /* FUN_00427cb2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427cb2);
    /* 00427cb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427cb3: mov ebp, esp */ r_ebp = r_esp;
    /* 00427cb5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427cb8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00427cbb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00427cbe: mov dword ptr [eax], 0x63423c */ W32((u32)(r_eax), 0x63423cu);
    /* 00427cc4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00427ccb: jmp 0x427cd6 */ goto L_00427cd6;
L_00427ccd:; BB(0x00427ccd);
    /* 00427ccd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427cd0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00427cd3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00427cd6:; BB(0x00427cd6);
    /* 00427cd6: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427cda: jge 0x427d66 */ if ((fS==fO)) goto L_00427d66;
L_00427ce0:; BB(0x00427ce0);
    /* 00427ce0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00427ce7: jmp 0x427cf2 */ goto L_00427cf2;
L_00427ce9:; BB(0x00427ce9);
    /* 00427ce9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427cec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00427cef: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00427cf2:; BB(0x00427cf2);
    /* 00427cf2: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427cf6: jge 0x427d61 */ if ((fS==fO)) goto L_00427d61;
L_00427cf8:; BB(0x00427cf8);
    /* 00427cf8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427cfb: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00427cfe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427d01: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 00427d05: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427d08: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427d0c: je 0x427d5f */ if (fZ) goto L_00427d5f;
L_00427d0e:; BB(0x00427d0e);
    /* 00427d0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427d11: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00427d14: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427d17: lea eax, [edx + ecx + 0x6c] */ r_eax = (u32)(r_edx+r_ecx+0x6cu);
    /* 00427d1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427d1e: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00427d21: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00427d24: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00427d27: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00427d2a: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427d2e: je 0x427d41 */ if (fZ) goto L_00427d41;
L_00427d30:; BB(0x00427d30);
    /* 00427d30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427d32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427d35: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00427d37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427d3a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x427d3cu); call_ind(t); }
    /* 00427d3c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00427d3f: jmp 0x427d48 */ goto L_00427d48;
L_00427d41:; BB(0x00427d41);
    /* 00427d41: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00427d48:; BB(0x00427d48);
    /* 00427d48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427d4b: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00427d4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427d51: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 00427d55: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427d58: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
L_00427d5f:; BB(0x00427d5f);
    /* 00427d5f: jmp 0x427ce9 */ goto L_00427ce9;
L_00427d61:; BB(0x00427d61);
    /* 00427d61: jmp 0x427ccd */ goto L_00427ccd;
L_00427d66:; BB(0x00427d66);
    /* 00427d66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427d69: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x427d6eu); f_005e9dde();
    /* 00427d6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00427d70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427d71: ret  */ FN_RET(0x00427cb2); r_esp += 4; return;
}

void f_00427d72(void) /* FUN_00427d72 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427d72);
    /* 00427d72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427d73: mov ebp, esp */ r_ebp = r_esp;
    /* 00427d75: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427d78: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00427d7b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00427d82: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00427d89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00427d8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427d8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427d90: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x427d95u); f_005d9738();
    /* 00427d95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427d97: jne 0x427da5 */ if (!fZ) goto L_00427da5;
L_00427d99:; BB(0x00427d99);
    /* 00427d99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427d9c: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427da3: je 0x427dae */ if (fZ) goto L_00427dae;
L_00427da5:; BB(0x00427da5);
    /* 00427da5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427da8: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427dac: je 0x427db5 */ if (fZ) goto L_00427db5;
L_00427dae:; BB(0x00427dae);
    /* 00427dae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00427db0: jmp 0x427ec5 */ goto L_00427ec5;
L_00427db5:; BB(0x00427db5);
    /* 00427db5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00427db8: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00427dbb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00427dbe: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427dc2: je 0x427dcf */ if (fZ) goto L_00427dcf;
L_00427dc4:; BB(0x00427dc4);
    /* 00427dc4: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427dc8: je 0x427e2a */ if (fZ) goto L_00427e2a;
L_00427dca:; BB(0x00427dca);
    /* 00427dca: jmp 0x427ebf */ goto L_00427ebf;
L_00427dcf:; BB(0x00427dcf);
    /* 00427dcf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427dd2: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00427dd5: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00427dd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427dda: je 0x427df5 */ if (fZ) goto L_00427df5;
L_00427ddc:; BB(0x00427ddc);
    /* 00427ddc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427ddf: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427de6: jne 0x427df5 */ if (!fZ) goto L_00427df5;
L_00427de8:; BB(0x00427de8);
    /* 00427de8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427deb: mov dword ptr [edx + 0xac], 1 */ W32((u32)(r_edx+0xacu), 0x1u);
L_00427df5:; BB(0x00427df5);
    /* 00427df5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00427df8: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00427dfb: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00427dfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427e00: je 0x427e1b */ if (fZ) goto L_00427e1b;
L_00427e02:; BB(0x00427e02);
    /* 00427e02: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427e05: cmp dword ptr [edx + 0xac], 0 */ {  u32 a = R32((u32)(r_edx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427e0c: jne 0x427e1b */ if (!fZ) goto L_00427e1b;
L_00427e0e:; BB(0x00427e0e);
    /* 00427e0e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427e11: mov dword ptr [eax + 0xac], 1 */ W32((u32)(r_eax+0xacu), 0x1u);
L_00427e1b:; BB(0x00427e1b);
    /* 00427e1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427e1e: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 00427e25: jmp 0x427ebf */ goto L_00427ebf;
L_00427e2a:; BB(0x00427e2a);
    /* 00427e2a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427e2d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00427e30: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00427e33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427e35: je 0x427e69 */ if (fZ) goto L_00427e69;
L_00427e37:; BB(0x00427e37);
    /* 00427e37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427e3a: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427e41: je 0x427e69 */ if (fZ) goto L_00427e69;
L_00427e43:; BB(0x00427e43);
    /* 00427e43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427e45: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427e48: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00427e4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427e4d: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x427e50u); call_ind(t); }
    /* 00427e50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427e52: je 0x427e69 */ if (fZ) goto L_00427e69;
L_00427e54:; BB(0x00427e54);
    /* 00427e54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427e56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427e58: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00427e5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427e5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427e5e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427e61: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00427e63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427e66: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x427e69u); call_ind(t); }
L_00427e69:; BB(0x00427e69);
    /* 00427e69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427e6c: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00427e6f: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00427e72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427e74: je 0x427ea8 */ if (fZ) goto L_00427ea8;
L_00427e76:; BB(0x00427e76);
    /* 00427e76: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427e79: cmp dword ptr [eax + 0xac], 0 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427e80: je 0x427ea8 */ if (fZ) goto L_00427ea8;
L_00427e82:; BB(0x00427e82);
    /* 00427e82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427e84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427e87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00427e89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427e8c: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x427e8fu); call_ind(t); }
    /* 00427e8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427e91: je 0x427ea8 */ if (fZ) goto L_00427ea8;
L_00427e93:; BB(0x00427e93);
    /* 00427e93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427e95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427e97: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00427e9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427e9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427e9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427ea0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00427ea2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427ea5: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x427ea8u); call_ind(t); }
L_00427ea8:; BB(0x00427ea8);
    /* 00427ea8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427eab: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 00427eb5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427eb8: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_00427ebf:; BB(0x00427ebf);
    /* 00427ebf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427ec2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
L_00427ec5:; BB(0x00427ec5);
    /* 00427ec5: mov esp, ebp */ r_esp = r_ebp;
    /* 00427ec7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427ec8: ret 4 */ FN_RET(0x00427d72); r_esp += 8; return;
}

void f_00427ecb(void) /* FUN_00427ecb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427ecb);
    /* 00427ecb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427ecc: mov ebp, esp */ r_ebp = r_esp;
    /* 00427ece: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427ecf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427ed2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427ed5: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 00427edb: mov esp, ebp */ r_esp = r_ebp;
    /* 00427edd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427ede: ret  */ FN_RET(0x00427ecb); r_esp += 4; return;
}

void f_00427edf(void) /* FUN_00427edf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427edf);
    /* 00427edf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427ee0: mov ebp, esp */ r_ebp = r_esp;
    /* 00427ee2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427ee3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427ee6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427ee9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427eec: mov dword ptr [eax + 0xb0], ecx */ W32((u32)(r_eax+0xb0u), r_ecx);
    /* 00427ef2: mov esp, ebp */ r_esp = r_ebp;
    /* 00427ef4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427ef5: ret 4 */ FN_RET(0x00427edf); r_esp += 8; return;
}

void f_00427ef8(void) /* FUN_00427ef8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427ef8);
    /* 00427ef8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427ef9: mov ebp, esp */ r_ebp = r_esp;
    /* 00427efb: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427efe: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00427f01: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00427f06: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x427f0bu); f_0048ab58();
    /* 00427f0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427f0e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00427f11: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427f15: je 0x427f28 */ if (fZ) goto L_00427f28;
L_00427f17:; BB(0x00427f17);
    /* 00427f17: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427f1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427f1b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427f1e: call 0x426b30 */ r_esp -= 4; W32(r_esp, 0x427f23u); f_00426b30();
    /* 00427f23: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00427f26: jmp 0x427f2f */ goto L_00427f2f;
L_00427f28:; BB(0x00427f28);
    /* 00427f28: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00427f2f:; BB(0x00427f2f);
    /* 00427f2f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427f32: mov esp, ebp */ r_esp = r_ebp;
    /* 00427f34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427f35: ret  */ FN_RET(0x00427ef8); r_esp += 4; return;
}

void f_00427f36(void) /* FUN_00427f36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427f36);
    /* 00427f36: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427f37: mov ebp, esp */ r_ebp = r_esp;
    /* 00427f39: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427f3c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00427f3f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00427f46: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00427f4d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00427f50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427f53: mov dword ptr [eax + 0xb4], ecx */ W32((u32)(r_eax+0xb4u), r_ecx);
    /* 00427f59: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427f5c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00427f5f: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 00427f65: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00427f6c: jmp 0x427f77 */ goto L_00427f77;
L_00427f6e:; BB(0x00427f6e);
    /* 00427f6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427f71: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00427f74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00427f77:; BB(0x00427f77);
    /* 00427f77: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427f7a: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427f7d: jge 0x428075 */ if ((fS==fO)) goto L_00428075;
L_00427f83:; BB(0x00427f83);
    /* 00427f83: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00427f8a: jmp 0x427f95 */ goto L_00427f95;
L_00427f8c:; BB(0x00427f8c);
    /* 00427f8c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427f8f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427f92: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00427f95:; BB(0x00427f95);
    /* 00427f95: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427f98: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427f9b: jge 0x428070 */ if ((fS==fO)) goto L_00428070;
L_00427fa1:; BB(0x00427fa1);
    /* 00427fa1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427fa4: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00427fa7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00427faa: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 00427fae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427fb1: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427fb5: jne 0x427fd5 */ if (!fZ) goto L_00427fd5;
L_00427fb7:; BB(0x00427fb7);
    /* 00427fb7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00427fba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427fbc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427fbf: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x427fc2u); call_ind(t); }
    /* 00427fc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427fc5: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00427fc8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427fcb: lea ecx, [edx + ecx + 0x6c] */ r_ecx = (u32)(r_edx+r_ecx+0x6cu);
    /* 00427fcf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427fd2: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
L_00427fd5:; BB(0x00427fd5);
    /* 00427fd5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427fd8: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00427fdb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427fde: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 00427fe2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427fe5: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00427fe8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427feb: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00427fee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00427ff1: lea edx, [eax + edx + 0x6c] */ r_edx = (u32)(r_eax+r_edx+0x6cu);
    /* 00427ff5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427ff8: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00427ffb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00427ffd: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x428000u); call_ind(t); }
    /* 00428000: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00428003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428004: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428007: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042800a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042800d: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 00428011: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428014: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00428017: call 0x42730a */ r_esp -= 4; W32(r_esp, 0x42801cu); f_0042730a();
    /* 0042801c: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0042801f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428020: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00428023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428024: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428027: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042802a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042802d: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 00428031: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428034: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00428037: call 0x427a0a */ r_esp -= 4; W32(r_esp, 0x42803cu); f_00427a0a();
    /* 0042803c: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0042803f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428040: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428043: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00428046: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00428049: lea eax, [edx + ecx + 0x6c] */ r_eax = (u32)(r_edx+r_ecx+0x6cu);
    /* 0042804d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428050: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00428053: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428056: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00428059: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042805c: lea edx, [eax + edx + 0x6c] */ r_edx = (u32)(r_eax+r_edx+0x6cu);
    /* 00428060: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428063: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00428066: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428068: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x42806bu); call_ind(t); }
    /* 0042806b: jmp 0x427f8c */ goto L_00427f8c;
L_00428070:; BB(0x00428070);
    /* 00428070: jmp 0x427f6e */ goto L_00427f6e;
L_00428075:; BB(0x00428075);
    /* 00428075: mov esp, ebp */ r_esp = r_ebp;
    /* 00428077: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428078: ret 0x14 */ FN_RET(0x00427f36); r_esp += 24; return;
}

void f_0042807b(void) /* FUN_0042807b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042807b);
    /* 0042807b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042807c: mov ebp, esp */ r_ebp = r_esp;
    /* 0042807e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042807f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00428082: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428085: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x42808au); f_00427ecb();
    /* 0042808a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042808b: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00428090: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00428093: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00428099: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042809c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042809e: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x4280a1u); call_ind(t); }
    /* 004280a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004280a3: je 0x4280ac */ if (fZ) goto L_004280ac;
L_004280a5:; BB(0x004280a5);
    /* 004280a5: mov eax, 1 */ r_eax = 0x1u;
    /* 004280aa: jmp 0x4280ae */ goto L_004280ae;
L_004280ac:; BB(0x004280ac);
    /* 004280ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004280ae:; BB(0x004280ae);
    /* 004280ae: mov esp, ebp */ r_esp = r_ebp;
    /* 004280b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004280b1: ret 4 */ FN_RET(0x0042807b); r_esp += 8; return;
}

void f_004280b4(void) /* FUN_004280b4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004280b4);
    /* 004280b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004280b5: mov ebp, esp */ r_ebp = r_esp;
    /* 004280b7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004280ba: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004280bd: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004280c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004280c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004280c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004280c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004280c8: call 0x428175 */ r_esp -= 4; W32(r_esp, 0x4280cdu); f_00428175();
    /* 004280cd: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004280d1: jg 0x4280e2 */ if ((!fZ&&fS==fO)) goto L_004280e2;
L_004280d3:; BB(0x004280d3);
    /* 004280d3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004280d7: jg 0x4280e2 */ if ((!fZ&&fS==fO)) goto L_004280e2;
L_004280d9:; BB(0x004280d9);
    /* 004280d9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004280e0: jmp 0x4280e9 */ goto L_004280e9;
L_004280e2:; BB(0x004280e2);
    /* 004280e2: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_004280e9:; BB(0x004280e9);
    /* 004280e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004280ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004280ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004280ef: ret 4 */ FN_RET(0x004280b4); r_esp += 8; return;
}

void f_004280f2(void) /* FUN_004280f2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004280f2);
    /* 004280f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004280f3: mov ebp, esp */ r_ebp = r_esp;
    /* 004280f5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004280f8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004280fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00428102: jmp 0x42810d */ goto L_0042810d;
L_00428104:; BB(0x00428104);
    /* 00428104: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428107: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042810a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042810d:; BB(0x0042810d);
    /* 0042810d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00428110: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428113: cmp edx, dword ptr [ecx + 0xb4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xb4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428119: jge 0x42816f */ if ((fS==fO)) goto L_0042816f;
L_0042811b:; BB(0x0042811b);
    /* 0042811b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00428122: jmp 0x42812d */ goto L_0042812d;
L_00428124:; BB(0x00428124);
    /* 00428124: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428127: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042812a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0042812d:; BB(0x0042812d);
    /* 0042812d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00428130: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428133: cmp edx, dword ptr [ecx + 0xb8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428139: jge 0x42816d */ if ((fS==fO)) goto L_0042816d;
L_0042813b:; BB(0x0042813b);
    /* 0042813b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042813e: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00428141: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00428144: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 00428148: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042814b: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0042814e: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428151: je 0x42816b */ if (fZ) goto L_0042816b;
L_00428153:; BB(0x00428153);
    /* 00428153: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428156: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00428159: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042815c: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 00428160: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428163: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00428166: call 0x427980 */ r_esp -= 4; W32(r_esp, 0x42816bu); f_00427980();
L_0042816b:; BB(0x0042816b);
    /* 0042816b: jmp 0x428124 */ goto L_00428124;
L_0042816d:; BB(0x0042816d);
    /* 0042816d: jmp 0x428104 */ goto L_00428104;
L_0042816f:; BB(0x0042816f);
    /* 0042816f: mov esp, ebp */ r_esp = r_ebp;
    /* 00428171: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428172: ret 4 */ FN_RET(0x004280f2); r_esp += 8; return;
}

void f_00428175(void) /* FUN_00428175 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428175);
    /* 00428175: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428176: mov ebp, esp */ r_ebp = r_esp;
    /* 00428178: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042817b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042817e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00428185: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0042818c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042818f: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00428195: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00428198: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0042819f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004281a6: jmp 0x4281b1 */ goto L_004281b1;
L_004281a8:; BB(0x004281a8);
    /* 004281a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004281ab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004281ae: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004281b1:; BB(0x004281b1);
    /* 004281b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004281b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004281b7: cmp ecx, dword ptr [eax + 0xb4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xb4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004281bd: jge 0x428276 */ if ((fS==fO)) goto L_00428276;
L_004281c3:; BB(0x004281c3);
    /* 004281c3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004281ca: jmp 0x4281d5 */ goto L_004281d5;
L_004281cc:; BB(0x004281cc);
    /* 004281cc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004281cf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004281d2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_004281d5:; BB(0x004281d5);
    /* 004281d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004281d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004281db: cmp ecx, dword ptr [eax + 0xb8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xb8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004281e1: jge 0x428271 */ if ((fS==fO)) goto L_00428271;
L_004281e7:; BB(0x004281e7);
    /* 004281e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004281ea: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004281ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004281f0: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 004281f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004281f7: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004281fa: call 0x426f9e */ r_esp -= 4; W32(r_esp, 0x4281ffu); f_00426f9e();
    /* 004281ff: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428202: jne 0x42826c */ if (!fZ) goto L_0042826c;
L_00428204:; BB(0x00428204);
    /* 00428204: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428207: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042820a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042820d: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 00428211: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428214: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00428217: cmp dword ptr [ecx + 0xd4], 2 */ {  u32 a = R32((u32)(r_ecx+0xd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042821e: je 0x42826c */ if (fZ) goto L_0042826c;
L_00428220:; BB(0x00428220);
    /* 00428220: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428223: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00428226: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00428229: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 0042822d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428230: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00428233: cmp dword ptr [eax + 0xd4], 0 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042823a: je 0x42826c */ if (fZ) goto L_0042826c;
L_0042823c:; BB(0x0042823c);
    /* 0042823c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0042823f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428240: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428243: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00428246: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00428249: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 0042824d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428250: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00428253: call 0x426ef0 */ r_esp -= 4; W32(r_esp, 0x428258u); f_00426ef0();
    /* 00428258: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042825b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042825c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0042825f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428260: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00428263: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428264: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x428269u); f_00429a59();
    /* 00428269: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042826c:; BB(0x0042826c);
    /* 0042826c: jmp 0x4281cc */ goto L_004281cc;
L_00428271:; BB(0x00428271);
    /* 00428271: jmp 0x4281a8 */ goto L_004281a8;
L_00428276:; BB(0x00428276);
    /* 00428276: mov esp, ebp */ r_esp = r_ebp;
    /* 00428278: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428279: ret 8 */ FN_RET(0x00428175); r_esp += 12; return;
}

void f_0042827c(void) /* FUN_0042827c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042827c);
    /* 0042827c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042827d: mov ebp, esp */ r_ebp = r_esp;
    /* 0042827f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428280: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00428283: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428286: cmp dword ptr [eax + 0xb4], 1 */ {  u32 a = R32((u32)(r_eax+0xb4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042828d: jne 0x428296 */ if (!fZ) goto L_00428296;
L_0042828f:; BB(0x0042828f);
    /* 0042828f: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
L_00428296:; BB(0x00428296);
    /* 00428296: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428299: cmp dword ptr [ecx + 0xb8], 1 */ {  u32 a = R32((u32)(r_ecx+0xb8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004282a0: jne 0x4282a9 */ if (!fZ) goto L_004282a9;
L_004282a2:; BB(0x004282a2);
    /* 004282a2: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
L_004282a9:; BB(0x004282a9);
    /* 004282a9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004282ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004282ad: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004282b0: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004282b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004282b6: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 004282ba: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004282bd: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 004282c0: call 0x426ef0 */ r_esp -= 4; W32(r_esp, 0x4282c5u); f_00426ef0();
    /* 004282c5: mov esp, ebp */ r_esp = r_ebp;
    /* 004282c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004282c8: ret 0xc */ FN_RET(0x0042827c); r_esp += 16; return;
}

void f_004282cb(void) /* FUN_004282cb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004282cb);
    /* 004282cb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004282cc: mov ebp, esp */ r_ebp = r_esp;
    /* 004282ce: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004282d4: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 004282da: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004282df: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004282e2: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 004282e8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004282eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004282ed: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x4282f0u); call_ind(t); }
    /* 004282f0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004282f3: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004282f8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004282fb: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00428301: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00428304: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428306: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x428309u); call_ind(t); }
    /* 00428309: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042830c: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00428311: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00428314: call 0x44897d */ r_esp -= 4; W32(r_esp, 0x428319u); f_0044897d();
    /* 00428319: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042831c: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00428322: cmp dword ptr [ecx + 0xb4], 1 */ {  u32 a = R32((u32)(r_ecx+0xb4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428329: jne 0x428337 */ if (!fZ) goto L_00428337;
L_0042832b:; BB(0x0042832b);
    /* 0042832b: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 00428335: jmp 0x428345 */ goto L_00428345;
L_00428337:; BB(0x00428337);
    /* 00428337: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042833a: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x42833fu); f_004259f1();
    /* 0042833f: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
L_00428345:; BB(0x00428345);
    /* 00428345: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0042834b: mov dword ptr [ebp - 0xfc], edx */ W32((u32)(r_ebp+0xffffff04u), r_edx);
    /* 00428351: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00428358: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0042835f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00428366: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
    /* 00428370: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
    /* 0042837a: lea eax, [ebp - 0xf4] */ r_eax = (u32)(r_ebp+0xffffff0cu);
    /* 00428380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428381: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00428384: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00428387: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x42838cu); f_004267fb();
    /* 0042838c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0042838f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428390: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 00428396: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428397: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 0042839d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042839e: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004283a4: call 0x42827c */ r_esp -= 4; W32(r_esp, 0x4283a9u); f_0042827c();
    /* 004283a9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004283ac: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004283af: jne 0x4283c8 */ if (!fZ) goto L_004283c8;
L_004283b1:; BB(0x004283b1);
    /* 004283b1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004283b4: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004283b8: jne 0x4283c8 */ if (!fZ) goto L_004283c8;
L_004283ba:; BB(0x004283ba);
    /* 004283ba: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004283bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004283be: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004283c1: call 0x425b89 */ r_esp -= 4; W32(r_esp, 0x4283c6u); f_00425b89();
    /* 004283c6: jmp 0x4283d6 */ goto L_004283d6;
L_004283c8:; BB(0x004283c8);
    /* 004283c8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004283cb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004283cd: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004283d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004283d3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004283d6:; BB(0x004283d6);
    /* 004283d6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004283da: jne 0x4283fc */ if (!fZ) goto L_004283fc;
L_004283dc:; BB(0x004283dc);
    /* 004283dc: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004283e0: jne 0x4283fc */ if (!fZ) goto L_004283fc;
L_004283e2:; BB(0x004283e2);
    /* 004283e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004283e4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004283e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004283e8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004283eb: call 0x425c32 */ r_esp -= 4; W32(r_esp, 0x4283f0u); f_00425c32();
    /* 004283f0: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004283f4: jne 0x4283fc */ if (!fZ) goto L_004283fc;
L_004283f6:; BB(0x004283f6);
    /* 004283f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004283f9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004283fc:; BB(0x004283fc);
    /* 004283fc: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428400: je 0x42844d */ if (fZ) goto L_0042844d;
L_00428402:; BB(0x00428402);
    /* 00428402: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00428405: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428408: jge 0x42844d */ if ((fS==fO)) goto L_0042844d;
L_0042840a:; BB(0x0042840a);
    /* 0042840a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042840e: jne 0x42844d */ if (!fZ) goto L_0042844d;
L_00428410:; BB(0x00428410);
    /* 00428410: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 00428416: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428419: jl 0x42844d */ if ((fS!=fO)) goto L_0042844d;
L_0042841b:; BB(0x0042841b);
    /* 0042841b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042841f: jne 0x428427 */ if (!fZ) goto L_00428427;
L_00428421:; BB(0x00428421);
    /* 00428421: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428425: je 0x428439 */ if (fZ) goto L_00428439;
L_00428427:; BB(0x00428427);
    /* 00428427: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042842e: jne 0x42844b */ if (!fZ) goto L_0042844b;
L_00428430:; BB(0x00428430);
    /* 00428430: cmp dword ptr [ebp - 0x100], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428437: jne 0x42844b */ if (!fZ) goto L_0042844b;
L_00428439:; BB(0x00428439);
    /* 00428439: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042843c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042843f: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00428442: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428443: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00428446: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x42844bu); f_00425bfe();
L_0042844b:; BB(0x0042844b);
    /* 0042844b: jmp 0x42847c */ goto L_0042847c;
L_0042844d:; BB(0x0042844d);
    /* 0042844d: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428454: je 0x42847c */ if (fZ) goto L_0042847c;
L_00428456:; BB(0x00428456);
    /* 00428456: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042845a: je 0x42847c */ if (fZ) goto L_0042847c;
L_0042845c:; BB(0x0042845c);
    /* 0042845c: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 00428462: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428465: jge 0x42847c */ if ((fS==fO)) goto L_0042847c;
L_00428467:; BB(0x00428467);
    /* 00428467: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 0042846d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00428470: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00428473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428474: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00428477: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x42847cu); f_00425bfe();
L_0042847c:; BB(0x0042847c);
    /* 0042847c: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428480: je 0x4285b6 */ if (fZ) goto L_004285b6;
L_00428486:; BB(0x00428486);
    /* 00428486: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042848a: je 0x428571 */ if (fZ) goto L_00428571;
L_00428490:; BB(0x00428490);
    /* 00428490: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00428496: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428499: jne 0x4284c5 */ if (!fZ) goto L_004284c5;
L_0042849b:; BB(0x0042849b);
    /* 0042849b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042849e: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x4284a3u); f_004259a0();
    /* 004284a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004284a5: je 0x4284c0 */ if (fZ) goto L_004284c0;
L_004284a7:; BB(0x004284a7);
    /* 004284a7: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 004284ac: push 0x652894 */ { u32 v = 0x652894u; r_esp -= 4; W32(r_esp, v); }
    /* 004284b1: push 0x65289c */ { u32 v = 0x65289cu; r_esp -= 4; W32(r_esp, v); }
    /* 004284b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004284b8: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x4284bdu); f_0060f9f3();
    /* 004284bd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004284c0:; BB(0x004284c0);
    /* 004284c0: jmp 0x428680 */ goto L_00428680;
L_004284c5:; BB(0x004284c5);
    /* 004284c5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004284c8: cmp eax, dword ptr [ebp - 0xf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff0cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004284ce: jg 0x4284e6 */ if ((!fZ&&fS==fO)) goto L_004284e6;
L_004284d0:; BB(0x004284d0);
    /* 004284d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004284d3: cmp ecx, dword ptr [ebp - 0xf4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff0cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004284d9: jne 0x428510 */ if (!fZ) goto L_00428510;
L_004284db:; BB(0x004284db);
    /* 004284db: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004284de: cmp edx, dword ptr [ebp - 0xf0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004284e4: jle 0x428510 */ if ((fZ||fS!=fO)) goto L_00428510;
L_004284e6:; BB(0x004284e6);
    /* 004284e6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004284e9: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x4284eeu); f_004259a0();
    /* 004284ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004284f0: je 0x42850b */ if (fZ) goto L_0042850b;
L_004284f2:; BB(0x004284f2);
    /* 004284f2: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 004284f7: push 0x6528bc */ { u32 v = 0x6528bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004284fc: push 0x6528cc */ { u32 v = 0x6528ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00428501: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00428503: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x428508u); f_0060f9f3();
    /* 00428508: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042850b:; BB(0x0042850b);
    /* 0042850b: jmp 0x428680 */ goto L_00428680;
L_00428510:; BB(0x00428510);
    /* 00428510: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00428513: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428516: jge 0x428571 */ if ((fS==fO)) goto L_00428571;
L_00428518:; BB(0x00428518);
    /* 00428518: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042851f: jne 0x428571 */ if (!fZ) goto L_00428571;
L_00428521:; BB(0x00428521);
    /* 00428521: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428528: je 0x42852c */ if (fZ) goto L_0042852c;
L_0042852a:; BB(0x0042852a);
    /* 0042852a: jmp 0x428571 */ goto L_00428571;
L_0042852c:; BB(0x0042852c);
    /* 0042852c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042852f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428530: push 0x6528fc */ { u32 v = 0x6528fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00428535: lea edx, [ebp - 0xe8] */ r_edx = (u32)(r_ebp+0xffffff18u);
    /* 0042853b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042853c: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x428542u); call_ind(t); }
    /* 00428542: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428545: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00428548: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x42854du); f_004259a0();
    /* 0042854d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042854f: je 0x42856c */ if (fZ) goto L_0042856c;
L_00428551:; BB(0x00428551);
    /* 00428551: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00428556: push 0x652914 */ { u32 v = 0x652914u; r_esp -= 4; W32(r_esp, v); }
    /* 0042855b: lea eax, [ebp - 0xe8] */ r_eax = (u32)(r_ebp+0xffffff18u);
    /* 00428561: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428562: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00428564: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x428569u); f_0060f9f3();
    /* 00428569: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042856c:; BB(0x0042856c);
    /* 0042856c: jmp 0x428680 */ goto L_00428680;
L_00428571:; BB(0x00428571);
    /* 00428571: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00428577: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042857a: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042857d: jle 0x428590 */ if ((fZ||fS!=fO)) goto L_00428590;
L_0042857f:; BB(0x0042857f);
    /* 0042857f: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428583: je 0x428590 */ if (fZ) goto L_00428590;
L_00428585:; BB(0x00428585);
    /* 00428585: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00428588: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 0042858e: jmp 0x42859f */ goto L_0042859f;
L_00428590:; BB(0x00428590);
    /* 00428590: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 00428596: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00428599: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
L_0042859f:; BB(0x0042859f);
    /* 0042859f: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 004285a5: sub ecx, dword ptr [ebp - 0x104] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffefcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004285ab: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004285ae: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 004285b4: jmp 0x428602 */ goto L_00428602;
L_004285b6:; BB(0x004285b6);
    /* 004285b6: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004285bd: jne 0x4285c4 */ if (!fZ) goto L_004285c4;
L_004285bf:; BB(0x004285bf);
    /* 004285bf: jmp 0x428680 */ goto L_00428680;
L_004285c4:; BB(0x004285c4);
    /* 004285c4: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004285ca: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004285cd: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004285d0: jge 0x4285ea */ if ((fS==fO)) goto L_004285ea;
L_004285d2:; BB(0x004285d2);
    /* 004285d2: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
    /* 004285dc: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004285e2: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 004285e8: jmp 0x428602 */ goto L_00428602;
L_004285ea:; BB(0x004285ea);
    /* 004285ea: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004285f0: sub ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004285f3: mov dword ptr [ebp - 0xf8], ecx */ W32((u32)(r_ebp+0xffffff08u), r_ecx);
    /* 004285f9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004285fc: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
L_00428602:; BB(0x00428602);
    /* 00428602: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 00428608: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0042860b: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0042860e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042860f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00428612: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00428615: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x42861au); f_004267ae();
    /* 0042861a: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 00428620: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00428623: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00428626: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428627: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 0042862d: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00428630: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00428636: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 0042863a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0042863d: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00428640: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 00428646: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00428649: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0042864f: lea eax, [edx + eax + 0x6c] */ r_eax = (u32)(r_edx+r_eax+0x6cu);
    /* 00428653: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00428656: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00428659: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042865b: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x42865eu); call_ind(t); }
    /* 0042865e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00428661: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x428666u); f_004259a0();
    /* 00428666: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428668: je 0x428680 */ if (fZ) goto L_00428680;
L_0042866a:; BB(0x0042866a);
    /* 0042866a: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0042866f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00428672: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00428678: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042867b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042867d: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x428680u); call_ind(t); }
L_00428680:; BB(0x00428680);
    /* 00428680: mov esp, ebp */ r_esp = r_ebp;
    /* 00428682: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428683: ret 0x10 */ FN_RET(0x004282cb); r_esp += 20; return;
}

void f_00428686(void) /* FUN_00428686 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428686);
    /* 00428686: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428687: mov ebp, esp */ r_ebp = r_esp;
    /* 00428689: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042868c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042868f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00428696: jmp 0x4286a1 */ goto L_004286a1;
L_00428698:; BB(0x00428698);
    /* 00428698: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042869b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042869e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004286a1:; BB(0x004286a1);
    /* 004286a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004286a4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004286a7: cmp edx, dword ptr [ecx + 0xb4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xb4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004286ad: jge 0x42871e */ if ((fS==fO)) goto L_0042871e;
L_004286af:; BB(0x004286af);
    /* 004286af: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004286b6: jmp 0x4286c1 */ goto L_004286c1;
L_004286b8:; BB(0x004286b8);
    /* 004286b8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004286bb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004286be: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004286c1:; BB(0x004286c1);
    /* 004286c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004286c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004286c7: cmp edx, dword ptr [ecx + 0xb8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004286cd: jge 0x428719 */ if ((fS==fO)) goto L_00428719;
L_004286cf:; BB(0x004286cf);
    /* 004286cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004286d2: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004286d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004286d8: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 004286dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004286df: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 004286e2: call 0x426f9e */ r_esp -= 4; W32(r_esp, 0x4286e7u); f_00426f9e();
    /* 004286e7: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004286ea: jne 0x428717 */ if (!fZ) goto L_00428717;
L_004286ec:; BB(0x004286ec);
    /* 004286ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004286ef: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004286f2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004286f5: lea eax, [edx + ecx + 0x6c] */ r_eax = (u32)(r_edx+r_ecx+0x6cu);
    /* 004286f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004286fc: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004286ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428702: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00428705: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00428708: lea edx, [eax + edx + 0x6c] */ r_edx = (u32)(r_eax+r_edx+0x6cu);
    /* 0042870c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042870f: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00428712: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428714: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x428717u); call_ind(t); }
L_00428717:; BB(0x00428717);
    /* 00428717: jmp 0x4286b8 */ goto L_004286b8;
L_00428719:; BB(0x00428719);
    /* 00428719: jmp 0x428698 */ goto L_00428698;
L_0042871e:; BB(0x0042871e);
    /* 0042871e: mov esp, ebp */ r_esp = r_ebp;
    /* 00428720: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428721: ret 4 */ FN_RET(0x00428686); r_esp += 8; return;
}

void f_00428724(void) /* FUN_00428724 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428724);
    /* 00428724: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428725: mov ebp, esp */ r_ebp = r_esp;
    /* 00428727: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428728: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042872b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042872e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042872f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428732: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428733: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00428736: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00428739: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042873c: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 00428740: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00428743: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00428746: call 0x427323 */ r_esp -= 4; W32(r_esp, 0x42874bu); f_00427323();
    /* 0042874b: mov esp, ebp */ r_esp = r_ebp;
    /* 0042874d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042874e: ret 0x10 */ FN_RET(0x00428724); r_esp += 20; return;
}

void f_00428751(void) /* FUN_00428751 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428751);
    /* 00428751: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428752: mov ebp, esp */ r_ebp = r_esp;
    /* 00428754: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428755: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00428758: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042875b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042875c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042875f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428760: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00428763: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00428766: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428769: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 0042876d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00428770: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00428773: call 0x427348 */ r_esp -= 4; W32(r_esp, 0x428778u); f_00427348();
    /* 00428778: mov esp, ebp */ r_esp = r_ebp;
    /* 0042877a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042877b: ret 0x10 */ FN_RET(0x00428751); r_esp += 20; return;
}

void f_0042877e(void) /* FUN_0042877e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042877e);
    /* 0042877e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042877f: mov ebp, esp */ r_ebp = r_esp;
    /* 00428781: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428782: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00428785: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00428788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428789: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042878c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042878d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00428790: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00428793: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428796: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 0042879a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0042879d: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004287a0: call 0x42736d */ r_esp -= 4; W32(r_esp, 0x4287a5u); f_0042736d();
    /* 004287a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004287a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004287a8: ret 0x10 */ FN_RET(0x0042877e); r_esp += 20; return;
}

void f_004287ab(void) /* FUN_004287ab */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004287ab);
    /* 004287ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004287ac: mov ebp, esp */ r_ebp = r_esp;
    /* 004287ae: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004287b1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004287b4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004287bb: jmp 0x4287c6 */ goto L_004287c6;
L_004287bd:; BB(0x004287bd);
    /* 004287bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004287c0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004287c3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004287c6:; BB(0x004287c6);
    /* 004287c6: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004287ca: jge 0x428829 */ if ((fS==fO)) goto L_00428829;
L_004287cc:; BB(0x004287cc);
    /* 004287cc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004287d3: jmp 0x4287de */ goto L_004287de;
L_004287d5:; BB(0x004287d5);
    /* 004287d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004287d8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004287db: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004287de:; BB(0x004287de);
    /* 004287de: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004287e2: jge 0x428827 */ if ((fS==fO)) goto L_00428827;
L_004287e4:; BB(0x004287e4);
    /* 004287e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004287e7: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004287ea: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004287ed: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 004287f1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004287f4: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004287f8: je 0x428825 */ if (fZ) goto L_00428825;
L_004287fa:; BB(0x004287fa);
    /* 004287fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004287fd: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00428800: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00428803: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 00428807: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042880a: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0042880d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428810: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00428813: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00428816: lea edx, [eax + edx + 0x6c] */ r_edx = (u32)(r_eax+r_edx+0x6cu);
    /* 0042881a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042881d: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00428820: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428822: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x428825u); call_ind(t); }
L_00428825:; BB(0x00428825);
    /* 00428825: jmp 0x4287d5 */ goto L_004287d5;
L_00428827:; BB(0x00428827);
    /* 00428827: jmp 0x4287bd */ goto L_004287bd;
L_00428829:; BB(0x00428829);
    /* 00428829: mov esp, ebp */ r_esp = r_ebp;
    /* 0042882b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042882c: ret  */ FN_RET(0x004287ab); r_esp += 4; return;
}

void f_0042882d(void) /* FUN_0042882d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042882d);
    /* 0042882d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042882e: mov ebp, esp */ r_ebp = r_esp;
    /* 00428830: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428833: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00428836: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0042883d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00428844: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042884b: jmp 0x428856 */ goto L_00428856;
L_0042884d:; BB(0x0042884d);
    /* 0042884d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428850: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00428853: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00428856:; BB(0x00428856);
    /* 00428856: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042885a: jge 0x4288b9 */ if ((fS==fO)) goto L_004288b9;
L_0042885c:; BB(0x0042885c);
    /* 0042885c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00428863: jmp 0x42886e */ goto L_0042886e;
L_00428865:; BB(0x00428865);
    /* 00428865: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428868: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042886b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0042886e:; BB(0x0042886e);
    /* 0042886e: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428872: jge 0x4288b7 */ if ((fS==fO)) goto L_004288b7;
L_00428874:; BB(0x00428874);
    /* 00428874: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428877: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042887a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042887d: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 00428881: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428884: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428888: je 0x4288b5 */ if (fZ) goto L_004288b5;
L_0042888a:; BB(0x0042888a);
    /* 0042888a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042888d: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00428890: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00428893: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 00428897: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042889a: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0042889d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004288a0: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004288a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004288a6: lea edx, [eax + edx + 0x6c] */ r_edx = (u32)(r_eax+r_edx+0x6cu);
    /* 004288aa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004288ad: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004288b0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004288b2: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x4288b5u); call_ind(t); }
L_004288b5:; BB(0x004288b5);
    /* 004288b5: jmp 0x428865 */ goto L_00428865;
L_004288b7:; BB(0x004288b7);
    /* 004288b7: jmp 0x42884d */ goto L_0042884d;
L_004288b9:; BB(0x004288b9);
    /* 004288b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004288bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004288bc: ret  */ FN_RET(0x0042882d); r_esp += 4; return;
}

void f_004288bd(void) /* FUN_004288bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004288bd);
    /* 004288bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004288be: mov ebp, esp */ r_ebp = r_esp;
    /* 004288c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004288c1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004288c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004288c7: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x4288ccu); f_005d5d20();
    /* 004288cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004288cf: mov dword ptr [eax], 0x6342a4 */ W32((u32)(r_eax), 0x6342a4u);
    /* 004288d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004288d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004288da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004288db: ret  */ FN_RET(0x004288bd); r_esp += 4; return;
}

void f_004288dc(void) /* FUN_004288dc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004288dc);
    /* 004288dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004288dd: mov ebp, esp */ r_ebp = r_esp;
    /* 004288df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004288e0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004288e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004288e6: mov dword ptr [eax], 0x6342a4 */ W32((u32)(r_eax), 0x6342a4u);
    /* 004288ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004288ef: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x4288f4u); f_005d5dfb();
    /* 004288f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004288f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004288f7: ret  */ FN_RET(0x004288dc); r_esp += 4; return;
}

void f_004288f8(void) /* FUN_004288f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004288f8);
    /* 004288f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004288f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004288fb: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004288fe: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00428901: mov eax, dword ptr [0x6f5b60] */ r_eax = R32((u32)(0x6f5b60u));
    /* 00428906: add eax, 0x9c */ {  u32 a = r_eax; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042890b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042890c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0042890f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428910: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x428915u); f_00624510();
    /* 00428915: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428918: cmp dword ptr [0x6f5b60], 0 */ {  u32 a = R32((u32)(0x6f5b60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042891f: je 0x4289d1 */ if (fZ) goto L_004289d1;
L_00428925:; BB(0x00428925);
    /* 00428925: mov edx, dword ptr [0x6f5b60] */ r_edx = R32((u32)(0x6f5b60u));
    /* 0042892b: mov dword ptr [edx + 0xc4], 1 */ W32((u32)(r_edx+0xc4u), 0x1u);
    /* 00428935: mov ecx, dword ptr [0x6f5b60] */ r_ecx = R32((u32)(0x6f5b60u));
    /* 0042893b: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x428940u); f_005e03cc();
    /* 00428940: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428947: jne 0x4289bc */ if (!fZ) goto L_004289bc;
L_00428949:; BB(0x00428949);
    /* 00428949: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042894b: mov eax, dword ptr [0x6f5b60] */ r_eax = R32((u32)(0x6f5b60u));
    /* 00428950: add eax, 0x9c */ {  u32 a = r_eax; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00428955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428956: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0042895c: call 0x45c436 */ r_esp -= 4; W32(r_esp, 0x428961u); f_0045c436();
    /* 00428961: movsx ecx, byte ptr [eax + 0x65] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x65u));
    /* 00428965: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428968: jne 0x4289bc */ if (!fZ) goto L_004289bc;
L_0042896a:; BB(0x0042896a);
    /* 0042896a: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042896f: push 0x65291c */ { u32 v = 0x65291cu; r_esp -= 4; W32(r_esp, v); }
    /* 00428974: push 0x652924 */ { u32 v = 0x652924u; r_esp -= 4; W32(r_esp, v); }
    /* 00428979: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042897b: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x428980u); f_0060f9f3();
    /* 00428980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428983: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00428986: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428987: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 0042898c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0042898f: call 0x449b8e */ r_esp -= 4; W32(r_esp, 0x428994u); f_00449b8e();
    /* 00428994: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0042899a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0042899d: call 0x449b0a */ r_esp -= 4; W32(r_esp, 0x4289a2u); f_00449b0a();
    /* 004289a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004289a4: mov edx, dword ptr [0x6f5b60] */ r_edx = R32((u32)(0x6f5b60u));
    /* 004289aa: add edx, 0x9c */ {  u32 a = r_edx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004289b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004289b1: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004289b7: call 0x45d518 */ r_esp -= 4; W32(r_esp, 0x4289bcu); f_0045d518();
L_004289bc:; BB(0x004289bc);
    /* 004289bc: mov ecx, dword ptr [0x6f5b60] */ r_ecx = R32((u32)(0x6f5b60u));
    /* 004289c2: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x4289c7u); f_005e0a55();
    /* 004289c7: mov dword ptr [0x6f5b60], 0 */ W32((u32)(0x6f5b60u), 0x0u);
L_004289d1:; BB(0x004289d1);
    /* 004289d1: mov esp, ebp */ r_esp = r_ebp;
    /* 004289d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004289d4: ret  */ FN_RET(0x004288f8); r_esp += 4; return;
}

void f_004289d5(void) /* FUN_004289d5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004289d5);
    /* 004289d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004289d6: mov ebp, esp */ r_ebp = r_esp;
    /* 004289d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004289d9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004289dc: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004289df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004289e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004289e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004289e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004289e7: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x4289ecu); f_005d80f0();
    /* 004289ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004289ef: mov dword ptr [edx], 0x634314 */ W32((u32)(r_edx), 0x634314u);
    /* 004289f5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004289f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004289f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004289fc: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428a02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428a03: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x428a08u); f_00624510();
    /* 00428a08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428a0b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428a0e: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 00428a18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428a1b: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 00428a25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428a28: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 00428a32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428a35: mov dword ptr [edx + 0x98], 0 */ W32((u32)(r_edx+0x98u), 0x0u);
    /* 00428a3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428a42: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
    /* 00428a4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428a4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00428a51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428a52: ret 0xc */ FN_RET(0x004289d5); r_esp += 16; return;
}

void f_00428a55(void) /* FUN_00428a55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428a55);
    /* 00428a55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428a56: mov ebp, esp */ r_ebp = r_esp;
    /* 00428a58: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428a5b: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00428a5e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428a61: mov dword ptr [eax], 0x634314 */ W32((u32)(r_eax), 0x634314u);
    /* 00428a67: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428a6a: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428a71: je 0x428ab0 */ if (fZ) goto L_00428ab0;
L_00428a73:; BB(0x00428a73);
    /* 00428a73: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428a76: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00428a7c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00428a7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428a82: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00428a85: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428a89: je 0x428a9c */ if (fZ) goto L_00428a9c;
L_00428a8b:; BB(0x00428a8b);
    /* 00428a8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428a8d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428a90: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428a92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428a95: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x428a97u); call_ind(t); }
    /* 00428a97: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00428a9a: jmp 0x428aa3 */ goto L_00428aa3;
L_00428a9c:; BB(0x00428a9c);
    /* 00428a9c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00428aa3:; BB(0x00428aa3);
    /* 00428aa3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428aa6: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
L_00428ab0:; BB(0x00428ab0);
    /* 00428ab0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428ab3: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428aba: je 0x428af9 */ if (fZ) goto L_00428af9;
L_00428abc:; BB(0x00428abc);
    /* 00428abc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428abf: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00428ac5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00428ac8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00428acb: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00428ace: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428ad2: je 0x428ae5 */ if (fZ) goto L_00428ae5;
L_00428ad4:; BB(0x00428ad4);
    /* 00428ad4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ad6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00428ad9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428adb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00428ade: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x428ae0u); call_ind(t); }
    /* 00428ae0: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00428ae3: jmp 0x428aec */ goto L_00428aec;
L_00428ae5:; BB(0x00428ae5);
    /* 00428ae5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00428aec:; BB(0x00428aec);
    /* 00428aec: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428aef: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
L_00428af9:; BB(0x00428af9);
    /* 00428af9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428afc: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428b03: je 0x428b42 */ if (fZ) goto L_00428b42;
L_00428b05:; BB(0x00428b05);
    /* 00428b05: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428b08: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00428b0e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00428b11: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00428b14: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00428b17: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428b1b: je 0x428b2e */ if (fZ) goto L_00428b2e;
L_00428b1d:; BB(0x00428b1d);
    /* 00428b1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b1f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00428b22: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428b24: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00428b27: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x428b29u); call_ind(t); }
    /* 00428b29: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00428b2c: jmp 0x428b35 */ goto L_00428b35;
L_00428b2e:; BB(0x00428b2e);
    /* 00428b2e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00428b35:; BB(0x00428b35);
    /* 00428b35: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428b38: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
L_00428b42:; BB(0x00428b42);
    /* 00428b42: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428b45: cmp dword ptr [edx + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428b4c: je 0x428b8b */ if (fZ) goto L_00428b8b;
L_00428b4e:; BB(0x00428b4e);
    /* 00428b4e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428b51: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00428b57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00428b5a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00428b5d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00428b60: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428b64: je 0x428b77 */ if (fZ) goto L_00428b77;
L_00428b66:; BB(0x00428b66);
    /* 00428b66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b68: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00428b6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428b6d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00428b70: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x428b72u); call_ind(t); }
    /* 00428b72: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00428b75: jmp 0x428b7e */ goto L_00428b7e;
L_00428b77:; BB(0x00428b77);
    /* 00428b77: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00428b7e:; BB(0x00428b7e);
    /* 00428b7e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428b81: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
L_00428b8b:; BB(0x00428b8b);
    /* 00428b8b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428b8e: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x428b93u); f_005d8154();
    /* 00428b93: mov esp, ebp */ r_esp = r_ebp;
    /* 00428b95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428b96: ret  */ FN_RET(0x00428a55); r_esp += 4; return;
}

void f_00428b97(void) /* FUN_00428b97 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428b97);
    /* 00428b97: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428b98: mov ebp, esp */ r_ebp = r_esp;
    /* 00428b9a: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428b9d: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00428ba0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ba2: push 0x65299c */ { u32 v = 0x65299cu; r_esp -= 4; W32(r_esp, v); }
    /* 00428ba7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428baa: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x428bafu); f_005d825e();
    /* 00428baf: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428bb2: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428bb9: jne 0x428bf1 */ if (!fZ) goto L_00428bf1;
L_00428bbb:; BB(0x00428bbb);
    /* 00428bbb: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00428bc0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x428bc5u); f_0048ab58();
    /* 00428bc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428bc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00428bcb: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428bcf: je 0x428bde */ if (fZ) goto L_00428bde;
L_00428bd1:; BB(0x00428bd1);
    /* 00428bd1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00428bd4: call 0x4288bd */ r_esp -= 4; W32(r_esp, 0x428bd9u); f_004288bd();
    /* 00428bd9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00428bdc: jmp 0x428be5 */ goto L_00428be5;
L_00428bde:; BB(0x00428bde);
    /* 00428bde: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00428be5:; BB(0x00428be5);
    /* 00428be5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428be8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00428beb: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
L_00428bf1:; BB(0x00428bf1);
    /* 00428bf1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428bf4: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00428bfa: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428bfd: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00428c00: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00428c05: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428c08: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00428c0e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428c11: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00428c17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428c19: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x428c1cu); call_ind(t); }
    /* 00428c1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c20: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428c23: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00428c29: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428c2c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00428c32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428c34: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x428c37u); call_ind(t); }
    /* 00428c37: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c39: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c3b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c3d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c3f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428c42: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00428c48: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x428c4du); f_005d5ff2();
    /* 00428c4d: push 0x6529b0 */ { u32 v = 0x6529b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c52: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428c55: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00428c5b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428c5e: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00428c64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428c66: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x428c69u); call_ind(t); }
    /* 00428c69: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c6b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c6d: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c6f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428c72: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00428c78: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428c7b: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00428c81: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428c83: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x428c86u); call_ind(t); }
    /* 00428c86: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c8b: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00428c8d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428c90: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00428c96: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428c99: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00428c9f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428ca1: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x428ca4u); call_ind(t); }
    /* 00428ca4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ca6: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428ca9: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00428caf: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428cb2: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00428cb8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428cba: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x428cbdu); call_ind(t); }
    /* 00428cbd: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00428cbf: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428cc2: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00428cc8: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x428ccdu); f_005d65d6();
    /* 00428ccd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ccf: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428cd2: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428cd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428cd9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00428cdf: call 0x45c436 */ r_esp -= 4; W32(r_esp, 0x428ce4u); f_0045c436();
    /* 00428ce4: add eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00428ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428ce8: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00428ceb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428cec: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x428cf1u); f_00624510();
    /* 00428cf1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428cf4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428cf7: cmp dword ptr [eax + 0x94], 0 */ {  u32 a = R32((u32)(r_eax+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428cfe: jne 0x428d36 */ if (!fZ) goto L_00428d36;
L_00428d00:; BB(0x00428d00);
    /* 00428d00: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00428d05: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x428d0au); f_0048ab58();
    /* 00428d0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428d0d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00428d10: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428d14: je 0x428d23 */ if (fZ) goto L_00428d23;
L_00428d16:; BB(0x00428d16);
    /* 00428d16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00428d19: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x428d1eu); f_005e8590();
    /* 00428d1e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00428d21: jmp 0x428d2a */ goto L_00428d2a;
L_00428d23:; BB(0x00428d23);
    /* 00428d23: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00428d2a:; BB(0x00428d2a);
    /* 00428d2a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428d2d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00428d30: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
L_00428d36:; BB(0x00428d36);
    /* 00428d36: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428d39: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00428d3f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428d42: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00428d45: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00428d47: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428d4a: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00428d50: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x428d55u); f_005e87aa();
    /* 00428d55: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00428d58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428d59: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428d5c: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 00428d62: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428d65: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 00428d6b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428d6d: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x428d70u); call_ind(t); }
    /* 00428d70: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428d73: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00428d79: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428d7c: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00428d82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428d84: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x428d87u); call_ind(t); }
    /* 00428d87: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00428d89: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428d8c: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00428d92: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428d95: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00428d9b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428d9d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x428da0u); call_ind(t); }
    /* 00428da0: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00428da5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428da8: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00428dae: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x428db3u); f_005e8740();
    /* 00428db3: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00428db5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428db8: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00428dbe: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x428dc3u); f_005e8775();
    /* 00428dc3: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 00428dc5: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00428dc7: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428dca: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 00428dd0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428dd3: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 00428dd9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428ddb: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x428ddeu); call_ind(t); }
    /* 00428dde: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428de1: cmp dword ptr [ecx + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428de8: jne 0x428e20 */ if (!fZ) goto L_00428e20;
L_00428dea:; BB(0x00428dea);
    /* 00428dea: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00428def: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x428df4u); f_0048ab58();
    /* 00428df4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428df7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00428dfa: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428dfe: je 0x428e0d */ if (fZ) goto L_00428e0d;
L_00428e00:; BB(0x00428e00);
    /* 00428e00: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428e03: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x428e08u); f_005e8590();
    /* 00428e08: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00428e0b: jmp 0x428e14 */ goto L_00428e14;
L_00428e0d:; BB(0x00428e0d);
    /* 00428e0d: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00428e14:; BB(0x00428e14);
    /* 00428e14: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e17: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00428e1a: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
L_00428e20:; BB(0x00428e20);
    /* 00428e20: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e23: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 00428e29: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e2c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00428e2f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e31: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e34: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00428e3a: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x428e3fu); f_005e87aa();
    /* 00428e3f: push 0x6f5b70 */ { u32 v = 0x6f5b70u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e44: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e47: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 00428e4d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e50: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 00428e56: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428e58: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x428e5bu); call_ind(t); }
    /* 00428e5b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e5e: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00428e64: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e67: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00428e6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428e6f: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x428e72u); call_ind(t); }
    /* 00428e72: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e74: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e77: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00428e7d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e80: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00428e86: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428e88: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x428e8bu); call_ind(t); }
    /* 00428e8b: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e90: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e93: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00428e99: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x428e9eu); f_005e8740();
    /* 00428e9e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00428ea0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428ea3: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00428ea9: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x428eaeu); f_005e8775();
    /* 00428eae: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00428eb0: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00428eb2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428eb5: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 00428ebb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428ebe: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 00428ec4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428ec6: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x428ec9u); call_ind(t); }
    /* 00428ec9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428ecc: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428ed3: jne 0x428f08 */ if (!fZ) goto L_00428f08;
L_00428ed5:; BB(0x00428ed5);
    /* 00428ed5: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ed7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x428edcu); f_0048ab58();
    /* 00428edc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428edf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00428ee2: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428ee6: je 0x428ef5 */ if (fZ) goto L_00428ef5;
L_00428ee8:; BB(0x00428ee8);
    /* 00428ee8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428eeb: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x428ef0u); f_005e3fb0();
    /* 00428ef0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00428ef3: jmp 0x428efc */ goto L_00428efc;
L_00428ef5:; BB(0x00428ef5);
    /* 00428ef5: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00428efc:; BB(0x00428efc);
    /* 00428efc: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428eff: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00428f02: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
L_00428f08:; BB(0x00428f08);
    /* 00428f08: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428f0b: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00428f11: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428f14: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00428f17: push 0x441 */ { u32 v = 0x441u; r_esp -= 4; W32(r_esp, v); }
    /* 00428f1c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428f1f: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00428f25: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x428f2au); f_005ea0c3();
    /* 00428f2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428f2c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428f2f: add edx, 0x9c */ {  u32 a = r_edx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00428f35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428f36: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00428f3c: call 0x45c436 */ r_esp -= 4; W32(r_esp, 0x428f41u); f_0045c436();
    /* 00428f41: movsx eax, byte ptr [eax + 0x65] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x65u));
    /* 00428f45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428f46: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428f49: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00428f4f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x428f54u); f_005ea1cf();
    /* 00428f54: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428f57: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 00428f5d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428f60: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 00428f66: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428f68: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x428f6bu); call_ind(t); }
    /* 00428f6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428f6d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428f70: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00428f76: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428f79: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00428f7f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428f81: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x428f84u); call_ind(t); }
    /* 00428f84: mov esp, ebp */ r_esp = r_ebp;
    /* 00428f86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428f87: ret  */ FN_RET(0x00428b97); r_esp += 4; return;
}

void f_00428f88(void) /* FUN_00428f88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428f88);
    /* 00428f88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428f89: mov ebp, esp */ r_ebp = r_esp;
    /* 00428f8b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428f8e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00428f91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428f94: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x428f99u); f_005e030e();
    /* 00428f99: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428f9c: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00428fa2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428fa5: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00428fab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428fad: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x428fb0u); call_ind(t); }
    /* 00428fb0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428fb3: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00428fb9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428fbc: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 00428fc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428fc4: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x428fc7u); call_ind(t); }
    /* 00428fc7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00428fc9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00428fcf: call 0x45b93e */ r_esp -= 4; W32(r_esp, 0x428fd4u); f_0045b93e();
    /* 00428fd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428fd6: je 0x429054 */ if (fZ) goto L_00429054;
L_00428fd8:; BB(0x00428fd8);
    /* 00428fd8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428fdb: add eax, 0x9c */ {  u32 a = r_eax; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00428fe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428fe1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428fe4: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00428fea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428fed: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00428ff3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428ff5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x428ff8u); call_ind(t); }
    /* 00428ff8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428ffb: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00429001: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429004: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0042900a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042900c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x42900fu); call_ind(t); }
    /* 0042900f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429012: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00429018: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042901b: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00429021: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429023: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x429026u); call_ind(t); }
L_00429026:; BB(0x00429026);
    /* 00429026: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429029: cmp dword ptr [eax + 0xc4], 0 */ {  u32 a = R32((u32)(r_eax+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429030: jne 0x429052 */ if (!fZ) goto L_00429052;
L_00429032:; BB(0x00429032);
    /* 00429032: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 00429038: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042903a: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 00429040: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x429043u); call_ind(t); }
    /* 00429043: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00429048: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0042904b: call 0x61d4b3 */ r_esp -= 4; W32(r_esp, 0x429050u); f_0061d4b3();
    /* 00429050: jmp 0x429026 */ goto L_00429026;
L_00429052:; BB(0x00429052);
    /* 00429052: jmp 0x42909b */ goto L_0042909b;
L_00429054:; BB(0x00429054);
    /* 00429054: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00429056: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x42905bu); f_0048ab58();
    /* 0042905b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042905e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00429061: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429065: je 0x429082 */ if (fZ) goto L_00429082;
L_00429067:; BB(0x00429067);
    /* 00429067: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429069: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042906c: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x429071u); f_005e6160();
    /* 00429071: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429074: mov dword ptr [ecx], 0x63432c */ W32((u32)(r_ecx), 0x63432cu);
    /* 0042907a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042907d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00429080: jmp 0x429089 */ goto L_00429089;
L_00429082:; BB(0x00429082);
    /* 00429082: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00429089:; BB(0x00429089);
    /* 00429089: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042908c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042908d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429090: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00429096: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x42909bu); f_005e40dc();
L_0042909b:; BB(0x0042909b);
    /* 0042909b: mov esp, ebp */ r_esp = r_ebp;
    /* 0042909d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042909e: ret  */ FN_RET(0x00428f88); r_esp += 4; return;
}

void f_0042909f(void) /* FUN_0042909f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042909f);
    /* 0042909f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004290a0: mov ebp, esp */ r_ebp = r_esp;
    /* 004290a2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004290a5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004290a8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004290ab: add eax, 0x9c */ {  u32 a = r_eax; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004290b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004290b1: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x4290b6u); f_00624990();
    /* 004290b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004290b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004290bc: sub eax, dword ptr [ecx + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xc0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004290c2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004290c5: movsx eax, byte ptr [edx + eax + 0x9c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x9cu));
    /* 004290cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004290ce: push 0x6529b4 */ { u32 v = 0x6529b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004290d3: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 004290d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004290d7: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4290ddu); call_ind(t); }
    /* 004290dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004290e0: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 004290e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004290e4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004290e7: add eax, 0xb0 */ {  u32 a = r_eax; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004290ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004290ed: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x4290f2u); f_00624520();
    /* 004290f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004290f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004290f8: add ecx, 0xb0 */ {  u32 a = r_ecx; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004290fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004290ff: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429102: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 00429108: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042910b: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 00429111: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00429113: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x429116u); call_ind(t); }
    /* 00429116: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429119: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0042911f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429122: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00429128: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042912a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x42912du); call_ind(t); }
    /* 0042912d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429130: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00429136: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00429139: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042913c: mov dword ptr [edx + 0xc0], ecx */ W32((u32)(r_edx+0xc0u), r_ecx);
    /* 00429142: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429145: mov eax, dword ptr [eax + 0xc0] */ r_eax = R32((u32)(r_eax+0xc0u));
    /* 0042914b: mov esp, ebp */ r_esp = r_ebp;
    /* 0042914d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042914e: ret  */ FN_RET(0x0042909f); r_esp += 4; return;
}

void f_0042914f(void) /* FUN_0042914f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042914f);
    /* 0042914f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429150: mov ebp, esp */ r_ebp = r_esp;
    /* 00429152: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429155: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429158: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042915b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042915c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042915f: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x429164u); f_005e626d();
    /* 00429164: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429167: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0042916a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0042916d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429171: je 0x429188 */ if (fZ) goto L_00429188;
L_00429173:; BB(0x00429173);
    /* 00429173: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429177: je 0x4291d0 */ if (fZ) goto L_004291d0;
L_00429179:; BB(0x00429179);
    /* 00429179: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042917d: je 0x42921b */ if (fZ) goto L_0042921b;
L_00429183:; BB(0x00429183);
    /* 00429183: jmp 0x429237 */ goto L_00429237;
L_00429188:; BB(0x00429188);
    /* 00429188: push 0x6f5b74 */ { u32 v = 0x6f5b74u; r_esp -= 4; W32(r_esp, v); }
    /* 0042918d: mov eax, dword ptr [0x6f5b60] */ r_eax = R32((u32)(0x6f5b60u));
    /* 00429192: add eax, 0xb0 */ {  u32 a = r_eax; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429197: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429198: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x42919du); f_00624510();
    /* 0042919d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004291a0: mov ecx, dword ptr [0x6f5b60] */ r_ecx = R32((u32)(0x6f5b60u));
    /* 004291a6: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004291ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004291ad: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x4291b2u); f_00624990();
    /* 004291b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004291b5: mov edx, dword ptr [0x6f5b60] */ r_edx = R32((u32)(0x6f5b60u));
    /* 004291bb: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 004291c1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004291c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004291c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004291c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004291cb: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4291ceu); call_ind(t); }
    /* 004291ce: jmp 0x429237 */ goto L_00429237;
L_004291d0:; BB(0x004291d0);
    /* 004291d0: mov ecx, dword ptr [0x6f5b60] */ r_ecx = R32((u32)(0x6f5b60u));
    /* 004291d6: call 0x42909f */ r_esp -= 4; W32(r_esp, 0x4291dbu); f_0042909f();
    /* 004291db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004291dd: je 0x4291ee */ if (fZ) goto L_004291ee;
L_004291df:; BB(0x004291df);
    /* 004291df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004291e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004291e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004291e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004291e9: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4291ecu); call_ind(t); }
    /* 004291ec: jmp 0x4291fb */ goto L_004291fb;
L_004291ee:; BB(0x004291ee);
    /* 004291ee: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004291f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004291f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004291f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004291f8: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4291fbu); call_ind(t); }
L_004291fb:; BB(0x004291fb);
    /* 004291fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004291fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429201: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00429203: push 0x186a5 */ { u32 v = 0x186a5u; r_esp -= 4; W32(r_esp, v); }
    /* 00429208: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0042920e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00429211: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00429214: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x429219u); f_005e8389();
    /* 00429219: jmp 0x429237 */ goto L_00429237;
L_0042921b:; BB(0x0042921b);
    /* 0042921b: mov eax, dword ptr [0x6f5b60] */ r_eax = R32((u32)(0x6f5b60u));
    /* 00429220: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00429226: mov edx, dword ptr [0x6f5b60] */ r_edx = R32((u32)(0x6f5b60u));
    /* 0042922c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00429232: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429234: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x429237u); call_ind(t); }
L_00429237:; BB(0x00429237);
    /* 00429237: mov esp, ebp */ r_esp = r_ebp;
    /* 00429239: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042923a: ret 4 */ FN_RET(0x0042914f); r_esp += 8; return;
}

void f_0042923d(void) /* FUN_0042923d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042923d);
    /* 0042923d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042923e: mov ebp, esp */ r_ebp = r_esp;
    /* 00429240: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429241: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429244: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429247: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x42924cu); f_005d5d20();
    /* 0042924c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042924f: mov dword ptr [eax], 0x634344 */ W32((u32)(r_eax), 0x634344u);
    /* 00429255: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429258: mov esp, ebp */ r_esp = r_ebp;
    /* 0042925a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042925b: ret  */ FN_RET(0x0042923d); r_esp += 4; return;
}

void f_0042925c(void) /* FUN_0042925c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042925c);
    /* 0042925c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042925d: mov ebp, esp */ r_ebp = r_esp;
    /* 0042925f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429260: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429263: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429266: mov dword ptr [eax], 0x634344 */ W32((u32)(r_eax), 0x634344u);
    /* 0042926c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042926f: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x429274u); f_005d5dfb();
    /* 00429274: mov esp, ebp */ r_esp = r_ebp;
    /* 00429276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429277: ret  */ FN_RET(0x0042925c); r_esp += 4; return;
}

void f_00429278(void) /* FUN_00429278 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429278);
    /* 00429278: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429279: mov ebp, esp */ r_ebp = r_esp;
    /* 0042927b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042927c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042927f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429282: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00429285: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x42928au); f_005e03cc();
    /* 0042928a: mov ecx, dword ptr [0x6f5b64] */ r_ecx = R32((u32)(0x6f5b64u));
    /* 00429290: mov dword ptr [ecx + 0xa8], 1 */ W32((u32)(r_ecx+0xa8u), 0x1u);
    /* 0042929a: mov ecx, dword ptr [0x6f5b64] */ r_ecx = R32((u32)(0x6f5b64u));
    /* 004292a0: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x4292a5u); f_005e0a55();
    /* 004292a5: mov dword ptr [0x6f5b64], 0 */ W32((u32)(0x6f5b64u), 0x0u);
    /* 004292af: mov esp, ebp */ r_esp = r_ebp;
    /* 004292b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004292b2: ret  */ FN_RET(0x00429278); r_esp += 4; return;
}

void f_004292b3(void) /* FUN_004292b3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004292b3);
    /* 004292b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004292b4: mov ebp, esp */ r_ebp = r_esp;
    /* 004292b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004292b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004292ba: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004292bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004292be: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004292c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004292c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004292c5: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x4292cau); f_005d80f0();
    /* 004292ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004292cd: mov dword ptr [edx], 0x6343b4 */ W32((u32)(r_edx), 0x6343b4u);
    /* 004292d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004292d6: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
    /* 004292e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004292e3: mov dword ptr [ecx + 0xa0], 0 */ W32((u32)(r_ecx+0xa0u), 0x0u);
    /* 004292ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004292f0: mov dword ptr [edx + 0xa4], 0 */ W32((u32)(r_edx+0xa4u), 0x0u);
    /* 004292fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004292fd: mov dword ptr [eax + 0xa8], 0 */ W32((u32)(r_eax+0xa8u), 0x0u);
    /* 00429307: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042930a: mov esp, ebp */ r_esp = r_ebp;
    /* 0042930c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042930d: ret 8 */ FN_RET(0x004292b3); r_esp += 12; return;
}

void f_00429310(void) /* FUN_00429310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429310);
    /* 00429310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429311: mov ebp, esp */ r_ebp = r_esp;
    /* 00429313: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429316: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00429319: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042931c: mov dword ptr [eax], 0x6343b4 */ W32((u32)(r_eax), 0x6343b4u);
    /* 00429322: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00429325: cmp dword ptr [ecx + 0x9c], 0 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042932c: je 0x42936b */ if (fZ) goto L_0042936b;
L_0042932e:; BB(0x0042932e);
    /* 0042932e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00429331: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00429337: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042933a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042933d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429340: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429344: je 0x429357 */ if (fZ) goto L_00429357;
L_00429346:; BB(0x00429346);
    /* 00429346: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00429348: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042934b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042934d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429350: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x429352u); call_ind(t); }
    /* 00429352: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00429355: jmp 0x42935e */ goto L_0042935e;
L_00429357:; BB(0x00429357);
    /* 00429357: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0042935e:; BB(0x0042935e);
    /* 0042935e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00429361: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
L_0042936b:; BB(0x0042936b);
    /* 0042936b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042936e: cmp dword ptr [edx + 0xa0], 0 */ {  u32 a = R32((u32)(r_edx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429375: je 0x4293b4 */ if (fZ) goto L_004293b4;
L_00429377:; BB(0x00429377);
    /* 00429377: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042937a: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00429380: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00429383: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429386: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00429389: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042938d: je 0x4293a0 */ if (fZ) goto L_004293a0;
L_0042938f:; BB(0x0042938f);
    /* 0042938f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00429391: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429394: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429396: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429399: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x42939bu); call_ind(t); }
    /* 0042939b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042939e: jmp 0x4293a7 */ goto L_004293a7;
L_004293a0:; BB(0x004293a0);
    /* 004293a0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004293a7:; BB(0x004293a7);
    /* 004293a7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004293aa: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
L_004293b4:; BB(0x004293b4);
    /* 004293b4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004293b7: cmp dword ptr [ecx + 0xa4], 0 */ {  u32 a = R32((u32)(r_ecx+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004293be: je 0x4293fd */ if (fZ) goto L_004293fd;
L_004293c0:; BB(0x004293c0);
    /* 004293c0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004293c3: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004293c9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004293cc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004293cf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004293d2: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004293d6: je 0x4293e9 */ if (fZ) goto L_004293e9;
L_004293d8:; BB(0x004293d8);
    /* 004293d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004293da: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004293dd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004293df: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004293e2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4293e4u); call_ind(t); }
    /* 004293e4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004293e7: jmp 0x4293f0 */ goto L_004293f0;
L_004293e9:; BB(0x004293e9);
    /* 004293e9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004293f0:; BB(0x004293f0);
    /* 004293f0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004293f3: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
L_004293fd:; BB(0x004293fd);
    /* 004293fd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00429400: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x429405u); f_005d8154();
    /* 00429405: mov esp, ebp */ r_esp = r_ebp;
    /* 00429407: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429408: ret  */ FN_RET(0x00429310); r_esp += 4; return;
}

void f_00429409(void) /* FUN_00429409 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429409);
    /* 00429409: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042940a: mov ebp, esp */ r_ebp = r_esp;
    /* 0042940c: sub esp, 0x1b0 */ {  u32 a = r_esp; u32 b = 0x1b0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429412: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00429413: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00429414: mov dword ptr [ebp - 0x1a4], ecx */ W32((u32)(r_ebp+0xfffffe5cu), r_ecx);
    /* 0042941a: mov ecx, 0x4c */ r_ecx = 0x4cu;
    /* 0042941f: mov esi, 0x6529b8 */ r_esi = 0x6529b8u;
    /* 00429424: lea edi, [ebp - 0x194] */ r_edi = (u32)(r_ebp+0xfffffe6cu);
    /* 0042942a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0042942c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042942e: push 0x652ae8 */ { u32 v = 0x652ae8u; r_esp -= 4; W32(r_esp, v); }
    /* 00429433: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429439: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x42943eu); f_005d825e();
    /* 0042943e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429441: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429442: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429448: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042944e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042944f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x429454u); f_00624510();
    /* 00429454: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429457: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042945d: cmp dword ptr [edx + 0x9c], 0 */ {  u32 a = R32((u32)(r_edx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429464: jne 0x429593 */ if (!fZ) goto L_00429593;
L_0042946a:; BB(0x0042946a);
    /* 0042946a: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0042946f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x429474u); f_0048ab58();
    /* 00429474: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429477: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 0042947d: cmp dword ptr [ebp - 0x198], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429484: je 0x429499 */ if (fZ) goto L_00429499;
L_00429486:; BB(0x00429486);
    /* 00429486: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0042948c: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x429491u); f_005e8590();
    /* 00429491: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 00429497: jmp 0x4294a3 */ goto L_004294a3;
L_00429499:; BB(0x00429499);
    /* 00429499: mov dword ptr [ebp - 0x1a8], 0 */ W32((u32)(r_ebp+0xfffffe58u), 0x0u);
L_004294a3:; BB(0x004294a3);
    /* 004294a3: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004294a9: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 004294af: mov dword ptr [eax + 0x9c], ecx */ W32((u32)(r_eax+0x9cu), r_ecx);
    /* 004294b5: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004294bb: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004294c1: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004294c7: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004294ca: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004294d0: add edx, 0x8c */ {  u32 a = r_edx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004294d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004294d7: push 0x652af0 */ { u32 v = 0x652af0u; r_esp -= 4; W32(r_esp, v); }
    /* 004294dc: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 004294df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004294e0: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4294e6u); call_ind(t); }
    /* 004294e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004294e9: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 004294ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004294ed: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004294f3: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 004294f9: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004294ff: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 00429505: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00429507: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x42950au); call_ind(t); }
    /* 0042950a: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429510: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00429516: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042951c: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00429522: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429524: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x429527u); call_ind(t); }
    /* 00429527: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00429529: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042952f: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00429535: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x42953au); f_005e87aa();
    /* 0042953a: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 0042953f: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429545: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 0042954b: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x429550u); f_005e8740();
    /* 00429550: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00429552: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 00429557: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042955d: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 00429563: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429569: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 0042956f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00429571: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x429574u); call_ind(t); }
    /* 00429574: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00429576: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042957c: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00429582: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429588: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0042958e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429590: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x429593u); call_ind(t); }
L_00429593:; BB(0x00429593);
    /* 00429593: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429599: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004295a0: jne 0x4296dc */ if (!fZ) goto L_004296dc;
L_004295a6:; BB(0x004295a6);
    /* 004295a6: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 004295ab: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4295b0u); f_0048ab58();
    /* 004295b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004295b3: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 004295b9: cmp dword ptr [ebp - 0x19c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004295c0: je 0x4295d5 */ if (fZ) goto L_004295d5;
L_004295c2:; BB(0x004295c2);
    /* 004295c2: mov ecx, dword ptr [ebp - 0x19c] */ r_ecx = R32((u32)(r_ebp+0xfffffe64u));
    /* 004295c8: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4295cdu); f_005e8590();
    /* 004295cd: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
    /* 004295d3: jmp 0x4295df */ goto L_004295df;
L_004295d5:; BB(0x004295d5);
    /* 004295d5: mov dword ptr [ebp - 0x1ac], 0 */ W32((u32)(r_ebp+0xfffffe54u), 0x0u);
L_004295df:; BB(0x004295df);
    /* 004295df: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004295e5: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 004295eb: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 004295f1: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004295f7: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004295fd: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429603: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00429606: lea eax, [ebp - 0x194] */ r_eax = (u32)(r_ebp+0xfffffe6cu);
    /* 0042960c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042960d: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429613: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 00429619: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042961f: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00429625: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429627: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x42962au); call_ind(t); }
    /* 0042962a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0042962c: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429632: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00429638: call 0x5e8ee7 */ r_esp -= 4; W32(r_esp, 0x42963du); f_005e8ee7();
    /* 0042963d: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429643: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 00429649: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042964f: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00429655: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429657: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x42965au); call_ind(t); }
    /* 0042965a: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0042965c: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429662: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00429668: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x42966du); f_005e87aa();
    /* 0042966d: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00429672: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429678: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 0042967e: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x429683u); f_005e8740();
    /* 00429683: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 00429688: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042968e: mov ecx, dword ptr [edx + 0xa0] */ r_ecx = R32((u32)(r_edx+0xa0u));
    /* 00429694: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x429699u); f_005e8775();
    /* 00429699: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0042969b: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 004296a0: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004296a6: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004296ac: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004296b2: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004296b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004296ba: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4296bdu); call_ind(t); }
    /* 004296bd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004296bf: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004296c5: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004296cb: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004296d1: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004296d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004296d9: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4296dcu); call_ind(t); }
L_004296dc:; BB(0x004296dc);
    /* 004296dc: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004296e2: cmp dword ptr [eax + 0xa4], 0 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004296e9: jne 0x429830 */ if (!fZ) goto L_00429830;
L_004296ef:; BB(0x004296ef);
    /* 004296ef: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 004296f4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4296f9u); f_0048ab58();
    /* 004296f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004296fc: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 00429702: cmp dword ptr [ebp - 0x1a0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429709: je 0x42971e */ if (fZ) goto L_0042971e;
L_0042970b:; BB(0x0042970b);
    /* 0042970b: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 00429711: call 0x42923d */ r_esp -= 4; W32(r_esp, 0x429716u); f_0042923d();
    /* 00429716: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 0042971c: jmp 0x429728 */ goto L_00429728;
L_0042971e:; BB(0x0042971e);
    /* 0042971e: mov dword ptr [ebp - 0x1b0], 0 */ W32((u32)(r_ebp+0xfffffe50u), 0x0u);
L_00429728:; BB(0x00429728);
    /* 00429728: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042972e: mov edx, dword ptr [ebp - 0x1b0] */ r_edx = R32((u32)(r_ebp+0xfffffe50u));
    /* 00429734: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 0042973a: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429740: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00429746: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042974c: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0042974f: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00429754: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042975a: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00429760: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429766: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0042976c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042976e: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x429771u); call_ind(t); }
    /* 00429771: push 0x652b14 */ { u32 v = 0x652b14u; r_esp -= 4; W32(r_esp, v); }
    /* 00429776: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042977c: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00429782: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429788: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0042978e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429790: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x429793u); call_ind(t); }
    /* 00429793: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00429795: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00429797: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00429799: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0042979f: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004297a5: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004297ab: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004297b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004297b3: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x4297b6u); call_ind(t); }
    /* 004297b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004297b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004297ba: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004297c0: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004297c6: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004297cc: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004297d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004297d4: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4297d7u); call_ind(t); }
    /* 004297d7: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 004297dc: push 0x17b */ { u32 v = 0x17bu; r_esp -= 4; W32(r_esp, v); }
    /* 004297e1: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004297e7: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004297ed: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 004297f3: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004297f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004297fb: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4297feu); call_ind(t); }
    /* 004297fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00429800: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429806: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0042980c: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429812: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00429818: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042981a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x42981du); call_ind(t); }
    /* 0042981d: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0042981f: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00429825: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0042982b: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x429830u); f_005d65d6();
L_00429830:; BB(0x00429830);
    /* 00429830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00429831: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00429832: mov esp, ebp */ r_esp = r_ebp;
    /* 00429834: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429835: ret 4 */ FN_RET(0x00429409); r_esp += 8; return;
}

void f_00429838(void) /* FUN_00429838 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429838);
    /* 00429838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429839: mov ebp, esp */ r_ebp = r_esp;
    /* 0042983b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042983c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042983f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429842: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x429847u); f_005e030e();
    /* 00429847: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042984a: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 00429850: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429853: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00429859: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042985b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x42985eu); call_ind(t); }
    /* 0042985e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429861: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00429867: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042986a: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00429870: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429872: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x429875u); call_ind(t); }
    /* 00429875: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429878: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0042987e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429881: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00429887: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429889: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x42988cu); call_ind(t); }
L_0042988c:; BB(0x0042988c);
    /* 0042988c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042988f: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429896: jne 0x4298b8 */ if (!fZ) goto L_004298b8;
L_00429898:; BB(0x00429898);
    /* 00429898: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0042989e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004298a0: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 004298a6: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4298a9u); call_ind(t); }
    /* 004298a9: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 004298ae: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004298b1: call 0x61d4b3 */ r_esp -= 4; W32(r_esp, 0x4298b6u); f_0061d4b3();
    /* 004298b6: jmp 0x42988c */ goto L_0042988c;
L_004298b8:; BB(0x004298b8);
    /* 004298b8: mov esp, ebp */ r_esp = r_ebp;
    /* 004298ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004298bb: ret  */ FN_RET(0x00429838); r_esp += 4; return;
}

void f_004298d8(void) /* FUN_004298d8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004298d8);
    /* 004298d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004298d9: mov ebp, esp */ r_ebp = r_esp;
    /* 004298db: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004298de: mov dword ptr [ebp - 0x2c], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffd4u), 0x3b9aca00u);
    /* 004298e5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004298ec: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004298f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004298f6: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004298f9: jne 0x42991f */ if (!fZ) goto L_0042991f;
L_004298fb:; BB(0x004298fb);
    /* 004298fb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004298fe: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429902: jne 0x42991f */ if (!fZ) goto L_0042991f;
L_00429904:; BB(0x00429904);
    /* 00429904: push 0x652b1c */ { u32 v = 0x652b1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00429909: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042990c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042990d: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x429912u); f_00624520();
    /* 00429912: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429915: mov eax, 3 */ r_eax = 0x3u;
    /* 0042991a: jmp 0x429a55 */ goto L_00429a55;
L_0042991f:; BB(0x0042991f);
    /* 0042991f: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429923: je 0x42994f */ if (fZ) goto L_0042994f;
L_00429925:; BB(0x00429925);
    /* 00429925: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00429928: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042992b: jl 0x42993e */ if ((fS!=fO)) goto L_0042993e;
L_0042992d:; BB(0x0042992d);
    /* 0042992d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00429930: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429933: jne 0x42994f */ if (!fZ) goto L_0042994f;
L_00429935:; BB(0x00429935);
    /* 00429935: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00429938: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042993c: jge 0x42994f */ if ((fS==fO)) goto L_0042994f;
L_0042993e:; BB(0x0042993e);
    /* 0042993e: push 0x652b24 */ { u32 v = 0x652b24u; r_esp -= 4; W32(r_esp, v); }
    /* 00429943: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429946: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429947: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x42994cu); f_00624520();
    /* 0042994c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042994f:; BB(0x0042994f);
    /* 0042994f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00429952: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00429954: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429955: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x42995au); f_00624700();
    /* 0042995a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042995d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00429960: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00429963: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00429966: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429967: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x42996cu); f_00624700();
    /* 0042996c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042996f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00429972:; BB(0x00429972);
    /* 00429972: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429976: jle 0x429a1d */ if ((fZ||fS!=fO)) goto L_00429a1d;
L_0042997c:; BB(0x0042997c);
    /* 0042997c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042997f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00429980: idiv dword ptr [ebp - 0x2c] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffd4u)); if (!d) UNSUP(0x00429980, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00429980, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00429983: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00429986: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429989: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0042998a: idiv dword ptr [ebp - 0x2c] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffd4u)); if (!d) UNSUP(0x0042998a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0042998a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0042998d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00429990: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429994: jne 0x42999c */ if (!fZ) goto L_0042999c;
L_00429996:; BB(0x00429996);
    /* 00429996: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042999a: je 0x4299d8 */ if (fZ) goto L_004299d8;
L_0042999c:; BB(0x0042999c);
    /* 0042999c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004299a0: jne 0x4299a9 */ if (!fZ) goto L_004299a9;
L_004299a2:; BB(0x004299a2);
    /* 004299a2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_004299a9:; BB(0x004299a9);
    /* 004299a9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004299ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004299ad: push 0x652b28 */ { u32 v = 0x652b28u; r_esp -= 4; W32(r_esp, v); }
    /* 004299b2: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 004299b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004299b6: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4299bcu); call_ind(t); }
    /* 004299bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004299bf: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 004299c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004299c3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004299c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004299c7: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x4299ccu); f_00624520();
    /* 004299cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004299cf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004299d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004299d5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004299d8:; BB(0x004299d8);
    /* 004299d8: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004299dc: je 0x429a0a */ if (fZ) goto L_00429a0a;
L_004299de:; BB(0x004299de);
    /* 004299de: cmp dword ptr [ebp - 0x2c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004299e5: je 0x4299f9 */ if (fZ) goto L_004299f9;
L_004299e7:; BB(0x004299e7);
    /* 004299e7: cmp dword ptr [ebp - 0x2c], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004299ee: je 0x4299f9 */ if (fZ) goto L_004299f9;
L_004299f0:; BB(0x004299f0);
    /* 004299f0: cmp dword ptr [ebp - 0x2c], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004299f7: jne 0x429a0a */ if (!fZ) goto L_00429a0a;
L_004299f9:; BB(0x004299f9);
    /* 004299f9: push 0x652b2c */ { u32 v = 0x652b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004299fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00429a01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429a02: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x429a07u); f_00624520();
    /* 00429a07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429a0a:; BB(0x00429a0a);
    /* 00429a0a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00429a0d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00429a0e: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00429a13: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00429a13, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00429a13, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00429a15: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00429a18: jmp 0x429972 */ goto L_00429972;
L_00429a1d:; BB(0x00429a1d);
    /* 00429a1d: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429a21: je 0x429a52 */ if (fZ) goto L_00429a52;
L_00429a23:; BB(0x00429a23);
    /* 00429a23: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429a26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429a27: push 0x652b30 */ { u32 v = 0x652b30u; r_esp -= 4; W32(r_esp, v); }
    /* 00429a2c: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00429a2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429a30: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x429a36u); call_ind(t); }
    /* 00429a36: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429a39: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 00429a3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429a3d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00429a40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429a41: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x429a46u); f_00624520();
    /* 00429a46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429a49: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429a4c: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429a4f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00429a52:; BB(0x00429a52);
    /* 00429a52: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_00429a55:; BB(0x00429a55);
    /* 00429a55: mov esp, ebp */ r_esp = r_ebp;
    /* 00429a57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429a58: ret  */ FN_RET(0x004298d8); r_esp += 4; return;
}

void f_00429a59(void) /* FUN_00429a59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429a59);
    /* 00429a59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429a5a: mov ebp, esp */ r_ebp = r_esp;
    /* 00429a5c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429a5f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00429a62: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00429a65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429a66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429a68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429a69: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00429a6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429a6d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00429a70: call 0x45d040 */ r_esp -= 4; W32(r_esp, 0x429a75u); f_0045d040();
    /* 00429a75: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00429a77: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00429a7a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00429a7d: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00429a7f: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00429a82: mov esp, ebp */ r_esp = r_ebp;
    /* 00429a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429a85: ret  */ FN_RET(0x00429a59); r_esp += 4; return;
}

void f_00429a90(void) /* FUN_00429a90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429a90);
    /* 00429a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00429a93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429a94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429a97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429a9a: call 0x424f63 */ r_esp -= 4; W32(r_esp, 0x429a9fu); f_00424f63();
    /* 00429a9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429aa2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429aa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429aa7: je 0x429ab5 */ if (fZ) goto L_00429ab5;
L_00429aa9:; BB(0x00429aa9);
    /* 00429aa9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429aac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429aad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x429ab2u); f_0048ac1b();
    /* 00429ab2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429ab5:; BB(0x00429ab5);
    /* 00429ab5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429ab8: mov esp, ebp */ r_esp = r_ebp;
    /* 00429aba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429abb: ret 4 */ FN_RET(0x00429a90); r_esp += 8; return;
}

void f_00429ac0(void) /* FUN_00429ac0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429ac0);
    /* 00429ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00429ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429ac7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429aca: call 0x425495 */ r_esp -= 4; W32(r_esp, 0x429acfu); f_00425495();
    /* 00429acf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429ad2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429ad5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429ad7: je 0x429ae5 */ if (fZ) goto L_00429ae5;
L_00429ad9:; BB(0x00429ad9);
    /* 00429ad9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429adc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429add: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x429ae2u); f_0048ac1b();
    /* 00429ae2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429ae5:; BB(0x00429ae5);
    /* 00429ae5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429ae8: mov esp, ebp */ r_esp = r_ebp;
    /* 00429aea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429aeb: ret 4 */ FN_RET(0x00429ac0); r_esp += 8; return;
}

void f_00429af0(void) /* FUN_00429af0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429af0);
    /* 00429af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00429af3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429af4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429af7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429afa: call 0x4263e8 */ r_esp -= 4; W32(r_esp, 0x429affu); f_004263e8();
    /* 00429aff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429b02: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429b05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429b07: je 0x429b15 */ if (fZ) goto L_00429b15;
L_00429b09:; BB(0x00429b09);
    /* 00429b09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429b0d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x429b12u); f_0048ac1b();
    /* 00429b12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429b15:; BB(0x00429b15);
    /* 00429b15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b18: mov esp, ebp */ r_esp = r_ebp;
    /* 00429b1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429b1b: ret 4 */ FN_RET(0x00429af0); r_esp += 8; return;
}

void f_00429b20(void) /* FUN_00429b20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429b20);
    /* 00429b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00429b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429b24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429b27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b2a: call 0x426867 */ r_esp -= 4; W32(r_esp, 0x429b2fu); f_00426867();
    /* 00429b2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429b32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429b35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429b37: je 0x429b45 */ if (fZ) goto L_00429b45;
L_00429b39:; BB(0x00429b39);
    /* 00429b39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429b3d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x429b42u); f_0048ac1b();
    /* 00429b42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429b45:; BB(0x00429b45);
    /* 00429b45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b48: mov esp, ebp */ r_esp = r_ebp;
    /* 00429b4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429b4b: ret 4 */ FN_RET(0x00429b20); r_esp += 8; return;
}

void f_00429b50(void) /* FUN_00429b50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429b50);
    /* 00429b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00429b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429b54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429b57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b5a: call 0x426c3d */ r_esp -= 4; W32(r_esp, 0x429b5fu); f_00426c3d();
    /* 00429b5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429b62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429b65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429b67: je 0x429b75 */ if (fZ) goto L_00429b75;
L_00429b69:; BB(0x00429b69);
    /* 00429b69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429b6d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x429b72u); f_0048ac1b();
    /* 00429b72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429b75:; BB(0x00429b75);
    /* 00429b75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b78: mov esp, ebp */ r_esp = r_ebp;
    /* 00429b7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429b7b: ret 4 */ FN_RET(0x00429b50); r_esp += 8; return;
}

void f_00429b80(void) /* FUN_00429b80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429b80);
    /* 00429b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00429b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429b87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b8a: call 0x427cb2 */ r_esp -= 4; W32(r_esp, 0x429b8fu); f_00427cb2();
    /* 00429b8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429b92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429b95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429b97: je 0x429ba5 */ if (fZ) goto L_00429ba5;
L_00429b99:; BB(0x00429b99);
    /* 00429b99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429b9d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x429ba2u); f_0048ac1b();
    /* 00429ba2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429ba5:; BB(0x00429ba5);
    /* 00429ba5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429ba8: mov esp, ebp */ r_esp = r_ebp;
    /* 00429baa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429bab: ret 4 */ FN_RET(0x00429b80); r_esp += 8; return;
}

void f_00429bb0(void) /* FUN_00429bb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429bb0);
    /* 00429bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00429bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429bb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429bba: call 0x4288dc */ r_esp -= 4; W32(r_esp, 0x429bbfu); f_004288dc();
    /* 00429bbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429bc2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429bc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429bc7: je 0x429bd5 */ if (fZ) goto L_00429bd5;
L_00429bc9:; BB(0x00429bc9);
    /* 00429bc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429bcc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429bcd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x429bd2u); f_0048ac1b();
    /* 00429bd2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429bd5:; BB(0x00429bd5);
    /* 00429bd5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429bd8: mov esp, ebp */ r_esp = r_ebp;
    /* 00429bda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429bdb: ret 4 */ FN_RET(0x00429bb0); r_esp += 8; return;
}

void f_00429be0(void) /* FUN_00429be0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429be0);
    /* 00429be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00429be3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429be4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429be7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429bea: call 0x428a55 */ r_esp -= 4; W32(r_esp, 0x429befu); f_00428a55();
    /* 00429bef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429bf2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429bf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429bf7: je 0x429c05 */ if (fZ) goto L_00429c05;
L_00429bf9:; BB(0x00429bf9);
    /* 00429bf9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429bfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429bfd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x429c02u); f_0048ac1b();
    /* 00429c02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429c05:; BB(0x00429c05);
    /* 00429c05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429c08: mov esp, ebp */ r_esp = r_ebp;
    /* 00429c0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429c0b: ret 4 */ FN_RET(0x00429be0); r_esp += 8; return;
}

void f_00429c10(void) /* FUN_00429c10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429c10);
    /* 00429c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00429c13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429c14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429c17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429c1a: call 0x42925c */ r_esp -= 4; W32(r_esp, 0x429c1fu); f_0042925c();
    /* 00429c1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429c22: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429c25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429c27: je 0x429c35 */ if (fZ) goto L_00429c35;
L_00429c29:; BB(0x00429c29);
    /* 00429c29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429c2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429c2d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x429c32u); f_0048ac1b();
    /* 00429c32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429c35:; BB(0x00429c35);
    /* 00429c35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429c38: mov esp, ebp */ r_esp = r_ebp;
    /* 00429c3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429c3b: ret 4 */ FN_RET(0x00429c10); r_esp += 8; return;
}

void f_00429c40(void) /* FUN_00429c40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429c40);
    /* 00429c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00429c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429c44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429c47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429c4a: call 0x429310 */ r_esp -= 4; W32(r_esp, 0x429c4fu); f_00429310();
    /* 00429c4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429c52: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429c55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429c57: je 0x429c65 */ if (fZ) goto L_00429c65;
L_00429c59:; BB(0x00429c59);
    /* 00429c59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429c5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429c5d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x429c62u); f_0048ac1b();
    /* 00429c62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429c65:; BB(0x00429c65);
    /* 00429c65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429c68: mov esp, ebp */ r_esp = r_ebp;
    /* 00429c6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429c6b: ret 4 */ FN_RET(0x00429c40); r_esp += 8; return;
}

void f_00429c70(void) /* FUN_00429c70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429c70);
    /* 00429c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00429c73: call 0x429c7f */ r_esp -= 4; W32(r_esp, 0x429c78u); f_00429c7f();
    /* 00429c78: call 0x429c8e */ r_esp -= 4; W32(r_esp, 0x429c7du); f_00429c8e();
    /* 00429c7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429c7e: ret  */ FN_RET(0x00429c70); r_esp += 4; return;
}

void f_00429c7f(void) /* FUN_00429c7f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429c7f);
    /* 00429c7f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429c80: mov ebp, esp */ r_ebp = r_esp;
    /* 00429c82: mov ecx, 0x6f5b78 */ r_ecx = 0x6f5b78u;
    /* 00429c87: call 0x5b9c90 */ r_esp -= 4; W32(r_esp, 0x429c8cu); f_005b9c90();
    /* 00429c8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429c8d: ret  */ FN_RET(0x00429c7f); r_esp += 4; return;
}

void f_00429c8e(void) /* FUN_00429c8e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429c8e);
    /* 00429c8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429c8f: mov ebp, esp */ r_ebp = r_esp;
    /* 00429c91: push 0x429ca0 */ { u32 v = 0x429ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429c96: call 0x624a90 */ r_esp -= 4; W32(r_esp, 0x429c9bu); f_00624a90();
    /* 00429c9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429c9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429c9f: ret  */ FN_RET(0x00429c8e); r_esp += 4; return;
}

void f_00429ca0(void) /* FUN_00429ca0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429ca0);
    /* 00429ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00429ca3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429ca5: mov al, byte ptr [0x6f5f74] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6f5f74u))) & 0xffu);
    /* 00429caa: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429cad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429caf: jne 0x429cca */ if (!fZ) goto L_00429cca;
L_00429cb1:; BB(0x00429cb1);
    /* 00429cb1: mov cl, byte ptr [0x6f5f74] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x6f5f74u))) & 0xffu);
    /* 00429cb7: or cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00429cba: mov byte ptr [0x6f5f74], cl */ W8((u32)(0x6f5f74u), (u8)r_ecx);
    /* 00429cc0: mov ecx, 0x6f5b78 */ r_ecx = 0x6f5b78u;
    /* 00429cc5: call 0x5b9cb9 */ r_esp -= 4; W32(r_esp, 0x429ccau); f_005b9cb9();
L_00429cca:; BB(0x00429cca);
    /* 00429cca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429ccb: ret  */ FN_RET(0x00429ca0); r_esp += 4; return;
}

void f_00429ccc(void) /* FUN_00429ccc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429ccc);
    /* 00429ccc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429ccd: mov ebp, esp */ r_ebp = r_esp;
    /* 00429ccf: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429cd2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00429cd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429cd8: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x429cddu); f_005dfbf0();
    /* 00429cdd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429ce0: mov dword ptr [eax], 0x6343cc */ W32((u32)(r_eax), 0x6343ccu);
    /* 00429ce6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429ce9: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00429cf0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429cf3: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 00429cfa: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00429cfc: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x429d01u); f_0048ab58();
    /* 00429d01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429d04: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00429d07: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429d0b: je 0x429d1a */ if (fZ) goto L_00429d1a;
L_00429d0d:; BB(0x00429d0d);
    /* 00429d0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429d10: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x429d15u); f_005e3fb0();
    /* 00429d15: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00429d18: jmp 0x429d21 */ goto L_00429d21;
L_00429d1a:; BB(0x00429d1a);
    /* 00429d1a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00429d21:; BB(0x00429d21);
    /* 00429d21: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d24: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429d27: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 00429d2a: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00429d2c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x429d31u); f_0048ab58();
    /* 00429d31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429d34: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00429d37: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429d3b: je 0x429d4a */ if (fZ) goto L_00429d4a;
L_00429d3d:; BB(0x00429d3d);
    /* 00429d3d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429d40: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x429d45u); f_005e3fb0();
    /* 00429d45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00429d48: jmp 0x429d51 */ goto L_00429d51;
L_00429d4a:; BB(0x00429d4a);
    /* 00429d4a: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00429d51:; BB(0x00429d51);
    /* 00429d51: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00429d57: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00429d5a: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 00429d5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d5f: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 00429d62: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d65: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00429d68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429d6a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x429d6du); call_ind(t); }
    /* 00429d6d: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00429d6f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d72: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00429d75: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d78: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00429d7b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429d7d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x429d80u); call_ind(t); }
    /* 00429d80: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d83: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 00429d8a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d8d: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 00429d94: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d97: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 00429d9e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429da1: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 00429da8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429dab: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 00429db2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429db5: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 00429dbc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429dbf: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 00429dc6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429dc9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00429dcc: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 00429dcf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429dd2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00429dd5: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00429dd8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429ddb: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 00429de2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429de5: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00429dec: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429df3: je 0x429e03 */ if (fZ) goto L_00429e03;
L_00429df5:; BB(0x00429df5);
    /* 00429df5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429df7: mov ecx, 0x6f5b78 */ r_ecx = 0x6f5b78u;
    /* 00429dfc: call 0x5b9cd5 */ r_esp -= 4; W32(r_esp, 0x429e01u); f_005b9cd5();
    /* 00429e01: jmp 0x429e18 */ goto L_00429e18;
L_00429e03:; BB(0x00429e03);
    /* 00429e03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429e05: call 0x6243e0 */ r_esp -= 4; W32(r_esp, 0x429e0au); f_006243e0();
    /* 00429e0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429e0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429e0e: mov ecx, 0x6f5b78 */ r_ecx = 0x6f5b78u;
    /* 00429e13: call 0x5b9cd5 */ r_esp -= 4; W32(r_esp, 0x429e18u); f_005b9cd5();
L_00429e18:; BB(0x00429e18);
    /* 00429e18: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429e1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00429e1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429e1e: ret 8 */ FN_RET(0x00429ccc); r_esp += 12; return;
}

void f_00429e21(void) /* FUN_00429e21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429e21);
    /* 00429e21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429e22: mov ebp, esp */ r_ebp = r_esp;
    /* 00429e24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429e25: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429e28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e2b: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x429e30u); f_005dfbf0();
    /* 00429e30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e33: mov dword ptr [eax], 0x6343cc */ W32((u32)(r_eax), 0x6343ccu);
    /* 00429e39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e3c: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00429e43: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e46: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 00429e4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e50: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00429e57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e5a: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 00429e61: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e64: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 00429e6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e6e: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00429e75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e78: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 00429e7f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e82: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00429e89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e8c: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 00429e93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e96: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 00429e9d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429ea0: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 00429ea7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429eaa: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 00429eb1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429eb4: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 00429ebb: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429ec2: je 0x429ed2 */ if (fZ) goto L_00429ed2;
L_00429ec4:; BB(0x00429ec4);
    /* 00429ec4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429ec6: mov ecx, 0x6f5b78 */ r_ecx = 0x6f5b78u;
    /* 00429ecb: call 0x5b9cd5 */ r_esp -= 4; W32(r_esp, 0x429ed0u); f_005b9cd5();
    /* 00429ed0: jmp 0x429ee7 */ goto L_00429ee7;
L_00429ed2:; BB(0x00429ed2);
    /* 00429ed2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429ed4: call 0x6243e0 */ r_esp -= 4; W32(r_esp, 0x429ed9u); f_006243e0();
    /* 00429ed9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429edc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429edd: mov ecx, 0x6f5b78 */ r_ecx = 0x6f5b78u;
    /* 00429ee2: call 0x5b9cd5 */ r_esp -= 4; W32(r_esp, 0x429ee7u); f_005b9cd5();
L_00429ee7:; BB(0x00429ee7);
    /* 00429ee7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429eea: mov esp, ebp */ r_esp = r_ebp;
    /* 00429eec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429eed: ret  */ FN_RET(0x00429e21); r_esp += 4; return;
}

