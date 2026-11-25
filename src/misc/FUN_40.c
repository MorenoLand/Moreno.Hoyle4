#include "protos.h"

void f_005d58c5(void) /* FUN_005d58c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d58c5);
    /* 005d58c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d58c6: mov ebp, esp */ r_ebp = r_esp;
    /* 005d58c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d58c9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d58cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d58cf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d58d2: mov dword ptr [eax + 0x108], ecx */ W32((u32)(r_eax+0x108u), r_ecx);
    /* 005d58d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d58da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d58db: ret 4 */ FN_RET(0x005d58c5); r_esp += 8; return;
}

void f_005d58de(void) /* FUN_005d58de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d58de);
    /* 005d58de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d58df: mov ebp, esp */ r_ebp = r_esp;
    /* 005d58e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d58e2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d58e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d58e8: call 0x5d71cd */ r_esp -= 4; W32(r_esp, 0x5d58edu); f_005d71cd();
    /* 005d58ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d58f0: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d58f7: je 0x5d592f */ if (fZ) goto L_005d592f;
L_005d58f9:; BB(0x005d58f9);
    /* 005d58f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d58fc: cmp dword ptr [ecx + 0x9c], 3 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5903: je 0x5d5911 */ if (fZ) goto L_005d5911;
L_005d5905:; BB(0x005d5905);
    /* 005d5905: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5908: cmp dword ptr [edx + 0x9c], 1 */ {  u32 a = R32((u32)(r_edx+0x9cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d590f: jne 0x5d592f */ if (!fZ) goto L_005d592f;
L_005d5911:; BB(0x005d5911);
    /* 005d5911: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5914: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5918: je 0x5d592f */ if (fZ) goto L_005d592f;
L_005d591a:; BB(0x005d591a);
    /* 005d591a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d591d: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 005d5923: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5924: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5927: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d592a: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d592fu); f_005e87aa();
L_005d592f:; BB(0x005d592f);
    /* 005d592f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5931: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5932: ret  */ FN_RET(0x005d58de); r_esp += 4; return;
}

void f_005d5933(void) /* FUN_005d5933 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5933);
    /* 005d5933: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5934: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5936: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5937: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d593a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d593d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d593e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5941: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5d5946u); f_005d67b1();
    /* 005d5946: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5948: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5949: ret 4 */ FN_RET(0x005d5933); r_esp += 8; return;
}

void f_005d594c(void) /* FUN_005d594c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d594c);
    /* 005d594c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d594d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d594f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5950: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5953: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d5956: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5957: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d595a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d595b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d595e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d595f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5962: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5d5967u); f_005d69c8();
    /* 005d5967: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5969: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d596a: ret 0xc */ FN_RET(0x005d594c); r_esp += 16; return;
}

void f_005d596d(void) /* FUN_005d596d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d596d);
    /* 005d596d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d596e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5970: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5971: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5974: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5977: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d597e: je 0x5d5992 */ if (fZ) goto L_005d5992;
L_005d5980:; BB(0x005d5980);
    /* 005d5980: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5983: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5987: jne 0x5d5992 */ if (!fZ) goto L_005d5992;
L_005d5989:; BB(0x005d5989);
    /* 005d5989: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d598c: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5990: je 0x5d59a0 */ if (fZ) goto L_005d59a0;
L_005d5992:; BB(0x005d5992);
    /* 005d5992: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5995: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5996: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5999: call 0x5d4f1a */ r_esp -= 4; W32(r_esp, 0x5d599eu); f_005d4f1a();
    /* 005d599e: jmp 0x5d59f3 */ goto L_005d59f3;
L_005d59a0:; BB(0x005d59a0);
    /* 005d59a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d59a3: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d59a7: jne 0x5d59e7 */ if (!fZ) goto L_005d59e7;
L_005d59a9:; BB(0x005d59a9);
    /* 005d59a9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d59ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d59ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d59b0: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x5d59b5u); f_005d9738();
    /* 005d59b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d59b7: je 0x5d59e7 */ if (fZ) goto L_005d59e7;
L_005d59b9:; BB(0x005d59b9);
    /* 005d59b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d59bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d59bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d59c0: call 0x5d4f1a */ r_esp -= 4; W32(r_esp, 0x5d59c5u); f_005d4f1a();
    /* 005d59c5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d59c8: mov dword ptr [ecx + 0x18], 2 */ W32((u32)(r_ecx+0x18u), 0x2u);
    /* 005d59cf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d59d2: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 005d59d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d59dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d59dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d59e0: call 0x5d4f1a */ r_esp -= 4; W32(r_esp, 0x5d59e5u); f_005d4f1a();
    /* 005d59e5: jmp 0x5d59f3 */ goto L_005d59f3;
L_005d59e7:; BB(0x005d59e7);
    /* 005d59e7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d59ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d59eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d59ee: call 0x5d4f1a */ r_esp -= 4; W32(r_esp, 0x5d59f3u); f_005d4f1a();
L_005d59f3:; BB(0x005d59f3);
    /* 005d59f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d59f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d59f6: ret 4 */ FN_RET(0x005d596d); r_esp += 8; return;
}

void f_005d59f9(void) /* FUN_005d59f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d59f9);
    /* 005d59f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d59fa: mov ebp, esp */ r_ebp = r_esp;
    /* 005d59fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d59fd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5a00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5a03: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x5d5a08u); f_005d505b();
    /* 005d5a08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5a0b: mov dword ptr [eax], 0x63b54c */ W32((u32)(r_eax), 0x63b54cu);
    /* 005d5a11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5a14: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5a16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5a17: ret  */ FN_RET(0x005d59f9); r_esp += 4; return;
}

void f_005d5a18(void) /* FUN_005d5a18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5a18);
    /* 005d5a18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a19: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5a1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a1c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5a1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5a22: mov dword ptr [eax], 0x63b54c */ W32((u32)(r_eax), 0x63b54cu);
    /* 005d5a28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5a2b: call 0x5d5084 */ r_esp -= 4; W32(r_esp, 0x5d5a30u); f_005d5084();
    /* 005d5a30: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5a32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5a33: ret  */ FN_RET(0x005d5a18); r_esp += 4; return;
}

void f_005d5a61(void) /* FUN_005d5a61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5a61);
    /* 005d5a61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a62: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5a64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a65: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5a68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5a6b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5a6e: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
    /* 005d5a71: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5a74: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d5a77: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 005d5a7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5a7d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005d5a80: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 005d5a83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5a86: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005d5a89: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 005d5a8c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5a8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5a8f: ret 0x10 */ FN_RET(0x005d5a61); r_esp += 20; return;
}

void f_005d5a92(void) /* FUN_005d5a92 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5a92);
    /* 005d5a92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a93: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5a95: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5a98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a99: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d5a9c: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d5aa2: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d5aa8: jmp 0x5d5ab6 */ goto L_005d5ab6;
L_005d5aaa:; BB(0x005d5aaa);
    /* 005d5aaa: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005d5aae: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d5ab2: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_005d5ab6:; BB(0x005d5ab6);
    /* 005d5ab6: movsx esi, word ptr [ebp - 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d5aba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5abd: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d5ac0: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d5ac5u); f_005dd4d2();
    /* 005d5ac5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5ac7: jge 0x5d5b00 */ if ((fS==fO)) goto L_005d5b00;
L_005d5ac9:; BB(0x005d5ac9);
    /* 005d5ac9: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d5acd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5ace: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5ad1: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005d5ad4: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d5ad9u); f_005dd560();
    /* 005d5ad9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d5adc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5adf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d5ae1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5ae4: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d5ae7u); call_ind(t); }
    /* 005d5ae7: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d5aeb: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5aed: jle 0x5d5afe */ if ((fZ||fS!=fO)) goto L_005d5afe;
L_005d5aef:; BB(0x005d5aef);
    /* 005d5aef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5af2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d5af4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5af7: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5d5afau); call_ind(t); }
    /* 005d5afa: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_005d5afe:; BB(0x005d5afe);
    /* 005d5afe: jmp 0x5d5aaa */ goto L_005d5aaa;
L_005d5b00:; BB(0x005d5b00);
    /* 005d5b00: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5b03: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d5b05: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5b08: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d5b0bu); call_ind(t); }
    /* 005d5b0b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d5b0f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b11: jne 0x5d5b7a */ if (!fZ) goto L_005d5b7a;
L_005d5b13:; BB(0x005d5b13);
    /* 005d5b13: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d5b19: jmp 0x5d5b27 */ goto L_005d5b27;
L_005d5b1b:; BB(0x005d5b1b);
    /* 005d5b1b: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005d5b1f: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d5b23: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
L_005d5b27:; BB(0x005d5b27);
    /* 005d5b27: movsx esi, word ptr [ebp - 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d5b2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5b2e: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005d5b31: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d5b36u); f_005dd4d2();
    /* 005d5b36: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5b38: jge 0x5d5b75 */ if ((fS==fO)) goto L_005d5b75;
L_005d5b3a:; BB(0x005d5b3a);
    /* 005d5b3a: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d5b3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5b3f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5b42: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d5b45: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d5b4au); f_005dd560();
    /* 005d5b4a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d5b4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5b50: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5b52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5b55: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d5b58u); call_ind(t); }
    /* 005d5b58: mov esi, eax */ r_esi = r_eax;
    /* 005d5b5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5b5d: call 0x5d5688 */ r_esp -= 4; W32(r_esp, 0x5d5b62u); f_005d5688();
    /* 005d5b62: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005d5b65: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d5b67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d5b68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5b6b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d5b6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5b70: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d5b73u); call_ind(t); }
    /* 005d5b73: jmp 0x5d5b1b */ goto L_005d5b1b;
L_005d5b75:; BB(0x005d5b75);
    /* 005d5b75: jmp 0x5d5c52 */ goto L_005d5c52;
L_005d5b7a:; BB(0x005d5b7a);
    /* 005d5b7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5b7d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5b7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5b82: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d5b85u); call_ind(t); }
    /* 005d5b85: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 005d5b89: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d5b8f: jmp 0x5d5b9d */ goto L_005d5b9d;
L_005d5b91:; BB(0x005d5b91);
    /* 005d5b91: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005d5b95: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005d5b99: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_005d5b9d:; BB(0x005d5b9d);
    /* 005d5b9d: movsx esi, word ptr [ebp - 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d5ba1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5ba4: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d5ba7: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5d5bacu); f_005dd4d2();
    /* 005d5bac: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5bae: jge 0x5d5c52 */ if ((fS==fO)) goto L_005d5c52;
L_005d5bb4:; BB(0x005d5bb4);
    /* 005d5bb4: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005d5bb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5bb9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5bbc: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005d5bbf: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5d5bc4u); f_005dd560();
    /* 005d5bc4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d5bc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5bca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d5bcc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5bcf: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d5bd2u); call_ind(t); }
    /* 005d5bd2: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005d5bd6: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5bd8: jne 0x5d5bf8 */ if (!fZ) goto L_005d5bf8;
L_005d5bda:; BB(0x005d5bda);
    /* 005d5bda: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d5bde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5bdf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5be2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5be4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5be7: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5d5beau); call_ind(t); }
    /* 005d5bea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5beb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5bee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5bf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5bf3: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5d5bf6u); call_ind(t); }
    /* 005d5bf6: jmp 0x5d5c27 */ goto L_005d5c27;
L_005d5bf8:; BB(0x005d5bf8);
    /* 005d5bf8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5bfb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5bfd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c00: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d5c03u); call_ind(t); }
    /* 005d5c03: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005d5c07: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5c09: jne 0x5d5c27 */ if (!fZ) goto L_005d5c27;
L_005d5c0b:; BB(0x005d5c0b);
    /* 005d5c0b: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005d5c0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c13: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5c15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c18: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5d5c1bu); call_ind(t); }
    /* 005d5c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5c21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c24: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5d5c27u); call_ind(t); }
L_005d5c27:; BB(0x005d5c27);
    /* 005d5c27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5c2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c2f: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d5c32u); call_ind(t); }
    /* 005d5c32: mov esi, eax */ r_esi = r_eax;
    /* 005d5c34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c37: call 0x5d5688 */ r_esp -= 4; W32(r_esp, 0x5d5c3cu); f_005d5688();
    /* 005d5c3c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005d5c3f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d5c41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c45: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d5c47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c4a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d5c4du); call_ind(t); }
    /* 005d5c4d: jmp 0x5d5b91 */ goto L_005d5b91;
L_005d5c52:; BB(0x005d5c52);
    /* 005d5c52: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d5c53: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5c55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5c56: ret 4 */ FN_RET(0x005d5a92); r_esp += 8; return;
}

void f_005d5c60(void) /* FUN_005d5c60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5c60);
    /* 005d5c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5c67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c6a: call 0x5d4efe */ r_esp -= 4; W32(r_esp, 0x5d5c6fu); f_005d4efe();
    /* 005d5c6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5c72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d5c75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5c77: je 0x5d5c85 */ if (fZ) goto L_005d5c85;
L_005d5c79:; BB(0x005d5c79);
    /* 005d5c79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c7d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d5c82u); f_0048ac1b();
    /* 005d5c82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d5c85:; BB(0x005d5c85);
    /* 005d5c85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c88: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5c8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5c8b: ret 4 */ FN_RET(0x005d5c60); r_esp += 8; return;
}

void f_005d5c90(void) /* FUN_005d5c90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5c90);
    /* 005d5c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c91: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5c97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5c9a: call 0x5d5084 */ r_esp -= 4; W32(r_esp, 0x5d5c9fu); f_005d5084();
    /* 005d5c9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5ca2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d5ca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5ca7: je 0x5d5cb5 */ if (fZ) goto L_005d5cb5;
L_005d5ca9:; BB(0x005d5ca9);
    /* 005d5ca9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5cac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5cad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d5cb2u); f_0048ac1b();
    /* 005d5cb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d5cb5:; BB(0x005d5cb5);
    /* 005d5cb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5cb8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5cba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5cbb: ret 4 */ FN_RET(0x005d5c90); r_esp += 8; return;
}

void f_005d5cc0(void) /* FUN_005d5cc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5cc0);
    /* 005d5cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5cc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5cc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5cca: call 0x5d555c */ r_esp -= 4; W32(r_esp, 0x5d5ccfu); f_005d555c();
    /* 005d5ccf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5cd2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d5cd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5cd7: je 0x5d5ce5 */ if (fZ) goto L_005d5ce5;
L_005d5cd9:; BB(0x005d5cd9);
    /* 005d5cd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5cdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5cdd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d5ce2u); f_0048ac1b();
    /* 005d5ce2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d5ce5:; BB(0x005d5ce5);
    /* 005d5ce5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5ce8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5cea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5ceb: ret 4 */ FN_RET(0x005d5cc0); r_esp += 8; return;
}

void f_005d5cf0(void) /* FUN_005d5cf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5cf0);
    /* 005d5cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5cf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5cf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5cf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5cfa: call 0x5d5a18 */ r_esp -= 4; W32(r_esp, 0x5d5cffu); f_005d5a18();
    /* 005d5cff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5d02: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d5d05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5d07: je 0x5d5d15 */ if (fZ) goto L_005d5d15;
L_005d5d09:; BB(0x005d5d09);
    /* 005d5d09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d0d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d5d12u); f_0048ac1b();
    /* 005d5d12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d5d15:; BB(0x005d5d15);
    /* 005d5d15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d18: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5d1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5d1b: ret 4 */ FN_RET(0x005d5cf0); r_esp += 8; return;
}

void f_005d5d20(void) /* FUN_005d5d20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5d20);
    /* 005d5d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d21: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5d27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d2a: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5d5d2fu); f_005e3fb0();
    /* 005d5d2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d32: mov dword ptr [eax], 0x63b594 */ W32((u32)(r_eax), 0x63b594u);
    /* 005d5d38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d3b: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 005d5d45: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d48: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
    /* 005d5d4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d52: call 0x5d603a */ r_esp -= 4; W32(r_esp, 0x5d5d57u); f_005d603a();
    /* 005d5d57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d5a: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 005d5d61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d64: mov dword ptr [ecx + 0x80], 1 */ W32((u32)(r_ecx+0x80u), 0x1u);
    /* 005d5d6e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d71: mov byte ptr [edx + 0x84], 0 */ W8((u32)(r_edx+0x84u), 0x0u);
    /* 005d5d78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d7b: mov byte ptr [eax + 0x85], 0 */ W8((u32)(r_eax+0x85u), 0x0u);
    /* 005d5d82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d85: mov byte ptr [ecx + 0x86], 0 */ W8((u32)(r_ecx+0x86u), 0x0u);
    /* 005d5d8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d8f: mov dword ptr [edx + 0xa8], 2 */ W32((u32)(r_edx+0xa8u), 0x2u);
    /* 005d5d99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5d9c: mov dword ptr [eax + 0xac], 2 */ W32((u32)(r_eax+0xacu), 0x2u);
    /* 005d5da6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5da9: mov dword ptr [ecx + 0xb0], 2 */ W32((u32)(r_ecx+0xb0u), 0x2u);
    /* 005d5db3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5db6: mov dword ptr [edx + 0x88], 0x30 */ W32((u32)(r_edx+0x88u), 0x30u);
    /* 005d5dc0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5dc3: mov dword ptr [eax + 0xa0], 0xffffffff */ W32((u32)(r_eax+0xa0u), 0xffffffffu);
    /* 005d5dcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5dd0: mov dword ptr [ecx + 0xa4], 0xffffffff */ W32((u32)(r_ecx+0xa4u), 0xffffffffu);
    /* 005d5dda: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5ddd: mov dword ptr [edx + 0xc4], 0 */ W32((u32)(r_edx+0xc4u), 0x0u);
    /* 005d5de7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5dea: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 005d5df4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5df7: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5df9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5dfa: ret  */ FN_RET(0x005d5d20); r_esp += 4; return;
}

void f_005d5dfb(void) /* FUN_005d5dfb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5dfb);
    /* 005d5dfb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5dfc: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5dfe: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5e01: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d5e04: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5e07: mov dword ptr [eax], 0x63b594 */ W32((u32)(r_eax), 0x63b594u);
    /* 005d5e0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5e10: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e14: je 0x5d5e4d */ if (fZ) goto L_005d5e4d;
L_005d5e16:; BB(0x005d5e16);
    /* 005d5e16: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5e19: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d5e1c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d5e1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5e22: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5e25: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e29: je 0x5d5e3c */ if (fZ) goto L_005d5e3c;
L_005d5e2b:; BB(0x005d5e2b);
    /* 005d5e2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5e2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5e30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d5e32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5e35: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5d5e37u); call_ind(t); }
    /* 005d5e37: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d5e3a: jmp 0x5d5e43 */ goto L_005d5e43;
L_005d5e3c:; BB(0x005d5e3c);
    /* 005d5e3c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d5e43:; BB(0x005d5e43);
    /* 005d5e43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5e46: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_005d5e4d:; BB(0x005d5e4d);
    /* 005d5e4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5e50: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x5d5e55u); f_005e3fed();
    /* 005d5e55: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5e57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5e58: ret  */ FN_RET(0x005d5dfb); r_esp += 4; return;
}

void f_005d5e59(void) /* FUN_005d5e59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5e59);
    /* 005d5e59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5e5a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5e5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5e5f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d5e62: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5e65: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x5d5e6au); f_005e4035();
    /* 005d5e6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5e6d: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e71: je 0x5d5f87 */ if (fZ) goto L_005d5f87;
L_005d5e77:; BB(0x005d5e77);
    /* 005d5e77: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e7b: jne 0x5d5e88 */ if (!fZ) goto L_005d5e88;
L_005d5e7d:; BB(0x005d5e7d);
    /* 005d5e7d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5e80: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5d5e85u); f_005d98c3();
    /* 005d5e85: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005d5e88:; BB(0x005d5e88);
    /* 005d5e88: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e8c: jne 0x5d5e99 */ if (!fZ) goto L_005d5e99;
L_005d5e8e:; BB(0x005d5e8e);
    /* 005d5e8e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5e91: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5d5e96u); f_005d98da();
    /* 005d5e96: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005d5e99:; BB(0x005d5e99);
    /* 005d5e99: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5e9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5e9d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5ea0: call 0x5d9916 */ r_esp -= 4; W32(r_esp, 0x5d5ea5u); f_005d9916();
    /* 005d5ea5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d5ea8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5ea9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5eac: call 0x5d9932 */ r_esp -= 4; W32(r_esp, 0x5d5eb1u); f_005d9932();
    /* 005d5eb1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5eb4: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5d5eb9u); f_005d9883();
    /* 005d5eb9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5ebd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5ec0: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d5ec3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5ec6: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d5ec9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5ecb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d5eceu); call_ind(t); }
    /* 005d5ece: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005d5ed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5ed2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5ed5: call 0x5ea5d5 */ r_esp -= 4; W32(r_esp, 0x5d5edau); f_005ea5d5();
    /* 005d5eda: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5edd: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d5ee3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5ee5: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005d5ee7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d5eea: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005d5eed: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d5ef0: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005d5ef3: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005d5ef6: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005d5ef9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5efc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5eff: mov eax, dword ptr [ecx + 0xbc] */ r_eax = R32((u32)(r_ecx+0xbcu));
    /* 005d5f05: sub eax, dword ptr [edx + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d5f0b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5f0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f0f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f12: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d5f15: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5d5f1au); f_005e8740();
    /* 005d5f1a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f1d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f20: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 005d5f26: sub ecx, dword ptr [eax + 0xb8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d5f2c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d5f2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f33: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d5f36: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5d5f3bu); f_005e8775();
    /* 005d5f3b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f3e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5f40: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f43: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d5f46u); call_ind(t); }
    /* 005d5f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f49: add eax, dword ptr [ecx + 0xb8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5f4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f53: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d5f55: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f58: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x5d5f5bu); call_ind(t); }
    /* 005d5f5b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f5e: add eax, dword ptr [ecx + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5f64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f65: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f68: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d5f6b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f6e: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 005d5f71: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d5f73: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5d5f76u); call_ind(t); }
    /* 005d5f76: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f79: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d5f7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5f7f: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d5f82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5f84: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5d5f87u); call_ind(t); }
L_005d5f87:; BB(0x005d5f87);
    /* 005d5f87: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5f89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5f8a: ret 8 */ FN_RET(0x005d5e59); r_esp += 12; return;
}

