#include "protos.h"

void f_005dd1d1(void) /* FUN_005dd1d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd1d1);
    /* 005dd1d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd1d2: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd1d4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd1d7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dd1da: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005dd1dd: mov byte ptr [ebp - 2], al */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_eax);
    /* 005dd1e0: mov cl, byte ptr [ebp + 0xd] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xdu))) & 0xffu);
    /* 005dd1e3: mov byte ptr [ebp - 3], cl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ecx);
    /* 005dd1e6: mov dl, byte ptr [ebp + 0xe] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xeu))) & 0xffu);
    /* 005dd1e9: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
    /* 005dd1ec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd1ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd1f2: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005dd1f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd1f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd1f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd1fa: ret 8 */ FN_RET(0x005dd1d1); r_esp += 12; return;
}

void f_005dd200(void) /* FUN_005dd200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd200);
    /* 005dd200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd201: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd20a: call 0x5dae2b */ r_esp -= 4; W32(r_esp, 0x5dd20fu); f_005dae2b();
    /* 005dd20f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd212: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dd215: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd217: je 0x5dd225 */ if (fZ) goto L_005dd225;
L_005dd219:; BB(0x005dd219);
    /* 005dd219: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd21c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd21d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5dd222u); f_0048ac1b();
    /* 005dd222: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dd225:; BB(0x005dd225);
    /* 005dd225: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd228: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd22a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd22b: ret 4 */ FN_RET(0x005dd200); r_esp += 8; return;
}

void f_005dd230(void) /* FUN_005dd230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd230);
    /* 005dd230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd231: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd237: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd23a: call 0x5db19e */ r_esp -= 4; W32(r_esp, 0x5dd23fu); f_005db19e();
    /* 005dd23f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd242: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dd245: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd247: je 0x5dd255 */ if (fZ) goto L_005dd255;
L_005dd249:; BB(0x005dd249);
    /* 005dd249: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd24c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd24d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5dd252u); f_0048ac1b();
    /* 005dd252: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dd255:; BB(0x005dd255);
    /* 005dd255: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd258: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd25a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd25b: ret 4 */ FN_RET(0x005dd230); r_esp += 8; return;
}

void f_005dd260(void) /* FUN_005dd260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd260);
    /* 005dd260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd261: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd267: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd26a: call 0x5db4d6 */ r_esp -= 4; W32(r_esp, 0x5dd26fu); f_005db4d6();
    /* 005dd26f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd272: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dd275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd277: je 0x5dd285 */ if (fZ) goto L_005dd285;
L_005dd279:; BB(0x005dd279);
    /* 005dd279: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd27c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd27d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5dd282u); f_0048ac1b();
    /* 005dd282: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dd285:; BB(0x005dd285);
    /* 005dd285: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd288: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd28a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd28b: ret 4 */ FN_RET(0x005dd260); r_esp += 8; return;
}

void f_005dd290(void) /* FUN_005dd290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd290);
    /* 005dd290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd291: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd294: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd297: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd29a: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5dd29fu); f_005dfbf0();
    /* 005dd29f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd2a2: mov dword ptr [eax], 0x63ba64 */ W32((u32)(r_eax), 0x63ba64u);
    /* 005dd2a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd2ab: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005dd2b2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd2b5: mov dword ptr [edx + 0xc], 0xa */ W32((u32)(r_edx+0xcu), 0xau);
    /* 005dd2bc: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd2be: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5dd2c3u); f_0048ab58();
    /* 005dd2c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd2c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd2c9: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 005dd2cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd2cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd2d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd2d2: ret  */ FN_RET(0x005dd290); r_esp += 4; return;
}

void f_005dd2d3(void) /* FUN_005dd2d3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd2d3);
    /* 005dd2d3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd2d4: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd2d6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd2d9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dd2dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd2df: mov dword ptr [eax], 0x63ba64 */ W32((u32)(r_eax), 0x63ba64u);
    /* 005dd2e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd2e8: call 0x5dd52a */ r_esp -= 4; W32(r_esp, 0x5dd2edu); f_005dd52a();
    /* 005dd2ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd2f0: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd2f4: je 0x5dd30b */ if (fZ) goto L_005dd30b;
L_005dd2f6:; BB(0x005dd2f6);
    /* 005dd2f6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd2f9: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005dd2fc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dd2ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd302: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd303: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5dd308u); f_0048ac1b();
    /* 005dd308: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dd30b:; BB(0x005dd30b);
    /* 005dd30b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd30e: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5dd313u); f_005dfc0f();
    /* 005dd313: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd315: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd316: ret  */ FN_RET(0x005dd2d3); r_esp += 4; return;
}

void f_005dd317(void) /* FUN_005dd317 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd317);
    /* 005dd317: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd318: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd31a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd31d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd31e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005dd321: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd324: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005dd327: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd32a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd32d: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005dd330: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd333: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005dd336: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005dd339: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd33a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5dd33fu); f_0048ab58();
    /* 005dd33f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd342: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dd345: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dd34c: jmp 0x5dd357 */ goto L_005dd357;
L_005dd34e:; BB(0x005dd34e);
    /* 005dd34e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd351: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dd354: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005dd357:; BB(0x005dd357);
    /* 005dd357: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd35a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd35d: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd360: jge 0x5dd389 */ if ((fS==fO)) goto L_005dd389;
L_005dd362:; BB(0x005dd362);
    /* 005dd362: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd365: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005dd368: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd36b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd36e: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd371: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 005dd374: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 005dd377: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd37a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005dd37d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd380: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 005dd387: jmp 0x5dd34e */ goto L_005dd34e;
L_005dd389:; BB(0x005dd389);
    /* 005dd389: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd38c: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005dd38f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005dd392: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd395: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd396: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5dd39bu); f_0048ac1b();
    /* 005dd39b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd39e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd3a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd3a4: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 005dd3a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd3a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd3aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd3ab: ret  */ FN_RET(0x005dd317); r_esp += 4; return;
}

void f_005dd3ac(void) /* FUN_005dd3ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd3ac);
    /* 005dd3ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd3ad: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd3af: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd3b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd3b3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dd3b6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd3b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd3bc: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005dd3bf: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd3c2: jne 0x5dd3cc */ if (!fZ) goto L_005dd3cc;
L_005dd3c4:; BB(0x005dd3c4);
    /* 005dd3c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd3c7: call 0x5dd317 */ r_esp -= 4; W32(r_esp, 0x5dd3ccu); f_005dd317();
L_005dd3cc:; BB(0x005dd3cc);
    /* 005dd3cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd3cf: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005dd3d2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd3d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd3d8: jmp 0x5dd3e3 */ goto L_005dd3e3;
L_005dd3da:; BB(0x005dd3da);
    /* 005dd3da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd3dd: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dd3e0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005dd3e3:; BB(0x005dd3e3);
    /* 005dd3e3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd3e7: jl 0x5dd404 */ if ((fS!=fO)) goto L_005dd404;
L_005dd3e9:; BB(0x005dd3e9);
    /* 005dd3e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd3ec: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005dd3ef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd3f2: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005dd3f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd3f8: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd3fb: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 005dd3fe: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 005dd402: jmp 0x5dd3da */ goto L_005dd3da;
L_005dd404:; BB(0x005dd404);
    /* 005dd404: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd407: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005dd40a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dd40d: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005dd40f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd412: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005dd415: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd418: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd41b: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005dd41e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd41f: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd421: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd422: ret 4 */ FN_RET(0x005dd3ac); r_esp += 8; return;
}

void f_005dd425(void) /* FUN_005dd425 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd425);
    /* 005dd425: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd426: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd428: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd429: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd42c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd42f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd432: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005dd435: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd438: jne 0x5dd442 */ if (!fZ) goto L_005dd442;
L_005dd43a:; BB(0x005dd43a);
    /* 005dd43a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd43d: call 0x5dd317 */ r_esp -= 4; W32(r_esp, 0x5dd442u); f_005dd317();
L_005dd442:; BB(0x005dd442);
    /* 005dd442: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd445: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005dd448: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd44b: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005dd44e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dd451: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 005dd454: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd457: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005dd45a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd45d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd460: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005dd463: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd465: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd466: ret 4 */ FN_RET(0x005dd425); r_esp += 8; return;
}

void f_005dd469(void) /* FUN_005dd469 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd469);
    /* 005dd469: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd46a: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd46c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd46f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd470: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dd473: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd477: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd47a: call 0x5dd5d7 */ r_esp -= 4; W32(r_esp, 0x5dd47fu); f_005dd5d7();
    /* 005dd47f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dd482: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd486: jle 0x5dd4cb */ if ((fZ||fS!=fO)) goto L_005dd4cb;
L_005dd488:; BB(0x005dd488);
    /* 005dd488: jmp 0x5dd493 */ goto L_005dd493;
L_005dd48a:; BB(0x005dd48a);
    /* 005dd48a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd48d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd490: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005dd493:; BB(0x005dd493);
    /* 005dd493: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd496: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005dd499: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dd49c: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd49f: jge 0x5dd4bc */ if ((fS==fO)) goto L_005dd4bc;
L_005dd4a1:; BB(0x005dd4a1);
    /* 005dd4a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd4a4: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005dd4a7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd4aa: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005dd4ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd4b0: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd4b3: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
    /* 005dd4b7: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 005dd4ba: jmp 0x5dd48a */ goto L_005dd48a;
L_005dd4bc:; BB(0x005dd4bc);
    /* 005dd4bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd4bf: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005dd4c2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd4c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd4c8: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
L_005dd4cb:; BB(0x005dd4cb);
    /* 005dd4cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd4cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd4ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd4cf: ret 4 */ FN_RET(0x005dd469); r_esp += 8; return;
}

void f_005dd4d2(void) /* FUN_005dd4d2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd4d2);
    /* 005dd4d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4d3: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd4d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd4d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd4dc: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005dd4df: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd4e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd4e2: ret  */ FN_RET(0x005dd4d2); r_esp += 4; return;
}

void f_005dd4e3(void) /* FUN_005dd4e3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd4e3);
    /* 005dd4e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4e4: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd4e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4e7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd4ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd4ed: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dd4f2u); f_005dd4d2();
    /* 005dd4f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd4f4: jne 0x5dd4fd */ if (!fZ) goto L_005dd4fd;
L_005dd4f6:; BB(0x005dd4f6);
    /* 005dd4f6: mov eax, 1 */ r_eax = 0x1u;
    /* 005dd4fb: jmp 0x5dd4ff */ goto L_005dd4ff;
L_005dd4fd:; BB(0x005dd4fd);
    /* 005dd4fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005dd4ff:; BB(0x005dd4ff);
    /* 005dd4ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd501: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd502: ret  */ FN_RET(0x005dd4e3); r_esp += 4; return;
}

void f_005dd503(void) /* FUN_005dd503 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd503);
    /* 005dd503: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd504: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd506: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd507: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd50a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd50d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd50e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd511: call 0x5dd5d7 */ r_esp -= 4; W32(r_esp, 0x5dd516u); f_005dd5d7();
    /* 005dd516: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd519: jne 0x5dd51f */ if (!fZ) goto L_005dd51f;
L_005dd51b:; BB(0x005dd51b);
    /* 005dd51b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dd51d: jmp 0x5dd524 */ goto L_005dd524;
L_005dd51f:; BB(0x005dd51f);
    /* 005dd51f: mov eax, 1 */ r_eax = 0x1u;
L_005dd524:; BB(0x005dd524);
    /* 005dd524: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd526: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd527: ret 4 */ FN_RET(0x005dd503); r_esp += 8; return;
}

void f_005dd52a(void) /* FUN_005dd52a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd52a);
    /* 005dd52a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd52b: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd52d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd52e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005dd531:; BB(0x005dd531);
    /* 005dd531: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd534: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dd539u); f_005dd4d2();
    /* 005dd539: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd53b: je 0x5dd55c */ if (fZ) goto L_005dd55c;
L_005dd53d:; BB(0x005dd53d);
    /* 005dd53d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd540: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dd545u); f_005dd4d2();
    /* 005dd545: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dd548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd549: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd54c: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dd551u); f_005dd560();
    /* 005dd551: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd552: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd555: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5dd55au); f_005dd469();
    /* 005dd55a: jmp 0x5dd531 */ goto L_005dd531;
L_005dd55c:; BB(0x005dd55c);
    /* 005dd55c: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd55e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd55f: ret  */ FN_RET(0x005dd52a); r_esp += 4; return;
}

void f_005dd560(void) /* FUN_005dd560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd560);
    /* 005dd560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd561: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd567: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd56b: jl 0x5dd578 */ if ((fS!=fO)) goto L_005dd578;
L_005dd56d:; BB(0x005dd56d);
    /* 005dd56d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd570: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dd573: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd576: jl 0x5dd57c */ if ((fS!=fO)) goto L_005dd57c;
L_005dd578:; BB(0x005dd578);
    /* 005dd578: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dd57a: jmp 0x5dd588 */ goto L_005dd588;
L_005dd57c:; BB(0x005dd57c);
    /* 005dd57c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd57f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005dd582: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dd585: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
L_005dd588:; BB(0x005dd588);
    /* 005dd588: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd58a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd58b: ret 4 */ FN_RET(0x005dd560); r_esp += 8; return;
}

void f_005dd58e(void) /* FUN_005dd58e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd58e);
    /* 005dd58e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd58f: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd591: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd592: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005dd595:; BB(0x005dd595);
    /* 005dd595: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd598: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dd59du); f_005dd4d2();
    /* 005dd59d: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd5a0: jl 0x5dd5ae */ if ((fS!=fO)) goto L_005dd5ae;
L_005dd5a2:; BB(0x005dd5a2);
    /* 005dd5a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd5a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd5a7: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x5dd5acu); f_005dd425();
    /* 005dd5ac: jmp 0x5dd595 */ goto L_005dd595;
L_005dd5ae:; BB(0x005dd5ae);
    /* 005dd5ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd5b1: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005dd5b4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dd5b7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005dd5ba: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 005dd5bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd5c0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dd5c3: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd5c6: jle 0x5dd5d1 */ if ((fZ||fS!=fO)) goto L_005dd5d1;
L_005dd5c8:; BB(0x005dd5c8);
    /* 005dd5c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd5cb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dd5ce: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
L_005dd5d1:; BB(0x005dd5d1);
    /* 005dd5d1: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd5d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd5d4: ret 8 */ FN_RET(0x005dd58e); r_esp += 12; return;
}

void f_005dd5d7(void) /* FUN_005dd5d7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd5d7);
    /* 005dd5d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd5d8: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd5da: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd5dd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dd5e0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dd5e7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd5ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd5eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd5ee: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dd5f3u); f_005dd560();
    /* 005dd5f3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dd5f6:; BB(0x005dd5f6);
    /* 005dd5f6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd5fa: je 0x5dd61e */ if (fZ) goto L_005dd61e;
L_005dd5fc:; BB(0x005dd5fc);
    /* 005dd5fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dd5ff: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd602: je 0x5dd61e */ if (fZ) goto L_005dd61e;
L_005dd604:; BB(0x005dd604);
    /* 005dd604: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd607: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dd60a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005dd60d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd611: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd614: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dd619u); f_005dd560();
    /* 005dd619: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dd61c: jmp 0x5dd5f6 */ goto L_005dd5f6;
L_005dd61e:; BB(0x005dd61e);
    /* 005dd61e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd622: je 0x5dd631 */ if (fZ) goto L_005dd631;
L_005dd624:; BB(0x005dd624);
    /* 005dd624: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dd627: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd62a: jne 0x5dd631 */ if (!fZ) goto L_005dd631;
L_005dd62c:; BB(0x005dd62c);
    /* 005dd62c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd62f: jmp 0x5dd634 */ goto L_005dd634;
L_005dd631:; BB(0x005dd631);
    /* 005dd631: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005dd634:; BB(0x005dd634);
    /* 005dd634: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd636: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd637: ret 4 */ FN_RET(0x005dd5d7); r_esp += 8; return;
}

void f_005dd63a(void) /* FUN_005dd63a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd63a);
    /* 005dd63a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd63b: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd63d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd640: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd641: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dd644: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd647: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd648: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd64b: call 0x5dd5d7 */ r_esp -= 4; W32(r_esp, 0x5dd650u); f_005dd5d7();
    /* 005dd650: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dd653: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd657: jle 0x5dd6c8 */ if ((fZ||fS!=fO)) goto L_005dd6c8;
L_005dd659:; BB(0x005dd659);
    /* 005dd659: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd65c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd65f: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005dd662: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd665: jne 0x5dd66f */ if (!fZ) goto L_005dd66f;
L_005dd667:; BB(0x005dd667);
    /* 005dd667: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd66a: call 0x5dd317 */ r_esp -= 4; W32(r_esp, 0x5dd66fu); f_005dd317();
L_005dd66f:; BB(0x005dd66f);
    /* 005dd66f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd672: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005dd675: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dd678: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005dd67b: jmp 0x5dd686 */ goto L_005dd686;
L_005dd67d:; BB(0x005dd67d);
    /* 005dd67d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd680: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dd683: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005dd686:; BB(0x005dd686);
    /* 005dd686: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd689: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd68c: jle 0x5dd6a9 */ if ((fZ||fS!=fO)) goto L_005dd6a9;
L_005dd68e:; BB(0x005dd68e);
    /* 005dd68e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd691: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005dd694: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd697: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005dd69a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd69d: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd6a0: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 005dd6a3: mov dword ptr [edx + ecx*4 + 4], eax */ W32((u32)(r_edx+r_ecx*4+0x4u), r_eax);
    /* 005dd6a7: jmp 0x5dd67d */ goto L_005dd67d;
L_005dd6a9:; BB(0x005dd6a9);
    /* 005dd6a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd6ac: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005dd6af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd6b2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005dd6b5: mov dword ptr [edx + eax*4 + 4], ecx */ W32((u32)(r_edx+r_eax*4+0x4u), r_ecx);
    /* 005dd6b9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd6bc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005dd6bf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd6c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd6c5: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
L_005dd6c8:; BB(0x005dd6c8);
    /* 005dd6c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd6c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd6cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd6cc: ret 8 */ FN_RET(0x005dd63a); r_esp += 12; return;
}

void f_005dd6cf(void) /* FUN_005dd6cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd6cf);
    /* 005dd6cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd6d0: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd6d2: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd6d5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dd6d8: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005dd6df: jmp 0x5dd6ea */ goto L_005dd6ea;
L_005dd6e1:; BB(0x005dd6e1);
    /* 005dd6e1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd6e4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd6e7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005dd6ea:; BB(0x005dd6ea);
    /* 005dd6ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dd6ed: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dd6f2u); f_005dd4d2();
    /* 005dd6f2: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd6f5: jge 0x5dd776 */ if ((fS==fO)) goto L_005dd776;
L_005dd6f7:; BB(0x005dd6f7);
    /* 005dd6f7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005dd6fe: jmp 0x5dd709 */ goto L_005dd709;
L_005dd700:; BB(0x005dd700);
    /* 005dd700: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd703: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd706: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005dd709:; BB(0x005dd709);
    /* 005dd709: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dd70c: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dd711u); f_005dd4d2();
    /* 005dd711: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dd714: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd717: jge 0x5dd771 */ if ((fS==fO)) goto L_005dd771;
L_005dd719:; BB(0x005dd719);
    /* 005dd719: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd71c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd71d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dd720: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dd725u); f_005dd560();
    /* 005dd725: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005dd728: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd72b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd72e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd72f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dd732: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dd737u); f_005dd560();
    /* 005dd737: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dd73a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd73d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd73e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd741: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd742: call dword ptr [ebp + 8] */ { u32 t = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, 0x5dd745u); call_ind(t); }
    /* 005dd745: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd748: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005dd74a: jle 0x5dd76f */ if ((fZ||fS!=fO)) goto L_005dd76f;
L_005dd74c:; BB(0x005dd74c);
    /* 005dd74c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd74f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd750: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd754: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dd757: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x5dd75cu); f_005dd58e();
    /* 005dd75c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd75f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd760: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd763: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd766: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd767: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dd76a: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x5dd76fu); f_005dd58e();
L_005dd76f:; BB(0x005dd76f);
    /* 005dd76f: jmp 0x5dd700 */ goto L_005dd700;
L_005dd771:; BB(0x005dd771);
    /* 005dd771: jmp 0x5dd6e1 */ goto L_005dd6e1;
L_005dd776:; BB(0x005dd776);
    /* 005dd776: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd778: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd779: ret 4 */ FN_RET(0x005dd6cf); r_esp += 8; return;
}

void f_005dd780(void) /* FUN_005dd780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd780);
    /* 005dd780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd781: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd787: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd78a: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x5dd78fu); f_005dd2d3();
    /* 005dd78f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd792: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dd795: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd797: je 0x5dd7a5 */ if (fZ) goto L_005dd7a5;
L_005dd799:; BB(0x005dd799);
    /* 005dd799: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd79c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd79d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5dd7a2u); f_0048ac1b();
    /* 005dd7a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dd7a5:; BB(0x005dd7a5);
    /* 005dd7a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd7a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd7aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd7ab: ret 4 */ FN_RET(0x005dd780); r_esp += 8; return;
}

void f_005dd7b0(void) /* FUN_005dd7b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd7b0);
    /* 005dd7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd7b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd7b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd7b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd7ba: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5dd7bfu); f_005e8590();
    /* 005dd7bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd7c2: mov dword ptr [eax], 0x63ba6c */ W32((u32)(r_eax), 0x63ba6cu);
    /* 005dd7c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd7cb: mov dword ptr [ecx + 0x890], 0 */ W32((u32)(r_ecx+0x890u), 0x0u);
    /* 005dd7d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd7d8: mov dword ptr [edx + 0x894], 0 */ W32((u32)(r_edx+0x894u), 0x0u);
    /* 005dd7e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd7e5: mov dword ptr [eax + 0x898], 0 */ W32((u32)(r_eax+0x898u), 0x0u);
    /* 005dd7ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd7f2: mov dword ptr [ecx + 0x89c], 0 */ W32((u32)(r_ecx+0x89cu), 0x0u);
    /* 005dd7fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd7ff: mov dword ptr [edx + 0x888], 0 */ W32((u32)(r_edx+0x888u), 0x0u);
    /* 005dd809: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd80c: mov dword ptr [eax + 0x88c], 0 */ W32((u32)(r_eax+0x88cu), 0x0u);
    /* 005dd816: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd819: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd81b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd81c: ret  */ FN_RET(0x005dd7b0); r_esp += 4; return;
}

void f_005dd81d(void) /* FUN_005dd81d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd81d);
    /* 005dd81d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd81e: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd820: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd821: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd824: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd827: mov dword ptr [eax], 0x63ba6c */ W32((u32)(r_eax), 0x63ba6cu);
    /* 005dd82d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd830: call 0x5e8680 */ r_esp -= 4; W32(r_esp, 0x5dd835u); f_005e8680();
    /* 005dd835: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd837: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd838: ret  */ FN_RET(0x005dd81d); r_esp += 4; return;
}

void f_005dd839(void) /* FUN_005dd839 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd839);
    /* 005dd839: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd83a: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd83c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd83d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd840: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd844: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd847: call 0x5e89d9 */ r_esp -= 4; W32(r_esp, 0x5dd84cu); f_005e89d9();
    /* 005dd84c: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd84e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd84f: ret 4 */ FN_RET(0x005dd839); r_esp += 8; return;
}

void f_005dd852(void) /* FUN_005dd852 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd852);
    /* 005dd852: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd853: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd855: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd858: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd85b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd85e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd85f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd862: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x5dd867u); f_005d9738();
    /* 005dd867: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd869: jne 0x5dd877 */ if (!fZ) goto L_005dd877;
L_005dd86b:; BB(0x005dd86b);
    /* 005dd86b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd86e: cmp dword ptr [ecx + 0x894], 0 */ {  u32 a = R32((u32)(r_ecx+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd875: je 0x5dd880 */ if (fZ) goto L_005dd880;
L_005dd877:; BB(0x005dd877);
    /* 005dd877: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dd87a: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd87e: je 0x5dd887 */ if (fZ) goto L_005dd887;
L_005dd880:; BB(0x005dd880);
    /* 005dd880: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dd882: jmp 0x5dd981 */ goto L_005dd981;
L_005dd887:; BB(0x005dd887);
    /* 005dd887: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd88a: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005dd88d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dd890: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd894: je 0x5dd8a5 */ if (fZ) goto L_005dd8a5;
L_005dd896:; BB(0x005dd896);
    /* 005dd896: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd89a: je 0x5dd94b */ if (fZ) goto L_005dd94b;
L_005dd8a0:; BB(0x005dd8a0);
    /* 005dd8a0: jmp 0x5dd97b */ goto L_005dd97b;
L_005dd8a5:; BB(0x005dd8a5);
    /* 005dd8a5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dd8a8: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005dd8ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd8ac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dd8af: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005dd8b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd8b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd8b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dd8b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd8bb: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5dd8beu); call_ind(t); }
    /* 005dd8be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd8c0: je 0x5dd8d9 */ if (fZ) goto L_005dd8d9;
L_005dd8c2:; BB(0x005dd8c2);
    /* 005dd8c2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd8c5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005dd8c8: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd8cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd8cd: je 0x5dd8d9 */ if (fZ) goto L_005dd8d9;
L_005dd8cf:; BB(0x005dd8cf);
    /* 005dd8cf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dd8d2: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
L_005dd8d9:; BB(0x005dd8d9);
    /* 005dd8d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd8dc: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005dd8df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd8e0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dd8e3: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005dd8e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd8e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd8ea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dd8ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd8ef: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5dd8f2u); call_ind(t); }
    /* 005dd8f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd8f4: je 0x5dd949 */ if (fZ) goto L_005dd949;
L_005dd8f6:; BB(0x005dd8f6);
    /* 005dd8f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd8f9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005dd8fc: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd8ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd901: je 0x5dd949 */ if (fZ) goto L_005dd949;
L_005dd903:; BB(0x005dd903);
    /* 005dd903: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd906: cmp dword ptr [edx + 0x894], 0 */ {  u32 a = R32((u32)(r_edx+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd90d: jne 0x5dd949 */ if (!fZ) goto L_005dd949;
L_005dd90f:; BB(0x005dd90f);
    /* 005dd90f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd912: mov dword ptr [eax + 0x894], 1 */ W32((u32)(r_eax+0x894u), 0x1u);
    /* 005dd91c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dd91f: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 005dd926: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd929: call 0x5dda05 */ r_esp -= 4; W32(r_esp, 0x5dd92eu); f_005dda05();
    /* 005dd92e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd930: jne 0x5dd949 */ if (!fZ) goto L_005dd949;
L_005dd932:; BB(0x005dd932);
    /* 005dd932: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd935: call 0x5dda32 */ r_esp -= 4; W32(r_esp, 0x5dd93au); f_005dda32();
    /* 005dd93a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd93b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd93e: mov ecx, dword ptr [edx + 0x890] */ r_ecx = R32((u32)(r_edx+0x890u));
    /* 005dd944: call 0x5de705 */ r_esp -= 4; W32(r_esp, 0x5dd949u); f_005de705();
L_005dd949:; BB(0x005dd949);
    /* 005dd949: jmp 0x5dd97b */ goto L_005dd97b;
L_005dd94b:; BB(0x005dd94b);
    /* 005dd94b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd94e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005dd951: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd954: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd956: je 0x5dd97b */ if (fZ) goto L_005dd97b;
L_005dd958:; BB(0x005dd958);
    /* 005dd958: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd95b: cmp dword ptr [edx + 0x894], 0 */ {  u32 a = R32((u32)(r_edx+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd962: je 0x5dd97b */ if (fZ) goto L_005dd97b;
L_005dd964:; BB(0x005dd964);
    /* 005dd964: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd967: mov dword ptr [eax + 0x894], 0 */ W32((u32)(r_eax+0x894u), 0x0u);
    /* 005dd971: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dd974: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_005dd97b:; BB(0x005dd97b);
    /* 005dd97b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dd97e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
L_005dd981:; BB(0x005dd981);
    /* 005dd981: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd983: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd984: ret 4 */ FN_RET(0x005dd852); r_esp += 8; return;
}

void f_005dd987(void) /* FUN_005dd987 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd987);
    /* 005dd987: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd988: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd98a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd98b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd98e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd991: mov dword ptr [eax + 0x898], 1 */ W32((u32)(r_eax+0x898u), 0x1u);
    /* 005dd99b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd99e: mov edx, dword ptr [ecx + 0x88c] */ r_edx = R32((u32)(r_ecx+0x88cu));
    /* 005dd9a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd9a8: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5dd9adu); f_005e87aa();
    /* 005dd9ad: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9b2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9b4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd9b9: call 0x5e8b5a */ r_esp -= 4; W32(r_esp, 0x5dd9beu); f_005e8b5a();
    /* 005dd9be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd9c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dd9c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd9c6: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5dd9c9u); call_ind(t); }
    /* 005dd9c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd9cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd9cc: ret  */ FN_RET(0x005dd987); r_esp += 4; return;
}

void f_005dd9cd(void) /* FUN_005dd9cd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd9cd);
    /* 005dd9cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9ce: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd9d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9d1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd9d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd9d7: mov dword ptr [eax + 0x898], 0 */ W32((u32)(r_eax+0x898u), 0x0u);
    /* 005dd9e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd9e4: mov edx, dword ptr [ecx + 0x888] */ r_edx = R32((u32)(r_ecx+0x888u));
    /* 005dd9ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd9ee: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5dd9f3u); f_005e87aa();
    /* 005dd9f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd9fc: call 0x5e8b5a */ r_esp -= 4; W32(r_esp, 0x5dda01u); f_005e8b5a();
    /* 005dda01: mov esp, ebp */ r_esp = r_ebp;
    /* 005dda03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dda04: ret  */ FN_RET(0x005dd9cd); r_esp += 4; return;
}

void f_005dda05(void) /* FUN_005dda05 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dda05);
    /* 005dda05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dda06: mov ebp, esp */ r_ebp = r_esp;
    /* 005dda08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dda09: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dda0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dda0f: mov eax, dword ptr [eax + 0x898] */ r_eax = R32((u32)(r_eax+0x898u));
    /* 005dda15: mov esp, ebp */ r_esp = r_ebp;
    /* 005dda17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dda18: ret  */ FN_RET(0x005dda05); r_esp += 4; return;
}

void f_005dda19(void) /* FUN_005dda19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dda19);
    /* 005dda19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dda1a: mov ebp, esp */ r_ebp = r_esp;
    /* 005dda1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dda1d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dda20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dda23: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dda26: mov dword ptr [eax + 0x89c], ecx */ W32((u32)(r_eax+0x89cu), r_ecx);
    /* 005dda2c: mov esp, ebp */ r_esp = r_ebp;
    /* 005dda2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dda2f: ret 4 */ FN_RET(0x005dda19); r_esp += 8; return;
}

void f_005dda32(void) /* FUN_005dda32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dda32);
    /* 005dda32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dda33: mov ebp, esp */ r_ebp = r_esp;
    /* 005dda35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dda36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dda39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dda3c: mov eax, dword ptr [eax + 0x89c] */ r_eax = R32((u32)(r_eax+0x89cu));
    /* 005dda42: mov esp, ebp */ r_esp = r_ebp;
    /* 005dda44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dda45: ret  */ FN_RET(0x005dda32); r_esp += 4; return;
}

void f_005dda46(void) /* FUN_005dda46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dda46);
    /* 005dda46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dda47: mov ebp, esp */ r_ebp = r_esp;
    /* 005dda49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dda4a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dda4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dda50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dda53: mov dword ptr [eax + 0x890], ecx */ W32((u32)(r_eax+0x890u), r_ecx);
    /* 005dda59: mov esp, ebp */ r_esp = r_ebp;
    /* 005dda5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dda5c: ret 4 */ FN_RET(0x005dda46); r_esp += 8; return;
}

void f_005dda5f(void) /* FUN_005dda5f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dda5f);
    /* 005dda5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dda60: mov ebp, esp */ r_ebp = r_esp;
    /* 005dda62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dda63: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dda66: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dda69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dda6c: mov dword ptr [eax + 0x888], ecx */ W32((u32)(r_eax+0x888u), r_ecx);
    /* 005dda72: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dda75: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 005dda7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dda7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dda7f: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5dda84u); f_005e87aa();
    /* 005dda84: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dda88: je 0x5dda98 */ if (fZ) goto L_005dda98;
L_005dda8a:; BB(0x005dda8a);
    /* 005dda8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dda8d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005dda90: mov dword ptr [ecx + 0x88c], edx */ W32((u32)(r_ecx+0x88cu), r_edx);
    /* 005dda96: jmp 0x5ddaa4 */ goto L_005ddaa4;
L_005dda98:; BB(0x005dda98);
    /* 005dda98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dda9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dda9e: mov dword ptr [eax + 0x88c], ecx */ W32((u32)(r_eax+0x88cu), r_ecx);
L_005ddaa4:; BB(0x005ddaa4);
    /* 005ddaa4: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddaa6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddaa7: ret 8 */ FN_RET(0x005dda5f); r_esp += 12; return;
}

void f_005ddad6(void) /* FUN_005ddad6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ddad6);
    /* 005ddad6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddad7: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddad9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddada: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ddadd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddae0: mov dword ptr [eax], 0x63babc */ W32((u32)(r_eax), 0x63babcu);
    /* 005ddae6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddae9: call 0x5e69b1 */ r_esp -= 4; W32(r_esp, 0x5ddaeeu); f_005e69b1();
    /* 005ddaee: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddaf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddaf1: ret  */ FN_RET(0x005ddad6); r_esp += 4; return;
}

void f_005ddaf2(void) /* FUN_005ddaf2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ddaf2);
    /* 005ddaf2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddaf3: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddaf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddaf6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ddaf9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddafc: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005ddaff: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x5ddb04u); f_005de399();
    /* 005ddb04: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddb06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddb07: ret  */ FN_RET(0x005ddaf2); r_esp += 4; return;
}

void f_005ddb08(void) /* FUN_005ddb08 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ddb08);
    /* 005ddb08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb09: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddb0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb0c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ddb0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddb12: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005ddb15: call 0x5de6f4 */ r_esp -= 4; W32(r_esp, 0x5ddb1au); f_005de6f4();
    /* 005ddb1a: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddb1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddb1d: ret  */ FN_RET(0x005ddb08); r_esp += 4; return;
}

void f_005ddb1e(void) /* FUN_005ddb1e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ddb1e);
    /* 005ddb1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb1f: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddb21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb22: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ddb25: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ddb28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb29: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ddb2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddb30: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 005ddb33: call 0x5de266 */ r_esp -= 4; W32(r_esp, 0x5ddb38u); f_005de266();
    /* 005ddb38: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddb3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddb3b: ret 8 */ FN_RET(0x005ddb1e); r_esp += 12; return;
}

