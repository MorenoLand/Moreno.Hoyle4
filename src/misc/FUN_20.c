#include "protos.h"

void f_004b26f2(void) /* FUN_004b26f2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b26f2);
    /* 004b26f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b26f3: mov ebp, esp */ r_ebp = r_esp;
    /* 004b26f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b26f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b26f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b26fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b26ff: mov dword ptr [eax + 0x168], ecx */ W32((u32)(r_eax+0x168u), r_ecx);
    /* 004b2705: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2707: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2708: ret 4 */ FN_RET(0x004b26f2); r_esp += 8; return;
}

void f_004b270b(void) /* FUN_004b270b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b270b);
    /* 004b270b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b270c: mov ebp, esp */ r_ebp = r_esp;
    /* 004b270e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b270f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2712: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2715: mov eax, dword ptr [eax + 0x16c] */ r_eax = R32((u32)(r_eax+0x16cu));
    /* 004b271b: mov esp, ebp */ r_esp = r_ebp;
    /* 004b271d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b271e: ret  */ FN_RET(0x004b270b); r_esp += 4; return;
}

void f_004b271f(void) /* FUN_004b271f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b271f);
    /* 004b271f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2720: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2722: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2723: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2726: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2729: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b272c: mov dword ptr [eax + 0x16c], ecx */ W32((u32)(r_eax+0x16cu), r_ecx);
    /* 004b2732: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2734: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2735: ret 4 */ FN_RET(0x004b271f); r_esp += 8; return;
}

void f_004b2738(void) /* FUN_004b2738 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2738);
    /* 004b2738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2739: mov ebp, esp */ r_ebp = r_esp;
    /* 004b273b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b273c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b273f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2742: mov eax, dword ptr [eax + 0x170] */ r_eax = R32((u32)(r_eax+0x170u));
    /* 004b2748: mov esp, ebp */ r_esp = r_ebp;
    /* 004b274a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b274b: ret  */ FN_RET(0x004b2738); r_esp += 4; return;
}

void f_004b274c(void) /* FUN_004b274c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b274c);
    /* 004b274c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b274d: mov ebp, esp */ r_ebp = r_esp;
    /* 004b274f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2750: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2753: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2756: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b2759: mov dword ptr [eax + 0x170], ecx */ W32((u32)(r_eax+0x170u), r_ecx);
    /* 004b275f: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2761: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2762: ret 4 */ FN_RET(0x004b274c); r_esp += 8; return;
}

void f_004b2765(void) /* FUN_004b2765 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2765);
    /* 004b2765: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2766: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2768: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b276b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004b276e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2770: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2772: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2774: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2777: call 0x4b12f2 */ r_esp -= 4; W32(r_esp, 0x4b277cu); f_004b12f2();
    /* 004b277c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004b277e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b2781: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2784: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b2788: call 0x4d6858 */ r_esp -= 4; W32(r_esp, 0x4b278du); f_004d6858();
    /* 004b278d: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b2793: jmp 0x4b27a1 */ goto L_004b27a1;
L_004b2795:; BB(0x004b2795);
    /* 004b2795: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b2799: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b279d: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004b27a1:; BB(0x004b27a1);
    /* 004b27a1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b27a5: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b27a8: jge 0x4b2976 */ if ((fS==fO)) goto L_004b2976;
L_004b27ae:; BB(0x004b27ae);
    /* 004b27ae: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b27b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b27b3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b27b6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b27b9: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b27bd: call 0x4dbe71 */ r_esp -= 4; W32(r_esp, 0x4b27c2u); f_004dbe71();
    /* 004b27c2: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b27c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b27c7: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b27cb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b27ce: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b27d2: call 0x4dbe71 */ r_esp -= 4; W32(r_esp, 0x4b27d7u); f_004dbe71();
    /* 004b27d7: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b27db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b27dc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b27df: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b27e2: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b27e6: call 0x4de1b3 */ r_esp -= 4; W32(r_esp, 0x4b27ebu); f_004de1b3();
    /* 004b27eb: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b27ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b27f0: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b27f4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b27f7: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b27fb: call 0x4de1b3 */ r_esp -= 4; W32(r_esp, 0x4b2800u); f_004de1b3();
    /* 004b2800: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b2804: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2805: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b2808: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b280b: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b280f: call 0x4e0867 */ r_esp -= 4; W32(r_esp, 0x4b2814u); f_004e0867();
    /* 004b2814: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b2818: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2819: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b281d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2820: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b2824: call 0x4e0867 */ r_esp -= 4; W32(r_esp, 0x4b2829u); f_004e0867();
    /* 004b2829: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b282d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b282e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b2831: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2834: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b2838: call 0x4e3136 */ r_esp -= 4; W32(r_esp, 0x4b283du); f_004e3136();
    /* 004b283d: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b2841: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2842: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b2846: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2849: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b284d: call 0x4e3136 */ r_esp -= 4; W32(r_esp, 0x4b2852u); f_004e3136();
    /* 004b2852: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b2856: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2857: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b285a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b285d: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b2861: call 0x4f388d */ r_esp -= 4; W32(r_esp, 0x4b2866u); f_004f388d();
    /* 004b2866: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b286a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b286b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b286f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2872: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b2876: call 0x4f388d */ r_esp -= 4; W32(r_esp, 0x4b287bu); f_004f388d();
    /* 004b287b: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b287f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2880: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b2883: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2886: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b288a: call 0x4e500c */ r_esp -= 4; W32(r_esp, 0x4b288fu); f_004e500c();
    /* 004b288f: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b2893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2894: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b2898: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b289b: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b289f: call 0x4e500c */ r_esp -= 4; W32(r_esp, 0x4b28a4u); f_004e500c();
    /* 004b28a4: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b28a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b28a9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b28ac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b28af: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b28b3: call 0x4e857b */ r_esp -= 4; W32(r_esp, 0x4b28b8u); f_004e857b();
    /* 004b28b8: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b28bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b28bd: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b28c1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b28c4: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b28c8: call 0x4e857b */ r_esp -= 4; W32(r_esp, 0x4b28cdu); f_004e857b();
    /* 004b28cd: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b28d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b28d2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b28d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b28d8: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b28dc: call 0x4f1a25 */ r_esp -= 4; W32(r_esp, 0x4b28e1u); f_004f1a25();
    /* 004b28e1: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b28e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b28e6: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b28ea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b28ed: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b28f1: call 0x4f1a25 */ r_esp -= 4; W32(r_esp, 0x4b28f6u); f_004f1a25();
    /* 004b28f6: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b28fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b28fb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b28fe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2901: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b2905: call 0x4f5926 */ r_esp -= 4; W32(r_esp, 0x4b290au); f_004f5926();
    /* 004b290a: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b290e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b290f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b2913: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2916: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b291a: call 0x4f5926 */ r_esp -= 4; W32(r_esp, 0x4b291fu); f_004f5926();
    /* 004b291f: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b2923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2924: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b2927: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b292a: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b292e: call 0x4f792b */ r_esp -= 4; W32(r_esp, 0x4b2933u); f_004f792b();
    /* 004b2933: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b2937: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2938: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b293c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b293f: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b2943: call 0x4f792b */ r_esp -= 4; W32(r_esp, 0x4b2948u); f_004f792b();
    /* 004b2948: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b294c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b294d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b2950: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2953: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b2957: call 0x4f9944 */ r_esp -= 4; W32(r_esp, 0x4b295cu); f_004f9944();
    /* 004b295c: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b2960: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2961: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b2965: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2968: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b296c: call 0x4f9944 */ r_esp -= 4; W32(r_esp, 0x4b2971u); f_004f9944();
    /* 004b2971: jmp 0x4b2795 */ goto L_004b2795;
L_004b2976:; BB(0x004b2976);
    /* 004b2976: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2978: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2979: ret 4 */ FN_RET(0x004b2765); r_esp += 8; return;
}

void f_004b297c(void) /* FUN_004b297c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b297c);
    /* 004b297c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b297d: mov ebp, esp */ r_ebp = r_esp;
    /* 004b297f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2980: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2983: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b2986: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2989: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b298d: call 0x4d68d9 */ r_esp -= 4; W32(r_esp, 0x4b2992u); f_004d68d9();
    /* 004b2992: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2994: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2995: ret 4 */ FN_RET(0x004b297c); r_esp += 8; return;
}

void f_004b2998(void) /* FUN_004b2998 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2998);
    /* 004b2998: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2999: mov ebp, esp */ r_ebp = r_esp;
    /* 004b299b: sub esp, 0x45c */ {  u32 a = r_esp; u32 b = 0x45cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b29a1: mov dword ptr [ebp - 0x45c], ecx */ W32((u32)(r_ebp+0xfffffba4u), r_ecx);
    /* 004b29a7: mov ecx, dword ptr [ebp - 0x45c] */ r_ecx = R32((u32)(r_ebp+0xfffffba4u));
    /* 004b29ad: call 0x4b2bea */ r_esp -= 4; W32(r_esp, 0x4b29b2u); f_004b2bea();
    /* 004b29b2: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 004b29b8: mov dword ptr [ebp - 0x458], 0 */ W32((u32)(r_ebp+0xfffffba8u), 0x0u);
    /* 004b29c2: mov dword ptr [ebp - 0x40c], 0 */ W32((u32)(r_ebp+0xfffffbf4u), 0x0u);
    /* 004b29cc: mov dword ptr [ebp - 0x414], 0 */ W32((u32)(r_ebp+0xfffffbecu), 0x0u);
    /* 004b29d6: jmp 0x4b29e7 */ goto L_004b29e7;
L_004b29d8:; BB(0x004b29d8);
    /* 004b29d8: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 004b29de: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b29e1: mov dword ptr [ebp - 0x414], eax */ W32((u32)(r_ebp+0xfffffbecu), r_eax);
L_004b29e7:; BB(0x004b29e7);
    /* 004b29e7: cmp dword ptr [ebp - 0x414], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbecu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b29ee: jge 0x4b2a56 */ if ((fS==fO)) goto L_004b2a56;
L_004b29f0:; BB(0x004b29f0);
    /* 004b29f0: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 004b29f6: mov edx, dword ptr [ebp - 0x45c] */ r_edx = R32((u32)(r_ebp+0xfffffba4u));
    /* 004b29fc: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b2a00: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b2a05u); f_004d5cdd();
    /* 004b2a05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2a07: je 0x4b2a54 */ if (fZ) goto L_004b2a54;
L_004b2a09:; BB(0x004b2a09);
    /* 004b2a09: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 004b2a0f: mov ecx, dword ptr [ebp - 0x45c] */ r_ecx = R32((u32)(r_ebp+0xfffffba4u));
    /* 004b2a15: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b2a19: call 0x4d771f */ r_esp -= 4; W32(r_esp, 0x4b2a1eu); f_004d771f();
    /* 004b2a1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2a20: je 0x4b2a54 */ if (fZ) goto L_004b2a54;
L_004b2a22:; BB(0x004b2a22);
    /* 004b2a22: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 004b2a28: mov eax, dword ptr [ebp - 0x45c] */ r_eax = R32((u32)(r_ebp+0xfffffba4u));
    /* 004b2a2e: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b2a32: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b2a37u); f_004d5baa();
    /* 004b2a37: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 004b2a3d: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b2a3f: mov dword ptr [ebp - 0x40c], ecx */ W32((u32)(r_ebp+0xfffffbf4u), r_ecx);
    /* 004b2a45: mov edx, dword ptr [ebp - 0x458] */ r_edx = R32((u32)(r_ebp+0xfffffba8u));
    /* 004b2a4b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b2a4e: mov dword ptr [ebp - 0x458], edx */ W32((u32)(r_ebp+0xfffffba8u), r_edx);
L_004b2a54:; BB(0x004b2a54);
    /* 004b2a54: jmp 0x4b29d8 */ goto L_004b29d8;
L_004b2a56:; BB(0x004b2a56);
    /* 004b2a56: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 004b2a5c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004b2a5d: idiv dword ptr [ebp - 0x458] */ { i32 d = (i32)R32((u32)(r_ebp+0xfffffba8u)); if (!d) UNSUP(0x004b2a5d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004b2a5d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004b2a63: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004b2a66: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 004b2a6d: cmp dword ptr [ebp - 4], 0x1770 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1770u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b2a74: jle 0x4b2a7d */ if ((fZ||fS!=fO)) goto L_004b2a7d;
L_004b2a76:; BB(0x004b2a76);
    /* 004b2a76: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
L_004b2a7d:; BB(0x004b2a7d);
    /* 004b2a7d: cmp dword ptr [ebp - 4], 0x1f40 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1f40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b2a84: jle 0x4b2a8d */ if ((fZ||fS!=fO)) goto L_004b2a8d;
L_004b2a86:; BB(0x004b2a86);
    /* 004b2a86: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
L_004b2a8d:; BB(0x004b2a8d);
    /* 004b2a8d: cmp dword ptr [ebp - 4], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b2a94: jle 0x4b2a9d */ if ((fZ||fS!=fO)) goto L_004b2a9d;
L_004b2a96:; BB(0x004b2a96);
    /* 004b2a96: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
L_004b2a9d:; BB(0x004b2a9d);
    /* 004b2a9d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2aa1: mov ecx, dword ptr [ebp - 0x45c] */ r_ecx = R32((u32)(r_ebp+0xfffffba4u));
    /* 004b2aa7: call 0x4b2bc0 */ r_esp -= 4; W32(r_esp, 0x4b2aacu); f_004b2bc0();
    /* 004b2aac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2aaf: cmp ecx, dword ptr [ebp - 0x410] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbf0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b2ab5: jle 0x4b2bbc */ if ((fZ||fS!=fO)) goto L_004b2bbc;
L_004b2abb:; BB(0x004b2abb);
    /* 004b2abb: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004b2ac1: call 0x4b3980 */ r_esp -= 4; W32(r_esp, 0x4b2ac6u); f_004b3980();
    /* 004b2ac6: mov dword ptr [ebp - 0x458], eax */ W32((u32)(r_ebp+0xfffffba8u), r_eax);
    /* 004b2acc: lea edx, [ebp - 0x454] */ r_edx = (u32)(r_ebp+0xfffffbacu);
    /* 004b2ad2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ad3: mov eax, dword ptr [ebp - 0x458] */ r_eax = R32((u32)(r_ebp+0xfffffba8u));
    /* 004b2ad9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ada: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x4b2adfu); f_0060fb42();
    /* 004b2adf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b2ae2: lea ecx, [ebp - 0x454] */ r_ecx = (u32)(r_ebp+0xfffffbacu);
    /* 004b2ae8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ae9: push 0x691350 */ { u32 v = 0x691350u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2aee: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 004b2af4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2af5: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4b2afau); f_00624050();
    /* 004b2afa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b2afd: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004b2b03: call 0x4b39ad */ r_esp -= 4; W32(r_esp, 0x4b2b08u); f_004b39ad();
    /* 004b2b08: mov dword ptr [ebp - 0x458], eax */ W32((u32)(r_ebp+0xfffffba8u), r_eax);
    /* 004b2b0e: lea eax, [ebp - 0x454] */ r_eax = (u32)(r_ebp+0xfffffbacu);
    /* 004b2b14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b15: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 004b2b1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b1c: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x4b2b21u); f_0060fb42();
    /* 004b2b21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b2b24: lea edx, [ebp - 0x454] */ r_edx = (u32)(r_ebp+0xfffffbacu);
    /* 004b2b2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b2b: push 0x691364 */ { u32 v = 0x691364u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b30: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 004b2b36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b37: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x4b2b3cu); f_00624990();
    /* 004b2b3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b2b3f: lea ecx, [ebp + eax - 0x408] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffbf8u);
    /* 004b2b46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b47: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4b2b4cu); f_00624050();
    /* 004b2b4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b2b4f: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004b2b55: call 0x4b39da */ r_esp -= 4; W32(r_esp, 0x4b2b5au); f_004b39da();
    /* 004b2b5a: mov dword ptr [ebp - 0x458], eax */ W32((u32)(r_ebp+0xfffffba8u), r_eax);
    /* 004b2b60: lea edx, [ebp - 0x454] */ r_edx = (u32)(r_ebp+0xfffffbacu);
    /* 004b2b66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b67: mov eax, dword ptr [ebp - 0x458] */ r_eax = R32((u32)(r_ebp+0xfffffba8u));
    /* 004b2b6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b6e: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x4b2b73u); f_0060fb42();
    /* 004b2b73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b2b76: lea ecx, [ebp - 0x454] */ r_ecx = (u32)(r_ebp+0xfffffbacu);
    /* 004b2b7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b7d: push 0x691384 */ { u32 v = 0x691384u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b82: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 004b2b88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b89: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x4b2b8eu); f_00624990();
    /* 004b2b8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b2b91: lea eax, [ebp + eax - 0x408] */ r_eax = (u32)(r_ebp+r_eax+0xfffffbf8u);
    /* 004b2b98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b99: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4b2b9eu); f_00624050();
    /* 004b2b9e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b2ba1: push 0x10002000 */ { u32 v = 0x10002000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ba6: push 0x6913a0 */ { u32 v = 0x6913a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2bab: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 004b2bb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2bb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2bb4: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x4b2bb9u); f_0060f9f3();
    /* 004b2bb9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b2bbc:; BB(0x004b2bbc);
    /* 004b2bbc: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2bbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2bbf: ret  */ FN_RET(0x004b2998); r_esp += 4; return;
}

void f_004b2bc0(void) /* FUN_004b2bc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2bc0);
    /* 004b2bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2bc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2bc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2bc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2bca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b2bcd: mov dword ptr [eax + 0x118], ecx */ W32((u32)(r_eax+0x118u), r_ecx);
    /* 004b2bd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2bd6: call 0x4b6691 */ r_esp -= 4; W32(r_esp, 0x4b2bdbu); f_004b6691();
    /* 004b2bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2bdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2bdf: call 0x4b2bfe */ r_esp -= 4; W32(r_esp, 0x4b2be4u); f_004b2bfe();
    /* 004b2be4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2be6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2be7: ret 4 */ FN_RET(0x004b2bc0); r_esp += 8; return;
}

void f_004b2bea(void) /* FUN_004b2bea */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2bea);
    /* 004b2bea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2beb: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2bed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2bee: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2bf1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2bf4: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004b2bfa: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2bfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2bfd: ret  */ FN_RET(0x004b2bea); r_esp += 4; return;
}

void f_004b2bfe(void) /* FUN_004b2bfe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2bfe);
    /* 004b2bfe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2bff: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2c01: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b2c04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2c07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2c0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b2c0d: mov dword ptr [eax + 0x110], ecx */ W32((u32)(r_eax+0x110u), r_ecx);
    /* 004b2c13: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2c15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2c18: call 0x4b3886 */ r_esp -= 4; W32(r_esp, 0x4b2c1du); f_004b3886();
    /* 004b2c1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2c20: mov eax, dword ptr [edx + 0x118] */ r_eax = R32((u32)(r_edx+0x118u));
    /* 004b2c26: imul eax, eax, 0x7d */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7du; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004b2c29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2c2a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2c2d: call 0x4b38e0 */ r_esp -= 4; W32(r_esp, 0x4b2c32u); f_004b38e0();
    /* 004b2c32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2c35: mov edx, dword ptr [ecx + 0x118] */ r_edx = R32((u32)(r_ecx+0x118u));
    /* 004b2c3b: imul edx, edx, 0xfa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xfau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004b2c41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2c42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2c45: call 0x4b390d */ r_esp -= 4; W32(r_esp, 0x4b2c4au); f_004b390d();
    /* 004b2c4a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2c4d: mov ecx, dword ptr [eax + 0x118] */ r_ecx = R32((u32)(r_eax+0x118u));
    /* 004b2c53: imul ecx, ecx, 0x1f4 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1f4u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004b2c59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2c5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2c5d: call 0x4b393a */ r_esp -= 4; W32(r_esp, 0x4b2c62u); f_004b393a();
    /* 004b2c62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2c65: mov eax, dword ptr [edx + 0x118] */ r_eax = R32((u32)(r_edx+0x118u));
    /* 004b2c6b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004b2c6e: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2c72: je 0x4b2c85 */ if (fZ) goto L_004b2c85;
L_004b2c74:; BB(0x004b2c74);
    /* 004b2c74: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2c78: je 0x4b2cbb */ if (fZ) goto L_004b2cbb;
L_004b2c7a:; BB(0x004b2c7a);
    /* 004b2c7a: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2c7e: je 0x4b2cf1 */ if (fZ) goto L_004b2cf1;
L_004b2c80:; BB(0x004b2c80);
    /* 004b2c80: jmp 0x4b2d27 */ goto L_004b2d27;
L_004b2c85:; BB(0x004b2c85);
    /* 004b2c85: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2c8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2c8d: call 0x4b38b3 */ r_esp -= 4; W32(r_esp, 0x4b2c92u); f_004b38b3();
    /* 004b2c92: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2c94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2c97: call 0x4b3967 */ r_esp -= 4; W32(r_esp, 0x4b2c9cu); f_004b3967();
    /* 004b2c9c: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ca1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2ca4: call 0x4b3994 */ r_esp -= 4; W32(r_esp, 0x4b2ca9u); f_004b3994();
    /* 004b2ca9: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2cae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2cb1: call 0x4b39c1 */ r_esp -= 4; W32(r_esp, 0x4b2cb6u); f_004b39c1();
    /* 004b2cb6: jmp 0x4b2d55 */ goto L_004b2d55;
L_004b2cbb:; BB(0x004b2cbb);
    /* 004b2cbb: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b2cc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2cc3: call 0x4b38b3 */ r_esp -= 4; W32(r_esp, 0x4b2cc8u); f_004b38b3();
    /* 004b2cc8: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ccd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2cd0: call 0x4b3967 */ r_esp -= 4; W32(r_esp, 0x4b2cd5u); f_004b3967();
    /* 004b2cd5: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2cda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2cdd: call 0x4b3994 */ r_esp -= 4; W32(r_esp, 0x4b2ce2u); f_004b3994();
    /* 004b2ce2: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ce7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2cea: call 0x4b39c1 */ r_esp -= 4; W32(r_esp, 0x4b2cefu); f_004b39c1();
    /* 004b2cef: jmp 0x4b2d55 */ goto L_004b2d55;
L_004b2cf1:; BB(0x004b2cf1);
    /* 004b2cf1: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2cf6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2cf9: call 0x4b38b3 */ r_esp -= 4; W32(r_esp, 0x4b2cfeu); f_004b38b3();
    /* 004b2cfe: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2d06: call 0x4b3967 */ r_esp -= 4; W32(r_esp, 0x4b2d0bu); f_004b3967();
    /* 004b2d0b: push 0x9c4 */ { u32 v = 0x9c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2d13: call 0x4b3994 */ r_esp -= 4; W32(r_esp, 0x4b2d18u); f_004b3994();
    /* 004b2d18: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2d20: call 0x4b39c1 */ r_esp -= 4; W32(r_esp, 0x4b2d25u); f_004b39c1();
    /* 004b2d25: jmp 0x4b2d55 */ goto L_004b2d55;
L_004b2d27:; BB(0x004b2d27);
    /* 004b2d27: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2d2c: call 0x4b38b3 */ r_esp -= 4; W32(r_esp, 0x4b2d31u); f_004b38b3();
    /* 004b2d31: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2d36: call 0x4b3967 */ r_esp -= 4; W32(r_esp, 0x4b2d3bu); f_004b3967();
    /* 004b2d3b: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2d43: call 0x4b3994 */ r_esp -= 4; W32(r_esp, 0x4b2d48u); f_004b3994();
    /* 004b2d48: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2d50: call 0x4b39c1 */ r_esp -= 4; W32(r_esp, 0x4b2d55u); f_004b39c1();
L_004b2d55:; BB(0x004b2d55);
    /* 004b2d55: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2d57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2d58: ret 4 */ FN_RET(0x004b2bfe); r_esp += 8; return;
}

void f_004b2d5b(void) /* FUN_004b2d5b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2d5b);
    /* 004b2d5b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d5c: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2d5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d5f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2d62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2d65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b2d68: mov dword ptr [eax + 0x120], ecx */ W32((u32)(r_eax+0x120u), r_ecx);
    /* 004b2d6e: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2d70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2d71: ret 4 */ FN_RET(0x004b2d5b); r_esp += 8; return;
}

void f_004b2d74(void) /* FUN_004b2d74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2d74);
    /* 004b2d74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d75: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2d77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d78: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2d7b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2d7e: mov eax, dword ptr [eax + 0x120] */ r_eax = R32((u32)(r_eax+0x120u));
    /* 004b2d84: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2d86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2d87: ret  */ FN_RET(0x004b2d74); r_esp += 4; return;
}

void f_004b2d88(void) /* FUN_004b2d88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2d88);
    /* 004b2d88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d89: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2d8b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b2d8e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004b2d91: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b2d94: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004b2d97:; BB(0x004b2d97);
    /* 004b2d97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b2d9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d9b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2d9e: call 0x4b2e14 */ r_esp -= 4; W32(r_esp, 0x4b2da3u); f_004b2e14();
    /* 004b2da3: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004b2da6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b2da9: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2dac: jne 0x4b2db0 */ if (!fZ) goto L_004b2db0;
L_004b2dae:; BB(0x004b2dae);
    /* 004b2dae: jmp 0x4b2dee */ goto L_004b2dee;
L_004b2db0:; BB(0x004b2db0);
    /* 004b2db0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b2db3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2db6: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b2dba: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b2dbfu); f_004d5cdd();
    /* 004b2dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2dc1: je 0x4b2dec */ if (fZ) goto L_004b2dec;
L_004b2dc3:; BB(0x004b2dc3);
    /* 004b2dc3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b2dc6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2dc9: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b2dcd: call 0x4d5dbc */ r_esp -= 4; W32(r_esp, 0x4b2dd2u); f_004d5dbc();
    /* 004b2dd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2dd4: je 0x4b2dec */ if (fZ) goto L_004b2dec;
L_004b2dd6:; BB(0x004b2dd6);
    /* 004b2dd6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b2dd9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2ddc: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b2de0: call 0x4d5dbc */ r_esp -= 4; W32(r_esp, 0x4b2de5u); f_004d5dbc();
    /* 004b2de5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2de8: je 0x4b2dec */ if (fZ) goto L_004b2dec;
L_004b2dea:; BB(0x004b2dea);
    /* 004b2dea: jmp 0x4b2dee */ goto L_004b2dee;
L_004b2dec:; BB(0x004b2dec);
    /* 004b2dec: jmp 0x4b2d97 */ goto L_004b2d97;
L_004b2dee:; BB(0x004b2dee);
    /* 004b2dee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b2df1: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2df3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2df4: ret 4 */ FN_RET(0x004b2d88); r_esp += 8; return;
}

void f_004b2df7(void) /* FUN_004b2df7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2df7);
    /* 004b2df7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2df8: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2dfa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2dfb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2dfe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2e01: mov ecx, dword ptr [eax + 0x120] */ r_ecx = R32((u32)(r_eax+0x120u));
    /* 004b2e07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2e08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2e0b: call 0x4b2e14 */ r_esp -= 4; W32(r_esp, 0x4b2e10u); f_004b2e14();
    /* 004b2e10: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2e12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2e13: ret  */ FN_RET(0x004b2df7); r_esp += 4; return;
}

void f_004b2e14(void) /* FUN_004b2e14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2e14);
    /* 004b2e14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2e15: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2e17: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b2e1a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2e1d: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b2e21: jl 0x4b2e2c */ if ((fS!=fO)) goto L_004b2e2c;
L_004b2e23:; BB(0x004b2e23);
    /* 004b2e23: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b2e2a: jmp 0x4b2e35 */ goto L_004b2e35;
L_004b2e2c:; BB(0x004b2e2c);
    /* 004b2e2c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b2e2f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b2e32: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004b2e35:; BB(0x004b2e35);
    /* 004b2e35: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2e38: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2e3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2e3b: ret 4 */ FN_RET(0x004b2e14); r_esp += 8; return;
}

void f_004b2e3e(void) /* FUN_004b2e3e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2e3e);
    /* 004b2e3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2e3f: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2e41: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b2e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2e47: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2e4b: jne 0x4b2e56 */ if (!fZ) goto L_004b2e56;
L_004b2e4d:; BB(0x004b2e4d);
    /* 004b2e4d: mov dword ptr [ebp - 8], 7 */ W32((u32)(r_ebp+0xfffffff8u), 0x7u);
    /* 004b2e54: jmp 0x4b2e5f */ goto L_004b2e5f;
L_004b2e56:; BB(0x004b2e56);
    /* 004b2e56: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b2e59: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b2e5c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004b2e5f:; BB(0x004b2e5f);
    /* 004b2e5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2e62: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2e64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2e65: ret 4 */ FN_RET(0x004b2e3e); r_esp += 8; return;
}

void f_004b2e68(void) /* FUN_004b2e68 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2e68);
    /* 004b2e68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2e69: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2e6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2e6c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2e6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2e72: call 0x4b2df7 */ r_esp -= 4; W32(r_esp, 0x4b2e77u); f_004b2df7();
    /* 004b2e77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2e7a: mov dword ptr [ecx + 0x120], eax */ W32((u32)(r_ecx+0x120u), r_eax);
    /* 004b2e80: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2e82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2e83: ret  */ FN_RET(0x004b2e68); r_esp += 4; return;
}

void f_004b2e84(void) /* FUN_004b2e84 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2e84);
    /* 004b2e84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2e85: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2e87: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b2e8a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004b2e8d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b2e94: jmp 0x4b2e9f */ goto L_004b2e9f;
L_004b2e96:; BB(0x004b2e96);
    /* 004b2e96: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2e99: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b2e9c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004b2e9f:; BB(0x004b2e9f);
    /* 004b2e9f: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b2ea3: jge 0x4b2ec0 */ if ((fS==fO)) goto L_004b2ec0;
L_004b2ea5:; BB(0x004b2ea5);
    /* 004b2ea5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2ea8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2eab: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b2eaf: call 0x4d5de9 */ r_esp -= 4; W32(r_esp, 0x4b2eb4u); f_004d5de9();
    /* 004b2eb4: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2eb7: jne 0x4b2ebe */ if (!fZ) goto L_004b2ebe;
L_004b2eb9:; BB(0x004b2eb9);
    /* 004b2eb9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2ebc: jmp 0x4b2ec2 */ goto L_004b2ec2;
L_004b2ebe:; BB(0x004b2ebe);
    /* 004b2ebe: jmp 0x4b2e96 */ goto L_004b2e96;
L_004b2ec0:; BB(0x004b2ec0);
    /* 004b2ec0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004b2ec2:; BB(0x004b2ec2);
    /* 004b2ec2: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2ec4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2ec5: ret 4 */ FN_RET(0x004b2e84); r_esp += 8; return;
}