void f_005d5f8d(void) /* FUN_005d5f8d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5f8d);
    /* 005d5f8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f8e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5f90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f91: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5f94: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f96: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f98: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5f9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5f9f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d5fa1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5fa4: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5d5fa7u); call_ind(t); }
    /* 005d5fa7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d5faa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5fae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d5fb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5fb3: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5d5fb6u); call_ind(t); }
    /* 005d5fb6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d5fb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5fbd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d5fbf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5fc2: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5d5fc5u); call_ind(t); }
    /* 005d5fc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fc9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5fcc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5fce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5fd1: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d5fd4u); call_ind(t); }
    /* 005d5fd4: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005d5fd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fd8: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005d5fdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fdc: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005d5fdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fe0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d5fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fe4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5fe7: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x5d5fecu); f_005e9f50();
    /* 005d5fec: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5fee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5fef: ret 0x18 */ FN_RET(0x005d5f8d); r_esp += 28; return;
}

void f_005d5ff2(void) /* FUN_005d5ff2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5ff2);
    /* 005d5ff2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5ff3: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5ff5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5ff6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5ff9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5ffc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5fff: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
    /* 005d6005: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6008: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d600b: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 005d6011: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6014: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005d6017: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 005d601d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6020: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005d6023: mov dword ptr [eax + 0x98], ecx */ W32((u32)(r_eax+0x98u), r_ecx);
    /* 005d6029: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d602c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d602e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6031: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5d6034u); call_ind(t); }
    /* 005d6034: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6036: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6037: ret 0x10 */ FN_RET(0x005d5ff2); r_esp += 20; return;
}

void f_005d603a(void) /* FUN_005d603a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d603a);
    /* 005d603a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d603b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d603d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d603e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6041: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6044: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 005d604e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6051: mov dword ptr [ecx + 0x90], 1 */ W32((u32)(r_ecx+0x90u), 0x1u);
    /* 005d605b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d605e: mov dword ptr [edx + 0x94], 2 */ W32((u32)(r_edx+0x94u), 0x2u);
    /* 005d6068: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d606b: mov dword ptr [eax + 0x98], 3 */ W32((u32)(r_eax+0x98u), 0x3u);
    /* 005d6075: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6078: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d607a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d607d: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5d6080u); call_ind(t); }
    /* 005d6080: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6082: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6083: ret  */ FN_RET(0x005d603a); r_esp += 4; return;
}

void f_005d6084(void) /* FUN_005d6084 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6084);
    /* 005d6084: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6085: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6087: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d608a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d608d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6090: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6097: je 0x5d60a2 */ if (fZ) goto L_005d60a2;
L_005d6099:; BB(0x005d6099);
    /* 005d6099: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d609c: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d60a0: je 0x5d60a9 */ if (fZ) goto L_005d60a9;
L_005d60a2:; BB(0x005d60a2);
    /* 005d60a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d60a4: jmp 0x5d64f4 */ goto L_005d64f4;
L_005d60a9:; BB(0x005d60a9);
    /* 005d60a9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d60ac: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005d60af: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d60b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d60b5: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d60b8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d60bb: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d60bf: ja 0x5d64ee */ if ((!fC&&!fZ)) goto L_005d64ee;
L_005d60c5:; BB(0x005d60c5);
    /* 005d60c5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d60c8: jmp dword ptr [edx*4 + 0x5d64fa] */ { u32 t = R32((u32)(r_edx*4+0x5d64fau)); switch (t) { case 0x5d60cfu: goto L_005d60cf; case 0x5d62e8u: goto L_005d62e8; case 0x5d623fu: goto L_005d623f; case 0x5d6408u: goto L_005d6408; default: UNSUP(0x005d60c8, "jump table entry is not a known target"); } }
L_005d60cf:; BB(0x005d60cf);
    /* 005d60cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d60d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d60d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d60d6: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x5d60dbu); f_005d9738();
    /* 005d60db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d60dd: jne 0x5d60e8 */ if (!fZ) goto L_005d60e8;
L_005d60df:; BB(0x005d60df);
    /* 005d60df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d60e2: cmp dword ptr [ecx + 0x7c], 0 */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d60e6: je 0x5d60f1 */ if (fZ) goto L_005d60f1;
L_005d60e8:; BB(0x005d60e8);
    /* 005d60e8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d60eb: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d60ef: je 0x5d60f6 */ if (fZ) goto L_005d60f6;
L_005d60f1:; BB(0x005d60f1);
    /* 005d60f1: jmp 0x5d64ee */ goto L_005d64ee;
L_005d60f6:; BB(0x005d60f6);
    /* 005d60f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d60f9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005d60fc: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005d60ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6101: je 0x5d6198 */ if (fZ) goto L_005d6198;
L_005d6107:; BB(0x005d6107);
    /* 005d6107: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d610a: cmp dword ptr [edx + 0x7c], 0 */ {  u32 a = R32((u32)(r_edx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d610e: jne 0x5d6198 */ if (!fZ) goto L_005d6198;
L_005d6114:; BB(0x005d6114);
    /* 005d6114: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6117: mov dword ptr [eax + 0x7c], 1 */ W32((u32)(r_eax+0x7cu), 0x1u);
    /* 005d611e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6121: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6122: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6125: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d6128: call 0x5e0747 */ r_esp -= 4; W32(r_esp, 0x5d612du); f_005e0747();
    /* 005d612d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d612f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6132: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d6137u); f_005d6635();
    /* 005d6137: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d613a: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 005d6141: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6144: cmp dword ptr [ecx + 0xa0], -1 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d614b: je 0x5d6198 */ if (fZ) goto L_005d6198;
L_005d614d:; BB(0x005d614d);
    /* 005d614d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005d614f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d6154u); f_0048ab58();
    /* 005d6154: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d6157: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d615a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d615e: je 0x5d6185 */ if (fZ) goto L_005d6185;
L_005d6160:; BB(0x005d6160);
    /* 005d6160: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6162: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6165: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5d616au); f_005e6160();
    /* 005d616a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d616d: mov dword ptr [edx], 0x63b604 */ W32((u32)(r_edx), 0x63b604u);
    /* 005d6173: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6176: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 005d617d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6180: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d6183: jmp 0x5d618c */ goto L_005d618c;
L_005d6185:; BB(0x005d6185);
    /* 005d6185: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005d618c:; BB(0x005d618c);
    /* 005d618c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d618f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6190: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6193: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5d6198u); f_005e40dc();
L_005d6198:; BB(0x005d6198);
    /* 005d6198: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d619b: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005d619e: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005d61a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d61a3: je 0x5d623a */ if (fZ) goto L_005d623a;
L_005d61a9:; BB(0x005d61a9);
    /* 005d61a9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d61ac: cmp dword ptr [edx + 0x7c], 0 */ {  u32 a = R32((u32)(r_edx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d61b0: jne 0x5d623a */ if (!fZ) goto L_005d623a;
L_005d61b6:; BB(0x005d61b6);
    /* 005d61b6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d61b9: mov dword ptr [eax + 0x7c], 1 */ W32((u32)(r_eax+0x7cu), 0x1u);
    /* 005d61c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d61c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d61c4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d61c7: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d61ca: call 0x5e0747 */ r_esp -= 4; W32(r_esp, 0x5d61cfu); f_005e0747();
    /* 005d61cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d61d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d61d4: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d61d9u); f_005d6635();
    /* 005d61d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d61dc: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 005d61e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d61e6: cmp dword ptr [ecx + 0xa0], -1 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d61ed: je 0x5d623a */ if (fZ) goto L_005d623a;
L_005d61ef:; BB(0x005d61ef);
    /* 005d61ef: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005d61f1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d61f6u); f_0048ab58();
    /* 005d61f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d61f9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d61fc: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6200: je 0x5d6227 */ if (fZ) goto L_005d6227;
L_005d6202:; BB(0x005d6202);
    /* 005d6202: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6204: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6207: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5d620cu); f_005e6160();
    /* 005d620c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d620f: mov dword ptr [edx], 0x63b604 */ W32((u32)(r_edx), 0x63b604u);
    /* 005d6215: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6218: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 005d621f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6222: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d6225: jmp 0x5d622e */ goto L_005d622e;
L_005d6227:; BB(0x005d6227);
    /* 005d6227: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005d622e:; BB(0x005d622e);
    /* 005d622e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6232: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6235: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5d623au); f_005e40dc();
L_005d623a:; BB(0x005d623a);
    /* 005d623a: jmp 0x5d64ee */ goto L_005d64ee;
L_005d623f:; BB(0x005d623f);
    /* 005d623f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6242: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6246: je 0x5d6291 */ if (fZ) goto L_005d6291;
L_005d6248:; BB(0x005d6248);
    /* 005d6248: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d624b: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 005d6252: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d6255: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005d6258: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6259: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d625c: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005d625f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6260: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6263: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6265: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6268: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d626bu); call_ind(t); }
    /* 005d626b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d626d: jne 0x5d6285 */ if (!fZ) goto L_005d6285;
L_005d626f:; BB(0x005d626f);
    /* 005d626f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6271: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6274: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d6279u); f_005d6635();
    /* 005d6279: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d627b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d627e: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5d6283u); f_005e40dc();
    /* 005d6283: jmp 0x5d628f */ goto L_005d628f;
L_005d6285:; BB(0x005d6285);
    /* 005d6285: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6287: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d628a: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d628fu); f_005d6635();
L_005d628f:; BB(0x005d628f);
    /* 005d628f: jmp 0x5d62e3 */ goto L_005d62e3;
L_005d6291:; BB(0x005d6291);
    /* 005d6291: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6294: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d6297: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6298: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d629b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d629e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d629f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d62a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d62a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d62a7: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d62aau); call_ind(t); }
    /* 005d62aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d62ac: je 0x5d62d9 */ if (fZ) goto L_005d62d9;
L_005d62ae:; BB(0x005d62ae);
    /* 005d62ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d62b1: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d62b5: je 0x5d62c3 */ if (fZ) goto L_005d62c3;
L_005d62b7:; BB(0x005d62b7);
    /* 005d62b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d62b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d62bc: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d62c1u); f_005d6635();
    /* 005d62c1: jmp 0x5d62d7 */ goto L_005d62d7;
L_005d62c3:; BB(0x005d62c3);
    /* 005d62c3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d62c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d62c8: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d62cdu); f_005d6635();
    /* 005d62cd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d62d0: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_005d62d7:; BB(0x005d62d7);
    /* 005d62d7: jmp 0x5d62e3 */ goto L_005d62e3;
L_005d62d9:; BB(0x005d62d9);
    /* 005d62d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d62db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d62de: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d62e3u); f_005d6635();
L_005d62e3:; BB(0x005d62e3);
    /* 005d62e3: jmp 0x5d64ee */ goto L_005d64ee;
L_005d62e8:; BB(0x005d62e8);
    /* 005d62e8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d62eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d62ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d62ef: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x5d62f4u); f_005d9738();
    /* 005d62f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d62f6: jne 0x5d6301 */ if (!fZ) goto L_005d6301;
L_005d62f8:; BB(0x005d62f8);
    /* 005d62f8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d62fb: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d62ff: je 0x5d630a */ if (fZ) goto L_005d630a;
L_005d6301:; BB(0x005d6301);
    /* 005d6301: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d6304: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6308: je 0x5d630f */ if (fZ) goto L_005d630f;
L_005d630a:; BB(0x005d630a);
    /* 005d630a: jmp 0x5d64ee */ goto L_005d64ee;
L_005d630f:; BB(0x005d630f);
    /* 005d630f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6311: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6314: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5d6319u); f_005e40dc();
    /* 005d6319: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d631c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005d631f: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d6322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6324: je 0x5d638e */ if (fZ) goto L_005d638e;
L_005d6326:; BB(0x005d6326);
    /* 005d6326: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6329: cmp dword ptr [ecx + 0x7c], 0 */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d632d: je 0x5d638e */ if (fZ) goto L_005d638e;
L_005d632f:; BB(0x005d632f);
    /* 005d632f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6331: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6334: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d6337: call 0x5e0747 */ r_esp -= 4; W32(r_esp, 0x5d633cu); f_005e0747();
    /* 005d633c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d633f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d6342: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6343: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d6346: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d6349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d634a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d634d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d634f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6352: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d6355u); call_ind(t); }
    /* 005d6355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6357: je 0x5d6370 */ if (fZ) goto L_005d6370;
L_005d6359:; BB(0x005d6359);
    /* 005d6359: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d635b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d635e: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d6363u); f_005d6635();
    /* 005d6363: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6366: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6368: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d636b: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5d636eu); call_ind(t); }
    /* 005d636e: jmp 0x5d637a */ goto L_005d637a;
L_005d6370:; BB(0x005d6370);
    /* 005d6370: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6372: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6375: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d637au); f_005d6635();
L_005d637a:; BB(0x005d637a);
    /* 005d637a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d637d: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 005d6384: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d6387: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_005d638e:; BB(0x005d638e);
    /* 005d638e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d6391: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005d6394: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d6397: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6399: je 0x5d6403 */ if (fZ) goto L_005d6403;
L_005d639b:; BB(0x005d639b);
    /* 005d639b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d639e: cmp dword ptr [ecx + 0x7c], 0 */ {  u32 a = R32((u32)(r_ecx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d63a2: je 0x5d6403 */ if (fZ) goto L_005d6403;
L_005d63a4:; BB(0x005d63a4);
    /* 005d63a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d63a6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d63a9: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d63ac: call 0x5e0747 */ r_esp -= 4; W32(r_esp, 0x5d63b1u); f_005e0747();
    /* 005d63b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d63b4: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d63b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d63b8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d63bb: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d63be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d63bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d63c2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d63c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d63c7: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d63cau); call_ind(t); }
    /* 005d63ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d63cc: je 0x5d63e5 */ if (fZ) goto L_005d63e5;
L_005d63ce:; BB(0x005d63ce);
    /* 005d63ce: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d63d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d63d3: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d63d8u); f_005d6635();
    /* 005d63d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d63db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d63dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d63e0: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x5d63e3u); call_ind(t); }
    /* 005d63e3: jmp 0x5d63ef */ goto L_005d63ef;
L_005d63e5:; BB(0x005d63e5);
    /* 005d63e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d63e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d63ea: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d63efu); f_005d6635();
L_005d63ef:; BB(0x005d63ef);
    /* 005d63ef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d63f2: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 005d63f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d63fc: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
L_005d6403:; BB(0x005d6403);
    /* 005d6403: jmp 0x5d64ee */ goto L_005d64ee;
L_005d6408:; BB(0x005d6408);
    /* 005d6408: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d640b: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d640f: je 0x5d6416 */ if (fZ) goto L_005d6416;
L_005d6411:; BB(0x005d6411);
    /* 005d6411: jmp 0x5d64ee */ goto L_005d64ee;
L_005d6416:; BB(0x005d6416);
    /* 005d6416: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6419: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 005d641d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d641e: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x5d6423u); f_00624600();
    /* 005d6423: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d6426: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6429: movsx ecx, byte ptr [edx + 0x84] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x84u));
    /* 005d6430: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6432: je 0x5d6452 */ if (fZ) goto L_005d6452;
L_005d6434:; BB(0x005d6434);
    /* 005d6434: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d6437: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 005d643b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d643c: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x5d6441u); f_00624600();
    /* 005d6441: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d6444: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6447: movsx edx, byte ptr [ecx + 0x85] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x85u));
    /* 005d644e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6450: jne 0x5d6492 */ if (!fZ) goto L_005d6492;
L_005d6452:; BB(0x005d6452);
    /* 005d6452: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6454: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6457: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d645cu); f_005d6635();
    /* 005d645c: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005d6461: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d6464: call 0x61d4f3 */ r_esp -= 4; W32(r_esp, 0x5d6469u); f_0061d4f3();
    /* 005d6469: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005d646b: call dword ptr [0x633090] */ { u32 t = R32((u32)(0x633090u)); r_esp -= 4; W32(r_esp, 0x5d6471u); call_ind(t); }
    /* 005d6471: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6473: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6476: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d647bu); f_005d6635();
    /* 005d647b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d647e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d6480: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6483: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5d6486u); call_ind(t); }
    /* 005d6486: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6489: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 005d6490: jmp 0x5d64ee */ goto L_005d64ee;
L_005d6492:; BB(0x005d6492);
    /* 005d6492: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d6495: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005d6499: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d649a: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x5d649fu); f_00624600();
    /* 005d649f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d64a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d64a5: movsx edx, byte ptr [ecx + 0x86] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x86u));
    /* 005d64ac: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d64ae: jne 0x5d64ee */ if (!fZ) goto L_005d64ee;
L_005d64b0:; BB(0x005d64b0);
    /* 005d64b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d64b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d64b5: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d64bau); f_005d6635();
    /* 005d64ba: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005d64bf: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d64c2: call 0x61d4f3 */ r_esp -= 4; W32(r_esp, 0x5d64c7u); f_0061d4f3();
    /* 005d64c7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005d64c9: call dword ptr [0x633090] */ { u32 t = R32((u32)(0x633090u)); r_esp -= 4; W32(r_esp, 0x5d64cfu); call_ind(t); }
    /* 005d64cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d64d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d64d4: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d64d9u); f_005d6635();
    /* 005d64d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d64dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d64de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d64e1: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x5d64e4u); call_ind(t); }
    /* 005d64e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d64e7: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_005d64ee:; BB(0x005d64ee);
    /* 005d64ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d64f1: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
L_005d64f4:; BB(0x005d64f4);
    /* 005d64f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005d64f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d64f7: ret 4 */ FN_RET(0x005d6084); r_esp += 8; return;
}

void f_005d650a(void) /* FUN_005d650a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d650a);
    /* 005d650a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d650b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d650d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d650e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6511: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6514: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d651b: jne 0x5d6571 */ if (!fZ) goto L_005d6571;
L_005d651d:; BB(0x005d651d);
    /* 005d651d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6520: mov dword ptr [ecx + 0x80], 1 */ W32((u32)(r_ecx+0x80u), 0x1u);
    /* 005d652a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d652d: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 005d6534: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6537: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d653a: call 0x5e07c5 */ r_esp -= 4; W32(r_esp, 0x5d653fu); f_005e07c5();
    /* 005d653f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6540: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6543: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d6546: call 0x5e07b4 */ r_esp -= 4; W32(r_esp, 0x5d654bu); f_005e07b4();
    /* 005d654b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d654c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d654f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d6551: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6554: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x5d6557u); call_ind(t); }
    /* 005d6557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6559: je 0x5d6567 */ if (fZ) goto L_005d6567;
L_005d655b:; BB(0x005d655b);
    /* 005d655b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d655d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6560: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d6565u); f_005d6635();
    /* 005d6565: jmp 0x5d6571 */ goto L_005d6571;
L_005d6567:; BB(0x005d6567);
    /* 005d6567: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6569: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d656c: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d6571u); f_005d6635();
L_005d6571:; BB(0x005d6571);
    /* 005d6571: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6573: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6574: ret  */ FN_RET(0x005d650a); r_esp += 4; return;
}

void f_005d6575(void) /* FUN_005d6575 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6575);
    /* 005d6575: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6576: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6578: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6579: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d657c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d657f: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6586: je 0x5d65b3 */ if (fZ) goto L_005d65b3;
L_005d6588:; BB(0x005d6588);
    /* 005d6588: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d658b: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 005d6595: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6598: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 005d659f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d65a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d65a4: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5d65a9u); f_005e40dc();
    /* 005d65a9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d65ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d65ae: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5d65b3u); f_005d6635();
L_005d65b3:; BB(0x005d65b3);
    /* 005d65b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d65b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d65b6: ret  */ FN_RET(0x005d6575); r_esp += 4; return;
}

void f_005d65cb(void) /* FUN_005d65cb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d65cb);
    /* 005d65cb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d65cc: mov ebp, esp */ r_ebp = r_esp;
    /* 005d65ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d65cf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d65d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d65d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d65d5: ret  */ FN_RET(0x005d65cb); r_esp += 4; return;
}

void f_005d65d6(void) /* FUN_005d65d6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d65d6);
    /* 005d65d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d65d7: mov ebp, esp */ r_ebp = r_esp;
    /* 005d65d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d65da: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d65dd: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005d65e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d65e2: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x5d65e7u); f_00624600();
    /* 005d65e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d65ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d65ed: mov byte ptr [ecx + 0x84], al */ W8((u32)(r_ecx+0x84u), (u8)r_eax);
    /* 005d65f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d65f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d65f6: ret 4 */ FN_RET(0x005d65d6); r_esp += 8; return;
}

void f_005d65f9(void) /* FUN_005d65f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d65f9);
    /* 005d65f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d65fa: mov ebp, esp */ r_ebp = r_esp;
    /* 005d65fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d65fd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6600: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005d6604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6605: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x5d660au); f_00624600();
    /* 005d660a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d660d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6610: mov byte ptr [ecx + 0x85], al */ W8((u32)(r_ecx+0x85u), (u8)r_eax);
    /* 005d6616: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6618: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6619: ret 4 */ FN_RET(0x005d65f9); r_esp += 8; return;
}

void f_005d661c(void) /* FUN_005d661c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d661c);
    /* 005d661c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d661d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d661f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6620: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6623: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6626: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005d6629: mov byte ptr [eax + 0x86], cl */ W8((u32)(r_eax+0x86u), (u8)r_ecx);
    /* 005d662f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6631: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6632: ret 4 */ FN_RET(0x005d661c); r_esp += 8; return;
}

void f_005d6635(void) /* FUN_005d6635 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6635);
    /* 005d6635: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6636: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6638: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6639: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d663c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d663f: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 005d6645: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6648: je 0x5d6661 */ if (fZ) goto L_005d6661;
L_005d664a:; BB(0x005d664a);
    /* 005d664a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d664d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6650: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 005d6656: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6659: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d665b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d665e: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5d6661u); call_ind(t); }
L_005d6661:; BB(0x005d6661);
    /* 005d6661: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6663: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6664: ret 4 */ FN_RET(0x005d6635); r_esp += 8; return;
}

void f_005d6667(void) /* FUN_005d6667 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6667);
    /* 005d6667: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6668: mov ebp, esp */ r_ebp = r_esp;
    /* 005d666a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d666b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d666e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6671: mov eax, dword ptr [eax + 0x9c] */ r_eax = R32((u32)(r_eax+0x9cu));
    /* 005d6677: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6679: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d667a: ret  */ FN_RET(0x005d6667); r_esp += 4; return;
}