void f_005ddb3e(void) /* FUN_005ddb3e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ddb3e);
    /* 005ddb3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb3f: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddb41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb42: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ddb45: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ddb48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddb4c: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 005ddb4f: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5ddb54u); f_005de13d();
    /* 005ddb54: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddb56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddb57: ret 4 */ FN_RET(0x005ddb3e); r_esp += 8; return;
}

void f_005ddb5a(void) /* FUN_005ddb5a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ddb5a);
    /* 005ddb5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb5b: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddb5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb5e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ddb61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddb64: call 0x5d94ef */ r_esp -= 4; W32(r_esp, 0x5ddb69u); f_005d94ef();
    /* 005ddb69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddb6c: mov dword ptr [eax], 0x63bb14 */ W32((u32)(r_eax), 0x63bb14u);
    /* 005ddb72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddb75: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 005ddb7c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddb7f: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 005ddb86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddb89: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 005ddb90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddb93: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 005ddb9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddb9d: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 005ddba4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddba7: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 005ddbae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddbb1: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 005ddbb8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddbbb: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 005ddbc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddbc5: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 005ddbcc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddbcf: mov dword ptr [ecx + 0x50], 5 */ W32((u32)(r_ecx+0x50u), 0x5u);
    /* 005ddbd6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddbd9: mov dword ptr [edx + 0x54], 5 */ W32((u32)(r_edx+0x54u), 0x5u);
    /* 005ddbe0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddbe3: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
    /* 005ddbea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddbed: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 005ddbf4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddbf7: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
    /* 005ddbfe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddc01: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 005ddc08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddc0b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddc0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddc0e: ret  */ FN_RET(0x005ddb5a); r_esp += 4; return;
}

void f_005ddc0f(void) /* FUN_005ddc0f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ddc0f);
    /* 005ddc0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc10: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddc12: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ddc15: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005ddc18: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddc1b: mov dword ptr [eax], 0x63bb14 */ W32((u32)(r_eax), 0x63bb14u);
    /* 005ddc21: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddc24: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddc28: je 0x5ddc61 */ if (fZ) goto L_005ddc61;
L_005ddc2a:; BB(0x005ddc2a);
    /* 005ddc2a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddc2d: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005ddc30: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ddc33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ddc36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ddc39: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddc3d: je 0x5ddc50 */ if (fZ) goto L_005ddc50;
L_005ddc3f:; BB(0x005ddc3f);
    /* 005ddc3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc41: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddc44: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ddc46: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddc49: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5ddc4bu); call_ind(t); }
    /* 005ddc4b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ddc4e: jmp 0x5ddc57 */ goto L_005ddc57;
L_005ddc50:; BB(0x005ddc50);
    /* 005ddc50: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005ddc57:; BB(0x005ddc57);
    /* 005ddc57: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddc5a: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_005ddc61:; BB(0x005ddc61);
    /* 005ddc61: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddc64: cmp dword ptr [edx + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddc68: je 0x5ddca1 */ if (fZ) goto L_005ddca1;
L_005ddc6a:; BB(0x005ddc6a);
    /* 005ddc6a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddc6d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005ddc70: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ddc73: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ddc76: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ddc79: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddc7d: je 0x5ddc90 */ if (fZ) goto L_005ddc90;
L_005ddc7f:; BB(0x005ddc7f);
    /* 005ddc7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc81: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ddc84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ddc86: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ddc89: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5ddc8bu); call_ind(t); }
    /* 005ddc8b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005ddc8e: jmp 0x5ddc97 */ goto L_005ddc97;
L_005ddc90:; BB(0x005ddc90);
    /* 005ddc90: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005ddc97:; BB(0x005ddc97);
    /* 005ddc97: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddc9a: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_005ddca1:; BB(0x005ddca1);
    /* 005ddca1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddca4: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddca8: je 0x5ddd3f */ if (fZ) goto L_005ddd3f;
L_005ddcae:; BB(0x005ddcae);
    /* 005ddcae: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddcb1: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005ddcb4: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5ddcb9u); f_005dd4d2();
    /* 005ddcb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddcbb: je 0x5ddd08 */ if (fZ) goto L_005ddd08;
L_005ddcbd:; BB(0x005ddcbd);
    /* 005ddcbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddcbf: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddcc2: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005ddcc5: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5ddccau); f_005dd560();
    /* 005ddcca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ddccd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddcd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddcd1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddcd4: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005ddcd7: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5ddcdcu); f_005dd469();
    /* 005ddcdc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddcdf: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ddce2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ddce5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ddce8: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddcec: je 0x5ddcff */ if (fZ) goto L_005ddcff;
L_005ddcee:; BB(0x005ddcee);
    /* 005ddcee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddcf0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ddcf3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ddcf5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ddcf8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5ddcfau); call_ind(t); }
    /* 005ddcfa: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005ddcfd: jmp 0x5ddd06 */ goto L_005ddd06;
L_005ddcff:; BB(0x005ddcff);
    /* 005ddcff: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005ddd06:; BB(0x005ddd06);
    /* 005ddd06: jmp 0x5ddcae */ goto L_005ddcae;
L_005ddd08:; BB(0x005ddd08);
    /* 005ddd08: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddd0b: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005ddd0e: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005ddd11: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ddd14: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ddd17: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddd1b: je 0x5ddd2e */ if (fZ) goto L_005ddd2e;
L_005ddd1d:; BB(0x005ddd1d);
    /* 005ddd1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd1f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ddd22: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ddd24: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ddd27: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5ddd29u); call_ind(t); }
    /* 005ddd29: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ddd2c: jmp 0x5ddd35 */ goto L_005ddd35;
L_005ddd2e:; BB(0x005ddd2e);
    /* 005ddd2e: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005ddd35:; BB(0x005ddd35);
    /* 005ddd35: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddd38: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_005ddd3f:; BB(0x005ddd3f);
    /* 005ddd3f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddd42: call 0x5d9576 */ r_esp -= 4; W32(r_esp, 0x5ddd47u); f_005d9576();
    /* 005ddd47: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddd49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddd4a: ret  */ FN_RET(0x005ddc0f); r_esp += 4; return;
}

void f_005ddd4b(void) /* FUN_005ddd4b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ddd4b);
    /* 005ddd4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd4c: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddd4e: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ddd51: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ddd54: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ddd57: call 0x5d95c3 */ r_esp -= 4; W32(r_esp, 0x5ddd5cu); f_005d95c3();
    /* 005ddd5c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ddd5f: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddd63: jne 0x5ddd95 */ if (!fZ) goto L_005ddd95;
L_005ddd65:; BB(0x005ddd65);
    /* 005ddd65: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd67: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ddd6cu); f_0048ab58();
    /* 005ddd6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddd6f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ddd72: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddd76: je 0x5ddd85 */ if (fZ) goto L_005ddd85;
L_005ddd78:; BB(0x005ddd78);
    /* 005ddd78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddd7b: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5ddd80u); f_005e9d30();
    /* 005ddd80: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ddd83: jmp 0x5ddd8c */ goto L_005ddd8c;
L_005ddd85:; BB(0x005ddd85);
    /* 005ddd85: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005ddd8c:; BB(0x005ddd8c);
    /* 005ddd8c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ddd8f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ddd92: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
L_005ddd95:; BB(0x005ddd95);
    /* 005ddd95: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ddd98: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005ddd9b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ddd9e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ddda1: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005ddda4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddda6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ddda9: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 005dddac: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dddaf: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005dddb2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dddb4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5dddb7u); call_ind(t); }
    /* 005dddb7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dddba: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005dddbd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dddc0: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005dddc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dddc5: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5dddc8u); call_ind(t); }
    /* 005dddc8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dddcb: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dddcf: jne 0x5dde05 */ if (!fZ) goto L_005dde05;
L_005dddd1:; BB(0x005dddd1);
    /* 005dddd1: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005dddd3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5dddd8u); f_0048ab58();
    /* 005dddd8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddddb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005dddde: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddde2: je 0x5dddf5 */ if (fZ) goto L_005dddf5;
L_005ddde4:; BB(0x005ddde4);
    /* 005ddde4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ddde7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddde8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dddeb: call 0x5ddaaa */ r_esp -= 4; W32(r_esp, 0x5dddf0u); f_005ddaaa();
    /* 005dddf0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005dddf3: jmp 0x5dddfc */ goto L_005dddfc;
L_005dddf5:; BB(0x005dddf5);
    /* 005dddf5: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005dddfc:; BB(0x005dddfc);
    /* 005dddfc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dddff: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dde02: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_005dde05:; BB(0x005dde05);
    /* 005dde05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dde08: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005dde0b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dde0e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005dde11: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005dde14: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005dde17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dde18: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005dde1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dde1c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dde1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dde20: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dde23: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005dde26: call 0x5e70a6 */ r_esp -= 4; W32(r_esp, 0x5dde2bu); f_005e70a6();
    /* 005dde2b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dde2e: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005dde31: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dde34: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005dde37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dde39: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5dde3cu); call_ind(t); }
    /* 005dde3c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dde3f: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005dde42: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5dde47u); f_005d9883();
    /* 005dde47: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dde4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dde4b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dde4e: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005dde51: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dde54: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005dde57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dde59: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5dde5cu); call_ind(t); }
    /* 005dde5c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dde5f: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dde63: jne 0x5dde95 */ if (!fZ) goto L_005dde95;
L_005dde65:; BB(0x005dde65);
    /* 005dde65: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005dde67: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5dde6cu); f_0048ab58();
    /* 005dde6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dde6f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005dde72: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dde76: je 0x5dde85 */ if (fZ) goto L_005dde85;
L_005dde78:; BB(0x005dde78);
    /* 005dde78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dde7b: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x5dde80u); f_005dd290();
    /* 005dde80: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dde83: jmp 0x5dde8c */ goto L_005dde8c;
L_005dde85:; BB(0x005dde85);
    /* 005dde85: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dde8c:; BB(0x005dde8c);
    /* 005dde8c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dde8f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dde92: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
L_005dde95:; BB(0x005dde95);
    /* 005dde95: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dde98: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 005dde9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddea1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddea2: ret 0xc */ FN_RET(0x005ddd4b); r_esp += 16; return;
}

void f_005ddea5(void) /* FUN_005ddea5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ddea5);
    /* 005ddea5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddea6: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddea8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ddeab: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ddeae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddeb1: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5ddeb6u); f_005d96a9();
    /* 005ddeb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddeb8: jne 0x5ddec3 */ if (!fZ) goto L_005ddec3;
L_005ddeba:; BB(0x005ddeba);
    /* 005ddeba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ddebd: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddec1: je 0x5ddeca */ if (fZ) goto L_005ddeca;
L_005ddec3:; BB(0x005ddec3);
    /* 005ddec3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ddec5: jmp 0x5de05c */ goto L_005de05c;
L_005ddeca:; BB(0x005ddeca);
    /* 005ddeca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ddecd: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005dded0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005dded3: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dded7: je 0x5ddede */ if (fZ) goto L_005ddede;
L_005dded9:; BB(0x005dded9);
    /* 005dded9: jmp 0x5de056 */ goto L_005de056;
L_005ddede:; BB(0x005ddede);
    /* 005ddede: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ddee1: cmp dword ptr [eax + 0x1c], 0x20 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddee5: jne 0x5de056 */ if (!fZ) goto L_005de056;
L_005ddeeb:; BB(0x005ddeeb);
    /* 005ddeeb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ddeee: mov dl, byte ptr [ecx + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x14u))) & 0xffu);
    /* 005ddef1: mov byte ptr [ebp - 0x10], dl */ W8((u32)(r_ebp+0xfffffff0u), (u8)r_edx);
    /* 005ddef4: cmp byte ptr [ebp - 0x10], 1 */ {  u32 a = R8((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005ddef8: je 0x5ddf09 */ if (fZ) goto L_005ddf09;
L_005ddefa:; BB(0x005ddefa);
    /* 005ddefa: cmp byte ptr [ebp - 0x10], 2 */ {  u32 a = R8((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005ddefe: je 0x5ddfa9 */ if (fZ) goto L_005ddfa9;
L_005ddf04:; BB(0x005ddf04);
    /* 005ddf04: jmp 0x5de056 */ goto L_005de056;
L_005ddf09:; BB(0x005ddf09);
    /* 005ddf09: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf0c: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x5ddf11u); f_005de96b();
    /* 005ddf11: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ddf14: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ddf18: jle 0x5ddfa4 */ if ((fZ||fS!=fO)) goto L_005ddfa4;
L_005ddf1e:; BB(0x005ddf1e);
    /* 005ddf1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddf21: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ddf24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf25: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf28: call 0x5df13c */ r_esp -= 4; W32(r_esp, 0x5ddf2du); f_005df13c();
    /* 005ddf2d: mov ecx, eax */ r_ecx = r_eax;
    /* 005ddf2f: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5ddf34u); f_005d96a9();
    /* 005ddf34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddf36: je 0x5ddf95 */ if (fZ) goto L_005ddf95;
L_005ddf38:; BB(0x005ddf38);
    /* 005ddf38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf3b: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005ddf3e: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5ddf43u); f_005dd4d2();
    /* 005ddf43: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf46: cmp eax, dword ptr [edx + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x3cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ddf49: jle 0x5ddf95 */ if ((fZ||fS!=fO)) goto L_005ddf95;
L_005ddf4b:; BB(0x005ddf4b);
    /* 005ddf4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf4e: call 0x5dea3c */ r_esp -= 4; W32(r_esp, 0x5ddf53u); f_005dea3c();
    /* 005ddf53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddf55: je 0x5ddf65 */ if (fZ) goto L_005ddf65;
L_005ddf57:; BB(0x005ddf57);
    /* 005ddf57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf5b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf5e: call 0x5de266 */ r_esp -= 4; W32(r_esp, 0x5ddf63u); f_005de266();
    /* 005ddf63: jmp 0x5ddf95 */ goto L_005ddf95;
L_005ddf65:; BB(0x005ddf65);
    /* 005ddf65: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf68: call 0x5df237 */ r_esp -= 4; W32(r_esp, 0x5ddf6du); f_005df237();
    /* 005ddf6d: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ddf70: jle 0x5ddf83 */ if ((fZ||fS!=fO)) goto L_005ddf83;
L_005ddf72:; BB(0x005ddf72);
    /* 005ddf72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddf75: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ddf78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf79: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf7c: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5ddf81u); f_005de13d();
    /* 005ddf81: jmp 0x5ddf95 */ goto L_005ddf95;
L_005ddf83:; BB(0x005ddf83);
    /* 005ddf83: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf86: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddf89: sub edx, dword ptr [ecx + 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ddf8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf90: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5ddf95u); f_005de13d();
L_005ddf95:; BB(0x005ddf95);
    /* 005ddf95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddf98: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ddf9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf9f: call 0x5de705 */ r_esp -= 4; W32(r_esp, 0x5ddfa4u); f_005de705();
L_005ddfa4:; BB(0x005ddfa4);
    /* 005ddfa4: jmp 0x5de056 */ goto L_005de056;
L_005ddfa9:; BB(0x005ddfa9);
    /* 005ddfa9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddfac: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x5ddfb1u); f_005de96b();
    /* 005ddfb1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ddfb4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddfb7: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005ddfba: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5ddfbfu); f_005dd4d2();
    /* 005ddfbf: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ddfc2: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ddfc5: jge 0x5de056 */ if ((fS==fO)) goto L_005de056;
L_005ddfcb:; BB(0x005ddfcb);
    /* 005ddfcb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ddfce: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ddfd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddfd2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddfd5: call 0x5df13c */ r_esp -= 4; W32(r_esp, 0x5ddfdau); f_005df13c();
    /* 005ddfda: mov ecx, eax */ r_ecx = r_eax;
    /* 005ddfdc: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5ddfe1u); f_005d96a9();
    /* 005ddfe1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddfe3: je 0x5de047 */ if (fZ) goto L_005de047;
L_005ddfe5:; BB(0x005ddfe5);
    /* 005ddfe5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddfe8: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005ddfeb: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5ddff0u); f_005dd4d2();
    /* 005ddff0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddff3: cmp eax, dword ptr [ecx + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x3cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ddff6: jle 0x5de047 */ if ((fZ||fS!=fO)) goto L_005de047;
L_005ddff8:; BB(0x005ddff8);
    /* 005ddff8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddffb: call 0x5dea3c */ r_esp -= 4; W32(r_esp, 0x5de000u); f_005dea3c();
    /* 005de000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de002: je 0x5de012 */ if (fZ) goto L_005de012;
L_005de004:; BB(0x005de004);
    /* 005de004: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005de006: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de008: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de00b: call 0x5de266 */ r_esp -= 4; W32(r_esp, 0x5de010u); f_005de266();
    /* 005de010: jmp 0x5de047 */ goto L_005de047;
L_005de012:; BB(0x005de012);
    /* 005de012: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de015: call 0x5df237 */ r_esp -= 4; W32(r_esp, 0x5de01au); f_005df237();
    /* 005de01a: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de01d: jle 0x5de030 */ if ((fZ||fS!=fO)) goto L_005de030;
L_005de01f:; BB(0x005de01f);
    /* 005de01f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de022: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005de025: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de026: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de029: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5de02eu); f_005de13d();
    /* 005de02e: jmp 0x5de047 */ goto L_005de047;
L_005de030:; BB(0x005de030);
    /* 005de030: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de033: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005de036: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005de039: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de03c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005de03e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de03f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de042: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5de047u); f_005de13d();
L_005de047:; BB(0x005de047);
    /* 005de047: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de04a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de04d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de04e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de051: call 0x5de705 */ r_esp -= 4; W32(r_esp, 0x5de056u); f_005de705();
L_005de056:; BB(0x005de056);
    /* 005de056: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de059: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
L_005de05c:; BB(0x005de05c);
    /* 005de05c: mov esp, ebp */ r_esp = r_ebp;
    /* 005de05e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de05f: ret 4 */ FN_RET(0x005ddea5); r_esp += 8; return;
}

void f_005de062(void) /* FUN_005de062 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de062);
    /* 005de062: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de063: mov ebp, esp */ r_ebp = r_esp;
    /* 005de065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de066: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de069: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de06c: call 0x5d9a24 */ r_esp -= 4; W32(r_esp, 0x5de071u); f_005d9a24();
    /* 005de071: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de074: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005de077: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de07a: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005de07d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de07f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5de082u); call_ind(t); }
    /* 005de082: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de085: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005de088: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de08b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005de08e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de090: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5de093u); call_ind(t); }
    /* 005de093: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de096: call 0x5dea3c */ r_esp -= 4; W32(r_esp, 0x5de09bu); f_005dea3c();
    /* 005de09b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de09d: je 0x5de0b0 */ if (fZ) goto L_005de0b0;
L_005de09f:; BB(0x005de09f);
    /* 005de09f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de0a2: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005de0a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de0a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de0a9: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5de0aeu); f_005de13d();
    /* 005de0ae: jmp 0x5de0c1 */ goto L_005de0c1;
L_005de0b0:; BB(0x005de0b0);
    /* 005de0b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de0b3: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x5de0b8u); f_005de96b();
    /* 005de0b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de0b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de0bc: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5de0c1u); f_005de13d();
L_005de0c1:; BB(0x005de0c1);
    /* 005de0c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005de0c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de0c4: ret  */ FN_RET(0x005de062); r_esp += 4; return;
}

void f_005de0c5(void) /* FUN_005de0c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de0c5);
    /* 005de0c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de0c6: mov ebp, esp */ r_ebp = r_esp;
    /* 005de0c8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de0cb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005de0ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de0d1: call 0x5d9a0f */ r_esp -= 4; W32(r_esp, 0x5de0d6u); f_005d9a0f();
    /* 005de0d6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de0d9: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005de0dc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de0df: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005de0e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de0e4: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5de0e7u); call_ind(t); }
    /* 005de0e7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de0ea: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005de0ed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de0f0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005de0f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de0f5: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5de0f8u); call_ind(t); }
    /* 005de0f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de0ff: jmp 0x5de10a */ goto L_005de10a;
L_005de101:; BB(0x005de101);
    /* 005de101: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de104: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de107: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005de10a:; BB(0x005de10a);
    /* 005de10a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de10d: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005de110: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de115u); f_005dd4d2();
    /* 005de115: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de118: jge 0x5de139 */ if ((fS==fO)) goto L_005de139;
L_005de11a:; BB(0x005de11a);
    /* 005de11a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de11d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de11e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de121: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de124: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de129u); f_005dd560();
    /* 005de129: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005de12c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de12f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005de131: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de134: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5de137u); call_ind(t); }
    /* 005de137: jmp 0x5de101 */ goto L_005de101;
L_005de139:; BB(0x005de139);
    /* 005de139: mov esp, ebp */ r_esp = r_ebp;
    /* 005de13b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de13c: ret  */ FN_RET(0x005de0c5); r_esp += 4; return;
}

void f_005de13d(void) /* FUN_005de13d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de13d);
    /* 005de13d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de13e: mov ebp, esp */ r_ebp = r_esp;
    /* 005de140: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de143: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005de146: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005de149: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de14c: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de151u); f_005dd4d2();
    /* 005de151: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005de154: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de158: je 0x5de24e */ if (fZ) goto L_005de24e;
L_005de15e:; BB(0x005de15e);
    /* 005de15e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de161: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de164: sub edx, dword ptr [ecx + 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005de167: cmp dword ptr [ebp + 8], edx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de16a: jle 0x5de178 */ if ((fZ||fS!=fO)) goto L_005de178;
L_005de16c:; BB(0x005de16c);
    /* 005de16c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005de16f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de172: sub ecx, dword ptr [eax + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005de175: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005de178:; BB(0x005de178);
    /* 005de178: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de17c: jge 0x5de18a */ if ((fS==fO)) goto L_005de18a;
L_005de17e:; BB(0x005de17e);
    /* 005de17e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de181: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 005de188: jmp 0x5de193 */ goto L_005de193;
L_005de18a:; BB(0x005de18a);
    /* 005de18a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005de18d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de190: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
L_005de193:; BB(0x005de193);
    /* 005de193: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de195: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de198: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005de19b: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de1a0u); f_005dd560();
    /* 005de1a0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005de1a3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de1a6: call 0x5e8f42 */ r_esp -= 4; W32(r_esp, 0x5de1abu); f_005e8f42();
    /* 005de1ab: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005de1ae: mov dword ptr [ebp - 0xc], 0xf */ W32((u32)(r_ebp+0xfffffff4u), 0xfu);
    /* 005de1b5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005de1bc: jmp 0x5de1c7 */ goto L_005de1c7;
L_005de1be:; BB(0x005de1be);
    /* 005de1be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de1c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de1c4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005de1c7:; BB(0x005de1c7);
    /* 005de1c7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de1ca: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de1cd: jge 0x5de24e */ if ((fS==fO)) goto L_005de24e;
L_005de1cf:; BB(0x005de1cf);
    /* 005de1cf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de1d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de1d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005de1d6: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de1d9: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de1deu); f_005dd560();
    /* 005de1de: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005de1e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de1e4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de1e7: cmp edx, dword ptr [ecx + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x38u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de1ea: jl 0x5de1fd */ if ((fS!=fO)) goto L_005de1fd;
L_005de1ec:; BB(0x005de1ec);
    /* 005de1ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005de1ef: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005de1f2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de1f5: add ecx, dword ptr [edx + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005de1f8: cmp dword ptr [ebp - 8], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de1fb: jl 0x5de216 */ if ((fS!=fO)) goto L_005de216;
L_005de1fd:; BB(0x005de1fd);
    /* 005de1fd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de200: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5de205u); f_005d9690();
    /* 005de205: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de207: je 0x5de214 */ if (fZ) goto L_005de214;
L_005de209:; BB(0x005de209);
    /* 005de209: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de20c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de20e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de211: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5de214u); call_ind(t); }
L_005de214:; BB(0x005de214);
    /* 005de214: jmp 0x5de249 */ goto L_005de249;
L_005de216:; BB(0x005de216);
    /* 005de216: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005de219: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de21c: sub ecx, dword ptr [eax + 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005de21f: imul ecx, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005de223: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de226: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005de229: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de22b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de22c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de22f: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005de232: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de233: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de236: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de238: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de23b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5de23eu); call_ind(t); }
    /* 005de23e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de241: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de243: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de246: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5de249u); call_ind(t); }
L_005de249:; BB(0x005de249);
    /* 005de249: jmp 0x5de1be */ goto L_005de1be;
L_005de24e:; BB(0x005de24e);
    /* 005de24e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005de251: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005de254: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de255: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de258: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005de25b: call 0x5e729b */ r_esp -= 4; W32(r_esp, 0x5de260u); f_005e729b();
    /* 005de260: mov esp, ebp */ r_esp = r_ebp;
    /* 005de262: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de263: ret 4 */ FN_RET(0x005de13d); r_esp += 8; return;
}

void f_005de266(void) /* FUN_005de266 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de266);
    /* 005de266: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de267: mov ebp, esp */ r_ebp = r_esp;
    /* 005de269: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de26a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de26d: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de271: jne 0x5de287 */ if (!fZ) goto L_005de287;
L_005de273:; BB(0x005de273);
    /* 005de273: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de276: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005de279: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005de27c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de27d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de280: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5de285u); f_005de13d();
    /* 005de285: jmp 0x5de29f */ goto L_005de29f;
L_005de287:; BB(0x005de287);
    /* 005de287: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de28b: jne 0x5de29f */ if (!fZ) goto L_005de29f;
L_005de28d:; BB(0x005de28d);
    /* 005de28d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de290: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005de293: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de296: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de297: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de29a: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5de29fu); f_005de13d();
L_005de29f:; BB(0x005de29f);
    /* 005de29f: mov esp, ebp */ r_esp = r_ebp;
    /* 005de2a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de2a2: ret 8 */ FN_RET(0x005de266); r_esp += 12; return;
}

void f_005de2a5(void) /* FUN_005de2a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de2a5);
    /* 005de2a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de2a6: mov ebp, esp */ r_ebp = r_esp;
    /* 005de2a8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de2ab: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005de2ae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de2b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de2b4: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 005de2b7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de2be: jmp 0x5de2c9 */ goto L_005de2c9;
L_005de2c0:; BB(0x005de2c0);
    /* 005de2c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de2c3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005de2c6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005de2c9:; BB(0x005de2c9);
    /* 005de2c9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de2cc: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de2cf: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de2d4u); f_005dd4d2();
    /* 005de2d4: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de2d7: jge 0x5de2fc */ if ((fS==fO)) goto L_005de2fc;
L_005de2d9:; BB(0x005de2d9);
    /* 005de2d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de2dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de2dd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de2e0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005de2e3: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de2e8u); f_005dd560();
    /* 005de2e8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005de2eb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de2ee: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005de2f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de2f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de2f5: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5de2fau); f_005e87aa();
    /* 005de2fa: jmp 0x5de2c0 */ goto L_005de2c0;
L_005de2fc:; BB(0x005de2fc);
    /* 005de2fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005de2fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de2ff: ret 4 */ FN_RET(0x005de2a5); r_esp += 8; return;
}

void f_005de302(void) /* FUN_005de302 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de302);
    /* 005de302: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de303: mov ebp, esp */ r_ebp = r_esp;
    /* 005de305: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de306: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de309: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de30c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de30f: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 005de312: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de315: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005de318: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 005de31b: mov esp, ebp */ r_esp = r_ebp;
    /* 005de31d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de31e: ret 8 */ FN_RET(0x005de302); r_esp += 12; return;
}

void f_005de321(void) /* FUN_005de321 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de321);
    /* 005de321: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de322: mov ebp, esp */ r_ebp = r_esp;
    /* 005de324: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de327: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005de32a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de32d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de330: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 005de333: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de337: je 0x5de344 */ if (fZ) goto L_005de344;
L_005de339:; BB(0x005de339);
    /* 005de339: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de33c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005de33f: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 005de342: jmp 0x5de34d */ goto L_005de34d;
L_005de344:; BB(0x005de344);
    /* 005de344: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de347: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005de34a: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
L_005de34d:; BB(0x005de34d);
    /* 005de34d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de354: jmp 0x5de35f */ goto L_005de35f;
L_005de356:; BB(0x005de356);
    /* 005de356: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de359: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de35c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005de35f:; BB(0x005de35f);
    /* 005de35f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de362: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005de365: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de36au); f_005dd4d2();
    /* 005de36a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de36d: jge 0x5de393 */ if ((fS==fO)) goto L_005de393;
L_005de36f:; BB(0x005de36f);
    /* 005de36f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de372: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de373: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de376: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de379: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de37eu); f_005dd560();
    /* 005de37e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005de381: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005de384: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de385: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005de388: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de389: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de38c: call 0x5dda5f */ r_esp -= 4; W32(r_esp, 0x5de391u); f_005dda5f();
    /* 005de391: jmp 0x5de356 */ goto L_005de356;
L_005de393:; BB(0x005de393);
    /* 005de393: mov esp, ebp */ r_esp = r_ebp;
    /* 005de395: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de396: ret 8 */ FN_RET(0x005de321); r_esp += 12; return;
}

void f_005de399(void) /* FUN_005de399 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de399);
    /* 005de399: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de39a: mov ebp, esp */ r_ebp = r_esp;
    /* 005de39c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de39d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de3a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de3a3: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de3a6: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de3abu); f_005dd4d2();
    /* 005de3ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005de3ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de3ae: ret  */ FN_RET(0x005de399); r_esp += 4; return;
}

void f_005de3af(void) /* FUN_005de3af */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de3af);
    /* 005de3af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de3b0: mov ebp, esp */ r_ebp = r_esp;
    /* 005de3b2: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de3b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005de3b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005de3b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de3bc: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de3c0: jne 0x5de3d0 */ if (!fZ) goto L_005de3d0;
L_005de3c2:; BB(0x005de3c2);
    /* 005de3c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de3c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de3c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de3c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de3cb: call 0x5ddd4b */ r_esp -= 4; W32(r_esp, 0x5de3d0u); f_005ddd4b();
L_005de3d0:; BB(0x005de3d0);
    /* 005de3d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de3d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de3d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de3d7: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005de3da: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5de3dfu); f_005ea0c3();
    /* 005de3df: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de3e2: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005de3e5: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5de3eau); f_005d98da();
    /* 005de3ea: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005de3eb: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 005de3f0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005de3f0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005de3f0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005de3f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de3f5: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 005de3f8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de3fb: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005de3fe: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5de403u); f_005d98da();
    /* 005de403: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005de404: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 005de409: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005de409, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005de409, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005de40b: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de40e: jg 0x5de41f */ if ((!fZ&&fS==fO)) goto L_005de41f;
L_005de410:; BB(0x005de410);
    /* 005de410: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de413: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005de416: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005de419: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de41c: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
L_005de41f:; BB(0x005de41f);
    /* 005de41f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de422: cmp dword ptr [edx + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de426: jne 0x5de48f */ if (!fZ) goto L_005de48f;
L_005de428:; BB(0x005de428);
    /* 005de428: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005de42a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5de42fu); f_0048ab58();
    /* 005de42f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de432: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005de435: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de439: je 0x5de44c */ if (fZ) goto L_005de44c;
L_005de43b:; BB(0x005de43b);
    /* 005de43b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de43e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de43f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de442: call 0x5ddaaa */ r_esp -= 4; W32(r_esp, 0x5de447u); f_005ddaaa();
    /* 005de447: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005de44a: jmp 0x5de453 */ goto L_005de453;
L_005de44c:; BB(0x005de44c);
    /* 005de44c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005de453:; BB(0x005de453);
    /* 005de453: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de456: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de459: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 005de45c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de45f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005de462: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de465: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005de468: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005de46b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de46e: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005de471: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de474: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005de477: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de479: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5de47cu); call_ind(t); }
    /* 005de47c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005de47e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de481: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005de484: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de487: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005de48a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de48c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5de48fu); call_ind(t); }
L_005de48f:; BB(0x005de48f);
    /* 005de48f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de492: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005de495: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de498: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005de49b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de49d: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5de4a0u); call_ind(t); }
    /* 005de4a0: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de4a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de4a4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de4a7: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005de4aa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de4ad: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005de4b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de4b2: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5de4b5u); call_ind(t); }
    /* 005de4b5: mov esi, eax */ r_esi = r_eax;
    /* 005de4b7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de4ba: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005de4bd: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5de4c2u); f_005d98c3();
    /* 005de4c2: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005de4c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de4c7: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005de4ca: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005de4cd: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5de4d2u); f_005d98c3();
    /* 005de4d2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005de4d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005de4d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de4d8: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005de4db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de4de: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005de4e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de4e3: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5de4e6u); call_ind(t); }
    /* 005de4e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de4e9: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005de4ec: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5de4f1u); f_005d98da();
    /* 005de4f1: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005de4f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de4f5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005de4f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de4fa: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005de4fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de500: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005de503: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de505: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5de508u); call_ind(t); }
    /* 005de508: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005de509: mov esp, ebp */ r_esp = r_ebp;
    /* 005de50b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de50c: ret 4 */ FN_RET(0x005de3af); r_esp += 8; return;
}

void f_005de50f(void) /* FUN_005de50f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de50f);
    /* 005de50f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de510: mov ebp, esp */ r_ebp = r_esp;
    /* 005de512: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de513: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de516: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de519: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005de51c: mov esp, ebp */ r_esp = r_ebp;
    /* 005de51e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de51f: ret  */ FN_RET(0x005de50f); r_esp += 4; return;
}

void f_005de520(void) /* FUN_005de520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de520);
    /* 005de520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de521: mov ebp, esp */ r_ebp = r_esp;
    /* 005de523: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de526: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005de529: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de52c: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de530: jne 0x5de540 */ if (!fZ) goto L_005de540;
L_005de532:; BB(0x005de532);
    /* 005de532: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de534: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de536: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de538: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de53b: call 0x5ddd4b */ r_esp -= 4; W32(r_esp, 0x5de540u); f_005ddd4b();
L_005de540:; BB(0x005de540);
    /* 005de540: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005de543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de544: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005de547: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de548: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de54b: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005de54e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de551: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005de554: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de556: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5de559u); call_ind(t); }
    /* 005de559: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de55c: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de560: jne 0x5de5c9 */ if (!fZ) goto L_005de5c9;
L_005de562:; BB(0x005de562);
    /* 005de562: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005de564: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5de569u); f_0048ab58();
    /* 005de569: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de56c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005de56f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de573: je 0x5de586 */ if (fZ) goto L_005de586;