void f_004b2ec8(void) /* FUN_004b2ec8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2ec8);
    /* 004b2ec8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ec9: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2ecb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ecc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2ecf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2ed2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b2ed5: mov dword ptr [eax + 0x178], ecx */ W32((u32)(r_eax+0x178u), r_ecx);
    /* 004b2edb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2ede: call 0x4b2f7f */ r_esp -= 4; W32(r_esp, 0x4b2ee3u); f_004b2f7f();
    /* 004b2ee3: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2ee5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2ee6: ret 4 */ FN_RET(0x004b2ec8); r_esp += 8; return;
}

void f_004b2ee9(void) /* FUN_004b2ee9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2ee9);
    /* 004b2ee9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2eea: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2eec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2eed: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2ef0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2ef3: mov eax, dword ptr [eax + 0x178] */ r_eax = R32((u32)(r_eax+0x178u));
    /* 004b2ef9: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2efb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2efc: ret  */ FN_RET(0x004b2ee9); r_esp += 4; return;
}

void f_004b2efd(void) /* FUN_004b2efd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2efd);
    /* 004b2efd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2efe: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2f00: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b2f03: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004b2f06: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2f09: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 004b2f0f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004b2f12:; BB(0x004b2f12);
    /* 004b2f12: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2f15: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 004b2f1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2f1c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2f1f: call 0x4b2e14 */ r_esp -= 4; W32(r_esp, 0x4b2f24u); f_004b2e14();
    /* 004b2f24: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2f27: mov dword ptr [ecx + 0x178], eax */ W32((u32)(r_ecx+0x178u), r_eax);
    /* 004b2f2d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2f30: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 004b2f36: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2f39: jne 0x4b2f3d */ if (!fZ) goto L_004b2f3d;
L_004b2f3b:; BB(0x004b2f3b);
    /* 004b2f3b: jmp 0x4b2f73 */ goto L_004b2f73;
L_004b2f3d:; BB(0x004b2f3d);
    /* 004b2f3d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2f40: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 004b2f46: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2f49: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b2f4d: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b2f52u); f_004d5cdd();
    /* 004b2f52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2f54: je 0x4b2f71 */ if (fZ) goto L_004b2f71;
L_004b2f56:; BB(0x004b2f56);
    /* 004b2f56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2f59: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 004b2f5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2f62: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b2f66: call 0x4d5dbc */ r_esp -= 4; W32(r_esp, 0x4b2f6bu); f_004d5dbc();
    /* 004b2f6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2f6d: je 0x4b2f71 */ if (fZ) goto L_004b2f71;
L_004b2f6f:; BB(0x004b2f6f);
    /* 004b2f6f: jmp 0x4b2f73 */ goto L_004b2f73;
L_004b2f71:; BB(0x004b2f71);
    /* 004b2f71: jmp 0x4b2f12 */ goto L_004b2f12;
L_004b2f73:; BB(0x004b2f73);
    /* 004b2f73: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b2f76: call 0x4b2f7f */ r_esp -= 4; W32(r_esp, 0x4b2f7bu); f_004b2f7f();
    /* 004b2f7b: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2f7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2f7e: ret  */ FN_RET(0x004b2efd); r_esp += 4; return;
}

void f_004b2f7f(void) /* FUN_004b2f7f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2f7f);
    /* 004b2f7f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2f80: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2f82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2f83: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b2f86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2f89: cmp dword ptr [eax + 0x178], -1 */ {  u32 a = R32((u32)(r_eax+0x178u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2f90: jne 0x4b2fae */ if (!fZ) goto L_004b2fae;
L_004b2f92:; BB(0x004b2f92);
    /* 004b2f92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2f95: mov dword ptr [ecx + 0x17c], 0x3c */ W32((u32)(r_ecx+0x17cu), 0x3cu);
    /* 004b2f9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2fa2: mov dword ptr [edx + 0x180], 0xffffffd8 */ W32((u32)(r_edx+0x180u), 0xffffffd8u);
    /* 004b2fac: jmp 0x4b2ff6 */ goto L_004b2ff6;
L_004b2fae:; BB(0x004b2fae);
    /* 004b2fae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2fb1: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 004b2fb7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2fba: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b2fbe: mov ecx, dword ptr [eax + 0x138] */ r_ecx = R32((u32)(r_eax+0x138u));
    /* 004b2fc4: call 0x421bcf */ r_esp -= 4; W32(r_esp, 0x4b2fc9u); f_00421bcf();
    /* 004b2fc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2fcc: mov dword ptr [ecx + 0x17c], eax */ W32((u32)(r_ecx+0x17cu), r_eax);
    /* 004b2fd2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2fd5: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 004b2fdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2fde: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b2fe2: mov ecx, dword ptr [edx + 0x138] */ r_ecx = R32((u32)(r_edx+0x138u));
    /* 004b2fe8: call 0x421c45 */ r_esp -= 4; W32(r_esp, 0x4b2fedu); f_00421c45();
    /* 004b2fed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b2ff0: mov dword ptr [ecx + 0x180], eax */ W32((u32)(r_ecx+0x180u), r_eax);
L_004b2ff6:; BB(0x004b2ff6);
    /* 004b2ff6: mov esp, ebp */ r_esp = r_ebp;
    /* 004b2ff8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2ff9: ret  */ FN_RET(0x004b2f7f); r_esp += 4; return;
}

void f_004b2ffa(void) /* FUN_004b2ffa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b2ffa);
    /* 004b2ffa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ffb: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2ffd: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b3000: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 004b3003: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b300a: je 0x4b3014 */ if (fZ) goto L_004b3014;
L_004b300c:; BB(0x004b300c);
    /* 004b300c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b300f: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004b3012: jmp 0x4b302c */ goto L_004b302c;
L_004b3014:; BB(0x004b3014);
    /* 004b3014: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004b3017: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b301a: call 0x4fcac1 */ r_esp -= 4; W32(r_esp, 0x4b301fu); f_004fcac1();
    /* 004b301f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004b3022: imul eax, dword ptr [ecx + 0x124] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x124u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004b3029: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
L_004b302c:; BB(0x004b302c);
    /* 004b302c: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 004b302f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3030: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 004b3033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b3034: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x4b3039u); f_0060fb42();
    /* 004b3039: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b303c: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 004b303f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3040: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004b3043: mov ecx, dword ptr [edx + 0xf4] */ r_ecx = R32((u32)(r_edx+0xf4u));
    /* 004b3049: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004b304c: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 004b3052: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b3054: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x4b3057u); call_ind(t); }
    /* 004b3057: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004b305a: mov ecx, dword ptr [ecx + 0xf4] */ r_ecx = R32((u32)(r_ecx+0xf4u));
    /* 004b3060: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004b3063: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004b3069: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b306b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4b306eu); call_ind(t); }
    /* 004b306e: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3070: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3071: ret 4 */ FN_RET(0x004b2ffa); r_esp += 8; return;
}

void f_004b3074(void) /* FUN_004b3074 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3074);
    /* 004b3074: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3075: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3077: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3078: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b307b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b307e: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 004b3084: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3087: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004b308d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b308f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4b3092u); call_ind(t); }
    /* 004b3092: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3095: ret  */ FN_RET(0x004b3074); r_esp += 4; return;
}

void f_004b3096(void) /* FUN_004b3096 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3096);
    /* 004b3096: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3097: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3099: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b309f: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 004b30a5: cmp dword ptr [0x6f97e4], 0 */ {  u32 a = R32((u32)(0x6f97e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b30ac: jne 0x4b313d */ if (!fZ) goto L_004b313d;
L_004b30b2:; BB(0x004b30b2);
    /* 004b30b2: mov eax, dword ptr [0x6f9228] */ r_eax = R32((u32)(0x6f9228u));
    /* 004b30b7: movsx ecx, word ptr [eax + 0xf8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xf8u));
    /* 004b30be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b30c0: jne 0x4b30d8 */ if (!fZ) goto L_004b30d8;
L_004b30c2:; BB(0x004b30c2);
    /* 004b30c2: push 0x6913c4 */ { u32 v = 0x6913c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b30c7: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 004b30cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b30ce: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4b30d3u); f_00624510();
    /* 004b30d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b30d6: jmp 0x4b3114 */ goto L_004b3114;
L_004b30d8:; BB(0x004b30d8);
    /* 004b30d8: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b30de: movsx ecx, word ptr [eax + 0xf8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xf8u));
    /* 004b30e5: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b30e8: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004b30ea: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004b30ec: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004b30ef: add ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b30f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b30f3: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b30f9: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 004b30ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b3100: push 0x6913d8 */ { u32 v = 0x6913d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3105: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 004b310b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b310c: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4b3111u); f_00624050();
    /* 004b3111: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b3114:; BB(0x004b3114);
    /* 004b3114: lea edx, [ebp - 0x100] */ r_edx = (u32)(r_ebp+0xffffff00u);
    /* 004b311a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b311b: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3121: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b3127: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b312d: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b3133: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3135: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b3138u); call_ind(t); }
    /* 004b3138: jmp 0x4b33ea */ goto L_004b33ea;
L_004b313d:; BB(0x004b313d);
    /* 004b313d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b3141: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 004b3147: cmp dword ptr [ebp - 0x108], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b314e: ja 0x4b33c8 */ if ((!fC&&!fZ)) goto L_004b33c8;
L_004b3154:; BB(0x004b3154);
    /* 004b3154: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004b315a: jmp dword ptr [ecx*4 + 0x4b342a] */ { u32 t = R32((u32)(r_ecx*4+0x4b342au)); switch (t) { case 0x4b3161u: goto L_004b3161; case 0x4b3188u: goto L_004b3188; case 0x4b31afu: goto L_004b31af; case 0x4b31d6u: goto L_004b31d6; case 0x4b31fdu: goto L_004b31fd; case 0x4b3224u: goto L_004b3224; case 0x4b324bu: goto L_004b324b; case 0x4b3272u: goto L_004b3272; case 0x4b3299u: goto L_004b3299; case 0x4b32c0u: goto L_004b32c0; case 0x4b32e7u: goto L_004b32e7; case 0x4b330eu: goto L_004b330e; case 0x4b3335u: goto L_004b3335; case 0x4b335cu: goto L_004b335c; case 0x4b3380u: goto L_004b3380; case 0x4b33a4u: goto L_004b33a4; default: UNSUP(0x004b315a, "jump table entry is not a known target"); } }
L_004b3161:; BB(0x004b3161);
    /* 004b3161: push 0x6913e8 */ { u32 v = 0x6913e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3166: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b316c: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 004b3172: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3178: mov edx, dword ptr [eax + 0x18c] */ r_edx = R32((u32)(r_eax+0x18cu));
    /* 004b317e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b3180: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x4b3183u); call_ind(t); }
    /* 004b3183: jmp 0x4b33ea */ goto L_004b33ea;
L_004b3188:; BB(0x004b3188);
    /* 004b3188: push 0x6913f8 */ { u32 v = 0x6913f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b318d: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3193: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 004b3199: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b319f: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b31a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b31a7: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b31aau); call_ind(t); }
    /* 004b31aa: jmp 0x4b33ea */ goto L_004b33ea;
L_004b31af:; BB(0x004b31af);
    /* 004b31af: push 0x691408 */ { u32 v = 0x691408u; r_esp -= 4; W32(r_esp, v); }
    /* 004b31b4: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b31ba: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b31c0: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b31c6: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b31cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b31ce: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b31d1u); call_ind(t); }
    /* 004b31d1: jmp 0x4b33ea */ goto L_004b33ea;
L_004b31d6:; BB(0x004b31d6);
    /* 004b31d6: push 0x69141c */ { u32 v = 0x69141cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b31db: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b31e1: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b31e7: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b31ed: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b31f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b31f5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b31f8u); call_ind(t); }
    /* 004b31f8: jmp 0x4b33ea */ goto L_004b33ea;
L_004b31fd:; BB(0x004b31fd);
    /* 004b31fd: push 0x691428 */ { u32 v = 0x691428u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3202: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3208: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b320e: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3214: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b321a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b321c: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b321fu); call_ind(t); }
    /* 004b321f: jmp 0x4b33ea */ goto L_004b33ea;
L_004b3224:; BB(0x004b3224);
    /* 004b3224: push 0x69143c */ { u32 v = 0x69143cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b3229: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b322f: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b3235: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b323b: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b3241: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3243: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b3246u); call_ind(t); }
    /* 004b3246: jmp 0x4b33ea */ goto L_004b33ea;
L_004b324b:; BB(0x004b324b);
    /* 004b324b: push 0x691448 */ { u32 v = 0x691448u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3250: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3256: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b325c: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3262: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b3268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b326a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b326du); call_ind(t); }
    /* 004b326d: jmp 0x4b33ea */ goto L_004b33ea;
L_004b3272:; BB(0x004b3272);
    /* 004b3272: push 0x69145c */ { u32 v = 0x69145cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b3277: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b327d: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b3283: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3289: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b328f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3291: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b3294u); call_ind(t); }
    /* 004b3294: jmp 0x4b33ea */ goto L_004b33ea;
L_004b3299:; BB(0x004b3299);
    /* 004b3299: push 0x691478 */ { u32 v = 0x691478u; r_esp -= 4; W32(r_esp, v); }
    /* 004b329e: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b32a4: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b32aa: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b32b0: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b32b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b32b8: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b32bbu); call_ind(t); }
    /* 004b32bb: jmp 0x4b33ea */ goto L_004b33ea;
L_004b32c0:; BB(0x004b32c0);
    /* 004b32c0: push 0x691484 */ { u32 v = 0x691484u; r_esp -= 4; W32(r_esp, v); }
    /* 004b32c5: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b32cb: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b32d1: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b32d7: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b32dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b32df: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b32e2u); call_ind(t); }
    /* 004b32e2: jmp 0x4b33ea */ goto L_004b33ea;
L_004b32e7:; BB(0x004b32e7);
    /* 004b32e7: push 0x691490 */ { u32 v = 0x691490u; r_esp -= 4; W32(r_esp, v); }
    /* 004b32ec: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b32f2: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b32f8: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b32fe: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b3304: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3306: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b3309u); call_ind(t); }
    /* 004b3309: jmp 0x4b33ea */ goto L_004b33ea;
L_004b330e:; BB(0x004b330e);
    /* 004b330e: push 0x6914a0 */ { u32 v = 0x6914a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3313: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3319: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b331f: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3325: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b332b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b332d: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b3330u); call_ind(t); }
    /* 004b3330: jmp 0x4b33ea */ goto L_004b33ea;
L_004b3335:; BB(0x004b3335);
    /* 004b3335: push 0x6914a8 */ { u32 v = 0x6914a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b333a: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3340: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b3346: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b334c: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b3352: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3354: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b3357u); call_ind(t); }
    /* 004b3357: jmp 0x4b33ea */ goto L_004b33ea;
L_004b335c:; BB(0x004b335c);
    /* 004b335c: push 0x6914b4 */ { u32 v = 0x6914b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3361: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3367: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b336d: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3373: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b3379: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b337b: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b337eu); call_ind(t); }
    /* 004b337e: jmp 0x4b33ea */ goto L_004b33ea;
L_004b3380:; BB(0x004b3380);
    /* 004b3380: push 0x6914c0 */ { u32 v = 0x6914c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3385: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b338b: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b3391: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3397: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b339d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b339f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b33a2u); call_ind(t); }
    /* 004b33a2: jmp 0x4b33ea */ goto L_004b33ea;
L_004b33a4:; BB(0x004b33a4);
    /* 004b33a4: push 0x6914d0 */ { u32 v = 0x6914d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b33a9: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b33af: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b33b5: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b33bb: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b33c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b33c3: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b33c6u); call_ind(t); }
    /* 004b33c6: jmp 0x4b33ea */ goto L_004b33ea;
L_004b33c8:; BB(0x004b33c8);
    /* 004b33c8: push 0x6f924c */ { u32 v = 0x6f924cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b33cd: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b33d3: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b33d9: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b33df: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b33e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b33e7: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b33eau); call_ind(t); }
L_004b33ea:; BB(0x004b33ea);
    /* 004b33ea: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b33f0: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b33f6: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b33fc: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b3402: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3404: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4b3407u); call_ind(t); }
    /* 004b3407: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b340d: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 004b3413: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 004b3419: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 004b341f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3421: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4b3424u); call_ind(t); }
    /* 004b3424: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3426: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3427: ret 4 */ FN_RET(0x004b3096); r_esp += 8; return;
}

void f_004b3486(void) /* FUN_004b3486 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3486);
    /* 004b3486: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3487: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3489: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b348a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b348d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3490: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004b3496: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3499: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 004b349f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b34a1: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4b34a4u); call_ind(t); }
    /* 004b34a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b34a7: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 004b34ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b34b0: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 004b34b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b34b8: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4b34bbu); call_ind(t); }
    /* 004b34bb: mov esp, ebp */ r_esp = r_ebp;
    /* 004b34bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b34be: ret  */ FN_RET(0x004b3486); r_esp += 4; return;
}

void f_004b34bf(void) /* FUN_004b34bf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b34bf);
    /* 004b34bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b34c0: mov ebp, esp */ r_ebp = r_esp;
    /* 004b34c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b34c3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b34c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b34c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b34cb: call 0x4b2ffa */ r_esp -= 4; W32(r_esp, 0x4b34d0u); f_004b2ffa();
    /* 004b34d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b34d3: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 004b34d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b34dc: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 004b34e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b34e4: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4b34e7u); call_ind(t); }
    /* 004b34e7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b34eb: jle 0x4b350b */ if ((fZ||fS!=fO)) goto L_004b350b;
L_004b34ed:; BB(0x004b34ed);
    /* 004b34ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b34f0: movsx ecx, word ptr [eax + 0x4d8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4d8u));
    /* 004b34f7: cmp ecx, 0xc8 */ {  u32 a = r_ecx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b34fd: jge 0x4b350b */ if ((fS==fO)) goto L_004b350b;
L_004b34ff:; BB(0x004b34ff);
    /* 004b34ff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b3502: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3503: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3506: call 0x4b3b80 */ r_esp -= 4; W32(r_esp, 0x4b350bu); f_004b3b80();
L_004b350b:; BB(0x004b350b);
    /* 004b350b: mov esp, ebp */ r_esp = r_ebp;
    /* 004b350d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b350e: ret 4 */ FN_RET(0x004b34bf); r_esp += 8; return;
}

void f_004b3511(void) /* FUN_004b3511 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3511);
    /* 004b3511: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3512: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3514: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3515: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3518: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b351b: call 0x4b3074 */ r_esp -= 4; W32(r_esp, 0x4b3520u); f_004b3074();
    /* 004b3520: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3523: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 004b3529: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b352c: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 004b3532: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3534: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4b3537u); call_ind(t); }
    /* 004b3537: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b353a: ret  */ FN_RET(0x004b3511); r_esp += 4; return;
}

void f_004b353b(void) /* FUN_004b353b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b353b);
    /* 004b353b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b353c: mov ebp, esp */ r_ebp = r_esp;
    /* 004b353e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b3541: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004b3544: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b3547: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 004b354d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b3550: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b3554: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004b3557: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b355a: mov edx, dword ptr [ecx + 0x138] */ r_edx = R32((u32)(r_ecx+0x138u));
    /* 004b3560: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3561: mov ecx, dword ptr [0x6f945c] */ r_ecx = R32((u32)(0x6f945cu));
    /* 004b3567: call 0x424469 */ r_esp -= 4; W32(r_esp, 0x4b356cu); f_00424469();
    /* 004b356c: mov esp, ebp */ r_esp = r_ebp;
    /* 004b356e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b356f: ret  */ FN_RET(0x004b353b); r_esp += 4; return;
}

void f_004b3570(void) /* FUN_004b3570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3570);
    /* 004b3570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3571: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3577: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3579: mov ecx, dword ptr [0x6f945c] */ r_ecx = R32((u32)(0x6f945cu));
    /* 004b357f: call 0x424469 */ r_esp -= 4; W32(r_esp, 0x4b3584u); f_00424469();
    /* 004b3584: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3586: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3587: ret  */ FN_RET(0x004b3570); r_esp += 4; return;
}

void f_004b3588(void) /* FUN_004b3588 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3588);
    /* 004b3588: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3589: mov ebp, esp */ r_ebp = r_esp;
    /* 004b358b: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b358e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b358f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004b3592: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b3598: jmp 0x4b35a6 */ goto L_004b35a6;
L_004b359a:; BB(0x004b359a);
    /* 004b359a: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004b359e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b35a2: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004b35a6:; BB(0x004b35a6);
    /* 004b35a6: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b35aa: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b35ad: jge 0x4b35e4 */ if ((fS==fO)) goto L_004b35e4;
L_004b35af:; BB(0x004b35af);
    /* 004b35af: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b35b3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b35b6: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b35ba: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b35bfu); f_004d5cdd();
    /* 004b35bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b35c1: je 0x4b35cc */ if (fZ) goto L_004b35cc;
L_004b35c3:; BB(0x004b35c3);
    /* 004b35c3: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b35c7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b35ca: jmp 0x4b35d3 */ goto L_004b35d3;
L_004b35cc:; BB(0x004b35cc);
    /* 004b35cc: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
L_004b35d3:; BB(0x004b35d3);
    /* 004b35d3: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b35d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b35da: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 004b35de: mov word ptr [eax + edx*2], cx */ W16((u32)(r_eax+r_edx*2), (u16)r_ecx);
    /* 004b35e2: jmp 0x4b359a */ goto L_004b359a;
L_004b35e4:; BB(0x004b35e4);
    /* 004b35e4: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b35ea: jmp 0x4b35f8 */ goto L_004b35f8;
L_004b35ec:; BB(0x004b35ec);
    /* 004b35ec: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004b35f0: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b35f4: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_004b35f8:; BB(0x004b35f8);
    /* 004b35f8: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b35fc: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b35ff: jge 0x4b36be */ if ((fS==fO)) goto L_004b36be;
L_004b3605:; BB(0x004b3605);
    /* 004b3605: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004b360b: jmp 0x4b3619 */ goto L_004b3619;
L_004b360d:; BB(0x004b360d);
    /* 004b360d: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 004b3611: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b3615: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
L_004b3619:; BB(0x004b3619);
    /* 004b3619: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b361d: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3620: jge 0x4b36b9 */ if ((fS==fO)) goto L_004b36b9;
L_004b3626:; BB(0x004b3626);
    /* 004b3626: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b362a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b362d: movsx edx, word ptr [ecx + eax*2 + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2+0x2u));
    /* 004b3632: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3635: jne 0x4b3639 */ if (!fZ) goto L_004b3639;
L_004b3637:; BB(0x004b3637);
    /* 004b3637: jmp 0x4b360d */ goto L_004b360d;
L_004b3639:; BB(0x004b3639);
    /* 004b3639: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b363d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3640: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 004b3644: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3647: je 0x4b367e */ if (fZ) goto L_004b367e;
L_004b3649:; BB(0x004b3649);
    /* 004b3649: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b364d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3650: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 004b3654: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b3657: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b365b: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b3660u); f_004d5baa();
    /* 004b3660: mov esi, eax */ r_esi = r_eax;
    /* 004b3662: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b3666: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b3669: movsx eax, word ptr [edx + ecx*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0x2u));
    /* 004b366e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b3671: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b3675: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b367au); f_004d5baa();
    /* 004b367a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b367c: jge 0x4b36b4 */ if ((fS==fO)) goto L_004b36b4;
L_004b367e:; BB(0x004b367e);
    /* 004b367e: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b3682: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b3685: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 004b3689: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004b368d: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b3691: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b3695: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3698: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 004b369b: mov dx, word ptr [esi + edx*2 + 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+r_edx*2+0x2u))) & 0xffffu);
    /* 004b36a0: mov word ptr [ecx + eax*2], dx */ W16((u32)(r_ecx+r_eax*2), (u16)r_edx);
    /* 004b36a4: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b36a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b36ab: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b36af: mov word ptr [ecx + eax*2 + 2], dx */ W16((u32)(r_ecx+r_eax*2+0x2u), (u16)r_edx);
L_004b36b4:; BB(0x004b36b4);
    /* 004b36b4: jmp 0x4b360d */ goto L_004b360d;
L_004b36b9:; BB(0x004b36b9);
    /* 004b36b9: jmp 0x4b35ec */ goto L_004b35ec;
L_004b36be:; BB(0x004b36be);
    /* 004b36be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b36bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004b36c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b36c2: ret 4 */ FN_RET(0x004b3588); r_esp += 8; return;
}

void f_004b36c5(void) /* FUN_004b36c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b36c5);
    /* 004b36c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b36c6: mov ebp, esp */ r_ebp = r_esp;
    /* 004b36c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b36cb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004b36ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b36d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b36d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b36d4: push 0xfb3 */ { u32 v = 0xfb3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b36d9: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004b36de: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004b36e1: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4b36e6u); f_005e8389();
    /* 004b36e6: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004b36ec: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x4b36f1u); f_0045cb85();
    /* 004b36f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b36f3: je 0x4b3700 */ if (fZ) goto L_004b3700;
L_004b36f5:; BB(0x004b36f5);
    /* 004b36f5: push 0x5dc */ { u32 v = 0x5dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004b36fa: call dword ptr [0x633090] */ { u32 t = R32((u32)(0x633090u)); r_esp -= 4; W32(r_esp, 0x4b3700u); call_ind(t); }
L_004b3700:; BB(0x004b3700);
    /* 004b3700: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b3707: jmp 0x4b3712 */ goto L_004b3712;
L_004b3709:; BB(0x004b3709);
    /* 004b3709: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b370c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b370f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004b3712:; BB(0x004b3712);
    /* 004b3712: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3716: jge 0x4b37d6 */ if ((fS==fO)) goto L_004b37d6;
L_004b371c:; BB(0x004b371c);
    /* 004b371c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b371f: mov eax, dword ptr [edx + 0x19c] */ r_eax = R32((u32)(r_edx+0x19cu));
    /* 004b3725: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004b3728: jmp 0x4b3733 */ goto L_004b3733;
L_004b372a:; BB(0x004b372a);
    /* 004b372a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b372d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b3730: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_004b3733:; BB(0x004b3733);
    /* 004b3733: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b3736: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004b3739: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x4b373eu); f_005dd4d2();
    /* 004b373e: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3741: jge 0x4b37d1 */ if ((fS==fO)) goto L_004b37d1;
L_004b3747:; BB(0x004b3747);
    /* 004b3747: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b374a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b374b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b374e: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004b3751: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x4b3756u); f_005dd560();
    /* 004b3756: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004b3759: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b375c: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004b375f: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x4b3764u); f_005dd4d2();
    /* 004b3764: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b3767: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b376a: sub eax, dword ptr [ecx + 0x19c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x19cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b3770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b3771: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b3774: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004b3777: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004b377a: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x4b377fu); f_005b9dbe();
    /* 004b377f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004b3782: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b3785: mov edx, dword ptr [ecx + 0x19c] */ r_edx = R32((u32)(r_ecx+0x19cu));
    /* 004b378b: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b378e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b378f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b3792: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004b3795: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x4b379au); f_005dd560();
    /* 004b379a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004b379d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b37a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b37a1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b37a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b37a5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b37a8: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004b37ab: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x4b37b0u); f_005dd58e();
    /* 004b37b0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b37b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b37b4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b37b7: mov eax, dword ptr [edx + 0x19c] */ r_eax = R32((u32)(r_edx+0x19cu));
    /* 004b37bd: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b37c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b37c1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b37c4: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004b37c7: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x4b37ccu); f_005dd58e();
    /* 004b37cc: jmp 0x4b372a */ goto L_004b372a;
L_004b37d1:; BB(0x004b37d1);
    /* 004b37d1: jmp 0x4b3709 */ goto L_004b3709;
L_004b37d6:; BB(0x004b37d6);
    /* 004b37d6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b37d9: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004b37dc: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x4b37e1u); f_005dd4d2();
    /* 004b37e1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b37e4: mov dword ptr [ecx + 0x1a0], eax */ W32((u32)(r_ecx+0x1a0u), r_eax);
    /* 004b37ea: mov esp, ebp */ r_esp = r_ebp;
    /* 004b37ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b37ed: ret  */ FN_RET(0x004b36c5); r_esp += 4; return;
}

void f_004b37ee(void) /* FUN_004b37ee */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b37ee);
    /* 004b37ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b37ef: mov ebp, esp */ r_ebp = r_esp;
    /* 004b37f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b37f2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b37f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b37f8: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004b37fb: call 0x5dd52a */ r_esp -= 4; W32(r_esp, 0x4b3800u); f_005dd52a();
    /* 004b3800: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3803: mov dword ptr [ecx + 0x19c], 0 */ W32((u32)(r_ecx+0x19cu), 0x0u);
    /* 004b380d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3810: mov dword ptr [edx + 0x1a0], 0 */ W32((u32)(r_edx+0x1a0u), 0x0u);
    /* 004b381a: mov esp, ebp */ r_esp = r_ebp;
    /* 004b381c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b381d: ret  */ FN_RET(0x004b37ee); r_esp += 4; return;
}

void f_004b381e(void) /* FUN_004b381e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b381e);
    /* 004b381e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b381f: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3821: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3822: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3825: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3828: mov dword ptr [eax + 0x10c], 0 */ W32((u32)(r_eax+0x10cu), 0x0u);
    /* 004b3832: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3834: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3835: ret  */ FN_RET(0x004b381e); r_esp += 4; return;
}

void f_004b3836(void) /* FUN_004b3836 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3836);
    /* 004b3836: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3837: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3839: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b383a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b383d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3840: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3843: mov dword ptr [eax + 0x184], ecx */ W32((u32)(r_eax+0x184u), r_ecx);
    /* 004b3849: mov esp, ebp */ r_esp = r_ebp;
    /* 004b384b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b384c: ret 4 */ FN_RET(0x004b3836); r_esp += 8; return;
}

void f_004b384f(void) /* FUN_004b384f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b384f);
    /* 004b384f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3850: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3852: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3853: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3856: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3859: mov eax, dword ptr [eax + 0x184] */ r_eax = R32((u32)(r_eax+0x184u));
    /* 004b385f: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3861: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3862: ret  */ FN_RET(0x004b384f); r_esp += 4; return;
}

void f_004b3863(void) /* FUN_004b3863 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3863);
    /* 004b3863: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3864: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3866: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3867: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b386a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b386c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b386e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b3870: push 0xfb6 */ { u32 v = 0xfb6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3875: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 004b387a: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004b387d: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4b3882u); f_005e8389();
    /* 004b3882: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3884: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3885: ret  */ FN_RET(0x004b3863); r_esp += 4; return;
}

void f_004b3886(void) /* FUN_004b3886 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3886);
    /* 004b3886: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3887: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3889: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b388a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b388d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3890: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3893: mov dword ptr [eax + 0x124], ecx */ W32((u32)(r_eax+0x124u), r_ecx);
    /* 004b3899: mov esp, ebp */ r_esp = r_ebp;
    /* 004b389b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b389c: ret 4 */ FN_RET(0x004b3886); r_esp += 8; return;
}