void f_005d667b(void) /* FUN_005d667b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d667b);
    /* 005d667b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d667c: mov ebp, esp */ r_ebp = r_esp;
    /* 005d667e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6681: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6684: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6687: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 005d668d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d6690: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d6694: ja 0x5d676d */ if ((!fC&&!fZ)) goto L_005d676d;
L_005d669a:; BB(0x005d669a);
    /* 005d669a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d669d: jmp dword ptr [edx*4 + 0x5d6771] */ { u32 t = R32((u32)(r_edx*4+0x5d6771u)); switch (t) { case 0x5d66a4u: goto L_005d66a4; case 0x5d66d9u: goto L_005d66d9; case 0x5d670bu: goto L_005d670b; case 0x5d673du: goto L_005d673d; default: UNSUP(0x005d669d, "jump table entry is not a known target"); } }
L_005d66a4:; BB(0x005d66a4);
    /* 005d66a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d66a7: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d66ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d66ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d66b1: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d66b6u); f_005ea1cf();
    /* 005d66b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d66b9: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d66bd: je 0x5d66d4 */ if (fZ) goto L_005d66d4;
L_005d66bf:; BB(0x005d66bf);
    /* 005d66bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d66c2: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005d66c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d66c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d66cc: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d66cf: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d66d4u); f_005e87aa();
L_005d66d4:; BB(0x005d66d4);
    /* 005d66d4: jmp 0x5d676d */ goto L_005d676d;
L_005d66d9:; BB(0x005d66d9);
    /* 005d66d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d66dc: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d66e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d66e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d66e6: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d66ebu); f_005ea1cf();
    /* 005d66eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d66ee: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d66f2: je 0x5d6709 */ if (fZ) goto L_005d6709;
L_005d66f4:; BB(0x005d66f4);
    /* 005d66f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d66f7: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 005d66fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d66fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6701: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d6704: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d6709u); f_005e87aa();
L_005d6709:; BB(0x005d6709);
    /* 005d6709: jmp 0x5d676d */ goto L_005d676d;
L_005d670b:; BB(0x005d670b);
    /* 005d670b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d670e: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005d6714: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6715: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6718: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d671du); f_005ea1cf();
    /* 005d671d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6720: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6724: je 0x5d673b */ if (fZ) goto L_005d673b;
L_005d6726:; BB(0x005d6726);
    /* 005d6726: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6729: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005d672f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6730: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6733: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d6736: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d673bu); f_005e87aa();
L_005d673b:; BB(0x005d673b);
    /* 005d673b: jmp 0x5d676d */ goto L_005d676d;
L_005d673d:; BB(0x005d673d);
    /* 005d673d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6740: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005d6746: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d674a: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d674fu); f_005ea1cf();
    /* 005d674f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6752: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6756: je 0x5d676d */ if (fZ) goto L_005d676d;
L_005d6758:; BB(0x005d6758);
    /* 005d6758: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d675b: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 005d6761: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6762: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6765: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d6768: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d676du); f_005e87aa();
L_005d676d:; BB(0x005d676d);
    /* 005d676d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d676f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6770: ret  */ FN_RET(0x005d667b); r_esp += 4; return;
}

void f_005d6781(void) /* FUN_005d6781 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6781);
    /* 005d6781: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6782: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6784: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6785: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6788: mov esp, ebp */ r_esp = r_ebp;
    /* 005d678a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d678b: ret  */ FN_RET(0x005d6781); r_esp += 4; return;
}

void f_005d678c(void) /* FUN_005d678c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d678c);
    /* 005d678c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d678d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d678f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6790: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6793: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6796: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d6799: mov dword ptr [eax + 0xa0], ecx */ W32((u32)(r_eax+0xa0u), r_ecx);
    /* 005d679f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d67a2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d67a5: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 005d67ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005d67ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d67ae: ret 8 */ FN_RET(0x005d678c); r_esp += 12; return;
}

void f_005d67b1(void) /* FUN_005d67b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d67b1);
    /* 005d67b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d67b2: mov ebp, esp */ r_ebp = r_esp;
    /* 005d67b4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d67b7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d67ba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d67bd: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d67c1: jne 0x5d695c */ if (!fZ) goto L_005d695c;
L_005d67c7:; BB(0x005d67c7);
    /* 005d67c7: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005d67cc: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d67d1u); f_0048ab58();
    /* 005d67d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d67d4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d67d7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d67db: je 0x5d67ea */ if (fZ) goto L_005d67ea;
L_005d67dd:; BB(0x005d67dd);
    /* 005d67dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d67e0: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5d67e5u); f_005e8590();
    /* 005d67e5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d67e8: jmp 0x5d67f1 */ goto L_005d67f1;
L_005d67ea:; BB(0x005d67ea);
    /* 005d67ea: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005d67f1:; BB(0x005d67f1);
    /* 005d67f1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d67f4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d67f7: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 005d67fa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d67fd: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d6800: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6803: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d6806: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005d6809: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d680c: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d680f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6812: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d6815: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6817: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5d681au); call_ind(t); }
    /* 005d681a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d681d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d681e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6821: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d6824: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6827: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d682a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d682c: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5d682fu); call_ind(t); }
    /* 005d682f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6832: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005d6838: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6839: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d683c: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d683f: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d6844u); f_005e87aa();
    /* 005d6844: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6847: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5d684cu); f_005d9883();
    /* 005d684c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d684f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6850: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6853: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d6856: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6859: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d685c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d685e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d6861u); call_ind(t); }
    /* 005d6861: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005d6864: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6865: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6868: call 0x5ea5d5 */ r_esp -= 4; W32(r_esp, 0x5d686du); f_005ea5d5();
    /* 005d686d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6870: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d6876: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6878: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005d687a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d687d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005d6880: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d6883: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005d6886: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005d6889: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005d688c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d688f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6892: mov eax, dword ptr [ecx + 0xbc] */ r_eax = R32((u32)(r_ecx+0xbcu));
    /* 005d6898: sub eax, dword ptr [edx + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d689e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d68a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d68a2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d68a5: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d68a8: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5d68adu); f_005e8740();
    /* 005d68ad: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d68b0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d68b3: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 005d68b9: sub ecx, dword ptr [eax + 0xb8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d68bf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d68c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d68c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d68c6: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d68c9: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5d68ceu); f_005e8775();
    /* 005d68ce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d68d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d68d3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d68d6: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d68d9u); call_ind(t); }
    /* 005d68d9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d68dc: add eax, dword ptr [ecx + 0xb8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d68e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d68e3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d68e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d68e8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d68eb: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x5d68eeu); call_ind(t); }
    /* 005d68ee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d68f1: add eax, dword ptr [ecx + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d68f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d68f8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d68fb: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d68fe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6901: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 005d6904: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d6906: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5d6909u); call_ind(t); }
    /* 005d6909: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d690c: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 005d6912: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6913: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6916: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d6919: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5d691eu); f_005e8e99();
    /* 005d691e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6921: mov edx, dword ptr [ecx + 0xc8] */ r_edx = R32((u32)(r_ecx+0xc8u));
    /* 005d6927: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6928: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d692b: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 005d6931: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6932: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6935: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d6938: call 0x5e8eba */ r_esp -= 4; W32(r_esp, 0x5d693du); f_005e8eba();
    /* 005d693d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6940: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5d6945u); f_005d9690();
    /* 005d6945: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6947: je 0x5d695a */ if (fZ) goto L_005d695a;
L_005d6949:; BB(0x005d6949);
    /* 005d6949: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d694c: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d694f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6952: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d6955: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6957: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d695au); call_ind(t); }
L_005d695a:; BB(0x005d695a);
    /* 005d695a: jmp 0x5d6971 */ goto L_005d6971;
L_005d695c:; BB(0x005d695c);
    /* 005d695c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d695f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6960: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6963: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d6966: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6969: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d696c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d696e: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5d6971u); call_ind(t); }
L_005d6971:; BB(0x005d6971);
    /* 005d6971: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6973: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6974: ret 4 */ FN_RET(0x005d67b1); r_esp += 8; return;
}

void f_005d6977(void) /* FUN_005d6977 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6977);
    /* 005d6977: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6978: mov ebp, esp */ r_ebp = r_esp;
    /* 005d697a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d697b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d697e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6981: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6985: je 0x5d699a */ if (fZ) goto L_005d699a;
L_005d6987:; BB(0x005d6987);
    /* 005d6987: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d698a: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d698d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6990: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d6993: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6995: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d6998u); call_ind(t); }
    /* 005d6998: jmp 0x5d699f */ goto L_005d699f;
L_005d699a:; BB(0x005d699a);
    /* 005d699a: mov eax, 0x6fc3ac */ r_eax = 0x6fc3acu;
L_005d699f:; BB(0x005d699f);
    /* 005d699f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d69a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d69a2: ret  */ FN_RET(0x005d6977); r_esp += 4; return;
}

void f_005d69a3(void) /* FUN_005d69a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d69a3);
    /* 005d69a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d69a4: mov ebp, esp */ r_ebp = r_esp;
    /* 005d69a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d69a7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d69aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d69ad: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d69b1: je 0x5d69c2 */ if (fZ) goto L_005d69c2;
L_005d69b3:; BB(0x005d69b3);
    /* 005d69b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d69b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d69b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d69ba: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d69bd: call 0x5e8ee7 */ r_esp -= 4; W32(r_esp, 0x5d69c2u); f_005e8ee7();
L_005d69c2:; BB(0x005d69c2);
    /* 005d69c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d69c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d69c5: ret 4 */ FN_RET(0x005d69a3); r_esp += 8; return;
}

void f_005d69c8(void) /* FUN_005d69c8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d69c8);
    /* 005d69c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d69c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d69cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d69cc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d69cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d69d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d69d5: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 005d69db: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d69df: je 0x5d69ef */ if (fZ) goto L_005d69ef;
L_005d69e1:; BB(0x005d69e1);
    /* 005d69e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d69e4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d69e7: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 005d69ed: jmp 0x5d69fb */ goto L_005d69fb;
L_005d69ef:; BB(0x005d69ef);
    /* 005d69ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d69f2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d69f5: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
L_005d69fb:; BB(0x005d69fb);
    /* 005d69fb: cmp dword ptr [ebp + 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d69ff: je 0x5d6a0f */ if (fZ) goto L_005d6a0f;
L_005d6a01:; BB(0x005d6a01);
    /* 005d6a01: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a04: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005d6a07: mov dword ptr [eax + 0xb0], ecx */ W32((u32)(r_eax+0xb0u), r_ecx);
    /* 005d6a0d: jmp 0x5d6a21 */ goto L_005d6a21;
L_005d6a0f:; BB(0x005d6a0f);
    /* 005d6a0f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a15: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005d6a1b: mov dword ptr [edx + 0xb0], ecx */ W32((u32)(r_edx+0xb0u), r_ecx);
L_005d6a21:; BB(0x005d6a21);
    /* 005d6a21: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a24: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6a28: je 0x5d6a39 */ if (fZ) goto L_005d6a39;
L_005d6a2a:; BB(0x005d6a2a);
    /* 005d6a2a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6a2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6a2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a31: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d6a34: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d6a39u); f_005e87aa();
L_005d6a39:; BB(0x005d6a39);
    /* 005d6a39: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6a3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6a3c: ret 0xc */ FN_RET(0x005d69c8); r_esp += 16; return;
}

void f_005d6a3f(void) /* FUN_005d6a3f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6a3f);
    /* 005d6a3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6a40: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6a42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6a43: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6a46: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6a4a: je 0x5d6a63 */ if (fZ) goto L_005d6a63;
L_005d6a4c:; BB(0x005d6a4c);
    /* 005d6a4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a4f: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 005d6a55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6a56: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a59: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d6a5c: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d6a61u); f_005e87aa();
    /* 005d6a61: jmp 0x5d6a78 */ goto L_005d6a78;
L_005d6a63:; BB(0x005d6a63);
    /* 005d6a63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a66: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005d6a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6a6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a70: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d6a73: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d6a78u); f_005e87aa();
L_005d6a78:; BB(0x005d6a78);
    /* 005d6a78: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6a7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6a7b: ret 4 */ FN_RET(0x005d6a3f); r_esp += 8; return;
}

void f_005d6a7e(void) /* FUN_005d6a7e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6a7e);
    /* 005d6a7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6a7f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6a81: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6a84: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d6a87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6a8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6a8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6a8e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5d6a93u); f_005ea0c3();
    /* 005d6a93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6a96: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6a9a: je 0x5d6b48 */ if (fZ) goto L_005d6b48;
L_005d6aa0:; BB(0x005d6aa0);
    /* 005d6aa0: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005d6aa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6aa4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6aa7: call 0x5ea5d5 */ r_esp -= 4; W32(r_esp, 0x5d6aacu); f_005ea5d5();
    /* 005d6aac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6aaf: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d6ab5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6ab7: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005d6ab9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d6abc: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005d6abf: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d6ac2: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005d6ac5: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005d6ac8: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005d6acb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6ace: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6ad1: mov eax, dword ptr [ecx + 0xbc] */ r_eax = R32((u32)(r_ecx+0xbcu));
    /* 005d6ad7: sub eax, dword ptr [edx + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d6add: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6ae0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ae1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6ae4: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d6ae7: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5d6aecu); f_005e8740();
    /* 005d6aec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6aef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6af2: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 005d6af8: sub ecx, dword ptr [eax + 0xb8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d6afe: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d6b01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b02: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6b05: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d6b08: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5d6b0du); f_005e8775();
    /* 005d6b0d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6b10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6b12: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6b15: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d6b18u); call_ind(t); }
    /* 005d6b18: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6b1b: add eax, dword ptr [ecx + 0xb8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6b21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b22: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6b25: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d6b27: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6b2a: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x5d6b2du); call_ind(t); }
    /* 005d6b2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6b30: add eax, dword ptr [ecx + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6b36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b37: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6b3a: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d6b3d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6b40: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 005d6b43: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d6b45: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5d6b48u); call_ind(t); }
L_005d6b48:; BB(0x005d6b48);
    /* 005d6b48: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6b4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6b4b: ret 4 */ FN_RET(0x005d6a7e); r_esp += 8; return;
}

void f_005d6b4e(void) /* FUN_005d6b4e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6b4e);
    /* 005d6b4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b4f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6b51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b52: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6b55: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6b58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6b5c: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x5d6b61u); f_005d975e();
    /* 005d6b61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6b64: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6b68: je 0x5d6b82 */ if (fZ) goto L_005d6b82;
L_005d6b6a:; BB(0x005d6b6a);
    /* 005d6b6a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d6b6d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d6b70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6b74: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d6b77: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6b7a: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d6b7d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6b7f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d6b82u); call_ind(t); }
L_005d6b82:; BB(0x005d6b82);
    /* 005d6b82: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6b84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6b85: ret 4 */ FN_RET(0x005d6b4e); r_esp += 8; return;
}

void f_005d6b88(void) /* FUN_005d6b88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6b88);
    /* 005d6b88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b89: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6b8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b8c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6b8f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d6b92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d6b96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6b9a: call 0x5e9f7d */ r_esp -= 4; W32(r_esp, 0x5d6b9fu); f_005e9f7d();
    /* 005d6b9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ba2: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6ba6: je 0x5d6bd3 */ if (fZ) goto L_005d6bd3;
L_005d6ba8:; BB(0x005d6ba8);
    /* 005d6ba8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6bab: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d6bae: add ecx, dword ptr [eax + 0xb8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d6bb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6bb5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6bb8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6bbb: add eax, dword ptr [edx + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6bc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6bc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6bc5: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d6bc8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6bcb: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d6bce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6bd0: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5d6bd3u); call_ind(t); }
L_005d6bd3:; BB(0x005d6bd3);
    /* 005d6bd3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6bd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6bd6: ret 8 */ FN_RET(0x005d6b88); r_esp += 12; return;
}

void f_005d6bd9(void) /* FUN_005d6bd9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6bd9);
    /* 005d6bd9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6bda: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6bdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6bdd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6be0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6be3: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6be7: je 0x5d6c24 */ if (fZ) goto L_005d6c24;
L_005d6be9:; BB(0x005d6be9);
    /* 005d6be9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6bec: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d6bef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6bf2: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d6bf5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6bf7: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d6bfau); call_ind(t); }
    /* 005d6bfa: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6bfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6bfe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6c01: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d6c04: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6c07: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d6c0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6c0c: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5d6c0fu); call_ind(t); }
    /* 005d6c0f: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6c12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6c13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6c16: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d6c19: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6c1c: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d6c1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6c21: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5d6c24u); call_ind(t); }
L_005d6c24:; BB(0x005d6c24);
    /* 005d6c24: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6c26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6c27: ret 8 */ FN_RET(0x005d6bd9); r_esp += 12; return;
}

void f_005d6c2a(void) /* FUN_005d6c2a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6c2a);
    /* 005d6c2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6c2b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6c2d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6c30: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d6c33: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6c36: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6c3a: je 0x5d6c50 */ if (fZ) goto L_005d6c50;
L_005d6c3c:; BB(0x005d6c3c);
    /* 005d6c3c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6c3f: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005d6c42: mov eax, dword ptr [edx + 0x85c] */ r_eax = R32((u32)(r_edx+0x85cu));
    /* 005d6c48: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d6c4b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6c4e: jmp 0x5d6c53 */ goto L_005d6c53;
L_005d6c50:; BB(0x005d6c50);
    /* 005d6c50: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005d6c53:; BB(0x005d6c53);
    /* 005d6c53: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6c55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6c56: ret  */ FN_RET(0x005d6c2a); r_esp += 4; return;
}

void f_005d6c57(void) /* FUN_005d6c57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6c57);
    /* 005d6c57: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6c58: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6c5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6c5b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6c5e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6c61: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d6c64: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 005d6c6a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6c6d: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6c71: je 0x5d6c82 */ if (fZ) goto L_005d6c82;
L_005d6c73:; BB(0x005d6c73);
    /* 005d6c73: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6c76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6c77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6c7a: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d6c7d: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5d6c82u); f_005e8e99();
L_005d6c82:; BB(0x005d6c82);
    /* 005d6c82: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6c84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6c85: ret 4 */ FN_RET(0x005d6c57); r_esp += 8; return;
}

void f_005d6c88(void) /* FUN_005d6c88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6c88);
    /* 005d6c88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6c89: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6c8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6c8c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6c8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6c92: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d6c95: mov dword ptr [eax + 0xc4], ecx */ W32((u32)(r_eax+0xc4u), r_ecx);
    /* 005d6c9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6c9e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d6ca1: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 005d6ca7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6caa: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6cae: je 0x5d6ccf */ if (fZ) goto L_005d6ccf;
L_005d6cb0:; BB(0x005d6cb0);
    /* 005d6cb0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6cb3: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005d6cb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6cbd: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 005d6cc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cc4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6cc7: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d6cca: call 0x5e8eba */ r_esp -= 4; W32(r_esp, 0x5d6ccfu); f_005e8eba();
L_005d6ccf:; BB(0x005d6ccf);
    /* 005d6ccf: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6cd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6cd2: ret 8 */ FN_RET(0x005d6c88); r_esp += 12; return;
}

void f_005d6cd5(void) /* FUN_005d6cd5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6cd5);
    /* 005d6cd5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cd6: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6cd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cd9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6cdc: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005d6cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ce0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ce3: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x5d6ce8u); f_005ea454();
    /* 005d6ce8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ceb: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6cef: je 0x5d6d00 */ if (fZ) goto L_005d6d00;
L_005d6cf1:; BB(0x005d6cf1);
    /* 005d6cf1: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005d6cf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cf5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6cf8: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d6cfb: call 0x5e9b70 */ r_esp -= 4; W32(r_esp, 0x5d6d00u); f_005e9b70();
L_005d6d00:; BB(0x005d6d00);
    /* 005d6d00: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6d02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6d03: ret 4 */ FN_RET(0x005d6cd5); r_esp += 8; return;
}

void f_005d6d06(void) /* FUN_005d6d06 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6d06);
    /* 005d6d06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d07: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6d09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d0a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6d0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d10: call 0x5ea2c1 */ r_esp -= 4; W32(r_esp, 0x5d6d15u); f_005ea2c1();
    /* 005d6d15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d18: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6d1c: je 0x5d6d2f */ if (fZ) goto L_005d6d2f;
L_005d6d1e:; BB(0x005d6d1e);
    /* 005d6d1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d21: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d6d24: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d27: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d6d2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6d2c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d6d2fu); call_ind(t); }
L_005d6d2f:; BB(0x005d6d2f);
    /* 005d6d2f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6d32: ret  */ FN_RET(0x005d6d06); r_esp += 4; return;
}

void f_005d6d33(void) /* FUN_005d6d33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6d33);
    /* 005d6d33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d34: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6d36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d37: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6d3a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d3d: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 005d6d44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d49: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5d6d4eu); f_005e40dc();
    /* 005d6d4e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d51: call 0x5ea28a */ r_esp -= 4; W32(r_esp, 0x5d6d56u); f_005ea28a();
    /* 005d6d56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d59: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6d5d: je 0x5d6d70 */ if (fZ) goto L_005d6d70;
