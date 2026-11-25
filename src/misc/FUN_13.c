#include "protos.h"

void f_0046c34e(void) /* FUN_0046c34e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c34e);
    /* 0046c34e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c34f: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c351: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c352: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c355: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c358: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c35b: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 0046c35e: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c360: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c361: ret 4 */ FN_RET(0x0046c34e); r_esp += 8; return;
}

void f_0046c364(void) /* FUN_0046c364 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c364);
    /* 0046c364: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c365: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c367: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c368: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c36b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c36e: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0046c371: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c373: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c374: ret  */ FN_RET(0x0046c364); r_esp += 4; return;
}

void f_0046c375(void) /* FUN_0046c375 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c375);
    /* 0046c375: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c376: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c378: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c379: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c37c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c37f: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x46c384u); f_005dd4d2();
    /* 0046c384: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c386: je 0x46c395 */ if (fZ) goto L_0046c395;
L_0046c388:; BB(0x0046c388);
    /* 0046c388: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c38b: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x46c390u); f_005dd4d2();
    /* 0046c390: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046c393: jmp 0x46c39a */ goto L_0046c39a;
L_0046c395:; BB(0x0046c395);
    /* 0046c395: mov eax, 5 */ r_eax = 0x5u;
L_0046c39a:; BB(0x0046c39a);
    /* 0046c39a: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c39c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c39d: ret  */ FN_RET(0x0046c375); r_esp += 4; return;
}

void f_0046c39e(void) /* FUN_0046c39e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c39e);
    /* 0046c39e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c39f: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c3a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c3a2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c3a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3a8: call 0x46c33d */ r_esp -= 4; W32(r_esp, 0x46c3adu); f_0046c33d();
    /* 0046c3ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c3af: jne 0x46c3c0 */ if (!fZ) goto L_0046c3c0;
L_0046c3b1:; BB(0x0046c3b1);
    /* 0046c3b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3b4: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0046c3b7: sub ecx, 0x11 */ {  u32 a = r_ecx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046c3ba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3bd: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
L_0046c3c0:; BB(0x0046c3c0);
    /* 0046c3c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3c3: call 0x46c33d */ r_esp -= 4; W32(r_esp, 0x46c3c8u); f_0046c33d();
    /* 0046c3c8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c3cb: jne 0x46c3dc */ if (!fZ) goto L_0046c3dc;
L_0046c3cd:; BB(0x0046c3cd);
    /* 0046c3cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3d0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0046c3d3: sub ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046c3d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3d9: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
L_0046c3dc:; BB(0x0046c3dc);
    /* 0046c3dc: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c3de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c3df: ret  */ FN_RET(0x0046c39e); r_esp += 4; return;
}

void f_0046c3e0(void) /* FUN_0046c3e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c3e0);
    /* 0046c3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c3e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c3e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c3e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3ea: call 0x46c33d */ r_esp -= 4; W32(r_esp, 0x46c3efu); f_0046c33d();
    /* 0046c3ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c3f1: jne 0x46c402 */ if (!fZ) goto L_0046c402;
L_0046c3f3:; BB(0x0046c3f3);
    /* 0046c3f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3f6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0046c3f9: add ecx, 0x11 */ {  u32 a = r_ecx; u32 b = 0x11u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046c3fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3ff: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
L_0046c402:; BB(0x0046c402);
    /* 0046c402: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c405: call 0x46c33d */ r_esp -= 4; W32(r_esp, 0x46c40au); f_0046c33d();
    /* 0046c40a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c40d: jne 0x46c41e */ if (!fZ) goto L_0046c41e;
L_0046c40f:; BB(0x0046c40f);
    /* 0046c40f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c412: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0046c415: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046c418: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c41b: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
L_0046c41e:; BB(0x0046c41e);
    /* 0046c41e: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c420: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c421: ret  */ FN_RET(0x0046c3e0); r_esp += 4; return;
}

void f_0046c422(void) /* FUN_0046c422 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c422);
    /* 0046c422: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c423: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c425: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c426: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c429: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c42c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c42f: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 0046c432: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c434: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c435: ret 4 */ FN_RET(0x0046c422); r_esp += 8; return;
}

void f_0046c438(void) /* FUN_0046c438 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c438);
    /* 0046c438: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c439: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c43b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c43c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c43f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c442: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0046c445: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c447: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c448: ret  */ FN_RET(0x0046c438); r_esp += 4; return;
}

void f_0046c449(void) /* FUN_0046c449 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c449);
    /* 0046c449: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c44a: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c44c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046c44f: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0046c452: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046c455: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0046c458: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c45b: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0046c45e: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0046c461: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0046c464: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0046c467: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c46a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046c46d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0046c470: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0046c473: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0046c476: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0046c479: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0046c47c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0046c47f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046c482: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046c485: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046c486: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046c488: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046c48a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046c48d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046c48f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0046c492: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046c495: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046c498: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046c499: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046c49b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046c49d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c4a0: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046c4a2: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0046c4a5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0046c4ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c4af: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c4b2: jg 0x46c4d3 */ if ((!fZ&&fS==fO)) goto L_0046c4d3;
L_0046c4b4:; BB(0x0046c4b4);
    /* 0046c4b4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046c4b7: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c4ba: jl 0x46c4d3 */ if ((fS!=fO)) goto L_0046c4d3;
L_0046c4bc:; BB(0x0046c4bc);
    /* 0046c4bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046c4bf: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c4c2: jg 0x46c4d3 */ if ((!fZ&&fS==fO)) goto L_0046c4d3;
L_0046c4c4:; BB(0x0046c4c4);
    /* 0046c4c4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046c4c7: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c4ca: jl 0x46c4d3 */ if ((fS!=fO)) goto L_0046c4d3;
L_0046c4cc:; BB(0x0046c4cc);
    /* 0046c4cc: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0046c4d3:; BB(0x0046c4d3);
    /* 0046c4d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c4d6: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c4d9: jg 0x46c4fa */ if ((!fZ&&fS==fO)) goto L_0046c4fa;
L_0046c4db:; BB(0x0046c4db);
    /* 0046c4db: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046c4de: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c4e1: jl 0x46c4fa */ if ((fS!=fO)) goto L_0046c4fa;
L_0046c4e3:; BB(0x0046c4e3);
    /* 0046c4e3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046c4e6: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c4e9: jg 0x46c4fa */ if ((!fZ&&fS==fO)) goto L_0046c4fa;
L_0046c4eb:; BB(0x0046c4eb);
    /* 0046c4eb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046c4ee: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c4f1: jl 0x46c4fa */ if ((fS!=fO)) goto L_0046c4fa;
L_0046c4f3:; BB(0x0046c4f3);
    /* 0046c4f3: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0046c4fa:; BB(0x0046c4fa);
    /* 0046c4fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c4fd: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c500: jg 0x46c521 */ if ((!fZ&&fS==fO)) goto L_0046c521;
L_0046c502:; BB(0x0046c502);
    /* 0046c502: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046c505: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c508: jl 0x46c521 */ if ((fS!=fO)) goto L_0046c521;
L_0046c50a:; BB(0x0046c50a);
    /* 0046c50a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046c50d: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c510: jg 0x46c521 */ if ((!fZ&&fS==fO)) goto L_0046c521;
L_0046c512:; BB(0x0046c512);
    /* 0046c512: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046c515: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c518: jl 0x46c521 */ if ((fS!=fO)) goto L_0046c521;
L_0046c51a:; BB(0x0046c51a);
    /* 0046c51a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0046c521:; BB(0x0046c521);
    /* 0046c521: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c524: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c527: jg 0x46c548 */ if ((!fZ&&fS==fO)) goto L_0046c548;
L_0046c529:; BB(0x0046c529);
    /* 0046c529: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046c52c: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c52f: jl 0x46c548 */ if ((fS!=fO)) goto L_0046c548;
L_0046c531:; BB(0x0046c531);
    /* 0046c531: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046c534: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c537: jg 0x46c548 */ if ((!fZ&&fS==fO)) goto L_0046c548;
L_0046c539:; BB(0x0046c539);
    /* 0046c539: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046c53c: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c53f: jl 0x46c548 */ if ((fS!=fO)) goto L_0046c548;
L_0046c541:; BB(0x0046c541);
    /* 0046c541: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0046c548:; BB(0x0046c548);
    /* 0046c548: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c54b: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c54e: jl 0x46c58f */ if ((fS!=fO)) goto L_0046c58f;
L_0046c550:; BB(0x0046c550);
    /* 0046c550: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046c553: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c556: jg 0x46c58f */ if ((!fZ&&fS==fO)) goto L_0046c58f;
L_0046c558:; BB(0x0046c558);
    /* 0046c558: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046c55b: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c55e: jg 0x46c568 */ if ((!fZ&&fS==fO)) goto L_0046c568;
L_0046c560:; BB(0x0046c560);
    /* 0046c560: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046c563: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c566: jge 0x46c588 */ if ((fS==fO)) goto L_0046c588;
L_0046c568:; BB(0x0046c568);
    /* 0046c568: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046c56b: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c56e: jg 0x46c578 */ if ((!fZ&&fS==fO)) goto L_0046c578;
L_0046c570:; BB(0x0046c570);
    /* 0046c570: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046c573: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c576: jge 0x46c588 */ if ((fS==fO)) goto L_0046c588;
L_0046c578:; BB(0x0046c578);
    /* 0046c578: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046c57b: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c57e: jl 0x46c58f */ if ((fS!=fO)) goto L_0046c58f;
L_0046c580:; BB(0x0046c580);
    /* 0046c580: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046c583: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c586: jg 0x46c58f */ if ((!fZ&&fS==fO)) goto L_0046c58f;
L_0046c588:; BB(0x0046c588);
    /* 0046c588: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0046c58f:; BB(0x0046c58f);
    /* 0046c58f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046c592: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c595: jl 0x46c5d6 */ if ((fS!=fO)) goto L_0046c5d6;
L_0046c597:; BB(0x0046c597);
    /* 0046c597: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046c59a: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c59d: jg 0x46c5d6 */ if ((!fZ&&fS==fO)) goto L_0046c5d6;
L_0046c59f:; BB(0x0046c59f);
    /* 0046c59f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c5a2: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c5a5: jg 0x46c5af */ if ((!fZ&&fS==fO)) goto L_0046c5af;
L_0046c5a7:; BB(0x0046c5a7);
    /* 0046c5a7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046c5aa: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c5ad: jge 0x46c5cf */ if ((fS==fO)) goto L_0046c5cf;
L_0046c5af:; BB(0x0046c5af);
    /* 0046c5af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c5b2: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c5b5: jg 0x46c5bf */ if ((!fZ&&fS==fO)) goto L_0046c5bf;
L_0046c5b7:; BB(0x0046c5b7);
    /* 0046c5b7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046c5ba: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c5bd: jge 0x46c5cf */ if ((fS==fO)) goto L_0046c5cf;
L_0046c5bf:; BB(0x0046c5bf);
    /* 0046c5bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c5c2: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c5c5: jl 0x46c5d6 */ if ((fS!=fO)) goto L_0046c5d6;
L_0046c5c7:; BB(0x0046c5c7);
    /* 0046c5c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046c5ca: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c5cd: jg 0x46c5d6 */ if ((!fZ&&fS==fO)) goto L_0046c5d6;
L_0046c5cf:; BB(0x0046c5cf);
    /* 0046c5cf: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0046c5d6:; BB(0x0046c5d6);
    /* 0046c5d6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046c5d9: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c5dc: jg 0x46c5fd */ if ((!fZ&&fS==fO)) goto L_0046c5fd;
L_0046c5de:; BB(0x0046c5de);
    /* 0046c5de: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046c5e1: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c5e4: jg 0x46c5fd */ if ((!fZ&&fS==fO)) goto L_0046c5fd;
L_0046c5e6:; BB(0x0046c5e6);
    /* 0046c5e6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046c5e9: cmp eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c5ec: jg 0x46c5fd */ if ((!fZ&&fS==fO)) goto L_0046c5fd;
L_0046c5ee:; BB(0x0046c5ee);
    /* 0046c5ee: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0046c5f1: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c5f4: jg 0x46c5fd */ if ((!fZ&&fS==fO)) goto L_0046c5fd;
L_0046c5f6:; BB(0x0046c5f6);
    /* 0046c5f6: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0046c5fd:; BB(0x0046c5fd);
    /* 0046c5fd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046c600: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c602: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c603: ret  */ FN_RET(0x0046c449); r_esp += 4; return;
}

void f_0046c610(void) /* FUN_0046c610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c610);
    /* 0046c610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c611: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c617: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c61a: call 0x46c26f */ r_esp -= 4; W32(r_esp, 0x46c61fu); f_0046c26f();
    /* 0046c61f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046c622: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0046c625: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c627: je 0x46c635 */ if (fZ) goto L_0046c635;
L_0046c629:; BB(0x0046c629);
    /* 0046c629: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c62c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c62d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x46c632u); f_0048ac1b();
    /* 0046c632: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046c635:; BB(0x0046c635);
    /* 0046c635: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c638: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c63a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c63b: ret 4 */ FN_RET(0x0046c610); r_esp += 8; return;
}

void f_0046c640(void) /* FUN_0046c640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c640);
    /* 0046c640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c641: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c647: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c64a: call 0x5d4d90 */ r_esp -= 4; W32(r_esp, 0x46c64fu); f_005d4d90();
    /* 0046c64f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c652: mov dword ptr [eax], 0x635e54 */ W32((u32)(r_eax), 0x635e54u);
    /* 0046c658: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c65b: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 0046c665: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c668: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c66a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c66b: ret  */ FN_RET(0x0046c640); r_esp += 4; return;
}

void f_0046c66c(void) /* FUN_0046c66c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c66c);
    /* 0046c66c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c66d: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c66f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c670: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c673: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c676: mov dword ptr [eax], 0x635e54 */ W32((u32)(r_eax), 0x635e54u);
    /* 0046c67c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c67f: call 0x5d4dd0 */ r_esp -= 4; W32(r_esp, 0x46c684u); f_005d4dd0();
    /* 0046c684: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c686: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c687: ret  */ FN_RET(0x0046c66c); r_esp += 4; return;
}

void f_0046c688(void) /* FUN_0046c688 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c688);
    /* 0046c688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c689: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c68b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c68c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c68f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c692: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x46c697u); f_005e4035();
    /* 0046c697: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c69a: ret  */ FN_RET(0x0046c688); r_esp += 4; return;
}

void f_0046c69b(void) /* FUN_0046c69b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c69b);
    /* 0046c69b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c69c: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c69e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c69f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c6a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c6a5: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0046c6af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c6b2: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 0046c6bc: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c6be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c6bf: ret  */ FN_RET(0x0046c69b); r_esp += 4; return;
}

void f_0046c6c0(void) /* FUN_0046c6c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c6c0);
    /* 0046c6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c6c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046c6c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c6c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046c6cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c6cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c6d0: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x46c6d5u); f_005d9738();
    /* 0046c6d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c6d7: jne 0x46c6e5 */ if (!fZ) goto L_0046c6e5;
L_0046c6d9:; BB(0x0046c6d9);
    /* 0046c6d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c6dc: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c6e3: je 0x46c6ee */ if (fZ) goto L_0046c6ee;
L_0046c6e5:; BB(0x0046c6e5);
    /* 0046c6e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046c6e8: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c6ec: je 0x46c6f5 */ if (fZ) goto L_0046c6f5;
L_0046c6ee:; BB(0x0046c6ee);
    /* 0046c6ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046c6f0: jmp 0x46c86d */ goto L_0046c86d;
L_0046c6f5:; BB(0x0046c6f5);
    /* 0046c6f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046c6f8: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0046c6fb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046c6fe: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c702: je 0x46c71d */ if (fZ) goto L_0046c71d;
L_0046c704:; BB(0x0046c704);
    /* 0046c704: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c708: je 0x46c7f7 */ if (fZ) goto L_0046c7f7;
L_0046c70e:; BB(0x0046c70e);
    /* 0046c70e: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c712: je 0x46c7be */ if (fZ) goto L_0046c7be;
L_0046c718:; BB(0x0046c718);
    /* 0046c718: jmp 0x46c867 */ goto L_0046c867;
L_0046c71d:; BB(0x0046c71d);
    /* 0046c71d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046c720: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0046c723: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0046c726: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c728: je 0x46c734 */ if (fZ) goto L_0046c734;
L_0046c72a:; BB(0x0046c72a);
    /* 0046c72a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c72d: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_0046c734:; BB(0x0046c734);
    /* 0046c734: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046c737: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0046c73a: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0046c73d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c73f: je 0x46c7b9 */ if (fZ) goto L_0046c7b9;
L_0046c741:; BB(0x0046c741);
    /* 0046c741: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c744: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c74b: jne 0x46c7b9 */ if (!fZ) goto L_0046c7b9;
L_0046c74d:; BB(0x0046c74d);
    /* 0046c74d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c750: call 0x46c99e */ r_esp -= 4; W32(r_esp, 0x46c755u); f_0046c99e();
    /* 0046c755: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c758: call 0x46c9ce */ r_esp -= 4; W32(r_esp, 0x46c75du); f_0046c9ce();
    /* 0046c75d: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c75f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c762: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046c764: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c767: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x46c76au); call_ind(t); }
    /* 0046c76a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c76d: mov dword ptr [ecx + 0x94], 1 */ W32((u32)(r_ecx+0x94u), 0x1u);
    /* 0046c777: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c77a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046c77c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c77f: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x46c782u); call_ind(t); }
    /* 0046c782: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c785: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0046c788: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0046c78a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c78d: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 0046c793: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c796: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046c798: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c79b: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x46c79eu); call_ind(t); }
    /* 0046c79e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c7a1: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0046c7a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0046c7a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c7a9: mov dword ptr [eax + 0xa4], edx */ W32((u32)(r_eax+0xa4u), r_edx);
    /* 0046c7af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c7b2: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_0046c7b9:; BB(0x0046c7b9);
    /* 0046c7b9: jmp 0x46c867 */ goto L_0046c867;
L_0046c7be:; BB(0x0046c7be);
    /* 0046c7be: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c7c1: cmp dword ptr [edx + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c7c8: je 0x46c7f5 */ if (fZ) goto L_0046c7f5;
L_0046c7ca:; BB(0x0046c7ca);
    /* 0046c7ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046c7cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c7d0: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0046c7d3: sub edx, dword ptr [ecx + 0xa4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0046c7d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c7da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046c7dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c7e0: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0046c7e3: sub edx, dword ptr [ecx + 0xa0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0046c7e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c7ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c7ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046c7ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c7f2: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x46c7f5u); call_ind(t); }
L_0046c7f5:; BB(0x0046c7f5);
    /* 0046c7f5: jmp 0x46c867 */ goto L_0046c867;
L_0046c7f7:; BB(0x0046c7f7);
    /* 0046c7f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046c7fa: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0046c7fd: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0046c800: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c802: je 0x46c867 */ if (fZ) goto L_0046c867;
L_0046c804:; BB(0x0046c804);
    /* 0046c804: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c807: cmp dword ptr [edx + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c80e: je 0x46c867 */ if (fZ) goto L_0046c867;
L_0046c810:; BB(0x0046c810);
    /* 0046c810: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c813: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0046c819: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c81a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c81d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046c81f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c822: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x46c825u); call_ind(t); }
    /* 0046c825: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c828: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c82b: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0046c82e: sub eax, dword ptr [edx + 0xa4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046c834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c835: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c838: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c83b: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0046c83e: sub eax, dword ptr [edx + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046c844: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c845: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c848: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046c84a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c84d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x46c850u); call_ind(t); }
    /* 0046c850: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c853: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 0046c85d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c860: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_0046c867:; BB(0x0046c867);
    /* 0046c867: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046c86a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
L_0046c86d:; BB(0x0046c86d);
    /* 0046c86d: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c86f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c870: ret 4 */ FN_RET(0x0046c6c0); r_esp += 8; return;
}

void f_0046c873(void) /* FUN_0046c873 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c873);
    /* 0046c873: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c874: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c876: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c877: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c87a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c87d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c880: mov dword ptr [eax + 0x98], ecx */ W32((u32)(r_eax+0x98u), r_ecx);
    /* 0046c886: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c888: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c889: ret 4 */ FN_RET(0x0046c873); r_esp += 8; return;
}

void f_0046c88c(void) /* FUN_0046c88c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c88c);
    /* 0046c88c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c88d: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c88f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c890: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c893: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c896: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c899: mov dword ptr [eax + 0x9c], ecx */ W32((u32)(r_eax+0x9cu), r_ecx);
    /* 0046c89f: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c8a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c8a2: ret 4 */ FN_RET(0x0046c88c); r_esp += 8; return;
}

void f_0046c8a5(void) /* FUN_0046c8a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c8a5);
    /* 0046c8a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c8a6: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c8a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c8a9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c8ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c8af: mov eax, dword ptr [eax + 0x98] */ r_eax = R32((u32)(r_eax+0x98u));
    /* 0046c8b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c8b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c8b8: ret  */ FN_RET(0x0046c8a5); r_esp += 4; return;
}

void f_0046c8b9(void) /* FUN_0046c8b9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c8b9);
    /* 0046c8b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c8ba: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c8bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c8bd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c8c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c8c3: mov eax, dword ptr [eax + 0x9c] */ r_eax = R32((u32)(r_eax+0x9cu));
    /* 0046c8c9: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c8cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c8cc: ret  */ FN_RET(0x0046c8b9); r_esp += 4; return;
}

void f_0046c8cd(void) /* FUN_0046c8cd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c8cd);
    /* 0046c8cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c8ce: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c8d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c8d1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c8d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c8d7: mov dword ptr [eax + 0xbc], 1 */ W32((u32)(r_eax+0xbcu), 0x1u);
    /* 0046c8e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c8e4: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x46c8e9u); f_005ea279();
    /* 0046c8e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c8ec: cmp eax, dword ptr [ecx + 0x98] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c8f2: je 0x46c906 */ if (fZ) goto L_0046c906;
L_0046c8f4:; BB(0x0046c8f4);
    /* 0046c8f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c8f7: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0046c8fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c8fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c901: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x46c906u); f_005ea0c3();
L_0046c906:; BB(0x0046c906);
    /* 0046c906: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c909: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046c90b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c90e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46c911u); call_ind(t); }
    /* 0046c911: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c913: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c914: ret  */ FN_RET(0x0046c8cd); r_esp += 4; return;
}

void f_0046c915(void) /* FUN_0046c915 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c915);
    /* 0046c915: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c916: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c918: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c919: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c91c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c91f: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0046c929: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c92c: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x46c931u); f_005ea279();
    /* 0046c931: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c934: cmp eax, dword ptr [ecx + 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x9cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c93a: je 0x46c94e */ if (fZ) goto L_0046c94e;
L_0046c93c:; BB(0x0046c93c);
    /* 0046c93c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c93f: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0046c945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c946: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c949: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x46c94eu); f_005ea0c3();
L_0046c94e:; BB(0x0046c94e);
    /* 0046c94e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c951: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046c953: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c956: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46c959u); call_ind(t); }
    /* 0046c959: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c95b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c95c: ret  */ FN_RET(0x0046c915); r_esp += 4; return;
}

void f_0046c95d(void) /* FUN_0046c95d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c95d);
    /* 0046c95d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c95e: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c960: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c961: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c964: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c967: mov eax, dword ptr [eax + 0xbc] */ r_eax = R32((u32)(r_eax+0xbcu));
    /* 0046c96d: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c96f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c970: ret  */ FN_RET(0x0046c95d); r_esp += 4; return;
}

void f_0046c971(void) /* FUN_0046c971 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c971);
    /* 0046c971: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c972: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c974: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c975: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c978: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c97b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046c97e: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 0046c984: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c986: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c987: ret 4 */ FN_RET(0x0046c971); r_esp += 8; return;
}

void f_0046c98a(void) /* FUN_0046c98a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c98a);
    /* 0046c98a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c98b: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c98d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c98e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c991: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c994: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 0046c99a: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c99c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c99d: ret  */ FN_RET(0x0046c98a); r_esp += 4; return;
}

void f_0046c99e(void) /* FUN_0046c99e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c99e);
    /* 0046c99e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c99f: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c9a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c9a2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c9a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9a8: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x46c9adu); f_005d9883();
    /* 0046c9ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9b0: mov dword ptr [ecx + 0xa8], eax */ W32((u32)(r_ecx+0xa8u), r_eax);
    /* 0046c9b6: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c9b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c9b9: ret  */ FN_RET(0x0046c99e); r_esp += 4; return;
}

void f_0046c9ba(void) /* FUN_0046c9ba */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c9ba);
    /* 0046c9ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c9bb: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c9bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c9be: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c9c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9c4: mov eax, dword ptr [eax + 0xa8] */ r_eax = R32((u32)(r_eax+0xa8u));
    /* 0046c9ca: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c9cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c9cd: ret  */ FN_RET(0x0046c9ba); r_esp += 4; return;
}

void f_0046c9ce(void) /* FUN_0046c9ce */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c9ce);
    /* 0046c9ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c9cf: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c9d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c9d2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c9d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046c9da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9dd: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x46c9e0u); call_ind(t); }
    /* 0046c9e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9e3: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 0046c9e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9ec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046c9ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9f1: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x46c9f4u); call_ind(t); }
    /* 0046c9f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9f7: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 0046c9fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c9ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ca00: ret  */ FN_RET(0x0046c9ce); r_esp += 4; return;
}

void f_0046ca01(void) /* FUN_0046ca01 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ca01);
    /* 0046ca01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca02: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ca04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca05: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046ca08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca0b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046ca0e: mov dword ptr [eax + 0xb4], ecx */ W32((u32)(r_eax+0xb4u), r_ecx);
    /* 0046ca14: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ca16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ca17: ret 4 */ FN_RET(0x0046ca01); r_esp += 8; return;
}

void f_0046ca1a(void) /* FUN_0046ca1a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ca1a);
    /* 0046ca1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca1b: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ca1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca1e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046ca21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca24: mov eax, dword ptr [eax + 0xb4] */ r_eax = R32((u32)(r_eax+0xb4u));
    /* 0046ca2a: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ca2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ca2d: ret  */ FN_RET(0x0046ca1a); r_esp += 4; return;
}

void f_0046ca2e(void) /* FUN_0046ca2e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ca2e);
    /* 0046ca2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca2f: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ca31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca32: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046ca35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca38: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046ca3b: mov dword ptr [eax + 0xb0], ecx */ W32((u32)(r_eax+0xb0u), r_ecx);
    /* 0046ca41: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ca43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ca44: ret 4 */ FN_RET(0x0046ca2e); r_esp += 8; return;
}

void f_0046ca47(void) /* FUN_0046ca47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ca47);
    /* 0046ca47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca48: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ca4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca4b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046ca4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca51: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 0046ca57: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ca59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ca5a: ret  */ FN_RET(0x0046ca47); r_esp += 4; return;
}

void f_0046ca5b(void) /* FUN_0046ca5b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ca5b);
    /* 0046ca5b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca5c: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ca5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca5f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046ca62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046ca68: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 0046ca6e: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ca70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ca71: ret 4 */ FN_RET(0x0046ca5b); r_esp += 8; return;
}

void f_0046ca74(void) /* FUN_0046ca74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ca74);
    /* 0046ca74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca75: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ca77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca78: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046ca7b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca7e: mov eax, dword ptr [eax + 0xb8] */ r_eax = R32((u32)(r_eax+0xb8u));
    /* 0046ca84: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ca86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ca87: ret  */ FN_RET(0x0046ca74); r_esp += 4; return;
}

void f_0046ca88(void) /* FUN_0046ca88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ca88);
    /* 0046ca88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca89: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ca8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca8c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046ca8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca92: movsx eax, byte ptr [eax + 0xb0] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0xb0u));
    /* 0046ca99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca9c: movsx edx, byte ptr [ecx + 0xb4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xb4u));
    /* 0046caa3: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0046caa6: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0046caa8: mov esp, ebp */ r_esp = r_ebp;
    /* 0046caaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046caab: ret  */ FN_RET(0x0046ca88); r_esp += 4; return;
}

void f_0046caac(void) /* FUN_0046caac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046caac);
    /* 0046caac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046caad: mov ebp, esp */ r_ebp = r_esp;
    /* 0046caaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cab0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cab3: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0046cab7: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0046caba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cabb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cabe: call 0x46ca2e */ r_esp -= 4; W32(r_esp, 0x46cac3u); f_0046ca2e();
    /* 0046cac3: movsx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0046cac7: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cacd: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0046cad0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cad1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cad4: call 0x46ca01 */ r_esp -= 4; W32(r_esp, 0x46cad9u); f_0046ca01();
    /* 0046cad9: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cadb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cadc: ret 4 */ FN_RET(0x0046caac); r_esp += 8; return;
}

void f_0046cae0(void) /* FUN_0046cae0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cae0);
    /* 0046cae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cae7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046caea: call 0x46c66c */ r_esp -= 4; W32(r_esp, 0x46caefu); f_0046c66c();
    /* 0046caef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046caf2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0046caf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046caf7: je 0x46cb05 */ if (fZ) goto L_0046cb05;
L_0046caf9:; BB(0x0046caf9);
    /* 0046caf9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cafc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cafd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x46cb02u); f_0048ac1b();
    /* 0046cb02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046cb05:; BB(0x0046cb05);
    /* 0046cb05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb08: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cb0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cb0b: ret 4 */ FN_RET(0x0046cae0); r_esp += 8; return;
}

void f_0046cb10(void) /* FUN_0046cb10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cb10);
    /* 0046cb10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb11: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cb13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cb17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb1a: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x46cb1fu); f_005dd290();
    /* 0046cb1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb22: mov dword ptr [eax], 0x635ea4 */ W32((u32)(r_eax), 0x635ea4u);
    /* 0046cb28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb2b: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cb2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cb2e: ret  */ FN_RET(0x0046cb10); r_esp += 4; return;
}

void f_0046cb2f(void) /* FUN_0046cb2f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cb2f);
    /* 0046cb2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb30: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cb32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb33: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cb36: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb39: mov dword ptr [eax], 0x635ea4 */ W32((u32)(r_eax), 0x635ea4u);
    /* 0046cb3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb42: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x46cb47u); f_005dd2d3();
    /* 0046cb47: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cb49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cb4a: ret  */ FN_RET(0x0046cb2f); r_esp += 4; return;
}

void f_0046cb4b(void) /* FUN_0046cb4b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cb4b);
    /* 0046cb4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb4c: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cb4e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046cb51: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cb54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb57: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0046cb5a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046cb5d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046cb60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb61: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb64: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0046cb67: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cb6a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb6d: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0046cb70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb73: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x46cb78u); f_005dd560();
    /* 0046cb78: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cb7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cb7b: ret  */ FN_RET(0x0046cb4b); r_esp += 4; return;
}

void f_0046cb7c(void) /* FUN_0046cb7c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cb7c);
    /* 0046cb7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb7d: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cb7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb80: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cb83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb86: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cb89: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 0046cb8c: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cb8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cb8f: ret 4 */ FN_RET(0x0046cb7c); r_esp += 8; return;
}

void f_0046cb92(void) /* FUN_0046cb92 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cb92);
    /* 0046cb92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb93: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cb95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cb99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb9c: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0046cb9f: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cba2: ret  */ FN_RET(0x0046cb92); r_esp += 4; return;
}

void f_0046cba3(void) /* FUN_0046cba3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cba3);
    /* 0046cba3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cba4: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cba6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cba7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cbaa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cbad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cbae: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0046cbb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cbb3: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x46cbb8u); f_005dd560();
    /* 0046cbb8: mov ecx, eax */ r_ecx = r_eax;
    /* 0046cbba: call 0x46ca2e */ r_esp -= 4; W32(r_esp, 0x46cbbfu); f_0046ca2e();
    /* 0046cbbf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cbc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cbc3: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0046cbc5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cbc8: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x46cbcdu); f_005dd560();
    /* 0046cbcd: mov ecx, eax */ r_ecx = r_eax;
    /* 0046cbcf: call 0x46ca2e */ r_esp -= 4; W32(r_esp, 0x46cbd4u); f_0046ca2e();
    /* 0046cbd4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046cbd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cbd8: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0046cbda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cbdd: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x46cbe2u); f_005dd560();
    /* 0046cbe2: mov ecx, eax */ r_ecx = r_eax;
    /* 0046cbe4: call 0x46ca2e */ r_esp -= 4; W32(r_esp, 0x46cbe9u); f_0046ca2e();
    /* 0046cbe9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cbec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cbed: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0046cbef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cbf2: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x46cbf7u); f_005dd560();
    /* 0046cbf7: mov ecx, eax */ r_ecx = r_eax;
    /* 0046cbf9: call 0x46ca2e */ r_esp -= 4; W32(r_esp, 0x46cbfeu); f_0046ca2e();
    /* 0046cbfe: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cc00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cc01: ret 4 */ FN_RET(0x0046cba3); r_esp += 8; return;
}

void f_0046cc04(void) /* FUN_0046cc04 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cc04);
    /* 0046cc04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc05: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cc07: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046cc0a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0046cc0d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0046cc14: jmp 0x46cc1f */ goto L_0046cc1f;
L_0046cc16:; BB(0x0046cc16);
    /* 0046cc16: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046cc19: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046cc1c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0046cc1f:; BB(0x0046cc1f);
    /* 0046cc1f: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046cc23: jge 0x46cca4 */ if ((fS==fO)) goto L_0046cca4;
L_0046cc25:; BB(0x0046cc25);
    /* 0046cc25: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046cc28: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x46cc2du); f_005dd4d2();
    /* 0046cc2d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0046cc30: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0046cc37: jmp 0x46cc42 */ goto L_0046cc42;
L_0046cc39:; BB(0x0046cc39);
    /* 0046cc39: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046cc3c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cc3f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0046cc42:; BB(0x0046cc42);
    /* 0046cc42: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046cc45: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046cc48: jge 0x46cc9f */ if ((fS==fO)) goto L_0046cc9f;
L_0046cc4a:; BB(0x0046cc4a);
    /* 0046cc4a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046cc4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc4e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046cc51: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x46cc56u); f_005dd560();
    /* 0046cc56: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0046cc59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cc5c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cc5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc60: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046cc63: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0046cc66: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x46cc6bu); f_005b9dbe();
    /* 0046cc6b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046cc6e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046cc71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc72: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046cc75: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x46cc7au); f_005dd560();
    /* 0046cc7a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046cc7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046cc80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc81: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046cc84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc85: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046cc88: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x46cc8du); f_005dd58e();
    /* 0046cc8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046cc90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc91: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046cc94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc95: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046cc98: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x46cc9du); f_005dd58e();
    /* 0046cc9d: jmp 0x46cc39 */ goto L_0046cc39;
L_0046cc9f:; BB(0x0046cc9f);
    /* 0046cc9f: jmp 0x46cc16 */ goto L_0046cc16;
L_0046cca4:; BB(0x0046cca4);
    /* 0046cca4: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cca6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cca7: ret  */ FN_RET(0x0046cc04); r_esp += 4; return;
}

void f_0046cca8(void) /* FUN_0046cca8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cca8);
    /* 0046cca8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cca9: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ccab: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046ccae: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0046ccb1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046ccb8: jmp 0x46ccc3 */ goto L_0046ccc3;
L_0046ccba:; BB(0x0046ccba);
    /* 0046ccba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ccbd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046ccc0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046ccc3:; BB(0x0046ccc3);
    /* 0046ccc3: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ccc7: jge 0x46cd3a */ if ((fS==fO)) goto L_0046cd3a;
L_0046ccc9:; BB(0x0046ccc9);
    /* 0046ccc9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0046ccd0: jmp 0x46ccdb */ goto L_0046ccdb;
L_0046ccd2:; BB(0x0046ccd2);
    /* 0046ccd2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ccd5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046ccd8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0046ccdb:; BB(0x0046ccdb);
    /* 0046ccdb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ccde: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046cce1: jge 0x46cd38 */ if ((fS==fO)) goto L_0046cd38;
L_0046cce3:; BB(0x0046cce3);
    /* 0046cce3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046cce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cce7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046ccea: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x46ccefu); f_005dd560();
    /* 0046ccef: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046ccf2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046ccf5: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046ccf8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ccf9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046ccfc: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0046ccff: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x46cd04u); f_005b9dbe();
    /* 0046cd04: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046cd07: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046cd0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd0b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046cd0e: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x46cd13u); f_005dd560();
    /* 0046cd13: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046cd16: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046cd19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd1a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046cd1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd1e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046cd21: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x46cd26u); f_005dd58e();
    /* 0046cd26: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046cd29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046cd2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd2e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046cd31: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x46cd36u); f_005dd58e();
    /* 0046cd36: jmp 0x46ccd2 */ goto L_0046ccd2;
L_0046cd38:; BB(0x0046cd38);
    /* 0046cd38: jmp 0x46ccba */ goto L_0046ccba;
L_0046cd3a:; BB(0x0046cd3a);
    /* 0046cd3a: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cd3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cd3d: ret 4 */ FN_RET(0x0046cca8); r_esp += 8; return;
}

void f_0046cd40(void) /* FUN_0046cd40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cd40);
    /* 0046cd40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd41: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cd43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cd47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cd4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cd4e: call 0x5dd3ac */ r_esp -= 4; W32(r_esp, 0x46cd53u); f_005dd3ac();
    /* 0046cd53: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0046cd56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd57: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cd5a: call 0x46ca2e */ r_esp -= 4; W32(r_esp, 0x46cd5fu); f_0046ca2e();
    /* 0046cd5f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0046cd62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd63: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cd66: call 0x46ca01 */ r_esp -= 4; W32(r_esp, 0x46cd6bu); f_0046ca01();
    /* 0046cd6b: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cd6f: je 0x46cd81 */ if (fZ) goto L_0046cd81;
L_0046cd71:; BB(0x0046cd71);
    /* 0046cd71: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cd75: jne 0x46cd81 */ if (!fZ) goto L_0046cd81;
L_0046cd77:; BB(0x0046cd77);
    /* 0046cd77: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd79: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cd7c: call 0x46ca2e */ r_esp -= 4; W32(r_esp, 0x46cd81u); f_0046ca2e();
L_0046cd81:; BB(0x0046cd81);
    /* 0046cd81: cmp dword ptr [ebp + 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cd85: jne 0x46cd9d */ if (!fZ) goto L_0046cd9d;
L_0046cd87:; BB(0x0046cd87);
    /* 0046cd87: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0046cd8a: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046cd8d: add eax, 0xaf0 */ {  u32 a = r_eax; u32 b = 0xaf0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046cd92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cd96: call 0x46c873 */ r_esp -= 4; W32(r_esp, 0x46cd9bu); f_0046c873();
    /* 0046cd9b: jmp 0x46cdb6 */ goto L_0046cdb6;
L_0046cd9d:; BB(0x0046cd9d);
    /* 0046cd9d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0046cda0: imul ecx, ecx, 0xd */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xdu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046cda3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0046cda6: lea eax, [ecx + edx + 0xaef] */ r_eax = (u32)(r_ecx+r_edx+0xaefu);
    /* 0046cdad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cdae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cdb1: call 0x46c873 */ r_esp -= 4; W32(r_esp, 0x46cdb6u); f_0046c873();
L_0046cdb6:; BB(0x0046cdb6);
    /* 0046cdb6: push 0x6979 */ { u32 v = 0x6979u; r_esp -= 4; W32(r_esp, v); }
    /* 0046cdbb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cdbe: call 0x46c88c */ r_esp -= 4; W32(r_esp, 0x46cdc3u); f_0046c88c();
    /* 0046cdc3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cdc6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046cdc8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cdcb: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x46cdceu); call_ind(t); }
    /* 0046cdce: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cdd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cdd1: ret 0x10 */ FN_RET(0x0046cd40); r_esp += 20; return;
}

void f_0046cde0(void) /* FUN_0046cde0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cde0);
    /* 0046cde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cde3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cde4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cde7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cdea: call 0x46cb2f */ r_esp -= 4; W32(r_esp, 0x46cdefu); f_0046cb2f();
    /* 0046cdef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cdf2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0046cdf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cdf7: je 0x46ce05 */ if (fZ) goto L_0046ce05;
L_0046cdf9:; BB(0x0046cdf9);
    /* 0046cdf9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cdfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cdfd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x46ce02u); f_0048ac1b();
    /* 0046ce02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046ce05:; BB(0x0046ce05);
    /* 0046ce05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ce08: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ce0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ce0b: ret 4 */ FN_RET(0x0046cde0); r_esp += 8; return;
}

void f_0046ce10(void) /* FUN_0046ce10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ce10);
    /* 0046ce10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ce11: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ce13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046ce16: mov word ptr [eax + 0x22], 0 */ W16((u32)(r_eax+0x22u), 0x0u);
    /* 0046ce1c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046ce1f: mov word ptr [ecx + 0x20], 7 */ W16((u32)(r_ecx+0x20u), 0x7u);
    /* 0046ce25: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046ce28: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0046ce2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046ce32: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0046ce39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ce3a: ret  */ FN_RET(0x0046ce10); r_esp += 4; return;
}

void f_0046ce3b(void) /* FUN_0046ce3b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ce3b);
    /* 0046ce3b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ce3c: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ce3e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046ce41: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046ce44: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046ce47: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046ce4a: mov dword ptr [0x6f6a2c], ecx */ W32((u32)(0x6f6a2cu), r_ecx);
    /* 0046ce50: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046ce53: movsx eax, word ptr [edx + 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x24u));
    /* 0046ce57: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ce5a: jne 0x46ce64 */ if (!fZ) goto L_0046ce64;
L_0046ce5c:; BB(0x0046ce5c);
    /* 0046ce5c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046ce5f: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0046ce61: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0046ce64:; BB(0x0046ce64);
    /* 0046ce64: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046ce67: mov dword ptr [0x6f6a30], edx */ W32((u32)(0x6f6a30u), r_edx);
    /* 0046ce6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046ce70: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0046ce72: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0046ce75: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046ce78: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0046ce7b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046ce7e:; BB(0x0046ce7e);
    /* 0046ce7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046ce81: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0046ce84: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0046ce87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ce89: je 0x46ceb4 */ if (fZ) goto L_0046ceb4;
L_0046ce8b:; BB(0x0046ce8b);
    /* 0046ce8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046ce8e: movsx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 0046ce92: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046ce95: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046ce98: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0046ce9b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0046ce9e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046cea1: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0046cea4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046cea7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046ceaa: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0046ceae: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0046ceb2: jmp 0x46cee5 */ goto L_0046cee5;
L_0046ceb4:; BB(0x0046ceb4);
    /* 0046ceb4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046ceb7: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0046ceba: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046cebd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046cec0: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0046cec4: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 0046cec8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046cecb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cece: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0046ced1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046ced4: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0046ced7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0046ceda: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cedd: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0046cee1: mov word ptr [eax + 0x1e], cx */ W16((u32)(r_eax+0x1eu), (u16)r_ecx);
L_0046cee5:; BB(0x0046cee5);
    /* 0046cee5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046cee8: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 0046ceef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cef2: movsx ecx, word ptr [eax + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 0046cef6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0046cef9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046cefc: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0046ceff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cf01: je 0x46cf12 */ if (fZ) goto L_0046cf12;
L_0046cf03:; BB(0x0046cf03);
    /* 0046cf03: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cf06: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0046cf09: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cf0c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046cf0f: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
L_0046cf12:; BB(0x0046cf12);
    /* 0046cf12: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046cf15: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0046cf18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cf1a: je 0x46cf2f */ if (fZ) goto L_0046cf2f;
L_0046cf1c:; BB(0x0046cf1c);
    /* 0046cf1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046cf1f: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0046cf21: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046cf24: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0046cf27: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046cf29: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cf2c: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
L_0046cf2f:; BB(0x0046cf2f);
    /* 0046cf2f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046cf32: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0046cf35: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cf37: je 0x46cf4d */ if (fZ) goto L_0046cf4d;
L_0046cf39:; BB(0x0046cf39);
    /* 0046cf39: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046cf3c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046cf3f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cf42: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0046cf45: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046cf47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cf4a: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
L_0046cf4d:; BB(0x0046cf4d);
    /* 0046cf4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046cf50: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0046cf53: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046cf56: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0046cf59: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046cf5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cf5e: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 0046cf61: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046cf64: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0046cf67: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cf69: je 0x46cf79 */ if (fZ) goto L_0046cf79;
L_0046cf6b:; BB(0x0046cf6b);
    /* 0046cf6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cf6e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0046cf71: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cf73: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046cf76: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
L_0046cf79:; BB(0x0046cf79);
    /* 0046cf79: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cf7c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0046cf7f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046cf82: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046cf85: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046cf88: add eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046cf8b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046cf8e: cmp dword ptr [ebp - 8], 0x7fff */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046cf95: jl 0x46cf9e */ if ((fS!=fO)) goto L_0046cf9e;
L_0046cf97:; BB(0x0046cf97);
    /* 0046cf97: mov dword ptr [ebp - 8], 0x7fff */ W32((u32)(r_ebp+0xfffffff8u), 0x7fffu);
L_0046cf9e:; BB(0x0046cf9e);
    /* 0046cf9e: cmp dword ptr [ebp - 8], 0xffff8001 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffff8001u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046cfa5: jg 0x46cfae */ if ((!fZ&&fS==fO)) goto L_0046cfae;
L_0046cfa7:; BB(0x0046cfa7);
    /* 0046cfa7: mov dword ptr [ebp - 8], 0xffff8001 */ W32((u32)(r_ebp+0xfffffff8u), 0xffff8001u);
L_0046cfae:; BB(0x0046cfae);
    /* 0046cfae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046cfb1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046cfb4: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0046cfb7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cfba: movsx ecx, word ptr [eax + 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x24u));
    /* 0046cfbe: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cfc1: jne 0x46cfd8 */ if (!fZ) goto L_0046cfd8;
L_0046cfc3:; BB(0x0046cfc3);
    /* 0046cfc3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cfc6: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0046cfca: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0046cfcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cfd0: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cfd3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cfd6: jmp 0x46cfe9 */ goto L_0046cfe9;
L_0046cfd8:; BB(0x0046cfd8);
    /* 0046cfd8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cfdb: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0046cfde: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0046cfe0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cfe3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cfe6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0046cfe9:; BB(0x0046cfe9);
    /* 0046cfe9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046cfec: movsx eax, word ptr [edx + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1eu));
    /* 0046cff0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046cff3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046cff6: mov edx, dword ptr [ecx*4 + 0x683a68] */ r_edx = R32((u32)(r_ecx*4+0x683a68u));
    /* 0046cffd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0046d000: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046d003: mov cx, word ptr [eax + 0x22] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x22u))) & 0xffffu);
    /* 0046d007: add cx, word ptr [ebp - 8] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046d00b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046d00e: mov word ptr [edx + 0x22], cx */ W16((u32)(r_edx+0x22u), (u16)r_ecx);
    /* 0046d012: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046d015: movsx ecx, word ptr [eax + 0x22] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x22u));
    /* 0046d019: and ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d01f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d021: je 0x46d02e */ if (fZ) goto L_0046d02e;
L_0046d023:; BB(0x0046d023);
    /* 0046d023: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046d026: mov word ptr [edx + 0x22], 0 */ W16((u32)(r_edx+0x22u), 0x0u);
    /* 0046d02c: jmp 0x46d043 */ goto L_0046d043;
L_0046d02e:; BB(0x0046d02e);
    /* 0046d02e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046d031: movsx ecx, word ptr [eax + 0x22] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x22u));
    /* 0046d035: cmp ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d038: jle 0x46d043 */ if ((fZ||fS!=fO)) goto L_0046d043;
L_0046d03a:; BB(0x0046d03a);
    /* 0046d03a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046d03d: mov word ptr [edx + 0x22], 0x58 */ W16((u32)(r_edx+0x22u), 0x58u);
L_0046d043:; BB(0x0046d043);
    /* 0046d043: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046d046: movsx ecx, word ptr [eax + 0x22] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x22u));
    /* 0046d04a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0046d04d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d050: mov eax, dword ptr [edx*4 + 0x683aa8] */ r_eax = R32((u32)(r_edx*4+0x683aa8u));
    /* 0046d057: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046d05a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046d05d: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0046d060: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046d063: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046d066: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0046d069: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046d06c: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0046d070: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 0046d074: mov eax, dword ptr [0x6f6a30] */ r_eax = R32((u32)(0x6f6a30u));
    /* 0046d079: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046d07c: mov dword ptr [0x6f6a30], eax */ W32((u32)(0x6f6a30u), r_eax);
    /* 0046d081: cmp dword ptr [0x6f6a30], 0 */ {  u32 a = R32((u32)(0x6f6a30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d088: jne 0x46ce7e */ if (!fZ) goto L_0046ce7e;
L_0046d08e:; BB(0x0046d08e);
    /* 0046d08e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046d091: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046d094: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0046d096: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046d099: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d09c: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0046d09f: mov edx, dword ptr [0x6f6a2c] */ r_edx = R32((u32)(0x6f6a2cu));
    /* 0046d0a5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0046d0a8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046d0ab: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046d0ae: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046d0b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046d0b4: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d0b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d0b7: ret  */ FN_RET(0x0046ce3b); r_esp += 4; return;
}

void f_0046d0b8(void) /* FUN_0046d0b8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d0b8);
    /* 0046d0b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d0b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d0bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046d0bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d0be: ret  */ FN_RET(0x0046d0b8); r_esp += 4; return;
}

void f_0046d0c0(void) /* FUN_0046d0c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d0c0);
    /* 0046d0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d0c3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046d0c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0046d0c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046d0cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d0cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d0d0: call 0x425366 */ r_esp -= 4; W32(r_esp, 0x46d0d5u); f_00425366();
    /* 0046d0d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d0d8: mov dword ptr [ecx], 0x635eb4 */ W32((u32)(r_ecx), 0x635eb4u);
    /* 0046d0de: mov dword ptr [ebp - 4], 0x64 */ W32((u32)(r_ebp+0xfffffffcu), 0x64u);
    /* 0046d0e5: push 0x3250 */ { u32 v = 0x3250u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d0ea: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46d0efu); f_0048ab58();
    /* 0046d0ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d0f2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046d0f5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d0f9: je 0x46d114 */ if (fZ) goto L_0046d114;
L_0046d0fb:; BB(0x0046d0fb);
    /* 0046d0fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d0fd: push 0xffffff6a */ { u32 v = 0xffffff6au; r_esp -= 4; W32(r_esp, v); }
    /* 0046d102: push 0xffffff6a */ { u32 v = 0xffffff6au; r_esp -= 4; W32(r_esp, v); }
    /* 0046d107: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046d10a: call 0x41e7f0 */ r_esp -= 4; W32(r_esp, 0x46d10fu); f_0041e7f0();
    /* 0046d10f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046d112: jmp 0x46d11b */ goto L_0046d11b;
L_0046d114:; BB(0x0046d114);
    /* 0046d114: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0046d11b:; BB(0x0046d11b);
    /* 0046d11b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d11e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046d121: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0046d124: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d127: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d129: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d12a: ret 8 */ FN_RET(0x0046d0c0); r_esp += 12; return;
}

void f_0046d12d(void) /* FUN_0046d12d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d12d);
    /* 0046d12d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d12e: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d130: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d131: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046d134: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d137: mov dword ptr [eax], 0x635eb4 */ W32((u32)(r_eax), 0x635eb4u);
    /* 0046d13d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d140: call 0x425495 */ r_esp -= 4; W32(r_esp, 0x46d145u); f_00425495();
    /* 0046d145: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d147: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d148: ret  */ FN_RET(0x0046d12d); r_esp += 4; return;
}

void f_0046d149(void) /* FUN_0046d149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d149);
    /* 0046d149: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d14a: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d14c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d14d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046d150: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d153: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0046d156: call 0x426404 */ r_esp -= 4; W32(r_esp, 0x46d15bu); f_00426404();
    /* 0046d15b: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d15d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d15e: ret  */ FN_RET(0x0046d149); r_esp += 4; return;
}

void f_0046d15f(void) /* FUN_0046d15f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d15f);
    /* 0046d15f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d160: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d162: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d163: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046d166: mov eax, 1 */ r_eax = 0x1u;
    /* 0046d16b: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d16d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d16e: ret  */ FN_RET(0x0046d15f); r_esp += 4; return;
}

void f_0046d16f(void) /* FUN_0046d16f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d16f);
    /* 0046d16f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d170: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d172: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d173: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046d176: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d179: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x46d17eu); f_005e3fb0();
    /* 0046d17e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d181: mov dword ptr [eax], 0x635ee4 */ W32((u32)(r_eax), 0x635ee4u);
    /* 0046d187: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d18a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046d18d: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0046d190: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d193: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 0046d19a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d19d: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d19f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d1a0: ret 4 */ FN_RET(0x0046d16f); r_esp += 8; return;
}

void f_0046d1a3(void) /* FUN_0046d1a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d1a3);
    /* 0046d1a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d1a4: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d1a6: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046d1a9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0046d1ac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d1af: mov dword ptr [eax], 0x635ee4 */ W32((u32)(r_eax), 0x635ee4u);
    /* 0046d1b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d1b8: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d1bc: je 0x46d1f5 */ if (fZ) goto L_0046d1f5;
L_0046d1be:; BB(0x0046d1be);
    /* 0046d1be: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d1c1: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0046d1c4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046d1c7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046d1ca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046d1cd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d1d1: je 0x46d1e4 */ if (fZ) goto L_0046d1e4;
L_0046d1d3:; BB(0x0046d1d3);
    /* 0046d1d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d1d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d1d8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046d1da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d1dd: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x46d1dfu); call_ind(t); }
    /* 0046d1df: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046d1e2: jmp 0x46d1eb */ goto L_0046d1eb;
L_0046d1e4:; BB(0x0046d1e4);
    /* 0046d1e4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0046d1eb:; BB(0x0046d1eb);
    /* 0046d1eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d1ee: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_0046d1f5:; BB(0x0046d1f5);
    /* 0046d1f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d1f8: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x46d1fdu); f_005e3fed();
    /* 0046d1fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d1ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d200: ret  */ FN_RET(0x0046d1a3); r_esp += 4; return;
}

void f_0046d201(void) /* FUN_0046d201 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d201);
    /* 0046d201: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d202: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d204: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046d207: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0046d20a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d20c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d20f: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x46d214u); f_005e4060();
    /* 0046d214: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d217: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 0046d221: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d224: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 0046d22e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d231: mov dword ptr [edx + 0x88], 0xffffffff */ W32((u32)(r_edx+0x88u), 0xffffffffu);
    /* 0046d23b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d23e: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 0046d248: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d24b: mov dword ptr [ecx + 0x90], 0xffffffff */ W32((u32)(r_ecx+0x90u), 0xffffffffu);
    /* 0046d255: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d258: mov dword ptr [edx + 0xb8], 0 */ W32((u32)(r_edx+0xb8u), 0x0u);
    /* 0046d262: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d265: mov dword ptr [eax + 0xb0], 0xffffffff */ W32((u32)(r_eax+0xb0u), 0xffffffffu);
    /* 0046d26f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d272: mov dword ptr [ecx + 0xb4], 0xffffffff */ W32((u32)(r_ecx+0xb4u), 0xffffffffu);
    /* 0046d27c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d27f: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 0046d289: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046d290: jmp 0x46d29b */ goto L_0046d29b;
L_0046d292:; BB(0x0046d292);
    /* 0046d292: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d295: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d298: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046d29b:; BB(0x0046d29b);
    /* 0046d29b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d29f: jge 0x46d2c5 */ if ((fS==fO)) goto L_0046d2c5;
L_0046d2a1:; BB(0x0046d2a1);
    /* 0046d2a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d2a4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d2a7: mov dword ptr [edx + ecx*8 + 0x94], 0 */ W32((u32)(r_edx+r_ecx*8+0x94u), 0x0u);
    /* 0046d2b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d2b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d2b8: mov dword ptr [ecx + eax*8 + 0x98], 1 */ W32((u32)(r_ecx+r_eax*8+0x98u), 0x1u);
    /* 0046d2c3: jmp 0x46d292 */ goto L_0046d292;
L_0046d2c5:; BB(0x0046d2c5);
    /* 0046d2c5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d2c8: mov dword ptr [edx + 0xbc], 0 */ W32((u32)(r_edx+0xbcu), 0x0u);
    /* 0046d2d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d2d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d2d6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d2d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046d2db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d2de: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x46d2e1u); call_ind(t); }
    /* 0046d2e1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d2e4: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d2e8: jne 0x46d330 */ if (!fZ) goto L_0046d330;
L_0046d2ea:; BB(0x0046d2ea);
    /* 0046d2ea: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046d2ec: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46d2f1u); f_0048ab58();
    /* 0046d2f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d2f4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046d2f7: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d2fb: je 0x46d30a */ if (fZ) goto L_0046d30a;
L_0046d2fd:; BB(0x0046d2fd);
    /* 0046d2fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046d300: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x46d305u); f_005e9d30();
    /* 0046d305: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046d308: jmp 0x46d311 */ goto L_0046d311;
L_0046d30a:; BB(0x0046d30a);
    /* 0046d30a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0046d311:; BB(0x0046d311);
    /* 0046d311: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d314: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046d317: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 0046d31a: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0046d31c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d31e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d320: push 0x1d4f9 */ { u32 v = 0x1d4f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d325: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d328: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0046d32b: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46d330u); f_005e9f50();
L_0046d330:; BB(0x0046d330);
    /* 0046d330: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d333: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 0046d336: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0046d338: mov eax, 8 */ r_eax = 0x8u;
    /* 0046d33d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046d33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d340: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d343: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 0046d346: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x46d34bu); f_005ea1cf();
    /* 0046d34b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d34e: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 0046d351: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d354: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 0046d357: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046d359: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x46d35cu); call_ind(t); }
    /* 0046d35c: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d35e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d35f: ret  */ FN_RET(0x0046d201); r_esp += 4; return;
}

void f_0046d360(void) /* FUN_0046d360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d360);
    /* 0046d360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d361: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046d367: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d36a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046d36d: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 0046d373: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d376: call 0x46d381 */ r_esp -= 4; W32(r_esp, 0x46d37bu); f_0046d381();
    /* 0046d37b: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d37d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d37e: ret 4 */ FN_RET(0x0046d360); r_esp += 8; return;
}

void f_0046d381(void) /* FUN_0046d381 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d381);
    /* 0046d381: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d382: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d384: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046d387: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046d388: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0046d38b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d38e: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0046d391: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d392: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 0046d398: call 0x470bce */ r_esp -= 4; W32(r_esp, 0x46d39du); f_00470bce();
    /* 0046d39d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046d3a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046d3a7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d3aa: cmp dword ptr [edx + 0x88], -1 */ {  u32 a = R32((u32)(r_edx+0x88u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d3b1: je 0x46d52e */ if (fZ) goto L_0046d52e;
L_0046d3b7:; BB(0x0046d3b7);
    /* 0046d3b7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d3ba: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 0046d3c0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d3c3: mov eax, dword ptr [edx + ecx*8 + 0x98] */ r_eax = R32((u32)(r_edx+r_ecx*8+0x98u));
    /* 0046d3ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d3cb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d3ce: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 0046d3d4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d3d7: mov ecx, dword ptr [eax + edx*8 + 0x94] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x94u));
    /* 0046d3de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d3df: push 0x683c0c */ { u32 v = 0x683c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046d3e4: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0046d3e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d3e8: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x46d3eeu); call_ind(t); }
    /* 0046d3ee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d3f1: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0046d3f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d3f5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d3f8: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 0046d3fb: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0046d400: mov ecx, dword ptr [eax + edx*4 + 0xd8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xd8u));
    /* 0046d407: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d40a: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0046d40d: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d413: mov eax, dword ptr [edx + eax*4 + 0xd8] */ r_eax = R32((u32)(r_edx+r_eax*4+0xd8u));
    /* 0046d41a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046d41c: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x46d41fu); call_ind(t); }
    /* 0046d41f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d422: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0046d425: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d42b: mov ecx, dword ptr [edx + ecx*4 + 0xd8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xd8u));
    /* 0046d432: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d435: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 0046d438: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0046d43d: mov edx, dword ptr [eax + edx*4 + 0xd8] */ r_edx = R32((u32)(r_eax+r_edx*4+0xd8u));
    /* 0046d444: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046d446: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x46d449u); call_ind(t); }
    /* 0046d449: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d44c: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 0046d452: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d455: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046d458: imul ecx, dword ptr [eax + edx*8 + 0x94] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+r_edx*8+0x94u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046d460: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046d463: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d466: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 0046d46c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d46f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046d472: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046d473: idiv dword ptr [esi + ecx*8 + 0x98] */ { i32 d = (i32)R32((u32)(r_esi+r_ecx*8+0x98u)); if (!d) UNSUP(0x0046d473, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0046d473, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0046d47a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046d47d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d481: je 0x46d502 */ if (fZ) goto L_0046d502;
L_0046d483:; BB(0x0046d483);
    /* 0046d483: push 0x683c14 */ { u32 v = 0x683c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d488: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0046d48b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d48c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x46d491u); f_00624510();
    /* 0046d491: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d494: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d496: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d498: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0046d49b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d49c: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046d49f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d4a0: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x46d4a5u); f_004298d8();
    /* 0046d4a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d4a8: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0046d4ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d4ac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d4af: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0046d4b2: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d4b8: mov ecx, dword ptr [edx + ecx*4 + 0xec] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xecu));
    /* 0046d4bf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d4c2: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 0046d4c5: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0046d4ca: mov edx, dword ptr [eax + edx*4 + 0xec] */ r_edx = R32((u32)(r_eax+r_edx*4+0xecu));
    /* 0046d4d1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046d4d3: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x46d4d6u); call_ind(t); }
    /* 0046d4d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d4d9: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 0046d4dc: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0046d4e1: mov ecx, dword ptr [eax + edx*4 + 0xec] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xecu));
    /* 0046d4e8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d4eb: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0046d4ee: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d4f4: mov eax, dword ptr [edx + eax*4 + 0xec] */ r_eax = R32((u32)(r_edx+r_eax*4+0xecu));
    /* 0046d4fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046d4fd: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46d500u); call_ind(t); }
    /* 0046d500: jmp 0x46d52c */ goto L_0046d52c;
L_0046d502:; BB(0x0046d502);
    /* 0046d502: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d505: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0046d508: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d50e: mov ecx, dword ptr [edx + ecx*4 + 0xec] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xecu));
    /* 0046d515: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d518: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 0046d51b: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0046d520: mov edx, dword ptr [eax + edx*4 + 0xec] */ r_edx = R32((u32)(r_eax+r_edx*4+0xecu));
    /* 0046d527: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046d529: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x46d52cu); call_ind(t); }
L_0046d52c:; BB(0x0046d52c);
    /* 0046d52c: jmp 0x46d582 */ goto L_0046d582;
L_0046d52e:; BB(0x0046d52e);
    /* 0046d52e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d531: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 0046d534: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0046d539: mov ecx, dword ptr [eax + edx*4 + 0xd8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xd8u));
    /* 0046d540: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d543: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0046d546: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d54c: mov eax, dword ptr [edx + eax*4 + 0xd8] */ r_eax = R32((u32)(r_edx+r_eax*4+0xd8u));
    /* 0046d553: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046d555: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x46d558u); call_ind(t); }
    /* 0046d558: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d55b: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0046d55e: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d564: mov ecx, dword ptr [edx + ecx*4 + 0xec] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xecu));
    /* 0046d56b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046d56e: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 0046d571: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0046d576: mov edx, dword ptr [eax + edx*4 + 0xec] */ r_edx = R32((u32)(r_eax+r_edx*4+0xecu));
    /* 0046d57d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046d57f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x46d582u); call_ind(t); }
L_0046d582:; BB(0x0046d582);
    /* 0046d582: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 0046d588: call 0x470d08 */ r_esp -= 4; W32(r_esp, 0x46d58du); f_00470d08();
    /* 0046d58d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046d58e: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d590: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d591: ret  */ FN_RET(0x0046d381); r_esp += 4; return;
}

void f_0046d592(void) /* FUN_0046d592 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d592);
    /* 0046d592: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d593: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d595: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046d598: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0046d59b: mov dword ptr [ebp - 0x50], 0x1d4c4 */ W32((u32)(r_ebp+0xffffffb0u), 0x1d4c4u);
    /* 0046d5a2: mov dword ptr [ebp - 0x4c], 0x1d4c5 */ W32((u32)(r_ebp+0xffffffb4u), 0x1d4c5u);
    /* 0046d5a9: mov dword ptr [ebp - 0x48], 0x1d4c6 */ W32((u32)(r_ebp+0xffffffb8u), 0x1d4c6u);
    /* 0046d5b0: mov dword ptr [ebp - 0x44], 0x1d4d3 */ W32((u32)(r_ebp+0xffffffbcu), 0x1d4d3u);
    /* 0046d5b7: mov dword ptr [ebp - 0x40], 0x1d4d0 */ W32((u32)(r_ebp+0xffffffc0u), 0x1d4d0u);
    /* 0046d5be: mov dword ptr [ebp - 0x3c], 0x1d4d1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1d4d1u);
    /* 0046d5c5: mov dword ptr [ebp - 0x38], 0x1d4d2 */ W32((u32)(r_ebp+0xffffffc8u), 0x1d4d2u);
    /* 0046d5cc: mov dword ptr [ebp - 0x34], 0x1d4d4 */ W32((u32)(r_ebp+0xffffffccu), 0x1d4d4u);
    /* 0046d5d3: mov dword ptr [ebp - 0x30], 0x1d4d9 */ W32((u32)(r_ebp+0xffffffd0u), 0x1d4d9u);
    /* 0046d5da: mov dword ptr [ebp - 0x2c], 0x1d4da */ W32((u32)(r_ebp+0xffffffd4u), 0x1d4dau);
    /* 0046d5e1: mov dword ptr [ebp - 0x28], 0x1d4db */ W32((u32)(r_ebp+0xffffffd8u), 0x1d4dbu);
    /* 0046d5e8: mov dword ptr [ebp - 0x24], 0x1d4e0 */ W32((u32)(r_ebp+0xffffffdcu), 0x1d4e0u);
    /* 0046d5ef: mov dword ptr [ebp - 0x20], 0x1d4e1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1d4e1u);
    /* 0046d5f6: mov dword ptr [ebp - 0x1c], 0x1d4e2 */ W32((u32)(r_ebp+0xffffffe4u), 0x1d4e2u);
    /* 0046d5fd: mov dword ptr [ebp - 0x18], 0x1d4e3 */ W32((u32)(r_ebp+0xffffffe8u), 0x1d4e3u);
    /* 0046d604: mov dword ptr [ebp - 0x14], 0x1d4e4 */ W32((u32)(r_ebp+0xffffffecu), 0x1d4e4u);
    /* 0046d60b: mov dword ptr [ebp - 0x10], 0x1d4e5 */ W32((u32)(r_ebp+0xfffffff0u), 0x1d4e5u);
    /* 0046d612: mov dword ptr [ebp - 0xc], 0x1d4e6 */ W32((u32)(r_ebp+0xfffffff4u), 0x1d4e6u);
    /* 0046d619: mov dword ptr [ebp - 8], 0x1d4e7 */ W32((u32)(r_ebp+0xfffffff8u), 0x1d4e7u);
    /* 0046d620: mov dword ptr [ebp - 4], 0x1d4e8 */ W32((u32)(r_ebp+0xfffffffcu), 0x1d4e8u);
    /* 0046d627: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0046d62a: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0046d62d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046d630: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 0046d633: mov ecx, dword ptr [ebp + eax*4 - 0x50] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffb0u));
    /* 0046d637: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d638: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0046d63b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x46d640u); f_005ea0c3();
    /* 0046d640: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d642: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d643: ret 4 */ FN_RET(0x0046d592); r_esp += 8; return;
}

void f_0046d646(void) /* FUN_0046d646 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d646);
    /* 0046d646: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d647: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d649: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046d64c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046d64f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046d652: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046d655: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0046d659: ja 0x46d6b7 */ if ((!fC&&!fZ)) goto L_0046d6b7;
L_0046d65b:; BB(0x0046d65b);
    /* 0046d65b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046d65e: jmp dword ptr [ecx*4 + 0x46d6bd] */ { u32 t = R32((u32)(r_ecx*4+0x46d6bdu)); switch (t) { case 0x46d665u: goto L_0046d665; case 0x46d671u: goto L_0046d671; case 0x46d688u: goto L_0046d688; case 0x46d69fu: goto L_0046d69f; default: UNSUP(0x0046d65e, "jump table entry is not a known target"); } }
L_0046d665:; BB(0x0046d665);
    /* 0046d665: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d667: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d66a: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x46d66fu); f_005ea1cf();
    /* 0046d66f: jmp 0x46d6b7 */ goto L_0046d6b7;
L_0046d671:; BB(0x0046d671);
    /* 0046d671: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d674: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0046d67a: sub eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046d67d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d67e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d681: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x46d686u); f_005ea1cf();
    /* 0046d686: jmp 0x46d6b7 */ goto L_0046d6b7;
L_0046d688:; BB(0x0046d688);
    /* 0046d688: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d68b: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0046d691: sub edx, 0x69 */ {  u32 a = r_edx; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0046d694: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d695: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d698: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x46d69du); f_005ea1cf();
    /* 0046d69d: jmp 0x46d6b7 */ goto L_0046d6b7;
L_0046d69f:; BB(0x0046d69f);
    /* 0046d69f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d6a2: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0046d6a8: sub ecx, 0x87 */ {  u32 a = r_ecx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d6ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d6af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d6b2: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x46d6b7u); f_005ea1cf();
L_0046d6b7:; BB(0x0046d6b7);
    /* 0046d6b7: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d6b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d6ba: ret 4 */ FN_RET(0x0046d646); r_esp += 8; return;
}

void f_0046d6cd(void) /* FUN_0046d6cd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d6cd);
    /* 0046d6cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d6ce: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d6d0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046d6d3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0046d6d6: mov dword ptr [ebp - 8], 8 */ W32((u32)(r_ebp+0xfffffff8u), 0x8u);
    /* 0046d6dd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d6e0: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0046d6e6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d6e9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d6ec: mov dword ptr [edx + 0x8c], ecx */ W32((u32)(r_edx+0x8cu), r_ecx);
    /* 0046d6f2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d6f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d6f8: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 0046d6fe: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 0046d704: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0046d709: cmp dword ptr [eax + 0x12c], 2 */ {  u32 a = R32((u32)(r_eax+0x12cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d710: jne 0x46d731 */ if (!fZ) goto L_0046d731;
L_0046d712:; BB(0x0046d712);
    /* 0046d712: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d715: call 0x46d9be */ r_esp -= 4; W32(r_esp, 0x46d71au); f_0046d9be();
    /* 0046d71a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d71c: jne 0x46d731 */ if (!fZ) goto L_0046d731;
L_0046d71e:; BB(0x0046d71e);
    /* 0046d71e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d720: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d725u); f_0060ee31();
    /* 0046d725: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d728: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d72b: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
L_0046d731:; BB(0x0046d731);
    /* 0046d731: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d737: cmp dword ptr [edx + 0x12c], 0 */ {  u32 a = R32((u32)(r_edx+0x12cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d73e: jle 0x46d760 */ if ((fZ||fS!=fO)) goto L_0046d760;
L_0046d740:; BB(0x0046d740);
    /* 0046d740: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d743: call 0x46d9be */ r_esp -= 4; W32(r_esp, 0x46d748u); f_0046d9be();
    /* 0046d748: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d74b: jl 0x46d760 */ if ((fS!=fO)) goto L_0046d760;
L_0046d74d:; BB(0x0046d74d);
    /* 0046d74d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d74f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d754u); f_0060ee31();
    /* 0046d754: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d757: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d75a: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
L_0046d760:; BB(0x0046d760);
    /* 0046d760: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d766: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 0046d76c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046d76f: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d773: je 0x46d78a */ if (fZ) goto L_0046d78a;
L_0046d775:; BB(0x0046d775);
    /* 0046d775: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d779: je 0x46d7f4 */ if (fZ) goto L_0046d7f4;
L_0046d77b:; BB(0x0046d77b);
    /* 0046d77b: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d77f: je 0x46d914 */ if (fZ) goto L_0046d914;
L_0046d785:; BB(0x0046d785);
    /* 0046d785: jmp 0x46d99b */ goto L_0046d99b;
L_0046d78a:; BB(0x0046d78a);
    /* 0046d78a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046d791: jmp 0x46d79c */ goto L_0046d79c;
L_0046d793:; BB(0x0046d793);
    /* 0046d793: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d796: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d799: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0046d79c:; BB(0x0046d79c);
    /* 0046d79c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d7a0: jge 0x46d7bf */ if ((fS==fO)) goto L_0046d7bf;
L_0046d7a2:; BB(0x0046d7a2);
    /* 0046d7a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d7a5: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0046d7aa: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046d7b1: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x46d7b6u); f_005ea257();
    /* 0046d7b6: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d7b9: jl 0x46d7bd */ if ((fS!=fO)) goto L_0046d7bd;
L_0046d7bb:; BB(0x0046d7bb);
    /* 0046d7bb: jmp 0x46d7bf */ goto L_0046d7bf;
L_0046d7bd:; BB(0x0046d7bd);
    /* 0046d7bd: jmp 0x46d793 */ goto L_0046d793;
L_0046d7bf:; BB(0x0046d7bf);
    /* 0046d7bf: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d7c3: jge 0x46d7df */ if ((fS==fO)) goto L_0046d7df;
L_0046d7c5:; BB(0x0046d7c5);
    /* 0046d7c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d7c8: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0046d7ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d7cf: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d7d4u); f_0060ee31();
    /* 0046d7d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d7d7: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d7da: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046d7dd: jmp 0x46d7ef */ goto L_0046d7ef;
L_0046d7df:; BB(0x0046d7df);
    /* 0046d7df: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d7e1: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d7e6u); f_0060ee31();
    /* 0046d7e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d7e9: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d7ec: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0046d7ef:; BB(0x0046d7ef);
    /* 0046d7ef: jmp 0x46d99b */ goto L_0046d99b;
L_0046d7f4:; BB(0x0046d7f4);
    /* 0046d7f4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d7f7: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d7fe: jne 0x46d8f1 */ if (!fZ) goto L_0046d8f1;
L_0046d804:; BB(0x0046d804);
    /* 0046d804: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d807: cmp dword ptr [ecx + 0xbc], 0 */ {  u32 a = R32((u32)(r_ecx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d80e: je 0x46d865 */ if (fZ) goto L_0046d865;
L_0046d810:; BB(0x0046d810);
    /* 0046d810: cmp dword ptr [0x6f6a34], 0 */ {  u32 a = R32((u32)(0x6f6a34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d817: jne 0x46d84c */ if (!fZ) goto L_0046d84c;
L_0046d819:; BB(0x0046d819);
    /* 0046d819: mov dword ptr [0x6f6a34], 1 */ W32((u32)(0x6f6a34u), 0x1u);
    /* 0046d823: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d829: mov ecx, dword ptr [edx + 0x1b0] */ r_ecx = R32((u32)(r_edx+0x1b0u));
    /* 0046d82f: call 0x4010f2 */ r_esp -= 4; W32(r_esp, 0x46d834u); f_004010f2();
    /* 0046d834: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d837: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 0046d83a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d83b: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d841: mov ecx, dword ptr [edx + 0x1b0] */ r_ecx = R32((u32)(r_edx+0x1b0u));
    /* 0046d847: call 0x401490 */ r_esp -= 4; W32(r_esp, 0x46d84cu); f_00401490();
L_0046d84c:; BB(0x0046d84c);
    /* 0046d84c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d84f: mov dword ptr [eax + 0xb8], 0x14 */ W32((u32)(r_eax+0xb8u), 0x14u);
    /* 0046d859: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 0046d860: jmp 0x46d8ef */ goto L_0046d8ef;
L_0046d865:; BB(0x0046d865);
    /* 0046d865: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d867: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d86cu); f_0060ee31();
    /* 0046d86c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d86f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d871: je 0x46d8a7 */ if (fZ) goto L_0046d8a7;
L_0046d873:; BB(0x0046d873);
    /* 0046d873: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d876: call 0x46d9be */ r_esp -= 4; W32(r_esp, 0x46d87bu); f_0046d9be();
    /* 0046d87b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d87d: je 0x46d8a7 */ if (fZ) goto L_0046d8a7;
L_0046d87f:; BB(0x0046d87f);
    /* 0046d87f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d881: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d886u); f_0060ee31();
    /* 0046d886: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d889: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d88c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046d88f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d891: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d896u); f_0060ee31();
    /* 0046d896: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d899: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d89c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d89f: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0046d8a5: jmp 0x46d8ef */ goto L_0046d8ef;
L_0046d8a7:; BB(0x0046d8a7);
    /* 0046d8a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d8aa: call 0x46d9be */ r_esp -= 4; W32(r_esp, 0x46d8afu); f_0046d9be();
    /* 0046d8af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d8b1: jne 0x46d8d7 */ if (!fZ) goto L_0046d8d7;
L_0046d8b3:; BB(0x0046d8b3);
    /* 0046d8b3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d8b5: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d8bau); f_0060ee31();
    /* 0046d8ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d8bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d8bf: je 0x46d8d7 */ if (fZ) goto L_0046d8d7;
L_0046d8c1:; BB(0x0046d8c1);
    /* 0046d8c1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046d8c3: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d8c8u); f_0060ee31();
    /* 0046d8c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d8cb: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d8ce: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d8d1: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
L_0046d8d7:; BB(0x0046d8d7);
    /* 0046d8d7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d8da: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 0046d8e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d8e1: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d8e6u); f_0060ee31();
    /* 0046d8e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d8e9: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d8ec: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0046d8ef:; BB(0x0046d8ef);
    /* 0046d8ef: jmp 0x46d90f */ goto L_0046d90f;
L_0046d8f1:; BB(0x0046d8f1);
    /* 0046d8f1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d8f4: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0046d8fa: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046d8fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d900: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0046d906: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d909: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0046d90c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0046d90f:; BB(0x0046d90f);
    /* 0046d90f: jmp 0x46d99b */ goto L_0046d99b;
L_0046d914:; BB(0x0046d914);
    /* 0046d914: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d917: cmp dword ptr [ecx + 0xb8], 0 */ {  u32 a = R32((u32)(r_ecx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d91e: jne 0x46d97d */ if (!fZ) goto L_0046d97d;
L_0046d920:; BB(0x0046d920);
    /* 0046d920: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d922: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d927u); f_0060ee31();
    /* 0046d927: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d92a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d92c: je 0x46d963 */ if (fZ) goto L_0046d963;
L_0046d92e:; BB(0x0046d92e);
    /* 0046d92e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d931: call 0x46d9be */ r_esp -= 4; W32(r_esp, 0x46d936u); f_0046d9be();
    /* 0046d936: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d939: jl 0x46d963 */ if ((fS!=fO)) goto L_0046d963;
L_0046d93b:; BB(0x0046d93b);
    /* 0046d93b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d93d: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d942u); f_0060ee31();
    /* 0046d942: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d945: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d948: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046d94b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d94d: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d952u); f_0060ee31();
    /* 0046d952: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d955: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d958: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d95b: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 0046d961: jmp 0x46d97b */ goto L_0046d97b;
L_0046d963:; BB(0x0046d963);
    /* 0046d963: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d966: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 0046d96c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d96d: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d972u); f_0060ee31();
    /* 0046d972: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d975: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d978: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0046d97b:; BB(0x0046d97b);
    /* 0046d97b: jmp 0x46d99b */ goto L_0046d99b;
L_0046d97d:; BB(0x0046d97d);
    /* 0046d97d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d980: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0046d986: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046d989: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d98c: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0046d992: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d995: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0046d998: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0046d99b:; BB(0x0046d99b);
    /* 0046d99b: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d99f: jle 0x46d9b1 */ if ((fZ||fS!=fO)) goto L_0046d9b1;
L_0046d9a1:; BB(0x0046d9a1);
    /* 0046d9a1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d9a3: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46d9a8u); f_0060ee31();
    /* 0046d9a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d9ab: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d9ae: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0046d9b1:; BB(0x0046d9b1);
    /* 0046d9b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046d9b4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046d9b7: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 0046d9ba: mov esp, ebp */ r_esp = r_ebp;
    /* 0046d9bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046d9bd: ret  */ FN_RET(0x0046d6cd); r_esp += 4; return;
}

void f_0046d9be(void) /* FUN_0046d9be */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046d9be);
    /* 0046d9be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046d9bf: mov ebp, esp */ r_ebp = r_esp;
    /* 0046d9c1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046d9c4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0046d9c7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0046d9ce: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0046d9d5: jmp 0x46d9e0 */ goto L_0046d9e0;
L_0046d9d7:; BB(0x0046d9d7);
    /* 0046d9d7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046d9da: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d9dd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0046d9e0:; BB(0x0046d9e0);
    /* 0046d9e0: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d9e4: jge 0x46da21 */ if ((fS==fO)) goto L_0046da21;
L_0046d9e6:; BB(0x0046d9e6);
    /* 0046d9e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046d9e9: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0046d9ef: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046d9f6: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0046d9fc: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d9ff: jle 0x46da1f */ if ((fZ||fS!=fO)) goto L_0046da1f;
L_0046da01:; BB(0x0046da01);
    /* 0046da01: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046da04: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0046da09: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046da10: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0046da16: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0046da19: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046da1c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046da1f:; BB(0x0046da1f);
    /* 0046da1f: jmp 0x46d9d7 */ goto L_0046d9d7;
L_0046da21:; BB(0x0046da21);
    /* 0046da21: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046da24: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046da27: cmp edx, dword ptr [ecx + 0x7c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x7cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046da2a: jne 0x46da30 */ if (!fZ) goto L_0046da30;
L_0046da2c:; BB(0x0046da2c);
    /* 0046da2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046da2e: jmp 0x46da3e */ goto L_0046da3e;
L_0046da30:; BB(0x0046da30);
    /* 0046da30: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046da33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046da36: sub ecx, dword ptr [eax + 0x8c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046da3c: mov eax, ecx */ r_eax = r_ecx;
L_0046da3e:; BB(0x0046da3e);
    /* 0046da3e: mov esp, ebp */ r_esp = r_ebp;
    /* 0046da40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046da41: ret  */ FN_RET(0x0046d9be); r_esp += 4; return;
}

void f_0046da42(void) /* FUN_0046da42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046da42);
    /* 0046da42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046da43: mov ebp, esp */ r_ebp = r_esp;
    /* 0046da45: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046da48: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046da4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046da4e: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x46da53u); f_005dfbf0();
    /* 0046da53: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046da56: mov dword ptr [eax], 0x635f34 */ W32((u32)(r_eax), 0x635f34u);
    /* 0046da5c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046da5f: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0046da66: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046da69: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 0046da70: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046da73: mov dword ptr [eax + 0x100], 0 */ W32((u32)(r_eax+0x100u), 0x0u);
    /* 0046da7d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046da80: mov dword ptr [ecx + 0x104], 0 */ W32((u32)(r_ecx+0x104u), 0x0u);
    /* 0046da8a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046da8d: mov dword ptr [edx + 0x124], 0 */ W32((u32)(r_edx+0x124u), 0x0u);
    /* 0046da97: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046da9a: mov dword ptr [eax + 0x128], 0 */ W32((u32)(r_eax+0x128u), 0x0u);
    /* 0046daa4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046daa7: mov dword ptr [ecx + 0x14c], 0 */ W32((u32)(r_ecx+0x14cu), 0x0u);
    /* 0046dab1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dab4: mov dword ptr [edx + 0x108], 0 */ W32((u32)(r_edx+0x108u), 0x0u);
    /* 0046dabe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dac1: mov dword ptr [eax + 0x10c], 0 */ W32((u32)(r_eax+0x10cu), 0x0u);
    /* 0046dacb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dace: mov dword ptr [ecx + 0x19c], 0 */ W32((u32)(r_ecx+0x19cu), 0x0u);
    /* 0046dad8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dadb: mov dword ptr [edx + 0x1a0], 0 */ W32((u32)(r_edx+0x1a0u), 0x0u);
    /* 0046dae5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dae8: mov dword ptr [eax + 0x198], 0 */ W32((u32)(r_eax+0x198u), 0x0u);
    /* 0046daf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046daf9: jmp 0x46db04 */ goto L_0046db04;
L_0046dafb:; BB(0x0046dafb);
    /* 0046dafb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dafe: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046db01: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0046db04:; BB(0x0046db04);
    /* 0046db04: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046db08: jge 0x46db1d */ if ((fS==fO)) goto L_0046db1d;
L_0046db0a:; BB(0x0046db0a);
    /* 0046db0a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046db10: mov dword ptr [eax + edx*4 + 0x1ac], 0 */ W32((u32)(r_eax+r_edx*4+0x1acu), 0x0u);
    /* 0046db1b: jmp 0x46dafb */ goto L_0046dafb;
L_0046db1d:; BB(0x0046db1d);
    /* 0046db1d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046db24: jmp 0x46db2f */ goto L_0046db2f;
L_0046db26:; BB(0x0046db26);
    /* 0046db26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046db2c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0046db2f:; BB(0x0046db2f);
    /* 0046db2f: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046db33: jge 0x46dbdf */ if ((fS==fO)) goto L_0046dbdf;
L_0046db39:; BB(0x0046db39);
    /* 0046db39: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db3c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046db3f: mov dword ptr [eax + edx*4 + 0x110], 0 */ W32((u32)(r_eax+r_edx*4+0x110u), 0x0u);
    /* 0046db4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db4d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046db50: mov dword ptr [edx + ecx*4 + 0x38], 0 */ W32((u32)(r_edx+r_ecx*4+0x38u), 0x0u);
    /* 0046db58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db5b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046db5e: mov dword ptr [ecx + eax*4 + 0x10], 0 */ W32((u32)(r_ecx+r_eax*4+0x10u), 0x0u);
    /* 0046db66: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db69: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046db6c: mov dword ptr [eax + edx*4 + 0x24], 0 */ W32((u32)(r_eax+r_edx*4+0x24u), 0x0u);
    /* 0046db74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db77: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046db7a: mov dword ptr [edx + ecx*4 + 0xd8], 0 */ W32((u32)(r_edx+r_ecx*4+0xd8u), 0x0u);
    /* 0046db85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db88: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046db8b: mov dword ptr [ecx + eax*4 + 0xec], 0 */ W32((u32)(r_ecx+r_eax*4+0xecu), 0x0u);
    /* 0046db96: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db99: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046db9c: mov dword ptr [eax + edx*4 + 0x150], 0 */ W32((u32)(r_eax+r_edx*4+0x150u), 0x0u);
    /* 0046dba7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dbaa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dbad: mov dword ptr [edx + ecx*4 + 0x164], 0 */ W32((u32)(r_edx+r_ecx*4+0x164u), 0x0u);
    /* 0046dbb8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dbbb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dbbe: mov dword ptr [ecx + eax*4 + 0x178], 0 */ W32((u32)(r_ecx+r_eax*4+0x178u), 0x0u);
    /* 0046dbc9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dbcc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dbcf: mov dword ptr [eax + edx*4 + 0x88], 0 */ W32((u32)(r_eax+r_edx*4+0x88u), 0x0u);
    /* 0046dbda: jmp 0x46db26 */ goto L_0046db26;
L_0046dbdf:; BB(0x0046dbdf);
    /* 0046dbdf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046dbe6: jmp 0x46dbf1 */ goto L_0046dbf1;
L_0046dbe8:; BB(0x0046dbe8);
    /* 0046dbe8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dbeb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046dbee: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0046dbf1:; BB(0x0046dbf1);
    /* 0046dbf1: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046dbf5: jge 0x46dc18 */ if ((fS==fO)) goto L_0046dc18;
L_0046dbf7:; BB(0x0046dbf7);
    /* 0046dbf7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dbfa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dbfd: mov dword ptr [eax + edx*4 + 0x4c], 0 */ W32((u32)(r_eax+r_edx*4+0x4cu), 0x0u);
    /* 0046dc05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dc08: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dc0b: mov dword ptr [edx + ecx*4 + 0x9c], 0 */ W32((u32)(r_edx+r_ecx*4+0x9cu), 0x0u);
    /* 0046dc16: jmp 0x46dbe8 */ goto L_0046dbe8;
L_0046dc18:; BB(0x0046dc18);
    /* 0046dc18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046dc1f: jmp 0x46dc2a */ goto L_0046dc2a;
L_0046dc21:; BB(0x0046dc21);
    /* 0046dc21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dc24: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046dc27: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046dc2a:; BB(0x0046dc2a);
    /* 0046dc2a: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046dc2e: jge 0x46dc43 */ if ((fS==fO)) goto L_0046dc43;
L_0046dc30:; BB(0x0046dc30);
    /* 0046dc30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dc33: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dc36: mov dword ptr [edx + ecx*4 + 0x18c], 0 */ W32((u32)(r_edx+r_ecx*4+0x18cu), 0x0u);
    /* 0046dc41: jmp 0x46dc21 */ goto L_0046dc21;
L_0046dc43:; BB(0x0046dc43);
    /* 0046dc43: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046dc4a: jmp 0x46dc55 */ goto L_0046dc55;
L_0046dc4c:; BB(0x0046dc4c);
    /* 0046dc4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dc4f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046dc52: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046dc55:; BB(0x0046dc55);
    /* 0046dc55: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046dc59: jge 0x46dc6e */ if ((fS==fO)) goto L_0046dc6e;
L_0046dc5b:; BB(0x0046dc5b);
    /* 0046dc5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dc5e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dc61: mov dword ptr [edx + ecx*4 + 0x1a4], 0 */ W32((u32)(r_edx+r_ecx*4+0x1a4u), 0x0u);
    /* 0046dc6c: jmp 0x46dc4c */ goto L_0046dc4c;
L_0046dc6e:; BB(0x0046dc6e);
    /* 0046dc6e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dc71: mov dword ptr [eax + 0x1b0], 0 */ W32((u32)(r_eax+0x1b0u), 0x0u);
    /* 0046dc7b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dc7e: mov dword ptr [ecx + 0x1bc], 1 */ W32((u32)(r_ecx+0x1bcu), 0x1u);
    /* 0046dc88: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dc8b: mov dword ptr [edx + 0x1b4], 0 */ W32((u32)(r_edx+0x1b4u), 0x0u);
    /* 0046dc95: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dc98: mov esp, ebp */ r_esp = r_ebp;
    /* 0046dc9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046dc9b: ret  */ FN_RET(0x0046da42); r_esp += 4; return;
}

void f_0046dc9c(void) /* FUN_0046dc9c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046dc9c);
    /* 0046dc9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046dc9d: mov ebp, esp */ r_ebp = r_esp;
    /* 0046dc9f: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046dca5: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0046dcab: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dcb1: mov dword ptr [eax], 0x635f34 */ W32((u32)(r_eax), 0x635f34u);
    /* 0046dcb7: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dcbd: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dcc1: je 0x46dd06 */ if (fZ) goto L_0046dd06;
L_0046dcc3:; BB(0x0046dcc3);
    /* 0046dcc3: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dcc9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0046dccc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046dccf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046dcd2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046dcd5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dcd9: je 0x46dcef */ if (fZ) goto L_0046dcef;
L_0046dcdb:; BB(0x0046dcdb);
    /* 0046dcdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dcdd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dce0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046dce2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046dce5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x46dce7u); call_ind(t); }
    /* 0046dce7: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0046dced: jmp 0x46dcf9 */ goto L_0046dcf9;
L_0046dcef:; BB(0x0046dcef);
    /* 0046dcef: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0046dcf9:; BB(0x0046dcf9);
    /* 0046dcf9: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dcff: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
L_0046dd06:; BB(0x0046dd06);
    /* 0046dd06: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dd0c: cmp dword ptr [edx + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dd10: je 0x46dd55 */ if (fZ) goto L_0046dd55;
L_0046dd12:; BB(0x0046dd12);
    /* 0046dd12: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dd18: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0046dd1b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0046dd1e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046dd21: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0046dd24: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dd28: je 0x46dd3e */ if (fZ) goto L_0046dd3e;
L_0046dd2a:; BB(0x0046dd2a);
    /* 0046dd2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dd2c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046dd2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046dd31: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046dd34: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x46dd36u); call_ind(t); }
    /* 0046dd36: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0046dd3c: jmp 0x46dd48 */ goto L_0046dd48;
L_0046dd3e:; BB(0x0046dd3e);
    /* 0046dd3e: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0046dd48:; BB(0x0046dd48);
    /* 0046dd48: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dd4e: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
L_0046dd55:; BB(0x0046dd55);
    /* 0046dd55: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dd5b: cmp dword ptr [ecx + 0x124], 0 */ {  u32 a = R32((u32)(r_ecx+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dd62: je 0x46ddad */ if (fZ) goto L_0046ddad;
L_0046dd64:; BB(0x0046dd64);
    /* 0046dd64: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dd6a: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 0046dd70: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0046dd73: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046dd76: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0046dd79: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dd7d: je 0x46dd93 */ if (fZ) goto L_0046dd93;
L_0046dd7f:; BB(0x0046dd7f);
    /* 0046dd7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dd81: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046dd84: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046dd86: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046dd89: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x46dd8bu); call_ind(t); }
    /* 0046dd8b: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0046dd91: jmp 0x46dd9d */ goto L_0046dd9d;
L_0046dd93:; BB(0x0046dd93);
    /* 0046dd93: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0046dd9d:; BB(0x0046dd9d);
    /* 0046dd9d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dda3: mov dword ptr [ecx + 0x124], 0 */ W32((u32)(r_ecx+0x124u), 0x0u);
L_0046ddad:; BB(0x0046ddad);
    /* 0046ddad: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ddb3: cmp dword ptr [edx + 0x128], 0 */ {  u32 a = R32((u32)(r_edx+0x128u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ddba: je 0x46de05 */ if (fZ) goto L_0046de05;
L_0046ddbc:; BB(0x0046ddbc);
    /* 0046ddbc: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ddc2: mov ecx, dword ptr [eax + 0x128] */ r_ecx = R32((u32)(r_eax+0x128u));
    /* 0046ddc8: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0046ddcb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046ddce: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0046ddd1: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ddd5: je 0x46ddeb */ if (fZ) goto L_0046ddeb;
L_0046ddd7:; BB(0x0046ddd7);
    /* 0046ddd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ddd9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046dddc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046ddde: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046dde1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x46dde3u); call_ind(t); }
    /* 0046dde3: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0046dde9: jmp 0x46ddf5 */ goto L_0046ddf5;
L_0046ddeb:; BB(0x0046ddeb);
    /* 0046ddeb: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0046ddf5:; BB(0x0046ddf5);
    /* 0046ddf5: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ddfb: mov dword ptr [eax + 0x128], 0 */ W32((u32)(r_eax+0x128u), 0x0u);
L_0046de05:; BB(0x0046de05);
    /* 0046de05: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046de0b: cmp dword ptr [ecx + 0x14c], 0 */ {  u32 a = R32((u32)(r_ecx+0x14cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046de12: je 0x46de5d */ if (fZ) goto L_0046de5d;
L_0046de14:; BB(0x0046de14);
    /* 0046de14: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046de1a: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 0046de20: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0046de23: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0046de26: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0046de29: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046de2d: je 0x46de43 */ if (fZ) goto L_0046de43;
L_0046de2f:; BB(0x0046de2f);
    /* 0046de2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046de31: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046de34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046de36: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046de39: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x46de3bu); call_ind(t); }
    /* 0046de3b: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0046de41: jmp 0x46de4d */ goto L_0046de4d;
L_0046de43:; BB(0x0046de43);
    /* 0046de43: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0046de4d:; BB(0x0046de4d);
    /* 0046de4d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046de53: mov dword ptr [ecx + 0x14c], 0 */ W32((u32)(r_ecx+0x14cu), 0x0u);
L_0046de5d:; BB(0x0046de5d);
    /* 0046de5d: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046de63: cmp dword ptr [edx + 0x19c], 0 */ {  u32 a = R32((u32)(r_edx+0x19cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046de6a: je 0x46deb5 */ if (fZ) goto L_0046deb5;
L_0046de6c:; BB(0x0046de6c);
    /* 0046de6c: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046de72: mov ecx, dword ptr [eax + 0x19c] */ r_ecx = R32((u32)(r_eax+0x19cu));
    /* 0046de78: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0046de7b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046de7e: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0046de81: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046de85: je 0x46de9b */ if (fZ) goto L_0046de9b;
L_0046de87:; BB(0x0046de87);
    /* 0046de87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046de89: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046de8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046de8e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046de91: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x46de93u); call_ind(t); }
    /* 0046de93: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0046de99: jmp 0x46dea5 */ goto L_0046dea5;
L_0046de9b:; BB(0x0046de9b);
    /* 0046de9b: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0046dea5:; BB(0x0046dea5);
    /* 0046dea5: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046deab: mov dword ptr [eax + 0x19c], 0 */ W32((u32)(r_eax+0x19cu), 0x0u);
L_0046deb5:; BB(0x0046deb5);
    /* 0046deb5: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046debb: cmp dword ptr [ecx + 0x1a0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dec2: je 0x46df0d */ if (fZ) goto L_0046df0d;
L_0046dec4:; BB(0x0046dec4);
    /* 0046dec4: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046deca: mov eax, dword ptr [edx + 0x1a0] */ r_eax = R32((u32)(r_edx+0x1a0u));
    /* 0046ded0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0046ded3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046ded6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0046ded9: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dedd: je 0x46def3 */ if (fZ) goto L_0046def3;
L_0046dedf:; BB(0x0046dedf);
    /* 0046dedf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dee1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046dee4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046dee6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046dee9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x46deebu); call_ind(t); }
    /* 0046deeb: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0046def1: jmp 0x46defd */ goto L_0046defd;
L_0046def3:; BB(0x0046def3);
    /* 0046def3: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0046defd:; BB(0x0046defd);
    /* 0046defd: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046df03: mov dword ptr [ecx + 0x1a0], 0 */ W32((u32)(r_ecx+0x1a0u), 0x0u);
L_0046df0d:; BB(0x0046df0d);
    /* 0046df0d: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046df13: cmp dword ptr [edx + 0x198], 0 */ {  u32 a = R32((u32)(r_edx+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046df1a: je 0x46df65 */ if (fZ) goto L_0046df65;
L_0046df1c:; BB(0x0046df1c);
    /* 0046df1c: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046df22: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 0046df28: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0046df2b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0046df2e: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0046df31: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046df35: je 0x46df4b */ if (fZ) goto L_0046df4b;
L_0046df37:; BB(0x0046df37);
    /* 0046df37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046df39: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0046df3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046df3e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0046df41: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x46df43u); call_ind(t); }
    /* 0046df43: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0046df49: jmp 0x46df55 */ goto L_0046df55;
L_0046df4b:; BB(0x0046df4b);
    /* 0046df4b: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0046df55:; BB(0x0046df55);
    /* 0046df55: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046df5b: mov dword ptr [eax + 0x198], 0 */ W32((u32)(r_eax+0x198u), 0x0u);
L_0046df65:; BB(0x0046df65);
    /* 0046df65: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046df6c: jmp 0x46df77 */ goto L_0046df77;
L_0046df6e:; BB(0x0046df6e);
    /* 0046df6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046df71: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046df74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0046df77:; BB(0x0046df77);
    /* 0046df77: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046df7b: jge 0x46e00a */ if ((fS==fO)) goto L_0046e00a;
L_0046df81:; BB(0x0046df81);
    /* 0046df81: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046df84: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046df8a: cmp dword ptr [eax + edx*4 + 0x1ac], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046df92: je 0x46e005 */ if (fZ) goto L_0046e005;
L_0046df94:; BB(0x0046df94);
    /* 0046df94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046df97: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046df9d: mov eax, dword ptr [edx + ecx*4 + 0x1ac] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1acu));
    /* 0046dfa4: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dfa8: je 0x46dfb4 */ if (fZ) goto L_0046dfb4;
L_0046dfaa:; BB(0x0046dfaa);
    /* 0046dfaa: mov dword ptr [0x6f5b38], 0 */ W32((u32)(0x6f5b38u), 0x0u);
L_0046dfb4:; BB(0x0046dfb4);
    /* 0046dfb4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dfb7: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dfbd: mov eax, dword ptr [edx + ecx*4 + 0x1ac] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1acu));
    /* 0046dfc4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0046dfc7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0046dfca: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0046dfcd: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dfd1: je 0x46dfe7 */ if (fZ) goto L_0046dfe7;
L_0046dfd3:; BB(0x0046dfd3);
    /* 0046dfd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dfd5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0046dfd8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046dfda: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0046dfdd: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x46dfdfu); call_ind(t); }
    /* 0046dfdf: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0046dfe5: jmp 0x46dff1 */ goto L_0046dff1;
L_0046dfe7:; BB(0x0046dfe7);
    /* 0046dfe7: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_0046dff1:; BB(0x0046dff1);
    /* 0046dff1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dff4: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046dffa: mov dword ptr [edx + ecx*4 + 0x1ac], 0 */ W32((u32)(r_edx+r_ecx*4+0x1acu), 0x0u);
L_0046e005:; BB(0x0046e005);
    /* 0046e005: jmp 0x46df6e */ goto L_0046df6e;
L_0046e00a:; BB(0x0046e00a);
    /* 0046e00a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046e011: jmp 0x46e01c */ goto L_0046e01c;
L_0046e013:; BB(0x0046e013);
    /* 0046e013: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e016: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046e019: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046e01c:; BB(0x0046e01c);
    /* 0046e01c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e020: jge 0x46e1bb */ if ((fS==fO)) goto L_0046e1bb;
L_0046e026:; BB(0x0046e026);
    /* 0046e026: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e029: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e02f: cmp dword ptr [edx + ecx*4 + 0x110], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e037: je 0x46e08a */ if (fZ) goto L_0046e08a;
L_0046e039:; BB(0x0046e039);
    /* 0046e039: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e03c: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e042: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046e049: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0046e04c: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0046e04f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0046e052: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e056: je 0x46e06c */ if (fZ) goto L_0046e06c;
L_0046e058:; BB(0x0046e058);
    /* 0046e058: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e05a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046e05d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046e05f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046e062: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x46e064u); call_ind(t); }
    /* 0046e064: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0046e06a: jmp 0x46e076 */ goto L_0046e076;
L_0046e06c:; BB(0x0046e06c);
    /* 0046e06c: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_0046e076:; BB(0x0046e076);
    /* 0046e076: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e079: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e07f: mov dword ptr [ecx + eax*4 + 0x110], 0 */ W32((u32)(r_ecx+r_eax*4+0x110u), 0x0u);
L_0046e08a:; BB(0x0046e08a);
    /* 0046e08a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e08d: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e093: cmp dword ptr [eax + edx*4 + 0x150], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x150u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e09b: je 0x46e0ee */ if (fZ) goto L_0046e0ee;
L_0046e09d:; BB(0x0046e09d);
    /* 0046e09d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e0a0: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e0a6: mov eax, dword ptr [edx + ecx*4 + 0x150] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x150u));
    /* 0046e0ad: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0046e0b0: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0046e0b3: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0046e0b6: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e0ba: je 0x46e0d0 */ if (fZ) goto L_0046e0d0;
L_0046e0bc:; BB(0x0046e0bc);
    /* 0046e0bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e0be: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046e0c1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046e0c3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0046e0c6: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x46e0c8u); call_ind(t); }
    /* 0046e0c8: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0046e0ce: jmp 0x46e0da */ goto L_0046e0da;
L_0046e0d0:; BB(0x0046e0d0);
    /* 0046e0d0: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_0046e0da:; BB(0x0046e0da);
    /* 0046e0da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e0dd: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e0e3: mov dword ptr [edx + ecx*4 + 0x150], 0 */ W32((u32)(r_edx+r_ecx*4+0x150u), 0x0u);
L_0046e0ee:; BB(0x0046e0ee);
    /* 0046e0ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e0f1: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e0f7: cmp dword ptr [ecx + eax*4 + 0x164], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e0ff: je 0x46e152 */ if (fZ) goto L_0046e152;
L_0046e101:; BB(0x0046e101);
    /* 0046e101: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e104: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e10a: mov ecx, dword ptr [eax + edx*4 + 0x164] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x164u));
    /* 0046e111: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0046e114: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0046e117: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0046e11a: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e11e: je 0x46e134 */ if (fZ) goto L_0046e134;
L_0046e120:; BB(0x0046e120);
    /* 0046e120: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e122: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0046e125: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046e127: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0046e12a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x46e12cu); call_ind(t); }
    /* 0046e12c: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0046e132: jmp 0x46e13e */ goto L_0046e13e;
L_0046e134:; BB(0x0046e134);
    /* 0046e134: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_0046e13e:; BB(0x0046e13e);
    /* 0046e13e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e141: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e147: mov dword ptr [ecx + eax*4 + 0x164], 0 */ W32((u32)(r_ecx+r_eax*4+0x164u), 0x0u);
L_0046e152:; BB(0x0046e152);
    /* 0046e152: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e155: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e15b: cmp dword ptr [eax + edx*4 + 0x178], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x178u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e163: je 0x46e1b6 */ if (fZ) goto L_0046e1b6;
L_0046e165:; BB(0x0046e165);
    /* 0046e165: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e168: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e16e: mov eax, dword ptr [edx + ecx*4 + 0x178] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 0046e175: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0046e178: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0046e17b: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0046e17e: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e182: je 0x46e198 */ if (fZ) goto L_0046e198;
L_0046e184:; BB(0x0046e184);
    /* 0046e184: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e186: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0046e189: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046e18b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0046e18e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x46e190u); call_ind(t); }
    /* 0046e190: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0046e196: jmp 0x46e1a2 */ goto L_0046e1a2;
L_0046e198:; BB(0x0046e198);
    /* 0046e198: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_0046e1a2:; BB(0x0046e1a2);
    /* 0046e1a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e1a5: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e1ab: mov dword ptr [edx + ecx*4 + 0x178], 0 */ W32((u32)(r_edx+r_ecx*4+0x178u), 0x0u);
L_0046e1b6:; BB(0x0046e1b6);
    /* 0046e1b6: jmp 0x46e013 */ goto L_0046e013;
L_0046e1bb:; BB(0x0046e1bb);
    /* 0046e1bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046e1c2: jmp 0x46e1cd */ goto L_0046e1cd;
L_0046e1c4:; BB(0x0046e1c4);
    /* 0046e1c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e1c7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046e1ca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046e1cd:; BB(0x0046e1cd);
    /* 0046e1cd: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e1d1: jge 0x46e239 */ if ((fS==fO)) goto L_0046e239;
L_0046e1d3:; BB(0x0046e1d3);
    /* 0046e1d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e1d6: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e1dc: cmp dword ptr [edx + ecx*4 + 0x18c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e1e4: je 0x46e237 */ if (fZ) goto L_0046e237;
L_0046e1e6:; BB(0x0046e1e6);
    /* 0046e1e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e1e9: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e1ef: mov edx, dword ptr [ecx + eax*4 + 0x18c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18cu));
    /* 0046e1f6: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0046e1f9: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0046e1fc: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0046e1ff: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e203: je 0x46e219 */ if (fZ) goto L_0046e219;
L_0046e205:; BB(0x0046e205);
    /* 0046e205: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e207: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0046e20a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046e20c: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0046e20f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x46e211u); call_ind(t); }
    /* 0046e211: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0046e217: jmp 0x46e223 */ goto L_0046e223;
L_0046e219:; BB(0x0046e219);
    /* 0046e219: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_0046e223:; BB(0x0046e223);
    /* 0046e223: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e226: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e22c: mov dword ptr [ecx + eax*4 + 0x18c], 0 */ W32((u32)(r_ecx+r_eax*4+0x18cu), 0x0u);
L_0046e237:; BB(0x0046e237);
    /* 0046e237: jmp 0x46e1c4 */ goto L_0046e1c4;
L_0046e239:; BB(0x0046e239);
    /* 0046e239: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046e240: jmp 0x46e24b */ goto L_0046e24b;
L_0046e242:; BB(0x0046e242);
    /* 0046e242: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e245: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046e248: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0046e24b:; BB(0x0046e24b);
    /* 0046e24b: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e24f: jge 0x46e2b7 */ if ((fS==fO)) goto L_0046e2b7;
L_0046e251:; BB(0x0046e251);
    /* 0046e251: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e254: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e25a: cmp dword ptr [ecx + eax*4 + 0x1a4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e262: je 0x46e2b5 */ if (fZ) goto L_0046e2b5;
L_0046e264:; BB(0x0046e264);
    /* 0046e264: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e267: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e26d: mov ecx, dword ptr [eax + edx*4 + 0x1a4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1a4u));
    /* 0046e274: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 0046e277: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0046e27a: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0046e27d: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e281: je 0x46e297 */ if (fZ) goto L_0046e297;
L_0046e283:; BB(0x0046e283);
    /* 0046e283: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e285: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0046e288: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046e28a: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0046e28d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x46e28fu); call_ind(t); }
    /* 0046e28f: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0046e295: jmp 0x46e2a1 */ goto L_0046e2a1;
L_0046e297:; BB(0x0046e297);
    /* 0046e297: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_0046e2a1:; BB(0x0046e2a1);
    /* 0046e2a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e2a4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e2aa: mov dword ptr [ecx + eax*4 + 0x1a4], 0 */ W32((u32)(r_ecx+r_eax*4+0x1a4u), 0x0u);
L_0046e2b5:; BB(0x0046e2b5);
    /* 0046e2b5: jmp 0x46e242 */ goto L_0046e242;
L_0046e2b7:; BB(0x0046e2b7);
    /* 0046e2b7: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e2bd: cmp dword ptr [edx + 0x1b0], 0 */ {  u32 a = R32((u32)(r_edx+0x1b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e2c4: je 0x46e315 */ if (fZ) goto L_0046e315;
L_0046e2c6:; BB(0x0046e2c6);
    /* 0046e2c6: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e2cc: mov ecx, dword ptr [eax + 0x1b0] */ r_ecx = R32((u32)(r_eax+0x1b0u));
    /* 0046e2d2: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0046e2d8: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0046e2de: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0046e2e1: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e2e5: je 0x46e2fb */ if (fZ) goto L_0046e2fb;
L_0046e2e7:; BB(0x0046e2e7);
    /* 0046e2e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e2e9: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0046e2ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046e2ee: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0046e2f1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x46e2f3u); call_ind(t); }
    /* 0046e2f3: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0046e2f9: jmp 0x46e305 */ goto L_0046e305;
L_0046e2fb:; BB(0x0046e2fb);
    /* 0046e2fb: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_0046e305:; BB(0x0046e305);
    /* 0046e305: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e30b: mov dword ptr [eax + 0x1b0], 0 */ W32((u32)(r_eax+0x1b0u), 0x0u);
L_0046e315:; BB(0x0046e315);
    /* 0046e315: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e31b: call 0x4711e1 */ r_esp -= 4; W32(r_esp, 0x46e320u); f_004711e1();
    /* 0046e320: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046e326: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x46e32bu); f_005dfc0f();
    /* 0046e32b: mov esp, ebp */ r_esp = r_ebp;
    /* 0046e32d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046e32e: ret  */ FN_RET(0x0046dc9c); r_esp += 4; return;
}

void f_0046e32f(void) /* FUN_0046e32f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046e32f);
    /* 0046e32f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046e330: mov ebp, esp */ r_ebp = r_esp;
    /* 0046e332: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046e333: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046e336: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e339: call 0x4718bd */ r_esp -= 4; W32(r_esp, 0x46e33eu); f_004718bd();
    /* 0046e33e: push 0x1d4ca */ { u32 v = 0x1d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 0046e343: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 0046e349: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x46e34eu); f_005e5ec3();
    /* 0046e34e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e351: call 0x46f4b5 */ r_esp -= 4; W32(r_esp, 0x46e356u); f_0046f4b5();
    /* 0046e356: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e359: call 0x46f2e9 */ r_esp -= 4; W32(r_esp, 0x46e35eu); f_0046f2e9();
    /* 0046e35e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e361: call 0x4701fb */ r_esp -= 4; W32(r_esp, 0x46e366u); f_004701fb();
    /* 0046e366: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e369: call 0x470c7c */ r_esp -= 4; W32(r_esp, 0x46e36eu); f_00470c7c();
    /* 0046e36e: mov esp, ebp */ r_esp = r_ebp;
    /* 0046e370: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046e371: ret  */ FN_RET(0x0046e32f); r_esp += 4; return;
}

void f_0046e372(void) /* FUN_0046e372 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046e372);
    /* 0046e372: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046e373: mov ebp, esp */ r_ebp = r_esp;
    /* 0046e375: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046e378: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046e37b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046e37e: mov dword ptr [eax + 0x130], 0xffffffff */ W32((u32)(r_eax+0x130u), 0xffffffffu);
    /* 0046e388: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046e38b: mov dword ptr [ecx + 0x12c], 0xffffffff */ W32((u32)(r_ecx+0x12cu), 0xffffffffu);
    /* 0046e395: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046e398: mov dword ptr [edx + 0x134], 0 */ W32((u32)(r_edx+0x134u), 0x0u);
    /* 0046e3a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046e3a9: jmp 0x46e3b4 */ goto L_0046e3b4;
L_0046e3ab:; BB(0x0046e3ab);
    /* 0046e3ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e3ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046e3b1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046e3b4:; BB(0x0046e3b4);
    /* 0046e3b4: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e3b8: jge 0x46e3cd */ if ((fS==fO)) goto L_0046e3cd;
L_0046e3ba:; BB(0x0046e3ba);
    /* 0046e3ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e3bd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046e3c0: mov dword ptr [edx + ecx*4 + 0x138], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x138u), 0xffffffffu);
    /* 0046e3cb: jmp 0x46e3ab */ goto L_0046e3ab;
L_0046e3cd:; BB(0x0046e3cd);
    /* 0046e3cd: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046e3cf: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46e3d4u); f_0060ee31();
    /* 0046e3d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e3d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e3d9: jne 0x46e3f9 */ if (!fZ) goto L_0046e3f9;
L_0046e3db:; BB(0x0046e3db);
    /* 0046e3db: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e3dd: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46e3e2u); f_0060ee31();
    /* 0046e3e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e3e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046e3e8: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046e3ef: mov dword ptr [edx + 0xbc], 1 */ W32((u32)(r_edx+0xbcu), 0x1u);
L_0046e3f9:; BB(0x0046e3f9);
    /* 0046e3f9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046e3fc: cmp dword ptr [eax + 0x128], 0 */ {  u32 a = R32((u32)(r_eax+0x128u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e403: je 0x46e41c */ if (fZ) goto L_0046e41c;
L_0046e405:; BB(0x0046e405);
    /* 0046e405: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046e408: mov ecx, dword ptr [ecx + 0x128] */ r_ecx = R32((u32)(r_ecx+0x128u));
    /* 0046e40e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046e411: mov eax, dword ptr [edx + 0x128] */ r_eax = R32((u32)(r_edx+0x128u));
    /* 0046e417: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046e419: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46e41cu); call_ind(t); }
L_0046e41c:; BB(0x0046e41c);
    /* 0046e41c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046e41f: call 0x4711e1 */ r_esp -= 4; W32(r_esp, 0x46e424u); f_004711e1();
    /* 0046e424: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046e427: call 0x471c44 */ r_esp -= 4; W32(r_esp, 0x46e42cu); f_00471c44();
    /* 0046e42c: mov esp, ebp */ r_esp = r_ebp;
    /* 0046e42e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046e42f: ret  */ FN_RET(0x0046e372); r_esp += 4; return;
}

void f_0046e430(void) /* FUN_0046e430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046e430);
    /* 0046e430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046e431: mov ebp, esp */ r_ebp = r_esp;
    /* 0046e433: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046e436: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046e437: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0046e43a: mov dword ptr [ebp - 0x14], 0x1d4d3 */ W32((u32)(r_ebp+0xffffffecu), 0x1d4d3u);
    /* 0046e441: mov dword ptr [ebp - 0x10], 0x1d4d4 */ W32((u32)(r_ebp+0xfffffff0u), 0x1d4d4u);
    /* 0046e448: mov dword ptr [ebp - 0xc], 0x1d4e0 */ W32((u32)(r_ebp+0xfffffff4u), 0x1d4e0u);
    /* 0046e44f: mov dword ptr [ebp - 8], 0x1d4e4 */ W32((u32)(r_ebp+0xfffffff8u), 0x1d4e4u);
    /* 0046e456: mov dword ptr [ebp - 4], 0x1d4e8 */ W32((u32)(r_ebp+0xfffffffcu), 0x1d4e8u);
    /* 0046e45d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0046e464: jmp 0x46e46f */ goto L_0046e46f;
L_0046e466:; BB(0x0046e466);
    /* 0046e466: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e469: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046e46c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0046e46f:; BB(0x0046e46f);
    /* 0046e46f: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e473: jge 0x46e48b */ if ((fS==fO)) goto L_0046e48b;
L_0046e475:; BB(0x0046e475);
    /* 0046e475: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e477: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e47a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e47d: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046e484: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x46e489u); f_005e4060();
    /* 0046e489: jmp 0x46e466 */ goto L_0046e466;
L_0046e48b:; BB(0x0046e48b);
    /* 0046e48b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e48e: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 0046e494: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046e497: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e49a: mov dword ptr [edx + 0x12c], ecx */ W32((u32)(r_edx+0x12cu), r_ecx);
    /* 0046e4a0: push 0x1d4df */ { u32 v = 0x1d4dfu; r_esp -= 4; W32(r_esp, v); }
    /* 0046e4a5: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 0046e4ab: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x46e4b0u); f_005e5ec3();
    /* 0046e4b0: push 0x1d4de */ { u32 v = 0x1d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0046e4b5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e4b8: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 0046e4be: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x46e4c3u); f_005ea0c3();
    /* 0046e4c3: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0046e4ca: jmp 0x46e4d5 */ goto L_0046e4d5;
L_0046e4cc:; BB(0x0046e4cc);
    /* 0046e4cc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e4cf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046e4d2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0046e4d5:; BB(0x0046e4d5);
    /* 0046e4d5: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e4d9: jge 0x46e570 */ if ((fS==fO)) goto L_0046e570;
L_0046e4df:; BB(0x0046e4df);
    /* 0046e4df: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e4e2: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 0046e4e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e4e9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e4ec: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e4ef: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046e4f6: call 0x46d592 */ r_esp -= 4; W32(r_esp, 0x46e4fbu); f_0046d592();
    /* 0046e4fb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e4fe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e501: mov edx, dword ptr [ecx + eax*4 + 0x138] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x138u));
    /* 0046e508: sub edx, 0x86 */ {  u32 a = r_edx; u32 b = 0x86u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0046e50e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0046e510: jl 0x46e525 */ if ((fS!=fO)) goto L_0046e525;
L_0046e512:; BB(0x0046e512);
    /* 0046e512: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e515: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e518: cmp dword ptr [ecx + eax*4 + 0x138], 0x94 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x138u)); u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e523: jne 0x46e546 */ if (!fZ) goto L_0046e546;
L_0046e525:; BB(0x0046e525);
    /* 0046e525: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e528: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e52b: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046e532: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e535: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e538: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046e53f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046e541: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x46e544u); call_ind(t); }
    /* 0046e544: jmp 0x46e56b */ goto L_0046e56b;
L_0046e546:; BB(0x0046e546);
    /* 0046e546: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e549: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e54c: mov eax, dword ptr [edx + ecx*4 + 0x138] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x138u));
    /* 0046e553: sub eax, 0x86 */ {  u32 a = r_eax; u32 b = 0x86u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046e558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e559: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e55c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e55f: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046e566: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x46e56bu); f_005ea1cf();
L_0046e56b:; BB(0x0046e56b);
    /* 0046e56b: jmp 0x46e4cc */ goto L_0046e4cc;
L_0046e570:; BB(0x0046e570);
    /* 0046e570: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0046e577: jmp 0x46e582 */ goto L_0046e582;
L_0046e579:; BB(0x0046e579);
    /* 0046e579: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e57c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046e57f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0046e582:; BB(0x0046e582);
    /* 0046e582: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e586: jge 0x46e76a */ if ((fS==fO)) goto L_0046e76a;
L_0046e58c:; BB(0x0046e58c);
    /* 0046e58c: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0046e593: jmp 0x46e59e */ goto L_0046e59e;
L_0046e595:; BB(0x0046e595);
    /* 0046e595: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e598: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046e59b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0046e59e:; BB(0x0046e59e);
    /* 0046e59e: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e5a2: jge 0x46e765 */ if ((fS==fO)) goto L_0046e765;
L_0046e5a8:; BB(0x0046e5a8);
    /* 0046e5a8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e5ab: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e5ae: je 0x46e760 */ if (fZ) goto L_0046e760;
L_0046e5b4:; BB(0x0046e5b4);
    /* 0046e5b4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e5b7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e5ba: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e5bd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e5c0: mov eax, dword ptr [ecx + eax*4 + 0x138] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x138u));
    /* 0046e5c7: cmp eax, dword ptr [esi + edx*4 + 0x138] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4+0x138u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e5ce: jne 0x46e760 */ if (!fZ) goto L_0046e760;
L_0046e5d4:; BB(0x0046e5d4);
    /* 0046e5d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e5d7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e5da: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046e5e1: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x46e5e6u); f_005ea257();
    /* 0046e5e6: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e5e9: jne 0x46e760 */ if (!fZ) goto L_0046e760;
L_0046e5ef:; BB(0x0046e5ef);
    /* 0046e5ef: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e5f2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e5f5: mov ecx, dword ptr [ecx + eax*4 + 0x110] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046e5fc: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x46e601u); f_005ea257();
    /* 0046e601: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e604: jne 0x46e760 */ if (!fZ) goto L_0046e760;
L_0046e60a:; BB(0x0046e60a);
    /* 0046e60a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e60c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e60f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e612: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046e619: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e61c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e61f: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046e626: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046e628: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x46e62bu); call_ind(t); }
    /* 0046e62b: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046e62e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e62f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e632: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e635: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046e63c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e63f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e642: mov eax, dword ptr [edx + eax*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_eax*4+0x110u));
    /* 0046e649: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046e64b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x46e64eu); call_ind(t); }
    /* 0046e64e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e650: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e653: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e656: mov ecx, dword ptr [ecx + eax*4 + 0x110] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046e65d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e660: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e663: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046e66a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046e66c: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x46e66fu); call_ind(t); }
    /* 0046e66f: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046e672: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e673: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e676: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e679: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046e680: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e683: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e686: mov eax, dword ptr [edx + eax*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_eax*4+0x110u));
    /* 0046e68d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046e68f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x46e692u); call_ind(t); }
    /* 0046e692: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e695: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e698: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046e69f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e6a2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e6a5: mov eax, dword ptr [ecx + eax*4 + 0x110] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046e6ac: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 0046e6b2: cmp ecx, dword ptr [eax + 0xb0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xb0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e6b8: jge 0x46e70e */ if ((fS==fO)) goto L_0046e70e;
L_0046e6ba:; BB(0x0046e6ba);
    /* 0046e6ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e6bc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e6bf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e6c2: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046e6c9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e6cc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e6cf: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046e6d6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046e6d8: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x46e6dbu); call_ind(t); }
    /* 0046e6db: mov esi, eax */ r_esi = r_eax;
    /* 0046e6dd: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046e6e0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e6e2: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46e6e7u); f_0060ee31();
    /* 0046e6e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e6ea: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046e6ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046e6ed: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e6f0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e6f3: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046e6fa: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e6fd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e700: mov eax, dword ptr [edx + eax*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_eax*4+0x110u));
    /* 0046e707: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046e709: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x46e70cu); call_ind(t); }
    /* 0046e70c: jmp 0x46e760 */ goto L_0046e760;
L_0046e70e:; BB(0x0046e70e);
    /* 0046e70e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e710: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e713: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e716: mov ecx, dword ptr [ecx + eax*4 + 0x110] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046e71d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e720: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e723: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046e72a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046e72c: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x46e72fu); call_ind(t); }
    /* 0046e72f: mov esi, eax */ r_esi = r_eax;
    /* 0046e731: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046e734: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e736: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x46e73bu); f_0060ee31();
    /* 0046e73b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e73e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046e740: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046e741: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e744: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e747: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046e74e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e751: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e754: mov eax, dword ptr [edx + eax*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_eax*4+0x110u));
    /* 0046e75b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046e75d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x46e760u); call_ind(t); }
L_0046e760:; BB(0x0046e760);
    /* 0046e760: jmp 0x46e595 */ goto L_0046e595;
L_0046e765:; BB(0x0046e765);
    /* 0046e765: jmp 0x46e579 */ goto L_0046e579;
L_0046e76a:; BB(0x0046e76a);
    /* 0046e76a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e76d: cmp dword ptr [eax + 0x14c], 0 */ {  u32 a = R32((u32)(r_eax+0x14cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e774: jne 0x46e7cb */ if (!fZ) goto L_0046e7cb;
L_0046e776:; BB(0x0046e776);
    /* 0046e776: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0046e77b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46e780u); f_0048ab58();
    /* 0046e780: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e783: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0046e786: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e78a: je 0x46e799 */ if (fZ) goto L_0046e799;
L_0046e78c:; BB(0x0046e78c);
    /* 0046e78c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046e78f: call 0x472d43 */ r_esp -= 4; W32(r_esp, 0x46e794u); f_00472d43();
    /* 0046e794: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0046e797: jmp 0x46e7a0 */ goto L_0046e7a0;
L_0046e799:; BB(0x0046e799);
    /* 0046e799: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0046e7a0:; BB(0x0046e7a0);
    /* 0046e7a0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e7a3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046e7a6: mov dword ptr [ecx + 0x14c], edx */ W32((u32)(r_ecx+0x14cu), r_edx);
    /* 0046e7ac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e7ae: push 0x1b7 */ { u32 v = 0x1b7u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e7b3: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e7b8: push 0x1d4f1 */ { u32 v = 0x1d4f1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e7bd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e7c0: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 0046e7c6: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46e7cbu); f_005e9f50();
L_0046e7cb:; BB(0x0046e7cb);
    /* 0046e7cb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e7ce: mov ecx, dword ptr [ecx + 0x14c] */ r_ecx = R32((u32)(r_ecx+0x14cu));
    /* 0046e7d4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e7d7: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 0046e7dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046e7df: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46e7e2u); call_ind(t); }
    /* 0046e7e2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046e7e5: mov ecx, dword ptr [eax + 0x1b0] */ r_ecx = R32((u32)(r_eax+0x1b0u));
    /* 0046e7eb: call 0x401503 */ r_esp -= 4; W32(r_esp, 0x46e7f0u); f_00401503();
    /* 0046e7f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046e7f1: mov esp, ebp */ r_esp = r_ebp;
    /* 0046e7f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046e7f4: ret  */ FN_RET(0x0046e430); r_esp += 4; return;
}

void f_0046e7f5(void) /* FUN_0046e7f5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046e7f5);
    /* 0046e7f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046e7f6: mov ebp, esp */ r_ebp = r_esp;
    /* 0046e7f8: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046e7fe: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 0046e804: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0046e80b: mov dword ptr [ebp - 0x7c], 0x130 */ W32((u32)(r_ebp+0xffffff84u), 0x130u);
    /* 0046e812: mov dword ptr [ebp - 0x78], 0x141 */ W32((u32)(r_ebp+0xffffff88u), 0x141u);
    /* 0046e819: mov dword ptr [ebp - 0x74], 0x152 */ W32((u32)(r_ebp+0xffffff8cu), 0x152u);
    /* 0046e820: mov dword ptr [ebp - 0x70], 0x163 */ W32((u32)(r_ebp+0xffffff90u), 0x163u);
    /* 0046e827: mov dword ptr [ebp - 0x6c], 0x174 */ W32((u32)(r_ebp+0xffffff94u), 0x174u);
    /* 0046e82e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0046e835: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0046e83c: push 0x1d4d6 */ { u32 v = 0x1d4d6u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e841: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 0046e847: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x46e84cu); f_005e5ec3();
    /* 0046e84c: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046e852: call 0x471801 */ r_esp -= 4; W32(r_esp, 0x46e857u); f_00471801();
    /* 0046e857: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0046e85e: jmp 0x46e869 */ goto L_0046e869;
L_0046e860:; BB(0x0046e860);
    /* 0046e860: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e863: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046e866: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0046e869:; BB(0x0046e869);
    /* 0046e869: cmp dword ptr [ebp - 0x38], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e86d: jge 0x46e981 */ if ((fS==fO)) goto L_0046e981;
L_0046e873:; BB(0x0046e873);
    /* 0046e873: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e876: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046e87c: cmp dword ptr [edx + ecx*4 + 0x18c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e884: jne 0x46e8ed */ if (!fZ) goto L_0046e8ed;
L_0046e886:; BB(0x0046e886);
    /* 0046e886: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046e888: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46e88du); f_0048ab58();
    /* 0046e88d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e890: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0046e893: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e897: je 0x46e8a9 */ if (fZ) goto L_0046e8a9;
L_0046e899:; BB(0x0046e899);
    /* 0046e899: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0046e89c: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x46e8a1u); f_005e9d30();
    /* 0046e8a1: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0046e8a7: jmp 0x46e8b3 */ goto L_0046e8b3;
L_0046e8a9:; BB(0x0046e8a9);
    /* 0046e8a9: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0046e8b3:; BB(0x0046e8b3);
    /* 0046e8b3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e8b6: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046e8bc: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 0046e8c2: mov dword ptr [ecx + eax*4 + 0x18c], edx */ W32((u32)(r_ecx+r_eax*4+0x18cu), r_edx);
    /* 0046e8c9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e8cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e8cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e8cf: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e8d2: add eax, 0x1d4f5 */ {  u32 a = r_eax; u32 b = 0x1d4f5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046e8d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e8d8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e8db: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046e8e1: mov ecx, dword ptr [edx + ecx*4 + 0x18c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18cu));
    /* 0046e8e8: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46e8edu); f_005e9f50();
L_0046e8ed:; BB(0x0046e8ed);
    /* 0046e8ed: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e8f0: mov dword ptr [ebp + eax*4 - 0xc], 0xffffffff */ W32((u32)(r_ebp+r_eax*4+0xfffffff4u), 0xffffffffu);
    /* 0046e8f8: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0046e8ff: jmp 0x46e90a */ goto L_0046e90a;
L_0046e901:; BB(0x0046e901);
    /* 0046e901: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046e904: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046e907: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_0046e90a:; BB(0x0046e90a);
    /* 0046e90a: cmp dword ptr [ebp - 0x3c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e90e: jge 0x46e957 */ if ((fS==fO)) goto L_0046e957;
L_0046e910:; BB(0x0046e910);
    /* 0046e910: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046e913: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046e919: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046e920: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 0046e926: cmp edx, dword ptr [ebp - 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e929: jne 0x46e955 */ if (!fZ) goto L_0046e955;
L_0046e92b:; BB(0x0046e92b);
    /* 0046e92b: mov eax, 4 */ r_eax = 0x4u;
    /* 0046e930: sub eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046e933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e934: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e937: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046e93d: mov ecx, dword ptr [edx + ecx*4 + 0x18c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18cu));
    /* 0046e944: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x46e949u); f_005ea1cf();
    /* 0046e949: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e94c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046e94f: mov dword ptr [ebp + eax*4 - 0xc], ecx */ W32((u32)(r_ebp+r_eax*4+0xfffffff4u), r_ecx);
    /* 0046e953: jmp 0x46e957 */ goto L_0046e957;
L_0046e955:; BB(0x0046e955);
    /* 0046e955: jmp 0x46e901 */ goto L_0046e901;
L_0046e957:; BB(0x0046e957);
    /* 0046e957: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e95a: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046e960: mov ecx, dword ptr [eax + edx*4 + 0x18c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18cu));
    /* 0046e967: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e96a: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046e970: mov edx, dword ptr [eax + edx*4 + 0x18c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18cu));
    /* 0046e977: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046e979: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x46e97cu); call_ind(t); }
    /* 0046e97c: jmp 0x46e860 */ goto L_0046e860;
L_0046e981:; BB(0x0046e981);
    /* 0046e981: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0046e988: jmp 0x46e993 */ goto L_0046e993;
L_0046e98a:; BB(0x0046e98a);
    /* 0046e98a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e98d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046e990: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_0046e993:; BB(0x0046e993);
    /* 0046e993: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e997: jge 0x46ea56 */ if ((fS==fO)) goto L_0046ea56;
L_0046e99d:; BB(0x0046e99d);
    /* 0046e99d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e9a0: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046e9a6: cmp dword ptr [eax + edx*4 + 0x1a4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e9ae: jne 0x46ea2c */ if (!fZ) goto L_0046ea2c;
L_0046e9b0:; BB(0x0046e9b0);
    /* 0046e9b0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046e9b2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46e9b7u); f_0048ab58();
    /* 0046e9b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e9ba: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0046e9c0: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e9c7: je 0x46e9dc */ if (fZ) goto L_0046e9dc;
L_0046e9c9:; BB(0x0046e9c9);
    /* 0046e9c9: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0046e9cf: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x46e9d4u); f_005e9d30();
    /* 0046e9d4: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0046e9da: jmp 0x46e9e6 */ goto L_0046e9e6;
L_0046e9dc:; BB(0x0046e9dc);
    /* 0046e9dc: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_0046e9e6:; BB(0x0046e9e6);
    /* 0046e9e6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046e9e9: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046e9ef: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0046e9f5: mov dword ptr [edx + ecx*4 + 0x1a4], eax */ W32((u32)(r_edx+r_ecx*4+0x1a4u), r_eax);
    /* 0046e9fc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e9fe: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea00: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ea03: imul ecx, ecx, 0x1cf */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1cfu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046ea09: add ecx, 0x25 */ {  u32 a = r_ecx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046ea0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea0d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ea10: add edx, 0x1d4fd */ {  u32 a = r_edx; u32 b = 0x1d4fdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046ea16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea17: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ea1a: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ea20: mov ecx, dword ptr [ecx + eax*4 + 0x1a4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1a4u));
    /* 0046ea27: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46ea2cu); f_005e9f50();
L_0046ea2c:; BB(0x0046ea2c);
    /* 0046ea2c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ea2f: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ea35: mov ecx, dword ptr [eax + edx*4 + 0x1a4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1a4u));
    /* 0046ea3c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ea3f: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ea45: mov edx, dword ptr [eax + edx*4 + 0x1a4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1a4u));
    /* 0046ea4c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046ea4e: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x46ea51u); call_ind(t); }
    /* 0046ea51: jmp 0x46e98a */ goto L_0046e98a;
L_0046ea56:; BB(0x0046ea56);
    /* 0046ea56: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ea5c: cmp dword ptr [ecx + 0x19c], 0 */ {  u32 a = R32((u32)(r_ecx+0x19cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ea63: jne 0x46ead2 */ if (!fZ) goto L_0046ead2;
L_0046ea65:; BB(0x0046ea65);
    /* 0046ea65: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea6a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46ea6fu); f_0048ab58();
    /* 0046ea6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ea72: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0046ea78: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ea7f: je 0x46ea94 */ if (fZ) goto L_0046ea94;
L_0046ea81:; BB(0x0046ea81);
    /* 0046ea81: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0046ea87: call 0x472da1 */ r_esp -= 4; W32(r_esp, 0x46ea8cu); f_00472da1();
    /* 0046ea8c: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0046ea92: jmp 0x46ea9e */ goto L_0046ea9e;
L_0046ea94:; BB(0x0046ea94);
    /* 0046ea94: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_0046ea9e:; BB(0x0046ea9e);
    /* 0046ea9e: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eaa4: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0046eaaa: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 0046eab0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eab2: push 0x1b2 */ { u32 v = 0x1b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eab7: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eabc: push 0x1d4f3 */ { u32 v = 0x1d4f3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eac1: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eac7: mov ecx, dword ptr [ecx + 0x19c] */ r_ecx = R32((u32)(r_ecx+0x19cu));
    /* 0046eacd: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46ead2u); f_005e9f50();
L_0046ead2:; BB(0x0046ead2);
    /* 0046ead2: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ead8: mov ecx, dword ptr [edx + 0x19c] */ r_ecx = R32((u32)(r_edx+0x19cu));
    /* 0046eade: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eae4: mov edx, dword ptr [eax + 0x19c] */ r_edx = R32((u32)(r_eax+0x19cu));
    /* 0046eaea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046eaec: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x46eaefu); call_ind(t); }
    /* 0046eaef: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eaf5: cmp dword ptr [ecx + 0x1a0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eafc: jne 0x46eb6b */ if (!fZ) goto L_0046eb6b;
L_0046eafe:; BB(0x0046eafe);
    /* 0046eafe: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb03: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46eb08u); f_0048ab58();
    /* 0046eb08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046eb0b: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0046eb11: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eb18: je 0x46eb2d */ if (fZ) goto L_0046eb2d;
L_0046eb1a:; BB(0x0046eb1a);
    /* 0046eb1a: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0046eb20: call 0x472dfc */ r_esp -= 4; W32(r_esp, 0x46eb25u); f_00472dfc();
    /* 0046eb25: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0046eb2b: jmp 0x46eb37 */ goto L_0046eb37;
L_0046eb2d:; BB(0x0046eb2d);
    /* 0046eb2d: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_0046eb37:; BB(0x0046eb37);
    /* 0046eb37: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eb3d: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0046eb43: mov dword ptr [edx + 0x1a0], eax */ W32((u32)(r_edx+0x1a0u), r_eax);
    /* 0046eb49: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb4b: push 0x18c */ { u32 v = 0x18cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb50: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb55: push 0x1d4f2 */ { u32 v = 0x1d4f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb5a: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eb60: mov ecx, dword ptr [ecx + 0x1a0] */ r_ecx = R32((u32)(r_ecx+0x1a0u));
    /* 0046eb66: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46eb6bu); f_005e9f50();
L_0046eb6b:; BB(0x0046eb6b);
    /* 0046eb6b: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eb71: mov ecx, dword ptr [edx + 0x1a0] */ r_ecx = R32((u32)(r_edx+0x1a0u));
    /* 0046eb77: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eb7d: mov edx, dword ptr [eax + 0x1a0] */ r_edx = R32((u32)(r_eax+0x1a0u));
    /* 0046eb83: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046eb85: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x46eb88u); call_ind(t); }
    /* 0046eb88: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eb8f: jne 0x46ec78 */ if (!fZ) goto L_0046ec78;
L_0046eb95:; BB(0x0046eb95);
    /* 0046eb95: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eb9b: cmp dword ptr [ecx + 0x198], 0 */ {  u32 a = R32((u32)(r_ecx+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eba2: jne 0x46ec0b */ if (!fZ) goto L_0046ec0b;
L_0046eba4:; BB(0x0046eba4);
    /* 0046eba4: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eba6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46ebabu); f_0048ab58();
    /* 0046ebab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ebae: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0046ebb4: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ebbb: je 0x46ebd0 */ if (fZ) goto L_0046ebd0;
L_0046ebbd:; BB(0x0046ebbd);
    /* 0046ebbd: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0046ebc3: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x46ebc8u); f_005e3fb0();
    /* 0046ebc8: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0046ebce: jmp 0x46ebda */ goto L_0046ebda;
L_0046ebd0:; BB(0x0046ebd0);
    /* 0046ebd0: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_0046ebda:; BB(0x0046ebda);
    /* 0046ebda: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ebe0: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0046ebe6: mov dword ptr [edx + 0x198], eax */ W32((u32)(r_edx+0x198u), r_eax);
    /* 0046ebec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ebee: push 0xffffff74 */ { u32 v = 0xffffff74u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ebf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ebf5: push 0x1d4f8 */ { u32 v = 0x1d4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ebfa: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ec00: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 0046ec06: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46ec0bu); f_005e9f50();
L_0046ec0b:; BB(0x0046ec0b);
    /* 0046ec0b: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ec11: mov ecx, dword ptr [edx + 0x198] */ r_ecx = R32((u32)(r_edx+0x198u));
    /* 0046ec17: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ec1d: mov edx, dword ptr [eax + 0x198] */ r_edx = R32((u32)(r_eax+0x198u));
    /* 0046ec23: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046ec25: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x46ec28u); call_ind(t); }
    /* 0046ec28: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec2a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46ec2fu); f_0048ab58();
    /* 0046ec2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ec32: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0046ec38: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ec3f: je 0x46ec56 */ if (fZ) goto L_0046ec56;
L_0046ec41:; BB(0x0046ec41);
    /* 0046ec41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec43: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0046ec49: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x46ec4eu); f_005d7698();
    /* 0046ec4e: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0046ec54: jmp 0x46ec60 */ goto L_0046ec60;
L_0046ec56:; BB(0x0046ec56);
    /* 0046ec56: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_0046ec60:; BB(0x0046ec60);
    /* 0046ec60: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0046ec66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec67: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ec6d: mov ecx, dword ptr [edx + 0x198] */ r_ecx = R32((u32)(r_edx+0x198u));
    /* 0046ec73: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x46ec78u); f_005e4060();
L_0046ec78:; BB(0x0046ec78);
    /* 0046ec78: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0046ec7f: jmp 0x46ec8a */ goto L_0046ec8a;
L_0046ec81:; BB(0x0046ec81);
    /* 0046ec81: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ec84: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046ec87: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0046ec8a:; BB(0x0046ec8a);
    /* 0046ec8a: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ec8e: jge 0x46f0d2 */ if ((fS==fO)) goto L_0046f0d2;
L_0046ec94:; BB(0x0046ec94);
    /* 0046ec94: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ec97: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ec9d: cmp dword ptr [edx + ecx*4 + 0x150], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x150u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eca5: jne 0x46ed33 */ if (!fZ) goto L_0046ed33;
L_0046ecab:; BB(0x0046ecab);
    /* 0046ecab: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ecad: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46ecb2u); f_0048ab58();
    /* 0046ecb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ecb5: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0046ecbb: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ecc2: je 0x46ecd7 */ if (fZ) goto L_0046ecd7;
L_0046ecc4:; BB(0x0046ecc4);
    /* 0046ecc4: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0046ecca: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x46eccfu); f_005e9d30();
    /* 0046eccf: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0046ecd5: jmp 0x46ece1 */ goto L_0046ece1;
L_0046ecd7:; BB(0x0046ecd7);
    /* 0046ecd7: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_0046ece1:; BB(0x0046ece1);
    /* 0046ece1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ece4: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ecea: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0046ecf0: mov dword ptr [ecx + eax*4 + 0x150], edx */ W32((u32)(r_ecx+r_eax*4+0x150u), r_edx);
    /* 0046ecf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ecf9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ecfc: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ed02: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046ed09: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0046ed0f: mov ecx, dword ptr [ebp + eax*4 - 0x7c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff84u));
    /* 0046ed13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ed14: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ed19: push 0x1d4d7 */ { u32 v = 0x1d4d7u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ed1e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ed21: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ed27: mov ecx, dword ptr [eax + edx*4 + 0x150] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x150u));
    /* 0046ed2e: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46ed33u); f_005e9f50();
L_0046ed33:; BB(0x0046ed33);
    /* 0046ed33: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ed36: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ed3c: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046ed43: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0046ed49: mov edx, dword ptr [ebp + ecx*4 - 0x7c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff84u));
    /* 0046ed4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ed4e: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ed53: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ed56: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ed5c: mov ecx, dword ptr [ecx + eax*4 + 0x150] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x150u));
    /* 0046ed63: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ed66: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ed6c: mov edx, dword ptr [eax + edx*4 + 0x150] */ r_edx = R32((u32)(r_eax+r_edx*4+0x150u));
    /* 0046ed73: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046ed75: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x46ed78u); call_ind(t); }
    /* 0046ed78: mov ecx, 4 */ r_ecx = 0x4u;
    /* 0046ed7d: sub ecx, dword ptr [ebp - 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046ed80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ed81: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ed84: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ed8a: mov ecx, dword ptr [eax + edx*4 + 0x150] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x150u));
    /* 0046ed91: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x46ed96u); f_005ea1cf();
    /* 0046ed96: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ed99: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ed9f: mov ecx, dword ptr [edx + ecx*4 + 0x150] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x150u));
    /* 0046eda6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046eda9: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046edaf: mov eax, dword ptr [edx + eax*4 + 0x150] */ r_eax = R32((u32)(r_edx+r_eax*4+0x150u));
    /* 0046edb6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046edb8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46edbbu); call_ind(t); }
    /* 0046edbb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046edbe: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046edc4: cmp dword ptr [ecx + eax*4 + 0x164], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046edcc: jne 0x46ee65 */ if (!fZ) goto L_0046ee65;
L_0046edd2:; BB(0x0046edd2);
    /* 0046edd2: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0046edd7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46eddcu); f_0048ab58();
    /* 0046eddc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046eddf: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0046ede5: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046edec: je 0x46ee01 */ if (fZ) goto L_0046ee01;
L_0046edee:; BB(0x0046edee);
    /* 0046edee: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0046edf4: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x46edf9u); f_005e8590();
    /* 0046edf9: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0046edff: jmp 0x46ee0b */ goto L_0046ee0b;
L_0046ee01:; BB(0x0046ee01);
    /* 0046ee01: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_0046ee0b:; BB(0x0046ee0b);
    /* 0046ee0b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ee0e: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ee14: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0046ee1a: mov dword ptr [eax + edx*4 + 0x164], ecx */ W32((u32)(r_eax+r_edx*4+0x164u), r_ecx);
    /* 0046ee21: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee25: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ee28: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ee2e: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046ee35: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 0046ee3b: mov eax, dword ptr [ebp + edx*4 - 0x7c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff84u));
    /* 0046ee3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee40: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee45: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee47: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee49: push 0x6f6a3c */ { u32 v = 0x6f6a3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee4e: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee50: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ee53: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ee59: mov ecx, dword ptr [edx + ecx*4 + 0x164] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x164u));
    /* 0046ee60: call 0x5e86e0 */ r_esp -= 4; W32(r_esp, 0x46ee65u); f_005e86e0();
L_0046ee65:; BB(0x0046ee65);
    /* 0046ee65: push 0x6f6a40 */ { u32 v = 0x6f6a40u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee6a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0046ee6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee6e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x46ee73u); f_00624510();
    /* 0046ee73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ee76: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ee79: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ee7f: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046ee86: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 0046ee8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee8d: push 0x683c18 */ { u32 v = 0x683c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee92: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 0046ee95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee96: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x46ee9cu); call_ind(t); }
    /* 0046ee9c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ee9f: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0046eea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046eea3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046eea6: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eeac: mov ecx, dword ptr [edx + ecx*4 + 0x164] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x164u));
    /* 0046eeb3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046eeb6: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eebc: mov eax, dword ptr [edx + eax*4 + 0x164] */ r_eax = R32((u32)(r_edx+r_eax*4+0x164u));
    /* 0046eec3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046eec5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x46eec8u); call_ind(t); }
    /* 0046eec8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046eecb: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eed1: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046eed8: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0046eede: mov ecx, dword ptr [ebp + eax*4 - 0x7c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff84u));
    /* 0046eee2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046eee3: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eee8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046eeeb: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046eef1: mov ecx, dword ptr [eax + edx*4 + 0x164] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x164u));
    /* 0046eef8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046eefb: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ef01: mov edx, dword ptr [eax + edx*4 + 0x164] */ r_edx = R32((u32)(r_eax+r_edx*4+0x164u));
    /* 0046ef08: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046ef0a: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x46ef0du); call_ind(t); }
    /* 0046ef0d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ef10: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ef16: mov ecx, dword ptr [edx + ecx*4 + 0x164] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x164u));
    /* 0046ef1d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ef20: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ef26: mov eax, dword ptr [edx + eax*4 + 0x164] */ r_eax = R32((u32)(r_edx+r_eax*4+0x164u));
    /* 0046ef2d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046ef2f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46ef32u); call_ind(t); }
    /* 0046ef32: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ef35: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ef3b: cmp dword ptr [ecx + eax*4 + 0x178], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x178u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ef43: jne 0x46efdf */ if (!fZ) goto L_0046efdf;
L_0046ef49:; BB(0x0046ef49);
    /* 0046ef49: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef4e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46ef53u); f_0048ab58();
    /* 0046ef53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ef56: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0046ef5c: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ef63: je 0x46ef78 */ if (fZ) goto L_0046ef78;
L_0046ef65:; BB(0x0046ef65);
    /* 0046ef65: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0046ef6b: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x46ef70u); f_005e8590();
    /* 0046ef70: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0046ef76: jmp 0x46ef82 */ goto L_0046ef82;
L_0046ef78:; BB(0x0046ef78);
    /* 0046ef78: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_0046ef82:; BB(0x0046ef82);
    /* 0046ef82: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ef85: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046ef8b: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0046ef91: mov dword ptr [eax + edx*4 + 0x178], ecx */ W32((u32)(r_eax+r_edx*4+0x178u), r_ecx);
    /* 0046ef98: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef9a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef9c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046ef9f: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046efa5: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046efac: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 0046efb2: mov eax, dword ptr [ebp + edx*4 - 0x7c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff84u));
    /* 0046efb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046efb7: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0046efbc: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0046efbe: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046efc3: push 0x6f6a44 */ { u32 v = 0x6f6a44u; r_esp -= 4; W32(r_esp, v); }
    /* 0046efc8: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046efca: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046efcd: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046efd3: mov ecx, dword ptr [edx + ecx*4 + 0x178] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 0046efda: call 0x5e86e0 */ r_esp -= 4; W32(r_esp, 0x46efdfu); f_005e86e0();
L_0046efdf:; BB(0x0046efdf);
    /* 0046efdf: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0046efe1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046efe4: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046efea: mov ecx, dword ptr [ecx + eax*4 + 0x178] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 0046eff1: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x46eff6u); f_005e8e99();
    /* 0046eff6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046eff9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046effa: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 0046effd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046effe: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046f004: call 0x46f118 */ r_esp -= 4; W32(r_esp, 0x46f009u); f_0046f118();
    /* 0046f009: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0046f00c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046f00f: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f012: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0046f015: push 0x683c1c */ { u32 v = 0x683c1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f01a: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 0046f01d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f01e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x46f023u); f_00624510();
    /* 0046f023: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f026: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f028: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f02a: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0046f02d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f02e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 0046f031: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f032: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x46f037u); f_004298d8();
    /* 0046f037: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f03a: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 0046f03d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f03e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f041: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046f047: mov ecx, dword ptr [ecx + eax*4 + 0x178] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 0046f04e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f051: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046f057: mov edx, dword ptr [eax + edx*4 + 0x178] */ r_edx = R32((u32)(r_eax+r_edx*4+0x178u));
    /* 0046f05e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046f060: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x46f063u); call_ind(t); }
    /* 0046f063: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f066: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046f06c: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046f073: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0046f079: mov edx, dword ptr [ebp + ecx*4 - 0x7c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff84u));
    /* 0046f07d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f07e: push 0x19f */ { u32 v = 0x19fu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f083: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f086: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046f08c: mov ecx, dword ptr [ecx + eax*4 + 0x178] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 0046f093: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f096: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046f09c: mov edx, dword ptr [eax + edx*4 + 0x178] */ r_edx = R32((u32)(r_eax+r_edx*4+0x178u));
    /* 0046f0a3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046f0a5: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x46f0a8u); call_ind(t); }
    /* 0046f0a8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f0ab: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046f0b1: mov ecx, dword ptr [edx + ecx*4 + 0x178] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 0046f0b8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f0bb: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046f0c1: mov eax, dword ptr [edx + eax*4 + 0x178] */ r_eax = R32((u32)(r_edx+r_eax*4+0x178u));
    /* 0046f0c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046f0ca: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46f0cdu); call_ind(t); }
    /* 0046f0cd: jmp 0x46ec81 */ goto L_0046ec81;
L_0046f0d2:; BB(0x0046f0d2);
    /* 0046f0d2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046f0d5: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0046f0d8: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0046f0df: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 0046f0e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f0e3: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046f0e9: mov eax, dword ptr [edx + 0x1ac] */ r_eax = R32((u32)(r_edx+0x1acu));
    /* 0046f0ef: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0046f0f2: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x46f0f7u); f_004267ae();
    /* 0046f0f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f0fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f0fb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046f0fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f0ff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046f102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f103: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0046f109: mov ecx, dword ptr [ecx + 0x1b0] */ r_ecx = R32((u32)(r_ecx+0x1b0u));
    /* 0046f10f: call 0x401567 */ r_esp -= 4; W32(r_esp, 0x46f114u); f_00401567();
    /* 0046f114: mov esp, ebp */ r_esp = r_ebp;
    /* 0046f116: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046f117: ret  */ FN_RET(0x0046e7f5); r_esp += 4; return;
}

void f_0046f118(void) /* FUN_0046f118 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046f118);
    /* 0046f118: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046f119: mov ebp, esp */ r_ebp = r_esp;
    /* 0046f11b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046f11e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0046f121: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046f124: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046f127: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046f12e: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0046f134: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046f137: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046f13e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0046f141: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046f144: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046f14b: cmp dword ptr [eax + 0x88], -1 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f152: je 0x46f1b8 */ if (fZ) goto L_0046f1b8;
L_0046f154:; BB(0x0046f154);
    /* 0046f154: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0046f157: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046f15a: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046f161: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0046f164: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046f167: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046f16e: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0046f174: cmp edx, dword ptr [ecx + 0x88] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f17a: jg 0x46f1a5 */ if ((!fZ&&fS==fO)) goto L_0046f1a5;
L_0046f17c:; BB(0x0046f17c);
    /* 0046f17c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f17e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f180: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0046f183: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f184: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046f187: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f188: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x46f18du); f_004298d8();
    /* 0046f18d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f190: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0046f193: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046f196: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046f19d: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 0046f1a3: jmp 0x46f1cb */ goto L_0046f1cb;
L_0046f1a5:; BB(0x0046f1a5);
    /* 0046f1a5: push 0x6f6a48 */ { u32 v = 0x6f6a48u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f1aa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046f1ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f1ae: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x46f1b3u); f_00624510();
    /* 0046f1b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f1b6: jmp 0x46f1c9 */ goto L_0046f1c9;
L_0046f1b8:; BB(0x0046f1b8);
    /* 0046f1b8: push 0x6f6a4c */ { u32 v = 0x6f6a4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f1bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046f1c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f1c1: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x46f1c6u); f_00624510();
    /* 0046f1c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046f1c9:; BB(0x0046f1c9);
    /* 0046f1c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0046f1cb:; BB(0x0046f1cb);
    /* 0046f1cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0046f1cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046f1ce: ret 8 */ FN_RET(0x0046f118); r_esp += 12; return;
}

void f_0046f1d1(void) /* FUN_0046f1d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046f1d1);
    /* 0046f1d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046f1d2: mov ebp, esp */ r_ebp = r_esp;
    /* 0046f1d4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046f1d7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046f1da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046f1dd: call 0x46f260 */ r_esp -= 4; W32(r_esp, 0x46f1e2u); f_0046f260();
    /* 0046f1e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046f1e5: call 0x46e32f */ r_esp -= 4; W32(r_esp, 0x46f1eau); f_0046e32f();
    /* 0046f1ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f1ec: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 0046f1f1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0046f1f4: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 0046f1fa: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0046f1fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046f1ff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x46f202u); call_ind(t); }
    /* 0046f202: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f204: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 0046f209: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0046f20c: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 0046f212: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0046f215: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046f217: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x46f21au); call_ind(t); }
    /* 0046f21a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046f21d: cmp dword ptr [eax + 0x1b0], 0 */ {  u32 a = R32((u32)(r_eax+0x1b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f224: jne 0x46f25c */ if (!fZ) goto L_0046f25c;
L_0046f226:; BB(0x0046f226);
    /* 0046f226: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f22b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46f230u); f_0048ab58();
    /* 0046f230: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f233: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0046f236: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f23a: je 0x46f249 */ if (fZ) goto L_0046f249;
L_0046f23c:; BB(0x0046f23c);
    /* 0046f23c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f23f: call 0x401000 */ r_esp -= 4; W32(r_esp, 0x46f244u); f_00401000();
    /* 0046f244: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046f247: jmp 0x46f250 */ goto L_0046f250;
L_0046f249:; BB(0x0046f249);
    /* 0046f249: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0046f250:; BB(0x0046f250);
    /* 0046f250: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046f253: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046f256: mov dword ptr [ecx + 0x1b0], edx */ W32((u32)(r_ecx+0x1b0u), r_edx);
L_0046f25c:; BB(0x0046f25c);
    /* 0046f25c: mov esp, ebp */ r_esp = r_ebp;
    /* 0046f25e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046f25f: ret  */ FN_RET(0x0046f1d1); r_esp += 4; return;
}

void f_0046f260(void) /* FUN_0046f260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046f260);
    /* 0046f260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046f261: mov ebp, esp */ r_ebp = r_esp;
    /* 0046f263: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046f266: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0046f269: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046f270: jmp 0x46f27b */ goto L_0046f27b;
L_0046f272:; BB(0x0046f272);
    /* 0046f272: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f275: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046f278: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046f27b:; BB(0x0046f27b);
    /* 0046f27b: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f27f: jge 0x46f2e5 */ if ((fS==fO)) goto L_0046f2e5;
L_0046f281:; BB(0x0046f281);
    /* 0046f281: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f284: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046f287: cmp dword ptr [edx + ecx*4 + 0x1ac], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f28f: jne 0x46f2e3 */ if (!fZ) goto L_0046f2e3;
L_0046f291:; BB(0x0046f291);
    /* 0046f291: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f296: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46f29bu); f_0048ab58();
    /* 0046f29b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f29e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046f2a1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f2a5: je 0x46f2ba */ if (fZ) goto L_0046f2ba;
L_0046f2a7:; BB(0x0046f2a7);
    /* 0046f2a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f2a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f2ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f2ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046f2b0: call 0x46d0c0 */ r_esp -= 4; W32(r_esp, 0x46f2b5u); f_0046d0c0();
    /* 0046f2b5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046f2b8: jmp 0x46f2c1 */ goto L_0046f2c1;
L_0046f2ba:; BB(0x0046f2ba);
    /* 0046f2ba: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0046f2c1:; BB(0x0046f2c1);
    /* 0046f2c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f2c4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046f2c7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046f2ca: mov dword ptr [edx + ecx*4 + 0x1ac], eax */ W32((u32)(r_edx+r_ecx*4+0x1acu), r_eax);
    /* 0046f2d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f2d4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046f2d7: mov ecx, dword ptr [edx + ecx*4 + 0x1ac] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1acu));
    /* 0046f2de: call 0x46d149 */ r_esp -= 4; W32(r_esp, 0x46f2e3u); f_0046d149();
L_0046f2e3:; BB(0x0046f2e3);
    /* 0046f2e3: jmp 0x46f272 */ goto L_0046f272;
L_0046f2e5:; BB(0x0046f2e5);
    /* 0046f2e5: mov esp, ebp */ r_esp = r_ebp;
    /* 0046f2e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046f2e8: ret  */ FN_RET(0x0046f260); r_esp += 4; return;
}

void f_0046f2e9(void) /* FUN_0046f2e9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046f2e9);
    /* 0046f2e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046f2ea: mov ebp, esp */ r_ebp = r_esp;
    /* 0046f2ec: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046f2ef: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0046f2f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046f2f9: jmp 0x46f304 */ goto L_0046f304;
L_0046f2fb:; BB(0x0046f2fb);
    /* 0046f2fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f2fe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046f301: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046f304:; BB(0x0046f304);
    /* 0046f304: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f308: jge 0x46f401 */ if ((fS==fO)) goto L_0046f401;
L_0046f30e:; BB(0x0046f30e);
    /* 0046f30e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f311: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f314: cmp dword ptr [edx + ecx*4 + 0x110], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f31c: jne 0x46f38f */ if (!fZ) goto L_0046f38f;
L_0046f31e:; BB(0x0046f31e);
    /* 0046f31e: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f323: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46f328u); f_0048ab58();
    /* 0046f328: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f32b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046f32e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f332: je 0x46f345 */ if (fZ) goto L_0046f345;
L_0046f334:; BB(0x0046f334);
    /* 0046f334: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f337: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f338: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046f33b: call 0x46d16f */ r_esp -= 4; W32(r_esp, 0x46f340u); f_0046d16f();
    /* 0046f340: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0046f343: jmp 0x46f34c */ goto L_0046f34c;
L_0046f345:; BB(0x0046f345);
    /* 0046f345: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0046f34c:; BB(0x0046f34c);
    /* 0046f34c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f34f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f352: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046f355: mov dword ptr [edx + ecx*4 + 0x110], eax */ W32((u32)(r_edx+r_ecx*4+0x110u), r_eax);
    /* 0046f35c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f35e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f361: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f364: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046f36b: call 0x46d592 */ r_esp -= 4; W32(r_esp, 0x46f370u); f_0046d592();
    /* 0046f370: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f373: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f376: mov ecx, dword ptr [ecx + eax*4 + 0x110] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046f37d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f380: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f383: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046f38a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046f38c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x46f38fu); call_ind(t); }
L_0046f38f:; BB(0x0046f38f);
    /* 0046f38f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f392: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f395: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046f39c: call 0x46d201 */ r_esp -= 4; W32(r_esp, 0x46f3a1u); f_0046d201();
    /* 0046f3a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f3a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f3a7: mov ecx, dword ptr [ecx + eax*4 + 0x110] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0046f3ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f3b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f3b4: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046f3bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046f3bd: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x46f3c0u); call_ind(t); }
    /* 0046f3c0: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0046f3c5: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f3c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f3c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f3cc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f3cf: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046f3d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f3d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f3dc: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0046f3e3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046f3e5: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x46f3e8u); call_ind(t); }
    /* 0046f3e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f3ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f3ed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f3f0: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0046f3f7: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x46f3fcu); f_005ea1cf();
    /* 0046f3fc: jmp 0x46f2fb */ goto L_0046f2fb;
L_0046f401:; BB(0x0046f401);
    /* 0046f401: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f404: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f40b: jne 0x46f459 */ if (!fZ) goto L_0046f459;
L_0046f40d:; BB(0x0046f40d);
    /* 0046f40d: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f40f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46f414u); f_0048ab58();
    /* 0046f414: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f417: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046f41a: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f41e: je 0x46f42d */ if (fZ) goto L_0046f42d;
L_0046f420:; BB(0x0046f420);
    /* 0046f420: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046f423: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x46f428u); f_005e9d30();
    /* 0046f428: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0046f42b: jmp 0x46f434 */ goto L_0046f434;
L_0046f42d:; BB(0x0046f42d);
    /* 0046f42d: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0046f434:; BB(0x0046f434);
    /* 0046f434: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f437: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046f43a: mov dword ptr [ecx + 0x124], edx */ W32((u32)(r_ecx+0x124u), r_edx);
    /* 0046f440: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f442: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f444: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f446: push 0x1d4e9 */ { u32 v = 0x1d4e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f44b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f44e: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 0046f454: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46f459u); f_005e9f50();
L_0046f459:; BB(0x0046f459);
    /* 0046f459: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f45c: cmp dword ptr [ecx + 0x128], 0 */ {  u32 a = R32((u32)(r_ecx+0x128u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f463: jne 0x46f4b1 */ if (!fZ) goto L_0046f4b1;
L_0046f465:; BB(0x0046f465);
    /* 0046f465: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f467: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46f46cu); f_0048ab58();
    /* 0046f46c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f46f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046f472: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f476: je 0x46f485 */ if (fZ) goto L_0046f485;
L_0046f478:; BB(0x0046f478);
    /* 0046f478: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046f47b: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x46f480u); f_005e9d30();
    /* 0046f480: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0046f483: jmp 0x46f48c */ goto L_0046f48c;
L_0046f485:; BB(0x0046f485);
    /* 0046f485: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0046f48c:; BB(0x0046f48c);
    /* 0046f48c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f48f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046f492: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 0046f498: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f49a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f49c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f49e: push 0x1d4ef */ { u32 v = 0x1d4efu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f4a3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046f4a6: mov ecx, dword ptr [ecx + 0x128] */ r_ecx = R32((u32)(r_ecx+0x128u));
    /* 0046f4ac: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46f4b1u); f_005e9f50();
L_0046f4b1:; BB(0x0046f4b1);
    /* 0046f4b1: mov esp, ebp */ r_esp = r_ebp;
    /* 0046f4b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046f4b4: ret  */ FN_RET(0x0046f2e9); r_esp += 4; return;
}

void f_0046f4b5(void) /* FUN_0046f4b5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046f4b5);
    /* 0046f4b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046f4b6: mov ebp, esp */ r_ebp = r_esp;
    /* 0046f4b8: sub esp, 0x150 */ {  u32 a = r_esp; u32 b = 0x150u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046f4be: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 0046f4c4: mov dword ptr [ebp - 0x34], 0x7c */ W32((u32)(r_ebp+0xffffffccu), 0x7cu);
    /* 0046f4cb: mov dword ptr [ebp - 0x30], 0xb1 */ W32((u32)(r_ebp+0xffffffd0u), 0xb1u);
    /* 0046f4d2: mov dword ptr [ebp - 0x2c], 0xe9 */ W32((u32)(r_ebp+0xffffffd4u), 0xe9u);
    /* 0046f4d9: mov dword ptr [ebp - 0x5c], 0x1d4c9 */ W32((u32)(r_ebp+0xffffffa4u), 0x1d4c9u);
    /* 0046f4e0: mov dword ptr [ebp - 0x58], 0x1d4c7 */ W32((u32)(r_ebp+0xffffffa8u), 0x1d4c7u);
    /* 0046f4e7: mov dword ptr [ebp - 0x54], 0x1d4d5 */ W32((u32)(r_ebp+0xffffffacu), 0x1d4d5u);
    /* 0046f4ee: mov dword ptr [ebp - 0x28], 0x165 */ W32((u32)(r_ebp+0xffffffd8u), 0x165u);
    /* 0046f4f5: mov dword ptr [ebp - 0x24], 0x143 */ W32((u32)(r_ebp+0xffffffdcu), 0x143u);
    /* 0046f4fc: mov dword ptr [ebp - 0x20], 0x122 */ W32((u32)(r_ebp+0xffffffe0u), 0x122u);
    /* 0046f503: mov dword ptr [ebp - 0x1c], 0x100 */ W32((u32)(r_ebp+0xffffffe4u), 0x100u);
    /* 0046f50a: mov dword ptr [ebp - 0x18], 0xe0 */ W32((u32)(r_ebp+0xffffffe8u), 0xe0u);
    /* 0046f511: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f517: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f51b: jne 0x46f584 */ if (!fZ) goto L_0046f584;
L_0046f51d:; BB(0x0046f51d);
    /* 0046f51d: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f522: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46f527u); f_0048ab58();
    /* 0046f527: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f52a: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0046f530: cmp dword ptr [ebp - 0xd8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f537: je 0x46f54c */ if (fZ) goto L_0046f54c;
L_0046f539:; BB(0x0046f539);
    /* 0046f539: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 0046f53f: call 0x47295e */ r_esp -= 4; W32(r_esp, 0x46f544u); f_0047295e();
    /* 0046f544: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 0046f54a: jmp 0x46f556 */ goto L_0046f556;
L_0046f54c:; BB(0x0046f54c);
    /* 0046f54c: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_0046f556:; BB(0x0046f556);
    /* 0046f556: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f55c: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0046f562: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0046f565: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f567: push 0x1b7 */ { u32 v = 0x1b7u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f56c: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f571: push 0x1d4cc */ { u32 v = 0x1d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f576: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f57c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0046f57f: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46f584u); f_005e9f50();
L_0046f584:; BB(0x0046f584);
    /* 0046f584: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f58a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0046f58d: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f593: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0046f596: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046f598: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46f59bu); call_ind(t); }
    /* 0046f59b: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f5a1: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f5a5: jne 0x46f60e */ if (!fZ) goto L_0046f60e;
L_0046f5a7:; BB(0x0046f5a7);
    /* 0046f5a7: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f5ac: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46f5b1u); f_0048ab58();
    /* 0046f5b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f5b4: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0046f5ba: cmp dword ptr [ebp - 0xdc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f5c1: je 0x46f5d6 */ if (fZ) goto L_0046f5d6;
L_0046f5c3:; BB(0x0046f5c3);
    /* 0046f5c3: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 0046f5c9: call 0x4729e3 */ r_esp -= 4; W32(r_esp, 0x46f5ceu); f_004729e3();
    /* 0046f5ce: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 0046f5d4: jmp 0x46f5e0 */ goto L_0046f5e0;
L_0046f5d6:; BB(0x0046f5d6);
    /* 0046f5d6: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_0046f5e0:; BB(0x0046f5e0);
    /* 0046f5e0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f5e6: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0046f5ec: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0046f5ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f5f1: push 0x1b7 */ { u32 v = 0x1b7u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f5f6: push 0x163 */ { u32 v = 0x163u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f5fb: push 0x1d4cb */ { u32 v = 0x1d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f600: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f606: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0046f609: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46f60eu); f_005e9f50();
L_0046f60e:; BB(0x0046f60e);
    /* 0046f60e: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f614: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0046f617: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f61d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0046f620: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046f622: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46f625u); call_ind(t); }
    /* 0046f625: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0046f62c: jmp 0x46f637 */ goto L_0046f637;
L_0046f62e:; BB(0x0046f62e);
    /* 0046f62e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f631: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046f634: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0046f637:; BB(0x0046f637);
    /* 0046f637: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f63b: jge 0x46f6e1 */ if ((fS==fO)) goto L_0046f6e1;
L_0046f641:; BB(0x0046f641);
    /* 0046f641: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f644: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f64a: cmp dword ptr [edx + ecx*4 + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f64f: jne 0x46f6bd */ if (!fZ) goto L_0046f6bd;
L_0046f651:; BB(0x0046f651);
    /* 0046f651: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f653: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46f658u); f_0048ab58();
    /* 0046f658: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f65b: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0046f661: cmp dword ptr [ebp - 0xe0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f668: je 0x46f67d */ if (fZ) goto L_0046f67d;
L_0046f66a:; BB(0x0046f66a);
    /* 0046f66a: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0046f670: call 0x4724d4 */ r_esp -= 4; W32(r_esp, 0x46f675u); f_004724d4();
    /* 0046f675: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 0046f67b: jmp 0x46f687 */ goto L_0046f687;
L_0046f67d:; BB(0x0046f67d);
    /* 0046f67d: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
L_0046f687:; BB(0x0046f687);
    /* 0046f687: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f68a: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f690: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 0046f696: mov dword ptr [ecx + eax*4 + 0x24], edx */ W32((u32)(r_ecx+r_eax*4+0x24u), r_edx);
    /* 0046f69a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f69c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f69f: mov ecx, dword ptr [ebp + eax*4 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffd8u));
    /* 0046f6a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f6a4: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f6a6: push 0x1d4d8 */ { u32 v = 0x1d4d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f6ab: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f6ae: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f6b4: mov ecx, dword ptr [eax + edx*4 + 0x24] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0046f6b8: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46f6bdu); f_005e9f50();
L_0046f6bd:; BB(0x0046f6bd);
    /* 0046f6bd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f6c0: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f6c6: mov ecx, dword ptr [edx + ecx*4 + 0x24] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x24u));
    /* 0046f6ca: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f6cd: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f6d3: mov eax, dword ptr [edx + eax*4 + 0x24] */ r_eax = R32((u32)(r_edx+r_eax*4+0x24u));
    /* 0046f6d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046f6d9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46f6dcu); call_ind(t); }
    /* 0046f6dc: jmp 0x46f62e */ goto L_0046f62e;
L_0046f6e1:; BB(0x0046f6e1);
    /* 0046f6e1: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0046f6e8: jmp 0x46f6f3 */ goto L_0046f6f3;
L_0046f6ea:; BB(0x0046f6ea);
    /* 0046f6ea: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f6ed: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046f6f0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0046f6f3:; BB(0x0046f6f3);
    /* 0046f6f3: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f6f7: jge 0x46f7d9 */ if ((fS==fO)) goto L_0046f7d9;
L_0046f6fd:; BB(0x0046f6fd);
    /* 0046f6fd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f700: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f706: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f70b: jne 0x46f7a3 */ if (!fZ) goto L_0046f7a3;
L_0046f711:; BB(0x0046f711);
    /* 0046f711: push 0x8a0 */ { u32 v = 0x8a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f716: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46f71bu); f_0048ab58();
    /* 0046f71b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f71e: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0046f724: cmp dword ptr [ebp - 0xe4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f72b: je 0x46f744 */ if (fZ) goto L_0046f744;
L_0046f72d:; BB(0x0046f72d);
    /* 0046f72d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f731: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0046f737: call 0x47276a */ r_esp -= 4; W32(r_esp, 0x46f73cu); f_0047276a();
    /* 0046f73c: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 0046f742: jmp 0x46f74e */ goto L_0046f74e;
L_0046f744:; BB(0x0046f744);
    /* 0046f744: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
L_0046f74e:; BB(0x0046f74e);
    /* 0046f74e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f751: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f757: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0046f75d: mov dword ptr [edx + ecx*4 + 0x10], eax */ W32((u32)(r_edx+r_ecx*4+0x10u), r_eax);
    /* 0046f761: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f763: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f765: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f768: mov edx, dword ptr [ebp + ecx*4 - 0x28] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffd8u));
    /* 0046f76c: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046f76f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f770: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f772: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f774: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f776: push 0x6f6a50 */ { u32 v = 0x6f6a50u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f77b: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0046f77d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f780: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f786: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 0046f78a: call 0x5e86e0 */ r_esp -= 4; W32(r_esp, 0x46f78fu); f_005e86e0();
    /* 0046f78f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f791: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f794: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f79a: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0046f79e: call 0x45378f */ r_esp -= 4; W32(r_esp, 0x46f7a3u); f_0045378f();
L_0046f7a3:; BB(0x0046f7a3);
    /* 0046f7a3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f7a6: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f7ac: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 0046f7b0: call 0x4534e5 */ r_esp -= 4; W32(r_esp, 0x46f7b5u); f_004534e5();
    /* 0046f7b5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f7b8: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f7be: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 0046f7c2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f7c5: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f7cb: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0046f7cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046f7d1: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x46f7d4u); call_ind(t); }
    /* 0046f7d4: jmp 0x46f6ea */ goto L_0046f6ea;
L_0046f7d9:; BB(0x0046f7d9);
    /* 0046f7d9: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f7df: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0046f7e2: call 0x453443 */ r_esp -= 4; W32(r_esp, 0x46f7e7u); f_00453443();
    /* 0046f7e7: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0046f7ee: jmp 0x46f7f9 */ goto L_0046f7f9;
L_0046f7f0:; BB(0x0046f7f0);
    /* 0046f7f0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f7f3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046f7f6: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_0046f7f9:; BB(0x0046f7f9);
    /* 0046f7f9: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f7fd: jge 0x46f9e0 */ if ((fS==fO)) goto L_0046f9e0;
L_0046f803:; BB(0x0046f803);
    /* 0046f803: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f806: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f80c: cmp dword ptr [ecx + eax*4 + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f811: jne 0x46f8a0 */ if (!fZ) goto L_0046f8a0;
L_0046f817:; BB(0x0046f817);
    /* 0046f817: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f819: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46f81eu); f_0048ab58();
    /* 0046f81e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f821: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0046f827: cmp dword ptr [ebp - 0xe8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f82e: je 0x46f843 */ if (fZ) goto L_0046f843;
L_0046f830:; BB(0x0046f830);
    /* 0046f830: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0046f836: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x46f83bu); f_005d505b();
    /* 0046f83b: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 0046f841: jmp 0x46f84d */ goto L_0046f84d;
L_0046f843:; BB(0x0046f843);
    /* 0046f843: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_0046f84d:; BB(0x0046f84d);
    /* 0046f84d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f850: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f856: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0046f85c: mov dword ptr [eax + edx*4 + 0x38], ecx */ W32((u32)(r_eax+r_edx*4+0x38u), r_ecx);
    /* 0046f860: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f863: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f869: mov ecx, dword ptr [eax + edx*4 + 0x38] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 0046f86d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f870: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f876: mov edx, dword ptr [eax + edx*4 + 0x38] */ r_edx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 0046f87a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046f87c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x46f87fu); call_ind(t); }
    /* 0046f87f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f881: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f884: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f88a: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 0046f88e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f891: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f897: mov eax, dword ptr [edx + eax*4 + 0x38] */ r_eax = R32((u32)(r_edx+r_eax*4+0x38u));
    /* 0046f89b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046f89d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x46f8a0u); call_ind(t); }
L_0046f8a0:; BB(0x0046f8a0);
    /* 0046f8a0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f8a3: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046f8a6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0046f8a9: jmp 0x46f8b4 */ goto L_0046f8b4;
L_0046f8ab:; BB(0x0046f8ab);
    /* 0046f8ab: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046f8ae: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f8b1: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_0046f8b4:; BB(0x0046f8b4);
    /* 0046f8b4: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f8b7: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046f8ba: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046f8bd: cmp dword ptr [ebp - 0x3c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f8c0: jge 0x46f9bc */ if ((fS==fO)) goto L_0046f9bc;
L_0046f8c6:; BB(0x0046f8c6);
    /* 0046f8c6: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046f8c9: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f8cf: cmp dword ptr [ecx + eax*4 + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f8d4: jne 0x46f9b7 */ if (!fZ) goto L_0046f9b7;
L_0046f8da:; BB(0x0046f8da);
    /* 0046f8da: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f8df: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46f8e4u); f_0048ab58();
    /* 0046f8e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f8e7: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0046f8ed: cmp dword ptr [ebp - 0xec], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f8f4: je 0x46f913 */ if (fZ) goto L_0046f913;
L_0046f8f6:; BB(0x0046f8f6);
    /* 0046f8f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f8f8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f8fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f8fc: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046f8ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f900: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0046f906: call 0x472a34 */ r_esp -= 4; W32(r_esp, 0x46f90bu); f_00472a34();
    /* 0046f90b: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 0046f911: jmp 0x46f91d */ goto L_0046f91d;
L_0046f913:; BB(0x0046f913);
    /* 0046f913: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
L_0046f91d:; BB(0x0046f91d);
    /* 0046f91d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046f920: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f926: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 0046f92c: mov dword ptr [edx + ecx*4 + 0x4c], eax */ W32((u32)(r_edx+r_ecx*4+0x4cu), r_eax);
    /* 0046f930: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046f933: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f939: mov eax, dword ptr [edx + ecx*4 + 0x4c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4cu));
    /* 0046f93d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f93e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f941: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f947: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 0046f94b: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x46f950u); f_005d50ed();
    /* 0046f950: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f952: mov eax, 4 */ r_eax = 0x4u;
    /* 0046f957: sub eax, dword ptr [ebp - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046f95a: imul eax, eax, 0x21 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x21u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046f95d: add eax, 0xd8 */ {  u32 a = r_eax; u32 b = 0xd8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046f962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f963: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046f966: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046f967: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0046f96c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0046f96c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0046f96c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0046f96e: mov edx, dword ptr [ebp + edx*4 - 0x34] */ r_edx = R32((u32)(r_ebp+r_edx*4+0xffffffccu));
    /* 0046f972: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f973: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046f976: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046f977: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0046f97c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0046f97c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0046f97c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0046f97e: mov edx, dword ptr [ebp + edx*4 - 0x5c] */ r_edx = R32((u32)(r_ebp+r_edx*4+0xffffffa4u));
    /* 0046f982: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f983: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046f986: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f98c: mov ecx, dword ptr [ecx + eax*4 + 0x4c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4cu));
    /* 0046f990: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46f995u); f_005e9f50();
    /* 0046f995: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f997: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f999: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f99b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f99d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f99f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f9a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f9a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f9a5: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046f9a8: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f9ae: mov ecx, dword ptr [eax + edx*4 + 0x4c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 0046f9b2: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x46f9b7u); f_005d727e();
L_0046f9b7:; BB(0x0046f9b7);
    /* 0046f9b7: jmp 0x46f8ab */ goto L_0046f8ab;
L_0046f9bc:; BB(0x0046f9bc);
    /* 0046f9bc: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f9bf: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f9c5: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 0046f9c9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046f9cc: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046f9d2: mov eax, dword ptr [edx + eax*4 + 0x38] */ r_eax = R32((u32)(r_edx+r_eax*4+0x38u));
    /* 0046f9d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046f9d8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46f9dbu); call_ind(t); }
    /* 0046f9db: jmp 0x46f7f0 */ goto L_0046f7f0;
L_0046f9e0:; BB(0x0046f9e0);
    /* 0046f9e0: mov dword ptr [ebp - 0xd4], 0x12e */ W32((u32)(r_ebp+0xffffff2cu), 0x12eu);
    /* 0046f9ea: mov dword ptr [ebp - 0xd0], 0xa1 */ W32((u32)(r_ebp+0xffffff30u), 0xa1u);
    /* 0046f9f4: mov dword ptr [ebp - 0xcc], 0x193 */ W32((u32)(r_ebp+0xffffff34u), 0x193u);
    /* 0046f9fe: mov dword ptr [ebp - 0xc8], 0xa1 */ W32((u32)(r_ebp+0xffffff38u), 0xa1u);
    /* 0046fa08: mov dword ptr [ebp - 0xc4], 0x1ea */ W32((u32)(r_ebp+0xffffff3cu), 0x1eau);
    /* 0046fa12: mov dword ptr [ebp - 0xc0], 0xa1 */ W32((u32)(r_ebp+0xffffff40u), 0xa1u);
    /* 0046fa1c: mov dword ptr [ebp - 0xbc], 0x12e */ W32((u32)(r_ebp+0xffffff44u), 0x12eu);
    /* 0046fa26: mov dword ptr [ebp - 0xb8], 0x91 */ W32((u32)(r_ebp+0xffffff48u), 0x91u);
    /* 0046fa30: mov dword ptr [ebp - 0xb4], 0x193 */ W32((u32)(r_ebp+0xffffff4cu), 0x193u);
    /* 0046fa3a: mov dword ptr [ebp - 0xb0], 0x91 */ W32((u32)(r_ebp+0xffffff50u), 0x91u);
    /* 0046fa44: mov dword ptr [ebp - 0xac], 0x1ea */ W32((u32)(r_ebp+0xffffff54u), 0x1eau);
    /* 0046fa4e: mov dword ptr [ebp - 0xa8], 0x91 */ W32((u32)(r_ebp+0xffffff58u), 0x91u);
    /* 0046fa58: mov dword ptr [ebp - 0xa4], 0x12e */ W32((u32)(r_ebp+0xffffff5cu), 0x12eu);
    /* 0046fa62: mov dword ptr [ebp - 0xa0], 0x81 */ W32((u32)(r_ebp+0xffffff60u), 0x81u);
    /* 0046fa6c: mov dword ptr [ebp - 0x9c], 0x193 */ W32((u32)(r_ebp+0xffffff64u), 0x193u);
    /* 0046fa76: mov dword ptr [ebp - 0x98], 0x81 */ W32((u32)(r_ebp+0xffffff68u), 0x81u);
    /* 0046fa80: mov dword ptr [ebp - 0x94], 0x1ea */ W32((u32)(r_ebp+0xffffff6cu), 0x1eau);
    /* 0046fa8a: mov dword ptr [ebp - 0x90], 0x81 */ W32((u32)(r_ebp+0xffffff70u), 0x81u);
    /* 0046fa94: mov dword ptr [ebp - 0x8c], 0x12e */ W32((u32)(r_ebp+0xffffff74u), 0x12eu);
    /* 0046fa9e: mov dword ptr [ebp - 0x88], 0x71 */ W32((u32)(r_ebp+0xffffff78u), 0x71u);
    /* 0046faa8: mov dword ptr [ebp - 0x84], 0x193 */ W32((u32)(r_ebp+0xffffff7cu), 0x193u);
    /* 0046fab2: mov dword ptr [ebp - 0x80], 0x71 */ W32((u32)(r_ebp+0xffffff80u), 0x71u);
    /* 0046fab9: mov dword ptr [ebp - 0x7c], 0x1ea */ W32((u32)(r_ebp+0xffffff84u), 0x1eau);
    /* 0046fac0: mov dword ptr [ebp - 0x78], 0x71 */ W32((u32)(r_ebp+0xffffff88u), 0x71u);
    /* 0046fac7: mov dword ptr [ebp - 0x74], 0x12e */ W32((u32)(r_ebp+0xffffff8cu), 0x12eu);
    /* 0046face: mov dword ptr [ebp - 0x70], 0x61 */ W32((u32)(r_ebp+0xffffff90u), 0x61u);
    /* 0046fad5: mov dword ptr [ebp - 0x6c], 0x193 */ W32((u32)(r_ebp+0xffffff94u), 0x193u);
    /* 0046fadc: mov dword ptr [ebp - 0x68], 0x61 */ W32((u32)(r_ebp+0xffffff98u), 0x61u);
    /* 0046fae3: mov dword ptr [ebp - 0x64], 0x1ea */ W32((u32)(r_ebp+0xffffff9cu), 0x1eau);
    /* 0046faea: mov dword ptr [ebp - 0x60], 0x61 */ W32((u32)(r_ebp+0xffffffa0u), 0x61u);
    /* 0046faf1: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0046faf8: jmp 0x46fb03 */ goto L_0046fb03;
L_0046fafa:; BB(0x0046fafa);
    /* 0046fafa: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fafd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046fb00: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0046fb03:; BB(0x0046fb03);
    /* 0046fb03: cmp dword ptr [ebp - 0x38], 0xf */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fb07: jge 0x46fbb5 */ if ((fS==fO)) goto L_0046fbb5;
L_0046fb0d:; BB(0x0046fb0d);
    /* 0046fb0d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fb10: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fb16: cmp dword ptr [edx + ecx*4 + 0x9c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fb1e: jne 0x46fbb0 */ if (!fZ) goto L_0046fbb0;
L_0046fb24:; BB(0x0046fb24);
    /* 0046fb24: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb29: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46fb2eu); f_0048ab58();
    /* 0046fb2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fb31: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0046fb37: cmp dword ptr [ebp - 0xf0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fb3e: je 0x46fb53 */ if (fZ) goto L_0046fb53;
L_0046fb40:; BB(0x0046fb40);
    /* 0046fb40: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0046fb46: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x46fb4bu); f_005e8590();
    /* 0046fb4b: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 0046fb51: jmp 0x46fb5d */ goto L_0046fb5d;
L_0046fb53:; BB(0x0046fb53);
    /* 0046fb53: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
L_0046fb5d:; BB(0x0046fb5d);
    /* 0046fb5d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fb60: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fb66: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0046fb6c: mov dword ptr [ecx + eax*4 + 0x9c], edx */ W32((u32)(r_ecx+r_eax*4+0x9cu), r_edx);
    /* 0046fb73: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb77: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fb7a: mov ecx, dword ptr [ebp + eax*8 - 0xd0] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff30u));
    /* 0046fb81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb82: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fb85: mov eax, dword ptr [ebp + edx*8 - 0xd4] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff2cu));
    /* 0046fb8c: sub eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046fb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb90: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb92: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb94: push 0x6f6a54 */ { u32 v = 0x6f6a54u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb99: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb9b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fb9e: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fba4: mov ecx, dword ptr [edx + ecx*4 + 0x9c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x9cu));
    /* 0046fbab: call 0x5e86e0 */ r_esp -= 4; W32(r_esp, 0x46fbb0u); f_005e86e0();
L_0046fbb0:; BB(0x0046fbb0);
    /* 0046fbb0: jmp 0x46fafa */ goto L_0046fafa;
L_0046fbb5:; BB(0x0046fbb5);
    /* 0046fbb5: mov dword ptr [ebp - 0x14], 0x174 */ W32((u32)(r_ebp+0xffffffecu), 0x174u);
    /* 0046fbbc: mov dword ptr [ebp - 0x10], 0x153 */ W32((u32)(r_ebp+0xfffffff0u), 0x153u);
    /* 0046fbc3: mov dword ptr [ebp - 0xc], 0x131 */ W32((u32)(r_ebp+0xfffffff4u), 0x131u);
    /* 0046fbca: mov dword ptr [ebp - 8], 0x10f */ W32((u32)(r_ebp+0xfffffff8u), 0x10fu);
    /* 0046fbd1: mov dword ptr [ebp - 4], 0xee */ W32((u32)(r_ebp+0xfffffffcu), 0xeeu);
    /* 0046fbd8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0046fbdf: jmp 0x46fbea */ goto L_0046fbea;
L_0046fbe1:; BB(0x0046fbe1);
    /* 0046fbe1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fbe4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046fbe7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0046fbea:; BB(0x0046fbea);
    /* 0046fbea: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fbee: jge 0x46fc90 */ if ((fS==fO)) goto L_0046fc90;
L_0046fbf4:; BB(0x0046fbf4);
    /* 0046fbf4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fbf7: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fbfd: cmp dword ptr [edx + ecx*4 + 0xd8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fc05: jne 0x46fc8b */ if (!fZ) goto L_0046fc8b;
L_0046fc0b:; BB(0x0046fc0b);
    /* 0046fc0b: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fc10: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46fc15u); f_0048ab58();
    /* 0046fc15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fc18: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0046fc1e: cmp dword ptr [ebp - 0xf4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fc25: je 0x46fc3a */ if (fZ) goto L_0046fc3a;
L_0046fc27:; BB(0x0046fc27);
    /* 0046fc27: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0046fc2d: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x46fc32u); f_005e8590();
    /* 0046fc32: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 0046fc38: jmp 0x46fc44 */ goto L_0046fc44;
L_0046fc3a:; BB(0x0046fc3a);
    /* 0046fc3a: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
L_0046fc44:; BB(0x0046fc44);
    /* 0046fc44: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fc47: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fc4d: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0046fc53: mov dword ptr [ecx + eax*4 + 0xd8], edx */ W32((u32)(r_ecx+r_eax*4+0xd8u), r_edx);
    /* 0046fc5a: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fc5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fc5e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fc61: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0046fc65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046fc66: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fc6b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0046fc6d: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fc6f: push 0x6f6a58 */ { u32 v = 0x6f6a58u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fc74: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0046fc76: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fc79: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fc7f: mov ecx, dword ptr [eax + edx*4 + 0xd8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xd8u));
    /* 0046fc86: call 0x5e86e0 */ r_esp -= 4; W32(r_esp, 0x46fc8bu); f_005e86e0();
L_0046fc8b:; BB(0x0046fc8b);
    /* 0046fc8b: jmp 0x46fbe1 */ goto L_0046fbe1;
L_0046fc90:; BB(0x0046fc90);
    /* 0046fc90: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0046fc97: jmp 0x46fca2 */ goto L_0046fca2;
L_0046fc99:; BB(0x0046fc99);
    /* 0046fc99: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fc9c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fc9f: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_0046fca2:; BB(0x0046fca2);
    /* 0046fca2: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fca6: jge 0x46fd48 */ if ((fS==fO)) goto L_0046fd48;
L_0046fcac:; BB(0x0046fcac);
    /* 0046fcac: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fcaf: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fcb5: cmp dword ptr [eax + edx*4 + 0xec], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fcbd: jne 0x46fd43 */ if (!fZ) goto L_0046fd43;
L_0046fcc3:; BB(0x0046fcc3);
    /* 0046fcc3: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fcc8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46fccdu); f_0048ab58();
    /* 0046fccd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fcd0: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0046fcd6: cmp dword ptr [ebp - 0xf8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fcdd: je 0x46fcf2 */ if (fZ) goto L_0046fcf2;
L_0046fcdf:; BB(0x0046fcdf);
    /* 0046fcdf: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0046fce5: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x46fceau); f_005e8590();
    /* 0046fcea: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 0046fcf0: jmp 0x46fcfc */ goto L_0046fcfc;
L_0046fcf2:; BB(0x0046fcf2);
    /* 0046fcf2: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_0046fcfc:; BB(0x0046fcfc);
    /* 0046fcfc: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fcff: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fd05: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0046fd0b: mov dword ptr [edx + ecx*4 + 0xec], eax */ W32((u32)(r_edx+r_ecx*4+0xecu), r_eax);
    /* 0046fd12: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fd14: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fd16: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fd19: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0046fd1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046fd1e: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fd23: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0046fd25: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fd27: push 0x6f6a5c */ { u32 v = 0x6f6a5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046fd2c: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0046fd2e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fd31: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fd37: mov ecx, dword ptr [ecx + eax*4 + 0xec] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xecu));
    /* 0046fd3e: call 0x5e86e0 */ r_esp -= 4; W32(r_esp, 0x46fd43u); f_005e86e0();
L_0046fd43:; BB(0x0046fd43);
    /* 0046fd43: jmp 0x46fc99 */ goto L_0046fc99;
L_0046fd48:; BB(0x0046fd48);
    /* 0046fd48: mov dword ptr [ebp - 0x50], 0x9a */ W32((u32)(r_ebp+0xffffffb0u), 0x9au);
    /* 0046fd4f: mov dword ptr [ebp - 0x4c], 0x8a */ W32((u32)(r_ebp+0xffffffb4u), 0x8au);
    /* 0046fd56: mov dword ptr [ebp - 0x48], 0x7a */ W32((u32)(r_ebp+0xffffffb8u), 0x7au);
    /* 0046fd5d: mov dword ptr [ebp - 0x44], 0x6a */ W32((u32)(r_ebp+0xffffffbcu), 0x6au);
    /* 0046fd64: mov dword ptr [ebp - 0x40], 0x5a */ W32((u32)(r_ebp+0xffffffc0u), 0x5au);
    /* 0046fd6b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0046fd72: jmp 0x46fd7d */ goto L_0046fd7d;
L_0046fd74:; BB(0x0046fd74);
    /* 0046fd74: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fd77: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046fd7a: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_0046fd7d:; BB(0x0046fd7d);
    /* 0046fd7d: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fd81: jge 0x46fe33 */ if ((fS==fO)) goto L_0046fe33;
L_0046fd87:; BB(0x0046fd87);
    /* 0046fd87: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fd8a: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fd90: cmp dword ptr [ecx + eax*4 + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fd98: jne 0x46fe2e */ if (!fZ) goto L_0046fe2e;
L_0046fd9e:; BB(0x0046fd9e);
    /* 0046fd9e: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046fda0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46fda5u); f_0048ab58();
    /* 0046fda5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fda8: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0046fdae: cmp dword ptr [ebp - 0xfc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fdb5: je 0x46fdca */ if (fZ) goto L_0046fdca;
L_0046fdb7:; BB(0x0046fdb7);
    /* 0046fdb7: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0046fdbd: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x46fdc2u); f_005e9d30();
    /* 0046fdc2: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 0046fdc8: jmp 0x46fdd4 */ goto L_0046fdd4;
L_0046fdca:; BB(0x0046fdca);
    /* 0046fdca: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
L_0046fdd4:; BB(0x0046fdd4);
    /* 0046fdd4: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fdd7: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fddd: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 0046fde3: mov dword ptr [eax + edx*4 + 0x88], ecx */ W32((u32)(r_eax+r_edx*4+0x88u), r_ecx);
    /* 0046fdea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fdec: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fdef: mov eax, dword ptr [ebp + edx*4 - 0x50] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffb0u));
    /* 0046fdf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046fdf4: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046fdf6: push 0x1d4f4 */ { u32 v = 0x1d4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fdfb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fdfe: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fe04: mov ecx, dword ptr [edx + ecx*4 + 0x88] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x88u));
    /* 0046fe0b: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46fe10u); f_005e9f50();
    /* 0046fe10: mov eax, 4 */ r_eax = 0x4u;
    /* 0046fe15: sub eax, dword ptr [ebp - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046fe18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe19: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046fe1c: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fe22: mov ecx, dword ptr [edx + ecx*4 + 0x88] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x88u));
    /* 0046fe29: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x46fe2eu); f_005ea1cf();
L_0046fe2e:; BB(0x0046fe2e);
    /* 0046fe2e: jmp 0x46fd74 */ goto L_0046fd74;
L_0046fe33:; BB(0x0046fe33);
    /* 0046fe33: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fe39: cmp dword ptr [eax + 0x100], 0 */ {  u32 a = R32((u32)(r_eax+0x100u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fe40: jne 0x46feb4 */ if (!fZ) goto L_0046feb4;
L_0046fe42:; BB(0x0046fe42);
    /* 0046fe42: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe47: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46fe4cu); f_0048ab58();
    /* 0046fe4c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fe4f: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 0046fe55: cmp dword ptr [ebp - 0x100], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fe5c: je 0x46fe71 */ if (fZ) goto L_0046fe71;
L_0046fe5e:; BB(0x0046fe5e);
    /* 0046fe5e: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 0046fe64: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x46fe69u); f_005e8590();
    /* 0046fe69: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 0046fe6f: jmp 0x46fe7b */ goto L_0046fe7b;
L_0046fe71:; BB(0x0046fe71);
    /* 0046fe71: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
L_0046fe7b:; BB(0x0046fe7b);
    /* 0046fe7b: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fe81: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0046fe87: mov dword ptr [ecx + 0x100], edx */ W32((u32)(r_ecx+0x100u), r_edx);
    /* 0046fe8d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe8f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe91: push 0x19e */ { u32 v = 0x19eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe96: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe98: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe9a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe9c: push 0x6f6a60 */ { u32 v = 0x6f6a60u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fea1: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0046fea3: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fea9: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0046feaf: call 0x5e86e0 */ r_esp -= 4; W32(r_esp, 0x46feb4u); f_005e86e0();
L_0046feb4:; BB(0x0046feb4);
    /* 0046feb4: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046feba: mov ecx, dword ptr [ecx + 0x100] */ r_ecx = R32((u32)(r_ecx+0x100u));
    /* 0046fec0: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fec6: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0046fecc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046fece: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x46fed1u); call_ind(t); }
    /* 0046fed1: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046fed7: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fede: jne 0x46ff55 */ if (!fZ) goto L_0046ff55;
L_0046fee0:; BB(0x0046fee0);
    /* 0046fee0: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fee5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46feeau); f_0048ab58();
    /* 0046feea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046feed: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 0046fef3: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fefa: je 0x46ff0f */ if (fZ) goto L_0046ff0f;
L_0046fefc:; BB(0x0046fefc);
    /* 0046fefc: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0046ff02: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x46ff07u); f_005e8590();
    /* 0046ff07: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 0046ff0d: jmp 0x46ff19 */ goto L_0046ff19;
L_0046ff0f:; BB(0x0046ff0f);
    /* 0046ff0f: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
L_0046ff19:; BB(0x0046ff19);
    /* 0046ff19: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046ff1f: mov edx, dword ptr [ebp - 0x144] */ r_edx = R32((u32)(r_ebp+0xfffffebcu));
    /* 0046ff25: mov dword ptr [ecx + 0x104], edx */ W32((u32)(r_ecx+0x104u), r_edx);
    /* 0046ff2b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ff2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ff2f: push 0x19e */ { u32 v = 0x19eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ff34: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ff39: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ff3b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ff3d: push 0x6f6a64 */ { u32 v = 0x6f6a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ff42: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0046ff44: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046ff4a: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 0046ff50: call 0x5e86e0 */ r_esp -= 4; W32(r_esp, 0x46ff55u); f_005e86e0();
L_0046ff55:; BB(0x0046ff55);
    /* 0046ff55: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046ff5b: cmp dword ptr [ecx + 0x108], 0 */ {  u32 a = R32((u32)(r_ecx+0x108u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ff62: jne 0x46ffe1 */ if (!fZ) goto L_0046ffe1;
L_0046ff64:; BB(0x0046ff64);
    /* 0046ff64: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ff66: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46ff6bu); f_0048ab58();
    /* 0046ff6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ff6e: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 0046ff74: cmp dword ptr [ebp - 0x108], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ff7b: je 0x46ff90 */ if (fZ) goto L_0046ff90;
L_0046ff7d:; BB(0x0046ff7d);
    /* 0046ff7d: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0046ff83: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x46ff88u); f_005e3fb0();
    /* 0046ff88: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 0046ff8e: jmp 0x46ff9a */ goto L_0046ff9a;
L_0046ff90:; BB(0x0046ff90);
    /* 0046ff90: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
L_0046ff9a:; BB(0x0046ff9a);
    /* 0046ff9a: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046ffa0: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0046ffa6: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 0046ffac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ffae: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ffb3: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ffb8: push 0x1d4f0 */ { u32 v = 0x1d4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ffbd: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046ffc3: mov ecx, dword ptr [ecx + 0x108] */ r_ecx = R32((u32)(r_ecx+0x108u));
    /* 0046ffc9: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x46ffceu); f_005e9f50();
    /* 0046ffce: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046ffd4: mov eax, dword ptr [edx + 0x108] */ r_eax = R32((u32)(r_edx+0x108u));
    /* 0046ffda: mov dword ptr [eax + 0x6c], 0x14 */ W32((u32)(r_eax+0x6cu), 0x14u);
L_0046ffe1:; BB(0x0046ffe1);
    /* 0046ffe1: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0046ffe7: cmp dword ptr [ecx + 0x10c], 0 */ {  u32 a = R32((u32)(r_ecx+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ffee: jne 0x470054 */ if (!fZ) goto L_00470054;
L_0046fff0:; BB(0x0046fff0);
    /* 0046fff0: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fff2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x46fff7u); f_0048ab58();
    /* 0046fff7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fffa: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00470000: cmp dword ptr [ebp - 0x10c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470007: je 0x47001c */ if (fZ) goto L_0047001c;
L_00470009:; BB(0x00470009);
    /* 00470009: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0047000f: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x470014u); f_005e3fb0();
    /* 00470014: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 0047001a: jmp 0x470026 */ goto L_00470026;
L_0047001c:; BB(0x0047001c);
    /* 0047001c: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_00470026:; BB(0x00470026);
    /* 00470026: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0047002c: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 00470032: mov dword ptr [edx + 0x10c], eax */ W32((u32)(r_edx+0x10cu), r_eax);
    /* 00470038: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047003a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047003c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047003e: push 0x1d4fa */ { u32 v = 0x1d4fau; r_esp -= 4; W32(r_esp, v); }
    /* 00470043: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00470049: mov ecx, dword ptr [ecx + 0x10c] */ r_ecx = R32((u32)(r_ecx+0x10cu));
    /* 0047004f: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x470054u); f_005e9f50();
L_00470054:; BB(0x00470054);
    /* 00470054: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0047005a: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00470060: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 00470067: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0047006d: mov ecx, dword ptr [ecx + 0x10c] */ r_ecx = R32((u32)(r_ecx+0x10cu));
    /* 00470073: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00470079: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0047007f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470081: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x470084u); call_ind(t); }
    /* 00470084: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00470086: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x47008bu); f_0048ab58();
    /* 0047008b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047008e: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 00470094: cmp dword ptr [ebp - 0x110], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047009b: je 0x4700b2 */ if (fZ) goto L_004700b2;
L_0047009d:; BB(0x0047009d);
    /* 0047009d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047009f: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 004700a5: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x4700aau); f_005d7698();
    /* 004700aa: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 004700b0: jmp 0x4700bc */ goto L_004700bc;
L_004700b2:; BB(0x004700b2);
    /* 004700b2: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
L_004700bc:; BB(0x004700bc);
    /* 004700bc: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 004700c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004700c3: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 004700c9: mov ecx, dword ptr [ecx + 0x10c] */ r_ecx = R32((u32)(r_ecx+0x10cu));
    /* 004700cf: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x4700d4u); f_005e4060();
    /* 004700d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004700d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004700d7: ret  */ FN_RET(0x0046f4b5); r_esp += 4; return;
}

void f_004700d8(void) /* FUN_004700d8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004700d8);
    /* 004700d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004700d9: mov ebp, esp */ r_ebp = r_esp;
    /* 004700db: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004700de: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004700e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004700e8: jmp 0x4700f3 */ goto L_004700f3;
L_004700ea:; BB(0x004700ea);
    /* 004700ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004700ed: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004700f0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004700f3:; BB(0x004700f3);
    /* 004700f3: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004700f7: jge 0x470159 */ if ((fS==fO)) goto L_00470159;
L_004700f9:; BB(0x004700f9);
    /* 004700f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004700fc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004700ff: cmp dword ptr [edx + ecx*4 + 0x150], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x150u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470107: je 0x470128 */ if (fZ) goto L_00470128;
L_00470109:; BB(0x00470109);
    /* 00470109: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047010c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047010f: mov ecx, dword ptr [ecx + eax*4 + 0x150] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x150u));
    /* 00470116: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00470119: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047011c: mov edx, dword ptr [eax + edx*4 + 0x150] */ r_edx = R32((u32)(r_eax+r_edx*4+0x150u));
    /* 00470123: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470125: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x470128u); call_ind(t); }
L_00470128:; BB(0x00470128);
    /* 00470128: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047012b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047012e: cmp dword ptr [edx + ecx*4 + 0x164], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470136: je 0x470157 */ if (fZ) goto L_00470157;
L_00470138:; BB(0x00470138);
    /* 00470138: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047013b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047013e: mov ecx, dword ptr [ecx + eax*4 + 0x164] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x164u));
    /* 00470145: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00470148: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047014b: mov edx, dword ptr [eax + edx*4 + 0x164] */ r_edx = R32((u32)(r_eax+r_edx*4+0x164u));
    /* 00470152: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470154: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x470157u); call_ind(t); }
L_00470157:; BB(0x00470157);
    /* 00470157: jmp 0x4700ea */ goto L_004700ea;
L_00470159:; BB(0x00470159);
    /* 00470159: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047015b: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00470161: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00470164: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 0047016a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0047016d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047016f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x470172u); call_ind(t); }
    /* 00470172: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00470174: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 00470179: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047017c: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00470182: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00470185: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470187: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x47018au); call_ind(t); }
    /* 0047018a: mov esp, ebp */ r_esp = r_ebp;
    /* 0047018c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047018d: ret  */ FN_RET(0x004700d8); r_esp += 4; return;
}

void f_0047018e(void) /* FUN_0047018e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047018e);
    /* 0047018e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047018f: mov ebp, esp */ r_ebp = r_esp;
    /* 00470191: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470192: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00470195: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00470198: mov eax, dword ptr [eax + 0x1ac] */ r_eax = R32((u32)(r_eax+0x1acu));
    /* 0047019e: mov esp, ebp */ r_esp = r_ebp;
    /* 004701a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004701a1: ret  */ FN_RET(0x0047018e); r_esp += 4; return;
}

void f_004701a2(void) /* FUN_004701a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004701a2);
    /* 004701a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004701a3: mov ebp, esp */ r_ebp = r_esp;
    /* 004701a5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004701a8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004701ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004701b2: jmp 0x4701bd */ goto L_004701bd;
L_004701b4:; BB(0x004701b4);
    /* 004701b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004701b7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004701ba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004701bd:; BB(0x004701bd);
    /* 004701bd: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004701c1: jge 0x4701f7 */ if ((fS==fO)) goto L_004701f7;
L_004701c3:; BB(0x004701c3);
    /* 004701c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004701c6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004701c9: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 004701cd: call 0x5d53bd */ r_esp -= 4; W32(r_esp, 0x4701d2u); f_005d53bd();
    /* 004701d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004701d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004701d7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004701da: mov ecx, dword ptr [ecx + eax*4 + 0x110] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 004701e1: call 0x46d360 */ r_esp -= 4; W32(r_esp, 0x4701e6u); f_0046d360();
    /* 004701e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004701e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004701ec: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 004701f0: call 0x4727b3 */ r_esp -= 4; W32(r_esp, 0x4701f5u); f_004727b3();
    /* 004701f5: jmp 0x4701b4 */ goto L_004701b4;
L_004701f7:; BB(0x004701f7);
    /* 004701f7: mov esp, ebp */ r_esp = r_ebp;
    /* 004701f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004701fa: ret  */ FN_RET(0x004701a2); r_esp += 4; return;
}

void f_004701fb(void) /* FUN_004701fb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004701fb);
    /* 004701fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004701fc: mov ebp, esp */ r_ebp = r_esp;
    /* 004701fe: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470201: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00470202: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00470205: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0047020c: mov dword ptr [ebp - 0x2c], 0xffffffff */ W32((u32)(r_ebp+0xffffffd4u), 0xffffffffu);
    /* 00470213: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 0047021a: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 00470221: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 00470228: mov dword ptr [ebp - 8], 7 */ W32((u32)(r_ebp+0xfffffff8u), 0x7u);
    /* 0047022f: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00470236: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 0047023d: mov dword ptr [ebp - 0x44], 4 */ W32((u32)(r_ebp+0xffffffbcu), 0x4u);
    /* 00470244: mov dword ptr [ebp - 0x40], 5 */ W32((u32)(r_ebp+0xffffffc0u), 0x5u);
    /* 0047024b: mov dword ptr [ebp - 0x3c], 5 */ W32((u32)(r_ebp+0xffffffc4u), 0x5u);
    /* 00470252: mov dword ptr [ebp - 0x38], 0xd */ W32((u32)(r_ebp+0xffffffc8u), 0xdu);
L_00470259:; BB(0x00470259);
    /* 00470259: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047025d: jge 0x4708bd */ if ((fS==fO)) goto L_004708bd;
L_00470263:; BB(0x00470263);
    /* 00470263: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00470265: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x47026au); f_0060ee31();
    /* 0047026a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047026d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00470270: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470273: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470276: cmp dword ptr [ecx + eax*4 + 0x110], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047027e: je 0x4708b8 */ if (fZ) goto L_004708b8;
L_00470284:; BB(0x00470284);
    /* 00470284: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470287: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047028a: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00470291: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470298: jne 0x4708b8 */ if (!fZ) goto L_004708b8;
L_0047029e:; BB(0x0047029e);
    /* 0047029e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004702a1: mov eax, dword ptr [ebp + edx*4 - 0x48] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffb8u));
    /* 004702a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004702a6: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4702abu); f_0060ee31();
    /* 004702ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004702ae: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004702b1: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 004702b5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004702b7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004702ba: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004702bd: mov eax, dword ptr [ecx + eax*4 + 0x110] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 004702c4: mov dword ptr [eax + 0x94], edx */ W32((u32)(r_eax+0x94u), r_edx);
    /* 004702ca: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004702cd: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004702d0: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004702d7: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004702dd: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 004702e0: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004702e3: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004702e6: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 004702e9: cmp dword ptr [ebp - 0x50], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004702ed: ja 0x4705bc */ if ((!fC&&!fZ)) goto L_004705bc;
L_004702f3:; BB(0x004702f3);
    /* 004702f3: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004702f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004702f8: mov al, byte ptr [ecx + 0x470a90] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x470a90u))) & 0xffu);
    /* 004702fe: jmp dword ptr [eax*4 + 0x470a78] */ { u32 t = R32((u32)(r_eax*4+0x470a78u)); switch (t) { case 0x470305u: goto L_00470305; case 0x470321u: goto L_00470321; case 0x470393u: goto L_00470393; case 0x47044du: goto L_0047044d; case 0x470507u: goto L_00470507; case 0x4705bcu: goto L_004705bc; default: UNSUP(0x004702fe, "jump table entry is not a known target"); } }
L_00470305:; BB(0x00470305);
    /* 00470305: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470308: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047030b: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00470312: mov dword ptr [ecx + 0x9c], 2 */ W32((u32)(r_ecx+0x9cu), 0x2u);
    /* 0047031c: jmp 0x4705bc */ goto L_004705bc;
L_00470321:; BB(0x00470321);
    /* 00470321: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00470323: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x470328u); f_0060ee31();
    /* 00470328: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047032b: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047032e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470331: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470334: mov edx, dword ptr [ecx + edx*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_edx*4+0x110u));
    /* 0047033b: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00470341: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00470343: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x470348u); f_0060ee31();
    /* 00470348: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047034b: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047034e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470351: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470354: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0047035b: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 00470361: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470364: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470367: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047036e: cmp dword ptr [ecx + 0xa4], 3 */ {  u32 a = R32((u32)(r_ecx+0xa4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470375: jne 0x47038e */ if (!fZ) goto L_0047038e;
L_00470377:; BB(0x00470377);
    /* 00470377: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047037a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047037d: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00470384: mov dword ptr [ecx + 0xa8], 2 */ W32((u32)(r_ecx+0xa8u), 0x2u);
L_0047038e:; BB(0x0047038e);
    /* 0047038e: jmp 0x4705bc */ goto L_004705bc;
L_00470393:; BB(0x00470393);
    /* 00470393: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470396: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470399: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004703a0: mov esi, dword ptr [ecx + 0x94] */ r_esi = R32((u32)(r_ecx+0x94u));
    /* 004703a6: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004703a9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004703ab: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4703b0u); f_0060ee31();
    /* 004703b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004703b3: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004703b5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004703b8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004703bb: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004703c2: mov dword ptr [ecx + 0x9c], esi */ W32((u32)(r_ecx+0x9cu), r_esi);
    /* 004703c8: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004703cb: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004703ce: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004703d5: cmp dword ptr [ecx + 0x9c], 2 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004703dc: je 0x470448 */ if (fZ) goto L_00470448;
L_004703de:; BB(0x004703de);
    /* 004703de: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004703e1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004703e4: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004703eb: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004703f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004703f2: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4703f7u); f_0060ee31();
    /* 004703f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004703fa: mov esi, eax */ r_esi = r_eax;
    /* 004703fc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004703fe: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x470403u); f_0060ee31();
    /* 00470403: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470406: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00470408: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047040b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047040e: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00470415: mov dword ptr [edx + 0xa4], esi */ W32((u32)(r_edx+0xa4u), r_esi);
    /* 0047041b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047041e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470421: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00470428: cmp dword ptr [edx + 0xa4], 2 */ {  u32 a = R32((u32)(r_edx+0xa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047042f: jge 0x470448 */ if ((fS==fO)) goto L_00470448;
L_00470431:; BB(0x00470431);
    /* 00470431: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470434: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470437: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0047043e: mov dword ptr [edx + 0xa4], 2 */ W32((u32)(r_edx+0xa4u), 0x2u);
L_00470448:; BB(0x00470448);
    /* 00470448: jmp 0x4705bc */ goto L_004705bc;
L_0047044d:; BB(0x0047044d);
    /* 0047044d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470450: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470453: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0047045a: mov esi, dword ptr [edx + 0x94] */ r_esi = R32((u32)(r_edx+0x94u));
    /* 00470460: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00470463: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00470465: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x47046au); f_0060ee31();
    /* 0047046a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047046d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0047046f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470472: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470475: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0047047c: mov dword ptr [edx + 0x9c], esi */ W32((u32)(r_edx+0x9cu), r_esi);
    /* 00470482: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470485: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470488: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0047048f: cmp dword ptr [edx + 0x9c], 2 */ {  u32 a = R32((u32)(r_edx+0x9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470496: je 0x470502 */ if (fZ) goto L_00470502;
L_00470498:; BB(0x00470498);
    /* 00470498: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047049b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047049e: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 004704a5: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004704ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004704ac: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4704b1u); f_0060ee31();
    /* 004704b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004704b4: mov esi, eax */ r_esi = r_eax;
    /* 004704b6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004704b8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4704bdu); f_0060ee31();
    /* 004704bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004704c0: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004704c2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004704c5: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004704c8: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004704cf: mov dword ptr [eax + 0xa4], esi */ W32((u32)(r_eax+0xa4u), r_esi);
    /* 004704d5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004704d8: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004704db: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004704e2: cmp dword ptr [eax + 0xa4], 2 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004704e9: jge 0x470502 */ if ((fS==fO)) goto L_00470502;
L_004704eb:; BB(0x004704eb);
    /* 004704eb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004704ee: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004704f1: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004704f8: mov dword ptr [eax + 0xa4], 2 */ W32((u32)(r_eax+0xa4u), 0x2u);
L_00470502:; BB(0x00470502);
    /* 00470502: jmp 0x4705bc */ goto L_004705bc;
L_00470507:; BB(0x00470507);
    /* 00470507: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047050a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047050d: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00470514: mov esi, dword ptr [eax + 0x94] */ r_esi = R32((u32)(r_eax+0x94u));
    /* 0047051a: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0047051d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047051f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x470524u); f_0060ee31();
    /* 00470524: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470527: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00470529: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047052c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047052f: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00470536: mov dword ptr [eax + 0x9c], esi */ W32((u32)(r_eax+0x9cu), r_esi);
    /* 0047053c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047053f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470542: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00470549: cmp dword ptr [eax + 0x9c], 2 */ {  u32 a = R32((u32)(r_eax+0x9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470550: je 0x4705bc */ if (fZ) goto L_004705bc;
L_00470552:; BB(0x00470552);
    /* 00470552: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470555: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470558: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0047055f: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00470565: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470566: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x47056bu); f_0060ee31();
    /* 0047056b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047056e: mov esi, eax */ r_esi = r_eax;
    /* 00470570: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00470572: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x470577u); f_0060ee31();
    /* 00470577: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047057a: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0047057c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047057f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470582: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00470589: mov dword ptr [ecx + 0xa4], esi */ W32((u32)(r_ecx+0xa4u), r_esi);
    /* 0047058f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470592: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470595: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047059c: cmp dword ptr [ecx + 0xa4], 2 */ {  u32 a = R32((u32)(r_ecx+0xa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004705a3: jge 0x4705bc */ if ((fS==fO)) goto L_004705bc;
L_004705a5:; BB(0x004705a5);
    /* 004705a5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004705a8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004705ab: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004705b2: mov dword ptr [ecx + 0xa4], 2 */ W32((u32)(r_ecx+0xa4u), 0x2u);
L_004705bc:; BB(0x004705bc);
    /* 004705bc: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004705bf: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004705c2: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004705c9: cmp dword ptr [ecx + 0x9c], 2 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004705d0: jne 0x470600 */ if (!fZ) goto L_00470600;
L_004705d2:; BB(0x004705d2);
    /* 004705d2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004705d5: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004705d8: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004705df: mov dword ptr [ecx + 0xa4], 3 */ W32((u32)(r_ecx+0xa4u), 0x3u);
    /* 004705e9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004705ec: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004705ef: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004705f6: mov dword ptr [ecx + 0xa8], 2 */ W32((u32)(r_ecx+0xa8u), 0x2u);
L_00470600:; BB(0x00470600);
    /* 00470600: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00470607: jmp 0x470612 */ goto L_00470612;
L_00470609:; BB(0x00470609);
    /* 00470609: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047060c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047060f: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_00470612:; BB(0x00470612);
    /* 00470612: cmp dword ptr [ebp - 0x30], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470616: jge 0x4708af */ if ((fS==fO)) goto L_004708af;
L_0047061c:; BB(0x0047061c);
    /* 0047061c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047061f: cmp eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470622: jne 0x470626 */ if (!fZ) goto L_00470626;
L_00470624:; BB(0x00470624);
    /* 00470624: jmp 0x470609 */ goto L_00470609;
L_00470626:; BB(0x00470626);
    /* 00470626: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0047062d: jmp 0x470638 */ goto L_00470638;
L_0047062f:; BB(0x0047062f);
    /* 0047062f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470632: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00470635: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00470638:; BB(0x00470638);
    /* 00470638: cmp dword ptr [ebp - 0x34], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047063c: jge 0x4708aa */ if ((fS==fO)) goto L_004708aa;
L_00470642:; BB(0x00470642);
    /* 00470642: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470645: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470648: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047064f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470652: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470655: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047065c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0047065f: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00470662: mov ecx, dword ptr [ecx + eax*8 + 0x94] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x94u));
    /* 00470669: cmp ecx, dword ptr [edx + esi*8 + 0x94] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_esi*8+0x94u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470670: jle 0x4708a5 */ if ((fZ||fS!=fO)) goto L_004708a5;
L_00470676:; BB(0x00470676);
    /* 00470676: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470679: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047067c: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00470683: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470686: cmp dword ptr [ecx + edx*8 + 0x98], 1 */ {  u32 a = R32((u32)(r_ecx+r_edx*8+0x98u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047068e: jne 0x4708a5 */ if (!fZ) goto L_004708a5;
L_00470694:; BB(0x00470694);
    /* 00470694: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470697: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047069a: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 004706a1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004706a4: cmp dword ptr [edx + eax*8 + 0x98], 1 */ {  u32 a = R32((u32)(r_edx+r_eax*8+0x98u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004706ac: jne 0x4708a5 */ if (!fZ) goto L_004708a5;
L_004706b2:; BB(0x004706b2);
    /* 004706b2: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004706b6: jne 0x4706bd */ if (!fZ) goto L_004706bd;
L_004706b8:; BB(0x004706b8);
    /* 004706b8: jmp 0x4708a5 */ goto L_004708a5;
L_004706bd:; BB(0x004706bd);
    /* 004706bd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004706c0: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004706c3: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004706ca: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004706cd: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004706d0: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004706d7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004706da: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004706dd: mov eax, dword ptr [eax + edx*8 + 0x9c] */ r_eax = R32((u32)(r_eax+r_edx*8+0x9cu));
    /* 004706e4: cmp eax, dword ptr [ecx + esi*8 + 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi*8+0x9cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004706eb: jge 0x470790 */ if ((fS==fO)) goto L_00470790;
L_004706f1:; BB(0x004706f1);
    /* 004706f1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004706f4: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004706f7: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004706fe: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470701: cmp dword ptr [eax + ecx*8 + 0xa0], 1 */ {  u32 a = R32((u32)(r_eax+r_ecx*8+0xa0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470709: jne 0x470790 */ if (!fZ) goto L_00470790;
L_0047070f:; BB(0x0047070f);
    /* 0047070f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470712: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470715: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047071c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0047071f: cmp dword ptr [ecx + edx*8 + 0xa0], 1 */ {  u32 a = R32((u32)(r_ecx+r_edx*8+0xa0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470727: jne 0x470790 */ if (!fZ) goto L_00470790;
L_00470729:; BB(0x00470729);
    /* 00470729: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047072c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047072f: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00470736: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00470739: mov ecx, dword ptr [edx + eax*8 + 0x9c] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x9cu));
    /* 00470740: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00470743: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470746: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470749: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00470750: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470753: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470756: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047075d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00470760: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00470763: mov ecx, dword ptr [ecx + esi*8 + 0x9c] */ r_ecx = R32((u32)(r_ecx+r_esi*8+0x9cu));
    /* 0047076a: mov dword ptr [edx + eax*8 + 0x9c], ecx */ W32((u32)(r_edx+r_eax*8+0x9cu), r_ecx);
    /* 00470771: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470774: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470777: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047077e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470781: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00470784: mov dword ptr [ecx + edx*8 + 0x9c], eax */ W32((u32)(r_ecx+r_edx*8+0x9cu), r_eax);
    /* 0047078b: jmp 0x4708a5 */ goto L_004708a5;
L_00470790:; BB(0x00470790);
    /* 00470790: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470793: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470796: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0047079d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004707a0: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004707a3: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004707aa: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004707ad: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004707b0: mov eax, dword ptr [eax + edx*8 + 0x9c] */ r_eax = R32((u32)(r_eax+r_edx*8+0x9cu));
    /* 004707b7: cmp eax, dword ptr [ecx + esi*8 + 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi*8+0x9cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004707be: jne 0x4708a5 */ if (!fZ) goto L_004708a5;
L_004707c4:; BB(0x004707c4);
    /* 004707c4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004707c7: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004707ca: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004707d1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004707d4: cmp dword ptr [eax + ecx*8 + 0xa0], 1 */ {  u32 a = R32((u32)(r_eax+r_ecx*8+0xa0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004707dc: jne 0x4708a5 */ if (!fZ) goto L_004708a5;
L_004707e2:; BB(0x004707e2);
    /* 004707e2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004707e5: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004707e8: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004707ef: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004707f2: cmp dword ptr [ecx + edx*8 + 0xa0], 1 */ {  u32 a = R32((u32)(r_ecx+r_edx*8+0xa0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004707fa: jne 0x4708a5 */ if (!fZ) goto L_004708a5;
L_00470800:; BB(0x00470800);
    /* 00470800: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470803: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470806: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0047080d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00470810: cmp dword ptr [edx + eax*8 + 0x9c], 2 */ {  u32 a = R32((u32)(r_edx+r_eax*8+0x9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470818: jle 0x4708a5 */ if ((fZ||fS!=fO)) goto L_004708a5;
L_0047081e:; BB(0x0047081e);
    /* 0047081e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470821: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470824: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0047082b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0047082e: cmp dword ptr [eax + ecx*8 + 0x9c], 3 */ {  u32 a = R32((u32)(r_eax+r_ecx*8+0x9cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470836: jne 0x47086b */ if (!fZ) goto L_0047086b;
L_00470838:; BB(0x00470838);
    /* 00470838: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047083b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047083e: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00470845: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470848: mov eax, dword ptr [ecx + edx*8 + 0x9c] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x9cu));
    /* 0047084f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00470852: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470855: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470858: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0047085f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470862: mov dword ptr [ecx + edx*8 + 0x9c], eax */ W32((u32)(r_ecx+r_edx*8+0x9cu), r_eax);
    /* 00470869: jmp 0x4708a5 */ goto L_004708a5;
L_0047086b:; BB(0x0047086b);
    /* 0047086b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047086e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470871: mov esi, dword ptr [ecx + eax*4 + 0x110] */ r_esi = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00470878: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047087a: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x47087fu); f_0060ee31();
    /* 0047087f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470882: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470885: mov ecx, dword ptr [esi + edx*8 + 0x9c] */ r_ecx = R32((u32)(r_esi+r_edx*8+0x9cu));
    /* 0047088c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047088e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470891: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470894: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047089b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0047089e: mov dword ptr [edx + eax*8 + 0x9c], ecx */ W32((u32)(r_edx+r_eax*8+0x9cu), r_ecx);
L_004708a5:; BB(0x004708a5);
    /* 004708a5: jmp 0x47062f */ goto L_0047062f;
L_004708aa:; BB(0x004708aa);
    /* 004708aa: jmp 0x470609 */ goto L_00470609;
L_004708af:; BB(0x004708af);
    /* 004708af: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004708b2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004708b5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_004708b8:; BB(0x004708b8);
    /* 004708b8: jmp 0x470259 */ goto L_00470259;
L_004708bd:; BB(0x004708bd);
    /* 004708bd: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004708c4: jmp 0x4708cf */ goto L_004708cf;
L_004708c6:; BB(0x004708c6);
    /* 004708c6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004708c9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004708cc: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_004708cf:; BB(0x004708cf);
    /* 004708cf: cmp dword ptr [ebp - 0x34], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004708d3: jge 0x47097f */ if ((fS==fO)) goto L_0047097f;
L_004708d9:; BB(0x004708d9);
    /* 004708d9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004708e0: jmp 0x4708eb */ goto L_004708eb;
L_004708e2:; BB(0x004708e2);
    /* 004708e2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004708e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004708e8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_004708eb:; BB(0x004708eb);
    /* 004708eb: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004708ef: jge 0x47097a */ if ((fS==fO)) goto L_0047097a;
L_004708f5:; BB(0x004708f5);
    /* 004708f5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004708f8: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004708fb: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00470902: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470905: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470908: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0047090f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470912: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470915: mov eax, dword ptr [eax + edx*8 + 0x94] */ r_eax = R32((u32)(r_eax+r_edx*8+0x94u));
    /* 0047091c: cmp eax, dword ptr [ecx + esi*8 + 0x98] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi*8+0x98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470923: jne 0x470975 */ if (!fZ) goto L_00470975;
L_00470925:; BB(0x00470925);
    /* 00470925: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470928: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047092b: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00470932: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470935: cmp dword ptr [eax + ecx*8 + 0x94], 1 */ {  u32 a = R32((u32)(r_eax+r_ecx*8+0x94u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047093d: je 0x470975 */ if (fZ) goto L_00470975;
L_0047093f:; BB(0x0047093f);
    /* 0047093f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470942: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470945: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047094c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047094f: mov dword ptr [ecx + edx*8 + 0x94], 1 */ W32((u32)(r_ecx+r_edx*8+0x94u), 0x1u);
    /* 0047095a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0047095d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470960: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00470967: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047096a: mov dword ptr [edx + eax*8 + 0x98], 1 */ W32((u32)(r_edx+r_eax*8+0x98u), 0x1u);
L_00470975:; BB(0x00470975);
    /* 00470975: jmp 0x4708e2 */ goto L_004708e2;
L_0047097a:; BB(0x0047097a);
    /* 0047097a: jmp 0x4708c6 */ goto L_004708c6;
L_0047097f:; BB(0x0047097f);
    /* 0047097f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00470986: jmp 0x470991 */ goto L_00470991;
L_00470988:; BB(0x00470988);
    /* 00470988: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0047098b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047098e: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00470991:; BB(0x00470991);
    /* 00470991: cmp dword ptr [ebp - 0x34], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470995: jge 0x470a73 */ if ((fS==fO)) goto L_00470a73;
L_0047099b:; BB(0x0047099b);
    /* 0047099b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004709a2: jmp 0x4709ad */ goto L_004709ad;
L_004709a4:; BB(0x004709a4);
    /* 004709a4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004709a7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004709aa: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_004709ad:; BB(0x004709ad);
    /* 004709ad: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004709b1: jge 0x470a6e */ if ((fS==fO)) goto L_00470a6e;
L_004709b7:; BB(0x004709b7);
    /* 004709b7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004709ba: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004709bd: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 004709c4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004709c7: mov ecx, dword ptr [edx + eax*8 + 0x98] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x98u));
    /* 004709ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004709cf: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004709d2: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004709d5: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004709dc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004709df: mov eax, dword ptr [ecx + edx*8 + 0x94] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x94u));
    /* 004709e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004709e7: push 0x683c20 */ { u32 v = 0x683c20u; r_esp -= 4; W32(r_esp, v); }
    /* 004709ec: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 004709ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004709f0: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4709f6u); call_ind(t); }
    /* 004709f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004709f9: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004709fc: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004709ff: add edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00470a02: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470a05: cmp dword ptr [eax + edx*4 + 0x9c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470a0d: je 0x470a69 */ if (fZ) goto L_00470a69;
L_00470a0f:; BB(0x00470a0f);
    /* 00470a0f: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 00470a12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470a13: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470a16: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00470a19: add edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00470a1c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470a1f: mov ecx, dword ptr [eax + edx*4 + 0x9c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x9cu));
    /* 00470a26: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470a29: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00470a2c: add edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00470a2f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470a32: mov edx, dword ptr [eax + edx*4 + 0x9c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x9cu));
    /* 00470a39: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470a3b: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x470a3eu); call_ind(t); }
    /* 00470a3e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00470a41: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00470a44: add ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00470a47: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470a4a: mov ecx, dword ptr [edx + ecx*4 + 0x9c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x9cu));
    /* 00470a51: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00470a54: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00470a57: add eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00470a5a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00470a5d: mov eax, dword ptr [edx + eax*4 + 0x9c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x9cu));
    /* 00470a64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470a66: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x470a69u); call_ind(t); }
L_00470a69:; BB(0x00470a69);
    /* 00470a69: jmp 0x4709a4 */ goto L_004709a4;
L_00470a6e:; BB(0x00470a6e);
    /* 00470a6e: jmp 0x470988 */ goto L_00470988;
L_00470a73:; BB(0x00470a73);
    /* 00470a73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00470a74: mov esp, ebp */ r_esp = r_ebp;
    /* 00470a76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00470a77: ret  */ FN_RET(0x004701fb); r_esp += 4; return;
}

void f_00470aa3(void) /* FUN_00470aa3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470aa3);
    /* 00470aa3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470aa4: mov ebp, esp */ r_ebp = r_esp;
    /* 00470aa6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470aa9: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00470aac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00470aae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00470ab0: call 0x4298bc */ r_esp -= 4; W32(r_esp, 0x470ab5u); f_004298bc();
    /* 00470ab5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470ab8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00470abb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00470abe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00470ac1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00470ac4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00470ac7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00470aca: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00470ad1: jmp 0x470adc */ goto L_00470adc;
L_00470ad3:; BB(0x00470ad3);
    /* 00470ad3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00470ad6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00470ad9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00470adc:; BB(0x00470adc);
    /* 00470adc: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470ae0: jge 0x470b42 */ if ((fS==fO)) goto L_00470b42;
L_00470ae2:; BB(0x00470ae2);
    /* 00470ae2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00470ae5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00470ae8: cmp dword ptr [ecx + eax*4 + 0x1ac], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470af0: je 0x470b40 */ if (fZ) goto L_00470b40;
L_00470af2:; BB(0x00470af2);
    /* 00470af2: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00470af5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470af6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00470af9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00470afc: mov edx, dword ptr [ecx + eax*4 + 0x1ac] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1acu));
    /* 00470b03: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00470b06: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x470b0bu); f_004267fb();
    /* 00470b0b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470b0f: jge 0x470b40 */ if ((fS==fO)) goto L_00470b40;
L_00470b11:; BB(0x00470b11);
    /* 00470b11: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00470b14: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00470b17: mov edx, dword ptr [ecx + eax*4 + 0x1ac] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1acu));
    /* 00470b1e: cmp dword ptr [edx + 0x104], 0 */ {  u32 a = R32((u32)(r_edx+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470b25: jne 0x470b40 */ if (!fZ) goto L_00470b40;
L_00470b27:; BB(0x00470b27);
    /* 00470b27: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00470b2a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00470b2d: mov edx, dword ptr [ecx + eax*4 + 0x1ac] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1acu));
    /* 00470b34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470b35: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00470b3b: call 0x449908 */ r_esp -= 4; W32(r_esp, 0x470b40u); f_00449908();
L_00470b40:; BB(0x00470b40);
    /* 00470b40: jmp 0x470ad3 */ goto L_00470ad3;
L_00470b42:; BB(0x00470b42);
    /* 00470b42: mov esp, ebp */ r_esp = r_ebp;
    /* 00470b44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00470b45: ret  */ FN_RET(0x00470aa3); r_esp += 4; return;
}

void f_00470b46(void) /* FUN_00470b46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470b46);
    /* 00470b46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470b47: mov ebp, esp */ r_ebp = r_esp;
    /* 00470b49: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470b4c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00470b4f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00470b56: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00470b5d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00470b64: jmp 0x470b6f */ goto L_00470b6f;
L_00470b66:; BB(0x00470b66);
    /* 00470b66: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470b69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00470b6c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00470b6f:; BB(0x00470b6f);
    /* 00470b6f: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470b73: jge 0x470bc7 */ if ((fS==fO)) goto L_00470bc7;
L_00470b75:; BB(0x00470b75);
    /* 00470b75: push 0x6f6a68 */ { u32 v = 0x6f6a68u; r_esp -= 4; W32(r_esp, v); }
    /* 00470b7a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470b7d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00470b80: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00470b84: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470b87: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00470b8a: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 00470b8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470b90: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x470b93u); call_ind(t); }
    /* 00470b93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470b94: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x470b99u); f_006240c0();
    /* 00470b99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470b9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470b9e: je 0x470bc5 */ if (fZ) goto L_00470bc5;
L_00470ba0:; BB(0x00470ba0);
    /* 00470ba0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470ba3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00470ba6: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00470baa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470bad: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00470bb0: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00470bb4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470bb6: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x470bb9u); call_ind(t); }
    /* 00470bb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470bba: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x470bbfu); f_00625430();
    /* 00470bbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470bc2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00470bc5:; BB(0x00470bc5);
    /* 00470bc5: jmp 0x470b66 */ goto L_00470b66;
L_00470bc7:; BB(0x00470bc7);
    /* 00470bc7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00470bca: mov esp, ebp */ r_esp = r_ebp;
    /* 00470bcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00470bcd: ret  */ FN_RET(0x00470b46); r_esp += 4; return;
}

void f_00470bce(void) /* FUN_00470bce */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470bce);
    /* 00470bce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470bcf: mov ebp, esp */ r_ebp = r_esp;
    /* 00470bd1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470bd4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00470bd7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00470bde: push 0x6f6a6c */ { u32 v = 0x6f6a6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00470be3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00470be6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470be9: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00470bed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00470bf0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470bf3: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00470bf7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470bf9: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x470bfcu); call_ind(t); }
    /* 00470bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470bfd: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x470c02u); f_006240c0();
    /* 00470c02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470c05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470c07: je 0x470c2e */ if (fZ) goto L_00470c2e;
L_00470c09:; BB(0x00470c09);
    /* 00470c09: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00470c0c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470c0f: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00470c13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00470c16: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470c19: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 00470c1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470c1f: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x470c22u); call_ind(t); }
    /* 00470c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470c23: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x470c28u); f_00625430();
    /* 00470c28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470c2b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00470c2e:; BB(0x00470c2e);
    /* 00470c2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00470c31: mov esp, ebp */ r_esp = r_ebp;
    /* 00470c33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00470c34: ret 4 */ FN_RET(0x00470bce); r_esp += 8; return;
}

void f_00470c37(void) /* FUN_00470c37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470c37);
    /* 00470c37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470c38: mov ebp, esp */ r_ebp = r_esp;
    /* 00470c3a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470c3d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00470c40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00470c47: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00470c4e: jmp 0x470c59 */ goto L_00470c59;
L_00470c50:; BB(0x00470c50);
    /* 00470c50: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470c53: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00470c56: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00470c59:; BB(0x00470c59);
    /* 00470c59: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470c5d: jge 0x470c75 */ if ((fS==fO)) goto L_00470c75;
L_00470c5f:; BB(0x00470c5f);
    /* 00470c5f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470c62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470c63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00470c66: call 0x470bce */ r_esp -= 4; W32(r_esp, 0x470c6bu); f_00470bce();
    /* 00470c6b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00470c6e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00470c70: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00470c73: jmp 0x470c50 */ goto L_00470c50;
L_00470c75:; BB(0x00470c75);
    /* 00470c75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00470c78: mov esp, ebp */ r_esp = r_ebp;
    /* 00470c7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00470c7b: ret  */ FN_RET(0x00470c37); r_esp += 4; return;
}

void f_00470c7c(void) /* FUN_00470c7c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470c7c);
    /* 00470c7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470c7d: mov ebp, esp */ r_ebp = r_esp;
    /* 00470c7f: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470c82: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00470c85: mov ax, word ptr [0x683c28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x683c28u))) & 0xffffu);
    /* 00470c8b: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
    /* 00470c8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00470c91: mov dword ptr [ebp - 0x16], ecx */ W32((u32)(r_ebp+0xffffffeau), r_ecx);
    /* 00470c94: mov dword ptr [ebp - 0x12], ecx */ W32((u32)(r_ebp+0xffffffeeu), r_ecx);
    /* 00470c97: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00470c9a: call 0x470c37 */ r_esp -= 4; W32(r_esp, 0x470c9fu); f_00470c37();
    /* 00470c9f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00470ca2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00470ca9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00470cab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00470cad: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00470cb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470cb1: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00470cb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470cb5: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x470cbau); f_004298d8();
    /* 00470cba: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470cbd: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00470cc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470cc1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00470cc4: mov ecx, dword ptr [edx + 0x100] */ r_ecx = R32((u32)(r_edx+0x100u));
    /* 00470cca: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00470ccd: mov edx, dword ptr [eax + 0x100] */ r_edx = R32((u32)(r_eax+0x100u));
    /* 00470cd3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470cd5: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x470cd8u); call_ind(t); }
    /* 00470cd8: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00470cdf: jmp 0x470cea */ goto L_00470cea;
L_00470ce1:; BB(0x00470ce1);
    /* 00470ce1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00470ce4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00470ce7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00470cea:; BB(0x00470cea);
    /* 00470cea: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470cee: jge 0x470d04 */ if ((fS==fO)) goto L_00470d04;
L_00470cf0:; BB(0x00470cf0);
    /* 00470cf0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00470cf3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00470cf6: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00470cfd: call 0x46d381 */ r_esp -= 4; W32(r_esp, 0x470d02u); f_0046d381();
    /* 00470d02: jmp 0x470ce1 */ goto L_00470ce1;
L_00470d04:; BB(0x00470d04);
    /* 00470d04: mov esp, ebp */ r_esp = r_ebp;
    /* 00470d06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00470d07: ret  */ FN_RET(0x00470c7c); r_esp += 4; return;
}

void f_00470d08(void) /* FUN_00470d08 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470d08);
    /* 00470d08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470d09: mov ebp, esp */ r_ebp = r_esp;
    /* 00470d0b: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470d0e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00470d0f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00470d10: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00470d13: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00470d1a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00470d21: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00470d28: jmp 0x470d33 */ goto L_00470d33;
L_00470d2a:; BB(0x00470d2a);
    /* 00470d2a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470d2d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00470d30: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00470d33:; BB(0x00470d33);
    /* 00470d33: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470d37: jge 0x470e18 */ if ((fS==fO)) goto L_00470e18;
L_00470d3d:; BB(0x00470d3d);
    /* 00470d3d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470d40: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470d43: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00470d4a: cmp dword ptr [eax + 0x88], -1 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470d51: je 0x470df4 */ if (fZ) goto L_00470df4;
L_00470d57:; BB(0x00470d57);
    /* 00470d57: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470d5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470d5b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470d5e: call 0x470bce */ r_esp -= 4; W32(r_esp, 0x470d63u); f_00470bce();
    /* 00470d63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470d65: je 0x470df4 */ if (fZ) goto L_00470df4;
L_00470d6b:; BB(0x00470d6b);
    /* 00470d6b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470d6e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470d71: mov ecx, dword ptr [eax + edx*4 + 0x88] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x88u));
    /* 00470d78: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470d7b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470d7e: mov edx, dword ptr [eax + edx*4 + 0x88] */ r_edx = R32((u32)(r_eax+r_edx*4+0x88u));
    /* 00470d85: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470d87: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x470d8au); call_ind(t); }
    /* 00470d8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470d8d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470d90: mov esi, dword ptr [edx + ecx*4 + 0x110] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00470d97: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470d9a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470d9d: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00470da4: mov edi, dword ptr [edx + 0x88] */ r_edi = R32((u32)(r_edx+0x88u));
    /* 00470daa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470dad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470dae: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470db1: call 0x470bce */ r_esp -= 4; W32(r_esp, 0x470db6u); f_00470bce();
    /* 00470db6: mov ecx, dword ptr [esi + edi*8 + 0x94] */ r_ecx = R32((u32)(r_esi+r_edi*8+0x94u));
    /* 00470dbd: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00470dc0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470dc3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470dc6: mov esi, dword ptr [eax + edx*4 + 0x110] */ r_esi = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00470dcd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470dd0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470dd3: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00470dda: mov edi, dword ptr [edx + 0x88] */ r_edi = R32((u32)(r_edx+0x88u));
    /* 00470de0: mov eax, ecx */ r_eax = r_ecx;
    /* 00470de2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00470de3: idiv dword ptr [esi + edi*8 + 0x98] */ { i32 d = (i32)R32((u32)(r_esi+r_edi*8+0x98u)); if (!d) UNSUP(0x00470de3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00470de3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00470dea: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00470ded: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00470def: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00470df2: jmp 0x470e13 */ goto L_00470e13;
L_00470df4:; BB(0x00470df4);
    /* 00470df4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470df7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470dfa: mov ecx, dword ptr [eax + edx*4 + 0x88] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x88u));
    /* 00470e01: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00470e04: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470e07: mov edx, dword ptr [eax + edx*4 + 0x88] */ r_edx = R32((u32)(r_eax+r_edx*4+0x88u));
    /* 00470e0e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470e10: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x470e13u); call_ind(t); }
L_00470e13:; BB(0x00470e13);
    /* 00470e13: jmp 0x470d2a */ goto L_00470d2a;
L_00470e18:; BB(0x00470e18);
    /* 00470e18: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470e1c: je 0x470e77 */ if (fZ) goto L_00470e77;
L_00470e1e:; BB(0x00470e1e);
    /* 00470e1e: push 0x683c2c */ { u32 v = 0x683c2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00470e23: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00470e26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470e27: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x470e2cu); f_00624510();
    /* 00470e2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470e2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00470e31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00470e33: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 00470e36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470e37: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00470e3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470e3b: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x470e40u); f_004298d8();
    /* 00470e40: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470e43: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00470e46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470e47: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470e4a: mov ecx, dword ptr [edx + 0x104] */ r_ecx = R32((u32)(r_edx+0x104u));
    /* 00470e50: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470e53: mov edx, dword ptr [eax + 0x104] */ r_edx = R32((u32)(r_eax+0x104u));
    /* 00470e59: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470e5b: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x470e5eu); call_ind(t); }
    /* 00470e5e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470e61: mov ecx, dword ptr [ecx + 0x104] */ r_ecx = R32((u32)(r_ecx+0x104u));
    /* 00470e67: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470e6a: mov eax, dword ptr [edx + 0x104] */ r_eax = R32((u32)(r_edx+0x104u));
    /* 00470e70: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470e72: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x470e75u); call_ind(t); }
    /* 00470e75: jmp 0x470e8e */ goto L_00470e8e;
L_00470e77:; BB(0x00470e77);
    /* 00470e77: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470e7a: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 00470e80: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00470e83: mov eax, dword ptr [edx + 0x104] */ r_eax = R32((u32)(r_edx+0x104u));
    /* 00470e89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470e8b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x470e8eu); call_ind(t); }
L_00470e8e:; BB(0x00470e8e);
    /* 00470e8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00470e8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00470e90: mov esp, ebp */ r_esp = r_ebp;
    /* 00470e92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00470e93: ret  */ FN_RET(0x00470d08); r_esp += 4; return;
}

void f_00470e94(void) /* FUN_00470e94 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470e94);
    /* 00470e94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470e95: mov ebp, esp */ r_ebp = r_esp;
    /* 00470e97: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470e9a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00470e9d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00470ea4: jmp 0x470eaf */ goto L_00470eaf;
L_00470ea6:; BB(0x00470ea6);
    /* 00470ea6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00470ea9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00470eac: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00470eaf:; BB(0x00470eaf);
    /* 00470eaf: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470eb3: jge 0x470ec9 */ if ((fS==fO)) goto L_00470ec9;
L_00470eb5:; BB(0x00470eb5);
    /* 00470eb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00470eb8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470ebb: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00470ec2: call 0x46d381 */ r_esp -= 4; W32(r_esp, 0x470ec7u); f_0046d381();
    /* 00470ec7: jmp 0x470ea6 */ goto L_00470ea6;
L_00470ec9:; BB(0x00470ec9);
    /* 00470ec9: mov esp, ebp */ r_esp = r_ebp;
    /* 00470ecb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00470ecc: ret  */ FN_RET(0x00470e94); r_esp += 4; return;
}

void f_00470ecd(void) /* FUN_00470ecd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470ecd);
    /* 00470ecd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470ece: mov ebp, esp */ r_ebp = r_esp;
    /* 00470ed0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470ed3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00470ed4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00470ed5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00470ed8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00470edf: jmp 0x470eea */ goto L_00470eea;
L_00470ee1:; BB(0x00470ee1);
    /* 00470ee1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470ee4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00470ee7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00470eea:; BB(0x00470eea);
    /* 00470eea: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470eee: jge 0x470f9e */ if ((fS==fO)) goto L_00470f9e;
L_00470ef4:; BB(0x00470ef4);
    /* 00470ef4: push 0x6f6a70 */ { u32 v = 0x6f6a70u; r_esp -= 4; W32(r_esp, v); }
    /* 00470ef9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470efc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00470eff: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00470f03: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470f06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00470f09: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 00470f0d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470f0f: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x470f12u); call_ind(t); }
    /* 00470f12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470f13: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x470f18u); f_006240c0();
    /* 00470f18: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470f1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470f1d: je 0x470f99 */ if (fZ) goto L_00470f99;
L_00470f1f:; BB(0x00470f1f);
    /* 00470f1f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470f22: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00470f25: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00470f29: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470f2c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00470f2f: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00470f33: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470f35: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x470f38u); call_ind(t); }
    /* 00470f38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470f39: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x470f3eu); f_00625430();
    /* 00470f3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470f41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470f43: jne 0x470f54 */ if (!fZ) goto L_00470f54;
L_00470f45:; BB(0x00470f45);
    /* 00470f45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470f48: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00470f4b: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00470f4f: call 0x4727b3 */ r_esp -= 4; W32(r_esp, 0x470f54u); f_004727b3();
L_00470f54:; BB(0x00470f54);
    /* 00470f54: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470f57: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00470f5a: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00470f5e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470f61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00470f64: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00470f68: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470f6a: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x470f6du); call_ind(t); }
    /* 00470f6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470f6e: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x470f73u); f_00625430();
    /* 00470f73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470f76: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470f79: jne 0x470f99 */ if (!fZ) goto L_00470f99;
L_00470f7b:; BB(0x00470f7b);
    /* 00470f7b: push 0x683c30 */ { u32 v = 0x683c30u; r_esp -= 4; W32(r_esp, v); }
    /* 00470f80: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470f83: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00470f86: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00470f8a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00470f8d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00470f90: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 00470f94: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470f96: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x470f99u); call_ind(t); }
L_00470f99:; BB(0x00470f99);
    /* 00470f99: jmp 0x470ee1 */ goto L_00470ee1;
L_00470f9e:; BB(0x00470f9e);
    /* 00470f9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00470fa1: call 0x470c37 */ r_esp -= 4; W32(r_esp, 0x470fa6u); f_00470c37();
    /* 00470fa6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00470fa9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470fad: jne 0x470fcf */ if (!fZ) goto L_00470fcf;
L_00470faf:; BB(0x00470faf);
    /* 00470faf: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00470fb4: push 0x683c34 */ { u32 v = 0x683c34u; r_esp -= 4; W32(r_esp, v); }
    /* 00470fb9: push 0x683c44 */ { u32 v = 0x683c44u; r_esp -= 4; W32(r_esp, v); }
    /* 00470fbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00470fc0: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x470fc5u); f_0060f9f3();
    /* 00470fc5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470fc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00470fca: jmp 0x4711db */ goto L_004711db;
L_00470fcf:; BB(0x00470fcf);
    /* 00470fcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00470fd2: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 00470fd8: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00470fdb: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x470fe0u); f_00426819();
    /* 00470fe0: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470fe3: jle 0x471005 */ if ((fZ||fS!=fO)) goto L_00471005;
L_00470fe5:; BB(0x00470fe5);
    /* 00470fe5: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00470fea: push 0x683c6c */ { u32 v = 0x683c6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00470fef: push 0x683c7c */ { u32 v = 0x683c7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00470ff4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00470ff6: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x470ffbu); f_0060f9f3();
    /* 00470ffb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470ffe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00471000: jmp 0x4711db */ goto L_004711db;
L_00471005:; BB(0x00471005);
    /* 00471005: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0047100c: jmp 0x471017 */ goto L_00471017;
L_0047100e:; BB(0x0047100e);
    /* 0047100e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471011: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00471014: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00471017:; BB(0x00471017);
    /* 00471017: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047101b: jge 0x471080 */ if ((fS==fO)) goto L_00471080;
L_0047101d:; BB(0x0047101d);
    /* 0047101d: push 0x6f6a74 */ { u32 v = 0x6f6a74u; r_esp -= 4; W32(r_esp, v); }
    /* 00471022: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471025: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00471028: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 0047102c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047102f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00471032: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00471036: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471038: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x47103bu); call_ind(t); }
    /* 0047103b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047103c: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x471041u); f_006240c0();
    /* 00471041: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471046: je 0x47107e */ if (fZ) goto L_0047107e;
L_00471048:; BB(0x00471048);
    /* 00471048: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047104b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047104e: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00471055: cmp dword ptr [eax + 0x88], -1 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047105c: jne 0x47107e */ if (!fZ) goto L_0047107e;
L_0047105e:; BB(0x0047105e);
    /* 0047105e: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00471063: push 0x683cac */ { u32 v = 0x683cacu; r_esp -= 4; W32(r_esp, v); }
    /* 00471068: push 0x683cc0 */ { u32 v = 0x683cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047106d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047106f: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x471074u); f_0060f9f3();
    /* 00471074: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471077: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00471079: jmp 0x4711db */ goto L_004711db;
L_0047107e:; BB(0x0047107e);
    /* 0047107e: jmp 0x47100e */ goto L_0047100e;
L_00471080:; BB(0x00471080);
    /* 00471080: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00471087: jmp 0x471092 */ goto L_00471092;
L_00471089:; BB(0x00471089);
    /* 00471089: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047108c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047108f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00471092:; BB(0x00471092);
    /* 00471092: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471096: jge 0x4711ab */ if ((fS==fO)) goto L_004711ab;
L_0047109c:; BB(0x0047109c);
    /* 0047109c: push 0x6f6a78 */ { u32 v = 0x6f6a78u; r_esp -= 4; W32(r_esp, v); }
    /* 004710a1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004710a4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004710a7: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 004710ab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004710ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004710b1: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 004710b5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004710b7: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x4710bau); call_ind(t); }
    /* 004710ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004710bb: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x4710c0u); f_006240c0();
    /* 004710c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004710c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004710c5: je 0x4711a6 */ if (fZ) goto L_004711a6;
L_004710cb:; BB(0x004710cb);
    /* 004710cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004710ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004710d1: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 004710d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004710d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004710db: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 004710df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004710e1: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4710e4u); call_ind(t); }
    /* 004710e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004710e5: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x4710eau); f_00625430();
    /* 004710ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004710ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004710f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004710f3: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004710fa: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00471100: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471103: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00471106: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047110d: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 00471110: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x471115u); f_005ea257();
    /* 00471115: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00471118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471119: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047111c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0047111f: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00471126: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 00471129: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x47112eu); f_005ea1cf();
    /* 0047112e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471131: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00471134: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047113b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047113e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00471141: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00471148: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047114b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0047114e: mov eax, dword ptr [esi + eax*4 + 0x110] */ r_eax = R32((u32)(r_esi+r_eax*4+0x110u));
    /* 00471155: mov eax, dword ptr [eax + 0x88] */ r_eax = R32((u32)(r_eax+0x88u));
    /* 0047115b: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 00471161: imul ecx, dword ptr [edx + eax*8 + 0x94] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_edx+r_eax*8+0x94u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00471169: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047116c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0047116f: mov esi, dword ptr [eax + edx*4 + 0x110] */ r_esi = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00471176: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471179: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0047117c: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00471183: mov edi, dword ptr [edx + 0x88] */ r_edi = R32((u32)(r_edx+0x88u));
    /* 00471189: mov eax, ecx */ r_eax = r_ecx;
    /* 0047118b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047118c: idiv dword ptr [esi + edi*8 + 0x98] */ { i32 d = (i32)R32((u32)(r_esi+r_edi*8+0x98u)); if (!d) UNSUP(0x0047118c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0047118c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00471193: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471196: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00471199: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004711a0: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
L_004711a6:; BB(0x004711a6);
    /* 004711a6: jmp 0x471089 */ goto L_00471089;
L_004711ab:; BB(0x004711ab);
    /* 004711ab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004711ae: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004711b1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004711b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004711b7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004711ba: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004711c1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004711c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004711c5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004711c8: mov eax, dword ptr [edx + 0x1ac] */ r_eax = R32((u32)(r_edx+0x1acu));
    /* 004711ce: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004711d1: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x4711d6u); f_004267ae();
    /* 004711d6: mov eax, 1 */ r_eax = 0x1u;
L_004711db:; BB(0x004711db);
    /* 004711db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004711dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004711dd: mov esp, ebp */ r_esp = r_ebp;
    /* 004711df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004711e0: ret  */ FN_RET(0x00470ecd); r_esp += 4; return;
}

void f_004711e1(void) /* FUN_004711e1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004711e1);
    /* 004711e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004711e2: mov ebp, esp */ r_ebp = r_esp;
    /* 004711e4: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004711ea: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 004711ed: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004711f0: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004711f4: je 0x47123e */ if (fZ) goto L_0047123e;
L_004711f6:; BB(0x004711f6);
    /* 004711f6: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004711f9: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004711fc: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 004711ff: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00471202: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471204: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x471207u); call_ind(t); }
    /* 00471207: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0047120a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047120d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00471210: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00471213: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00471216: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047121a: je 0x47122d */ if (fZ) goto L_0047122d;
L_0047121c:; BB(0x0047121c);
    /* 0047121c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047121e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471221: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471223: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471226: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x471228u); call_ind(t); }
    /* 00471228: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0047122b: jmp 0x471234 */ goto L_00471234;
L_0047122d:; BB(0x0047122d);
    /* 0047122d: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00471234:; BB(0x00471234);
    /* 00471234: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00471237: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
L_0047123e:; BB(0x0047123e);
    /* 0047123e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471241: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471245: je 0x47128f */ if (fZ) goto L_0047128f;
L_00471247:; BB(0x00471247);
    /* 00471247: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047124a: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0047124d: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00471250: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00471253: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471255: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x471258u); call_ind(t); }
    /* 00471258: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047125b: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0047125e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00471261: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00471264: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00471267: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047126b: je 0x47127e */ if (fZ) goto L_0047127e;
L_0047126d:; BB(0x0047126d);
    /* 0047126d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047126f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00471272: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471274: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00471277: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x471279u); call_ind(t); }
    /* 00471279: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0047127c: jmp 0x471285 */ goto L_00471285;
L_0047127e:; BB(0x0047127e);
    /* 0047127e: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00471285:; BB(0x00471285);
    /* 00471285: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00471288: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
L_0047128f:; BB(0x0047128f);
    /* 0047128f: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471292: cmp dword ptr [ecx + 0x100], 0 */ {  u32 a = R32((u32)(r_ecx+0x100u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471299: je 0x4712f5 */ if (fZ) goto L_004712f5;
L_0047129b:; BB(0x0047129b);
    /* 0047129b: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047129e: mov ecx, dword ptr [edx + 0x100] */ r_ecx = R32((u32)(r_edx+0x100u));
    /* 004712a4: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004712a7: mov edx, dword ptr [eax + 0x100] */ r_edx = R32((u32)(r_eax+0x100u));
    /* 004712ad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004712af: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4712b2u); call_ind(t); }
    /* 004712b2: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004712b5: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 004712bb: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004712be: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004712c1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004712c4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004712c8: je 0x4712de */ if (fZ) goto L_004712de;
L_004712ca:; BB(0x004712ca);
    /* 004712ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004712cc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004712cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004712d1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004712d4: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4712d6u); call_ind(t); }
    /* 004712d6: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 004712dc: jmp 0x4712e8 */ goto L_004712e8;
L_004712de:; BB(0x004712de);
    /* 004712de: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_004712e8:; BB(0x004712e8);
    /* 004712e8: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004712eb: mov dword ptr [eax + 0x100], 0 */ W32((u32)(r_eax+0x100u), 0x0u);
L_004712f5:; BB(0x004712f5);
    /* 004712f5: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004712f8: cmp dword ptr [ecx + 0x104], 0 */ {  u32 a = R32((u32)(r_ecx+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004712ff: je 0x47135b */ if (fZ) goto L_0047135b;
L_00471301:; BB(0x00471301);
    /* 00471301: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471304: mov ecx, dword ptr [edx + 0x104] */ r_ecx = R32((u32)(r_edx+0x104u));
    /* 0047130a: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0047130d: mov edx, dword ptr [eax + 0x104] */ r_edx = R32((u32)(r_eax+0x104u));
    /* 00471313: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471315: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x471318u); call_ind(t); }
    /* 00471318: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047131b: mov edx, dword ptr [ecx + 0x104] */ r_edx = R32((u32)(r_ecx+0x104u));
    /* 00471321: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00471324: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471327: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0047132a: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047132e: je 0x471344 */ if (fZ) goto L_00471344;
L_00471330:; BB(0x00471330);
    /* 00471330: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471332: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00471335: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471337: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047133a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x47133cu); call_ind(t); }
    /* 0047133c: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00471342: jmp 0x47134e */ goto L_0047134e;
L_00471344:; BB(0x00471344);
    /* 00471344: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0047134e:; BB(0x0047134e);
    /* 0047134e: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00471351: mov dword ptr [eax + 0x104], 0 */ W32((u32)(r_eax+0x104u), 0x0u);
L_0047135b:; BB(0x0047135b);
    /* 0047135b: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047135e: cmp dword ptr [ecx + 0x108], 0 */ {  u32 a = R32((u32)(r_ecx+0x108u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471365: je 0x4713c1 */ if (fZ) goto L_004713c1;
L_00471367:; BB(0x00471367);
    /* 00471367: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047136a: mov ecx, dword ptr [edx + 0x108] */ r_ecx = R32((u32)(r_edx+0x108u));
    /* 00471370: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00471373: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 00471379: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047137b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x47137eu); call_ind(t); }
    /* 0047137e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471381: mov edx, dword ptr [ecx + 0x108] */ r_edx = R32((u32)(r_ecx+0x108u));
    /* 00471387: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0047138a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047138d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00471390: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471394: je 0x4713aa */ if (fZ) goto L_004713aa;
L_00471396:; BB(0x00471396);
    /* 00471396: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471398: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047139b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047139d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004713a0: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4713a2u); call_ind(t); }
    /* 004713a2: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004713a8: jmp 0x4713b4 */ goto L_004713b4;
L_004713aa:; BB(0x004713aa);
    /* 004713aa: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_004713b4:; BB(0x004713b4);
    /* 004713b4: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004713b7: mov dword ptr [eax + 0x108], 0 */ W32((u32)(r_eax+0x108u), 0x0u);
L_004713c1:; BB(0x004713c1);
    /* 004713c1: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004713c4: cmp dword ptr [ecx + 0x10c], 0 */ {  u32 a = R32((u32)(r_ecx+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004713cb: je 0x471427 */ if (fZ) goto L_00471427;
L_004713cd:; BB(0x004713cd);
    /* 004713cd: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 004713d0: mov ecx, dword ptr [edx + 0x10c] */ r_ecx = R32((u32)(r_edx+0x10cu));
    /* 004713d6: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004713d9: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 004713df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004713e1: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4713e4u); call_ind(t); }
    /* 004713e4: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004713e7: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 004713ed: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004713f0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004713f3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004713f6: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004713fa: je 0x471410 */ if (fZ) goto L_00471410;
L_004713fc:; BB(0x004713fc);
    /* 004713fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004713fe: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00471401: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471403: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00471406: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x471408u); call_ind(t); }
    /* 00471408: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0047140e: jmp 0x47141a */ goto L_0047141a;
L_00471410:; BB(0x00471410);
    /* 00471410: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0047141a:; BB(0x0047141a);
    /* 0047141a: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0047141d: mov dword ptr [eax + 0x10c], 0 */ W32((u32)(r_eax+0x10cu), 0x0u);
L_00471427:; BB(0x00471427);
    /* 00471427: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047142e: jmp 0x471439 */ goto L_00471439;
L_00471430:; BB(0x00471430);
    /* 00471430: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471433: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471436: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00471439:; BB(0x00471439);
    /* 00471439: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047143d: jge 0x4716f7 */ if ((fS==fO)) goto L_004716f7;
L_00471443:; BB(0x00471443);
    /* 00471443: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471446: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00471449: cmp dword ptr [eax + edx*4 + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047144e: je 0x4714ae */ if (fZ) goto L_004714ae;
L_00471450:; BB(0x00471450);
    /* 00471450: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471453: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471456: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 0047145a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047145d: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471460: mov eax, dword ptr [edx + eax*4 + 0x38] */ r_eax = R32((u32)(r_edx+r_eax*4+0x38u));
    /* 00471464: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471466: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x471469u); call_ind(t); }
    /* 00471469: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047146c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047146f: mov edx, dword ptr [ecx + eax*4 + 0x38] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 00471473: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00471476: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00471479: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0047147c: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471480: je 0x471496 */ if (fZ) goto L_00471496;
L_00471482:; BB(0x00471482);
    /* 00471482: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471484: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00471487: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471489: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0047148c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x47148eu); call_ind(t); }
    /* 0047148e: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00471494: jmp 0x4714a0 */ goto L_004714a0;
L_00471496:; BB(0x00471496);
    /* 00471496: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_004714a0:; BB(0x004714a0);
    /* 004714a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004714a3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004714a6: mov dword ptr [ecx + eax*4 + 0x38], 0 */ W32((u32)(r_ecx+r_eax*4+0x38u), 0x0u);
L_004714ae:; BB(0x004714ae);
    /* 004714ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004714b1: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004714b4: cmp dword ptr [eax + edx*4 + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004714b9: je 0x471519 */ if (fZ) goto L_00471519;
L_004714bb:; BB(0x004714bb);
    /* 004714bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004714be: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 004714c1: mov ecx, dword ptr [edx + ecx*4 + 0x24] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x24u));
    /* 004714c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004714c8: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 004714cb: mov eax, dword ptr [edx + eax*4 + 0x24] */ r_eax = R32((u32)(r_edx+r_eax*4+0x24u));
    /* 004714cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004714d1: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4714d4u); call_ind(t); }
    /* 004714d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004714d7: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004714da: mov edx, dword ptr [ecx + eax*4 + 0x24] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x24u));
    /* 004714de: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004714e1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004714e4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004714e7: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004714eb: je 0x471501 */ if (fZ) goto L_00471501;
L_004714ed:; BB(0x004714ed);
    /* 004714ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004714ef: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004714f2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004714f4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004714f7: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4714f9u); call_ind(t); }
    /* 004714f9: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 004714ff: jmp 0x47150b */ goto L_0047150b;
L_00471501:; BB(0x00471501);
    /* 00471501: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0047150b:; BB(0x0047150b);
    /* 0047150b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047150e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471511: mov dword ptr [ecx + eax*4 + 0x24], 0 */ W32((u32)(r_ecx+r_eax*4+0x24u), 0x0u);
L_00471519:; BB(0x00471519);
    /* 00471519: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047151c: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0047151f: cmp dword ptr [eax + edx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471524: je 0x471584 */ if (fZ) goto L_00471584;
L_00471526:; BB(0x00471526);
    /* 00471526: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471529: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047152c: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00471530: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471533: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471536: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 0047153a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047153c: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x47153fu); call_ind(t); }
    /* 0047153f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471542: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471545: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00471549: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0047154c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047154f: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00471552: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471556: je 0x47156c */ if (fZ) goto L_0047156c;
L_00471558:; BB(0x00471558);
    /* 00471558: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047155a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047155d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047155f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00471562: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x471564u); call_ind(t); }
    /* 00471564: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0047156a: jmp 0x471576 */ goto L_00471576;
L_0047156c:; BB(0x0047156c);
    /* 0047156c: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_00471576:; BB(0x00471576);
    /* 00471576: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471579: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047157c: mov dword ptr [ecx + eax*4 + 0x10], 0 */ W32((u32)(r_ecx+r_eax*4+0x10u), 0x0u);
L_00471584:; BB(0x00471584);
    /* 00471584: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471587: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0047158a: cmp dword ptr [eax + edx*4 + 0xd8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471592: je 0x4715fe */ if (fZ) goto L_004715fe;
L_00471594:; BB(0x00471594);
    /* 00471594: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471597: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047159a: mov ecx, dword ptr [edx + ecx*4 + 0xd8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xd8u));
    /* 004715a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004715a4: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 004715a7: mov eax, dword ptr [edx + eax*4 + 0xd8] */ r_eax = R32((u32)(r_edx+r_eax*4+0xd8u));
    /* 004715ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004715b0: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4715b3u); call_ind(t); }
    /* 004715b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004715b6: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004715b9: mov edx, dword ptr [ecx + eax*4 + 0xd8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xd8u));
    /* 004715c0: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 004715c3: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004715c6: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004715c9: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004715cd: je 0x4715e3 */ if (fZ) goto L_004715e3;
L_004715cf:; BB(0x004715cf);
    /* 004715cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004715d1: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004715d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004715d6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004715d9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4715dbu); call_ind(t); }
    /* 004715db: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004715e1: jmp 0x4715ed */ goto L_004715ed;
L_004715e3:; BB(0x004715e3);
    /* 004715e3: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_004715ed:; BB(0x004715ed);
    /* 004715ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004715f0: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004715f3: mov dword ptr [ecx + eax*4 + 0xd8], 0 */ W32((u32)(r_ecx+r_eax*4+0xd8u), 0x0u);
L_004715fe:; BB(0x004715fe);
    /* 004715fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471601: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00471604: cmp dword ptr [eax + edx*4 + 0xec], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047160c: je 0x471678 */ if (fZ) goto L_00471678;
L_0047160e:; BB(0x0047160e);
    /* 0047160e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471611: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471614: mov ecx, dword ptr [edx + ecx*4 + 0xec] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xecu));
    /* 0047161b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047161e: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471621: mov eax, dword ptr [edx + eax*4 + 0xec] */ r_eax = R32((u32)(r_edx+r_eax*4+0xecu));
    /* 00471628: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047162a: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x47162du); call_ind(t); }
    /* 0047162d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471630: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471633: mov edx, dword ptr [ecx + eax*4 + 0xec] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xecu));
    /* 0047163a: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0047163d: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00471640: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00471643: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471647: je 0x47165d */ if (fZ) goto L_0047165d;
L_00471649:; BB(0x00471649);
    /* 00471649: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047164b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0047164e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471650: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00471653: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x471655u); call_ind(t); }
    /* 00471655: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0047165b: jmp 0x471667 */ goto L_00471667;
L_0047165d:; BB(0x0047165d);
    /* 0047165d: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_00471667:; BB(0x00471667);
    /* 00471667: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047166a: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047166d: mov dword ptr [ecx + eax*4 + 0xec], 0 */ W32((u32)(r_ecx+r_eax*4+0xecu), 0x0u);
L_00471678:; BB(0x00471678);
    /* 00471678: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047167b: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0047167e: cmp dword ptr [eax + edx*4 + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471686: je 0x4716f2 */ if (fZ) goto L_004716f2;
L_00471688:; BB(0x00471688);
    /* 00471688: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047168b: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047168e: mov ecx, dword ptr [edx + ecx*4 + 0x88] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x88u));
    /* 00471695: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471698: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047169b: mov eax, dword ptr [edx + eax*4 + 0x88] */ r_eax = R32((u32)(r_edx+r_eax*4+0x88u));
    /* 004716a2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004716a4: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4716a7u); call_ind(t); }
    /* 004716a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004716aa: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004716ad: mov edx, dword ptr [ecx + eax*4 + 0x88] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x88u));
    /* 004716b4: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 004716b7: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004716ba: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004716bd: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004716c1: je 0x4716d7 */ if (fZ) goto L_004716d7;
L_004716c3:; BB(0x004716c3);
    /* 004716c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004716c5: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004716c8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004716ca: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004716cd: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4716cfu); call_ind(t); }
    /* 004716cf: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004716d5: jmp 0x4716e1 */ goto L_004716e1;
L_004716d7:; BB(0x004716d7);
    /* 004716d7: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_004716e1:; BB(0x004716e1);
    /* 004716e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004716e4: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004716e7: mov dword ptr [ecx + eax*4 + 0x88], 0 */ W32((u32)(r_ecx+r_eax*4+0x88u), 0x0u);
L_004716f2:; BB(0x004716f2);
    /* 004716f2: jmp 0x471430 */ goto L_00471430;
L_004716f7:; BB(0x004716f7);
    /* 004716f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004716fe: jmp 0x471709 */ goto L_00471709;
L_00471700:; BB(0x00471700);
    /* 00471700: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471703: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00471706: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00471709:; BB(0x00471709);
    /* 00471709: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047170d: jge 0x4717fd */ if ((fS==fO)) goto L_004717fd;
L_00471713:; BB(0x00471713);
    /* 00471713: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471716: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471719: cmp dword ptr [ecx + eax*4 + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047171e: je 0x47177e */ if (fZ) goto L_0047177e;
L_00471720:; BB(0x00471720);
    /* 00471720: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471723: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00471726: mov ecx, dword ptr [eax + edx*4 + 0x4c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 0047172a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047172d: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00471730: mov edx, dword ptr [eax + edx*4 + 0x4c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 00471734: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471736: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x471739u); call_ind(t); }
    /* 00471739: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047173c: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0047173f: mov eax, dword ptr [edx + ecx*4 + 0x4c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4cu));
    /* 00471743: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00471746: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00471749: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0047174c: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471750: je 0x471766 */ if (fZ) goto L_00471766;
L_00471752:; BB(0x00471752);
    /* 00471752: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471754: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00471757: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471759: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0047175c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x47175eu); call_ind(t); }
    /* 0047175e: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00471764: jmp 0x471770 */ goto L_00471770;
L_00471766:; BB(0x00471766);
    /* 00471766: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00471770:; BB(0x00471770);
    /* 00471770: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471773: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471776: mov dword ptr [edx + ecx*4 + 0x4c], 0 */ W32((u32)(r_edx+r_ecx*4+0x4cu), 0x0u);
L_0047177e:; BB(0x0047177e);
    /* 0047177e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471781: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00471784: cmp dword ptr [ecx + eax*4 + 0x9c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047178c: je 0x4717f8 */ if (fZ) goto L_004717f8;
L_0047178e:; BB(0x0047178e);
    /* 0047178e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471791: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00471794: mov ecx, dword ptr [eax + edx*4 + 0x9c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x9cu));
    /* 0047179b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047179e: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004717a1: mov edx, dword ptr [eax + edx*4 + 0x9c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x9cu));
    /* 004717a8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004717aa: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4717adu); call_ind(t); }
    /* 004717ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004717b0: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 004717b3: mov eax, dword ptr [edx + ecx*4 + 0x9c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x9cu));
    /* 004717ba: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 004717bd: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004717c0: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 004717c3: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004717c7: je 0x4717dd */ if (fZ) goto L_004717dd;
L_004717c9:; BB(0x004717c9);
    /* 004717c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004717cb: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004717ce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004717d0: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004717d3: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4717d5u); call_ind(t); }
    /* 004717d5: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 004717db: jmp 0x4717e7 */ goto L_004717e7;
L_004717dd:; BB(0x004717dd);
    /* 004717dd: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_004717e7:; BB(0x004717e7);
    /* 004717e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004717ea: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 004717ed: mov dword ptr [edx + ecx*4 + 0x9c], 0 */ W32((u32)(r_edx+r_ecx*4+0x9cu), 0x0u);
L_004717f8:; BB(0x004717f8);
    /* 004717f8: jmp 0x471700 */ goto L_00471700;
L_004717fd:; BB(0x004717fd);
    /* 004717fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004717ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00471800: ret  */ FN_RET(0x004711e1); r_esp += 4; return;
}

void f_00471801(void) /* FUN_00471801 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00471801);
    /* 00471801: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00471802: mov ebp, esp */ r_ebp = r_esp;
    /* 00471804: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00471807: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0047180a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047180d: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 00471813: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471816: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 0047181c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047181e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x471821u); call_ind(t); }
    /* 00471821: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471824: mov ecx, dword ptr [eax + 0x128] */ r_ecx = R32((u32)(r_eax+0x128u));
    /* 0047182a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047182d: mov eax, dword ptr [edx + 0x128] */ r_eax = R32((u32)(r_edx+0x128u));
    /* 00471833: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471835: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x471838u); call_ind(t); }
    /* 00471838: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047183b: cmp dword ptr [eax + 0x14c], 0 */ {  u32 a = R32((u32)(r_eax+0x14cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471842: je 0x47185b */ if (fZ) goto L_0047185b;
L_00471844:; BB(0x00471844);
    /* 00471844: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471847: mov ecx, dword ptr [ecx + 0x14c] */ r_ecx = R32((u32)(r_ecx+0x14cu));
    /* 0047184d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471850: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00471856: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471858: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x47185bu); call_ind(t); }
L_0047185b:; BB(0x0047185b);
    /* 0047185b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00471862: jmp 0x47186d */ goto L_0047186d;
L_00471864:; BB(0x00471864);
    /* 00471864: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047186a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0047186d:; BB(0x0047186d);
    /* 0047186d: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471871: jge 0x4718b9 */ if ((fS==fO)) goto L_004718b9;
L_00471873:; BB(0x00471873);
    /* 00471873: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471876: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471879: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00471880: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471883: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471886: mov eax, dword ptr [edx + eax*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_eax*4+0x110u));
    /* 0047188d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047188f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x471892u); call_ind(t); }
    /* 00471892: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471895: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471898: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 0047189f: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 004718a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004718a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004718a8: mov eax, dword ptr [edx + eax*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_eax*4+0x110u));
    /* 004718af: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 004718b2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004718b4: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4718b7u); call_ind(t); }
    /* 004718b7: jmp 0x471864 */ goto L_00471864;
L_004718b9:; BB(0x004718b9);
    /* 004718b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004718bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004718bc: ret  */ FN_RET(0x00471801); r_esp += 4; return;
}

void f_004718bd(void) /* FUN_004718bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004718bd);
    /* 004718bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004718be: mov ebp, esp */ r_ebp = r_esp;
    /* 004718c0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004718c3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004718c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004718c9: cmp dword ptr [eax + 0x1a0], 0 */ {  u32 a = R32((u32)(r_eax+0x1a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004718d0: je 0x4718e9 */ if (fZ) goto L_004718e9;
L_004718d2:; BB(0x004718d2);
    /* 004718d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004718d5: mov ecx, dword ptr [ecx + 0x1a0] */ r_ecx = R32((u32)(r_ecx+0x1a0u));
    /* 004718db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004718de: mov eax, dword ptr [edx + 0x1a0] */ r_eax = R32((u32)(r_edx+0x1a0u));
    /* 004718e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004718e6: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4718e9u); call_ind(t); }
L_004718e9:; BB(0x004718e9);
    /* 004718e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004718ec: cmp dword ptr [eax + 0x19c], 0 */ {  u32 a = R32((u32)(r_eax+0x19cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004718f3: je 0x47190c */ if (fZ) goto L_0047190c;
L_004718f5:; BB(0x004718f5);
    /* 004718f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004718f8: mov ecx, dword ptr [ecx + 0x19c] */ r_ecx = R32((u32)(r_ecx+0x19cu));
    /* 004718fe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471901: mov eax, dword ptr [edx + 0x19c] */ r_eax = R32((u32)(r_edx+0x19cu));
    /* 00471907: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471909: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x47190cu); call_ind(t); }
L_0047190c:; BB(0x0047190c);
    /* 0047190c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047190f: cmp dword ptr [eax + 0x198], 0 */ {  u32 a = R32((u32)(r_eax+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471916: je 0x47193f */ if (fZ) goto L_0047193f;
L_00471918:; BB(0x00471918);
    /* 00471918: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047191a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047191d: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 00471923: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x471928u); f_005e4060();
    /* 00471928: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047192b: mov ecx, dword ptr [edx + 0x198] */ r_ecx = R32((u32)(r_edx+0x198u));
    /* 00471931: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471934: mov edx, dword ptr [eax + 0x198] */ r_edx = R32((u32)(r_eax+0x198u));
    /* 0047193a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047193c: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x47193fu); call_ind(t); }
L_0047193f:; BB(0x0047193f);
    /* 0047193f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00471946: jmp 0x471951 */ goto L_00471951;
L_00471948:; BB(0x00471948);
    /* 00471948: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047194b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047194e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00471951:; BB(0x00471951);
    /* 00471951: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471955: jge 0x471988 */ if ((fS==fO)) goto L_00471988;
L_00471957:; BB(0x00471957);
    /* 00471957: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047195a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047195d: cmp dword ptr [eax + edx*4 + 0x18c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471965: je 0x471986 */ if (fZ) goto L_00471986;
L_00471967:; BB(0x00471967);
    /* 00471967: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047196a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047196d: mov ecx, dword ptr [edx + ecx*4 + 0x18c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18cu));
    /* 00471974: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471977: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047197a: mov eax, dword ptr [edx + eax*4 + 0x18c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x18cu));
    /* 00471981: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471983: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x471986u); call_ind(t); }
L_00471986:; BB(0x00471986);
    /* 00471986: jmp 0x471948 */ goto L_00471948;
L_00471988:; BB(0x00471988);
    /* 00471988: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047198f: jmp 0x47199a */ goto L_0047199a;
L_00471991:; BB(0x00471991);
    /* 00471991: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471994: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00471997: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0047199a:; BB(0x0047199a);
    /* 0047199a: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047199e: jge 0x471a36 */ if ((fS==fO)) goto L_00471a36;
L_004719a4:; BB(0x004719a4);
    /* 004719a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004719a7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004719aa: cmp dword ptr [edx + ecx*4 + 0x150], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x150u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004719b2: je 0x4719d3 */ if (fZ) goto L_004719d3;
L_004719b4:; BB(0x004719b4);
    /* 004719b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004719b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004719ba: mov ecx, dword ptr [ecx + eax*4 + 0x150] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x150u));
    /* 004719c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004719c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004719c7: mov edx, dword ptr [eax + edx*4 + 0x150] */ r_edx = R32((u32)(r_eax+r_edx*4+0x150u));
    /* 004719ce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004719d0: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4719d3u); call_ind(t); }
L_004719d3:; BB(0x004719d3);
    /* 004719d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004719d6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004719d9: cmp dword ptr [edx + ecx*4 + 0x164], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004719e1: je 0x471a02 */ if (fZ) goto L_00471a02;
L_004719e3:; BB(0x004719e3);
    /* 004719e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004719e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004719e9: mov ecx, dword ptr [ecx + eax*4 + 0x164] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x164u));
    /* 004719f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004719f3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004719f6: mov edx, dword ptr [eax + edx*4 + 0x164] */ r_edx = R32((u32)(r_eax+r_edx*4+0x164u));
    /* 004719fd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004719ff: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x471a02u); call_ind(t); }
L_00471a02:; BB(0x00471a02);
    /* 00471a02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471a05: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471a08: cmp dword ptr [edx + ecx*4 + 0x178], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x178u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471a10: je 0x471a31 */ if (fZ) goto L_00471a31;
L_00471a12:; BB(0x00471a12);
    /* 00471a12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471a15: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471a18: mov ecx, dword ptr [ecx + eax*4 + 0x178] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 00471a1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471a22: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471a25: mov edx, dword ptr [eax + edx*4 + 0x178] */ r_edx = R32((u32)(r_eax+r_edx*4+0x178u));
    /* 00471a2c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471a2e: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x471a31u); call_ind(t); }
L_00471a31:; BB(0x00471a31);
    /* 00471a31: jmp 0x471991 */ goto L_00471991;
L_00471a36:; BB(0x00471a36);
    /* 00471a36: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00471a3d: jmp 0x471a48 */ goto L_00471a48;
L_00471a3f:; BB(0x00471a3f);
    /* 00471a3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471a42: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471a45: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00471a48:; BB(0x00471a48);
    /* 00471a48: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471a4c: jge 0x471a7f */ if ((fS==fO)) goto L_00471a7f;
L_00471a4e:; BB(0x00471a4e);
    /* 00471a4e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471a51: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471a54: cmp dword ptr [eax + edx*4 + 0x1a4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471a5c: je 0x471a7d */ if (fZ) goto L_00471a7d;
L_00471a5e:; BB(0x00471a5e);
    /* 00471a5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471a61: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471a64: mov ecx, dword ptr [edx + ecx*4 + 0x1a4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1a4u));
    /* 00471a6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471a6e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471a71: mov eax, dword ptr [edx + eax*4 + 0x1a4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1a4u));
    /* 00471a78: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471a7a: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x471a7du); call_ind(t); }
L_00471a7d:; BB(0x00471a7d);
    /* 00471a7d: jmp 0x471a3f */ goto L_00471a3f;
L_00471a7f:; BB(0x00471a7f);
    /* 00471a7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00471a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00471a82: ret  */ FN_RET(0x004718bd); r_esp += 4; return;
}

void f_00471a83(void) /* FUN_00471a83 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00471a83);
    /* 00471a83: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00471a84: mov ebp, esp */ r_ebp = r_esp;
    /* 00471a86: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00471a89: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00471a8c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00471a93: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00471a9a: jmp 0x471aa5 */ goto L_00471aa5;
L_00471a9c:; BB(0x00471a9c);
    /* 00471a9c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471a9f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00471aa2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00471aa5:; BB(0x00471aa5);
    /* 00471aa5: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471aa9: jge 0x471b23 */ if ((fS==fO)) goto L_00471b23;
L_00471aab:; BB(0x00471aab);
    /* 00471aab: push 0x6f6a7c */ { u32 v = 0x6f6a7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00471ab0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471ab3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00471ab6: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00471aba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471abd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00471ac0: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 00471ac4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471ac6: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x471ac9u); call_ind(t); }
    /* 00471ac9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471aca: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x471acfu); f_006240c0();
    /* 00471acf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471ad2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471ad4: je 0x471b1e */ if (fZ) goto L_00471b1e;
L_00471ad6:; BB(0x00471ad6);
    /* 00471ad6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00471add: jmp 0x471ae8 */ goto L_00471ae8;
L_00471adf:; BB(0x00471adf);
    /* 00471adf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00471ae2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00471ae5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00471ae8:; BB(0x00471ae8);
    /* 00471ae8: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471aec: jge 0x471b0b */ if ((fS==fO)) goto L_00471b0b;
L_00471aee:; BB(0x00471aee);
    /* 00471aee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471af1: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00471af4: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471af7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00471afa: mov ecx, dword ptr [edx + ecx*4 + 0x4c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4cu));
    /* 00471afe: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x471b03u); f_005d71b9();
    /* 00471b03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471b05: je 0x471b09 */ if (fZ) goto L_00471b09;
L_00471b07:; BB(0x00471b07);
    /* 00471b07: jmp 0x471b0b */ goto L_00471b0b;
L_00471b09:; BB(0x00471b09);
    /* 00471b09: jmp 0x471adf */ goto L_00471adf;
L_00471b0b:; BB(0x00471b0b);
    /* 00471b0b: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471b0f: jne 0x471b1e */ if (!fZ) goto L_00471b1e;
L_00471b11:; BB(0x00471b11);
    /* 00471b11: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471b15: jne 0x471b1e */ if (!fZ) goto L_00471b1e;
L_00471b17:; BB(0x00471b17);
    /* 00471b17: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00471b1e:; BB(0x00471b1e);
    /* 00471b1e: jmp 0x471a9c */ goto L_00471a9c;
L_00471b23:; BB(0x00471b23);
    /* 00471b23: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471b27: je 0x471b79 */ if (fZ) goto L_00471b79;
L_00471b29:; BB(0x00471b29);
    /* 00471b29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00471b2c: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 00471b32: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471b36: jne 0x471b77 */ if (!fZ) goto L_00471b77;
L_00471b38:; BB(0x00471b38);
    /* 00471b38: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00471b3a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x471b3fu); f_0048ab58();
    /* 00471b3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471b42: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00471b45: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471b49: je 0x471b5e */ if (fZ) goto L_00471b5e;
L_00471b4b:; BB(0x00471b4b);
    /* 00471b4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471b4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471b4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471b51: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00471b54: call 0x5d7c5c */ r_esp -= 4; W32(r_esp, 0x471b59u); f_005d7c5c();
    /* 00471b59: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00471b5c: jmp 0x471b65 */ goto L_00471b65;
L_00471b5e:; BB(0x00471b5e);
    /* 00471b5e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00471b65:; BB(0x00471b65);
    /* 00471b65: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00471b68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00471b69: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00471b6c: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 00471b72: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x471b77u); f_005e4060();
L_00471b77:; BB(0x00471b77);
    /* 00471b77: jmp 0x471ba0 */ goto L_00471ba0;
L_00471b79:; BB(0x00471b79);
    /* 00471b79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471b7b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00471b7e: mov ecx, dword ptr [ecx + 0x108] */ r_ecx = R32((u32)(r_ecx+0x108u));
    /* 00471b84: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x471b89u); f_005e4060();
    /* 00471b89: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00471b8c: mov ecx, dword ptr [edx + 0x108] */ r_ecx = R32((u32)(r_edx+0x108u));
    /* 00471b92: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00471b95: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 00471b9b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471b9d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x471ba0u); call_ind(t); }
L_00471ba0:; BB(0x00471ba0);
    /* 00471ba0: mov esp, ebp */ r_esp = r_ebp;
    /* 00471ba2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00471ba3: ret  */ FN_RET(0x00471a83); r_esp += 4; return;
}

void f_00471ba4(void) /* FUN_00471ba4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00471ba4);
    /* 00471ba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00471ba5: mov ebp, esp */ r_ebp = r_esp;
    /* 00471ba7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00471ba8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00471bab: mov dword ptr [0x6f6a34], 0 */ W32((u32)(0x6f6a34u), 0x0u);
    /* 00471bb5: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00471bbb: call 0x45ccad */ r_esp -= 4; W32(r_esp, 0x471bc0u); f_0045ccad();
    /* 00471bc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471bc3: mov dword ptr [ecx + 0x1bc], eax */ W32((u32)(r_ecx+0x1bcu), r_eax);
    /* 00471bc9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471bcc: mov dword ptr [edx + 0x1b4], 0 */ W32((u32)(r_edx+0x1b4u), 0x0u);
    /* 00471bd6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471bd9: call 0x46e372 */ r_esp -= 4; W32(r_esp, 0x471bdeu); f_0046e372();
    /* 00471bde: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471be1: mov ecx, dword ptr [eax + 0x1b0] */ r_ecx = R32((u32)(r_eax+0x1b0u));
    /* 00471be7: call 0x4010d5 */ r_esp -= 4; W32(r_esp, 0x471becu); f_004010d5();
    /* 00471bec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00471bee: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00471bf4: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00471bf7: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00471bfd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00471c00: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471c02: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x471c05u); call_ind(t); }
    /* 00471c05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471c08: mov ecx, dword ptr [eax + 0x1b0] */ r_ecx = R32((u32)(r_eax+0x1b0u));
    /* 00471c0e: call 0x40117d */ r_esp -= 4; W32(r_esp, 0x471c13u); f_0040117d();
    /* 00471c13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471c16: cmp dword ptr [ecx + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471c1d: jne 0x471c40 */ if (!fZ) goto L_00471c40;
L_00471c1f:; BB(0x00471c1f);
    /* 00471c1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00471c21: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00471c27: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00471c2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471c2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00471c2d: push 0x18aa6 */ { u32 v = 0x18aa6u; r_esp -= 4; W32(r_esp, v); }
    /* 00471c32: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00471c38: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00471c3b: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x471c40u); f_005e8389();
L_00471c40:; BB(0x00471c40);
    /* 00471c40: mov esp, ebp */ r_esp = r_ebp;
    /* 00471c42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00471c43: ret  */ FN_RET(0x00471ba4); r_esp += 4; return;
}

void f_00471c44(void) /* FUN_00471c44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00471c44);
    /* 00471c44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00471c45: mov ebp, esp */ r_ebp = r_esp;
    /* 00471c47: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00471c4a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00471c4d: mov dword ptr [ebp - 0x1c], 0x1d4c1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1d4c1u);
    /* 00471c54: mov dword ptr [ebp - 0x18], 0x1d4c2 */ W32((u32)(r_ebp+0xffffffe8u), 0x1d4c2u);
    /* 00471c5b: mov dword ptr [ebp - 0x14], 0x1d4c3 */ W32((u32)(r_ebp+0xffffffecu), 0x1d4c3u);
    /* 00471c62: mov dword ptr [ebp - 0x10], 0x1d4e9 */ W32((u32)(r_ebp+0xfffffff0u), 0x1d4e9u);
    /* 00471c69: mov dword ptr [ebp - 0xc], 0x1d4dc */ W32((u32)(r_ebp+0xfffffff4u), 0x1d4dcu);
    /* 00471c70: mov dword ptr [ebp - 8], 0x1d4dd */ W32((u32)(r_ebp+0xfffffff8u), 0x1d4ddu);
    /* 00471c77: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471c7a: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 00471c80: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471c83: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471c86: mov dword ptr [edx + 0x12c], ecx */ W32((u32)(r_edx+0x12cu), r_ecx);
    /* 00471c8c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471c8f: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 00471c95: mov edx, dword ptr [ebp + ecx*4 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe4u));
    /* 00471c99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00471c9a: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00471ca0: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x471ca5u); f_005e5ec3();
    /* 00471ca5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471ca8: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471caf: je 0x471ce4 */ if (fZ) goto L_00471ce4;
L_00471cb1:; BB(0x00471cb1);
    /* 00471cb1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471cb4: mov edx, dword ptr [ecx + 0x12c] */ r_edx = R32((u32)(r_ecx+0x12cu));
    /* 00471cba: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 00471cbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471cbf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471cc2: mov ecx, dword ptr [ecx + 0x124] */ r_ecx = R32((u32)(r_ecx+0x124u));
    /* 00471cc8: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x471ccdu); f_005ea0c3();
    /* 00471ccd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471cd0: mov ecx, dword ptr [edx + 0x124] */ r_ecx = R32((u32)(r_edx+0x124u));
    /* 00471cd6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471cd9: mov edx, dword ptr [eax + 0x124] */ r_edx = R32((u32)(r_eax+0x124u));
    /* 00471cdf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471ce1: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x471ce4u); call_ind(t); }
L_00471ce4:; BB(0x00471ce4);
    /* 00471ce4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00471ceb: jmp 0x471cf6 */ goto L_00471cf6;
L_00471ced:; BB(0x00471ced);
    /* 00471ced: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471cf0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471cf3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00471cf6:; BB(0x00471cf6);
    /* 00471cf6: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471cfa: jge 0x471d22 */ if ((fS==fO)) goto L_00471d22;
L_00471cfc:; BB(0x00471cfc);
    /* 00471cfc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471cff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471d02: cmp dword ptr [eax + edx*4 + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471d0a: je 0x471d20 */ if (fZ) goto L_00471d20;
L_00471d0c:; BB(0x00471d0c);
    /* 00471d0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471d0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471d11: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471d14: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00471d1b: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x471d20u); f_005e4060();
L_00471d20:; BB(0x00471d20);
    /* 00471d20: jmp 0x471ced */ goto L_00471ced;
L_00471d22:; BB(0x00471d22);
    /* 00471d22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00471d29: jmp 0x471d34 */ goto L_00471d34;
L_00471d2b:; BB(0x00471d2b);
    /* 00471d2b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471d2e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00471d31: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00471d34:; BB(0x00471d34);
    /* 00471d34: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471d38: jge 0x471e00 */ if ((fS==fO)) goto L_00471e00;
L_00471d3e:; BB(0x00471d3e);
    /* 00471d3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471d41: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471d44: cmp dword ptr [edx + ecx*4 + 0x110], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471d4c: je 0x471dfb */ if (fZ) goto L_00471dfb;
L_00471d52:; BB(0x00471d52);
    /* 00471d52: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471d55: mov ecx, dword ptr [eax + 0x12c] */ r_ecx = R32((u32)(r_eax+0x12cu));
    /* 00471d5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00471d5c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471d5f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471d62: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00471d69: call 0x46d592 */ r_esp -= 4; W32(r_esp, 0x471d6eu); f_0046d592();
    /* 00471d6e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471d71: mov edx, dword ptr [ecx + 0x12c] */ r_edx = R32((u32)(r_ecx+0x12cu));
    /* 00471d77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00471d78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471d7b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471d7e: mov ecx, dword ptr [ecx + eax*4 + 0x110] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00471d85: call 0x46d646 */ r_esp -= 4; W32(r_esp, 0x471d8au); f_0046d646();
    /* 00471d8a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471d8d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471d90: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00471d97: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471d9a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471d9d: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00471da4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471da6: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x471da9u); call_ind(t); }
    /* 00471da9: mov ecx, dword ptr [0x6f6a88] */ r_ecx = R32((u32)(0x6f6a88u));
    /* 00471daf: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00471db2: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x471db7u); f_005e63b4();
    /* 00471db7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471dba: jne 0x471dfb */ if (!fZ) goto L_00471dfb;
L_00471dbc:; BB(0x00471dbc);
    /* 00471dbc: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00471dbe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x471dc3u); f_0048ab58();
    /* 00471dc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471dc6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00471dc9: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471dcd: je 0x471dde */ if (fZ) goto L_00471dde;
L_00471dcf:; BB(0x00471dcf);
    /* 00471dcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471dd1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00471dd4: call 0x472c88 */ r_esp -= 4; W32(r_esp, 0x471dd9u); f_00472c88();
    /* 00471dd9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00471ddc: jmp 0x471de5 */ goto L_00471de5;
L_00471dde:; BB(0x00471dde);
    /* 00471dde: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00471de5:; BB(0x00471de5);
    /* 00471de5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00471de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00471de9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471dec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471def: mov ecx, dword ptr [ecx + eax*4 + 0x110] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00471df6: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x471dfbu); f_005e4060();
L_00471dfb:; BB(0x00471dfb);
    /* 00471dfb: jmp 0x471d2b */ goto L_00471d2b;
L_00471e00:; BB(0x00471e00);
    /* 00471e00: mov esp, ebp */ r_esp = r_ebp;
    /* 00471e02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00471e03: ret  */ FN_RET(0x00471c44); r_esp += 4; return;
}

void f_00471e04(void) /* FUN_00471e04 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00471e04);
    /* 00471e04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00471e05: mov ebp, esp */ r_ebp = r_esp;
    /* 00471e07: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00471e0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00471e0d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00471e0f: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00471e11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00471e12: ret  */ FN_RET(0x00471e04); r_esp += 4; return;
}

void f_00471e13(void) /* FUN_00471e13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00471e13);
    /* 00471e13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00471e14: mov ebp, esp */ r_ebp = r_esp;
    /* 00471e16: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00471e19: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00471e1c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00471e23: jmp 0x471e2e */ goto L_00471e2e;
L_00471e25:; BB(0x00471e25);
    /* 00471e25: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471e28: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00471e2b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00471e2e:; BB(0x00471e2e);
    /* 00471e2e: cmp dword ptr [ebp - 0x2c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471e32: jge 0x471e5b */ if ((fS==fO)) goto L_00471e5b;
L_00471e34:; BB(0x00471e34);
    /* 00471e34: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471e37: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00471e3a: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00471e41: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471e44: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00471e4a: mov dword ptr [ebp + ecx*4 - 0x14], edx */ W32((u32)(r_ebp+r_ecx*4+0xffffffecu), r_edx);
    /* 00471e4e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471e51: mov dword ptr [ebp + eax*4 - 0x28], 0xffffffff */ W32((u32)(r_ebp+r_eax*4+0xffffffd8u), 0xffffffffu);
    /* 00471e59: jmp 0x471e25 */ goto L_00471e25;
L_00471e5b:; BB(0x00471e5b);
    /* 00471e5b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00471e62: jmp 0x471e6d */ goto L_00471e6d;
L_00471e64:; BB(0x00471e64);
    /* 00471e64: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471e67: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471e6a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_00471e6d:; BB(0x00471e6d);
    /* 00471e6d: cmp dword ptr [ebp - 0x2c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471e71: jge 0x471eb3 */ if ((fS==fO)) goto L_00471eb3;
L_00471e73:; BB(0x00471e73);
    /* 00471e73: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00471e7a: jmp 0x471e85 */ goto L_00471e85;
L_00471e7c:; BB(0x00471e7c);
    /* 00471e7c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00471e7f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00471e82: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_00471e85:; BB(0x00471e85);
    /* 00471e85: cmp dword ptr [ebp - 0x30], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471e89: jge 0x471eb1 */ if ((fS==fO)) goto L_00471eb1;
L_00471e8b:; BB(0x00471e8b);
    /* 00471e8b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471e8e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00471e91: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00471e98: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00471e9e: cmp eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471ea1: jne 0x471eaf */ if (!fZ) goto L_00471eaf;
L_00471ea3:; BB(0x00471ea3);
    /* 00471ea3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00471ea6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471ea9: mov dword ptr [ebp + ecx*4 - 0x28], edx */ W32((u32)(r_ebp+r_ecx*4+0xffffffd8u), r_edx);
    /* 00471ead: jmp 0x471eb1 */ goto L_00471eb1;
L_00471eaf:; BB(0x00471eaf);
    /* 00471eaf: jmp 0x471e7c */ goto L_00471e7c;
L_00471eb1:; BB(0x00471eb1);
    /* 00471eb1: jmp 0x471e64 */ goto L_00471e64;
L_00471eb3:; BB(0x00471eb3);
    /* 00471eb3: push 0x471e04 */ { u32 v = 0x471e04u; r_esp -= 4; W32(r_esp, v); }
    /* 00471eb8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00471eba: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00471ebc: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00471ebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471ec0: call 0x624bf0 */ r_esp -= 4; W32(r_esp, 0x471ec5u); f_00624bf0();
    /* 00471ec5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471ec8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00471ecf: jmp 0x471eda */ goto L_00471eda;
L_00471ed1:; BB(0x00471ed1);
    /* 00471ed1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471ed4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471ed7: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_00471eda:; BB(0x00471eda);
    /* 00471eda: cmp dword ptr [ebp - 0x2c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471ede: jge 0x471f2e */ if ((fS==fO)) goto L_00471f2e;
L_00471ee0:; BB(0x00471ee0);
    /* 00471ee0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00471ee7: jmp 0x471ef2 */ goto L_00471ef2;
L_00471ee9:; BB(0x00471ee9);
    /* 00471ee9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00471eec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00471eef: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_00471ef2:; BB(0x00471ef2);
    /* 00471ef2: cmp dword ptr [ebp - 0x30], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471ef6: jge 0x471f2c */ if ((fS==fO)) goto L_00471f2c;
L_00471ef8:; BB(0x00471ef8);
    /* 00471ef8: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471efb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00471efe: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00471f05: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00471f08: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 00471f0e: cmp ecx, dword ptr [ebp + eax*4 - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_eax*4+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471f12: jne 0x471f2a */ if (!fZ) goto L_00471f2a;
L_00471f14:; BB(0x00471f14);
    /* 00471f14: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00471f17: cmp dword ptr [ebp + edx*4 - 0x28], -1 */ {  u32 a = R32((u32)(r_ebp+r_edx*4+0xffffffd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471f1c: jne 0x471f2a */ if (!fZ) goto L_00471f2a;
L_00471f1e:; BB(0x00471f1e);
    /* 00471f1e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00471f21: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471f24: mov dword ptr [ebp + eax*4 - 0x28], ecx */ W32((u32)(r_ebp+r_eax*4+0xffffffd8u), r_ecx);
    /* 00471f28: jmp 0x471f2c */ goto L_00471f2c;
L_00471f2a:; BB(0x00471f2a);
    /* 00471f2a: jmp 0x471ee9 */ goto L_00471ee9;
L_00471f2c:; BB(0x00471f2c);
    /* 00471f2c: jmp 0x471ed1 */ goto L_00471ed1;
L_00471f2e:; BB(0x00471f2e);
    /* 00471f2e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00471f35: jmp 0x471f40 */ goto L_00471f40;
L_00471f37:; BB(0x00471f37);
    /* 00471f37: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471f3a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00471f3d: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_00471f40:; BB(0x00471f40);
    /* 00471f40: cmp dword ptr [ebp - 0x2c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471f44: jge 0x471fab */ if ((fS==fO)) goto L_00471fab;
L_00471f46:; BB(0x00471f46);
    /* 00471f46: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471f49: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00471f4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471f4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471f4f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471f52: mov edx, dword ptr [ebp + ecx*4 - 0x28] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffd8u));
    /* 00471f56: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00471f59: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00471f60: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 00471f63: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471f66: mov eax, dword ptr [ebp + edx*4 - 0x28] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd8u));
    /* 00471f6a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00471f6d: mov eax, dword ptr [edx + eax*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_eax*4+0x110u));
    /* 00471f74: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 00471f77: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471f79: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x471f7cu); call_ind(t); }
    /* 00471f7c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471f7f: mov edx, dword ptr [ebp + ecx*4 - 0x28] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffd8u));
    /* 00471f83: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00471f86: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00471f8d: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 00471f90: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00471f93: mov eax, dword ptr [ebp + edx*4 - 0x28] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd8u));
    /* 00471f97: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00471f9a: mov eax, dword ptr [edx + eax*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_eax*4+0x110u));
    /* 00471fa1: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 00471fa4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471fa6: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x471fa9u); call_ind(t); }
    /* 00471fa9: jmp 0x471f37 */ goto L_00471f37;
L_00471fab:; BB(0x00471fab);
    /* 00471fab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00471fae: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00471fb1: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00471fb8: cmp dword ptr [eax + 0x8c], 0x17 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471fbf: jne 0x471fdb */ if (!fZ) goto L_00471fdb;
L_00471fc1:; BB(0x00471fc1);
    /* 00471fc1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00471fc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00471fc5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00471fc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00471fc9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00471fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471fcd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00471fd0: mov ecx, dword ptr [ecx + 0x1b0] */ r_ecx = R32((u32)(r_ecx+0x1b0u));
    /* 00471fd6: call 0x401409 */ r_esp -= 4; W32(r_esp, 0x471fdbu); f_00401409();
L_00471fdb:; BB(0x00471fdb);
    /* 00471fdb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00471fde: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00471fe1: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00471fe8: cmp dword ptr [ecx + 0x8c], 0x30 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471fef: jl 0x472053 */ if ((fS!=fO)) goto L_00472053;
L_00471ff1:; BB(0x00471ff1);
    /* 00471ff1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00471ff4: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00471ff7: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00471ffe: cmp dword ptr [ecx + 0x8c], 0x34 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472005: jg 0x472053 */ if ((!fZ&&fS==fO)) goto L_00472053;
L_00472007:; BB(0x00472007);
    /* 00472007: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00472009: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x47200eu); f_0060ee31();
    /* 0047200e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00472011: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472013: je 0x472031 */ if (fZ) goto L_00472031;
L_00472015:; BB(0x00472015);
    /* 00472015: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00472018: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00472019: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047201c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047201d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00472020: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472021: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00472024: mov ecx, dword ptr [edx + 0x1b0] */ r_ecx = R32((u32)(r_edx+0x1b0u));
    /* 0047202a: call 0x401436 */ r_esp -= 4; W32(r_esp, 0x47202fu); f_00401436();
    /* 0047202f: jmp 0x472053 */ goto L_00472053;
L_00472031:; BB(0x00472031);
    /* 00472031: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00472034: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472035: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00472038: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472039: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047203c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047203d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00472040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472041: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00472044: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472045: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00472048: mov ecx, dword ptr [edx + 0x1b0] */ r_ecx = R32((u32)(r_edx+0x1b0u));
    /* 0047204e: call 0x4011ff */ r_esp -= 4; W32(r_esp, 0x472053u); f_004011ff();
L_00472053:; BB(0x00472053);
    /* 00472053: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00472056: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00472059: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00472060: cmp dword ptr [edx + 0x8c], 0x6c */ {  u32 a = R32((u32)(r_edx+0x8cu)); u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472067: jl 0x472099 */ if ((fS!=fO)) goto L_00472099;
L_00472069:; BB(0x00472069);
    /* 00472069: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047206c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0047206f: mov edx, dword ptr [ecx + eax*4 + 0x110] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00472076: cmp dword ptr [edx + 0x8c], 0x73 */ {  u32 a = R32((u32)(r_edx+0x8cu)); u32 b = 0x73u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047207d: jg 0x472099 */ if ((!fZ&&fS==fO)) goto L_00472099;
L_0047207f:; BB(0x0047207f);
    /* 0047207f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00472082: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472083: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00472086: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472087: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047208a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047208b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0047208e: mov ecx, dword ptr [eax + 0x1b0] */ r_ecx = R32((u32)(r_eax+0x1b0u));
    /* 00472094: call 0x401463 */ r_esp -= 4; W32(r_esp, 0x472099u); f_00401463();
L_00472099:; BB(0x00472099);
    /* 00472099: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0047209c: cmp dword ptr [ecx + 0x1b4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004720a3: jne 0x47210f */ if (!fZ) goto L_0047210f;
L_004720a5:; BB(0x004720a5);
    /* 004720a5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004720a8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004720ab: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004720b2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004720b5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004720b8: mov edx, dword ptr [eax + edx*4 + 0x110] */ r_edx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004720bf: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 004720c5: sub eax, dword ptr [edx + 0x8c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004720cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004720cd: jne 0x47210f */ if (!fZ) goto L_0047210f;
L_004720cf:; BB(0x004720cf);
    /* 004720cf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004720d2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004720d5: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004720dc: cmp dword ptr [eax + 0x8c], 0x87 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004720e6: jl 0x47210f */ if ((fS!=fO)) goto L_0047210f;
L_004720e8:; BB(0x004720e8);
    /* 004720e8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004720eb: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004720ee: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004720f5: cmp dword ptr [eax + 0x8c], 0x8e */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x8eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004720ff: jg 0x47210f */ if ((!fZ&&fS==fO)) goto L_0047210f;
L_00472101:; BB(0x00472101);
    /* 00472101: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00472104: mov ecx, dword ptr [ecx + 0x1b0] */ r_ecx = R32((u32)(r_ecx+0x1b0u));
    /* 0047210a: call 0x4016de */ r_esp -= 4; W32(r_esp, 0x47210fu); f_004016de();
L_0047210f:; BB(0x0047210f);
    /* 0047210f: mov esp, ebp */ r_esp = r_ebp;
    /* 00472111: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472112: ret  */ FN_RET(0x00471e13); r_esp += 4; return;
}

void f_00472113(void) /* FUN_00472113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472113);
    /* 00472113: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472114: mov ebp, esp */ r_ebp = r_esp;
    /* 00472116: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00472119: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0047211c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00472123: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0047212a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00472131: jmp 0x47213c */ goto L_0047213c;
L_00472133:; BB(0x00472133);
    /* 00472133: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472136: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472139: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0047213c:; BB(0x0047213c);
    /* 0047213c: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472140: jge 0x472196 */ if ((fS==fO)) goto L_00472196;
L_00472142:; BB(0x00472142);
    /* 00472142: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472145: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00472148: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0047214f: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472153: jne 0x472194 */ if (!fZ) goto L_00472194;
L_00472155:; BB(0x00472155);
    /* 00472155: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00472157: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x47215cu); f_0048ab58();
    /* 0047215c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047215f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00472162: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472166: je 0x472177 */ if (fZ) goto L_00472177;
L_00472168:; BB(0x00472168);
    /* 00472168: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047216a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047216d: call 0x472c88 */ r_esp -= 4; W32(r_esp, 0x472172u); f_00472c88();
    /* 00472172: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00472175: jmp 0x47217e */ goto L_0047217e;
L_00472177:; BB(0x00472177);
    /* 00472177: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0047217e:; BB(0x0047217e);
    /* 0047217e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00472181: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472182: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472185: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00472188: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 0047218f: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x472194u); f_005e4060();
L_00472194:; BB(0x00472194);
    /* 00472194: jmp 0x472133 */ goto L_00472133;
L_00472196:; BB(0x00472196);
    /* 00472196: mov ecx, dword ptr [0x6f6a38] */ r_ecx = R32((u32)(0x6f6a38u));
    /* 0047219c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047219f: mov dword ptr [0x6f6a38], ecx */ W32((u32)(0x6f6a38u), r_ecx);
    /* 004721a5: cmp dword ptr [0x6f6a38], 0xa */ {  u32 a = R32((u32)(0x6f6a38u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004721ac: jne 0x4721c0 */ if (!fZ) goto L_004721c0;
L_004721ae:; BB(0x004721ae);
    /* 004721ae: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004721b1: call 0x471e13 */ r_esp -= 4; W32(r_esp, 0x4721b6u); f_00471e13();
    /* 004721b6: mov dword ptr [0x6f6a38], 0 */ W32((u32)(0x6f6a38u), 0x0u);
L_004721c0:; BB(0x004721c0);
    /* 004721c0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004721c3: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 004721c9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004721cc: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004721d0: je 0x4721e0 */ if (fZ) goto L_004721e0;
L_004721d2:; BB(0x004721d2);
    /* 004721d2: cmp dword ptr [ebp - 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004721d6: je 0x4721e9 */ if (fZ) goto L_004721e9;
L_004721d8:; BB(0x004721d8);
    /* 004721d8: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004721dc: je 0x4721f2 */ if (fZ) goto L_004721f2;
L_004721de:; BB(0x004721de);
    /* 004721de: jmp 0x4721f9 */ goto L_004721f9;
L_004721e0:; BB(0x004721e0);
    /* 004721e0: mov dword ptr [ebp - 4], 0x50 */ W32((u32)(r_ebp+0xfffffffcu), 0x50u);
    /* 004721e7: jmp 0x4721f9 */ goto L_004721f9;
L_004721e9:; BB(0x004721e9);
    /* 004721e9: mov dword ptr [ebp - 4], 0x4b */ W32((u32)(r_ebp+0xfffffffcu), 0x4bu);
    /* 004721f0: jmp 0x4721f9 */ goto L_004721f9;
L_004721f2:; BB(0x004721f2);
    /* 004721f2: mov dword ptr [ebp - 4], 0x2d */ W32((u32)(r_ebp+0xfffffffcu), 0x2du);
L_004721f9:; BB(0x004721f9);
    /* 004721f9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004721fc: cmp dword ptr [ecx + 0x12c], 2 */ {  u32 a = R32((u32)(r_ecx+0x12cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472203: jne 0x47245a */ if (!fZ) goto L_0047245a;
L_00472209:; BB(0x00472209);
    /* 00472209: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00472210: jmp 0x47221b */ goto L_0047221b;
L_00472212:; BB(0x00472212);
    /* 00472212: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472215: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00472218: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0047221b:; BB(0x0047221b);
    /* 0047221b: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047221f: jge 0x47243a */ if ((fS==fO)) goto L_0047243a;
L_00472225:; BB(0x00472225);
    /* 00472225: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472228: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047222b: cmp dword ptr [ecx + eax*4 + 0x110], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472233: je 0x472405 */ if (fZ) goto L_00472405;
L_00472239:; BB(0x00472239);
    /* 00472239: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047223c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047223f: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00472246: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x47224bu); f_005ea257();
    /* 0047224b: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047224e: jne 0x472405 */ if (!fZ) goto L_00472405;
L_00472254:; BB(0x00472254);
    /* 00472254: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472257: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047225a: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00472261: cmp dword ptr [eax + 0xb0], -1 */ {  u32 a = R32((u32)(r_eax+0xb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472268: jne 0x472405 */ if (!fZ) goto L_00472405;
L_0047226e:; BB(0x0047226e);
    /* 0047226e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00472271: cmp dword ptr [ecx + 0x134], 0 */ {  u32 a = R32((u32)(r_ecx+0x134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472278: jne 0x47231c */ if (!fZ) goto L_0047231c;
L_0047227e:; BB(0x0047227e);
    /* 0047227e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00472281: cmp dword ptr [edx + 0x130], -1 */ {  u32 a = R32((u32)(r_edx+0x130u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472288: jne 0x47231c */ if (!fZ) goto L_0047231c;
L_0047228e:; BB(0x0047228e);
    /* 0047228e: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00472295: jmp 0x4722a0 */ goto L_004722a0;
L_00472297:; BB(0x00472297);
    /* 00472297: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047229a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047229d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004722a0:; BB(0x004722a0);
    /* 004722a0: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004722a4: jge 0x4722d6 */ if ((fS==fO)) goto L_004722d6;
L_004722a6:; BB(0x004722a6);
    /* 004722a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004722a9: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004722ac: je 0x4722d4 */ if (fZ) goto L_004722d4;
L_004722ae:; BB(0x004722ae);
    /* 004722ae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004722b1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004722b4: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 004722bb: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x4722c0u); f_005ea257();
    /* 004722c0: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004722c3: jne 0x4722d4 */ if (!fZ) goto L_004722d4;
L_004722c5:; BB(0x004722c5);
    /* 004722c5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004722c8: mov dword ptr [ecx + 0x134], 1 */ W32((u32)(r_ecx+0x134u), 0x1u);
    /* 004722d2: jmp 0x4722d6 */ goto L_004722d6;
L_004722d4:; BB(0x004722d4);
    /* 004722d4: jmp 0x472297 */ goto L_00472297;
L_004722d6:; BB(0x004722d6);
    /* 004722d6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004722d9: cmp dword ptr [edx + 0x134], 0 */ {  u32 a = R32((u32)(r_edx+0x134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004722e0: je 0x47231c */ if (fZ) goto L_0047231c;
L_004722e2:; BB(0x004722e2);
    /* 004722e2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004722e9: jmp 0x4722f4 */ goto L_004722f4;
L_004722eb:; BB(0x004722eb);
    /* 004722eb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004722ee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004722f1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004722f4:; BB(0x004722f4);
    /* 004722f4: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004722f8: jge 0x47231c */ if ((fS==fO)) goto L_0047231c;
L_004722fa:; BB(0x004722fa);
    /* 004722fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004722fd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00472300: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00472307: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047230a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047230d: mov eax, dword ptr [eax + 0x8c] */ r_eax = R32((u32)(r_eax+0x8cu));
    /* 00472313: mov dword ptr [edx + ecx*4 + 0x138], eax */ W32((u32)(r_edx+r_ecx*4+0x138u), r_eax);
    /* 0047231a: jmp 0x4722eb */ goto L_004722eb;
L_0047231c:; BB(0x0047231c);
    /* 0047231c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047231f: cmp dword ptr [ecx + 0x130], -1 */ {  u32 a = R32((u32)(r_ecx+0x130u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472326: jne 0x4723d4 */ if (!fZ) goto L_004723d4;
L_0047232c:; BB(0x0047232c);
    /* 0047232c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00472333: jmp 0x47233e */ goto L_0047233e;
L_00472335:; BB(0x00472335);
    /* 00472335: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00472338: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047233b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0047233e:; BB(0x0047233e);
    /* 0047233e: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472342: jge 0x4723d4 */ if ((fS==fO)) goto L_004723d4;
L_00472348:; BB(0x00472348);
    /* 00472348: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047234b: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047234e: je 0x4723b8 */ if (fZ) goto L_004723b8;
L_00472350:; BB(0x00472350);
    /* 00472350: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472353: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00472356: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0047235d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00472360: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00472363: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0047236a: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00472370: sub edx, dword ptr [ecx + 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00472376: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00472379: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047237c: mov eax, dword ptr [ecx + eax*4 + 0x110] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00472383: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 00472389: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047238c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047238f: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00472396: cmp dword ptr [eax + 0xb4], 0 */ {  u32 a = R32((u32)(r_eax+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047239d: jge 0x4723b6 */ if ((fS==fO)) goto L_004723b6;
L_0047239f:; BB(0x0047239f);
    /* 0047239f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004723a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004723a5: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004723ac: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
L_004723b6:; BB(0x004723b6);
    /* 004723b6: jmp 0x4723cf */ goto L_004723cf;
L_004723b8:; BB(0x004723b8);
    /* 004723b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004723bb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004723be: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004723c5: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
L_004723cf:; BB(0x004723cf);
    /* 004723cf: jmp 0x472335 */ goto L_00472335;
L_004723d4:; BB(0x004723d4);
    /* 004723d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004723d7: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 004723dd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004723e0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004723e3: mov dword ptr [eax + 0x130], edx */ W32((u32)(r_eax+0x130u), r_edx);
    /* 004723e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004723ec: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004723ef: mov eax, dword ptr [edx + ecx*4 + 0x110] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 004723f6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004723f9: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 004723ff: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
L_00472405:; BB(0x00472405);
    /* 00472405: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472408: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047240b: cmp dword ptr [ecx + eax*4 + 0x110], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472413: je 0x472435 */ if (fZ) goto L_00472435;
L_00472415:; BB(0x00472415);
    /* 00472415: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472418: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047241b: mov ecx, dword ptr [eax + edx*4 + 0x110] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x110u));
    /* 00472422: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x472427u); f_005ea257();
    /* 00472427: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047242a: jne 0x472435 */ if (!fZ) goto L_00472435;
L_0047242c:; BB(0x0047242c);
    /* 0047242c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047242f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00472432: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00472435:; BB(0x00472435);
    /* 00472435: jmp 0x472212 */ goto L_00472212;
L_0047243a:; BB(0x0047243a);
    /* 0047243a: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047243e: jne 0x472458 */ if (!fZ) goto L_00472458;
L_00472440:; BB(0x00472440);
    /* 00472440: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00472442: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00472448: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0047244b: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 00472450: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00472453: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472455: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x472458u); call_ind(t); }
L_00472458:; BB(0x00472458);
    /* 00472458: jmp 0x4724a5 */ goto L_004724a5;
L_0047245a:; BB(0x0047245a);
    /* 0047245a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00472461: jmp 0x47246c */ goto L_0047246c;
L_00472463:; BB(0x00472463);
    /* 00472463: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472466: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00472469: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0047246c:; BB(0x0047246c);
    /* 0047246c: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472470: jge 0x4724a5 */ if ((fS==fO)) goto L_004724a5;
L_00472472:; BB(0x00472472);
    /* 00472472: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472475: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00472478: cmp dword ptr [eax + edx*4 + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472480: je 0x4724a3 */ if (fZ) goto L_004724a3;
L_00472482:; BB(0x00472482);
    /* 00472482: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472485: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00472488: mov ecx, dword ptr [edx + ecx*4 + 0x110] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 0047248f: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x472494u); f_005ea257();
    /* 00472494: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472497: jne 0x4724a3 */ if (!fZ) goto L_004724a3;
L_00472499:; BB(0x00472499);
    /* 00472499: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047249c: call 0x471c44 */ r_esp -= 4; W32(r_esp, 0x4724a1u); f_00471c44();
    /* 004724a1: jmp 0x4724a5 */ goto L_004724a5;
L_004724a3:; BB(0x004724a3);
    /* 004724a3: jmp 0x472463 */ goto L_00472463;
L_004724a5:; BB(0x004724a5);
    /* 004724a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004724a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004724a8: ret  */ FN_RET(0x00472113); r_esp += 4; return;
}

void f_004724a9(void) /* FUN_004724a9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004724a9);
    /* 004724a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004724aa: mov ebp, esp */ r_ebp = r_esp;
    /* 004724ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004724ad: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004724b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004724b3: call 0x46e7f5 */ r_esp -= 4; W32(r_esp, 0x4724b8u); f_0046e7f5();
    /* 004724b8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004724ba: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 004724bf: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004724c2: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 004724c8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004724cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004724cd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4724d0u); call_ind(t); }
    /* 004724d0: mov esp, ebp */ r_esp = r_ebp;
    /* 004724d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004724d3: ret  */ FN_RET(0x004724a9); r_esp += 4; return;
}

void f_004724d4(void) /* FUN_004724d4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004724d4);
    /* 004724d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004724d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004724d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004724d8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004724db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004724de: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x4724e3u); f_005e9d30();
    /* 004724e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004724e6: mov dword ptr [eax], 0x635f3c */ W32((u32)(r_eax), 0x635f3cu);
    /* 004724ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004724ef: mov esp, ebp */ r_esp = r_ebp;
    /* 004724f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004724f2: ret  */ FN_RET(0x004724d4); r_esp += 4; return;
}

void f_004724f3(void) /* FUN_004724f3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004724f3);
    /* 004724f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004724f4: mov ebp, esp */ r_ebp = r_esp;
    /* 004724f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004724f7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004724fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004724fd: mov dword ptr [eax], 0x635f3c */ W32((u32)(r_eax), 0x635f3cu);
    /* 00472503: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472506: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x47250bu); f_005e9dde();
    /* 0047250b: mov esp, ebp */ r_esp = r_ebp;
    /* 0047250d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047250e: ret  */ FN_RET(0x004724f3); r_esp += 4; return;
}

void f_0047250f(void) /* FUN_0047250f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047250f);
    /* 0047250f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472510: mov ebp, esp */ r_ebp = r_esp;
    /* 00472512: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00472515: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00472518: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047251b: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047251f: jne 0x4725f5 */ if (!fZ) goto L_004725f5;
L_00472525:; BB(0x00472525);
    /* 00472525: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00472528: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047252c: jne 0x4725f5 */ if (!fZ) goto L_004725f5;
L_00472532:; BB(0x00472532);
    /* 00472532: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00472535: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 00472539: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047253c: jne 0x4725f5 */ if (!fZ) goto L_004725f5;
L_00472542:; BB(0x00472542);
    /* 00472542: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00472549: jmp 0x472554 */ goto L_00472554;
L_0047254b:; BB(0x0047254b);
    /* 0047254b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047254e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00472551: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00472554:; BB(0x00472554);
    /* 00472554: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472558: jge 0x4725f5 */ if ((fS==fO)) goto L_004725f5;
L_0047255e:; BB(0x0047255e);
    /* 0047255e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472561: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 00472566: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0047256a: call 0x453535 */ r_esp -= 4; W32(r_esp, 0x47256fu); f_00453535();
    /* 0047256f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472571: je 0x4725f0 */ if (fZ) goto L_004725f0;
L_00472573:; BB(0x00472573);
    /* 00472573: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472576: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0047257c: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00472580: call 0x4534e5 */ r_esp -= 4; W32(r_esp, 0x472585u); f_004534e5();
    /* 00472585: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472588: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0047258b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0047258e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472590: je 0x4725bc */ if (fZ) goto L_004725bc;
L_00472592:; BB(0x00472592);
    /* 00472592: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472596: jne 0x4725a8 */ if (!fZ) goto L_004725a8;
L_00472598:; BB(0x00472598);
    /* 00472598: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 0047259e: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004725a1: call 0x453443 */ r_esp -= 4; W32(r_esp, 0x4725a6u); f_00453443();
    /* 004725a6: jmp 0x4725ba */ goto L_004725ba;
L_004725a8:; BB(0x004725a8);
    /* 004725a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004725ab: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 004725b1: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 004725b5: call 0x453443 */ r_esp -= 4; W32(r_esp, 0x4725bau); f_00453443();
L_004725ba:; BB(0x004725ba);
    /* 004725ba: jmp 0x4725e4 */ goto L_004725e4;
L_004725bc:; BB(0x004725bc);
    /* 004725bc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004725c0: jne 0x4725d2 */ if (!fZ) goto L_004725d2;
L_004725c2:; BB(0x004725c2);
    /* 004725c2: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 004725c8: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004725cb: call 0x453443 */ r_esp -= 4; W32(r_esp, 0x4725d0u); f_00453443();
    /* 004725d0: jmp 0x4725e4 */ goto L_004725e4;
L_004725d2:; BB(0x004725d2);
    /* 004725d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004725d5: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 004725db: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 004725df: call 0x453443 */ r_esp -= 4; W32(r_esp, 0x4725e4u); f_00453443();
L_004725e4:; BB(0x004725e4);
    /* 004725e4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004725e7: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 004725ee: jmp 0x4725f5 */ goto L_004725f5;
L_004725f0:; BB(0x004725f0);
    /* 004725f0: jmp 0x47254b */ goto L_0047254b;
L_004725f5:; BB(0x004725f5);
    /* 004725f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004725f8: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004725fc: jne 0x47275e */ if (!fZ) goto L_0047275e;
L_00472602:; BB(0x00472602);
    /* 00472602: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00472605: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00472608: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00472609: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047260c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0047260f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472610: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472613: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472615: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472618: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x47261bu); call_ind(t); }
    /* 0047261b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047261d: je 0x47275e */ if (fZ) goto L_0047275e;
L_00472623:; BB(0x00472623);
    /* 00472623: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047262a: jmp 0x472635 */ goto L_00472635;
L_0047262c:; BB(0x0047262c);
    /* 0047262c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047262f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00472632: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00472635:; BB(0x00472635);
    /* 00472635: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472639: jge 0x472672 */ if ((fS==fO)) goto L_00472672;
L_0047263b:; BB(0x0047263b);
    /* 0047263b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047263e: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 00472643: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00472647: call 0x4534e5 */ r_esp -= 4; W32(r_esp, 0x47264cu); f_004534e5();
    /* 0047264c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047264f: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 00472655: mov eax, dword ptr [edx + ecx*4 + 0x24] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x24u));
    /* 00472659: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047265c: jne 0x472670 */ if (!fZ) goto L_00472670;
L_0047265e:; BB(0x0047265e);
    /* 0047265e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472661: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 00472667: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 0047266b: call 0x453443 */ r_esp -= 4; W32(r_esp, 0x472670u); f_00453443();
L_00472670:; BB(0x00472670);
    /* 00472670: jmp 0x47262c */ goto L_0047262c;
L_00472672:; BB(0x00472672);
    /* 00472672: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00472679: jmp 0x472684 */ goto L_00472684;
L_0047267b:; BB(0x0047267b);
    /* 0047267b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047267e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472681: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00472684:; BB(0x00472684);
    /* 00472684: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472688: jge 0x472754 */ if ((fS==fO)) goto L_00472754;
L_0047268e:; BB(0x0047268e);
    /* 0047268e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472691: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 00472697: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 0047269b: call 0x453535 */ r_esp -= 4; W32(r_esp, 0x4726a0u); f_00453535();
    /* 004726a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004726a2: jne 0x4726f8 */ if (!fZ) goto L_004726f8;
L_004726a4:; BB(0x004726a4);
    /* 004726a4: push 0x683cfc */ { u32 v = 0x683cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 004726a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004726ac: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 004726b2: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 004726b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004726b9: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 004726be: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 004726c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004726c4: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x4726c7u); call_ind(t); }
    /* 004726c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004726c8: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x4726cdu); f_006240c0();
    /* 004726cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004726d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004726d2: jne 0x4726f8 */ if (!fZ) goto L_004726f8;
L_004726d4:; BB(0x004726d4);
    /* 004726d4: push 0x683d00 */ { u32 v = 0x683d00u; r_esp -= 4; W32(r_esp, v); }
    /* 004726d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004726dc: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 004726e2: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 004726e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004726e9: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 004726ef: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 004726f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004726f5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4726f8u); call_ind(t); }
L_004726f8:; BB(0x004726f8);
    /* 004726f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004726fb: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00472701: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00472705: call 0x453535 */ r_esp -= 4; W32(r_esp, 0x47270au); f_00453535();
    /* 0047270a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047270c: jne 0x47274f */ if (!fZ) goto L_0047274f;
L_0047270e:; BB(0x0047270e);
    /* 0047270e: push 0x683d04 */ { u32 v = 0x683d04u; r_esp -= 4; W32(r_esp, v); }
    /* 00472713: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472716: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 0047271b: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0047271f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472722: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 00472727: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0047272b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047272d: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x472730u); call_ind(t); }
    /* 00472730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472731: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x472736u); f_006240c0();
    /* 00472736: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00472739: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047273b: jne 0x47274f */ if (!fZ) goto L_0047274f;
L_0047273d:; BB(0x0047273d);
    /* 0047273d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472740: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 00472746: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 0047274a: call 0x4727b3 */ r_esp -= 4; W32(r_esp, 0x47274fu); f_004727b3();
L_0047274f:; BB(0x0047274f);
    /* 0047274f: jmp 0x47267b */ goto L_0047267b;
L_00472754:; BB(0x00472754);
    /* 00472754: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472757: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_0047275e:; BB(0x0047275e);
    /* 0047275e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00472761: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00472764: mov esp, ebp */ r_esp = r_ebp;
    /* 00472766: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472767: ret 4 */ FN_RET(0x0047250f); r_esp += 8; return;
}

void f_00472797(void) /* FUN_00472797 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472797);
    /* 00472797: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472798: mov ebp, esp */ r_ebp = r_esp;
    /* 0047279a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047279b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047279e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004727a1: mov dword ptr [eax], 0x635f84 */ W32((u32)(r_eax), 0x635f84u);
    /* 004727a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004727aa: call 0x452de0 */ r_esp -= 4; W32(r_esp, 0x4727afu); f_00452de0();
    /* 004727af: mov esp, ebp */ r_esp = r_ebp;
    /* 004727b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004727b2: ret  */ FN_RET(0x00472797); r_esp += 4; return;
}

void f_004727b3(void) /* FUN_004727b3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004727b3);
    /* 004727b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004727b4: mov ebp, esp */ r_ebp = r_esp;
    /* 004727b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004727b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004727ba: push 0x6f6a80 */ { u32 v = 0x6f6a80u; r_esp -= 4; W32(r_esp, v); }
    /* 004727bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004727c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004727c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004727c7: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4727cau); call_ind(t); }
    /* 004727ca: mov esp, ebp */ r_esp = r_ebp;
    /* 004727cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004727cd: ret  */ FN_RET(0x004727b3); r_esp += 4; return;
}

void f_004727ce(void) /* FUN_004727ce */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004727ce);
    /* 004727ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004727cf: mov ebp, esp */ r_ebp = r_esp;
    /* 004727d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004727d4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004727d7: mov ax, word ptr [0x683d08] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x683d08u))) & 0xffffu);
    /* 004727dd: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 004727e1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004727e4: mov dl, byte ptr [ecx + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x14u))) & 0xffu);
    /* 004727e7: mov byte ptr [ebp - 0xc], dl */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_edx);
    /* 004727ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004727ed: call 0x453535 */ r_esp -= 4; W32(r_esp, 0x4727f2u); f_00453535();
    /* 004727f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004727f4: je 0x472925 */ if (fZ) goto L_00472925;
L_004727fa:; BB(0x004727fa);
    /* 004727fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004727fd: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472801: jne 0x472925 */ if (!fZ) goto L_00472925;
L_00472807:; BB(0x00472807);
    /* 00472807: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047280a: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0047280e: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472811: je 0x472898 */ if (fZ) goto L_00472898;
L_00472817:; BB(0x00472817);
    /* 00472817: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047281a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047281c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047281f: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x472822u); call_ind(t); }
    /* 00472822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472823: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x472828u); f_00625430();
    /* 00472828: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047282b: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047282e: jle 0x472837 */ if ((fZ||fS!=fO)) goto L_00472837;
L_00472830:; BB(0x00472830);
    /* 00472830: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00472832: jmp 0x472958 */ goto L_00472958;
L_00472837:; BB(0x00472837);
    /* 00472837: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047283a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047283c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047283f: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x472842u); call_ind(t); }
    /* 00472842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472843: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x472848u); f_00625430();
    /* 00472848: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047284b: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047284e: jne 0x47286c */ if (!fZ) goto L_0047286c;
L_00472850:; BB(0x00472850);
    /* 00472850: push 0x683d0c */ { u32 v = 0x683d0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00472855: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00472858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472859: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x47285eu); f_006240c0();
    /* 0047285e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00472861: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472863: je 0x47286c */ if (fZ) goto L_0047286c;
L_00472865:; BB(0x00472865);
    /* 00472865: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00472867: jmp 0x472958 */ goto L_00472958;
L_0047286c:; BB(0x0047286c);
    /* 0047286c: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0047286f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472870: call 0x625430 */ r_esp -= 4; W32(r_esp, 0x472875u); f_00625430();
    /* 00472875: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00472878: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047287a: jne 0x472898 */ if (!fZ) goto L_00472898;
L_0047287c:; BB(0x0047287c);
    /* 0047287c: push 0x683d10 */ { u32 v = 0x683d10u; r_esp -= 4; W32(r_esp, v); }
    /* 00472881: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00472884: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00472885: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x47288au); f_006240c0();
    /* 0047288a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047288d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047288f: je 0x472898 */ if (fZ) goto L_00472898;
L_00472891:; BB(0x00472891);
    /* 00472891: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00472893: jmp 0x472958 */ goto L_00472958;
L_00472898:; BB(0x00472898);
    /* 00472898: push 0x6f6a84 */ { u32 v = 0x6f6a84u; r_esp -= 4; W32(r_esp, v); }
    /* 0047289d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004728a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004728a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004728a5: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4728a8u); call_ind(t); }
    /* 004728a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004728a9: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x4728aeu); f_006240c0();
    /* 004728ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004728b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004728b3: je 0x472925 */ if (fZ) goto L_00472925;
L_004728b5:; BB(0x004728b5);
    /* 004728b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004728bc: jmp 0x4728c7 */ goto L_004728c7;
L_004728be:; BB(0x004728be);
    /* 004728be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004728c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004728c4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004728c7:; BB(0x004728c7);
    /* 004728c7: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004728cb: jge 0x472925 */ if ((fS==fO)) goto L_00472925;
L_004728cd:; BB(0x004728cd);
    /* 004728cd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004728d0: mov edx, dword ptr [ecx + 0x89c] */ r_edx = R32((u32)(r_ecx+0x89cu));
    /* 004728d6: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004728d9: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004728dc: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 004728e1: mov ecx, dword ptr [eax + edx*4 + 0x4c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 004728e5: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x4728eau); f_005d71b9();
    /* 004728ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004728ec: je 0x472923 */ if (fZ) goto L_00472923;
L_004728ee:; BB(0x004728ee);
    /* 004728ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004728f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004728f2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004728f5: call 0x452e5d */ r_esp -= 4; W32(r_esp, 0x4728fau); f_00452e5d();
    /* 004728fa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004728fd: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00472903: call 0x470c7c */ r_esp -= 4; W32(r_esp, 0x472908u); f_00470c7c();
    /* 00472908: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 0047290e: call 0x471a83 */ r_esp -= 4; W32(r_esp, 0x472913u); f_00471a83();
    /* 00472913: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00472919: call 0x470e94 */ r_esp -= 4; W32(r_esp, 0x47291eu); f_00470e94();
    /* 0047291e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472921: jmp 0x472958 */ goto L_00472958;
L_00472923:; BB(0x00472923);
    /* 00472923: jmp 0x4728be */ goto L_004728be;
L_00472925:; BB(0x00472925);
    /* 00472925: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00472928: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00472929: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047292c: call 0x452e5d */ r_esp -= 4; W32(r_esp, 0x472931u); f_00452e5d();
    /* 00472931: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00472934: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 0047293a: call 0x470c7c */ r_esp -= 4; W32(r_esp, 0x47293fu); f_00470c7c();
    /* 0047293f: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00472945: call 0x471a83 */ r_esp -= 4; W32(r_esp, 0x47294au); f_00471a83();
    /* 0047294a: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00472950: call 0x470e94 */ r_esp -= 4; W32(r_esp, 0x472955u); f_00470e94();
    /* 00472955: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_00472958:; BB(0x00472958);
    /* 00472958: mov esp, ebp */ r_esp = r_ebp;
    /* 0047295a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047295b: ret 4 */ FN_RET(0x004727ce); r_esp += 8; return;
}

void f_0047295e(void) /* FUN_0047295e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047295e);
    /* 0047295e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047295f: mov ebp, esp */ r_ebp = r_esp;
    /* 00472961: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472962: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472965: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472968: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x47296du); f_005d5d20();
    /* 0047296d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472970: mov dword ptr [eax], 0x635fd4 */ W32((u32)(r_eax), 0x635fd4u);
    /* 00472976: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472979: mov esp, ebp */ r_esp = r_ebp;
    /* 0047297b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047297c: ret  */ FN_RET(0x0047295e); r_esp += 4; return;
}

void f_0047297d(void) /* FUN_0047297d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047297d);
    /* 0047297d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047297e: mov ebp, esp */ r_ebp = r_esp;
    /* 00472980: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472981: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472984: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472987: mov dword ptr [eax], 0x635fd4 */ W32((u32)(r_eax), 0x635fd4u);
    /* 0047298d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472990: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x472995u); f_005d5dfb();
    /* 00472995: mov esp, ebp */ r_esp = r_ebp;
    /* 00472997: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472998: ret  */ FN_RET(0x0047297d); r_esp += 4; return;
}

void f_00472999(void) /* FUN_00472999 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472999);
    /* 00472999: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047299a: mov ebp, esp */ r_ebp = r_esp;
    /* 0047299c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047299d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004729a0: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 004729a6: call 0x470ecd */ r_esp -= 4; W32(r_esp, 0x4729abu); f_00470ecd();
    /* 004729ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004729ad: je 0x4729df */ if (fZ) goto L_004729df;
L_004729af:; BB(0x004729af);
    /* 004729af: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004729b1: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 004729b6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004729b9: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 004729bf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004729c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004729c4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4729c7u); call_ind(t); }
    /* 004729c7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004729c9: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 004729ce: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004729d1: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 004729d7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004729da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004729dc: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4729dfu); call_ind(t); }
L_004729df:; BB(0x004729df);
    /* 004729df: mov esp, ebp */ r_esp = r_ebp;
    /* 004729e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004729e2: ret  */ FN_RET(0x00472999); r_esp += 4; return;
}

void f_004729e3(void) /* FUN_004729e3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004729e3);
    /* 004729e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004729e4: mov ebp, esp */ r_ebp = r_esp;
    /* 004729e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004729e7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004729ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004729ed: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x4729f2u); f_005d5d20();
    /* 004729f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004729f5: mov dword ptr [eax], 0x636044 */ W32((u32)(r_eax), 0x636044u);
    /* 004729fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004729fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00472a00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472a01: ret  */ FN_RET(0x004729e3); r_esp += 4; return;
}

void f_00472a02(void) /* FUN_00472a02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472a02);
    /* 00472a02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472a03: mov ebp, esp */ r_ebp = r_esp;
    /* 00472a05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472a06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472a09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472a0c: mov dword ptr [eax], 0x636044 */ W32((u32)(r_eax), 0x636044u);
    /* 00472a12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472a15: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x472a1au); f_005d5dfb();
    /* 00472a1a: mov esp, ebp */ r_esp = r_ebp;
    /* 00472a1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472a1d: ret  */ FN_RET(0x00472a02); r_esp += 4; return;
}

void f_00472a1e(void) /* FUN_00472a1e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472a1e);
    /* 00472a1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472a1f: mov ebp, esp */ r_ebp = r_esp;
    /* 00472a21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472a22: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472a25: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00472a2b: call 0x4701a2 */ r_esp -= 4; W32(r_esp, 0x472a30u); f_004701a2();
    /* 00472a30: mov esp, ebp */ r_esp = r_ebp;
    /* 00472a32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472a33: ret  */ FN_RET(0x00472a1e); r_esp += 4; return;
}

void f_00472a34(void) /* FUN_00472a34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472a34);
    /* 00472a34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472a35: mov ebp, esp */ r_ebp = r_esp;
    /* 00472a37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472a38: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472a3b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00472a3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472a3f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00472a42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472a43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472a46: call 0x5d4ec0 */ r_esp -= 4; W32(r_esp, 0x472a4bu); f_005d4ec0();
    /* 00472a4b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472a4e: mov dword ptr [edx], 0x6360b4 */ W32((u32)(r_edx), 0x6360b4u);
    /* 00472a54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472a57: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00472a5a: mov dword ptr [eax + 0x104], ecx */ W32((u32)(r_eax+0x104u), r_ecx);
    /* 00472a60: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472a63: mov esp, ebp */ r_esp = r_ebp;
    /* 00472a65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472a66: ret 0xc */ FN_RET(0x00472a34); r_esp += 16; return;
}

void f_00472a69(void) /* FUN_00472a69 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472a69);
    /* 00472a69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472a6a: mov ebp, esp */ r_ebp = r_esp;
    /* 00472a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472a6d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472a70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472a73: mov dword ptr [eax], 0x6360b4 */ W32((u32)(r_eax), 0x6360b4u);
    /* 00472a79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472a7c: call 0x5d4efe */ r_esp -= 4; W32(r_esp, 0x472a81u); f_005d4efe();
    /* 00472a81: mov esp, ebp */ r_esp = r_ebp;
    /* 00472a83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472a84: ret  */ FN_RET(0x00472a69); r_esp += 4; return;
}

void f_00472a85(void) /* FUN_00472a85 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472a85);
    /* 00472a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472a86: mov ebp, esp */ r_ebp = r_esp;
    /* 00472a88: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00472a8b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00472a8c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00472a8f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472a92: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472a99: je 0x472aad */ if (fZ) goto L_00472aad;
L_00472a9b:; BB(0x00472a9b);
    /* 00472a9b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472a9e: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472aa2: jne 0x472aad */ if (!fZ) goto L_00472aad;
L_00472aa4:; BB(0x00472aa4);
    /* 00472aa4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00472aa7: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472aab: je 0x472abe */ if (fZ) goto L_00472abe;
L_00472aad:; BB(0x00472aad);
    /* 00472aad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472ab1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472ab4: call 0x5d7062 */ r_esp -= 4; W32(r_esp, 0x472ab9u); f_005d7062();
    /* 00472ab9: jmp 0x472c81 */ goto L_00472c81;
L_00472abe:; BB(0x00472abe);
    /* 00472abe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472ac1: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x472ac6u); f_005d71b9();
    /* 00472ac6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00472ac9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00472acc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472acd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472ad0: call 0x5d7062 */ r_esp -= 4; W32(r_esp, 0x472ad5u); f_005d7062();
    /* 00472ad5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472ad9: je 0x472af2 */ if (fZ) goto L_00472af2;
L_00472adb:; BB(0x00472adb);
    /* 00472adb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472ade: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x472ae3u); f_005d71b9();
    /* 00472ae3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472ae5: jne 0x472af2 */ if (!fZ) goto L_00472af2;
L_00472ae7:; BB(0x00472ae7);
    /* 00472ae7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00472aea: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00472aed: jmp 0x472c81 */ goto L_00472c81;
L_00472af2:; BB(0x00472af2);
    /* 00472af2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472af6: jne 0x472b6a */ if (!fZ) goto L_00472b6a;
L_00472af8:; BB(0x00472af8);
    /* 00472af8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472afb: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x472b00u); f_005d71b9();
    /* 00472b00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472b02: je 0x472b6a */ if (fZ) goto L_00472b6a;
L_00472b04:; BB(0x00472b04);
    /* 00472b04: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00472b0b: jmp 0x472b16 */ goto L_00472b16;
L_00472b0d:; BB(0x00472b0d);
    /* 00472b0d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00472b10: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472b13: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00472b16:; BB(0x00472b16);
    /* 00472b16: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472b19: mov ecx, dword ptr [ecx + 0x100] */ r_ecx = R32((u32)(r_ecx+0x100u));
    /* 00472b1f: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x472b24u); f_005dd4d2();
    /* 00472b24: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472b27: jge 0x472b6a */ if ((fS==fO)) goto L_00472b6a;
L_00472b29:; BB(0x00472b29);
    /* 00472b29: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00472b2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00472b2d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472b30: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 00472b36: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x472b3bu); f_005dd560();
    /* 00472b3b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00472b3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472b41: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472b44: je 0x472b68 */ if (fZ) goto L_00472b68;
L_00472b46:; BB(0x00472b46);
    /* 00472b46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472b49: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x472b4eu); f_005d71b9();
    /* 00472b4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472b50: je 0x472b68 */ if (fZ) goto L_00472b68;
L_00472b52:; BB(0x00472b52);
    /* 00472b52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472b55: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472b57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472b5a: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x472b5du); call_ind(t); }
    /* 00472b5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472b60: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472b62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472b65: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x472b68u); call_ind(t); }
L_00472b68:; BB(0x00472b68);
    /* 00472b68: jmp 0x472b0d */ goto L_00472b0d;
L_00472b6a:; BB(0x00472b6a);
    /* 00472b6a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472b6d: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 00472b73: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 00472b79: cmp dword ptr [edx + ecx*4 + 0x110], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472b81: je 0x472c7b */ if (fZ) goto L_00472c7b;
L_00472b87:; BB(0x00472b87);
    /* 00472b87: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472b8a: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 00472b90: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 00472b96: mov esi, dword ptr [edx + ecx*4 + 0x110] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x110u));
    /* 00472b9d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472ba0: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 00472ba6: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 00472bac: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 00472bb0: call 0x5d51df */ r_esp -= 4; W32(r_esp, 0x472bb5u); f_005d51df();
    /* 00472bb5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00472bb6: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00472bbb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00472bbb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00472bbb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00472bbd: cmp dword ptr [esi + 0x88], edx */ {  u32 a = R32((u32)(r_esi+0x88u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472bc3: je 0x472c7b */ if (fZ) goto L_00472c7b;
L_00472bc9:; BB(0x00472bc9);
    /* 00472bc9: push 0x683d14 */ { u32 v = 0x683d14u; r_esp -= 4; W32(r_esp, v); }
    /* 00472bce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472bd1: mov eax, dword ptr [edx + 0x104] */ r_eax = R32((u32)(r_edx+0x104u));
    /* 00472bd7: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00472bdd: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00472be1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472be4: mov eax, dword ptr [edx + 0x104] */ r_eax = R32((u32)(r_edx+0x104u));
    /* 00472bea: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 00472bf0: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 00472bf4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00472bf6: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x472bf9u); call_ind(t); }
    /* 00472bf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472bfa: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x472bffu); f_006240c0();
    /* 00472bff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00472c02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472c04: jne 0x472c35 */ if (!fZ) goto L_00472c35;
L_00472c06:; BB(0x00472c06);
    /* 00472c06: push 0x683d18 */ { u32 v = 0x683d18u; r_esp -= 4; W32(r_esp, v); }
    /* 00472c0b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472c0e: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 00472c14: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 00472c1a: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00472c1e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472c21: mov edx, dword ptr [eax + 0x104] */ r_edx = R32((u32)(r_eax+0x104u));
    /* 00472c27: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 00472c2c: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00472c30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472c32: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x472c35u); call_ind(t); }
L_00472c35:; BB(0x00472c35);
    /* 00472c35: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472c38: mov edx, dword ptr [ecx + 0x104] */ r_edx = R32((u32)(r_ecx+0x104u));
    /* 00472c3e: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 00472c43: mov ecx, dword ptr [eax + edx*4 + 0x38] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 00472c47: call 0x5d51df */ r_esp -= 4; W32(r_esp, 0x472c4cu); f_005d51df();
    /* 00472c4c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00472c4d: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00472c52: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00472c52, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00472c52, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00472c54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00472c55: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472c58: mov eax, dword ptr [edx + 0x104] */ r_eax = R32((u32)(r_edx+0x104u));
    /* 00472c5e: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00472c64: mov ecx, dword ptr [ecx + eax*4 + 0x110] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x110u));
    /* 00472c6b: call 0x46d360 */ r_esp -= 4; W32(r_esp, 0x472c70u); f_0046d360();
    /* 00472c70: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00472c76: call 0x471a83 */ r_esp -= 4; W32(r_esp, 0x472c7bu); f_00471a83();
L_00472c7b:; BB(0x00472c7b);
    /* 00472c7b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00472c7e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
L_00472c81:; BB(0x00472c81);
    /* 00472c81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00472c82: mov esp, ebp */ r_esp = r_ebp;
    /* 00472c84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472c85: ret 4 */ FN_RET(0x00472a85); r_esp += 8; return;
}

void f_00472cad(void) /* FUN_00472cad */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472cad);
    /* 00472cad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472cae: mov ebp, esp */ r_ebp = r_esp;
    /* 00472cb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472cb1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472cb4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472cb7: mov dword ptr [eax], 0x63612c */ W32((u32)(r_eax), 0x63612cu);
    /* 00472cbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472cc0: call 0x5d7927 */ r_esp -= 4; W32(r_esp, 0x472cc5u); f_005d7927();
    /* 00472cc5: mov esp, ebp */ r_esp = r_ebp;
    /* 00472cc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472cc8: ret  */ FN_RET(0x00472cad); r_esp += 4; return;
}

void f_00472cc9(void) /* FUN_00472cc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472cc9);
    /* 00472cc9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472cca: mov ebp, esp */ r_ebp = r_esp;
    /* 00472ccc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00472ccf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00472cd2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472cd5: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472cd9: jne 0x472cdd */ if (!fZ) goto L_00472cdd;
L_00472cdb:; BB(0x00472cdb);
    /* 00472cdb: jmp 0x472d3f */ goto L_00472d3f;
L_00472cdd:; BB(0x00472cdd);
    /* 00472cdd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472ce0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472ce2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472ce5: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x472ce8u); call_ind(t); }
    /* 00472ce8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00472ceb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472cee: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472cf1: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x472cf6u); f_005ea257();
    /* 00472cf6: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472cf9: je 0x472d3f */ if (fZ) goto L_00472d3f;
L_00472cfb:; BB(0x00472cfb);
    /* 00472cfb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472cfe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472d01: cmp edx, dword ptr [ecx + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472d04: jne 0x472d25 */ if (!fZ) goto L_00472d25;
L_00472d06:; BB(0x00472d06);
    /* 00472d06: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472d09: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00472d0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472d0d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472d10: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00472d13: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x472d18u); f_005ea1cf();
    /* 00472d18: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472d1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00472d1d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472d20: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x472d23u); call_ind(t); }
    /* 00472d23: jmp 0x472d3f */ goto L_00472d3f;
L_00472d25:; BB(0x00472d25);
    /* 00472d25: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472d28: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472d2b: call 0x46d6cd */ r_esp -= 4; W32(r_esp, 0x472d30u); f_0046d6cd();
    /* 00472d30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472d33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472d34: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00472d37: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00472d3a: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x472d3fu); f_005ea1cf();
L_00472d3f:; BB(0x00472d3f);
    /* 00472d3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00472d41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472d42: ret  */ FN_RET(0x00472cc9); r_esp += 4; return;
}

void f_00472d43(void) /* FUN_00472d43 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472d43);
    /* 00472d43: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472d44: mov ebp, esp */ r_ebp = r_esp;
    /* 00472d46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472d47: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472d4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472d4d: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x472d52u); f_005d5d20();
    /* 00472d52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472d55: mov dword ptr [eax], 0x636144 */ W32((u32)(r_eax), 0x636144u);
    /* 00472d5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472d5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00472d60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472d61: ret  */ FN_RET(0x00472d43); r_esp += 4; return;
}

void f_00472d62(void) /* FUN_00472d62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472d62);
    /* 00472d62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472d63: mov ebp, esp */ r_ebp = r_esp;
    /* 00472d65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472d66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472d69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472d6c: mov dword ptr [eax], 0x636144 */ W32((u32)(r_eax), 0x636144u);
    /* 00472d72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472d75: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x472d7au); f_005d5dfb();
    /* 00472d7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00472d7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472d7d: ret  */ FN_RET(0x00472d62); r_esp += 4; return;
}

void f_00472d7e(void) /* FUN_00472d7e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472d7e);
    /* 00472d7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472d7f: mov ebp, esp */ r_ebp = r_esp;
    /* 00472d81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472d82: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472d85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472d87: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 00472d8c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472d8f: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00472d95: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00472d98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00472d9a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x472d9du); call_ind(t); }
    /* 00472d9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00472d9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472da0: ret  */ FN_RET(0x00472d7e); r_esp += 4; return;
}

void f_00472da1(void) /* FUN_00472da1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472da1);
    /* 00472da1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472da2: mov ebp, esp */ r_ebp = r_esp;
    /* 00472da4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472da5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472da8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472dab: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x472db0u); f_005d5d20();
    /* 00472db0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472db3: mov dword ptr [eax], 0x6361b4 */ W32((u32)(r_eax), 0x6361b4u);
    /* 00472db9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472dbc: mov esp, ebp */ r_esp = r_ebp;
    /* 00472dbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472dbf: ret  */ FN_RET(0x00472da1); r_esp += 4; return;
}

void f_00472dc0(void) /* FUN_00472dc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472dc0);
    /* 00472dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00472dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472dc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472dc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472dca: mov dword ptr [eax], 0x6361b4 */ W32((u32)(r_eax), 0x6361b4u);
    /* 00472dd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472dd3: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x472dd8u); f_005d5dfb();
    /* 00472dd8: mov esp, ebp */ r_esp = r_ebp;
    /* 00472dda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472ddb: ret  */ FN_RET(0x00472dc0); r_esp += 4; return;
}

void f_00472ddc(void) /* FUN_00472ddc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472ddc);
    /* 00472ddc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472ddd: mov ebp, esp */ r_ebp = r_esp;
    /* 00472ddf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472de0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472de3: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 00472de8: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00472ded: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00472def: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00472df5: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x472df8u); call_ind(t); }
    /* 00472df8: mov esp, ebp */ r_esp = r_ebp;
    /* 00472dfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472dfb: ret  */ FN_RET(0x00472ddc); r_esp += 4; return;
}

void f_00472dfc(void) /* FUN_00472dfc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472dfc);
    /* 00472dfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472dfd: mov ebp, esp */ r_ebp = r_esp;
    /* 00472dff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472e00: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472e03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472e06: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x472e0bu); f_005d5d20();
    /* 00472e0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472e0e: mov dword ptr [eax], 0x636224 */ W32((u32)(r_eax), 0x636224u);
    /* 00472e14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472e17: mov esp, ebp */ r_esp = r_ebp;
    /* 00472e19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472e1a: ret  */ FN_RET(0x00472dfc); r_esp += 4; return;
}

void f_00472e1b(void) /* FUN_00472e1b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472e1b);
    /* 00472e1b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472e1c: mov ebp, esp */ r_ebp = r_esp;
    /* 00472e1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472e1f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472e22: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472e25: mov dword ptr [eax], 0x636224 */ W32((u32)(r_eax), 0x636224u);
    /* 00472e2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472e2e: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x472e33u); f_005d5dfb();
    /* 00472e33: mov esp, ebp */ r_esp = r_ebp;
    /* 00472e35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472e36: ret  */ FN_RET(0x00472e1b); r_esp += 4; return;
}

void f_00472e37(void) /* FUN_00472e37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472e37);
    /* 00472e37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472e38: mov ebp, esp */ r_ebp = r_esp;
    /* 00472e3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472e3b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472e3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472e40: mov eax, dword ptr [0x6f6a88] */ r_eax = R32((u32)(0x6f6a88u));
    /* 00472e45: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472e48: mov edx, dword ptr [0x6f6a88] */ r_edx = R32((u32)(0x6f6a88u));
    /* 00472e4e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00472e51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00472e53: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x472e56u); call_ind(t); }
    /* 00472e56: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 00472e5b: mov ecx, dword ptr [eax + 0x1b0] */ r_ecx = R32((u32)(r_eax+0x1b0u));
    /* 00472e61: call 0x4010f2 */ r_esp -= 4; W32(r_esp, 0x472e66u); f_004010f2();
    /* 00472e66: mov esp, ebp */ r_esp = r_ebp;
    /* 00472e68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472e69: ret  */ FN_RET(0x00472e37); r_esp += 4; return;
}

void f_00472e70(void) /* FUN_00472e70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472e70);
    /* 00472e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00472e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472e77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472e7a: call 0x46d12d */ r_esp -= 4; W32(r_esp, 0x472e7fu); f_0046d12d();
    /* 00472e7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472e82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00472e85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472e87: je 0x472e95 */ if (fZ) goto L_00472e95;
L_00472e89:; BB(0x00472e89);
    /* 00472e89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472e8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472e8d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x472e92u); f_0048ac1b();
    /* 00472e92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00472e95:; BB(0x00472e95);
    /* 00472e95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472e98: mov esp, ebp */ r_esp = r_ebp;
    /* 00472e9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472e9b: ret 4 */ FN_RET(0x00472e70); r_esp += 8; return;
}

void f_00472ea0(void) /* FUN_00472ea0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472ea0);
    /* 00472ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00472ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472ea7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472eaa: call 0x46d1a3 */ r_esp -= 4; W32(r_esp, 0x472eafu); f_0046d1a3();
    /* 00472eaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472eb2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00472eb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472eb7: je 0x472ec5 */ if (fZ) goto L_00472ec5;
L_00472eb9:; BB(0x00472eb9);
    /* 00472eb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472ebc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472ebd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x472ec2u); f_0048ac1b();
    /* 00472ec2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00472ec5:; BB(0x00472ec5);
    /* 00472ec5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472ec8: mov esp, ebp */ r_esp = r_ebp;
    /* 00472eca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472ecb: ret 4 */ FN_RET(0x00472ea0); r_esp += 8; return;
}

void f_00472ed0(void) /* FUN_00472ed0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472ed0);
    /* 00472ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00472ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472ed7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472eda: call 0x46dc9c */ r_esp -= 4; W32(r_esp, 0x472edfu); f_0046dc9c();
    /* 00472edf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472ee2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00472ee5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472ee7: je 0x472ef5 */ if (fZ) goto L_00472ef5;
L_00472ee9:; BB(0x00472ee9);
    /* 00472ee9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472eec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472eed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x472ef2u); f_0048ac1b();
    /* 00472ef2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00472ef5:; BB(0x00472ef5);
    /* 00472ef5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472ef8: mov esp, ebp */ r_esp = r_ebp;
    /* 00472efa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472efb: ret 4 */ FN_RET(0x00472ed0); r_esp += 8; return;
}

void f_00472f00(void) /* FUN_00472f00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472f00);
    /* 00472f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00472f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472f07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472f0a: call 0x4724f3 */ r_esp -= 4; W32(r_esp, 0x472f0fu); f_004724f3();
    /* 00472f0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472f12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00472f15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472f17: je 0x472f25 */ if (fZ) goto L_00472f25;
L_00472f19:; BB(0x00472f19);
    /* 00472f19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472f1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472f1d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x472f22u); f_0048ac1b();
    /* 00472f22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00472f25:; BB(0x00472f25);
    /* 00472f25: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472f28: mov esp, ebp */ r_esp = r_ebp;
    /* 00472f2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472f2b: ret 4 */ FN_RET(0x00472f00); r_esp += 8; return;
}

void f_00472f30(void) /* FUN_00472f30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472f30);
    /* 00472f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00472f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472f37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472f3a: call 0x472797 */ r_esp -= 4; W32(r_esp, 0x472f3fu); f_00472797();
    /* 00472f3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472f42: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00472f45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472f47: je 0x472f55 */ if (fZ) goto L_00472f55;
L_00472f49:; BB(0x00472f49);
    /* 00472f49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472f4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472f4d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x472f52u); f_0048ac1b();
    /* 00472f52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00472f55:; BB(0x00472f55);
    /* 00472f55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472f58: mov esp, ebp */ r_esp = r_ebp;
    /* 00472f5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472f5b: ret 4 */ FN_RET(0x00472f30); r_esp += 8; return;
}

void f_00472f60(void) /* FUN_00472f60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472f60);
    /* 00472f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00472f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472f64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472f67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472f6a: call 0x47297d */ r_esp -= 4; W32(r_esp, 0x472f6fu); f_0047297d();
    /* 00472f6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472f72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00472f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472f77: je 0x472f85 */ if (fZ) goto L_00472f85;
L_00472f79:; BB(0x00472f79);
    /* 00472f79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472f7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472f7d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x472f82u); f_0048ac1b();
    /* 00472f82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00472f85:; BB(0x00472f85);
    /* 00472f85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472f88: mov esp, ebp */ r_esp = r_ebp;
    /* 00472f8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472f8b: ret 4 */ FN_RET(0x00472f60); r_esp += 8; return;
}

void f_00472f90(void) /* FUN_00472f90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472f90);
    /* 00472f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00472f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472f97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472f9a: call 0x472a02 */ r_esp -= 4; W32(r_esp, 0x472f9fu); f_00472a02();
    /* 00472f9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472fa2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00472fa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472fa7: je 0x472fb5 */ if (fZ) goto L_00472fb5;
L_00472fa9:; BB(0x00472fa9);
    /* 00472fa9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472fac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472fad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x472fb2u); f_0048ac1b();
    /* 00472fb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00472fb5:; BB(0x00472fb5);
    /* 00472fb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472fb8: mov esp, ebp */ r_esp = r_ebp;
    /* 00472fba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472fbb: ret 4 */ FN_RET(0x00472f90); r_esp += 8; return;
}

void f_00472fc0(void) /* FUN_00472fc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472fc0);
    /* 00472fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00472fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472fc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472fca: call 0x472a69 */ r_esp -= 4; W32(r_esp, 0x472fcfu); f_00472a69();
    /* 00472fcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00472fd2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00472fd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472fd7: je 0x472fe5 */ if (fZ) goto L_00472fe5;
L_00472fd9:; BB(0x00472fd9);
    /* 00472fd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472fdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472fdd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x472fe2u); f_0048ac1b();
    /* 00472fe2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00472fe5:; BB(0x00472fe5);
    /* 00472fe5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472fe8: mov esp, ebp */ r_esp = r_ebp;
    /* 00472fea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00472feb: ret 4 */ FN_RET(0x00472fc0); r_esp += 8; return;
}

void f_00472ff0(void) /* FUN_00472ff0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00472ff0);
    /* 00472ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00472ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00472ff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472ff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00472ff7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00472ffa: call 0x472cad */ r_esp -= 4; W32(r_esp, 0x472fffu); f_00472cad();
    /* 00472fff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00473002: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00473005: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473007: je 0x473015 */ if (fZ) goto L_00473015;
L_00473009:; BB(0x00473009);
    /* 00473009: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047300c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047300d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x473012u); f_0048ac1b();
    /* 00473012: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00473015:; BB(0x00473015);
    /* 00473015: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00473018: mov esp, ebp */ r_esp = r_ebp;
    /* 0047301a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047301b: ret 4 */ FN_RET(0x00472ff0); r_esp += 8; return;
}

void f_00473020(void) /* FUN_00473020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473020);
    /* 00473020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473021: mov ebp, esp */ r_ebp = r_esp;
    /* 00473023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00473027: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047302a: call 0x472d62 */ r_esp -= 4; W32(r_esp, 0x47302fu); f_00472d62();
    /* 0047302f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00473032: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00473035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473037: je 0x473045 */ if (fZ) goto L_00473045;
L_00473039:; BB(0x00473039);
    /* 00473039: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047303c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047303d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x473042u); f_0048ac1b();
    /* 00473042: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00473045:; BB(0x00473045);
    /* 00473045: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00473048: mov esp, ebp */ r_esp = r_ebp;
    /* 0047304a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047304b: ret 4 */ FN_RET(0x00473020); r_esp += 8; return;
}

void f_00473050(void) /* FUN_00473050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473050);
    /* 00473050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473051: mov ebp, esp */ r_ebp = r_esp;
    /* 00473053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473054: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00473057: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047305a: call 0x472dc0 */ r_esp -= 4; W32(r_esp, 0x47305fu); f_00472dc0();
    /* 0047305f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00473062: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00473065: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473067: je 0x473075 */ if (fZ) goto L_00473075;
L_00473069:; BB(0x00473069);
    /* 00473069: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047306c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047306d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x473072u); f_0048ac1b();
    /* 00473072: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00473075:; BB(0x00473075);
    /* 00473075: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00473078: mov esp, ebp */ r_esp = r_ebp;
    /* 0047307a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047307b: ret 4 */ FN_RET(0x00473050); r_esp += 8; return;
}

void f_00473080(void) /* FUN_00473080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473080);
    /* 00473080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473081: mov ebp, esp */ r_ebp = r_esp;
    /* 00473083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00473087: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047308a: call 0x472e1b */ r_esp -= 4; W32(r_esp, 0x47308fu); f_00472e1b();
    /* 0047308f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00473092: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00473095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473097: je 0x4730a5 */ if (fZ) goto L_004730a5;
L_00473099:; BB(0x00473099);
    /* 00473099: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047309c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047309d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4730a2u); f_0048ac1b();
    /* 004730a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004730a5:; BB(0x004730a5);
    /* 004730a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004730a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004730aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004730ab: ret 4 */ FN_RET(0x00473080); r_esp += 8; return;
}

void f_004730b0(void) /* FUN_004730b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004730b0);
    /* 004730b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004730b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004730b3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004730b6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004730b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004730bc: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x4730c1u); f_00446fe0();
    /* 004730c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004730c4: mov dword ptr [eax], 0x636294 */ W32((u32)(r_eax), 0x636294u);
    /* 004730ca: push 0x683e98 */ { u32 v = 0x683e98u; r_esp -= 4; W32(r_esp, v); }
    /* 004730cf: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004730d5: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x4730dau); f_005da413();
    /* 004730da: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004730dd: mov dword ptr [0x6f6a88], ecx */ W32((u32)(0x6f6a88u), r_ecx);
    /* 004730e3: push 0x1d4ca */ { u32 v = 0x1d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 004730e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004730eb: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x4730f0u); f_005e5ec3();
    /* 004730f0: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004730f6: jmp 0x473104 */ goto L_00473104;
L_004730f8:; BB(0x004730f8);
    /* 004730f8: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004730fc: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00473100: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00473104:; BB(0x00473104);
    /* 00473104: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00473108: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047310b: jge 0x47319a */ if ((fS==fO)) goto L_0047319a;
L_00473111:; BB(0x00473111);
    /* 00473111: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00473115: add ecx, 0x1d4c4 */ {  u32 a = r_ecx; u32 b = 0x1d4c4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047311b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047311c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047311e: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00473124: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00473127: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x47312cu); f_005ba9e1();
    /* 0047312c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00473130: add eax, 0x1d4d0 */ {  u32 a = r_eax; u32 b = 0x1d4d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00473135: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473136: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00473138: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0047313e: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00473141: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x473146u); f_005ba9e1();
    /* 00473146: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0047314a: add edx, 0x1d4d9 */ {  u32 a = r_edx; u32 b = 0x1d4d9u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00473150: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473151: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00473153: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 00473158: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0047315b: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x473160u); f_005ba9e1();
    /* 00473160: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00473164: add ecx, 0x1d4e1 */ {  u32 a = r_ecx; u32 b = 0x1d4e1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047316a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047316b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047316d: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00473173: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00473176: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x47317bu); f_005ba9e1();
    /* 0047317b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0047317f: add eax, 0x1d4e5 */ {  u32 a = r_eax; u32 b = 0x1d4e5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00473184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473185: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00473187: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 0047318d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00473190: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x473195u); f_005ba9e1();
    /* 00473195: jmp 0x4730f8 */ goto L_004730f8;
L_0047319a:; BB(0x0047319a);
    /* 0047319a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0047319c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4731a1u); f_0048ab58();
    /* 004731a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004731a4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004731a7: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004731ab: je 0x4731bc */ if (fZ) goto L_004731bc;
L_004731ad:; BB(0x004731ad);
    /* 004731ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004731af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004731b2: call 0x5e82f0 */ r_esp -= 4; W32(r_esp, 0x4731b7u); f_005e82f0();
    /* 004731b7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004731ba: jmp 0x4731c3 */ goto L_004731c3;
L_004731bc:; BB(0x004731bc);
    /* 004731bc: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_004731c3:; BB(0x004731c3);
    /* 004731c3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004731c6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004731c9: mov dword ptr [edx + 0x1cb0], eax */ W32((u32)(r_edx+0x1cb0u), r_eax);
    /* 004731cf: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004731d1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4731d6u); f_0048ab58();
    /* 004731d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004731d9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004731dc: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004731e0: je 0x4731f1 */ if (fZ) goto L_004731f1;
L_004731e2:; BB(0x004731e2);
    /* 004731e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004731e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004731e7: call 0x5e82f0 */ r_esp -= 4; W32(r_esp, 0x4731ecu); f_005e82f0();
    /* 004731ec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004731ef: jmp 0x4731f8 */ goto L_004731f8;
L_004731f1:; BB(0x004731f1);
    /* 004731f1: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004731f8:; BB(0x004731f8);
    /* 004731f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004731fb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004731fe: mov dword ptr [ecx + 0x1cb4], edx */ W32((u32)(r_ecx+0x1cb4u), r_edx);
    /* 00473204: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00473207: mov ecx, dword ptr [eax + 0x1cb4] */ r_ecx = R32((u32)(r_eax+0x1cb4u));
    /* 0047320d: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 00473214: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00473216: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x47321bu); f_0048ab58();
    /* 0047321b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047321e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00473221: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473225: je 0x473236 */ if (fZ) goto L_00473236;
L_00473227:; BB(0x00473227);
    /* 00473227: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473229: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047322c: call 0x5e82f0 */ r_esp -= 4; W32(r_esp, 0x473231u); f_005e82f0();
    /* 00473231: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00473234: jmp 0x47323d */ goto L_0047323d;
L_00473236:; BB(0x00473236);
    /* 00473236: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0047323d:; BB(0x0047323d);
    /* 0047323d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00473240: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00473243: mov dword ptr [edx + 0x1cb8], eax */ W32((u32)(r_edx+0x1cb8u), r_eax);
    /* 00473249: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047324c: mov edx, dword ptr [ecx + 0x1cb8] */ r_edx = R32((u32)(r_ecx+0x1cb8u));
    /* 00473252: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 00473259: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0047325c: mov esp, ebp */ r_esp = r_ebp;
    /* 0047325e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047325f: ret  */ FN_RET(0x004730b0); r_esp += 4; return;
}

void f_00473260(void) /* FUN_00473260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473260);
    /* 00473260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473261: mov ebp, esp */ r_ebp = r_esp;
    /* 00473263: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00473266: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00473269: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047326c: mov dword ptr [eax], 0x636294 */ W32((u32)(r_eax), 0x636294u);
    /* 00473272: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473274: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 0047327a: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x47327fu); f_005da413();
    /* 0047327f: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00473285: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00473288: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047328b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0047328e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473292: je 0x4732a5 */ if (fZ) goto L_004732a5;
L_00473294:; BB(0x00473294);
    /* 00473294: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00473296: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00473299: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047329b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047329e: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4732a0u); call_ind(t); }
    /* 004732a0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004732a3: jmp 0x4732ac */ goto L_004732ac;
L_004732a5:; BB(0x004732a5);
    /* 004732a5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004732ac:; BB(0x004732ac);
    /* 004732ac: mov dword ptr [0x6f6a8c], 0 */ W32((u32)(0x6f6a8cu), 0x0u);
    /* 004732b6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004732b9: mov ecx, dword ptr [eax + 0x1cb0] */ r_ecx = R32((u32)(r_eax+0x1cb0u));
    /* 004732bf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004732c2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004732c5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004732c8: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004732cc: je 0x4732df */ if (fZ) goto L_004732df;
L_004732ce:; BB(0x004732ce);
    /* 004732ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004732d0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004732d3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004732d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004732d8: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4732dau); call_ind(t); }
    /* 004732da: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004732dd: jmp 0x4732e6 */ goto L_004732e6;
L_004732df:; BB(0x004732df);
    /* 004732df: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004732e6:; BB(0x004732e6);
    /* 004732e6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004732e9: mov dword ptr [eax + 0x1cb0], 0 */ W32((u32)(r_eax+0x1cb0u), 0x0u);
    /* 004732f3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004732f6: mov edx, dword ptr [ecx + 0x1cb4] */ r_edx = R32((u32)(r_ecx+0x1cb4u));
    /* 004732fc: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004732ff: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00473302: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00473305: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473309: je 0x47331c */ if (fZ) goto L_0047331c;
L_0047330b:; BB(0x0047330b);
    /* 0047330b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047330d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00473310: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473312: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00473315: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x473317u); call_ind(t); }
    /* 00473317: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0047331a: jmp 0x473323 */ goto L_00473323;
L_0047331c:; BB(0x0047331c);
    /* 0047331c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00473323:; BB(0x00473323);
    /* 00473323: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00473326: mov dword ptr [eax + 0x1cb4], 0 */ W32((u32)(r_eax+0x1cb4u), 0x0u);
    /* 00473330: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00473333: mov edx, dword ptr [ecx + 0x1cb8] */ r_edx = R32((u32)(r_ecx+0x1cb8u));
    /* 00473339: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0047333c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047333f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00473342: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473346: je 0x473359 */ if (fZ) goto L_00473359;
L_00473348:; BB(0x00473348);
    /* 00473348: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047334a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047334d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047334f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00473352: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x473354u); call_ind(t); }
    /* 00473354: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00473357: jmp 0x473360 */ goto L_00473360;
L_00473359:; BB(0x00473359);
    /* 00473359: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00473360:; BB(0x00473360);
    /* 00473360: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00473363: mov dword ptr [eax + 0x1cb8], 0 */ W32((u32)(r_eax+0x1cb8u), 0x0u);
    /* 0047336d: mov dword ptr [0x6f6a88], 0 */ W32((u32)(0x6f6a88u), 0x0u);
    /* 00473377: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047337a: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x47337fu); f_0044711a();
    /* 0047337f: mov esp, ebp */ r_esp = r_ebp;
    /* 00473381: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00473382: ret  */ FN_RET(0x00473260); r_esp += 4; return;
}

void f_00473383(void) /* FUN_00473383 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473383);
    /* 00473383: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473384: mov ebp, esp */ r_ebp = r_esp;
    /* 00473386: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00473389: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0047338c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047338f: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x473394u); f_004476a6();
    /* 00473394: cmp dword ptr [0x6f6a8c], 0 */ {  u32 a = R32((u32)(0x6f6a8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047339b: jne 0x4733cf */ if (!fZ) goto L_004733cf;
L_0047339d:; BB(0x0047339d);
    /* 0047339d: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004733a2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4733a7u); f_0048ab58();
    /* 004733a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004733aa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004733ad: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004733b1: je 0x4733c0 */ if (fZ) goto L_004733c0;
L_004733b3:; BB(0x004733b3);
    /* 004733b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004733b6: call 0x46da42 */ r_esp -= 4; W32(r_esp, 0x4733bbu); f_0046da42();
    /* 004733bb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004733be: jmp 0x4733c7 */ goto L_004733c7;
L_004733c0:; BB(0x004733c0);
    /* 004733c0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004733c7:; BB(0x004733c7);
    /* 004733c7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004733ca: mov dword ptr [0x6f6a8c], eax */ W32((u32)(0x6f6a8cu), r_eax);
L_004733cf:; BB(0x004733cf);
    /* 004733cf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004733d1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4733d6u); f_0048ab58();
    /* 004733d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004733d9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004733dc: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004733e0: je 0x4733fd */ if (fZ) goto L_004733fd;
L_004733e2:; BB(0x004733e2);
    /* 004733e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004733e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004733e7: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x4733ecu); f_005e6160();
    /* 004733ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004733ef: mov dword ptr [ecx], 0x63634c */ W32((u32)(r_ecx), 0x63634cu);
    /* 004733f5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004733f8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004733fb: jmp 0x473404 */ goto L_00473404;
L_004733fd:; BB(0x004733fd);
    /* 004733fd: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00473404:; BB(0x00473404);
    /* 00473404: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00473407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473408: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047340b: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x473410u); f_005e5d66();
    /* 00473410: mov esp, ebp */ r_esp = r_ebp;
    /* 00473412: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00473413: ret  */ FN_RET(0x00473383); r_esp += 4; return;
}

void f_00473414(void) /* FUN_00473414 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473414);
    /* 00473414: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473415: mov ebp, esp */ r_ebp = r_esp;
    /* 00473417: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473418: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047341b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047341e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047341f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00473422: call 0x447ba4 */ r_esp -= 4; W32(r_esp, 0x473427u); f_00447ba4();
    /* 00473427: mov esp, ebp */ r_esp = r_ebp;
    /* 00473429: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047342a: ret 4 */ FN_RET(0x00473414); r_esp += 8; return;
}

void f_0047342d(void) /* FUN_0047342d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047342d);
    /* 0047342d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047342e: mov ebp, esp */ r_ebp = r_esp;
    /* 00473430: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473431: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00473434: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00473437: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047343a: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x47343fu); f_005e63b4();
    /* 0047343f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00473442: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00473444: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00473446: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00473447: mov esp, ebp */ r_esp = r_ebp;
    /* 00473449: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047344a: ret  */ FN_RET(0x0047342d); r_esp += 4; return;
}

void f_0047344b(void) /* FUN_0047344b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047344b);
    /* 0047344b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047344c: mov ebp, esp */ r_ebp = r_esp;
    /* 0047344e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047344f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00473452: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00473458: call 0x4700d8 */ r_esp -= 4; W32(r_esp, 0x47345du); f_004700d8();
    /* 0047345d: mov esp, ebp */ r_esp = r_ebp;
    /* 0047345f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00473460: ret  */ FN_RET(0x0047344b); r_esp += 4; return;
}

void f_00473461(void) /* FUN_00473461 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473461);
    /* 00473461: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473462: mov ebp, esp */ r_ebp = r_esp;
    /* 00473464: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473465: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00473468: mov esp, ebp */ r_esp = r_ebp;
    /* 0047346a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047346b: ret  */ FN_RET(0x00473461); r_esp += 4; return;
}

void f_0047346c(void) /* FUN_0047346c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047346c);
    /* 0047346c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047346d: mov ebp, esp */ r_ebp = r_esp;
    /* 0047346f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473470: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00473473: cmp dword ptr [0x6f6a8c], 0 */ {  u32 a = R32((u32)(0x6f6a8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047347a: je 0x473489 */ if (fZ) goto L_00473489;
L_0047347c:; BB(0x0047347c);
    /* 0047347c: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00473482: call 0x47018e */ r_esp -= 4; W32(r_esp, 0x473487u); f_0047018e();
    /* 00473487: jmp 0x47348b */ goto L_0047348b;
L_00473489:; BB(0x00473489);
    /* 00473489: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0047348b:; BB(0x0047348b);
    /* 0047348b: mov esp, ebp */ r_esp = r_ebp;
    /* 0047348d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047348e: ret  */ FN_RET(0x0047346c); r_esp += 4; return;
}

void f_0047348f(void) /* FUN_0047348f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047348f);
    /* 0047348f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473490: mov ebp, esp */ r_ebp = r_esp;
    /* 00473492: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00473495: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00473498: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047349f: jmp 0x4734aa */ goto L_004734aa;
L_004734a1:; BB(0x004734a1);
    /* 004734a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004734a4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004734a7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004734aa:; BB(0x004734aa);
    /* 004734aa: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004734ae: jge 0x4734ef */ if ((fS==fO)) goto L_004734ef;
L_004734b0:; BB(0x004734b0);
    /* 004734b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004734b3: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 004734b9: cmp dword ptr [edx + ecx*4 + 0x1ac], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004734c1: je 0x4734ed */ if (fZ) goto L_004734ed;
L_004734c3:; BB(0x004734c3);
    /* 004734c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004734c6: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 004734cc: mov edx, dword ptr [ecx + eax*4 + 0x1ac] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1acu));
    /* 004734d3: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004734d6: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004734d9: jne 0x4734ed */ if (!fZ) goto L_004734ed;
L_004734db:; BB(0x004734db);
    /* 004734db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004734de: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 004734e4: mov eax, dword ptr [edx + ecx*4 + 0x1ac] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1acu));
    /* 004734eb: jmp 0x4734f1 */ goto L_004734f1;
L_004734ed:; BB(0x004734ed);
    /* 004734ed: jmp 0x4734a1 */ goto L_004734a1;
L_004734ef:; BB(0x004734ef);
    /* 004734ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004734f1:; BB(0x004734f1);
    /* 004734f1: mov esp, ebp */ r_esp = r_ebp;
    /* 004734f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004734f4: ret 4 */ FN_RET(0x0047348f); r_esp += 8; return;
}

void f_004734f7(void) /* FUN_004734f7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004734f7);
    /* 004734f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004734f8: mov ebp, esp */ r_ebp = r_esp;
    /* 004734fa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004734fd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00473500: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00473507: jmp 0x473512 */ goto L_00473512;
L_00473509:; BB(0x00473509);
    /* 00473509: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047350c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047350f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00473512:; BB(0x00473512);
    /* 00473512: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00473516: jge 0x47357d */ if ((fS==fO)) goto L_0047357d;
L_00473518:; BB(0x00473518);
    /* 00473518: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047351b: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 00473521: cmp dword ptr [edx + ecx*4 + 0x1ac], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473529: je 0x47357b */ if (fZ) goto L_0047357b;
L_0047352b:; BB(0x0047352b);
    /* 0047352b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047352e: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00473534: mov ecx, dword ptr [ecx + eax*4 + 0x1ac] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1acu));
    /* 0047353b: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x473540u); f_004259a0();
    /* 00473540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473542: je 0x47357b */ if (fZ) goto L_0047357b;
L_00473544:; BB(0x00473544);
    /* 00473544: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00473547: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473548: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047354b: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00473551: mov ecx, dword ptr [ecx + eax*4 + 0x1ac] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1acu));
    /* 00473558: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x47355du); f_004259cd();
    /* 0047355d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047355e: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x473563u); f_006240c0();
    /* 00473563: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00473566: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473568: jne 0x47357b */ if (!fZ) goto L_0047357b;
L_0047356a:; BB(0x0047356a);
    /* 0047356a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047356d: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 00473572: mov eax, dword ptr [eax + edx*4 + 0x1ac] */ r_eax = R32((u32)(r_eax+r_edx*4+0x1acu));
    /* 00473579: jmp 0x47357f */ goto L_0047357f;
L_0047357b:; BB(0x0047357b);
    /* 0047357b: jmp 0x473509 */ goto L_00473509;
L_0047357d:; BB(0x0047357d);
    /* 0047357d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0047357f:; BB(0x0047357f);
    /* 0047357f: mov esp, ebp */ r_esp = r_ebp;
    /* 00473581: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00473582: ret 4 */ FN_RET(0x004734f7); r_esp += 8; return;
}

void f_00473585(void) /* FUN_00473585 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473585);
    /* 00473585: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473586: mov ebp, esp */ r_ebp = r_esp;
    /* 00473588: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473589: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047358c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047358f: mov ecx, dword ptr [0x6f6a8c] */ r_ecx = R32((u32)(0x6f6a8cu));
    /* 00473595: cmp dword ptr [ecx + eax*4 + 0x1ac], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047359d: je 0x4735b0 */ if (fZ) goto L_004735b0;
L_0047359f:; BB(0x0047359f);
    /* 0047359f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004735a2: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 004735a7: mov eax, dword ptr [eax + edx*4 + 0x1ac] */ r_eax = R32((u32)(r_eax+r_edx*4+0x1acu));
    /* 004735ae: jmp 0x4735b2 */ goto L_004735b2;
L_004735b0:; BB(0x004735b0);
    /* 004735b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004735b2:; BB(0x004735b2);
    /* 004735b2: mov esp, ebp */ r_esp = r_ebp;
    /* 004735b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004735b5: ret 4 */ FN_RET(0x00473585); r_esp += 8; return;
}

void f_004735b8(void) /* FUN_004735b8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004735b8);
    /* 004735b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004735b9: mov ebp, esp */ r_ebp = r_esp;
    /* 004735bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004735bc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004735bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004735c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004735c4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004735c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004735ca: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004735cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004735cf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4735d2u); call_ind(t); }
    /* 004735d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004735d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004735d7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004735da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004735dd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004735e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004735e2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x4735e5u); call_ind(t); }
    /* 004735e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004735e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004735e8: ret  */ FN_RET(0x004735b8); r_esp += 4; return;
}

void f_004735e9(void) /* FUN_004735e9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004735e9);
    /* 004735e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004735ea: mov ebp, esp */ r_ebp = r_esp;
    /* 004735ec: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004735ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004735f0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004735f3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004735fa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00473601: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473605: jne 0x473615 */ if (!fZ) goto L_00473615;
L_00473607:; BB(0x00473607);
    /* 00473607: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047360a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047360c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047360f: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x473612u); call_ind(t); }
    /* 00473612: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00473615:; BB(0x00473615);
    /* 00473615: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00473618: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047361a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047361d: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x473620u); call_ind(t); }
    /* 00473620: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473622: je 0x473709 */ if (fZ) goto L_00473709;
L_00473628:; BB(0x00473628);
    /* 00473628: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047362b: call 0x425a05 */ r_esp -= 4; W32(r_esp, 0x473630u); f_00425a05();
    /* 00473630: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473632: jne 0x473709 */ if (!fZ) goto L_00473709;
L_00473638:; BB(0x00473638);
    /* 00473638: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047363b: cmp dword ptr [eax + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473642: je 0x473654 */ if (fZ) goto L_00473654;
L_00473644:; BB(0x00473644);
    /* 00473644: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00473647: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x47364cu); f_004259a0();
    /* 0047364c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047364e: jne 0x473709 */ if (!fZ) goto L_00473709;
L_00473654:; BB(0x00473654);
    /* 00473654: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0047365b: jmp 0x473666 */ goto L_00473666;
L_0047365d:; BB(0x0047365d);
    /* 0047365d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00473660: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473663: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00473666:; BB(0x00473666);
    /* 00473666: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047366a: jge 0x473702 */ if ((fS==fO)) goto L_00473702;
L_00473670:; BB(0x00473670);
    /* 00473670: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00473673: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x473678u); f_004259f1();
    /* 00473678: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047367b: jne 0x47367f */ if (!fZ) goto L_0047367f;
L_0047367d:; BB(0x0047367d);
    /* 0047367d: jmp 0x47365d */ goto L_0047365d;
L_0047367f:; BB(0x0047367f);
    /* 0047367f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00473682: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x473687u); f_004259a0();
    /* 00473687: mov esi, eax */ r_esi = r_eax;
    /* 00473689: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047368c: mov eax, dword ptr [0x6f6a8c] */ r_eax = R32((u32)(0x6f6a8cu));
    /* 00473691: mov ecx, dword ptr [eax + edx*4 + 0x1ac] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1acu));
    /* 00473698: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x47369du); f_004259a0();
    /* 0047369d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047369f: jne 0x4736fd */ if (!fZ) goto L_004736fd;
L_004736a1:; BB(0x004736a1);
    /* 004736a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004736a4: mov edx, dword ptr [0x6f6a8c] */ r_edx = R32((u32)(0x6f6a8cu));
    /* 004736aa: mov ecx, dword ptr [edx + ecx*4 + 0x1ac] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1acu));
    /* 004736b1: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x4736b6u); f_004259cd();
    /* 004736b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004736b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004736ba: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x4736bfu); f_004259cd();
    /* 004736bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004736c0: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x4736c5u); f_006240c0();
    /* 004736c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004736c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004736ca: jne 0x4736fd */ if (!fZ) goto L_004736fd;
L_004736cc:; BB(0x004736cc);
    /* 004736cc: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004736cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004736d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004736d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004736d4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004736d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004736d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004736dc: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x4736dfu); call_ind(t); }
    /* 004736df: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004736e3: jne 0x4736eb */ if (!fZ) goto L_004736eb;
L_004736e5:; BB(0x004736e5);
    /* 004736e5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004736e9: je 0x4736ef */ if (fZ) goto L_004736ef;
L_004736eb:; BB(0x004736eb);
    /* 004736eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004736ed: jmp 0x47370b */ goto L_0047370b;
L_004736ef:; BB(0x004736ef);
    /* 004736ef: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004736f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004736fd:; BB(0x004736fd);
    /* 004736fd: jmp 0x47365d */ goto L_0047365d;
L_00473702:; BB(0x00473702);
    /* 00473702: mov eax, 1 */ r_eax = 0x1u;
    /* 00473707: jmp 0x47370b */ goto L_0047370b;
L_00473709:; BB(0x00473709);
    /* 00473709: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0047370b:; BB(0x0047370b);
    /* 0047370b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0047370c: mov esp, ebp */ r_esp = r_ebp;
    /* 0047370e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047370f: ret 4 */ FN_RET(0x004735e9); r_esp += 8; return;
}

void f_00473712(void) /* FUN_00473712 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473712);
    /* 00473712: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473713: mov ebp, esp */ r_ebp = r_esp;
    /* 00473715: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473716: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00473719: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047371b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047371e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00473721: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00473724: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00473727: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00473729: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x47372cu); call_ind(t); }
    /* 0047372c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047372e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00473731: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00473734: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00473737: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0047373a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047373c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x47373fu); call_ind(t); }
    /* 0047373f: mov esp, ebp */ r_esp = r_ebp;
    /* 00473741: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00473742: ret  */ FN_RET(0x00473712); r_esp += 4; return;
}

void f_00473743(void) /* FUN_00473743 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473743);
    /* 00473743: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473744: mov ebp, esp */ r_ebp = r_esp;
    /* 00473746: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473747: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047374a: mov eax, 1 */ r_eax = 0x1u;
    /* 0047374f: mov esp, ebp */ r_esp = r_ebp;
    /* 00473751: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00473752: ret 4 */ FN_RET(0x00473743); r_esp += 8; return;
}

void f_00473755(void) /* FUN_00473755 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473755);
    /* 00473755: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473756: mov ebp, esp */ r_ebp = r_esp;
    /* 00473758: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473759: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047375c: mov esp, ebp */ r_esp = r_ebp;
    /* 0047375e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047375f: ret 8 */ FN_RET(0x00473755); r_esp += 12; return;
}

void f_00473762(void) /* FUN_00473762 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473762);
    /* 00473762: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473763: mov ebp, esp */ r_ebp = r_esp;
    /* 00473765: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473766: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00473769: mov eax, 2 */ r_eax = 0x2u;
    /* 0047376e: mov esp, ebp */ r_esp = r_ebp;
    /* 00473770: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00473771: ret  */ FN_RET(0x00473762); r_esp += 4; return;
}

void f_00473772(void) /* FUN_00473772 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00473772);
    /* 00473772: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00473773: mov ebp, esp */ r_ebp = r_esp;
    /* 00473775: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473776: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00473779: mov esp, ebp */ r_esp = r_ebp;
    /* 0047377b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047377c: ret  */ FN_RET(0x00473772); r_esp += 4; return;
}