void f_004b389f(void) /* FUN_004b389f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b389f);
    /* 004b389f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b38a0: mov ebp, esp */ r_ebp = r_esp;
    /* 004b38a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b38a3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b38a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b38a9: mov eax, dword ptr [eax + 0x124] */ r_eax = R32((u32)(r_eax+0x124u));
    /* 004b38af: mov esp, ebp */ r_esp = r_ebp;
    /* 004b38b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b38b2: ret  */ FN_RET(0x004b389f); r_esp += 4; return;
}

void f_004b38b3(void) /* FUN_004b38b3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b38b3);
    /* 004b38b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b38b4: mov ebp, esp */ r_ebp = r_esp;
    /* 004b38b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b38b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b38ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b38bd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b38c0: mov dword ptr [eax + 0x128], ecx */ W32((u32)(r_eax+0x128u), r_ecx);
    /* 004b38c6: mov esp, ebp */ r_esp = r_ebp;
    /* 004b38c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b38c9: ret 4 */ FN_RET(0x004b38b3); r_esp += 8; return;
}

void f_004b38cc(void) /* FUN_004b38cc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b38cc);
    /* 004b38cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b38cd: mov ebp, esp */ r_ebp = r_esp;
    /* 004b38cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b38d0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b38d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b38d6: mov eax, dword ptr [eax + 0x128] */ r_eax = R32((u32)(r_eax+0x128u));
    /* 004b38dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004b38de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b38df: ret  */ FN_RET(0x004b38cc); r_esp += 4; return;
}

void f_004b38e0(void) /* FUN_004b38e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b38e0);
    /* 004b38e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b38e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b38e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b38e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b38e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b38ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b38ed: mov dword ptr [eax + 0x12c], ecx */ W32((u32)(r_eax+0x12cu), r_ecx);
    /* 004b38f3: mov esp, ebp */ r_esp = r_ebp;
    /* 004b38f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b38f6: ret 4 */ FN_RET(0x004b38e0); r_esp += 8; return;
}

void f_004b38f9(void) /* FUN_004b38f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b38f9);
    /* 004b38f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b38fa: mov ebp, esp */ r_ebp = r_esp;
    /* 004b38fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b38fd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3900: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3903: mov eax, dword ptr [eax + 0x12c] */ r_eax = R32((u32)(r_eax+0x12cu));
    /* 004b3909: mov esp, ebp */ r_esp = r_ebp;
    /* 004b390b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b390c: ret  */ FN_RET(0x004b38f9); r_esp += 4; return;
}

void f_004b390d(void) /* FUN_004b390d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b390d);
    /* 004b390d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b390e: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3910: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3911: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3914: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3917: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b391a: mov dword ptr [eax + 0x130], ecx */ W32((u32)(r_eax+0x130u), r_ecx);
    /* 004b3920: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3922: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3923: ret 4 */ FN_RET(0x004b390d); r_esp += 8; return;
}

void f_004b3926(void) /* FUN_004b3926 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3926);
    /* 004b3926: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3927: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3929: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b392a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b392d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3930: mov eax, dword ptr [eax + 0x130] */ r_eax = R32((u32)(r_eax+0x130u));
    /* 004b3936: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3938: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3939: ret  */ FN_RET(0x004b3926); r_esp += 4; return;
}

void f_004b393a(void) /* FUN_004b393a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b393a);
    /* 004b393a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b393b: mov ebp, esp */ r_ebp = r_esp;
    /* 004b393d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b393e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3941: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3944: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3947: mov dword ptr [eax + 0x134], ecx */ W32((u32)(r_eax+0x134u), r_ecx);
    /* 004b394d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b394f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3950: ret 4 */ FN_RET(0x004b393a); r_esp += 8; return;
}

void f_004b3953(void) /* FUN_004b3953 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3953);
    /* 004b3953: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3954: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3956: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3957: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b395a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b395d: mov eax, dword ptr [eax + 0x134] */ r_eax = R32((u32)(r_eax+0x134u));
    /* 004b3963: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3965: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3966: ret  */ FN_RET(0x004b3953); r_esp += 4; return;
}

void f_004b3967(void) /* FUN_004b3967 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3967);
    /* 004b3967: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3968: mov ebp, esp */ r_ebp = r_esp;
    /* 004b396a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b396b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b396e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3971: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3974: mov dword ptr [eax + 0x138], ecx */ W32((u32)(r_eax+0x138u), r_ecx);
    /* 004b397a: mov esp, ebp */ r_esp = r_ebp;
    /* 004b397c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b397d: ret 4 */ FN_RET(0x004b3967); r_esp += 8; return;
}

void f_004b3980(void) /* FUN_004b3980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3980);
    /* 004b3980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3981: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3987: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b398a: mov eax, dword ptr [eax + 0x138] */ r_eax = R32((u32)(r_eax+0x138u));
    /* 004b3990: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3992: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3993: ret  */ FN_RET(0x004b3980); r_esp += 4; return;
}

void f_004b3994(void) /* FUN_004b3994 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3994);
    /* 004b3994: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3995: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3997: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3998: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b399b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b399e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b39a1: mov dword ptr [eax + 0x13c], ecx */ W32((u32)(r_eax+0x13cu), r_ecx);
    /* 004b39a7: mov esp, ebp */ r_esp = r_ebp;
    /* 004b39a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b39aa: ret 4 */ FN_RET(0x004b3994); r_esp += 8; return;
}

void f_004b39ad(void) /* FUN_004b39ad */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b39ad);
    /* 004b39ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b39ae: mov ebp, esp */ r_ebp = r_esp;
    /* 004b39b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b39b1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b39b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b39b7: mov eax, dword ptr [eax + 0x13c] */ r_eax = R32((u32)(r_eax+0x13cu));
    /* 004b39bd: mov esp, ebp */ r_esp = r_ebp;
    /* 004b39bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b39c0: ret  */ FN_RET(0x004b39ad); r_esp += 4; return;
}

void f_004b39c1(void) /* FUN_004b39c1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b39c1);
    /* 004b39c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b39c2: mov ebp, esp */ r_ebp = r_esp;
    /* 004b39c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b39c5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b39c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b39cb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b39ce: mov dword ptr [eax + 0x140], ecx */ W32((u32)(r_eax+0x140u), r_ecx);
    /* 004b39d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b39d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b39d7: ret 4 */ FN_RET(0x004b39c1); r_esp += 8; return;
}

void f_004b39da(void) /* FUN_004b39da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b39da);
    /* 004b39da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b39db: mov ebp, esp */ r_ebp = r_esp;
    /* 004b39dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b39de: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b39e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b39e4: mov eax, dword ptr [eax + 0x140] */ r_eax = R32((u32)(r_eax+0x140u));
    /* 004b39ea: mov esp, ebp */ r_esp = r_ebp;
    /* 004b39ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b39ed: ret  */ FN_RET(0x004b39da); r_esp += 4; return;
}

void f_004b39ee(void) /* FUN_004b39ee */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b39ee);
    /* 004b39ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b39ef: mov ebp, esp */ r_ebp = r_esp;
    /* 004b39f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b39f2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b39f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b39f8: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 004b39fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3a01: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 004b3a07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3a09: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4b3a0cu); call_ind(t); }
    /* 004b3a0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3a0f: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 004b3a15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3a18: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 004b3a1e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3a20: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4b3a23u); call_ind(t); }
    /* 004b3a23: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3a25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3a26: ret  */ FN_RET(0x004b39ee); r_esp += 4; return;
}

void f_004b3a27(void) /* FUN_004b3a27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3a27);
    /* 004b3a27: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a28: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3a2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a2b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3a2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3a31: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 004b3a37: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3a3a: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 004b3a40: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3a42: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4b3a45u); call_ind(t); }
    /* 004b3a45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3a48: mov ecx, dword ptr [eax + 0xf0] */ r_ecx = R32((u32)(r_eax+0xf0u));
    /* 004b3a4e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3a51: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 004b3a57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3a59: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4b3a5cu); call_ind(t); }
    /* 004b3a5c: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3a5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3a5f: ret  */ FN_RET(0x004b3a27); r_esp += 4; return;
}

void f_004b3a60(void) /* FUN_004b3a60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3a60);
    /* 004b3a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a61: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3a63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3a67: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3a6b: jle 0x4b3a79 */ if ((fZ||fS!=fO)) goto L_004b3a79;
L_004b3a6d:; BB(0x004b3a6d);
    /* 004b3a6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3a70: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3a73: mov dword ptr [eax + 0x174], ecx */ W32((u32)(r_eax+0x174u), r_ecx);
L_004b3a79:; BB(0x004b3a79);
    /* 004b3a79: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3a7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3a7c: ret 4 */ FN_RET(0x004b3a60); r_esp += 8; return;
}

void f_004b3a7f(void) /* FUN_004b3a7f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3a7f);
    /* 004b3a7f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a80: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3a82: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b3a85: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004b3a88: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b3a8f: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 004b3a92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b3a93: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b3a96: call 0x4b6e67 */ r_esp -= 4; W32(r_esp, 0x4b3a9bu); f_004b6e67();
    /* 004b3a9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3a9e: mov dl, byte ptr [ebp - 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 004b3aa1: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 004b3aa3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b3aa6: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3aa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3aa9: ret 4 */ FN_RET(0x004b3a7f); r_esp += 8; return;
}

void f_004b3aac(void) /* FUN_004b3aac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3aac);
    /* 004b3aac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3aad: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3aaf: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b3ab2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004b3ab5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b3abc: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 004b3abf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b3ac0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b3ac3: call 0x4b6e92 */ r_esp -= 4; W32(r_esp, 0x4b3ac8u); f_004b6e92();
    /* 004b3ac8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3acb: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004b3ad1: mov edx, dword ptr [0x6f93b8] */ r_edx = R32((u32)(0x6f93b8u));
    /* 004b3ad7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b3ad9: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 004b3adb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004b3add: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3adf: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 004b3ae2: mov eax, edx */ r_eax = r_edx;
    /* 004b3ae4: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3ae6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ae7: ret  */ FN_RET(0x004b3aac); r_esp += 4; return;
}

void f_004b3ae8(void) /* FUN_004b3ae8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3ae8);
    /* 004b3ae8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3ae9: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3aeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3aec: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3aef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3af2: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 004b3af8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3afb: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 004b3b01: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3b03: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4b3b06u); call_ind(t); }
    /* 004b3b06: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3b08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3b09: ret  */ FN_RET(0x004b3ae8); r_esp += 4; return;
}

void f_004b3b0a(void) /* FUN_004b3b0a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3b0a);
    /* 004b3b0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3b0b: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3b0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3b0e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b3b11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b3b14: mov eax, dword ptr [eax + 0x174] */ r_eax = R32((u32)(r_eax+0x174u));
    /* 004b3b1a: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3b1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3b1d: ret  */ FN_RET(0x004b3b0a); r_esp += 4; return;
}

void f_004b3b1e(void) /* FUN_004b3b1e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3b1e);
    /* 004b3b1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3b1f: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3b21: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b3b24: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004b3b27: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b3b2d: jmp 0x4b3b3b */ goto L_004b3b3b;
L_004b3b2f:; BB(0x004b3b2f);
    /* 004b3b2f: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b3b33: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b3b37: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004b3b3b:; BB(0x004b3b3b);
    /* 004b3b3b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b3b3f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b3b42: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b3b49: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3b4b: jge 0x4b3b70 */ if ((fS==fO)) goto L_004b3b70;
L_004b3b4d:; BB(0x004b3b4d);
    /* 004b3b4d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b3b51: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b3b54: mov ecx, dword ptr [edx + ecx*4 + 0x1b8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 004b3b5b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b3b5f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b3b62: mov eax, dword ptr [edx + eax*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1b8u));
    /* 004b3b69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3b6b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4b3b6eu); call_ind(t); }
    /* 004b3b6e: jmp 0x4b3b2f */ goto L_004b3b2f;
L_004b3b70:; BB(0x004b3b70);
    /* 004b3b70: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b3b73: mov word ptr [eax + 0x4d8], 0 */ W16((u32)(r_eax+0x4d8u), 0x0u);
    /* 004b3b7c: mov esp, ebp */ r_esp = r_ebp;
    /* 004b3b7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3b7f: ret  */ FN_RET(0x004b3b1e); r_esp += 4; return;
}