L_005d6d5f:; BB(0x005d6d5f);
    /* 005d6d5f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d62: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d6d65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d68: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 005d6d6b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d6d6d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5d6d70u); call_ind(t); }
L_005d6d70:; BB(0x005d6d70);
    /* 005d6d70: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6d72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6d73: ret  */ FN_RET(0x005d6d33); r_esp += 4; return;
}

void f_005d6d80(void) /* FUN_005d6d80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6d80);
    /* 005d6d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d81: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6d83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6d86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6d89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6d8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d90: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5d6d95u); f_005e626d();
    /* 005d6d95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6d98: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005d6d9b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d6d9e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6da2: je 0x5d6daf */ if (fZ) goto L_005d6daf;
L_005d6da4:; BB(0x005d6da4);
    /* 005d6da4: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6da8: je 0x5d6dc9 */ if (fZ) goto L_005d6dc9;
L_005d6daa:; BB(0x005d6daa);
    /* 005d6daa: jmp 0x5d6e3b */ goto L_005d6e3b;
L_005d6daf:; BB(0x005d6daf);
    /* 005d6daf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6db2: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d6db5: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 005d6dbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6dbc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6dbf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6dc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6dc4: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d6dc7u); call_ind(t); }
    /* 005d6dc7: jmp 0x5d6e3b */ goto L_005d6e3b;
L_005d6dc9:; BB(0x005d6dc9);
    /* 005d6dc9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6dcc: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d6dcf: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 005d6dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6dd6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6dd9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6ddb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6dde: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d6de1u); call_ind(t); }
    /* 005d6de1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6de4: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005d6de7: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d6dea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ded: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 005d6df0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6df3: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d6df6: call 0x5d65b7 */ r_esp -= 4; W32(r_esp, 0x5d6dfbu); f_005d65b7();
    /* 005d6dfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6dfd: je 0x5d6e3b */ if (fZ) goto L_005d6e3b;
L_005d6dff:; BB(0x005d6dff);
    /* 005d6dff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e02: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005d6e05: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5d6e0au); f_005d9690();
    /* 005d6e0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6e0c: je 0x5d6e3b */ if (fZ) goto L_005d6e3b;
L_005d6e0e:; BB(0x005d6e0e);
    /* 005d6e0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e11: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6e15: je 0x5d6e2a */ if (fZ) goto L_005d6e2a;
L_005d6e17:; BB(0x005d6e17);
    /* 005d6e17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e1a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d6e1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e20: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005d6e23: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6e25: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x5d6e28u); call_ind(t); }
    /* 005d6e28: jmp 0x5d6e3b */ goto L_005d6e3b;
L_005d6e2a:; BB(0x005d6e2a);
    /* 005d6e2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e2d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d6e30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e33: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005d6e36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6e38: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5d6e3bu); call_ind(t); }
L_005d6e3b:; BB(0x005d6e3b);
    /* 005d6e3b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6e3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6e3e: ret 4 */ FN_RET(0x005d6d80); r_esp += 8; return;
}

void f_005d6e50(void) /* FUN_005d6e50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6e50);
    /* 005d6e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e51: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6e57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e5a: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5d6e5fu); f_005d5d20();
    /* 005d6e5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e62: mov dword ptr [eax], 0x63b61c */ W32((u32)(r_eax), 0x63b61cu);
    /* 005d6e68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e6b: mov dword ptr [ecx + 0xe0], 0 */ W32((u32)(r_ecx+0xe0u), 0x0u);
    /* 005d6e75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e78: mov dword ptr [edx + 0xe4], 0 */ W32((u32)(r_edx+0xe4u), 0x0u);
    /* 005d6e82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e85: mov dword ptr [eax + 0xe8], 0 */ W32((u32)(r_eax+0xe8u), 0x0u);
    /* 005d6e8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e92: mov dword ptr [ecx + 0xec], 0 */ W32((u32)(r_ecx+0xecu), 0x0u);
    /* 005d6e9c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e9f: mov dword ptr [edx + 0xd0], 0 */ W32((u32)(r_edx+0xd0u), 0x0u);
    /* 005d6ea9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6eac: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
    /* 005d6eb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6eb9: mov dword ptr [ecx + 0xd8], 0 */ W32((u32)(r_ecx+0xd8u), 0x0u);
    /* 005d6ec3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ec6: mov dword ptr [edx + 0xdc], 0 */ W32((u32)(r_edx+0xdcu), 0x0u);
    /* 005d6ed0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ed3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ed6: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 005d6edc: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
    /* 005d6ee2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ee5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ee8: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 005d6eee: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 005d6ef4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ef7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6efa: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 005d6f00: mov dword ptr [eax + 0x94], edx */ W32((u32)(r_eax+0x94u), r_edx);
    /* 005d6f06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f0c: mov edx, dword ptr [ecx + 0xec] */ r_edx = R32((u32)(r_ecx+0xecu));
    /* 005d6f12: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
    /* 005d6f18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f1b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f1e: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 005d6f24: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
    /* 005d6f2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f30: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 005d6f36: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 005d6f3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f42: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 005d6f48: mov dword ptr [eax + 0x94], edx */ W32((u32)(r_eax+0x94u), r_edx);
    /* 005d6f4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f54: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 005d6f5a: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
    /* 005d6f60: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6f64: je 0x5d6f70 */ if (fZ) goto L_005d6f70;
L_005d6f66:; BB(0x005d6f66);
    /* 005d6f66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f69: call 0x5d7173 */ r_esp -= 4; W32(r_esp, 0x5d6f6eu); f_005d7173();
    /* 005d6f6e: jmp 0x5d6f78 */ goto L_005d6f78;
L_005d6f70:; BB(0x005d6f70);
    /* 005d6f70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f73: call 0x5d7196 */ r_esp -= 4; W32(r_esp, 0x5d6f78u); f_005d7196();
L_005d6f78:; BB(0x005d6f78);
    /* 005d6f78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f7b: mov dword ptr [eax + 0x88], 0x11 */ W32((u32)(r_eax+0x88u), 0x11u);
    /* 005d6f85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f88: mov dword ptr [ecx + 0xf4], 0 */ W32((u32)(r_ecx+0xf4u), 0x0u);
    /* 005d6f92: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6f95: mov dword ptr [edx + 0xf8], 0 */ W32((u32)(r_edx+0xf8u), 0x0u);
    /* 005d6f9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6fa2: call 0x5d72f6 */ r_esp -= 4; W32(r_esp, 0x5d6fa7u); f_005d72f6();
    /* 005d6fa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6faa: call 0x5d71cd */ r_esp -= 4; W32(r_esp, 0x5d6fafu); f_005d71cd();
    /* 005d6faf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6fb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6fb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6fb5: ret 4 */ FN_RET(0x005d6e50); r_esp += 8; return;
}

void f_005d6fb8(void) /* FUN_005d6fb8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6fb8);
    /* 005d6fb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6fb9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6fbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6fbc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6fbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6fc2: mov dword ptr [eax], 0x63b61c */ W32((u32)(r_eax), 0x63b61cu);
    /* 005d6fc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6fcb: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5d6fd0u); f_005d5dfb();
    /* 005d6fd0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6fd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6fd3: ret  */ FN_RET(0x005d6fb8); r_esp += 4; return;
}

void f_005d6fd4(void) /* FUN_005d6fd4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6fd4);
    /* 005d6fd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6fd5: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6fd7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6fd8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6fdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6fde: call 0x5e4035 */ r_esp -= 4; W32(r_esp, 0x5d6fe3u); f_005e4035();
    /* 005d6fe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6fe6: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6fea: je 0x5d7043 */ if (fZ) goto L_005d7043;
L_005d6fec:; BB(0x005d6fec);
    /* 005d6fec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6fef: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5d6ff4u); f_005d9883();
    /* 005d6ff4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6ff7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ff8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ffb: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d6ffe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7001: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d7004: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7006: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d7009u); call_ind(t); }
    /* 005d7009: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d700c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d700e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7011: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5d7014u); call_ind(t); }
    /* 005d7014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7015: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7018: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d701a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d701d: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5d7020u); call_ind(t); }
    /* 005d7020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7021: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7024: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d7027: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d702a: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d702d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d702f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5d7032u); call_ind(t); }
    /* 005d7032: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7035: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d7038: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d703b: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d703e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7040: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5d7043u); call_ind(t); }
L_005d7043:; BB(0x005d7043);
    /* 005d7043: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7045: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7046: ret 8 */ FN_RET(0x005d6fd4); r_esp += 12; return;
}

void f_005d7049(void) /* FUN_005d7049 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7049);
    /* 005d7049: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d704a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d704c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d704d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7050: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7053: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7054: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7057: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5d705cu); f_005ea0c3();
    /* 005d705c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d705e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d705f: ret 4 */ FN_RET(0x005d7049); r_esp += 8; return;
}

void f_005d7062(void) /* FUN_005d7062 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7062);
    /* 005d7062: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7063: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7065: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7068: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d706b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d706e: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7075: je 0x5d7089 */ if (fZ) goto L_005d7089;
L_005d7077:; BB(0x005d7077);
    /* 005d7077: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d707a: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d707e: jne 0x5d7089 */ if (!fZ) goto L_005d7089;
L_005d7080:; BB(0x005d7080);
    /* 005d7080: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d7083: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7087: je 0x5d709a */ if (fZ) goto L_005d709a;
L_005d7089:; BB(0x005d7089);
    /* 005d7089: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d708c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d708d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7090: call 0x5d6084 */ r_esp -= 4; W32(r_esp, 0x5d7095u); f_005d6084();
    /* 005d7095: jmp 0x5d716d */ goto L_005d716d;
L_005d709a:; BB(0x005d709a);
    /* 005d709a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d709d: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005d70a0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d70a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d70a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d70a7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d70aa: call 0x5d6084 */ r_esp -= 4; W32(r_esp, 0x5d70afu); f_005d6084();
    /* 005d70af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d70b2: cmp dword ptr [ecx + 0x18], 2 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d70b6: jne 0x5d7167 */ if (!fZ) goto L_005d7167;
L_005d70bc:; BB(0x005d70bc);
    /* 005d70bc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d70bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d70c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d70c3: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x5d70c8u); f_005d9738();
    /* 005d70c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d70ca: jne 0x5d70d9 */ if (!fZ) goto L_005d70d9;
L_005d70cc:; BB(0x005d70cc);
    /* 005d70cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d70cf: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d70d3: je 0x5d7167 */ if (fZ) goto L_005d7167;
L_005d70d9:; BB(0x005d70d9);
    /* 005d70d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d70dc: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005d70df: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005d70e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d70e4: je 0x5d7120 */ if (fZ) goto L_005d7120;
L_005d70e6:; BB(0x005d70e6);
    /* 005d70e6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d70ea: je 0x5d7120 */ if (fZ) goto L_005d7120;
L_005d70ec:; BB(0x005d70ec);
    /* 005d70ec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d70ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d70f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d70f3: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x5d70f8u); f_005d9738();
    /* 005d70f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d70fa: je 0x5d7120 */ if (fZ) goto L_005d7120;
L_005d70fc:; BB(0x005d70fc);
    /* 005d70fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d70ff: cmp dword ptr [ecx + 0xcc], 0 */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7106: je 0x5d7115 */ if (fZ) goto L_005d7115;
L_005d7108:; BB(0x005d7108);
    /* 005d7108: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d710b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d710d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7110: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x5d7113u); call_ind(t); }
    /* 005d7113: jmp 0x5d7120 */ goto L_005d7120;
L_005d7115:; BB(0x005d7115);
    /* 005d7115: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7118: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d711a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d711d: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x5d7120u); call_ind(t); }
L_005d7120:; BB(0x005d7120);
    /* 005d7120: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7123: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005d7126: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005d7129: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d712b: je 0x5d7167 */ if (fZ) goto L_005d7167;
L_005d712d:; BB(0x005d712d);
    /* 005d712d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7131: je 0x5d7167 */ if (fZ) goto L_005d7167;
L_005d7133:; BB(0x005d7133);
    /* 005d7133: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d7136: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7137: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d713a: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x5d713fu); f_005d9738();
    /* 005d713f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7141: je 0x5d7167 */ if (fZ) goto L_005d7167;
L_005d7143:; BB(0x005d7143);
    /* 005d7143: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7146: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d714d: je 0x5d715c */ if (fZ) goto L_005d715c;
L_005d714f:; BB(0x005d714f);
    /* 005d714f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7152: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7154: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7157: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x5d715au); call_ind(t); }
    /* 005d715a: jmp 0x5d7167 */ goto L_005d7167;
L_005d715c:; BB(0x005d715c);
    /* 005d715c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d715f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7161: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7164: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x5d7167u); call_ind(t); }
L_005d7167:; BB(0x005d7167);
    /* 005d7167: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d716a: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_005d716d:; BB(0x005d716d);
    /* 005d716d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d716f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7170: ret 4 */ FN_RET(0x005d7062); r_esp += 8; return;
}

void f_005d7173(void) /* FUN_005d7173 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7173);
    /* 005d7173: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7174: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7176: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7177: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d717a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d717d: mov dword ptr [eax + 0xcc], 1 */ W32((u32)(r_eax+0xccu), 0x1u);
    /* 005d7187: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d718a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d718c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d718f: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5d7192u); call_ind(t); }
    /* 005d7192: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7194: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7195: ret  */ FN_RET(0x005d7173); r_esp += 4; return;
}

void f_005d7196(void) /* FUN_005d7196 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7196);
    /* 005d7196: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7197: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7199: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d719a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d719d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d71a0: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 005d71aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d71ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d71af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d71b2: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5d71b5u); call_ind(t); }
    /* 005d71b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d71b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d71b8: ret  */ FN_RET(0x005d7196); r_esp += 4; return;
}

void f_005d71b9(void) /* FUN_005d71b9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d71b9);
    /* 005d71b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d71ba: mov ebp, esp */ r_ebp = r_esp;
    /* 005d71bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d71bd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d71c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d71c3: mov eax, dword ptr [eax + 0xcc] */ r_eax = R32((u32)(r_eax+0xccu));
    /* 005d71c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d71cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d71cc: ret  */ FN_RET(0x005d71b9); r_esp += 4; return;
}

void f_005d71cd(void) /* FUN_005d71cd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d71cd);
    /* 005d71cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d71ce: mov ebp, esp */ r_ebp = r_esp;
    /* 005d71d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d71d1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d71d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d71d7: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d71de: je 0x5d722a */ if (fZ) goto L_005d722a;
L_005d71e0:; BB(0x005d71e0);
    /* 005d71e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d71e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d71e6: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005d71ec: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 005d71f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d71f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d71f8: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 005d71fe: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 005d7204: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7207: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d720a: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 005d7210: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 005d7216: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7219: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d721c: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 005d7222: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
    /* 005d7228: jmp 0x5d7272 */ goto L_005d7272;
L_005d722a:; BB(0x005d722a);
    /* 005d722a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d722d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7230: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005d7236: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 005d723c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d723f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7242: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005d7248: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 005d724e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7251: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7254: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005d725a: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 005d7260: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7263: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7266: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 005d726c: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
L_005d7272:; BB(0x005d7272);
    /* 005d7272: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7275: call 0x5d667b */ r_esp -= 4; W32(r_esp, 0x5d727au); f_005d667b();
    /* 005d727a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d727c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d727d: ret  */ FN_RET(0x005d71cd); r_esp += 4; return;
}

void f_005d727e(void) /* FUN_005d727e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d727e);
    /* 005d727e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d727f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7281: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7282: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7285: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7288: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d728b: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 005d7291: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7294: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d7297: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 005d729d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d72a0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005d72a3: mov dword ptr [ecx + 0xd8], edx */ W32((u32)(r_ecx+0xd8u), r_edx);
    /* 005d72a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d72ac: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005d72af: mov dword ptr [eax + 0xdc], ecx */ W32((u32)(r_eax+0xdcu), r_ecx);
    /* 005d72b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d72b8: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005d72bb: mov dword ptr [edx + 0xe0], eax */ W32((u32)(r_edx+0xe0u), r_eax);
    /* 005d72c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d72c4: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005d72c7: mov dword ptr [ecx + 0xe4], edx */ W32((u32)(r_ecx+0xe4u), r_edx);
    /* 005d72cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d72d0: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005d72d3: mov dword ptr [eax + 0xe8], ecx */ W32((u32)(r_eax+0xe8u), r_ecx);
    /* 005d72d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d72dc: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005d72df: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 005d72e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d72e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d72ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d72ed: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5d72f0u); call_ind(t); }
    /* 005d72f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d72f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d72f3: ret 0x20 */ FN_RET(0x005d727e); r_esp += 36; return;
}

void f_005d72f6(void) /* FUN_005d72f6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d72f6);
    /* 005d72f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d72f7: mov ebp, esp */ r_ebp = r_esp;
    /* 005d72f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d72fa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d72fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7300: mov dword ptr [eax + 0xd0], 0 */ W32((u32)(r_eax+0xd0u), 0x0u);
    /* 005d730a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d730d: mov dword ptr [ecx + 0xd4], 1 */ W32((u32)(r_ecx+0xd4u), 0x1u);
    /* 005d7317: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d731a: mov dword ptr [edx + 0xd8], 2 */ W32((u32)(r_edx+0xd8u), 0x2u);
    /* 005d7324: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7327: mov dword ptr [eax + 0xdc], 3 */ W32((u32)(r_eax+0xdcu), 0x3u);
    /* 005d7331: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7334: mov dword ptr [ecx + 0xe0], 4 */ W32((u32)(r_ecx+0xe0u), 0x4u);
    /* 005d733e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7341: mov dword ptr [edx + 0xe4], 5 */ W32((u32)(r_edx+0xe4u), 0x5u);
    /* 005d734b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d734e: mov dword ptr [eax + 0xe8], 6 */ W32((u32)(r_eax+0xe8u), 0x6u);
    /* 005d7358: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d735b: mov dword ptr [ecx + 0xec], 7 */ W32((u32)(r_ecx+0xecu), 0x7u);
    /* 005d7365: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7368: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d736a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d736d: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5d7370u); call_ind(t); }
    /* 005d7370: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7373: ret  */ FN_RET(0x005d72f6); r_esp += 4; return;
}

void f_005d7374(void) /* FUN_005d7374 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7374);
    /* 005d7374: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7375: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7377: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7378: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d737b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d737e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d737f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7382: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5d7387u); f_005d67b1();
    /* 005d7387: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d738a: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d738d: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x5d7392u); f_005e8dcc();
    /* 005d7392: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7393: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7396: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d7399: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5d739eu); f_005e8740();
    /* 005d739e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d73a1: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d73a4: call 0x5e8e87 */ r_esp -= 4; W32(r_esp, 0x5d73a9u); f_005e8e87();
    /* 005d73a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d73aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d73ad: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d73b0: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5d73b5u); f_005e8775();
    /* 005d73b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d73b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d73b8: ret 4 */ FN_RET(0x005d7374); r_esp += 8; return;
}

void f_005d73bb(void) /* FUN_005d73bb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d73bb);
    /* 005d73bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d73bc: mov ebp, esp */ r_ebp = r_esp;
    /* 005d73be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d73bf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d73c2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d73c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d73c6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d73c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d73ca: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d73cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d73ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d73d1: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5d73d6u); f_005d69c8();
    /* 005d73d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d73d9: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d73dd: je 0x5d741c */ if (fZ) goto L_005d741c;
L_005d73df:; BB(0x005d73df);
    /* 005d73df: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d73e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d73e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d73e6: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d73e9: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d73eeu); f_005e87aa();
    /* 005d73ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d73f1: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d73f4: call 0x5e8dcc */ r_esp -= 4; W32(r_esp, 0x5d73f9u); f_005e8dcc();
    /* 005d73f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d73fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d73fd: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d7400: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5d7405u); f_005e8740();
    /* 005d7405: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7408: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005d740b: call 0x5e8e87 */ r_esp -= 4; W32(r_esp, 0x5d7410u); f_005e8e87();
    /* 005d7410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7411: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7414: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d7417: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5d741cu); f_005e8775();
L_005d741c:; BB(0x005d741c);
    /* 005d741c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d741e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d741f: ret 0xc */ FN_RET(0x005d73bb); r_esp += 16; return;
}

void f_005d7447(void) /* FUN_005d7447 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7447);
    /* 005d7447: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7448: mov ebp, esp */ r_ebp = r_esp;
    /* 005d744a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d744b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d744e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d7451: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7452: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d7455: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7456: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7459: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5d745eu); f_005d6b88();
    /* 005d745e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7461: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7465: je 0x5d7492 */ if (fZ) goto L_005d7492;
L_005d7467:; BB(0x005d7467);
    /* 005d7467: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d746a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d746d: add ecx, dword ptr [eax + 0xf8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xf8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d7473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7474: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7477: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d747a: add eax, dword ptr [edx + 0xf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xf4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d7480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7481: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7484: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d7487: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d748a: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d748d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d748f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5d7492u); call_ind(t); }
L_005d7492:; BB(0x005d7492);
    /* 005d7492: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7494: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7495: ret 8 */ FN_RET(0x005d7447); r_esp += 12; return;
}

void f_005d7498(void) /* FUN_005d7498 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7498);
    /* 005d7498: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7499: mov ebp, esp */ r_ebp = r_esp;
    /* 005d749b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d749c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d749f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d74a2: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d74a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d74a6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d74a9: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d74ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d74ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d74b0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d74b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d74b5: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d74b8u); call_ind(t); }
    /* 005d74b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d74ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d74bb: ret 4 */ FN_RET(0x005d7498); r_esp += 8; return;
}

void f_005d74be(void) /* FUN_005d74be */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d74be);
    /* 005d74be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d74bf: mov ebp, esp */ r_ebp = r_esp;
    /* 005d74c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d74c2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d74c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d74c8: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d74cc: je 0x5d74f2 */ if (fZ) goto L_005d74f2;
L_005d74ce:; BB(0x005d74ce);
    /* 005d74ce: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d74d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d74d2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d74d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d74d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d74d9: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005d74dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d74df: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d74e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d74e4: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d74e7u); call_ind(t); }
    /* 005d74e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d74e9: je 0x5d74f2 */ if (fZ) goto L_005d74f2;