L_005de575:; BB(0x005de575);
    /* 005de575: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de578: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de579: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de57c: call 0x5ddaaa */ r_esp -= 4; W32(r_esp, 0x5de581u); f_005ddaaa();
    /* 005de581: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005de584: jmp 0x5de58d */ goto L_005de58d;
L_005de586:; BB(0x005de586);
    /* 005de586: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005de58d:; BB(0x005de58d);
    /* 005de58d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de590: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de593: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 005de596: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de599: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005de59c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de59f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005de5a2: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005de5a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de5a8: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005de5ab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de5ae: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005de5b1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005de5b3: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5de5b6u); call_ind(t); }
    /* 005de5b6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005de5b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de5bb: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005de5be: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de5c1: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005de5c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de5c6: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5de5c9u); call_ind(t); }
L_005de5c9:; BB(0x005de5c9);
    /* 005de5c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005de5cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de5cc: ret 8 */ FN_RET(0x005de520); r_esp += 12; return;
}

void f_005de5cf(void) /* FUN_005de5cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de5cf);
    /* 005de5cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de5d0: mov ebp, esp */ r_ebp = r_esp;
    /* 005de5d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de5d3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de5d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de5d9: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de5dd: je 0x5de5f8 */ if (fZ) goto L_005de5f8;
L_005de5df:; BB(0x005de5df);
    /* 005de5df: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005de5e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de5e3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005de5e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de5e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de5ea: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005de5ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de5f0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005de5f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de5f5: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5de5f8u); call_ind(t); }
L_005de5f8:; BB(0x005de5f8);
    /* 005de5f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005de5fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de5fb: ret 8 */ FN_RET(0x005de5cf); r_esp += 12; return;
}

void f_005de5fe(void) /* FUN_005de5fe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de5fe);
    /* 005de5fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de5ff: mov ebp, esp */ r_ebp = r_esp;
    /* 005de601: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de602: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de605: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de608: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de60c: je 0x5de632 */ if (fZ) goto L_005de632;
L_005de60e:; BB(0x005de60e);
    /* 005de60e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de611: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de612: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de615: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005de618: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005de61b: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5de620u); f_005d98c3();
    /* 005de620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de621: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de624: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005de627: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de62a: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005de62d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de62f: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5de632u); call_ind(t); }
L_005de632:; BB(0x005de632);
    /* 005de632: mov esp, ebp */ r_esp = r_ebp;
    /* 005de634: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de635: ret 4 */ FN_RET(0x005de5fe); r_esp += 8; return;
}

void f_005de638(void) /* FUN_005de638 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de638);
    /* 005de638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de639: mov ebp, esp */ r_ebp = r_esp;
    /* 005de63b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de63e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005de641: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de644: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de647: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 005de64a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de651: jmp 0x5de65c */ goto L_005de65c;
L_005de653:; BB(0x005de653);
    /* 005de653: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de656: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005de659: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005de65c:; BB(0x005de65c);
    /* 005de65c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de65f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de662: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de667u); f_005dd4d2();
    /* 005de667: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de66a: jge 0x5de68f */ if ((fS==fO)) goto L_005de68f;
L_005de66c:; BB(0x005de66c);
    /* 005de66c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de66f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de670: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de673: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005de676: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de67bu); f_005dd560();
    /* 005de67b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005de67e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de681: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005de684: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de685: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de688: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5de68du); f_005e8740();
    /* 005de68d: jmp 0x5de653 */ goto L_005de653;
L_005de68f:; BB(0x005de68f);
    /* 005de68f: mov esp, ebp */ r_esp = r_ebp;
    /* 005de691: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de692: ret 4 */ FN_RET(0x005de638); r_esp += 8; return;
}

void f_005de695(void) /* FUN_005de695 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de695);
    /* 005de695: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de696: mov ebp, esp */ r_ebp = r_esp;
    /* 005de698: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de69b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005de69e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de6a1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de6a4: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 005de6a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de6ae: jmp 0x5de6b9 */ goto L_005de6b9;
L_005de6b0:; BB(0x005de6b0);
    /* 005de6b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de6b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005de6b6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005de6b9:; BB(0x005de6b9);
    /* 005de6b9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de6bc: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de6bf: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de6c4u); f_005dd4d2();
    /* 005de6c4: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de6c7: jge 0x5de6ee */ if ((fS==fO)) goto L_005de6ee;
L_005de6c9:; BB(0x005de6c9);
    /* 005de6c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de6cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de6cd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de6d0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005de6d3: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de6d8u); f_005dd560();
    /* 005de6d8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005de6db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de6dd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de6e0: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005de6e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de6e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de6e7: call 0x5e8eba */ r_esp -= 4; W32(r_esp, 0x5de6ecu); f_005e8eba();
    /* 005de6ec: jmp 0x5de6b0 */ goto L_005de6b0;
L_005de6ee:; BB(0x005de6ee);
    /* 005de6ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005de6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de6f1: ret 4 */ FN_RET(0x005de695); r_esp += 8; return;
}

void f_005de6f4(void) /* FUN_005de6f4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de6f4);
    /* 005de6f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de6f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005de6f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de6f8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de6fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de6fe: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 005de701: mov esp, ebp */ r_esp = r_ebp;
    /* 005de703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de704: ret  */ FN_RET(0x005de6f4); r_esp += 4; return;
}

void f_005de705(void) /* FUN_005de705 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de705);
    /* 005de705: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de706: mov ebp, esp */ r_ebp = r_esp;
    /* 005de708: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de70b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005de70e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de715: jmp 0x5de720 */ goto L_005de720;
L_005de717:; BB(0x005de717);
    /* 005de717: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de71a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de71d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005de720:; BB(0x005de720);
    /* 005de720: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de723: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005de726: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de72bu); f_005dd4d2();
    /* 005de72b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de72e: jge 0x5de77b */ if ((fS==fO)) goto L_005de77b;
L_005de730:; BB(0x005de730);
    /* 005de730: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de733: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de734: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de737: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de73a: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de73fu); f_005dd560();
    /* 005de73f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005de742: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de745: call 0x5dda32 */ r_esp -= 4; W32(r_esp, 0x5de74au); f_005dda32();
    /* 005de74a: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de74d: jne 0x5de765 */ if (!fZ) goto L_005de765;
L_005de74f:; BB(0x005de74f);
    /* 005de74f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de752: call 0x5dda05 */ r_esp -= 4; W32(r_esp, 0x5de757u); f_005dda05();
    /* 005de757: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de759: jne 0x5de763 */ if (!fZ) goto L_005de763;
L_005de75b:; BB(0x005de75b);
    /* 005de75b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de75e: call 0x5dd987 */ r_esp -= 4; W32(r_esp, 0x5de763u); f_005dd987();
L_005de763:; BB(0x005de763);
    /* 005de763: jmp 0x5de779 */ goto L_005de779;
L_005de765:; BB(0x005de765);
    /* 005de765: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de768: call 0x5dda05 */ r_esp -= 4; W32(r_esp, 0x5de76du); f_005dda05();
    /* 005de76d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de76f: je 0x5de779 */ if (fZ) goto L_005de779;
L_005de771:; BB(0x005de771);
    /* 005de771: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de774: call 0x5dd9cd */ r_esp -= 4; W32(r_esp, 0x5de779u); f_005dd9cd();
L_005de779:; BB(0x005de779);
    /* 005de779: jmp 0x5de717 */ goto L_005de717;
L_005de77b:; BB(0x005de77b);
    /* 005de77b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de77e: call 0x5dea3c */ r_esp -= 4; W32(r_esp, 0x5de783u); f_005dea3c();
    /* 005de783: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de785: jne 0x5de7b9 */ if (!fZ) goto L_005de7b9;
L_005de787:; BB(0x005de787);
    /* 005de787: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de78a: call 0x5df237 */ r_esp -= 4; W32(r_esp, 0x5de78fu); f_005df237();
    /* 005de78f: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de792: jle 0x5de7a2 */ if ((fZ||fS!=fO)) goto L_005de7a2;
L_005de794:; BB(0x005de794);
    /* 005de794: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de797: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de798: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de79b: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5de7a0u); f_005de13d();
    /* 005de7a0: jmp 0x5de7b9 */ goto L_005de7b9;
L_005de7a2:; BB(0x005de7a2);
    /* 005de7a2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de7a5: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005de7a8: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005de7ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de7ae: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005de7b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de7b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de7b4: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5de7b9u); f_005de13d();
L_005de7b9:; BB(0x005de7b9);
    /* 005de7b9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005de7bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de7bd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de7c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de7c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de7c5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5de7c8u); call_ind(t); }
    /* 005de7c8: mov eax, 1 */ r_eax = 0x1u;
    /* 005de7cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005de7cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de7d0: ret 4 */ FN_RET(0x005de705); r_esp += 8; return;
}

void f_005de7d3(void) /* FUN_005de7d3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de7d3);
    /* 005de7d3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de7d4: mov ebp, esp */ r_ebp = r_esp;
    /* 005de7d6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de7d9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005de7dc: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 005de7e3: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005de7ea: jmp 0x5de7f5 */ goto L_005de7f5;
L_005de7ec:; BB(0x005de7ec);
    /* 005de7ec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de7ef: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de7f2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005de7f5:; BB(0x005de7f5);
    /* 005de7f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de7f8: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005de7fb: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de800u); f_005dd4d2();
    /* 005de800: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de803: jge 0x5de899 */ if ((fS==fO)) goto L_005de899;
L_005de809:; BB(0x005de809);
    /* 005de809: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de80c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de80d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005de810: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de813: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de818u); f_005dd560();
    /* 005de818: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005de81b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de81f: je 0x5de83e */ if (fZ) goto L_005de83e;
L_005de821:; BB(0x005de821);
    /* 005de821: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de824: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de825: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de828: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005de82a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de82d: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5de830u); call_ind(t); }
    /* 005de830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de831: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x5de836u); f_006325b0();
    /* 005de836: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de839: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005de83c: jmp 0x5de859 */ goto L_005de859;
L_005de83e:; BB(0x005de83e);
    /* 005de83e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de841: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de842: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de845: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005de847: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de84a: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5de84du); call_ind(t); }
    /* 005de84d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de84e: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5de853u); f_006240c0();
    /* 005de853: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de856: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005de859:; BB(0x005de859);
    /* 005de859: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de85d: jne 0x5de880 */ if (!fZ) goto L_005de880;
L_005de85f:; BB(0x005de85f);
    /* 005de85f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de862: call 0x5dda32 */ r_esp -= 4; W32(r_esp, 0x5de867u); f_005dda32();
    /* 005de867: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005de86a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de86d: call 0x5dda05 */ r_esp -= 4; W32(r_esp, 0x5de872u); f_005dda05();
    /* 005de872: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de874: jne 0x5de87e */ if (!fZ) goto L_005de87e;
L_005de876:; BB(0x005de876);
    /* 005de876: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de879: call 0x5dd987 */ r_esp -= 4; W32(r_esp, 0x5de87eu); f_005dd987();
L_005de87e:; BB(0x005de87e);
    /* 005de87e: jmp 0x5de894 */ goto L_005de894;
L_005de880:; BB(0x005de880);
    /* 005de880: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de883: call 0x5dda05 */ r_esp -= 4; W32(r_esp, 0x5de888u); f_005dda05();
    /* 005de888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de88a: je 0x5de894 */ if (fZ) goto L_005de894;
L_005de88c:; BB(0x005de88c);
    /* 005de88c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de88f: call 0x5dd9cd */ r_esp -= 4; W32(r_esp, 0x5de894u); f_005dd9cd();
L_005de894:; BB(0x005de894);
    /* 005de894: jmp 0x5de7ec */ goto L_005de7ec;
L_005de899:; BB(0x005de899);
    /* 005de899: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de89d: jne 0x5de8bc */ if (!fZ) goto L_005de8bc;
L_005de89f:; BB(0x005de89f);
    /* 005de89f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005de8a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de8a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de8aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de8ad: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005de8b0: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de8b5u); f_005dd560();
    /* 005de8b5: mov ecx, eax */ r_ecx = r_eax;
    /* 005de8b7: call 0x5dd987 */ r_esp -= 4; W32(r_esp, 0x5de8bcu); f_005dd987();
L_005de8bc:; BB(0x005de8bc);
    /* 005de8bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de8bf: call 0x5dea3c */ r_esp -= 4; W32(r_esp, 0x5de8c4u); f_005dea3c();
    /* 005de8c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de8c6: jne 0x5de8fa */ if (!fZ) goto L_005de8fa;
L_005de8c8:; BB(0x005de8c8);
    /* 005de8c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de8cb: call 0x5df237 */ r_esp -= 4; W32(r_esp, 0x5de8d0u); f_005df237();
    /* 005de8d0: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de8d3: jle 0x5de8e3 */ if ((fZ||fS!=fO)) goto L_005de8e3;
L_005de8d5:; BB(0x005de8d5);
    /* 005de8d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de8d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de8d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de8dc: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5de8e1u); f_005de13d();
    /* 005de8e1: jmp 0x5de8fa */ goto L_005de8fa;
L_005de8e3:; BB(0x005de8e3);
    /* 005de8e3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de8e6: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005de8e9: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005de8ec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de8ef: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005de8f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de8f2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de8f5: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5de8fau); f_005de13d();
L_005de8fa:; BB(0x005de8fa);
    /* 005de8fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de8fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de8fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de901: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005de903: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de906: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5de909u); call_ind(t); }
    /* 005de909: mov eax, 1 */ r_eax = 0x1u;
    /* 005de90e: mov esp, ebp */ r_esp = r_ebp;
    /* 005de910: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de911: ret 8 */ FN_RET(0x005de7d3); r_esp += 12; return;
}

void f_005de914(void) /* FUN_005de914 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de914);
    /* 005de914: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de915: mov ebp, esp */ r_ebp = r_esp;
    /* 005de917: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de91a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005de91d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de924: jmp 0x5de92f */ goto L_005de92f;
L_005de926:; BB(0x005de926);
    /* 005de926: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de929: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de92c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005de92f:; BB(0x005de92f);
    /* 005de92f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de932: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005de935: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de93au); f_005dd4d2();
    /* 005de93a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de93d: jge 0x5de967 */ if ((fS==fO)) goto L_005de967;
L_005de93f:; BB(0x005de93f);
    /* 005de93f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de942: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de943: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de946: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de949: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de94eu); f_005dd560();
    /* 005de94e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005de951: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de954: call 0x5dda05 */ r_esp -= 4; W32(r_esp, 0x5de959u); f_005dda05();
    /* 005de959: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de95b: je 0x5de965 */ if (fZ) goto L_005de965;
L_005de95d:; BB(0x005de95d);
    /* 005de95d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de960: call 0x5dd9cd */ r_esp -= 4; W32(r_esp, 0x5de965u); f_005dd9cd();
L_005de965:; BB(0x005de965);
    /* 005de965: jmp 0x5de926 */ goto L_005de926;
L_005de967:; BB(0x005de967);
    /* 005de967: mov esp, ebp */ r_esp = r_ebp;
    /* 005de969: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de96a: ret  */ FN_RET(0x005de914); r_esp += 4; return;
}

void f_005de96b(void) /* FUN_005de96b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de96b);
    /* 005de96b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de96c: mov ebp, esp */ r_ebp = r_esp;
    /* 005de96e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de971: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005de974: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de97b: jmp 0x5de986 */ goto L_005de986;
L_005de97d:; BB(0x005de97d);
    /* 005de97d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de980: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de983: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005de986:; BB(0x005de986);
    /* 005de986: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de989: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005de98c: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de991u); f_005dd4d2();
    /* 005de991: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de994: jge 0x5de9ca */ if ((fS==fO)) goto L_005de9ca;
L_005de996:; BB(0x005de996);
    /* 005de996: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de999: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de99a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de99d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005de9a0: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de9a5u); f_005dd560();
    /* 005de9a5: mov ecx, eax */ r_ecx = r_eax;
    /* 005de9a7: call 0x5dda05 */ r_esp -= 4; W32(r_esp, 0x5de9acu); f_005dda05();
    /* 005de9ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de9ae: je 0x5de9c8 */ if (fZ) goto L_005de9c8;
L_005de9b0:; BB(0x005de9b0);
    /* 005de9b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de9b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de9b4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de9b7: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005de9ba: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5de9bfu); f_005dd560();
    /* 005de9bf: mov ecx, eax */ r_ecx = r_eax;
    /* 005de9c1: call 0x5dda32 */ r_esp -= 4; W32(r_esp, 0x5de9c6u); f_005dda32();
    /* 005de9c6: jmp 0x5de9cd */ goto L_005de9cd;
L_005de9c8:; BB(0x005de9c8);
    /* 005de9c8: jmp 0x5de97d */ goto L_005de97d;
L_005de9ca:; BB(0x005de9ca);
    /* 005de9ca: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005de9cd:; BB(0x005de9cd);
    /* 005de9cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005de9cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de9d0: ret  */ FN_RET(0x005de96b); r_esp += 4; return;
}

void f_005de9d1(void) /* FUN_005de9d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de9d1);
    /* 005de9d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de9d2: mov ebp, esp */ r_ebp = r_esp;
    /* 005de9d4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de9d7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005de9da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de9e1: jmp 0x5de9ec */ goto L_005de9ec;
L_005de9e3:; BB(0x005de9e3);
    /* 005de9e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de9e6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de9e9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005de9ec:; BB(0x005de9ec);
    /* 005de9ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de9ef: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005de9f2: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5de9f7u); f_005dd4d2();
    /* 005de9f7: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de9fa: jge 0x5dea29 */ if ((fS==fO)) goto L_005dea29;
L_005de9fc:; BB(0x005de9fc);
    /* 005de9fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de9ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dea00: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dea03: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005dea06: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dea0bu); f_005dd560();
    /* 005dea0b: mov ecx, eax */ r_ecx = r_eax;
    /* 005dea0d: call 0x5dda05 */ r_esp -= 4; W32(r_esp, 0x5dea12u); f_005dda05();
    /* 005dea12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dea14: je 0x5dea27 */ if (fZ) goto L_005dea27;
L_005dea16:; BB(0x005dea16);
    /* 005dea16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dea19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dea1a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dea1d: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005dea20: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dea25u); f_005dd560();
    /* 005dea25: jmp 0x5dea2b */ goto L_005dea2b;
L_005dea27:; BB(0x005dea27);
    /* 005dea27: jmp 0x5de9e3 */ goto L_005de9e3;
L_005dea29:; BB(0x005dea29);
    /* 005dea29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005dea2b:; BB(0x005dea2b);
    /* 005dea2b: mov esp, ebp */ r_esp = r_ebp;
    /* 005dea2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dea2e: ret  */ FN_RET(0x005de9d1); r_esp += 4; return;
}

void f_005dea2f(void) /* FUN_005dea2f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dea2f);
    /* 005dea2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dea30: mov ebp, esp */ r_ebp = r_esp;
    /* 005dea32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dea33: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dea36: mov esp, ebp */ r_esp = r_ebp;
    /* 005dea38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dea39: ret 4 */ FN_RET(0x005dea2f); r_esp += 8; return;
}

void f_005dea3c(void) /* FUN_005dea3c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dea3c);
    /* 005dea3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dea3d: mov ebp, esp */ r_ebp = r_esp;
    /* 005dea3f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dea42: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dea45: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dea4c: jmp 0x5dea57 */ goto L_005dea57;
L_005dea4e:; BB(0x005dea4e);
    /* 005dea4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dea51: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dea54: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dea57:; BB(0x005dea57);
    /* 005dea57: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dea5a: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005dea5d: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dea62u); f_005dd4d2();
    /* 005dea62: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dea65: jge 0x5deab4 */ if ((fS==fO)) goto L_005deab4;
L_005dea67:; BB(0x005dea67);
    /* 005dea67: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dea6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dea6b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dea6e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005dea71: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dea76u); f_005dd560();
    /* 005dea76: mov ecx, eax */ r_ecx = r_eax;
    /* 005dea78: call 0x5dda05 */ r_esp -= 4; W32(r_esp, 0x5dea7du); f_005dda05();
    /* 005dea7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dea7f: je 0x5deab2 */ if (fZ) goto L_005deab2;
L_005dea81:; BB(0x005dea81);
    /* 005dea81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dea84: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dea87: cmp edx, dword ptr [ecx + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x38u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dea8a: jl 0x5deaa6 */ if ((fS!=fO)) goto L_005deaa6;
L_005dea8c:; BB(0x005dea8c);
    /* 005dea8c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dea8f: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005dea92: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dea95: add ecx, dword ptr [edx + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dea98: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dea9b: jge 0x5deaa6 */ if ((fS==fO)) goto L_005deaa6;
L_005dea9d:; BB(0x005dea9d);
    /* 005dea9d: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005deaa4: jmp 0x5deaad */ goto L_005deaad;
L_005deaa6:; BB(0x005deaa6);
    /* 005deaa6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005deaad:; BB(0x005deaad);
    /* 005deaad: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005deab0: jmp 0x5deab6 */ goto L_005deab6;
L_005deab2:; BB(0x005deab2);
    /* 005deab2: jmp 0x5dea4e */ goto L_005dea4e;
L_005deab4:; BB(0x005deab4);
    /* 005deab4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005deab6:; BB(0x005deab6);
    /* 005deab6: mov esp, ebp */ r_esp = r_ebp;
    /* 005deab8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005deab9: ret  */ FN_RET(0x005dea3c); r_esp += 4; return;
}

void f_005deaba(void) /* FUN_005deaba */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005deaba);
    /* 005deaba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deabb: mov ebp, esp */ r_ebp = r_esp;
    /* 005deabd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005deac0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005deac3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deac6: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005deac9: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5deaceu); f_005dd4d2();
    /* 005deace: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dead1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dead4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dead5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dead8: call 0x5dda19 */ r_esp -= 4; W32(r_esp, 0x5deaddu); f_005dda19();
    /* 005deadd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005deae0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005deae1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deae4: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005deae7: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x5deaecu); f_005dd425();
    /* 005deaec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deaef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005deaf0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005deaf3: call 0x5dda46 */ r_esp -= 4; W32(r_esp, 0x5deaf8u); f_005dda46();
    /* 005deaf8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005deafb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deafe: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005deb01: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005deb04: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deb07: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005deb0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005deb0b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deb0e: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005deb11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005deb12: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005deb15: call 0x5dda5f */ r_esp -= 4; W32(r_esp, 0x5deb1au); f_005dda5f();
    /* 005deb1a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deb1d: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005deb20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005deb21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005deb24: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5deb29u); f_005e8740();
    /* 005deb29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005deb2b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deb2e: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005deb31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005deb32: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005deb35: call 0x5e8eba */ r_esp -= 4; W32(r_esp, 0x5deb3au); f_005e8eba();
    /* 005deb3a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deb3d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005deb40: cmp edx, dword ptr [ecx + 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x3cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005deb43: jl 0x5deb68 */ if ((fS!=fO)) goto L_005deb68;
L_005deb45:; BB(0x005deb45);
    /* 005deb45: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deb48: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005deb4b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005deb4e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deb51: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 005deb54: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deb57: cmp dword ptr [eax + 0x40], 1 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005deb5b: jne 0x5deb68 */ if (!fZ) goto L_005deb68;
L_005deb5d:; BB(0x005deb5d);
    /* 005deb5d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deb60: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005deb63: call 0x5e71b8 */ r_esp -= 4; W32(r_esp, 0x5deb68u); f_005e71b8();
L_005deb68:; BB(0x005deb68);
    /* 005deb68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005deb6b: mov esp, ebp */ r_esp = r_ebp;
    /* 005deb6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005deb6e: ret 4 */ FN_RET(0x005deaba); r_esp += 8; return;
}

void f_005deb71(void) /* FUN_005deb71 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005deb71);
    /* 005deb71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deb72: mov ebp, esp */ r_ebp = r_esp;
    /* 005deb74: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005deb77: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005deb7a: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 005deb81: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005deb84: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005deb88: je 0x5ded25 */ if (fZ) goto L_005ded25;
L_005deb8e:; BB(0x005deb8e);
    /* 005deb8e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005deb95: jmp 0x5deba0 */ goto L_005deba0;
L_005deb97:; BB(0x005deb97);
    /* 005deb97: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005deb9a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005deb9d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005deba0:; BB(0x005deba0);
    /* 005deba0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005deba3: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005deba6: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5debabu); f_005dd4d2();
    /* 005debab: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005debae: jge 0x5dec60 */ if ((fS==fO)) goto L_005dec60;
L_005debb4:; BB(0x005debb4);
    /* 005debb4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005debb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005debb8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005debbb: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005debbe: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5debc3u); f_005dd560();
    /* 005debc3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005debc6: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005debca: je 0x5debe9 */ if (fZ) goto L_005debe9;
L_005debcc:; BB(0x005debcc);
    /* 005debcc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005debcf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005debd1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005debd4: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5debd7u); call_ind(t); }
    /* 005debd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005debd8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005debdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005debdc: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x5debe1u); f_006325b0();
    /* 005debe1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005debe4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005debe7: jmp 0x5dec04 */ goto L_005dec04;
L_005debe9:; BB(0x005debe9);
    /* 005debe9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005debec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005debee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005debf1: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5debf4u); call_ind(t); }
    /* 005debf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005debf5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005debf8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005debf9: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5debfeu); f_006240c0();
    /* 005debfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dec01: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dec04:; BB(0x005dec04);
    /* 005dec04: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dec08: jne 0x5dec5b */ if (!fZ) goto L_005dec5b;
L_005dec0a:; BB(0x005dec0a);
    /* 005dec0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dec0d: call 0x5dda32 */ r_esp -= 4; W32(r_esp, 0x5dec12u); f_005dda32();
    /* 005dec12: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dec15: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dec18: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dec1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dec1d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5dec20u); call_ind(t); }
    /* 005dec20: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dec23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dec24: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dec27: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005dec2a: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5dec2fu); f_005dd469();
    /* 005dec2f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dec32: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005dec35: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dec38: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dec3b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dec3f: je 0x5dec52 */ if (fZ) goto L_005dec52;
L_005dec41:; BB(0x005dec41);
    /* 005dec41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dec43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dec46: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dec48: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dec4b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5dec4du); call_ind(t); }
    /* 005dec4d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dec50: jmp 0x5dec59 */ goto L_005dec59;
L_005dec52:; BB(0x005dec52);
    /* 005dec52: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005dec59:; BB(0x005dec59);
    /* 005dec59: jmp 0x5dec60 */ goto L_005dec60;
L_005dec5b:; BB(0x005dec5b);
    /* 005dec5b: jmp 0x5deb97 */ goto L_005deb97;
L_005dec60:; BB(0x005dec60);
    /* 005dec60: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dec67: jmp 0x5dec72 */ goto L_005dec72;
L_005dec69:; BB(0x005dec69);
    /* 005dec69: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dec6c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dec6f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005dec72:; BB(0x005dec72);
    /* 005dec72: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dec75: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005dec78: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dec7du); f_005dd4d2();
    /* 005dec7d: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dec80: jge 0x5dec9e */ if ((fS==fO)) goto L_005dec9e;
L_005dec82:; BB(0x005dec82);
    /* 005dec82: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dec85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dec86: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dec89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dec8a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dec8d: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005dec90: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dec95u); f_005dd560();
    /* 005dec95: mov ecx, eax */ r_ecx = r_eax;
    /* 005dec97: call 0x5dda19 */ r_esp -= 4; W32(r_esp, 0x5dec9cu); f_005dda19();
    /* 005dec9c: jmp 0x5dec69 */ goto L_005dec69;
L_005dec9e:; BB(0x005dec9e);
    /* 005dec9e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005deca1: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005deca4: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5deca9u); f_005dd4d2();
    /* 005deca9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005decac: cmp eax, dword ptr [ecx + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x3cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005decaf: jl 0x5decd4 */ if ((fS!=fO)) goto L_005decd4;
L_005decb1:; BB(0x005decb1);
    /* 005decb1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005decb4: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005decb7: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005decba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005decbd: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 005decc0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005decc3: cmp dword ptr [edx + 0x40], 0 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005decc7: jne 0x5decd4 */ if (!fZ) goto L_005decd4;
L_005decc9:; BB(0x005decc9);
    /* 005decc9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005deccc: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005deccf: call 0x5e7208 */ r_esp -= 4; W32(r_esp, 0x5decd4u); f_005e7208();
L_005decd4:; BB(0x005decd4);
    /* 005decd4: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005decd8: je 0x5ded16 */ if (fZ) goto L_005ded16;
L_005decda:; BB(0x005decda);
    /* 005decda: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005decdd: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005dece0: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dece5u); f_005dd4d2();
    /* 005dece5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dece7: je 0x5ded16 */ if (fZ) goto L_005ded16;
L_005dece9:; BB(0x005dece9);
    /* 005dece9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005decec: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005decef: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5decf4u); f_005dd4d2();
    /* 005decf4: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005decf7: jne 0x5ded0a */ if (!fZ) goto L_005ded0a;
L_005decf9:; BB(0x005decf9);
    /* 005decf9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005decfc: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005decff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ded00: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ded03: call 0x5de705 */ r_esp -= 4; W32(r_esp, 0x5ded08u); f_005de705();
    /* 005ded08: jmp 0x5ded16 */ goto L_005ded16;
L_005ded0a:; BB(0x005ded0a);
    /* 005ded0a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ded0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ded0e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ded11: call 0x5de705 */ r_esp -= 4; W32(r_esp, 0x5ded16u); f_005de705();
L_005ded16:; BB(0x005ded16);
    /* 005ded16: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ded19: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005ded1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ded1d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ded20: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5ded25u); f_005de13d();
L_005ded25:; BB(0x005ded25);
    /* 005ded25: mov esp, ebp */ r_esp = r_ebp;
    /* 005ded27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ded28: ret 8 */ FN_RET(0x005deb71); r_esp += 12; return;
}

void f_005ded2b(void) /* FUN_005ded2b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ded2b);
    /* 005ded2b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ded2c: mov ebp, esp */ r_ebp = r_esp;
    /* 005ded2e: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ded31: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ded34: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 005ded3b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ded3e: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ded42: je 0x5dee9f */ if (fZ) goto L_005dee9f;
L_005ded48:; BB(0x005ded48);
    /* 005ded48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ded4f: jmp 0x5ded5a */ goto L_005ded5a;
L_005ded51:; BB(0x005ded51);
    /* 005ded51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ded54: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ded57: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ded5a:; BB(0x005ded5a);
    /* 005ded5a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ded5d: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005ded60: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5ded65u); f_005dd4d2();
    /* 005ded65: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ded68: jge 0x5dedda */ if ((fS==fO)) goto L_005dedda;
L_005ded6a:; BB(0x005ded6a);
    /* 005ded6a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ded6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ded6e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ded71: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005ded74: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5ded79u); f_005dd560();
    /* 005ded79: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ded7c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ded7f: call 0x5dda32 */ r_esp -= 4; W32(r_esp, 0x5ded84u); f_005dda32();
    /* 005ded84: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ded87: jne 0x5dedd5 */ if (!fZ) goto L_005dedd5;
L_005ded89:; BB(0x005ded89);
    /* 005ded89: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ded8c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005ded8f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ded92: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ded94: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ded97: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5ded9au); call_ind(t); }
    /* 005ded9a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ded9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ded9e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005deda1: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005deda4: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5deda9u); f_005dd469();
    /* 005deda9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dedac: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005dedaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dedb2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dedb5: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dedb9: je 0x5dedcc */ if (fZ) goto L_005dedcc;
L_005dedbb:; BB(0x005dedbb);
    /* 005dedbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dedbd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dedc0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dedc2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dedc5: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5dedc7u); call_ind(t); }
    /* 005dedc7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dedca: jmp 0x5dedd3 */ goto L_005dedd3;
L_005dedcc:; BB(0x005dedcc);
    /* 005dedcc: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dedd3:; BB(0x005dedd3);
    /* 005dedd3: jmp 0x5dedda */ goto L_005dedda;
L_005dedd5:; BB(0x005dedd5);
    /* 005dedd5: jmp 0x5ded51 */ goto L_005ded51;
L_005dedda:; BB(0x005dedda);
    /* 005dedda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dede1: jmp 0x5dedec */ goto L_005dedec;
L_005dede3:; BB(0x005dede3);
    /* 005dede3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dede6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dede9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dedec:; BB(0x005dedec);
    /* 005dedec: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dedef: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005dedf2: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dedf7u); f_005dd4d2();
    /* 005dedf7: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dedfa: jge 0x5dee18 */ if ((fS==fO)) goto L_005dee18;
L_005dedfc:; BB(0x005dedfc);
    /* 005dedfc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dedff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dee00: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dee03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dee04: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee07: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005dee0a: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dee0fu); f_005dd560();
    /* 005dee0f: mov ecx, eax */ r_ecx = r_eax;
    /* 005dee11: call 0x5dda19 */ r_esp -= 4; W32(r_esp, 0x5dee16u); f_005dda19();
    /* 005dee16: jmp 0x5dede3 */ goto L_005dede3;
L_005dee18:; BB(0x005dee18);
    /* 005dee18: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee1b: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005dee1e: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dee23u); f_005dd4d2();
    /* 005dee23: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee26: cmp eax, dword ptr [ecx + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x3cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dee29: jl 0x5dee4e */ if ((fS!=fO)) goto L_005dee4e;
L_005dee2b:; BB(0x005dee2b);
    /* 005dee2b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee2e: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005dee31: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dee34: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee37: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 005dee3a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee3d: cmp dword ptr [edx + 0x40], 0 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dee41: jne 0x5dee4e */ if (!fZ) goto L_005dee4e;
L_005dee43:; BB(0x005dee43);
    /* 005dee43: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee46: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005dee49: call 0x5e7208 */ r_esp -= 4; W32(r_esp, 0x5dee4eu); f_005e7208();
L_005dee4e:; BB(0x005dee4e);
    /* 005dee4e: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dee52: je 0x5dee90 */ if (fZ) goto L_005dee90;
L_005dee54:; BB(0x005dee54);
    /* 005dee54: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee57: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005dee5a: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dee5fu); f_005dd4d2();
    /* 005dee5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dee61: je 0x5dee90 */ if (fZ) goto L_005dee90;
L_005dee63:; BB(0x005dee63);
    /* 005dee63: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee66: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005dee69: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dee6eu); f_005dd4d2();
    /* 005dee6e: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dee71: jne 0x5dee84 */ if (!fZ) goto L_005dee84;