void f_004b3b80(void) /* FUN_004b3b80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b3b80);
    /* 004b3b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b3b81: mov ebp, esp */ r_ebp = r_esp;
    /* 004b3b83: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b3b86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b3b87: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b3b88: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 004b3b8b: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3b8e: movsx ecx, word ptr [eax + 0x4d8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4d8u));
    /* 004b3b95: cmp ecx, 0xc8 */ {  u32 a = r_ecx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3b9b: jge 0x4b3ba3 */ if ((fS==fO)) goto L_004b3ba3;
L_004b3b9d:; BB(0x004b3b9d);
    /* 004b3b9d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3ba1: jne 0x4b3ba8 */ if (!fZ) goto L_004b3ba8;
L_004b3ba3:; BB(0x004b3ba3);
    /* 004b3ba3: jmp 0x4b463a */ goto L_004b463a;
L_004b3ba8:; BB(0x004b3ba8);
    /* 004b3ba8: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3bab: cmp dword ptr [edx + 0x4dc], 0 */ {  u32 a = R32((u32)(r_edx+0x4dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3bb2: jne 0x4b3bf5 */ if (!fZ) goto L_004b3bf5;
L_004b3bb4:; BB(0x004b3bb4);
    /* 004b3bb4: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3bb7: call 0x4b25fd */ r_esp -= 4; W32(r_esp, 0x4b3bbcu); f_004b25fd();
    /* 004b3bbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3bbf: jne 0x4b3bdb */ if (!fZ) goto L_004b3bdb;
L_004b3bc1:; BB(0x004b3bc1);
    /* 004b3bc1: mov word ptr [ebp - 0x30], 0x8c */ W16((u32)(r_ebp+0xffffffd0u), 0x8cu);
    /* 004b3bc7: mov word ptr [ebp - 0x2c], 0x127 */ W16((u32)(r_ebp+0xffffffd4u), 0x127u);
    /* 004b3bcd: mov word ptr [ebp - 0x28], 0x13b */ W16((u32)(r_ebp+0xffffffd8u), 0x13bu);
    /* 004b3bd3: mov word ptr [ebp - 0x24], 0x1cc */ W16((u32)(r_ebp+0xffffffdcu), 0x1ccu);
    /* 004b3bd9: jmp 0x4b3bf3 */ goto L_004b3bf3;
L_004b3bdb:; BB(0x004b3bdb);
    /* 004b3bdb: mov word ptr [ebp - 0x30], 0xaa */ W16((u32)(r_ebp+0xffffffd0u), 0xaau);
    /* 004b3be1: mov word ptr [ebp - 0x2c], 0x127 */ W16((u32)(r_ebp+0xffffffd4u), 0x127u);
    /* 004b3be7: mov word ptr [ebp - 0x28], 0xc8 */ W16((u32)(r_ebp+0xffffffd8u), 0xc8u);
    /* 004b3bed: mov word ptr [ebp - 0x24], 0x1b8 */ W16((u32)(r_ebp+0xffffffdcu), 0x1b8u);
L_004b3bf3:; BB(0x004b3bf3);
    /* 004b3bf3: jmp 0x4b3c34 */ goto L_004b3c34;
L_004b3bf5:; BB(0x004b3bf5);
    /* 004b3bf5: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3bf8: call 0x4b25fd */ r_esp -= 4; W32(r_esp, 0x4b3bfdu); f_004b25fd();
    /* 004b3bfd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3c00: jne 0x4b3c1c */ if (!fZ) goto L_004b3c1c;
L_004b3c02:; BB(0x004b3c02);
    /* 004b3c02: mov word ptr [ebp - 0x30], 0x71 */ W16((u32)(r_ebp+0xffffffd0u), 0x71u);
    /* 004b3c08: mov word ptr [ebp - 0x2c], 0x14a */ W16((u32)(r_ebp+0xffffffd4u), 0x14au);
    /* 004b3c0e: mov word ptr [ebp - 0x28], 0x11e */ W16((u32)(r_ebp+0xffffffd8u), 0x11eu);
    /* 004b3c14: mov word ptr [ebp - 0x24], 0x1f2 */ W16((u32)(r_ebp+0xffffffdcu), 0x1f2u);
    /* 004b3c1a: jmp 0x4b3c34 */ goto L_004b3c34;
L_004b3c1c:; BB(0x004b3c1c);
    /* 004b3c1c: mov word ptr [ebp - 0x30], 0x8c */ W16((u32)(r_ebp+0xffffffd0u), 0x8cu);
    /* 004b3c22: mov word ptr [ebp - 0x2c], 0x139 */ W16((u32)(r_ebp+0xffffffd4u), 0x139u);
    /* 004b3c28: mov word ptr [ebp - 0x28], 0xd0 */ W16((u32)(r_ebp+0xffffffd8u), 0xd0u);
    /* 004b3c2e: mov word ptr [ebp - 0x24], 0x1f3 */ W16((u32)(r_ebp+0xffffffdcu), 0x1f3u);
L_004b3c34:; BB(0x004b3c34);
    /* 004b3c34: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004b3c3a: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b3c40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b3c47: mov dword ptr [ebp - 0xc], 0x186a2 */ W32((u32)(r_ebp+0xfffffff4u), 0x186a2u);
    /* 004b3c4e: cmp dword ptr [ebp + 8], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3c55: jl 0x4b3c6e */ if ((fS!=fO)) goto L_004b3c6e;
L_004b3c57:; BB(0x004b3c57);
    /* 004b3c57: mov dword ptr [ebp - 0x18], 0x2a */ W32((u32)(r_ebp+0xffffffe8u), 0x2au);
    /* 004b3c5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b3c61: sub eax, 0xf4240 */ {  u32 a = r_eax; u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b3c66: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004b3c69: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3c6e:; BB(0x004b3c6e);
    /* 004b3c6e: cmp dword ptr [ebp + 8], 0x7a120 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3c75: jl 0x4b3c8f */ if ((fS!=fO)) goto L_004b3c8f;
L_004b3c77:; BB(0x004b3c77);
    /* 004b3c77: mov dword ptr [ebp - 0x18], 0x27 */ W32((u32)(r_ebp+0xffffffe8u), 0x27u);
    /* 004b3c7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3c81: sub ecx, 0x7a120 */ {  u32 a = r_ecx; u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b3c87: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b3c8a: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3c8f:; BB(0x004b3c8f);
    /* 004b3c8f: cmp dword ptr [ebp + 8], 0x186a0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3c96: jl 0x4b3cb0 */ if ((fS!=fO)) goto L_004b3cb0;
L_004b3c98:; BB(0x004b3c98);
    /* 004b3c98: mov dword ptr [ebp - 0x18], 0x24 */ W32((u32)(r_ebp+0xffffffe8u), 0x24u);
    /* 004b3c9f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b3ca2: sub edx, 0x186a0 */ {  u32 a = r_edx; u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b3ca8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004b3cab: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3cb0:; BB(0x004b3cb0);
    /* 004b3cb0: cmp dword ptr [ebp + 8], 0xc350 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3cb7: jl 0x4b3cd0 */ if ((fS!=fO)) goto L_004b3cd0;
L_004b3cb9:; BB(0x004b3cb9);
    /* 004b3cb9: mov dword ptr [ebp - 0x18], 0x21 */ W32((u32)(r_ebp+0xffffffe8u), 0x21u);
    /* 004b3cc0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b3cc3: sub eax, 0xc350 */ {  u32 a = r_eax; u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b3cc8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004b3ccb: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3cd0:; BB(0x004b3cd0);
    /* 004b3cd0: cmp dword ptr [ebp + 8], 0x61a8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3cd7: jl 0x4b3cf1 */ if ((fS!=fO)) goto L_004b3cf1;
L_004b3cd9:; BB(0x004b3cd9);
    /* 004b3cd9: mov dword ptr [ebp - 0x18], 0x1e */ W32((u32)(r_ebp+0xffffffe8u), 0x1eu);
    /* 004b3ce0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3ce3: sub ecx, 0x61a8 */ {  u32 a = r_ecx; u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b3ce9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b3cec: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3cf1:; BB(0x004b3cf1);
    /* 004b3cf1: cmp dword ptr [ebp + 8], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3cf8: jl 0x4b3d12 */ if ((fS!=fO)) goto L_004b3d12;
L_004b3cfa:; BB(0x004b3cfa);
    /* 004b3cfa: mov dword ptr [ebp - 0x18], 0x1b */ W32((u32)(r_ebp+0xffffffe8u), 0x1bu);
    /* 004b3d01: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b3d04: sub edx, 0x2710 */ {  u32 a = r_edx; u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b3d0a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004b3d0d: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3d12:; BB(0x004b3d12);
    /* 004b3d12: cmp dword ptr [ebp + 8], 0x1388 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3d19: jl 0x4b3d32 */ if ((fS!=fO)) goto L_004b3d32;
L_004b3d1b:; BB(0x004b3d1b);
    /* 004b3d1b: mov dword ptr [ebp - 0x18], 0x18 */ W32((u32)(r_ebp+0xffffffe8u), 0x18u);
    /* 004b3d22: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b3d25: sub eax, 0x1388 */ {  u32 a = r_eax; u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b3d2a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004b3d2d: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3d32:; BB(0x004b3d32);
    /* 004b3d32: cmp dword ptr [ebp + 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3d39: jl 0x4b3d53 */ if ((fS!=fO)) goto L_004b3d53;
L_004b3d3b:; BB(0x004b3d3b);
    /* 004b3d3b: mov dword ptr [ebp - 0x18], 0x15 */ W32((u32)(r_ebp+0xffffffe8u), 0x15u);
    /* 004b3d42: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3d45: sub ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b3d4b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b3d4e: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3d53:; BB(0x004b3d53);
    /* 004b3d53: cmp dword ptr [ebp + 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3d5a: jl 0x4b3d74 */ if ((fS!=fO)) goto L_004b3d74;
L_004b3d5c:; BB(0x004b3d5c);
    /* 004b3d5c: mov dword ptr [ebp - 0x18], 0x12 */ W32((u32)(r_ebp+0xffffffe8u), 0x12u);
    /* 004b3d63: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b3d66: sub edx, 0x1f4 */ {  u32 a = r_edx; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b3d6c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004b3d6f: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3d74:; BB(0x004b3d74);
    /* 004b3d74: cmp dword ptr [ebp + 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3d78: jl 0x4b3d8c */ if ((fS!=fO)) goto L_004b3d8c;
L_004b3d7a:; BB(0x004b3d7a);
    /* 004b3d7a: mov dword ptr [ebp - 0x18], 0xf */ W32((u32)(r_ebp+0xffffffe8u), 0xfu);
    /* 004b3d81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b3d84: sub eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b3d87: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004b3d8a: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3d8c:; BB(0x004b3d8c);
    /* 004b3d8c: cmp dword ptr [ebp + 8], 0x32 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3d90: jl 0x4b3da4 */ if ((fS!=fO)) goto L_004b3da4;
L_004b3d92:; BB(0x004b3d92);
    /* 004b3d92: mov dword ptr [ebp - 0x18], 0xc */ W32((u32)(r_ebp+0xffffffe8u), 0xcu);
    /* 004b3d99: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3d9c: sub ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b3d9f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b3da2: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3da4:; BB(0x004b3da4);
    /* 004b3da4: cmp dword ptr [ebp + 8], 0x19 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3da8: jl 0x4b3dbc */ if ((fS!=fO)) goto L_004b3dbc;
L_004b3daa:; BB(0x004b3daa);
    /* 004b3daa: mov dword ptr [ebp - 0x18], 9 */ W32((u32)(r_ebp+0xffffffe8u), 0x9u);
    /* 004b3db1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b3db4: sub edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b3db7: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004b3dba: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3dbc:; BB(0x004b3dbc);
    /* 004b3dbc: cmp dword ptr [ebp + 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3dc0: jl 0x4b3dd4 */ if ((fS!=fO)) goto L_004b3dd4;
L_004b3dc2:; BB(0x004b3dc2);
    /* 004b3dc2: mov dword ptr [ebp - 0x18], 6 */ W32((u32)(r_ebp+0xffffffe8u), 0x6u);
    /* 004b3dc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b3dcc: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b3dcf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004b3dd2: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3dd4:; BB(0x004b3dd4);
    /* 004b3dd4: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b3dd8: jl 0x4b3dec */ if ((fS!=fO)) goto L_004b3dec;
L_004b3dda:; BB(0x004b3dda);
    /* 004b3dda: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 004b3de1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b3de4: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b3de7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b3dea: jmp 0x4b3dfc */ goto L_004b3dfc;
L_004b3dec:; BB(0x004b3dec);
    /* 004b3dec: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004b3df3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b3df6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b3df9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_004b3dfc:; BB(0x004b3dfc);
    /* 004b3dfc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3dfe: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b3e03u); f_0060ee31();
    /* 004b3e03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b3e06: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b3e09: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b3e0b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004b3e0e: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3e11: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b3e18: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3e1b: cmp dword ptr [ecx + eax*4 + 0x1b8], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1b8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3e23: jne 0x4b426b */ if (!fZ) goto L_004b426b;
L_004b3e29:; BB(0x004b3e29);
    /* 004b3e29: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b3e2b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4b3e30u); f_0048ab58();
    /* 004b3e30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b3e33: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 004b3e36: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3e3a: je 0x4b3e49 */ if (fZ) goto L_004b3e49;
L_004b3e3c:; BB(0x004b3e3c);
    /* 004b3e3c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004b3e3f: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x4b3e44u); f_005e9d30();
    /* 004b3e44: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 004b3e47: jmp 0x4b3e50 */ goto L_004b3e50;
L_004b3e49:; BB(0x004b3e49);
    /* 004b3e49: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_004b3e50:; BB(0x004b3e50);
    /* 004b3e50: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3e53: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b3e5a: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3e5d: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004b3e60: mov dword ptr [ecx + eax*4 + 0x1b8], edx */ W32((u32)(r_ecx+r_eax*4+0x1b8u), r_edx);
    /* 004b3e67: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b3e6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b3e6b: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3e6e: movsx edx, word ptr [ecx + 0x4d8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4d8u));
    /* 004b3e75: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3e78: mov ecx, dword ptr [eax + edx*4 + 0x1b8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 004b3e7f: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4b3e84u); f_005ea0c3();
    /* 004b3e84: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b3e87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b3e88: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3e8b: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b3e92: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3e95: mov ecx, dword ptr [ecx + eax*4 + 0x1b8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 004b3e9c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4b3ea1u); f_005ea1cf();
    /* 004b3ea1: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3ea4: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b3eab: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3eae: mov ecx, dword ptr [ecx + eax*4 + 0x1b8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 004b3eb5: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3eb8: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b3ebf: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3ec2: mov eax, dword ptr [edx + eax*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1b8u));
    /* 004b3ec9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3ecb: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4b3eceu); call_ind(t); }
    /* 004b3ece: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b3ed0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3ed4: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004b3ed7: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b3eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b3edb: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3ede: movsx edx, word ptr [ecx + 0x4d8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4d8u));
    /* 004b3ee5: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3ee8: mov ecx, dword ptr [eax + edx*4 + 0x1b8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 004b3eef: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3ef2: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b3ef9: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3efc: mov eax, dword ptr [edx + eax*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1b8u));
    /* 004b3f03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3f05: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4b3f08u); call_ind(t); }
    /* 004b3f08: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f0b: movsx ecx, word ptr [eax + 0x4d8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4d8u));
    /* 004b3f12: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f15: mov ecx, dword ptr [edx + ecx*4 + 0x1b8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 004b3f1c: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f1f: movsx edx, word ptr [eax + 0x4d8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4d8u));
    /* 004b3f26: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f29: mov edx, dword ptr [eax + edx*4 + 0x1b8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 004b3f30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b3f32: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4b3f35u); call_ind(t); }
    /* 004b3f35: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f38: movsx edx, word ptr [ecx + 0x4d8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4d8u));
    /* 004b3f3f: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f42: mov ecx, dword ptr [eax + edx*4 + 0x1b8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 004b3f49: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f4c: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b3f53: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f56: mov eax, dword ptr [edx + eax*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1b8u));
    /* 004b3f5d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b3f5f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4b3f62u); call_ind(t); }
    /* 004b3f62: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f65: movsx ecx, word ptr [eax + 0x4d8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4d8u));
    /* 004b3f6c: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f6f: mov ecx, dword ptr [edx + ecx*4 + 0x1b8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 004b3f76: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x4b3f7bu); f_005d98c3();
    /* 004b3f7b: mov cx, word ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004b3f7f: sub cx, ax */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b3f82: mov word ptr [ebp - 0x24], cx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ecx);
    /* 004b3f86: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f89: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b3f90: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b3f93: mov ecx, dword ptr [ecx + eax*4 + 0x1b8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 004b3f9a: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x4b3f9fu); f_005d98da();
    /* 004b3f9f: mov dx, word ptr [ebp - 0x2c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd4u))) & 0xffffu);
    /* 004b3fa3: sub dx, ax */ {  u32 a = (u16)r_edx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b3fa6: mov word ptr [ebp - 0x2c], dx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_edx);
    /* 004b3faa: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b3fae: je 0x4b4006 */ if (fZ) goto L_004b4006;
L_004b3fb0:; BB(0x004b3fb0);
    /* 004b3fb0: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004b3fb4: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004b3fb8: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004b3fbc: mov word ptr [ebp - 0x20], cx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ecx);
    /* 004b3fc0: mov edx, dword ptr [0x6f9234] */ r_edx = R32((u32)(0x6f9234u));
    /* 004b3fc6: mov dword ptr [0x6f923c], edx */ W32((u32)(0x6f923cu), r_edx);
    /* 004b3fcc: mov eax, dword ptr [0x6f9238] */ r_eax = R32((u32)(0x6f9238u));
    /* 004b3fd1: mov dword ptr [0x6f9240], eax */ W32((u32)(0x6f9240u), r_eax);
    /* 004b3fd6: mov ecx, dword ptr [0x6f922c] */ r_ecx = R32((u32)(0x6f922cu));
    /* 004b3fdc: mov dword ptr [0x6f9234], ecx */ W32((u32)(0x6f9234u), r_ecx);
    /* 004b3fe2: mov edx, dword ptr [0x6f9230] */ r_edx = R32((u32)(0x6f9230u));
    /* 004b3fe8: mov dword ptr [0x6f9238], edx */ W32((u32)(0x6f9238u), r_edx);
    /* 004b3fee: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b3ff2: mov dword ptr [0x6f922c], eax */ W32((u32)(0x6f922cu), r_eax);
    /* 004b3ff7: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b3ffb: mov dword ptr [0x6f9230], ecx */ W32((u32)(0x6f9230u), r_ecx);
    /* 004b4001: jmp 0x4b422f */ goto L_004b422f;
L_004b4006:; BB(0x004b4006);
    /* 004b4006: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b4009: cmp dword ptr [edx + 0x4dc], 0 */ {  u32 a = R32((u32)(r_edx+0x4dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4010: jne 0x4b4099 */ if (!fZ) goto L_004b4099;
L_004b4016:; BB(0x004b4016);
    /* 004b4016: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b401a: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004b401e: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b4022: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b4024: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b4027: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4028: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b402du); f_0060ee31();
    /* 004b402d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4030: mov edi, eax */ r_edi = r_eax;
    /* 004b4032: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004b4036: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b403a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b403c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b403f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4040: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b4045u); f_0060ee31();
    /* 004b4045: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4048: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b404a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004b404b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b404d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004b404f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b4051: mov word ptr [ebp - 0x1c], si */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_esi);
    /* 004b4055: movsx esi, word ptr [ebp - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004b4059: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004b405d: movsx edx, word ptr [ebp - 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004b4061: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b4063: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b4066: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4067: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b406cu); f_0060ee31();
    /* 004b406c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b406f: mov edi, eax */ r_edi = r_eax;
    /* 004b4071: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004b4075: movsx ecx, word ptr [ebp - 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004b4079: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b407b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b407e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b407f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b4084u); f_0060ee31();
    /* 004b4084: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4087: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b4089: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004b408a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b408c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004b408e: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b4090: mov word ptr [ebp - 0x20], si */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_esi);
    /* 004b4094: jmp 0x4b422f */ goto L_004b422f;
L_004b4099:; BB(0x004b4099);
    /* 004b4099: mov word ptr [ebp - 0x3c], 0 */ W16((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004b409f:; BB(0x004b409f);
    /* 004b409f: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b40a3: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004b40a7: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b40ab: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b40ad: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b40b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b40b1: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b40b6u); f_0060ee31();
    /* 004b40b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b40b9: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b40bb: mov word ptr [ebp - 0x1c], si */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_esi);
    /* 004b40bf: movsx esi, word ptr [ebp - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004b40c3: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004b40c7: movsx edx, word ptr [ebp - 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004b40cb: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b40cd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b40d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b40d1: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b40d6u); f_0060ee31();
    /* 004b40d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b40d9: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b40db: mov word ptr [ebp - 0x20], si */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_esi);
    /* 004b40df: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b40e3: sub eax, dword ptr [0x6f922c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6f922cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b40e9: mov word ptr [ebp - 0x40], ax */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_eax);
    /* 004b40ed: movsx ecx, word ptr [ebp - 0x40] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004b40f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b40f3: jge 0x4b40ff */ if ((fS==fO)) goto L_004b40ff;
L_004b40f5:; BB(0x004b40f5);
    /* 004b40f5: movsx edx, word ptr [ebp - 0x40] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004b40f9: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b40fb: mov word ptr [ebp - 0x40], dx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_edx);
L_004b40ff:; BB(0x004b40ff);
    /* 004b40ff: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b4103: sub eax, dword ptr [0x6f9230] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6f9230u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b4109: mov word ptr [ebp - 0x4c], ax */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_eax);
    /* 004b410d: movsx ecx, word ptr [ebp - 0x4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 004b4111: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b4113: jge 0x4b411f */ if ((fS==fO)) goto L_004b411f;
L_004b4115:; BB(0x004b4115);
    /* 004b4115: movsx edx, word ptr [ebp - 0x4c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 004b4119: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b411b: mov word ptr [ebp - 0x4c], dx */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_edx);
L_004b411f:; BB(0x004b411f);
    /* 004b411f: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b4123: sub eax, dword ptr [0x6f9234] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6f9234u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b4129: mov word ptr [ebp - 0x44], ax */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_eax);
    /* 004b412d: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 004b4131: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b4133: jge 0x4b413f */ if ((fS==fO)) goto L_004b413f;
L_004b4135:; BB(0x004b4135);
    /* 004b4135: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 004b4139: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b413b: mov word ptr [ebp - 0x44], dx */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_edx);
L_004b413f:; BB(0x004b413f);
    /* 004b413f: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b4143: sub eax, dword ptr [0x6f9238] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6f9238u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b4149: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 004b414d: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004b4151: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b4153: jge 0x4b415f */ if ((fS==fO)) goto L_004b415f;
L_004b4155:; BB(0x004b4155);
    /* 004b4155: movsx edx, word ptr [ebp - 0x34] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004b4159: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b415b: mov word ptr [ebp - 0x34], dx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edx);
L_004b415f:; BB(0x004b415f);
    /* 004b415f: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b4163: sub eax, dword ptr [0x6f923c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6f923cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b4169: mov word ptr [ebp - 0x48], ax */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_eax);
    /* 004b416d: movsx ecx, word ptr [ebp - 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 004b4171: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b4173: jge 0x4b417f */ if ((fS==fO)) goto L_004b417f;
L_004b4175:; BB(0x004b4175);
    /* 004b4175: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 004b4179: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b417b: mov word ptr [ebp - 0x48], dx */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_edx);
L_004b417f:; BB(0x004b417f);
    /* 004b417f: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b4183: sub eax, dword ptr [0x6f9240] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6f9240u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b4189: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 004b418d: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004b4191: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b4193: jge 0x4b419f */ if ((fS==fO)) goto L_004b419f;
L_004b4195:; BB(0x004b4195);
    /* 004b4195: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004b4199: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b419b: mov word ptr [ebp - 0x38], dx */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_edx);
L_004b419f:; BB(0x004b419f);
    /* 004b419f: mov ax, word ptr [ebp - 0x3c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc4u))) & 0xffffu);
    /* 004b41a3: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b41a7: mov word ptr [ebp - 0x3c], ax */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_eax);
    /* 004b41ab: movsx ecx, word ptr [ebp - 0x40] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004b41af: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b41b2: jge 0x4b41bd */ if ((fS==fO)) goto L_004b41bd;
L_004b41b4:; BB(0x004b41b4);
    /* 004b41b4: movsx edx, word ptr [ebp - 0x4c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 004b41b8: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b41bb: jl 0x4b41e1 */ if ((fS!=fO)) goto L_004b41e1;
L_004b41bd:; BB(0x004b41bd);
    /* 004b41bd: movsx eax, word ptr [ebp - 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 004b41c1: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b41c4: jge 0x4b41cf */ if ((fS==fO)) goto L_004b41cf;
L_004b41c6:; BB(0x004b41c6);
    /* 004b41c6: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004b41ca: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b41cd: jl 0x4b41e1 */ if ((fS!=fO)) goto L_004b41e1;
L_004b41cf:; BB(0x004b41cf);
    /* 004b41cf: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 004b41d3: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b41d6: jge 0x4b41ee */ if ((fS==fO)) goto L_004b41ee;
L_004b41d8:; BB(0x004b41d8);
    /* 004b41d8: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004b41dc: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b41df: jge 0x4b41ee */ if ((fS==fO)) goto L_004b41ee;
L_004b41e1:; BB(0x004b41e1);
    /* 004b41e1: movsx ecx, word ptr [ebp - 0x3c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 004b41e5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b41e8: jl 0x4b409f */ if ((fS!=fO)) goto L_004b409f;
L_004b41ee:; BB(0x004b41ee);
    /* 004b41ee: mov edx, dword ptr [0x6f9234] */ r_edx = R32((u32)(0x6f9234u));
    /* 004b41f4: mov dword ptr [0x6f923c], edx */ W32((u32)(0x6f923cu), r_edx);
    /* 004b41fa: mov eax, dword ptr [0x6f9238] */ r_eax = R32((u32)(0x6f9238u));
    /* 004b41ff: mov dword ptr [0x6f9240], eax */ W32((u32)(0x6f9240u), r_eax);
    /* 004b4204: mov ecx, dword ptr [0x6f922c] */ r_ecx = R32((u32)(0x6f922cu));
    /* 004b420a: mov dword ptr [0x6f9234], ecx */ W32((u32)(0x6f9234u), r_ecx);
    /* 004b4210: mov edx, dword ptr [0x6f9230] */ r_edx = R32((u32)(0x6f9230u));
    /* 004b4216: mov dword ptr [0x6f9238], edx */ W32((u32)(0x6f9238u), r_edx);
    /* 004b421c: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b4220: mov dword ptr [0x6f922c], eax */ W32((u32)(0x6f922cu), r_eax);
    /* 004b4225: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b4229: mov dword ptr [0x6f9230], ecx */ W32((u32)(0x6f9230u), r_ecx);
L_004b422f:; BB(0x004b422f);
    /* 004b422f: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b4233: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4234: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b4238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4239: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b423c: movsx edx, word ptr [ecx + 0x4d8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4d8u));
    /* 004b4243: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b4246: mov ecx, dword ptr [eax + edx*4 + 0x1b8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 004b424d: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b4250: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b4257: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b425a: mov eax, dword ptr [edx + eax*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1b8u));
    /* 004b4261: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4263: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4b4266u); call_ind(t); }
    /* 004b4266: jmp 0x4b4610 */ goto L_004b4610;
L_004b426b:; BB(0x004b426b);
    /* 004b426b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b426e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b426f: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b4272: movsx edx, word ptr [ecx + 0x4d8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4d8u));
    /* 004b4279: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b427c: mov ecx, dword ptr [eax + edx*4 + 0x1b8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 004b4283: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x4b4288u); f_005ea0c3();
    /* 004b4288: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b428b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b428c: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b428f: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b4296: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b4299: mov ecx, dword ptr [ecx + eax*4 + 0x1b8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 004b42a0: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x4b42a5u); f_005ea1cf();
    /* 004b42a5: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b42a8: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b42af: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b42b2: mov ecx, dword ptr [ecx + eax*4 + 0x1b8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 004b42b9: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x4b42beu); f_005d98c3();
    /* 004b42be: mov dx, word ptr [ebp - 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004b42c2: sub dx, ax */ {  u32 a = (u16)r_edx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b42c5: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 004b42c9: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b42cc: movsx ecx, word ptr [eax + 0x4d8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4d8u));
    /* 004b42d3: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b42d6: mov ecx, dword ptr [edx + ecx*4 + 0x1b8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 004b42dd: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x4b42e2u); f_005d98da();
    /* 004b42e2: mov cx, word ptr [ebp - 0x2c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd4u))) & 0xffffu);
    /* 004b42e6: sub cx, ax */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b42e9: mov word ptr [ebp - 0x2c], cx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_ecx);
    /* 004b42ed: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b42f1: je 0x4b4349 */ if (fZ) goto L_004b4349;
L_004b42f3:; BB(0x004b42f3);
    /* 004b42f3: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004b42f7: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004b42fb: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004b42ff: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 004b4303: mov ecx, dword ptr [0x6f9234] */ r_ecx = R32((u32)(0x6f9234u));
    /* 004b4309: mov dword ptr [0x6f923c], ecx */ W32((u32)(0x6f923cu), r_ecx);
    /* 004b430f: mov edx, dword ptr [0x6f9238] */ r_edx = R32((u32)(0x6f9238u));
    /* 004b4315: mov dword ptr [0x6f9240], edx */ W32((u32)(0x6f9240u), r_edx);
    /* 004b431b: mov eax, dword ptr [0x6f922c] */ r_eax = R32((u32)(0x6f922cu));
    /* 004b4320: mov dword ptr [0x6f9234], eax */ W32((u32)(0x6f9234u), r_eax);
    /* 004b4325: mov ecx, dword ptr [0x6f9230] */ r_ecx = R32((u32)(0x6f9230u));
    /* 004b432b: mov dword ptr [0x6f9238], ecx */ W32((u32)(0x6f9238u), r_ecx);
    /* 004b4331: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b4335: mov dword ptr [0x6f922c], edx */ W32((u32)(0x6f922cu), r_edx);
    /* 004b433b: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b433f: mov dword ptr [0x6f9230], eax */ W32((u32)(0x6f9230u), r_eax);
    /* 004b4344: jmp 0x4b4572 */ goto L_004b4572;
L_004b4349:; BB(0x004b4349);
    /* 004b4349: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b434c: cmp dword ptr [ecx + 0x4dc], 0 */ {  u32 a = R32((u32)(r_ecx+0x4dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4353: jne 0x4b43dc */ if (!fZ) goto L_004b43dc;
L_004b4359:; BB(0x004b4359);
    /* 004b4359: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b435d: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004b4361: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b4365: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b4367: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b436a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b436b: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b4370u); f_0060ee31();
    /* 004b4370: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4373: mov edi, eax */ r_edi = r_eax;
    /* 004b4375: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004b4379: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b437d: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b437f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b4382: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4383: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b4388u); f_0060ee31();
    /* 004b4388: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b438b: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b438d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004b438e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b4390: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004b4392: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b4394: mov word ptr [ebp - 0x1c], si */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_esi);
    /* 004b4398: movsx esi, word ptr [ebp - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004b439c: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004b43a0: movsx ecx, word ptr [ebp - 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004b43a4: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b43a6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b43a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b43aa: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b43afu); f_0060ee31();
    /* 004b43af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b43b2: mov edi, eax */ r_edi = r_eax;
    /* 004b43b4: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004b43b8: movsx eax, word ptr [ebp - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004b43bc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b43be: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b43c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b43c2: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b43c7u); f_0060ee31();
    /* 004b43c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b43ca: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b43cc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004b43cd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b43cf: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004b43d1: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b43d3: mov word ptr [ebp - 0x20], si */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_esi);
    /* 004b43d7: jmp 0x4b4572 */ goto L_004b4572;
L_004b43dc:; BB(0x004b43dc);
    /* 004b43dc: mov word ptr [ebp - 0x58], 0 */ W16((u32)(r_ebp+0xffffffa8u), 0x0u);
L_004b43e2:; BB(0x004b43e2);
    /* 004b43e2: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b43e6: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004b43ea: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b43ee: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b43f0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b43f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b43f4: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b43f9u); f_0060ee31();
    /* 004b43f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b43fc: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b43fe: mov word ptr [ebp - 0x1c], si */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_esi);
    /* 004b4402: movsx esi, word ptr [ebp - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004b4406: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004b440a: movsx ecx, word ptr [ebp - 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004b440e: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b4410: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b4413: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4414: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b4419u); f_0060ee31();
    /* 004b4419: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b441c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b441e: mov word ptr [ebp - 0x20], si */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_esi);
    /* 004b4422: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b4426: sub edx, dword ptr [0x6f922c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x6f922cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b442c: mov word ptr [ebp - 0x5c], dx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_edx);
    /* 004b4430: movsx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004b4434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b4436: jge 0x4b4442 */ if ((fS==fO)) goto L_004b4442;
L_004b4438:; BB(0x004b4438);
    /* 004b4438: movsx ecx, word ptr [ebp - 0x5c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004b443c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b443e: mov word ptr [ebp - 0x5c], cx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_ecx);
L_004b4442:; BB(0x004b4442);
    /* 004b4442: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b4446: sub edx, dword ptr [0x6f9230] */ {  u32 a = r_edx; u32 b = R32((u32)(0x6f9230u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b444c: mov word ptr [ebp - 0x68], dx */ W16((u32)(r_ebp+0xffffff98u), (u16)r_edx);
    /* 004b4450: movsx eax, word ptr [ebp - 0x68] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 004b4454: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b4456: jge 0x4b4462 */ if ((fS==fO)) goto L_004b4462;
L_004b4458:; BB(0x004b4458);
    /* 004b4458: movsx ecx, word ptr [ebp - 0x68] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 004b445c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b445e: mov word ptr [ebp - 0x68], cx */ W16((u32)(r_ebp+0xffffff98u), (u16)r_ecx);
L_004b4462:; BB(0x004b4462);
    /* 004b4462: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b4466: sub edx, dword ptr [0x6f9234] */ {  u32 a = r_edx; u32 b = R32((u32)(0x6f9234u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b446c: mov word ptr [ebp - 0x60], dx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_edx);
    /* 004b4470: movsx eax, word ptr [ebp - 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004b4474: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b4476: jge 0x4b4482 */ if ((fS==fO)) goto L_004b4482;
L_004b4478:; BB(0x004b4478);
    /* 004b4478: movsx ecx, word ptr [ebp - 0x60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004b447c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b447e: mov word ptr [ebp - 0x60], cx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_ecx);
L_004b4482:; BB(0x004b4482);
    /* 004b4482: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b4486: sub edx, dword ptr [0x6f9238] */ {  u32 a = r_edx; u32 b = R32((u32)(0x6f9238u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b448c: mov word ptr [ebp - 0x50], dx */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_edx);
    /* 004b4490: movsx eax, word ptr [ebp - 0x50] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 004b4494: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b4496: jge 0x4b44a2 */ if ((fS==fO)) goto L_004b44a2;
L_004b4498:; BB(0x004b4498);
    /* 004b4498: movsx ecx, word ptr [ebp - 0x50] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 004b449c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b449e: mov word ptr [ebp - 0x50], cx */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_ecx);
L_004b44a2:; BB(0x004b44a2);
    /* 004b44a2: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b44a6: sub edx, dword ptr [0x6f923c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x6f923cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b44ac: mov word ptr [ebp - 0x64], dx */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_edx);
    /* 004b44b0: movsx eax, word ptr [ebp - 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff9cu));
    /* 004b44b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b44b6: jge 0x4b44c2 */ if ((fS==fO)) goto L_004b44c2;
L_004b44b8:; BB(0x004b44b8);
    /* 004b44b8: movsx ecx, word ptr [ebp - 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff9cu));
    /* 004b44bc: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b44be: mov word ptr [ebp - 0x64], cx */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_ecx);
L_004b44c2:; BB(0x004b44c2);
    /* 004b44c2: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b44c6: sub edx, dword ptr [0x6f9240] */ {  u32 a = r_edx; u32 b = R32((u32)(0x6f9240u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b44cc: mov word ptr [ebp - 0x54], dx */ W16((u32)(r_ebp+0xffffffacu), (u16)r_edx);
    /* 004b44d0: movsx eax, word ptr [ebp - 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004b44d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b44d6: jge 0x4b44e2 */ if ((fS==fO)) goto L_004b44e2;
L_004b44d8:; BB(0x004b44d8);
    /* 004b44d8: movsx ecx, word ptr [ebp - 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004b44dc: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b44de: mov word ptr [ebp - 0x54], cx */ W16((u32)(r_ebp+0xffffffacu), (u16)r_ecx);
L_004b44e2:; BB(0x004b44e2);
    /* 004b44e2: mov dx, word ptr [ebp - 0x58] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffa8u))) & 0xffffu);
    /* 004b44e6: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b44ea: mov word ptr [ebp - 0x58], dx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edx);
    /* 004b44ee: movsx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004b44f2: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b44f5: jge 0x4b4500 */ if ((fS==fO)) goto L_004b4500;
L_004b44f7:; BB(0x004b44f7);
    /* 004b44f7: movsx ecx, word ptr [ebp - 0x68] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 004b44fb: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b44fe: jl 0x4b4524 */ if ((fS!=fO)) goto L_004b4524;
L_004b4500:; BB(0x004b4500);
    /* 004b4500: movsx edx, word ptr [ebp - 0x60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004b4504: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4507: jge 0x4b4512 */ if ((fS==fO)) goto L_004b4512;
L_004b4509:; BB(0x004b4509);
    /* 004b4509: movsx eax, word ptr [ebp - 0x50] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 004b450d: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4510: jl 0x4b4524 */ if ((fS!=fO)) goto L_004b4524;
L_004b4512:; BB(0x004b4512);
    /* 004b4512: movsx ecx, word ptr [ebp - 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff9cu));
    /* 004b4516: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4519: jge 0x4b4531 */ if ((fS==fO)) goto L_004b4531;
L_004b451b:; BB(0x004b451b);
    /* 004b451b: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004b451f: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4522: jge 0x4b4531 */ if ((fS==fO)) goto L_004b4531;
L_004b4524:; BB(0x004b4524);
    /* 004b4524: movsx eax, word ptr [ebp - 0x58] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 004b4528: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b452b: jl 0x4b43e2 */ if ((fS!=fO)) goto L_004b43e2;
L_004b4531:; BB(0x004b4531);
    /* 004b4531: mov ecx, dword ptr [0x6f9234] */ r_ecx = R32((u32)(0x6f9234u));
    /* 004b4537: mov dword ptr [0x6f923c], ecx */ W32((u32)(0x6f923cu), r_ecx);
    /* 004b453d: mov edx, dword ptr [0x6f9238] */ r_edx = R32((u32)(0x6f9238u));
    /* 004b4543: mov dword ptr [0x6f9240], edx */ W32((u32)(0x6f9240u), r_edx);
    /* 004b4549: mov eax, dword ptr [0x6f922c] */ r_eax = R32((u32)(0x6f922cu));
    /* 004b454e: mov dword ptr [0x6f9234], eax */ W32((u32)(0x6f9234u), r_eax);
    /* 004b4553: mov ecx, dword ptr [0x6f9230] */ r_ecx = R32((u32)(0x6f9230u));
    /* 004b4559: mov dword ptr [0x6f9238], ecx */ W32((u32)(0x6f9238u), r_ecx);
    /* 004b455f: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b4563: mov dword ptr [0x6f922c], edx */ W32((u32)(0x6f922cu), r_edx);
    /* 004b4569: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b456d: mov dword ptr [0x6f9230], eax */ W32((u32)(0x6f9230u), r_eax);
L_004b4572:; BB(0x004b4572);
    /* 004b4572: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b4576: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4577: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b457b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b457c: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b457f: movsx ecx, word ptr [eax + 0x4d8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4d8u));
    /* 004b4586: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b4589: mov ecx, dword ptr [edx + ecx*4 + 0x1b8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 004b4590: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b4593: movsx edx, word ptr [eax + 0x4d8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4d8u));
    /* 004b459a: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b459d: mov edx, dword ptr [eax + edx*4 + 0x1b8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 004b45a4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b45a6: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4b45a9u); call_ind(t); }
    /* 004b45a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b45ab: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b45af: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004b45b2: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b45b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b45b6: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b45b9: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b45c0: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b45c3: mov ecx, dword ptr [ecx + eax*4 + 0x1b8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 004b45ca: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b45cd: movsx eax, word ptr [edx + 0x4d8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4d8u));
    /* 004b45d4: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b45d7: mov eax, dword ptr [edx + eax*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1b8u));
    /* 004b45de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b45e0: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4b45e3u); call_ind(t); }
    /* 004b45e3: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b45e6: movsx ecx, word ptr [eax + 0x4d8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4d8u));
    /* 004b45ed: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b45f0: mov ecx, dword ptr [edx + ecx*4 + 0x1b8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 004b45f7: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b45fa: movsx edx, word ptr [eax + 0x4d8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4d8u));
    /* 004b4601: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b4604: mov edx, dword ptr [eax + edx*4 + 0x1b8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 004b460b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b460d: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4b4610u); call_ind(t); }
L_004b4610:; BB(0x004b4610);
    /* 004b4610: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b4613: mov dx, word ptr [ecx + 0x4d8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4d8u))) & 0xffffu);
    /* 004b461a: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b461e: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004b4621: mov word ptr [eax + 0x4d8], dx */ W16((u32)(r_eax+0x4d8u), (u16)r_edx);
    /* 004b4628: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b462c: je 0x4b463a */ if (fZ) goto L_004b463a;
L_004b462e:; BB(0x004b462e);
    /* 004b462e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b4631: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4632: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004b4635: call 0x4b3b80 */ r_esp -= 4; W32(r_esp, 0x4b463au); f_004b3b80();
L_004b463a:; BB(0x004b463a);
    /* 004b463a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b463b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b463c: mov esp, ebp */ r_esp = r_ebp;
    /* 004b463e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b463f: ret 4 */ FN_RET(0x004b3b80); r_esp += 8; return;
}

void f_004b4642(void) /* FUN_004b4642 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b4642);
    /* 004b4642: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b4643: mov ebp, esp */ r_ebp = r_esp;
    /* 004b4645: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4646: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b4649: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b464c: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x4b4651u); f_005d5d20();
    /* 004b4651: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b4654: mov dword ptr [eax], 0x6381f4 */ W32((u32)(r_eax), 0x6381f4u);
    /* 004b465a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b465d: mov esp, ebp */ r_esp = r_ebp;
    /* 004b465f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4660: ret  */ FN_RET(0x004b4642); r_esp += 4; return;
}

void f_004b4661(void) /* FUN_004b4661 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b4661);
    /* 004b4661: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b4662: mov ebp, esp */ r_ebp = r_esp;
    /* 004b4664: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4665: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b4668: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b466b: mov dword ptr [eax], 0x6381f4 */ W32((u32)(r_eax), 0x6381f4u);
    /* 004b4671: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b4674: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x4b4679u); f_005d5dfb();
    /* 004b4679: mov esp, ebp */ r_esp = r_ebp;
    /* 004b467b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b467c: ret  */ FN_RET(0x004b4661); r_esp += 4; return;
}

void f_004b467d(void) /* FUN_004b467d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b467d);
    /* 004b467d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b467e: mov ebp, esp */ r_ebp = r_esp;
    /* 004b4680: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4681: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b4684: mov eax, dword ptr [0x6f9228] */ r_eax = R32((u32)(0x6f9228u));
    /* 004b4689: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004b468f: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x4b4694u); f_005e03cc();
    /* 004b4694: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4696: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4698: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004b469e: call 0x4b0745 */ r_esp -= 4; W32(r_esp, 0x4b46a3u); f_004b0745();
    /* 004b46a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b46a5: je 0x4b46b2 */ if (fZ) goto L_004b46b2;
L_004b46a7:; BB(0x004b46a7);
    /* 004b46a7: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004b46ad: call 0x4b058d */ r_esp -= 4; W32(r_esp, 0x4b46b2u); f_004b058d();
L_004b46b2:; BB(0x004b46b2);
    /* 004b46b2: mov esp, ebp */ r_esp = r_ebp;
    /* 004b46b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b46b5: ret  */ FN_RET(0x004b467d); r_esp += 4; return;
}

void f_004b46b6(void) /* FUN_004b46b6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b46b6);
    /* 004b46b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b46b7: mov ebp, esp */ r_ebp = r_esp;
    /* 004b46b9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b46bc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004b46bf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004b46c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b46c3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b46c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b46c7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b46ca: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x4b46cfu); f_005d80f0();
    /* 004b46cf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b46d2: mov dword ptr [edx], 0x638264 */ W32((u32)(r_edx), 0x638264u);
    /* 004b46d8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b46db: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 004b46e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b46e8: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 004b46f2: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b46f8: jmp 0x4b4706 */ goto L_004b4706;
L_004b46fa:; BB(0x004b46fa);
    /* 004b46fa: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b46fe: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b4702: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004b4706:; BB(0x004b4706);
    /* 004b4706: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b470a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b470d: jge 0x4b4723 */ if ((fS==fO)) goto L_004b4723;
L_004b470f:; BB(0x004b470f);
    /* 004b470f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b4713: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b4716: mov dword ptr [edx + ecx*4 + 0x94], 0 */ W32((u32)(r_edx+r_ecx*4+0x94u), 0x0u);
    /* 004b4721: jmp 0x4b46fa */ goto L_004b46fa;
L_004b4723:; BB(0x004b4723);
    /* 004b4723: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b4729: jmp 0x4b4737 */ goto L_004b4737;
L_004b472b:; BB(0x004b472b);
    /* 004b472b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b472f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b4733: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004b4737:; BB(0x004b4737);
    /* 004b4737: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b473b: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b473e: jge 0x4b4754 */ if ((fS==fO)) goto L_004b4754;
L_004b4740:; BB(0x004b4740);
    /* 004b4740: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b4744: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b4747: mov dword ptr [eax + edx*4 + 0xa4], 0 */ W32((u32)(r_eax+r_edx*4+0xa4u), 0x0u);
    /* 004b4752: jmp 0x4b472b */ goto L_004b472b;
L_004b4754:; BB(0x004b4754);
    /* 004b4754: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b4757: mov esp, ebp */ r_esp = r_ebp;
    /* 004b4759: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b475a: ret 8 */ FN_RET(0x004b46b6); r_esp += 12; return;
}

void f_004b475d(void) /* FUN_004b475d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b475d);
    /* 004b475d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b475e: mov ebp, esp */ r_ebp = r_esp;
    /* 004b4760: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b4763: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004b4766: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b4769: mov dword ptr [eax], 0x638264 */ W32((u32)(r_eax), 0x638264u);
    /* 004b476f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b4772: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4779: je 0x4b47b8 */ if (fZ) goto L_004b47b8;
L_004b477b:; BB(0x004b477b);
    /* 004b477b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b477e: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004b4784: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004b4787: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b478a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004b478d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4791: je 0x4b47a4 */ if (fZ) goto L_004b47a4;
L_004b4793:; BB(0x004b4793);
    /* 004b4793: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4795: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b4798: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b479a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b479d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4b479fu); call_ind(t); }
    /* 004b479f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004b47a2: jmp 0x4b47ab */ goto L_004b47ab;
L_004b47a4:; BB(0x004b47a4);
    /* 004b47a4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004b47ab:; BB(0x004b47ab);
    /* 004b47ab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b47ae: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
L_004b47b8:; BB(0x004b47b8);
    /* 004b47b8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b47bb: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b47c2: je 0x4b4801 */ if (fZ) goto L_004b4801;
L_004b47c4:; BB(0x004b47c4);
    /* 004b47c4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b47c7: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004b47cd: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b47d0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b47d3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004b47d6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b47da: je 0x4b47ed */ if (fZ) goto L_004b47ed;
L_004b47dc:; BB(0x004b47dc);
    /* 004b47dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b47de: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b47e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b47e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b47e6: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4b47e8u); call_ind(t); }
    /* 004b47e8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004b47eb: jmp 0x4b47f4 */ goto L_004b47f4;
L_004b47ed:; BB(0x004b47ed);
    /* 004b47ed: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_004b47f4:; BB(0x004b47f4);
    /* 004b47f4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b47f7: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
L_004b4801:; BB(0x004b4801);
    /* 004b4801: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b4807: jmp 0x4b4815 */ goto L_004b4815;
L_004b4809:; BB(0x004b4809);
    /* 004b4809: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b480d: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b4811: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004b4815:; BB(0x004b4815);
    /* 004b4815: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b4819: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b481c: jge 0x4b4878 */ if ((fS==fO)) goto L_004b4878;
L_004b481e:; BB(0x004b481e);
    /* 004b481e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b4822: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b4825: cmp dword ptr [ecx + eax*4 + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b482d: je 0x4b4876 */ if (fZ) goto L_004b4876;
L_004b482f:; BB(0x004b482f);
    /* 004b482f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b4833: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b4836: mov ecx, dword ptr [eax + edx*4 + 0x94] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 004b483d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004b4840: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b4843: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004b4846: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b484a: je 0x4b485d */ if (fZ) goto L_004b485d;
L_004b484c:; BB(0x004b484c);
    /* 004b484c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b484e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b4851: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4853: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b4856: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4b4858u); call_ind(t); }
    /* 004b4858: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b485b: jmp 0x4b4864 */ goto L_004b4864;
L_004b485d:; BB(0x004b485d);
    /* 004b485d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004b4864:; BB(0x004b4864);
    /* 004b4864: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b4868: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b486b: mov dword ptr [ecx + eax*4 + 0x94], 0 */ W32((u32)(r_ecx+r_eax*4+0x94u), 0x0u);
L_004b4876:; BB(0x004b4876);
    /* 004b4876: jmp 0x4b4809 */ goto L_004b4809;
L_004b4878:; BB(0x004b4878);
    /* 004b4878: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b487e: jmp 0x4b488c */ goto L_004b488c;
L_004b4880:; BB(0x004b4880);
    /* 004b4880: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b4884: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b4888: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004b488c:; BB(0x004b488c);
    /* 004b488c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b4890: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4893: jge 0x4b48ef */ if ((fS==fO)) goto L_004b48ef;
L_004b4895:; BB(0x004b4895);
    /* 004b4895: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b4899: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b489c: cmp dword ptr [edx + ecx*4 + 0xa4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b48a4: je 0x4b48ed */ if (fZ) goto L_004b48ed;
L_004b48a6:; BB(0x004b48a6);
    /* 004b48a6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b48aa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b48ad: mov edx, dword ptr [ecx + eax*4 + 0xa4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 004b48b4: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004b48b7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b48ba: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004b48bd: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b48c1: je 0x4b48d4 */ if (fZ) goto L_004b48d4;
L_004b48c3:; BB(0x004b48c3);
    /* 004b48c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b48c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b48c8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b48ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b48cd: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4b48cfu); call_ind(t); }
    /* 004b48cf: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004b48d2: jmp 0x4b48db */ goto L_004b48db;
L_004b48d4:; BB(0x004b48d4);
    /* 004b48d4: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_004b48db:; BB(0x004b48db);
    /* 004b48db: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b48df: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b48e2: mov dword ptr [ecx + eax*4 + 0xa4], 0 */ W32((u32)(r_ecx+r_eax*4+0xa4u), 0x0u);
L_004b48ed:; BB(0x004b48ed);
    /* 004b48ed: jmp 0x4b4880 */ goto L_004b4880;
L_004b48ef:; BB(0x004b48ef);
    /* 004b48ef: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b48f2: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x4b48f7u); f_005d8154();
    /* 004b48f7: mov esp, ebp */ r_esp = r_ebp;
    /* 004b48f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b48fa: ret  */ FN_RET(0x004b475d); r_esp += 4; return;
}

void f_004b48fb(void) /* FUN_004b48fb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b48fb);
    /* 004b48fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b48fc: mov ebp, esp */ r_ebp = r_esp;
    /* 004b48fe: sub esp, 0x198 */ {  u32 a = r_esp; u32 b = 0x198u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b4904: mov dword ptr [ebp - 0x17c], ecx */ W32((u32)(r_ebp+0xfffffe84u), r_ecx);
    /* 004b490a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b490c: push 0x6914e0 */ { u32 v = 0x6914e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4911: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4917: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x4b491cu); f_005d825e();
    /* 004b491c: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4922: cmp dword ptr [eax + 0x94], 0 */ {  u32 a = R32((u32)(r_eax+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4929: jne 0x4b4976 */ if (!fZ) goto L_004b4976;
L_004b492b:; BB(0x004b492b);
    /* 004b492b: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4930: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4b4935u); f_0048ab58();
    /* 004b4935: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4938: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 004b493e: cmp dword ptr [ebp - 0x160], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffea0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4945: je 0x4b495a */ if (fZ) goto L_004b495a;
L_004b4947:; BB(0x004b4947);
    /* 004b4947: mov ecx, dword ptr [ebp - 0x160] */ r_ecx = R32((u32)(r_ebp+0xfffffea0u));
    /* 004b494d: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4b4952u); f_005e8590();
    /* 004b4952: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 004b4958: jmp 0x4b4964 */ goto L_004b4964;
L_004b495a:; BB(0x004b495a);
    /* 004b495a: mov dword ptr [ebp - 0x180], 0 */ W32((u32)(r_ebp+0xfffffe80u), 0x0u);
L_004b4964:; BB(0x004b4964);
    /* 004b4964: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b496a: mov edx, dword ptr [ebp - 0x180] */ r_edx = R32((u32)(r_ebp+0xfffffe80u));
    /* 004b4970: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
L_004b4976:; BB(0x004b4976);
    /* 004b4976: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b497c: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004b4982: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4988: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004b498b: mov eax, dword ptr [0x6f9228] */ r_eax = R32((u32)(0x6f9228u));
    /* 004b4990: movsx ecx, word ptr [eax + 0xf8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xf8u));
    /* 004b4997: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4999: jne 0x4b49bf */ if (!fZ) goto L_004b49bf;
L_004b499b:; BB(0x004b499b);
    /* 004b499b: push 0x6914f4 */ { u32 v = 0x6914f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b49a0: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b49a6: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 004b49ac: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b49b2: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 004b49b8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b49ba: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x4b49bdu); call_ind(t); }
    /* 004b49bd: jmp 0x4b4a3d */ goto L_004b4a3d;
L_004b49bf:; BB(0x004b49bf);
    /* 004b49bf: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004b49c5: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 004b49cb: mov dword ptr [ebp - 0x15c], edx */ W32((u32)(r_ebp+0xfffffea4u), r_edx);
    /* 004b49d1: cmp dword ptr [ebp - 0x15c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffea4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b49d8: jne 0x4b49e4 */ if (!fZ) goto L_004b49e4;
L_004b49da:; BB(0x004b49da);
    /* 004b49da: mov dword ptr [ebp - 0x15c], 1 */ W32((u32)(r_ebp+0xfffffea4u), 0x1u);
L_004b49e4:; BB(0x004b49e4);
    /* 004b49e4: mov eax, dword ptr [0x6f9228] */ r_eax = R32((u32)(0x6f9228u));
    /* 004b49e9: movsx ecx, word ptr [eax + 0xf8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xf8u));
    /* 004b49f0: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b49f3: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004b49f5: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004b49f7: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004b49fa: add ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b49fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b49fe: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 004b4a04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4a05: push 0x691508 */ { u32 v = 0x691508u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4a0a: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 004b4a10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4a11: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4b4a16u); f_00624050();
    /* 004b4a16: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4a19: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 004b4a1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4a20: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4a26: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 004b4a2c: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4a32: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 004b4a38: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b4a3a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x4b4a3du); call_ind(t); }
L_004b4a3d:; BB(0x004b4a3d);
    /* 004b4a3d: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4a43: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 004b4a49: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4a4f: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 004b4a55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4a57: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4b4a5au); call_ind(t); }
    /* 004b4a5a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4a5c: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4a62: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004b4a68: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4b4a6du); f_005e87aa();
    /* 004b4a6d: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4a6f: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4a71: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4a77: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 004b4a7d: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4a83: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 004b4a89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4a8b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4b4a8eu); call_ind(t); }
    /* 004b4a8e: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4a93: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4a99: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 004b4a9f: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x4b4aa4u); f_005e8740();
    /* 004b4aa4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b4aa6: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4aac: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 004b4ab2: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x4b4ab7u); f_005e8775();
    /* 004b4ab7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ab9: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4abf: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 004b4ac5: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4acb: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 004b4ad1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b4ad3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4b4ad6u); call_ind(t); }
    /* 004b4ad6: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4adc: cmp dword ptr [ecx + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4ae3: jne 0x4b4b30 */ if (!fZ) goto L_004b4b30;
L_004b4ae5:; BB(0x004b4ae5);
    /* 004b4ae5: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4aea: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4b4aefu); f_0048ab58();
    /* 004b4aef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4af2: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 004b4af8: cmp dword ptr [ebp - 0x164], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4aff: je 0x4b4b14 */ if (fZ) goto L_004b4b14;
L_004b4b01:; BB(0x004b4b01);
    /* 004b4b01: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 004b4b07: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4b4b0cu); f_005e8590();
    /* 004b4b0c: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 004b4b12: jmp 0x4b4b1e */ goto L_004b4b1e;
L_004b4b14:; BB(0x004b4b14);
    /* 004b4b14: mov dword ptr [ebp - 0x184], 0 */ W32((u32)(r_ebp+0xfffffe7cu), 0x0u);
L_004b4b1e:; BB(0x004b4b1e);
    /* 004b4b1e: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4b24: mov eax, dword ptr [ebp - 0x184] */ r_eax = R32((u32)(r_ebp+0xfffffe7cu));
    /* 004b4b2a: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
L_004b4b30:; BB(0x004b4b30);
    /* 004b4b30: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4b36: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 004b4b3c: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4b42: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004b4b45: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004b4b4b: call 0x4b3980 */ r_esp -= 4; W32(r_esp, 0x4b4b50u); f_004b3980();
    /* 004b4b50: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 004b4b56: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 004b4b5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4b5d: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 004b4b63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4b64: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x4b4b69u); f_0060fb42();
    /* 004b4b69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4b6c: lea eax, [ebp - 0x148] */ r_eax = (u32)(r_ebp+0xfffffeb8u);
    /* 004b4b72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4b73: push 0x691518 */ { u32 v = 0x691518u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4b78: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 004b4b7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4b7f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4b4b84u); f_00624050();
    /* 004b4b84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4b87: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 004b4b8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4b8e: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4b94: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 004b4b9a: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4ba0: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 004b4ba6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4ba8: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b4babu); call_ind(t); }
    /* 004b4bab: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4bb1: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 004b4bb7: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4bbd: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 004b4bc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4bc5: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4b4bc8u); call_ind(t); }
    /* 004b4bc8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4bca: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4bd0: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 004b4bd6: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4b4bdbu); f_005e87aa();
    /* 004b4bdb: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4bdd: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4bdf: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4be5: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 004b4beb: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4bf1: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 004b4bf7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4bf9: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4b4bfcu); call_ind(t); }
    /* 004b4bfc: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4c01: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4c07: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 004b4c0d: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x4b4c12u); f_005e8740();
    /* 004b4c12: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b4c14: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4c1a: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 004b4c20: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x4b4c25u); f_005e8775();
    /* 004b4c25: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4c27: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4c2d: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 004b4c33: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4c39: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 004b4c3f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b4c41: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4b4c44u); call_ind(t); }
    /* 004b4c44: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4c4a: cmp dword ptr [ecx + 0x9c], 0 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4c51: jne 0x4b4c9e */ if (!fZ) goto L_004b4c9e;
L_004b4c53:; BB(0x004b4c53);
    /* 004b4c53: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4c58: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4b4c5du); f_0048ab58();
    /* 004b4c5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4c60: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 004b4c66: cmp dword ptr [ebp - 0x168], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4c6d: je 0x4b4c82 */ if (fZ) goto L_004b4c82;
L_004b4c6f:; BB(0x004b4c6f);
    /* 004b4c6f: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 004b4c75: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4b4c7au); f_005e8590();
    /* 004b4c7a: mov dword ptr [ebp - 0x188], eax */ W32((u32)(r_ebp+0xfffffe78u), r_eax);
    /* 004b4c80: jmp 0x4b4c8c */ goto L_004b4c8c;
L_004b4c82:; BB(0x004b4c82);
    /* 004b4c82: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
L_004b4c8c:; BB(0x004b4c8c);
    /* 004b4c8c: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4c92: mov eax, dword ptr [ebp - 0x188] */ r_eax = R32((u32)(r_ebp+0xfffffe78u));
    /* 004b4c98: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
L_004b4c9e:; BB(0x004b4c9e);
    /* 004b4c9e: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4ca4: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004b4caa: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4cb0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004b4cb3: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004b4cb9: call 0x4b39ad */ r_esp -= 4; W32(r_esp, 0x4b4cbeu); f_004b39ad();
    /* 004b4cbe: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 004b4cc4: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 004b4cca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ccb: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 004b4cd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4cd2: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x4b4cd7u); f_0060fb42();
    /* 004b4cd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4cda: lea eax, [ebp - 0x148] */ r_eax = (u32)(r_ebp+0xfffffeb8u);
    /* 004b4ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ce1: push 0x691528 */ { u32 v = 0x691528u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ce6: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 004b4cec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ced: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4b4cf2u); f_00624050();
    /* 004b4cf2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4cf5: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 004b4cfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4cfc: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4d02: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004b4d08: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4d0e: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004b4d14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4d16: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b4d19u); call_ind(t); }
    /* 004b4d19: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4d1f: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004b4d25: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4d2b: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004b4d31: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4d33: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4b4d36u); call_ind(t); }
    /* 004b4d36: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d38: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4d3e: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004b4d44: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4b4d49u); f_005e87aa();
    /* 004b4d49: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d4b: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d4d: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4d53: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 004b4d59: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4d5f: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004b4d65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4d67: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4b4d6au); call_ind(t); }
    /* 004b4d6a: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d6f: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4d75: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004b4d7b: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x4b4d80u); f_005e8740();
    /* 004b4d80: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d82: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4d88: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 004b4d8e: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x4b4d93u); f_005e8775();
    /* 004b4d93: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d95: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4d9b: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 004b4da1: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4da7: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 004b4dad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b4daf: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4b4db2u); call_ind(t); }
    /* 004b4db2: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4db8: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4dbf: jne 0x4b4e0c */ if (!fZ) goto L_004b4e0c;
L_004b4dc1:; BB(0x004b4dc1);
    /* 004b4dc1: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4dc6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4b4dcbu); f_0048ab58();
    /* 004b4dcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4dce: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 004b4dd4: cmp dword ptr [ebp - 0x16c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4ddb: je 0x4b4df0 */ if (fZ) goto L_004b4df0;
L_004b4ddd:; BB(0x004b4ddd);
    /* 004b4ddd: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 004b4de3: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4b4de8u); f_005e8590();
    /* 004b4de8: mov dword ptr [ebp - 0x18c], eax */ W32((u32)(r_ebp+0xfffffe74u), r_eax);
    /* 004b4dee: jmp 0x4b4dfa */ goto L_004b4dfa;
L_004b4df0:; BB(0x004b4df0);
    /* 004b4df0: mov dword ptr [ebp - 0x18c], 0 */ W32((u32)(r_ebp+0xfffffe74u), 0x0u);
L_004b4dfa:; BB(0x004b4dfa);
    /* 004b4dfa: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4e00: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 004b4e06: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
L_004b4e0c:; BB(0x004b4e0c);
    /* 004b4e0c: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4e12: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004b4e18: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4e1e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004b4e21: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004b4e27: call 0x4b39da */ r_esp -= 4; W32(r_esp, 0x4b4e2cu); f_004b39da();
    /* 004b4e2c: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 004b4e32: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 004b4e38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4e39: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 004b4e3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4e40: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x4b4e45u); f_0060fb42();
    /* 004b4e45: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4e48: lea eax, [ebp - 0x148] */ r_eax = (u32)(r_ebp+0xfffffeb8u);
    /* 004b4e4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4e4f: push 0x691544 */ { u32 v = 0x691544u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4e54: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 004b4e5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4e5b: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4b4e60u); f_00624050();
    /* 004b4e60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4e63: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 004b4e69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4e6a: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4e70: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004b4e76: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4e7c: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004b4e82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4e84: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x4b4e87u); call_ind(t); }
    /* 004b4e87: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4e8d: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004b4e93: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4e99: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004b4e9f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4ea1: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4b4ea4u); call_ind(t); }
    /* 004b4ea4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ea6: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4eac: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004b4eb2: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4b4eb7u); f_005e87aa();
    /* 004b4eb7: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4eb9: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ebb: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4ec1: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 004b4ec7: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4ecd: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004b4ed3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4ed5: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4b4ed8u); call_ind(t); }
    /* 004b4ed8: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4edd: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4ee3: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004b4ee9: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x4b4eeeu); f_005e8740();
    /* 004b4eee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ef0: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4ef6: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 004b4efc: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x4b4f01u); f_005e8775();
    /* 004b4f01: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4f03: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4f09: mov ecx, dword ptr [edx + 0xa0] */ r_ecx = R32((u32)(r_edx+0xa0u));
    /* 004b4f0f: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4f15: mov edx, dword ptr [eax + 0xa0] */ r_edx = R32((u32)(r_eax+0xa0u));
    /* 004b4f1b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b4f1d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4b4f20u); call_ind(t); }
    /* 004b4f20: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4f26: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4f2d: jne 0x4b4f7a */ if (!fZ) goto L_004b4f7a;
L_004b4f2f:; BB(0x004b4f2f);
    /* 004b4f2f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 004b4f34: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4b4f39u); f_0048ab58();
    /* 004b4f39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b4f3c: mov dword ptr [ebp - 0x170], eax */ W32((u32)(r_ebp+0xfffffe90u), r_eax);
    /* 004b4f42: cmp dword ptr [ebp - 0x170], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4f49: je 0x4b4f5e */ if (fZ) goto L_004b4f5e;
L_004b4f4b:; BB(0x004b4f4b);
    /* 004b4f4b: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 004b4f51: call 0x4b4642 */ r_esp -= 4; W32(r_esp, 0x4b4f56u); f_004b4642();
    /* 004b4f56: mov dword ptr [ebp - 0x190], eax */ W32((u32)(r_ebp+0xfffffe70u), r_eax);
    /* 004b4f5c: jmp 0x4b4f68 */ goto L_004b4f68;
L_004b4f5e:; BB(0x004b4f5e);
    /* 004b4f5e: mov dword ptr [ebp - 0x190], 0 */ W32((u32)(r_ebp+0xfffffe70u), 0x0u);
L_004b4f68:; BB(0x004b4f68);
    /* 004b4f68: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4f6e: mov eax, dword ptr [ebp - 0x190] */ r_eax = R32((u32)(r_ebp+0xfffffe70u));
    /* 004b4f74: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
L_004b4f7a:; BB(0x004b4f7a);
    /* 004b4f7a: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4f80: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 004b4f86: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4f8c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004b4f8f: push 0x691560 */ { u32 v = 0x691560u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4f94: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4f9a: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 004b4fa0: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4fa6: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004b4fac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4fae: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x4b4fb1u); call_ind(t); }
    /* 004b4fb1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b4fb3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4fb5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4fb7: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4fbd: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004b4fc3: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4fc9: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004b4fcf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4fd1: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x4b4fd4u); call_ind(t); }
    /* 004b4fd4: push 0x61b1 */ { u32 v = 0x61b1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4fd9: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4fdf: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004b4fe5: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b4feb: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004b4ff1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b4ff3: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x4b4ff6u); call_ind(t); }
    /* 004b4ff6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ff8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ffa: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5000: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004b5006: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b500c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004b5012: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b5014: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x4b5017u); call_ind(t); }
    /* 004b5017: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004b501c: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5021: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5027: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004b502d: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5033: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004b5039: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b503b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x4b503eu); call_ind(t); }
    /* 004b503e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5040: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5046: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004b504c: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5052: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004b5058: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b505a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4b505du); call_ind(t); }
    /* 004b505d: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004b505f: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5065: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 004b506b: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x4b5070u); f_005d65d6();
    /* 004b5070: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5076: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 004b507c: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5082: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004b5088: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b508a: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x4b508du); call_ind(t); }
    /* 004b508d: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5093: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b509a: jne 0x4b50e4 */ if (!fZ) goto L_004b50e4;
L_004b509c:; BB(0x004b509c);
    /* 004b509c: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b509e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4b50a3u); f_0048ab58();
    /* 004b50a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b50a6: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
    /* 004b50ac: cmp dword ptr [ebp - 0x174], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b50b3: je 0x4b50c8 */ if (fZ) goto L_004b50c8;
L_004b50b5:; BB(0x004b50b5);
    /* 004b50b5: mov ecx, dword ptr [ebp - 0x174] */ r_ecx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 004b50bb: call 0x5da510 */ r_esp -= 4; W32(r_esp, 0x4b50c0u); f_005da510();
    /* 004b50c0: mov dword ptr [ebp - 0x194], eax */ W32((u32)(r_ebp+0xfffffe6cu), r_eax);
    /* 004b50c6: jmp 0x4b50d2 */ goto L_004b50d2;
L_004b50c8:; BB(0x004b50c8);
    /* 004b50c8: mov dword ptr [ebp - 0x194], 0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x0u);
L_004b50d2:; BB(0x004b50d2);
    /* 004b50d2: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b50d8: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 004b50de: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
L_004b50e4:; BB(0x004b50e4);
    /* 004b50e4: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b50ea: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004b50f0: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b50f6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004b50f9: push 0x691564 */ { u32 v = 0x691564u; r_esp -= 4; W32(r_esp, v); }
    /* 004b50fe: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5104: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004b510a: call 0x5dac0b */ r_esp -= 4; W32(r_esp, 0x4b510fu); f_005dac0b();
    /* 004b510f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5111: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5117: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 004b511d: call 0x5dad3a */ r_esp -= 4; W32(r_esp, 0x4b5122u); f_005dad3a();
    /* 004b5122: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 004b5124: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5126: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b512c: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 004b5132: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5138: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 004b513e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b5140: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4b5143u); call_ind(t); }
    /* 004b5143: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5148: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b514d: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5153: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 004b5159: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b515f: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004b5165: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b5167: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x4b516au); call_ind(t); }
    /* 004b516a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b516c: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5172: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004b5178: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b517e: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004b5184: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b5186: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4b5189u); call_ind(t); }
    /* 004b5189: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b518f: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004b5195: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b519b: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004b51a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b51a3: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4b51a6u); call_ind(t); }
    /* 004b51a6: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 004b51a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b51aa: mov ecx, dword ptr [0x6f9228] */ r_ecx = R32((u32)(0x6f9228u));
    /* 004b51b0: call 0x4b3588 */ r_esp -= 4; W32(r_esp, 0x4b51b5u); f_004b3588();
    /* 004b51b5: mov word ptr [ebp - 0x114], 0 */ W16((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 004b51be: jmp 0x4b51d2 */ goto L_004b51d2;
L_004b51c0:; BB(0x004b51c0);
    /* 004b51c0: mov cx, word ptr [ebp - 0x114] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffeecu))) & 0xffffu);
    /* 004b51c7: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b51cb: mov word ptr [ebp - 0x114], cx */ W16((u32)(r_ebp+0xfffffeecu), (u16)r_ecx);
L_004b51d2:; BB(0x004b51d2);
    /* 004b51d2: movsx edx, word ptr [ebp - 0x114] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b51d9: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b51dc: jge 0x4b543a */ if ((fS==fO)) goto L_004b543a;
L_004b51e2:; BB(0x004b51e2);
    /* 004b51e2: movsx eax, word ptr [ebp - 0x114] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b51e9: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b51ef: cmp dword ptr [ecx + eax*4 + 0xa4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b51f7: jne 0x4b524c */ if (!fZ) goto L_004b524c;
L_004b51f9:; BB(0x004b51f9);
    /* 004b51f9: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 004b51fe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4b5203u); f_0048ab58();
    /* 004b5203: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b5206: mov dword ptr [ebp - 0x178], eax */ W32((u32)(r_ebp+0xfffffe88u), r_eax);
    /* 004b520c: cmp dword ptr [ebp - 0x178], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5213: je 0x4b5228 */ if (fZ) goto L_004b5228;
L_004b5215:; BB(0x004b5215);
    /* 004b5215: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 004b521b: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x4b5220u); f_005e8590();
    /* 004b5220: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 004b5226: jmp 0x4b5232 */ goto L_004b5232;
L_004b5228:; BB(0x004b5228);
    /* 004b5228: mov dword ptr [ebp - 0x198], 0 */ W32((u32)(r_ebp+0xfffffe68u), 0x0u);
L_004b5232:; BB(0x004b5232);
    /* 004b5232: movsx edx, word ptr [ebp - 0x114] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b5239: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b523f: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 004b5245: mov dword ptr [eax + edx*4 + 0xa4], ecx */ W32((u32)(r_eax+r_edx*4+0xa4u), r_ecx);
L_004b524c:; BB(0x004b524c);
    /* 004b524c: movsx edx, word ptr [ebp - 0x114] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b5253: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5259: mov ecx, dword ptr [eax + edx*4 + 0xa4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 004b5260: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5266: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004b5269: movsx eax, word ptr [ebp - 0x114] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b5270: movsx ecx, word ptr [ebp + eax*2 - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xfffffff0u));
    /* 004b5275: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5278: je 0x4b5300 */ if (fZ) goto L_004b5300;
L_004b527e:; BB(0x004b527e);
    /* 004b527e: lea edx, [ebp - 0x158] */ r_edx = (u32)(r_ebp+0xfffffea8u);
    /* 004b5284: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5285: movsx eax, word ptr [ebp - 0x114] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b528c: movsx ecx, word ptr [ebp + eax*2 - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xfffffff0u));
    /* 004b5291: mov edx, dword ptr [0x6f9228] */ r_edx = R32((u32)(0x6f9228u));
    /* 004b5297: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b529b: mov ecx, dword ptr [eax + 0x138] */ r_ecx = R32((u32)(r_eax+0x138u));
    /* 004b52a1: call 0x41f84a */ r_esp -= 4; W32(r_esp, 0x4b52a6u); f_0041f84a();
    /* 004b52a6: movsx ecx, word ptr [ebp - 0x114] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b52ad: movsx edx, word ptr [ebp + ecx*2 - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx*2+0xfffffff0u));
    /* 004b52b2: mov eax, dword ptr [0x6f9228] */ r_eax = R32((u32)(0x6f9228u));
    /* 004b52b7: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b52bb: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b52c0u); f_004d5baa();
    /* 004b52c0: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 004b52c6: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 004b52cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b52cd: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 004b52d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b52d4: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x4b52d9u); f_0060fb42();
    /* 004b52d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b52dc: lea eax, [ebp - 0x148] */ r_eax = (u32)(r_ebp+0xfffffeb8u);
    /* 004b52e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b52e3: lea ecx, [ebp - 0x158] */ r_ecx = (u32)(r_ebp+0xfffffea8u);
    /* 004b52e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b52ea: push 0x69156c */ { u32 v = 0x69156cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b52ef: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 004b52f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b52f6: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x4b52fbu); f_00624050();
    /* 004b52fb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b52fe: jmp 0x4b5314 */ goto L_004b5314;
L_004b5300:; BB(0x004b5300);
    /* 004b5300: push 0x6f9250 */ { u32 v = 0x6f9250u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5305: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 004b530b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b530c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x4b5311u); f_00624510();
    /* 004b5311: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b5314:; BB(0x004b5314);
    /* 004b5314: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 004b531a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b531b: movsx edx, word ptr [ebp - 0x114] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b5322: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5328: mov ecx, dword ptr [eax + edx*4 + 0xa4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 004b532f: movsx edx, word ptr [ebp - 0x114] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b5336: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b533c: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 004b5343: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b5345: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x4b5348u); call_ind(t); }
    /* 004b5348: movsx ecx, word ptr [ebp - 0x114] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b534f: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5355: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 004b535c: movsx eax, word ptr [ebp - 0x114] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b5363: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5369: mov eax, dword ptr [edx + eax*4 + 0xa4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xa4u));
    /* 004b5370: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b5372: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4b5375u); call_ind(t); }
    /* 004b5375: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5377: movsx eax, word ptr [ebp - 0x114] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b537e: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5384: mov ecx, dword ptr [ecx + eax*4 + 0xa4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 004b538b: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x4b5390u); f_005e87aa();
    /* 004b5390: movsx edx, word ptr [ebp - 0x114] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b5397: imul edx, edx, 0x12 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x12u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004b539a: add edx, 0x7d */ {  u32 a = r_edx; u32 b = 0x7du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b539d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b539e: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004b53a0: movsx eax, word ptr [ebp - 0x114] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b53a7: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b53ad: mov ecx, dword ptr [ecx + eax*4 + 0xa4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 004b53b4: movsx edx, word ptr [ebp - 0x114] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b53bb: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b53c1: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 004b53c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b53ca: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4b53cdu); call_ind(t); }
    /* 004b53cd: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 004b53d2: movsx ecx, word ptr [ebp - 0x114] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b53d9: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b53df: mov ecx, dword ptr [edx + ecx*4 + 0xa4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xa4u));
    /* 004b53e6: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x4b53ebu); f_005e8740();
    /* 004b53eb: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b53ed: movsx eax, word ptr [ebp - 0x114] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b53f4: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b53fa: mov ecx, dword ptr [ecx + eax*4 + 0xa4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 004b5401: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x4b5406u); f_005e8775();
    /* 004b5406: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5408: movsx edx, word ptr [ebp - 0x114] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b540f: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5415: mov ecx, dword ptr [eax + edx*4 + 0xa4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 004b541c: movsx edx, word ptr [ebp - 0x114] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 004b5423: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 004b5429: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 004b5430: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b5432: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4b5435u); call_ind(t); }
    /* 004b5435: jmp 0x4b51c0 */ goto L_004b51c0;
L_004b543a:; BB(0x004b543a);
    /* 004b543a: mov esp, ebp */ r_esp = r_ebp;
    /* 004b543c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b543d: ret  */ FN_RET(0x004b48fb); r_esp += 4; return;
}

void f_004b543e(void) /* FUN_004b543e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b543e);
    /* 004b543e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b543f: mov ebp, esp */ r_ebp = r_esp;
    /* 004b5441: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b5444: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004b5447: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b544b: je 0x4b545b */ if (fZ) goto L_004b545b;
L_004b544d:; BB(0x004b544d);
    /* 004b544d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b544f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b5452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5453: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b5456: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x4b545bu); f_005d825e();
L_004b545b:; BB(0x004b545b);
    /* 004b545b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b545e: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x4b5463u); f_005e030e();
    /* 004b5463: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b5466: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 004b546c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b546f: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004b5475: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b5477: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4b547au); call_ind(t); }
    /* 004b547a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b547d: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004b5483: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b5486: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004b548c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b548e: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x4b5491u); call_ind(t); }
    /* 004b5491: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b5497: jmp 0x4b54a5 */ goto L_004b54a5;
L_004b5499:; BB(0x004b5499);
    /* 004b5499: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b549d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b54a1: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004b54a5:; BB(0x004b54a5);
    /* 004b54a5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b54a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b54ac: jge 0x4b54d1 */ if ((fS==fO)) goto L_004b54d1;
L_004b54ae:; BB(0x004b54ae);
    /* 004b54ae: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b54b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b54b5: mov ecx, dword ptr [eax + edx*4 + 0x94] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 004b54bc: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b54c0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b54c3: mov edx, dword ptr [eax + edx*4 + 0x94] */ r_edx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 004b54ca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b54cc: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4b54cfu); call_ind(t); }
    /* 004b54cf: jmp 0x4b5499 */ goto L_004b5499;
L_004b54d1:; BB(0x004b54d1);
    /* 004b54d1: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b54d7: jmp 0x4b54e5 */ goto L_004b54e5;
L_004b54d9:; BB(0x004b54d9);
    /* 004b54d9: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b54dd: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b54e1: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004b54e5:; BB(0x004b54e5);
    /* 004b54e5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b54e9: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b54ec: jge 0x4b5511 */ if ((fS==fO)) goto L_004b5511;
L_004b54ee:; BB(0x004b54ee);
    /* 004b54ee: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b54f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b54f5: mov ecx, dword ptr [ecx + eax*4 + 0xa4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa4u));
    /* 004b54fc: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b5500: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b5503: mov edx, dword ptr [eax + edx*4 + 0xa4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa4u));
    /* 004b550a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b550c: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4b550fu); call_ind(t); }
    /* 004b550f: jmp 0x4b54d9 */ goto L_004b54d9;
L_004b5511:; BB(0x004b5511);
    /* 004b5511: mov esp, ebp */ r_esp = r_ebp;
    /* 004b5513: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5514: ret 4 */ FN_RET(0x004b543e); r_esp += 8; return;
}

void f_004b5517(void) /* FUN_004b5517 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b5517);
    /* 004b5517: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b5518: mov ebp, esp */ r_ebp = r_esp;
    /* 004b551a: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b551d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004b5520: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5522: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x4b5527u); f_0048ab58();
    /* 004b5527: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b552a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004b552d: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5531: je 0x4b5544 */ if (fZ) goto L_004b5544;
L_004b5533:; BB(0x004b5533);
    /* 004b5533: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004b5536: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5537: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b553a: call 0x5df3f0 */ r_esp -= 4; W32(r_esp, 0x4b553fu); f_005df3f0();
    /* 004b553f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b5542: jmp 0x4b554b */ goto L_004b554b;
L_004b5544:; BB(0x004b5544);
    /* 004b5544: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004b554b:; BB(0x004b554b);
    /* 004b554b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b554e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004b5551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b5553: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5555: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b5557: push 0xfa2 */ { u32 v = 0xfa2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b555c: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 004b5562: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004b5565: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x4b556au); f_005e8389();
    /* 004b556a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b556d: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004b5570: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x4b5575u); f_005dd4d2();
    /* 004b5575: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b5578: cmp dword ptr [ecx + 0x10c], eax */ {  u32 a = R32((u32)(r_ecx+0x10cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b557e: jge 0x4b559a */ if ((fS==fO)) goto L_004b559a;
L_004b5580:; BB(0x004b5580);
    /* 004b5580: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b5583: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 004b5589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b558a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b558d: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 004b5590: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x4b5595u); f_005dd560();
    /* 004b5595: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004b5598: jmp 0x4b55b2 */ goto L_004b55b2;
L_004b559a:; BB(0x004b559a);
    /* 004b559a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b559d: mov eax, dword ptr [edx + 0x19c] */ r_eax = R32((u32)(r_edx+0x19cu));
    /* 004b55a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b55a4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b55a7: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004b55aa: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x4b55afu); f_005dd560();
    /* 004b55af: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004b55b2:; BB(0x004b55b2);
    /* 004b55b2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b55b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b55b6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b55b9: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 004b55bf: call 0x5dd3ac */ r_esp -= 4; W32(r_esp, 0x4b55c4u); f_005dd3ac();
    /* 004b55c4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b55c7: mov edx, dword ptr [ecx + 0x180] */ r_edx = R32((u32)(r_ecx+0x180u));
    /* 004b55cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b55ce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b55d1: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 004b55d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b55d8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b55db: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004b55de: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b55e1: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004b55e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b55e6: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4b55e9u); call_ind(t); }
    /* 004b55e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b55ec: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 004b55f2: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x4b55f7u); f_005dd4d2();
    /* 004b55f7: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b55fa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004b55fd: mov dword ptr [ebp - 0x10], 0x16 */ W32((u32)(r_ebp+0xfffffff0u), 0x16u);
    /* 004b5604: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5606: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5609: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004b560c: call 0x4b70ee */ r_esp -= 4; W32(r_esp, 0x4b5611u); f_004b70ee();
    /* 004b5611: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b5614: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004b5617: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b561b: ja 0x4b5746 */ if ((!fC&&!fZ)) goto L_004b5746;
L_004b5621:; BB(0x004b5621);
    /* 004b5621: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b5624: jmp dword ptr [ecx*4 + 0x4b57ed] */ { u32 t = R32((u32)(r_ecx*4+0x4b57edu)); switch (t) { case 0x4b562bu: goto L_004b562b; case 0x4b5668u: goto L_004b5668; case 0x4b569fu: goto L_004b569f; case 0x4b56dau: goto L_004b56da; case 0x4b5711u: goto L_004b5711; default: UNSUP(0x004b5624, "jump table entry is not a known target"); } }
L_004b562b:; BB(0x004b562b);
    /* 004b562b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b562e: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 004b5634: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b5637: sub eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b563a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b563b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b563e: mov edx, dword ptr [ecx + 0x144] */ r_edx = R32((u32)(r_ecx+0x144u));
    /* 004b5644: add edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5647: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5648: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b564b: call 0x5df5a7 */ r_esp -= 4; W32(r_esp, 0x4b5650u); f_005df5a7();
    /* 004b5650: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5652: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5655: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004b5658: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b565b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004b565e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b5660: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4b5663u); call_ind(t); }
    /* 004b5663: jmp 0x4b5746 */ goto L_004b5746;
L_004b5668:; BB(0x004b5668);
    /* 004b5668: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b566b: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 004b5671: sub ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b5674: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5675: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b5678: mov eax, dword ptr [edx + 0x144] */ r_eax = R32((u32)(r_edx+0x144u));
    /* 004b567e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b567f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b5682: call 0x5df5a7 */ r_esp -= 4; W32(r_esp, 0x4b5687u); f_005df5a7();
    /* 004b5687: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5689: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b568c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004b568f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5692: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004b5695: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b5697: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4b569au); call_ind(t); }
    /* 004b569a: jmp 0x4b5746 */ goto L_004b5746;
L_004b569f:; BB(0x004b569f);
    /* 004b569f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b56a2: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 004b56a8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b56ab: lea eax, [ecx + edx - 7] */ r_eax = (u32)(r_ecx+r_edx+0xfffffff9u);
    /* 004b56af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b56b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004b56b3: mov edx, dword ptr [ecx + 0x144] */ r_edx = R32((u32)(r_ecx+0x144u));
    /* 004b56b9: add edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b56bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b56bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b56c0: call 0x5df5a7 */ r_esp -= 4; W32(r_esp, 0x4b56c5u); f_005df5a7();
    /* 004b56c5: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 004b56c7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b56ca: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004b56cd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b56d0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004b56d3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b56d5: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4b56d8u); call_ind(t); }
    /* 004b56d8: jmp 0x4b5746 */ goto L_004b5746;
L_004b56da:; BB(0x004b56da);
    /* 004b56da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b56dd: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 004b56e3: sub ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b56e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b56e7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b56ea: mov eax, dword ptr [edx + 0x144] */ r_eax = R32((u32)(r_edx+0x144u));
    /* 004b56f0: add eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b56f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b56f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b56f7: call 0x5df5a7 */ r_esp -= 4; W32(r_esp, 0x4b56fcu); f_005df5a7();
    /* 004b56fc: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 004b56fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5701: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004b5704: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5707: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004b570a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b570c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4b570fu); call_ind(t); }
    /* 004b570f: jmp 0x4b5746 */ goto L_004b5746;
L_004b5711:; BB(0x004b5711);
    /* 004b5711: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b5714: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 004b571a: sub ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b571d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b571e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b5721: mov eax, dword ptr [edx + 0x144] */ r_eax = R32((u32)(r_edx+0x144u));
    /* 004b5727: add eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b572a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b572b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b572e: call 0x5df5a7 */ r_esp -= 4; W32(r_esp, 0x4b5733u); f_005df5a7();
    /* 004b5733: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5735: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5738: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004b573b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b573e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004b5741: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b5743: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4b5746u); call_ind(t); }
L_004b5746:; BB(0x004b5746);
    /* 004b5746: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5748: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 004b574e: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x4b5753u); f_0045cd25();
    /* 004b5753: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5756: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004b5759: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 004b575c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b575f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5760: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5763: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004b5766: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x4b576bu); f_005d4df6();
    /* 004b576b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b576e: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004b5771: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x4b5776u); f_005dd4d2();
    /* 004b5776: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b5779: cmp dword ptr [ecx + 0x10c], eax */ {  u32 a = R32((u32)(r_ecx+0x10cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b577f: jge 0x4b57b6 */ if ((fS==fO)) goto L_004b57b6;
L_004b5781:; BB(0x004b5781);
    /* 004b5781: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b5784: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 004b578a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b578d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b5790: mov dword ptr [ecx + 0x10c], eax */ W32((u32)(r_ecx+0x10cu), r_eax);
    /* 004b5796: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b5799: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004b579c: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x4b57a1u); f_005dd4d2();
    /* 004b57a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b57a4: cmp dword ptr [ecx + 0x10c], eax */ {  u32 a = R32((u32)(r_ecx+0x10cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b57aa: jne 0x4b57b4 */ if (!fZ) goto L_004b57b4;
L_004b57ac:; BB(0x004b57ac);
    /* 004b57ac: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b57af: call 0x4b36c5 */ r_esp -= 4; W32(r_esp, 0x4b57b4u); f_004b36c5();
L_004b57b4:; BB(0x004b57b4);
    /* 004b57b4: jmp 0x4b57e7 */ goto L_004b57e7;
L_004b57b6:; BB(0x004b57b6);
    /* 004b57b6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b57b9: mov eax, dword ptr [edx + 0x19c] */ r_eax = R32((u32)(r_edx+0x19cu));
    /* 004b57bf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b57c2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b57c5: mov dword ptr [ecx + 0x19c], eax */ W32((u32)(r_ecx+0x19cu), r_eax);
    /* 004b57cb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b57ce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b57d1: mov ecx, dword ptr [edx + 0x19c] */ r_ecx = R32((u32)(r_edx+0x19cu));
    /* 004b57d7: cmp ecx, dword ptr [eax + 0x1a0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b57dd: jne 0x4b57e7 */ if (!fZ) goto L_004b57e7;
L_004b57df:; BB(0x004b57df);
    /* 004b57df: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b57e2: call 0x4b36c5 */ r_esp -= 4; W32(r_esp, 0x4b57e7u); f_004b36c5();
L_004b57e7:; BB(0x004b57e7);
    /* 004b57e7: mov esp, ebp */ r_esp = r_ebp;
    /* 004b57e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b57ea: ret 8 */ FN_RET(0x004b5517); r_esp += 12; return;
}

void f_004b5801(void) /* FUN_004b5801 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b5801);
    /* 004b5801: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b5802: mov ebp, esp */ r_ebp = r_esp;
    /* 004b5804: sub esp, 0xd0 */ {  u32 a = r_esp; u32 b = 0xd0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b580a: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 004b5810: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 004b5816: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 004b581c: mov edx, dword ptr [eax + 0x1ac] */ r_edx = R32((u32)(r_eax+0x1acu));
    /* 004b5822: cmp edx, dword ptr [ecx + 0x1b0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1b0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5828: jge 0x4b583e */ if ((fS==fO)) goto L_004b583e;
L_004b582a:; BB(0x004b582a);
    /* 004b582a: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 004b5830: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 004b5836: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 004b583c: jmp 0x4b5850 */ goto L_004b5850;
L_004b583e:; BB(0x004b583e);
    /* 004b583e: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 004b5844: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 004b584a: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
L_004b5850:; BB(0x004b5850);
    /* 004b5850: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 004b5856: mov edx, dword ptr [ecx + 0x1b0] */ r_edx = R32((u32)(r_ecx+0x1b0u));
    /* 004b585c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b585d: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 004b5863: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5864: push 0x691574 */ { u32 v = 0x691574u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5869: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 004b586f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5870: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b5876u); call_ind(t); }
    /* 004b5876: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b5879: mov esp, ebp */ r_esp = r_ebp;
    /* 004b587b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b587c: ret  */ FN_RET(0x004b5801); r_esp += 4; return;
}

void f_004b587d(void) /* FUN_004b587d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b587d);
    /* 004b587d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b587e: mov ebp, esp */ r_ebp = r_esp;
    /* 004b5880: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5881: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b5884: mov esp, ebp */ r_esp = r_ebp;
    /* 004b5886: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5887: ret  */ FN_RET(0x004b587d); r_esp += 4; return;
}

void f_004b5888(void) /* FUN_004b5888 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b5888);
    /* 004b5888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b5889: mov ebp, esp */ r_ebp = r_esp;
    /* 004b588b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b588c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b588f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b5892: call 0x4b5801 */ r_esp -= 4; W32(r_esp, 0x4b5897u); f_004b5801();
    /* 004b5897: mov esp, ebp */ r_esp = r_ebp;
    /* 004b5899: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b589a: ret  */ FN_RET(0x004b5888); r_esp += 4; return;
}

void f_004b589b(void) /* FUN_004b589b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b589b);
    /* 004b589b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b589c: mov ebp, esp */ r_ebp = r_esp;
    /* 004b589e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b589f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b58a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b58a5: call 0x4b587d */ r_esp -= 4; W32(r_esp, 0x4b58aau); f_004b587d();
    /* 004b58aa: mov esp, ebp */ r_esp = r_ebp;
    /* 004b58ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b58ad: ret  */ FN_RET(0x004b589b); r_esp += 4; return;
}

void f_004b58ae(void) /* FUN_004b58ae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b58ae);
    /* 004b58ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b58af: mov ebp, esp */ r_ebp = r_esp;
    /* 004b58b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b58b2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b58b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b58b8: mov eax, dword ptr [eax + 0x1a8] */ r_eax = R32((u32)(r_eax+0x1a8u));
    /* 004b58be: mov esp, ebp */ r_esp = r_ebp;
    /* 004b58c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b58c1: ret  */ FN_RET(0x004b58ae); r_esp += 4; return;
}

void f_004b58c2(void) /* FUN_004b58c2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b58c2);
    /* 004b58c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b58c3: mov ebp, esp */ r_ebp = r_esp;
    /* 004b58c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b58c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b58c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b58cc: mov cx, word ptr [eax + 0x1a6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x1a6u))) & 0xffffu);
    /* 004b58d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b58d4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b58d7: mov ax, word ptr [edx + 0x1a4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x1a4u))) & 0xffffu);
    /* 004b58de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b58e2: call 0x4b63a0 */ r_esp -= 4; W32(r_esp, 0x4b58e7u); f_004b63a0();
    /* 004b58e7: mov esp, ebp */ r_esp = r_ebp;
    /* 004b58e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b58ea: ret  */ FN_RET(0x004b58c2); r_esp += 4; return;
}

void f_004b58eb(void) /* FUN_004b58eb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b58eb);
    /* 004b58eb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b58ec: mov ebp, esp */ r_ebp = r_esp;
    /* 004b58ee: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b58f1: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 004b58f4: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 004b58f7: mov cx, word ptr [eax + 0x1a4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x1a4u))) & 0xffffu);
    /* 004b58fe: mov word ptr [ebp - 0x70], cx */ W16((u32)(r_ebp+0xffffff90u), (u16)r_ecx);
    /* 004b5902: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004b5905: mov ax, word ptr [edx + 0x1a6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x1a6u))) & 0xffffu);
    /* 004b590c: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 004b5910: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b5916: jmp 0x4b5924 */ goto L_004b5924;
L_004b5918:; BB(0x004b5918);
    /* 004b5918: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b591c: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b5920: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004b5924:; BB(0x004b5924);
    /* 004b5924: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b5928: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b592b: jge 0x4b59b1 */ if ((fS==fO)) goto L_004b59b1;
L_004b5931:; BB(0x004b5931);
    /* 004b5931: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b5935: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b5938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5939: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b593d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b593e: movsx edx, word ptr [ebp - 0x70] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004b5942: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5943: push 0x691588 */ { u32 v = 0x691588u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5948: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 004b594b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b594c: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b5952u); call_ind(t); }
    /* 004b5952: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b5955: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5957: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 004b595a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b595b: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 004b5961: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004b5964: call 0x61baba */ r_esp -= 4; W32(r_esp, 0x4b5969u); f_0061baba();
    /* 004b5969: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b596d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b5970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5971: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b5975: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5976: movsx edx, word ptr [ebp - 0x70] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004b597a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b597b: push 0x6915a0 */ { u32 v = 0x6915a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5980: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 004b5983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5984: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b598au); call_ind(t); }
    /* 004b598a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b598d: push 0x6915b8 */ { u32 v = 0x6915b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5992: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 004b5995: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5996: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 004b599c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004b599f: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 004b59a4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004b59a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004b59a9: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x4b59acu); call_ind(t); }
    /* 004b59ac: jmp 0x4b5918 */ goto L_004b5918;