L_005d74eb:; BB(0x005d74eb);
    /* 005d74eb: mov eax, 1 */ r_eax = 0x1u;
    /* 005d74f0: jmp 0x5d7502 */ goto L_005d7502;
L_005d74f2:; BB(0x005d74f2);
    /* 005d74f2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d74f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d74f6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d74f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d74fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d74fd: call 0x5ea4a2 */ r_esp -= 4; W32(r_esp, 0x5d7502u); f_005ea4a2();
L_005d7502:; BB(0x005d7502);
    /* 005d7502: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7504: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7505: ret 8 */ FN_RET(0x005d74be); r_esp += 12; return;
}

void f_005d7510(void) /* FUN_005d7510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7510);
    /* 005d7510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7511: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7517: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d751a: call 0x5d6fb8 */ r_esp -= 4; W32(r_esp, 0x5d751fu); f_005d6fb8();
    /* 005d751f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7522: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d7525: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7527: je 0x5d7535 */ if (fZ) goto L_005d7535;
L_005d7529:; BB(0x005d7529);
    /* 005d7529: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d752c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d752d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d7532u); f_0048ac1b();
    /* 005d7532: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d7535:; BB(0x005d7535);
    /* 005d7535: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7538: mov esp, ebp */ r_esp = r_ebp;
    /* 005d753a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d753b: ret 4 */ FN_RET(0x005d7510); r_esp += 8; return;
}

void f_005d7540(void) /* FUN_005d7540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7540);
    /* 005d7540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7541: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7547: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d754a: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5d754fu); f_005dfbf0();
    /* 005d754f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7552: mov dword ptr [eax], 0x63b694 */ W32((u32)(r_eax), 0x63b694u);
    /* 005d7558: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d755b: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005d7562: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7565: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7568: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005d756b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d756e: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 005d7575: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7578: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 005d757f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d7585: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5d758au); f_005d9e23();
    /* 005d758a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d758d: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 005d7590: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7593: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 005d759a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d759d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d759f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d75a0: ret 4 */ FN_RET(0x005d7540); r_esp += 8; return;
}

void f_005d75a3(void) /* FUN_005d75a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d75a3);
    /* 005d75a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d75a4: mov ebp, esp */ r_ebp = r_esp;
    /* 005d75a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d75a7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d75aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d75ad: mov dword ptr [eax], 0x63b694 */ W32((u32)(r_eax), 0x63b694u);
    /* 005d75b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d75b6: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5d75bbu); f_005dfc0f();
    /* 005d75bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d75bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d75be: ret  */ FN_RET(0x005d75a3); r_esp += 4; return;
}

void f_005d75bf(void) /* FUN_005d75bf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d75bf);
    /* 005d75bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d75c0: mov ebp, esp */ r_ebp = r_esp;
    /* 005d75c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d75c3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d75c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d75c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d75cc: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005d75cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d75d2: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d75d5: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x5d75dau); f_005ea2f8();
    /* 005d75da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d75dd: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 005d75e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d75e3: mov dword ptr [edx + 0x1c], 1 */ W32((u32)(r_edx+0x1cu), 0x1u);
    /* 005d75ea: mov esp, ebp */ r_esp = r_ebp;
    /* 005d75ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d75ed: ret 4 */ FN_RET(0x005d75bf); r_esp += 8; return;
}

void f_005d75f0(void) /* FUN_005d75f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d75f0);
    /* 005d75f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d75f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d75f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d75f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d75f7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d75fd: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5d7602u); f_005d9e23();
    /* 005d7602: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7605: sub eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d7608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7609: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5d760eu); f_00624700();
    /* 005d760e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7611: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7614: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d7617: cmp eax, dword ptr [ecx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d761a: jge 0x5d7629 */ if ((fS==fO)) goto L_005d7629;
L_005d761c:; BB(0x005d761c);
    /* 005d761c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d761f: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d7622: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5d7627u); f_005ea257();
    /* 005d7627: jmp 0x5d764b */ goto L_005d764b;
L_005d7629:; BB(0x005d7629);
    /* 005d7629: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d762f: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5d7634u); f_005d9e23();
    /* 005d7634: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7637: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 005d763a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d763d: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d7640: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5d7645u); f_005ea257();
    /* 005d7645: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7648: add eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005d764b:; BB(0x005d764b);
    /* 005d764b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d764d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d764e: ret  */ FN_RET(0x005d75f0); r_esp += 4; return;
}

void f_005d764f(void) /* FUN_005d764f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d764f);
    /* 005d764f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7650: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7652: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7653: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7656: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7659: ret  */ FN_RET(0x005d764f); r_esp += 4; return;
}

void f_005d765a(void) /* FUN_005d765a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d765a);
    /* 005d765a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d765b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d765d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d765e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7661: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7664: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7668: je 0x5d767d */ if (fZ) goto L_005d767d;
L_005d766a:; BB(0x005d766a);
    /* 005d766a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d766c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d766f: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005d7672: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7675: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d7678: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d767a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d767du); call_ind(t); }
L_005d767d:; BB(0x005d767d);
    /* 005d767d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7680: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 005d7687: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7689: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d768c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d768f: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5d7694u); f_005e4060();
    /* 005d7694: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7696: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7697: ret  */ FN_RET(0x005d765a); r_esp += 4; return;
}

void f_005d7698(void) /* FUN_005d7698 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7698);
    /* 005d7698: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7699: mov ebp, esp */ r_ebp = r_esp;
    /* 005d769b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d769c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d769f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d76a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d76a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76a6: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x5d76abu); f_005d7540();
    /* 005d76ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76ae: mov dword ptr [ecx], 0x63b6ac */ W32((u32)(r_ecx), 0x63b6acu);
    /* 005d76b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76b7: mov dword ptr [edx + 0x10], 1 */ W32((u32)(r_edx+0x10u), 0x1u);
    /* 005d76be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d76c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d76c4: ret 4 */ FN_RET(0x005d7698); r_esp += 8; return;
}

void f_005d76c7(void) /* FUN_005d76c7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d76c7);
    /* 005d76c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d76c8: mov ebp, esp */ r_ebp = r_esp;
    /* 005d76ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d76cb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d76ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76d1: mov dword ptr [eax], 0x63b6ac */ W32((u32)(r_eax), 0x63b6acu);
    /* 005d76d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d76da: call 0x5d75a3 */ r_esp -= 4; W32(r_esp, 0x5d76dfu); f_005d75a3();
    /* 005d76df: mov esp, ebp */ r_esp = r_ebp;
    /* 005d76e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d76e2: ret  */ FN_RET(0x005d76c7); r_esp += 4; return;
}

void f_005d76e3(void) /* FUN_005d76e3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d76e3);
    /* 005d76e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d76e4: mov ebp, esp */ r_ebp = r_esp;
    /* 005d76e6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d76e9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d76ec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d76ef: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d76f3: jne 0x5d76f7 */ if (!fZ) goto L_005d76f7;
L_005d76f5:; BB(0x005d76f5);
    /* 005d76f5: jmp 0x5d773c */ goto L_005d773c;
L_005d76f7:; BB(0x005d76f7);
    /* 005d76f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d76fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d76fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d76ff: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d7702u); call_ind(t); }
    /* 005d7702: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d7705: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7708: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d770b: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5d7710u); f_005ea257();
    /* 005d7710: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7713: je 0x5d773c */ if (fZ) goto L_005d773c;
L_005d7715:; BB(0x005d7715);
    /* 005d7715: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7718: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d771b: cmp edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d771e: jle 0x5d772d */ if ((fZ||fS!=fO)) goto L_005d772d;
L_005d7720:; BB(0x005d7720);
    /* 005d7720: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7723: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7725: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7728: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d772bu); call_ind(t); }
    /* 005d772b: jmp 0x5d773c */ goto L_005d773c;
L_005d772d:; BB(0x005d772d);
    /* 005d772d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7731: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7734: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d7737: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d773cu); f_005ea1cf();
L_005d773c:; BB(0x005d773c);
    /* 005d773c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d773e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d773f: ret  */ FN_RET(0x005d76e3); r_esp += 4; return;
}

void f_005d7740(void) /* FUN_005d7740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7740);
    /* 005d7740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7741: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7747: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7749: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d774c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d774f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d7754u); f_005ea1cf();
    /* 005d7754: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7756: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7757: ret  */ FN_RET(0x005d7740); r_esp += 4; return;
}

void f_005d7758(void) /* FUN_005d7758 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7758);
    /* 005d7758: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7759: mov ebp, esp */ r_ebp = r_esp;
    /* 005d775b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d775c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d775f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7762: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7763: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7766: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x5d776bu); f_005d7698();
    /* 005d776b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d776e: mov dword ptr [ecx], 0x63b6c4 */ W32((u32)(r_ecx), 0x63b6c4u);
    /* 005d7774: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7777: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7779: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d777a: ret 4 */ FN_RET(0x005d7758); r_esp += 8; return;
}

void f_005d777d(void) /* FUN_005d777d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d777d);
    /* 005d777d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d777e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7780: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7781: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7784: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7787: mov dword ptr [eax], 0x63b6c4 */ W32((u32)(r_eax), 0x63b6c4u);
    /* 005d778d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7790: call 0x5d76c7 */ r_esp -= 4; W32(r_esp, 0x5d7795u); f_005d76c7();
    /* 005d7795: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7797: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7798: ret  */ FN_RET(0x005d777d); r_esp += 4; return;
}

void f_005d7799(void) /* FUN_005d7799 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7799);
    /* 005d7799: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d779a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d779c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d779d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d77a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d77a3: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d77a7: je 0x5d77bc */ if (fZ) goto L_005d77bc;
L_005d77a9:; BB(0x005d77a9);
    /* 005d77a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d77ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d77ae: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005d77b1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d77b4: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d77b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d77b9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d77bcu); call_ind(t); }
L_005d77bc:; BB(0x005d77bc);
    /* 005d77bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d77bf: call 0x5d7740 */ r_esp -= 4; W32(r_esp, 0x5d77c4u); f_005d7740();
    /* 005d77c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005d77c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d77c7: ret  */ FN_RET(0x005d7799); r_esp += 4; return;
}

void f_005d77c8(void) /* FUN_005d77c8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d77c8);
    /* 005d77c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d77c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d77cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d77cc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d77cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d77d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d77d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d77d6: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x5d77dbu); f_005d7540();
    /* 005d77db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d77de: mov dword ptr [ecx], 0x63b6dc */ W32((u32)(r_ecx), 0x63b6dcu);
    /* 005d77e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d77e7: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
    /* 005d77ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d77f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d77f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d77f4: ret 4 */ FN_RET(0x005d77c8); r_esp += 8; return;
}

void f_005d77f7(void) /* FUN_005d77f7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d77f7);
    /* 005d77f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d77f8: mov ebp, esp */ r_ebp = r_esp;
    /* 005d77fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d77fb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d77fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7801: mov dword ptr [eax], 0x63b6dc */ W32((u32)(r_eax), 0x63b6dcu);
    /* 005d7807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d780a: call 0x5d75a3 */ r_esp -= 4; W32(r_esp, 0x5d780fu); f_005d75a3();
    /* 005d780f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7811: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7812: ret  */ FN_RET(0x005d77f7); r_esp += 4; return;
}

void f_005d7813(void) /* FUN_005d7813 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7813);
    /* 005d7813: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7814: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7816: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7819: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d781c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d781f: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7823: jne 0x5d7827 */ if (!fZ) goto L_005d7827;
L_005d7825:; BB(0x005d7825);
    /* 005d7825: jmp 0x5d7867 */ goto L_005d7867;
L_005d7827:; BB(0x005d7827);
    /* 005d7827: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d782a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d782c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d782f: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d7832u); call_ind(t); }
    /* 005d7832: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d7835: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7838: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d783b: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5d7840u); f_005ea257();
    /* 005d7840: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7843: je 0x5d7867 */ if (fZ) goto L_005d7867;
L_005d7845:; BB(0x005d7845);
    /* 005d7845: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d7849: jge 0x5d7858 */ if ((fS==fO)) goto L_005d7858;
L_005d784b:; BB(0x005d784b);
    /* 005d784b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d784e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7850: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7853: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d7856u); call_ind(t); }
    /* 005d7856: jmp 0x5d7867 */ goto L_005d7867;
L_005d7858:; BB(0x005d7858);
    /* 005d7858: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d785b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d785c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d785f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d7862: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d7867u); f_005ea1cf();
L_005d7867:; BB(0x005d7867);
    /* 005d7867: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7869: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d786a: ret  */ FN_RET(0x005d7813); r_esp += 4; return;
}

void f_005d786b(void) /* FUN_005d786b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d786b);
    /* 005d786b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d786c: mov ebp, esp */ r_ebp = r_esp;
    /* 005d786e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d786f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7872: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7875: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005d7878: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7879: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d787c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d787f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d7884u); f_005ea1cf();
    /* 005d7884: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7886: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7887: ret  */ FN_RET(0x005d786b); r_esp += 4; return;
}

void f_005d7888(void) /* FUN_005d7888 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7888);
    /* 005d7888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7889: mov ebp, esp */ r_ebp = r_esp;
    /* 005d788b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d788c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d788f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7892: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7893: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7896: call 0x5d77c8 */ r_esp -= 4; W32(r_esp, 0x5d789bu); f_005d77c8();
    /* 005d789b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d789e: mov dword ptr [ecx], 0x63b6f4 */ W32((u32)(r_ecx), 0x63b6f4u);
    /* 005d78a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d78a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005d78a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d78aa: ret 4 */ FN_RET(0x005d7888); r_esp += 8; return;
}

void f_005d78ad(void) /* FUN_005d78ad */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d78ad);
    /* 005d78ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d78ae: mov ebp, esp */ r_ebp = r_esp;
    /* 005d78b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d78b1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d78b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d78b7: mov dword ptr [eax], 0x63b6f4 */ W32((u32)(r_eax), 0x63b6f4u);
    /* 005d78bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d78c0: call 0x5d77f7 */ r_esp -= 4; W32(r_esp, 0x5d78c5u); f_005d77f7();
    /* 005d78c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d78c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d78c8: ret  */ FN_RET(0x005d78ad); r_esp += 4; return;
}

void f_005d78c9(void) /* FUN_005d78c9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d78c9);
    /* 005d78c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d78ca: mov ebp, esp */ r_ebp = r_esp;
    /* 005d78cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d78cd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d78d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d78d3: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d78d7: je 0x5d78ec */ if (fZ) goto L_005d78ec;
L_005d78d9:; BB(0x005d78d9);
    /* 005d78d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d78db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d78de: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005d78e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d78e4: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d78e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d78e9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d78ecu); call_ind(t); }
L_005d78ec:; BB(0x005d78ec);
    /* 005d78ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d78ef: call 0x5d786b */ r_esp -= 4; W32(r_esp, 0x5d78f4u); f_005d786b();
    /* 005d78f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005d78f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d78f7: ret  */ FN_RET(0x005d78c9); r_esp += 4; return;
}

void f_005d78f8(void) /* FUN_005d78f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d78f8);
    /* 005d78f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d78f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d78fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d78fc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d78ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7902: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7903: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7906: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x5d790bu); f_005d7540();
    /* 005d790b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d790e: mov dword ptr [ecx], 0x63b70c */ W32((u32)(r_ecx), 0x63b70cu);
    /* 005d7914: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7917: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 005d791e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7921: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7923: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7924: ret 4 */ FN_RET(0x005d78f8); r_esp += 8; return;
}

void f_005d7927(void) /* FUN_005d7927 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7927);
    /* 005d7927: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7928: mov ebp, esp */ r_ebp = r_esp;
    /* 005d792a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d792b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d792e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7931: mov dword ptr [eax], 0x63b70c */ W32((u32)(r_eax), 0x63b70cu);
    /* 005d7937: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d793a: call 0x5d75a3 */ r_esp -= 4; W32(r_esp, 0x5d793fu); f_005d75a3();
    /* 005d793f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7941: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7942: ret  */ FN_RET(0x005d7927); r_esp += 4; return;
}

void f_005d7943(void) /* FUN_005d7943 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7943);
    /* 005d7943: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7944: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7946: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7949: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d794c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d794f: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7953: jne 0x5d7957 */ if (!fZ) goto L_005d7957;
L_005d7955:; BB(0x005d7955);
    /* 005d7955: jmp 0x5d79ae */ goto L_005d79ae;
L_005d7957:; BB(0x005d7957);
    /* 005d7957: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d795a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d795c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d795f: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d7962u); call_ind(t); }
    /* 005d7962: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d7965: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7968: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d796b: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5d7970u); f_005ea257();
    /* 005d7970: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7973: je 0x5d79ae */ if (fZ) goto L_005d79ae;
L_005d7975:; BB(0x005d7975);
    /* 005d7975: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7978: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d797b: cmp edx, dword ptr [ecx + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d797e: jne 0x5d799f */ if (!fZ) goto L_005d799f;
L_005d7980:; BB(0x005d7980);
    /* 005d7980: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7983: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005d7986: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7987: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d798a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d798d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d7992u); f_005ea1cf();
    /* 005d7992: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7995: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7997: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d799a: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d799du); call_ind(t); }
    /* 005d799d: jmp 0x5d79ae */ goto L_005d79ae;
L_005d799f:; BB(0x005d799f);
    /* 005d799f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d79a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d79a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d79a6: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d79a9: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d79aeu); f_005ea1cf();
L_005d79ae:; BB(0x005d79ae);
    /* 005d79ae: mov esp, ebp */ r_esp = r_ebp;
    /* 005d79b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d79b1: ret  */ FN_RET(0x005d7943); r_esp += 4; return;
}

void f_005d79b2(void) /* FUN_005d79b2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d79b2);
    /* 005d79b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d79b3: mov ebp, esp */ r_ebp = r_esp;
    /* 005d79b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d79b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d79b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d79bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d79bf: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005d79c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d79c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d79c5: ret 4 */ FN_RET(0x005d79b2); r_esp += 8; return;
}

void f_005d79c8(void) /* FUN_005d79c8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d79c8);
    /* 005d79c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d79c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d79cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d79cc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d79cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d79d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d79d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d79d6: call 0x5d78f8 */ r_esp -= 4; W32(r_esp, 0x5d79dbu); f_005d78f8();
    /* 005d79db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d79de: mov dword ptr [ecx], 0x63b724 */ W32((u32)(r_ecx), 0x63b724u);
    /* 005d79e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d79e7: mov dword ptr [edx + 0x10], 1 */ W32((u32)(r_edx+0x10u), 0x1u);
    /* 005d79ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d79f1: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 005d79f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d79fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d79fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d79fe: ret 4 */ FN_RET(0x005d79c8); r_esp += 8; return;
}

void f_005d7a01(void) /* FUN_005d7a01 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7a01);
    /* 005d7a01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a02: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7a04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a05: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7a08: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d7a0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a0f: call 0x5d78f8 */ r_esp -= 4; W32(r_esp, 0x5d7a14u); f_005d78f8();
    /* 005d7a14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a17: mov dword ptr [ecx], 0x63b724 */ W32((u32)(r_ecx), 0x63b724u);
    /* 005d7a1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a20: mov dword ptr [edx + 0x10], 1 */ W32((u32)(r_edx+0x10u), 0x1u);
    /* 005d7a27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a2a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d7a2d: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005d7a30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a33: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7a35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7a36: ret 8 */ FN_RET(0x005d7a01); r_esp += 12; return;
}

void f_005d7a39(void) /* FUN_005d7a39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7a39);
    /* 005d7a39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a3a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7a3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a3d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7a40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a43: mov dword ptr [eax], 0x63b724 */ W32((u32)(r_eax), 0x63b724u);
    /* 005d7a49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a4c: call 0x5d7927 */ r_esp -= 4; W32(r_esp, 0x5d7a51u); f_005d7927();
    /* 005d7a51: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7a53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7a54: ret  */ FN_RET(0x005d7a39); r_esp += 4; return;
}

void f_005d7a55(void) /* FUN_005d7a55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7a55);
    /* 005d7a55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a56: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7a58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a59: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7a5c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7a5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a63: call 0x5d78f8 */ r_esp -= 4; W32(r_esp, 0x5d7a68u); f_005d78f8();
    /* 005d7a68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a6b: mov dword ptr [ecx], 0x63b73c */ W32((u32)(r_ecx), 0x63b73cu);
    /* 005d7a71: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a74: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
    /* 005d7a7b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a7e: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 005d7a85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a88: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7a8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7a8b: ret 4 */ FN_RET(0x005d7a55); r_esp += 8; return;
}

void f_005d7a8e(void) /* FUN_005d7a8e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7a8e);
    /* 005d7a8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a8f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7a91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a92: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7a95: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d7a98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a9c: call 0x5d78f8 */ r_esp -= 4; W32(r_esp, 0x5d7aa1u); f_005d78f8();
    /* 005d7aa1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7aa4: mov dword ptr [ecx], 0x63b73c */ W32((u32)(r_ecx), 0x63b73cu);
    /* 005d7aaa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7aad: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
    /* 005d7ab4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ab7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d7aba: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005d7abd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ac0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7ac2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7ac3: ret 8 */ FN_RET(0x005d7a8e); r_esp += 12; return;
}

void f_005d7ac6(void) /* FUN_005d7ac6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7ac6);
    /* 005d7ac6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ac7: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7ac9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7aca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7acd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ad0: mov dword ptr [eax], 0x63b73c */ W32((u32)(r_eax), 0x63b73cu);
    /* 005d7ad6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ad9: call 0x5d7927 */ r_esp -= 4; W32(r_esp, 0x5d7adeu); f_005d7927();
    /* 005d7ade: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7ae0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7ae1: ret  */ FN_RET(0x005d7ac6); r_esp += 4; return;
}

void f_005d7ae2(void) /* FUN_005d7ae2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7ae2);
    /* 005d7ae2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ae3: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7ae5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ae6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7ae9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7aed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7af0: call 0x5d78f8 */ r_esp -= 4; W32(r_esp, 0x5d7af5u); f_005d78f8();
    /* 005d7af5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7af8: mov dword ptr [ecx], 0x63b754 */ W32((u32)(r_ecx), 0x63b754u);
    /* 005d7afe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b01: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7b03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7b04: ret 4 */ FN_RET(0x005d7ae2); r_esp += 8; return;
}