L_005dee73:; BB(0x005dee73);
    /* 005dee73: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dee76: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dee79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dee7a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee7d: call 0x5de705 */ r_esp -= 4; W32(r_esp, 0x5dee82u); f_005de705();
    /* 005dee82: jmp 0x5dee90 */ goto L_005dee90;
L_005dee84:; BB(0x005dee84);
    /* 005dee84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dee87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dee88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee8b: call 0x5de705 */ r_esp -= 4; W32(r_esp, 0x5dee90u); f_005de705();
L_005dee90:; BB(0x005dee90);
    /* 005dee90: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005dee96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dee97: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dee9a: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5dee9fu); f_005de13d();
L_005dee9f:; BB(0x005dee9f);
    /* 005dee9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005deea1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005deea2: ret 4 */ FN_RET(0x005ded2b); r_esp += 8; return;
}

void f_005deea5(void) /* FUN_005deea5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005deea5);
    /* 005deea5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deea6: mov ebp, esp */ r_ebp = r_esp;
    /* 005deea8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005deeab: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005deeae: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005deeb1: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005deeb5: jne 0x5deebc */ if (!fZ) goto L_005deebc;
L_005deeb7:; BB(0x005deeb7);
    /* 005deeb7: jmp 0x5def44 */ goto L_005def44;
L_005deebc:; BB(0x005deebc);
    /* 005deebc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005deebf: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005deec2: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5deec7u); f_005dd4d2();
    /* 005deec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005deec9: je 0x5def21 */ if (fZ) goto L_005def21;
L_005deecb:; BB(0x005deecb);
    /* 005deecb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005deecd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005deed0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005deed3: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5deed8u); f_005dd560();
    /* 005deed8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005deedb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005deede: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005deee0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005deee3: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5deee6u); call_ind(t); }
    /* 005deee6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005deee9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005deeea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005deeed: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005deef0: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5deef5u); f_005dd469();
    /* 005deef5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005deef8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005deefb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005deefe: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005def01: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005def05: je 0x5def18 */ if (fZ) goto L_005def18;
L_005def07:; BB(0x005def07);
    /* 005def07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005def09: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005def0c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005def0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005def11: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5def13u); call_ind(t); }
    /* 005def13: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005def16: jmp 0x5def1f */ goto L_005def1f;
L_005def18:; BB(0x005def18);
    /* 005def18: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005def1f:; BB(0x005def1f);
    /* 005def1f: jmp 0x5deebc */ goto L_005deebc;
L_005def21:; BB(0x005def21);
    /* 005def21: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005def24: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 005def2b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005def2e: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 005def35: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005def38: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005def3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005def3c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005def3f: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5def44u); f_005de13d();
L_005def44:; BB(0x005def44);
    /* 005def44: mov esp, ebp */ r_esp = r_ebp;
    /* 005def46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005def47: ret  */ FN_RET(0x005deea5); r_esp += 4; return;
}

void f_005def48(void) /* FUN_005def48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005def48);
    /* 005def48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005def49: mov ebp, esp */ r_ebp = r_esp;
    /* 005def4b: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005def4e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005def51: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005def54: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005def58: je 0x5deff4 */ if (fZ) goto L_005deff4;
L_005def5e:; BB(0x005def5e);
    /* 005def5e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005def65: jmp 0x5def70 */ goto L_005def70;
L_005def67:; BB(0x005def67);
    /* 005def67: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005def6a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005def6d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005def70:; BB(0x005def70);
    /* 005def70: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005def73: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005def76: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5def7bu); f_005dd4d2();
    /* 005def7b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005def7e: jge 0x5deff4 */ if ((fS==fO)) goto L_005deff4;
L_005def80:; BB(0x005def80);
    /* 005def80: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005def84: je 0x5defb5 */ if (fZ) goto L_005defb5;
L_005def86:; BB(0x005def86);
    /* 005def86: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005def89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005def8a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005def8d: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005def90: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5def95u); f_005dd560();
    /* 005def95: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005def98: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005def9b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005def9d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005defa0: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5defa3u); call_ind(t); }
    /* 005defa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005defa4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005defa7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005defa8: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x5defadu); f_006325b0();
    /* 005defad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005defb0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005defb3: jmp 0x5defe2 */ goto L_005defe2;
L_005defb5:; BB(0x005defb5);
    /* 005defb5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005defb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005defb9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005defbc: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005defbf: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5defc4u); f_005dd560();
    /* 005defc4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005defc7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005defca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005defcc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005defcf: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5defd2u); call_ind(t); }
    /* 005defd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005defd3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005defd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005defd7: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5defdcu); f_006240c0();
    /* 005defdc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005defdf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005defe2:; BB(0x005defe2);
    /* 005defe2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005defe6: jne 0x5defef */ if (!fZ) goto L_005defef;
L_005defe8:; BB(0x005defe8);
    /* 005defe8: mov eax, 1 */ r_eax = 0x1u;
    /* 005defed: jmp 0x5deff6 */ goto L_005deff6;
L_005defef:; BB(0x005defef);
    /* 005defef: jmp 0x5def67 */ goto L_005def67;
L_005deff4:; BB(0x005deff4);
    /* 005deff4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005deff6:; BB(0x005deff6);
    /* 005deff6: mov esp, ebp */ r_esp = r_ebp;
    /* 005deff8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005deff9: ret 8 */ FN_RET(0x005def48); r_esp += 12; return;
}

void f_005deffc(void) /* FUN_005deffc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005deffc);
    /* 005deffc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deffd: mov ebp, esp */ r_ebp = r_esp;
    /* 005defff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df000: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df003: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df006: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x5df00bu); f_005de96b();
    /* 005df00b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df00e: jne 0x5df017 */ if (!fZ) goto L_005df017;
L_005df010:; BB(0x005df010);
    /* 005df010: mov eax, 0x6fc3f0 */ r_eax = 0x6fc3f0u;
    /* 005df015: jmp 0x5df028 */ goto L_005df028;
L_005df017:; BB(0x005df017);
    /* 005df017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df01a: call 0x5de96b */ r_esp -= 4; W32(r_esp, 0x5df01fu); f_005de96b();
    /* 005df01f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df020: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df023: call 0x5df02c */ r_esp -= 4; W32(r_esp, 0x5df028u); f_005df02c();
L_005df028:; BB(0x005df028);
    /* 005df028: mov esp, ebp */ r_esp = r_ebp;
    /* 005df02a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df02b: ret  */ FN_RET(0x005deffc); r_esp += 4; return;
}

void f_005df02c(void) /* FUN_005df02c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df02c);
    /* 005df02c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df02d: mov ebp, esp */ r_ebp = r_esp;
    /* 005df02f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df032: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005df035: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df038: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df03c: je 0x5df08e */ if (fZ) goto L_005df08e;
L_005df03e:; BB(0x005df03e);
    /* 005df03e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005df045: jmp 0x5df050 */ goto L_005df050;
L_005df047:; BB(0x005df047);
    /* 005df047: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df04a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005df04d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005df050:; BB(0x005df050);
    /* 005df050: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df053: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005df056: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5df05bu); f_005dd4d2();
    /* 005df05b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df05e: jge 0x5df08e */ if ((fS==fO)) goto L_005df08e;
L_005df060:; BB(0x005df060);
    /* 005df060: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df064: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df067: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005df06a: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5df06fu); f_005dd560();
    /* 005df06f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005df072: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df075: call 0x5dda32 */ r_esp -= 4; W32(r_esp, 0x5df07au); f_005dda32();
    /* 005df07a: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df07d: jne 0x5df08c */ if (!fZ) goto L_005df08c;
L_005df07f:; BB(0x005df07f);
    /* 005df07f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df082: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005df084: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df087: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5df08au); call_ind(t); }
    /* 005df08a: jmp 0x5df093 */ goto L_005df093;
L_005df08c:; BB(0x005df08c);
    /* 005df08c: jmp 0x5df047 */ goto L_005df047;
L_005df08e:; BB(0x005df08e);
    /* 005df08e: mov eax, 0x6fc3f4 */ r_eax = 0x6fc3f4u;
L_005df093:; BB(0x005df093);
    /* 005df093: mov esp, ebp */ r_esp = r_ebp;
    /* 005df095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df096: ret 4 */ FN_RET(0x005df02c); r_esp += 8; return;
}

void f_005df099(void) /* FUN_005df099 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df099);
    /* 005df099: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df09a: mov ebp, esp */ r_ebp = r_esp;
    /* 005df09c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df09f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005df0a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df0a5: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df0a9: je 0x5df133 */ if (fZ) goto L_005df133;
L_005df0af:; BB(0x005df0af);
    /* 005df0af: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005df0b6: jmp 0x5df0c1 */ goto L_005df0c1;
L_005df0b8:; BB(0x005df0b8);
    /* 005df0b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df0bb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005df0be: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005df0c1:; BB(0x005df0c1);
    /* 005df0c1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df0c4: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005df0c7: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5df0ccu); f_005dd4d2();
    /* 005df0cc: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df0cf: jge 0x5df133 */ if ((fS==fO)) goto L_005df133;
L_005df0d1:; BB(0x005df0d1);
    /* 005df0d1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df0d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df0d5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df0d8: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005df0db: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5df0e0u); f_005dd560();
    /* 005df0e0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005df0e3: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df0e7: je 0x5df106 */ if (fZ) goto L_005df106;
L_005df0e9:; BB(0x005df0e9);
    /* 005df0e9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005df0ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df0ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df0f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005df0f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df0f5: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5df0f8u); call_ind(t); }
    /* 005df0f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df0f9: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x5df0feu); f_006325b0();
    /* 005df0fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df101: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005df104: jmp 0x5df121 */ goto L_005df121;
L_005df106:; BB(0x005df106);
    /* 005df106: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df10a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df10d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005df10f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df112: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5df115u); call_ind(t); }
    /* 005df115: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df116: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5df11bu); f_006240c0();
    /* 005df11b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df11e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005df121:; BB(0x005df121);
    /* 005df121: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df125: jne 0x5df131 */ if (!fZ) goto L_005df131;
L_005df127:; BB(0x005df127);
    /* 005df127: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df12a: call 0x5dda32 */ r_esp -= 4; W32(r_esp, 0x5df12fu); f_005dda32();
    /* 005df12f: jmp 0x5df136 */ goto L_005df136;
L_005df131:; BB(0x005df131);
    /* 005df131: jmp 0x5df0b8 */ goto L_005df0b8;
L_005df133:; BB(0x005df133);
    /* 005df133: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005df136:; BB(0x005df136);
    /* 005df136: mov esp, ebp */ r_esp = r_ebp;
    /* 005df138: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df139: ret 8 */ FN_RET(0x005df099); r_esp += 12; return;
}

void f_005df13c(void) /* FUN_005df13c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df13c);
    /* 005df13c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df13d: mov ebp, esp */ r_ebp = r_esp;
    /* 005df13f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df142: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005df145: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df148: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df14c: je 0x5df196 */ if (fZ) goto L_005df196;
L_005df14e:; BB(0x005df14e);
    /* 005df14e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005df155: jmp 0x5df160 */ goto L_005df160;
L_005df157:; BB(0x005df157);
    /* 005df157: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df15a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005df15d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005df160:; BB(0x005df160);
    /* 005df160: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df163: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005df166: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5df16bu); f_005dd4d2();
    /* 005df16b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df16e: jge 0x5df196 */ if ((fS==fO)) goto L_005df196;
L_005df170:; BB(0x005df170);
    /* 005df170: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df177: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005df17a: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5df17fu); f_005dd560();
    /* 005df17f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005df182: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df185: call 0x5dda32 */ r_esp -= 4; W32(r_esp, 0x5df18au); f_005dda32();
    /* 005df18a: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df18d: jne 0x5df194 */ if (!fZ) goto L_005df194;
L_005df18f:; BB(0x005df18f);
    /* 005df18f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df192: jmp 0x5df198 */ goto L_005df198;
L_005df194:; BB(0x005df194);
    /* 005df194: jmp 0x5df157 */ goto L_005df157;
L_005df196:; BB(0x005df196);
    /* 005df196: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005df198:; BB(0x005df198);
    /* 005df198: mov esp, ebp */ r_esp = r_ebp;
    /* 005df19a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df19b: ret 4 */ FN_RET(0x005df13c); r_esp += 8; return;
}

void f_005df19e(void) /* FUN_005df19e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df19e);
    /* 005df19e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df19f: mov ebp, esp */ r_ebp = r_esp;
    /* 005df1a1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df1a4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005df1a7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df1aa: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df1ae: je 0x5df22f */ if (fZ) goto L_005df22f;
L_005df1b0:; BB(0x005df1b0);
    /* 005df1b0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005df1b7: jmp 0x5df1c2 */ goto L_005df1c2;
L_005df1b9:; BB(0x005df1b9);
    /* 005df1b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df1bc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005df1bf: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005df1c2:; BB(0x005df1c2);
    /* 005df1c2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df1c5: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005df1c8: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5df1cdu); f_005dd4d2();
    /* 005df1cd: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df1d0: jge 0x5df22f */ if ((fS==fO)) goto L_005df22f;
L_005df1d2:; BB(0x005df1d2);
    /* 005df1d2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df1d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df1d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df1d9: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005df1dc: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5df1e1u); f_005dd560();
    /* 005df1e1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005df1e4: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df1e8: je 0x5df207 */ if (fZ) goto L_005df207;
L_005df1ea:; BB(0x005df1ea);
    /* 005df1ea: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005df1ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df1ee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df1f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005df1f3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df1f6: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5df1f9u); call_ind(t); }
    /* 005df1f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df1fa: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x5df1ffu); f_006325b0();
    /* 005df1ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df202: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005df205: jmp 0x5df222 */ goto L_005df222;
L_005df207:; BB(0x005df207);
    /* 005df207: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df20a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df20b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df20e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005df210: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df213: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5df216u); call_ind(t); }
    /* 005df216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df217: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5df21cu); f_006240c0();
    /* 005df21c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df21f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005df222:; BB(0x005df222);
    /* 005df222: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df226: jne 0x5df22d */ if (!fZ) goto L_005df22d;
L_005df228:; BB(0x005df228);
    /* 005df228: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df22b: jmp 0x5df231 */ goto L_005df231;
L_005df22d:; BB(0x005df22d);
    /* 005df22d: jmp 0x5df1b9 */ goto L_005df1b9;
L_005df22f:; BB(0x005df22f);
    /* 005df22f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005df231:; BB(0x005df231);
    /* 005df231: mov esp, ebp */ r_esp = r_ebp;
    /* 005df233: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df234: ret 8 */ FN_RET(0x005df19e); r_esp += 12; return;
}

void f_005df237(void) /* FUN_005df237 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df237);
    /* 005df237: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df238: mov ebp, esp */ r_ebp = r_esp;
    /* 005df23a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df23d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005df240: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df243: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df247: je 0x5df295 */ if (fZ) goto L_005df295;
L_005df249:; BB(0x005df249);
    /* 005df249: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005df250: jmp 0x5df25b */ goto L_005df25b;
L_005df252:; BB(0x005df252);
    /* 005df252: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df255: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005df258: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005df25b:; BB(0x005df25b);
    /* 005df25b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df25e: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005df261: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5df266u); f_005dd4d2();
    /* 005df266: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df269: jge 0x5df295 */ if ((fS==fO)) goto L_005df295;
L_005df26b:; BB(0x005df26b);
    /* 005df26b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df26e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df26f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df272: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005df275: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5df27au); f_005dd560();
    /* 005df27a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005df27d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df280: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5df285u); f_005d9690();
    /* 005df285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df287: je 0x5df293 */ if (fZ) goto L_005df293;
L_005df289:; BB(0x005df289);
    /* 005df289: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df28c: call 0x5dda32 */ r_esp -= 4; W32(r_esp, 0x5df291u); f_005dda32();
    /* 005df291: jmp 0x5df297 */ goto L_005df297;
L_005df293:; BB(0x005df293);
    /* 005df293: jmp 0x5df252 */ goto L_005df252;
L_005df295:; BB(0x005df295);
    /* 005df295: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005df297:; BB(0x005df297);
    /* 005df297: mov esp, ebp */ r_esp = r_ebp;
    /* 005df299: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df29a: ret  */ FN_RET(0x005df237); r_esp += 4; return;
}

void f_005df29b(void) /* FUN_005df29b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df29b);
    /* 005df29b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df29c: mov ebp, esp */ r_ebp = r_esp;
    /* 005df29e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df2a1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005df2a4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df2a7: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df2ab: je 0x5df2f4 */ if (fZ) goto L_005df2f4;
L_005df2ad:; BB(0x005df2ad);
    /* 005df2ad: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005df2b4: jmp 0x5df2bf */ goto L_005df2bf;
L_005df2b6:; BB(0x005df2b6);
    /* 005df2b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df2b9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005df2bc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005df2bf:; BB(0x005df2bf);
    /* 005df2bf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df2c2: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005df2c5: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5df2cau); f_005dd4d2();
    /* 005df2ca: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df2cd: jge 0x5df2f4 */ if ((fS==fO)) goto L_005df2f4;
L_005df2cf:; BB(0x005df2cf);
    /* 005df2cf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df2d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df2d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df2d6: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005df2d9: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5df2deu); f_005dd560();
    /* 005df2de: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005df2e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df2e4: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5df2e9u); f_005d9690();
    /* 005df2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df2eb: je 0x5df2f2 */ if (fZ) goto L_005df2f2;
L_005df2ed:; BB(0x005df2ed);
    /* 005df2ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df2f0: jmp 0x5df2f6 */ goto L_005df2f6;
L_005df2f2:; BB(0x005df2f2);
    /* 005df2f2: jmp 0x5df2b6 */ goto L_005df2b6;
L_005df2f4:; BB(0x005df2f4);
    /* 005df2f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005df2f6:; BB(0x005df2f6);
    /* 005df2f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005df2f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df2f9: ret  */ FN_RET(0x005df29b); r_esp += 4; return;
}

void f_005df2fa(void) /* FUN_005df2fa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df2fa);
    /* 005df2fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df2fb: mov ebp, esp */ r_ebp = r_esp;
    /* 005df2fd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df300: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005df303: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df306: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df307: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df30a: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005df30d: call 0x5dd6cf */ r_esp -= 4; W32(r_esp, 0x5df312u); f_005dd6cf();
    /* 005df312: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005df319: jmp 0x5df324 */ goto L_005df324;
L_005df31b:; BB(0x005df31b);
    /* 005df31b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df31e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005df321: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005df324:; BB(0x005df324);
    /* 005df324: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df327: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005df32a: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5df32fu); f_005dd4d2();
    /* 005df32f: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df332: jge 0x5df350 */ if ((fS==fO)) goto L_005df350;
L_005df334:; BB(0x005df334);
    /* 005df334: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df337: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df338: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df33b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df33c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df33f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005df342: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5df347u); f_005dd560();
    /* 005df347: mov ecx, eax */ r_ecx = r_eax;
    /* 005df349: call 0x5dda19 */ r_esp -= 4; W32(r_esp, 0x5df34eu); f_005dda19();
    /* 005df34e: jmp 0x5df31b */ goto L_005df31b;
L_005df350:; BB(0x005df350);
    /* 005df350: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df352: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df355: call 0x5de13d */ r_esp -= 4; W32(r_esp, 0x5df35au); f_005de13d();
    /* 005df35a: mov esp, ebp */ r_esp = r_ebp;
    /* 005df35c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df35d: ret 4 */ FN_RET(0x005df2fa); r_esp += 8; return;
}

void f_005df360(void) /* FUN_005df360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df360);
    /* 005df360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df361: mov ebp, esp */ r_ebp = r_esp;
    /* 005df363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df36a: call 0x5dd81d */ r_esp -= 4; W32(r_esp, 0x5df36fu); f_005dd81d();
    /* 005df36f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df372: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005df375: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df377: je 0x5df385 */ if (fZ) goto L_005df385;
L_005df379:; BB(0x005df379);
    /* 005df379: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df37c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df37d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5df382u); f_0048ac1b();
    /* 005df382: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005df385:; BB(0x005df385);
    /* 005df385: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df388: mov esp, ebp */ r_esp = r_ebp;
    /* 005df38a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df38b: ret 4 */ FN_RET(0x005df360); r_esp += 8; return;
}

void f_005df390(void) /* FUN_005df390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df390);
    /* 005df390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df391: mov ebp, esp */ r_ebp = r_esp;
    /* 005df393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df397: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df39a: call 0x5ddad6 */ r_esp -= 4; W32(r_esp, 0x5df39fu); f_005ddad6();
    /* 005df39f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df3a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005df3a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df3a7: je 0x5df3b5 */ if (fZ) goto L_005df3b5;
L_005df3a9:; BB(0x005df3a9);
    /* 005df3a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df3ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df3ad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5df3b2u); f_0048ac1b();
    /* 005df3b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005df3b5:; BB(0x005df3b5);
    /* 005df3b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df3b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005df3ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df3bb: ret 4 */ FN_RET(0x005df390); r_esp += 8; return;
}

void f_005df3c0(void) /* FUN_005df3c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df3c0);
    /* 005df3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df3c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df3c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df3c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df3ca: call 0x5ddc0f */ r_esp -= 4; W32(r_esp, 0x5df3cfu); f_005ddc0f();
    /* 005df3cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df3d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005df3d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df3d7: je 0x5df3e5 */ if (fZ) goto L_005df3e5;
L_005df3d9:; BB(0x005df3d9);
    /* 005df3d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df3dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df3dd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5df3e2u); f_0048ac1b();
    /* 005df3e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005df3e5:; BB(0x005df3e5);
    /* 005df3e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df3e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005df3ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df3eb: ret 4 */ FN_RET(0x005df3c0); r_esp += 8; return;
}

void f_005df3f0(void) /* FUN_005df3f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df3f0);
    /* 005df3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df3f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df3f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df3f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df3fa: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5df3ffu); f_005dfbf0();
    /* 005df3ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df402: mov dword ptr [eax], 0x63bb64 */ W32((u32)(r_eax), 0x63bb64u);
    /* 005df408: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df40b: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005df412: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df415: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df418: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005df41b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df41e: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 005df425: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df427: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df429: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df42c: call 0x5df5a7 */ r_esp -= 4; W32(r_esp, 0x5df431u); f_005df5a7();
    /* 005df431: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df434: mov esp, ebp */ r_esp = r_ebp;
    /* 005df436: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df437: ret 4 */ FN_RET(0x005df3f0); r_esp += 8; return;
}

void f_005df43a(void) /* FUN_005df43a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df43a);
    /* 005df43a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df43b: mov ebp, esp */ r_ebp = r_esp;
    /* 005df43d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df43e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df441: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df444: mov dword ptr [eax], 0x63bb64 */ W32((u32)(r_eax), 0x63bb64u);
    /* 005df44a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df44d: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5df452u); f_005dfc0f();
    /* 005df452: mov esp, ebp */ r_esp = r_ebp;
    /* 005df454: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df455: ret  */ FN_RET(0x005df43a); r_esp += 4; return;
}

void f_005df456(void) /* FUN_005df456 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df456);
    /* 005df456: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df457: mov ebp, esp */ r_ebp = r_esp;
    /* 005df459: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df45c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005df45f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df462: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df466: jne 0x5df46d */ if (!fZ) goto L_005df46d;
L_005df468:; BB(0x005df468);
    /* 005df468: jmp 0x5df546 */ goto L_005df546;
L_005df46d:; BB(0x005df46d);
    /* 005df46d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005df473: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5df478u); f_005d9e23();
    /* 005df478: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df47b: sub eax, dword ptr [ecx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005df47e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df47f: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df484u); f_00624700();
    /* 005df484: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df487: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df48a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005df48d: cmp eax, dword ptr [ecx + 0x78] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x78u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df490: jl 0x5df546 */ if ((fS!=fO)) goto L_005df546;
L_005df496:; BB(0x005df496);
    /* 005df496: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005df49c: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5df4a1u); f_005d9e23();
    /* 005df4a1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df4a4: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005df4a7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df4aa: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df4ae: je 0x5df546 */ if (fZ) goto L_005df546;
L_005df4b4:; BB(0x005df4b4);
    /* 005df4b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df4b7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df4ba: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 005df4bd: fadd dword ptr [edx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x24u));
    /* 005df4c0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df4c3: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 005df4c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df4c9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df4cc: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 005df4cf: fadd dword ptr [edx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x28u));
    /* 005df4d2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df4d5: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 005df4d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df4db: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 005df4de: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5df4e3u); f_00624144();
    /* 005df4e3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005df4e6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df4e9: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 005df4ec: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5df4f1u); f_00624144();
    /* 005df4f1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005df4f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df4f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df4f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df4fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df4fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df4ff: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005df502: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df505: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005df508: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005df50a: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5df50du); call_ind(t); }
    /* 005df50d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df510: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df513: sub edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005df516: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df517: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df51cu); f_00624700();
    /* 005df51c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df51f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df522: jge 0x5df546 */ if ((fS==fO)) goto L_005df546;
L_005df524:; BB(0x005df524);
    /* 005df524: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df527: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df52a: sub ecx, dword ptr [eax + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005df52d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df52e: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df533u); f_00624700();
    /* 005df533: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df536: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df539: jge 0x5df546 */ if ((fS==fO)) goto L_005df546;
L_005df53b:; BB(0x005df53b);
    /* 005df53b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df53e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005df540: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df543: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5df546u); call_ind(t); }
L_005df546:; BB(0x005df546);
    /* 005df546: mov esp, ebp */ r_esp = r_ebp;
    /* 005df548: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df549: ret  */ FN_RET(0x005df456); r_esp += 4; return;
}

void f_005df54a(void) /* FUN_005df54a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df54a);
    /* 005df54a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df54b: mov ebp, esp */ r_ebp = r_esp;
    /* 005df54d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df54e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df551: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df554: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df558: je 0x5df56d */ if (fZ) goto L_005df56d;
L_005df55a:; BB(0x005df55a);
    /* 005df55a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df55c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df55f: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005df562: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df565: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005df568: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005df56a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5df56du); call_ind(t); }
L_005df56d:; BB(0x005df56d);
    /* 005df56d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df570: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005df577: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df57a: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005df57d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df57e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df581: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005df584: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df585: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df588: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005df58b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df58e: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005df591: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005df593: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5df596u); call_ind(t); }
    /* 005df596: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df598: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df59b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005df59e: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x5df5a3u); f_005d4df6();
    /* 005df5a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005df5a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df5a6: ret  */ FN_RET(0x005df54a); r_esp += 4; return;
}

void f_005df5a7(void) /* FUN_005df5a7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df5a7);
    /* 005df5a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df5a8: mov ebp, esp */ r_ebp = r_esp;
    /* 005df5aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df5ab: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df5ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df5b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df5b4: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 005df5b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df5ba: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005df5bd: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005df5c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005df5c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df5c3: ret 8 */ FN_RET(0x005df5a7); r_esp += 12; return;
}

void f_005df5c6(void) /* FUN_005df5c6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df5c6);
    /* 005df5c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df5c7: mov ebp, esp */ r_ebp = r_esp;
    /* 005df5c9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df5cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005df5cd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005df5d0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df5d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df5d6: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005df5d9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df5dc: mov dword ptr [edx + 0x10], 1 */ W32((u32)(r_edx+0x10u), 0x1u);
    /* 005df5e3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df5e6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005df5e9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df5ec: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005df5ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005df5f1: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5df5f4u); call_ind(t); }
    /* 005df5f4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005df5f7: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 005df5fa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df5fd: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 005df600: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df603: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005df606: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df609: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005df60c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005df60e: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5df611u); call_ind(t); }
    /* 005df611: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005df614: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 005df617: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df61a: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 005df61d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df620: fild dword ptr [ecx + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x14u)));
    /* 005df623: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df626: fsub dword ptr [edx + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x1cu));
    /* 005df629: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df62c: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 005df62f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df632: fild dword ptr [ecx + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x18u)));
    /* 005df635: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df638: fsub dword ptr [edx + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x20u));
    /* 005df63b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df63e: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 005df641: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df644: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005df647: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005df64a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005df64d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df651: jne 0x5df65c */ if (!fZ) goto L_005df65c;
L_005df653:; BB(0x005df653);
    /* 005df653: mov dword ptr [ebp - 0x18], 0x19 */ W32((u32)(r_ebp+0xffffffe8u), 0x19u);
    /* 005df65a: jmp 0x5df66b */ goto L_005df66b;
L_005df65c:; BB(0x005df65c);
    /* 005df65c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df65f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df660: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df665u); f_00624700();
    /* 005df665: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df668: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005df66b:; BB(0x005df66b);
    /* 005df66b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005df66e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005df671: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df674: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 005df677: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5df67cu); f_00624144();
    /* 005df67c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df67d: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df682u); f_00624700();
    /* 005df682: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df685: mov esi, eax */ r_esi = r_eax;
    /* 005df687: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df68a: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 005df68d: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5df692u); f_00624144();
    /* 005df692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df693: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df698u); f_00624700();
    /* 005df698: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df69b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df69d: jge 0x5df6b8 */ if ((fS==fO)) goto L_005df6b8;
L_005df69f:; BB(0x005df69f);
    /* 005df69f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df6a2: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 005df6a5: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5df6aau); f_00624144();
    /* 005df6aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df6ab: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df6b0u); f_00624700();
    /* 005df6b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df6b3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005df6b6: jmp 0x5df6cf */ goto L_005df6cf;
L_005df6b8:; BB(0x005df6b8);
    /* 005df6b8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df6bb: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 005df6be: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5df6c3u); f_00624144();
    /* 005df6c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df6c4: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df6c9u); f_00624700();
    /* 005df6c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df6cc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005df6cf:; BB(0x005df6cf);
    /* 005df6cf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005df6d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005df6d3: idiv dword ptr [ebp - 8] */ { i32 d = (i32)R32((u32)(r_ebp+0xfffffff8u)); if (!d) UNSUP(0x005df6d3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005df6d3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005df6d6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005df6d9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df6dd: jne 0x5df6e6 */ if (!fZ) goto L_005df6e6;
L_005df6df:; BB(0x005df6df);
    /* 005df6df: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_005df6e6:; BB(0x005df6e6);
    /* 005df6e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df6e9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005df6ec: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df6f0: jne 0x5df6f9 */ if (!fZ) goto L_005df6f9;
L_005df6f2:; BB(0x005df6f2);
    /* 005df6f2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_005df6f9:; BB(0x005df6f9);
    /* 005df6f9: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 005df6fc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df6ff: fdivr dword ptr [eax + 0x24] */ ST(0) = R_F32((u32)(r_eax+0x24u)) / ST(0);
    /* 005df702: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df705: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 005df708: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 005df70b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df70e: fdivr dword ptr [edx + 0x28] */ ST(0) = R_F32((u32)(r_edx+0x28u)) / ST(0);
    /* 005df711: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df714: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 005df717: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005df71d: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5df722u); f_005d9e23();
    /* 005df722: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df725: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 005df728: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005df729: mov esp, ebp */ r_esp = r_ebp;
    /* 005df72b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df72c: ret 4 */ FN_RET(0x005df5c6); r_esp += 8; return;
}

void f_005df72f(void) /* FUN_005df72f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df72f);
    /* 005df72f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df730: mov ebp, esp */ r_ebp = r_esp;
    /* 005df732: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df733: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df736: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df73a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df73d: call 0x5df3f0 */ r_esp -= 4; W32(r_esp, 0x5df742u); f_005df3f0();
    /* 005df742: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df745: mov dword ptr [ecx], 0x63bb7c */ W32((u32)(r_ecx), 0x63bb7cu);
    /* 005df74b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005df74e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df74f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005df752: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df753: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df756: call 0x5df5a7 */ r_esp -= 4; W32(r_esp, 0x5df75bu); f_005df5a7();
    /* 005df75b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df75e: mov esp, ebp */ r_esp = r_ebp;
    /* 005df760: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df761: ret 0xc */ FN_RET(0x005df72f); r_esp += 16; return;
}

void f_005df764(void) /* FUN_005df764 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df764);
    /* 005df764: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df765: mov ebp, esp */ r_ebp = r_esp;
    /* 005df767: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df768: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df76b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df76e: mov dword ptr [eax], 0x63bb7c */ W32((u32)(r_eax), 0x63bb7cu);
    /* 005df774: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df777: call 0x5df43a */ r_esp -= 4; W32(r_esp, 0x5df77cu); f_005df43a();
    /* 005df77c: mov esp, ebp */ r_esp = r_ebp;
    /* 005df77e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df77f: ret  */ FN_RET(0x005df764); r_esp += 4; return;
}

void f_005df780(void) /* FUN_005df780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df780);
    /* 005df780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df781: mov ebp, esp */ r_ebp = r_esp;
    /* 005df783: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df786: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005df789: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df78c: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df790: jne 0x5df797 */ if (!fZ) goto L_005df797;
L_005df792:; BB(0x005df792);
    /* 005df792: jmp 0x5df8fb */ goto L_005df8fb;
L_005df797:; BB(0x005df797);
    /* 005df797: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005df79d: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5df7a2u); f_005d9e23();
    /* 005df7a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df7a5: sub eax, dword ptr [ecx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005df7a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df7a9: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df7aeu); f_00624700();
    /* 005df7ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df7b1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df7b4: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005df7b7: cmp eax, dword ptr [ecx + 0x78] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x78u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df7ba: jge 0x5df7c1 */ if ((fS==fO)) goto L_005df7c1;
L_005df7bc:; BB(0x005df7bc);
    /* 005df7bc: jmp 0x5df8fb */ goto L_005df8fb;
L_005df7c1:; BB(0x005df7c1);
    /* 005df7c1: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005df7c7: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5df7ccu); f_005d9e23();
    /* 005df7cc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df7cf: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005df7d2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df7d5: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df7d9: je 0x5df8fb */ if (fZ) goto L_005df8fb;
L_005df7df:; BB(0x005df7df);
    /* 005df7df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df7e2: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005df7e5: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df7e9: jne 0x5df7fd */ if (!fZ) goto L_005df7fd;