L_004b59b1:; BB(0x004b59b1);
    /* 004b59b1: mov esp, ebp */ r_esp = r_ebp;
    /* 004b59b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b59b4: ret  */ FN_RET(0x004b58eb); r_esp += 4; return;
}

void f_004b59b5(void) /* FUN_004b59b5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b59b5);
    /* 004b59b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b59b6: mov ebp, esp */ r_ebp = r_esp;
    /* 004b59b8: sub esp, 0xd0 */ {  u32 a = r_esp; u32 b = 0xd0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b59be: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 004b59c4: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 004b59ca: cmp dword ptr [eax + 0x1b4], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0x1b4u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b59d4: jne 0x4b59e1 */ if (!fZ) goto L_004b59e1;
L_004b59d6:; BB(0x004b59d6);
    /* 004b59d6: mov word ptr [ebp - 0x20], 1 */ W16((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 004b59dc: jmp 0x4b5a6b */ goto L_004b5a6b;
L_004b59e1:; BB(0x004b59e1);
    /* 004b59e1: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 004b59e7: cmp dword ptr [ecx + 0x1b4], 0x1388 */ {  u32 a = R32((u32)(r_ecx+0x1b4u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b59f1: jne 0x4b59fb */ if (!fZ) goto L_004b59fb;
L_004b59f3:; BB(0x004b59f3);
    /* 004b59f3: mov word ptr [ebp - 0x20], 2 */ W16((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 004b59f9: jmp 0x4b5a6b */ goto L_004b5a6b;
L_004b59fb:; BB(0x004b59fb);
    /* 004b59fb: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 004b5a01: cmp dword ptr [edx + 0x1b4], 0x61a8 */ {  u32 a = R32((u32)(r_edx+0x1b4u)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5a0b: jne 0x4b5a15 */ if (!fZ) goto L_004b5a15;
L_004b5a0d:; BB(0x004b5a0d);
    /* 004b5a0d: mov word ptr [ebp - 0x20], 3 */ W16((u32)(r_ebp+0xffffffe0u), 0x3u);
    /* 004b5a13: jmp 0x4b5a6b */ goto L_004b5a6b;
L_004b5a15:; BB(0x004b5a15);
    /* 004b5a15: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 004b5a1b: cmp dword ptr [eax + 0x1b4], 0xc350 */ {  u32 a = R32((u32)(r_eax+0x1b4u)); u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5a25: jne 0x4b5a2f */ if (!fZ) goto L_004b5a2f;
L_004b5a27:; BB(0x004b5a27);
    /* 004b5a27: mov word ptr [ebp - 0x20], 4 */ W16((u32)(r_ebp+0xffffffe0u), 0x4u);
    /* 004b5a2d: jmp 0x4b5a6b */ goto L_004b5a6b;
L_004b5a2f:; BB(0x004b5a2f);
    /* 004b5a2f: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 004b5a35: cmp dword ptr [ecx + 0x1b4], 0x186a0 */ {  u32 a = R32((u32)(r_ecx+0x1b4u)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5a3f: jne 0x4b5a49 */ if (!fZ) goto L_004b5a49;
L_004b5a41:; BB(0x004b5a41);
    /* 004b5a41: mov word ptr [ebp - 0x20], 5 */ W16((u32)(r_ebp+0xffffffe0u), 0x5u);
    /* 004b5a47: jmp 0x4b5a6b */ goto L_004b5a6b;
L_004b5a49:; BB(0x004b5a49);
    /* 004b5a49: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 004b5a4f: cmp dword ptr [edx + 0x1b4], 0x7a120 */ {  u32 a = R32((u32)(r_edx+0x1b4u)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5a59: jne 0x4b5a63 */ if (!fZ) goto L_004b5a63;
L_004b5a5b:; BB(0x004b5a5b);
    /* 004b5a5b: mov word ptr [ebp - 0x20], 6 */ W16((u32)(r_ebp+0xffffffe0u), 0x6u);
    /* 004b5a61: jmp 0x4b5a6b */ goto L_004b5a6b;
L_004b5a63:; BB(0x004b5a63);
    /* 004b5a63: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b5a66: jmp 0x4b5c4c */ goto L_004b5c4c;
L_004b5a6b:; BB(0x004b5a6b);
    /* 004b5a6b: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 004b5a71: call 0x4b25bc */ r_esp -= 4; W32(r_esp, 0x4b5a76u); f_004b25bc();
    /* 004b5a76: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 004b5a7c: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 004b5a82: sub eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b5a85: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 004b5a8b: cmp dword ptr [ebp - 0xd0], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b5a92: ja 0x4b5aa1 */ if ((!fC&&!fZ)) goto L_004b5aa1;
L_004b5a94:; BB(0x004b5a94);
    /* 004b5a94: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 004b5a9a: jmp dword ptr [ecx*4 + 0x4b5c52] */ { u32 t = R32((u32)(r_ecx*4+0x4b5c52u)); switch (t) { case 0x4b5aa9u: goto L_004b5aa9; case 0x4b5ab4u: goto L_004b5ab4; case 0x4b5abfu: goto L_004b5abf; case 0x4b5acau: goto L_004b5aca; case 0x4b5ad5u: goto L_004b5ad5; case 0x4b5ae0u: goto L_004b5ae0; case 0x4b5aa1u: goto L_004b5aa1; case 0x4b5b01u: goto L_004b5b01; case 0x4b5aebu: goto L_004b5aeb; case 0x4b5af6u: goto L_004b5af6; case 0x4b5b0cu: goto L_004b5b0c; default: UNSUP(0x004b5a9a, "jump table entry is not a known target"); } }
L_004b5aa1:; BB(0x004b5aa1);
    /* 004b5aa1: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b5aa4: jmp 0x4b5c4c */ goto L_004b5c4c;
L_004b5aa9:; BB(0x004b5aa9);
    /* 004b5aa9: mov word ptr [ebp - 0xc4], 1 */ W16((u32)(r_ebp+0xffffff3cu), 0x1u);
    /* 004b5ab2: jmp 0x4b5b15 */ goto L_004b5b15;
L_004b5ab4:; BB(0x004b5ab4);
    /* 004b5ab4: mov word ptr [ebp - 0xc4], 2 */ W16((u32)(r_ebp+0xffffff3cu), 0x2u);
    /* 004b5abd: jmp 0x4b5b15 */ goto L_004b5b15;
L_004b5abf:; BB(0x004b5abf);
    /* 004b5abf: mov word ptr [ebp - 0xc4], 3 */ W16((u32)(r_ebp+0xffffff3cu), 0x3u);
    /* 004b5ac8: jmp 0x4b5b15 */ goto L_004b5b15;
L_004b5aca:; BB(0x004b5aca);
    /* 004b5aca: mov word ptr [ebp - 0xc4], 4 */ W16((u32)(r_ebp+0xffffff3cu), 0x4u);
    /* 004b5ad3: jmp 0x4b5b15 */ goto L_004b5b15;
L_004b5ad5:; BB(0x004b5ad5);
    /* 004b5ad5: mov word ptr [ebp - 0xc4], 5 */ W16((u32)(r_ebp+0xffffff3cu), 0x5u);
    /* 004b5ade: jmp 0x4b5b15 */ goto L_004b5b15;
L_004b5ae0:; BB(0x004b5ae0);
    /* 004b5ae0: mov word ptr [ebp - 0xc4], 6 */ W16((u32)(r_ebp+0xffffff3cu), 0x6u);
    /* 004b5ae9: jmp 0x4b5b15 */ goto L_004b5b15;
L_004b5aeb:; BB(0x004b5aeb);
    /* 004b5aeb: mov word ptr [ebp - 0xc4], 7 */ W16((u32)(r_ebp+0xffffff3cu), 0x7u);
    /* 004b5af4: jmp 0x4b5b15 */ goto L_004b5b15;
L_004b5af6:; BB(0x004b5af6);
    /* 004b5af6: mov word ptr [ebp - 0xc4], 8 */ W16((u32)(r_ebp+0xffffff3cu), 0x8u);
    /* 004b5aff: jmp 0x4b5b15 */ goto L_004b5b15;
L_004b5b01:; BB(0x004b5b01);
    /* 004b5b01: mov word ptr [ebp - 0xc4], 9 */ W16((u32)(r_ebp+0xffffff3cu), 0x9u);
    /* 004b5b0a: jmp 0x4b5b15 */ goto L_004b5b15;
L_004b5b0c:; BB(0x004b5b0c);
    /* 004b5b0c: mov word ptr [ebp - 0xc4], 0xa */ W16((u32)(r_ebp+0xffffff3cu), 0xau);
L_004b5b15:; BB(0x004b5b15);
    /* 004b5b15: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b5b1b: jmp 0x4b5b29 */ goto L_004b5b29;
L_004b5b1d:; BB(0x004b5b1d);
    /* 004b5b1d: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b5b21: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b5b25: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004b5b29:; BB(0x004b5b29);
    /* 004b5b29: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b5b2d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5b30: jge 0x4b5be0 */ if ((fS==fO)) goto L_004b5be0;
L_004b5b36:; BB(0x004b5b36);
    /* 004b5b36: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b5b3a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b5b3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b3e: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b5b42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b43: movsx eax, word ptr [ebp - 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff3cu));
    /* 004b5b4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b4b: push 0x6915c0 */ { u32 v = 0x6915c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b50: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 004b5b56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b57: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b5b5du); call_ind(t); }
    /* 004b5b5d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b5b60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b62: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 004b5b68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b69: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 004b5b6e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004b5b71: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x4b5b76u); f_0061ba62();
    /* 004b5b76: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b5b7a: mov dword ptr [ebp + ecx*4 - 0x18], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffe8u), r_eax);
    /* 004b5b7e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b5b82: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5b85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b86: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004b5b8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b8b: movsx ecx, word ptr [ebp - 0xc4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff3cu));
    /* 004b5b92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b93: push 0x6915d8 */ { u32 v = 0x6915d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b98: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 004b5b9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5b9f: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b5ba5u); call_ind(t); }
    /* 004b5ba5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b5ba8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004b5baa: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b5bae: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004b5bb1: lea ecx, [ebp + eax - 0xc0] */ r_ecx = (u32)(r_ebp+r_eax+0xffffff40u);
    /* 004b5bb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5bb9: push 0x6915f0 */ { u32 v = 0x6915f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5bbe: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 004b5bc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5bc5: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 004b5bca: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004b5bcd: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 004b5bd3: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b5bd6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b5bd8: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4b5bdbu); call_ind(t); }
    /* 004b5bdb: jmp 0x4b5b1d */ goto L_004b5b1d;
L_004b5be0:; BB(0x004b5be0);
    /* 004b5be0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b5be3: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 004b5be9: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b5bed: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b5bf2u); f_004d5baa();
    /* 004b5bf2: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 004b5bf8: mov word ptr [ebp - 0x1c], 5 */ W16((u32)(r_ebp+0xffffffe4u), 0x5u);
    /* 004b5bfe: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b5c04: jmp 0x4b5c12 */ goto L_004b5c12;
L_004b5c06:; BB(0x004b5c06);
    /* 004b5c06: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b5c0a: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b5c0e: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004b5c12:; BB(0x004b5c12);
    /* 004b5c12: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b5c16: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5c19: jge 0x4b5c37 */ if ((fS==fO)) goto L_004b5c37;
L_004b5c1b:; BB(0x004b5c1b);
    /* 004b5c1b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b5c1f: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 004b5c25: cmp edx, dword ptr [ebp + ecx*4 - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5c29: jle 0x4b5c35 */ if ((fZ||fS!=fO)) goto L_004b5c35;
L_004b5c2b:; BB(0x004b5c2b);
    /* 004b5c2b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b5c2f: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004b5c33: jmp 0x4b5c37 */ goto L_004b5c37;
L_004b5c35:; BB(0x004b5c35);
    /* 004b5c35: jmp 0x4b5c06 */ goto L_004b5c06;
L_004b5c37:; BB(0x004b5c37);
    /* 004b5c37: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b5c3b: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5c3e: jne 0x4b5c45 */ if (!fZ) goto L_004b5c45;
L_004b5c40:; BB(0x004b5c40);
    /* 004b5c40: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b5c43: jmp 0x4b5c4c */ goto L_004b5c4c;
L_004b5c45:; BB(0x004b5c45);
    /* 004b5c45: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004b5c49: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004b5c4c:; BB(0x004b5c4c);
    /* 004b5c4c: mov esp, ebp */ r_esp = r_ebp;
    /* 004b5c4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5c4f: ret 4 */ FN_RET(0x004b59b5); r_esp += 8; return;
}

void f_004b5c96(void) /* FUN_004b5c96 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b5c96);
    /* 004b5c96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c97: mov ebp, esp */ r_ebp = r_esp;
    /* 004b5c99: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b5c9c: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 004b5c9f: mov word ptr [ebp - 0x34], 0 */ W16((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004b5ca5: jmp 0x4b5cb3 */ goto L_004b5cb3;
L_004b5ca7:; BB(0x004b5ca7);
    /* 004b5ca7: mov ax, word ptr [ebp - 0x34] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffccu))) & 0xffffu);
    /* 004b5cab: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b5caf: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
L_004b5cb3:; BB(0x004b5cb3);
    /* 004b5cb3: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004b5cb7: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5cba: jge 0x4b5cf4 */ if ((fS==fO)) goto L_004b5cf4;
L_004b5cbc:; BB(0x004b5cbc);
    /* 004b5cbc: movsx edx, word ptr [ebp - 0x34] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004b5cc0: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004b5cc3: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b5cc7: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b5cccu); f_004d5cdd();
    /* 004b5ccc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5ccf: je 0x4b5cd3 */ if (fZ) goto L_004b5cd3;
L_004b5cd1:; BB(0x004b5cd1);
    /* 004b5cd1: jmp 0x4b5ca7 */ goto L_004b5ca7;
L_004b5cd3:; BB(0x004b5cd3);
    /* 004b5cd3: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004b5cd7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5cd8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004b5cdb: call 0x4b2765 */ r_esp -= 4; W32(r_esp, 0x4b5ce0u); f_004b2765();
    /* 004b5ce0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5ce2: movsx edx, word ptr [ebp - 0x34] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004b5ce6: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004b5ce9: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b5ced: call 0x4d5cf1 */ r_esp -= 4; W32(r_esp, 0x4b5cf2u); f_004d5cf1();
    /* 004b5cf2: jmp 0x4b5ca7 */ goto L_004b5ca7;
L_004b5cf4:; BB(0x004b5cf4);
    /* 004b5cf4: mov dword ptr [ebp - 0x30], 0xa */ W32((u32)(r_ebp+0xffffffd0u), 0xau);
    /* 004b5cfb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b5cfe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5cff: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b5d04u); f_0060ee31();
    /* 004b5d04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b5d07: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004b5d0a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004b5d11: jmp 0x4b5d1c */ goto L_004b5d1c;
L_004b5d13:; BB(0x004b5d13);
    /* 004b5d13: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5d16: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5d19: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_004b5d1c:; BB(0x004b5d1c);
    /* 004b5d1c: cmp dword ptr [ebp - 0x24], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5d20: jge 0x4b5d9c */ if ((fS==fO)) goto L_004b5d9c;
L_004b5d22:; BB(0x004b5d22);
    /* 004b5d22: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b5d25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5d26: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b5d2bu); f_0060ee31();
    /* 004b5d2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b5d2e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5d31: mov dword ptr [ebp + ecx*4 - 0x20], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffe0u), r_eax);
    /* 004b5d35: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
L_004b5d3c:; BB(0x004b5d3c);
    /* 004b5d3c: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5d40: je 0x4b5d97 */ if (fZ) goto L_004b5d97;
L_004b5d42:; BB(0x004b5d42);
    /* 004b5d42: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 004b5d49: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004b5d50: jmp 0x4b5d5b */ goto L_004b5d5b;
L_004b5d52:; BB(0x004b5d52);
    /* 004b5d52: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b5d55: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5d58: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_004b5d5b:; BB(0x004b5d5b);
    /* 004b5d5b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b5d5e: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5d61: jge 0x4b5d7c */ if ((fS==fO)) goto L_004b5d7c;
L_004b5d63:; BB(0x004b5d63);
    /* 004b5d63: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b5d66: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5d69: mov eax, dword ptr [ebp + ecx*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffe0u));
    /* 004b5d6d: cmp eax, dword ptr [ebp + edx*4 - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5d71: jne 0x4b5d7a */ if (!fZ) goto L_004b5d7a;
L_004b5d73:; BB(0x004b5d73);
    /* 004b5d73: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
L_004b5d7a:; BB(0x004b5d7a);
    /* 004b5d7a: jmp 0x4b5d52 */ goto L_004b5d52;
L_004b5d7c:; BB(0x004b5d7c);
    /* 004b5d7c: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5d80: je 0x4b5d95 */ if (fZ) goto L_004b5d95;
L_004b5d82:; BB(0x004b5d82);
    /* 004b5d82: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b5d85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5d86: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x4b5d8bu); f_0060ee31();
    /* 004b5d8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b5d8e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5d91: mov dword ptr [ebp + edx*4 - 0x20], eax */ W32((u32)(r_ebp+r_edx*4+0xffffffe0u), r_eax);
L_004b5d95:; BB(0x004b5d95);
    /* 004b5d95: jmp 0x4b5d3c */ goto L_004b5d3c;
L_004b5d97:; BB(0x004b5d97);
    /* 004b5d97: jmp 0x4b5d13 */ goto L_004b5d13;
L_004b5d9c:; BB(0x004b5d9c);
    /* 004b5d9c: mov word ptr [ebp - 0x28], 0 */ W16((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004b5da2: mov dword ptr [ebp - 0x24], 7 */ W32((u32)(r_ebp+0xffffffdcu), 0x7u);
    /* 004b5da9: jmp 0x4b5db4 */ goto L_004b5db4;
L_004b5dab:; BB(0x004b5dab);
    /* 004b5dab: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5dae: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b5db1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_004b5db4:; BB(0x004b5db4);
    /* 004b5db4: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5db8: jl 0x4b5dfd */ if ((fS!=fO)) goto L_004b5dfd;
L_004b5dba:; BB(0x004b5dba);
    /* 004b5dba: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5dbd: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004b5dc0: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b5dc4: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b5dc9u); f_004d5cdd();
    /* 004b5dc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5dcb: jne 0x4b5dfb */ if (!fZ) goto L_004b5dfb;
L_004b5dcd:; BB(0x004b5dcd);
    /* 004b5dcd: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5dd1: je 0x4b5dde */ if (fZ) goto L_004b5dde;
L_004b5dd3:; BB(0x004b5dd3);
    /* 004b5dd3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b5dd6: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b5dd9: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004b5ddc: jmp 0x4b5dfb */ goto L_004b5dfb;
L_004b5dde:; BB(0x004b5dde);
    /* 004b5dde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5de0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5de3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004b5de6: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b5dea: call 0x4d5cf1 */ r_esp -= 4; W32(r_esp, 0x4b5defu); f_004d5cf1();
    /* 004b5def: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 004b5df3: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b5df7: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
L_004b5dfb:; BB(0x004b5dfb);
    /* 004b5dfb: jmp 0x4b5dab */ goto L_004b5dab;
L_004b5dfd:; BB(0x004b5dfd);
    /* 004b5dfd: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004b5e04: jmp 0x4b5e0f */ goto L_004b5e0f;
L_004b5e06:; BB(0x004b5e06);
    /* 004b5e06: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5e09: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b5e0c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_004b5e0f:; BB(0x004b5e0f);
    /* 004b5e0f: cmp dword ptr [ebp - 0x24], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5e13: jge 0x4b5e31 */ if ((fS==fO)) goto L_004b5e31;
L_004b5e15:; BB(0x004b5e15);
    /* 004b5e15: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004b5e1c: jmp 0x4b5e27 */ goto L_004b5e27;
L_004b5e1e:; BB(0x004b5e1e);
    /* 004b5e1e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b5e21: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5e24: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_004b5e27:; BB(0x004b5e27);
    /* 004b5e27: cmp dword ptr [ebp - 0x2c], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5e2b: jge 0x4b5e2f */ if ((fS==fO)) goto L_004b5e2f;
L_004b5e2d:; BB(0x004b5e2d);
    /* 004b5e2d: jmp 0x4b5e1e */ goto L_004b5e1e;
L_004b5e2f:; BB(0x004b5e2f);
    /* 004b5e2f: jmp 0x4b5e06 */ goto L_004b5e06;
L_004b5e31:; BB(0x004b5e31);
    /* 004b5e31: mov esp, ebp */ r_esp = r_ebp;
    /* 004b5e33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5e34: ret 4 */ FN_RET(0x004b5c96); r_esp += 8; return;
}

void f_004b5e37(void) /* FUN_004b5e37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b5e37);
    /* 004b5e37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e38: mov ebp, esp */ r_ebp = r_esp;
    /* 004b5e3a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b5e3d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004b5e40: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5e43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5e46: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 004b5e4c: mov dword ptr [eax + 0x114], edx */ W32((u32)(r_eax+0x114u), r_edx);
    /* 004b5e52: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5e55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5e58: mov edx, dword ptr [ecx + 0x118] */ r_edx = R32((u32)(r_ecx+0x118u));
    /* 004b5e5e: mov dword ptr [eax + 0x11c], edx */ W32((u32)(r_eax+0x11cu), r_edx);
    /* 004b5e64: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5e67: mov dword ptr [eax + 0x1a8], 1 */ W32((u32)(r_eax+0x1a8u), 0x1u);
    /* 004b5e71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5e74: mov dword ptr [ecx + 0x1ac], 0 */ W32((u32)(r_ecx+0x1acu), 0x0u);
    /* 004b5e7e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5e81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b5e84: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 004b5e8a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5e8d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004b5e90: mov dword ptr [ecx + 0x1b4], edx */ W32((u32)(r_ecx+0x1b4u), r_edx);
    /* 004b5e96: push 0x7f02 */ { u32 v = 0x7f02u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e9d: call dword ptr [0x6331fc] */ { u32 t = R32((u32)(0x6331fcu)); r_esp -= 4; W32(r_esp, 0x4b5ea3u); call_ind(t); }
    /* 004b5ea3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5ea4: call dword ptr [0x6331f4] */ { u32 t = R32((u32)(0x6331f4u)); r_esp -= 4; W32(r_esp, 0x4b5eaau); call_ind(t); }
    /* 004b5eaa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004b5ead: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004b5eb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5eb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5eb4: call 0x4b5c96 */ r_esp -= 4; W32(r_esp, 0x4b5eb9u); f_004b5c96();
    /* 004b5eb9: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b5ebf: jmp 0x4b5ecd */ goto L_004b5ecd;
L_004b5ec1:; BB(0x004b5ec1);
    /* 004b5ec1: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004b5ec5: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b5ec9: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_004b5ecd:; BB(0x004b5ecd);
    /* 004b5ecd: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b5ed1: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5ed4: jge 0x4b5f60 */ if ((fS==fO)) goto L_004b5f60;
L_004b5eda:; BB(0x004b5eda);
    /* 004b5eda: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b5ede: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5ee1: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b5ee5: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b5eeau); f_004d5cdd();
    /* 004b5eea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5eec: jne 0x4b5ef0 */ if (!fZ) goto L_004b5ef0;
L_004b5eee:; BB(0x004b5eee);
    /* 004b5eee: jmp 0x4b5ec1 */ goto L_004b5ec1;
L_004b5ef0:; BB(0x004b5ef0);
    /* 004b5ef0: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b5ef4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5ef7: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b5efb: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b5f00u); f_004d5cdd();
    /* 004b5f00: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5f03: jne 0x4b5f2f */ if (!fZ) goto L_004b5f2f;
L_004b5f05:; BB(0x004b5f05);
    /* 004b5f05: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b5f09: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5f0c: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b5f10: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b5f15u); f_004d5baa();
    /* 004b5f15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5f18: sub eax, dword ptr [ecx + 0x1b4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1b4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b5f1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5f1f: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b5f23: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5f26: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b5f2a: call 0x4d5beb */ r_esp -= 4; W32(r_esp, 0x4b5f2fu); f_004d5beb();
L_004b5f2f:; BB(0x004b5f2f);
    /* 004b5f2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5f32: mov edx, dword ptr [ecx + 0x1b4] */ r_edx = R32((u32)(r_ecx+0x1b4u));
    /* 004b5f38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5f39: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b5f3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5f40: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b5f44: call 0x4d5bbe */ r_esp -= 4; W32(r_esp, 0x4b5f49u); f_004d5bbe();
    /* 004b5f49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5f4b: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b5f4f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5f52: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b5f56: call 0x4d2fa1 */ r_esp -= 4; W32(r_esp, 0x4b5f5bu); f_004d2fa1();
    /* 004b5f5b: jmp 0x4b5ec1 */ goto L_004b5ec1;
L_004b5f60:; BB(0x004b5f60);
    /* 004b5f60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5f63: call 0x4b5888 */ r_esp -= 4; W32(r_esp, 0x4b5f68u); f_004b5888();
    /* 004b5f68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b5f6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5f6c: call dword ptr [0x6331f4] */ { u32 t = R32((u32)(0x6331f4u)); r_esp -= 4; W32(r_esp, 0x4b5f72u); call_ind(t); }
    /* 004b5f72: mov esp, ebp */ r_esp = r_ebp;
    /* 004b5f74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5f75: ret 0xc */ FN_RET(0x004b5e37); r_esp += 16; return;
}

void f_004b5f78(void) /* FUN_004b5f78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b5f78);
    /* 004b5f78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b5f79: mov ebp, esp */ r_ebp = r_esp;
    /* 004b5f7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5f7c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b5f7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b5f82: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 004b5f88: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b5f8b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b5f8e: mov dword ptr [edx + 0x1ac], ecx */ W32((u32)(r_edx+0x1acu), r_ecx);
    /* 004b5f94: mov esp, ebp */ r_esp = r_ebp;
    /* 004b5f96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5f97: ret  */ FN_RET(0x004b5f78); r_esp += 4; return;
}

void f_004b5f98(void) /* FUN_004b5f98 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b5f98);
    /* 004b5f98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b5f99: mov ebp, esp */ r_ebp = r_esp;
    /* 004b5f9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5f9c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b5f9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b5fa2: mov eax, dword ptr [eax + 0x1ac] */ r_eax = R32((u32)(r_eax+0x1acu));
    /* 004b5fa8: mov esp, ebp */ r_esp = r_ebp;
    /* 004b5faa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5fab: ret  */ FN_RET(0x004b5f98); r_esp += 4; return;
}

void f_004b5fac(void) /* FUN_004b5fac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b5fac);
    /* 004b5fac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b5fad: mov ebp, esp */ r_ebp = r_esp;
    /* 004b5faf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5fb0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b5fb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b5fb6: mov eax, dword ptr [eax + 0x1b0] */ r_eax = R32((u32)(r_eax+0x1b0u));
    /* 004b5fbc: mov esp, ebp */ r_esp = r_ebp;
    /* 004b5fbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5fbf: ret  */ FN_RET(0x004b5fac); r_esp += 4; return;
}

void f_004b5fc0(void) /* FUN_004b5fc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b5fc0);
    /* 004b5fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b5fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b5fc3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b5fc6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b5fc7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004b5fca: push 0x7f02 */ { u32 v = 0x7f02u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5fcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5fd1: call dword ptr [0x6331fc] */ { u32 t = R32((u32)(0x6331fcu)); r_esp -= 4; W32(r_esp, 0x4b5fd7u); call_ind(t); }
    /* 004b5fd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5fd8: call dword ptr [0x6331f4] */ { u32 t = R32((u32)(0x6331f4u)); r_esp -= 4; W32(r_esp, 0x4b5fdeu); call_ind(t); }
    /* 004b5fde: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004b5fe1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5fe4: mov dword ptr [eax + 0x1a8], 0 */ W32((u32)(r_eax+0x1a8u), 0x0u);
    /* 004b5fee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5ff1: call 0x4b589b */ r_esp -= 4; W32(r_esp, 0x4b5ff6u); f_004b589b();
    /* 004b5ff6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5ff8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5ffa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5ffc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5fff: call 0x4b12f2 */ r_esp -= 4; W32(r_esp, 0x4b6004u); f_004b12f2();
    /* 004b6004: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b600a: jmp 0x4b6018 */ goto L_004b6018;
L_004b600c:; BB(0x004b600c);
    /* 004b600c: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004b6010: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b6014: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_004b6018:; BB(0x004b6018);
    /* 004b6018: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b601c: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b601f: jge 0x4b60ae */ if ((fS==fO)) goto L_004b60ae;
L_004b6025:; BB(0x004b6025);
    /* 004b6025: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b6029: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b602c: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b6030: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b6035u); f_004d5cdd();
    /* 004b6035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6037: jne 0x4b603b */ if (!fZ) goto L_004b603b;
L_004b6039:; BB(0x004b6039);
    /* 004b6039: jmp 0x4b600c */ goto L_004b600c;
L_004b603b:; BB(0x004b603b);
    /* 004b603b: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b603f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b6042: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b6046: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b604bu); f_004d5cdd();
    /* 004b604b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b604e: jne 0x4b6097 */ if (!fZ) goto L_004b6097;
L_004b6050:; BB(0x004b6050);
    /* 004b6050: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b6054: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b6057: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b605b: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b6060u); f_004d5baa();
    /* 004b6060: mov esi, eax */ r_esi = r_eax;
    /* 004b6062: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b6066: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b6069: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b606d: call 0x4d5bd7 */ r_esp -= 4; W32(r_esp, 0x4b6072u); f_004d5bd7();
    /* 004b6072: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b6074: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b6075: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b6079: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b607c: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b6080: call 0x4d5bbe */ r_esp -= 4; W32(r_esp, 0x4b6085u); f_004d5bbe();
    /* 004b6085: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6087: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b608b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b608e: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b6092: call 0x4d5beb */ r_esp -= 4; W32(r_esp, 0x4b6097u); f_004d5beb();
L_004b6097:; BB(0x004b6097);
    /* 004b6097: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6099: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b609d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b60a0: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b60a4: call 0x4d2fa1 */ r_esp -= 4; W32(r_esp, 0x4b60a9u); f_004d2fa1();
    /* 004b60a9: jmp 0x4b600c */ goto L_004b600c;
L_004b60ae:; BB(0x004b60ae);
    /* 004b60ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b60b1: call 0x4b25bc */ r_esp -= 4; W32(r_esp, 0x4b60b6u); f_004b25bc();
    /* 004b60b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b60b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b60ba: call 0x4b2533 */ r_esp -= 4; W32(r_esp, 0x4b60bfu); f_004b2533();
    /* 004b60bf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b60c2: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 004b60c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b60c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b60cc: call 0x4b2bc0 */ r_esp -= 4; W32(r_esp, 0x4b60d1u); f_004b2bc0();
    /* 004b60d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b60d4: mov edx, dword ptr [ecx + 0x114] */ r_edx = R32((u32)(r_ecx+0x114u));
    /* 004b60da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b60db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b60de: call 0x4b2bfe */ r_esp -= 4; W32(r_esp, 0x4b60e3u); f_004b2bfe();
    /* 004b60e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b60e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b60e8: call 0x4b5c96 */ r_esp -= 4; W32(r_esp, 0x4b60edu); f_004b5c96();
    /* 004b60ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b60f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b60f1: call dword ptr [0x6331f4] */ { u32 t = R32((u32)(0x6331f4u)); r_esp -= 4; W32(r_esp, 0x4b60f7u); call_ind(t); }
    /* 004b60f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b60f8: mov esp, ebp */ r_esp = r_ebp;
    /* 004b60fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b60fb: ret  */ FN_RET(0x004b5fc0); r_esp += 4; return;
}

void f_004b60fc(void) /* FUN_004b60fc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b60fc);
    /* 004b60fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b60fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004b60ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6100: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b6103: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b6106: mov eax, dword ptr [eax + 0x1b4] */ r_eax = R32((u32)(r_eax+0x1b4u));
    /* 004b610c: mov esp, ebp */ r_esp = r_ebp;
    /* 004b610e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b610f: ret  */ FN_RET(0x004b60fc); r_esp += 4; return;
}

void f_004b6110(void) /* FUN_004b6110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6110);
    /* 004b6110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6111: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b6117: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b611a: mov ecx, dword ptr [eax + 0x1b4] */ r_ecx = R32((u32)(r_eax+0x1b4u));
    /* 004b6120: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6121: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b6124: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 004b612a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b612d: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b6131: call 0x4d5c04 */ r_esp -= 4; W32(r_esp, 0x4b6136u); f_004d5c04();
    /* 004b6136: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b6139: call 0x4b5fc0 */ r_esp -= 4; W32(r_esp, 0x4b613eu); f_004b5fc0();
    /* 004b613e: mov esp, ebp */ r_esp = r_ebp;
    /* 004b6140: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6141: ret  */ FN_RET(0x004b6110); r_esp += 4; return;
}

void f_004b6142(void) /* FUN_004b6142 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6142);
    /* 004b6142: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6143: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6145: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b6148: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004b614b: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b614f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6152: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b6156: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b615bu); f_004d5baa();
    /* 004b615b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004b615e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b6165: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004b6168: mov word ptr [edx], 1 */ W16((u32)(r_edx), 0x1u);
    /* 004b616d: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004b6173: jmp 0x4b6181 */ goto L_004b6181;
L_004b6175:; BB(0x004b6175);
    /* 004b6175: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 004b6179: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b617d: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_004b6181:; BB(0x004b6181);
    /* 004b6181: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b6185: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b6188: jge 0x4b6200 */ if ((fS==fO)) goto L_004b6200;
L_004b618a:; BB(0x004b618a);
    /* 004b618a: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b618e: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b6192: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6194: jne 0x4b6198 */ if (!fZ) goto L_004b6198;
L_004b6196:; BB(0x004b6196);
    /* 004b6196: jmp 0x4b6175 */ goto L_004b6175;
L_004b6198:; BB(0x004b6198);
    /* 004b6198: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b619c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b619f: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b61a3: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b61a8u); f_004d5cdd();
    /* 004b61a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b61aa: jne 0x4b61ae */ if (!fZ) goto L_004b61ae;
L_004b61ac:; BB(0x004b61ac);
    /* 004b61ac: jmp 0x4b6175 */ goto L_004b6175;
L_004b61ae:; BB(0x004b61ae);
    /* 004b61ae: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b61b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b61b5: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b61b9: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b61beu); f_004d5baa();
    /* 004b61be: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b61c1: jle 0x4b61d6 */ if ((fZ||fS!=fO)) goto L_004b61d6;
L_004b61c3:; BB(0x004b61c3);
    /* 004b61c3: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b61c7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b61ca: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b61ce: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b61d3u); f_004d5baa();
    /* 004b61d3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004b61d6:; BB(0x004b61d6);
    /* 004b61d6: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b61da: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b61dd: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b61e1: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b61e6u); f_004d5baa();
    /* 004b61e6: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b61e9: jle 0x4b61fb */ if ((fZ||fS!=fO)) goto L_004b61fb;
L_004b61eb:; BB(0x004b61eb);
    /* 004b61eb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004b61ee: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 004b61f1: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b61f5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004b61f8: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
L_004b61fb:; BB(0x004b61fb);
    /* 004b61fb: jmp 0x4b6175 */ goto L_004b6175;
L_004b6200:; BB(0x004b6200);
    /* 004b6200: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004b6203: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b6206: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004b6209: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 004b620b: mov esp, ebp */ r_esp = r_ebp;
    /* 004b620d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b620e: ret 0xc */ FN_RET(0x004b6142); r_esp += 16; return;
}

void f_004b6211(void) /* FUN_004b6211 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6211);
    /* 004b6211: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6212: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6214: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b6217: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b6218: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004b621b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b621e: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 004b6223: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004b6229: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b622f: jmp 0x4b623d */ goto L_004b623d;
L_004b6231:; BB(0x004b6231);
    /* 004b6231: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004b6235: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b6239: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_004b623d:; BB(0x004b623d);
    /* 004b623d: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b6241: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b6244: jge 0x4b6288 */ if ((fS==fO)) goto L_004b6288;
L_004b6246:; BB(0x004b6246);
    /* 004b6246: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b624a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b624d: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b6251: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b6256u); f_004d5cdd();
    /* 004b6256: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6258: jne 0x4b625c */ if (!fZ) goto L_004b625c;
L_004b625a:; BB(0x004b625a);
    /* 004b625a: jmp 0x4b6231 */ goto L_004b6231;
L_004b625c:; BB(0x004b625c);
    /* 004b625c: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b6260: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6263: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b6267: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b626cu); f_004d5baa();
    /* 004b626c: mov esi, eax */ r_esi = r_eax;
    /* 004b626e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6271: call 0x4b389f */ r_esp -= 4; W32(r_esp, 0x4b6276u); f_004b389f();
    /* 004b6276: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b6278: jl 0x4b6286 */ if ((fS!=fO)) goto L_004b6286;
L_004b627a:; BB(0x004b627a);
    /* 004b627a: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 004b627e: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b6282: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
L_004b6286:; BB(0x004b6286);
    /* 004b6286: jmp 0x4b6231 */ goto L_004b6231;
L_004b6288:; BB(0x004b6288);
    /* 004b6288: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004b628c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b628f: jl 0x4b62ad */ if ((fS!=fO)) goto L_004b62ad;
L_004b6291:; BB(0x004b6291);
    /* 004b6291: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6294: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6297: mov edx, dword ptr [eax + 0x1ac] */ r_edx = R32((u32)(r_eax+0x1acu));
    /* 004b629d: cmp edx, dword ptr [ecx + 0x1b0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1b0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b62a3: jge 0x4b62ad */ if ((fS==fO)) goto L_004b62ad;
L_004b62a5:; BB(0x004b62a5);
    /* 004b62a5: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b62a8: jmp 0x4b6399 */ goto L_004b6399;
L_004b62ad:; BB(0x004b62ad);
    /* 004b62ad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004b62b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b62b7: mov dword ptr [eax + 0x198], 0xffffffff */ W32((u32)(r_eax+0x198u), 0xffffffffu);
    /* 004b62c1: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b62c7: jmp 0x4b62d5 */ goto L_004b62d5;
L_004b62c9:; BB(0x004b62c9);
    /* 004b62c9: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004b62cd: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b62d1: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_004b62d5:; BB(0x004b62d5);
    /* 004b62d5: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b62d9: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b62dc: jge 0x4b6352 */ if ((fS==fO)) goto L_004b6352;
L_004b62de:; BB(0x004b62de);
    /* 004b62de: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b62e2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b62e5: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004b62e9: call 0x4d5cdd */ r_esp -= 4; W32(r_esp, 0x4b62eeu); f_004d5cdd();
    /* 004b62ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b62f0: jne 0x4b62f4 */ if (!fZ) goto L_004b62f4;
L_004b62f2:; BB(0x004b62f2);
    /* 004b62f2: jmp 0x4b62c9 */ goto L_004b62c9;
L_004b62f4:; BB(0x004b62f4);
    /* 004b62f4: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b62f8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b62fb: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b62ff: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b6304u); f_004d5baa();
    /* 004b6304: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b6307: jle 0x4b632b */ if ((fZ||fS!=fO)) goto L_004b632b;
L_004b6309:; BB(0x004b6309);
    /* 004b6309: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b630d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6310: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b6314: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b6319u); f_004d5baa();
    /* 004b6319: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004b631c: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b6320: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6323: mov dword ptr [ecx + 0x198], eax */ W32((u32)(r_ecx+0x198u), r_eax);
    /* 004b6329: jmp 0x4b634d */ goto L_004b634d;
L_004b632b:; BB(0x004b632b);
    /* 004b632b: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b632f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6332: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 004b6336: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b633bu); f_004d5baa();
    /* 004b633b: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b633e: jne 0x4b634d */ if (!fZ) goto L_004b634d;
L_004b6340:; BB(0x004b6340);
    /* 004b6340: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6343: mov dword ptr [ecx + 0x198], 0xfffffffe */ W32((u32)(r_ecx+0x198u), 0xfffffffeu);
L_004b634d:; BB(0x004b634d);
    /* 004b634d: jmp 0x4b62c9 */ goto L_004b62c9;
L_004b6352:; BB(0x004b6352);
    /* 004b6352: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6355: cmp dword ptr [edx + 0x198], 0 */ {  u32 a = R32((u32)(r_edx+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b635c: jl 0x4b6390 */ if ((fS!=fO)) goto L_004b6390;
L_004b635e:; BB(0x004b635e);
    /* 004b635e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6361: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 004b6367: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6368: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b636b: call 0x4b59b5 */ r_esp -= 4; W32(r_esp, 0x4b6370u); f_004b59b5();
    /* 004b6370: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b6373: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004b6376: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6379: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 004b637f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6382: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004b6386: call 0x4d5baa */ r_esp -= 4; W32(r_esp, 0x4b638bu); f_004d5baa();
    /* 004b638b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004b638e: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_004b6390:; BB(0x004b6390);
    /* 004b6390: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004b6393: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
L_004b6399:; BB(0x004b6399);
    /* 004b6399: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b639a: mov esp, ebp */ r_esp = r_ebp;
    /* 004b639c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b639d: ret 8 */ FN_RET(0x004b6211); r_esp += 12; return;
}

void f_004b63a0(void) /* FUN_004b63a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b63a0);
    /* 004b63a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b63a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b63a3: sub esp, 0x1b0 */ {  u32 a = r_esp; u32 b = 0x1b0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b63a9: mov dword ptr [ebp - 0x1b0], ecx */ W32((u32)(r_ebp+0xfffffe50u), r_ecx);
    /* 004b63af: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 004b63b5: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004b63b9: mov word ptr [eax + 0x1a4], cx */ W16((u32)(r_eax+0x1a4u), (u16)r_ecx);
    /* 004b63c0: mov edx, dword ptr [ebp - 0x1b0] */ r_edx = R32((u32)(r_ebp+0xfffffe50u));
    /* 004b63c6: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004b63ca: mov word ptr [edx + 0x1a6], ax */ W16((u32)(r_edx+0x1a6u), (u16)r_eax);
    /* 004b63d1: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b63d7: jmp 0x4b63e5 */ goto L_004b63e5;
L_004b63d9:; BB(0x004b63d9);
    /* 004b63d9: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b63dd: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b63e1: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004b63e5:; BB(0x004b63e5);
    /* 004b63e5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b63e9: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b63ec: jge 0x4b64b4 */ if ((fS==fO)) goto L_004b64b4;
L_004b63f2:; BB(0x004b63f2);
    /* 004b63f2: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b63f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b63f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b63fa: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004b63fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b63ff: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b6403: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6404: push 0x6915f8 */ { u32 v = 0x6915f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6409: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 004b640f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6410: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b6416u); call_ind(t); }
    /* 004b6416: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b6419: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b641b: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 004b6421: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6422: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 004b6428: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004b642b: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x4b6430u); f_0061ba62();
    /* 004b6430: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
    /* 004b6436: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b643a: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004b643d: lea ecx, [ebp + eax - 0xa0] */ r_ecx = (u32)(r_ebp+r_eax+0xffffff60u);
    /* 004b6444: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6445: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 004b644b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b644c: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x4b6451u); f_0060fb42();
    /* 004b6451: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b6454: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b6458: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b645b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b645c: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004b6460: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6461: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b6465: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6466: push 0x691610 */ { u32 v = 0x691610u; r_esp -= 4; W32(r_esp, v); }
    /* 004b646b: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 004b6471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6472: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b6478u); call_ind(t); }
    /* 004b6478: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b647b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004b647d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b6481: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004b6484: lea edx, [ebp + ecx - 0x174] */ r_edx = (u32)(r_ebp+r_ecx+0xfffffe8cu);
    /* 004b648b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b648c: push 0x691628 */ { u32 v = 0x691628u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6491: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 004b6497: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6498: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 004b649e: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 004b64a1: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 004b64a7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b64aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004b64ac: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x4b64afu); call_ind(t); }
    /* 004b64af: jmp 0x4b63d9 */ goto L_004b63d9;
L_004b64b4:; BB(0x004b64b4);
    /* 004b64b4: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004b64b8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b64bb: jne 0x4b64c6 */ if (!fZ) goto L_004b64c6;
L_004b64bd:; BB(0x004b64bd);
    /* 004b64bd: mov dword ptr [ebp - 0x3c], 0x3e8 */ W32((u32)(r_ebp+0xffffffc4u), 0x3e8u);
    /* 004b64c4: jmp 0x4b6515 */ goto L_004b6515;
L_004b64c6:; BB(0x004b64c6);
    /* 004b64c6: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004b64ca: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b64cd: jne 0x4b64d8 */ if (!fZ) goto L_004b64d8;
L_004b64cf:; BB(0x004b64cf);
    /* 004b64cf: mov dword ptr [ebp - 0x3c], 0x1388 */ W32((u32)(r_ebp+0xffffffc4u), 0x1388u);
    /* 004b64d6: jmp 0x4b6515 */ goto L_004b6515;
L_004b64d8:; BB(0x004b64d8);
    /* 004b64d8: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004b64dc: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b64df: jne 0x4b64ea */ if (!fZ) goto L_004b64ea;
L_004b64e1:; BB(0x004b64e1);
    /* 004b64e1: mov dword ptr [ebp - 0x3c], 0x61a8 */ W32((u32)(r_ebp+0xffffffc4u), 0x61a8u);
    /* 004b64e8: jmp 0x4b6515 */ goto L_004b6515;
L_004b64ea:; BB(0x004b64ea);
    /* 004b64ea: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004b64ee: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b64f1: jne 0x4b64fc */ if (!fZ) goto L_004b64fc;
L_004b64f3:; BB(0x004b64f3);
    /* 004b64f3: mov dword ptr [ebp - 0x3c], 0xc350 */ W32((u32)(r_ebp+0xffffffc4u), 0xc350u);
    /* 004b64fa: jmp 0x4b6515 */ goto L_004b6515;
L_004b64fc:; BB(0x004b64fc);
    /* 004b64fc: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004b6500: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6503: jne 0x4b650e */ if (!fZ) goto L_004b650e;
L_004b6505:; BB(0x004b6505);
    /* 004b6505: mov dword ptr [ebp - 0x3c], 0x186a0 */ W32((u32)(r_ebp+0xffffffc4u), 0x186a0u);
    /* 004b650c: jmp 0x4b6515 */ goto L_004b6515;
L_004b650e:; BB(0x004b650e);
    /* 004b650e: mov dword ptr [ebp - 0x3c], 0x7a120 */ W32((u32)(r_ebp+0xffffffc4u), 0x7a120u);
L_004b6515:; BB(0x004b6515);
    /* 004b6515: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004b6518: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6519: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004b651c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b651d: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x4b6522u); f_0060fb42();
    /* 004b6522: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b6525: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004b6528: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6529: push 0x691630 */ { u32 v = 0x691630u; r_esp -= 4; W32(r_esp, v); }
    /* 004b652e: lea edx, [ebp - 0x1a8] */ r_edx = (u32)(r_ebp+0xfffffe58u);
    /* 004b6534: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6535: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b653bu); call_ind(t); }
    /* 004b653b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b653e: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b6542: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6545: jne 0x4b6561 */ if (!fZ) goto L_004b6561;
L_004b6547:; BB(0x004b6547);
    /* 004b6547: push 0x691640 */ { u32 v = 0x691640u; r_esp -= 4; W32(r_esp, v); }
    /* 004b654c: lea ecx, [ebp - 0x138] */ r_ecx = (u32)(r_ebp+0xfffffec8u);
    /* 004b6552: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6553: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b6559u); call_ind(t); }
    /* 004b6559: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b655c: jmp 0x4b668b */ goto L_004b668b;
L_004b6561:; BB(0x004b6561);
    /* 004b6561: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b6565: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6568: jne 0x4b6584 */ if (!fZ) goto L_004b6584;
L_004b656a:; BB(0x004b656a);
    /* 004b656a: push 0x691650 */ { u32 v = 0x691650u; r_esp -= 4; W32(r_esp, v); }
    /* 004b656f: lea eax, [ebp - 0x138] */ r_eax = (u32)(r_ebp+0xfffffec8u);
    /* 004b6575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6576: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b657cu); call_ind(t); }
    /* 004b657c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b657f: jmp 0x4b668b */ goto L_004b668b;
L_004b6584:; BB(0x004b6584);
    /* 004b6584: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b6588: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b658b: jne 0x4b65a7 */ if (!fZ) goto L_004b65a7;
L_004b658d:; BB(0x004b658d);
    /* 004b658d: push 0x691660 */ { u32 v = 0x691660u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6592: lea edx, [ebp - 0x138] */ r_edx = (u32)(r_ebp+0xfffffec8u);
    /* 004b6598: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6599: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b659fu); call_ind(t); }
    /* 004b659f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b65a2: jmp 0x4b668b */ goto L_004b668b;
L_004b65a7:; BB(0x004b65a7);
    /* 004b65a7: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b65ab: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b65ae: jne 0x4b65ca */ if (!fZ) goto L_004b65ca;
L_004b65b0:; BB(0x004b65b0);
    /* 004b65b0: push 0x691674 */ { u32 v = 0x691674u; r_esp -= 4; W32(r_esp, v); }
    /* 004b65b5: lea ecx, [ebp - 0x138] */ r_ecx = (u32)(r_ebp+0xfffffec8u);
    /* 004b65bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b65bc: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b65c2u); call_ind(t); }
    /* 004b65c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b65c5: jmp 0x4b668b */ goto L_004b668b;
L_004b65ca:; BB(0x004b65ca);
    /* 004b65ca: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b65ce: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b65d1: jne 0x4b65ed */ if (!fZ) goto L_004b65ed;
L_004b65d3:; BB(0x004b65d3);
    /* 004b65d3: push 0x691680 */ { u32 v = 0x691680u; r_esp -= 4; W32(r_esp, v); }
    /* 004b65d8: lea eax, [ebp - 0x138] */ r_eax = (u32)(r_ebp+0xfffffec8u);
    /* 004b65de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b65df: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b65e5u); call_ind(t); }
    /* 004b65e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b65e8: jmp 0x4b668b */ goto L_004b668b;
L_004b65ed:; BB(0x004b65ed);
    /* 004b65ed: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b65f1: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b65f4: jne 0x4b660d */ if (!fZ) goto L_004b660d;
L_004b65f6:; BB(0x004b65f6);
    /* 004b65f6: push 0x691694 */ { u32 v = 0x691694u; r_esp -= 4; W32(r_esp, v); }
    /* 004b65fb: lea edx, [ebp - 0x138] */ r_edx = (u32)(r_ebp+0xfffffec8u);
    /* 004b6601: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6602: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b6608u); call_ind(t); }
    /* 004b6608: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b660b: jmp 0x4b668b */ goto L_004b668b;
L_004b660d:; BB(0x004b660d);
    /* 004b660d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b6611: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6614: jne 0x4b662d */ if (!fZ) goto L_004b662d;
L_004b6616:; BB(0x004b6616);
    /* 004b6616: push 0x6916a0 */ { u32 v = 0x6916a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b661b: lea ecx, [ebp - 0x138] */ r_ecx = (u32)(r_ebp+0xfffffec8u);
    /* 004b6621: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6622: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b6628u); call_ind(t); }
    /* 004b6628: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b662b: jmp 0x4b668b */ goto L_004b668b;
L_004b662d:; BB(0x004b662d);
    /* 004b662d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b6631: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6634: jne 0x4b664d */ if (!fZ) goto L_004b664d;
L_004b6636:; BB(0x004b6636);
    /* 004b6636: push 0x6916ac */ { u32 v = 0x6916acu; r_esp -= 4; W32(r_esp, v); }
    /* 004b663b: lea eax, [ebp - 0x138] */ r_eax = (u32)(r_ebp+0xfffffec8u);
    /* 004b6641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6642: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b6648u); call_ind(t); }
    /* 004b6648: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b664b: jmp 0x4b668b */ goto L_004b668b;
L_004b664d:; BB(0x004b664d);
    /* 004b664d: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b6651: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6654: jne 0x4b666d */ if (!fZ) goto L_004b666d;
L_004b6656:; BB(0x004b6656);
    /* 004b6656: push 0x6916b8 */ { u32 v = 0x6916b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b665b: lea edx, [ebp - 0x138] */ r_edx = (u32)(r_ebp+0xfffffec8u);
    /* 004b6661: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6662: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b6668u); call_ind(t); }
    /* 004b6668: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b666b: jmp 0x4b668b */ goto L_004b668b;
L_004b666d:; BB(0x004b666d);
    /* 004b666d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004b6671: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6674: jne 0x4b668b */ if (!fZ) goto L_004b668b;
L_004b6676:; BB(0x004b6676);
    /* 004b6676: push 0x6916c0 */ { u32 v = 0x6916c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b667b: lea ecx, [ebp - 0x138] */ r_ecx = (u32)(r_ebp+0xfffffec8u);
    /* 004b6681: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6682: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x4b6688u); call_ind(t); }
    /* 004b6688: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b668b:; BB(0x004b668b);
    /* 004b668b: mov esp, ebp */ r_esp = r_ebp;
    /* 004b668d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b668e: ret 8 */ FN_RET(0x004b63a0); r_esp += 12; return;
}

void f_004b6691(void) /* FUN_004b6691 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6691);
    /* 004b6691: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6692: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6694: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6695: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b6698: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b669b: mov eax, dword ptr [eax + 0x110] */ r_eax = R32((u32)(r_eax+0x110u));
    /* 004b66a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004b66a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b66a4: ret  */ FN_RET(0x004b6691); r_esp += 4; return;
}

void f_004b66b0(void) /* FUN_004b66b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b66b0);
    /* 004b66b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b66b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b66b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b66b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b66b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b66ba: call 0x4afbda */ r_esp -= 4; W32(r_esp, 0x4b66bfu); f_004afbda();
    /* 004b66bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b66c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b66c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b66c7: je 0x4b66d5 */ if (fZ) goto L_004b66d5;
L_004b66c9:; BB(0x004b66c9);
    /* 004b66c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b66cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b66cd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4b66d2u); f_0048ac1b();
    /* 004b66d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b66d5:; BB(0x004b66d5);
    /* 004b66d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b66d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004b66da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b66db: ret 4 */ FN_RET(0x004b66b0); r_esp += 8; return;
}

void f_004b66e0(void) /* FUN_004b66e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b66e0);
    /* 004b66e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b66e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b66e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b66e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b66e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b66ea: call 0x4b1d16 */ r_esp -= 4; W32(r_esp, 0x4b66efu); f_004b1d16();
    /* 004b66ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b66f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b66f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b66f7: je 0x4b6705 */ if (fZ) goto L_004b6705;
L_004b66f9:; BB(0x004b66f9);
    /* 004b66f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b66fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b66fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4b6702u); f_0048ac1b();
    /* 004b6702: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b6705:; BB(0x004b6705);
    /* 004b6705: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b6708: mov esp, ebp */ r_esp = r_ebp;
    /* 004b670a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b670b: ret 4 */ FN_RET(0x004b66e0); r_esp += 8; return;
}

void f_004b6710(void) /* FUN_004b6710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6710);
    /* 004b6710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6711: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b6717: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b671a: call 0x4b4661 */ r_esp -= 4; W32(r_esp, 0x4b671fu); f_004b4661();
    /* 004b671f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b6722: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b6725: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6727: je 0x4b6735 */ if (fZ) goto L_004b6735;
L_004b6729:; BB(0x004b6729);
    /* 004b6729: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b672c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b672d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4b6732u); f_0048ac1b();
    /* 004b6732: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b6735:; BB(0x004b6735);
    /* 004b6735: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b6738: mov esp, ebp */ r_esp = r_ebp;
    /* 004b673a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b673b: ret 4 */ FN_RET(0x004b6710); r_esp += 8; return;
}

void f_004b6740(void) /* FUN_004b6740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6740);
    /* 004b6740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6741: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004b6747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b674a: call 0x4b475d */ r_esp -= 4; W32(r_esp, 0x4b674fu); f_004b475d();
    /* 004b674f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b6752: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b6755: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6757: je 0x4b6765 */ if (fZ) goto L_004b6765;
L_004b6759:; BB(0x004b6759);
    /* 004b6759: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b675c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b675d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x4b6762u); f_0048ac1b();
    /* 004b6762: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b6765:; BB(0x004b6765);
    /* 004b6765: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b6768: mov esp, ebp */ r_esp = r_ebp;
    /* 004b676a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b676b: ret 4 */ FN_RET(0x004b6740); r_esp += 8; return;
}

void f_004b6770(void) /* FUN_004b6770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6770);
    /* 004b6770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6771: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6773: call 0x4b677a */ r_esp -= 4; W32(r_esp, 0x4b6778u); f_004b677a();
    /* 004b6778: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6779: ret  */ FN_RET(0x004b6770); r_esp += 4; return;
}

void f_004b677a(void) /* FUN_004b677a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b677a);
    /* 004b677a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b677b: mov ebp, esp */ r_ebp = r_esp;
    /* 004b677d: mov byte ptr [0x6f93c4], 0xe */ W8((u32)(0x6f93c4u), 0xeu);
    /* 004b6784: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6785: ret  */ FN_RET(0x004b677a); r_esp += 4; return;
}

void f_004b6786(void) /* FUN_004b6786 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6786);
    /* 004b6786: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6787: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6789: call 0x4b6790 */ r_esp -= 4; W32(r_esp, 0x4b678eu); f_004b6790();
    /* 004b678e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b678f: ret  */ FN_RET(0x004b6786); r_esp += 4; return;
}

void f_004b6790(void) /* FUN_004b6790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6790);
    /* 004b6790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6791: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6793: mov byte ptr [0x6f9364], 0xd */ W8((u32)(0x6f9364u), 0xdu);
    /* 004b679a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b679b: ret  */ FN_RET(0x004b6790); r_esp += 4; return;
}

void f_004b679c(void) /* FUN_004b679c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b679c);
    /* 004b679c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b679d: mov ebp, esp */ r_ebp = r_esp;
    /* 004b679f: call 0x4b67a6 */ r_esp -= 4; W32(r_esp, 0x4b67a4u); f_004b67a6();
    /* 004b67a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67a5: ret  */ FN_RET(0x004b679c); r_esp += 4; return;
}

void f_004b67a6(void) /* FUN_004b67a6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b67a6);
    /* 004b67a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b67a7: mov ebp, esp */ r_ebp = r_esp;
    /* 004b67a9: mov byte ptr [0x6f937c], 0xc */ W8((u32)(0x6f937cu), 0xcu);
    /* 004b67b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67b1: ret  */ FN_RET(0x004b67a6); r_esp += 4; return;
}

void f_004b67b2(void) /* FUN_004b67b2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b67b2);
    /* 004b67b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b67b3: mov ebp, esp */ r_ebp = r_esp;
    /* 004b67b5: call 0x4b67bc */ r_esp -= 4; W32(r_esp, 0x4b67bau); f_004b67bc();
    /* 004b67ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67bb: ret  */ FN_RET(0x004b67b2); r_esp += 4; return;
}