void f_005d7b07(void) /* FUN_005d7b07 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7b07);
    /* 005d7b07: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b08: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7b0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b0b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7b0e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b15: call 0x5d75bf */ r_esp -= 4; W32(r_esp, 0x5d7b1au); f_005d75bf();
    /* 005d7b1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b1d: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 005d7b24: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b27: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
    /* 005d7b2e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7b30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7b31: ret 4 */ FN_RET(0x005d7b07); r_esp += 8; return;
}

void f_005d7b34(void) /* FUN_005d7b34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7b34);
    /* 005d7b34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b35: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7b37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b38: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7b3b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7b3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b42: call 0x5d78f8 */ r_esp -= 4; W32(r_esp, 0x5d7b47u); f_005d78f8();
    /* 005d7b47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b4a: mov dword ptr [ecx], 0x63b76c */ W32((u32)(r_ecx), 0x63b76cu);
    /* 005d7b50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b53: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7b55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7b56: ret 4 */ FN_RET(0x005d7b34); r_esp += 8; return;
}

void f_005d7b59(void) /* FUN_005d7b59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7b59);
    /* 005d7b59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b5a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7b5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b5d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7b60: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7b63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b67: call 0x5d75bf */ r_esp -= 4; W32(r_esp, 0x5d7b6cu); f_005d75bf();
    /* 005d7b6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b6f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b72: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005d7b75: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005d7b78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b7b: mov dword ptr [ecx + 0x10], 1 */ W32((u32)(r_ecx+0x10u), 0x1u);
    /* 005d7b82: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7b84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7b85: ret 4 */ FN_RET(0x005d7b59); r_esp += 8; return;
}

void f_005d7b88(void) /* FUN_005d7b88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7b88);
    /* 005d7b88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b89: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7b8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b8c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7b8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b94: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x5d7b99u); f_005d7540();
    /* 005d7b99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b9c: mov dword ptr [eax], 0x63b784 */ W32((u32)(r_eax), 0x63b784u);
    /* 005d7ba2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ba5: mov dword ptr [ecx + 0x10], 1 */ W32((u32)(r_ecx+0x10u), 0x1u);
    /* 005d7bac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7baf: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7bb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7bb2: ret  */ FN_RET(0x005d7b88); r_esp += 4; return;
}

void f_005d7bb3(void) /* FUN_005d7bb3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7bb3);
    /* 005d7bb3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7bb4: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7bb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7bb7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7bba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7bbd: mov dword ptr [eax], 0x63b784 */ W32((u32)(r_eax), 0x63b784u);
    /* 005d7bc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7bc6: call 0x5d75a3 */ r_esp -= 4; W32(r_esp, 0x5d7bcbu); f_005d75a3();
    /* 005d7bcb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7bcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7bce: ret  */ FN_RET(0x005d7bb3); r_esp += 4; return;
}

void f_005d7bcf(void) /* FUN_005d7bcf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7bcf);
    /* 005d7bcf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7bd0: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7bd2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7bd5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d7bd8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7bdb: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7bdf: jne 0x5d7be3 */ if (!fZ) goto L_005d7be3;
L_005d7be1:; BB(0x005d7be1);
    /* 005d7be1: jmp 0x5d7c2e */ goto L_005d7c2e;
L_005d7be3:; BB(0x005d7be3);
    /* 005d7be3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7be6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7be8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7beb: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d7beeu); call_ind(t); }
    /* 005d7bee: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d7bf1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7bf4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d7bf7: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5d7bfcu); f_005ea257();
    /* 005d7bfc: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7bff: je 0x5d7c2e */ if (fZ) goto L_005d7c2e;
L_005d7c01:; BB(0x005d7c01);
    /* 005d7c01: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7c04: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7c07: cmp edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d7c0a: jg 0x5d7c12 */ if ((!fZ&&fS==fO)) goto L_005d7c12;
L_005d7c0c:; BB(0x005d7c0c);
    /* 005d7c0c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d7c10: jge 0x5d7c1f */ if ((fS==fO)) goto L_005d7c1f;
L_005d7c12:; BB(0x005d7c12);
    /* 005d7c12: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7c15: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7c17: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7c1a: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d7c1du); call_ind(t); }
    /* 005d7c1d: jmp 0x5d7c2e */ goto L_005d7c2e;
L_005d7c1f:; BB(0x005d7c1f);
    /* 005d7c1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c23: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7c26: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d7c29: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d7c2eu); f_005ea1cf();
L_005d7c2e:; BB(0x005d7c2e);
    /* 005d7c2e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7c30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7c31: ret  */ FN_RET(0x005d7bcf); r_esp += 4; return;
}

void f_005d7c32(void) /* FUN_005d7c32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7c32);
    /* 005d7c32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c33: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7c35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7c39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7c3c: cmp dword ptr [eax + 0x10], 1 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7c40: jne 0x5d7c4e */ if (!fZ) goto L_005d7c4e;
L_005d7c42:; BB(0x005d7c42);
    /* 005d7c42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7c45: mov dword ptr [ecx + 0x10], 0xffffffff */ W32((u32)(r_ecx+0x10u), 0xffffffffu);
    /* 005d7c4c: jmp 0x5d7c58 */ goto L_005d7c58;
L_005d7c4e:; BB(0x005d7c4e);
    /* 005d7c4e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7c51: mov dword ptr [edx + 0x10], 1 */ W32((u32)(r_edx+0x10u), 0x1u);
L_005d7c58:; BB(0x005d7c58);
    /* 005d7c58: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7c5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7c5b: ret  */ FN_RET(0x005d7c32); r_esp += 4; return;
}

void f_005d7c5c(void) /* FUN_005d7c5c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7c5c);
    /* 005d7c5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c5d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7c5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c60: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7c63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7c68: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x5d7c6du); f_005d7540();
    /* 005d7c6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7c70: mov dword ptr [eax], 0x63b79c */ W32((u32)(r_eax), 0x63b79cu);
    /* 005d7c76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7c79: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d7c7c: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005d7c7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7c82: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d7c85: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 005d7c88: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7c8b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d7c8e: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005d7c91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7c94: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7c96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7c97: ret 0xc */ FN_RET(0x005d7c5c); r_esp += 16; return;
}

void f_005d7c9a(void) /* FUN_005d7c9a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7c9a);
    /* 005d7c9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c9b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7c9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c9e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7ca1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ca4: mov dword ptr [eax], 0x63b79c */ W32((u32)(r_eax), 0x63b79cu);
    /* 005d7caa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7cad: call 0x5d75a3 */ r_esp -= 4; W32(r_esp, 0x5d7cb2u); f_005d75a3();
    /* 005d7cb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7cb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7cb5: ret  */ FN_RET(0x005d7c9a); r_esp += 4; return;
}

void f_005d7cb6(void) /* FUN_005d7cb6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7cb6);
    /* 005d7cb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7cb7: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7cb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7cba: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7cbd: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d7cc3: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5d7cc8u); f_005d9e23();
    /* 005d7cc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ccb: sub eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d7cce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ccf: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5d7cd4u); f_00624700();
    /* 005d7cd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7cd7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7cda: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d7cdd: cmp eax, dword ptr [ecx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d7ce0: jge 0x5d7ce6 */ if ((fS==fO)) goto L_005d7ce6;
L_005d7ce2:; BB(0x005d7ce2);
    /* 005d7ce2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d7ce4: jmp 0x5d7cfc */ goto L_005d7cfc;
L_005d7ce6:; BB(0x005d7ce6);
    /* 005d7ce6: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d7cec: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5d7cf1u); f_005d9e23();
    /* 005d7cf1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7cf4: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005d7cf7: mov eax, 1 */ r_eax = 0x1u;
L_005d7cfc:; BB(0x005d7cfc);
    /* 005d7cfc: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7cfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7cff: ret  */ FN_RET(0x005d7cb6); r_esp += 4; return;
}

void f_005d7d00(void) /* FUN_005d7d00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7d00);
    /* 005d7d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d01: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7d07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d0a: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7d0e: jne 0x5d7d12 */ if (!fZ) goto L_005d7d12;
L_005d7d10:; BB(0x005d7d10);
    /* 005d7d10: jmp 0x5d7d86 */ goto L_005d7d86;
L_005d7d12:; BB(0x005d7d12);
    /* 005d7d12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d15: call 0x5d7cb6 */ r_esp -= 4; W32(r_esp, 0x5d7d1au); f_005d7cb6();
    /* 005d7d1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7d1c: je 0x5d7d69 */ if (fZ) goto L_005d7d69;
L_005d7d1e:; BB(0x005d7d1e);
    /* 005d7d1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d21: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d7d24: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5d7d29u); f_005d96a9();
    /* 005d7d29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7d2b: je 0x5d7d58 */ if (fZ) goto L_005d7d58;
L_005d7d2d:; BB(0x005d7d2d);
    /* 005d7d2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d30: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d7d33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d36: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d7d39: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d7d3b: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5d7d3eu); call_ind(t); }
    /* 005d7d3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d41: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7d45: jne 0x5d7d56 */ if (!fZ) goto L_005d7d56;
L_005d7d47:; BB(0x005d7d47);
    /* 005d7d47: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d4a: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005d7d4d: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d7d50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d53: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
L_005d7d56:; BB(0x005d7d56);
    /* 005d7d56: jmp 0x5d7d69 */ goto L_005d7d69;
L_005d7d58:; BB(0x005d7d58);
    /* 005d7d58: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d5b: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d7d5e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d61: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d7d64: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d7d66: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5d7d69u); call_ind(t); }
L_005d7d69:; BB(0x005d7d69);
    /* 005d7d69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d6c: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7d70: jne 0x5d7d86 */ if (!fZ) goto L_005d7d86;
L_005d7d72:; BB(0x005d7d72);
    /* 005d7d72: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d75: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d7d79: jg 0x5d7d86 */ if ((!fZ&&fS==fO)) goto L_005d7d86;
L_005d7d7b:; BB(0x005d7d7b);
    /* 005d7d7b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7d80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d83: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d7d86u); call_ind(t); }
L_005d7d86:; BB(0x005d7d86);
    /* 005d7d86: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7d88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7d89: ret  */ FN_RET(0x005d7d00); r_esp += 4; return;
}

void f_005d7d8a(void) /* FUN_005d7d8a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7d8a);
    /* 005d7d8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d8b: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7d8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d8e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7d91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d94: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7d98: jne 0x5d7dab */ if (!fZ) goto L_005d7dab;
L_005d7d9a:; BB(0x005d7d9a);
    /* 005d7d9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7d9d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d7da0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7da3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d7da6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7da8: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5d7dabu); call_ind(t); }
L_005d7dab:; BB(0x005d7dab);
    /* 005d7dab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7dae: call 0x5d765a */ r_esp -= 4; W32(r_esp, 0x5d7db3u); f_005d765a();
    /* 005d7db3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7db5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7db6: ret  */ FN_RET(0x005d7d8a); r_esp += 4; return;
}

void f_005d7db7(void) /* FUN_005d7db7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7db7);
    /* 005d7db7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7db8: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7dba: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7dbd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7dc0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7dc3: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7dc7: jne 0x5d7dcb */ if (!fZ) goto L_005d7dcb;
L_005d7dc9:; BB(0x005d7dc9);
    /* 005d7dc9: jmp 0x5d7e01 */ goto L_005d7e01;
L_005d7dcb:; BB(0x005d7dcb);
    /* 005d7dcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7dce: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005d7dd1: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5d7dd6u); f_005ea257();
    /* 005d7dd6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7dd9: cmp eax, dword ptr [edx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7ddc: jne 0x5d7de9 */ if (!fZ) goto L_005d7de9;
L_005d7dde:; BB(0x005d7dde);
    /* 005d7dde: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7de1: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005d7de4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d7de7: jmp 0x5d7df2 */ goto L_005d7df2;
L_005d7de9:; BB(0x005d7de9);
    /* 005d7de9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7dec: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005d7def: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005d7df2:; BB(0x005d7df2);
    /* 005d7df2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7df5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7df6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7df9: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d7dfc: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d7e01u); f_005ea1cf();
L_005d7e01:; BB(0x005d7e01);
    /* 005d7e01: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7e03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7e04: ret  */ FN_RET(0x005d7db7); r_esp += 4; return;
}

void f_005d7e05(void) /* FUN_005d7e05 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7e05);
    /* 005d7e05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e06: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7e08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e09: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7e0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7e11: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x5d7e16u); f_005d7540();
    /* 005d7e16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7e19: mov dword ptr [eax], 0x63b7b4 */ W32((u32)(r_eax), 0x63b7b4u);
    /* 005d7e1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7e22: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7e24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7e25: ret  */ FN_RET(0x005d7e05); r_esp += 4; return;
}

void f_005d7e26(void) /* FUN_005d7e26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7e26);
    /* 005d7e26: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e27: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7e29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e2a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7e2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7e30: mov dword ptr [eax], 0x63b7b4 */ W32((u32)(r_eax), 0x63b7b4u);
    /* 005d7e36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7e39: call 0x5d75a3 */ r_esp -= 4; W32(r_esp, 0x5d7e3eu); f_005d75a3();
    /* 005d7e3e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7e40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7e41: ret  */ FN_RET(0x005d7e26); r_esp += 4; return;
}

void f_005d7e42(void) /* FUN_005d7e42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7e42);
    /* 005d7e42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e43: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7e45: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7e48: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d7e4b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7e4e: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7e52: jne 0x5d7e56 */ if (!fZ) goto L_005d7e56;
L_005d7e54:; BB(0x005d7e54);
    /* 005d7e54: jmp 0x5d7e70 */ goto L_005d7e70;
L_005d7e56:; BB(0x005d7e56);
    /* 005d7e56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7e59: call 0x5d7e74 */ r_esp -= 4; W32(r_esp, 0x5d7e5eu); f_005d7e74();
    /* 005d7e5e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d7e61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7e64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e65: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d7e68: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d7e6b: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d7e70u); f_005ea1cf();
L_005d7e70:; BB(0x005d7e70);
    /* 005d7e70: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7e72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7e73: ret  */ FN_RET(0x005d7e42); r_esp += 4; return;
}

void f_005d7e74(void) /* FUN_005d7e74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7e74);
    /* 005d7e74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e75: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7e77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e78: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7e7b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d7e81: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5d7e86u); f_005d9e23();
    /* 005d7e86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7e89: sub eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d7e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e8d: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5d7e92u); f_00624700();
    /* 005d7e92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7e95: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7e98: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d7e9b: cmp eax, dword ptr [ecx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d7e9e: jge 0x5d7ead */ if ((fS==fO)) goto L_005d7ead;
L_005d7ea0:; BB(0x005d7ea0);
    /* 005d7ea0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ea3: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005d7ea6: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5d7eabu); f_005ea257();
    /* 005d7eab: jmp 0x5d7ed0 */ goto L_005d7ed0;
L_005d7ead:; BB(0x005d7ead);
    /* 005d7ead: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d7eb3: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5d7eb8u); f_005d9e23();
    /* 005d7eb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ebb: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 005d7ebe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ec1: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005d7ec4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d7ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ec8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5d7ecdu); f_0060ee31();
    /* 005d7ecd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d7ed0:; BB(0x005d7ed0);
    /* 005d7ed0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7ed2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7ed3: ret  */ FN_RET(0x005d7e74); r_esp += 4; return;
}

void f_005d7ee0(void) /* FUN_005d7ee0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7ee0);
    /* 005d7ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7ee7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7eea: call 0x5d75a3 */ r_esp -= 4; W32(r_esp, 0x5d7eefu); f_005d75a3();
    /* 005d7eef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7ef2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d7ef5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7ef7: je 0x5d7f05 */ if (fZ) goto L_005d7f05;
L_005d7ef9:; BB(0x005d7ef9);
    /* 005d7ef9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7efc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7efd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d7f02u); f_0048ac1b();
    /* 005d7f02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d7f05:; BB(0x005d7f05);
    /* 005d7f05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7f08: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7f0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7f0b: ret 4 */ FN_RET(0x005d7ee0); r_esp += 8; return;
}

void f_005d7f10(void) /* FUN_005d7f10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7f10);
    /* 005d7f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f11: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7f17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7f1a: call 0x5d76c7 */ r_esp -= 4; W32(r_esp, 0x5d7f1fu); f_005d76c7();
    /* 005d7f1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7f22: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d7f25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7f27: je 0x5d7f35 */ if (fZ) goto L_005d7f35;
L_005d7f29:; BB(0x005d7f29);
    /* 005d7f29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7f2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f2d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d7f32u); f_0048ac1b();
    /* 005d7f32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d7f35:; BB(0x005d7f35);
    /* 005d7f35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7f38: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7f3b: ret 4 */ FN_RET(0x005d7f10); r_esp += 8; return;
}

void f_005d7f40(void) /* FUN_005d7f40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7f40);
    /* 005d7f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f41: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7f47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7f4a: call 0x5d777d */ r_esp -= 4; W32(r_esp, 0x5d7f4fu); f_005d777d();
    /* 005d7f4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7f52: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d7f55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7f57: je 0x5d7f65 */ if (fZ) goto L_005d7f65;
L_005d7f59:; BB(0x005d7f59);
    /* 005d7f59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7f5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f5d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d7f62u); f_0048ac1b();
    /* 005d7f62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d7f65:; BB(0x005d7f65);
    /* 005d7f65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7f68: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7f6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7f6b: ret 4 */ FN_RET(0x005d7f40); r_esp += 8; return;
}

void f_005d7f70(void) /* FUN_005d7f70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7f70);
    /* 005d7f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f71: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7f73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7f77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7f7a: call 0x5d77f7 */ r_esp -= 4; W32(r_esp, 0x5d7f7fu); f_005d77f7();
    /* 005d7f7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7f82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d7f85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7f87: je 0x5d7f95 */ if (fZ) goto L_005d7f95;
L_005d7f89:; BB(0x005d7f89);
    /* 005d7f89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7f8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f8d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d7f92u); f_0048ac1b();
    /* 005d7f92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d7f95:; BB(0x005d7f95);
    /* 005d7f95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7f98: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7f9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7f9b: ret 4 */ FN_RET(0x005d7f70); r_esp += 8; return;
}

void f_005d7fa0(void) /* FUN_005d7fa0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7fa0);
    /* 005d7fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7fa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7faa: call 0x5d78ad */ r_esp -= 4; W32(r_esp, 0x5d7fafu); f_005d78ad();
    /* 005d7faf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7fb2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d7fb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7fb7: je 0x5d7fc5 */ if (fZ) goto L_005d7fc5;
L_005d7fb9:; BB(0x005d7fb9);
    /* 005d7fb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7fbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fbd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d7fc2u); f_0048ac1b();
    /* 005d7fc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d7fc5:; BB(0x005d7fc5);
    /* 005d7fc5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7fc8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7fca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7fcb: ret 4 */ FN_RET(0x005d7fa0); r_esp += 8; return;
}

void f_005d7fd0(void) /* FUN_005d7fd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7fd0);
    /* 005d7fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7fd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7fd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7fda: call 0x5d7927 */ r_esp -= 4; W32(r_esp, 0x5d7fdfu); f_005d7927();
    /* 005d7fdf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7fe2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d7fe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7fe7: je 0x5d7ff5 */ if (fZ) goto L_005d7ff5;
L_005d7fe9:; BB(0x005d7fe9);
    /* 005d7fe9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7fec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d7ff2u); f_0048ac1b();
    /* 005d7ff2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d7ff5:; BB(0x005d7ff5);
    /* 005d7ff5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ff8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7ffa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7ffb: ret 4 */ FN_RET(0x005d7fd0); r_esp += 8; return;
}

void f_005d8000(void) /* FUN_005d8000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8000);
    /* 005d8000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8001: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8007: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d800a: call 0x5d7a39 */ r_esp -= 4; W32(r_esp, 0x5d800fu); f_005d7a39();
    /* 005d800f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8012: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d8015: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8017: je 0x5d8025 */ if (fZ) goto L_005d8025;
L_005d8019:; BB(0x005d8019);
    /* 005d8019: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d801c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d801d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d8022u); f_0048ac1b();
    /* 005d8022: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d8025:; BB(0x005d8025);
    /* 005d8025: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8028: mov esp, ebp */ r_esp = r_ebp;
    /* 005d802a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d802b: ret 4 */ FN_RET(0x005d8000); r_esp += 8; return;
}

void f_005d8030(void) /* FUN_005d8030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8030);
    /* 005d8030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8031: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8037: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d803a: call 0x5d7ac6 */ r_esp -= 4; W32(r_esp, 0x5d803fu); f_005d7ac6();
    /* 005d803f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8042: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d8045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8047: je 0x5d8055 */ if (fZ) goto L_005d8055;
L_005d8049:; BB(0x005d8049);
    /* 005d8049: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d804c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d804d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d8052u); f_0048ac1b();
    /* 005d8052: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d8055:; BB(0x005d8055);
    /* 005d8055: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8058: mov esp, ebp */ r_esp = r_ebp;
    /* 005d805a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d805b: ret 4 */ FN_RET(0x005d8030); r_esp += 8; return;
}

void f_005d8060(void) /* FUN_005d8060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8060);
    /* 005d8060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8061: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8067: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d806a: call 0x5d7bb3 */ r_esp -= 4; W32(r_esp, 0x5d806fu); f_005d7bb3();
    /* 005d806f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8072: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d8075: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8077: je 0x5d8085 */ if (fZ) goto L_005d8085;
L_005d8079:; BB(0x005d8079);
    /* 005d8079: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d807c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d807d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d8082u); f_0048ac1b();
    /* 005d8082: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d8085:; BB(0x005d8085);
    /* 005d8085: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8088: mov esp, ebp */ r_esp = r_ebp;
    /* 005d808a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d808b: ret 4 */ FN_RET(0x005d8060); r_esp += 8; return;
}