L_005df7eb:; BB(0x005df7eb);
    /* 005df7eb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df7ee: fld dword ptr [0x63bb90] */ FPUSH(R_F32((u32)(0x63bb90u)));
    /* 005df7f4: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 005df7f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df7fa: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
L_005df7fd:; BB(0x005df7fd);
    /* 005df7fd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df800: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df803: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 005df806: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 005df809: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df80c: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 005df80f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df812: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005df814: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df817: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5df81au); call_ind(t); }
    /* 005df81a: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 005df81d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df820: fld dword ptr [ecx + 0x44] */ FPUSH(R_F32((u32)(r_ecx+0x44u)));
    /* 005df823: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 005df826: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005df829: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df82c: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 005df82f: fmul qword ptr [0x63bb98] */ ST(0) = ST(0) * R_F64((u32)(0x63bb98u));
    /* 005df835: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df838: fmul dword ptr [eax + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x34u));
    /* 005df83b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df83e: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005df841: call 0x626ab4 */ r_esp -= 4; W32(r_esp, 0x5df846u); f_00626ab4();
    /* 005df846: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df849: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 005df84c: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 005df84f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df852: fiadd dword ptr [ecx + 0x14] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_ecx+0x14u));
    /* 005df855: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df858: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 005df85b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df85e: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 005df861: fmul qword ptr [0x63bb98] */ ST(0) = ST(0) * R_F64((u32)(0x63bb98u));
    /* 005df867: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df86a: fmul dword ptr [ecx + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x34u));
    /* 005df86d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df870: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005df873: call 0x626a04 */ r_esp -= 4; W32(r_esp, 0x5df878u); f_00626a04();
    /* 005df878: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df87b: fst dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0));
    /* 005df87e: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 005df881: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df884: fiadd dword ptr [edx + 0x18] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_edx+0x18u));
    /* 005df887: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df88a: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 005df88d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df890: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 005df893: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5df898u); f_00624144();
    /* 005df898: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005df89b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df89e: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 005df8a1: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5df8a6u); f_00624144();
    /* 005df8a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005df8a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df8ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df8ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df8b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df8b1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df8b4: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005df8b7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df8ba: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005df8bd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005df8bf: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5df8c2u); call_ind(t); }
    /* 005df8c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df8c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df8c8: sub edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005df8cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df8cc: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df8d1u); f_00624700();
    /* 005df8d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df8d4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df8d7: jge 0x5df8fb */ if ((fS==fO)) goto L_005df8fb;
L_005df8d9:; BB(0x005df8d9);
    /* 005df8d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df8dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df8df: sub ecx, dword ptr [eax + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005df8e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df8e3: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df8e8u); f_00624700();
    /* 005df8e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df8eb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df8ee: jge 0x5df8fb */ if ((fS==fO)) goto L_005df8fb;
L_005df8f0:; BB(0x005df8f0);
    /* 005df8f0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df8f3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005df8f5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df8f8: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5df8fbu); call_ind(t); }
L_005df8fb:; BB(0x005df8fb);
    /* 005df8fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005df8fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df8fe: ret  */ FN_RET(0x005df780); r_esp += 4; return;
}

void f_005df8ff(void) /* FUN_005df8ff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df8ff);
    /* 005df8ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df900: mov ebp, esp */ r_ebp = r_esp;
    /* 005df902: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df905: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005df908: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df90b: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df90f: jne 0x5df916 */ if (!fZ) goto L_005df916;
L_005df911:; BB(0x005df911);
    /* 005df911: jmp 0x5dfbba */ goto L_005dfbba;
L_005df916:; BB(0x005df916);
    /* 005df916: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005df91c: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5df921u); f_005d9e23();
    /* 005df921: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df924: sub eax, dword ptr [ecx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005df927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df928: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5df92du); f_00624700();
    /* 005df92d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df930: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df933: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005df936: cmp eax, dword ptr [ecx + 0x78] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x78u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df939: jge 0x5df940 */ if ((fS==fO)) goto L_005df940;
L_005df93b:; BB(0x005df93b);
    /* 005df93b: jmp 0x5dfbba */ goto L_005dfbba;
L_005df940:; BB(0x005df940);
    /* 005df940: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005df946: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5df94bu); f_005d9e23();
    /* 005df94b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df94e: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005df951: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df954: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df958: je 0x5dfbba */ if (fZ) goto L_005dfbba;
L_005df95e:; BB(0x005df95e);
    /* 005df95e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df961: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005df964: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df968: jne 0x5df98f */ if (!fZ) goto L_005df98f;
L_005df96a:; BB(0x005df96a);
    /* 005df96a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df96d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005df970: lea edx, [ecx*4 - 4] */ r_edx = (u32)(r_ecx*4+0xfffffffcu);
    /* 005df977: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df97a: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005df97d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df980: fld dword ptr [0x63bb90] */ FPUSH(R_F32((u32)(0x63bb90u)));
    /* 005df986: fsub dword ptr [ecx + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x48u));
    /* 005df989: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df98c: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
L_005df98f:; BB(0x005df98f);
    /* 005df98f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df992: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df995: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 005df998: fadd dword ptr [ecx + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x48u));
    /* 005df99b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df99e: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 005df9a1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9a4: fld dword ptr [0x63bb90] */ FPUSH(R_F32((u32)(0x63bb90u)));
    /* 005df9aa: fadd dword ptr [eax + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x48u));
    /* 005df9ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9b0: fcomp dword ptr [ecx + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x3cu))); FPOP();
    /* 005df9b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005df9b5: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005df9b8: je 0x5df9d5 */ if (fZ) goto L_005df9d5;
L_005df9ba:; BB(0x005df9ba);
    /* 005df9ba: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9bd: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005df9c0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005df9c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9c6: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 005df9c9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9cc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9cf: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005df9d2: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
L_005df9d5:; BB(0x005df9d5);
    /* 005df9d5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9db: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 005df9de: fmul dword ptr [eax + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x3cu));
    /* 005df9e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9e4: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 005df9e7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9ea: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9ed: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 005df9f0: fmul dword ptr [eax + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x3cu));
    /* 005df9f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9f6: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 005df9f9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df9fc: fld dword ptr [0x63bba0] */ FPUSH(R_F32((u32)(0x63bba0u)));
    /* 005dfa02: fmul dword ptr [edx + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x44u));
    /* 005dfa05: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa08: fld dword ptr [0x63bba4] */ FPUSH(R_F32((u32)(0x63bba4u)));
    /* 005dfa0e: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 005dfa11: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005dfa13: fadd dword ptr [0x63bb90] */ ST(0) = ST(0) + R_F32((u32)(0x63bb90u));
    /* 005dfa19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa1c: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005dfa1f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa22: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005dfa25: fimul dword ptr [ecx + edx*8] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ecx+r_edx*8));
    /* 005dfa28: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa2b: fld dword ptr [0x63bba8] */ FPUSH(R_F32((u32)(0x63bba8u)));
    /* 005dfa31: fmul dword ptr [edx + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x44u));
    /* 005dfa34: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa37: fld dword ptr [0x63bba4] */ FPUSH(R_F32((u32)(0x63bba4u)));
    /* 005dfa3d: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 005dfa40: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dfa42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa45: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005dfa48: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa4b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005dfa4e: fimul dword ptr [ecx + edx*8 + 8] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ecx+r_edx*8+0x8u));
    /* 005dfa52: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dfa54: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa57: fld dword ptr [0x63bba0] */ FPUSH(R_F32((u32)(0x63bba0u)));
    /* 005dfa5d: fmul dword ptr [edx + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x40u));
    /* 005dfa60: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa63: fsubr dword ptr [eax + 0x44] */ ST(0) = R_F32((u32)(r_eax+0x44u)) - ST(0);
    /* 005dfa66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa69: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 005dfa6c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa6f: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005dfa72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa75: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005dfa78: fimul dword ptr [edx + eax*8 + 0x10] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_edx+r_eax*8+0x10u));
    /* 005dfa7c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dfa7e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa81: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa84: fld dword ptr [eax + 0x44] */ FPUSH(R_F32((u32)(r_eax+0x44u)));
    /* 005dfa87: fsub dword ptr [ecx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x40u));
    /* 005dfa8a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa8d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005dfa90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa93: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005dfa96: fimul dword ptr [edx + eax*8 + 0x18] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_edx+r_eax*8+0x18u));
    /* 005dfa9a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dfa9c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa9f: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 005dfaa2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfaa5: fld dword ptr [0x63bba0] */ FPUSH(R_F32((u32)(0x63bba0u)));
    /* 005dfaab: fmul dword ptr [ecx + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x44u));
    /* 005dfaae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfab1: fld dword ptr [0x63bba4] */ FPUSH(R_F32((u32)(0x63bba4u)));
    /* 005dfab7: fmul dword ptr [edx + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x40u));
    /* 005dfaba: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005dfabc: fadd dword ptr [0x63bb90] */ ST(0) = ST(0) + R_F32((u32)(0x63bb90u));
    /* 005dfac2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfac5: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005dfac8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfacb: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005dface: fimul dword ptr [eax + ecx*8 + 4] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 005dfad2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfad5: fld dword ptr [0x63bba8] */ FPUSH(R_F32((u32)(0x63bba8u)));
    /* 005dfadb: fmul dword ptr [ecx + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x44u));
    /* 005dfade: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfae1: fld dword ptr [0x63bba4] */ FPUSH(R_F32((u32)(0x63bba4u)));
    /* 005dfae7: fmul dword ptr [edx + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x40u));
    /* 005dfaea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dfaec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfaef: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005dfaf2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfaf5: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005dfaf8: fimul dword ptr [eax + ecx*8 + 0xc] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_eax+r_ecx*8+0xcu));
    /* 005dfafc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dfafe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb01: fld dword ptr [0x63bba0] */ FPUSH(R_F32((u32)(0x63bba0u)));
    /* 005dfb07: fmul dword ptr [ecx + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x40u));
    /* 005dfb0a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb0d: fsubr dword ptr [edx + 0x44] */ ST(0) = R_F32((u32)(r_edx+0x44u)) - ST(0);
    /* 005dfb10: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb13: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 005dfb16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb19: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005dfb1c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb1f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005dfb22: fimul dword ptr [ecx + edx*8 + 0x14] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ecx+r_edx*8+0x14u));
    /* 005dfb26: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dfb28: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb2b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb2e: fld dword ptr [edx + 0x44] */ FPUSH(R_F32((u32)(r_edx+0x44u)));
    /* 005dfb31: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 005dfb34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb37: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005dfb3a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb3d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005dfb40: fimul dword ptr [ecx + edx*8 + 0x1c] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ecx+r_edx*8+0x1cu));
    /* 005dfb44: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dfb46: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb49: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 005dfb4c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb4f: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 005dfb52: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5dfb57u); f_00624144();
    /* 005dfb57: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005dfb5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb5d: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 005dfb60: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5dfb65u); f_00624144();
    /* 005dfb65: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dfb68: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfb6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb6c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dfb6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb73: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005dfb76: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb79: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005dfb7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dfb7e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5dfb81u); call_ind(t); }
    /* 005dfb81: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb84: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dfb87: sub ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfb8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb8b: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5dfb90u); f_00624700();
    /* 005dfb90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfb93: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dfb96: jge 0x5dfbba */ if ((fS==fO)) goto L_005dfbba;
L_005dfb98:; BB(0x005dfb98);
    /* 005dfb98: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb9b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfb9e: sub eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dfba1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfba2: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5dfba7u); f_00624700();
    /* 005dfba7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfbaa: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dfbad: jge 0x5dfbba */ if ((fS==fO)) goto L_005dfbba;
L_005dfbaf:; BB(0x005dfbaf);
    /* 005dfbaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfbb2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dfbb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfbb7: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5dfbbau); call_ind(t); }
L_005dfbba:; BB(0x005dfbba);
    /* 005dfbba: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfbbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfbbd: ret  */ FN_RET(0x005df8ff); r_esp += 4; return;
}

void f_005dfbc0(void) /* FUN_005dfbc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dfbc0);
    /* 005dfbc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfbc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dfbc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfbca: call 0x5df764 */ r_esp -= 4; W32(r_esp, 0x5dfbcfu); f_005df764();
    /* 005dfbcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dfbd2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dfbd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfbd7: je 0x5dfbe5 */ if (fZ) goto L_005dfbe5;
L_005dfbd9:; BB(0x005dfbd9);
    /* 005dfbd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfbdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbdd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5dfbe2u); f_0048ac1b();
    /* 005dfbe2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dfbe5:; BB(0x005dfbe5);
    /* 005dfbe5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfbe8: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfbea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfbeb: ret 4 */ FN_RET(0x005dfbc0); r_esp += 8; return;
}

void f_005dfbf0(void) /* FUN_005dfbf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dfbf0);
    /* 005dfbf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfbf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dfbf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfbfa: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x5dfbffu); f_0048e320();
    /* 005dfbff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc02: mov dword ptr [eax], 0x63bbb4 */ W32((u32)(r_eax), 0x63bbb4u);
    /* 005dfc08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc0b: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfc0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfc0e: ret  */ FN_RET(0x005dfbf0); r_esp += 4; return;
}

void f_005dfc0f(void) /* FUN_005dfc0f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dfc0f);
    /* 005dfc0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc10: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfc12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc13: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dfc16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc19: mov dword ptr [eax], 0x63bbb4 */ W32((u32)(r_eax), 0x63bbb4u);
    /* 005dfc1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc22: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x5dfc27u); f_0048e361();
    /* 005dfc27: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfc29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfc2a: ret  */ FN_RET(0x005dfc0f); r_esp += 4; return;
}

void f_005dfc30(void) /* FUN_005dfc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dfc30);
    /* 005dfc30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc31: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfc33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dfc37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc3a: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5dfc3fu); f_005dfbf0();
    /* 005dfc3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc42: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfc45: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x5dfc4au); f_005dd290();
    /* 005dfc4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc4d: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfc50: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x5dfc55u); f_005dd290();
    /* 005dfc55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc58: mov dword ptr [eax], 0x63bbbc */ W32((u32)(r_eax), 0x63bbbcu);
    /* 005dfc5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc61: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 005dfc68: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dfc6e: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 005dfc71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc74: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 005dfc7b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc7f: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005dfc84: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005dfc87: call 0x5e5eff */ r_esp -= 4; W32(r_esp, 0x5dfc8cu); f_005e5eff();
    /* 005dfc8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc8f: mov dword ptr [ecx + 0x44], 0xffffffff */ W32((u32)(r_ecx+0x44u), 0xffffffffu);
    /* 005dfc96: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfc99: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 005dfca0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfca3: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005dfcaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfcad: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 005dfcb4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfcb7: mov dword ptr [edx + 0x10], 0x1e0 */ W32((u32)(r_edx+0x10u), 0x1e0u);
    /* 005dfcbe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfcc1: mov dword ptr [eax + 0x14], 0x280 */ W32((u32)(r_eax+0x14u), 0x280u);
    /* 005dfcc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfccb: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 005dfcd2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfcd5: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 005dfcdc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfcdf: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 005dfce6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfce9: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 005dfcf0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfcf3: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 005dfcfa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfcfd: mov dword ptr [eax + 0x70], 0x14 */ W32((u32)(r_eax+0x70u), 0x14u);
    /* 005dfd04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfd07: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
    /* 005dfd0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfd11: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
    /* 005dfd18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfd1b: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 005dfd22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfd25: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 005dfd2f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfd32: mov dword ptr [edx + 0x84], 0 */ W32((u32)(r_edx+0x84u), 0x0u);
    /* 005dfd3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfd3f: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfd41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfd42: ret 4 */ FN_RET(0x005dfc30); r_esp += 8; return;
}

void f_005dfd45(void) /* FUN_005dfd45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dfd45);
    /* 005dfd45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd46: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfd48: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dfd4b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005dfd4e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfd51: mov dword ptr [eax], 0x63bbbc */ W32((u32)(r_eax), 0x63bbbcu);
    /* 005dfd57: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfd5a: call 0x5e0a10 */ r_esp -= 4; W32(r_esp, 0x5dfd5fu); f_005e0a10();
    /* 005dfd5f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfd62: call 0x5e0720 */ r_esp -= 4; W32(r_esp, 0x5dfd67u); f_005e0720();
    /* 005dfd67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfd69: je 0x5dfd93 */ if (fZ) goto L_005dfd93;
L_005dfd6b:; BB(0x005dfd6b);
    /* 005dfd6b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005dfd71: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005dfd74: call 0x5e5f8e */ r_esp -= 4; W32(r_esp, 0x5dfd79u); f_005e5f8e();
    /* 005dfd79: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfd7c: jne 0x5dfd93 */ if (!fZ) goto L_005dfd93;
L_005dfd7e:; BB(0x005dfd7e);
    /* 005dfd7e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfd81: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005dfd84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd85: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005dfd8b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005dfd8e: call 0x5e5f37 */ r_esp -= 4; W32(r_esp, 0x5dfd93u); f_005e5f37();
L_005dfd93:; BB(0x005dfd93);
    /* 005dfd93: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfd96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd97: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005dfd9c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005dfd9f: call 0x5e5f1b */ r_esp -= 4; W32(r_esp, 0x5dfda4u); f_005e5f1b();
    /* 005dfda4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfda7: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005dfdaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdab: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfdae: call 0x5dfec7 */ r_esp -= 4; W32(r_esp, 0x5dfdb3u); f_005dfec7();
L_005dfdb3:; BB(0x005dfdb3);
    /* 005dfdb3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfdb6: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfdb9: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dfdbeu); f_005dd4d2();
    /* 005dfdbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfdc0: je 0x5dfdf8 */ if (fZ) goto L_005dfdf8;
L_005dfdc2:; BB(0x005dfdc2);
    /* 005dfdc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdc4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfdc7: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfdca: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dfdcfu); f_005dd560();
    /* 005dfdcf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005dfdd2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dfdd5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dfdd8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfddc: je 0x5dfdef */ if (fZ) goto L_005dfdef;
L_005dfdde:; BB(0x005dfdde);
    /* 005dfdde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfde0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfde3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dfde5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfde8: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5dfdeau); call_ind(t); }
    /* 005dfdea: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dfded: jmp 0x5dfdf6 */ goto L_005dfdf6;
L_005dfdef:; BB(0x005dfdef);
    /* 005dfdef: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005dfdf6:; BB(0x005dfdf6);
    /* 005dfdf6: jmp 0x5dfdb3 */ goto L_005dfdb3;
L_005dfdf8:; BB(0x005dfdf8);
    /* 005dfdf8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfdfb: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfdfe: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dfe03u); f_005dd4d2();
    /* 005dfe03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfe05: je 0x5dfe3d */ if (fZ) goto L_005dfe3d;
L_005dfe07:; BB(0x005dfe07);
    /* 005dfe07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe09: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfe0c: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfe0f: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dfe14u); f_005dd560();
    /* 005dfe14: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dfe17: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dfe1a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005dfe1d: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfe21: je 0x5dfe34 */ if (fZ) goto L_005dfe34;
L_005dfe23:; BB(0x005dfe23);
    /* 005dfe23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfe28: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dfe2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfe2d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5dfe2fu); call_ind(t); }
    /* 005dfe2f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005dfe32: jmp 0x5dfe3b */ goto L_005dfe3b;
L_005dfe34:; BB(0x005dfe34);
    /* 005dfe34: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dfe3b:; BB(0x005dfe3b);
    /* 005dfe3b: jmp 0x5dfdf8 */ goto L_005dfdf8;
L_005dfe3d:; BB(0x005dfe3d);
    /* 005dfe3d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfe40: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005dfe43: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dfe46: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dfe49: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005dfe4c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfe50: je 0x5dfe63 */ if (fZ) goto L_005dfe63;
L_005dfe52:; BB(0x005dfe52);
    /* 005dfe52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dfe57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dfe59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dfe5c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5dfe5eu); call_ind(t); }
    /* 005dfe5e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005dfe61: jmp 0x5dfe6a */ goto L_005dfe6a;
L_005dfe63:; BB(0x005dfe63);
    /* 005dfe63: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005dfe6a:; BB(0x005dfe6a);
    /* 005dfe6a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfe6d: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfe70: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x5dfe75u); f_005dd2d3();
    /* 005dfe75: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfe78: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfe7b: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x5dfe80u); f_005dd2d3();
    /* 005dfe80: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfe83: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5dfe88u); f_005dfc0f();
    /* 005dfe88: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfe8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfe8b: ret  */ FN_RET(0x005dfd45); r_esp += 4; return;
}

void f_005dfe8c(void) /* FUN_005dfe8c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dfe8c);
    /* 005dfe8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe8d: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfe8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe90: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dfe93: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dfe96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfe9a: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfe9d: call 0x5dd503 */ r_esp -= 4; W32(r_esp, 0x5dfea2u); f_005dd503();
    /* 005dfea2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfea4: jne 0x5dfec1 */ if (!fZ) goto L_005dfec1;
L_005dfea6:; BB(0x005dfea6);
    /* 005dfea6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfea9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfeaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfead: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfeb0: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x5dfeb5u); f_005dd425();
    /* 005dfeb5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfeb8: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dfebb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dfebe: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
L_005dfec1:; BB(0x005dfec1);
    /* 005dfec1: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfec3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfec4: ret 4 */ FN_RET(0x005dfe8c); r_esp += 8; return;
}

void f_005dfec7(void) /* FUN_005dfec7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dfec7);
    /* 005dfec7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfec8: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfeca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfecb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dfece: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dfed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfed2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfed5: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfed8: call 0x5dd503 */ r_esp -= 4; W32(r_esp, 0x5dfeddu); f_005dd503();
    /* 005dfedd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfedf: je 0x5dfefa */ if (fZ) goto L_005dfefa;
L_005dfee1:; BB(0x005dfee1);
    /* 005dfee1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfee4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfee5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dfee8: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfeeb: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5dfef0u); f_005dd469();
    /* 005dfef0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dfef3: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
L_005dfefa:; BB(0x005dfefa);
    /* 005dfefa: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfefc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfefd: ret 4 */ FN_RET(0x005dfec7); r_esp += 8; return;
}

void f_005dff00(void) /* FUN_005dff00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dff00);
    /* 005dff00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dff01: mov ebp, esp */ r_ebp = r_esp;
    /* 005dff03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dff04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dff07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dff0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dff0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dff0e: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dff11: call 0x5dd503 */ r_esp -= 4; W32(r_esp, 0x5dff16u); f_005dd503();
    /* 005dff16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dff18: jne 0x5dff29 */ if (!fZ) goto L_005dff29;
L_005dff1a:; BB(0x005dff1a);
    /* 005dff1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dff1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dff1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dff21: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dff24: call 0x5dd3ac */ r_esp -= 4; W32(r_esp, 0x5dff29u); f_005dd3ac();
L_005dff29:; BB(0x005dff29);
    /* 005dff29: mov esp, ebp */ r_esp = r_ebp;
    /* 005dff2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dff2c: ret 4 */ FN_RET(0x005dff00); r_esp += 8; return;
}

void f_005dff2f(void) /* FUN_005dff2f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dff2f);
    /* 005dff2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dff30: mov ebp, esp */ r_ebp = r_esp;
    /* 005dff32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dff33: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dff36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dff39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dff3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dff3d: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dff40: call 0x5dd503 */ r_esp -= 4; W32(r_esp, 0x5dff45u); f_005dd503();
    /* 005dff45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dff47: je 0x5dff58 */ if (fZ) goto L_005dff58;
L_005dff49:; BB(0x005dff49);
    /* 005dff49: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dff4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dff4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dff50: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dff53: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5dff58u); f_005dd469();
L_005dff58:; BB(0x005dff58);
    /* 005dff58: mov esp, ebp */ r_esp = r_ebp;
    /* 005dff5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dff5b: ret 4 */ FN_RET(0x005dff2f); r_esp += 8; return;
}

void f_005dff5e(void) /* FUN_005dff5e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dff5e);
    /* 005dff5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dff5f: mov ebp, esp */ r_ebp = r_esp;
    /* 005dff61: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dff64: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dff67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dff6a: cmp dword ptr [eax + 0x18], 3 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dff6e: jne 0x5dff88 */ if (!fZ) goto L_005dff88;
L_005dff70:; BB(0x005dff70);
    /* 005dff70: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dff73: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dff76: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005dff79: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 005dff7c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dff7f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dff82: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005dff85: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
L_005dff88:; BB(0x005dff88);
    /* 005dff88: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dff8b: call 0x5e078a */ r_esp -= 4; W32(r_esp, 0x5dff90u); f_005e078a();
    /* 005dff90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dff92: je 0x5dff9b */ if (fZ) goto L_005dff9b;
L_005dff94:; BB(0x005dff94);
    /* 005dff94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dff96: jmp 0x5e01ed */ goto L_005e01ed;
L_005dff9b:; BB(0x005dff9b);
    /* 005dff9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dff9e: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dffa2: je 0x5dffb9 */ if (fZ) goto L_005dffb9;
L_005dffa4:; BB(0x005dffa4);
    /* 005dffa4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dffa7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dffa8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dffab: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005dffae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dffb1: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005dffb4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dffb6: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5dffb9u); call_ind(t); }
L_005dffb9:; BB(0x005dffb9);
    /* 005dffb9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005dffc0: jmp 0x5dffcb */ goto L_005dffcb;
L_005dffc2:; BB(0x005dffc2);
    /* 005dffc2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dffc5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dffc8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005dffcb:; BB(0x005dffcb);
    /* 005dffcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dffce: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dffd1: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5dffd6u); f_005dd4d2();
    /* 005dffd6: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dffd9: jge 0x5dfffe */ if ((fS==fO)) goto L_005dfffe;
L_005dffdb:; BB(0x005dffdb);
    /* 005dffdb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dffde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dffdf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dffe2: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dffe5: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5dffeau); f_005dd560();
    /* 005dffea: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dffed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dfff0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfff1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dfff4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dfff6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dfff9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5dfffcu); call_ind(t); }
    /* 005dfffc: jmp 0x5dffc2 */ goto L_005dffc2;
L_005dfffe:; BB(0x005dfffe);
    /* 005dfffe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0001: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005e0004: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e0007: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e000b: je 0x5e0026 */ if (fZ) goto L_005e0026;
L_005e000d:; BB(0x005e000d);
    /* 005e000d: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0011: je 0x5e01bc */ if (fZ) goto L_005e01bc;
L_005e0017:; BB(0x005e0017);
    /* 005e0017: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e001b: je 0x5e00f7 */ if (fZ) goto L_005e00f7;
L_005e0021:; BB(0x005e0021);
    /* 005e0021: jmp 0x5e01eb */ goto L_005e01eb;
L_005e0026:; BB(0x005e0026);
    /* 005e0026: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0028: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005e002e: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e0031: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0034: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e0039u); f_005dd560();
    /* 005e0039: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e003c: je 0x5e0069 */ if (fZ) goto L_005e0069;
L_005e003e:; BB(0x005e003e);
    /* 005e003e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0042: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e0048: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e004b: call 0x5e5f1b */ r_esp -= 4; W32(r_esp, 0x5e0050u); f_005e5f1b();
    /* 005e0050: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0053: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0054: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005e0059: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e005c: call 0x5e5eff */ r_esp -= 4; W32(r_esp, 0x5e0061u); f_005e5eff();
    /* 005e0061: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0064: call 0x5e0a10 */ r_esp -= 4; W32(r_esp, 0x5e0069u); f_005e0a10();
L_005e0069:; BB(0x005e0069);
    /* 005e0069: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e006c: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0070: je 0x5e0077 */ if (fZ) goto L_005e0077;
L_005e0072:; BB(0x005e0072);
    /* 005e0072: jmp 0x5e01eb */ goto L_005e01eb;
L_005e0077:; BB(0x005e0077);
    /* 005e0077: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e007a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e007d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005e0080: cmp ecx, dword ptr [eax + 0x70] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x70u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0083: jg 0x5e008e */ if ((!fZ&&fS==fO)) goto L_005e008e;
L_005e0085:; BB(0x005e0085);
    /* 005e0085: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e0088: cmp dword ptr [edx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e008c: jge 0x5e0093 */ if ((fS==fO)) goto L_005e0093;
L_005e008e:; BB(0x005e008e);
    /* 005e008e: jmp 0x5e01eb */ goto L_005e01eb;
L_005e0093:; BB(0x005e0093);
    /* 005e0093: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0096: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5e009bu); f_005e06f2();
    /* 005e009b: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e009e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e00a1: cmp dword ptr [ecx + 0xc], eax */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e00a4: jg 0x5e00af */ if ((!fZ&&fS==fO)) goto L_005e00af;
L_005e00a6:; BB(0x005e00a6);
    /* 005e00a6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e00a9: cmp dword ptr [edx + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e00ad: jge 0x5e00b4 */ if ((fS==fO)) goto L_005e00b4;
L_005e00af:; BB(0x005e00af);
    /* 005e00af: jmp 0x5e01eb */ goto L_005e01eb;
L_005e00b4:; BB(0x005e00b4);
    /* 005e00b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e00b7: mov dword ptr [eax + 0x74], 1 */ W32((u32)(r_eax+0x74u), 0x1u);
    /* 005e00be: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e00c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e00c4: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005e00c7: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 005e00ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e00cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e00d0: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e00d3: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 005e00d6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e00d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e00da: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005e00e0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e00e3: call 0x5e6094 */ r_esp -= 4; W32(r_esp, 0x5e00e8u); f_005e6094();
    /* 005e00e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e00eb: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 005e00f2: jmp 0x5e01eb */ goto L_005e01eb;
L_005e00f7:; BB(0x005e00f7);
    /* 005e00f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e00fa: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e00fe: je 0x5e01ba */ if (fZ) goto L_005e01ba;
L_005e0104:; BB(0x005e0104);
    /* 005e0104: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0107: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e010cu); f_005e06d0();
    /* 005e010c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e010f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0112: mov edx, dword ptr [edx + 0x78] */ r_edx = R32((u32)(r_edx+0x78u));
    /* 005e0115: sub edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e0118: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e011a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e011d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0120: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e0125u); f_005e06e1();
    /* 005e0125: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0128: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e012b: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 005e012e: sub ecx, dword ptr [edx + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0131: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e0133: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e0136: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e013a: jge 0x5e0143 */ if ((fS==fO)) goto L_005e0143;
L_005e013c:; BB(0x005e013c);
    /* 005e013c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005e0143:; BB(0x005e0143);
    /* 005e0143: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0147: jge 0x5e0150 */ if ((fS==fO)) goto L_005e0150;
L_005e0149:; BB(0x005e0149);
    /* 005e0149: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005e0150:; BB(0x005e0150);
    /* 005e0150: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0153: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5e0158u); f_005e06f2();
    /* 005e0158: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e015b: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e015d: cmp edx, 0x27f */ {  u32 a = r_edx; u32 b = 0x27fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0163: jle 0x5e0177 */ if ((fZ||fS!=fO)) goto L_005e0177;
L_005e0165:; BB(0x005e0165);
    /* 005e0165: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0168: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5e016du); f_005e06f2();
    /* 005e016d: mov ecx, 0x27f */ r_ecx = 0x27fu;
    /* 005e0172: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e0177:; BB(0x005e0177);
    /* 005e0177: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e017a: call 0x5e0709 */ r_esp -= 4; W32(r_esp, 0x5e017fu); f_005e0709();
    /* 005e017f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0182: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e0184: cmp edx, 0x1df */ {  u32 a = r_edx; u32 b = 0x1dfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e018a: jle 0x5e019e */ if ((fZ||fS!=fO)) goto L_005e019e;
L_005e018c:; BB(0x005e018c);
    /* 005e018c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e018f: call 0x5e0709 */ r_esp -= 4; W32(r_esp, 0x5e0194u); f_005e0709();
    /* 005e0194: mov ecx, 0x1df */ r_ecx = 0x1dfu;
    /* 005e0199: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e019b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005e019e:; BB(0x005e019e);
    /* 005e019e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e01a0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e01a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e01a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e01a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e01a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e01ab: call 0x5e0663 */ r_esp -= 4; W32(r_esp, 0x5e01b0u); f_005e0663();
    /* 005e01b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e01b3: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_005e01ba:; BB(0x005e01ba);
    /* 005e01ba: jmp 0x5e01eb */ goto L_005e01eb;
L_005e01bc:; BB(0x005e01bc);
    /* 005e01bc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e01bf: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e01c3: jne 0x5e01c7 */ if (!fZ) goto L_005e01c7;
L_005e01c5:; BB(0x005e01c5);
    /* 005e01c5: jmp 0x5e01eb */ goto L_005e01eb;
L_005e01c7:; BB(0x005e01c7);
    /* 005e01c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e01ca: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 005e01d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e01d3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e01d9: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e01dc: call 0x5e6094 */ r_esp -= 4; W32(r_esp, 0x5e01e1u); f_005e6094();
    /* 005e01e1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e01e4: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
L_005e01eb:; BB(0x005e01eb);
    /* 005e01eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e01ed:; BB(0x005e01ed);
    /* 005e01ed: mov esp, ebp */ r_esp = r_ebp;
    /* 005e01ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e01f0: ret 4 */ FN_RET(0x005dff5e); r_esp += 8; return;
}

void f_005e01f3(void) /* FUN_005e01f3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e01f3);
    /* 005e01f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e01f4: mov ebp, esp */ r_ebp = r_esp;
    /* 005e01f6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e01f9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e01fc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e0203: jmp 0x5e020e */ goto L_005e020e;
L_005e0205:; BB(0x005e0205);
    /* 005e0205: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0208: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e020b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e020e:; BB(0x005e020e);
    /* 005e020e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0211: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0214: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e0219u); f_005dd4d2();
    /* 005e0219: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e021c: jge 0x5e0243 */ if ((fS==fO)) goto L_005e0243;
L_005e021e:; BB(0x005e021e);
    /* 005e021e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0221: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0222: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0225: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0228: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e022du); f_005dd560();
    /* 005e022d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e0230: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0234: je 0x5e0241 */ if (fZ) goto L_005e0241;
L_005e0236:; BB(0x005e0236);
    /* 005e0236: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0239: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e023b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e023e: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5e0241u); call_ind(t); }
L_005e0241:; BB(0x005e0241);
    /* 005e0241: jmp 0x5e0205 */ goto L_005e0205;
L_005e0243:; BB(0x005e0243);
    /* 005e0243: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0245: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0246: ret  */ FN_RET(0x005e01f3); r_esp += 4; return;
}

void f_005e0247(void) /* FUN_005e0247 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0247);
    /* 005e0247: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0248: mov ebp, esp */ r_ebp = r_esp;
    /* 005e024a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e024d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e0250: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0253: call 0x5e078a */ r_esp -= 4; W32(r_esp, 0x5e0258u); f_005e078a();
    /* 005e0258: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e025a: je 0x5e0261 */ if (fZ) goto L_005e0261;
L_005e025c:; BB(0x005e025c);
    /* 005e025c: jmp 0x5e0308 */ goto L_005e0308;
L_005e0261:; BB(0x005e0261);
    /* 005e0261: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0264: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0268: je 0x5e0293 */ if (fZ) goto L_005e0293;
L_005e026a:; BB(0x005e026a);
    /* 005e026a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e026d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0270: mov edx, esp */ r_edx = r_esp;
    /* 005e0272: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e0274: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005e0276: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005e0279: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005e027c: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005e027f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005e0282: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005e0285: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005e0288: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e028b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e028d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0290: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x5e0293u); call_ind(t); }
L_005e0293:; BB(0x005e0293);
    /* 005e0293: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0296: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e029a: je 0x5e02b1 */ if (fZ) goto L_005e02b1;