void f_004b67bc(void) /* FUN_004b67bc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b67bc);
    /* 004b67bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b67bd: mov ebp, esp */ r_ebp = r_esp;
    /* 004b67bf: mov byte ptr [0x6f93d0], 0xb */ W8((u32)(0x6f93d0u), 0xbu);
    /* 004b67c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67c7: ret  */ FN_RET(0x004b67bc); r_esp += 4; return;
}

void f_004b67c8(void) /* FUN_004b67c8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b67c8);
    /* 004b67c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b67c9: mov ebp, esp */ r_ebp = r_esp;
    /* 004b67cb: call 0x4b67d2 */ r_esp -= 4; W32(r_esp, 0x4b67d0u); f_004b67d2();
    /* 004b67d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67d1: ret  */ FN_RET(0x004b67c8); r_esp += 4; return;
}

void f_004b67d2(void) /* FUN_004b67d2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b67d2);
    /* 004b67d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b67d3: mov ebp, esp */ r_ebp = r_esp;
    /* 004b67d5: mov byte ptr [0x6f93c0], 0xa */ W8((u32)(0x6f93c0u), 0xau);
    /* 004b67dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67dd: ret  */ FN_RET(0x004b67d2); r_esp += 4; return;
}

void f_004b67de(void) /* FUN_004b67de */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b67de);
    /* 004b67de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b67df: mov ebp, esp */ r_ebp = r_esp;
    /* 004b67e1: call 0x4b67e8 */ r_esp -= 4; W32(r_esp, 0x4b67e6u); f_004b67e8();
    /* 004b67e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e7: ret  */ FN_RET(0x004b67de); r_esp += 4; return;
}