void f_005d8090(void) /* FUN_005d8090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8090);
    /* 005d8090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8091: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8097: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d809a: call 0x5d7c9a */ r_esp -= 4; W32(r_esp, 0x5d809fu); f_005d7c9a();
    /* 005d809f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d80a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d80a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d80a7: je 0x5d80b5 */ if (fZ) goto L_005d80b5;
L_005d80a9:; BB(0x005d80a9);
    /* 005d80a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d80ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d80ad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d80b2u); f_0048ac1b();
    /* 005d80b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d80b5:; BB(0x005d80b5);
    /* 005d80b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d80b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d80ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d80bb: ret 4 */ FN_RET(0x005d8090); r_esp += 8; return;
}

void f_005d80c0(void) /* FUN_005d80c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d80c0);
    /* 005d80c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d80c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d80c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d80c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d80c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d80ca: call 0x5d7e26 */ r_esp -= 4; W32(r_esp, 0x5d80cfu); f_005d7e26();
    /* 005d80cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d80d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d80d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d80d7: je 0x5d80e5 */ if (fZ) goto L_005d80e5;
L_005d80d9:; BB(0x005d80d9);
    /* 005d80d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d80dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d80dd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5d80e2u); f_0048ac1b();
    /* 005d80e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d80e5:; BB(0x005d80e5);
    /* 005d80e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d80e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d80ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d80eb: ret 4 */ FN_RET(0x005d80c0); r_esp += 8; return;
}

void f_005d80f0(void) /* FUN_005d80f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d80f0);
    /* 005d80f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d80f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d80f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d80f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d80f7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d80fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d80fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d80fe: call 0x5dfc30 */ r_esp -= 4; W32(r_esp, 0x5d8103u); f_005dfc30();
    /* 005d8103: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8106: mov dword ptr [ecx], 0x63b7cc */ W32((u32)(r_ecx), 0x63b7ccu);
    /* 005d810c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d810f: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
    /* 005d8119: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d811c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d811e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d811f: ret 8 */ FN_RET(0x005d80f0); r_esp += 12; return;
}

void f_005d8122(void) /* FUN_005d8122 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8122);
    /* 005d8122: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8123: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8125: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8126: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8129: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d812c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d812d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8130: call 0x5dfc30 */ r_esp -= 4; W32(r_esp, 0x5d8135u); f_005dfc30();
    /* 005d8135: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8138: mov dword ptr [ecx], 0x63b7cc */ W32((u32)(r_ecx), 0x63b7ccu);
    /* 005d813e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8141: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
    /* 005d814b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d814e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8150: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8151: ret 4 */ FN_RET(0x005d8122); r_esp += 8; return;
}

void f_005d8154(void) /* FUN_005d8154 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8154);
    /* 005d8154: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8155: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8157: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d815a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d815d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8160: mov dword ptr [eax], 0x63b7cc */ W32((u32)(r_eax), 0x63b7ccu);
    /* 005d8166: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8169: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8170: je 0x5d81af */ if (fZ) goto L_005d81af;
L_005d8172:; BB(0x005d8172);
    /* 005d8172: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8175: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005d817b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d817e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8181: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8184: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8188: je 0x5d819b */ if (fZ) goto L_005d819b;
L_005d818a:; BB(0x005d818a);
    /* 005d818a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d818c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d818f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8191: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8194: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5d8196u); call_ind(t); }
    /* 005d8196: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d8199: jmp 0x5d81a2 */ goto L_005d81a2;
L_005d819b:; BB(0x005d819b);
    /* 005d819b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d81a2:; BB(0x005d81a2);
    /* 005d81a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d81a5: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
L_005d81af:; BB(0x005d81af);
    /* 005d81af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d81b2: call 0x5dfd45 */ r_esp -= 4; W32(r_esp, 0x5d81b7u); f_005dfd45();
    /* 005d81b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005d81b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d81ba: ret  */ FN_RET(0x005d8154); r_esp += 4; return;
}

void f_005d81bb(void) /* FUN_005d81bb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d81bb);
    /* 005d81bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d81bc: mov ebp, esp */ r_ebp = r_esp;
    /* 005d81be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d81bf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d81c2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d81c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d81c6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d81c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d81ca: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d81cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d81ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d81d1: call 0x5e0663 */ r_esp -= 4; W32(r_esp, 0x5d81d6u); f_005e0663();
    /* 005d81d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d81d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d81d9: ret 0xc */ FN_RET(0x005d81bb); r_esp += 16; return;
}

void f_005d81dc(void) /* FUN_005d81dc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d81dc);
    /* 005d81dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d81dd: mov ebp, esp */ r_ebp = r_esp;
    /* 005d81df: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d81e2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d81e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d81e8: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5d81edu); f_005e06f2();
    /* 005d81ed: mov ecx, 0x280 */ r_ecx = 0x280u;
    /* 005d81f2: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d81f4: mov eax, ecx */ r_eax = r_ecx;
    /* 005d81f6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d81f7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d81f9: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005d81fb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d81fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8201: call 0x5e0709 */ r_esp -= 4; W32(r_esp, 0x5d8206u); f_005e0709();
    /* 005d8206: mov edx, 0x1b8 */ r_edx = 0x1b8u;
    /* 005d820b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d820d: mov eax, edx */ r_eax = r_edx;
    /* 005d820f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d8210: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d8212: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005d8214: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d8217: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8219: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 005d821d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8220: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8222: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8223: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 005d8227: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d822a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d822c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d822d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8230: call 0x5e0663 */ r_esp -= 4; W32(r_esp, 0x5d8235u); f_005e0663();
    /* 005d8235: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8238: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d823f: je 0x5d8258 */ if (fZ) goto L_005d8258;
L_005d8241:; BB(0x005d8241);
    /* 005d8241: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8244: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5d8249u); f_005e06f2();
    /* 005d8249: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d824a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d824d: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 005d8253: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5d8258u); f_005e8740();
L_005d8258:; BB(0x005d8258);
    /* 005d8258: mov esp, ebp */ r_esp = r_ebp;
    /* 005d825a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d825b: ret 8 */ FN_RET(0x005d81dc); r_esp += 12; return;
}

void f_005d825e(void) /* FUN_005d825e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d825e);
    /* 005d825e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d825f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8261: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8264: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d8267: mov dword ptr [ebp - 8], 7 */ W32((u32)(r_ebp+0xfffffff8u), 0x7u);
    /* 005d826e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005d8275: mov dword ptr [ebp - 8], 0xa */ W32((u32)(r_ebp+0xfffffff8u), 0xau);
    /* 005d827c: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005d8283: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8286: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d828d: jne 0x5d8370 */ if (!fZ) goto L_005d8370;
L_005d8293:; BB(0x005d8293);
    /* 005d8293: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8298: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d829du); f_0048ab58();
    /* 005d829d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d82a0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d82a3: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d82a7: je 0x5d82b6 */ if (fZ) goto L_005d82b6;
L_005d82a9:; BB(0x005d82a9);
    /* 005d82a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d82ac: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5d82b1u); f_005e8590();
    /* 005d82b1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d82b4: jmp 0x5d82bd */ goto L_005d82bd;
L_005d82b6:; BB(0x005d82b6);
    /* 005d82b6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005d82bd:; BB(0x005d82bd);
    /* 005d82bd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d82c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d82c3: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 005d82c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d82cc: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d82d2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d82d5: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005d82d8: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005d82da: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d82dd: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d82e3: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5d82e8u); f_005e8e99();
    /* 005d82e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d82eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d82ec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d82ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d82f0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d82f3: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d82f9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d82fc: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005d8302: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8304: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5d8307u); call_ind(t); }
    /* 005d8307: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8309: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d830c: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d8312: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5d8317u); f_005e8775();
    /* 005d8317: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d831a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d831b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d831e: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 005d8324: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d8329u); f_005e87aa();
    /* 005d8329: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d832c: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d8332: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8335: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005d833b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d833d: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5d8340u); call_ind(t); }
    /* 005d8340: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8342: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8345: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d834b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d834e: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005d8354: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8356: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d8359u); call_ind(t); }
    /* 005d8359: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d835c: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d8362: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8365: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005d836b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d836d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d8370u); call_ind(t); }
L_005d8370:; BB(0x005d8370);
    /* 005d8370: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8373: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5d8378u); f_005e06f2();
    /* 005d8378: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d837b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d837c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d837f: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d8385: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5d838au); f_005e8740();
    /* 005d838a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d838d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d838e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8391: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 005d8397: call 0x5e8a95 */ r_esp -= 4; W32(r_esp, 0x5d839cu); f_005e8a95();
    /* 005d839c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d839e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d839f: ret 8 */ FN_RET(0x005d825e); r_esp += 12; return;
}

void f_005d83a2(void) /* FUN_005d83a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d83a2);
    /* 005d83a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d83a3: mov ebp, esp */ r_ebp = r_esp;
    /* 005d83a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d83a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d83a9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d83ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d83ae: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005d83b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d83b2: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005d83b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d83b6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d83b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83ba: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d83bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d83be: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d83c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d83c2: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005d83c7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d83ca: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005d83cd: call 0x45aad0 */ r_esp -= 4; W32(r_esp, 0x5d83d2u); f_0045aad0();
    /* 005d83d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d83d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d83d5: ret 0x10 */ FN_RET(0x005d83a2); r_esp += 20; return;
}

void f_005d83d8(void) /* FUN_005d83d8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d83d8);
    /* 005d83d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d83d9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d83db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d83dc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d83df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d83e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d83e5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005d83e8: cmp dword ptr [ebp + 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83ec: je 0x5d8427 */ if (fZ) goto L_005d8427;
L_005d83ee:; BB(0x005d83ee);
    /* 005d83ee: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005d83f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d83f2: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005d83f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83f6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005d83f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d83fa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d83fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d83fe: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005d8401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8402: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005d8405: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8406: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8409: call 0x5d5f8d */ r_esp -= 4; W32(r_esp, 0x5d840eu); f_005d5f8d();
    /* 005d840e: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 005d8411: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8412: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005d8415: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8416: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005d8419: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d841a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d841d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d841f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8422: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5d8425u); call_ind(t); }
    /* 005d8425: jmp 0x5d843f */ goto L_005d843f;
L_005d8427:; BB(0x005d8427);
    /* 005d8427: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005d842a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d842b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005d842e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d842f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d8432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8433: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8436: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8437: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d843a: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x5d843fu); f_005e9f50();
L_005d843f:; BB(0x005d843f);
    /* 005d843f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d8442: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8444: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8447: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5d844au); call_ind(t); }
    /* 005d844a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d844c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d844d: ret 0x24 */ FN_RET(0x005d83d8); r_esp += 40; return;
}

void f_005d8450(void) /* FUN_005d8450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8450);
    /* 005d8450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8451: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8457: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8459: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005d845b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d845e: call 0x5d7422 */ r_esp -= 4; W32(r_esp, 0x5d8463u); f_005d7422();
    /* 005d8463: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005d8466: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8467: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005d846a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d846b: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005d846e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d846f: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005d8472: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8473: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005d8476: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8477: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005d847a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d847b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d847e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d847f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8482: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8483: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d8486: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8487: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d848a: call 0x5d83d8 */ r_esp -= 4; W32(r_esp, 0x5d848fu); f_005d83d8();
    /* 005d848f: cmp dword ptr [ebp + 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8493: je 0x5d84a2 */ if (fZ) goto L_005d84a2;
L_005d8495:; BB(0x005d8495);
    /* 005d8495: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8498: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d849a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d849d: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x5d84a0u); call_ind(t); }
    /* 005d84a0: jmp 0x5d84ad */ goto L_005d84ad;
L_005d84a2:; BB(0x005d84a2);
    /* 005d84a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d84a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d84a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d84aa: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x5d84adu); call_ind(t); }
L_005d84ad:; BB(0x005d84ad);
    /* 005d84ad: cmp dword ptr [ebp + 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d84b1: je 0x5d84c0 */ if (fZ) goto L_005d84c0;
L_005d84b3:; BB(0x005d84b3);
    /* 005d84b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d84b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d84b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d84bb: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5d84beu); call_ind(t); }
    /* 005d84be: jmp 0x5d84cb */ goto L_005d84cb;
L_005d84c0:; BB(0x005d84c0);
    /* 005d84c0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d84c3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d84c5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d84c8: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5d84cbu); call_ind(t); }
L_005d84cb:; BB(0x005d84cb);
    /* 005d84cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d84cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d84ce: ret 0x2c */ FN_RET(0x005d8450); r_esp += 48; return;
}

void f_005d84d1(void) /* FUN_005d84d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d84d1);
    /* 005d84d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d84d2: mov ebp, esp */ r_ebp = r_esp;
    /* 005d84d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d84d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d84d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d84db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d84dc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d84df: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x5d84e4u); f_005d50ed();
    /* 005d84e4: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 005d84e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d84e8: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005d84eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d84ec: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 005d84ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d84f0: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005d84f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d84f4: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005d84f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d84f8: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005d84fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d84fc: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005d84ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8500: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005d8503: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8504: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005d8507: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8508: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005d850b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d850c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d850f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8510: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8513: call 0x5d8450 */ r_esp -= 4; W32(r_esp, 0x5d8518u); f_005d8450();
    /* 005d8518: mov esp, ebp */ r_esp = r_ebp;
    /* 005d851a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d851b: ret 0x30 */ FN_RET(0x005d84d1); r_esp += 52; return;
}

void f_005d851e(void) /* FUN_005d851e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d851e);
    /* 005d851e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d851f: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8521: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8522: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8525: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8528: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d852b: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005d852e: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 005d8531: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8532: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005d8535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8536: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005d8539: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d853a: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005d853d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d853e: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005d8541: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8542: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005d8545: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8546: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d8549: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d854a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d854d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d854e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8551: call 0x5e86e0 */ r_esp -= 4; W32(r_esp, 0x5d8556u); f_005e86e0();
    /* 005d8556: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8559: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d855b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d855e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d8561u); call_ind(t); }
    /* 005d8561: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8563: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8564: ret 0x24 */ FN_RET(0x005d851e); r_esp += 40; return;
}

void f_005d8567(void) /* FUN_005d8567 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8567);
    /* 005d8567: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8568: mov ebp, esp */ r_ebp = r_esp;
    /* 005d856a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d856b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d856e: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 005d8571: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8572: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005d8575: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8576: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005d8579: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d857a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005d857d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d857e: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005d8581: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8582: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005d8585: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8586: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d8589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d858a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d858d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d858e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d8591: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8592: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8595: call 0x5d851e */ r_esp -= 4; W32(r_esp, 0x5d859au); f_005d851e();
    /* 005d859a: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005d859d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d859e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d85a1: call 0x45378f */ r_esp -= 4; W32(r_esp, 0x5d85a6u); f_0045378f();
    /* 005d85a6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d85a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d85ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d85ae: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d85b1u); call_ind(t); }
    /* 005d85b1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d85b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d85b4: ret 0x28 */ FN_RET(0x005d8567); r_esp += 44; return;
}

void f_005d85b7(void) /* FUN_005d85b7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d85b7);
    /* 005d85b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d85b8: mov ebp, esp */ r_ebp = r_esp;
    /* 005d85ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d85bb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d85be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d85c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d85c4: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005d85c7: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005d85ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d85cb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005d85ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d85cf: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005d85d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d85d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d85d6: call 0x5ddd4b */ r_esp -= 4; W32(r_esp, 0x5d85dbu); f_005ddd4b();
    /* 005d85db: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 005d85de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d85df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d85e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d85e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d85e7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d85eau); call_ind(t); }
    /* 005d85ea: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d85ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d85ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d85f1: call 0x5de3af */ r_esp -= 4; W32(r_esp, 0x5d85f6u); f_005de3af();
    /* 005d85f6: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005d85f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d85fa: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005d85fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d85fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8601: call 0x5de520 */ r_esp -= 4; W32(r_esp, 0x5d8606u); f_005de520();
    /* 005d8606: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005d8609: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d860a: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005d860d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d860e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8611: call 0x5de5cf */ r_esp -= 4; W32(r_esp, 0x5d8616u); f_005de5cf();
    /* 005d8616: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005d8619: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d861a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d861d: call 0x5de5fe */ r_esp -= 4; W32(r_esp, 0x5d8622u); f_005de5fe();
    /* 005d8622: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 005d8625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8626: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8629: call 0x5de638 */ r_esp -= 4; W32(r_esp, 0x5d862eu); f_005de638();
    /* 005d862e: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 005d8631: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8632: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 005d8635: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8636: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8639: call 0x5de302 */ r_esp -= 4; W32(r_esp, 0x5d863eu); f_005de302();
    /* 005d863e: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005d8641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8642: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8645: call 0x5de695 */ r_esp -= 4; W32(r_esp, 0x5d864au); f_005de695();
    /* 005d864a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d864d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d864f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8652: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d8655u); call_ind(t); }
    /* 005d8655: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8657: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8658: ret 0x48 */ FN_RET(0x005d85b7); r_esp += 76; return;
}

void f_005d8660(void) /* FUN_005d8660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8660);
    /* 005d8660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8661: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8667: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d866a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d866b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d866e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d866f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8672: call 0x5e0b50 */ r_esp -= 4; W32(r_esp, 0x5d8677u); f_005e0b50();
    /* 005d8677: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d867a: mov dword ptr [edx], 0x63b7e4 */ W32((u32)(r_edx), 0x63b7e4u);
    /* 005d8680: mov eax, dword ptr [0x687098] */ r_eax = R32((u32)(0x687098u));
    /* 005d8685: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8686: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8689: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005d868f: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5d8694u); f_005e4eac();
    /* 005d8694: mov edx, dword ptr [0x6fc3b0] */ r_edx = R32((u32)(0x6fc3b0u));
    /* 005d869a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d869b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d869e: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d86a4: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5d86a9u); f_005e4f18();
    /* 005d86a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d86ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005d86ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d86af: ret 8 */ FN_RET(0x005d8660); r_esp += 12; return;
}

void f_005d86b2(void) /* FUN_005d86b2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d86b2);
    /* 005d86b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d86b3: mov ebp, esp */ r_ebp = r_esp;
    /* 005d86b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d86b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d86b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d86bc: mov dword ptr [eax], 0x63b7e4 */ W32((u32)(r_eax), 0x63b7e4u);
    /* 005d86c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d86c5: call 0x5e0cd4 */ r_esp -= 4; W32(r_esp, 0x5d86cau); f_005e0cd4();
    /* 005d86ca: mov esp, ebp */ r_esp = r_ebp;
    /* 005d86cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d86cd: ret  */ FN_RET(0x005d86b2); r_esp += 4; return;
}

void f_005d86ce(void) /* FUN_005d86ce */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d86ce);
    /* 005d86ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d86cf: mov ebp, esp */ r_ebp = r_esp;
    /* 005d86d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d86d2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d86d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d86d8: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d86ddu); f_005e24af();
    /* 005d86dd: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d86e0: jle 0x5d86f7 */ if ((fZ||fS!=fO)) goto L_005d86f7;
L_005d86e2:; BB(0x005d86e2);
    /* 005d86e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d86e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d86e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d86e9: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d86eeu); f_005e246d();
    /* 005d86ee: mov ecx, eax */ r_ecx = r_eax;
    /* 005d86f0: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5d86f5u); f_005e345f();
    /* 005d86f5: jmp 0x5d86fa */ goto L_005d86fa;
L_005d86f7:; BB(0x005d86f7);
    /* 005d86f7: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005d86fa:; BB(0x005d86fa);
    /* 005d86fa: mov esp, ebp */ r_esp = r_ebp;
    /* 005d86fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d86fd: ret 4 */ FN_RET(0x005d86ce); r_esp += 8; return;
}

void f_005d8700(void) /* FUN_005d8700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8700);
    /* 005d8700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8701: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8703: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8706: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8707: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d870a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d8711: jmp 0x5d871c */ goto L_005d871c;
L_005d8713:; BB(0x005d8713);
    /* 005d8713: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8716: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8719: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d871c:; BB(0x005d871c);
    /* 005d871c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d871f: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d8724u); f_005e24af();
    /* 005d8724: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8727: jge 0x5d875a */ if ((fS==fO)) goto L_005d875a;
L_005d8729:; BB(0x005d8729);
    /* 005d8729: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d872c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d872d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8730: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d8735u); f_005e246d();
    /* 005d8735: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8737: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5d873cu); f_005e345f();
    /* 005d873c: mov esi, eax */ r_esi = r_eax;
    /* 005d873e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8741: call 0x5e1d6d */ r_esp -= 4; W32(r_esp, 0x5d8746u); f_005e1d6d();
    /* 005d8746: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8748: jne 0x5d8758 */ if (!fZ) goto L_005d8758;
L_005d874a:; BB(0x005d874a);
    /* 005d874a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d874d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d874e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8751: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d8756u); f_005e246d();
    /* 005d8756: jmp 0x5d875c */ goto L_005d875c;
L_005d8758:; BB(0x005d8758);
    /* 005d8758: jmp 0x5d8713 */ goto L_005d8713;
L_005d875a:; BB(0x005d875a);
    /* 005d875a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d875c:; BB(0x005d875c);
    /* 005d875c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d875d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d875f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8760: ret  */ FN_RET(0x005d8700); r_esp += 4; return;
}

void f_005d8761(void) /* FUN_005d8761 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8761);
    /* 005d8761: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8762: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8764: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8765: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8768: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d876b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d876c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d876f: call 0x5e26e5 */ r_esp -= 4; W32(r_esp, 0x5d8774u); f_005e26e5();
    /* 005d8774: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8776: je 0x5d8798 */ if (fZ) goto L_005d8798;
L_005d8778:; BB(0x005d8778);
    /* 005d8778: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d877b: call 0x5e1d6d */ r_esp -= 4; W32(r_esp, 0x5d8780u); f_005e1d6d();
    /* 005d8780: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8783: jne 0x5d8791 */ if (!fZ) goto L_005d8791;