L_005e029c:; BB(0x005e029c);
    /* 005e029c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e029f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e02a0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e02a3: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e02a6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e02a9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e02ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e02ae: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x5e02b1u); call_ind(t); }
L_005e02b1:; BB(0x005e02b1);
    /* 005e02b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e02b4: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e02b7: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e02bcu); f_005dd4d2();
    /* 005e02bc: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e02bf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e02c2: jmp 0x5e02cd */ goto L_005e02cd;
L_005e02c4:; BB(0x005e02c4);
    /* 005e02c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e02c7: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e02ca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e02cd:; BB(0x005e02cd);
    /* 005e02cd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e02d1: jl 0x5e0308 */ if ((fS!=fO)) goto L_005e0308;
L_005e02d3:; BB(0x005e02d3);
    /* 005e02d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e02d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e02d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e02da: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e02dd: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e02e2u); f_005dd560();
    /* 005e02e2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e02e5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e02e9: je 0x5e0306 */ if (fZ) goto L_005e0306;
L_005e02eb:; BB(0x005e02eb);
    /* 005e02eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e02ee: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5e02f3u); f_005d9690();
    /* 005e02f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e02f5: je 0x5e0306 */ if (fZ) goto L_005e0306;
L_005e02f7:; BB(0x005e02f7);
    /* 005e02f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e02fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e02fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e02fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0300: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0303: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x5e0306u); call_ind(t); }
L_005e0306:; BB(0x005e0306);
    /* 005e0306: jmp 0x5e02c4 */ goto L_005e02c4;
L_005e0308:; BB(0x005e0308);
    /* 005e0308: mov esp, ebp */ r_esp = r_ebp;
    /* 005e030a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e030b: ret 4 */ FN_RET(0x005e0247); r_esp += 8; return;
}

void f_005e030e(void) /* FUN_005e030e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e030e);
    /* 005e030e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e030f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0311: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0312: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e0315: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e031a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e031d: call 0x6201dc */ r_esp -= 4; W32(r_esp, 0x5e0322u); f_006201dc();
    /* 005e0322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0324: jne 0x5e033d */ if (!fZ) goto L_005e033d;
L_005e0326:; BB(0x005e0326);
    /* 005e0326: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e032c: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005e032f: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e0335: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e0338: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e033a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5e033du); call_ind(t); }
L_005e033d:; BB(0x005e033d);
    /* 005e033d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0341: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e0347: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e034a: call 0x5e5f1b */ r_esp -= 4; W32(r_esp, 0x5e034fu); f_005e5f1b();
    /* 005e034f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0352: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0353: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005e0358: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e035b: call 0x5e5eff */ r_esp -= 4; W32(r_esp, 0x5e0360u); f_005e5eff();
    /* 005e0360: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0363: call 0x5e0720 */ r_esp -= 4; W32(r_esp, 0x5e0368u); f_005e0720();
    /* 005e0368: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e036a: je 0x5e03b6 */ if (fZ) goto L_005e03b6;
L_005e036c:; BB(0x005e036c);
    /* 005e036c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e036f: call 0x5e078a */ r_esp -= 4; W32(r_esp, 0x5e0374u); f_005e078a();
    /* 005e0374: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0376: je 0x5e03b6 */ if (fZ) goto L_005e03b6;
L_005e0378:; BB(0x005e0378);
    /* 005e0378: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e037b: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e037f: jne 0x5e0395 */ if (!fZ) goto L_005e0395;
L_005e0381:; BB(0x005e0381);
    /* 005e0381: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005e0387: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e038a: call 0x5e5f8e */ r_esp -= 4; W32(r_esp, 0x5e038fu); f_005e5f8e();
    /* 005e038f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0392: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_005e0395:; BB(0x005e0395);
    /* 005e0395: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0398: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0399: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005e039e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e03a1: call 0x5e5f37 */ r_esp -= 4; W32(r_esp, 0x5e03a6u); f_005e5f37();
    /* 005e03a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e03a8: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e03ae: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005e03b1: call 0x61fcc7 */ r_esp -= 4; W32(r_esp, 0x5e03b6u); f_0061fcc7();
L_005e03b6:; BB(0x005e03b6);
    /* 005e03b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e03b9: mov dword ptr [edx + 0x40], 1 */ W32((u32)(r_edx+0x40u), 0x1u);
    /* 005e03c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e03c3: call 0x5e0a10 */ r_esp -= 4; W32(r_esp, 0x5e03c8u); f_005e0a10();
    /* 005e03c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005e03ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e03cb: ret  */ FN_RET(0x005e030e); r_esp += 4; return;
}

void f_005e03cc(void) /* FUN_005e03cc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e03cc);
    /* 005e03cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e03cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005e03cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e03d0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e03d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e03d6: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x5e03dbu); f_005e07a3();
    /* 005e03db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e03dd: je 0x5e0401 */ if (fZ) goto L_005e0401;
L_005e03df:; BB(0x005e03df);
    /* 005e03df: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005e03e4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e03e7: call 0x5e60aa */ r_esp -= 4; W32(r_esp, 0x5e03ecu); f_005e60aa();
    /* 005e03ec: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e03ef: jne 0x5e0401 */ if (!fZ) goto L_005e0401;
L_005e03f1:; BB(0x005e03f1);
    /* 005e03f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e03f3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e03f9: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e03fc: call 0x5e6094 */ r_esp -= 4; W32(r_esp, 0x5e0401u); f_005e6094();
L_005e0401:; BB(0x005e0401);
    /* 005e0401: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0404: call 0x5e0720 */ r_esp -= 4; W32(r_esp, 0x5e0409u); f_005e0720();
    /* 005e0409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e040b: je 0x5e044b */ if (fZ) goto L_005e044b;
L_005e040d:; BB(0x005e040d);
    /* 005e040d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0410: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x5e0415u); f_005e07a3();
    /* 005e0415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0417: je 0x5e044b */ if (fZ) goto L_005e044b;
L_005e0419:; BB(0x005e0419);
    /* 005e0419: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005e041f: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e0422: call 0x5e5f8e */ r_esp -= 4; W32(r_esp, 0x5e0427u); f_005e5f8e();
    /* 005e0427: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e042a: jne 0x5e0441 */ if (!fZ) goto L_005e0441;
L_005e042c:; BB(0x005e042c);
    /* 005e042c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e042f: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005e0432: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0433: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005e0439: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e043c: call 0x5e5f37 */ r_esp -= 4; W32(r_esp, 0x5e0441u); f_005e5f37();
L_005e0441:; BB(0x005e0441);
    /* 005e0441: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0444: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
L_005e044b:; BB(0x005e044b);
    /* 005e044b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e044e: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 005e0455: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0458: call 0x5e0a10 */ r_esp -= 4; W32(r_esp, 0x5e045du); f_005e0a10();
    /* 005e045d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e045f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0460: ret  */ FN_RET(0x005e03cc); r_esp += 4; return;
}

void f_005e0461(void) /* FUN_005e0461 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0461);
    /* 005e0461: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0462: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0464: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0465: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e0468: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e046b: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e046e: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0471: jne 0x5e047e */ if (!fZ) goto L_005e047e;
L_005e0473:; BB(0x005e0473);
    /* 005e0473: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0476: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e0479: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e047c: je 0x5e0498 */ if (fZ) goto L_005e0498;
L_005e047e:; BB(0x005e047e);
    /* 005e047e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0481: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e0484: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 005e0487: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e048a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e048d: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 005e0490: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0493: call 0x5e049e */ r_esp -= 4; W32(r_esp, 0x5e0498u); f_005e049e();
L_005e0498:; BB(0x005e0498);
    /* 005e0498: mov esp, ebp */ r_esp = r_ebp;
    /* 005e049a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e049b: ret 8 */ FN_RET(0x005e0461); r_esp += 12; return;
}

void f_005e049e(void) /* FUN_005e049e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e049e);
    /* 005e049e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e049f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e04a1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e04a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e04a5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e04a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e04ab: call 0x5e0a10 */ r_esp -= 4; W32(r_esp, 0x5e04b0u); f_005e0a10();
    /* 005e04b0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e04b3: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e04b7: jne 0x5e0531 */ if (!fZ) goto L_005e0531;
L_005e04b9:; BB(0x005e04b9);
    /* 005e04b9: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e04bb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e04c0u); f_0048ab58();
    /* 005e04c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e04c3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e04c6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e04ca: je 0x5e04d9 */ if (fZ) goto L_005e04d9;
L_005e04cc:; BB(0x005e04cc);
    /* 005e04cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e04cf: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5e04d4u); f_005e9d30();
    /* 005e04d4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e04d7: jmp 0x5e04e0 */ goto L_005e04e0;
L_005e04d9:; BB(0x005e04d9);
    /* 005e04d9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005e04e0:; BB(0x005e04e0);
    /* 005e04e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e04e3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e04e6: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 005e04e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e04ec: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e04ef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e04f2: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e04f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e04f7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e04fau); call_ind(t); }
    /* 005e04fa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e04fd: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e0500: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0503: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005e0506: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0509: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e050c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e050f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e0512: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0514: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e0517u); call_ind(t); }
    /* 005e0517: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0519: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e051c: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e051f: call 0x5ea130 */ r_esp -= 4; W32(r_esp, 0x5e0524u); f_005ea130();
    /* 005e0524: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0526: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0529: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005e052c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e0531u); f_005ea1cf();
L_005e0531:; BB(0x005e0531);
    /* 005e0531: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0534: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005e0537: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0538: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e053b: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005e053e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e0543u); f_005ea0c3();
    /* 005e0543: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0545: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0548: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005e054b: call 0x5ea130 */ r_esp -= 4; W32(r_esp, 0x5e0550u); f_005ea130();
    /* 005e0550: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0553: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005e0556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0557: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e055a: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005e055d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e0562u); f_005ea1cf();
    /* 005e0562: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0565: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e0568: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x5e056du); f_005ea54c();
    /* 005e056d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e056f: jne 0x5e0584 */ if (!fZ) goto L_005e0584;
L_005e0571:; BB(0x005e0571);
    /* 005e0571: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0574: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005e0577: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x5e057cu); f_005ea57d();
    /* 005e057c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e057e: je 0x5e0615 */ if (fZ) goto L_005e0615;
L_005e0584:; BB(0x005e0584);
    /* 005e0584: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0587: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005e058a: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x5e058fu); f_005ea57d();
    /* 005e058f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e0591: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0592: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0595: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e0598: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x5e059du); f_005ea54c();
    /* 005e059d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e059f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e05a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05a3: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005e05a6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05a9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e05ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e05ae: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e05b1u); call_ind(t); }
    /* 005e05b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05b4: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e05b7: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x5e05bcu); f_005ea54c();
    /* 005e05bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05bf: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005e05c2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05c5: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005e05c8: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x5e05cdu); f_005ea57d();
    /* 005e05cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05d0: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005e05d3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05d6: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005e05d9: call 0x5ea54c */ r_esp -= 4; W32(r_esp, 0x5e05deu); f_005ea54c();
    /* 005e05de: mov esi, eax */ r_esi = r_eax;
    /* 005e05e0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05e3: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e05e6: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e05ebu); f_005d98c3();
    /* 005e05eb: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e05ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05f0: mov dword ptr [ecx + 0x14], esi */ W32((u32)(r_ecx+0x14u), r_esi);
    /* 005e05f3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05f6: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005e05f9: call 0x5ea57d */ r_esp -= 4; W32(r_esp, 0x5e05feu); f_005ea57d();
    /* 005e05fe: mov esi, eax */ r_esi = r_eax;
    /* 005e0600: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0603: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e0606: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e060bu); f_005d98da();
    /* 005e060b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e060d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0610: mov dword ptr [ecx + 0x10], esi */ W32((u32)(r_ecx+0x10u), r_esi);
    /* 005e0613: jmp 0x5e0647 */ goto L_005e0647;
L_005e0615:; BB(0x005e0615);
    /* 005e0615: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0618: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005e061b: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e0620u); f_005d98c3();
    /* 005e0620: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0623: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e0626: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e0628: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e062b: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 005e062e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0631: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005e0634: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e0639u); f_005d98da();
    /* 005e0639: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e063c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e063f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0641: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0644: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
L_005e0647:; BB(0x005e0647);
    /* 005e0647: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e064a: call 0x5e0a10 */ r_esp -= 4; W32(r_esp, 0x5e064fu); f_005e0a10();
    /* 005e064f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0652: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e0655: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0656: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0659: call 0x5dfec7 */ r_esp -= 4; W32(r_esp, 0x5e065eu); f_005dfec7();
    /* 005e065e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e065f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0661: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0662: ret  */ FN_RET(0x005e049e); r_esp += 4; return;
}

void f_005e0663(void) /* FUN_005e0663 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0663);
    /* 005e0663: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0664: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0666: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0669: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e066c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e066f: call 0x5e0a10 */ r_esp -= 4; W32(r_esp, 0x5e0674u); f_005e0a10();
    /* 005e0674: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0677: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e067a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005e067d: sub edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e0680: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e0683: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0686: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0689: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005e068c: sub edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e068f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e0692: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0695: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0698: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005e069b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e069e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e06a1: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005e06a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e06a7: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e06aa: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e06ad: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e06b0: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 005e06b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e06b6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e06b9: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e06bc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e06bf: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 005e06c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e06c5: call 0x5e0a10 */ r_esp -= 4; W32(r_esp, 0x5e06cau); f_005e0a10();
    /* 005e06ca: mov esp, ebp */ r_esp = r_ebp;
    /* 005e06cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e06cd: ret 0xc */ FN_RET(0x005e0663); r_esp += 16; return;
}

void f_005e06d0(void) /* FUN_005e06d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e06d0);
    /* 005e06d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e06d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e06d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e06d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e06d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e06da: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005e06dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005e06df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e06e0: ret  */ FN_RET(0x005e06d0); r_esp += 4; return;
}

void f_005e06e1(void) /* FUN_005e06e1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e06e1);
    /* 005e06e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e06e2: mov ebp, esp */ r_ebp = r_esp;
    /* 005e06e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e06e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e06e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e06eb: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005e06ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005e06f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e06f1: ret  */ FN_RET(0x005e06e1); r_esp += 4; return;
}

void f_005e06f2(void) /* FUN_005e06f2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e06f2);
    /* 005e06f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e06f3: mov ebp, esp */ r_ebp = r_esp;
    /* 005e06f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e06f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e06f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e06fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e06ff: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 005e0702: sub eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e0705: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0707: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0708: ret  */ FN_RET(0x005e06f2); r_esp += 4; return;
}

void f_005e0709(void) /* FUN_005e0709 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0709);
    /* 005e0709: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e070a: mov ebp, esp */ r_ebp = r_esp;
    /* 005e070c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e070d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e0710: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0713: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0716: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 005e0719: sub eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e071c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e071e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e071f: ret  */ FN_RET(0x005e0709); r_esp += 4; return;
}

void f_005e0720(void) /* FUN_005e0720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0720);
    /* 005e0720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0721: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e0727: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e072a: mov eax, dword ptr [eax + 0x50] */ r_eax = R32((u32)(r_eax+0x50u));
    /* 005e072d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e072f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0730: ret  */ FN_RET(0x005e0720); r_esp += 4; return;
}

void f_005e0731(void) /* FUN_005e0731 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0731);
    /* 005e0731: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0732: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0734: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0735: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e0738: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e073b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e073e: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
    /* 005e0741: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0744: ret 4 */ FN_RET(0x005e0731); r_esp += 8; return;
}

void f_005e0747(void) /* FUN_005e0747 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0747);
    /* 005e0747: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0748: mov ebp, esp */ r_ebp = r_esp;
    /* 005e074a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e074b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e074e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0751: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0754: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 005e0757: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e075a: cmp dword ptr [edx + 0x54], 0 */ {  u32 a = R32((u32)(r_edx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e075e: je 0x5e0774 */ if (fZ) goto L_005e0774;
L_005e0760:; BB(0x005e0760);
    /* 005e0760: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0763: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0764: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e076a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e076d: call 0x5e6094 */ r_esp -= 4; W32(r_esp, 0x5e0772u); f_005e6094();
    /* 005e0772: jmp 0x5e0784 */ goto L_005e0784;
L_005e0774:; BB(0x005e0774);
    /* 005e0774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0776: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005e077c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e077f: call 0x5e6094 */ r_esp -= 4; W32(r_esp, 0x5e0784u); f_005e6094();
L_005e0784:; BB(0x005e0784);
    /* 005e0784: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0786: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0787: ret 4 */ FN_RET(0x005e0747); r_esp += 8; return;
}

void f_005e078a(void) /* FUN_005e078a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e078a);
    /* 005e078a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e078b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e078d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e078e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e0791: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0794: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0796: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e079a: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005e079d: mov eax, ecx */ r_eax = r_ecx;
    /* 005e079f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e07a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e07a2: ret  */ FN_RET(0x005e078a); r_esp += 4; return;
}

void f_005e07a3(void) /* FUN_005e07a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e07a3);
    /* 005e07a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e07a4: mov ebp, esp */ r_ebp = r_esp;
    /* 005e07a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e07a7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e07aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e07ad: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005e07b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e07b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e07b3: ret  */ FN_RET(0x005e07a3); r_esp += 4; return;
}

void f_005e07b4(void) /* FUN_005e07b4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e07b4);
    /* 005e07b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e07b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005e07b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e07b8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e07bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e07be: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 005e07c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005e07c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e07c4: ret  */ FN_RET(0x005e07b4); r_esp += 4; return;
}

void f_005e07c5(void) /* FUN_005e07c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e07c5);
    /* 005e07c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e07c6: mov ebp, esp */ r_ebp = r_esp;
    /* 005e07c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e07c9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e07cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e07cf: mov eax, dword ptr [eax + 0x5c] */ r_eax = R32((u32)(r_eax+0x5cu));
    /* 005e07d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e07d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e07d5: ret  */ FN_RET(0x005e07c5); r_esp += 4; return;
}

void f_005e07d6(void) /* FUN_005e07d6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e07d6);
    /* 005e07d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e07d7: mov ebp, esp */ r_ebp = r_esp;
    /* 005e07d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e07da: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e07dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e07e0: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005e07e3: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e07e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e07e9: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 005e07ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e07ef: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e07f2: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e07f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e07f8: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 005e07fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e07fe: call 0x5e0a10 */ r_esp -= 4; W32(r_esp, 0x5e0803u); f_005e0a10();
    /* 005e0803: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0805: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0806: ret 8 */ FN_RET(0x005e07d6); r_esp += 12; return;
}

void f_005e0809(void) /* FUN_005e0809 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0809);
    /* 005e0809: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e080a: mov ebp, esp */ r_ebp = r_esp;
    /* 005e080c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e080d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e0810: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0813: mov dword ptr [eax + 0x68], 1 */ W32((u32)(r_eax+0x68u), 0x1u);
    /* 005e081a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e081d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e0820: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 005e0823: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0826: mov byte ptr [eax + 0x67], 0xff */ W8((u32)(r_eax+0x67u), 0xffu);
    /* 005e082a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e082c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e082d: ret 4 */ FN_RET(0x005e0809); r_esp += 8; return;
}

void f_005e0830(void) /* FUN_005e0830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0830);
    /* 005e0830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0831: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e0837: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e083a: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 005e0841: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0843: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0844: ret  */ FN_RET(0x005e0830); r_esp += 4; return;
}

void f_005e0845(void) /* FUN_005e0845 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0845);
    /* 005e0845: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0846: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0848: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0849: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e084c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e084e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0851: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005e0854: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0855: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005e0858: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0859: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e085c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e085d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e0860: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0861: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e0864: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0865: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e086a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e086d: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005e0870: call 0x45aad0 */ r_esp -= 4; W32(r_esp, 0x5e0875u); f_0045aad0();
    /* 005e0875: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0877: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0878: ret 0x10 */ FN_RET(0x005e0845); r_esp += 20; return;
}

void f_005e087b(void) /* FUN_005e087b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e087b);
    /* 005e087b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e087c: mov ebp, esp */ r_ebp = r_esp;
    /* 005e087e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0881: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e0884: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0887: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005e0889: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e088c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e088f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e0892: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e0895: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e0898: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005e089b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e089e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e08a1: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e08a6u); f_005e06e1();
    /* 005e08a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e08a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e08aa: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e08afu); f_005e06d0();
    /* 005e08af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e08b0: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005e08b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e08b4: call dword ptr [0x6331dc] */ { u32 t = R32((u32)(0x6331dcu)); r_esp -= 4; W32(r_esp, 0x5e08bau); call_ind(t); }
    /* 005e08ba: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005e08bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e08be: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e08c4: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005e08c7: call 0x61cf53 */ r_esp -= 4; W32(r_esp, 0x5e08ccu); f_0061cf53();
    /* 005e08cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005e08ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e08cf: ret 4 */ FN_RET(0x005e087b); r_esp += 8; return;
}

void f_005e08d2(void) /* FUN_005e08d2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e08d2);
    /* 005e08d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e08d3: mov ebp, esp */ r_ebp = r_esp;
    /* 005e08d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e08d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e08d9: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005e08dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e08dd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e08e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e08e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e08e4: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e08e9u); f_005e06e1();
    /* 005e08e9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e08ec: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e08ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e08ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e08f2: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e08f7u); f_005e06d0();
    /* 005e08f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e08fa: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e08fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e08fd: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e0903: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e0906: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e0909: call 0x45a974 */ r_esp -= 4; W32(r_esp, 0x5e090eu); f_0045a974();
    /* 005e090e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0910: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0911: ret 0x10 */ FN_RET(0x005e08d2); r_esp += 20; return;
}

void f_005e0914(void) /* FUN_005e0914 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0914);
    /* 005e0914: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0915: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0917: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0918: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e091b: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005e091e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e091f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005e0922: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0923: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0926: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e092bu); f_005e06e1();
    /* 005e092b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e092e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e0930: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0931: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0934: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e0939u); f_005e06d0();
    /* 005e0939: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e093c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e093e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e093f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0942: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e0947u); f_005e06d0();
    /* 005e0947: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e094a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e094c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e094d: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e0952: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e0955: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005e0958: call 0x45aa60 */ r_esp -= 4; W32(r_esp, 0x5e095du); f_0045aa60();
    /* 005e095d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e095f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0960: ret 0x14 */ FN_RET(0x005e0914); r_esp += 24; return;
}

void f_005e0963(void) /* FUN_005e0963 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0963);
    /* 005e0963: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0964: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0966: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0967: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e096a: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005e096d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e096e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005e0971: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0972: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0975: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e097au); f_005e06e1();
    /* 005e097a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e097d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e097f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0980: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0983: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e0988u); f_005e06e1();
    /* 005e0988: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e098b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e098d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e098e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0991: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e0996u); f_005e06d0();
    /* 005e0996: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e0999: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e099b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e099c: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e09a1: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e09a4: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005e09a7: call 0x45aa98 */ r_esp -= 4; W32(r_esp, 0x5e09acu); f_0045aa98();
    /* 005e09ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005e09ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e09af: ret 0x14 */ FN_RET(0x005e0963); r_esp += 24; return;
}

void f_005e09b2(void) /* FUN_005e09b2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e09b2);
    /* 005e09b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e09b3: mov ebp, esp */ r_ebp = r_esp;
    /* 005e09b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e09b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e09b9: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005e09bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e09bd: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005e09c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e09c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e09c4: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e09c9u); f_005e06e1();
    /* 005e09c9: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005e09cc: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e09ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e09cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e09d2: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e09d7u); f_005e06d0();
    /* 005e09d7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e09da: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e09dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e09dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e09e0: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e09e5u); f_005e06e1();
    /* 005e09e5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e09e8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e09ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e09eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e09ee: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e09f3u); f_005e06d0();
    /* 005e09f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e09f6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e09f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e09f9: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e09ff: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e0a02: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e0a05: call 0x45aad0 */ r_esp -= 4; W32(r_esp, 0x5e0a0au); f_0045aad0();
    /* 005e0a0a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0a0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0a0d: ret 0x18 */ FN_RET(0x005e09b2); r_esp += 28; return;
}

void f_005e0a10(void) /* FUN_005e0a10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0a10);
    /* 005e0a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a11: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0a13: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0a16: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e0a19: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0a1c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e0a1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a20: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0a23: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005e0a26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a27: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0a2a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e0a2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0a31: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005e0a34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a35: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005e0a38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a39: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5e0a3fu); call_ind(t); }
    /* 005e0a3f: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005e0a42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a43: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e0a49: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005e0a4c: call 0x61cf53 */ r_esp -= 4; W32(r_esp, 0x5e0a51u); f_0061cf53();
    /* 005e0a51: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0a53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0a54: ret  */ FN_RET(0x005e0a10); r_esp += 4; return;
}

void f_005e0a55(void) /* FUN_005e0a55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0a55);
    /* 005e0a55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a56: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0a58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a59: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e0a5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0a5f: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x5e0a64u); f_005e03cc();
    /* 005e0a64: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0a67: mov dword ptr [eax + 0x84], 1 */ W32((u32)(r_eax+0x84u), 0x1u);
    /* 005e0a71: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0a73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0a74: ret  */ FN_RET(0x005e0a55); r_esp += 4; return;
}

void f_005e0a75(void) /* FUN_005e0a75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0a75);
    /* 005e0a75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a76: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0a78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a79: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e0a7c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0a7f: mov eax, dword ptr [eax + 0x84] */ r_eax = R32((u32)(r_eax+0x84u));
    /* 005e0a85: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0a88: ret  */ FN_RET(0x005e0a75); r_esp += 4; return;
}

void f_005e0a89(void) /* FUN_005e0a89 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0a89);
    /* 005e0a89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a8a: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0a8c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0a8f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e0a92: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0a95: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0a99: je 0x5e0ab4 */ if (fZ) goto L_005e0ab4;
L_005e0a9b:; BB(0x005e0a9b);
    /* 005e0a9b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e0a9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a9f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e0aa2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0aa3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0aa6: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e0aa9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0aac: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e0aaf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0ab1: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x5e0ab4u); call_ind(t); }
L_005e0ab4:; BB(0x005e0ab4);
    /* 005e0ab4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0abb: jmp 0x5e0ac6 */ goto L_005e0ac6;
L_005e0abd:; BB(0x005e0abd);
    /* 005e0abd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0ac0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e0ac3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e0ac6:; BB(0x005e0ac6);
    /* 005e0ac6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0ac9: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0acc: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e0ad1u); f_005dd4d2();
    /* 005e0ad1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0ad4: jge 0x5e0b1a */ if ((fS==fO)) goto L_005e0b1a;
L_005e0ad6:; BB(0x005e0ad6);
    /* 005e0ad6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ad8: push 0x64c5b0 */ { u32 v = 0x64c5b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0add: push 0x64c598 */ { u32 v = 0x64c598u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ae2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ae4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0ae7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ae8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0aeb: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0aee: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e0af3u); f_005dd560();
    /* 005e0af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0af4: call 0x625a50 */ r_esp -= 4; W32(r_esp, 0x5e0af9u); f_00625a50();
    /* 005e0af9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0afc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e0aff: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0b03: je 0x5e0b18 */ if (fZ) goto L_005e0b18;
L_005e0b05:; BB(0x005e0b05);
    /* 005e0b05: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e0b08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b0d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0b10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e0b12: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0b15: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x5e0b18u); call_ind(t); }
L_005e0b18:; BB(0x005e0b18);
    /* 005e0b18: jmp 0x5e0abd */ goto L_005e0abd;
L_005e0b1a:; BB(0x005e0b1a);
    /* 005e0b1a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0b1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0b1d: ret 8 */ FN_RET(0x005e0a89); r_esp += 12; return;
}

void f_005e0b20(void) /* FUN_005e0b20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0b20);
    /* 005e0b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b21: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e0b27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0b2a: call 0x5dfd45 */ r_esp -= 4; W32(r_esp, 0x5e0b2fu); f_005dfd45();
    /* 005e0b2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0b32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e0b35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0b37: je 0x5e0b45 */ if (fZ) goto L_005e0b45;
L_005e0b39:; BB(0x005e0b39);
    /* 005e0b39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0b3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b3d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e0b42u); f_0048ac1b();
    /* 005e0b42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e0b45:; BB(0x005e0b45);
    /* 005e0b45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0b48: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0b4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0b4b: ret 4 */ FN_RET(0x005e0b20); r_esp += 8; return;
}

void f_005e0b50(void) /* FUN_005e0b50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0b50);
    /* 005e0b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b51: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0b53: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0b56: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e0b59: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e0b5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b5d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0b60: call 0x5dfc30 */ r_esp -= 4; W32(r_esp, 0x5e0b65u); f_005dfc30();
    /* 005e0b65: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0b68: mov dword ptr [ecx], 0x63bbd4 */ W32((u32)(r_ecx), 0x63bbd4u);
    /* 005e0b6e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b70: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0b73: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x5e0b78u); f_005e0731();
    /* 005e0b78: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0b7b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0b7e: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 005e0b84: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0b87: mov dword ptr [ecx + 0xb4], 0xffffffff */ W32((u32)(r_ecx+0xb4u), 0xffffffffu);
    /* 005e0b91: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0b94: mov dword ptr [edx + 0xc0], 0xffffffff */ W32((u32)(r_edx+0xc0u), 0xffffffffu);
    /* 005e0b9e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0ba1: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 005e0bab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0bae: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 005e0bb8: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0bba: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e0bbfu); f_0048ab58();
    /* 005e0bbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0bc2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e0bc5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0bc9: je 0x5e0bd8 */ if (fZ) goto L_005e0bd8;
L_005e0bcb:; BB(0x005e0bcb);
    /* 005e0bcb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0bce: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x5e0bd3u); f_005e4bb0();
    /* 005e0bd3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e0bd6: jmp 0x5e0bdf */ goto L_005e0bdf;
L_005e0bd8:; BB(0x005e0bd8);
    /* 005e0bd8: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005e0bdf:; BB(0x005e0bdf);
    /* 005e0bdf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0be2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0be5: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 005e0beb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0bee: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 005e0bf4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0bf7: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005e0bfa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0bfd: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005e0c03: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0c06: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e0c0c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0c0e: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e0c11u); call_ind(t); }
    /* 005e0c11: mov eax, dword ptr [0x687098] */ r_eax = R32((u32)(0x687098u));
    /* 005e0c16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c17: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0c1a: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005e0c20: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5e0c25u); f_005e4eac();
    /* 005e0c25: mov edx, dword ptr [0x687098] */ r_edx = R32((u32)(0x687098u));
    /* 005e0c2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c2c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0c2f: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005e0c35: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5e0c3au); f_005e4f18();
    /* 005e0c3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c3c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0c3f: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005e0c45: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0c48: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e0c4e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0c50: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e0c53u); call_ind(t); }
    /* 005e0c53: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0c5a: jmp 0x5e0c65 */ goto L_005e0c65;
L_005e0c5c:; BB(0x005e0c5c);
    /* 005e0c5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0c5f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e0c62: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e0c65:; BB(0x005e0c65);
    /* 005e0c65: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0c69: jge 0x5e0c7e */ if ((fS==fO)) goto L_005e0c7e;
L_005e0c6b:; BB(0x005e0c6b);
    /* 005e0c6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0c6e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0c71: mov dword ptr [edx + ecx*4 + 0x98], 0 */ W32((u32)(r_edx+r_ecx*4+0x98u), 0x0u);
    /* 005e0c7c: jmp 0x5e0c5c */ goto L_005e0c5c;
L_005e0c7e:; BB(0x005e0c7e);
    /* 005e0c7e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0c81: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 005e0c8b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c8d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e0c92u); f_0048ab58();
    /* 005e0c92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0c95: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e0c98: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0c9c: je 0x5e0cab */ if (fZ) goto L_005e0cab;
L_005e0c9e:; BB(0x005e0c9e);
    /* 005e0c9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0ca1: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x5e0ca6u); f_005dd290();
    /* 005e0ca6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e0ca9: jmp 0x5e0cb2 */ goto L_005e0cb2;
L_005e0cab:; BB(0x005e0cab);
    /* 005e0cab: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005e0cb2:; BB(0x005e0cb2);
    /* 005e0cb2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0cb5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e0cb8: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 005e0cbe: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0cc1: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 005e0ccb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0cce: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0cd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0cd1: ret 8 */ FN_RET(0x005e0b50); r_esp += 12; return;
}

void f_005e0cd4(void) /* FUN_005e0cd4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0cd4);
    /* 005e0cd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0cd5: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0cd7: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0cda: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005e0cdd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0ce0: mov dword ptr [eax], 0x63bbd4 */ W32((u32)(r_eax), 0x63bbd4u);
    /* 005e0ce6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0ce9: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0cf0: je 0x5e0d96 */ if (fZ) goto L_005e0d96;
L_005e0cf6:; BB(0x005e0cf6);
    /* 005e0cf6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0cf9: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 005e0cff: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e0d04u); f_005dd4d2();
    /* 005e0d04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0d06: je 0x5e0d59 */ if (fZ) goto L_005e0d59;
L_005e0d08:; BB(0x005e0d08);
    /* 005e0d08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d0a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0d0d: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005e0d13: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e0d18u); f_005dd560();
    /* 005e0d18: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e0d1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0d1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d1f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0d22: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 005e0d28: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5e0d2du); f_005dd469();
    /* 005e0d2d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0d30: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e0d33: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0d36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e0d39: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0d3d: je 0x5e0d50 */ if (fZ) goto L_005e0d50;
L_005e0d3f:; BB(0x005e0d3f);
    /* 005e0d3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d41: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0d44: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e0d46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0d49: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e0d4bu); call_ind(t); }
    /* 005e0d4b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e0d4e: jmp 0x5e0d57 */ goto L_005e0d57;
L_005e0d50:; BB(0x005e0d50);
    /* 005e0d50: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005e0d57:; BB(0x005e0d57);
    /* 005e0d57: jmp 0x5e0cf6 */ goto L_005e0cf6;
L_005e0d59:; BB(0x005e0d59);
    /* 005e0d59: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0d5c: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 005e0d62: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005e0d65: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e0d68: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e0d6b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0d6f: je 0x5e0d82 */ if (fZ) goto L_005e0d82;
L_005e0d71:; BB(0x005e0d71);
    /* 005e0d71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d73: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0d76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e0d78: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0d7b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e0d7du); call_ind(t); }
    /* 005e0d7d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005e0d80: jmp 0x5e0d89 */ goto L_005e0d89;
L_005e0d82:; BB(0x005e0d82);
    /* 005e0d82: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005e0d89:; BB(0x005e0d89);
    /* 005e0d89: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0d8c: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
L_005e0d96:; BB(0x005e0d96);
    /* 005e0d96: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0d9d: jmp 0x5e0da8 */ goto L_005e0da8;