void f_004b67e8(void) /* FUN_004b67e8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b67e8);
    /* 004b67e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b67e9: mov ebp, esp */ r_ebp = r_esp;
    /* 004b67eb: mov byte ptr [0x6f92f0], 9 */ W8((u32)(0x6f92f0u), 0x9u);
    /* 004b67f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67f3: ret  */ FN_RET(0x004b67e8); r_esp += 4; return;
}

void f_004b67f4(void) /* FUN_004b67f4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b67f4);
    /* 004b67f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b67f5: mov ebp, esp */ r_ebp = r_esp;
    /* 004b67f7: call 0x4b67fe */ r_esp -= 4; W32(r_esp, 0x4b67fcu); f_004b67fe();
    /* 004b67fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67fd: ret  */ FN_RET(0x004b67f4); r_esp += 4; return;
}

void f_004b67fe(void) /* FUN_004b67fe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b67fe);
    /* 004b67fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b67ff: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6801: mov byte ptr [0x6f93e4], 8 */ W8((u32)(0x6f93e4u), 0x8u);
    /* 004b6808: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6809: ret  */ FN_RET(0x004b67fe); r_esp += 4; return;
}

void f_004b680a(void) /* FUN_004b680a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b680a);
    /* 004b680a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b680b: mov ebp, esp */ r_ebp = r_esp;
    /* 004b680d: call 0x4b6814 */ r_esp -= 4; W32(r_esp, 0x4b6812u); f_004b6814();
    /* 004b6812: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6813: ret  */ FN_RET(0x004b680a); r_esp += 4; return;
}