L_005d8785:; BB(0x005d8785);
    /* 005d8785: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8788: cmp dword ptr [ecx + 0xb8], 0 */ {  u32 a = R32((u32)(r_ecx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d878f: jne 0x5d8798 */ if (!fZ) goto L_005d8798;
L_005d8791:; BB(0x005d8791);
    /* 005d8791: mov eax, 1 */ r_eax = 0x1u;
    /* 005d8796: jmp 0x5d879a */ goto L_005d879a;
L_005d8798:; BB(0x005d8798);
    /* 005d8798: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d879a:; BB(0x005d879a);
    /* 005d879a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d879c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d879d: ret 4 */ FN_RET(0x005d8761); r_esp += 8; return;
}

void f_005d87a0(void) /* FUN_005d87a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d87a0);
    /* 005d87a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d87a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d87a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d87a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d87a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d87aa: call 0x5e1d6d */ r_esp -= 4; W32(r_esp, 0x5d87afu); f_005e1d6d();
    /* 005d87af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d87b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d87b3: call 0x5d87bc */ r_esp -= 4; W32(r_esp, 0x5d87b8u); f_005d87bc();
    /* 005d87b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d87ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d87bb: ret  */ FN_RET(0x005d87a0); r_esp += 4; return;
}

void f_005d87bc(void) /* FUN_005d87bc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d87bc);
    /* 005d87bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d87bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005d87bf: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d87c2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d87c5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d87cc: jmp 0x5d87d7 */ goto L_005d87d7;
L_005d87ce:; BB(0x005d87ce);
    /* 005d87ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d87d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d87d4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d87d7:; BB(0x005d87d7);
    /* 005d87d7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d87da: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d87dfu); f_005e24af();
    /* 005d87df: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d87e2: jge 0x5d881a */ if ((fS==fO)) goto L_005d881a;
L_005d87e4:; BB(0x005d87e4);
    /* 005d87e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d87e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d87e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d87eb: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d87f0u); f_005e246d();
    /* 005d87f0: mov ecx, eax */ r_ecx = r_eax;
    /* 005d87f2: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5d87f7u); f_005e345f();
    /* 005d87f7: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87fa: jne 0x5d8818 */ if (!fZ) goto L_005d8818;
L_005d87fc:; BB(0x005d87fc);
    /* 005d87fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d87ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8800: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8803: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d8808u); f_005e246d();
    /* 005d8808: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d880b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d880e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8810: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8813: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d8816u); call_ind(t); }
    /* 005d8816: jmp 0x5d881f */ goto L_005d881f;
L_005d8818:; BB(0x005d8818);
    /* 005d8818: jmp 0x5d87ce */ goto L_005d87ce;
L_005d881a:; BB(0x005d881a);
    /* 005d881a: mov eax, 0x6fc3b4 */ r_eax = 0x6fc3b4u;
L_005d881f:; BB(0x005d881f);
    /* 005d881f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8821: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8822: ret 4 */ FN_RET(0x005d87bc); r_esp += 8; return;
}

void f_005d8825(void) /* FUN_005d8825 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8825);
    /* 005d8825: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8826: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8828: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d882b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d882e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8831: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d8836u); f_005e24af();
    /* 005d8836: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8839: jle 0x5d8857 */ if ((fZ||fS!=fO)) goto L_005d8857;
L_005d883b:; BB(0x005d883b);
    /* 005d883b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d883e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d883f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8842: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d8847u); f_005e246d();
    /* 005d8847: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d884a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d884d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d884f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8852: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d8855u); call_ind(t); }
    /* 005d8855: jmp 0x5d885c */ goto L_005d885c;
L_005d8857:; BB(0x005d8857);
    /* 005d8857: mov eax, 0x6fc3b8 */ r_eax = 0x6fc3b8u;
L_005d885c:; BB(0x005d885c);
    /* 005d885c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d885e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d885f: ret 4 */ FN_RET(0x005d8825); r_esp += 8; return;
}

void f_005d8862(void) /* FUN_005d8862 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8862);
    /* 005d8862: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8863: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8865: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8868: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d886b: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 005d8872: mov dword ptr [ebp - 4], 0xc350 */ W32((u32)(r_ebp+0xfffffffcu), 0xc350u);
    /* 005d8879: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d8880: jmp 0x5d888b */ goto L_005d888b;
L_005d8882:; BB(0x005d8882);
    /* 005d8882: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8885: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8888: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005d888b:; BB(0x005d888b);
    /* 005d888b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d888e: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d8893u); f_005e24af();
    /* 005d8893: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8896: jge 0x5d8920 */ if ((fS==fO)) goto L_005d8920;
L_005d889c:; BB(0x005d889c);
    /* 005d889c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d889f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d88a0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d88a3: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d88a8u); f_005e246d();
    /* 005d88a8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d88ab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d88ae: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d88b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d88b3: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5d88b6u); call_ind(t); }
    /* 005d88b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d88b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d88ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d88bb: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5d88c0u); f_006240c0();
    /* 005d88c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d88c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88c5: jne 0x5d891b */ if (!fZ) goto L_005d891b;
L_005d88c7:; BB(0x005d88c7);
    /* 005d88c7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d88ca: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5d88cfu); f_005e345f();
    /* 005d88cf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d88d2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d88d5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d88d7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d88da: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5d88ddu); call_ind(t); }
    /* 005d88dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d88e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d88e1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d88e4: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 005d88ea: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5d88efu); f_005dd469();
    /* 005d88ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d88f2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d88f5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d88f8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d88fb: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88ff: je 0x5d8912 */ if (fZ) goto L_005d8912;
L_005d8901:; BB(0x005d8901);
    /* 005d8901: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8903: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8906: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8908: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d890b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5d890du); call_ind(t); }
    /* 005d890d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d8910: jmp 0x5d8919 */ goto L_005d8919;
L_005d8912:; BB(0x005d8912);
    /* 005d8912: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005d8919:; BB(0x005d8919);
    /* 005d8919: jmp 0x5d8920 */ goto L_005d8920;
L_005d891b:; BB(0x005d891b);
    /* 005d891b: jmp 0x5d8882 */ goto L_005d8882;
L_005d8920:; BB(0x005d8920);
    /* 005d8920: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8923: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d8928u); f_005e24af();
    /* 005d8928: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d892b: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 005d8931: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d8938: jmp 0x5d8943 */ goto L_005d8943;
L_005d893a:; BB(0x005d893a);
    /* 005d893a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d893d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d8940: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005d8943:; BB(0x005d8943);
    /* 005d8943: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8946: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d894bu); f_005e24af();
    /* 005d894b: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d894e: jge 0x5d898a */ if ((fS==fO)) goto L_005d898a;
L_005d8950:; BB(0x005d8950);
    /* 005d8950: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8953: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8954: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8957: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d895cu); f_005e246d();
    /* 005d895c: mov ecx, eax */ r_ecx = r_eax;
    /* 005d895e: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5d8963u); f_005e345f();
    /* 005d8963: cmp eax, 0xc350 */ {  u32 a = r_eax; u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8968: jl 0x5d8988 */ if ((fS!=fO)) goto L_005d8988;
L_005d896a:; BB(0x005d896a);
    /* 005d896a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d896d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d896e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8971: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d8976u); f_005e246d();
    /* 005d8976: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8979: mov dword ptr [eax + 0x8b0], edx */ W32((u32)(r_eax+0x8b0u), r_edx);
    /* 005d897f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8982: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8985: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d8988:; BB(0x005d8988);
    /* 005d8988: jmp 0x5d893a */ goto L_005d893a;
L_005d898a:; BB(0x005d898a);
    /* 005d898a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d898c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d898d: ret 4 */ FN_RET(0x005d8862); r_esp += 8; return;
}

void f_005d8990(void) /* FUN_005d8990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8990);
    /* 005d8990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8991: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8993: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8996: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d8999: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d899c: cmp dword ptr [eax + 0x94], 0 */ {  u32 a = R32((u32)(r_eax+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d89a3: jne 0x5d89a7 */ if (!fZ) goto L_005d89a7;
L_005d89a5:; BB(0x005d89a5);
    /* 005d89a5: jmp 0x5d8a09 */ goto L_005d8a09;
L_005d89a7:; BB(0x005d89a7);
    /* 005d89a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d89aa: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5d89afu); f_005e24af();
    /* 005d89af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d89b1: je 0x5d8a09 */ if (fZ) goto L_005d8a09;
L_005d89b3:; BB(0x005d89b3);
    /* 005d89b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d89b5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d89b8: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5d89bdu); f_005e246d();
    /* 005d89bd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d89c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d89c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d89c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d89c8: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5d89cbu); call_ind(t); }
    /* 005d89cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d89ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d89cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d89d2: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 005d89d8: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5d89ddu); f_005dd469();
    /* 005d89dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d89e0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d89e3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d89e6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d89e9: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d89ed: je 0x5d8a00 */ if (fZ) goto L_005d8a00;
L_005d89ef:; BB(0x005d89ef);
    /* 005d89ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d89f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d89f4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d89f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d89f9: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d89fbu); call_ind(t); }
    /* 005d89fb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d89fe: jmp 0x5d8a07 */ goto L_005d8a07;
L_005d8a00:; BB(0x005d8a00);
    /* 005d8a00: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005d8a07:; BB(0x005d8a07);
    /* 005d8a07: jmp 0x5d89a7 */ goto L_005d89a7;
L_005d8a09:; BB(0x005d8a09);
    /* 005d8a09: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8a0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8a0c: ret  */ FN_RET(0x005d8990); r_esp += 4; return;
}

void f_005d8a0d(void) /* FUN_005d8a0d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8a0d);
    /* 005d8a0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a0e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8a10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a11: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8a14: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d8a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8a1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8a1f: call 0x5d8660 */ r_esp -= 4; W32(r_esp, 0x5d8a24u); f_005d8660();
    /* 005d8a24: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8a27: mov dword ptr [edx], 0x63b824 */ W32((u32)(r_edx), 0x63b824u);
    /* 005d8a2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8a30: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 005d8a3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8a3d: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
    /* 005d8a47: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8a4a: mov dword ptr [edx + 0xd4], 0 */ W32((u32)(r_edx+0xd4u), 0x0u);
    /* 005d8a54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8a57: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8a59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8a5a: ret 8 */ FN_RET(0x005d8a0d); r_esp += 12; return;
}

void f_005d8a5d(void) /* FUN_005d8a5d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8a5d);
    /* 005d8a5d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a5e: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8a60: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8a63: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d8a66: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8a69: mov dword ptr [eax], 0x63b824 */ W32((u32)(r_eax), 0x63b824u);
    /* 005d8a6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8a72: cmp dword ptr [ecx + 0xcc], 0 */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8a79: je 0x5d8ab8 */ if (fZ) goto L_005d8ab8;
L_005d8a7b:; BB(0x005d8a7b);
    /* 005d8a7b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8a7e: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005d8a84: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d8a87: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8a8a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8a8d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8a91: je 0x5d8aa4 */ if (fZ) goto L_005d8aa4;
L_005d8a93:; BB(0x005d8a93);
    /* 005d8a93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a95: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8a98: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8a9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8a9d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5d8a9fu); call_ind(t); }
    /* 005d8a9f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d8aa2: jmp 0x5d8aab */ goto L_005d8aab;
L_005d8aa4:; BB(0x005d8aa4);
    /* 005d8aa4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d8aab:; BB(0x005d8aab);
    /* 005d8aab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8aae: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
L_005d8ab8:; BB(0x005d8ab8);
    /* 005d8ab8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8abb: call 0x5d86b2 */ r_esp -= 4; W32(r_esp, 0x5d8ac0u); f_005d86b2();
    /* 005d8ac0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8ac2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8ac3: ret  */ FN_RET(0x005d8a5d); r_esp += 4; return;
}

void f_005d8ac4(void) /* FUN_005d8ac4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8ac4);
    /* 005d8ac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8ac5: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8ac7: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8aca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8acb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d8ace: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8ad1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8ad4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d8ad7: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 005d8add: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8ae0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8ae3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005d8ae6: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 005d8aec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8aef: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 005d8af9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d8b00: jmp 0x5d8b0b */ goto L_005d8b0b;
L_005d8b02:; BB(0x005d8b02);
    /* 005d8b02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8b05: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8b08: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005d8b0b:; BB(0x005d8b0b);
    /* 005d8b0b: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8b0f: jge 0x5d8b3c */ if ((fS==fO)) goto L_005d8b3c;
L_005d8b11:; BB(0x005d8b11);
    /* 005d8b11: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8b14: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d8b17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8b1a: cmp dword ptr [eax + edx + 0x1c], -1 */ {  u32 a = R32((u32)(r_eax+r_edx+0x1cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8b1f: je 0x5d8b38 */ if (fZ) goto L_005d8b38;
L_005d8b21:; BB(0x005d8b21);
    /* 005d8b21: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8b24: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005d8b2a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d8b2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8b30: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 005d8b36: jmp 0x5d8b3a */ goto L_005d8b3a;
L_005d8b38:; BB(0x005d8b38);
    /* 005d8b38: jmp 0x5d8b3c */ goto L_005d8b3c;
L_005d8b3a:; BB(0x005d8b3a);
    /* 005d8b3a: jmp 0x5d8b02 */ goto L_005d8b02;
L_005d8b3c:; BB(0x005d8b3c);
    /* 005d8b3c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005d8b3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b40: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d8b43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8b47: call 0x5e07d6 */ r_esp -= 4; W32(r_esp, 0x5d8b4cu); f_005e07d6();
    /* 005d8b4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8b4f: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d8b55: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5d8b5au); f_005d9883();
    /* 005d8b5a: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8b5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b5e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8b61: call 0x5e2077 */ r_esp -= 4; W32(r_esp, 0x5d8b66u); f_005e2077();
    /* 005d8b66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8b69: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005d8b6f: call 0x5e2d27 */ r_esp -= 4; W32(r_esp, 0x5d8b74u); f_005e2d27();
    /* 005d8b74: mov esi, eax */ r_esi = r_eax;
    /* 005d8b76: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8b79: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005d8b7f: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5d8b84u); f_005d98da();
    /* 005d8b84: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d8b86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8b8a: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d8b90: call 0x5e2d00 */ r_esp -= 4; W32(r_esp, 0x5d8b95u); f_005e2d00();
    /* 005d8b95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b96: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8b99: call 0x5e215d */ r_esp -= 4; W32(r_esp, 0x5d8b9eu); f_005e215d();
    /* 005d8b9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8ba1: cmp dword ptr [ecx + 0xcc], 0 */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8ba8: jne 0x5d8c41 */ if (!fZ) goto L_005d8c41;
L_005d8bae:; BB(0x005d8bae);
    /* 005d8bae: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8bb0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d8bb5u); f_0048ab58();
    /* 005d8bb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d8bb8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d8bbb: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8bbf: je 0x5d8bd2 */ if (fZ) goto L_005d8bd2;
L_005d8bc1:; BB(0x005d8bc1);
    /* 005d8bc1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8bc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8bc5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8bc8: call 0x5d91ed */ r_esp -= 4; W32(r_esp, 0x5d8bcdu); f_005d91ed();
    /* 005d8bcd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d8bd0: jmp 0x5d8bd9 */ goto L_005d8bd9;
L_005d8bd2:; BB(0x005d8bd2);
    /* 005d8bd2: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005d8bd9:; BB(0x005d8bd9);
    /* 005d8bd9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8bdc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8bdf: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 005d8be5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8be8: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005d8bee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8bf1: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005d8bf4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8bf7: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 005d8bfd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8c00: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 005d8c06: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8c08: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d8c0bu); call_ind(t); }
    /* 005d8c0b: push 0x40d */ { u32 v = 0x40du; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c10: push 0x40b */ { u32 v = 0x40bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c15: push 0x40c */ { u32 v = 0x40cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c1a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8c1d: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 005d8c23: call 0x5e70a6 */ r_esp -= 4; W32(r_esp, 0x5d8c28u); f_005e70a6();
    /* 005d8c28: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c2a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8c2d: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 005d8c33: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8c36: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 005d8c3c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8c3e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5d8c41u); call_ind(t); }
L_005d8c41:; BB(0x005d8c41);
    /* 005d8c41: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8c44: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5d8c49u); f_005e06e1();
    /* 005d8c49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c4a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8c4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c4e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8c51: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 005d8c57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8c5a: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 005d8c60: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8c62: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5d8c65u); call_ind(t); }
    /* 005d8c65: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005d8c68: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8c6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c6c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c6e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8c71: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 005d8c77: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8c7a: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 005d8c80: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8c82: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5d8c85u); call_ind(t); }
    /* 005d8c85: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8c88: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 005d8c8e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8c91: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005d8c97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8c99: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5d8c9cu); call_ind(t); }
    /* 005d8c9c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d8ca3: jmp 0x5d8cae */ goto L_005d8cae;
L_005d8ca5:; BB(0x005d8ca5);
    /* 005d8ca5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8ca8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8cab: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005d8cae:; BB(0x005d8cae);
    /* 005d8cae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8cb1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8cb4: cmp edx, dword ptr [ecx + 0xbc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xbcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8cba: jge 0x5d8e12 */ if ((fS==fO)) goto L_005d8e12;
L_005d8cc0:; BB(0x005d8cc0);
    /* 005d8cc0: push 0x8c4 */ { u32 v = 0x8c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8cc5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d8ccau); f_0048ab58();
    /* 005d8cca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d8ccd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d8cd0: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8cd4: je 0x5d8cf5 */ if (fZ) goto L_005d8cf5;
L_005d8cd6:; BB(0x005d8cd6);
    /* 005d8cd6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8cd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8cda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8cdd: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d8ce0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d8ce3: mov eax, dword ptr [edx + ecx + 0x1c] */ r_eax = R32((u32)(r_edx+r_ecx+0x1cu));
    /* 005d8ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8ce8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8ceb: call 0x5e2d4e */ r_esp -= 4; W32(r_esp, 0x5d8cf0u); f_005e2d4e();
    /* 005d8cf0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d8cf3: jmp 0x5d8cfc */ goto L_005d8cfc;
L_005d8cf5:; BB(0x005d8cf5);
    /* 005d8cf5: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005d8cfc:; BB(0x005d8cfc);
    /* 005d8cfc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8cff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8d02: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8d05: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8d08: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005d8d0b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8d0e: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d8d11: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d8d14: cmp dword ptr [edx + ecx + 0x1c], -2 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x1cu)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8d19: jne 0x5d8d51 */ if (!fZ) goto L_005d8d51;
L_005d8d1b:; BB(0x005d8d1b);
    /* 005d8d1b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8d1e: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 005d8d24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8d28: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5d8d2du); f_005e8740();
    /* 005d8d2d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8d30: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005d8d36: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d8d37: mov ecx, 3 */ r_ecx = 0x3u;
    /* 005d8d3c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d8d3c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d8d3c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d8d3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8d42: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5d8d47u); f_005e8775();
    /* 005d8d47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8d4a: call 0x5e35d0 */ r_esp -= 4; W32(r_esp, 0x5d8d4fu); f_005e35d0();
    /* 005d8d4f: jmp 0x5d8dac */ goto L_005d8dac;
L_005d8d51:; BB(0x005d8d51);
    /* 005d8d51: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8d54: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8d57: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d8d5a: mov dword ptr [edx + 0x8a4], ecx */ W32((u32)(r_edx+0x8a4u), r_ecx);
    /* 005d8d60: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d8d63: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d8d66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8d6a: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5d8d6fu); f_005e87aa();
    /* 005d8d6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8d72: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d8d75: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d8d78: mov eax, dword ptr [edx + ecx + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx+0x20u));
    /* 005d8d7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8d80: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8d82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8d85: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5d8d88u); call_ind(t); }
    /* 005d8d88: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8d8b: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 005d8d91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8d95: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5d8d9au); f_005e8740();
    /* 005d8d9a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8d9d: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005d8da3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8da4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8da7: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5d8dacu); f_005e8775();
L_005d8dac:; BB(0x005d8dac);
    /* 005d8dac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8daf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8db1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8db4: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5d8db7u); call_ind(t); }
    /* 005d8db7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8dba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8dbb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8dbe: call 0x5e2772 */ r_esp -= 4; W32(r_esp, 0x5d8dc3u); f_005e2772();
    /* 005d8dc3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8dc6: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d8dc9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d8dcc: cmp dword ptr [edx + ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8dd1: je 0x5d8ddb */ if (fZ) goto L_005d8ddb;
L_005d8dd3:; BB(0x005d8dd3);
    /* 005d8dd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8dd6: call 0x5e3c28 */ r_esp -= 4; W32(r_esp, 0x5d8ddbu); f_005e3c28();
L_005d8ddb:; BB(0x005d8ddb);
    /* 005d8ddb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8dde: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d8de1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8de4: cmp dword ptr [ecx + eax + 0x24], -1 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x24u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8de9: je 0x5d8e0d */ if (fZ) goto L_005d8e0d;
L_005d8deb:; BB(0x005d8deb);
    /* 005d8deb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8dee: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d8df1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8df4: mov ecx, dword ptr [eax + edx + 0x24] */ r_ecx = R32((u32)(r_eax+r_edx+0x24u));
    /* 005d8df8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8df9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8dfc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8dfe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8e01: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5d8e04u); call_ind(t); }
    /* 005d8e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8e05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8e08: call 0x5e30f4 */ r_esp -= 4; W32(r_esp, 0x5d8e0du); f_005e30f4();
L_005d8e0d:; BB(0x005d8e0d);
    /* 005d8e0d: jmp 0x5d8ca5 */ goto L_005d8ca5;
L_005d8e12:; BB(0x005d8e12);
    /* 005d8e12: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d8e13: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8e15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8e16: ret 0xc */ FN_RET(0x005d8ac4); r_esp += 16; return;
}

void f_005d8e19(void) /* FUN_005d8e19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8e19);
    /* 005d8e19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8e1a: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8e1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8e1d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8e20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8e23: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d8e26: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 005d8e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8e2f: ret 4 */ FN_RET(0x005d8e19); r_esp += 8; return;
}