L_005e0d9f:; BB(0x005e0d9f);
    /* 005e0d9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0da2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0da5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e0da8:; BB(0x005e0da8);
    /* 005e0da8: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0dac: jge 0x5e0e05 */ if ((fS==fO)) goto L_005e0e05;
L_005e0dae:; BB(0x005e0dae);
    /* 005e0dae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0db1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0db4: cmp dword ptr [eax + edx*4 + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0dbc: je 0x5e0e03 */ if (fZ) goto L_005e0e03;
L_005e0dbe:; BB(0x005e0dbe);
    /* 005e0dbe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0dc1: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0dc4: mov eax, dword ptr [edx + ecx*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 005e0dcb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e0dce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e0dd1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005e0dd4: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0dd8: je 0x5e0deb */ if (fZ) goto L_005e0deb;
L_005e0dda:; BB(0x005e0dda);
    /* 005e0dda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ddc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e0ddf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e0de1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e0de4: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e0de6u); call_ind(t); }
    /* 005e0de6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e0de9: jmp 0x5e0df2 */ goto L_005e0df2;
L_005e0deb:; BB(0x005e0deb);
    /* 005e0deb: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005e0df2:; BB(0x005e0df2);
    /* 005e0df2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0df5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0df8: mov dword ptr [edx + ecx*4 + 0x98], 0 */ W32((u32)(r_edx+r_ecx*4+0x98u), 0x0u);
L_005e0e03:; BB(0x005e0e03);
    /* 005e0e03: jmp 0x5e0d9f */ goto L_005e0d9f;
L_005e0e05:; BB(0x005e0e05);
    /* 005e0e05: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0e08: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0e0f: je 0x5e0e4e */ if (fZ) goto L_005e0e4e;
L_005e0e11:; BB(0x005e0e11);
    /* 005e0e11: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0e14: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 005e0e1a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005e0e1d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e0e20: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e0e23: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0e27: je 0x5e0e3a */ if (fZ) goto L_005e0e3a;
L_005e0e29:; BB(0x005e0e29);
    /* 005e0e29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e2b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e0e2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e0e30: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e0e33: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e0e35u); call_ind(t); }
    /* 005e0e35: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005e0e38: jmp 0x5e0e41 */ goto L_005e0e41;
L_005e0e3a:; BB(0x005e0e3a);
    /* 005e0e3a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005e0e41:; BB(0x005e0e41);
    /* 005e0e41: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0e44: mov dword ptr [eax + 0x88], 0 */ W32((u32)(r_eax+0x88u), 0x0u);
L_005e0e4e:; BB(0x005e0e4e);
    /* 005e0e4e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0e51: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 005e0e5b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0e5e: call 0x5dfd45 */ r_esp -= 4; W32(r_esp, 0x5e0e63u); f_005dfd45();
    /* 005e0e63: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0e65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0e66: ret  */ FN_RET(0x005e0cd4); r_esp += 4; return;
}

void f_005e0e67(void) /* FUN_005e0e67 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0e67);
    /* 005e0e67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e68: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0e6a: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0e6d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e0e70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0e73: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0e77: je 0x5e0e84 */ if (fZ) goto L_005e0e84;
L_005e0e79:; BB(0x005e0e79);
    /* 005e0e79: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0e7c: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005e0e7f: jmp 0x5e115c */ goto L_005e115c;
L_005e0e84:; BB(0x005e0e84);
    /* 005e0e84: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0e87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0e8b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e0e8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e8f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e0e92: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005e0e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e96: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0e99: call 0x5e1213 */ r_esp -= 4; W32(r_esp, 0x5e0e9eu); f_005e1213();
    /* 005e0e9e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e0ea1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0ea4: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005e0ea7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005e0eaa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e0ead: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e0eb0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e0eb3: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e0eb7: ja 0x5e1156 */ if ((!fC&&!fZ)) goto L_005e1156;
L_005e0ebd:; BB(0x005e0ebd);
    /* 005e0ebd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e0ec0: jmp dword ptr [ecx*4 + 0x5e1162] */ { u32 t = R32((u32)(r_ecx*4+0x5e1162u)); switch (t) { case 0x5e0f21u: goto L_005e0f21; case 0x5e10a2u: goto L_005e10a2; case 0x5e0f59u: goto L_005e0f59; case 0x5e0ec7u: goto L_005e0ec7; default: UNSUP(0x005e0ec0, "jump table entry is not a known target"); } }
L_005e0ec7:; BB(0x005e0ec7);
    /* 005e0ec7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e0eca: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 005e0ece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ecf: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x5e0ed4u); f_00624600();
    /* 005e0ed4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0ed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ed8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0edb: call 0x5e14a4 */ r_esp -= 4; W32(r_esp, 0x5e0ee0u); f_005e14a4();
    /* 005e0ee0: mov ecx, eax */ r_ecx = r_eax;
    /* 005e0ee2: call 0x5e1172 */ r_esp -= 4; W32(r_esp, 0x5e0ee7u); f_005e1172();
    /* 005e0ee7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e0eea: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0eee: je 0x5e0f1c */ if (fZ) goto L_005e0f1c;
L_005e0ef0:; BB(0x005e0ef0);
    /* 005e0ef0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0ef3: call 0x5e3e7e */ r_esp -= 4; W32(r_esp, 0x5e0ef8u); f_005e3e7e();
    /* 005e0ef8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0efa: je 0x5e0f1c */ if (fZ) goto L_005e0f1c;
L_005e0efc:; BB(0x005e0efc);
    /* 005e0efc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0eff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e0f01: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0f04: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5e0f07u); call_ind(t); }
    /* 005e0f07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0f0a: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 005e0f11: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0f14: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005e0f17: jmp 0x5e115c */ goto L_005e115c;
L_005e0f1c:; BB(0x005e0f1c);
    /* 005e0f1c: jmp 0x5e1156 */ goto L_005e1156;
L_005e0f21:; BB(0x005e0f21);
    /* 005e0f21: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0f25: jne 0x5e0f38 */ if (!fZ) goto L_005e0f38;
L_005e0f27:; BB(0x005e0f27);
    /* 005e0f27: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0f2a: call 0x5e14a4 */ r_esp -= 4; W32(r_esp, 0x5e0f2fu); f_005e14a4();
    /* 005e0f2f: mov ecx, eax */ r_ecx = r_eax;
    /* 005e0f31: call 0x5e1f28 */ r_esp -= 4; W32(r_esp, 0x5e0f36u); f_005e1f28();
    /* 005e0f36: jmp 0x5e0f54 */ goto L_005e0f54;
L_005e0f38:; BB(0x005e0f38);
    /* 005e0f38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0f3b: call 0x5e14a4 */ r_esp -= 4; W32(r_esp, 0x5e0f40u); f_005e14a4();
    /* 005e0f40: mov dword ptr [eax + 0xb0], 1 */ W32((u32)(r_eax+0xb0u), 0x1u);
    /* 005e0f4a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e0f4d: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
L_005e0f54:; BB(0x005e0f54);
    /* 005e0f54: jmp 0x5e1156 */ goto L_005e1156;
L_005e0f59:; BB(0x005e0f59);
    /* 005e0f59: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0f5d: je 0x5e1037 */ if (fZ) goto L_005e1037;
L_005e0f63:; BB(0x005e0f63);
    /* 005e0f63: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0f66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f67: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0f6a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e0f6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f6e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0f71: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005e0f74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0f78: call 0x5e12ca */ r_esp -= 4; W32(r_esp, 0x5e0f7du); f_005e12ca();
    /* 005e0f7d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e0f80: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0f84: je 0x5e1021 */ if (fZ) goto L_005e1021;
L_005e0f8a:; BB(0x005e0f8a);
    /* 005e0f8a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0f8d: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e0f92u); f_005e345f();
    /* 005e0f92: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0f95: je 0x5e1021 */ if (fZ) goto L_005e1021;
L_005e0f9b:; BB(0x005e0f9b);
    /* 005e0f9b: mov edx, dword ptr [0x687098] */ r_edx = R32((u32)(0x687098u));
    /* 005e0fa1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0fa2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0fa5: call 0x5e3bb0 */ r_esp -= 4; W32(r_esp, 0x5e0faau); f_005e3bb0();
    /* 005e0faa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0fac: je 0x5e101f */ if (fZ) goto L_005e101f;
L_005e0fae:; BB(0x005e0fae);
    /* 005e0fae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0fb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0fb2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0fb5: mov ecx, dword ptr [ecx + 0x888] */ r_ecx = R32((u32)(r_ecx+0x888u));
    /* 005e0fbb: call 0x5e13c1 */ r_esp -= 4; W32(r_esp, 0x5e0fc0u); f_005e13c1();
    /* 005e0fc0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0fc3: call 0x5e384f */ r_esp -= 4; W32(r_esp, 0x5e0fc8u); f_005e384f();
    /* 005e0fc8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0fcb: call 0x5e3e7e */ r_esp -= 4; W32(r_esp, 0x5e0fd0u); f_005e3e7e();
    /* 005e0fd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0fd2: je 0x5e101f */ if (fZ) goto L_005e101f;