void f_004b6814(void) /* FUN_004b6814 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6814);
    /* 004b6814: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6815: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6817: mov byte ptr [0x6f93b0], 7 */ W8((u32)(0x6f93b0u), 0x7u);
    /* 004b681e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b681f: ret  */ FN_RET(0x004b6814); r_esp += 4; return;
}

void f_004b6820(void) /* FUN_004b6820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6820);
    /* 004b6820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6821: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6823: call 0x4b682a */ r_esp -= 4; W32(r_esp, 0x4b6828u); f_004b682a();
    /* 004b6828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6829: ret  */ FN_RET(0x004b6820); r_esp += 4; return;
}

void f_004b682a(void) /* FUN_004b682a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b682a);
    /* 004b682a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b682b: mov ebp, esp */ r_ebp = r_esp;
    /* 004b682d: mov byte ptr [0x6f92c0], 6 */ W8((u32)(0x6f92c0u), 0x6u);
    /* 004b6834: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6835: ret  */ FN_RET(0x004b682a); r_esp += 4; return;
}

void f_004b6836(void) /* FUN_004b6836 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6836);
    /* 004b6836: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6837: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6839: call 0x4b6840 */ r_esp -= 4; W32(r_esp, 0x4b683eu); f_004b6840();
    /* 004b683e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b683f: ret  */ FN_RET(0x004b6836); r_esp += 4; return;
}

void f_004b6840(void) /* FUN_004b6840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6840);
    /* 004b6840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6841: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6843: mov byte ptr [0x6f9268], 5 */ W8((u32)(0x6f9268u), 0x5u);
    /* 004b684a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b684b: ret  */ FN_RET(0x004b6840); r_esp += 4; return;
}

void f_004b684c(void) /* FUN_004b684c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b684c);
    /* 004b684c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b684d: mov ebp, esp */ r_ebp = r_esp;
    /* 004b684f: call 0x4b6856 */ r_esp -= 4; W32(r_esp, 0x4b6854u); f_004b6856();
    /* 004b6854: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6855: ret  */ FN_RET(0x004b684c); r_esp += 4; return;
}

void f_004b6856(void) /* FUN_004b6856 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6856);
    /* 004b6856: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6857: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6859: mov byte ptr [0x6f9258], 4 */ W8((u32)(0x6f9258u), 0x4u);
    /* 004b6860: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6861: ret  */ FN_RET(0x004b6856); r_esp += 4; return;
}

void f_004b6862(void) /* FUN_004b6862 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6862);
    /* 004b6862: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6863: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6865: call 0x4b686c */ r_esp -= 4; W32(r_esp, 0x4b686au); f_004b686c();
    /* 004b686a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b686b: ret  */ FN_RET(0x004b6862); r_esp += 4; return;
}

void f_004b686c(void) /* FUN_004b686c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b686c);
    /* 004b686c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b686d: mov ebp, esp */ r_ebp = r_esp;
    /* 004b686f: mov byte ptr [0x6f9254], 3 */ W8((u32)(0x6f9254u), 0x3u);
    /* 004b6876: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6877: ret  */ FN_RET(0x004b686c); r_esp += 4; return;
}

void f_004b6878(void) /* FUN_004b6878 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6878);
    /* 004b6878: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6879: mov ebp, esp */ r_ebp = r_esp;
    /* 004b687b: call 0x4b6882 */ r_esp -= 4; W32(r_esp, 0x4b6880u); f_004b6882();
    /* 004b6880: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6881: ret  */ FN_RET(0x004b6878); r_esp += 4; return;
}

void f_004b6882(void) /* FUN_004b6882 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6882);
    /* 004b6882: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6883: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6885: mov byte ptr [0x6f9380], 2 */ W8((u32)(0x6f9380u), 0x2u);
    /* 004b688c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b688d: ret  */ FN_RET(0x004b6882); r_esp += 4; return;
}

void f_004b688e(void) /* FUN_004b688e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b688e);
    /* 004b688e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b688f: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6891: call 0x4b6898 */ r_esp -= 4; W32(r_esp, 0x4b6896u); f_004b6898();
    /* 004b6896: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6897: ret  */ FN_RET(0x004b688e); r_esp += 4; return;
}

void f_004b6898(void) /* FUN_004b6898 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6898);
    /* 004b6898: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6899: mov ebp, esp */ r_ebp = r_esp;
    /* 004b689b: mov byte ptr [0x6f92b8], 1 */ W8((u32)(0x6f92b8u), 0x1u);
    /* 004b68a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b68a3: ret  */ FN_RET(0x004b6898); r_esp += 4; return;
}

void f_004b68a4(void) /* FUN_004b68a4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b68a4);
    /* 004b68a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b68a5: mov ebp, esp */ r_ebp = r_esp;
    /* 004b68a7: call 0x4b68ae */ r_esp -= 4; W32(r_esp, 0x4b68acu); f_004b68ae();
    /* 004b68ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b68ad: ret  */ FN_RET(0x004b68a4); r_esp += 4; return;
}

void f_004b68ae(void) /* FUN_004b68ae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b68ae);
    /* 004b68ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b68af: mov ebp, esp */ r_ebp = r_esp;
    /* 004b68b1: mov byte ptr [0x6f93f0], 0 */ W8((u32)(0x6f93f0u), 0x0u);
    /* 004b68b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b68b9: ret  */ FN_RET(0x004b68ae); r_esp += 4; return;
}

void f_004b68ba(void) /* FUN_004b68ba */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b68ba);
    /* 004b68ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b68bb: mov ebp, esp */ r_ebp = r_esp;
    /* 004b68bd: call 0x4b68c4 */ r_esp -= 4; W32(r_esp, 0x4b68c2u); f_004b68c4();
    /* 004b68c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b68c3: ret  */ FN_RET(0x004b68ba); r_esp += 4; return;
}

void f_004b68c4(void) /* FUN_004b68c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b68c4);
    /* 004b68c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b68c5: mov ebp, esp */ r_ebp = r_esp;
    /* 004b68c7: mov byte ptr [0x6f9318], 0x60 */ W8((u32)(0x6f9318u), 0x60u);
    /* 004b68ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b68cf: ret  */ FN_RET(0x004b68c4); r_esp += 4; return;
}

void f_004b68d0(void) /* FUN_004b68d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b68d0);
    /* 004b68d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b68d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b68d3: call 0x4b68da */ r_esp -= 4; W32(r_esp, 0x4b68d8u); f_004b68da();
    /* 004b68d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b68d9: ret  */ FN_RET(0x004b68d0); r_esp += 4; return;
}

void f_004b68da(void) /* FUN_004b68da */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b68da);
    /* 004b68da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b68db: mov ebp, esp */ r_ebp = r_esp;
    /* 004b68dd: mov byte ptr [0x6f935c], 0x50 */ W8((u32)(0x6f935cu), 0x50u);
    /* 004b68e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b68e5: ret  */ FN_RET(0x004b68da); r_esp += 4; return;
}

void f_004b68e6(void) /* FUN_004b68e6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b68e6);
    /* 004b68e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b68e7: mov ebp, esp */ r_ebp = r_esp;
    /* 004b68e9: call 0x4b68f0 */ r_esp -= 4; W32(r_esp, 0x4b68eeu); f_004b68f0();
    /* 004b68ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b68ef: ret  */ FN_RET(0x004b68e6); r_esp += 4; return;
}

void f_004b68f0(void) /* FUN_004b68f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b68f0);
    /* 004b68f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b68f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b68f3: mov byte ptr [0x6f92a0], 0x40 */ W8((u32)(0x6f92a0u), 0x40u);
    /* 004b68fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b68fb: ret  */ FN_RET(0x004b68f0); r_esp += 4; return;
}

void f_004b68fc(void) /* FUN_004b68fc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b68fc);
    /* 004b68fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b68fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004b68ff: call 0x4b6906 */ r_esp -= 4; W32(r_esp, 0x4b6904u); f_004b6906();
    /* 004b6904: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6905: ret  */ FN_RET(0x004b68fc); r_esp += 4; return;
}

void f_004b6906(void) /* FUN_004b6906 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6906);
    /* 004b6906: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6907: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6909: mov byte ptr [0x6f93bc], 0x30 */ W8((u32)(0x6f93bcu), 0x30u);
    /* 004b6910: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6911: ret  */ FN_RET(0x004b6906); r_esp += 4; return;
}

void f_004b6912(void) /* FUN_004b6912 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6912);
    /* 004b6912: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6913: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6915: call 0x4b691c */ r_esp -= 4; W32(r_esp, 0x4b691au); f_004b691c();
    /* 004b691a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b691b: ret  */ FN_RET(0x004b6912); r_esp += 4; return;
}

void f_004b691c(void) /* FUN_004b691c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b691c);
    /* 004b691c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b691d: mov ebp, esp */ r_ebp = r_esp;
    /* 004b691f: mov byte ptr [0x6f9384], 0x20 */ W8((u32)(0x6f9384u), 0x20u);
    /* 004b6926: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6927: ret  */ FN_RET(0x004b691c); r_esp += 4; return;
}

void f_004b6928(void) /* FUN_004b6928 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6928);
    /* 004b6928: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6929: mov ebp, esp */ r_ebp = r_esp;
    /* 004b692b: call 0x4b6932 */ r_esp -= 4; W32(r_esp, 0x4b6930u); f_004b6932();
    /* 004b6930: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6931: ret  */ FN_RET(0x004b6928); r_esp += 4; return;
}

void f_004b6932(void) /* FUN_004b6932 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6932);
    /* 004b6932: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6933: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6935: mov byte ptr [0x6f92cc], 0x10 */ W8((u32)(0x6f92ccu), 0x10u);
    /* 004b693c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b693d: ret  */ FN_RET(0x004b6932); r_esp += 4; return;
}

void f_004b693e(void) /* FUN_004b693e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b693e);
    /* 004b693e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b693f: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6941: call 0x4b6948 */ r_esp -= 4; W32(r_esp, 0x4b6946u); f_004b6948();
    /* 004b6946: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6947: ret  */ FN_RET(0x004b693e); r_esp += 4; return;
}

void f_004b6948(void) /* FUN_004b6948 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6948);
    /* 004b6948: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6949: mov ebp, esp */ r_ebp = r_esp;
    /* 004b694b: mov dword ptr [0x6f9328], 0x6f93c4 */ W32((u32)(0x6f9328u), 0x6f93c4u);
    /* 004b6955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6956: ret  */ FN_RET(0x004b6948); r_esp += 4; return;
}

void f_004b6957(void) /* FUN_004b6957 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6957);
    /* 004b6957: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6958: mov ebp, esp */ r_ebp = r_esp;
    /* 004b695a: call 0x4b6961 */ r_esp -= 4; W32(r_esp, 0x4b695fu); f_004b6961();
    /* 004b695f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6960: ret  */ FN_RET(0x004b6957); r_esp += 4; return;
}

void f_004b6961(void) /* FUN_004b6961 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6961);
    /* 004b6961: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6962: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6964: mov dword ptr [0x6f926c], 0x6f9364 */ W32((u32)(0x6f926cu), 0x6f9364u);
    /* 004b696e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b696f: ret  */ FN_RET(0x004b6961); r_esp += 4; return;
}

void f_004b6970(void) /* FUN_004b6970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6970);
    /* 004b6970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6971: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6973: call 0x4b697a */ r_esp -= 4; W32(r_esp, 0x4b6978u); f_004b697a();
    /* 004b6978: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6979: ret  */ FN_RET(0x004b6970); r_esp += 4; return;
}

void f_004b697a(void) /* FUN_004b697a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b697a);
    /* 004b697a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b697b: mov ebp, esp */ r_ebp = r_esp;
    /* 004b697d: mov dword ptr [0x6f9324], 0x6f937c */ W32((u32)(0x6f9324u), 0x6f937cu);
    /* 004b6987: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6988: ret  */ FN_RET(0x004b697a); r_esp += 4; return;
}

void f_004b6989(void) /* FUN_004b6989 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6989);
    /* 004b6989: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b698a: mov ebp, esp */ r_ebp = r_esp;
    /* 004b698c: call 0x4b6993 */ r_esp -= 4; W32(r_esp, 0x4b6991u); f_004b6993();
    /* 004b6991: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6992: ret  */ FN_RET(0x004b6989); r_esp += 4; return;
}

void f_004b6993(void) /* FUN_004b6993 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b6993);
    /* 004b6993: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6994: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6996: mov dword ptr [0x6f93ec], 0x6f93d0 */ W32((u32)(0x6f93ecu), 0x6f93d0u);
    /* 004b69a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b69a1: ret  */ FN_RET(0x004b6993); r_esp += 4; return;
}

void f_004b69a2(void) /* FUN_004b69a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b69a2);
    /* 004b69a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b69a3: mov ebp, esp */ r_ebp = r_esp;
    /* 004b69a5: call 0x4b69ac */ r_esp -= 4; W32(r_esp, 0x4b69aau); f_004b69ac();
    /* 004b69aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b69ab: ret  */ FN_RET(0x004b69a2); r_esp += 4; return;
}

void f_004b69ac(void) /* FUN_004b69ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b69ac);
    /* 004b69ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b69ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004b69af: mov dword ptr [0x6f92ec], 0x6f93c0 */ W32((u32)(0x6f92ecu), 0x6f93c0u);
    /* 004b69b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b69ba: ret  */ FN_RET(0x004b69ac); r_esp += 4; return;
}

void f_004b69bb(void) /* FUN_004b69bb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b69bb);
    /* 004b69bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b69bc: mov ebp, esp */ r_ebp = r_esp;
    /* 004b69be: call 0x4b69c5 */ r_esp -= 4; W32(r_esp, 0x4b69c3u); f_004b69c5();
    /* 004b69c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b69c4: ret  */ FN_RET(0x004b69bb); r_esp += 4; return;
}

void f_004b69c5(void) /* FUN_004b69c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b69c5);
    /* 004b69c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b69c6: mov ebp, esp */ r_ebp = r_esp;
    /* 004b69c8: mov dword ptr [0x6f9370], 0x6f92f0 */ W32((u32)(0x6f9370u), 0x6f92f0u);
    /* 004b69d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b69d3: ret  */ FN_RET(0x004b69c5); r_esp += 4; return;
}

void f_004b69d4(void) /* FUN_004b69d4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b69d4);
    /* 004b69d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b69d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004b69d7: call 0x4b69de */ r_esp -= 4; W32(r_esp, 0x4b69dcu); f_004b69de();
    /* 004b69dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b69dd: ret  */ FN_RET(0x004b69d4); r_esp += 4; return;
}