L_005e0fd4:; BB(0x005e0fd4);
    /* 005e0fd4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0fd7: cmp dword ptr [edx + 0x898], 0 */ {  u32 a = R32((u32)(r_edx+0x898u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0fde: je 0x5e101f */ if (fZ) goto L_005e101f;
L_005e0fe0:; BB(0x005e0fe0);
    /* 005e0fe0: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0fe2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e0fe7u); f_0048ab58();
    /* 005e0fe7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0fea: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e0fed: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0ff1: je 0x5e1006 */ if (fZ) goto L_005e1006;
L_005e0ff3:; BB(0x005e0ff3);
    /* 005e0ff3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ff5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0ff8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ff9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0ffc: call 0x5e3e92 */ r_esp -= 4; W32(r_esp, 0x5e1001u); f_005e3e92();
    /* 005e1001: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e1004: jmp 0x5e100d */ goto L_005e100d;
L_005e1006:; BB(0x005e1006);
    /* 005e1006: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005e100d:; BB(0x005e100d);
    /* 005e100d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e1010: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1011: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1014: mov ecx, dword ptr [edx + 0x898] */ r_ecx = R32((u32)(r_edx+0x898u));
    /* 005e101a: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5e101fu); f_005e40dc();
L_005e101f:; BB(0x005e101f);
    /* 005e101f: jmp 0x5e102b */ goto L_005e102b;
L_005e1021:; BB(0x005e1021);
    /* 005e1021: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1023: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1026: call 0x5e13c1 */ r_esp -= 4; W32(r_esp, 0x5e102bu); f_005e13c1();
L_005e102b:; BB(0x005e102b);
    /* 005e102b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e102e: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 005e1035: jmp 0x5e109d */ goto L_005e109d;
L_005e1037:; BB(0x005e1037);
    /* 005e1037: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e103e: jmp 0x5e1049 */ goto L_005e1049;
L_005e1040:; BB(0x005e1040);
    /* 005e1040: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1043: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1046: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005e1049:; BB(0x005e1049);
    /* 005e1049: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e104c: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e1051u); f_005e24af();
    /* 005e1051: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1054: jge 0x5e1093 */ if ((fS==fO)) goto L_005e1093;
L_005e1056:; BB(0x005e1056);
    /* 005e1056: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1059: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e105a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e105d: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e1062u); f_005e246d();
    /* 005e1062: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1069: je 0x5e1091 */ if (fZ) goto L_005e1091;
L_005e106b:; BB(0x005e106b);
    /* 005e106b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e106e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e106f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1072: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e1077u); f_005e246d();
    /* 005e1077: mov ecx, dword ptr [eax + 0x88c] */ r_ecx = R32((u32)(r_eax+0x88cu));
    /* 005e107d: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x5e1082u); f_005e07a3();
    /* 005e1082: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1084: je 0x5e1091 */ if (fZ) goto L_005e1091;
L_005e1086:; BB(0x005e1086);
    /* 005e1086: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1089: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005e108c: jmp 0x5e115c */ goto L_005e115c;
L_005e1091:; BB(0x005e1091);
    /* 005e1091: jmp 0x5e1040 */ goto L_005e1040;
L_005e1093:; BB(0x005e1093);
    /* 005e1093: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1095: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1098: call 0x5e13c1 */ r_esp -= 4; W32(r_esp, 0x5e109du); f_005e13c1();
L_005e109d:; BB(0x005e109d);
    /* 005e109d: jmp 0x5e1156 */ goto L_005e1156;
L_005e10a2:; BB(0x005e10a2);
    /* 005e10a2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10a6: je 0x5e1118 */ if (fZ) goto L_005e1118;
L_005e10a8:; BB(0x005e10a8);
    /* 005e10a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e10ab: call 0x5e14a4 */ r_esp -= 4; W32(r_esp, 0x5e10b0u); f_005e14a4();
    /* 005e10b0: cmp dword ptr [eax + 0xb0], 0 */ {  u32 a = R32((u32)(r_eax+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10b7: je 0x5e110c */ if (fZ) goto L_005e110c;
L_005e10b9:; BB(0x005e10b9);
    /* 005e10b9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e10bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e10bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e10c0: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e10c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e10c4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e10c7: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005e10ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e10cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e10ce: call 0x5e12ca */ r_esp -= 4; W32(r_esp, 0x5e10d3u); f_005e12ca();
    /* 005e10d3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e10d6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10da: je 0x5e110c */ if (fZ) goto L_005e110c;
L_005e10dc:; BB(0x005e10dc);
    /* 005e10dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e10df: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e10e4u); f_005e345f();
    /* 005e10e4: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10e7: je 0x5e110c */ if (fZ) goto L_005e110c;
L_005e10e9:; BB(0x005e10e9);
    /* 005e10e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e10ec: cmp dword ptr [ecx + 0x88c], 0 */ {  u32 a = R32((u32)(r_ecx+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10f3: jne 0x5e110c */ if (!fZ) goto L_005e110c;
L_005e10f5:; BB(0x005e10f5);
    /* 005e10f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e10f8: call 0x5e3e7e */ r_esp -= 4; W32(r_esp, 0x5e10fdu); f_005e3e7e();
    /* 005e10fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10ff: je 0x5e110c */ if (fZ) goto L_005e110c;
L_005e1101:; BB(0x005e1101);
    /* 005e1101: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1104: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e1106: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1109: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5e110cu); call_ind(t); }
L_005e110c:; BB(0x005e110c);
    /* 005e110c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e110f: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 005e1116: jmp 0x5e1138 */ goto L_005e1138;
L_005e1118:; BB(0x005e1118);
    /* 005e1118: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e111b: call 0x5e14a4 */ r_esp -= 4; W32(r_esp, 0x5e1120u); f_005e14a4();
    /* 005e1120: cmp dword ptr [eax + 0xb0], 0 */ {  u32 a = R32((u32)(r_eax+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1127: je 0x5e1138 */ if (fZ) goto L_005e1138;
L_005e1129:; BB(0x005e1129);
    /* 005e1129: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e112c: call 0x5e14a4 */ r_esp -= 4; W32(r_esp, 0x5e1131u); f_005e14a4();
    /* 005e1131: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1133: call 0x5e1f28 */ r_esp -= 4; W32(r_esp, 0x5e1138u); f_005e1f28();
L_005e1138:; BB(0x005e1138);
    /* 005e1138: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e113b: call 0x5e14a4 */ r_esp -= 4; W32(r_esp, 0x5e1140u); f_005e14a4();
    /* 005e1140: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1142: je 0x5e1156 */ if (fZ) goto L_005e1156;
L_005e1144:; BB(0x005e1144);
    /* 005e1144: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1147: call 0x5e14a4 */ r_esp -= 4; W32(r_esp, 0x5e114cu); f_005e14a4();
    /* 005e114c: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
L_005e1156:; BB(0x005e1156);
    /* 005e1156: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e1159: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
L_005e115c:; BB(0x005e115c);
    /* 005e115c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e115e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e115f: ret 4 */ FN_RET(0x005e0e67); r_esp += 8; return;
}

void f_005e1172(void) /* FUN_005e1172 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1172);
    /* 005e1172: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1173: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1175: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1178: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e117b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e1182: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e1189: jmp 0x5e1194 */ goto L_005e1194;
L_005e118b:; BB(0x005e118b);
    /* 005e118b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e118e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1191: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e1194:; BB(0x005e1194);
    /* 005e1194: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1197: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e119cu); f_005e24af();
    /* 005e119c: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e119f: jge 0x5e120a */ if ((fS==fO)) goto L_005e120a;
L_005e11a1:; BB(0x005e11a1);
    /* 005e11a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e11a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e11a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e11a8: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e11adu); f_005e246d();
    /* 005e11ad: movsx edx, byte ptr [eax + 0x8c0] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x8c0u));
    /* 005e11b4: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005e11b8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e11ba: jne 0x5e11ca */ if (!fZ) goto L_005e11ca;
L_005e11bc:; BB(0x005e11bc);
    /* 005e11bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e11bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e11c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e11c3: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e11c8u); f_005e246d();
    /* 005e11c8: jmp 0x5e120d */ goto L_005e120d;
L_005e11ca:; BB(0x005e11ca);
    /* 005e11ca: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e11cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e11ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e11d1: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e11d6u); f_005e246d();
    /* 005e11d6: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e11dd: je 0x5e1208 */ if (fZ) goto L_005e1208;
L_005e11df:; BB(0x005e11df);
    /* 005e11df: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e11e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e11e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e11e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e11e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e11ea: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e11efu); f_005e246d();
    /* 005e11ef: mov ecx, dword ptr [eax + 0x88c] */ r_ecx = R32((u32)(r_eax+0x88cu));
    /* 005e11f5: call 0x5e1172 */ r_esp -= 4; W32(r_esp, 0x5e11fau); f_005e1172();
    /* 005e11fa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e11fd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1201: je 0x5e1208 */ if (fZ) goto L_005e1208;
L_005e1203:; BB(0x005e1203);
    /* 005e1203: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1206: jmp 0x5e120d */ goto L_005e120d;
L_005e1208:; BB(0x005e1208);
    /* 005e1208: jmp 0x5e118b */ goto L_005e118b;
L_005e120a:; BB(0x005e120a);
    /* 005e120a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005e120d:; BB(0x005e120d);
    /* 005e120d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e120f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1210: ret 4 */ FN_RET(0x005e1172); r_esp += 8; return;
}

void f_005e1213(void) /* FUN_005e1213 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1213);
    /* 005e1213: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1214: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1216: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1217: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e121a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e121d: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e1222u); f_005e06d0();
    /* 005e1222: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1225: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1227: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 005e122a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e122d: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e1232u); f_005e06e1();
    /* 005e1232: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e1235: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e1237: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 005e123a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e123d: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e1242u); f_005e06d0();
    /* 005e1242: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1245: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1247: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 005e124a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e124d: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e1252u); f_005e06e1();
    /* 005e1252: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e1255: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e1257: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 005e125a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e125d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e125e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1262: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1265: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 005e126b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e126e: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 005e1274: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e1276: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x5e1279u); call_ind(t); }
    /* 005e1279: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e127b: je 0x5e1282 */ if (fZ) goto L_005e1282;
L_005e127d:; BB(0x005e127d);
    /* 005e127d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1280: jmp 0x5e12c4 */ goto L_005e12c4;
L_005e1282:; BB(0x005e1282);
    /* 005e1282: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1285: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e128c: je 0x5e12c2 */ if (fZ) goto L_005e12c2;
L_005e128e:; BB(0x005e128e);
    /* 005e128e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1291: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005e1297: cmp dword ptr [eax + 0x888], 0 */ {  u32 a = R32((u32)(r_eax+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e129e: je 0x5e12c2 */ if (fZ) goto L_005e12c2;
L_005e12a0:; BB(0x005e12a0);
    /* 005e12a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e12a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e12a4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e12a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e12a8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e12ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e12ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e12af: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 005e12b5: mov ecx, dword ptr [edx + 0x888] */ r_ecx = R32((u32)(r_edx+0x888u));
    /* 005e12bb: call 0x5e1213 */ r_esp -= 4; W32(r_esp, 0x5e12c0u); f_005e1213();
    /* 005e12c0: jmp 0x5e12c4 */ goto L_005e12c4;
L_005e12c2:; BB(0x005e12c2);
    /* 005e12c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e12c4:; BB(0x005e12c4);
    /* 005e12c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e12c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e12c7: ret 0xc */ FN_RET(0x005e1213); r_esp += 16; return;
}

void f_005e12ca(void) /* FUN_005e12ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e12ca);
    /* 005e12ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e12cb: mov ebp, esp */ r_ebp = r_esp;
    /* 005e12cd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e12d0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e12d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e12da: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e12dd: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e12e2u); f_005e06d0();
    /* 005e12e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e12e5: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e12e7: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 005e12ea: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e12ed: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e12f2u); f_005e06e1();
    /* 005e12f2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e12f5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e12f7: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 005e12fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e12fd: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e1302u); f_005e06d0();
    /* 005e1302: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1305: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1307: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 005e130a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e130d: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e1312u); f_005e06e1();
    /* 005e1312: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e1315: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e1317: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 005e131a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e1321: jmp 0x5e132c */ goto L_005e132c;
L_005e1323:; BB(0x005e1323);
    /* 005e1323: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1326: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1329: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e132c:; BB(0x005e132c);
    /* 005e132c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e132f: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e1334u); f_005e24af();
    /* 005e1334: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1337: jge 0x5e13b8 */ if ((fS==fO)) goto L_005e13b8;
L_005e1339:; BB(0x005e1339);
    /* 005e1339: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e133c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e133d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e1340: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1341: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1345: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1348: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e134du); f_005e246d();
    /* 005e134d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e1350: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e1353: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e1355: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e1358: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5e135bu); call_ind(t); }
    /* 005e135b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e135d: je 0x5e136d */ if (fZ) goto L_005e136d;
L_005e135f:; BB(0x005e135f);
    /* 005e135f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1362: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1363: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1366: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e136bu); f_005e246d();
    /* 005e136b: jmp 0x5e13bb */ goto L_005e13bb;
L_005e136d:; BB(0x005e136d);
    /* 005e136d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1370: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1371: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1374: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e1379u); f_005e246d();
    /* 005e1379: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1380: je 0x5e13a8 */ if (fZ) goto L_005e13a8;
L_005e1382:; BB(0x005e1382);
    /* 005e1382: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1385: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1386: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e1389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e138a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e138d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e138e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1391: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1392: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1395: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e139au); f_005e246d();
    /* 005e139a: mov ecx, dword ptr [eax + 0x88c] */ r_ecx = R32((u32)(r_eax+0x88cu));
    /* 005e13a0: call 0x5e12ca */ r_esp -= 4; W32(r_esp, 0x5e13a5u); f_005e12ca();
    /* 005e13a5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e13a8:; BB(0x005e13a8);
    /* 005e13a8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e13ac: je 0x5e13b3 */ if (fZ) goto L_005e13b3;
L_005e13ae:; BB(0x005e13ae);
    /* 005e13ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e13b1: jmp 0x5e13bb */ goto L_005e13bb;
L_005e13b3:; BB(0x005e13b3);
    /* 005e13b3: jmp 0x5e1323 */ goto L_005e1323;
L_005e13b8:; BB(0x005e13b8);
    /* 005e13b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005e13bb:; BB(0x005e13bb);
    /* 005e13bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005e13bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e13be: ret 0xc */ FN_RET(0x005e12ca); r_esp += 16; return;
}

void f_005e13c1(void) /* FUN_005e13c1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e13c1);
    /* 005e13c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e13c2: mov ebp, esp */ r_ebp = r_esp;
    /* 005e13c4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e13c7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e13ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e13d1: jmp 0x5e13dc */ goto L_005e13dc;
L_005e13d3:; BB(0x005e13d3);
    /* 005e13d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e13d6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e13d9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e13dc:; BB(0x005e13dc);
    /* 005e13dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e13df: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e13e4u); f_005e24af();
    /* 005e13e4: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e13e7: jge 0x5e1434 */ if ((fS==fO)) goto L_005e1434;
L_005e13e9:; BB(0x005e13e9);
    /* 005e13e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e13ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e13ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e13f0: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e13f5u); f_005e246d();
    /* 005e13f5: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e13f8: je 0x5e1432 */ if (fZ) goto L_005e1432;
L_005e13fa:; BB(0x005e13fa);
    /* 005e13fa: mov edx, dword ptr [0x699ba8] */ r_edx = R32((u32)(0x699ba8u));
    /* 005e1400: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1401: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1405: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1408: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e140du); f_005e246d();
    /* 005e140d: mov ecx, eax */ r_ecx = r_eax;
    /* 005e140f: call 0x5e3bb0 */ r_esp -= 4; W32(r_esp, 0x5e1414u); f_005e3bb0();
    /* 005e1414: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1416: je 0x5e1432 */ if (fZ) goto L_005e1432;
L_005e1418:; BB(0x005e1418);
    /* 005e1418: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e141b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e141c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e141f: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e1424u); f_005e246d();
    /* 005e1424: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e1427: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e142a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e142c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e142f: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5e1432u); call_ind(t); }
L_005e1432:; BB(0x005e1432);
    /* 005e1432: jmp 0x5e13d3 */ goto L_005e13d3;
L_005e1434:; BB(0x005e1434);
    /* 005e1434: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e143b: jmp 0x5e1446 */ goto L_005e1446;
L_005e143d:; BB(0x005e143d);
    /* 005e143d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1440: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1443: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e1446:; BB(0x005e1446);
    /* 005e1446: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1449: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e144eu); f_005e24af();
    /* 005e144e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1451: jge 0x5e149e */ if ((fS==fO)) goto L_005e149e;
L_005e1453:; BB(0x005e1453);
    /* 005e1453: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1456: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1457: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e145a: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e145fu); f_005e246d();
    /* 005e145f: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1466: je 0x5e149c */ if (fZ) goto L_005e149c;
L_005e1468:; BB(0x005e1468);
    /* 005e1468: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e146b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e146c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e146f: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e1474u); f_005e246d();
    /* 005e1474: mov ecx, dword ptr [eax + 0x88c] */ r_ecx = R32((u32)(r_eax+0x88cu));
    /* 005e147a: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x5e147fu); f_005e07a3();
    /* 005e147f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1481: je 0x5e149c */ if (fZ) goto L_005e149c;
L_005e1483:; BB(0x005e1483);
    /* 005e1483: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1485: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1488: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1489: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e148c: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e1491u); f_005e246d();
    /* 005e1491: mov ecx, dword ptr [eax + 0x88c] */ r_ecx = R32((u32)(r_eax+0x88cu));
    /* 005e1497: call 0x5e13c1 */ r_esp -= 4; W32(r_esp, 0x5e149cu); f_005e13c1();
L_005e149c:; BB(0x005e149c);
    /* 005e149c: jmp 0x5e143d */ goto L_005e143d;
L_005e149e:; BB(0x005e149e);
    /* 005e149e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e14a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e14a1: ret 4 */ FN_RET(0x005e13c1); r_esp += 8; return;
}

void f_005e14a4(void) /* FUN_005e14a4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e14a4);
    /* 005e14a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e14a5: mov ebp, esp */ r_ebp = r_esp;
    /* 005e14a7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e14aa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e14ad: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e14b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e14b3:; BB(0x005e14b3);
    /* 005e14b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e14b6: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e14bd: je 0x5e14d3 */ if (fZ) goto L_005e14d3;
L_005e14bf:; BB(0x005e14bf);
    /* 005e14bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e14c2: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005e14c8: mov ecx, dword ptr [eax + 0x888] */ r_ecx = R32((u32)(r_eax+0x888u));
    /* 005e14ce: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e14d1: jmp 0x5e14b3 */ goto L_005e14b3;
L_005e14d3:; BB(0x005e14d3);
    /* 005e14d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e14d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e14d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e14d9: ret  */ FN_RET(0x005e14a4); r_esp += 4; return;
}

void f_005e14da(void) /* FUN_005e14da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e14da);
    /* 005e14da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e14db: mov ebp, esp */ r_ebp = r_esp;
    /* 005e14dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e14de: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e14e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e14e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e14e7: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
    /* 005e14ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e14f0: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005e14f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e14f9: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 005e14ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1501: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1502: ret 4 */ FN_RET(0x005e14da); r_esp += 8; return;
}

void f_005e1505(void) /* FUN_005e1505 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1505);
    /* 005e1505: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1506: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1508: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e150b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e150c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e150f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e1516: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1519: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e151c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e151e: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 005e1524: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1527: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e152a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005e152d: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 005e1533: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1536: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1539: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e153c: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 005e1542: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1545: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 005e154f: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1553: je 0x5e1585 */ if (fZ) goto L_005e1585;
L_005e1555:; BB(0x005e1555);
    /* 005e1555: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1558: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 005e155e: cmp dword ptr [edx + 0x888], 0 */ {  u32 a = R32((u32)(r_edx+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1565: je 0x5e1585 */ if (fZ) goto L_005e1585;
L_005e1567:; BB(0x005e1567);
    /* 005e1567: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e156a: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005e1570: mov edx, dword ptr [ecx + 0x888] */ r_edx = R32((u32)(r_ecx+0x888u));
    /* 005e1576: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1579: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005e157f: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
L_005e1585:; BB(0x005e1585);
    /* 005e1585: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e158c: jmp 0x5e1597 */ goto L_005e1597;
L_005e158e:; BB(0x005e158e);
    /* 005e158e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1591: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e1594: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005e1597:; BB(0x005e1597);
    /* 005e1597: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e159b: jge 0x5e1602 */ if ((fS==fO)) goto L_005e1602;
L_005e159d:; BB(0x005e159d);
    /* 005e159d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e15a0: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e15a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e15a6: cmp dword ptr [ecx + eax + 0x1c], -1 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x1cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e15ab: je 0x5e15fe */ if (fZ) goto L_005e15fe;
L_005e15ad:; BB(0x005e15ad);
    /* 005e15ad: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e15b0: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005e15b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e15b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e15bc: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 005e15c2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e15c5: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e15c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e15cb: cmp dword ptr [eax + edx + 0x1c], -2 */ {  u32 a = R32((u32)(r_eax+r_edx+0x1cu)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e15d0: jne 0x5e15ed */ if (!fZ) goto L_005e15ed;
L_005e15d2:; BB(0x005e15d2);
    /* 005e15d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e15d5: mov eax, dword ptr [ecx + 0xc8] */ r_eax = R32((u32)(r_ecx+0xc8u));
    /* 005e15db: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e15dc: mov ecx, 3 */ r_ecx = 0x3u;
    /* 005e15e1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e15e1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e15e1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e15e3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e15e6: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e15e8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e15eb: jmp 0x5e15fc */ goto L_005e15fc;
L_005e15ed:; BB(0x005e15ed);
    /* 005e15ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e15f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e15f3: add ecx, dword ptr [eax + 0xc8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e15f9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005e15fc:; BB(0x005e15fc);
    /* 005e15fc: jmp 0x5e1600 */ goto L_005e1600;
L_005e15fe:; BB(0x005e15fe);
    /* 005e15fe: jmp 0x5e1602 */ goto L_005e1602;
L_005e1600:; BB(0x005e1600);
    /* 005e1600: jmp 0x5e158e */ goto L_005e158e;
L_005e1602:; BB(0x005e1602);
    /* 005e1602: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1605: cmp dword ptr [edx + 0xb8], 0 */ {  u32 a = R32((u32)(r_edx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e160c: jne 0x5e162c */ if (!fZ) goto L_005e162c;
L_005e160e:; BB(0x005e160e);
    /* 005e160e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1611: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1615: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1618: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 005e161e: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e1621: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1622: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1625: call 0x5e07d6 */ r_esp -= 4; W32(r_esp, 0x5e162au); f_005e07d6();
    /* 005e162a: jmp 0x5e1648 */ goto L_005e1648;
L_005e162c:; BB(0x005e162c);
    /* 005e162c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e162f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1632: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1633: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1636: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 005e163c: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e163f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1640: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1643: call 0x5e07d6 */ r_esp -= 4; W32(r_esp, 0x5e1648u); f_005e07d6();
L_005e1648:; BB(0x005e1648);
    /* 005e1648: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e164b: call 0x5e0709 */ r_esp -= 4; W32(r_esp, 0x5e1650u); f_005e0709();
    /* 005e1650: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1651: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1654: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5e1659u); f_005e06f2();
    /* 005e1659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e165a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e165d: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005e1663: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1666: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e166c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e166e: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5e1671u); call_ind(t); }
    /* 005e1671: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1675: je 0x5e1693 */ if (fZ) goto L_005e1693;
L_005e1677:; BB(0x005e1677);
    /* 005e1677: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e167a: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005e1680: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e1685u); f_005d9883();
    /* 005e1685: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1689: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e168c: call 0x5e2077 */ r_esp -= 4; W32(r_esp, 0x5e1691u); f_005e2077();
    /* 005e1691: jmp 0x5e16a0 */ goto L_005e16a0;
L_005e1693:; BB(0x005e1693);
    /* 005e1693: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1698: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e169b: call 0x5e2077 */ r_esp -= 4; W32(r_esp, 0x5e16a0u); f_005e2077();
L_005e16a0:; BB(0x005e16a0);
    /* 005e16a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e16a3: cmp dword ptr [ecx + 0x14], -1 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e16a7: jne 0x5e174c */ if (!fZ) goto L_005e174c;
L_005e16ad:; BB(0x005e16ad);
    /* 005e16ad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e16b0: cmp dword ptr [edx + 0x18], -1 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e16b4: jne 0x5e174c */ if (!fZ) goto L_005e174c;
L_005e16ba:; BB(0x005e16ba);
    /* 005e16ba: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e16be: je 0x5e16fa */ if (fZ) goto L_005e16fa;
L_005e16c0:; BB(0x005e16c0);
    /* 005e16c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e16c3: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005e16c9: call 0x5e3535 */ r_esp -= 4; W32(r_esp, 0x5e16ceu); f_005e3535();
    /* 005e16ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e16cf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e16d2: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005e16d8: call 0x5e350e */ r_esp -= 4; W32(r_esp, 0x5e16ddu); f_005e350e();
    /* 005e16dd: mov esi, eax */ r_esi = r_eax;
    /* 005e16df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e16e2: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005e16e8: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e16edu); f_005d98c3();
    /* 005e16ed: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e16ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e16f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e16f3: call 0x5e215d */ r_esp -= 4; W32(r_esp, 0x5e16f8u); f_005e215d();
    /* 005e16f8: jmp 0x5e174a */ goto L_005e174a;
L_005e16fa:; BB(0x005e16fa);
    /* 005e16fa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e16fd: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1704: je 0x5e174a */ if (fZ) goto L_005e174a;
L_005e1706:; BB(0x005e1706);
    /* 005e1706: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1709: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1710: je 0x5e174a */ if (fZ) goto L_005e174a;
L_005e1712:; BB(0x005e1712);
    /* 005e1712: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1715: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005e171b: call 0x5e2d27 */ r_esp -= 4; W32(r_esp, 0x5e1720u); f_005e2d27();
    /* 005e1720: mov esi, eax */ r_esi = r_eax;
    /* 005e1722: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1725: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005e172b: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e1730u); f_005d98da();
    /* 005e1730: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e1732: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1733: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1736: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005e173c: call 0x5e2d00 */ r_esp -= 4; W32(r_esp, 0x5e1741u); f_005e2d00();
    /* 005e1741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1742: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1745: call 0x5e215d */ r_esp -= 4; W32(r_esp, 0x5e174au); f_005e215d();
L_005e174a:; BB(0x005e174a);
    /* 005e174a: jmp 0x5e1762 */ goto L_005e1762;
L_005e174c:; BB(0x005e174c);
    /* 005e174c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e174f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005e1752: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1753: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1756: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005e1759: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e175a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e175d: call 0x5e215d */ r_esp -= 4; W32(r_esp, 0x5e1762u); f_005e215d();
L_005e1762:; BB(0x005e1762);
    /* 005e1762: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1765: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e176c: jne 0x5e1776 */ if (!fZ) goto L_005e1776;
L_005e176e:; BB(0x005e176e);
    /* 005e176e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1771: call 0x5e18f6 */ r_esp -= 4; W32(r_esp, 0x5e1776u); f_005e18f6();
L_005e1776:; BB(0x005e1776);
    /* 005e1776: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e177d: jmp 0x5e1788 */ goto L_005e1788;
L_005e177f:; BB(0x005e177f);
    /* 005e177f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1782: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1785: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005e1788:; BB(0x005e1788);
    /* 005e1788: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e178b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e178e: cmp eax, dword ptr [edx + 0xbc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xbcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1794: jge 0x5e18ef */ if ((fS==fO)) goto L_005e18ef;
L_005e179a:; BB(0x005e179a);
    /* 005e179a: push 0x8c4 */ { u32 v = 0x8c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e179f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e17a4u); f_0048ab58();
    /* 005e17a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e17a7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e17aa: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e17ae: je 0x5e17cf */ if (fZ) goto L_005e17cf;
L_005e17b0:; BB(0x005e17b0);
    /* 005e17b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e17b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e17b4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e17b7: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e17ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e17bd: mov ecx, dword ptr [eax + edx + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx+0x1cu));
    /* 005e17c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e17c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e17c5: call 0x5e2d4e */ r_esp -= 4; W32(r_esp, 0x5e17cau); f_005e2d4e();
    /* 005e17ca: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e17cd: jmp 0x5e17d6 */ goto L_005e17d6;
L_005e17cf:; BB(0x005e17cf);
    /* 005e17cf: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005e17d6:; BB(0x005e17d6);
    /* 005e17d6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e17d9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e17dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e17df: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e17e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e17e5: cmp dword ptr [ecx + eax + 0x1c], -2 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x1cu)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e17ea: jne 0x5e1822 */ if (!fZ) goto L_005e1822;
L_005e17ec:; BB(0x005e17ec);
    /* 005e17ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e17ef: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005e17f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e17f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e17f9: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5e17feu); f_005e8740();
    /* 005e17fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1801: mov eax, dword ptr [ecx + 0xc8] */ r_eax = R32((u32)(r_ecx+0xc8u));
    /* 005e1807: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e1808: mov ecx, 3 */ r_ecx = 0x3u;
    /* 005e180d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e180d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e180d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e180f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1810: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1813: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5e1818u); f_005e8775();
    /* 005e1818: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e181b: call 0x5e35d0 */ r_esp -= 4; W32(r_esp, 0x5e1820u); f_005e35d0();
    /* 005e1820: jmp 0x5e1889 */ goto L_005e1889;
L_005e1822:; BB(0x005e1822);
    /* 005e1822: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e1825: cmp dword ptr [edx + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1829: jle 0x5e183a */ if ((fZ||fS!=fO)) goto L_005e183a;
L_005e182b:; BB(0x005e182b);
    /* 005e182b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e182e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1831: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e1834: mov dword ptr [eax + 0x8a4], edx */ W32((u32)(r_eax+0x8a4u), r_edx);
L_005e183a:; BB(0x005e183a);
    /* 005e183a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e183d: mov ecx, dword ptr [eax + 0x8a4] */ r_ecx = R32((u32)(r_eax+0x8a4u));
    /* 005e1843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1844: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1847: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e184cu); f_005e87aa();
    /* 005e184c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e184f: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e1852: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e1855: mov ecx, dword ptr [eax + edx + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx+0x20u));
    /* 005e1859: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e185a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e185d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e185f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1862: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5e1865u); call_ind(t); }
    /* 005e1865: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1868: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 005e186e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e186f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1872: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5e1877u); f_005e8740();
    /* 005e1877: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e187a: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 005e1880: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1881: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1884: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5e1889u); f_005e8775();
L_005e1889:; BB(0x005e1889);
    /* 005e1889: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e188c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e188e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1891: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5e1894u); call_ind(t); }
    /* 005e1894: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1897: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1898: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e189b: call 0x5e2772 */ r_esp -= 4; W32(r_esp, 0x5e18a0u); f_005e2772();
    /* 005e18a0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e18a3: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e18a6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e18a9: cmp dword ptr [eax + edx + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e18ae: je 0x5e18b8 */ if (fZ) goto L_005e18b8;
L_005e18b0:; BB(0x005e18b0);
    /* 005e18b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e18b3: call 0x5e3c28 */ r_esp -= 4; W32(r_esp, 0x5e18b8u); f_005e3c28();
L_005e18b8:; BB(0x005e18b8);
    /* 005e18b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e18bb: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e18be: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e18c1: cmp dword ptr [edx + ecx + 0x24], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x24u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e18c6: je 0x5e18ea */ if (fZ) goto L_005e18ea;
L_005e18c8:; BB(0x005e18c8);
    /* 005e18c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e18cb: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e18ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e18d1: mov edx, dword ptr [ecx + eax + 0x24] */ r_edx = R32((u32)(r_ecx+r_eax+0x24u));
    /* 005e18d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e18d6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e18d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e18db: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e18de: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e18e1u); call_ind(t); }
    /* 005e18e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e18e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e18e5: call 0x5e30f4 */ r_esp -= 4; W32(r_esp, 0x5e18eau); f_005e30f4();
L_005e18ea:; BB(0x005e18ea);
    /* 005e18ea: jmp 0x5e177f */ goto L_005e177f;
L_005e18ef:; BB(0x005e18ef);
    /* 005e18ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e18f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e18f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e18f3: ret 8 */ FN_RET(0x005e1505); r_esp += 12; return;
}

void f_005e18f6(void) /* FUN_005e18f6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e18f6);
    /* 005e18f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e18f7: mov ebp, esp */ r_ebp = r_esp;
    /* 005e18f9: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e18ff: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005e1905: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005e190c: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005e1913: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005e191a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e1921: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 005e1928: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 005e192f: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 005e1936: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 005e193d: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 005e1944: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 005e194b: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 005e1952: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005e1959: mov dword ptr [ebp - 0x64], 0xffffffff */ W32((u32)(r_ebp+0xffffff9cu), 0xffffffffu);
    /* 005e1960: mov dword ptr [ebp - 0x60], 0xffffffff */ W32((u32)(r_ebp+0xffffffa0u), 0xffffffffu);
    /* 005e1967: mov dword ptr [ebp - 0x5c], 0xfffffffe */ W32((u32)(r_ebp+0xffffffa4u), 0xfffffffeu);
    /* 005e196e: mov dword ptr [ebp - 0x58], 0xfffffffe */ W32((u32)(r_ebp+0xffffffa8u), 0xfffffffeu);
    /* 005e1975: mov dword ptr [ebp - 0x54], 0xfffffffd */ W32((u32)(r_ebp+0xffffffacu), 0xfffffffdu);
    /* 005e197c: mov dword ptr [ebp - 0x50], 0xfffffffd */ W32((u32)(r_ebp+0xffffffb0u), 0xfffffffdu);
    /* 005e1983: mov dword ptr [ebp - 0x4c], 0xfffffffc */ W32((u32)(r_ebp+0xffffffb4u), 0xfffffffcu);
    /* 005e198a: mov dword ptr [ebp - 0x48], 0xfffffffc */ W32((u32)(r_ebp+0xffffffb8u), 0xfffffffcu);
    /* 005e1991: mov dword ptr [ebp - 0x44], 0xfffffffb */ W32((u32)(r_ebp+0xffffffbcu), 0xfffffffbu);
    /* 005e1998: mov dword ptr [ebp - 0x40], 0xfffffffb */ W32((u32)(r_ebp+0xffffffc0u), 0xfffffffbu);
    /* 005e199f: mov dword ptr [ebp - 0x3c], 0xfffffffa */ W32((u32)(r_ebp+0xffffffc4u), 0xfffffffau);
    /* 005e19a6: mov dword ptr [ebp - 0x38], 0xfffffffa */ W32((u32)(r_ebp+0xffffffc8u), 0xfffffffau);
    /* 005e19ad: mov byte ptr [ebp - 0x7c], 0x50 */ W8((u32)(r_ebp+0xffffff84u), 0x50u);
    /* 005e19b1: mov byte ptr [ebp - 0x7b], 0x50 */ W8((u32)(r_ebp+0xffffff85u), 0x50u);
    /* 005e19b5: mov byte ptr [ebp - 0x7a], 0x50 */ W8((u32)(r_ebp+0xffffff86u), 0x50u);
    /* 005e19b9: mov byte ptr [ebp - 0x79], 0 */ W8((u32)(r_ebp+0xffffff87u), 0x0u);
    /* 005e19bd: mov byte ptr [ebp - 0x78], 0xff */ W8((u32)(r_ebp+0xffffff88u), 0xffu);
    /* 005e19c1: mov byte ptr [ebp - 0x77], 0xff */ W8((u32)(r_ebp+0xffffff89u), 0xffu);
    /* 005e19c5: mov byte ptr [ebp - 0x76], 0xff */ W8((u32)(r_ebp+0xffffff8au), 0xffu);
    /* 005e19c9: mov byte ptr [ebp - 0x75], 0 */ W8((u32)(r_ebp+0xffffff8bu), 0x0u);
    /* 005e19cd: mov byte ptr [ebp - 0x74], 0x50 */ W8((u32)(r_ebp+0xffffff8cu), 0x50u);
    /* 005e19d1: mov byte ptr [ebp - 0x73], 0x50 */ W8((u32)(r_ebp+0xffffff8du), 0x50u);
    /* 005e19d5: mov byte ptr [ebp - 0x72], 0x50 */ W8((u32)(r_ebp+0xffffff8eu), 0x50u);
    /* 005e19d9: mov byte ptr [ebp - 0x71], 0 */ W8((u32)(r_ebp+0xffffff8fu), 0x0u);
    /* 005e19dd: mov byte ptr [ebp - 0x70], 0xff */ W8((u32)(r_ebp+0xffffff90u), 0xffu);
    /* 005e19e1: mov byte ptr [ebp - 0x6f], 0xff */ W8((u32)(r_ebp+0xffffff91u), 0xffu);
    /* 005e19e5: mov byte ptr [ebp - 0x6e], 0xff */ W8((u32)(r_ebp+0xffffff92u), 0xffu);
    /* 005e19e9: mov byte ptr [ebp - 0x6d], 0 */ W8((u32)(r_ebp+0xffffff93u), 0x0u);
    /* 005e19ed: mov byte ptr [ebp - 0x6c], 0x50 */ W8((u32)(r_ebp+0xffffff94u), 0x50u);
    /* 005e19f1: mov byte ptr [ebp - 0x6b], 0x50 */ W8((u32)(r_ebp+0xffffff95u), 0x50u);
    /* 005e19f5: mov byte ptr [ebp - 0x6a], 0x50 */ W8((u32)(r_ebp+0xffffff96u), 0x50u);
    /* 005e19f9: mov byte ptr [ebp - 0x69], 0 */ W8((u32)(r_ebp+0xffffff97u), 0x0u);
    /* 005e19fd: mov byte ptr [ebp - 0x68], 0xdd */ W8((u32)(r_ebp+0xffffff98u), 0xddu);
    /* 005e1a01: mov byte ptr [ebp - 0x67], 0xdd */ W8((u32)(r_ebp+0xffffff99u), 0xddu);
    /* 005e1a05: mov byte ptr [ebp - 0x66], 0xdd */ W8((u32)(r_ebp+0xffffff9au), 0xddu);
    /* 005e1a09: mov byte ptr [ebp - 0x65], 0 */ W8((u32)(r_ebp+0xffffff9bu), 0x0u);
    /* 005e1a0d: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1a13: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1a1a: je 0x5e1a21 */ if (fZ) goto L_005e1a21;
L_005e1a1c:; BB(0x005e1a1c);
    /* 005e1a1c: jmp 0x5e1c47 */ goto L_005e1c47;
L_005e1a21:; BB(0x005e1a21);
    /* 005e1a21: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005e1a28: jmp 0x5e1a33 */ goto L_005e1a33;
L_005e1a2a:; BB(0x005e1a2a);
    /* 005e1a2a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1a2d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1a30: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_005e1a33:; BB(0x005e1a33);
    /* 005e1a33: cmp dword ptr [ebp - 0x34], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1a37: jge 0x5e1c47 */ if ((fS==fO)) goto L_005e1c47;
L_005e1a3d:; BB(0x005e1a3d);
    /* 005e1a3d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1a40: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1a46: cmp dword ptr [eax + edx*4 + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1a4e: jne 0x5e1bcf */ if (!fZ) goto L_005e1bcf;
L_005e1a54:; BB(0x005e1a54);
    /* 005e1a54: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e1a56: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e1a5bu); f_0048ab58();
    /* 005e1a5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1a5e: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005e1a61: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1a65: je 0x5e1a77 */ if (fZ) goto L_005e1a77;
L_005e1a67:; BB(0x005e1a67);
    /* 005e1a67: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005e1a6a: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x5e1a6fu); f_005e4bb0();
    /* 005e1a6f: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005e1a75: jmp 0x5e1a81 */ goto L_005e1a81;
L_005e1a77:; BB(0x005e1a77);
    /* 005e1a77: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_005e1a81:; BB(0x005e1a81);
    /* 005e1a81: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1a84: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1a8a: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005e1a90: mov dword ptr [edx + ecx*4 + 0x98], eax */ W32((u32)(r_edx+r_ecx*4+0x98u), r_eax);
    /* 005e1a97: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1a9a: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1aa0: mov eax, dword ptr [edx + ecx*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 005e1aa7: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1aad: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005e1ab0: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1ab6: call 0x5e0709 */ r_esp -= 4; W32(r_esp, 0x5e1abbu); f_005e0709();
    /* 005e1abb: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1abe: add eax, dword ptr [ebp + edx*8 - 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*8+0xffffffa0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1ac2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1ac3: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1ac9: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5e1aceu); f_005e06f2();
    /* 005e1ace: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1ad1: add eax, dword ptr [ebp + ecx*8 - 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*8+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1ad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1ad6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1ad9: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1adf: mov ecx, dword ptr [eax + edx*4 + 0x98] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 005e1ae6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1ae9: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1aef: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 005e1af6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e1af8: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5e1afbu); call_ind(t); }
    /* 005e1afb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1afe: mov edx, dword ptr [ebp + ecx*8 - 0x2c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffd4u));
    /* 005e1b02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1b03: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1b06: mov ecx, dword ptr [ebp + eax*8 - 0x30] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd0u));
    /* 005e1b0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1b0b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1b0e: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1b14: mov ecx, dword ptr [eax + edx*4 + 0x98] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 005e1b1b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1b1e: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1b24: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 005e1b2b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e1b2d: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5e1b30u); call_ind(t); }
    /* 005e1b30: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1b33: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1b39: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 005e1b40: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1b43: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1b49: mov eax, dword ptr [edx + eax*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_eax*4+0x98u));
    /* 005e1b50: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e1b52: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e1b55u); call_ind(t); }
    /* 005e1b55: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1b5b: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005e1b61: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e1b66u); f_005d9883();
    /* 005e1b66: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1b69: lea edx, [eax + ecx + 1] */ r_edx = (u32)(r_eax+r_ecx+0x1u);
    /* 005e1b6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1b6e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1b71: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1b77: mov ecx, dword ptr [ecx + eax*4 + 0x98] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 005e1b7e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1b81: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1b87: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 005e1b8e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e1b90: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5e1b93u); call_ind(t); }
    /* 005e1b93: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1b96: mov edx, dword ptr [ebp + ecx*4 - 0x7c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff84u));
    /* 005e1b9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1b9b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1b9e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1ba4: mov ecx, dword ptr [ecx + eax*4 + 0x98] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 005e1bab: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5e1bb0u); f_005e4eac();
    /* 005e1bb0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1bb3: mov eax, dword ptr [ebp + edx*4 - 0x7c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff84u));
    /* 005e1bb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1bb8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1bbb: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1bc1: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 005e1bc8: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5e1bcdu); f_005e4f18();
    /* 005e1bcd: jmp 0x5e1c42 */ goto L_005e1c42;
L_005e1bcf:; BB(0x005e1bcf);
    /* 005e1bcf: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1bd2: mov ecx, dword ptr [ebp + eax*8 - 0x2c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd4u));
    /* 005e1bd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1bd7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1bda: mov eax, dword ptr [ebp + edx*8 - 0x30] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd0u));
    /* 005e1bde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1bdf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1be2: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1be8: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 005e1bef: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1bf2: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1bf8: mov eax, dword ptr [edx + eax*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_eax*4+0x98u));
    /* 005e1bff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e1c01: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e1c04u); call_ind(t); }
    /* 005e1c04: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1c0a: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005e1c10: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e1c15u); f_005d9883();
    /* 005e1c15: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1c18: lea edx, [eax + ecx + 1] */ r_edx = (u32)(r_eax+r_ecx+0x1u);
    /* 005e1c1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c1d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1c20: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1c26: mov ecx, dword ptr [ecx + eax*4 + 0x98] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 005e1c2d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e1c30: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e1c36: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 005e1c3d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e1c3f: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5e1c42u); call_ind(t); }
L_005e1c42:; BB(0x005e1c42);
    /* 005e1c42: jmp 0x5e1a2a */ goto L_005e1a2a;
L_005e1c47:; BB(0x005e1c47);
    /* 005e1c47: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1c49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1c4a: ret  */ FN_RET(0x005e18f6); r_esp += 4; return;
}

void f_005e1c4b(void) /* FUN_005e1c4b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1c4b);
    /* 005e1c4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c4c: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1c4e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1c51: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e1c54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e1c5b: jmp 0x5e1c66 */ goto L_005e1c66;
L_005e1c5d:; BB(0x005e1c5d);
    /* 005e1c5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1c60: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1c63: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e1c66:; BB(0x005e1c66);
    /* 005e1c66: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1c69: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e1c6eu); f_005e24af();
    /* 005e1c6e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1c71: jge 0x5e1ca4 */ if ((fS==fO)) goto L_005e1ca4;
L_005e1c73:; BB(0x005e1c73);
    /* 005e1c73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1c76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c77: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1c7a: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e1c7fu); f_005e246d();
    /* 005e1c7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1c81: je 0x5e1ca2 */ if (fZ) goto L_005e1ca2;
L_005e1c83:; BB(0x005e1c83);
    /* 005e1c83: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e1c86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c87: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e1c8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1c8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1c92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c93: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1c96: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e1c9bu); f_005e246d();
    /* 005e1c9b: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1c9d: call 0x5e3798 */ r_esp -= 4; W32(r_esp, 0x5e1ca2u); f_005e3798();
L_005e1ca2:; BB(0x005e1ca2);
    /* 005e1ca2: jmp 0x5e1c5d */ goto L_005e1c5d;
L_005e1ca4:; BB(0x005e1ca4);
    /* 005e1ca4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1ca6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1ca7: ret 0xc */ FN_RET(0x005e1c4b); r_esp += 16; return;
}

void f_005e1caa(void) /* FUN_005e1caa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1caa);
    /* 005e1caa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1cab: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1cad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1cae: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e1cb1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e1cb4: mov ecx, dword ptr [eax + 0x8b0] */ r_ecx = R32((u32)(r_eax+0x8b0u));
    /* 005e1cba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1cbb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1cbe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e1cc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1cc3: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5e1cc6u); call_ind(t); }
    /* 005e1cc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1cc8: je 0x5e1cef */ if (fZ) goto L_005e1cef;
L_005e1cca:; BB(0x005e1cca);
    /* 005e1cca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1ccd: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e1cd2u); f_005e345f();
    /* 005e1cd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1cd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1cd6: call 0x5e1cfd */ r_esp -= 4; W32(r_esp, 0x5e1cdbu); f_005e1cfd();
    /* 005e1cdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1cde: call 0x5e1d6d */ r_esp -= 4; W32(r_esp, 0x5e1ce3u); f_005e1d6d();
    /* 005e1ce3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1ce4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1ce7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e1ce9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1cec: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x5e1cefu); call_ind(t); }
L_005e1cef:; BB(0x005e1cef);
    /* 005e1cef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1cf2: call 0x5e1f28 */ r_esp -= 4; W32(r_esp, 0x5e1cf7u); f_005e1f28();
    /* 005e1cf7: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1cf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1cfa: ret 4 */ FN_RET(0x005e1caa); r_esp += 8; return;
}

void f_005e1cfd(void) /* FUN_005e1cfd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1cfd);
    /* 005e1cfd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1cfe: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1d00: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1d03: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e1d06: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1d0a: jle 0x5e1d67 */ if ((fZ||fS!=fO)) goto L_005e1d67;
L_005e1d0c:; BB(0x005e1d0c);
    /* 005e1d0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1d0f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1d12: mov dword ptr [eax + 0xc0], ecx */ W32((u32)(r_eax+0xc0u), r_ecx);
    /* 005e1d18: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1d1b: cmp dword ptr [edx + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1d22: je 0x5e1d67 */ if (fZ) goto L_005e1d67;
L_005e1d24:; BB(0x005e1d24);
    /* 005e1d24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1d27: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1d2e: je 0x5e1d67 */ if (fZ) goto L_005e1d67;
L_005e1d30:; BB(0x005e1d30);
    /* 005e1d30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1d33: call 0x5e1d6d */ r_esp -= 4; W32(r_esp, 0x5e1d38u); f_005e1d6d();
    /* 005e1d38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1d39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1d3c: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x5e1d41u); f_005e24d8();
    /* 005e1d41: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e1d44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1d47: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e1d49: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1d4c: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5e1d4fu); call_ind(t); }
    /* 005e1d4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1d50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1d53: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005e1d59: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1d5c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005e1d62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e1d64: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5e1d67u); call_ind(t); }
L_005e1d67:; BB(0x005e1d67);
    /* 005e1d67: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1d69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1d6a: ret 4 */ FN_RET(0x005e1cfd); r_esp += 8; return;
}

void f_005e1d6d(void) /* FUN_005e1d6d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1d6d);
    /* 005e1d6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1d6e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1d70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1d71: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e1d74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1d77: mov eax, dword ptr [eax + 0xc0] */ r_eax = R32((u32)(r_eax+0xc0u));
    /* 005e1d7d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1d7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1d80: ret  */ FN_RET(0x005e1d6d); r_esp += 4; return;
}

void f_005e1d81(void) /* FUN_005e1d81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1d81);
    /* 005e1d81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1d82: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1d84: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1d87: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e1d8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e1d91: jmp 0x5e1d9c */ goto L_005e1d9c;
L_005e1d93:; BB(0x005e1d93);
    /* 005e1d93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1d96: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1d99: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e1d9c:; BB(0x005e1d9c);
    /* 005e1d9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1d9f: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e1da4u); f_005e24af();
    /* 005e1da4: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1da7: jge 0x5e1dde */ if ((fS==fO)) goto L_005e1dde;
L_005e1da9:; BB(0x005e1da9);
    /* 005e1da9: mov ecx, dword ptr [0x699ba8] */ r_ecx = R32((u32)(0x699ba8u));
    /* 005e1daf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1db0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1db3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1db4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1db7: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e1dbcu); f_005e246d();
    /* 005e1dbc: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1dbe: call 0x5e3bb0 */ r_esp -= 4; W32(r_esp, 0x5e1dc3u); f_005e3bb0();
    /* 005e1dc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1dc5: je 0x5e1ddc */ if (fZ) goto L_005e1ddc;
L_005e1dc7:; BB(0x005e1dc7);
    /* 005e1dc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1dca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1dcb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1dce: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e1dd3u); f_005e246d();
    /* 005e1dd3: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1dd5: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e1ddau); f_005e345f();
    /* 005e1dda: jmp 0x5e1de1 */ goto L_005e1de1;
L_005e1ddc:; BB(0x005e1ddc);
    /* 005e1ddc: jmp 0x5e1d93 */ goto L_005e1d93;
L_005e1dde:; BB(0x005e1dde);
    /* 005e1dde: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005e1de1:; BB(0x005e1de1);
    /* 005e1de1: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1de3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1de4: ret  */ FN_RET(0x005e1d81); r_esp += 4; return;
}

void f_005e1de5(void) /* FUN_005e1de5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1de5);
    /* 005e1de5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1de6: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1de8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1deb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1dec: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e1def: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1df2: cmp dword ptr [eax + 0xbc], 0 */ {  u32 a = R32((u32)(r_eax+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1df9: je 0x5e1e19 */ if (fZ) goto L_005e1e19;
L_005e1dfb:; BB(0x005e1dfb);
    /* 005e1dfb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1dfe: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 005e1e04: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e1e09u); f_005dd4d2();
    /* 005e1e09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e0b: je 0x5e1e19 */ if (fZ) goto L_005e1e19;
L_005e1e0d:; BB(0x005e1e0d);
    /* 005e1e0d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1e10: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x5e1e15u); f_005e07a3();
    /* 005e1e15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e17: je 0x5e1e1e */ if (fZ) goto L_005e1e1e;
L_005e1e19:; BB(0x005e1e19);
    /* 005e1e19: jmp 0x5e1f23 */ goto L_005e1f23;
L_005e1e1e:; BB(0x005e1e1e);
    /* 005e1e1e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1e21: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x5e1e26u); f_005e030e();
    /* 005e1e26: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1e29: cmp dword ptr [edx + 0xb8], 0 */ {  u32 a = R32((u32)(r_edx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e30: je 0x5e1e76 */ if (fZ) goto L_005e1e76;
L_005e1e32:; BB(0x005e1e32);
    /* 005e1e32: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1e35: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e3c: je 0x5e1e76 */ if (fZ) goto L_005e1e76;
L_005e1e3e:; BB(0x005e1e3e);
    /* 005e1e3e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1e41: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005e1e47: call 0x5e2d27 */ r_esp -= 4; W32(r_esp, 0x5e1e4cu); f_005e2d27();
    /* 005e1e4c: mov esi, eax */ r_esi = r_eax;
    /* 005e1e4e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1e51: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005e1e57: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e1e5cu); f_005d98da();
    /* 005e1e5c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e1e5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1e62: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005e1e68: call 0x5e2d00 */ r_esp -= 4; W32(r_esp, 0x5e1e6du); f_005e2d00();
    /* 005e1e6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e6e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1e71: call 0x5e215d */ r_esp -= 4; W32(r_esp, 0x5e1e76u); f_005e215d();
L_005e1e76:; BB(0x005e1e76);
    /* 005e1e76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1e79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e7a: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005e1e80: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e1e83: call 0x5e6094 */ r_esp -= 4; W32(r_esp, 0x5e1e88u); f_005e6094();
    /* 005e1e88: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1e8b: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005e1e91: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1e94: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e1e9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e1e9c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e1e9fu); call_ind(t); }
    /* 005e1e9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e1ea6: jmp 0x5e1eb1 */ goto L_005e1eb1;
L_005e1ea8:; BB(0x005e1ea8);
    /* 005e1ea8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1eab: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1eae: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e1eb1:; BB(0x005e1eb1);
    /* 005e1eb1: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1eb5: jge 0x5e1ee8 */ if ((fS==fO)) goto L_005e1ee8;
L_005e1eb7:; BB(0x005e1eb7);
    /* 005e1eb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1eba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1ebd: cmp dword ptr [edx + ecx*4 + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1ec5: je 0x5e1ee6 */ if (fZ) goto L_005e1ee6;
L_005e1ec7:; BB(0x005e1ec7);
    /* 005e1ec7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1eca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1ecd: mov ecx, dword ptr [ecx + eax*4 + 0x98] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 005e1ed4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1ed7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1eda: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 005e1ee1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e1ee3: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5e1ee6u); call_ind(t); }
L_005e1ee6:; BB(0x005e1ee6);
    /* 005e1ee6: jmp 0x5e1ea8 */ goto L_005e1ea8;
L_005e1ee8:; BB(0x005e1ee8);
    /* 005e1ee8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e1eef: jmp 0x5e1efa */ goto L_005e1efa;
L_005e1ef1:; BB(0x005e1ef1);
    /* 005e1ef1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1ef4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1ef7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e1efa:; BB(0x005e1efa);
    /* 005e1efa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1efd: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e1f02u); f_005e24af();
    /* 005e1f02: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1f05: jge 0x5e1f23 */ if ((fS==fO)) goto L_005e1f23;
L_005e1f07:; BB(0x005e1f07);
    /* 005e1f07: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1f0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1f0b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1f0e: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e1f13u); f_005e246d();
    /* 005e1f13: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e1f16: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1f19: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e1f1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1f1e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e1f21u); call_ind(t); }
    /* 005e1f21: jmp 0x5e1ef1 */ goto L_005e1ef1;
L_005e1f23:; BB(0x005e1f23);
    /* 005e1f23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1f24: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1f26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1f27: ret  */ FN_RET(0x005e1de5); r_esp += 4; return;
}

void f_005e1f28(void) /* FUN_005e1f28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1f28);
    /* 005e1f28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1f29: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1f2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1f2c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e1f2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1f32: call 0x5e078a */ r_esp -= 4; W32(r_esp, 0x5e1f37u); f_005e078a();
    /* 005e1f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1f39: je 0x5e1f40 */ if (fZ) goto L_005e1f40;
L_005e1f3b:; BB(0x005e1f3b);
    /* 005e1f3b: jmp 0x5e1fc3 */ goto L_005e1fc3;
L_005e1f40:; BB(0x005e1f40);
    /* 005e1f40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1f43: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x5e1f48u); f_005e03cc();
    /* 005e1f48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1f4a: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005e1f4f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e1f52: call 0x5e6094 */ r_esp -= 4; W32(r_esp, 0x5e1f57u); f_005e6094();
    /* 005e1f57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1f5a: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005e1f60: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1f63: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e1f69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e1f6b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e1f6eu); call_ind(t); }
    /* 005e1f6e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1f71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e1f73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1f76: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x5e1f79u); call_ind(t); }
    /* 005e1f79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1f7c: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1f83: je 0x5e1fc3 */ if (fZ) goto L_005e1fc3;
L_005e1f85:; BB(0x005e1f85);
    /* 005e1f85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1f88: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 005e1f8e: cmp dword ptr [edx + 0x888], 0 */ {  u32 a = R32((u32)(r_edx+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1f95: je 0x5e1fc3 */ if (fZ) goto L_005e1fc3;
L_005e1f97:; BB(0x005e1f97);
    /* 005e1f97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1f9a: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005e1fa0: mov ecx, dword ptr [ecx + 0x888] */ r_ecx = R32((u32)(r_ecx+0x888u));
    /* 005e1fa6: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x5e1fabu); f_005e07a3();
    /* 005e1fab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1fad: je 0x5e1fc3 */ if (fZ) goto L_005e1fc3;
L_005e1faf:; BB(0x005e1faf);
    /* 005e1faf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1fb2: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005e1fb8: mov ecx, dword ptr [eax + 0x888] */ r_ecx = R32((u32)(r_eax+0x888u));
    /* 005e1fbe: call 0x5e1f28 */ r_esp -= 4; W32(r_esp, 0x5e1fc3u); f_005e1f28();
L_005e1fc3:; BB(0x005e1fc3);
    /* 005e1fc3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1fc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1fc6: ret  */ FN_RET(0x005e1f28); r_esp += 4; return;
}

void f_005e1fc7(void) /* FUN_005e1fc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1fc7);
    /* 005e1fc7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1fc8: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1fca: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1fcd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e1fd0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1fd3: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x5e1fd8u); f_005e03cc();
    /* 005e1fd8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1fdb: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005e1fe1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e1fe4: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e1fea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e1fec: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e1fefu); call_ind(t); }
    /* 005e1fef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e1ff6: jmp 0x5e2001 */ goto L_005e2001;
L_005e1ff8:; BB(0x005e1ff8);
    /* 005e1ff8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1ffb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1ffe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e2001:; BB(0x005e2001);
    /* 005e2001: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2005: jge 0x5e2038 */ if ((fS==fO)) goto L_005e2038;
L_005e2007:; BB(0x005e2007);
    /* 005e2007: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e200a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e200d: cmp dword ptr [edx + ecx*4 + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2015: je 0x5e2036 */ if (fZ) goto L_005e2036;
L_005e2017:; BB(0x005e2017);
    /* 005e2017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e201a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e201d: mov ecx, dword ptr [ecx + eax*4 + 0x98] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 005e2024: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2027: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e202a: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 005e2031: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e2033: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5e2036u); call_ind(t); }
L_005e2036:; BB(0x005e2036);
    /* 005e2036: jmp 0x5e1ff8 */ goto L_005e1ff8;
L_005e2038:; BB(0x005e2038);
    /* 005e2038: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e203f: jmp 0x5e204a */ goto L_005e204a;
L_005e2041:; BB(0x005e2041);
    /* 005e2041: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2044: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2047: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e204a:; BB(0x005e204a);
    /* 005e204a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e204d: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e2052u); f_005e24af();
    /* 005e2052: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2055: jge 0x5e2073 */ if ((fS==fO)) goto L_005e2073;
L_005e2057:; BB(0x005e2057);
    /* 005e2057: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e205a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e205b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e205e: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e2063u); f_005e246d();
    /* 005e2063: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e2066: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2069: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e206b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e206e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e2071u); call_ind(t); }
    /* 005e2071: jmp 0x5e2041 */ goto L_005e2041;
L_005e2073:; BB(0x005e2073);
    /* 005e2073: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2075: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2076: ret  */ FN_RET(0x005e1fc7); r_esp += 4; return;
}

