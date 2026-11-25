#include "protos.h"

void f_005bfbe8(void) /* FUN_005bfbe8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfbe8);
    /* 005bfbe8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfbe9: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfbeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfbec: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfbef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfbf2: mov dword ptr [eax], 0x639e6c */ W32((u32)(r_eax), 0x639e6cu);
    /* 005bfbf8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfbfb: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005bfbfe: mov dword ptr [edx + 0x84], 1 */ W32((u32)(r_edx+0x84u), 0x1u);
    /* 005bfc08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc0b: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 005bfc12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc15: call 0x5e61d1 */ r_esp -= 4; W32(r_esp, 0x5bfc1au); f_005e61d1();
    /* 005bfc1a: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfc1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfc1d: ret  */ FN_RET(0x005bfbe8); r_esp += 4; return;
}

void f_005bfc1e(void) /* FUN_005bfc1e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfc1e);
    /* 005bfc1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc1f: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfc21: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bfc24: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005bfc27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bfc2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfc2e: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5bfc33u); f_005e626d();
    /* 005bfc33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bfc36: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bfc39: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfc3d: je 0x5bfc44 */ if (fZ) goto L_005bfc44;
L_005bfc3f:; BB(0x005bfc3f);
    /* 005bfc3f: jmp 0x5bfd0c */ goto L_005bfd0c;
L_005bfc44:; BB(0x005bfc44);
    /* 005bfc44: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bfc4a: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5bfc4fu); f_005d9e23();
    /* 005bfc4f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfc52: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005bfc55: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfc57: mov eax, ecx */ r_eax = r_ecx;
    /* 005bfc59: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bfc5a: mov ecx, 0x3c */ r_ecx = 0x3cu;
    /* 005bfc5f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bfc5f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bfc5f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bfc61: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bfc64: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc67: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bfc68: mov ecx, 0x3c */ r_ecx = 0x3cu;
    /* 005bfc6d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bfc6d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bfc6d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bfc6f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bfc72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc75: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bfc76: mov ecx, 0x3c */ r_ecx = 0x3cu;
    /* 005bfc7b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bfc7b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bfc7b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bfc7d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005bfc80: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bfc83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc84: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfc87: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005bfc8a: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005bfc8d: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bfc92u); f_005ea1cf();
    /* 005bfc92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc95: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bfc96: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005bfc9b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bfc9b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bfc9b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bfc9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc9e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfca1: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005bfca4: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005bfca7: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bfcacu); f_005ea1cf();
    /* 005bfcac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfcaf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bfcb0: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005bfcb5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bfcb5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bfcb5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bfcb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfcb8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfcbb: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005bfcbe: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005bfcc4: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5bfcc9u); f_005ea1cf();
    /* 005bfcc9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfccd: jne 0x5bfcf2 */ if (!fZ) goto L_005bfcf2;
L_005bfccf:; BB(0x005bfccf);
    /* 005bfccf: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfcd3: jne 0x5bfcf2 */ if (!fZ) goto L_005bfcf2;
L_005bfcd5:; BB(0x005bfcd5);
    /* 005bfcd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfcd8: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005bfcdb: mov dword ptr [edx + 0x84], 1 */ W32((u32)(r_edx+0x84u), 0x1u);
    /* 005bfce5: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005bfceb: call 0x5be3c1 */ r_esp -= 4; W32(r_esp, 0x5bfcf0u); f_005be3c1();
    /* 005bfcf0: jmp 0x5bfd0c */ goto L_005bfd0c;
L_005bfcf2:; BB(0x005bfcf2);
    /* 005bfcf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfcf4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfcf7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfcf9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfcfc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5bfcffu); call_ind(t); }
    /* 005bfcff: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd01: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfd04: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfd06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bfd09: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5bfd0cu); call_ind(t); }
L_005bfd0c:; BB(0x005bfd0c);
    /* 005bfd0c: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfd0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfd0f: ret 4 */ FN_RET(0x005bfc1e); r_esp += 8; return;
}

void f_005bfd37(void) /* FUN_005bfd37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfd37);
    /* 005bfd37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd38: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfd3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd3b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfd3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd41: mov dword ptr [eax], 0x639e84 */ W32((u32)(r_eax), 0x639e84u);
    /* 005bfd47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd4a: call 0x5d7927 */ r_esp -= 4; W32(r_esp, 0x5bfd4fu); f_005d7927();
    /* 005bfd4f: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfd51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfd52: ret  */ FN_RET(0x005bfd37); r_esp += 4; return;
}

void f_005bfd53(void) /* FUN_005bfd53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfd53);
    /* 005bfd53: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd54: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfd56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd57: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfd5a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd5d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bfd60: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd63: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bfd66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfd68: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5bfd6bu); call_ind(t); }
    /* 005bfd6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd6e: call 0x5d765a */ r_esp -= 4; W32(r_esp, 0x5bfd73u); f_005d765a();
    /* 005bfd73: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfd75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfd76: ret  */ FN_RET(0x005bfd53); r_esp += 4; return;
}

void f_005bfd77(void) /* FUN_005bfd77 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfd77);
    /* 005bfd77: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd78: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfd7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd7b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfd7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd83: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x5bfd88u); f_005d7698();
    /* 005bfd88: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd8b: mov dword ptr [eax], 0x639e9c */ W32((u32)(r_eax), 0x639e9cu);
    /* 005bfd91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bfd97: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005bfd9a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd9d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bfda0: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 005bfda3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfda6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bfda9: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005bfdac: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bfdb2: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5bfdb7u); f_005d9e23();
    /* 005bfdb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfdba: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 005bfdbd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfdc0: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfdc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfdc3: ret 0xc */ FN_RET(0x005bfd77); r_esp += 16; return;
}

void f_005bfdc6(void) /* FUN_005bfdc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfdc6);
    /* 005bfdc6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfdc7: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfdc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfdca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfdcd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfdd0: mov dword ptr [eax], 0x639e9c */ W32((u32)(r_eax), 0x639e9cu);
    /* 005bfdd6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfdd9: call 0x5d76c7 */ r_esp -= 4; W32(r_esp, 0x5bfddeu); f_005d76c7();
    /* 005bfdde: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfde0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfde1: ret  */ FN_RET(0x005bfdc6); r_esp += 4; return;
}

void f_005bfde2(void) /* FUN_005bfde2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfde2);
    /* 005bfde2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfde3: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfde5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfde6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfde9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bfdec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfded: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfdf0: call 0x5d75bf */ r_esp -= 4; W32(r_esp, 0x5bfdf5u); f_005d75bf();
    /* 005bfdf5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfdf8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bfdfb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfdfe: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005bfe01: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 005bfe04: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfe06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfe07: ret 4 */ FN_RET(0x005bfde2); r_esp += 8; return;
}

void f_005bfe0a(void) /* FUN_005bfe0a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfe0a);
    /* 005bfe0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfe0b: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfe0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfe0e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfe11: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bfe17: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5bfe1cu); f_005d9e23();
    /* 005bfe1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe1f: sub eax, dword ptr [ecx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bfe22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfe23: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5bfe28u); f_00624700();
    /* 005bfe28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bfe2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe2e: cmp eax, dword ptr [edx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bfe31: jle 0x5bfe79 */ if ((fZ||fS!=fO)) goto L_005bfe79;
L_005bfe33:; BB(0x005bfe33);
    /* 005bfe33: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bfe39: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5bfe3eu); f_005d9e23();
    /* 005bfe3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe41: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 005bfe44: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe47: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bfe4a: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005bfe4d: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfe50: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe53: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bfe56: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 005bfe59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe5c: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bfe5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe62: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005bfe65: cmp ecx, dword ptr [eax + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bfe68: jge 0x5bfe79 */ if ((fS==fO)) goto L_005bfe79;
L_005bfe6a:; BB(0x005bfe6a);
    /* 005bfe6a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe6d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bfe70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe73: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005bfe76: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
L_005bfe79:; BB(0x005bfe79);
    /* 005bfe79: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bfe7f: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5bfe84u); f_005d9e23();
    /* 005bfe84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe87: sub eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bfe8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfe8b: call 0x624700 */ r_esp -= 4; W32(r_esp, 0x5bfe90u); f_00624700();
    /* 005bfe90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bfe93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe96: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bfe99: cmp eax, dword ptr [ecx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bfe9c: jge 0x5bfeab */ if ((fS==fO)) goto L_005bfeab;
L_005bfe9e:; BB(0x005bfe9e);
    /* 005bfe9e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfea1: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bfea4: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5bfea9u); f_005ea257();
    /* 005bfea9: jmp 0x5bfecd */ goto L_005bfecd;
L_005bfeab:; BB(0x005bfeab);
    /* 005bfeab: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005bfeb1: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5bfeb6u); f_005d9e23();
    /* 005bfeb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfeb9: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 005bfebc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfebf: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bfec2: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5bfec7u); f_005ea257();
    /* 005bfec7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfeca: add eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005bfecd:; BB(0x005bfecd);
    /* 005bfecd: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfecf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfed0: ret  */ FN_RET(0x005bfe0a); r_esp += 4; return;
}

void f_005bfed1(void) /* FUN_005bfed1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfed1);
    /* 005bfed1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfed2: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfed4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bfed7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bfeda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bfedd: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5bfee2u); f_005dfbf0();
    /* 005bfee2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bfee5: mov dword ptr [eax], 0x639eb4 */ W32((u32)(r_eax), 0x639eb4u);
    /* 005bfeeb: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bfef1: jmp 0x5bfeff */ goto L_005bfeff;
L_005bfef3:; BB(0x005bfef3);
    /* 005bfef3: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bfef7: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bfefb: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_005bfeff:; BB(0x005bfeff);
    /* 005bfeff: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bff03: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bff06: jge 0x5bff19 */ if ((fS==fO)) goto L_005bff19;
L_005bff08:; BB(0x005bff08);
    /* 005bff08: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bff0c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bff0f: mov dword ptr [ecx + eax*4 + 0xc], 0 */ W32((u32)(r_ecx+r_eax*4+0xcu), 0x0u);
    /* 005bff17: jmp 0x5bfef3 */ goto L_005bfef3;
L_005bff19:; BB(0x005bff19);
    /* 005bff19: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bff1f: jmp 0x5bff2d */ goto L_005bff2d;
L_005bff21:; BB(0x005bff21);
    /* 005bff21: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bff25: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bff29: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005bff2d:; BB(0x005bff2d);
    /* 005bff2d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bff31: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bff34: jge 0x5bff47 */ if ((fS==fO)) goto L_005bff47;
L_005bff36:; BB(0x005bff36);
    /* 005bff36: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bff3a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bff3d: mov dword ptr [edx + ecx*4 + 0x1c], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x1cu), 0xffffffffu);
    /* 005bff45: jmp 0x5bff21 */ goto L_005bff21;
L_005bff47:; BB(0x005bff47);
    /* 005bff47: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bff4d: jmp 0x5bff5b */ goto L_005bff5b;
L_005bff4f:; BB(0x005bff4f);
    /* 005bff4f: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bff53: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bff57: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005bff5b:; BB(0x005bff5b);
    /* 005bff5b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bff5f: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bff62: jge 0x5bff75 */ if ((fS==fO)) goto L_005bff75;
L_005bff64:; BB(0x005bff64);
    /* 005bff64: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bff68: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bff6b: mov dword ptr [eax + edx*4 + 0x44], 0 */ W32((u32)(r_eax+r_edx*4+0x44u), 0x0u);
    /* 005bff73: jmp 0x5bff4f */ goto L_005bff4f;
L_005bff75:; BB(0x005bff75);
    /* 005bff75: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bff7b: jmp 0x5bff89 */ goto L_005bff89;
L_005bff7d:; BB(0x005bff7d);
    /* 005bff7d: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005bff81: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005bff85: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_005bff89:; BB(0x005bff89);
    /* 005bff89: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bff8d: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bff90: jge 0x5bffa3 */ if ((fS==fO)) goto L_005bffa3;
L_005bff92:; BB(0x005bff92);
    /* 005bff92: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005bff96: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bff99: mov dword ptr [ecx + eax*4 + 0x68], 0 */ W32((u32)(r_ecx+r_eax*4+0x68u), 0x0u);
    /* 005bffa1: jmp 0x5bff7d */ goto L_005bff7d;
L_005bffa3:; BB(0x005bffa3);
    /* 005bffa3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bffa6: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
    /* 005bffad: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bffb0: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005bffb7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bffba: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 005bffc1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bffc4: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 005bffcb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bffce: mov esp, ebp */ r_esp = r_ebp;
    /* 005bffd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bffd1: ret  */ FN_RET(0x005bfed1); r_esp += 4; return;
}

void f_005bffd2(void) /* FUN_005bffd2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bffd2);
    /* 005bffd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bffd3: mov ebp, esp */ r_ebp = r_esp;
    /* 005bffd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bffd6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bffd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bffdc: mov dword ptr [eax], 0x639eb4 */ W32((u32)(r_eax), 0x639eb4u);
    /* 005bffe2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bffe5: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5bffeau); f_005dfc0f();
    /* 005bffea: mov esp, ebp */ r_esp = r_ebp;
    /* 005bffec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bffed: ret  */ FN_RET(0x005bffd2); r_esp += 4; return;
}

void f_005bffee(void) /* FUN_005bffee */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bffee);
    /* 005bffee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bffef: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfff1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bfff4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bfff7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bfffa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bfffd: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 005c0000: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c0007: jmp 0x5c0012 */ goto L_005c0012;
L_005c0009:; BB(0x005c0009);
    /* 005c0009: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c000c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c000f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005c0012:; BB(0x005c0012);
    /* 005c0012: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0015: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0018: jge 0x5c005d */ if ((fS==fO)) goto L_005c005d;
L_005c001a:; BB(0x005c001a);
    /* 005c001a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c001d: call 0x5c0063 */ r_esp -= 4; W32(r_esp, 0x5c0022u); f_005c0063();
    /* 005c0022: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0025: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0029: je 0x5c003a */ if (fZ) goto L_005c003a;
L_005c002b:; BB(0x005c002b);
    /* 005c002b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c002e: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005c0031: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0034: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0037: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
L_005c003a:; BB(0x005c003a);
    /* 005c003a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c003d: call 0x5c0101 */ r_esp -= 4; W32(r_esp, 0x5c0042u); f_005c0101();
    /* 005c0042: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0045: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0049: jne 0x5c005b */ if (!fZ) goto L_005c005b;
L_005c004b:; BB(0x005c004b);
    /* 005c004b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c004e: call 0x5c01e7 */ r_esp -= 4; W32(r_esp, 0x5c0053u); f_005c01e7();
    /* 005c0053: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0056: call 0x5c05b1 */ r_esp -= 4; W32(r_esp, 0x5c005bu); f_005c05b1();
L_005c005b:; BB(0x005c005b);
    /* 005c005b: jmp 0x5c0009 */ goto L_005c0009;
L_005c005d:; BB(0x005c005d);
    /* 005c005d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0060: ret 8 */ FN_RET(0x005bffee); r_esp += 12; return;
}

void f_005c0063(void) /* FUN_005c0063 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0063);
    /* 005c0063: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0064: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0066: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0069: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c006c: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 005c0072: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005c0079: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c0080: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0085: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c008au); f_0060ee31();
    /* 005c008a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c008d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c0090: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005c0096: jmp 0x5c00a4 */ goto L_005c00a4;
L_005c0098:; BB(0x005c0098);
    /* 005c0098: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005c009c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005c00a0: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_005c00a4:; BB(0x005c00a4);
    /* 005c00a4: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005c00a8: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c00ab: jge 0x5c00dd */ if ((fS==fO)) goto L_005c00dd;
L_005c00ad:; BB(0x005c00ad);
    /* 005c00ad: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005c00b1: fld qword ptr [0x639c80] */ FPUSH(R_F64((u32)(0x639c80u)));
    /* 005c00b7: fmul qword ptr [edx*8 + 0x697ea0] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x697ea0u));
    /* 005c00be: fadd qword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffecu));
    /* 005c00c1: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005c00c4: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 005c00c7: fcomp qword ptr [ebp - 0x14] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffecu))); FPOP();
    /* 005c00ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c00cc: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c00cf: je 0x5c00db */ if (fZ) goto L_005c00db;
L_005c00d1:; BB(0x005c00d1);
    /* 005c00d1: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005c00d5: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 005c00d9: jmp 0x5c00dd */ goto L_005c00dd;
L_005c00db:; BB(0x005c00db);
    /* 005c00db: jmp 0x5c0098 */ goto L_005c0098;
L_005c00dd:; BB(0x005c00dd);
    /* 005c00dd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c00e1: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c00e4: jne 0x5c00f0 */ if (!fZ) goto L_005c00f0;
L_005c00e6:; BB(0x005c00e6);
    /* 005c00e6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c00e9: call 0x5c029a */ r_esp -= 4; W32(r_esp, 0x5c00eeu); f_005c029a();
    /* 005c00ee: jmp 0x5c00fd */ goto L_005c00fd;
L_005c00f0:; BB(0x005c00f0);
    /* 005c00f0: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c00f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c00f5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c00f8: call 0x5c03df */ r_esp -= 4; W32(r_esp, 0x5c00fdu); f_005c03df();
L_005c00fd:; BB(0x005c00fd);
    /* 005c00fd: mov esp, ebp */ r_esp = r_ebp;
    /* 005c00ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0100: ret  */ FN_RET(0x005c0063); r_esp += 4; return;
}

void f_005c0101(void) /* FUN_005c0101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0101);
    /* 005c0101: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0102: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0104: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0107: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c010a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c0111: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0114: call 0x5c04d9 */ r_esp -= 4; W32(r_esp, 0x5c0119u); f_005c04d9();
    /* 005c0119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c011b: je 0x5c01c7 */ if (fZ) goto L_005c01c7;
L_005c0121:; BB(0x005c0121);
    /* 005c0121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0124: call 0x5c0462 */ r_esp -= 4; W32(r_esp, 0x5c0129u); f_005c0462();
    /* 005c0129: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c012c: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0130: jge 0x5c0196 */ if ((fS==fO)) goto L_005c0196;
L_005c0132:; BB(0x005c0132);
    /* 005c0132: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0135: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0138: mov edx, dword ptr [eax*4 + 0x697e68] */ r_edx = R32((u32)(r_eax*4+0x697e68u));
    /* 005c013f: imul edx, dword ptr [ecx + 0x3c] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x3cu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c0143: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c0146: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0149: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005c014c: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c014f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0152: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 005c0155: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0158: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c015b: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 005c015f: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0162: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0165: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0168: mov dword ptr [ecx + eax*4 + 0x44], edx */ W32((u32)(r_ecx+r_eax*4+0x44u), r_edx);
    /* 005c016c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c016f: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005c0172: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0175: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0178: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 005c017b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c017e: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0182: je 0x5c0196 */ if (fZ) goto L_005c0196;
L_005c0184:; BB(0x005c0184);
    /* 005c0184: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0188: je 0x5c0196 */ if (fZ) goto L_005c0196;
L_005c018a:; BB(0x005c018a);
    /* 005c018a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c018d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c018e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0191: call 0x5c0553 */ r_esp -= 4; W32(r_esp, 0x5c0196u); f_005c0553();
L_005c0196:; BB(0x005c0196);
    /* 005c0196: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c019a: jne 0x5c01b9 */ if (!fZ) goto L_005c01b9;
L_005c019c:; BB(0x005c019c);
    /* 005c019c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c019f: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c01a3: jne 0x5c01b9 */ if (!fZ) goto L_005c01b9;
L_005c01a5:; BB(0x005c01a5);
    /* 005c01a5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c01a8: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 005c01af: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c01b2: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_005c01b9:; BB(0x005c01b9);
    /* 005c01b9: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c01bd: jne 0x5c01c7 */ if (!fZ) goto L_005c01c7;
L_005c01bf:; BB(0x005c01bf);
    /* 005c01bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c01c2: call 0x5c05b1 */ r_esp -= 4; W32(r_esp, 0x5c01c7u); f_005c05b1();
L_005c01c7:; BB(0x005c01c7);
    /* 005c01c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c01ca: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c01ce: je 0x5c01e3 */ if (fZ) goto L_005c01e3;
L_005c01d0:; BB(0x005c01d0);
    /* 005c01d0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c01d3: cmp dword ptr [edx + 0x38], 0x14 */ {  u32 a = R32((u32)(r_edx+0x38u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c01d7: jl 0x5c01e3 */ if ((fS!=fO)) goto L_005c01e3;
L_005c01d9:; BB(0x005c01d9);
    /* 005c01d9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c01dc: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
L_005c01e3:; BB(0x005c01e3);
    /* 005c01e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005c01e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c01e6: ret  */ FN_RET(0x005c0101); r_esp += 4; return;
}

void f_005c01e7(void) /* FUN_005c01e7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c01e7);
    /* 005c01e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c01e8: mov ebp, esp */ r_ebp = r_esp;
    /* 005c01ea: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c01ed: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c01f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c01f7: jmp 0x5c0202 */ goto L_005c0202;
L_005c01f9:; BB(0x005c01f9);
    /* 005c01f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c01fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c01ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c0202:; BB(0x005c0202);
    /* 005c0202: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0206: jge 0x5c0219 */ if ((fS==fO)) goto L_005c0219;
L_005c0208:; BB(0x005c0208);
    /* 005c0208: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c020b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c020e: cmp dword ptr [edx + ecx*4 + 0x1c], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0213: jne 0x5c0217 */ if (!fZ) goto L_005c0217;
L_005c0215:; BB(0x005c0215);
    /* 005c0215: jmp 0x5c0219 */ goto L_005c0219;
L_005c0217:; BB(0x005c0217);
    /* 005c0217: jmp 0x5c01f9 */ goto L_005c01f9;
L_005c0219:; BB(0x005c0219);
    /* 005c0219: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c021d: jne 0x5c0221 */ if (!fZ) goto L_005c0221;
L_005c021f:; BB(0x005c021f);
    /* 005c021f: jmp 0x5c0296 */ goto L_005c0296;
L_005c0221:; BB(0x005c0221);
    /* 005c0221: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0225: jne 0x5c0231 */ if (!fZ) goto L_005c0231;
L_005c0227:; BB(0x005c0227);
    /* 005c0227: mov eax, dword ptr [0x697e90] */ r_eax = R32((u32)(0x697e90u));
    /* 005c022c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c022f: jmp 0x5c025b */ goto L_005c025b;
L_005c0231:; BB(0x005c0231);
    /* 005c0231: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0235: jge 0x5c0242 */ if ((fS==fO)) goto L_005c0242;
L_005c0237:; BB(0x005c0237);
    /* 005c0237: mov ecx, dword ptr [0x697e94] */ r_ecx = R32((u32)(0x697e94u));
    /* 005c023d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c0240: jmp 0x5c025b */ goto L_005c025b;
L_005c0242:; BB(0x005c0242);
    /* 005c0242: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0246: jge 0x5c0253 */ if ((fS==fO)) goto L_005c0253;
L_005c0248:; BB(0x005c0248);
    /* 005c0248: mov edx, dword ptr [0x697e98] */ r_edx = R32((u32)(0x697e98u));
    /* 005c024e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c0251: jmp 0x5c025b */ goto L_005c025b;
L_005c0253:; BB(0x005c0253);
    /* 005c0253: mov eax, dword ptr [0x697e9c] */ r_eax = R32((u32)(0x697e9cu));
    /* 005c0258: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005c025b:; BB(0x005c025b);
    /* 005c025b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c025e: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005c0261: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0264: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0267: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 005c026a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c026d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0270: mov eax, dword ptr [edx + ecx*4 + 0x64] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 005c0274: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0277: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c027a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c027d: mov dword ptr [edx + ecx*4 + 0x64], eax */ W32((u32)(r_edx+r_ecx*4+0x64u), r_eax);
    /* 005c0281: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0284: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 005c028a: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c028d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0290: mov dword ptr [edx + 0x84], ecx */ W32((u32)(r_edx+0x84u), r_ecx);
L_005c0296:; BB(0x005c0296);
    /* 005c0296: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0298: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0299: ret  */ FN_RET(0x005c01e7); r_esp += 4; return;
}

void f_005c029a(void) /* FUN_005c029a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c029a);
    /* 005c029a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c029b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c029d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c029e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c02a1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c02a3: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c02a8u); f_0060ee31();
    /* 005c02a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c02ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c02ae: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005c02b1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c02b3: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c02b8u); f_0060ee31();
    /* 005c02b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c02bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c02be: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005c02c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c02c4: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c02c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c02c8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c02cb: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c02ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c02cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c02d2: call 0x5c04af */ r_esp -= 4; W32(r_esp, 0x5c02d7u); f_005c04af();
    /* 005c02d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c02d9: je 0x5c0305 */ if (fZ) goto L_005c0305;
L_005c02db:; BB(0x005c02db);
    /* 005c02db: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005c02dd: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c02e2u); f_0060ee31();
    /* 005c02e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c02e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c02e8: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 005c02eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c02ee: cmp dword ptr [edx + 0x14], 1 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c02f2: jl 0x5c0303 */ if ((fS!=fO)) goto L_005c0303;
L_005c02f4:; BB(0x005c02f4);
    /* 005c02f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c02f7: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005c02fa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c02fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0300: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
L_005c0303:; BB(0x005c0303);
    /* 005c0303: jmp 0x5c0315 */ goto L_005c0315;
L_005c0305:; BB(0x005c0305);
    /* 005c0305: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c0307: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c030cu); f_0060ee31();
    /* 005c030c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c030f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0312: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
L_005c0315:; BB(0x005c0315);
    /* 005c0315: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0318: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c031b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c031c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c031f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005c0322: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0323: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0326: call 0x5c04af */ r_esp -= 4; W32(r_esp, 0x5c032bu); f_005c04af();
    /* 005c032b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c032d: je 0x5c03cb */ if (fZ) goto L_005c03cb;
L_005c0333:; BB(0x005c0333);
    /* 005c0333: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0336: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005c0339: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c033a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c033d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c0340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0341: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0344: call 0x5c04af */ r_esp -= 4; W32(r_esp, 0x5c0349u); f_005c04af();
    /* 005c0349: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c034b: je 0x5c03cb */ if (fZ) goto L_005c03cb;
L_005c034d:; BB(0x005c034d);
    /* 005c034d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c034f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c0354u); f_0060ee31();
    /* 005c0354: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0357: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c035a: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 005c035d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0360: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0363: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005c0366: cmp ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0369: jl 0x5c0394 */ if ((fS!=fO)) goto L_005c0394;
L_005c036b:; BB(0x005c036b);
    /* 005c036b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c036e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005c0371: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0374: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0377: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 005c037a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c037d: cmp dword ptr [edx + 0x18], 1 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0381: jl 0x5c0392 */ if ((fS!=fO)) goto L_005c0392;
L_005c0383:; BB(0x005c0383);
    /* 005c0383: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0386: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005c0389: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c038c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c038f: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
L_005c0392:; BB(0x005c0392);
    /* 005c0392: jmp 0x5c03c9 */ goto L_005c03c9;
L_005c0394:; BB(0x005c0394);
    /* 005c0394: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0397: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c039b: jl 0x5c03c9 */ if ((fS!=fO)) goto L_005c03c9;
L_005c039d:; BB(0x005c039d);
    /* 005c039d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c03a0: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005c03a3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c03a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c03a9: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005c03ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c03af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c03b2: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 005c03b5: cmp eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c03b8: jl 0x5c03c9 */ if ((fS!=fO)) goto L_005c03c9;
L_005c03ba:; BB(0x005c03ba);
    /* 005c03ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c03bd: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005c03c0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c03c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c03c6: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
L_005c03c9:; BB(0x005c03c9);
    /* 005c03c9: jmp 0x5c03db */ goto L_005c03db;
L_005c03cb:; BB(0x005c03cb);
    /* 005c03cb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c03cd: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c03d2u); f_0060ee31();
    /* 005c03d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c03d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c03d8: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
L_005c03db:; BB(0x005c03db);
    /* 005c03db: mov esp, ebp */ r_esp = r_ebp;
    /* 005c03dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c03de: ret  */ FN_RET(0x005c029a); r_esp += 4; return;
}

void f_005c03df(void) /* FUN_005c03df */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c03df);
    /* 005c03df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c03e0: mov ebp, esp */ r_ebp = r_esp;
    /* 005c03e2: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c03e5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c03e8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c03ea: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c03efu); f_0060ee31();
    /* 005c03ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c03f2: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 005c03f6: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005c03fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c03fd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c0400: mov dword ptr [ecx + eax*4 + 0xc], edx */ W32((u32)(r_ecx+r_eax*4+0xcu), r_edx);
    /* 005c0404: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c040a: jmp 0x5c0418 */ goto L_005c0418;
L_005c040c:; BB(0x005c040c);
    /* 005c040c: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005c0410: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005c0414: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005c0418:; BB(0x005c0418);
    /* 005c0418: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c041c: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c041f: jge 0x5c045c */ if ((fS==fO)) goto L_005c045c;
L_005c0421:; BB(0x005c0421);
    /* 005c0421: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c0425: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005c0429: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c042b: je 0x5c045a */ if (fZ) goto L_005c045a;
L_005c042d:; BB(0x005c042d);
    /* 005c042d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c042f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c0434u); f_0060ee31();
    /* 005c0434: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0437: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0439: jne 0x5c044c */ if (!fZ) goto L_005c044c;
L_005c043b:; BB(0x005c043b);
    /* 005c043b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c043f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0442: mov dword ptr [edx + ecx*4 + 0xc], 1 */ W32((u32)(r_edx+r_ecx*4+0xcu), 0x1u);
    /* 005c044a: jmp 0x5c045a */ goto L_005c045a;
L_005c044c:; BB(0x005c044c);
    /* 005c044c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c0450: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0453: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c0456: mov dword ptr [ecx + eax*4 + 0xc], edx */ W32((u32)(r_ecx+r_eax*4+0xcu), r_edx);
L_005c045a:; BB(0x005c045a);
    /* 005c045a: jmp 0x5c040c */ goto L_005c040c;
L_005c045c:; BB(0x005c045c);
    /* 005c045c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c045e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c045f: ret 4 */ FN_RET(0x005c03df); r_esp += 8; return;
}

void f_005c0462(void) /* FUN_005c0462 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0462);
    /* 005c0462: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0463: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0465: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0468: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c046b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c0472: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c0479: jmp 0x5c0484 */ goto L_005c0484;
L_005c047b:; BB(0x005c047b);
    /* 005c047b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c047e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0481: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005c0484:; BB(0x005c0484);
    /* 005c0484: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0488: jge 0x5c04a8 */ if ((fS==fO)) goto L_005c04a8;
L_005c048a:; BB(0x005c048a);
    /* 005c048a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c048d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0490: cmp dword ptr [edx + ecx*4 + 0xc], 1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0495: je 0x5c04a6 */ if (fZ) goto L_005c04a6;
L_005c0497:; BB(0x005c0497);
    /* 005c0497: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c049a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c049d: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 005c04a1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c04a4: jmp 0x5c04a8 */ goto L_005c04a8;
L_005c04a6:; BB(0x005c04a6);
    /* 005c04a6: jmp 0x5c047b */ goto L_005c047b;
L_005c04a8:; BB(0x005c04a8);
    /* 005c04a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c04ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005c04ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c04ae: ret  */ FN_RET(0x005c0462); r_esp += 4; return;
}

void f_005c04af(void) /* FUN_005c04af */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c04af);
    /* 005c04af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c04b0: mov ebp, esp */ r_ebp = r_esp;
    /* 005c04b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c04b3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c04b6: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c04ba: je 0x5c04ca */ if (fZ) goto L_005c04ca;
L_005c04bc:; BB(0x005c04bc);
    /* 005c04bc: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c04c0: je 0x5c04ca */ if (fZ) goto L_005c04ca;
L_005c04c2:; BB(0x005c04c2);
    /* 005c04c2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c04c5: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c04c8: jne 0x5c04d1 */ if (!fZ) goto L_005c04d1;
L_005c04ca:; BB(0x005c04ca);
    /* 005c04ca: mov eax, 1 */ r_eax = 0x1u;
    /* 005c04cf: jmp 0x5c04d3 */ goto L_005c04d3;
L_005c04d1:; BB(0x005c04d1);
    /* 005c04d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c04d3:; BB(0x005c04d3);
    /* 005c04d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005c04d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c04d6: ret 8 */ FN_RET(0x005c04af); r_esp += 12; return;
}

void f_005c04d9(void) /* FUN_005c04d9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c04d9);
    /* 005c04d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c04da: mov ebp, esp */ r_ebp = r_esp;
    /* 005c04dc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c04df: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c04e2: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 005c04e9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c04f0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005c04f7: jmp 0x5c0502 */ goto L_005c0502;
L_005c04f9:; BB(0x005c04f9);
    /* 005c04f9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c04fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c04ff: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005c0502:; BB(0x005c0502);
    /* 005c0502: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0506: jge 0x5c054c */ if ((fS==fO)) goto L_005c054c;
L_005c0508:; BB(0x005c0508);
    /* 005c0508: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c050b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c050e: jmp 0x5c0519 */ goto L_005c0519;
L_005c0510:; BB(0x005c0510);
    /* 005c0510: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0513: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0516: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005c0519:; BB(0x005c0519);
    /* 005c0519: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c051d: jge 0x5c054a */ if ((fS==fO)) goto L_005c054a;
L_005c051f:; BB(0x005c051f);
    /* 005c051f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0522: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c0525: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 005c0529: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c052a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c052d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c0530: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 005c0534: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0535: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c0538: call 0x5c04af */ r_esp -= 4; W32(r_esp, 0x5c053du); f_005c04af();
    /* 005c053d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c053f: jne 0x5c0548 */ if (!fZ) goto L_005c0548;
L_005c0541:; BB(0x005c0541);
    /* 005c0541: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005c0548:; BB(0x005c0548);
    /* 005c0548: jmp 0x5c0510 */ goto L_005c0510;
L_005c054a:; BB(0x005c054a);
    /* 005c054a: jmp 0x5c04f9 */ goto L_005c04f9;
L_005c054c:; BB(0x005c054c);
    /* 005c054c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c054f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0551: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0552: ret  */ FN_RET(0x005c04d9); r_esp += 4; return;
}

void f_005c0553(void) /* FUN_005c0553 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0553);
    /* 005c0553: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0554: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0556: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0559: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c055c: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c0562: jmp 0x5c0570 */ goto L_005c0570;
L_005c0564:; BB(0x005c0564);
    /* 005c0564: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005c0568: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005c056c: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005c0570:; BB(0x005c0570);
    /* 005c0570: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c0574: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0577: jge 0x5c059d */ if ((fS==fO)) goto L_005c059d;
L_005c0579:; BB(0x005c0579);
    /* 005c0579: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c057d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0580: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 005c0584: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0587: jne 0x5c058b */ if (!fZ) goto L_005c058b;
L_005c0589:; BB(0x005c0589);
    /* 005c0589: jmp 0x5c05ab */ goto L_005c05ab;
L_005c058b:; BB(0x005c058b);
    /* 005c058b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c058f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0592: cmp dword ptr [eax + edx*4 + 0x1c], -1 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0597: jne 0x5c059b */ if (!fZ) goto L_005c059b;
L_005c0599:; BB(0x005c0599);
    /* 005c0599: jmp 0x5c059d */ goto L_005c059d;
L_005c059b:; BB(0x005c059b);
    /* 005c059b: jmp 0x5c0564 */ goto L_005c0564;
L_005c059d:; BB(0x005c059d);
    /* 005c059d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c05a1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c05a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c05a7: mov dword ptr [edx + ecx*4 + 0x1c], eax */ W32((u32)(r_edx+r_ecx*4+0x1cu), r_eax);
L_005c05ab:; BB(0x005c05ab);
    /* 005c05ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005c05ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c05ae: ret 4 */ FN_RET(0x005c0553); r_esp += 8; return;
}

void f_005c05b1(void) /* FUN_005c05b1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c05b1);
    /* 005c05b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c05b2: mov ebp, esp */ r_ebp = r_esp;
    /* 005c05b4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c05b7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c05ba: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c05c0: jmp 0x5c05ce */ goto L_005c05ce;
L_005c05c2:; BB(0x005c05c2);
    /* 005c05c2: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005c05c6: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005c05ca: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005c05ce:; BB(0x005c05ce);
    /* 005c05ce: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c05d2: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c05d5: jge 0x5c05e8 */ if ((fS==fO)) goto L_005c05e8;
L_005c05d7:; BB(0x005c05d7);
    /* 005c05d7: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c05db: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c05de: mov dword ptr [eax + edx*4 + 0x1c], 0xffffffff */ W32((u32)(r_eax+r_edx*4+0x1cu), 0xffffffffu);
    /* 005c05e6: jmp 0x5c05c2 */ goto L_005c05c2;
L_005c05e8:; BB(0x005c05e8);
    /* 005c05e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c05ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c05eb: ret  */ FN_RET(0x005c05b1); r_esp += 4; return;
}

void f_005c05f0(void) /* FUN_005c05f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c05f0);
    /* 005c05f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c05f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c05f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c05f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c05f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c05fa: call 0x5bb88c */ r_esp -= 4; W32(r_esp, 0x5c05ffu); f_005bb88c();
    /* 005c05ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0602: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c0605: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0607: je 0x5c0615 */ if (fZ) goto L_005c0615;
L_005c0609:; BB(0x005c0609);
    /* 005c0609: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c060c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c060d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c0612u); f_0048ac1b();
    /* 005c0612: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c0615:; BB(0x005c0615);
    /* 005c0615: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0618: mov esp, ebp */ r_esp = r_ebp;
    /* 005c061a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c061b: ret 4 */ FN_RET(0x005c05f0); r_esp += 8; return;
}

void f_005c0620(void) /* FUN_005c0620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0620);
    /* 005c0620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0621: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0627: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c062a: call 0x5be834 */ r_esp -= 4; W32(r_esp, 0x5c062fu); f_005be834();
    /* 005c062f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0632: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c0635: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0637: je 0x5c0645 */ if (fZ) goto L_005c0645;
L_005c0639:; BB(0x005c0639);
    /* 005c0639: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c063c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c063d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c0642u); f_0048ac1b();
    /* 005c0642: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c0645:; BB(0x005c0645);
    /* 005c0645: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0648: mov esp, ebp */ r_esp = r_ebp;
    /* 005c064a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c064b: ret 4 */ FN_RET(0x005c0620); r_esp += 8; return;
}

void f_005c0650(void) /* FUN_005c0650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0650);
    /* 005c0650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0651: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0657: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c065a: call 0x5be8a2 */ r_esp -= 4; W32(r_esp, 0x5c065fu); f_005be8a2();
    /* 005c065f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0662: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c0665: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0667: je 0x5c0675 */ if (fZ) goto L_005c0675;
L_005c0669:; BB(0x005c0669);
    /* 005c0669: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c066c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c066d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c0672u); f_0048ac1b();
    /* 005c0672: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c0675:; BB(0x005c0675);
    /* 005c0675: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0678: mov esp, ebp */ r_esp = r_ebp;
    /* 005c067a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c067b: ret 4 */ FN_RET(0x005c0650); r_esp += 8; return;
}

void f_005c0680(void) /* FUN_005c0680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0680);
    /* 005c0680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0681: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0687: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c068a: call 0x5beaf8 */ r_esp -= 4; W32(r_esp, 0x5c068fu); f_005beaf8();
    /* 005c068f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0692: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c0695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0697: je 0x5c06a5 */ if (fZ) goto L_005c06a5;
L_005c0699:; BB(0x005c0699);
    /* 005c0699: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c069c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c069d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c06a2u); f_0048ac1b();
    /* 005c06a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c06a5:; BB(0x005c06a5);
    /* 005c06a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c06a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c06aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c06ab: ret 4 */ FN_RET(0x005c0680); r_esp += 8; return;
}

void f_005c06b0(void) /* FUN_005c06b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c06b0);
    /* 005c06b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c06b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c06b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c06b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c06b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c06ba: call 0x5beb4b */ r_esp -= 4; W32(r_esp, 0x5c06bfu); f_005beb4b();
    /* 005c06bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c06c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c06c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c06c7: je 0x5c06d5 */ if (fZ) goto L_005c06d5;
L_005c06c9:; BB(0x005c06c9);
    /* 005c06c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c06cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c06cd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c06d2u); f_0048ac1b();
    /* 005c06d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c06d5:; BB(0x005c06d5);
    /* 005c06d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c06d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c06da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c06db: ret 4 */ FN_RET(0x005c06b0); r_esp += 8; return;
}

void f_005c06e0(void) /* FUN_005c06e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c06e0);
    /* 005c06e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c06e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c06e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c06e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c06e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c06ea: call 0x5bf092 */ r_esp -= 4; W32(r_esp, 0x5c06efu); f_005bf092();
    /* 005c06ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c06f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c06f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c06f7: je 0x5c0705 */ if (fZ) goto L_005c0705;
L_005c06f9:; BB(0x005c06f9);
    /* 005c06f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c06fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c06fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c0702u); f_0048ac1b();
    /* 005c0702: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c0705:; BB(0x005c0705);
    /* 005c0705: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0708: mov esp, ebp */ r_esp = r_ebp;
    /* 005c070a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c070b: ret 4 */ FN_RET(0x005c06e0); r_esp += 8; return;
}

void f_005c0710(void) /* FUN_005c0710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0710);
    /* 005c0710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0711: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0717: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c071a: call 0x5bf671 */ r_esp -= 4; W32(r_esp, 0x5c071fu); f_005bf671();
    /* 005c071f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0722: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c0725: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0727: je 0x5c0735 */ if (fZ) goto L_005c0735;
L_005c0729:; BB(0x005c0729);
    /* 005c0729: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c072c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c072d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c0732u); f_0048ac1b();
    /* 005c0732: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c0735:; BB(0x005c0735);
    /* 005c0735: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0738: mov esp, ebp */ r_esp = r_ebp;
    /* 005c073a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c073b: ret 4 */ FN_RET(0x005c0710); r_esp += 8; return;
}

void f_005c0740(void) /* FUN_005c0740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0740);
    /* 005c0740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0741: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c074a: call 0x5bf88d */ r_esp -= 4; W32(r_esp, 0x5c074fu); f_005bf88d();
    /* 005c074f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0752: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c0755: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0757: je 0x5c0765 */ if (fZ) goto L_005c0765;
L_005c0759:; BB(0x005c0759);
    /* 005c0759: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c075c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c075d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c0762u); f_0048ac1b();
    /* 005c0762: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c0765:; BB(0x005c0765);
    /* 005c0765: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0768: mov esp, ebp */ r_esp = r_ebp;
    /* 005c076a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c076b: ret 4 */ FN_RET(0x005c0740); r_esp += 8; return;
}

void f_005c0770(void) /* FUN_005c0770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0770);
    /* 005c0770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0771: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0777: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c077a: call 0x5bfbe8 */ r_esp -= 4; W32(r_esp, 0x5c077fu); f_005bfbe8();
    /* 005c077f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0782: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c0785: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0787: je 0x5c0795 */ if (fZ) goto L_005c0795;
L_005c0789:; BB(0x005c0789);
    /* 005c0789: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c078c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c078d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c0792u); f_0048ac1b();
    /* 005c0792: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c0795:; BB(0x005c0795);
    /* 005c0795: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0798: mov esp, ebp */ r_esp = r_ebp;
    /* 005c079a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c079b: ret 4 */ FN_RET(0x005c0770); r_esp += 8; return;
}

void f_005c07a0(void) /* FUN_005c07a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c07a0);
    /* 005c07a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c07a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c07a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c07a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c07a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c07aa: call 0x5bfd37 */ r_esp -= 4; W32(r_esp, 0x5c07afu); f_005bfd37();
    /* 005c07af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c07b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c07b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c07b7: je 0x5c07c5 */ if (fZ) goto L_005c07c5;
L_005c07b9:; BB(0x005c07b9);
    /* 005c07b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c07bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c07bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c07c2u); f_0048ac1b();
    /* 005c07c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c07c5:; BB(0x005c07c5);
    /* 005c07c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c07c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c07ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c07cb: ret 4 */ FN_RET(0x005c07a0); r_esp += 8; return;
}

void f_005c07d0(void) /* FUN_005c07d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c07d0);
    /* 005c07d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c07d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c07d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c07d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c07d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c07da: call 0x5bfdc6 */ r_esp -= 4; W32(r_esp, 0x5c07dfu); f_005bfdc6();
    /* 005c07df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c07e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c07e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c07e7: je 0x5c07f5 */ if (fZ) goto L_005c07f5;
L_005c07e9:; BB(0x005c07e9);
    /* 005c07e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c07ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c07ed: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c07f2u); f_0048ac1b();
    /* 005c07f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c07f5:; BB(0x005c07f5);
    /* 005c07f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c07f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c07fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c07fb: ret 4 */ FN_RET(0x005c07d0); r_esp += 8; return;
}

void f_005c0800(void) /* FUN_005c0800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0800);
    /* 005c0800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0801: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c080a: call 0x5bffd2 */ r_esp -= 4; W32(r_esp, 0x5c080fu); f_005bffd2();
    /* 005c080f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0812: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c0815: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0817: je 0x5c0825 */ if (fZ) goto L_005c0825;
L_005c0819:; BB(0x005c0819);
    /* 005c0819: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c081c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c081d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c0822u); f_0048ac1b();
    /* 005c0822: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c0825:; BB(0x005c0825);
    /* 005c0825: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0828: mov esp, ebp */ r_esp = r_ebp;
    /* 005c082a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c082b: ret 4 */ FN_RET(0x005c0800); r_esp += 8; return;
}

void f_005c0830(void) /* FUN_005c0830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0830);
    /* 005c0830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0831: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0833: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0836: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c0839: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c083c: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x5c0841u); f_00446fe0();
    /* 005c0841: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0844: mov dword ptr [eax], 0x639ebc */ W32((u32)(r_eax), 0x639ebcu);
    /* 005c084a: push 0x6980fc */ { u32 v = 0x6980fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c084f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c0855: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5c085au); f_005da413();
    /* 005c085a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c085d: mov dword ptr [0x6fc030], ecx */ W32((u32)(0x6fc030u), r_ecx);
    /* 005c0863: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0865: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0868: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c086du); f_005e5ec3();
    /* 005c086d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005c086f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c0874u); f_0048ab58();
    /* 005c0874: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0877: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c087a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c087e: je 0x5c088f */ if (fZ) goto L_005c088f;
L_005c0880:; BB(0x005c0880);
    /* 005c0880: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0882: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0885: call 0x5e82f0 */ r_esp -= 4; W32(r_esp, 0x5c088au); f_005e82f0();
    /* 005c088a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c088d: jmp 0x5c0896 */ goto L_005c0896;
L_005c088f:; BB(0x005c088f);
    /* 005c088f: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005c0896:; BB(0x005c0896);
    /* 005c0896: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0899: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c089c: mov dword ptr [edx + 0x1cb0], eax */ W32((u32)(r_edx+0x1cb0u), r_eax);
    /* 005c08a2: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005c08a4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c08a9u); f_0048ab58();
    /* 005c08a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c08ac: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c08af: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c08b3: je 0x5c08c4 */ if (fZ) goto L_005c08c4;
L_005c08b5:; BB(0x005c08b5);
    /* 005c08b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c08b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c08ba: call 0x5e82f0 */ r_esp -= 4; W32(r_esp, 0x5c08bfu); f_005e82f0();
    /* 005c08bf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c08c2: jmp 0x5c08cb */ goto L_005c08cb;
L_005c08c4:; BB(0x005c08c4);
    /* 005c08c4: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005c08cb:; BB(0x005c08cb);
    /* 005c08cb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c08ce: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c08d1: mov dword ptr [ecx + 0x1cb4], edx */ W32((u32)(r_ecx+0x1cb4u), r_edx);
    /* 005c08d7: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c08dd: jmp 0x5c08eb */ goto L_005c08eb;
L_005c08df:; BB(0x005c08df);
    /* 005c08df: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005c08e3: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005c08e7: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005c08eb:; BB(0x005c08eb);
    /* 005c08eb: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c08ef: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c08f2: jge 0x5c090b */ if ((fS==fO)) goto L_005c090b;
L_005c08f4:; BB(0x005c08f4);
    /* 005c08f4: push 0x16040 */ { u32 v = 0x16040u; r_esp -= 4; W32(r_esp, v); }
    /* 005c08f9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c08fb: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005c0901: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005c0904: call 0x5ba9e1 */ r_esp -= 4; W32(r_esp, 0x5c0909u); f_005ba9e1();
    /* 005c0909: jmp 0x5c08df */ goto L_005c08df;
L_005c090b:; BB(0x005c090b);
    /* 005c090b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c090e: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0910: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0911: ret  */ FN_RET(0x005c0830); r_esp += 4; return;
}

void f_005c0912(void) /* FUN_005c0912 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0912);
    /* 005c0912: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0913: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0915: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0918: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c091b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c091e: mov dword ptr [eax], 0x639ebc */ W32((u32)(r_eax), 0x639ebcu);
    /* 005c0924: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0926: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c092c: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5c0931u); f_005da413();
    /* 005c0931: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0937: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c093a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c093d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c0940: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0944: je 0x5c0957 */ if (fZ) goto L_005c0957;
L_005c0946:; BB(0x005c0946);
    /* 005c0946: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0948: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c094b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c094d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0950: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c0952u); call_ind(t); }
    /* 005c0952: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c0955: jmp 0x5c095e */ goto L_005c095e;
L_005c0957:; BB(0x005c0957);
    /* 005c0957: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005c095e:; BB(0x005c095e);
    /* 005c095e: mov dword ptr [0x6fc034], 0 */ W32((u32)(0x6fc034u), 0x0u);
    /* 005c0968: mov dword ptr [0x6fc030], 0 */ W32((u32)(0x6fc030u), 0x0u);
    /* 005c0972: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c0975: cmp dword ptr [eax + 0x1cb0], 0 */ {  u32 a = R32((u32)(r_eax+0x1cb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c097c: je 0x5c09bb */ if (fZ) goto L_005c09bb;
L_005c097e:; BB(0x005c097e);
    /* 005c097e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c0981: mov edx, dword ptr [ecx + 0x1cb0] */ r_edx = R32((u32)(r_ecx+0x1cb0u));
    /* 005c0987: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005c098a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c098d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c0990: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0994: je 0x5c09a7 */ if (fZ) goto L_005c09a7;
L_005c0996:; BB(0x005c0996);
    /* 005c0996: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0998: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c099b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c099d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c09a0: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c09a2u); call_ind(t); }
    /* 005c09a2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c09a5: jmp 0x5c09ae */ goto L_005c09ae;
L_005c09a7:; BB(0x005c09a7);
    /* 005c09a7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c09ae:; BB(0x005c09ae);
    /* 005c09ae: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c09b1: mov dword ptr [eax + 0x1cb0], 0 */ W32((u32)(r_eax+0x1cb0u), 0x0u);
L_005c09bb:; BB(0x005c09bb);
    /* 005c09bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c09be: cmp dword ptr [ecx + 0x1cb4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c09c5: je 0x5c0a04 */ if (fZ) goto L_005c0a04;
L_005c09c7:; BB(0x005c09c7);
    /* 005c09c7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c09ca: mov eax, dword ptr [edx + 0x1cb4] */ r_eax = R32((u32)(r_edx+0x1cb4u));
    /* 005c09d0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c09d3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c09d6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c09d9: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c09dd: je 0x5c09f0 */ if (fZ) goto L_005c09f0;
L_005c09df:; BB(0x005c09df);
    /* 005c09df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c09e1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c09e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c09e6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c09e9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c09ebu); call_ind(t); }
    /* 005c09eb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c09ee: jmp 0x5c09f7 */ goto L_005c09f7;
L_005c09f0:; BB(0x005c09f0);
    /* 005c09f0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c09f7:; BB(0x005c09f7);
    /* 005c09f7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c09fa: mov dword ptr [ecx + 0x1cb4], 0 */ W32((u32)(r_ecx+0x1cb4u), 0x0u);
L_005c0a04:; BB(0x005c0a04);
    /* 005c0a04: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c0a07: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x5c0a0cu); f_0044711a();
    /* 005c0a0c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0a0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0a0f: ret  */ FN_RET(0x005c0912); r_esp += 4; return;
}

void f_005c0a10(void) /* FUN_005c0a10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0a10);
    /* 005c0a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0a11: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0a13: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0a16: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c0a19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0a1c: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x5c0a21u); f_004476a6();
    /* 005c0a21: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c0a27: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5c0a2cu); f_005d9e23();
    /* 005c0a2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0a2f: mov dword ptr [ecx + 0x1cb8], eax */ W32((u32)(r_ecx+0x1cb8u), r_eax);
    /* 005c0a35: cmp dword ptr [0x6fc034], 0 */ {  u32 a = R32((u32)(0x6fc034u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0a3c: jne 0x5c0a71 */ if (!fZ) goto L_005c0a71;
L_005c0a3e:; BB(0x005c0a3e);
    /* 005c0a3e: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0a43: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c0a48u); f_0048ab58();
    /* 005c0a48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0a4b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c0a4e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0a52: je 0x5c0a61 */ if (fZ) goto L_005c0a61;
L_005c0a54:; BB(0x005c0a54);
    /* 005c0a54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0a57: call 0x5bb710 */ r_esp -= 4; W32(r_esp, 0x5c0a5cu); f_005bb710();
    /* 005c0a5c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c0a5f: jmp 0x5c0a68 */ goto L_005c0a68;
L_005c0a61:; BB(0x005c0a61);
    /* 005c0a61: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005c0a68:; BB(0x005c0a68);
    /* 005c0a68: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0a6b: mov dword ptr [0x6fc034], edx */ W32((u32)(0x6fc034u), r_edx);
L_005c0a71:; BB(0x005c0a71);
    /* 005c0a71: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0a73: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c0a78u); f_0048ab58();
    /* 005c0a78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0a7b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c0a7e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0a82: je 0x5c0a9f */ if (fZ) goto L_005c0a9f;
L_005c0a84:; BB(0x005c0a84);
    /* 005c0a84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0a86: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0a89: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5c0a8eu); f_005e6160();
    /* 005c0a8e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0a91: mov dword ptr [eax], 0x639f74 */ W32((u32)(r_eax), 0x639f74u);
    /* 005c0a97: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0a9a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c0a9d: jmp 0x5c0aa6 */ goto L_005c0aa6;
L_005c0a9f:; BB(0x005c0a9f);
    /* 005c0a9f: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005c0aa6:; BB(0x005c0aa6);
    /* 005c0aa6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c0aa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0aaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0aad: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x5c0ab2u); f_005e5d66();
    /* 005c0ab2: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0ab4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0ab5: ret  */ FN_RET(0x005c0a10); r_esp += 4; return;
}

void f_005c0ab6(void) /* FUN_005c0ab6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0ab6);
    /* 005c0ab6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ab7: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0ab9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0aba: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0abd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0ac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ac1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0ac4: call 0x447ba4 */ r_esp -= 4; W32(r_esp, 0x5c0ac9u); f_00447ba4();
    /* 005c0ac9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0acb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0acc: ret 4 */ FN_RET(0x005c0ab6); r_esp += 8; return;
}

void f_005c0acf(void) /* FUN_005c0acf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0acf);
    /* 005c0acf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ad0: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0ad2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ad3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0ad6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0ad9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c0adc: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x5c0ae1u); f_005e63b4();
    /* 005c0ae1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0ae4: jne 0x5c0aee */ if (!fZ) goto L_005c0aee;
L_005c0ae6:; BB(0x005c0ae6);
    /* 005c0ae6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0ae9: call 0x5c0f06 */ r_esp -= 4; W32(r_esp, 0x5c0aeeu); f_005c0f06();
L_005c0aee:; BB(0x005c0aee);
    /* 005c0aee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0af1: call 0x4240a0 */ r_esp -= 4; W32(r_esp, 0x5c0af6u); f_004240a0();
    /* 005c0af6: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0af8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0af9: ret  */ FN_RET(0x005c0acf); r_esp += 4; return;
}

void f_005c0afa(void) /* FUN_005c0afa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0afa);
    /* 005c0afa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0afb: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0afd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0afe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0b01: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0b06: mov eax, dword ptr [eax + 0x9c] */ r_eax = R32((u32)(r_eax+0x9cu));
    /* 005c0b0c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0b0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0b0f: ret  */ FN_RET(0x005c0afa); r_esp += 4; return;
}

void f_005c0b10(void) /* FUN_005c0b10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0b10);
    /* 005c0b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b11: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0b17: cmp dword ptr [0x6fc034], 0 */ {  u32 a = R32((u32)(0x6fc034u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0b1e: je 0x5c0b36 */ if (fZ) goto L_005c0b36;
L_005c0b20:; BB(0x005c0b20);
    /* 005c0b20: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0b25: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0b29: je 0x5c0b36 */ if (fZ) goto L_005c0b36;
L_005c0b2b:; BB(0x005c0b2b);
    /* 005c0b2b: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0b31: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005c0b34: jmp 0x5c0b38 */ goto L_005c0b38;
L_005c0b36:; BB(0x005c0b36);
    /* 005c0b36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c0b38:; BB(0x005c0b38);
    /* 005c0b38: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0b3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0b3b: ret  */ FN_RET(0x005c0b10); r_esp += 4; return;
}

void f_005c0b3c(void) /* FUN_005c0b3c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0b3c);
    /* 005c0b3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b3d: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0b3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b40: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0b43: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0b48: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0b4c: je 0x5c0b6a */ if (fZ) goto L_005c0b6a;
L_005c0b4e:; BB(0x005c0b4e);
    /* 005c0b4e: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0b54: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005c0b57: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c0b5a: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0b5d: jne 0x5c0b6a */ if (!fZ) goto L_005c0b6a;
L_005c0b5f:; BB(0x005c0b5f);
    /* 005c0b5f: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0b65: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005c0b68: jmp 0x5c0b6c */ goto L_005c0b6c;
L_005c0b6a:; BB(0x005c0b6a);
    /* 005c0b6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c0b6c:; BB(0x005c0b6c);
    /* 005c0b6c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0b6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0b6f: ret 4 */ FN_RET(0x005c0b3c); r_esp += 8; return;
}

void f_005c0b72(void) /* FUN_005c0b72 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0b72);
    /* 005c0b72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b73: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0b75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b76: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0b79: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0b7e: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0b82: je 0x5c0bad */ if (fZ) goto L_005c0bad;
L_005c0b84:; BB(0x005c0b84);
    /* 005c0b84: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0b8a: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005c0b8d: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x5c0b92u); f_004259cd();
    /* 005c0b92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b93: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c0b96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b97: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x5c0b9cu); f_006240c0();
    /* 005c0b9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0b9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0ba1: jne 0x5c0bad */ if (!fZ) goto L_005c0bad;
L_005c0ba3:; BB(0x005c0ba3);
    /* 005c0ba3: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0ba8: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005c0bab: jmp 0x5c0baf */ goto L_005c0baf;
L_005c0bad:; BB(0x005c0bad);
    /* 005c0bad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c0baf:; BB(0x005c0baf);
    /* 005c0baf: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0bb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0bb2: ret 4 */ FN_RET(0x005c0b72); r_esp += 8; return;
}

void f_005c0bb5(void) /* FUN_005c0bb5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0bb5);
    /* 005c0bb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0bb6: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0bb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0bb9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0bbc: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0bbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0bbf: ret  */ FN_RET(0x005c0bb5); r_esp += 4; return;
}

void f_005c0bc0(void) /* FUN_005c0bc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0bc0);
    /* 005c0bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0bc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0bc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0bc7: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0bcc: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005c0bd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0bd3: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0bd9: call 0x5bd3d2 */ r_esp -= 4; W32(r_esp, 0x5c0bdeu); f_005bd3d2();
    /* 005c0bde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0be0: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0be6: call 0x5bd45e */ r_esp -= 4; W32(r_esp, 0x5c0bebu); f_005bd45e();
    /* 005c0beb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0bed: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0bf3: call 0x5bd4a7 */ r_esp -= 4; W32(r_esp, 0x5c0bf8u); f_005bd4a7();
    /* 005c0bf8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0bfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0bfb: ret 4 */ FN_RET(0x005c0bc0); r_esp += 8; return;
}

void f_005c0bfe(void) /* FUN_005c0bfe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0bfe);
    /* 005c0bfe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0bff: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0c01: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0c04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0c07: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0c0c: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0c13: jne 0x5c0c2d */ if (!fZ) goto L_005c0c2d;
L_005c0c15:; BB(0x005c0c15);
    /* 005c0c15: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0c1b: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0c22: jne 0x5c0c2d */ if (!fZ) goto L_005c0c2d;
L_005c0c24:; BB(0x005c0c24);
    /* 005c0c24: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005c0c2b: jmp 0x5c0c34 */ goto L_005c0c34;
L_005c0c2d:; BB(0x005c0c2d);
    /* 005c0c2d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005c0c34:; BB(0x005c0c34);
    /* 005c0c34: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0c37: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0c39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0c3a: ret 4 */ FN_RET(0x005c0bfe); r_esp += 8; return;
}

void f_005c0c3d(void) /* FUN_005c0c3d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0c3d);
    /* 005c0c3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c3e: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0c40: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0c43: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c0c46: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c0c4d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005c0c54: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c0c5b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c0c62: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0c67: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005c0c6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c6e: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005c0c71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c72: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0c78: call 0x5bcf6f */ r_esp -= 4; W32(r_esp, 0x5c0c7du); f_005bcf6f();
    /* 005c0c7d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c0c7f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005c0c82: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c0c85: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005c0c88: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0c8d: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 005c0c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c94: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 005c0c97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c98: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0c9e: call 0x5bcf6f */ r_esp -= 4; W32(r_esp, 0x5c0ca3u); f_005bcf6f();
    /* 005c0ca3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c0ca5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005c0ca8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c0cab: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c0cae: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c0cb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0cb2: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005c0cb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0cb6: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005c0cb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0cba: call 0x429a59 */ r_esp -= 4; W32(r_esp, 0x5c0cbfu); f_00429a59();
    /* 005c0cbf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0cc2: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0cc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0cc5: ret 8 */ FN_RET(0x005c0c3d); r_esp += 12; return;
}

void f_005c0cc8(void) /* FUN_005c0cc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0cc8);
    /* 005c0cc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0cc9: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0ccb: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0cce: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c0cd1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c0cd8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c0cdf: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0ce4: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005c0cea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ceb: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005c0cee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0cef: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0cf5: call 0x5bcf6f */ r_esp -= 4; W32(r_esp, 0x5c0cfau); f_005bcf6f();
    /* 005c0cfa: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c0cfc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005c0cff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c0d02: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c0d05: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005c0d08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d09: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0d0f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005c0d12: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c0d15: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x5c0d1au); f_004267ae();
    /* 005c0d1a: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0d1f: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 005c0d25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d26: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005c0d29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d2a: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0d30: call 0x5bcf6f */ r_esp -= 4; W32(r_esp, 0x5c0d35u); f_005bcf6f();
    /* 005c0d35: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c0d37: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005c0d3a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c0d3d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c0d40: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005c0d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d44: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0d4a: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005c0d4d: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c0d50: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x5c0d55u); f_004267ae();
    /* 005c0d55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d57: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0d5d: call 0x5bd45e */ r_esp -= 4; W32(r_esp, 0x5c0d62u); f_005bd45e();
    /* 005c0d62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d64: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0d6a: call 0x5bd4a7 */ r_esp -= 4; W32(r_esp, 0x5c0d6fu); f_005bd4a7();
    /* 005c0d6f: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0d74: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 005c0d7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d7b: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0d81: call 0x5bd3d2 */ r_esp -= 4; W32(r_esp, 0x5c0d86u); f_005bd3d2();
    /* 005c0d86: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0d88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0d89: ret  */ FN_RET(0x005c0cc8); r_esp += 4; return;
}

void f_005c0d8a(void) /* FUN_005c0d8a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0d8a);
    /* 005c0d8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d8b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0d8d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0d90: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c0d93: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005c0d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d97: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0d9d: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005c0da0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c0da3: call 0x4267fb */ r_esp -= 4; W32(r_esp, 0x5c0da8u); f_004267fb();
    /* 005c0da8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0dab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0dac: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005c0daf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0db0: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0db6: call 0x5bcf6f */ r_esp -= 4; W32(r_esp, 0x5c0dbbu); f_005bcf6f();
    /* 005c0dbb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c0dbd: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005c0dc0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c0dc3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c0dc6: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005c0dc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0dca: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005c0dcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0dce: call 0x600940 */ r_esp -= 4; W32(r_esp, 0x5c0dd3u); f_00600940();
    /* 005c0dd3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0dd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0dd8: je 0x5c0df0 */ if (fZ) goto L_005c0df0;
L_005c0dda:; BB(0x005c0dda);
    /* 005c0dda: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0ddd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0dde: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0de1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0de2: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0de8: call 0x5bd13a */ r_esp -= 4; W32(r_esp, 0x5c0dedu); f_005bd13a();
    /* 005c0ded: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005c0df0:; BB(0x005c0df0);
    /* 005c0df0: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005c0df6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0df9: add eax, dword ptr [edx + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0dff: cmp eax, 0x3b9ac9ff */ {  u32 a = r_eax; u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c0e04: jbe 0x5c0e1a */ if ((fC||fZ)) goto L_005c0e1a;
L_005c0e06:; BB(0x005c0e06);
    /* 005c0e06: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0e0c: mov edx, 0x3b9ac9ff */ r_edx = 0x3b9ac9ffu;
    /* 005c0e11: sub edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c0e17: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_005c0e1a:; BB(0x005c0e1a);
    /* 005c0e1a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0e1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0e1e: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005c0e21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0e22: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0e28: call 0x5bcf6f */ r_esp -= 4; W32(r_esp, 0x5c0e2du); f_005bcf6f();
    /* 005c0e2d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c0e2f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005c0e32: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c0e35: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c0e38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0e3b: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c0e3e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c0e41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0e44: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c0e47: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c0e4a: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005c0e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0e4e: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0e54: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005c0e57: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c0e5a: call 0x4267ae */ r_esp -= 4; W32(r_esp, 0x5c0e5fu); f_004267ae();
    /* 005c0e5f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0e63: je 0x5c0f00 */ if (fZ) goto L_005c0f00;
L_005c0e69:; BB(0x005c0e69);
    /* 005c0e69: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0e6e: cmp dword ptr [eax + 0xa8], 0 */ {  u32 a = R32((u32)(r_eax+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0e75: jne 0x5c0e91 */ if (!fZ) goto L_005c0e91;
L_005c0e77:; BB(0x005c0e77);
    /* 005c0e77: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0e7d: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0e84: jne 0x5c0e91 */ if (!fZ) goto L_005c0e91;
L_005c0e86:; BB(0x005c0e86);
    /* 005c0e86: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0e8c: call 0x5bd6e5 */ r_esp -= 4; W32(r_esp, 0x5c0e91u); f_005bd6e5();
L_005c0e91:; BB(0x005c0e91);
    /* 005c0e91: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c0e94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0e95: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0e9b: call 0x5bd36b */ r_esp -= 4; W32(r_esp, 0x5c0ea0u); f_005bd36b();
    /* 005c0ea0: mov eax, dword ptr [0x6fc030] */ r_eax = R32((u32)(0x6fc030u));
    /* 005c0ea5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c0ea8: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x5c0eadu); f_005e63b4();
    /* 005c0ead: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0eb0: jne 0x5c0eda */ if (!fZ) goto L_005c0eda;
L_005c0eb2:; BB(0x005c0eb2);
    /* 005c0eb2: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c0eb8: call 0x45cb85 */ r_esp -= 4; W32(r_esp, 0x5c0ebdu); f_0045cb85();
    /* 005c0ebd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0ebf: je 0x5c0eda */ if (fZ) goto L_005c0eda;
L_005c0ec1:; BB(0x005c0ec1);
    /* 005c0ec1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ec3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ec5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ec7: push 0x19268 */ { u32 v = 0x19268u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ecc: mov ecx, dword ptr [0x6fc030] */ r_ecx = R32((u32)(0x6fc030u));
    /* 005c0ed2: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 005c0ed5: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5c0edau); f_005e8389();
L_005c0eda:; BB(0x005c0eda);
    /* 005c0eda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0edc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c0edf: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c0ee2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c0ee5: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c0ee8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c0eea: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c0eedu); call_ind(t); }
    /* 005c0eed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0eef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c0ef2: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005c0ef5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c0ef8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c0efb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c0efd: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c0f00u); call_ind(t); }
L_005c0f00:; BB(0x005c0f00);
    /* 005c0f00: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0f02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0f03: ret 4 */ FN_RET(0x005c0d8a); r_esp += 8; return;
}

void f_005c0f06(void) /* FUN_005c0f06 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0f06);
    /* 005c0f06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f07: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0f09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f0a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0f0d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c0f13: call 0x45cb5f */ r_esp -= 4; W32(r_esp, 0x5c0f18u); f_0045cb5f();
    /* 005c0f18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0f1a: jne 0x5c0f1e */ if (!fZ) goto L_005c0f1e;
L_005c0f1c:; BB(0x005c0f1c);
    /* 005c0f1c: jmp 0x5c0f26 */ goto L_005c0f26;
L_005c0f1e:; BB(0x005c0f1e);
    /* 005c0f1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0f21: call 0x5c0f2a */ r_esp -= 4; W32(r_esp, 0x5c0f26u); f_005c0f2a();
L_005c0f26:; BB(0x005c0f26);
    /* 005c0f26: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0f28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0f29: ret  */ FN_RET(0x005c0f06); r_esp += 4; return;
}

void f_005c0f2a(void) /* FUN_005c0f2a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0f2a);
    /* 005c0f2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f2b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0f2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f2e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c0f31: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c0f37: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5c0f3cu); f_005d9e23();
    /* 005c0f3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0f3f: cmp eax, dword ptr [ecx + 0x1cb8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0f45: jle 0x5c0f76 */ if ((fZ||fS!=fO)) goto L_005c0f76;
L_005c0f47:; BB(0x005c0f47);
    /* 005c0f47: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c0f4d: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5c0f52u); f_005d9e23();
    /* 005c0f52: add eax, 0xa8c */ {  u32 a = r_eax; u32 b = 0xa8cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0f57: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0f5a: mov dword ptr [edx + 0x1cb8], eax */ W32((u32)(r_edx+0x1cb8u), r_eax);
    /* 005c0f60: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f64: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f66: push 0x1925c */ { u32 v = 0x1925cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0f6e: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005c0f71: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5c0f76u); f_005e8389();
L_005c0f76:; BB(0x005c0f76);
    /* 005c0f76: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0f78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0f79: ret  */ FN_RET(0x005c0f2a); r_esp += 4; return;
}

void f_005c0f7a(void) /* FUN_005c0f7a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0f7a);
    /* 005c0f7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f7b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0f7d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0f80: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c0f83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0f86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f87: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0f8a: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5c0f8fu); f_005e626d();
    /* 005c0f8f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0f92: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005c0f95: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005c0f98: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c0f9c: ja 0x5c10bb */ if ((!fC&&!fZ)) goto L_005c10bb;
L_005c0fa2:; BB(0x005c0fa2);
    /* 005c0fa2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0fa5: jmp dword ptr [eax*4 + 0x5c10c1] */ { u32 t = R32((u32)(r_eax*4+0x5c10c1u)); switch (t) { case 0x5c0facu: goto L_005c0fac; case 0x5c0fd6u: goto L_005c0fd6; case 0x5c103cu: goto L_005c103c; case 0x5c10b0u: goto L_005c10b0; default: UNSUP(0x005c0fa5, "jump table entry is not a known target"); } }
L_005c0fac:; BB(0x005c0fac);
    /* 005c0fac: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0fb2: call 0x5bbfbf */ r_esp -= 4; W32(r_esp, 0x5c0fb7u); f_005bbfbf();
    /* 005c0fb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0fb9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0fbc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c0fbe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0fc1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c0fc4u); call_ind(t); }
    /* 005c0fc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0fc6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0fc9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c0fcb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c0fce: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c0fd1u); call_ind(t); }
    /* 005c0fd1: jmp 0x5c10bb */ goto L_005c10bb;
L_005c0fd6:; BB(0x005c0fd6);
    /* 005c0fd6: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c0fdb: mov dword ptr [eax + 0x9c], 1 */ W32((u32)(r_eax+0x9cu), 0x1u);
    /* 005c0fe5: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0feb: call 0x5bd2c0 */ r_esp -= 4; W32(r_esp, 0x5c0ff0u); f_005bd2c0();
    /* 005c0ff0: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c0ff6: cmp dword ptr [ecx + 0xa8], 0 */ {  u32 a = R32((u32)(r_ecx+0xa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0ffd: jne 0x5c1015 */ if (!fZ) goto L_005c1015;
L_005c0fff:; BB(0x005c0fff);
    /* 005c0fff: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005c1005: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005c1008: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c100d: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005c1010: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1012: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5c1015u); call_ind(t); }
L_005c1015:; BB(0x005c1015);
    /* 005c1015: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c101b: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1022: jne 0x5c102f */ if (!fZ) goto L_005c102f;
L_005c1024:; BB(0x005c1024);
    /* 005c1024: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c102a: call 0x5bde00 */ r_esp -= 4; W32(r_esp, 0x5c102fu); f_005bde00();
L_005c102f:; BB(0x005c102f);
    /* 005c102f: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c1035: call 0x5bdaa0 */ r_esp -= 4; W32(r_esp, 0x5c103au); f_005bdaa0();
    /* 005c103a: jmp 0x5c10bb */ goto L_005c10bb;
L_005c103c:; BB(0x005c103c);
    /* 005c103c: mov edx, dword ptr [0x6fc034] */ r_edx = R32((u32)(0x6fc034u));
    /* 005c1042: mov dword ptr [edx + 0x9c], 0 */ W32((u32)(r_edx+0x9cu), 0x0u);
    /* 005c104c: mov eax, dword ptr [0x6fc034] */ r_eax = R32((u32)(0x6fc034u));
    /* 005c1051: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1058: jne 0x5c1065 */ if (!fZ) goto L_005c1065;
L_005c105a:; BB(0x005c105a);
    /* 005c105a: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c1060: call 0x5be6df */ r_esp -= 4; W32(r_esp, 0x5c1065u); f_005be6df();
L_005c1065:; BB(0x005c1065);
    /* 005c1065: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c106b: call 0x5bdc1f */ r_esp -= 4; W32(r_esp, 0x5c1070u); f_005bdc1f();
    /* 005c1070: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c1076: call 0x5bd6e5 */ r_esp -= 4; W32(r_esp, 0x5c107bu); f_005bd6e5();
    /* 005c107b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c107d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c1082u); f_0048ab58();
    /* 005c1082: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1085: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c1088: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c108c: je 0x5c109b */ if (fZ) goto L_005c109b;
L_005c108e:; BB(0x005c108e);
    /* 005c108e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1091: call 0x5beb2a */ r_esp -= 4; W32(r_esp, 0x5c1096u); f_005beb2a();
    /* 005c1096: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c1099: jmp 0x5c10a2 */ goto L_005c10a2;
L_005c109b:; BB(0x005c109b);
    /* 005c109b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005c10a2:; BB(0x005c10a2);
    /* 005c10a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c10a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c10a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c10a9: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x5c10aeu); f_005e62ca();
    /* 005c10ae: jmp 0x5c10bb */ goto L_005c10bb;
L_005c10b0:; BB(0x005c10b0);
    /* 005c10b0: mov ecx, dword ptr [0x6fc034] */ r_ecx = R32((u32)(0x6fc034u));
    /* 005c10b6: call 0x5bdcbd */ r_esp -= 4; W32(r_esp, 0x5c10bbu); f_005bdcbd();
L_005c10bb:; BB(0x005c10bb);
    /* 005c10bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005c10bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c10be: ret 4 */ FN_RET(0x005c0f7a); r_esp += 8; return;
}

void f_005c10e0(void) /* FUN_005c10e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c10e0);
    /* 005c10e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c10e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c10e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c10e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c10e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c10ea: call 0x5c0912 */ r_esp -= 4; W32(r_esp, 0x5c10efu); f_005c0912();
    /* 005c10ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c10f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c10f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c10f7: je 0x5c1105 */ if (fZ) goto L_005c1105;
L_005c10f9:; BB(0x005c10f9);
    /* 005c10f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c10fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c10fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c1102u); f_0048ac1b();
    /* 005c1102: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c1105:; BB(0x005c1105);
    /* 005c1105: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1108: mov esp, ebp */ r_esp = r_ebp;
    /* 005c110a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c110b: ret 4 */ FN_RET(0x005c10e0); r_esp += 8; return;
}

void f_005c1110(void) /* FUN_005c1110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1110);
    /* 005c1110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1111: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1113: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1116: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c1119: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c111c: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x5c1121u); f_00446fe0();
    /* 005c1121: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1124: mov dword ptr [eax], 0x639f8c */ W32((u32)(r_eax), 0x639f8cu);
    /* 005c112a: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1131: je 0x5c1175 */ if (fZ) goto L_005c1175;
L_005c1133:; BB(0x005c1133);
    /* 005c1133: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c1139: call 0x5eb284 */ r_esp -= 4; W32(r_esp, 0x5c113eu); f_005eb284();
    /* 005c113e: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c1144: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c1147: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c114a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c114d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1151: je 0x5c1164 */ if (fZ) goto L_005c1164;
L_005c1153:; BB(0x005c1153);
    /* 005c1153: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1155: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1158: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c115a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c115d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c115fu); call_ind(t); }
    /* 005c115f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c1162: jmp 0x5c116b */ goto L_005c116b;
L_005c1164:; BB(0x005c1164);
    /* 005c1164: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005c116b:; BB(0x005c116b);
    /* 005c116b: mov dword ptr [0x6fc470], 0 */ W32((u32)(0x6fc470u), 0x0u);
L_005c1175:; BB(0x005c1175);
    /* 005c1175: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1178: mov dword ptr [0x6fc080], eax */ W32((u32)(0x6fc080u), r_eax);
    /* 005c117d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c117f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c1185: call 0x460a16 */ r_esp -= 4; W32(r_esp, 0x5c118au); f_00460a16();
    /* 005c118a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c118d: jl 0x5c119e */ if ((fS!=fO)) goto L_005c119e;
L_005c118f:; BB(0x005c118f);
    /* 005c118f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1192: mov dword ptr [ecx + 0x1cb4], 1 */ W32((u32)(r_ecx+0x1cb4u), 0x1u);
    /* 005c119c: jmp 0x5c11ab */ goto L_005c11ab;
L_005c119e:; BB(0x005c119e);
    /* 005c119e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c11a1: mov dword ptr [edx + 0x1cb4], 0 */ W32((u32)(r_edx+0x1cb4u), 0x0u);
L_005c11ab:; BB(0x005c11ab);
    /* 005c11ab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c11ae: mov dword ptr [eax + 0x1cb8], 0 */ W32((u32)(r_eax+0x1cb8u), 0x0u);
    /* 005c11b8: push 0x41c */ { u32 v = 0x41cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c11bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c11c0: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c11c5u); f_005e5ec3();
    /* 005c11c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c11c8: mov dword ptr [ecx + 0x1cb0], 0 */ W32((u32)(r_ecx+0x1cb0u), 0x0u);
    /* 005c11d2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c11d5: mov dword ptr [edx + 0x1cbc], 0 */ W32((u32)(r_edx+0x1cbcu), 0x0u);
    /* 005c11df: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c11e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005c11e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c11e5: ret  */ FN_RET(0x005c1110); r_esp += 4; return;
}

void f_005c11e6(void) /* FUN_005c11e6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c11e6);
    /* 005c11e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c11e7: mov ebp, esp */ r_ebp = r_esp;
    /* 005c11e9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c11ec: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c11ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c11f2: mov dword ptr [eax], 0x639f8c */ W32((u32)(r_eax), 0x639f8cu);
    /* 005c11f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c11fb: cmp dword ptr [ecx + 0x1cb0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1202: je 0x5c1241 */ if (fZ) goto L_005c1241;
L_005c1204:; BB(0x005c1204);
    /* 005c1204: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1207: mov eax, dword ptr [edx + 0x1cb0] */ r_eax = R32((u32)(r_edx+0x1cb0u));
    /* 005c120d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c1210: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1213: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1216: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c121a: je 0x5c122d */ if (fZ) goto L_005c122d;
L_005c121c:; BB(0x005c121c);
    /* 005c121c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c121e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1221: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1223: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1226: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c1228u); call_ind(t); }
    /* 005c1228: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c122b: jmp 0x5c1234 */ goto L_005c1234;
L_005c122d:; BB(0x005c122d);
    /* 005c122d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005c1234:; BB(0x005c1234);
    /* 005c1234: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1237: mov dword ptr [ecx + 0x1cb0], 0 */ W32((u32)(r_ecx+0x1cb0u), 0x0u);
L_005c1241:; BB(0x005c1241);
    /* 005c1241: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1244: cmp dword ptr [edx + 0x1cbc], 0 */ {  u32 a = R32((u32)(r_edx+0x1cbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c124b: je 0x5c128a */ if (fZ) goto L_005c128a;
L_005c124d:; BB(0x005c124d);
    /* 005c124d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1250: mov ecx, dword ptr [eax + 0x1cbc] */ r_ecx = R32((u32)(r_eax+0x1cbcu));
    /* 005c1256: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c1259: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c125c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005c125f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1263: je 0x5c1276 */ if (fZ) goto L_005c1276;
L_005c1265:; BB(0x005c1265);
    /* 005c1265: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1267: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c126a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c126c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c126f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c1271u); call_ind(t); }
    /* 005c1271: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c1274: jmp 0x5c127d */ goto L_005c127d;
L_005c1276:; BB(0x005c1276);
    /* 005c1276: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005c127d:; BB(0x005c127d);
    /* 005c127d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1280: mov dword ptr [eax + 0x1cbc], 0 */ W32((u32)(r_eax+0x1cbcu), 0x0u);
L_005c128a:; BB(0x005c128a);
    /* 005c128a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c128d: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x5c1292u); f_0044711a();
    /* 005c1292: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1294: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1295: ret  */ FN_RET(0x005c11e6); r_esp += 4; return;
}

void f_005c1296(void) /* FUN_005c1296 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1296);
    /* 005c1296: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1297: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1299: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c129c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c129f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c12a2: mov dword ptr [eax + 0x1cb8], 0 */ W32((u32)(r_eax+0x1cb8u), 0x0u);
    /* 005c12ac: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c12af: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x5c12b4u); f_004476a6();
    /* 005c12b4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c12b7: cmp dword ptr [ecx + 0x1cb0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c12be: jne 0x5c12f7 */ if (!fZ) goto L_005c12f7;
L_005c12c0:; BB(0x005c12c0);
    /* 005c12c0: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c12c2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c12c7u); f_0048ab58();
    /* 005c12c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c12ca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c12cd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c12d1: je 0x5c12e4 */ if (fZ) goto L_005c12e4;
L_005c12d3:; BB(0x005c12d3);
    /* 005c12d3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c12d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c12d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c12da: call 0x48be00 */ r_esp -= 4; W32(r_esp, 0x5c12dfu); f_0048be00();
    /* 005c12df: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c12e2: jmp 0x5c12eb */ goto L_005c12eb;
L_005c12e4:; BB(0x005c12e4);
    /* 005c12e4: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005c12eb:; BB(0x005c12eb);
    /* 005c12eb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c12ee: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c12f1: mov dword ptr [eax + 0x1cb0], ecx */ W32((u32)(r_eax+0x1cb0u), r_ecx);
L_005c12f7:; BB(0x005c12f7);
    /* 005c12f7: cmp dword ptr [0x6f7050], 0 */ {  u32 a = R32((u32)(0x6f7050u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c12fe: jne 0x5c1317 */ if (!fZ) goto L_005c1317;
L_005c1300:; BB(0x005c1300);
    /* 005c1300: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1302: push 0x4b3 */ { u32 v = 0x4b3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1307: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c130a: mov ecx, dword ptr [edx + 0x1cb0] */ r_ecx = R32((u32)(r_edx+0x1cb0u));
    /* 005c1310: call 0x48c06d */ r_esp -= 4; W32(r_esp, 0x5c1315u); f_0048c06d();
    /* 005c1315: jmp 0x5c132d */ goto L_005c132d;
L_005c1317:; BB(0x005c1317);
    /* 005c1317: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1319: mov eax, dword ptr [0x6f7050] */ r_eax = R32((u32)(0x6f7050u));
    /* 005c131e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c131f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1322: mov ecx, dword ptr [ecx + 0x1cb0] */ r_ecx = R32((u32)(r_ecx+0x1cb0u));
    /* 005c1328: call 0x48c06d */ r_esp -= 4; W32(r_esp, 0x5c132du); f_0048c06d();
L_005c132d:; BB(0x005c132d);
    /* 005c132d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1330: cmp dword ptr [edx + 0x1cbc], 0 */ {  u32 a = R32((u32)(r_edx+0x1cbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1337: jne 0x5c136e */ if (!fZ) goto L_005c136e;
L_005c1339:; BB(0x005c1339);
    /* 005c1339: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005c133b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c1340u); f_0048ab58();
    /* 005c1340: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1343: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c1346: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c134a: je 0x5c135b */ if (fZ) goto L_005c135b;
L_005c134c:; BB(0x005c134c);
    /* 005c134c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c134e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1351: call 0x5e82f0 */ r_esp -= 4; W32(r_esp, 0x5c1356u); f_005e82f0();
    /* 005c1356: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c1359: jmp 0x5c1362 */ goto L_005c1362;
L_005c135b:; BB(0x005c135b);
    /* 005c135b: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005c1362:; BB(0x005c1362);
    /* 005c1362: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1365: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1368: mov dword ptr [eax + 0x1cbc], ecx */ W32((u32)(r_eax+0x1cbcu), r_ecx);
L_005c136e:; BB(0x005c136e);
    /* 005c136e: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1375: jne 0x5c1467 */ if (!fZ) goto L_005c1467;
L_005c137b:; BB(0x005c137b);
    /* 005c137b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c1381: call 0x45cd8e */ r_esp -= 4; W32(r_esp, 0x5c1386u); f_0045cd8e();
    /* 005c1386: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1389: jne 0x5c1467 */ if (!fZ) goto L_005c1467;
L_005c138f:; BB(0x005c138f);
    /* 005c138f: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1396: jne 0x5c1467 */ if (!fZ) goto L_005c1467;
L_005c139c:; BB(0x005c139c);
    /* 005c139c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c139f: call 0x5c16aa */ r_esp -= 4; W32(r_esp, 0x5c13a4u); f_005c16aa();
    /* 005c13a4: push 0x1d60 */ { u32 v = 0x1d60u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13a9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c13aeu); f_0048ab58();
    /* 005c13ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c13b1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c13b4: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c13b8: je 0x5c13cd */ if (fZ) goto L_005c13cd;
L_005c13ba:; BB(0x005c13ba);
    /* 005c13ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c13c3: call 0x482ab0 */ r_esp -= 4; W32(r_esp, 0x5c13c8u); f_00482ab0();
    /* 005c13c8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c13cb: jmp 0x5c13d4 */ goto L_005c13d4;
L_005c13cd:; BB(0x005c13cd);
    /* 005c13cd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c13d4:; BB(0x005c13d4);
    /* 005c13d4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c13d7: mov dword ptr [0x6f6a18], edx */ W32((u32)(0x6f6a18u), r_edx);
    /* 005c13dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13df: push 0x526 */ { u32 v = 0x526u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13e4: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c13ea: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x5c13efu); f_005e0461();
    /* 005c13ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13f1: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c13f7: call 0x483e0e */ r_esp -= 4; W32(r_esp, 0x5c13fcu); f_00483e0e();
    /* 005c13fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1400: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c1406: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x5c140bu); f_005d81dc();
    /* 005c140b: cmp dword ptr [0x6f6f10], 0 */ {  u32 a = R32((u32)(0x6f6f10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1412: je 0x5c145c */ if (fZ) goto L_005c145c;
L_005c1414:; BB(0x005c1414);
    /* 005c1414: mov eax, dword ptr [0x6f6a18] */ r_eax = R32((u32)(0x6f6a18u));
    /* 005c1419: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005c141f: call 0x5de399 */ r_esp -= 4; W32(r_esp, 0x5c1424u); f_005de399();
    /* 005c1424: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1426: je 0x5c145c */ if (fZ) goto L_005c145c;
L_005c1428:; BB(0x005c1428);
    /* 005c1428: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c142e: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 005c1434: mov edx, dword ptr [0x6f6a18] */ r_edx = R32((u32)(0x6f6a18u));
    /* 005c143a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005c1440: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1442: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5c1445u); call_ind(t); }
    /* 005c1445: push 0x2330 */ { u32 v = 0x2330u; r_esp -= 4; W32(r_esp, v); }
    /* 005c144a: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005c144f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1451: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c1457: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c145au); call_ind(t); }
    /* 005c145a: jmp 0x5c1467 */ goto L_005c1467;
L_005c145c:; BB(0x005c145c);
    /* 005c145c: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c1462: call 0x4856fc */ r_esp -= 4; W32(r_esp, 0x5c1467u); f_004856fc();
L_005c1467:; BB(0x005c1467);
    /* 005c1467: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1469: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c146eu); f_0048ab58();
    /* 005c146e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1471: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c1474: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1478: je 0x5c1495 */ if (fZ) goto L_005c1495;
L_005c147a:; BB(0x005c147a);
    /* 005c147a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c147c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c147f: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5c1484u); f_005e6160();
    /* 005c1484: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c1487: mov dword ptr [eax], 0x63a044 */ W32((u32)(r_eax), 0x63a044u);
    /* 005c148d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c1490: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c1493: jmp 0x5c149c */ goto L_005c149c;
L_005c1495:; BB(0x005c1495);
    /* 005c1495: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c149c:; BB(0x005c149c);
    /* 005c149c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c149f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c14a0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c14a3: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x5c14a8u); f_005e5d66();
    /* 005c14a8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c14ab: cmp dword ptr [eax + 0x1cb4], 0 */ {  u32 a = R32((u32)(r_eax+0x1cb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c14b2: je 0x5c14fe */ if (fZ) goto L_005c14fe;
L_005c14b4:; BB(0x005c14b4);
    /* 005c14b4: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c14ba: call 0x45cb5f */ r_esp -= 4; W32(r_esp, 0x5c14bfu); f_0045cb5f();
    /* 005c14bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c14c1: je 0x5c14fe */ if (fZ) goto L_005c14fe;
L_005c14c3:; BB(0x005c14c3);
    /* 005c14c3: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005c14c9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c14cc: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005c14d2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c14d5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c14d9: jne 0x5c14fe */ if (!fZ) goto L_005c14fe;
L_005c14db:; BB(0x005c14db);
    /* 005c14db: push 0x18a89 */ { u32 v = 0x18a89u; r_esp -= 4; W32(r_esp, v); }
    /* 005c14e0: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005c14e6: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005c14e9: call 0x6003da */ r_esp -= 4; W32(r_esp, 0x5c14eeu); f_006003da();
    /* 005c14ee: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c14f1: mov eax, dword ptr [edx + 0x1cbc] */ r_eax = R32((u32)(r_edx+0x1cbcu));
    /* 005c14f7: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_005c14fe:; BB(0x005c14fe);
    /* 005c14fe: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1500: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1501: ret  */ FN_RET(0x005c1296); r_esp += 4; return;
}

void f_005c1502(void) /* FUN_005c1502 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1502);
    /* 005c1502: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1503: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1505: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1508: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c150b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c150e: call 0x4240a0 */ r_esp -= 4; W32(r_esp, 0x5c1513u); f_004240a0();
    /* 005c1513: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1516: mov ecx, dword ptr [eax + 0x1cb8] */ r_ecx = R32((u32)(r_eax+0x1cb8u));
    /* 005c151c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c151f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1522: mov dword ptr [edx + 0x1cb8], ecx */ W32((u32)(r_edx+0x1cb8u), r_ecx);
    /* 005c1528: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c152e: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5c1533u); f_005d9e23();
    /* 005c1533: mov ecx, dword ptr [0x676aa8] */ r_ecx = R32((u32)(0x676aa8u));
    /* 005c1539: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c153b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c153e: cmp dword ptr [ebp - 4], 0x1c20 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1c20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1545: jg 0x5c155f */ if ((!fZ&&fS==fO)) goto L_005c155f;
L_005c1547:; BB(0x005c1547);
    /* 005c1547: cmp dword ptr [ebp - 4], 0x1ba8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1ba8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c154e: jl 0x5c155f */ if ((fS!=fO)) goto L_005c155f;
L_005c1550:; BB(0x005c1550);
    /* 005c1550: push 0xc738 */ { u32 v = 0xc738u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1555: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1558: call 0x5c15b4 */ r_esp -= 4; W32(r_esp, 0x5c155du); f_005c15b4();
    /* 005c155d: jmp 0x5c1597 */ goto L_005c1597;
L_005c155f:; BB(0x005c155f);
    /* 005c155f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1562: cmp dword ptr [edx + 0x1cb8], 0x1518 */ {  u32 a = R32((u32)(r_edx+0x1cb8u)); u32 b = 0x1518u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c156c: jl 0x5c1597 */ if ((fS!=fO)) goto L_005c1597;
L_005c156e:; BB(0x005c156e);
    /* 005c156e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1571: mov dword ptr [eax + 0x1cb8], 0 */ W32((u32)(r_eax+0x1cb8u), 0x0u);
    /* 005c157b: mov ecx, dword ptr [0x6fc084] */ r_ecx = R32((u32)(0x6fc084u));
    /* 005c1581: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1582: push 0x698154 */ { u32 v = 0x698154u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1587: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5c158cu); f_0060fc40();
    /* 005c158c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c158f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1592: call 0x5c161a */ r_esp -= 4; W32(r_esp, 0x5c1597u); f_005c161a();
L_005c1597:; BB(0x005c1597);
    /* 005c1597: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1599: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c159a: ret  */ FN_RET(0x005c1502); r_esp += 4; return;
}

void f_005c159b(void) /* FUN_005c159b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c159b);
    /* 005c159b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c159c: mov ebp, esp */ r_ebp = r_esp;
    /* 005c159e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c159f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c15a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c15a5: mov ecx, dword ptr [eax + 0x1cbc] */ r_ecx = R32((u32)(r_eax+0x1cbcu));
    /* 005c15ab: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x5c15b0u); f_005e84af();
    /* 005c15b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005c15b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c15b3: ret  */ FN_RET(0x005c159b); r_esp += 4; return;
}

void f_005c15b4(void) /* FUN_005c15b4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c15b4);
    /* 005c15b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c15b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005c15b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c15b8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c15bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c15be: mov dword ptr [eax + 0x1cb8], 0 */ W32((u32)(r_eax+0x1cb8u), 0x0u);
    /* 005c15c8: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c15ce: call 0x45cb5f */ r_esp -= 4; W32(r_esp, 0x5c15d3u); f_0045cb5f();
    /* 005c15d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c15d5: jne 0x5c15d9 */ if (!fZ) goto L_005c15d9;
L_005c15d7:; BB(0x005c15d7);
    /* 005c15d7: jmp 0x5c1614 */ goto L_005c1614;
L_005c15d9:; BB(0x005c15d9);
    /* 005c15d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c15dc: cmp dword ptr [ecx + 0x1cbc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c15e3: jne 0x5c15e7 */ if (!fZ) goto L_005c15e7;
L_005c15e5:; BB(0x005c15e5);
    /* 005c15e5: jmp 0x5c1614 */ goto L_005c1614;
L_005c15e7:; BB(0x005c15e7);
    /* 005c15e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c15ea: mov ecx, dword ptr [edx + 0x1cbc] */ r_ecx = R32((u32)(r_edx+0x1cbcu));
    /* 005c15f0: call 0x5e850f */ r_esp -= 4; W32(r_esp, 0x5c15f5u); f_005e850f();
    /* 005c15f5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c15f8: je 0x5c15fc */ if (fZ) goto L_005c15fc;
L_005c15fa:; BB(0x005c15fa);
    /* 005c15fa: jmp 0x5c1614 */ goto L_005c1614;
L_005c15fc:; BB(0x005c15fc);
    /* 005c15fc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c15fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1600: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1602: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c1605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1606: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1609: mov ecx, dword ptr [ecx + 0x1cbc] */ r_ecx = R32((u32)(r_ecx+0x1cbcu));
    /* 005c160f: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5c1614u); f_005e8389();
L_005c1614:; BB(0x005c1614);
    /* 005c1614: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1616: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1617: ret 4 */ FN_RET(0x005c15b4); r_esp += 8; return;
}

void f_005c161a(void) /* FUN_005c161a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c161a);
    /* 005c161a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c161b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c161d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c161e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1621: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1624: mov dword ptr [eax + 0x1cb8], 0 */ W32((u32)(r_eax+0x1cb8u), 0x0u);
    /* 005c162e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1631: mov ecx, dword ptr [ecx + 0x1cbc] */ r_ecx = R32((u32)(r_ecx+0x1cbcu));
    /* 005c1637: call 0x5e850f */ r_esp -= 4; W32(r_esp, 0x5c163cu); f_005e850f();
    /* 005c163c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c163f: je 0x5c1643 */ if (fZ) goto L_005c1643;
L_005c1641:; BB(0x005c1641);
    /* 005c1641: jmp 0x5c16a6 */ goto L_005c16a6;
L_005c1643:; BB(0x005c1643);
    /* 005c1643: mov edx, dword ptr [0x6fc084] */ r_edx = R32((u32)(0x6fc084u));
    /* 005c1649: cmp dword ptr [edx*4 + 0x6fc038], 0xc751 */ {  u32 a = R32((u32)(r_edx*4+0x6fc038u)); u32 b = 0xc751u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1654: jl 0x5c1668 */ if ((fS!=fO)) goto L_005c1668;
L_005c1656:; BB(0x005c1656);
    /* 005c1656: mov eax, dword ptr [0x6fc084] */ r_eax = R32((u32)(0x6fc084u));
    /* 005c165b: cmp dword ptr [eax*4 + 0x6fc038], 0xc763 */ {  u32 a = R32((u32)(r_eax*4+0x6fc038u)); u32 b = 0xc763u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1666: jle 0x5c1672 */ if ((fZ||fS!=fO)) goto L_005c1672;
L_005c1668:; BB(0x005c1668);
    /* 005c1668: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c166b: call 0x5c16aa */ r_esp -= 4; W32(r_esp, 0x5c1670u); f_005c16aa();
    /* 005c1670: jmp 0x5c16a6 */ goto L_005c16a6;
L_005c1672:; BB(0x005c1672);
    /* 005c1672: mov ecx, dword ptr [0x6fc084] */ r_ecx = R32((u32)(0x6fc084u));
    /* 005c1678: mov edx, dword ptr [ecx*4 + 0x6fc038] */ r_edx = R32((u32)(r_ecx*4+0x6fc038u));
    /* 005c167f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1680: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1683: call 0x5c15b4 */ r_esp -= 4; W32(r_esp, 0x5c1688u); f_005c15b4();
    /* 005c1688: mov eax, dword ptr [0x6fc084] */ r_eax = R32((u32)(0x6fc084u));
    /* 005c168d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1690: mov dword ptr [0x6fc084], eax */ W32((u32)(0x6fc084u), r_eax);
    /* 005c1695: cmp dword ptr [0x6fc084], 0x12 */ {  u32 a = R32((u32)(0x6fc084u)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c169c: jl 0x5c16a6 */ if ((fS!=fO)) goto L_005c16a6;
L_005c169e:; BB(0x005c169e);
    /* 005c169e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c16a1: call 0x5c16aa */ r_esp -= 4; W32(r_esp, 0x5c16a6u); f_005c16aa();
L_005c16a6:; BB(0x005c16a6);
    /* 005c16a6: mov esp, ebp */ r_esp = r_ebp;
    /* 005c16a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c16a9: ret  */ FN_RET(0x005c161a); r_esp += 4; return;
}

void f_005c16aa(void) /* FUN_005c16aa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c16aa);
    /* 005c16aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c16ab: mov ebp, esp */ r_ebp = r_esp;
    /* 005c16ad: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c16b0: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005c16b3: mov dword ptr [0x6fc084], 0 */ W32((u32)(0x6fc084u), 0x0u);
    /* 005c16bd: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005c16c4: jmp 0x5c16cf */ goto L_005c16cf;
L_005c16c6:; BB(0x005c16c6);
    /* 005c16c6: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c16c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c16cc: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
L_005c16cf:; BB(0x005c16cf);
    /* 005c16cf: cmp dword ptr [ebp - 0x50], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c16d3: jge 0x5c16f0 */ if ((fS==fO)) goto L_005c16f0;
L_005c16d5:; BB(0x005c16d5);
    /* 005c16d5: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c16d8: mov dword ptr [ebp + ecx*4 - 0x4c], 0 */ W32((u32)(r_ebp+r_ecx*4+0xffffffb4u), 0x0u);
    /* 005c16e0: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c16e3: mov dword ptr [edx*4 + 0x6fc038], 0xffffffff */ W32((u32)(r_edx*4+0x6fc038u), 0xffffffffu);
    /* 005c16ee: jmp 0x5c16c6 */ goto L_005c16c6;
L_005c16f0:; BB(0x005c16f0);
    /* 005c16f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005c16f7:; BB(0x005c16f7);
    /* 005c16f7: cmp dword ptr [ebp - 4], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c16fb: jge 0x5c173d */ if ((fS==fO)) goto L_005c173d;
L_005c16fd:; BB(0x005c16fd);
    /* 005c16fd: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005c16ff: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c1704u); f_0060ee31();
    /* 005c1704: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1707: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005c170a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c170d: cmp dword ptr [ebp + eax*4 - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax*4+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1712: jne 0x5c173b */ if (!fZ) goto L_005c173b;
L_005c1714:; BB(0x005c1714);
    /* 005c1714: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c1717: mov dword ptr [ebp + ecx*4 - 0x4c], 1 */ W32((u32)(r_ebp+r_ecx*4+0xffffffb4u), 0x1u);
    /* 005c171f: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c1722: add edx, 0xc752 */ {  u32 a = r_edx; u32 b = 0xc752u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c1728: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c172b: mov dword ptr [eax*4 + 0x6fc038], edx */ W32((u32)(r_eax*4+0x6fc038u), r_edx);
    /* 005c1732: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1735: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1738: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c173b:; BB(0x005c173b);
    /* 005c173b: jmp 0x5c16f7 */ goto L_005c16f7;
L_005c173d:; BB(0x005c173d);
    /* 005c173d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c173f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1740: ret  */ FN_RET(0x005c16aa); r_esp += 4; return;
}

void f_005c1741(void) /* FUN_005c1741 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1741);
    /* 005c1741: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1742: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1744: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1747: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c174a: push 0x698174 */ { u32 v = 0x698174u; r_esp -= 4; W32(r_esp, v); }
    /* 005c174f: push 0x698178 */ { u32 v = 0x698178u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1754: call 0x6243c0 */ r_esp -= 4; W32(r_esp, 0x5c1759u); f_006243c0();
    /* 005c1759: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c175c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c175f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1763: je 0x5c1795 */ if (fZ) goto L_005c1795;
L_005c1765:; BB(0x005c1765);
    /* 005c1765: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1769: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c176b: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1770: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c1776: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1779: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c177a: call 0x624250 */ r_esp -= 4; W32(r_esp, 0x5c177fu); f_00624250();
    /* 005c177f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1782: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1785: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1786: call 0x6241d0 */ r_esp -= 4; W32(r_esp, 0x5c178bu); f_006241d0();
    /* 005c178b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c178e: mov eax, 1 */ r_eax = 0x1u;
    /* 005c1793: jmp 0x5c1797 */ goto L_005c1797;
L_005c1795:; BB(0x005c1795);
    /* 005c1795: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c1797:; BB(0x005c1797);
    /* 005c1797: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1799: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c179a: ret  */ FN_RET(0x005c1741); r_esp += 4; return;
}

void f_005c179b(void) /* FUN_005c179b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c179b);
    /* 005c179b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c179c: mov ebp, esp */ r_ebp = r_esp;
    /* 005c179e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c17a1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c17a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c17a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c17a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c17ab: call 0x447bf2 */ r_esp -= 4; W32(r_esp, 0x5c17b0u); f_00447bf2();
    /* 005c17b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c17b3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c17b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c17b9: movsx eax, byte ptr [edx + 0x6d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6du));
    /* 005c17bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c17c0: mov edx, dword ptr [ecx + 0x1cbc] */ r_edx = R32((u32)(r_ecx+0x1cbcu));
    /* 005c17c6: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005c17c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c17cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c17cc: ret 4 */ FN_RET(0x005c179b); r_esp += 8; return;
}

void f_005c17cf(void) /* FUN_005c17cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c17cf);
    /* 005c17cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c17d0: mov ebp, esp */ r_ebp = r_esp;
    /* 005c17d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c17d3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c17d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c17d9: cmp dword ptr [eax + 0x1cb4], 0 */ {  u32 a = R32((u32)(r_eax+0x1cb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c17e0: jne 0x5c1842 */ if (!fZ) goto L_005c1842;
L_005c17e2:; BB(0x005c17e2);
    /* 005c17e2: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c17e8: call 0x45cb5f */ r_esp -= 4; W32(r_esp, 0x5c17edu); f_0045cb5f();
    /* 005c17ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c17ef: je 0x5c1842 */ if (fZ) goto L_005c1842;
L_005c17f1:; BB(0x005c17f1);
    /* 005c17f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c17f4: cmp dword ptr [ecx + 0x1cbc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c17fb: je 0x5c180d */ if (fZ) goto L_005c180d;
L_005c17fd:; BB(0x005c17fd);
    /* 005c17fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1800: mov eax, dword ptr [edx + 0x1cbc] */ r_eax = R32((u32)(r_edx+0x1cbcu));
    /* 005c1806: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_005c180d:; BB(0x005c180d);
    /* 005c180d: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005c1813: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1817: je 0x5c182c */ if (fZ) goto L_005c182c;
L_005c1819:; BB(0x005c1819);
    /* 005c1819: push 0x18a89 */ { u32 v = 0x18a89u; r_esp -= 4; W32(r_esp, v); }
    /* 005c181e: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005c1824: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c1827: call 0x6003da */ r_esp -= 4; W32(r_esp, 0x5c182cu); f_006003da();
L_005c182c:; BB(0x005c182c);
    /* 005c182c: cmp dword ptr [0x6f6f10], 0 */ {  u32 a = R32((u32)(0x6f6f10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1833: jne 0x5c1842 */ if (!fZ) goto L_005c1842;
L_005c1835:; BB(0x005c1835);
    /* 005c1835: push 0xc751 */ { u32 v = 0xc751u; r_esp -= 4; W32(r_esp, v); }
    /* 005c183a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c183d: call 0x5c15b4 */ r_esp -= 4; W32(r_esp, 0x5c1842u); f_005c15b4();
L_005c1842:; BB(0x005c1842);
    /* 005c1842: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1845: mov dword ptr [eax + 0x1cb4], 1 */ W32((u32)(r_eax+0x1cb4u), 0x1u);
    /* 005c184f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1851: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1852: ret  */ FN_RET(0x005c17cf); r_esp += 4; return;
}

void f_005c1853(void) /* FUN_005c1853 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1853);
    /* 005c1853: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1854: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1856: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1857: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c185a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c185d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c185e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1861: call 0x447ba4 */ r_esp -= 4; W32(r_esp, 0x5c1866u); f_00447ba4();
    /* 005c1866: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1868: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1869: ret 4 */ FN_RET(0x005c1853); r_esp += 8; return;
}

void f_005c186c(void) /* FUN_005c186c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c186c);
    /* 005c186c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c186d: mov ebp, esp */ r_ebp = r_esp;
    /* 005c186f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1870: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1873: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1876: mov ecx, dword ptr [eax + 0x1cb0] */ r_ecx = R32((u32)(r_eax+0x1cb0u));
    /* 005c187c: call 0x48cf1c */ r_esp -= 4; W32(r_esp, 0x5c1881u); f_0048cf1c();
    /* 005c1881: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1883: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1884: ret  */ FN_RET(0x005c186c); r_esp += 4; return;
}

void f_005c1885(void) /* FUN_005c1885 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1885);
    /* 005c1885: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1886: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1888: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c188b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c188e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c1891: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1892: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1895: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5c189au); f_005e626d();
    /* 005c189a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c189d: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005c18a0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c18a3: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c18a7: je 0x5c18ab */ if (fZ) goto L_005c18ab;
L_005c18a9:; BB(0x005c18a9);
    /* 005c18a9: jmp 0x5c18d0 */ goto L_005c18d0;
L_005c18ab:; BB(0x005c18ab);
    /* 005c18ab: mov ecx, dword ptr [0x6fc080] */ r_ecx = R32((u32)(0x6fc080u));
    /* 005c18b1: call 0x5c186c */ r_esp -= 4; W32(r_esp, 0x5c18b6u); f_005c186c();
    /* 005c18b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c18b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c18bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c18bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c18c0: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c18c3u); call_ind(t); }
    /* 005c18c3: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 005c18c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c18c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c18ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c18cd: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c18d0u); call_ind(t); }
L_005c18d0:; BB(0x005c18d0);
    /* 005c18d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005c18d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c18d3: ret 4 */ FN_RET(0x005c1885); r_esp += 8; return;
}

void f_005c18e0(void) /* FUN_005c18e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c18e0);
    /* 005c18e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c18e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c18e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c18e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c18e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c18ea: call 0x5c11e6 */ r_esp -= 4; W32(r_esp, 0x5c18efu); f_005c11e6();
    /* 005c18ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c18f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c18f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c18f7: je 0x5c1905 */ if (fZ) goto L_005c1905;
L_005c18f9:; BB(0x005c18f9);
    /* 005c18f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c18fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c18fd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c1902u); f_0048ac1b();
    /* 005c1902: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c1905:; BB(0x005c1905);
    /* 005c1905: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1908: mov esp, ebp */ r_esp = r_ebp;
    /* 005c190a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c190b: ret 4 */ FN_RET(0x005c18e0); r_esp += 8; return;
}

void f_005c1910(void) /* FUN_005c1910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1910);
    /* 005c1910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1911: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1913: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1916: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c1919: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c191c: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x5c1921u); f_00446fe0();
    /* 005c1921: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1924: mov dword ptr [eax], 0x63a05c */ W32((u32)(r_eax), 0x63a05cu);
    /* 005c192a: push 0x52c */ { u32 v = 0x52cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c192f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1932: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c1937u); f_005e5ec3();
    { u32 mgr = R32((u32)(0x6f6ee8u)); if (mgr) mgr = R32((u32)(mgr + 8u)); if (mgr) { r_esp -= 4; W32(r_esp, 0x18a89u); r_ecx = mgr; r_esp -= 4; W32(r_esp, 0x5c1937u); f_006003da(); } }
    /* 005c1937: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c193e: jmp 0x5c1949 */ goto L_005c1949;
L_005c1940:; BB(0x005c1940);
    /* 005c1940: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1943: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1946: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c1949:; BB(0x005c1949);
    /* 005c1949: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c194d: jge 0x5c1962 */ if ((fS==fO)) goto L_005c1962;
L_005c194f:; BB(0x005c194f);
    /* 005c194f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1952: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1955: mov dword ptr [eax + edx*4 + 0x1cb0], 0 */ W32((u32)(r_eax+r_edx*4+0x1cb0u), 0x0u);
    /* 005c1960: jmp 0x5c1940 */ goto L_005c1940;
L_005c1962:; BB(0x005c1962);
    /* 005c1962: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1965: mov dword ptr [ecx + 0x1cb8], 0 */ W32((u32)(r_ecx+0x1cb8u), 0x0u);
    /* 005c196f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1972: mov dword ptr [edx + 0x1cbc], 0 */ W32((u32)(r_edx+0x1cbcu), 0x0u);
    /* 005c197c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c197f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1981: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1982: ret  */ FN_RET(0x005c1910); r_esp += 4; return;
}

void f_005c1983(void) /* FUN_005c1983 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1983);
    /* 005c1983: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1984: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1986: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1989: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c198c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c198f: mov dword ptr [eax], 0x63a05c */ W32((u32)(r_eax), 0x63a05cu);
    /* 005c1995: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c199c: jmp 0x5c19a7 */ goto L_005c19a7;
L_005c199e:; BB(0x005c199e);
    /* 005c199e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c19a1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c19a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c19a7:; BB(0x005c19a7);
    /* 005c19a7: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c19ab: jge 0x5c19f4 */ if ((fS==fO)) goto L_005c19f4;
L_005c19ad:; BB(0x005c19ad);
    /* 005c19ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c19b0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c19b3: mov ecx, dword ptr [eax + edx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c19ba: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c19bd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c19c0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c19c3: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c19c7: je 0x5c19da */ if (fZ) goto L_005c19da;
L_005c19c9:; BB(0x005c19c9);
    /* 005c19c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c19cb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c19ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c19d0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c19d3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c19d5u); call_ind(t); }
    /* 005c19d5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c19d8: jmp 0x5c19e1 */ goto L_005c19e1;
L_005c19da:; BB(0x005c19da);
    /* 005c19da: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c19e1:; BB(0x005c19e1);
    /* 005c19e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c19e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c19e7: mov dword ptr [ecx + eax*4 + 0x1cb0], 0 */ W32((u32)(r_ecx+r_eax*4+0x1cb0u), 0x0u);
    /* 005c19f2: jmp 0x5c199e */ goto L_005c199e;
L_005c19f4:; BB(0x005c19f4);
    /* 005c19f4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c19f7: mov eax, dword ptr [edx + 0x1cb8] */ r_eax = R32((u32)(r_edx+0x1cb8u));
    /* 005c19fd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c1a00: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1a03: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c1a06: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1a0a: je 0x5c1a1d */ if (fZ) goto L_005c1a1d;
L_005c1a0c:; BB(0x005c1a0c);
    /* 005c1a0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a0e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c1a11: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1a13: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c1a16: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c1a18u); call_ind(t); }
    /* 005c1a18: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c1a1b: jmp 0x5c1a24 */ goto L_005c1a24;
L_005c1a1d:; BB(0x005c1a1d);
    /* 005c1a1d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c1a24:; BB(0x005c1a24);
    /* 005c1a24: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a27: mov dword ptr [ecx + 0x1cb8], 0 */ W32((u32)(r_ecx+0x1cb8u), 0x0u);
    /* 005c1a31: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a34: mov ecx, dword ptr [edx + 0x1cbc] */ r_ecx = R32((u32)(r_edx+0x1cbcu));
    /* 005c1a3a: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x5c1a3fu); f_005d71b9();
    /* 005c1a3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1a41: jne 0x5c1a57 */ if (!fZ) goto L_005c1a57;
L_005c1a43:; BB(0x005c1a43);
    /* 005c1a43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a45: push 0x6981bc */ { u32 v = 0x6981bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a4a: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005c1a4f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005c1a52: call 0x61baba */ r_esp -= 4; W32(r_esp, 0x5c1a57u); f_0061baba();
L_005c1a57:; BB(0x005c1a57);
    /* 005c1a57: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a5a: mov edx, dword ptr [ecx + 0x1cbc] */ r_edx = R32((u32)(r_ecx+0x1cbcu));
    /* 005c1a60: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005c1a63: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c1a66: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c1a69: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1a6d: je 0x5c1a80 */ if (fZ) goto L_005c1a80;
L_005c1a6f:; BB(0x005c1a6f);
    /* 005c1a6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a71: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1a74: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c1a76: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1a79: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c1a7bu); call_ind(t); }
    /* 005c1a7b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c1a7e: jmp 0x5c1a87 */ goto L_005c1a87;
L_005c1a80:; BB(0x005c1a80);
    /* 005c1a80: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005c1a87:; BB(0x005c1a87);
    /* 005c1a87: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a8a: mov dword ptr [eax + 0x1cbc], 0 */ W32((u32)(r_eax+0x1cbcu), 0x0u);
    /* 005c1a94: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a97: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x5c1a9cu); f_0044711a();
    /* 005c1a9c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1a9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1a9f: ret  */ FN_RET(0x005c1983); r_esp += 4; return;
}

void f_005c1aa0(void) /* FUN_005c1aa0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1aa0);
    /* 005c1aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1aa3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1aa6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c1aa9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1aac: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x5c1ab1u); f_004476a6();
    /* 005c1ab1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1ab8: jmp 0x5c1ac3 */ goto L_005c1ac3;
L_005c1aba:; BB(0x005c1aba);
    /* 005c1aba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1abd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1ac0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c1ac3:; BB(0x005c1ac3);
    /* 005c1ac3: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1ac7: jge 0x5c1b98 */ if ((fS==fO)) goto L_005c1b98;
L_005c1acd:; BB(0x005c1acd);
    /* 005c1acd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1ad0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1ad3: cmp dword ptr [edx + ecx*4 + 0x1cb0], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1cb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1adb: jne 0x5c1b1b */ if (!fZ) goto L_005c1b1b;
L_005c1add:; BB(0x005c1add);
    /* 005c1add: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ae2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c1ae7u); f_0048ab58();
    /* 005c1ae7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1aea: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c1aed: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1af1: je 0x5c1b04 */ if (fZ) goto L_005c1b04;
L_005c1af3:; BB(0x005c1af3);
    /* 005c1af3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1af6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1af7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1afa: call 0x5c1cd5 */ r_esp -= 4; W32(r_esp, 0x5c1affu); f_005c1cd5();
    /* 005c1aff: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c1b02: jmp 0x5c1b0b */ goto L_005c1b0b;
L_005c1b04:; BB(0x005c1b04);
    /* 005c1b04: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005c1b0b:; BB(0x005c1b0b);
    /* 005c1b0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1b0e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1b11: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c1b14: mov dword ptr [edx + ecx*4 + 0x1cb0], eax */ W32((u32)(r_edx+r_ecx*4+0x1cb0u), r_eax);
L_005c1b1b:; BB(0x005c1b1b);
    /* 005c1b1b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b21: push 0x52a */ { u32 v = 0x52au; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1b29: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1b2c: mov ecx, dword ptr [edx + ecx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cb0u));
    /* 005c1b33: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x5c1b38u); f_005e9f50();
    /* 005c1b38: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1b3c: jne 0x5c1b5a */ if (!fZ) goto L_005c1b5a;
L_005c1b3e:; BB(0x005c1b3e);
    /* 005c1b3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b46: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1b49: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1b4c: mov ecx, dword ptr [ecx + eax*4 + 0x1cb0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1cb0u));
    /* 005c1b53: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5c1b58u); f_005d5ff2();
    /* 005c1b58: jmp 0x5c1b74 */ goto L_005c1b74;
L_005c1b5a:; BB(0x005c1b5a);
    /* 005c1b5a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b5c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b5e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b60: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1b65: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1b68: mov ecx, dword ptr [eax + edx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c1b6f: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5c1b74u); f_005d5ff2();
L_005c1b74:; BB(0x005c1b74);
    /* 005c1b74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1b77: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1b7a: mov ecx, dword ptr [edx + ecx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cb0u));
    /* 005c1b81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1b84: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1b87: mov eax, dword ptr [edx + eax*4 + 0x1cb0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1cb0u));
    /* 005c1b8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1b90: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c1b93u); call_ind(t); }
    /* 005c1b93: jmp 0x5c1aba */ goto L_005c1aba;
L_005c1b98:; BB(0x005c1b98);
    /* 005c1b98: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1b9b: cmp dword ptr [eax + 0x1cb8], 0 */ {  u32 a = R32((u32)(r_eax+0x1cb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1ba2: jne 0x5c1c46 */ if (!fZ) goto L_005c1c46;
L_005c1ba8:; BB(0x005c1ba8);
    /* 005c1ba8: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1baa: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c1bafu); f_0048ab58();
    /* 005c1baf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1bb2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c1bb5: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1bb9: je 0x5c1bc8 */ if (fZ) goto L_005c1bc8;
L_005c1bbb:; BB(0x005c1bbb);
    /* 005c1bbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1bbe: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5c1bc3u); f_005e3fb0();
    /* 005c1bc3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c1bc6: jmp 0x5c1bcf */ goto L_005c1bcf;
L_005c1bc8:; BB(0x005c1bc8);
    /* 005c1bc8: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005c1bcf:; BB(0x005c1bcf);
    /* 005c1bcf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1bd2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1bd5: mov dword ptr [ecx + 0x1cb8], edx */ W32((u32)(r_ecx+0x1cb8u), r_edx);
    /* 005c1bdb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1bdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1bdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1be1: push 0x52b */ { u32 v = 0x52bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1be6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1be9: mov ecx, dword ptr [eax + 0x1cb8] */ r_ecx = R32((u32)(r_eax+0x1cb8u));
    /* 005c1bef: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x5c1bf4u); f_005e9f50();
    /* 005c1bf4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1bf7: mov ecx, dword ptr [ecx + 0x1cb8] */ r_ecx = R32((u32)(r_ecx+0x1cb8u));
    /* 005c1bfd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1c00: mov eax, dword ptr [edx + 0x1cb8] */ r_eax = R32((u32)(r_edx+0x1cb8u));
    /* 005c1c06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1c08: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c1c0bu); call_ind(t); }
    /* 005c1c0b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c0d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c1c12u); f_0048ab58();
    /* 005c1c12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1c15: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c1c18: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1c1c: je 0x5c1c2d */ if (fZ) goto L_005c1c2d;
L_005c1c1e:; BB(0x005c1c1e);
    /* 005c1c1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c20: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c1c23: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x5c1c28u); f_005d7698();
    /* 005c1c28: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c1c2b: jmp 0x5c1c34 */ goto L_005c1c34;
L_005c1c2d:; BB(0x005c1c2d);
    /* 005c1c2d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c1c34:; BB(0x005c1c34);
    /* 005c1c34: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c1c37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c38: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1c3b: mov ecx, dword ptr [ecx + 0x1cb8] */ r_ecx = R32((u32)(r_ecx+0x1cb8u));
    /* 005c1c41: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5c1c46u); f_005e4060();
L_005c1c46:; BB(0x005c1c46);
    /* 005c1c46: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1c49: cmp dword ptr [edx + 0x1cbc], 0 */ {  u32 a = R32((u32)(r_edx+0x1cbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1c50: jne 0x5c1cba */ if (!fZ) goto L_005c1cba;
L_005c1c52:; BB(0x005c1c52);
    /* 005c1c52: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c57: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c1c5cu); f_0048ab58();
    /* 005c1c5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1c5f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c1c62: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1c66: je 0x5c1c77 */ if (fZ) goto L_005c1c77;
L_005c1c68:; BB(0x005c1c68);
    /* 005c1c68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c6a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1c6d: call 0x5d6e50 */ r_esp -= 4; W32(r_esp, 0x5c1c72u); f_005d6e50();
    /* 005c1c72: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c1c75: jmp 0x5c1c7e */ goto L_005c1c7e;
L_005c1c77:; BB(0x005c1c77);
    /* 005c1c77: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c1c7e:; BB(0x005c1c7e);
    /* 005c1c7e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1c81: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c1c84: mov dword ptr [eax + 0x1cbc], ecx */ W32((u32)(r_eax+0x1cbcu), r_ecx);
    /* 005c1c8a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c90: push 0x530 */ { u32 v = 0x530u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c95: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1c98: mov ecx, dword ptr [edx + 0x1cbc] */ r_ecx = R32((u32)(r_edx+0x1cbcu));
    /* 005c1c9e: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x5c1ca3u); f_005e9f50();
    /* 005c1ca3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1ca6: mov ecx, dword ptr [eax + 0x1cbc] */ r_ecx = R32((u32)(r_eax+0x1cbcu));
    /* 005c1cac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1caf: mov eax, dword ptr [edx + 0x1cbc] */ r_eax = R32((u32)(r_edx+0x1cbcu));
    /* 005c1cb5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1cb7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c1cbau); call_ind(t); }
L_005c1cba:; BB(0x005c1cba);
    /* 005c1cba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1cbd: mov ecx, dword ptr [eax + 0x1cbc] */ r_ecx = R32((u32)(r_eax+0x1cbcu));
    /* 005c1cc3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1cc6: mov eax, dword ptr [edx + 0x1cbc] */ r_eax = R32((u32)(r_edx+0x1cbcu));
    /* 005c1ccc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1cce: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x5c1cd1u); call_ind(t); }
    /* 005c1cd1: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1cd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1cd4: ret  */ FN_RET(0x005c1aa0); r_esp += 4; return;
}

void f_005c1cd5(void) /* FUN_005c1cd5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1cd5);
    /* 005c1cd5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1cd6: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1cd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1cd9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1cdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1cdf: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c1ce4u); f_005d5d20();
    /* 005c1ce4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1ce7: mov dword ptr [eax], 0x63a114 */ W32((u32)(r_eax), 0x63a114u);
    /* 005c1ced: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1cf0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c1cf3: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 005c1cf9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1cfc: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1cfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1cff: ret 4 */ FN_RET(0x005c1cd5); r_esp += 8; return;
}

void f_005c1d02(void) /* FUN_005c1d02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1d02);
    /* 005c1d02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d03: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1d05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1d09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1d0c: mov dword ptr [eax], 0x63a114 */ W32((u32)(r_eax), 0x63a114u);
    /* 005c1d12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1d15: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5c1d1au); f_005d5dfb();
    /* 005c1d1a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1d1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1d1d: ret  */ FN_RET(0x005c1d02); r_esp += 4; return;
}

void f_005c1d1e(void) /* FUN_005c1d1e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1d1e);
    /* 005c1d1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d1f: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1d21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d22: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1d25: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1d28: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1d2f: jne 0x5c1d49 */ if (!fZ) goto L_005c1d49;
L_005c1d31:; BB(0x005c1d31);
    /* 005c1d31: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d36: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c1d3c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c1d3e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c1d44: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c1d47u); call_ind(t); }
    /* 005c1d47: jmp 0x5c1d56 */ goto L_005c1d56;
L_005c1d49:; BB(0x005c1d49);
    /* 005c1d49: push 0x6981cc */ { u32 v = 0x6981ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d4e: call 0x48e3c5 */ r_esp -= 4; W32(r_esp, 0x5c1d53u); f_0048e3c5();
    /* 005c1d53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c1d56:; BB(0x005c1d56);
    /* 005c1d56: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1d58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1d59: ret  */ FN_RET(0x005c1d1e); r_esp += 4; return;
}

void f_005c1d60(void) /* FUN_005c1d60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1d60);
    /* 005c1d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d61: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1d63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1d67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1d6a: call 0x5c1983 */ r_esp -= 4; W32(r_esp, 0x5c1d6fu); f_005c1983();
    /* 005c1d6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c1d72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c1d75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1d77: je 0x5c1d85 */ if (fZ) goto L_005c1d85;
L_005c1d79:; BB(0x005c1d79);
    /* 005c1d79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1d7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d7d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c1d82u); f_0048ac1b();
    /* 005c1d82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c1d85:; BB(0x005c1d85);
    /* 005c1d85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1d88: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1d8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1d8b: ret 4 */ FN_RET(0x005c1d60); r_esp += 8; return;
}

void f_005c1d90(void) /* FUN_005c1d90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1d90);
    /* 005c1d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d91: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1d97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1d9a: call 0x5c1d02 */ r_esp -= 4; W32(r_esp, 0x5c1d9fu); f_005c1d02();
    /* 005c1d9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c1da2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c1da5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1da7: je 0x5c1db5 */ if (fZ) goto L_005c1db5;
L_005c1da9:; BB(0x005c1da9);
    /* 005c1da9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1dac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1dad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c1db2u); f_0048ac1b();
    /* 005c1db2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c1db5:; BB(0x005c1db5);
    /* 005c1db5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1db8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1dba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1dbb: ret 4 */ FN_RET(0x005c1d90); r_esp += 8; return;
}

void f_005c1dc0(void) /* FUN_005c1dc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1dc0);
    /* 005c1dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1dc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1dc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c1dc9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1dcc: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x5c1dd1u); f_00446fe0();
    /* 005c1dd1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1dd4: mov dword ptr [eax], 0x63a184 */ W32((u32)(r_eax), 0x63a184u);
    /* 005c1dda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1ddd: mov dword ptr [0x6fc088], ecx */ W32((u32)(0x6fc088u), r_ecx);
    /* 005c1de3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1de5: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c1deb: call 0x460a16 */ r_esp -= 4; W32(r_esp, 0x5c1df0u); f_00460a16();
    /* 005c1df0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1df3: jl 0x5c1e04 */ if ((fS!=fO)) goto L_005c1e04;
L_005c1df5:; BB(0x005c1df5);
    /* 005c1df5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1df8: mov dword ptr [edx + 0x1d90], 1 */ W32((u32)(r_edx+0x1d90u), 0x1u);
    /* 005c1e02: jmp 0x5c1e11 */ goto L_005c1e11;
L_005c1e04:; BB(0x005c1e04);
    /* 005c1e04: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1e07: mov dword ptr [eax + 0x1d90], 0 */ W32((u32)(r_eax+0x1d90u), 0x0u);
L_005c1e11:; BB(0x005c1e11);
    /* 005c1e11: push 0x4f1 */ { u32 v = 0x4f1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e16: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1e19: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c1e1eu); f_005e5ec3();
    /* 005c1e1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1e25: jmp 0x5c1e30 */ goto L_005c1e30;
L_005c1e27:; BB(0x005c1e27);
    /* 005c1e27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1e2a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1e2d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c1e30:; BB(0x005c1e30);
    /* 005c1e30: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1e34: jge 0x5c1e49 */ if ((fS==fO)) goto L_005c1e49;
L_005c1e36:; BB(0x005c1e36);
    /* 005c1e36: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1e39: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1e3c: mov dword ptr [eax + edx*4 + 0x1cb0], 0 */ W32((u32)(r_eax+r_edx*4+0x1cb0u), 0x0u);
    /* 005c1e47: jmp 0x5c1e27 */ goto L_005c1e27;
L_005c1e49:; BB(0x005c1e49);
    /* 005c1e49: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1e50: jmp 0x5c1e5b */ goto L_005c1e5b;
L_005c1e52:; BB(0x005c1e52);
    /* 005c1e52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1e55: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1e58: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c1e5b:; BB(0x005c1e5b);
    /* 005c1e5b: cmp dword ptr [ebp - 4], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1e5f: jge 0x5c1e74 */ if ((fS==fO)) goto L_005c1e74;
L_005c1e61:; BB(0x005c1e61);
    /* 005c1e61: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1e64: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1e67: mov dword ptr [eax + edx*4 + 0x1cc0], 0 */ W32((u32)(r_eax+r_edx*4+0x1cc0u), 0x0u);
    /* 005c1e72: jmp 0x5c1e52 */ goto L_005c1e52;
L_005c1e74:; BB(0x005c1e74);
    /* 005c1e74: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1e7b: jmp 0x5c1e86 */ goto L_005c1e86;
L_005c1e7d:; BB(0x005c1e7d);
    /* 005c1e7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1e80: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1e83: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c1e86:; BB(0x005c1e86);
    /* 005c1e86: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1e8a: jge 0x5c1e9f */ if ((fS==fO)) goto L_005c1e9f;
L_005c1e8c:; BB(0x005c1e8c);
    /* 005c1e8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1e8f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1e92: mov dword ptr [eax + edx*4 + 0x1d18], 0 */ W32((u32)(r_eax+r_edx*4+0x1d18u), 0x0u);
    /* 005c1e9d: jmp 0x5c1e7d */ goto L_005c1e7d;
L_005c1e9f:; BB(0x005c1e9f);
    /* 005c1e9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1ea6: jmp 0x5c1eb1 */ goto L_005c1eb1;
L_005c1ea8:; BB(0x005c1ea8);
    /* 005c1ea8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1eab: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1eae: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c1eb1:; BB(0x005c1eb1);
    /* 005c1eb1: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1eb5: jge 0x5c1eca */ if ((fS==fO)) goto L_005c1eca;
L_005c1eb7:; BB(0x005c1eb7);
    /* 005c1eb7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1eba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1ebd: mov dword ptr [eax + edx*4 + 0x1d24], 0 */ W32((u32)(r_eax+r_edx*4+0x1d24u), 0x0u);
    /* 005c1ec8: jmp 0x5c1ea8 */ goto L_005c1ea8;
L_005c1eca:; BB(0x005c1eca);
    /* 005c1eca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1ecd: mov dword ptr [ecx + 0x1d50], 0 */ W32((u32)(r_ecx+0x1d50u), 0x0u);
    /* 005c1ed7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1ede: jmp 0x5c1ee9 */ goto L_005c1ee9;
L_005c1ee0:; BB(0x005c1ee0);
    /* 005c1ee0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1ee3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c1ee6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005c1ee9:; BB(0x005c1ee9);
    /* 005c1ee9: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1eed: jge 0x5c1f02 */ if ((fS==fO)) goto L_005c1f02;
L_005c1eef:; BB(0x005c1eef);
    /* 005c1eef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1ef2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1ef5: mov dword ptr [ecx + eax*4 + 0x1d54], 0 */ W32((u32)(r_ecx+r_eax*4+0x1d54u), 0x0u);
    /* 005c1f00: jmp 0x5c1ee0 */ goto L_005c1ee0;
L_005c1f02:; BB(0x005c1f02);
    /* 005c1f02: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1f05: mov dword ptr [edx + 0x1d80], 0 */ W32((u32)(r_edx+0x1d80u), 0x0u);
    /* 005c1f0f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1f12: mov dword ptr [eax + 0x1d84], 0 */ W32((u32)(r_eax+0x1d84u), 0x0u);
    /* 005c1f1c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1f1f: mov dword ptr [ecx + 0x1d88], 0 */ W32((u32)(r_ecx+0x1d88u), 0x0u);
    /* 005c1f29: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1f2c: mov dword ptr [edx + 0x1d8c], 0 */ W32((u32)(r_edx+0x1d8cu), 0x0u);
    /* 005c1f36: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1f39: mov dword ptr [eax + 0x1d94], 0 */ W32((u32)(r_eax+0x1d94u), 0x0u);
    /* 005c1f43: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1f46: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1f48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1f49: ret  */ FN_RET(0x005c1dc0); r_esp += 4; return;
}

void f_005c1f4a(void) /* FUN_005c1f4a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1f4a);
    /* 005c1f4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1f4b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1f4d: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1f53: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005c1f56: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c1f59: mov dword ptr [eax], 0x63a184 */ W32((u32)(r_eax), 0x63a184u);
    /* 005c1f5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1f66: jmp 0x5c1f71 */ goto L_005c1f71;
L_005c1f68:; BB(0x005c1f68);
    /* 005c1f68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1f6b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1f6e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c1f71:; BB(0x005c1f71);
    /* 005c1f71: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1f75: jge 0x5c1fce */ if ((fS==fO)) goto L_005c1fce;
L_005c1f77:; BB(0x005c1f77);
    /* 005c1f77: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1f7a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c1f7d: cmp dword ptr [eax + edx*4 + 0x1cb0], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1cb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1f85: je 0x5c1fcc */ if (fZ) goto L_005c1fcc;
L_005c1f87:; BB(0x005c1f87);
    /* 005c1f87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1f8a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c1f8d: mov eax, dword ptr [edx + ecx*4 + 0x1cb0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cb0u));
    /* 005c1f94: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c1f97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1f9a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c1f9d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1fa1: je 0x5c1fb4 */ if (fZ) goto L_005c1fb4;
L_005c1fa3:; BB(0x005c1fa3);
    /* 005c1fa3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1fa5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1fa8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1faa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1fad: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c1fafu); call_ind(t); }
    /* 005c1faf: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005c1fb2: jmp 0x5c1fbb */ goto L_005c1fbb;
L_005c1fb4:; BB(0x005c1fb4);
    /* 005c1fb4: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005c1fbb:; BB(0x005c1fbb);
    /* 005c1fbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1fbe: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c1fc1: mov dword ptr [edx + ecx*4 + 0x1cb0], 0 */ W32((u32)(r_edx+r_ecx*4+0x1cb0u), 0x0u);
L_005c1fcc:; BB(0x005c1fcc);
    /* 005c1fcc: jmp 0x5c1f68 */ goto L_005c1f68;
L_005c1fce:; BB(0x005c1fce);
    /* 005c1fce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1fd5: jmp 0x5c1fe0 */ goto L_005c1fe0;
L_005c1fd7:; BB(0x005c1fd7);
    /* 005c1fd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1fda: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1fdd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c1fe0:; BB(0x005c1fe0);
    /* 005c1fe0: cmp dword ptr [ebp - 4], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1fe4: jge 0x5c203d */ if ((fS==fO)) goto L_005c203d;
L_005c1fe6:; BB(0x005c1fe6);
    /* 005c1fe6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1fe9: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c1fec: cmp dword ptr [edx + ecx*4 + 0x1cc0], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1cc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1ff4: je 0x5c203b */ if (fZ) goto L_005c203b;
L_005c1ff6:; BB(0x005c1ff6);
    /* 005c1ff6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1ff9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c1ffc: mov edx, dword ptr [ecx + eax*4 + 0x1cc0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1cc0u));
    /* 005c2003: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c2006: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c2009: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c200c: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2010: je 0x5c2023 */ if (fZ) goto L_005c2023;
L_005c2012:; BB(0x005c2012);
    /* 005c2012: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2014: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2017: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c2019: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c201c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c201eu); call_ind(t); }
    /* 005c201e: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005c2021: jmp 0x5c202a */ goto L_005c202a;
L_005c2023:; BB(0x005c2023);
    /* 005c2023: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005c202a:; BB(0x005c202a);
    /* 005c202a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c202d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c2030: mov dword ptr [ecx + eax*4 + 0x1cc0], 0 */ W32((u32)(r_ecx+r_eax*4+0x1cc0u), 0x0u);
L_005c203b:; BB(0x005c203b);
    /* 005c203b: jmp 0x5c1fd7 */ goto L_005c1fd7;
L_005c203d:; BB(0x005c203d);
    /* 005c203d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c2044: jmp 0x5c204f */ goto L_005c204f;
L_005c2046:; BB(0x005c2046);
    /* 005c2046: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2049: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c204c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005c204f:; BB(0x005c204f);
    /* 005c204f: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2053: jge 0x5c20ac */ if ((fS==fO)) goto L_005c20ac;
L_005c2055:; BB(0x005c2055);
    /* 005c2055: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2058: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c205b: cmp dword ptr [ecx + eax*4 + 0x1d18], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1d18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2063: je 0x5c20aa */ if (fZ) goto L_005c20aa;
L_005c2065:; BB(0x005c2065);
    /* 005c2065: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2068: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c206b: mov ecx, dword ptr [eax + edx*4 + 0x1d18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1d18u));
    /* 005c2072: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c2075: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2078: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005c207b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c207f: je 0x5c2092 */ if (fZ) goto L_005c2092;
L_005c2081:; BB(0x005c2081);
    /* 005c2081: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2083: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c2086: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2088: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c208b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c208du); call_ind(t); }
    /* 005c208d: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005c2090: jmp 0x5c2099 */ goto L_005c2099;
L_005c2092:; BB(0x005c2092);
    /* 005c2092: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005c2099:; BB(0x005c2099);
    /* 005c2099: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c209c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c209f: mov dword ptr [ecx + eax*4 + 0x1d18], 0 */ W32((u32)(r_ecx+r_eax*4+0x1d18u), 0x0u);
L_005c20aa:; BB(0x005c20aa);
    /* 005c20aa: jmp 0x5c2046 */ goto L_005c2046;
L_005c20ac:; BB(0x005c20ac);
    /* 005c20ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c20b3: jmp 0x5c20be */ goto L_005c20be;
L_005c20b5:; BB(0x005c20b5);
    /* 005c20b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c20b8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c20bb: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005c20be:; BB(0x005c20be);
    /* 005c20be: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c20c2: jge 0x5c211b */ if ((fS==fO)) goto L_005c211b;
L_005c20c4:; BB(0x005c20c4);
    /* 005c20c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c20c7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c20ca: cmp dword ptr [ecx + eax*4 + 0x1d24], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1d24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c20d2: je 0x5c2119 */ if (fZ) goto L_005c2119;
L_005c20d4:; BB(0x005c20d4);
    /* 005c20d4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c20d7: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c20da: mov ecx, dword ptr [eax + edx*4 + 0x1d24] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1d24u));
    /* 005c20e1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c20e4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c20e7: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005c20ea: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c20ee: je 0x5c2101 */ if (fZ) goto L_005c2101;
L_005c20f0:; BB(0x005c20f0);
    /* 005c20f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c20f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c20f7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20fa: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c20fcu); call_ind(t); }
    /* 005c20fc: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005c20ff: jmp 0x5c2108 */ goto L_005c2108;
L_005c2101:; BB(0x005c2101);
    /* 005c2101: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_005c2108:; BB(0x005c2108);
    /* 005c2108: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c210b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c210e: mov dword ptr [ecx + eax*4 + 0x1d24], 0 */ W32((u32)(r_ecx+r_eax*4+0x1d24u), 0x0u);
L_005c2119:; BB(0x005c2119);
    /* 005c2119: jmp 0x5c20b5 */ goto L_005c20b5;
L_005c211b:; BB(0x005c211b);
    /* 005c211b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c211e: cmp dword ptr [edx + 0x1d50], 0 */ {  u32 a = R32((u32)(r_edx+0x1d50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2125: je 0x5c2164 */ if (fZ) goto L_005c2164;
L_005c2127:; BB(0x005c2127);
    /* 005c2127: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c212a: mov ecx, dword ptr [eax + 0x1d50] */ r_ecx = R32((u32)(r_eax+0x1d50u));
    /* 005c2130: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005c2133: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c2136: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005c2139: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c213d: je 0x5c2150 */ if (fZ) goto L_005c2150;
L_005c213f:; BB(0x005c213f);
    /* 005c213f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2141: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c2144: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2146: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c2149: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c214bu); call_ind(t); }
    /* 005c214b: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005c214e: jmp 0x5c2157 */ goto L_005c2157;
L_005c2150:; BB(0x005c2150);
    /* 005c2150: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_005c2157:; BB(0x005c2157);
    /* 005c2157: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c215a: mov dword ptr [eax + 0x1d50], 0 */ W32((u32)(r_eax+0x1d50u), 0x0u);
L_005c2164:; BB(0x005c2164);
    /* 005c2164: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c216b: jmp 0x5c2176 */ goto L_005c2176;
L_005c216d:; BB(0x005c216d);
    /* 005c216d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2170: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2173: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c2176:; BB(0x005c2176);
    /* 005c2176: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c217a: jge 0x5c21d3 */ if ((fS==fO)) goto L_005c21d3;
L_005c217c:; BB(0x005c217c);
    /* 005c217c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c217f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c2182: cmp dword ptr [eax + edx*4 + 0x1d54], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1d54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c218a: je 0x5c21d1 */ if (fZ) goto L_005c21d1;
L_005c218c:; BB(0x005c218c);
    /* 005c218c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c218f: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c2192: mov eax, dword ptr [edx + ecx*4 + 0x1d54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1d54u));
    /* 005c2199: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c219c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c219f: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005c21a2: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c21a6: je 0x5c21b9 */ if (fZ) goto L_005c21b9;
L_005c21a8:; BB(0x005c21a8);
    /* 005c21a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c21aa: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c21ad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c21af: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c21b2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c21b4u); call_ind(t); }
    /* 005c21b4: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c21b7: jmp 0x5c21c0 */ goto L_005c21c0;
L_005c21b9:; BB(0x005c21b9);
    /* 005c21b9: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_005c21c0:; BB(0x005c21c0);
    /* 005c21c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c21c3: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c21c6: mov dword ptr [edx + ecx*4 + 0x1d54], 0 */ W32((u32)(r_edx+r_ecx*4+0x1d54u), 0x0u);
L_005c21d1:; BB(0x005c21d1);
    /* 005c21d1: jmp 0x5c216d */ goto L_005c216d;
L_005c21d3:; BB(0x005c21d3);
    /* 005c21d3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c21d6: cmp dword ptr [eax + 0x1d80], 0 */ {  u32 a = R32((u32)(r_eax+0x1d80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c21dd: je 0x5c221c */ if (fZ) goto L_005c221c;
L_005c21df:; BB(0x005c21df);
    /* 005c21df: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c21e2: mov edx, dword ptr [ecx + 0x1d80] */ r_edx = R32((u32)(r_ecx+0x1d80u));
    /* 005c21e8: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005c21eb: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c21ee: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c21f1: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c21f5: je 0x5c2208 */ if (fZ) goto L_005c2208;
L_005c21f7:; BB(0x005c21f7);
    /* 005c21f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c21f9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c21fc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c21fe: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c2201: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c2203u); call_ind(t); }
    /* 005c2203: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005c2206: jmp 0x5c220f */ goto L_005c220f;
L_005c2208:; BB(0x005c2208);
    /* 005c2208: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005c220f:; BB(0x005c220f);
    /* 005c220f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c2212: mov dword ptr [eax + 0x1d80], 0 */ W32((u32)(r_eax+0x1d80u), 0x0u);
L_005c221c:; BB(0x005c221c);
    /* 005c221c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c221f: cmp dword ptr [ecx + 0x1d84], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2226: je 0x5c2265 */ if (fZ) goto L_005c2265;
L_005c2228:; BB(0x005c2228);
    /* 005c2228: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c222b: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c2231: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005c2234: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c2237: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005c223a: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c223e: je 0x5c2251 */ if (fZ) goto L_005c2251;
L_005c2240:; BB(0x005c2240);
    /* 005c2240: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2242: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c2245: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2247: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c224a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c224cu); call_ind(t); }
    /* 005c224c: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005c224f: jmp 0x5c2258 */ goto L_005c2258;
L_005c2251:; BB(0x005c2251);
    /* 005c2251: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005c2258:; BB(0x005c2258);
    /* 005c2258: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c225b: mov dword ptr [ecx + 0x1d84], 0 */ W32((u32)(r_ecx+0x1d84u), 0x0u);
L_005c2265:; BB(0x005c2265);
    /* 005c2265: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c2268: cmp dword ptr [edx + 0x1d88], 0 */ {  u32 a = R32((u32)(r_edx+0x1d88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c226f: je 0x5c22ae */ if (fZ) goto L_005c22ae;
L_005c2271:; BB(0x005c2271);
    /* 005c2271: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c2274: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c227a: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005c227d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c2280: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005c2283: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2287: je 0x5c229a */ if (fZ) goto L_005c229a;
L_005c2289:; BB(0x005c2289);
    /* 005c2289: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c228b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c228e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2290: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c2293: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c2295u); call_ind(t); }
    /* 005c2295: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005c2298: jmp 0x5c22a1 */ goto L_005c22a1;
L_005c229a:; BB(0x005c229a);
    /* 005c229a: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_005c22a1:; BB(0x005c22a1);
    /* 005c22a1: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c22a4: mov dword ptr [eax + 0x1d88], 0 */ W32((u32)(r_eax+0x1d88u), 0x0u);
L_005c22ae:; BB(0x005c22ae);
    /* 005c22ae: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c22b1: cmp dword ptr [ecx + 0x1d8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c22b8: je 0x5c22f7 */ if (fZ) goto L_005c22f7;
L_005c22ba:; BB(0x005c22ba);
    /* 005c22ba: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c22bd: mov eax, dword ptr [edx + 0x1d8c] */ r_eax = R32((u32)(r_edx+0x1d8cu));
    /* 005c22c3: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005c22c6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c22c9: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005c22cc: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c22d0: je 0x5c22e3 */ if (fZ) goto L_005c22e3;
L_005c22d2:; BB(0x005c22d2);
    /* 005c22d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c22d4: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c22d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c22d9: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c22dc: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c22deu); call_ind(t); }
    /* 005c22de: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005c22e1: jmp 0x5c22ea */ goto L_005c22ea;
L_005c22e3:; BB(0x005c22e3);
    /* 005c22e3: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_005c22ea:; BB(0x005c22ea);
    /* 005c22ea: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c22ed: mov dword ptr [ecx + 0x1d8c], 0 */ W32((u32)(r_ecx+0x1d8cu), 0x0u);
L_005c22f7:; BB(0x005c22f7);
    /* 005c22f7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c22fa: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x5c22ffu); f_0044711a();
    /* 005c22ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005c2301: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2302: ret  */ FN_RET(0x005c1f4a); r_esp += 4; return;
}

void f_005c2303(void) /* FUN_005c2303 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c2303);
    /* 005c2303: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2304: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2306: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2309: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c230c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c230f: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x5c2314u); f_004476a6();
    /* 005c2314: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c2317: call 0x5c23b7 */ r_esp -= 4; W32(r_esp, 0x5c231cu); f_005c23b7();
    /* 005c231c: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2323: jne 0x5c23b3 */ if (!fZ) goto L_005c23b3;
L_005c2329:; BB(0x005c2329);
    /* 005c2329: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c232f: call 0x45cd8e */ r_esp -= 4; W32(r_esp, 0x5c2334u); f_0045cd8e();
    /* 005c2334: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2337: jne 0x5c23b3 */ if (!fZ) goto L_005c23b3;
L_005c2339:; BB(0x005c2339);
    /* 005c2339: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2340: jne 0x5c23b3 */ if (!fZ) goto L_005c23b3;
L_005c2342:; BB(0x005c2342);
    /* 005c2342: push 0x1d60 */ { u32 v = 0x1d60u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2347: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c234cu); f_0048ab58();
    /* 005c234c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c234f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c2352: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2356: je 0x5c236b */ if (fZ) goto L_005c236b;
L_005c2358:; BB(0x005c2358);
    /* 005c2358: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c235a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c235c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c235e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2361: call 0x482ab0 */ r_esp -= 4; W32(r_esp, 0x5c2366u); f_00482ab0();
    /* 005c2366: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c2369: jmp 0x5c2372 */ goto L_005c2372;
L_005c236b:; BB(0x005c236b);
    /* 005c236b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005c2372:; BB(0x005c2372);
    /* 005c2372: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2375: mov dword ptr [0x6f6a18], eax */ W32((u32)(0x6f6a18u), r_eax);
    /* 005c237a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c237c: push 0x4fc */ { u32 v = 0x4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2381: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c2387: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x5c238cu); f_005e0461();
    /* 005c238c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c238e: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c2394: call 0x48359c */ r_esp -= 4; W32(r_esp, 0x5c2399u); f_0048359c();
    /* 005c2399: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c239b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c239d: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c23a3: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x5c23a8u); f_005d81dc();
    /* 005c23a8: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c23ae: call 0x4856fc */ r_esp -= 4; W32(r_esp, 0x5c23b3u); f_004856fc();
L_005c23b3:; BB(0x005c23b3);
    /* 005c23b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005c23b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c23b6: ret  */ FN_RET(0x005c2303); r_esp += 4; return;
}

void f_005c23b7(void) /* FUN_005c23b7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c23b7);
    /* 005c23b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c23b8: mov ebp, esp */ r_ebp = r_esp;
    /* 005c23ba: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c23bd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c23c0: push 0x4f1 */ { u32 v = 0x4f1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c23c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c23c8: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c23cdu); f_005e5ec3();
    /* 005c23cd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c23d0: mov dword ptr [eax + 0x1d94], 0 */ W32((u32)(r_eax+0x1d94u), 0x0u);
    /* 005c23da: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c23e0: jmp 0x5c23ee */ goto L_005c23ee;
L_005c23e2:; BB(0x005c23e2);
    /* 005c23e2: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005c23e6: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005c23ea: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_005c23ee:; BB(0x005c23ee);
    /* 005c23ee: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c23f2: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c23f5: jge 0x5c2519 */ if ((fS==fO)) goto L_005c2519;
L_005c23fb:; BB(0x005c23fb);
    /* 005c23fb: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c23ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2402: cmp dword ptr [ecx + eax*4 + 0x1cb0], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1cb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c240a: jne 0x5c24f3 */ if (!fZ) goto L_005c24f3;
L_005c2410:; BB(0x005c2410);
    /* 005c2410: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2415: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c241au); f_0048ab58();
    /* 005c241a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c241d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c2420: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2424: je 0x5c2438 */ if (fZ) goto L_005c2438;
L_005c2426:; BB(0x005c2426);
    /* 005c2426: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c242a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c242b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c242e: call 0x5c3c0d */ r_esp -= 4; W32(r_esp, 0x5c2433u); f_005c3c0d();
    /* 005c2433: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c2436: jmp 0x5c243f */ goto L_005c243f;
L_005c2438:; BB(0x005c2438);
    /* 005c2438: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005c243f:; BB(0x005c243f);
    /* 005c243f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c2443: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2446: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2449: mov dword ptr [ecx + eax*4 + 0x1cb0], edx */ W32((u32)(r_ecx+r_eax*4+0x1cb0u), r_edx);
    /* 005c2450: push 0x4f0 */ { u32 v = 0x4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2455: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c2459: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c245c: mov ecx, dword ptr [ecx + eax*4 + 0x1cb0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1cb0u));
    /* 005c2463: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c2467: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c246a: mov edx, dword ptr [eax + edx*4 + 0x1cb0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c2471: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2473: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5c2476u); call_ind(t); }
    /* 005c2476: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c247a: lea edx, [ecx + ecx + 1] */ r_edx = (u32)(r_ecx+r_ecx+0x1u);
    /* 005c247e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c247f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c2483: lea ecx, [eax + eax + 1] */ r_ecx = (u32)(r_eax+r_eax+0x1u);
    /* 005c2487: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2488: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c248c: lea eax, [edx + edx + 1] */ r_eax = (u32)(r_edx+r_edx+0x1u);
    /* 005c2490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2491: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c2495: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005c2497: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2498: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c249c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c249f: mov ecx, dword ptr [eax + edx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c24a6: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5c24abu); f_005d5ff2();
    /* 005c24ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c24ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c24af: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c24b3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c24b6: mov ecx, dword ptr [edx + ecx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cb0u));
    /* 005c24bd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c24c1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c24c4: mov eax, dword ptr [edx + eax*4 + 0x1cb0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1cb0u));
    /* 005c24cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c24cd: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5c24d0u); call_ind(t); }
    /* 005c24d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c24d2: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c24d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c24d9: mov ecx, dword ptr [ecx + eax*4 + 0x1cb0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1cb0u));
    /* 005c24e0: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c24e4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c24e7: mov edx, dword ptr [eax + edx*4 + 0x1cb0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c24ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c24f0: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c24f3u); call_ind(t); }
L_005c24f3:; BB(0x005c24f3);
    /* 005c24f3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c24f7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c24fa: mov ecx, dword ptr [edx + ecx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cb0u));
    /* 005c2501: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c2505: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2508: mov eax, dword ptr [edx + eax*4 + 0x1cb0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1cb0u));
    /* 005c250f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2511: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c2514u); call_ind(t); }
    /* 005c2514: jmp 0x5c23e2 */ goto L_005c23e2;
L_005c2519:; BB(0x005c2519);
    /* 005c2519: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c251c: cmp dword ptr [eax + 0x1d84], 0 */ {  u32 a = R32((u32)(r_eax+0x1d84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2523: je 0x5c253c */ if (fZ) goto L_005c253c;
L_005c2525:; BB(0x005c2525);
    /* 005c2525: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2528: mov ecx, dword ptr [ecx + 0x1d84] */ r_ecx = R32((u32)(r_ecx+0x1d84u));
    /* 005c252e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2531: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c2537: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2539: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c253cu); call_ind(t); }
L_005c253c:; BB(0x005c253c);
    /* 005c253c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c253f: cmp dword ptr [eax + 0x1d88], 0 */ {  u32 a = R32((u32)(r_eax+0x1d88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2546: je 0x5c255f */ if (fZ) goto L_005c255f;
L_005c2548:; BB(0x005c2548);
    /* 005c2548: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c254b: mov ecx, dword ptr [ecx + 0x1d88] */ r_ecx = R32((u32)(r_ecx+0x1d88u));
    /* 005c2551: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2554: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c255a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c255c: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c255fu); call_ind(t); }
L_005c255f:; BB(0x005c255f);
    /* 005c255f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2562: cmp dword ptr [eax + 0x1d8c], 0 */ {  u32 a = R32((u32)(r_eax+0x1d8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2569: je 0x5c2582 */ if (fZ) goto L_005c2582;
L_005c256b:; BB(0x005c256b);
    /* 005c256b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c256e: mov ecx, dword ptr [ecx + 0x1d8c] */ r_ecx = R32((u32)(r_ecx+0x1d8cu));
    /* 005c2574: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2577: mov eax, dword ptr [edx + 0x1d8c] */ r_eax = R32((u32)(r_edx+0x1d8cu));
    /* 005c257d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c257f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c2582u); call_ind(t); }
L_005c2582:; BB(0x005c2582);
    /* 005c2582: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2585: cmp dword ptr [eax + 0x1d80], 0 */ {  u32 a = R32((u32)(r_eax+0x1d80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c258c: je 0x5c25a5 */ if (fZ) goto L_005c25a5;
L_005c258e:; BB(0x005c258e);
    /* 005c258e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2591: mov ecx, dword ptr [ecx + 0x1d80] */ r_ecx = R32((u32)(r_ecx+0x1d80u));
    /* 005c2597: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c259a: mov eax, dword ptr [edx + 0x1d80] */ r_eax = R32((u32)(r_edx+0x1d80u));
    /* 005c25a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c25a2: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c25a5u); call_ind(t); }
L_005c25a5:; BB(0x005c25a5);
    /* 005c25a5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c25a8: cmp dword ptr [eax + 0x1d50], 0 */ {  u32 a = R32((u32)(r_eax+0x1d50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c25af: je 0x5c25c8 */ if (fZ) goto L_005c25c8;
L_005c25b1:; BB(0x005c25b1);
    /* 005c25b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c25b4: mov ecx, dword ptr [ecx + 0x1d50] */ r_ecx = R32((u32)(r_ecx+0x1d50u));
    /* 005c25ba: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c25bd: mov eax, dword ptr [edx + 0x1d50] */ r_eax = R32((u32)(r_edx+0x1d50u));
    /* 005c25c3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c25c5: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c25c8u); call_ind(t); }
L_005c25c8:; BB(0x005c25c8);
    /* 005c25c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c25ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c25cb: ret  */ FN_RET(0x005c23b7); r_esp += 4; return;
}

void f_005c25cc(void) /* FUN_005c25cc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c25cc);
    /* 005c25cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c25cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005c25cf: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c25d2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c25d5: push 0x501 */ { u32 v = 0x501u; r_esp -= 4; W32(r_esp, v); }
    /* 005c25da: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c25dd: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c25e2u); f_005e5ec3();
    /* 005c25e2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c25e5: mov dword ptr [eax + 0x1d94], 1 */ W32((u32)(r_eax+0x1d94u), 0x1u);
    /* 005c25ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c25f6: jmp 0x5c2601 */ goto L_005c2601;
L_005c25f8:; BB(0x005c25f8);
    /* 005c25f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c25fb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c25fe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c2601:; BB(0x005c2601);
    /* 005c2601: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2605: jge 0x5c2628 */ if ((fS==fO)) goto L_005c2628;
L_005c2607:; BB(0x005c2607);
    /* 005c2607: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c260a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c260d: mov ecx, dword ptr [eax + edx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c2614: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2617: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c261a: mov edx, dword ptr [eax + edx*4 + 0x1cb0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c2621: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2623: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5c2626u); call_ind(t); }
    /* 005c2626: jmp 0x5c25f8 */ goto L_005c25f8;
L_005c2628:; BB(0x005c2628);
    /* 005c2628: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c262b: cmp dword ptr [ecx + 0x1d50], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2632: je 0x5c2671 */ if (fZ) goto L_005c2671;
L_005c2634:; BB(0x005c2634);
    /* 005c2634: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2637: mov eax, dword ptr [edx + 0x1d50] */ r_eax = R32((u32)(r_edx+0x1d50u));
    /* 005c263d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c2640: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2643: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c2646: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c264a: je 0x5c265d */ if (fZ) goto L_005c265d;
L_005c264c:; BB(0x005c264c);
    /* 005c264c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c264e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c2651: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2653: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c2656: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c2658u); call_ind(t); }
    /* 005c2658: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c265b: jmp 0x5c2664 */ goto L_005c2664;
L_005c265d:; BB(0x005c265d);
    /* 005c265d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c2664:; BB(0x005c2664);
    /* 005c2664: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2667: mov dword ptr [ecx + 0x1d50], 0 */ W32((u32)(r_ecx+0x1d50u), 0x0u);
L_005c2671:; BB(0x005c2671);
    /* 005c2671: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2674: cmp dword ptr [edx + 0x1d50], 0 */ {  u32 a = R32((u32)(r_edx+0x1d50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c267b: jne 0x5c26b0 */ if (!fZ) goto L_005c26b0;
L_005c267d:; BB(0x005c267d);
    /* 005c267d: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005c267f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c2684u); f_0048ab58();
    /* 005c2684: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2687: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c268a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c268e: je 0x5c269d */ if (fZ) goto L_005c269d;
L_005c2690:; BB(0x005c2690);
    /* 005c2690: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2693: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x5c2698u); f_005d505b();
    /* 005c2698: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c269b: jmp 0x5c26a4 */ goto L_005c26a4;
L_005c269d:; BB(0x005c269d);
    /* 005c269d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005c26a4:; BB(0x005c26a4);
    /* 005c26a4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c26a7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c26aa: mov dword ptr [eax + 0x1d50], ecx */ W32((u32)(r_eax+0x1d50u), r_ecx);
L_005c26b0:; BB(0x005c26b0);
    /* 005c26b0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c26b3: mov ecx, dword ptr [edx + 0x1d50] */ r_ecx = R32((u32)(r_edx+0x1d50u));
    /* 005c26b9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c26bc: mov edx, dword ptr [eax + 0x1d50] */ r_edx = R32((u32)(r_eax+0x1d50u));
    /* 005c26c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c26c4: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5c26c7u); call_ind(t); }
    /* 005c26c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c26c9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c26cc: mov ecx, dword ptr [ecx + 0x1d50] */ r_ecx = R32((u32)(r_ecx+0x1d50u));
    /* 005c26d2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c26d5: mov eax, dword ptr [edx + 0x1d50] */ r_eax = R32((u32)(r_edx+0x1d50u));
    /* 005c26db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c26dd: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c26e0u); call_ind(t); }
    /* 005c26e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c26e7: jmp 0x5c26f2 */ goto L_005c26f2;
L_005c26e9:; BB(0x005c26e9);
    /* 005c26e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c26ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c26ef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c26f2:; BB(0x005c26f2);
    /* 005c26f2: cmp dword ptr [ebp - 4], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c26f6: jge 0x5c2887 */ if ((fS==fO)) goto L_005c2887;
L_005c26fc:; BB(0x005c26fc);
    /* 005c26fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c26ff: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2702: cmp dword ptr [edx + ecx*4 + 0x1cc0], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1cc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c270a: jne 0x5c274c */ if (!fZ) goto L_005c274c;
L_005c270c:; BB(0x005c270c);
    /* 005c270c: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2711: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c2716u); f_0048ab58();
    /* 005c2716: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2719: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c271c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2720: je 0x5c2735 */ if (fZ) goto L_005c2735;
L_005c2722:; BB(0x005c2722);
    /* 005c2722: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2724: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2728: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c272b: call 0x5c3cc8 */ r_esp -= 4; W32(r_esp, 0x5c2730u); f_005c3cc8();
    /* 005c2730: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c2733: jmp 0x5c273c */ goto L_005c273c;
L_005c2735:; BB(0x005c2735);
    /* 005c2735: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005c273c:; BB(0x005c273c);
    /* 005c273c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c273f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2742: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c2745: mov dword ptr [edx + ecx*4 + 0x1cc0], eax */ W32((u32)(r_edx+r_ecx*4+0x1cc0u), r_eax);
L_005c274c:; BB(0x005c274c);
    /* 005c274c: push 0x4ff */ { u32 v = 0x4ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2751: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2754: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2757: mov ecx, dword ptr [edx + ecx*4 + 0x1cc0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cc0u));
    /* 005c275e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2761: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2764: mov eax, dword ptr [edx + eax*4 + 0x1cc0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1cc0u));
    /* 005c276b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c276d: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5c2770u); call_ind(t); }
    /* 005c2770: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2773: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2776: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c277a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c277d: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2780: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2781: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2784: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2787: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c278a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c278b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c278e: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2791: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2795: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2798: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c279b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c279e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c279f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c27a2: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c27a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c27a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c27a9: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c27ac: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c27af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c27b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c27b3: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c27b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c27b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c27ba: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c27bd: mov ecx, dword ptr [eax + edx*4 + 0x1cc0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cc0u));
    /* 005c27c4: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x5c27c9u); f_005d727e();
    /* 005c27c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c27cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c27cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c27d0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c27d3: mov ecx, dword ptr [edx + ecx*4 + 0x1cc0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cc0u));
    /* 005c27da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c27dd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c27e0: mov eax, dword ptr [edx + eax*4 + 0x1cc0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1cc0u));
    /* 005c27e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c27e9: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5c27ecu); call_ind(t); }
    /* 005c27ec: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 005c27f1: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c27f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c27f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c27f8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c27fb: mov ecx, dword ptr [edx + ecx*4 + 0x1cc0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cc0u));
    /* 005c2802: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2805: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2808: mov eax, dword ptr [edx + eax*4 + 0x1cc0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1cc0u));
    /* 005c280f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2811: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c2814u); call_ind(t); }
    /* 005c2814: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2817: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c281a: mov ecx, dword ptr [ecx + eax*4 + 0x1cc0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1cc0u));
    /* 005c2821: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2824: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2827: mov edx, dword ptr [eax + edx*4 + 0x1cc0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1cc0u));
    /* 005c282e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2830: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5c2833u); call_ind(t); }
    /* 005c2833: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2835: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2838: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c283b: mov ecx, dword ptr [edx + ecx*4 + 0x1cc0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cc0u));
    /* 005c2842: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x5c2847u); f_005ea514();
    /* 005c2847: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c284a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c284d: mov ecx, dword ptr [ecx + eax*4 + 0x1cc0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1cc0u));
    /* 005c2854: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2857: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c285a: mov edx, dword ptr [eax + edx*4 + 0x1cc0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1cc0u));
    /* 005c2861: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2863: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5c2866u); call_ind(t); }
    /* 005c2866: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2869: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c286c: mov eax, dword ptr [edx + ecx*4 + 0x1cc0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cc0u));
    /* 005c2873: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2874: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2877: mov ecx, dword ptr [ecx + 0x1d50] */ r_ecx = R32((u32)(r_ecx+0x1d50u));
    /* 005c287d: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x5c2882u); f_005d50ed();
    /* 005c2882: jmp 0x5c26e9 */ goto L_005c26e9;
L_005c2887:; BB(0x005c2887);
    /* 005c2887: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c288a: call 0x5c38be */ r_esp -= 4; W32(r_esp, 0x5c288fu); f_005c38be();
    /* 005c288f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2890: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2893: mov ecx, dword ptr [edx + 0x1d50] */ r_ecx = R32((u32)(r_edx+0x1d50u));
    /* 005c2899: call 0x5d5253 */ r_esp -= 4; W32(r_esp, 0x5c289eu); f_005d5253();
    /* 005c289e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c28a1: mov ecx, dword ptr [eax + 0x1d50] */ r_ecx = R32((u32)(r_eax+0x1d50u));
    /* 005c28a7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c28aa: mov eax, dword ptr [edx + 0x1d50] */ r_eax = R32((u32)(r_edx+0x1d50u));
    /* 005c28b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c28b2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c28b5u); call_ind(t); }
    /* 005c28b5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c28b8: cmp dword ptr [eax + 0x1d8c], 0 */ {  u32 a = R32((u32)(r_eax+0x1d8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c28bf: jne 0x5c28f4 */ if (!fZ) goto L_005c28f4;
L_005c28c1:; BB(0x005c28c1);
    /* 005c28c1: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c28c3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c28c8u); f_0048ab58();
    /* 005c28c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c28cb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c28ce: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c28d2: je 0x5c28e1 */ if (fZ) goto L_005c28e1;
L_005c28d4:; BB(0x005c28d4);
    /* 005c28d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c28d7: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5c28dcu); f_005e9d30();
    /* 005c28dc: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c28df: jmp 0x5c28e8 */ goto L_005c28e8;
L_005c28e1:; BB(0x005c28e1);
    /* 005c28e1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005c28e8:; BB(0x005c28e8);
    /* 005c28e8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c28eb: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c28ee: mov dword ptr [ecx + 0x1d8c], edx */ W32((u32)(r_ecx+0x1d8cu), r_edx);
L_005c28f4:; BB(0x005c28f4);
    /* 005c28f4: push 0x503 */ { u32 v = 0x503u; r_esp -= 4; W32(r_esp, v); }
    /* 005c28f9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c28fc: mov ecx, dword ptr [eax + 0x1d8c] */ r_ecx = R32((u32)(r_eax+0x1d8cu));
    /* 005c2902: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c2907u); f_005ea0c3();
    /* 005c2907: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2909: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c290c: mov ecx, dword ptr [ecx + 0x1d8c] */ r_ecx = R32((u32)(r_ecx+0x1d8cu));
    /* 005c2912: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5c2917u); f_005ea1cf();
    /* 005c2917: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c291a: mov ecx, dword ptr [edx + 0x1d8c] */ r_ecx = R32((u32)(r_edx+0x1d8cu));
    /* 005c2920: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2923: mov edx, dword ptr [eax + 0x1d8c] */ r_edx = R32((u32)(r_eax+0x1d8cu));
    /* 005c2929: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c292b: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5c292eu); call_ind(t); }
    /* 005c292e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2930: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2932: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2935: mov ecx, dword ptr [ecx + 0x1d8c] */ r_ecx = R32((u32)(r_ecx+0x1d8cu));
    /* 005c293b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c293e: mov eax, dword ptr [edx + 0x1d8c] */ r_eax = R32((u32)(r_edx+0x1d8cu));
    /* 005c2944: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2946: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c2949u); call_ind(t); }
    /* 005c2949: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c294c: mov ecx, dword ptr [eax + 0x1d8c] */ r_ecx = R32((u32)(r_eax+0x1d8cu));
    /* 005c2952: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2955: mov eax, dword ptr [edx + 0x1d8c] */ r_eax = R32((u32)(r_edx+0x1d8cu));
    /* 005c295b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c295d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c2960u); call_ind(t); }
    /* 005c2960: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2963: cmp dword ptr [eax + 0x1d84], 0 */ {  u32 a = R32((u32)(r_eax+0x1d84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c296a: jne 0x5c29ae */ if (!fZ) goto L_005c29ae;
L_005c296c:; BB(0x005c296c);
    /* 005c296c: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2971: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c2976u); f_0048ab58();
    /* 005c2976: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2979: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c297c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2980: je 0x5c299b */ if (fZ) goto L_005c299b;
L_005c2982:; BB(0x005c2982);
    /* 005c2982: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2985: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c298au); f_005d5d20();
    /* 005c298a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c298d: mov dword ptr [ecx], 0x63a2ac */ W32((u32)(r_ecx), 0x63a2acu);
    /* 005c2993: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2996: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005c2999: jmp 0x5c29a2 */ goto L_005c29a2;
L_005c299b:; BB(0x005c299b);
    /* 005c299b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005c29a2:; BB(0x005c29a2);
    /* 005c29a2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c29a5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c29a8: mov dword ptr [eax + 0x1d84], ecx */ W32((u32)(r_eax+0x1d84u), r_ecx);
L_005c29ae:; BB(0x005c29ae);
    /* 005c29ae: push 0x51b */ { u32 v = 0x51bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c29b3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c29b6: mov ecx, dword ptr [edx + 0x1d84] */ r_ecx = R32((u32)(r_edx+0x1d84u));
    /* 005c29bc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c29bf: mov edx, dword ptr [eax + 0x1d84] */ r_edx = R32((u32)(r_eax+0x1d84u));
    /* 005c29c5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c29c7: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5c29cau); call_ind(t); }
    /* 005c29ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c29cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c29ce: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c29d1: mov ecx, dword ptr [ecx + 0x1d84] */ r_ecx = R32((u32)(r_ecx+0x1d84u));
    /* 005c29d7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c29da: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c29e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c29e2: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c29e5u); call_ind(t); }
    /* 005c29e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c29e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c29e9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c29ec: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c29f2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c29f5: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c29fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c29fd: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5c2a00u); call_ind(t); }
    /* 005c2a00: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a02: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2a05: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c2a0b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2a0e: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c2a14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2a16: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c2a19u); call_ind(t); }
    /* 005c2a19: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a1b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a1d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a1f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a21: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2a24: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c2a2a: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5c2a2fu); f_005d5ff2();
    /* 005c2a2f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2a32: mov ecx, dword ptr [ecx + 0x1d84] */ r_ecx = R32((u32)(r_ecx+0x1d84u));
    /* 005c2a38: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2a3b: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c2a41: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2a43: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5c2a46u); call_ind(t); }
    /* 005c2a46: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2a49: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c2a4f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2a52: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c2a58: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2a5a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c2a5du); call_ind(t); }
    /* 005c2a5d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2a60: cmp dword ptr [eax + 0x1d88], 0 */ {  u32 a = R32((u32)(r_eax+0x1d88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2a67: jne 0x5c2aab */ if (!fZ) goto L_005c2aab;
L_005c2a69:; BB(0x005c2a69);
    /* 005c2a69: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a6e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c2a73u); f_0048ab58();
    /* 005c2a73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2a76: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c2a79: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2a7d: je 0x5c2a98 */ if (fZ) goto L_005c2a98;
L_005c2a7f:; BB(0x005c2a7f);
    /* 005c2a7f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2a82: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c2a87u); f_005d5d20();
    /* 005c2a87: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2a8a: mov dword ptr [ecx], 0x63a23c */ W32((u32)(r_ecx), 0x63a23cu);
    /* 005c2a90: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2a93: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005c2a96: jmp 0x5c2a9f */ goto L_005c2a9f;
L_005c2a98:; BB(0x005c2a98);
    /* 005c2a98: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005c2a9f:; BB(0x005c2a9f);
    /* 005c2a9f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2aa2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c2aa5: mov dword ptr [eax + 0x1d88], ecx */ W32((u32)(r_eax+0x1d88u), r_ecx);
L_005c2aab:; BB(0x005c2aab);
    /* 005c2aab: push 0x51b */ { u32 v = 0x51bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ab0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2ab3: mov ecx, dword ptr [edx + 0x1d88] */ r_ecx = R32((u32)(r_edx+0x1d88u));
    /* 005c2ab9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2abc: mov edx, dword ptr [eax + 0x1d88] */ r_edx = R32((u32)(r_eax+0x1d88u));
    /* 005c2ac2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2ac4: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5c2ac7u); call_ind(t); }
    /* 005c2ac7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ac9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2acb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2ace: mov ecx, dword ptr [ecx + 0x1d88] */ r_ecx = R32((u32)(r_ecx+0x1d88u));
    /* 005c2ad4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2ad7: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c2add: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2adf: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c2ae2u); call_ind(t); }
    /* 005c2ae2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ae4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ae6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2ae9: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c2aef: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2af2: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c2af8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2afa: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5c2afdu); call_ind(t); }
    /* 005c2afd: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2aff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2b02: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c2b08: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2b0b: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c2b11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2b13: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c2b16u); call_ind(t); }
    /* 005c2b16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b1a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b1e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2b21: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c2b27: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5c2b2cu); f_005d5ff2();
    /* 005c2b2c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2b2f: mov ecx, dword ptr [ecx + 0x1d88] */ r_ecx = R32((u32)(r_ecx+0x1d88u));
    /* 005c2b35: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2b38: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c2b3e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2b40: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5c2b43u); call_ind(t); }
    /* 005c2b43: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2b46: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c2b4c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2b4f: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c2b55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2b57: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c2b5au); call_ind(t); }
    /* 005c2b5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b5c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2b5f: call 0x5c35f5 */ r_esp -= 4; W32(r_esp, 0x5c2b64u); f_005c35f5();
    /* 005c2b64: mov esp, ebp */ r_esp = r_ebp;
    /* 005c2b66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2b67: ret  */ FN_RET(0x005c25cc); r_esp += 4; return;
}

void f_005c2b68(void) /* FUN_005c2b68 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c2b68);
    /* 005c2b68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b69: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2b6b: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2b6e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c2b71: push 0x501 */ { u32 v = 0x501u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b76: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2b79: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c2b7eu); f_005e5ec3();
    /* 005c2b7e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2b81: mov dword ptr [eax + 0x1d94], 2 */ W32((u32)(r_eax+0x1d94u), 0x2u);
    /* 005c2b8b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c2b92: jmp 0x5c2b9d */ goto L_005c2b9d;
L_005c2b94:; BB(0x005c2b94);
    /* 005c2b94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2b97: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2b9a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c2b9d:; BB(0x005c2b9d);
    /* 005c2b9d: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2ba1: jge 0x5c2bc4 */ if ((fS==fO)) goto L_005c2bc4;
L_005c2ba3:; BB(0x005c2ba3);
    /* 005c2ba3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2ba6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2ba9: mov ecx, dword ptr [eax + edx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c2bb0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2bb3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2bb6: mov edx, dword ptr [eax + edx*4 + 0x1cb0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c2bbd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2bbf: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5c2bc2u); call_ind(t); }
    /* 005c2bc2: jmp 0x5c2b94 */ goto L_005c2b94;
L_005c2bc4:; BB(0x005c2bc4);
    /* 005c2bc4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2bc7: cmp dword ptr [ecx + 0x1d50], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2bce: je 0x5c2c0d */ if (fZ) goto L_005c2c0d;
L_005c2bd0:; BB(0x005c2bd0);
    /* 005c2bd0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2bd3: mov eax, dword ptr [edx + 0x1d50] */ r_eax = R32((u32)(r_edx+0x1d50u));
    /* 005c2bd9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c2bdc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2bdf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c2be2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2be6: je 0x5c2bf9 */ if (fZ) goto L_005c2bf9;
L_005c2be8:; BB(0x005c2be8);
    /* 005c2be8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2bea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c2bed: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2bef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c2bf2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c2bf4u); call_ind(t); }
    /* 005c2bf4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c2bf7: jmp 0x5c2c00 */ goto L_005c2c00;
L_005c2bf9:; BB(0x005c2bf9);
    /* 005c2bf9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c2c00:; BB(0x005c2c00);
    /* 005c2c00: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2c03: mov dword ptr [ecx + 0x1d50], 0 */ W32((u32)(r_ecx+0x1d50u), 0x0u);
L_005c2c0d:; BB(0x005c2c0d);
    /* 005c2c0d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2c10: cmp dword ptr [edx + 0x1d50], 0 */ {  u32 a = R32((u32)(r_edx+0x1d50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2c17: jne 0x5c2c4c */ if (!fZ) goto L_005c2c4c;
L_005c2c19:; BB(0x005c2c19);
    /* 005c2c19: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2c1b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c2c20u); f_0048ab58();
    /* 005c2c20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2c23: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c2c26: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2c2a: je 0x5c2c39 */ if (fZ) goto L_005c2c39;
L_005c2c2c:; BB(0x005c2c2c);
    /* 005c2c2c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2c2f: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x5c2c34u); f_005d505b();
    /* 005c2c34: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c2c37: jmp 0x5c2c40 */ goto L_005c2c40;
L_005c2c39:; BB(0x005c2c39);
    /* 005c2c39: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005c2c40:; BB(0x005c2c40);
    /* 005c2c40: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2c43: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c2c46: mov dword ptr [eax + 0x1d50], ecx */ W32((u32)(r_eax+0x1d50u), r_ecx);
L_005c2c4c:; BB(0x005c2c4c);
    /* 005c2c4c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2c4f: mov ecx, dword ptr [edx + 0x1d50] */ r_ecx = R32((u32)(r_edx+0x1d50u));
    /* 005c2c55: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2c58: mov edx, dword ptr [eax + 0x1d50] */ r_edx = R32((u32)(r_eax+0x1d50u));
    /* 005c2c5e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2c60: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5c2c63u); call_ind(t); }
    /* 005c2c63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2c65: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2c68: mov ecx, dword ptr [ecx + 0x1d50] */ r_ecx = R32((u32)(r_ecx+0x1d50u));
    /* 005c2c6e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2c71: mov eax, dword ptr [edx + 0x1d50] */ r_eax = R32((u32)(r_edx+0x1d50u));
    /* 005c2c77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2c79: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c2c7cu); call_ind(t); }
    /* 005c2c7c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c2c83: jmp 0x5c2c8e */ goto L_005c2c8e;
L_005c2c85:; BB(0x005c2c85);
    /* 005c2c85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2c88: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2c8b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c2c8e:; BB(0x005c2c8e);
    /* 005c2c8e: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2c92: jge 0x5c2e23 */ if ((fS==fO)) goto L_005c2e23;
L_005c2c98:; BB(0x005c2c98);
    /* 005c2c98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2c9b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2c9e: cmp dword ptr [edx + ecx*4 + 0x1d18], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1d18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2ca6: jne 0x5c2ce8 */ if (!fZ) goto L_005c2ce8;
L_005c2ca8:; BB(0x005c2ca8);
    /* 005c2ca8: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2cad: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c2cb2u); f_0048ab58();
    /* 005c2cb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2cb5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c2cb8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2cbc: je 0x5c2cd1 */ if (fZ) goto L_005c2cd1;
L_005c2cbe:; BB(0x005c2cbe);
    /* 005c2cbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2cc0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2cc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2cc4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c2cc7: call 0x5c3cc8 */ r_esp -= 4; W32(r_esp, 0x5c2cccu); f_005c3cc8();
    /* 005c2ccc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c2ccf: jmp 0x5c2cd8 */ goto L_005c2cd8;
L_005c2cd1:; BB(0x005c2cd1);
    /* 005c2cd1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005c2cd8:; BB(0x005c2cd8);
    /* 005c2cd8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2cdb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2cde: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c2ce1: mov dword ptr [edx + ecx*4 + 0x1d18], eax */ W32((u32)(r_edx+r_ecx*4+0x1d18u), r_eax);
L_005c2ce8:; BB(0x005c2ce8);
    /* 005c2ce8: push 0x504 */ { u32 v = 0x504u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ced: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2cf0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2cf3: mov ecx, dword ptr [edx + ecx*4 + 0x1d18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d18u));
    /* 005c2cfa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2cfd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2d00: mov eax, dword ptr [edx + eax*4 + 0x1d18] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1d18u));
    /* 005c2d07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2d09: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5c2d0cu); call_ind(t); }
    /* 005c2d0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d0f: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2d12: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2d15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d19: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2d1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d20: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2d23: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c2d26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d2a: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2d2d: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2d30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d34: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2d37: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2d3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d3b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d3e: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2d41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d45: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2d48: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2d4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d4c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d4f: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2d52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d53: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d56: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2d59: mov ecx, dword ptr [eax + edx*4 + 0x1d18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1d18u));
    /* 005c2d60: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x5c2d65u); f_005d727e();
    /* 005c2d65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d6c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2d6f: mov ecx, dword ptr [edx + ecx*4 + 0x1d18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d18u));
    /* 005c2d76: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d79: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2d7c: mov eax, dword ptr [edx + eax*4 + 0x1d18] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1d18u));
    /* 005c2d83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2d85: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5c2d88u); call_ind(t); }
    /* 005c2d88: mov eax, 8 */ r_eax = 0x8u;
    /* 005c2d8d: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c2d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d94: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2d97: mov ecx, dword ptr [edx + ecx*4 + 0x1d18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d18u));
    /* 005c2d9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2da1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2da4: mov eax, dword ptr [edx + eax*4 + 0x1d18] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1d18u));
    /* 005c2dab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2dad: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c2db0u); call_ind(t); }
    /* 005c2db0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2db2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2db5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2db8: mov ecx, dword ptr [ecx + eax*4 + 0x1d18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1d18u));
    /* 005c2dbf: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x5c2dc4u); f_005ea514();
    /* 005c2dc4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2dc7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2dca: mov ecx, dword ptr [eax + edx*4 + 0x1d18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1d18u));
    /* 005c2dd1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2dd4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2dd7: mov edx, dword ptr [eax + edx*4 + 0x1d18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1d18u));
    /* 005c2dde: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2de0: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5c2de3u); call_ind(t); }
    /* 005c2de3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2de6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2de9: mov ecx, dword ptr [edx + ecx*4 + 0x1d18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d18u));
    /* 005c2df0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2df3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2df6: mov eax, dword ptr [edx + eax*4 + 0x1d18] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1d18u));
    /* 005c2dfd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2dff: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c2e02u); call_ind(t); }
    /* 005c2e02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2e05: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2e08: mov edx, dword ptr [ecx + eax*4 + 0x1d18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1d18u));
    /* 005c2e0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e10: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2e13: mov ecx, dword ptr [eax + 0x1d50] */ r_ecx = R32((u32)(r_eax+0x1d50u));
    /* 005c2e19: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x5c2e1eu); f_005d50ed();
    /* 005c2e1e: jmp 0x5c2c85 */ goto L_005c2c85;
L_005c2e23:; BB(0x005c2e23);
    /* 005c2e23: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2e26: call 0x5c38be */ r_esp -= 4; W32(r_esp, 0x5c2e2bu); f_005c38be();
    /* 005c2e2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e2c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2e2f: mov ecx, dword ptr [ecx + 0x1d50] */ r_ecx = R32((u32)(r_ecx+0x1d50u));
    /* 005c2e35: call 0x5d5253 */ r_esp -= 4; W32(r_esp, 0x5c2e3au); f_005d5253();
    /* 005c2e3a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2e3d: mov ecx, dword ptr [edx + 0x1d50] */ r_ecx = R32((u32)(r_edx+0x1d50u));
    /* 005c2e43: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2e46: mov edx, dword ptr [eax + 0x1d50] */ r_edx = R32((u32)(r_eax+0x1d50u));
    /* 005c2e4c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2e4e: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5c2e51u); call_ind(t); }
    /* 005c2e51: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2e54: cmp dword ptr [ecx + 0x1d8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2e5b: jne 0x5c2e90 */ if (!fZ) goto L_005c2e90;
L_005c2e5d:; BB(0x005c2e5d);
    /* 005c2e5d: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e5f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c2e64u); f_0048ab58();
    /* 005c2e64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2e67: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c2e6a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2e6e: je 0x5c2e7d */ if (fZ) goto L_005c2e7d;
L_005c2e70:; BB(0x005c2e70);
    /* 005c2e70: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c2e73: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5c2e78u); f_005e9d30();
    /* 005c2e78: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c2e7b: jmp 0x5c2e84 */ goto L_005c2e84;
L_005c2e7d:; BB(0x005c2e7d);
    /* 005c2e7d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005c2e84:; BB(0x005c2e84);
    /* 005c2e84: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2e87: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005c2e8a: mov dword ptr [edx + 0x1d8c], eax */ W32((u32)(r_edx+0x1d8cu), r_eax);
L_005c2e90:; BB(0x005c2e90);
    /* 005c2e90: push 0x503 */ { u32 v = 0x503u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e95: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2e98: mov ecx, dword ptr [ecx + 0x1d8c] */ r_ecx = R32((u32)(r_ecx+0x1d8cu));
    /* 005c2e9e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c2ea3u); f_005ea0c3();
    /* 005c2ea3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ea5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2ea8: mov ecx, dword ptr [edx + 0x1d8c] */ r_ecx = R32((u32)(r_edx+0x1d8cu));
    /* 005c2eae: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5c2eb3u); f_005ea1cf();
    /* 005c2eb3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2eb6: mov ecx, dword ptr [eax + 0x1d8c] */ r_ecx = R32((u32)(r_eax+0x1d8cu));
    /* 005c2ebc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2ebf: mov eax, dword ptr [edx + 0x1d8c] */ r_eax = R32((u32)(r_edx+0x1d8cu));
    /* 005c2ec5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2ec7: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5c2ecau); call_ind(t); }
    /* 005c2eca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ecc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ece: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2ed1: mov ecx, dword ptr [eax + 0x1d8c] */ r_ecx = R32((u32)(r_eax+0x1d8cu));
    /* 005c2ed7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2eda: mov eax, dword ptr [edx + 0x1d8c] */ r_eax = R32((u32)(r_edx+0x1d8cu));
    /* 005c2ee0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2ee2: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c2ee5u); call_ind(t); }
    /* 005c2ee5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2ee8: mov ecx, dword ptr [eax + 0x1d8c] */ r_ecx = R32((u32)(r_eax+0x1d8cu));
    /* 005c2eee: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2ef1: mov eax, dword ptr [edx + 0x1d8c] */ r_eax = R32((u32)(r_edx+0x1d8cu));
    /* 005c2ef7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2ef9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c2efcu); call_ind(t); }
    /* 005c2efc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2eff: cmp dword ptr [eax + 0x1d84], 0 */ {  u32 a = R32((u32)(r_eax+0x1d84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2f06: jne 0x5c2f4a */ if (!fZ) goto L_005c2f4a;
L_005c2f08:; BB(0x005c2f08);
    /* 005c2f08: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f0d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c2f12u); f_0048ab58();
    /* 005c2f12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2f15: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c2f18: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2f1c: je 0x5c2f37 */ if (fZ) goto L_005c2f37;
L_005c2f1e:; BB(0x005c2f1e);
    /* 005c2f1e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2f21: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c2f26u); f_005d5d20();
    /* 005c2f26: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2f29: mov dword ptr [ecx], 0x63a2ac */ W32((u32)(r_ecx), 0x63a2acu);
    /* 005c2f2f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2f32: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005c2f35: jmp 0x5c2f3e */ goto L_005c2f3e;
L_005c2f37:; BB(0x005c2f37);
    /* 005c2f37: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005c2f3e:; BB(0x005c2f3e);
    /* 005c2f3e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2f41: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c2f44: mov dword ptr [eax + 0x1d84], ecx */ W32((u32)(r_eax+0x1d84u), r_ecx);
L_005c2f4a:; BB(0x005c2f4a);
    /* 005c2f4a: push 0x51b */ { u32 v = 0x51bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f4f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2f52: mov ecx, dword ptr [edx + 0x1d84] */ r_ecx = R32((u32)(r_edx+0x1d84u));
    /* 005c2f58: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2f5b: mov edx, dword ptr [eax + 0x1d84] */ r_edx = R32((u32)(r_eax+0x1d84u));
    /* 005c2f61: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2f63: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5c2f66u); call_ind(t); }
    /* 005c2f66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f6a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2f6d: mov ecx, dword ptr [ecx + 0x1d84] */ r_ecx = R32((u32)(r_ecx+0x1d84u));
    /* 005c2f73: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2f76: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c2f7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2f7e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c2f81u); call_ind(t); }
    /* 005c2f81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f85: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2f88: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c2f8e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2f91: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c2f97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2f99: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5c2f9cu); call_ind(t); }
    /* 005c2f9c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f9e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2fa1: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c2fa7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2faa: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c2fb0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2fb2: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c2fb5u); call_ind(t); }
    /* 005c2fb5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2fb7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2fb9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2fbb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2fbd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2fc0: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c2fc6: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5c2fcbu); f_005d5ff2();
    /* 005c2fcb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2fce: mov ecx, dword ptr [ecx + 0x1d84] */ r_ecx = R32((u32)(r_ecx+0x1d84u));
    /* 005c2fd4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2fd7: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c2fdd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2fdf: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5c2fe2u); call_ind(t); }
    /* 005c2fe2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2fe5: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c2feb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2fee: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c2ff4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2ff6: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c2ff9u); call_ind(t); }
    /* 005c2ff9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2ffc: cmp dword ptr [eax + 0x1d88], 0 */ {  u32 a = R32((u32)(r_eax+0x1d88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3003: jne 0x5c3047 */ if (!fZ) goto L_005c3047;
L_005c3005:; BB(0x005c3005);
    /* 005c3005: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c300a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c300fu); f_0048ab58();
    /* 005c300f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3012: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c3015: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3019: je 0x5c3034 */ if (fZ) goto L_005c3034;
L_005c301b:; BB(0x005c301b);
    /* 005c301b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c301e: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c3023u); f_005d5d20();
    /* 005c3023: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3026: mov dword ptr [ecx], 0x63a23c */ W32((u32)(r_ecx), 0x63a23cu);
    /* 005c302c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c302f: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005c3032: jmp 0x5c303b */ goto L_005c303b;
L_005c3034:; BB(0x005c3034);
    /* 005c3034: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005c303b:; BB(0x005c303b);
    /* 005c303b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c303e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c3041: mov dword ptr [eax + 0x1d88], ecx */ W32((u32)(r_eax+0x1d88u), r_ecx);
L_005c3047:; BB(0x005c3047);
    /* 005c3047: push 0x51b */ { u32 v = 0x51bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c304c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c304f: mov ecx, dword ptr [edx + 0x1d88] */ r_ecx = R32((u32)(r_edx+0x1d88u));
    /* 005c3055: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c3058: mov edx, dword ptr [eax + 0x1d88] */ r_edx = R32((u32)(r_eax+0x1d88u));
    /* 005c305e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c3060: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5c3063u); call_ind(t); }
    /* 005c3063: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3067: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c306a: mov ecx, dword ptr [ecx + 0x1d88] */ r_ecx = R32((u32)(r_ecx+0x1d88u));
    /* 005c3070: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c3073: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c3079: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c307b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c307eu); call_ind(t); }
    /* 005c307e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3082: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c3085: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c308b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c308e: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c3094: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3096: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5c3099u); call_ind(t); }
    /* 005c3099: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c309b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c309e: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c30a4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c30a7: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c30ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c30af: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c30b2u); call_ind(t); }
    /* 005c30b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c30b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c30b6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c30b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c30ba: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c30bd: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c30c3: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5c30c8u); f_005d5ff2();
    /* 005c30c8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c30cb: mov ecx, dword ptr [ecx + 0x1d88] */ r_ecx = R32((u32)(r_ecx+0x1d88u));
    /* 005c30d1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c30d4: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c30da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c30dc: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5c30dfu); call_ind(t); }
    /* 005c30df: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c30e2: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c30e8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c30eb: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c30f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c30f3: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c30f6u); call_ind(t); }
    /* 005c30f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c30f8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c30fb: call 0x5c35f5 */ r_esp -= 4; W32(r_esp, 0x5c3100u); f_005c35f5();
    /* 005c3100: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3102: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3103: ret  */ FN_RET(0x005c2b68); r_esp += 4; return;
}

void f_005c3104(void) /* FUN_005c3104 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3104);
    /* 005c3104: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3105: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3107: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c310a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c310d: push 0x506 */ { u32 v = 0x506u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3112: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3115: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c311au); f_005e5ec3();
    /* 005c311a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c311d: mov dword ptr [eax + 0x1d94], 3 */ W32((u32)(r_eax+0x1d94u), 0x3u);
    /* 005c3127: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c312e: jmp 0x5c3139 */ goto L_005c3139;
L_005c3130:; BB(0x005c3130);
    /* 005c3130: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3133: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3136: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c3139:; BB(0x005c3139);
    /* 005c3139: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c313d: jge 0x5c3160 */ if ((fS==fO)) goto L_005c3160;
L_005c313f:; BB(0x005c313f);
    /* 005c313f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3142: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3145: mov ecx, dword ptr [eax + edx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c314c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c314f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3152: mov edx, dword ptr [eax + edx*4 + 0x1cb0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c3159: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c315b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5c315eu); call_ind(t); }
    /* 005c315e: jmp 0x5c3130 */ goto L_005c3130;
L_005c3160:; BB(0x005c3160);
    /* 005c3160: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3163: cmp dword ptr [ecx + 0x1d50], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c316a: je 0x5c31a9 */ if (fZ) goto L_005c31a9;
L_005c316c:; BB(0x005c316c);
    /* 005c316c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c316f: mov eax, dword ptr [edx + 0x1d50] */ r_eax = R32((u32)(r_edx+0x1d50u));
    /* 005c3175: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c3178: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c317b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c317e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3182: je 0x5c3195 */ if (fZ) goto L_005c3195;
L_005c3184:; BB(0x005c3184);
    /* 005c3184: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3186: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c3189: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c318b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c318e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c3190u); call_ind(t); }
    /* 005c3190: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c3193: jmp 0x5c319c */ goto L_005c319c;
L_005c3195:; BB(0x005c3195);
    /* 005c3195: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c319c:; BB(0x005c319c);
    /* 005c319c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c319f: mov dword ptr [ecx + 0x1d50], 0 */ W32((u32)(r_ecx+0x1d50u), 0x0u);
L_005c31a9:; BB(0x005c31a9);
    /* 005c31a9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c31ac: cmp dword ptr [edx + 0x1d50], 0 */ {  u32 a = R32((u32)(r_edx+0x1d50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c31b3: jne 0x5c31e8 */ if (!fZ) goto L_005c31e8;
L_005c31b5:; BB(0x005c31b5);
    /* 005c31b5: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005c31b7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c31bcu); f_0048ab58();
    /* 005c31bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c31bf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c31c2: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c31c6: je 0x5c31d5 */ if (fZ) goto L_005c31d5;
L_005c31c8:; BB(0x005c31c8);
    /* 005c31c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c31cb: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x5c31d0u); f_005d505b();
    /* 005c31d0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c31d3: jmp 0x5c31dc */ goto L_005c31dc;
L_005c31d5:; BB(0x005c31d5);
    /* 005c31d5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c31dc:; BB(0x005c31dc);
    /* 005c31dc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c31df: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c31e2: mov dword ptr [eax + 0x1d50], ecx */ W32((u32)(r_eax+0x1d50u), r_ecx);
L_005c31e8:; BB(0x005c31e8);
    /* 005c31e8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c31eb: mov ecx, dword ptr [edx + 0x1d50] */ r_ecx = R32((u32)(r_edx+0x1d50u));
    /* 005c31f1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c31f4: mov edx, dword ptr [eax + 0x1d50] */ r_edx = R32((u32)(r_eax+0x1d50u));
    /* 005c31fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c31fc: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5c31ffu); call_ind(t); }
    /* 005c31ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3201: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3204: mov ecx, dword ptr [ecx + 0x1d50] */ r_ecx = R32((u32)(r_ecx+0x1d50u));
    /* 005c320a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c320d: mov eax, dword ptr [edx + 0x1d50] */ r_eax = R32((u32)(r_edx+0x1d50u));
    /* 005c3213: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3215: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c3218u); call_ind(t); }
    /* 005c3218: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c321f: jmp 0x5c322a */ goto L_005c322a;
L_005c3221:; BB(0x005c3221);
    /* 005c3221: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3224: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3227: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c322a:; BB(0x005c322a);
    /* 005c322a: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c322e: jge 0x5c33bf */ if ((fS==fO)) goto L_005c33bf;
L_005c3234:; BB(0x005c3234);
    /* 005c3234: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3237: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c323a: cmp dword ptr [edx + ecx*4 + 0x1d24], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1d24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3242: jne 0x5c3284 */ if (!fZ) goto L_005c3284;
L_005c3244:; BB(0x005c3244);
    /* 005c3244: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3249: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c324eu); f_0048ab58();
    /* 005c324e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3251: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c3254: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3258: je 0x5c326d */ if (fZ) goto L_005c326d;
L_005c325a:; BB(0x005c325a);
    /* 005c325a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c325c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c325f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3263: call 0x5c3cc8 */ r_esp -= 4; W32(r_esp, 0x5c3268u); f_005c3cc8();
    /* 005c3268: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c326b: jmp 0x5c3274 */ goto L_005c3274;
L_005c326d:; BB(0x005c326d);
    /* 005c326d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005c3274:; BB(0x005c3274);
    /* 005c3274: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3277: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c327a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c327d: mov dword ptr [edx + ecx*4 + 0x1d24], eax */ W32((u32)(r_edx+r_ecx*4+0x1d24u), r_eax);
L_005c3284:; BB(0x005c3284);
    /* 005c3284: push 0x507 */ { u32 v = 0x507u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3289: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c328c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c328f: mov ecx, dword ptr [edx + ecx*4 + 0x1d24] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d24u));
    /* 005c3296: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3299: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c329c: mov eax, dword ptr [edx + eax*4 + 0x1d24] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1d24u));
    /* 005c32a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c32a5: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5c32a8u); call_ind(t); }
    /* 005c32a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c32ab: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c32ae: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c32b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c32b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c32b5: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c32b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c32b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c32bc: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c32bf: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c32c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c32c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c32c6: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c32c9: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c32cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c32cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c32d0: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c32d3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c32d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c32d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c32da: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c32dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c32de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c32e1: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c32e4: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c32e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c32e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c32eb: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c32ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c32ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c32f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c32f5: mov ecx, dword ptr [eax + edx*4 + 0x1d24] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1d24u));
    /* 005c32fc: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x5c3301u); f_005d727e();
    /* 005c3301: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3303: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3305: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3308: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c330b: mov ecx, dword ptr [edx + ecx*4 + 0x1d24] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d24u));
    /* 005c3312: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3315: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3318: mov eax, dword ptr [edx + eax*4 + 0x1d24] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1d24u));
    /* 005c331f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3321: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5c3324u); call_ind(t); }
    /* 005c3324: mov eax, 0x10 */ r_eax = 0x10u;
    /* 005c3329: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c332c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c332d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3330: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3333: mov ecx, dword ptr [edx + ecx*4 + 0x1d24] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d24u));
    /* 005c333a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c333d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3340: mov eax, dword ptr [edx + eax*4 + 0x1d24] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1d24u));
    /* 005c3347: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3349: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c334cu); call_ind(t); }
    /* 005c334c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c334e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3351: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3354: mov ecx, dword ptr [ecx + eax*4 + 0x1d24] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1d24u));
    /* 005c335b: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x5c3360u); f_005ea514();
    /* 005c3360: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3363: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3366: mov ecx, dword ptr [eax + edx*4 + 0x1d24] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1d24u));
    /* 005c336d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3370: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3373: mov edx, dword ptr [eax + edx*4 + 0x1d24] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1d24u));
    /* 005c337a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c337c: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5c337fu); call_ind(t); }
    /* 005c337f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3382: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3385: mov ecx, dword ptr [edx + ecx*4 + 0x1d24] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d24u));
    /* 005c338c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c338f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3392: mov eax, dword ptr [edx + eax*4 + 0x1d24] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1d24u));
    /* 005c3399: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c339b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c339eu); call_ind(t); }
    /* 005c339e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c33a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c33a4: mov edx, dword ptr [ecx + eax*4 + 0x1d24] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1d24u));
    /* 005c33ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c33ac: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c33af: mov ecx, dword ptr [eax + 0x1d50] */ r_ecx = R32((u32)(r_eax+0x1d50u));
    /* 005c33b5: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x5c33bau); f_005d50ed();
    /* 005c33ba: jmp 0x5c3221 */ goto L_005c3221;
L_005c33bf:; BB(0x005c33bf);
    /* 005c33bf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c33c2: call 0x5c38be */ r_esp -= 4; W32(r_esp, 0x5c33c7u); f_005c38be();
    /* 005c33c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c33c8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c33cb: mov ecx, dword ptr [ecx + 0x1d50] */ r_ecx = R32((u32)(r_ecx+0x1d50u));
    /* 005c33d1: call 0x5d5253 */ r_esp -= 4; W32(r_esp, 0x5c33d6u); f_005d5253();
    /* 005c33d6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c33d9: mov ecx, dword ptr [edx + 0x1d50] */ r_ecx = R32((u32)(r_edx+0x1d50u));
    /* 005c33df: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c33e2: mov edx, dword ptr [eax + 0x1d50] */ r_edx = R32((u32)(r_eax+0x1d50u));
    /* 005c33e8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c33ea: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5c33edu); call_ind(t); }
    /* 005c33ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c33f0: cmp dword ptr [ecx + 0x1d84], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c33f7: jne 0x5c343b */ if (!fZ) goto L_005c343b;
L_005c33f9:; BB(0x005c33f9);
    /* 005c33f9: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c33fe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c3403u); f_0048ab58();
    /* 005c3403: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3406: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c3409: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c340d: je 0x5c3428 */ if (fZ) goto L_005c3428;
L_005c340f:; BB(0x005c340f);
    /* 005c340f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c3412: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c3417u); f_005d5d20();
    /* 005c3417: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c341a: mov dword ptr [edx], 0x63a2ac */ W32((u32)(r_edx), 0x63a2acu);
    /* 005c3420: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c3423: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c3426: jmp 0x5c342f */ goto L_005c342f;
L_005c3428:; BB(0x005c3428);
    /* 005c3428: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005c342f:; BB(0x005c342f);
    /* 005c342f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3432: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c3435: mov dword ptr [ecx + 0x1d84], edx */ W32((u32)(r_ecx+0x1d84u), r_edx);
L_005c343b:; BB(0x005c343b);
    /* 005c343b: push 0x51b */ { u32 v = 0x51bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c3440: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3443: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c3449: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c344c: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c3452: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3454: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5c3457u); call_ind(t); }
    /* 005c3457: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3459: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c345b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c345e: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c3464: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3467: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c346d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c346f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c3472u); call_ind(t); }
    /* 005c3472: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3474: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3476: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3479: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c347f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3482: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c3488: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c348a: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5c348du); call_ind(t); }
    /* 005c348d: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c348f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3492: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c3498: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c349b: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c34a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c34a3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c34a6u); call_ind(t); }
    /* 005c34a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c34a8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c34aa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c34ac: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c34ae: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c34b1: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c34b7: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5c34bcu); f_005d5ff2();
    /* 005c34bc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c34bf: mov ecx, dword ptr [ecx + 0x1d84] */ r_ecx = R32((u32)(r_ecx+0x1d84u));
    /* 005c34c5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c34c8: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c34ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c34d0: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5c34d3u); call_ind(t); }
    /* 005c34d3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c34d6: mov ecx, dword ptr [eax + 0x1d84] */ r_ecx = R32((u32)(r_eax+0x1d84u));
    /* 005c34dc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c34df: mov eax, dword ptr [edx + 0x1d84] */ r_eax = R32((u32)(r_edx+0x1d84u));
    /* 005c34e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c34e7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c34eau); call_ind(t); }
    /* 005c34ea: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c34ed: cmp dword ptr [eax + 0x1d88], 0 */ {  u32 a = R32((u32)(r_eax+0x1d88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c34f4: jne 0x5c3538 */ if (!fZ) goto L_005c3538;
L_005c34f6:; BB(0x005c34f6);
    /* 005c34f6: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c34fb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c3500u); f_0048ab58();
    /* 005c3500: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3503: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c3506: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c350a: je 0x5c3525 */ if (fZ) goto L_005c3525;
L_005c350c:; BB(0x005c350c);
    /* 005c350c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c350f: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c3514u); f_005d5d20();
    /* 005c3514: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c3517: mov dword ptr [ecx], 0x63a23c */ W32((u32)(r_ecx), 0x63a23cu);
    /* 005c351d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c3520: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005c3523: jmp 0x5c352c */ goto L_005c352c;
L_005c3525:; BB(0x005c3525);
    /* 005c3525: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005c352c:; BB(0x005c352c);
    /* 005c352c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c352f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c3532: mov dword ptr [eax + 0x1d88], ecx */ W32((u32)(r_eax+0x1d88u), r_ecx);
L_005c3538:; BB(0x005c3538);
    /* 005c3538: push 0x51b */ { u32 v = 0x51bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c353d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3540: mov ecx, dword ptr [edx + 0x1d88] */ r_ecx = R32((u32)(r_edx+0x1d88u));
    /* 005c3546: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3549: mov edx, dword ptr [eax + 0x1d88] */ r_edx = R32((u32)(r_eax+0x1d88u));
    /* 005c354f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c3551: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5c3554u); call_ind(t); }
    /* 005c3554: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3556: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3558: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c355b: mov ecx, dword ptr [ecx + 0x1d88] */ r_ecx = R32((u32)(r_ecx+0x1d88u));
    /* 005c3561: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3564: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c356a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c356c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c356fu); call_ind(t); }
    /* 005c356f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3571: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3573: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3576: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c357c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c357f: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c3585: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3587: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5c358au); call_ind(t); }
    /* 005c358a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c358c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c358f: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c3595: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3598: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c359e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c35a0: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c35a3u); call_ind(t); }
    /* 005c35a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c35a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c35a7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c35a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c35ab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c35ae: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c35b4: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5c35b9u); f_005d5ff2();
    /* 005c35b9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c35bc: mov ecx, dword ptr [ecx + 0x1d88] */ r_ecx = R32((u32)(r_ecx+0x1d88u));
    /* 005c35c2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c35c5: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c35cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c35cd: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5c35d0u); call_ind(t); }
    /* 005c35d0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c35d3: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c35d9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c35dc: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c35e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c35e4: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c35e7u); call_ind(t); }
    /* 005c35e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c35e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c35ec: call 0x5c35f5 */ r_esp -= 4; W32(r_esp, 0x5c35f1u); f_005c35f5();
    /* 005c35f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005c35f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c35f4: ret  */ FN_RET(0x005c3104); r_esp += 4; return;
}

void f_005c35f5(void) /* FUN_005c35f5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c35f5);
    /* 005c35f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c35f6: mov ebp, esp */ r_ebp = r_esp;
    /* 005c35f8: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c35fb: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005c35fe: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 005c3605: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 005c360c: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 005c3613: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 005c361a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c361d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005c361f: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005c3621: and al, 0xf9 */ {  u32 a = (u8)r_eax; u32 b = 0xf9u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c3623: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3626: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c3629: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c362c: cmp dword ptr [ecx + 0x1d80], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3633: je 0x5c3672 */ if (fZ) goto L_005c3672;
L_005c3635:; BB(0x005c3635);
    /* 005c3635: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3638: mov eax, dword ptr [edx + 0x1d80] */ r_eax = R32((u32)(r_edx+0x1d80u));
    /* 005c363e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c3641: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3644: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c3647: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c364b: je 0x5c365e */ if (fZ) goto L_005c365e;
L_005c364d:; BB(0x005c364d);
    /* 005c364d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c364f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c3652: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c3654: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c3657: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c3659u); call_ind(t); }
    /* 005c3659: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c365c: jmp 0x5c3665 */ goto L_005c3665;
L_005c365e:; BB(0x005c365e);
    /* 005c365e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005c3665:; BB(0x005c3665);
    /* 005c3665: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3668: mov dword ptr [ecx + 0x1d80], 0 */ W32((u32)(r_ecx+0x1d80u), 0x0u);
L_005c3672:; BB(0x005c3672);
    /* 005c3672: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3675: cmp dword ptr [edx + 0x1d80], 0 */ {  u32 a = R32((u32)(r_edx+0x1d80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c367c: jne 0x5c36b1 */ if (!fZ) goto L_005c36b1;
L_005c367e:; BB(0x005c367e);
    /* 005c367e: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3680: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c3685u); f_0048ab58();
    /* 005c3685: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3688: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c368b: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c368f: je 0x5c369e */ if (fZ) goto L_005c369e;
L_005c3691:; BB(0x005c3691);
    /* 005c3691: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c3694: call 0x5d505b */ r_esp -= 4; W32(r_esp, 0x5c3699u); f_005d505b();
    /* 005c3699: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c369c: jmp 0x5c36a5 */ goto L_005c36a5;
L_005c369e:; BB(0x005c369e);
    /* 005c369e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005c36a5:; BB(0x005c36a5);
    /* 005c36a5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c36a8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c36ab: mov dword ptr [eax + 0x1d80], ecx */ W32((u32)(r_eax+0x1d80u), r_ecx);
L_005c36b1:; BB(0x005c36b1);
    /* 005c36b1: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c36b4: mov ecx, dword ptr [edx + 0x1d80] */ r_ecx = R32((u32)(r_edx+0x1d80u));
    /* 005c36ba: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c36bd: mov edx, dword ptr [eax + 0x1d80] */ r_edx = R32((u32)(r_eax+0x1d80u));
    /* 005c36c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c36c5: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5c36c8u); call_ind(t); }
    /* 005c36c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c36ca: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c36cd: mov ecx, dword ptr [ecx + 0x1d80] */ r_ecx = R32((u32)(r_ecx+0x1d80u));
    /* 005c36d3: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c36d6: mov eax, dword ptr [edx + 0x1d80] */ r_eax = R32((u32)(r_edx+0x1d80u));
    /* 005c36dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c36de: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c36e1u); call_ind(t); }
    /* 005c36e1: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005c36e8: jmp 0x5c36f3 */ goto L_005c36f3;
L_005c36ea:; BB(0x005c36ea);
    /* 005c36ea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c36ed: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c36f0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005c36f3:; BB(0x005c36f3);
    /* 005c36f3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c36f6: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c36f9: jge 0x5c388a */ if ((fS==fO)) goto L_005c388a;
L_005c36ff:; BB(0x005c36ff);
    /* 005c36ff: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3702: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3705: cmp dword ptr [eax + edx*4 + 0x1d54], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1d54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c370d: jne 0x5c374f */ if (!fZ) goto L_005c374f;
L_005c370f:; BB(0x005c370f);
    /* 005c370f: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3714: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c3719u); f_0048ab58();
    /* 005c3719: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c371c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c371f: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3723: je 0x5c3738 */ if (fZ) goto L_005c3738;
L_005c3725:; BB(0x005c3725);
    /* 005c3725: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3727: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c372a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c372b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c372e: call 0x5d4ec0 */ r_esp -= 4; W32(r_esp, 0x5c3733u); f_005d4ec0();
    /* 005c3733: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c3736: jmp 0x5c373f */ goto L_005c373f;
L_005c3738:; BB(0x005c3738);
    /* 005c3738: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005c373f:; BB(0x005c373f);
    /* 005c373f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3742: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3745: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c3748: mov dword ptr [eax + edx*4 + 0x1d54], ecx */ W32((u32)(r_eax+r_edx*4+0x1d54u), r_ecx);
L_005c374f:; BB(0x005c374f);
    /* 005c374f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3753: je 0x5c3761 */ if (fZ) goto L_005c3761;
L_005c3755:; BB(0x005c3755);
    /* 005c3755: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3758: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005c375c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c375f: jmp 0x5c3767 */ goto L_005c3767;
L_005c3761:; BB(0x005c3761);
    /* 005c3761: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3764: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_005c3767:; BB(0x005c3767);
    /* 005c3767: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c376a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c376b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c376e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3771: mov ecx, dword ptr [ecx + eax*4 + 0x1d54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1d54u));
    /* 005c3778: call 0x5d5029 */ r_esp -= 4; W32(r_esp, 0x5c377du); f_005d5029();
    /* 005c377d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c3780: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 005c3782: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 005c3784: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005c3787: add edx, 0x500 */ {  u32 a = r_edx; u32 b = 0x500u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c378d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c378e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3791: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3794: mov ecx, dword ptr [ecx + eax*4 + 0x1d54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1d54u));
    /* 005c379b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c379e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c37a1: mov edx, dword ptr [eax + edx*4 + 0x1d54] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1d54u));
    /* 005c37a8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c37aa: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x5c37adu); call_ind(t); }
    /* 005c37ad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c37b0: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c37b3: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c37b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c37b7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c37ba: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c37bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c37be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c37c1: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c37c4: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c37c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c37c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c37cb: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c37ce: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c37d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c37d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c37d5: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c37d8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c37db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c37dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c37df: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c37e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c37e3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c37e6: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c37e9: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c37ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c37ed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c37f0: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c37f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c37f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c37f7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c37fa: mov ecx, dword ptr [ecx + eax*4 + 0x1d54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1d54u));
    /* 005c3801: call 0x5d727e */ r_esp -= 4; W32(r_esp, 0x5c3806u); f_005d727e();
    /* 005c3806: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3808: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c380a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c380d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3810: mov ecx, dword ptr [eax + edx*4 + 0x1d54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1d54u));
    /* 005c3817: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c381a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c381d: mov edx, dword ptr [eax + edx*4 + 0x1d54] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1d54u));
    /* 005c3824: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c3826: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5c3829u); call_ind(t); }
    /* 005c3829: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c382b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c382e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3831: mov ecx, dword ptr [edx + ecx*4 + 0x1d54] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1d54u));
    /* 005c3838: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c383b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c383e: mov eax, dword ptr [edx + eax*4 + 0x1d54] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1d54u));
    /* 005c3845: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3847: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c384au); call_ind(t); }
    /* 005c384a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c384d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3850: mov ecx, dword ptr [ecx + eax*4 + 0x1d54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1d54u));
    /* 005c3857: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c385a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c385d: mov edx, dword ptr [eax + edx*4 + 0x1d54] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1d54u));
    /* 005c3864: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c3866: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5c3869u); call_ind(t); }
    /* 005c3869: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c386c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c386f: mov eax, dword ptr [edx + ecx*4 + 0x1d54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1d54u));
    /* 005c3876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3877: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c387a: mov ecx, dword ptr [ecx + 0x1d80] */ r_ecx = R32((u32)(r_ecx+0x1d80u));
    /* 005c3880: call 0x5d50ed */ r_esp -= 4; W32(r_esp, 0x5c3885u); f_005d50ed();
    /* 005c3885: jmp 0x5c36ea */ goto L_005c36ea;
L_005c388a:; BB(0x005c388a);
    /* 005c388a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c388d: call 0x5c3b45 */ r_esp -= 4; W32(r_esp, 0x5c3892u); f_005c3b45();
    /* 005c3892: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3893: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3896: mov ecx, dword ptr [edx + 0x1d80] */ r_ecx = R32((u32)(r_edx+0x1d80u));
    /* 005c389c: call 0x5d5253 */ r_esp -= 4; W32(r_esp, 0x5c38a1u); f_005d5253();
    /* 005c38a1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c38a4: mov ecx, dword ptr [eax + 0x1d80] */ r_ecx = R32((u32)(r_eax+0x1d80u));
    /* 005c38aa: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c38ad: mov eax, dword ptr [edx + 0x1d80] */ r_eax = R32((u32)(r_edx+0x1d80u));
    /* 005c38b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c38b5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c38b8u); call_ind(t); }
    /* 005c38b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c38ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c38bb: ret 4 */ FN_RET(0x005c35f5); r_esp += 8; return;
}

void f_005c38be(void) /* FUN_005c38be */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c38be);
    /* 005c38be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c38bf: mov ebp, esp */ r_ebp = r_esp;
    /* 005c38c1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c38c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c38c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c38ca: mov ecx, dword ptr [eax + 0x1d94] */ r_ecx = R32((u32)(r_eax+0x1d94u));
    /* 005c38d0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c38d3: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c38d7: ja 0x5c3aa7 */ if ((!fC&&!fZ)) goto L_005c3aa7;
L_005c38dd:; BB(0x005c38dd);
    /* 005c38dd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c38e0: jmp dword ptr [edx*4 + 0x5c3aad] */ { u32 t = R32((u32)(r_edx*4+0x5c3aadu)); switch (t) { case 0x5c38e7u: goto L_005c38e7; case 0x5c38ecu: goto L_005c38ec; case 0x5c39f5u: goto L_005c39f5; case 0x5c3a36u: goto L_005c3a36; case 0x5c3917u: goto L_005c3917; case 0x5c39b4u: goto L_005c39b4; case 0x5c3928u: goto L_005c3928; case 0x5c3950u: goto L_005c3950; case 0x5c39dcu: goto L_005c39dc; case 0x5c391eu: goto L_005c391e; case 0x5c3946u: goto L_005c3946; case 0x5c3932u: goto L_005c3932; case 0x5c39a0u: goto L_005c39a0; case 0x5c39aau: goto L_005c39aa; case 0x5c396eu: goto L_005c396e; case 0x5c39beu: goto L_005c39be; case 0x5c39f0u: goto L_005c39f0; case 0x5c395au: goto L_005c395a; case 0x5c3964u: goto L_005c3964; case 0x5c398cu: goto L_005c398c; case 0x5c39d2u: goto L_005c39d2; case 0x5c39e6u: goto L_005c39e6; case 0x5c3996u: goto L_005c3996; case 0x5c393cu: goto L_005c393c; case 0x5c39c8u: goto L_005c39c8; case 0x5c3982u: goto L_005c3982; case 0x5c3978u: goto L_005c3978; case 0x5c3a5du: goto L_005c3a5d; case 0x5c3a61u: goto L_005c3a61; case 0x5c3a68u: goto L_005c3a68; case 0x5c3a6fu: goto L_005c3a6f; case 0x5c3a76u: goto L_005c3a76; case 0x5c3a7du: goto L_005c3a7d; case 0x5c3a84u: goto L_005c3a84; case 0x5c3a8bu: goto L_005c3a8b; case 0x5c3a92u: goto L_005c3a92; case 0x5c3a99u: goto L_005c3a99; case 0x5c3aa0u: goto L_005c3aa0; default: UNSUP(0x005c38e0, "jump table entry is not a known target"); } }
L_005c38e7:; BB(0x005c38e7);
    /* 005c38e7: jmp 0x5c3aa7 */ goto L_005c3aa7;
L_005c38ec:; BB(0x005c38ec);
    /* 005c38ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c38ee: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c38f4: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5c38f9u); f_0045c419();
    /* 005c38f9: movsx eax, byte ptr [eax + 0xea4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0xea4u));
    /* 005c3900: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c3903: cmp dword ptr [ebp - 0xc], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c3907: ja 0x5c39f0 */ if ((!fC&&!fZ)) goto L_005c39f0;
L_005c390d:; BB(0x005c390d);
    /* 005c390d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c3910: jmp dword ptr [ecx*4 + 0x5c3abd] */ { u32 t = R32((u32)(r_ecx*4+0x5c3abdu)); switch (t) { case 0x5c3a36u: goto L_005c3a36; case 0x5c39f5u: goto L_005c39f5; case 0x5c38ecu: goto L_005c38ec; case 0x5c38e7u: goto L_005c38e7; case 0x5c3917u: goto L_005c3917; case 0x5c39b4u: goto L_005c39b4; case 0x5c3928u: goto L_005c3928; case 0x5c3950u: goto L_005c3950; case 0x5c39dcu: goto L_005c39dc; case 0x5c391eu: goto L_005c391e; case 0x5c3946u: goto L_005c3946; case 0x5c3932u: goto L_005c3932; case 0x5c39a0u: goto L_005c39a0; case 0x5c39aau: goto L_005c39aa; case 0x5c396eu: goto L_005c396e; case 0x5c39beu: goto L_005c39be; case 0x5c39f0u: goto L_005c39f0; case 0x5c395au: goto L_005c395a; case 0x5c3964u: goto L_005c3964; case 0x5c398cu: goto L_005c398c; case 0x5c39d2u: goto L_005c39d2; case 0x5c39e6u: goto L_005c39e6; case 0x5c3996u: goto L_005c3996; case 0x5c393cu: goto L_005c393c; case 0x5c39c8u: goto L_005c39c8; case 0x5c3982u: goto L_005c3982; case 0x5c3978u: goto L_005c3978; case 0x5c3a5du: goto L_005c3a5d; case 0x5c3a61u: goto L_005c3a61; case 0x5c3a68u: goto L_005c3a68; case 0x5c3a6fu: goto L_005c3a6f; case 0x5c3a76u: goto L_005c3a76; case 0x5c3a7du: goto L_005c3a7d; case 0x5c3a84u: goto L_005c3a84; case 0x5c3a8bu: goto L_005c3a8b; case 0x5c3a92u: goto L_005c3a92; case 0x5c3a99u: goto L_005c3a99; case 0x5c3aa0u: goto L_005c3aa0; default: UNSUP(0x005c3910, "jump table entry is not a known target"); } }
L_005c3917:; BB(0x005c3917);
    /* 005c3917: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c3919: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c391e:; BB(0x005c391e);
    /* 005c391e: mov eax, 1 */ r_eax = 0x1u;
    /* 005c3923: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3928:; BB(0x005c3928);
    /* 005c3928: mov eax, 2 */ r_eax = 0x2u;
    /* 005c392d: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3932:; BB(0x005c3932);
    /* 005c3932: mov eax, 3 */ r_eax = 0x3u;
    /* 005c3937: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c393c:; BB(0x005c393c);
    /* 005c393c: mov eax, 4 */ r_eax = 0x4u;
    /* 005c3941: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3946:; BB(0x005c3946);
    /* 005c3946: mov eax, 5 */ r_eax = 0x5u;
    /* 005c394b: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3950:; BB(0x005c3950);
    /* 005c3950: mov eax, 6 */ r_eax = 0x6u;
    /* 005c3955: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c395a:; BB(0x005c395a);
    /* 005c395a: mov eax, 7 */ r_eax = 0x7u;
    /* 005c395f: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3964:; BB(0x005c3964);
    /* 005c3964: mov eax, 8 */ r_eax = 0x8u;
    /* 005c3969: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c396e:; BB(0x005c396e);
    /* 005c396e: mov eax, 9 */ r_eax = 0x9u;
    /* 005c3973: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3978:; BB(0x005c3978);
    /* 005c3978: mov eax, 0xa */ r_eax = 0xau;
    /* 005c397d: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3982:; BB(0x005c3982);
    /* 005c3982: mov eax, 0xb */ r_eax = 0xbu;
    /* 005c3987: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c398c:; BB(0x005c398c);
    /* 005c398c: mov eax, 0xc */ r_eax = 0xcu;
    /* 005c3991: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3996:; BB(0x005c3996);
    /* 005c3996: mov eax, 0xd */ r_eax = 0xdu;
    /* 005c399b: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c39a0:; BB(0x005c39a0);
    /* 005c39a0: mov eax, 0xe */ r_eax = 0xeu;
    /* 005c39a5: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c39aa:; BB(0x005c39aa);
    /* 005c39aa: mov eax, 0xf */ r_eax = 0xfu;
    /* 005c39af: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c39b4:; BB(0x005c39b4);
    /* 005c39b4: mov eax, 0x10 */ r_eax = 0x10u;
    /* 005c39b9: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c39be:; BB(0x005c39be);
    /* 005c39be: mov eax, 0x11 */ r_eax = 0x11u;
    /* 005c39c3: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c39c8:; BB(0x005c39c8);
    /* 005c39c8: mov eax, 0x12 */ r_eax = 0x12u;
    /* 005c39cd: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c39d2:; BB(0x005c39d2);
    /* 005c39d2: mov eax, 0x13 */ r_eax = 0x13u;
    /* 005c39d7: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c39dc:; BB(0x005c39dc);
    /* 005c39dc: mov eax, 0x14 */ r_eax = 0x14u;
    /* 005c39e1: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c39e6:; BB(0x005c39e6);
    /* 005c39e6: mov eax, 0x15 */ r_eax = 0x15u;
    /* 005c39eb: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c39f0:; BB(0x005c39f0);
    /* 005c39f0: jmp 0x5c3aa7 */ goto L_005c3aa7;
L_005c39f5:; BB(0x005c39f5);
    /* 005c39f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c39f7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c39fd: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5c3a02u); f_0045c419();
    /* 005c3a02: mov dl, byte ptr [eax + 0xea6] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0xea6u))) & 0xffu);
    /* 005c3a08: mov byte ptr [ebp - 0x10], dl */ W8((u32)(r_ebp+0xfffffff0u), (u8)r_edx);
    /* 005c3a0b: cmp byte ptr [ebp - 0x10], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005c3a0f: je 0x5c3a1f */ if (fZ) goto L_005c3a1f;
L_005c3a11:; BB(0x005c3a11);
    /* 005c3a11: cmp byte ptr [ebp - 0x10], 1 */ {  u32 a = R8((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005c3a15: je 0x5c3a26 */ if (fZ) goto L_005c3a26;
L_005c3a17:; BB(0x005c3a17);
    /* 005c3a17: cmp byte ptr [ebp - 0x10], 2 */ {  u32 a = R8((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005c3a1b: je 0x5c3a2d */ if (fZ) goto L_005c3a2d;
L_005c3a1d:; BB(0x005c3a1d);
    /* 005c3a1d: jmp 0x5c3a34 */ goto L_005c3a34;
L_005c3a1f:; BB(0x005c3a1f);
    /* 005c3a1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c3a21: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a26:; BB(0x005c3a26);
    /* 005c3a26: mov eax, 1 */ r_eax = 0x1u;
    /* 005c3a2b: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a2d:; BB(0x005c3a2d);
    /* 005c3a2d: mov eax, 2 */ r_eax = 0x2u;
    /* 005c3a32: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a34:; BB(0x005c3a34);
    /* 005c3a34: jmp 0x5c3aa7 */ goto L_005c3aa7;
L_005c3a36:; BB(0x005c3a36);
    /* 005c3a36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3a38: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3a3e: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5c3a43u); f_0045c419();
    /* 005c3a43: movsx eax, byte ptr [eax + 0xea8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0xea8u));
    /* 005c3a4a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c3a4d: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c3a51: ja 0x5c3aa7 */ if ((!fC&&!fZ)) goto L_005c3aa7;
L_005c3a53:; BB(0x005c3a53);
    /* 005c3a53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3a56: jmp dword ptr [ecx*4 + 0x5c3b19] */ { u32 t = R32((u32)(r_ecx*4+0x5c3b19u)); switch (t) { case 0x5c3978u: goto L_005c3978; case 0x5c3982u: goto L_005c3982; case 0x5c39c8u: goto L_005c39c8; case 0x5c393cu: goto L_005c393c; case 0x5c3996u: goto L_005c3996; case 0x5c39e6u: goto L_005c39e6; case 0x5c39d2u: goto L_005c39d2; case 0x5c398cu: goto L_005c398c; case 0x5c3964u: goto L_005c3964; case 0x5c395au: goto L_005c395a; case 0x5c39f0u: goto L_005c39f0; case 0x5c39beu: goto L_005c39be; case 0x5c396eu: goto L_005c396e; case 0x5c39aau: goto L_005c39aa; case 0x5c39a0u: goto L_005c39a0; case 0x5c3932u: goto L_005c3932; case 0x5c3946u: goto L_005c3946; case 0x5c391eu: goto L_005c391e; case 0x5c39dcu: goto L_005c39dc; case 0x5c3950u: goto L_005c3950; case 0x5c3928u: goto L_005c3928; case 0x5c39b4u: goto L_005c39b4; case 0x5c3917u: goto L_005c3917; case 0x5c3a36u: goto L_005c3a36; case 0x5c39f5u: goto L_005c39f5; case 0x5c38ecu: goto L_005c38ec; case 0x5c38e7u: goto L_005c38e7; case 0x5c3a5du: goto L_005c3a5d; case 0x5c3a61u: goto L_005c3a61; case 0x5c3a68u: goto L_005c3a68; case 0x5c3a6fu: goto L_005c3a6f; case 0x5c3a76u: goto L_005c3a76; case 0x5c3a7du: goto L_005c3a7d; case 0x5c3a84u: goto L_005c3a84; case 0x5c3a8bu: goto L_005c3a8b; case 0x5c3a92u: goto L_005c3a92; case 0x5c3a99u: goto L_005c3a99; case 0x5c3aa0u: goto L_005c3aa0; default: UNSUP(0x005c3a56, "jump table entry is not a known target"); } }
L_005c3a5d:; BB(0x005c3a5d);
    /* 005c3a5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c3a5f: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a61:; BB(0x005c3a61);
    /* 005c3a61: mov eax, 7 */ r_eax = 0x7u;
    /* 005c3a66: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a68:; BB(0x005c3a68);
    /* 005c3a68: mov eax, 3 */ r_eax = 0x3u;
    /* 005c3a6d: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a6f:; BB(0x005c3a6f);
    /* 005c3a6f: mov eax, 6 */ r_eax = 0x6u;
    /* 005c3a74: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a76:; BB(0x005c3a76);
    /* 005c3a76: mov eax, 4 */ r_eax = 0x4u;
    /* 005c3a7b: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a7d:; BB(0x005c3a7d);
    /* 005c3a7d: mov eax, 0xa */ r_eax = 0xau;
    /* 005c3a82: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a84:; BB(0x005c3a84);
    /* 005c3a84: mov eax, 9 */ r_eax = 0x9u;
    /* 005c3a89: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a8b:; BB(0x005c3a8b);
    /* 005c3a8b: mov eax, 2 */ r_eax = 0x2u;
    /* 005c3a90: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a92:; BB(0x005c3a92);
    /* 005c3a92: mov eax, 5 */ r_eax = 0x5u;
    /* 005c3a97: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3a99:; BB(0x005c3a99);
    /* 005c3a99: mov eax, 1 */ r_eax = 0x1u;
    /* 005c3a9e: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3aa0:; BB(0x005c3aa0);
    /* 005c3aa0: mov eax, 8 */ r_eax = 0x8u;
    /* 005c3aa5: jmp 0x5c3aa9 */ goto L_005c3aa9;
L_005c3aa7:; BB(0x005c3aa7);
    /* 005c3aa7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c3aa9:; BB(0x005c3aa9);
    /* 005c3aa9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3aab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3aac: ret  */ FN_RET(0x005c38be); r_esp += 4; return;
}

void f_005c3b45(void) /* FUN_005c3b45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3b45);
    /* 005c3b45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3b46: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3b48: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3b4b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c3b4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3b51: mov ecx, dword ptr [eax + 0x1d94] */ r_ecx = R32((u32)(r_eax+0x1d94u));
    /* 005c3b57: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c3b5a: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c3b5e: ja 0x5c3bae */ if ((!fC&&!fZ)) goto L_005c3bae;
L_005c3b60:; BB(0x005c3b60);
    /* 005c3b60: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c3b63: jmp dword ptr [edx*4 + 0x5c3bb4] */ { u32 t = R32((u32)(r_edx*4+0x5c3bb4u)); switch (t) { case 0x5c3b6au: goto L_005c3b6a; case 0x5c3b6cu: goto L_005c3b6c; case 0x5c3b82u: goto L_005c3b82; case 0x5c3b98u: goto L_005c3b98; default: UNSUP(0x005c3b63, "jump table entry is not a known target"); } }
L_005c3b6a:; BB(0x005c3b6a);
    /* 005c3b6a: jmp 0x5c3bae */ goto L_005c3bae;
L_005c3b6c:; BB(0x005c3b6c);
    /* 005c3b6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3b6e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3b74: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5c3b79u); f_0045c419();
    /* 005c3b79: movsx eax, byte ptr [eax + 0xea5] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0xea5u));
    /* 005c3b80: jmp 0x5c3bb0 */ goto L_005c3bb0;
L_005c3b82:; BB(0x005c3b82);
    /* 005c3b82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3b84: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3b8a: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5c3b8fu); f_0045c419();
    /* 005c3b8f: movsx eax, byte ptr [eax + 0xea7] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0xea7u));
    /* 005c3b96: jmp 0x5c3bb0 */ goto L_005c3bb0;
L_005c3b98:; BB(0x005c3b98);
    /* 005c3b98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3b9a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3ba0: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5c3ba5u); f_0045c419();
    /* 005c3ba5: movsx eax, byte ptr [eax + 0xea9] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0xea9u));
    /* 005c3bac: jmp 0x5c3bb0 */ goto L_005c3bb0;
L_005c3bae:; BB(0x005c3bae);
    /* 005c3bae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c3bb0:; BB(0x005c3bb0);
    /* 005c3bb0: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3bb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3bb3: ret  */ FN_RET(0x005c3b45); r_esp += 4; return;
}

void f_005c3bc4(void) /* FUN_005c3bc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3bc4);
    /* 005c3bc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3bc5: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3bc7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3bca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c3bcd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c3bd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3bd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3bd4: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5c3bd9u); f_005e626d();
    /* 005c3bd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3bdc: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005c3bdf: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c3be2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3be6: je 0x5c3bea */ if (fZ) goto L_005c3bea;
L_005c3be8:; BB(0x005c3be8);
    /* 005c3be8: jmp 0x5c3c07 */ goto L_005c3c07;
L_005c3bea:; BB(0x005c3bea);
    /* 005c3bea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3bec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3bef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3bf1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3bf4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c3bf7u); call_ind(t); }
    /* 005c3bf7: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3bfc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3bff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3c01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3c04: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c3c07u); call_ind(t); }
L_005c3c07:; BB(0x005c3c07);
    /* 005c3c07: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3c09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3c0a: ret 4 */ FN_RET(0x005c3bc4); r_esp += 8; return;
}

void f_005c3c0d(void) /* FUN_005c3c0d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3c0d);
    /* 005c3c0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3c0e: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3c10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3c11: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c3c14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3c17: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c3c1cu); f_005d5d20();
    /* 005c3c1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3c1f: mov dword ptr [eax], 0x63a31c */ W32((u32)(r_eax), 0x63a31cu);
    /* 005c3c25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3c28: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c3c2b: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 005c3c31: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3c34: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3c36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3c37: ret 4 */ FN_RET(0x005c3c0d); r_esp += 8; return;
}

void f_005c3c3a(void) /* FUN_005c3c3a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3c3a);
    /* 005c3c3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3c3b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3c3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3c3e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c3c41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3c44: mov dword ptr [eax], 0x63a31c */ W32((u32)(r_eax), 0x63a31cu);
    /* 005c3c4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3c4d: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5c3c52u); f_005d5dfb();
    /* 005c3c52: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3c54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3c55: ret  */ FN_RET(0x005c3c3a); r_esp += 4; return;
}

void f_005c3c56(void) /* FUN_005c3c56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3c56);
    /* 005c3c56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3c57: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3c59: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3c5c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c3c5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3c62: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005c3c68: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c3c6b: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c3c6f: ja 0x5c3cb4 */ if ((!fC&&!fZ)) goto L_005c3cb4;
L_005c3c71:; BB(0x005c3c71);
    /* 005c3c71: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c3c74: jmp dword ptr [edx*4 + 0x5c3cb8] */ { u32 t = R32((u32)(r_edx*4+0x5c3cb8u)); switch (t) { case 0x5c3c7bu: goto L_005c3c7b; case 0x5c3c88u: goto L_005c3c88; case 0x5c3c95u: goto L_005c3c95; case 0x5c3ca2u: goto L_005c3ca2; default: UNSUP(0x005c3c74, "jump table entry is not a known target"); } }
L_005c3c7b:; BB(0x005c3c7b);
    /* 005c3c7b: mov ecx, dword ptr [0x6fc088] */ r_ecx = R32((u32)(0x6fc088u));
    /* 005c3c81: call 0x5c25cc */ r_esp -= 4; W32(r_esp, 0x5c3c86u); f_005c25cc();
    /* 005c3c86: jmp 0x5c3cb4 */ goto L_005c3cb4;
L_005c3c88:; BB(0x005c3c88);
    /* 005c3c88: mov ecx, dword ptr [0x6fc088] */ r_ecx = R32((u32)(0x6fc088u));
    /* 005c3c8e: call 0x5c2b68 */ r_esp -= 4; W32(r_esp, 0x5c3c93u); f_005c2b68();
    /* 005c3c93: jmp 0x5c3cb4 */ goto L_005c3cb4;
L_005c3c95:; BB(0x005c3c95);
    /* 005c3c95: mov ecx, dword ptr [0x6fc088] */ r_ecx = R32((u32)(0x6fc088u));
    /* 005c3c9b: call 0x5c3104 */ r_esp -= 4; W32(r_esp, 0x5c3ca0u); f_005c3104();
    /* 005c3ca0: jmp 0x5c3cb4 */ goto L_005c3cb4;
L_005c3ca2:; BB(0x005c3ca2);
    /* 005c3ca2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3ca4: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005c3ca9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3cab: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3cb1: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c3cb4u); call_ind(t); }
L_005c3cb4:; BB(0x005c3cb4);
    /* 005c3cb4: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3cb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3cb7: ret  */ FN_RET(0x005c3c56); r_esp += 4; return;
}

void f_005c3cc8(void) /* FUN_005c3cc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3cc8);
    /* 005c3cc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3cc9: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3ccb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3ccc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c3ccf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c3cd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3cd3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c3cd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3cd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3cda: call 0x5d4ec0 */ r_esp -= 4; W32(r_esp, 0x5c3cdfu); f_005d4ec0();
    /* 005c3cdf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3ce2: mov dword ptr [edx], 0x63a38c */ W32((u32)(r_edx), 0x63a38cu);
    /* 005c3ce8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3ceb: mov dword ptr [eax + 0x104], 0 */ W32((u32)(r_eax+0x104u), 0x0u);
    /* 005c3cf5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3cf8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3cfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3cfb: ret 8 */ FN_RET(0x005c3cc8); r_esp += 12; return;
}

void f_005c3cfe(void) /* FUN_005c3cfe */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3cfe);
    /* 005c3cfe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3cff: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3d01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3d02: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c3d05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3d08: mov dword ptr [eax], 0x63a38c */ W32((u32)(r_eax), 0x63a38cu);
    /* 005c3d0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3d11: call 0x5d4efe */ r_esp -= 4; W32(r_esp, 0x5c3d16u); f_005d4efe();
    /* 005c3d16: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3d18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3d19: ret  */ FN_RET(0x005c3cfe); r_esp += 4; return;
}

void f_005c3d1a(void) /* FUN_005c3d1a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3d1a);
    /* 005c3d1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3d1b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3d1d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3d20: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c3d23: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5c3d29u); call_ind(t); }
    /* 005c3d29: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c3d2c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c3d2f: call 0x5d65cb */ r_esp -= 4; W32(r_esp, 0x5c3d34u); f_005d65cb();
    /* 005c3d34: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c3d37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3d3a: sub ecx, dword ptr [eax + 0x104] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x104u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3d40: cmp ecx, 0x1f4 */ {  u32 a = r_ecx; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c3d46: jge 0x5c3d52 */ if ((fS==fO)) goto L_005c3d52;
L_005c3d48:; BB(0x005c3d48);
    /* 005c3d48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c3d4b: call 0x5c3d65 */ r_esp -= 4; W32(r_esp, 0x5c3d50u); f_005c3d65();
    /* 005c3d50: jmp 0x5c3d61 */ goto L_005c3d61;
L_005c3d52:; BB(0x005c3d52);
    /* 005c3d52: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5c3d58u); call_ind(t); }
    /* 005c3d58: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c3d5b: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
L_005c3d61:; BB(0x005c3d61);
    /* 005c3d61: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3d63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3d64: ret  */ FN_RET(0x005c3d1a); r_esp += 4; return;
}

void f_005c3d65(void) /* FUN_005c3d65 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3d65);
    /* 005c3d65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3d66: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3d68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3d69: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c3d6c: mov eax, dword ptr [0x6fc088] */ r_eax = R32((u32)(0x6fc088u));
    /* 005c3d71: mov ecx, dword ptr [eax + 0x1d88] */ r_ecx = R32((u32)(r_eax+0x1d88u));
    /* 005c3d77: mov edx, dword ptr [0x6fc088] */ r_edx = R32((u32)(0x6fc088u));
    /* 005c3d7d: mov eax, dword ptr [edx + 0x1d88] */ r_eax = R32((u32)(r_edx+0x1d88u));
    /* 005c3d83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c3d85: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5c3d88u); call_ind(t); }
    /* 005c3d88: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3d8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3d8b: ret  */ FN_RET(0x005c3d65); r_esp += 4; return;
}

void f_005c3d8c(void) /* FUN_005c3d8c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3d8c);
    /* 005c3d8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3d8d: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3d8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3d90: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c3d93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3d96: call 0x5d65cb */ r_esp -= 4; W32(r_esp, 0x5c3d9bu); f_005d65cb();
    /* 005c3d9b: mov ecx, dword ptr [0x6fc088] */ r_ecx = R32((u32)(0x6fc088u));
    /* 005c3da1: call 0x5c23b7 */ r_esp -= 4; W32(r_esp, 0x5c3da6u); f_005c23b7();
    /* 005c3da6: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3da8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3da9: ret  */ FN_RET(0x005c3d8c); r_esp += 4; return;
}

void f_005c3daa(void) /* FUN_005c3daa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c3daa);
    /* 005c3daa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3dab: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3dad: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3db0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c3db3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c3db6: call 0x5d65cb */ r_esp -= 4; W32(r_esp, 0x5c3dbbu); f_005d65cb();
    /* 005c3dbb: mov eax, dword ptr [0x6fc088] */ r_eax = R32((u32)(0x6fc088u));
    /* 005c3dc0: mov ecx, dword ptr [eax + 0x1d80] */ r_ecx = R32((u32)(r_eax+0x1d80u));
    /* 005c3dc6: call 0x5d51df */ r_esp -= 4; W32(r_esp, 0x5c3dcbu); f_005d51df();
    /* 005c3dcb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c3dce: mov ecx, dword ptr [0x6fc088] */ r_ecx = R32((u32)(0x6fc088u));
    /* 005c3dd4: mov ecx, dword ptr [ecx + 0x1d50] */ r_ecx = R32((u32)(r_ecx+0x1d50u));
    /* 005c3dda: call 0x5d51df */ r_esp -= 4; W32(r_esp, 0x5c3ddfu); f_005d51df();
    /* 005c3ddf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c3de2: mov edx, dword ptr [0x6fc088] */ r_edx = R32((u32)(0x6fc088u));
    /* 005c3de8: mov eax, dword ptr [edx + 0x1d94] */ r_eax = R32((u32)(r_edx+0x1d94u));
    /* 005c3dee: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c3df1: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c3df5: ja 0x5c419f */ if ((!fC&&!fZ)) goto L_005c419f;
L_005c3dfb:; BB(0x005c3dfb);
    /* 005c3dfb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c3dfe: jmp dword ptr [ecx*4 + 0x5c41a3] */ { u32 t = R32((u32)(r_ecx*4+0x5c41a3u)); switch (t) { case 0x5c3e05u: goto L_005c3e05; case 0x5c3e0au: goto L_005c3e0a; case 0x5c4009u: goto L_005c4009; case 0x5c4097u: goto L_005c4097; case 0x5c3e24u: goto L_005c3e24; case 0x5c3e3au: goto L_005c3e3a; case 0x5c3e50u: goto L_005c3e50; case 0x5c3e66u: goto L_005c3e66; case 0x5c3e7cu: goto L_005c3e7c; case 0x5c3e92u: goto L_005c3e92; case 0x5c3ea8u: goto L_005c3ea8; case 0x5c3ebeu: goto L_005c3ebe; case 0x5c3ed4u: goto L_005c3ed4; case 0x5c3eeau: goto L_005c3eea; case 0x5c3f00u: goto L_005c3f00; case 0x5c3f16u: goto L_005c3f16; case 0x5c3f2cu: goto L_005c3f2c; case 0x5c3f42u: goto L_005c3f42; case 0x5c3f58u: goto L_005c3f58; case 0x5c3f6eu: goto L_005c3f6e; case 0x5c3f81u: goto L_005c3f81; case 0x5c3f94u: goto L_005c3f94; case 0x5c3fa7u: goto L_005c3fa7; case 0x5c3fbau: goto L_005c3fba; case 0x5c3fcdu: goto L_005c3fcd; case 0x5c3fe0u: goto L_005c3fe0; case 0x5c40b1u: goto L_005c40b1; case 0x5c40c7u: goto L_005c40c7; case 0x5c40ddu: goto L_005c40dd; case 0x5c40f3u: goto L_005c40f3; case 0x5c4109u: goto L_005c4109; case 0x5c411cu: goto L_005c411c; case 0x5c412fu: goto L_005c412f; case 0x5c4142u: goto L_005c4142; case 0x5c4155u: goto L_005c4155; case 0x5c4168u: goto L_005c4168; case 0x5c417bu: goto L_005c417b; default: UNSUP(0x005c3dfe, "jump table entry is not a known target"); } }
L_005c3e05:; BB(0x005c3e05);
    /* 005c3e05: jmp 0x5c419f */ goto L_005c419f;
L_005c3e0a:; BB(0x005c3e0a);
    /* 005c3e0a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c3e0d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c3e10: cmp dword ptr [ebp - 0x14], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c3e14: ja 0x5c3ff1 */ if ((!fC&&!fZ)) goto L_005c3ff1;
L_005c3e1a:; BB(0x005c3e1a);
    /* 005c3e1a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3e1d: jmp dword ptr [eax*4 + 0x5c41b3] */ { u32 t = R32((u32)(r_eax*4+0x5c41b3u)); switch (t) { case 0x5c4097u: goto L_005c4097; case 0x5c4009u: goto L_005c4009; case 0x5c3e0au: goto L_005c3e0a; case 0x5c3e05u: goto L_005c3e05; case 0x5c3e24u: goto L_005c3e24; case 0x5c3e3au: goto L_005c3e3a; case 0x5c3e50u: goto L_005c3e50; case 0x5c3e66u: goto L_005c3e66; case 0x5c3e7cu: goto L_005c3e7c; case 0x5c3e92u: goto L_005c3e92; case 0x5c3ea8u: goto L_005c3ea8; case 0x5c3ebeu: goto L_005c3ebe; case 0x5c3ed4u: goto L_005c3ed4; case 0x5c3eeau: goto L_005c3eea; case 0x5c3f00u: goto L_005c3f00; case 0x5c3f16u: goto L_005c3f16; case 0x5c3f2cu: goto L_005c3f2c; case 0x5c3f42u: goto L_005c3f42; case 0x5c3f58u: goto L_005c3f58; case 0x5c3f6eu: goto L_005c3f6e; case 0x5c3f81u: goto L_005c3f81; case 0x5c3f94u: goto L_005c3f94; case 0x5c3fa7u: goto L_005c3fa7; case 0x5c3fbau: goto L_005c3fba; case 0x5c3fcdu: goto L_005c3fcd; case 0x5c3fe0u: goto L_005c3fe0; case 0x5c40b1u: goto L_005c40b1; case 0x5c40c7u: goto L_005c40c7; case 0x5c40ddu: goto L_005c40dd; case 0x5c40f3u: goto L_005c40f3; case 0x5c4109u: goto L_005c4109; case 0x5c411cu: goto L_005c411c; case 0x5c412fu: goto L_005c412f; case 0x5c4142u: goto L_005c4142; case 0x5c4155u: goto L_005c4155; case 0x5c4168u: goto L_005c4168; case 0x5c417bu: goto L_005c417b; default: UNSUP(0x005c3e1d, "jump table entry is not a known target"); } }
L_005c3e24:; BB(0x005c3e24);
    /* 005c3e24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3e27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e2a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3e30: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3e35u); f_00460e66();
    /* 005c3e35: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3e3a:; BB(0x005c3e3a);
    /* 005c3e3a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3e3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e3e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e40: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3e46: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3e4bu); f_00460e66();
    /* 005c3e4b: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3e50:; BB(0x005c3e50);
    /* 005c3e50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3e53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e54: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e56: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3e5c: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3e61u); f_00460e66();
    /* 005c3e61: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3e66:; BB(0x005c3e66);
    /* 005c3e66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3e69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e6a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e6c: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3e72: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3e77u); f_00460e66();
    /* 005c3e77: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3e7c:; BB(0x005c3e7c);
    /* 005c3e7c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3e7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e80: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e82: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3e88: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3e8du); f_00460e66();
    /* 005c3e8d: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3e92:; BB(0x005c3e92);
    /* 005c3e92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e96: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e98: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3e9e: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3ea3u); f_00460e66();
    /* 005c3ea3: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3ea8:; BB(0x005c3ea8);
    /* 005c3ea8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3eab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3eac: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3eae: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3eb4: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3eb9u); f_00460e66();
    /* 005c3eb9: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3ebe:; BB(0x005c3ebe);
    /* 005c3ebe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3ec2: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005c3ec4: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3eca: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3ecfu); f_00460e66();
    /* 005c3ecf: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3ed4:; BB(0x005c3ed4);
    /* 005c3ed4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3ed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3ed8: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005c3eda: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3ee0: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3ee5u); f_00460e66();
    /* 005c3ee5: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3eea:; BB(0x005c3eea);
    /* 005c3eea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3eed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3eee: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c3ef0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3ef6: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3efbu); f_00460e66();
    /* 005c3efb: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3f00:; BB(0x005c3f00);
    /* 005c3f00: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3f03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f04: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f06: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3f0c: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3f11u); f_00460e66();
    /* 005c3f11: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3f16:; BB(0x005c3f16);
    /* 005c3f16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3f19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f1a: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f1c: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3f22: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3f27u); f_00460e66();
    /* 005c3f27: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3f2c:; BB(0x005c3f2c);
    /* 005c3f2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3f2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f30: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f32: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3f38: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3f3du); f_00460e66();
    /* 005c3f3d: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3f42:; BB(0x005c3f42);
    /* 005c3f42: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3f45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f46: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f48: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3f4e: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3f53u); f_00460e66();
    /* 005c3f53: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3f58:; BB(0x005c3f58);
    /* 005c3f58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3f5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f5e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3f64: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3f69u); f_00460e66();
    /* 005c3f69: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3f6e:; BB(0x005c3f6e);
    /* 005c3f6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3f71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f72: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f74: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3f7a: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3f7fu); f_00460e66();
    /* 005c3f7f: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3f81:; BB(0x005c3f81);
    /* 005c3f81: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3f84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f87: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3f8d: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3f92u); f_00460e66();
    /* 005c3f92: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3f94:; BB(0x005c3f94);
    /* 005c3f94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3f97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f98: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f9a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3fa0: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3fa5u); f_00460e66();
    /* 005c3fa5: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3fa7:; BB(0x005c3fa7);
    /* 005c3fa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3faa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3fab: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3fad: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3fb3: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3fb8u); f_00460e66();
    /* 005c3fb8: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3fba:; BB(0x005c3fba);
    /* 005c3fba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3fbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3fbe: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3fc0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3fc6: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3fcbu); f_00460e66();
    /* 005c3fcb: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3fcd:; BB(0x005c3fcd);
    /* 005c3fcd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3fd1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3fd3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3fd9: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3fdeu); f_00460e66();
    /* 005c3fde: jmp 0x5c3ff1 */ goto L_005c3ff1;
L_005c3fe0:; BB(0x005c3fe0);
    /* 005c3fe0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3fe4: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3fe6: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c3fec: call 0x460e66 */ r_esp -= 4; W32(r_esp, 0x5c3ff1u); f_00460e66();
L_005c3ff1:; BB(0x005c3ff1);
    /* 005c3ff1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3ff3: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005c3ff9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c3ffb: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4001: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5c4004u); call_ind(t); }
    /* 005c4004: jmp 0x5c419f */ goto L_005c419f;
L_005c4009:; BB(0x005c4009);
    /* 005c4009: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c400c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c400f: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4013: je 0x5c4023 */ if (fZ) goto L_005c4023;
L_005c4015:; BB(0x005c4015);
    /* 005c4015: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4019: je 0x5c4048 */ if (fZ) goto L_005c4048;
L_005c401b:; BB(0x005c401b);
    /* 005c401b: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c401f: je 0x5c406e */ if (fZ) goto L_005c406e;
L_005c4021:; BB(0x005c4021);
    /* 005c4021: jmp 0x5c4092 */ goto L_005c4092;
L_005c4023:; BB(0x005c4023);
    /* 005c4023: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4027: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4029: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c402f: call 0x460ebb */ r_esp -= 4; W32(r_esp, 0x5c4034u); f_00460ebb();
    /* 005c4034: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4036: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005c403b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c403d: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4043: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c4046u); call_ind(t); }
    /* 005c4046: jmp 0x5c4092 */ goto L_005c4092;
L_005c4048:; BB(0x005c4048);
    /* 005c4048: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c404b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c404c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c404e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4054: call 0x460ebb */ r_esp -= 4; W32(r_esp, 0x5c4059u); f_00460ebb();
    /* 005c4059: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005c405b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4061: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c4063: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4069: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c406cu); call_ind(t); }
    /* 005c406c: jmp 0x5c4092 */ goto L_005c4092;
L_005c406e:; BB(0x005c406e);
    /* 005c406e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4072: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4074: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c407a: call 0x460ebb */ r_esp -= 4; W32(r_esp, 0x5c407fu); f_00460ebb();
    /* 005c407f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c4081: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4087: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c4089: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c408f: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c4092u); call_ind(t); }
L_005c4092:; BB(0x005c4092);
    /* 005c4092: jmp 0x5c419f */ goto L_005c419f;
L_005c4097:; BB(0x005c4097);
    /* 005c4097: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c409a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c409d: cmp dword ptr [ebp - 0x1c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c40a1: ja 0x5c418c */ if ((!fC&&!fZ)) goto L_005c418c;
L_005c40a7:; BB(0x005c40a7);
    /* 005c40a7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c40aa: jmp dword ptr [ecx*4 + 0x5c420b] */ { u32 t = R32((u32)(r_ecx*4+0x5c420bu)); switch (t) { case 0x5c3fe0u: goto L_005c3fe0; case 0x5c3fcdu: goto L_005c3fcd; case 0x5c3fbau: goto L_005c3fba; case 0x5c3fa7u: goto L_005c3fa7; case 0x5c3f94u: goto L_005c3f94; case 0x5c3f81u: goto L_005c3f81; case 0x5c3f6eu: goto L_005c3f6e; case 0x5c3f58u: goto L_005c3f58; case 0x5c3f42u: goto L_005c3f42; case 0x5c3f2cu: goto L_005c3f2c; case 0x5c3f16u: goto L_005c3f16; case 0x5c3f00u: goto L_005c3f00; case 0x5c3eeau: goto L_005c3eea; case 0x5c3ed4u: goto L_005c3ed4; case 0x5c3ebeu: goto L_005c3ebe; case 0x5c3ea8u: goto L_005c3ea8; case 0x5c3e92u: goto L_005c3e92; case 0x5c3e7cu: goto L_005c3e7c; case 0x5c3e66u: goto L_005c3e66; case 0x5c3e50u: goto L_005c3e50; case 0x5c3e3au: goto L_005c3e3a; case 0x5c3e24u: goto L_005c3e24; case 0x5c4097u: goto L_005c4097; case 0x5c4009u: goto L_005c4009; case 0x5c3e0au: goto L_005c3e0a; case 0x5c3e05u: goto L_005c3e05; case 0x5c40b1u: goto L_005c40b1; case 0x5c40c7u: goto L_005c40c7; case 0x5c40ddu: goto L_005c40dd; case 0x5c40f3u: goto L_005c40f3; case 0x5c4109u: goto L_005c4109; case 0x5c411cu: goto L_005c411c; case 0x5c412fu: goto L_005c412f; case 0x5c4142u: goto L_005c4142; case 0x5c4155u: goto L_005c4155; case 0x5c4168u: goto L_005c4168; case 0x5c417bu: goto L_005c417b; default: UNSUP(0x005c40aa, "jump table entry is not a known target"); } }
L_005c40b1:; BB(0x005c40b1);
    /* 005c40b1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c40b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c40b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c40b7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c40bd: call 0x460f04 */ r_esp -= 4; W32(r_esp, 0x5c40c2u); f_00460f04();
    /* 005c40c2: jmp 0x5c418c */ goto L_005c418c;
L_005c40c7:; BB(0x005c40c7);
    /* 005c40c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c40ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c40cb: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005c40cd: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c40d3: call 0x460f04 */ r_esp -= 4; W32(r_esp, 0x5c40d8u); f_00460f04();
    /* 005c40d8: jmp 0x5c418c */ goto L_005c418c;
L_005c40dd:; BB(0x005c40dd);
    /* 005c40dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c40e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c40e1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005c40e3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c40e9: call 0x460f04 */ r_esp -= 4; W32(r_esp, 0x5c40eeu); f_00460f04();
    /* 005c40ee: jmp 0x5c418c */ goto L_005c418c;
L_005c40f3:; BB(0x005c40f3);
    /* 005c40f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c40f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c40f7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c40f9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c40ff: call 0x460f04 */ r_esp -= 4; W32(r_esp, 0x5c4104u); f_00460f04();
    /* 005c4104: jmp 0x5c418c */ goto L_005c418c;
L_005c4109:; BB(0x005c4109);
    /* 005c4109: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c410c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c410d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c410f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4115: call 0x460f04 */ r_esp -= 4; W32(r_esp, 0x5c411au); f_00460f04();
    /* 005c411a: jmp 0x5c418c */ goto L_005c418c;
L_005c411c:; BB(0x005c411c);
    /* 005c411c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c411f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4120: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4122: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4128: call 0x460f04 */ r_esp -= 4; W32(r_esp, 0x5c412du); f_00460f04();
    /* 005c412d: jmp 0x5c418c */ goto L_005c418c;
L_005c412f:; BB(0x005c412f);
    /* 005c412f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4132: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4133: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4135: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c413b: call 0x460f04 */ r_esp -= 4; W32(r_esp, 0x5c4140u); f_00460f04();
    /* 005c4140: jmp 0x5c418c */ goto L_005c418c;
L_005c4142:; BB(0x005c4142);
    /* 005c4142: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4145: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4146: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4148: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c414e: call 0x460f04 */ r_esp -= 4; W32(r_esp, 0x5c4153u); f_00460f04();
    /* 005c4153: jmp 0x5c418c */ goto L_005c418c;
L_005c4155:; BB(0x005c4155);
    /* 005c4155: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4158: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4159: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c415b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4161: call 0x460f04 */ r_esp -= 4; W32(r_esp, 0x5c4166u); f_00460f04();
    /* 005c4166: jmp 0x5c418c */ goto L_005c418c;
L_005c4168:; BB(0x005c4168);
    /* 005c4168: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c416b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c416c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005c416e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4174: call 0x460f04 */ r_esp -= 4; W32(r_esp, 0x5c4179u); f_00460f04();
    /* 005c4179: jmp 0x5c418c */ goto L_005c418c;
L_005c417b:; BB(0x005c417b);
    /* 005c417b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c417e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c417f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4181: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4187: call 0x460f04 */ r_esp -= 4; W32(r_esp, 0x5c418cu); f_00460f04();
L_005c418c:; BB(0x005c418c);
    /* 005c418c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005c418e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c4194: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c4196: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c419c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c419fu); call_ind(t); }
L_005c419f:; BB(0x005c419f);
    /* 005c419f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c41a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c41a2: ret  */ FN_RET(0x005c3daa); r_esp += 4; return;
}

void f_005c4240(void) /* FUN_005c4240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4240);
    /* 005c4240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4241: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4247: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c424a: call 0x5c1f4a */ r_esp -= 4; W32(r_esp, 0x5c424fu); f_005c1f4a();
    /* 005c424f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c4252: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c4255: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4257: je 0x5c4265 */ if (fZ) goto L_005c4265;
L_005c4259:; BB(0x005c4259);
    /* 005c4259: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c425c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c425d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c4262u); f_0048ac1b();
    /* 005c4262: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c4265:; BB(0x005c4265);
    /* 005c4265: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4268: mov esp, ebp */ r_esp = r_ebp;
    /* 005c426a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c426b: ret 4 */ FN_RET(0x005c4240); r_esp += 8; return;
}

void f_005c4270(void) /* FUN_005c4270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4270);
    /* 005c4270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4271: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4277: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c427a: call 0x5c3c3a */ r_esp -= 4; W32(r_esp, 0x5c427fu); f_005c3c3a();
    /* 005c427f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c4282: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c4285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4287: je 0x5c4295 */ if (fZ) goto L_005c4295;
L_005c4289:; BB(0x005c4289);
    /* 005c4289: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c428c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c428d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c4292u); f_0048ac1b();
    /* 005c4292: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c4295:; BB(0x005c4295);
    /* 005c4295: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4298: mov esp, ebp */ r_esp = r_ebp;
    /* 005c429a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c429b: ret 4 */ FN_RET(0x005c4270); r_esp += 8; return;
}

void f_005c42a0(void) /* FUN_005c42a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c42a0);
    /* 005c42a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c42a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c42a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c42a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c42a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c42aa: call 0x5c3cfe */ r_esp -= 4; W32(r_esp, 0x5c42afu); f_005c3cfe();
    /* 005c42af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c42b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c42b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c42b7: je 0x5c42c5 */ if (fZ) goto L_005c42c5;
L_005c42b9:; BB(0x005c42b9);
    /* 005c42b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c42bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c42bd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c42c2u); f_0048ac1b();
    /* 005c42c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c42c5:; BB(0x005c42c5);
    /* 005c42c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c42c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c42ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c42cb: ret 4 */ FN_RET(0x005c42a0); r_esp += 8; return;
}

void f_005c42d0(void) /* FUN_005c42d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c42d0);
    /* 005c42d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c42d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c42d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c42d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c42d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c42dc: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x5c42e1u); f_00446fe0();
    /* 005c42e1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c42e4: mov dword ptr [eax], 0x63a404 */ W32((u32)(r_eax), 0x63a404u);
    /* 005c42ea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c42ed: mov dword ptr [0x6fc08c], ecx */ W32((u32)(0x6fc08cu), r_ecx);
    /* 005c42f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c42f5: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c42fb: call 0x460a16 */ r_esp -= 4; W32(r_esp, 0x5c4300u); f_00460a16();
    /* 005c4300: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4303: jl 0x5c4314 */ if ((fS!=fO)) goto L_005c4314;
L_005c4305:; BB(0x005c4305);
    /* 005c4305: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4308: mov dword ptr [edx + 0x1cbc], 1 */ W32((u32)(r_edx+0x1cbcu), 0x1u);
    /* 005c4312: jmp 0x5c4321 */ goto L_005c4321;
L_005c4314:; BB(0x005c4314);
    /* 005c4314: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4317: mov dword ptr [eax + 0x1cbc], 0 */ W32((u32)(r_eax+0x1cbcu), 0x0u);
L_005c4321:; BB(0x005c4321);
    /* 005c4321: push 0x51c */ { u32 v = 0x51cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4326: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4329: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c432eu); f_005e5ec3();
    /* 005c432e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c4335: jmp 0x5c4340 */ goto L_005c4340;
L_005c4337:; BB(0x005c4337);
    /* 005c4337: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c433a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c433d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c4340:; BB(0x005c4340);
    /* 005c4340: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4344: jge 0x5c4359 */ if ((fS==fO)) goto L_005c4359;
L_005c4346:; BB(0x005c4346);
    /* 005c4346: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4349: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c434c: mov dword ptr [eax + edx*4 + 0x1cb0], 0 */ W32((u32)(r_eax+r_edx*4+0x1cb0u), 0x0u);
    /* 005c4357: jmp 0x5c4337 */ goto L_005c4337;
L_005c4359:; BB(0x005c4359);
    /* 005c4359: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c435c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c435e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c435f: ret  */ FN_RET(0x005c42d0); r_esp += 4; return;
}

void f_005c4360(void) /* FUN_005c4360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4360);
    /* 005c4360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4361: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4363: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4366: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c4369: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c436c: mov dword ptr [eax], 0x63a404 */ W32((u32)(r_eax), 0x63a404u);
    /* 005c4372: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c4379: jmp 0x5c4384 */ goto L_005c4384;
L_005c437b:; BB(0x005c437b);
    /* 005c437b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c437e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4381: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c4384:; BB(0x005c4384);
    /* 005c4384: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4388: jge 0x5c43e1 */ if ((fS==fO)) goto L_005c43e1;
L_005c438a:; BB(0x005c438a);
    /* 005c438a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c438d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c4390: cmp dword ptr [eax + edx*4 + 0x1cb0], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1cb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4398: je 0x5c43df */ if (fZ) goto L_005c43df;
L_005c439a:; BB(0x005c439a);
    /* 005c439a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c439d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c43a0: mov eax, dword ptr [edx + ecx*4 + 0x1cb0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cb0u));
    /* 005c43a7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c43aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c43ad: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c43b0: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c43b4: je 0x5c43c7 */ if (fZ) goto L_005c43c7;
L_005c43b6:; BB(0x005c43b6);
    /* 005c43b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c43b8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c43bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c43bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c43c0: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c43c2u); call_ind(t); }
    /* 005c43c2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c43c5: jmp 0x5c43ce */ goto L_005c43ce;
L_005c43c7:; BB(0x005c43c7);
    /* 005c43c7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005c43ce:; BB(0x005c43ce);
    /* 005c43ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c43d1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c43d4: mov dword ptr [edx + ecx*4 + 0x1cb0], 0 */ W32((u32)(r_edx+r_ecx*4+0x1cb0u), 0x0u);
L_005c43df:; BB(0x005c43df);
    /* 005c43df: jmp 0x5c437b */ goto L_005c437b;
L_005c43e1:; BB(0x005c43e1);
    /* 005c43e1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c43e4: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x5c43e9u); f_0044711a();
    /* 005c43e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c43eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c43ec: ret  */ FN_RET(0x005c4360); r_esp += 4; return;
}

void f_005c43ed(void) /* FUN_005c43ed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c43ed);
    /* 005c43ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c43ee: mov ebp, esp */ r_ebp = r_esp;
    /* 005c43f0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c43f3: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c43f6: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005c43fd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c4404: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005c440b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c440e: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x5c4413u); f_004476a6();
    /* 005c4413: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c441a: jmp 0x5c4425 */ goto L_005c4425;
L_005c441c:; BB(0x005c441c);
    /* 005c441c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c441f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c4422: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005c4425:; BB(0x005c4425);
    /* 005c4425: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4429: jge 0x5c44ec */ if ((fS==fO)) goto L_005c44ec;
L_005c442f:; BB(0x005c442f);
    /* 005c442f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c4432: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c4435: cmp dword ptr [edx + ecx*4 + 0x1cb0], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1cb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c443d: jne 0x5c44c8 */ if (!fZ) goto L_005c44c8;
L_005c4443:; BB(0x005c4443);
    /* 005c4443: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4448: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c444du); f_0048ab58();
    /* 005c444d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4450: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c4453: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4457: je 0x5c446e */ if (fZ) goto L_005c446e;
L_005c4459:; BB(0x005c4459);
    /* 005c4459: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c445c: mov ecx, dword ptr [ebp + eax*4 - 0xc] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff4u));
    /* 005c4460: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4461: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c4464: call 0x5c4587 */ r_esp -= 4; W32(r_esp, 0x5c4469u); f_005c4587();
    /* 005c4469: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c446c: jmp 0x5c4475 */ goto L_005c4475;
L_005c446e:; BB(0x005c446e);
    /* 005c446e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005c4475:; BB(0x005c4475);
    /* 005c4475: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c4478: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c447b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c447e: mov dword ptr [eax + edx*4 + 0x1cb0], ecx */ W32((u32)(r_eax+r_edx*4+0x1cb0u), r_ecx);
    /* 005c4485: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4487: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4489: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c448b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c448e: add edx, 0x51d */ {  u32 a = r_edx; u32 b = 0x51du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c4494: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4495: push 0x6fc090 */ { u32 v = 0x6fc090u; r_esp -= 4; W32(r_esp, v); }
    /* 005c449a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c449c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c449f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c44a2: mov ecx, dword ptr [ecx + eax*4 + 0x1cb0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1cb0u));
    /* 005c44a9: call 0x5d5f8d */ r_esp -= 4; W32(r_esp, 0x5c44aeu); f_005d5f8d();
    /* 005c44ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c44b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c44b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c44b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c44b6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c44b9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c44bc: mov ecx, dword ptr [eax + edx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cb0u));
    /* 005c44c3: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5c44c8u); f_005d5ff2();
L_005c44c8:; BB(0x005c44c8);
    /* 005c44c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c44cb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c44ce: mov ecx, dword ptr [edx + ecx*4 + 0x1cb0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cb0u));
    /* 005c44d5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c44d8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c44db: mov eax, dword ptr [edx + eax*4 + 0x1cb0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1cb0u));
    /* 005c44e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c44e4: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c44e7u); call_ind(t); }
    /* 005c44e7: jmp 0x5c441c */ goto L_005c441c;
L_005c44ec:; BB(0x005c44ec);
    /* 005c44ec: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c44f3: jne 0x5c4583 */ if (!fZ) goto L_005c4583;
L_005c44f9:; BB(0x005c44f9);
    /* 005c44f9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c44ff: call 0x45cd8e */ r_esp -= 4; W32(r_esp, 0x5c4504u); f_0045cd8e();
    /* 005c4504: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4507: jne 0x5c4583 */ if (!fZ) goto L_005c4583;
L_005c4509:; BB(0x005c4509);
    /* 005c4509: cmp dword ptr [0x6f6a18], 0 */ {  u32 a = R32((u32)(0x6f6a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4510: jne 0x5c4583 */ if (!fZ) goto L_005c4583;
L_005c4512:; BB(0x005c4512);
    /* 005c4512: push 0x1d60 */ { u32 v = 0x1d60u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4517: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c451cu); f_0048ab58();
    /* 005c451c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c451f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c4522: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4526: je 0x5c453b */ if (fZ) goto L_005c453b;
L_005c4528:; BB(0x005c4528);
    /* 005c4528: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c452a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c452c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c452e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c4531: call 0x482ab0 */ r_esp -= 4; W32(r_esp, 0x5c4536u); f_00482ab0();
    /* 005c4536: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c4539: jmp 0x5c4542 */ goto L_005c4542;
L_005c453b:; BB(0x005c453b);
    /* 005c453b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c4542:; BB(0x005c4542);
    /* 005c4542: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c4545: mov dword ptr [0x6f6a18], eax */ W32((u32)(0x6f6a18u), r_eax);
    /* 005c454a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c454c: push 0x526 */ { u32 v = 0x526u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4551: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c4557: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x5c455cu); f_005e0461();
    /* 005c455c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c455e: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c4564: call 0x483e0e */ r_esp -= 4; W32(r_esp, 0x5c4569u); f_00483e0e();
    /* 005c4569: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c456b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c456d: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c4573: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x5c4578u); f_005d81dc();
    /* 005c4578: mov ecx, dword ptr [0x6f6a18] */ r_ecx = R32((u32)(0x6f6a18u));
    /* 005c457e: call 0x4856fc */ r_esp -= 4; W32(r_esp, 0x5c4583u); f_004856fc();
L_005c4583:; BB(0x005c4583);
    /* 005c4583: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4585: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4586: ret  */ FN_RET(0x005c43ed); r_esp += 4; return;
}

void f_005c4587(void) /* FUN_005c4587 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4587);
    /* 005c4587: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4588: mov ebp, esp */ r_ebp = r_esp;
    /* 005c458a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c458b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c458e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4591: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c4596u); f_005d5d20();
    /* 005c4596: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4599: mov dword ptr [eax], 0x63a4bc */ W32((u32)(r_eax), 0x63a4bcu);
    /* 005c459f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c45a2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c45a5: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 005c45ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c45ae: mov esp, ebp */ r_esp = r_ebp;
    /* 005c45b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c45b1: ret 4 */ FN_RET(0x005c4587); r_esp += 8; return;
}

void f_005c45b4(void) /* FUN_005c45b4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c45b4);
    /* 005c45b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c45b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005c45b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c45b8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c45bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c45be: mov dword ptr [eax], 0x63a4bc */ W32((u32)(r_eax), 0x63a4bcu);
    /* 005c45c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c45c7: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5c45ccu); f_005d5dfb();
    /* 005c45cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005c45ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c45cf: ret  */ FN_RET(0x005c45b4); r_esp += 4; return;
}

void f_005c45d0(void) /* FUN_005c45d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c45d0);
    /* 005c45d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c45d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c45d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c45d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c45d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c45da: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005c45e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c45e1: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005c45e7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c45e9: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c45ef: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5c45f2u); call_ind(t); }
    /* 005c45f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005c45f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c45f5: ret  */ FN_RET(0x005c45d0); r_esp += 4; return;
}

void f_005c45f6(void) /* FUN_005c45f6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c45f6);
    /* 005c45f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c45f7: mov ebp, esp */ r_ebp = r_esp;
    /* 005c45f9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c45fc: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c45ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c4602: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005c4608: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c460b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c460f: je 0x5c463d */ if (fZ) goto L_005c463d;
L_005c4611:; BB(0x005c4611);
    /* 005c4611: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4615: je 0x5c461f */ if (fZ) goto L_005c461f;
L_005c4617:; BB(0x005c4617);
    /* 005c4617: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c461b: je 0x5c465b */ if (fZ) goto L_005c465b;
L_005c461d:; BB(0x005c461d);
    /* 005c461d: jmp 0x5c4677 */ goto L_005c4677;
L_005c461f:; BB(0x005c461f);
    /* 005c461f: mov dword ptr [ebp - 0xc], 0x1b6 */ W32((u32)(r_ebp+0xfffffff4u), 0x1b6u);
    /* 005c4626: mov dword ptr [ebp - 0x10], 0x108 */ W32((u32)(r_ebp+0xfffffff0u), 0x108u);
    /* 005c462d: mov dword ptr [ebp - 4], 0x20d */ W32((u32)(r_ebp+0xfffffffcu), 0x20du);
    /* 005c4634: mov dword ptr [ebp - 8], 0x17d */ W32((u32)(r_ebp+0xfffffff8u), 0x17du);
    /* 005c463b: jmp 0x5c4677 */ goto L_005c4677;
L_005c463d:; BB(0x005c463d);
    /* 005c463d: mov dword ptr [ebp - 0xc], 0x49 */ W32((u32)(r_ebp+0xfffffff4u), 0x49u);
    /* 005c4644: mov dword ptr [ebp - 0x10], 0x106 */ W32((u32)(r_ebp+0xfffffff0u), 0x106u);
    /* 005c464b: mov dword ptr [ebp - 4], 0xf7 */ W32((u32)(r_ebp+0xfffffffcu), 0xf7u);
    /* 005c4652: mov dword ptr [ebp - 8], 0x17e */ W32((u32)(r_ebp+0xfffffff8u), 0x17eu);
    /* 005c4659: jmp 0x5c4677 */ goto L_005c4677;
L_005c465b:; BB(0x005c465b);
    /* 005c465b: mov dword ptr [ebp - 0xc], 0xb6 */ W32((u32)(r_ebp+0xfffffff4u), 0xb6u);
    /* 005c4662: mov dword ptr [ebp - 0x10], 0x2f */ W32((u32)(r_ebp+0xfffffff0u), 0x2fu);
    /* 005c4669: mov dword ptr [ebp - 4], 0x19d */ W32((u32)(r_ebp+0xfffffffcu), 0x19du);
    /* 005c4670: mov dword ptr [ebp - 8], 0xa3 */ W32((u32)(r_ebp+0xfffffff8u), 0xa3u);
L_005c4677:; BB(0x005c4677);
    /* 005c4677: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c467a: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5c467fu); f_005d9690();
    /* 005c467f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4681: je 0x5c46aa */ if (fZ) goto L_005c46aa;
L_005c4683:; BB(0x005c4683);
    /* 005c4683: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c4686: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4689: jl 0x5c46aa */ if ((fS!=fO)) goto L_005c46aa;
L_005c468b:; BB(0x005c468b);
    /* 005c468b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c468e: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4691: jg 0x5c46aa */ if ((!fZ&&fS==fO)) goto L_005c46aa;
L_005c4693:; BB(0x005c4693);
    /* 005c4693: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c4696: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4699: jl 0x5c46aa */ if ((fS!=fO)) goto L_005c46aa;
L_005c469b:; BB(0x005c469b);
    /* 005c469b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c469e: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c46a1: jg 0x5c46aa */ if ((!fZ&&fS==fO)) goto L_005c46aa;
L_005c46a3:; BB(0x005c46a3);
    /* 005c46a3: mov eax, 1 */ r_eax = 0x1u;
    /* 005c46a8: jmp 0x5c46ac */ goto L_005c46ac;
L_005c46aa:; BB(0x005c46aa);
    /* 005c46aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c46ac:; BB(0x005c46ac);
    /* 005c46ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005c46ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c46af: ret 8 */ FN_RET(0x005c45f6); r_esp += 12; return;
}

void f_005c46c0(void) /* FUN_005c46c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c46c0);
    /* 005c46c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c46c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c46c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c46c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c46c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c46ca: call 0x5c4360 */ r_esp -= 4; W32(r_esp, 0x5c46cfu); f_005c4360();
    /* 005c46cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c46d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c46d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c46d7: je 0x5c46e5 */ if (fZ) goto L_005c46e5;
L_005c46d9:; BB(0x005c46d9);
    /* 005c46d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c46dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c46dd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c46e2u); f_0048ac1b();
    /* 005c46e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c46e5:; BB(0x005c46e5);
    /* 005c46e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c46e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c46ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c46eb: ret 4 */ FN_RET(0x005c46c0); r_esp += 8; return;
}

void f_005c46f0(void) /* FUN_005c46f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c46f0);
    /* 005c46f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c46f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c46f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c46f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c46f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c46fa: call 0x5c45b4 */ r_esp -= 4; W32(r_esp, 0x5c46ffu); f_005c45b4();
    /* 005c46ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c4702: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c4705: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4707: je 0x5c4715 */ if (fZ) goto L_005c4715;
L_005c4709:; BB(0x005c4709);
    /* 005c4709: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c470c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c470d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c4712u); f_0048ac1b();
    /* 005c4712: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c4715:; BB(0x005c4715);
    /* 005c4715: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4718: mov esp, ebp */ r_esp = r_ebp;
    /* 005c471a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c471b: ret 4 */ FN_RET(0x005c46f0); r_esp += 8; return;
}

void f_005c4720(void) /* FUN_005c4720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4720);
    /* 005c4720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4721: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4727: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c472a: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c472fu); f_005d5d20();
    /* 005c472f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4732: mov dword ptr [eax], 0x63a52c */ W32((u32)(r_eax), 0x63a52cu);
    /* 005c4738: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c473a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c473d: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c4742u); f_005d6b4e();
    /* 005c4742: push 0x698304 */ { u32 v = 0x698304u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c474a: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c474fu); f_005d67b1();
    /* 005c474f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4751: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4753: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4755: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4758: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c475du); f_005d69c8();
    /* 005c475d: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4762: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4765: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c476au); f_005d6a7e();
    /* 005c476a: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 005c476f: push 0x226 */ { u32 v = 0x226u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4774: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4777: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c477cu); f_005d6b88();
    /* 005c477c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c477e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4780: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4783: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c4788u); f_005d5e59();
    /* 005c4788: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c478b: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c4790u); f_005d6d06();
    /* 005c4790: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4793: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4795: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4796: ret  */ FN_RET(0x005c4720); r_esp += 4; return;
}

void f_005c4797(void) /* FUN_005c4797 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4797);
    /* 005c4797: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4798: mov ebp, esp */ r_ebp = r_esp;
    /* 005c479a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c479d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c47a0: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c47a5: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c47a8: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x5c47adu); f_0041f839();
    /* 005c47ad: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 005c47b1: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005c47b5: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005c47b9: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 005c47bd: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c47c1: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c47c4: jl 0x5c47cc */ if ((fS!=fO)) goto L_005c47cc;
L_005c47c6:; BB(0x005c47c6);
    /* 005c47c6: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005c47cc:; BB(0x005c47cc);
    /* 005c47cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c47ce: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c47d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c47d3: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c47d9: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005c47dc: call 0x41f510 */ r_esp -= 4; W32(r_esp, 0x5c47e1u); f_0041f510();
    /* 005c47e1: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c47e7: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c47ea: call 0x41fb49 */ r_esp -= 4; W32(r_esp, 0x5c47efu); f_0041fb49();
    /* 005c47ef: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c47f4: cmp dword ptr [eax + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c47fb: jle 0x5c4832 */ if ((fZ||fS!=fO)) goto L_005c4832;
L_005c47fd:; BB(0x005c47fd);
    /* 005c47fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c47ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4801: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4807: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c480a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c480b: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4810: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4814: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c481a: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 005c4820: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4825: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 005c482b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c482d: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5c4830u); call_ind(t); }
    /* 005c4830: jmp 0x5c4855 */ goto L_005c4855;
L_005c4832:; BB(0x005c4832);
    /* 005c4832: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4834: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c483a: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c483d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c483e: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4843: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4846: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4847: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c484d: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c4850: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c4855u); f_004216dd();
L_005c4855:; BB(0x005c4855);
    /* 005c4855: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4858: ret  */ FN_RET(0x005c4797); r_esp += 4; return;
}

void f_005c4859(void) /* FUN_005c4859 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4859);
    /* 005c4859: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c485a: mov ebp, esp */ r_ebp = r_esp;
    /* 005c485c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c485d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4860: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4863: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c4868u); f_005d5d20();
    /* 005c4868: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c486b: mov dword ptr [eax], 0x63a59c */ W32((u32)(r_eax), 0x63a59cu);
    /* 005c4871: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4873: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4876: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c487bu); f_005d6b4e();
    /* 005c487b: push 0x69830c */ { u32 v = 0x69830cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4880: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4883: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c4888u); f_005d67b1();
    /* 005c4888: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c488a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c488c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c488e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4891: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c4896u); f_005d69c8();
    /* 005c4896: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c489b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c489e: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c48a3u); f_005d6a7e();
    /* 005c48a3: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c48a8: push 0x226 */ { u32 v = 0x226u; r_esp -= 4; W32(r_esp, v); }
    /* 005c48ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c48b0: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c48b5u); f_005d6b88();
    /* 005c48b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c48b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c48b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c48bc: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c48c1u); f_005d5e59();
    /* 005c48c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c48c4: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c48c9u); f_005d6d06();
    /* 005c48c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c48cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005c48ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c48cf: ret  */ FN_RET(0x005c4859); r_esp += 4; return;
}

void f_005c48d0(void) /* FUN_005c48d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c48d0);
    /* 005c48d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c48d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c48d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c48d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c48d9: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c48de: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c48e1: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x5c48e6u); f_0041f839();
    /* 005c48e6: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 005c48ea: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005c48ee: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005c48f2: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 005c48f6: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c48fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c48fc: jge 0x5c4904 */ if ((fS==fO)) goto L_005c4904;
L_005c48fe:; BB(0x005c48fe);
    /* 005c48fe: mov word ptr [ebp - 4], 9 */ W16((u32)(r_ebp+0xfffffffcu), 0x9u);
L_005c4904:; BB(0x005c4904);
    /* 005c4904: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4906: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c490a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c490b: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4911: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005c4914: call 0x41f510 */ r_esp -= 4; W32(r_esp, 0x5c4919u); f_0041f510();
    /* 005c4919: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c491f: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c4922: call 0x41fb49 */ r_esp -= 4; W32(r_esp, 0x5c4927u); f_0041fb49();
    /* 005c4927: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c492c: cmp dword ptr [eax + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4933: jle 0x5c496a */ if ((fZ||fS!=fO)) goto L_005c496a;
L_005c4935:; BB(0x005c4935);
    /* 005c4935: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4937: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4939: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c493f: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c4942: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4943: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4948: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c494b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c494c: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4952: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 005c4958: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c495d: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 005c4963: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4965: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5c4968u); call_ind(t); }
    /* 005c4968: jmp 0x5c498d */ goto L_005c498d;
L_005c496a:; BB(0x005c496a);
    /* 005c496a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c496c: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4972: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c4975: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4976: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c497b: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c497e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c497f: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4985: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c4988: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c498du); f_004216dd();
L_005c498d:; BB(0x005c498d);
    /* 005c498d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c498f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4990: ret  */ FN_RET(0x005c48d0); r_esp += 4; return;
}

void f_005c4991(void) /* FUN_005c4991 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4991);
    /* 005c4991: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4992: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4994: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4995: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4998: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c499b: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c49a0u); f_005d5d20();
    /* 005c49a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c49a3: mov dword ptr [eax], 0x63a60c */ W32((u32)(r_eax), 0x63a60cu);
    /* 005c49a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c49ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c49ae: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c49b3u); f_005d6b4e();
    /* 005c49b3: push 0x698314 */ { u32 v = 0x698314u; r_esp -= 4; W32(r_esp, v); }
    /* 005c49b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c49bb: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c49c0u); f_005d67b1();
    /* 005c49c0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c49c2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c49c4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c49c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c49c9: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c49ceu); f_005d69c8();
    /* 005c49ce: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c49d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c49d6: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c49dbu); f_005d6a7e();
    /* 005c49db: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 005c49e0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c49e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c49e5: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c49eau); f_005d6b88();
    /* 005c49ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c49ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c49ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c49f1: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c49f6u); f_005d5e59();
    /* 005c49f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c49f9: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c49feu); f_005d6d06();
    /* 005c49fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4a01: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4a03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4a04: ret  */ FN_RET(0x005c4991); r_esp += 4; return;
}

void f_005c4a05(void) /* FUN_005c4a05 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4a05);
    /* 005c4a05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a06: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4a08: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4a0b: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c4a0e: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4a13: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4a16: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4a19: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4a1f: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 005c4a22: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4a27: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 005c4a2e: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4a34: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005c4a37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a38: push 0x69831c */ { u32 v = 0x69831cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a3d: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c4a40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a41: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c4a46u); f_00624050();
    /* 005c4a46: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4a49: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005c4a4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a4d: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4a53: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005c4a56: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4a5b: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005c4a5e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4a60: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5c4a63u); call_ind(t); }
    /* 005c4a63: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4a69: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c4a6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a6d: push 0x698320 */ { u32 v = 0x698320u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a72: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c4a75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a76: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c4a7bu); f_00624050();
    /* 005c4a7b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4a7e: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005c4a81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a82: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4a88: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 005c4a8b: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4a90: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005c4a93: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4a95: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5c4a98u); call_ind(t); }
    /* 005c4a98: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4a9e: cmp dword ptr [ecx + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4aa5: jle 0x5c4add */ if ((fZ||fS!=fO)) goto L_005c4add;
L_005c4aa7:; BB(0x005c4aa7);
    /* 005c4aa7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4aa9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4aab: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4ab1: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005c4ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ab5: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4abb: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005c4abe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4abf: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4ac4: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 005c4aca: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4ad0: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 005c4ad6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c4ad8: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5c4adbu); call_ind(t); }
    /* 005c4adb: jmp 0x5c4b00 */ goto L_005c4b00;
L_005c4add:; BB(0x005c4add);
    /* 005c4add: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4adf: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4ae4: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005c4ae7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ae8: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4aee: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005c4af1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4af2: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4af8: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005c4afb: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c4b00u); f_004216dd();
L_005c4b00:; BB(0x005c4b00);
    /* 005c4b00: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4b02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4b03: ret  */ FN_RET(0x005c4a05); r_esp += 4; return;
}

void f_005c4b04(void) /* FUN_005c4b04 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4b04);
    /* 005c4b04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b05: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4b07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b08: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4b0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4b0e: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c4b13u); f_005d5d20();
    /* 005c4b13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4b16: mov dword ptr [eax], 0x63a67c */ W32((u32)(r_eax), 0x63a67cu);
    /* 005c4b1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4b21: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c4b26u); f_005d6b4e();
    /* 005c4b26: push 0x698324 */ { u32 v = 0x698324u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4b2e: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c4b33u); f_005d67b1();
    /* 005c4b33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b35: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b37: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4b3c: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c4b41u); f_005d69c8();
    /* 005c4b41: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4b49: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c4b4eu); f_005d6a7e();
    /* 005c4b4e: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b53: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4b58: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c4b5du); f_005d6b88();
    /* 005c4b5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4b64: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c4b69u); f_005d5e59();
    /* 005c4b69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4b6c: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c4b71u); f_005d6d06();
    /* 005c4b71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4b74: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4b76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4b77: ret  */ FN_RET(0x005c4b04); r_esp += 4; return;
}

void f_005c4b78(void) /* FUN_005c4b78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4b78);
    /* 005c4b78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b79: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4b7b: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4b7e: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c4b81: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4b86: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4b89: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4b8c: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4b92: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 005c4b95: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4b9a: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4b9e: jge 0x5c4bad */ if ((fS==fO)) goto L_005c4bad;
L_005c4ba0:; BB(0x005c4ba0);
    /* 005c4ba0: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4ba6: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_005c4bad:; BB(0x005c4bad);
    /* 005c4bad: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4bb3: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 005c4bba: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4bbf: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4bc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4bc3: push 0x69832c */ { u32 v = 0x69832cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4bc8: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005c4bcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4bcc: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c4bd1u); f_00624050();
    /* 005c4bd1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4bd4: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c4bd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4bd8: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4bde: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005c4be1: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4be7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c4bea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c4bec: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c4befu); call_ind(t); }
    /* 005c4bef: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4bf4: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005c4bf7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4bf8: push 0x698330 */ { u32 v = 0x698330u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4bfd: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005c4c00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c01: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c4c06u); f_00624050();
    /* 005c4c06: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4c09: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c4c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c0d: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4c13: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005c4c16: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4c1c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c4c1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c4c21: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c4c24u); call_ind(t); }
    /* 005c4c24: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4c29: cmp dword ptr [eax + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4c30: jle 0x5c4c67 */ if ((fZ||fS!=fO)) goto L_005c4c67;
L_005c4c32:; BB(0x005c4c32);
    /* 005c4c32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c36: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4c3c: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c4c3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c40: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4c45: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4c48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c49: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4c4f: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 005c4c55: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4c5a: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 005c4c60: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4c62: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5c4c65u); call_ind(t); }
    /* 005c4c65: jmp 0x5c4c8a */ goto L_005c4c8a;
L_005c4c67:; BB(0x005c4c67);
    /* 005c4c67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c69: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4c6f: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c4c72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c73: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4c78: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4c7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c7c: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4c82: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c4c85: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c4c8au); f_004216dd();
L_005c4c8a:; BB(0x005c4c8a);
    /* 005c4c8a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4c8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4c8d: ret  */ FN_RET(0x005c4b78); r_esp += 4; return;
}

void f_005c4c8e(void) /* FUN_005c4c8e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4c8e);
    /* 005c4c8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c8f: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4c91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4c92: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4c95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4c98: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c4c9du); f_005d5d20();
    /* 005c4c9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4ca0: mov dword ptr [eax], 0x63a6ec */ W32((u32)(r_eax), 0x63a6ecu);
    /* 005c4ca6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ca8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4cab: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c4cb0u); f_005d6b4e();
    /* 005c4cb0: push 0x698334 */ { u32 v = 0x698334u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4cb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4cb8: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c4cbdu); f_005d67b1();
    /* 005c4cbd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4cbf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4cc1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4cc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4cc6: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c4ccbu); f_005d69c8();
    /* 005c4ccb: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4cd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4cd3: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c4cd8u); f_005d6a7e();
    /* 005c4cd8: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4cdd: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4cdf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4ce2: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c4ce7u); f_005d6b88();
    /* 005c4ce7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ce9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ceb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4cee: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c4cf3u); f_005d5e59();
    /* 005c4cf3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4cf6: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c4cfbu); f_005d6d06();
    /* 005c4cfb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4cfe: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4d00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4d01: ret  */ FN_RET(0x005c4c8e); r_esp += 4; return;
}

void f_005c4d02(void) /* FUN_005c4d02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4d02);
    /* 005c4d02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d03: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4d05: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4d08: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c4d0b: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4d10: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4d13: add ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4d19: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4d1f: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 005c4d22: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4d27: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 005c4d2e: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4d34: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005c4d37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d38: push 0x69833c */ { u32 v = 0x69833cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d3d: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c4d40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d41: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c4d46u); f_00624050();
    /* 005c4d46: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4d49: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005c4d4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d4d: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4d53: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005c4d56: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4d5b: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005c4d5e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4d60: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5c4d63u); call_ind(t); }
    /* 005c4d63: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4d69: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c4d6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d6d: push 0x698340 */ { u32 v = 0x698340u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d72: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c4d75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d76: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c4d7bu); f_00624050();
    /* 005c4d7b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4d7e: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005c4d81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4d82: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4d88: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 005c4d8b: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4d90: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005c4d93: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4d95: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5c4d98u); call_ind(t); }
    /* 005c4d98: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4d9e: cmp dword ptr [ecx + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4da5: jle 0x5c4ddd */ if ((fZ||fS!=fO)) goto L_005c4ddd;
L_005c4da7:; BB(0x005c4da7);
    /* 005c4da7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4da9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4dab: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4db1: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005c4db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4db5: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4dbb: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005c4dbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4dbf: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4dc4: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 005c4dca: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4dd0: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 005c4dd6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c4dd8: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5c4ddbu); call_ind(t); }
    /* 005c4ddb: jmp 0x5c4e00 */ goto L_005c4e00;
L_005c4ddd:; BB(0x005c4ddd);
    /* 005c4ddd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ddf: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4de4: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005c4de7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4de8: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4dee: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005c4df1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4df2: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4df8: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005c4dfb: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c4e00u); f_004216dd();
L_005c4e00:; BB(0x005c4e00);
    /* 005c4e00: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4e02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4e03: ret  */ FN_RET(0x005c4d02); r_esp += 4; return;
}

void f_005c4e04(void) /* FUN_005c4e04 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4e04);
    /* 005c4e04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e05: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4e07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e08: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4e0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4e0e: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c4e13u); f_005d5d20();
    /* 005c4e13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4e16: mov dword ptr [eax], 0x63a75c */ W32((u32)(r_eax), 0x63a75cu);
    /* 005c4e1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4e21: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c4e26u); f_005d6b4e();
    /* 005c4e26: push 0x698344 */ { u32 v = 0x698344u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4e2e: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c4e33u); f_005d67b1();
    /* 005c4e33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e35: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e37: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4e3c: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c4e41u); f_005d69c8();
    /* 005c4e41: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4e49: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c4e4eu); f_005d6a7e();
    /* 005c4e4e: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e53: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4e58: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c4e5du); f_005d6b88();
    /* 005c4e5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4e64: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c4e69u); f_005d5e59();
    /* 005c4e69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4e6c: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c4e71u); f_005d6d06();
    /* 005c4e71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4e74: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4e76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4e77: ret  */ FN_RET(0x005c4e04); r_esp += 4; return;
}

void f_005c4e78(void) /* FUN_005c4e78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4e78);
    /* 005c4e78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e79: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4e7b: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4e7e: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c4e81: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4e86: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4e89: sub ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4e8f: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4e95: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 005c4e98: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4e9d: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4ea1: jge 0x5c4eb0 */ if ((fS==fO)) goto L_005c4eb0;
L_005c4ea3:; BB(0x005c4ea3);
    /* 005c4ea3: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4ea9: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_005c4eb0:; BB(0x005c4eb0);
    /* 005c4eb0: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4eb6: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 005c4ebd: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4ec2: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4ec5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ec6: push 0x69834c */ { u32 v = 0x69834cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ecb: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005c4ece: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ecf: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c4ed4u); f_00624050();
    /* 005c4ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4ed7: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c4eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4edb: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4ee1: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005c4ee4: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4eea: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c4eed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c4eef: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c4ef2u); call_ind(t); }
    /* 005c4ef2: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4ef7: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005c4efa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4efb: push 0x698350 */ { u32 v = 0x698350u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f00: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005c4f03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f04: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c4f09u); f_00624050();
    /* 005c4f09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c4f0c: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c4f0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f10: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4f16: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005c4f19: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4f1f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c4f22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c4f24: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c4f27u); call_ind(t); }
    /* 005c4f27: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4f2c: cmp dword ptr [eax + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4f33: jle 0x5c4f6a */ if ((fZ||fS!=fO)) goto L_005c4f6a;
L_005c4f35:; BB(0x005c4f35);
    /* 005c4f35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f39: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4f3f: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c4f42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f43: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4f48: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4f4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f4c: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4f52: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 005c4f58: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4f5d: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 005c4f63: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c4f65: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5c4f68u); call_ind(t); }
    /* 005c4f68: jmp 0x5c4f8d */ goto L_005c4f8d;
L_005c4f6a:; BB(0x005c4f6a);
    /* 005c4f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f6c: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c4f72: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c4f75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f76: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c4f7b: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c4f7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f7f: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c4f85: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c4f88: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c4f8du); f_004216dd();
L_005c4f8d:; BB(0x005c4f8d);
    /* 005c4f8d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4f8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4f90: ret  */ FN_RET(0x005c4e78); r_esp += 4; return;
}

void f_005c4f91(void) /* FUN_005c4f91 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4f91);
    /* 005c4f91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f92: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4f94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4f95: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4f98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4f9b: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c4fa0u); f_005d5d20();
    /* 005c4fa0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4fa3: mov dword ptr [eax], 0x63a7cc */ W32((u32)(r_eax), 0x63a7ccu);
    /* 005c4fa9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4fab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4fae: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c4fb3u); f_005d6b4e();
    /* 005c4fb3: push 0x698354 */ { u32 v = 0x698354u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4fb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4fbb: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c4fc0u); f_005d67b1();
    /* 005c4fc0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4fc2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4fc4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4fc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4fc9: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c4fceu); f_005d69c8();
    /* 005c4fce: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4fd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4fd6: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c4fdbu); f_005d6a7e();
    /* 005c4fdb: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4fe0: push 0xbe */ { u32 v = 0xbeu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4fe5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4fe8: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c4fedu); f_005d6b88();
    /* 005c4fed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4fef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ff1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4ff4: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c4ff9u); f_005d5e59();
    /* 005c4ff9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4ffc: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c5001u); f_005d6d06();
    /* 005c5001: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5004: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5006: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5007: ret  */ FN_RET(0x005c4f91); r_esp += 4; return;
}

void f_005c5008(void) /* FUN_005c5008 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c5008);
    /* 005c5008: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5009: mov ebp, esp */ r_ebp = r_esp;
    /* 005c500b: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c500e: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c5011: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5016: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c5019: add ecx, 0x2710 */ {  u32 a = r_ecx; u32 b = 0x2710u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c501f: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5025: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 005c5028: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c502d: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 005c5034: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c503a: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005c503d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c503e: push 0x698360 */ { u32 v = 0x698360u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5043: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c5046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5047: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c504cu); f_00624050();
    /* 005c504c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c504f: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005c5052: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5053: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5059: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005c505c: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5061: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005c5064: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5066: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5c5069u); call_ind(t); }
    /* 005c5069: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c506f: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c5072: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5073: push 0x698364 */ { u32 v = 0x698364u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5078: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c507b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c507c: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c5081u); f_00624050();
    /* 005c5081: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5084: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005c5087: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5088: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c508e: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 005c5091: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5096: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005c5099: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c509b: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5c509eu); call_ind(t); }
    /* 005c509e: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c50a4: cmp dword ptr [ecx + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c50ab: jle 0x5c50e3 */ if ((fZ||fS!=fO)) goto L_005c50e3;
L_005c50ad:; BB(0x005c50ad);
    /* 005c50ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c50af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c50b1: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c50b7: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005c50ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c50bb: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c50c1: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005c50c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c50c5: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c50ca: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 005c50d0: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c50d6: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 005c50dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c50de: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5c50e1u); call_ind(t); }
    /* 005c50e1: jmp 0x5c5106 */ goto L_005c5106;
L_005c50e3:; BB(0x005c50e3);
    /* 005c50e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c50e5: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c50ea: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005c50ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c50ee: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c50f4: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005c50f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c50f8: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c50fe: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005c5101: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c5106u); f_004216dd();
L_005c5106:; BB(0x005c5106);
    /* 005c5106: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5108: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5109: ret  */ FN_RET(0x005c5008); r_esp += 4; return;
}

void f_005c510a(void) /* FUN_005c510a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c510a);
    /* 005c510a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c510b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c510d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c510e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c5111: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5114: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c5119u); f_005d5d20();
    /* 005c5119: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c511c: mov dword ptr [eax], 0x63a83c */ W32((u32)(r_eax), 0x63a83cu);
    /* 005c5122: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5124: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5127: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c512cu); f_005d6b4e();
    /* 005c512c: push 0x698368 */ { u32 v = 0x698368u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5131: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5134: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c5139u); f_005d67b1();
    /* 005c5139: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c513b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c513d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c513f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5142: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c5147u); f_005d69c8();
    /* 005c5147: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c514c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c514f: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c5154u); f_005d6a7e();
    /* 005c5154: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c5159: push 0xbe */ { u32 v = 0xbeu; r_esp -= 4; W32(r_esp, v); }
    /* 005c515e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5161: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c5166u); f_005d6b88();
    /* 005c5166: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5168: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c516a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c516d: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c5172u); f_005d5e59();
    /* 005c5172: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5175: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c517au); f_005d6d06();
    /* 005c517a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c517d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c517f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5180: ret  */ FN_RET(0x005c510a); r_esp += 4; return;
}

void f_005c5181(void) /* FUN_005c5181 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c5181);
    /* 005c5181: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5182: mov ebp, esp */ r_ebp = r_esp;
    /* 005c5184: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5187: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c518a: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c518f: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c5192: sub ecx, 0x2710 */ {  u32 a = r_ecx; u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5198: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c519e: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 005c51a1: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c51a6: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c51aa: jge 0x5c51b9 */ if ((fS==fO)) goto L_005c51b9;
L_005c51ac:; BB(0x005c51ac);
    /* 005c51ac: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c51b2: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_005c51b9:; BB(0x005c51b9);
    /* 005c51b9: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c51bf: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 005c51c6: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c51cb: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c51ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c51cf: push 0x698374 */ { u32 v = 0x698374u; r_esp -= 4; W32(r_esp, v); }
    /* 005c51d4: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005c51d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c51d8: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c51ddu); f_00624050();
    /* 005c51dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c51e0: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c51e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c51e4: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c51ea: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005c51ed: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c51f3: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c51f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c51f8: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c51fbu); call_ind(t); }
    /* 005c51fb: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5200: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005c5203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5204: push 0x698378 */ { u32 v = 0x698378u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5209: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005c520c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c520d: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c5212u); f_00624050();
    /* 005c5212: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5215: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c5218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5219: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c521f: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005c5222: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5228: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c522b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c522d: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c5230u); call_ind(t); }
    /* 005c5230: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5235: cmp dword ptr [eax + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c523c: jle 0x5c5273 */ if ((fZ||fS!=fO)) goto L_005c5273;
L_005c523e:; BB(0x005c523e);
    /* 005c523e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5240: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5242: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5248: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c524b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c524c: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5251: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c5254: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5255: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c525b: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 005c5261: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5266: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 005c526c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c526e: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5c5271u); call_ind(t); }
    /* 005c5271: jmp 0x5c5296 */ goto L_005c5296;
L_005c5273:; BB(0x005c5273);
    /* 005c5273: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5275: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c527b: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c527e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c527f: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5284: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c5287: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5288: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c528e: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c5291: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c5296u); f_004216dd();
L_005c5296:; BB(0x005c5296);
    /* 005c5296: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5298: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5299: ret  */ FN_RET(0x005c5181); r_esp += 4; return;
}

void f_005c529a(void) /* FUN_005c529a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c529a);
    /* 005c529a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c529b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c529d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c529e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c52a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c52a4: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c52a9u); f_005d5d20();
    /* 005c52a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c52ac: mov dword ptr [eax], 0x63a8ac */ W32((u32)(r_eax), 0x63a8acu);
    /* 005c52b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c52b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c52b7: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c52bcu); f_005d6b4e();
    /* 005c52bc: push 0x69837c */ { u32 v = 0x69837cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c52c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c52c4: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c52c9u); f_005d67b1();
    /* 005c52c9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c52cb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c52cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c52cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c52d2: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c52d7u); f_005d69c8();
    /* 005c52d7: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c52dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c52df: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c52e4u); f_005d6a7e();
    /* 005c52e4: push 0x177 */ { u32 v = 0x177u; r_esp -= 4; W32(r_esp, v); }
    /* 005c52e9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c52eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c52ee: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c52f3u); f_005d6b88();
    /* 005c52f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c52f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c52f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c52fa: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c52ffu); f_005d5e59();
    /* 005c52ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5302: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c5307u); f_005d6d06();
    /* 005c5307: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c530a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c530c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c530d: ret  */ FN_RET(0x005c529a); r_esp += 4; return;
}

void f_005c530e(void) /* FUN_005c530e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c530e);
    /* 005c530e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c530f: mov ebp, esp */ r_ebp = r_esp;
    /* 005c5311: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5314: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c5317: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c531c: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c531f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5322: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5328: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 005c532b: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5330: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 005c5337: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c533d: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005c5340: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5341: push 0x698380 */ { u32 v = 0x698380u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5346: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c5349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c534a: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c534fu); f_00624050();
    /* 005c534f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5352: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005c5355: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5356: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c535c: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005c535f: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5364: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005c5367: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5369: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5c536cu); call_ind(t); }
    /* 005c536c: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5372: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c5375: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5376: push 0x698384 */ { u32 v = 0x698384u; r_esp -= 4; W32(r_esp, v); }
    /* 005c537b: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c537e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c537f: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c5384u); f_00624050();
    /* 005c5384: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5387: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005c538a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c538b: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5391: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 005c5394: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5399: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005c539c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c539e: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5c53a1u); call_ind(t); }
    /* 005c53a1: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c53a7: cmp dword ptr [ecx + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c53ae: jle 0x5c53e6 */ if ((fZ||fS!=fO)) goto L_005c53e6;
L_005c53b0:; BB(0x005c53b0);
    /* 005c53b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c53b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c53b4: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c53ba: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005c53bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c53be: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c53c4: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005c53c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c53c8: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c53cd: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 005c53d3: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c53d9: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 005c53df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c53e1: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5c53e4u); call_ind(t); }
    /* 005c53e4: jmp 0x5c5409 */ goto L_005c5409;
L_005c53e6:; BB(0x005c53e6);
    /* 005c53e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c53e8: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c53ed: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005c53f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c53f1: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c53f7: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005c53fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c53fb: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5401: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005c5404: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c5409u); f_004216dd();
L_005c5409:; BB(0x005c5409);
    /* 005c5409: mov esp, ebp */ r_esp = r_ebp;
    /* 005c540b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c540c: ret  */ FN_RET(0x005c530e); r_esp += 4; return;
}

void f_005c540d(void) /* FUN_005c540d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c540d);
    /* 005c540d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c540e: mov ebp, esp */ r_ebp = r_esp;
    /* 005c5410: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5411: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c5414: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5417: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c541cu); f_005d5d20();
    /* 005c541c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c541f: mov dword ptr [eax], 0x63a91c */ W32((u32)(r_eax), 0x63a91cu);
    /* 005c5425: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c542a: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c542fu); f_005d6b4e();
    /* 005c542f: push 0x698388 */ { u32 v = 0x698388u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5434: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5437: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c543cu); f_005d67b1();
    /* 005c543c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c543e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5440: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5442: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5445: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c544au); f_005d69c8();
    /* 005c544a: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c544f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5452: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c5457u); f_005d6a7e();
    /* 005c5457: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005c545c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c545e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5461: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c5466u); f_005d6b88();
    /* 005c5466: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5468: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c546a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c546d: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c5472u); f_005d5e59();
    /* 005c5472: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5475: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c547au); f_005d6d06();
    /* 005c547a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c547d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c547f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5480: ret  */ FN_RET(0x005c540d); r_esp += 4; return;
}

void f_005c5481(void) /* FUN_005c5481 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c5481);
    /* 005c5481: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5482: mov ebp, esp */ r_ebp = r_esp;
    /* 005c5484: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5487: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c548a: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c548f: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c5492: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5495: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c549b: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 005c549e: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c54a3: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c54a7: jge 0x5c54b6 */ if ((fS==fO)) goto L_005c54b6;
L_005c54a9:; BB(0x005c54a9);
    /* 005c54a9: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c54af: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_005c54b6:; BB(0x005c54b6);
    /* 005c54b6: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c54bc: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 005c54c3: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c54c8: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c54cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c54cc: push 0x69838c */ { u32 v = 0x69838cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c54d1: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005c54d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c54d5: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c54dau); f_00624050();
    /* 005c54da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c54dd: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c54e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c54e1: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c54e7: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005c54ea: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c54f0: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c54f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c54f5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c54f8u); call_ind(t); }
    /* 005c54f8: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c54fd: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005c5500: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5501: push 0x698390 */ { u32 v = 0x698390u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5506: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005c5509: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c550a: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c550fu); f_00624050();
    /* 005c550f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5512: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c5515: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5516: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c551c: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005c551f: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5525: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c5528: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c552a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c552du); call_ind(t); }
    /* 005c552d: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5532: cmp dword ptr [eax + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5539: jle 0x5c5570 */ if ((fZ||fS!=fO)) goto L_005c5570;
L_005c553b:; BB(0x005c553b);
    /* 005c553b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c553d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c553f: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5545: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c5548: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5549: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c554e: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c5551: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5552: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5558: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 005c555e: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5563: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 005c5569: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c556b: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5c556eu); call_ind(t); }
    /* 005c556e: jmp 0x5c5593 */ goto L_005c5593;
L_005c5570:; BB(0x005c5570);
    /* 005c5570: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5572: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5578: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c557b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c557c: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5581: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c5584: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5585: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c558b: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c558e: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c5593u); f_004216dd();
L_005c5593:; BB(0x005c5593);
    /* 005c5593: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5596: ret  */ FN_RET(0x005c5481); r_esp += 4; return;
}

void f_005c5597(void) /* FUN_005c5597 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c5597);
    /* 005c5597: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5598: mov ebp, esp */ r_ebp = r_esp;
    /* 005c559a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c559b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c559e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c55a1: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c55a6u); f_005d5d20();
    /* 005c55a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c55a9: mov dword ptr [eax], 0x63a98c */ W32((u32)(r_eax), 0x63a98cu);
    /* 005c55af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c55b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c55b4: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c55b9u); f_005d6b4e();
    /* 005c55b9: push 0x698394 */ { u32 v = 0x698394u; r_esp -= 4; W32(r_esp, v); }
    /* 005c55be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c55c1: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c55c6u); f_005d67b1();
    /* 005c55c6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c55c8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c55ca: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c55cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c55cf: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c55d4u); f_005d69c8();
    /* 005c55d4: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c55d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c55dc: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c55e1u); f_005d6a7e();
    /* 005c55e1: push 0x15e */ { u32 v = 0x15eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c55e6: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c55e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c55eb: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c55f0u); f_005d6b88();
    /* 005c55f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c55f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c55f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c55f7: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c55fcu); f_005d5e59();
    /* 005c55fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c55ff: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c5604u); f_005d6d06();
    /* 005c5604: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5607: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5609: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c560a: ret  */ FN_RET(0x005c5597); r_esp += 4; return;
}

void f_005c560b(void) /* FUN_005c560b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c560b);
    /* 005c560b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c560c: mov ebp, esp */ r_ebp = r_esp;
    /* 005c560e: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5611: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005c5614: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5619: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c561c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c561d: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5623: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c5626: call 0x421949 */ r_esp -= 4; W32(r_esp, 0x5c562bu); f_00421949();
    /* 005c562b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c562e: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5633: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005c5636: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5639: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c563c: jle 0x5c56f4 */ if ((fZ||fS!=fO)) goto L_005c56f4;
L_005c5642:; BB(0x005c5642);
    /* 005c5642: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5648: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005c564b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c564e: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5654: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 005c5657: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c565d: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005c5660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5661: push 0x69839c */ { u32 v = 0x69839cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c5666: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005c5669: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c566a: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c566fu); f_00624050();
    /* 005c566f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5672: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 005c5675: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5676: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c567b: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005c567e: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5684: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c5687: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c5689: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c568cu); call_ind(t); }
    /* 005c568c: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5691: cmp dword ptr [eax + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5698: jle 0x5c56cf */ if ((fZ||fS!=fO)) goto L_005c56cf;
L_005c569a:; BB(0x005c569a);
    /* 005c569a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c569c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c569e: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c56a4: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c56a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c56a8: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c56ad: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c56b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c56b1: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c56b7: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 005c56bd: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c56c2: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 005c56c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c56ca: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5c56cdu); call_ind(t); }
    /* 005c56cd: jmp 0x5c56f2 */ goto L_005c56f2;
L_005c56cf:; BB(0x005c56cf);
    /* 005c56cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c56d1: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c56d7: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c56da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c56db: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c56e0: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c56e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c56e4: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c56ea: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c56ed: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c56f2u); f_004216dd();
L_005c56f2:; BB(0x005c56f2);
    /* 005c56f2: jmp 0x5c5736 */ goto L_005c5736;
L_005c56f4:; BB(0x005c56f4);
    /* 005c56f4: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c56f9: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005c56fc: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5702: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005c5705: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c5707: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5c570au); call_ind(t); }
    /* 005c570a: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c570f: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005c5712: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5718: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005c571b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c571d: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5c5720u); call_ind(t); }
    /* 005c5720: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5725: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005c5728: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c572e: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005c5731: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c5733: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5c5736u); call_ind(t); }
L_005c5736:; BB(0x005c5736);
    /* 005c5736: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5738: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5739: ret  */ FN_RET(0x005c560b); r_esp += 4; return;
}

void f_005c573a(void) /* FUN_005c573a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c573a);
    /* 005c573a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c573b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c573d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c573e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c5741: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5744: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c5749u); f_005d5d20();
    /* 005c5749: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c574c: mov dword ptr [eax], 0x63a9fc */ W32((u32)(r_eax), 0x63a9fcu);
    /* 005c5752: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5754: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5757: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c575cu); f_005d6b4e();
    /* 005c575c: push 0x6983a0 */ { u32 v = 0x6983a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5761: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5764: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c5769u); f_005d67b1();
    /* 005c5769: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c576b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c576d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c576f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5772: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c5777u); f_005d69c8();
    /* 005c5777: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c577c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c577f: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c5784u); f_005d6a7e();
    /* 005c5784: push 0x177 */ { u32 v = 0x177u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5789: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c578b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c578e: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c5793u); f_005d6b88();
    /* 005c5793: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5795: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5798: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x5c579du); f_005d65d6();
    /* 005c579d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c579f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c57a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c57a4: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c57a9u); f_005d5e59();
    /* 005c57a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c57ac: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c57b1u); f_005d6d06();
    /* 005c57b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c57b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005c57b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c57b7: ret  */ FN_RET(0x005c573a); r_esp += 4; return;
}

void f_005c57b8(void) /* FUN_005c57b8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c57b8);
    /* 005c57b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c57b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005c57bb: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c57be: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005c57c1: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c57c6: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c57c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c57ca: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c57d0: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c57d3: call 0x421949 */ r_esp -= 4; W32(r_esp, 0x5c57d8u); f_00421949();
    /* 005c57d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c57db: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c57e0: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005c57e3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c57e6: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c57e9: jle 0x5c58a1 */ if ((fZ||fS!=fO)) goto L_005c58a1;
L_005c57ef:; BB(0x005c57ef);
    /* 005c57ef: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c57f5: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005c57f8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c57fb: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5801: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 005c5804: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c580a: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005c580d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c580e: push 0x6983a4 */ { u32 v = 0x6983a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5813: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005c5816: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5817: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c581cu); f_00624050();
    /* 005c581c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c581f: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 005c5822: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5823: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5828: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005c582b: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5831: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c5834: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c5836: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c5839u); call_ind(t); }
    /* 005c5839: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c583e: cmp dword ptr [eax + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5845: jle 0x5c587c */ if ((fZ||fS!=fO)) goto L_005c587c;
L_005c5847:; BB(0x005c5847);
    /* 005c5847: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5849: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c584b: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5851: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c5854: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5855: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c585a: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c585d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c585e: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5864: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 005c586a: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c586f: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 005c5875: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5877: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5c587au); call_ind(t); }
    /* 005c587a: jmp 0x5c589f */ goto L_005c589f;
L_005c587c:; BB(0x005c587c);
    /* 005c587c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c587e: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5884: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c5887: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5888: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c588d: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c5890: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5891: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5897: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c589a: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c589fu); f_004216dd();
L_005c589f:; BB(0x005c589f);
    /* 005c589f: jmp 0x5c58b7 */ goto L_005c58b7;
L_005c58a1:; BB(0x005c58a1);
    /* 005c58a1: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c58a6: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005c58a9: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c58af: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005c58b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c58b4: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5c58b7u); call_ind(t); }
L_005c58b7:; BB(0x005c58b7);
    /* 005c58b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005c58b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c58ba: ret  */ FN_RET(0x005c57b8); r_esp += 4; return;
}

void f_005c58bb(void) /* FUN_005c58bb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c58bb);
    /* 005c58bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c58bc: mov ebp, esp */ r_ebp = r_esp;
    /* 005c58be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c58bf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c58c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c58c5: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c58cau); f_005d5d20();
    /* 005c58ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c58cd: mov dword ptr [eax], 0x63aa6c */ W32((u32)(r_eax), 0x63aa6cu);
    /* 005c58d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c58d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c58d8: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c58ddu); f_005d6b4e();
    /* 005c58dd: push 0x6983a8 */ { u32 v = 0x6983a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c58e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c58e5: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c58eau); f_005d67b1();
    /* 005c58ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c58ec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c58ee: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c58f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c58f3: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c58f8u); f_005d69c8();
    /* 005c58f8: push 0x61b2 */ { u32 v = 0x61b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c58fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5900: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c5905u); f_005d6a7e();
    /* 005c5905: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005c590a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c590c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c590f: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c5914u); f_005d6b88();
    /* 005c5914: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5916: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5918: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c591b: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c5920u); f_005d5e59();
    /* 005c5920: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5923: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c5928u); f_005d6d06();
    /* 005c5928: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c592b: mov esp, ebp */ r_esp = r_ebp;
    /* 005c592d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c592e: ret  */ FN_RET(0x005c58bb); r_esp += 4; return;
}

void f_005c592f(void) /* FUN_005c592f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c592f);
    /* 005c592f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5930: mov ebp, esp */ r_ebp = r_esp;
    /* 005c5932: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5935: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c5938: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c593d: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5941: je 0x5c598c */ if (fZ) goto L_005c598c;
L_005c5943:; BB(0x005c5943);
    /* 005c5943: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5949: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c594c: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c594f: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5954: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 005c5957: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c595d: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c5960: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5961: push 0x6983ac */ { u32 v = 0x6983acu; r_esp -= 4; W32(r_esp, v); }
    /* 005c5966: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005c5969: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c596a: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c596fu); f_00624050();
    /* 005c596f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5972: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005c5975: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5976: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c597c: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 005c597f: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5984: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005c5987: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5989: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5c598cu); call_ind(t); }
L_005c598c:; BB(0x005c598c);
    /* 005c598c: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5992: cmp dword ptr [ecx + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5999: jle 0x5c59d1 */ if ((fZ||fS!=fO)) goto L_005c59d1;
L_005c599b:; BB(0x005c599b);
    /* 005c599b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c599d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c599f: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c59a5: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 005c59a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c59a9: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c59af: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 005c59b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c59b3: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c59b8: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 005c59be: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c59c4: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 005c59ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c59cc: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5c59cfu); call_ind(t); }
    /* 005c59cf: jmp 0x5c59f4 */ goto L_005c59f4;
L_005c59d1:; BB(0x005c59d1);
    /* 005c59d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c59d3: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c59d8: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 005c59db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c59dc: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c59e2: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005c59e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c59e6: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c59ec: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005c59ef: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c59f4u); f_004216dd();
L_005c59f4:; BB(0x005c59f4);
    /* 005c59f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005c59f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c59f7: ret  */ FN_RET(0x005c592f); r_esp += 4; return;
}

void f_005c59f8(void) /* FUN_005c59f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c59f8);
    /* 005c59f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c59f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005c59fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c59fc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c59ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a02: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5c5a07u); f_005d5d20();
    /* 005c5a07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a0a: mov dword ptr [eax], 0x63aadc */ W32((u32)(r_eax), 0x63aadcu);
    /* 005c5a10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a15: call 0x5d6b4e */ r_esp -= 4; W32(r_esp, 0x5c5a1au); f_005d6b4e();
    /* 005c5a1a: push 0x6983b0 */ { u32 v = 0x6983b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a22: call 0x5d67b1 */ r_esp -= 4; W32(r_esp, 0x5c5a27u); f_005d67b1();
    /* 005c5a27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a29: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a2b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a30: call 0x5d69c8 */ r_esp -= 4; W32(r_esp, 0x5c5a35u); f_005d69c8();
    /* 005c5a35: push 0x61b1 */ { u32 v = 0x61b1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a3d: call 0x5d6a7e */ r_esp -= 4; W32(r_esp, 0x5c5a42u); f_005d6a7e();
    /* 005c5a42: push 0x177 */ { u32 v = 0x177u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a47: push 0xbe */ { u32 v = 0xbeu; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a4c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a4f: call 0x5d6b88 */ r_esp -= 4; W32(r_esp, 0x5c5a54u); f_005d6b88();
    /* 005c5a54: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a59: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x5c5a5eu); f_005d65d6();
    /* 005c5a5e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a63: call 0x5d65f9 */ r_esp -= 4; W32(r_esp, 0x5c5a68u); f_005d65f9();
    /* 005c5a68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a6f: call 0x5d5e59 */ r_esp -= 4; W32(r_esp, 0x5c5a74u); f_005d5e59();
    /* 005c5a74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a77: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5c5a7cu); f_005d6d06();
    /* 005c5a7c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5a7f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5a82: ret  */ FN_RET(0x005c59f8); r_esp += 4; return;
}

void f_005c5a83(void) /* FUN_005c5a83 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c5a83);
    /* 005c5a83: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a84: mov ebp, esp */ r_ebp = r_esp;
    /* 005c5a86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a87: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c5a8a: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5a8f: cmp dword ptr [eax + 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5a96: jle 0x5c5acd */ if ((fZ||fS!=fO)) goto L_005c5acd;
L_005c5a98:; BB(0x005c5a98);
    /* 005c5a98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a9c: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5aa2: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c5aa5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5aa6: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5aab: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c5aae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5aaf: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5ab5: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 005c5abb: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5ac0: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 005c5ac6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5ac8: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5c5acbu); call_ind(t); }
    /* 005c5acb: jmp 0x5c5af0 */ goto L_005c5af0;
L_005c5acd:; BB(0x005c5acd);
    /* 005c5acd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5acf: mov ecx, dword ptr [0x6fc094] */ r_ecx = R32((u32)(0x6fc094u));
    /* 005c5ad5: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 005c5ad8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ad9: mov eax, dword ptr [0x6fc094] */ r_eax = R32((u32)(0x6fc094u));
    /* 005c5ade: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 005c5ae1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ae2: mov edx, dword ptr [0x6fc094] */ r_edx = R32((u32)(0x6fc094u));
    /* 005c5ae8: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005c5aeb: call 0x4216dd */ r_esp -= 4; W32(r_esp, 0x5c5af0u); f_004216dd();
L_005c5af0:; BB(0x005c5af0);
    /* 005c5af0: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5af2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5af3: ret  */ FN_RET(0x005c5a83); r_esp += 4; return;
}

void f_005c5af4(void) /* FUN_005c5af4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c5af4);
    /* 005c5af4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5af5: mov ebp, esp */ r_ebp = r_esp;
    /* 005c5af7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5af8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c5afb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5afe: call 0x423a50 */ r_esp -= 4; W32(r_esp, 0x5c5b03u); f_00423a50();
    /* 005c5b03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b06: mov dword ptr [eax], 0x63ab4c */ W32((u32)(r_eax), 0x63ab4cu);
    /* 005c5b0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b0f: mov dword ptr [0x6fc094], ecx */ W32((u32)(0x6fc094u), r_ecx);
    /* 005c5b15: push 0x186a3 */ { u32 v = 0x186a3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5b1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b1d: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c5b22u); f_005e5ec3();
    /* 005c5b22: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b25: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 005c5b2c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b2f: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 005c5b36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b39: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 005c5b40: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b43: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 005c5b4a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b4d: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
    /* 005c5b54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b57: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 005c5b5e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b61: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 005c5b68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b6b: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 005c5b72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b75: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 005c5b7c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b7f: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
    /* 005c5b86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b89: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 005c5b90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b93: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 005c5b9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5b9d: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
    /* 005c5ba7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5baa: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 005c5bb4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5bb7: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 005c5bc1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5bc4: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 005c5bce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5bd1: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 005c5bdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5bde: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 005c5be8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5beb: mov dword ptr [edx + 0x98], 0 */ W32((u32)(r_edx+0x98u), 0x0u);
    /* 005c5bf5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5bf8: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
    /* 005c5c02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5c05: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5c07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5c08: ret  */ FN_RET(0x005c5af4); r_esp += 4; return;
}

void f_005c5c09(void) /* FUN_005c5c09 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c5c09);
    /* 005c5c09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5c0a: mov ebp, esp */ r_ebp = r_esp;
    /* 005c5c0c: sub esp, 0xdc */ {  u32 a = r_esp; u32 b = 0xdcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5c12: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005c5c18: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5c1e: mov dword ptr [eax], 0x63ab4c */ W32((u32)(r_eax), 0x63ab4cu);
    /* 005c5c24: mov dword ptr [0x6fc094], 0 */ W32((u32)(0x6fc094u), 0x0u);
    /* 005c5c2e: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5c34: cmp dword ptr [ecx + 0x50], 0 */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5c38: je 0x5c5c70 */ if (fZ) goto L_005c5c70;
L_005c5c3a:; BB(0x005c5c3a);
    /* 005c5c3a: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5c40: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c5c43: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c5c46: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c5c49: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c5c4c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5c50: je 0x5c5c66 */ if (fZ) goto L_005c5c66;
L_005c5c52:; BB(0x005c5c52);
    /* 005c5c52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5c54: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5c57: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5c59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5c5c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5c5eu); call_ind(t); }
    /* 005c5c5e: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005c5c64: jmp 0x5c5c70 */ goto L_005c5c70;
L_005c5c66:; BB(0x005c5c66);
    /* 005c5c66: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005c5c70:; BB(0x005c5c70);
    /* 005c5c70: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5c76: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5c7a: je 0x5c5cb2 */ if (fZ) goto L_005c5cb2;
L_005c5c7c:; BB(0x005c5c7c);
    /* 005c5c7c: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5c82: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005c5c85: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c5c88: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c5c8b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c5c8e: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5c92: je 0x5c5ca8 */ if (fZ) goto L_005c5ca8;
L_005c5c94:; BB(0x005c5c94);
    /* 005c5c94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5c96: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c5c99: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5c9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c5c9e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5ca0u); call_ind(t); }
    /* 005c5ca0: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005c5ca6: jmp 0x5c5cb2 */ goto L_005c5cb2;
L_005c5ca8:; BB(0x005c5ca8);
    /* 005c5ca8: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_005c5cb2:; BB(0x005c5cb2);
    /* 005c5cb2: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5cb8: cmp dword ptr [ecx + 0x58], 0 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5cbc: je 0x5c5cf4 */ if (fZ) goto L_005c5cf4;
L_005c5cbe:; BB(0x005c5cbe);
    /* 005c5cbe: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5cc4: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005c5cc7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c5cca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c5ccd: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c5cd0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5cd4: je 0x5c5cea */ if (fZ) goto L_005c5cea;
L_005c5cd6:; BB(0x005c5cd6);
    /* 005c5cd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5cd8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c5cdb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5cdd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c5ce0: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5ce2u); call_ind(t); }
    /* 005c5ce2: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005c5ce8: jmp 0x5c5cf4 */ goto L_005c5cf4;
L_005c5cea:; BB(0x005c5cea);
    /* 005c5cea: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_005c5cf4:; BB(0x005c5cf4);
    /* 005c5cf4: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5cfa: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5cfe: je 0x5c5d36 */ if (fZ) goto L_005c5d36;
L_005c5d00:; BB(0x005c5d00);
    /* 005c5d00: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5d06: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005c5d09: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c5d0c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c5d0f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c5d12: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5d16: je 0x5c5d2c */ if (fZ) goto L_005c5d2c;
L_005c5d18:; BB(0x005c5d18);
    /* 005c5d18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5d1a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c5d1d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5d1f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c5d22: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5d24u); call_ind(t); }
    /* 005c5d24: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005c5d2a: jmp 0x5c5d36 */ goto L_005c5d36;
L_005c5d2c:; BB(0x005c5d2c);
    /* 005c5d2c: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_005c5d36:; BB(0x005c5d36);
    /* 005c5d36: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5d3c: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5d40: je 0x5c5d78 */ if (fZ) goto L_005c5d78;
L_005c5d42:; BB(0x005c5d42);
    /* 005c5d42: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5d48: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005c5d4b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c5d4e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c5d51: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c5d54: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5d58: je 0x5c5d6e */ if (fZ) goto L_005c5d6e;
L_005c5d5a:; BB(0x005c5d5a);
    /* 005c5d5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5d5c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c5d5f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5d61: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c5d64: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5d66u); call_ind(t); }
    /* 005c5d66: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005c5d6c: jmp 0x5c5d78 */ goto L_005c5d78;
L_005c5d6e:; BB(0x005c5d6e);
    /* 005c5d6e: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_005c5d78:; BB(0x005c5d78);
    /* 005c5d78: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5d7e: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5d82: je 0x5c5dba */ if (fZ) goto L_005c5dba;
L_005c5d84:; BB(0x005c5d84);
    /* 005c5d84: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5d8a: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005c5d8d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c5d90: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c5d93: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005c5d96: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5d9a: je 0x5c5db0 */ if (fZ) goto L_005c5db0;
L_005c5d9c:; BB(0x005c5d9c);
    /* 005c5d9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5d9e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c5da1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5da3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c5da6: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5da8u); call_ind(t); }
    /* 005c5da8: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005c5dae: jmp 0x5c5dba */ goto L_005c5dba;
L_005c5db0:; BB(0x005c5db0);
    /* 005c5db0: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_005c5dba:; BB(0x005c5dba);
    /* 005c5dba: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5dc0: cmp dword ptr [ecx + 0x68], 0 */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5dc4: je 0x5c5dfc */ if (fZ) goto L_005c5dfc;
L_005c5dc6:; BB(0x005c5dc6);
    /* 005c5dc6: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5dcc: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005c5dcf: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c5dd2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c5dd5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005c5dd8: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5ddc: je 0x5c5df2 */ if (fZ) goto L_005c5df2;
L_005c5dde:; BB(0x005c5dde);
    /* 005c5dde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5de0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c5de3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5de5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c5de8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5deau); call_ind(t); }
    /* 005c5dea: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 005c5df0: jmp 0x5c5dfc */ goto L_005c5dfc;
L_005c5df2:; BB(0x005c5df2);
    /* 005c5df2: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_005c5dfc:; BB(0x005c5dfc);
    /* 005c5dfc: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5e02: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e06: je 0x5c5e3e */ if (fZ) goto L_005c5e3e;
L_005c5e08:; BB(0x005c5e08);
    /* 005c5e08: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5e0e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005c5e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c5e14: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c5e17: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005c5e1a: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e1e: je 0x5c5e34 */ if (fZ) goto L_005c5e34;
L_005c5e20:; BB(0x005c5e20);
    /* 005c5e20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5e22: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c5e25: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5e27: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c5e2a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5e2cu); call_ind(t); }
    /* 005c5e2c: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005c5e32: jmp 0x5c5e3e */ goto L_005c5e3e;
L_005c5e34:; BB(0x005c5e34);
    /* 005c5e34: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_005c5e3e:; BB(0x005c5e3e);
    /* 005c5e3e: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5e44: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e48: je 0x5c5e80 */ if (fZ) goto L_005c5e80;
L_005c5e4a:; BB(0x005c5e4a);
    /* 005c5e4a: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5e50: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c5e53: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005c5e56: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c5e59: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c5e5c: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e60: je 0x5c5e76 */ if (fZ) goto L_005c5e76;
L_005c5e62:; BB(0x005c5e62);
    /* 005c5e62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5e64: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c5e67: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5e69: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c5e6c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5e6eu); call_ind(t); }
    /* 005c5e6e: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005c5e74: jmp 0x5c5e80 */ goto L_005c5e80;
L_005c5e76:; BB(0x005c5e76);
    /* 005c5e76: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_005c5e80:; BB(0x005c5e80);
    /* 005c5e80: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5e86: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e8a: je 0x5c5ec2 */ if (fZ) goto L_005c5ec2;
L_005c5e8c:; BB(0x005c5e8c);
    /* 005c5e8c: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5e92: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c5e95: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005c5e98: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c5e9b: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005c5e9e: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5ea2: je 0x5c5eb8 */ if (fZ) goto L_005c5eb8;
L_005c5ea4:; BB(0x005c5ea4);
    /* 005c5ea4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ea6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c5ea9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5eab: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c5eae: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5eb0u); call_ind(t); }
    /* 005c5eb0: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005c5eb6: jmp 0x5c5ec2 */ goto L_005c5ec2;
L_005c5eb8:; BB(0x005c5eb8);
    /* 005c5eb8: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_005c5ec2:; BB(0x005c5ec2);
    /* 005c5ec2: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5ec8: cmp dword ptr [ecx + 0x80], 0 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5ecf: je 0x5c5f0a */ if (fZ) goto L_005c5f0a;
L_005c5ed1:; BB(0x005c5ed1);
    /* 005c5ed1: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5ed7: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005c5edd: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c5ee0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c5ee3: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005c5ee6: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5eea: je 0x5c5f00 */ if (fZ) goto L_005c5f00;
L_005c5eec:; BB(0x005c5eec);
    /* 005c5eec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5eee: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c5ef1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5ef3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c5ef6: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5ef8u); call_ind(t); }
    /* 005c5ef8: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005c5efe: jmp 0x5c5f0a */ goto L_005c5f0a;
L_005c5f00:; BB(0x005c5f00);
    /* 005c5f00: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_005c5f0a:; BB(0x005c5f0a);
    /* 005c5f0a: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5f10: cmp dword ptr [ecx + 0x84], 0 */ {  u32 a = R32((u32)(r_ecx+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5f17: je 0x5c5f52 */ if (fZ) goto L_005c5f52;
L_005c5f19:; BB(0x005c5f19);
    /* 005c5f19: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5f1f: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005c5f25: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005c5f28: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c5f2b: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005c5f2e: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5f32: je 0x5c5f48 */ if (fZ) goto L_005c5f48;
L_005c5f34:; BB(0x005c5f34);
    /* 005c5f34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f36: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c5f39: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5f3b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c5f3e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5f40u); call_ind(t); }
    /* 005c5f40: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005c5f46: jmp 0x5c5f52 */ goto L_005c5f52;
L_005c5f48:; BB(0x005c5f48);
    /* 005c5f48: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_005c5f52:; BB(0x005c5f52);
    /* 005c5f52: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5f58: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5f5f: je 0x5c5f9a */ if (fZ) goto L_005c5f9a;
L_005c5f61:; BB(0x005c5f61);
    /* 005c5f61: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5f67: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005c5f6d: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005c5f70: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005c5f73: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005c5f76: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5f7a: je 0x5c5f90 */ if (fZ) goto L_005c5f90;
L_005c5f7c:; BB(0x005c5f7c);
    /* 005c5f7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f7e: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c5f81: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5f83: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c5f86: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5f88u); call_ind(t); }
    /* 005c5f88: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005c5f8e: jmp 0x5c5f9a */ goto L_005c5f9a;
L_005c5f90:; BB(0x005c5f90);
    /* 005c5f90: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_005c5f9a:; BB(0x005c5f9a);
    /* 005c5f9a: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5fa0: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5fa7: je 0x5c5fe2 */ if (fZ) goto L_005c5fe2;
L_005c5fa9:; BB(0x005c5fa9);
    /* 005c5fa9: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5faf: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005c5fb5: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c5fb8: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005c5fbb: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005c5fbe: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5fc2: je 0x5c5fd8 */ if (fZ) goto L_005c5fd8;
L_005c5fc4:; BB(0x005c5fc4);
    /* 005c5fc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5fc6: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c5fc9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5fcb: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c5fce: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c5fd0u); call_ind(t); }
    /* 005c5fd0: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005c5fd6: jmp 0x5c5fe2 */ goto L_005c5fe2;
L_005c5fd8:; BB(0x005c5fd8);
    /* 005c5fd8: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_005c5fe2:; BB(0x005c5fe2);
    /* 005c5fe2: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5fe8: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5fef: je 0x5c602a */ if (fZ) goto L_005c602a;
L_005c5ff1:; BB(0x005c5ff1);
    /* 005c5ff1: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5ff7: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005c5ffd: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005c6000: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c6003: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005c6006: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c600a: je 0x5c6020 */ if (fZ) goto L_005c6020;
L_005c600c:; BB(0x005c600c);
    /* 005c600c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c600e: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c6011: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c6013: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c6016: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c6018u); call_ind(t); }
    /* 005c6018: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005c601e: jmp 0x5c602a */ goto L_005c602a;
L_005c6020:; BB(0x005c6020);
    /* 005c6020: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_005c602a:; BB(0x005c602a);
    /* 005c602a: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c6030: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6037: je 0x5c6072 */ if (fZ) goto L_005c6072;
L_005c6039:; BB(0x005c6039);
    /* 005c6039: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c603f: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 005c6045: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005c6048: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005c604b: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005c604e: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6052: je 0x5c6068 */ if (fZ) goto L_005c6068;
L_005c6054:; BB(0x005c6054);
    /* 005c6054: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6056: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005c6059: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c605b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005c605e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c6060u); call_ind(t); }
    /* 005c6060: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005c6066: jmp 0x5c6072 */ goto L_005c6072;
L_005c6068:; BB(0x005c6068);
    /* 005c6068: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_005c6072:; BB(0x005c6072);
    /* 005c6072: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c6078: cmp dword ptr [ecx + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c607f: je 0x5c60cc */ if (fZ) goto L_005c60cc;
L_005c6081:; BB(0x005c6081);
    /* 005c6081: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c6087: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005c608d: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005c6093: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005c6099: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005c609f: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c60a6: je 0x5c60c2 */ if (fZ) goto L_005c60c2;
L_005c60a8:; BB(0x005c60a8);
    /* 005c60a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c60aa: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005c60b0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c60b2: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005c60b8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c60bau); call_ind(t); }
    /* 005c60ba: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 005c60c0: jmp 0x5c60cc */ goto L_005c60cc;
L_005c60c2:; BB(0x005c60c2);
    /* 005c60c2: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_005c60cc:; BB(0x005c60cc);
    /* 005c60cc: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c60d2: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 005c60d8: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005c60de: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005c60e4: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005c60ea: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c60f1: je 0x5c610d */ if (fZ) goto L_005c610d;
L_005c60f3:; BB(0x005c60f3);
    /* 005c60f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c60f5: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005c60fb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c60fd: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005c6103: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c6105u); call_ind(t); }
    /* 005c6105: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005c610b: jmp 0x5c6117 */ goto L_005c6117;
L_005c610d:; BB(0x005c610d);
    /* 005c610d: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_005c6117:; BB(0x005c6117);
    /* 005c6117: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c611d: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
    /* 005c6127: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c612d: call 0x423b11 */ r_esp -= 4; W32(r_esp, 0x5c6132u); f_00423b11();
    /* 005c6132: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6134: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6135: ret  */ FN_RET(0x005c5c09); r_esp += 4; return;
}

void f_005c6136(void) /* FUN_005c6136 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6136);
    /* 005c6136: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6137: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6139: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c613f: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005c6142: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6145: call 0x423d27 */ r_esp -= 4; W32(r_esp, 0x5c614au); f_00423d27();
    /* 005c614a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005c614c: push 0x6983b8 */ { u32 v = 0x6983b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6151: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005c6156: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005c6159: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x5c615eu); f_0061ba62();
    /* 005c615e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c6161: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c6168: push 0x3250 */ { u32 v = 0x3250u; r_esp -= 4; W32(r_esp, v); }
    /* 005c616d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6172u); f_0048ab58();
    /* 005c6172: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6175: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c6178: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c617c: je 0x5c6199 */ if (fZ) goto L_005c6199;
L_005c617e:; BB(0x005c617e);
    /* 005c617e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6181: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6184: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6185: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6187: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005c618c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c618f: call 0x41e7f0 */ r_esp -= 4; W32(r_esp, 0x5c6194u); f_0041e7f0();
    /* 005c6194: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c6197: jmp 0x5c61a0 */ goto L_005c61a0;
L_005c6199:; BB(0x005c6199);
    /* 005c6199: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005c61a0:; BB(0x005c61a0);
    /* 005c61a0: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c61a3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c61a6: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 005c61a9: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c61ac: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005c61af: call 0x41fb49 */ r_esp -= 4; W32(r_esp, 0x5c61b4u); f_0041fb49();
    /* 005c61b4: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c61b9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c61beu); f_0048ab58();
    /* 005c61be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c61c1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c61c4: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c61c8: je 0x5c61d7 */ if (fZ) goto L_005c61d7;
L_005c61ca:; BB(0x005c61ca);
    /* 005c61ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c61cd: call 0x5c4720 */ r_esp -= 4; W32(r_esp, 0x5c61d2u); f_005c4720();
    /* 005c61d2: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005c61d5: jmp 0x5c61de */ goto L_005c61de;
L_005c61d7:; BB(0x005c61d7);
    /* 005c61d7: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005c61de:; BB(0x005c61de);
    /* 005c61de: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c61e1: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c61e4: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 005c61e7: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c61ec: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c61f1u); f_0048ab58();
    /* 005c61f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c61f4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c61f7: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c61fb: je 0x5c620a */ if (fZ) goto L_005c620a;
L_005c61fd:; BB(0x005c61fd);
    /* 005c61fd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6200: call 0x5c4859 */ r_esp -= 4; W32(r_esp, 0x5c6205u); f_005c4859();
    /* 005c6205: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005c6208: jmp 0x5c6211 */ goto L_005c6211;
L_005c620a:; BB(0x005c620a);
    /* 005c620a: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005c6211:; BB(0x005c6211);
    /* 005c6211: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6214: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c6217: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 005c621a: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c621f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6224u); f_0048ab58();
    /* 005c6224: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6227: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c622a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c622e: je 0x5c623d */ if (fZ) goto L_005c623d;
L_005c6230:; BB(0x005c6230);
    /* 005c6230: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6233: call 0x5c529a */ r_esp -= 4; W32(r_esp, 0x5c6238u); f_005c529a();
    /* 005c6238: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005c623b: jmp 0x5c6244 */ goto L_005c6244;
L_005c623d:; BB(0x005c623d);
    /* 005c623d: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005c6244:; BB(0x005c6244);
    /* 005c6244: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6247: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c624a: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 005c624d: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6252: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6257u); f_0048ab58();
    /* 005c6257: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c625a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c625d: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6261: je 0x5c6270 */ if (fZ) goto L_005c6270;
L_005c6263:; BB(0x005c6263);
    /* 005c6263: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c6266: call 0x5c540d */ r_esp -= 4; W32(r_esp, 0x5c626bu); f_005c540d();
    /* 005c626b: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005c626e: jmp 0x5c6277 */ goto L_005c6277;
L_005c6270:; BB(0x005c6270);
    /* 005c6270: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_005c6277:; BB(0x005c6277);
    /* 005c6277: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c627a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005c627d: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 005c6280: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6285: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c628au); f_0048ab58();
    /* 005c628a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c628d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c6290: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6294: je 0x5c62a3 */ if (fZ) goto L_005c62a3;
L_005c6296:; BB(0x005c6296);
    /* 005c6296: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6299: call 0x5c5597 */ r_esp -= 4; W32(r_esp, 0x5c629eu); f_005c5597();
    /* 005c629e: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005c62a1: jmp 0x5c62aa */ goto L_005c62aa;
L_005c62a3:; BB(0x005c62a3);
    /* 005c62a3: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_005c62aa:; BB(0x005c62aa);
    /* 005c62aa: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c62ad: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c62b0: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 005c62b3: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c62b8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c62bdu); f_0048ab58();
    /* 005c62bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c62c0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c62c3: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c62c7: je 0x5c62d6 */ if (fZ) goto L_005c62d6;
L_005c62c9:; BB(0x005c62c9);
    /* 005c62c9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c62cc: call 0x5c573a */ r_esp -= 4; W32(r_esp, 0x5c62d1u); f_005c573a();
    /* 005c62d1: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c62d4: jmp 0x5c62dd */ goto L_005c62dd;
L_005c62d6:; BB(0x005c62d6);
    /* 005c62d6: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_005c62dd:; BB(0x005c62dd);
    /* 005c62dd: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c62e0: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005c62e3: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 005c62e6: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c62eb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c62f0u); f_0048ab58();
    /* 005c62f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c62f3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c62f6: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c62fa: je 0x5c6309 */ if (fZ) goto L_005c6309;
L_005c62fc:; BB(0x005c62fc);
    /* 005c62fc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c62ff: call 0x5c58bb */ r_esp -= 4; W32(r_esp, 0x5c6304u); f_005c58bb();
    /* 005c6304: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005c6307: jmp 0x5c6310 */ goto L_005c6310;
L_005c6309:; BB(0x005c6309);
    /* 005c6309: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005c6310:; BB(0x005c6310);
    /* 005c6310: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6313: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c6316: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 005c6319: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005c631e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6323u); f_0048ab58();
    /* 005c6323: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6326: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c6329: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c632d: je 0x5c633c */ if (fZ) goto L_005c633c;
L_005c632f:; BB(0x005c632f);
    /* 005c632f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c6332: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5c6337u); f_005e8590();
    /* 005c6337: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005c633a: jmp 0x5c6343 */ goto L_005c6343;
L_005c633c:; BB(0x005c633c);
    /* 005c633c: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005c6343:; BB(0x005c6343);
    /* 005c6343: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6346: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c6349: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 005c634c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c634e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6351: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005c6354: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6357: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c635a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c635c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c635fu); call_ind(t); }
    /* 005c635f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6361: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6364: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005c6367: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5c636cu); f_005e87aa();
    /* 005c636c: push 0x6983c4 */ { u32 v = 0x6983c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6371: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6374: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005c6377: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c637a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c637d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c637f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c6382u); call_ind(t); }
    /* 005c6382: push 0x1a9 */ { u32 v = 0x1a9u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6387: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6389: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c638c: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005c638f: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6392: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c6395: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6397: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c639au); call_ind(t); }
    /* 005c639a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c639d: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005c63a0: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c63a3: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c63a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c63a8: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5c63abu); call_ind(t); }
    /* 005c63ab: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c63ae: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005c63b1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c63b4: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c63b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c63b9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c63bcu); call_ind(t); }
    /* 005c63bc: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005c63c1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c63c6u); f_0048ab58();
    /* 005c63c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c63c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c63cc: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c63d0: je 0x5c63df */ if (fZ) goto L_005c63df;
L_005c63d2:; BB(0x005c63d2);
    /* 005c63d2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c63d5: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5c63dau); f_005e8590();
    /* 005c63da: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005c63dd: jmp 0x5c63e6 */ goto L_005c63e6;
L_005c63df:; BB(0x005c63df);
    /* 005c63df: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_005c63e6:; BB(0x005c63e6);
    /* 005c63e6: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c63e9: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005c63ec: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
    /* 005c63ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c63f1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c63f4: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 005c63f7: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c63fa: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005c63fd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c63ff: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c6402u); call_ind(t); }
    /* 005c6402: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6404: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6407: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005c640a: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5c640fu); f_005e87aa();
    /* 005c640f: push 0x6983c8 */ { u32 v = 0x6983c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6414: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6417: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 005c641a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c641d: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005c6420: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c6422: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5c6425u); call_ind(t); }
    /* 005c6425: push 0x1a9 */ { u32 v = 0x1a9u; r_esp -= 4; W32(r_esp, v); }
    /* 005c642a: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c642c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c642f: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005c6432: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6435: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c6438: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c643a: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c643du); call_ind(t); }
    /* 005c643d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6440: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005c6443: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6446: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c6449: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c644b: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5c644eu); call_ind(t); }
    /* 005c644e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6451: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005c6454: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6457: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c645a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c645c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c645fu); call_ind(t); }
    /* 005c645f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6464: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6469u); f_0048ab58();
    /* 005c6469: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c646c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c646f: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6473: je 0x5c6482 */ if (fZ) goto L_005c6482;
L_005c6475:; BB(0x005c6475);
    /* 005c6475: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c6478: call 0x5c59f8 */ r_esp -= 4; W32(r_esp, 0x5c647du); f_005c59f8();
    /* 005c647d: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005c6480: jmp 0x5c6489 */ goto L_005c6489;
L_005c6482:; BB(0x005c6482);
    /* 005c6482: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_005c6489:; BB(0x005c6489);
    /* 005c6489: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c648c: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005c648f: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 005c6495: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c649a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c649fu); f_0048ab58();
    /* 005c649f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c64a2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c64a5: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c64a9: je 0x5c64bb */ if (fZ) goto L_005c64bb;
L_005c64ab:; BB(0x005c64ab);
    /* 005c64ab: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c64ae: call 0x5c4991 */ r_esp -= 4; W32(r_esp, 0x5c64b3u); f_005c4991();
    /* 005c64b3: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005c64b9: jmp 0x5c64c5 */ goto L_005c64c5;
L_005c64bb:; BB(0x005c64bb);
    /* 005c64bb: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_005c64c5:; BB(0x005c64c5);
    /* 005c64c5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c64c8: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005c64ce: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 005c64d4: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c64d9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c64deu); f_0048ab58();
    /* 005c64de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c64e1: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c64e4: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c64e8: je 0x5c64fa */ if (fZ) goto L_005c64fa;
L_005c64ea:; BB(0x005c64ea);
    /* 005c64ea: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c64ed: call 0x5c4b04 */ r_esp -= 4; W32(r_esp, 0x5c64f2u); f_005c4b04();
    /* 005c64f2: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005c64f8: jmp 0x5c6504 */ goto L_005c6504;
L_005c64fa:; BB(0x005c64fa);
    /* 005c64fa: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_005c6504:; BB(0x005c6504);
    /* 005c6504: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6507: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005c650d: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 005c6513: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6518: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c651du); f_0048ab58();
    /* 005c651d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6520: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c6523: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6527: je 0x5c6539 */ if (fZ) goto L_005c6539;
L_005c6529:; BB(0x005c6529);
    /* 005c6529: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c652c: call 0x5c4c8e */ r_esp -= 4; W32(r_esp, 0x5c6531u); f_005c4c8e();
    /* 005c6531: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005c6537: jmp 0x5c6543 */ goto L_005c6543;
L_005c6539:; BB(0x005c6539);
    /* 005c6539: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_005c6543:; BB(0x005c6543);
    /* 005c6543: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6546: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005c654c: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
    /* 005c6552: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6557: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c655cu); f_0048ab58();
    /* 005c655c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c655f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005c6562: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6566: je 0x5c6578 */ if (fZ) goto L_005c6578;
L_005c6568:; BB(0x005c6568);
    /* 005c6568: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c656b: call 0x5c4e04 */ r_esp -= 4; W32(r_esp, 0x5c6570u); f_005c4e04();
    /* 005c6570: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005c6576: jmp 0x5c6582 */ goto L_005c6582;
L_005c6578:; BB(0x005c6578);
    /* 005c6578: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_005c6582:; BB(0x005c6582);
    /* 005c6582: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6585: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005c658b: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 005c6591: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6596: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c659bu); f_0048ab58();
    /* 005c659b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c659e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005c65a1: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c65a5: je 0x5c65b7 */ if (fZ) goto L_005c65b7;
L_005c65a7:; BB(0x005c65a7);
    /* 005c65a7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c65aa: call 0x5c4f91 */ r_esp -= 4; W32(r_esp, 0x5c65afu); f_005c4f91();
    /* 005c65af: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005c65b5: jmp 0x5c65c1 */ goto L_005c65c1;
L_005c65b7:; BB(0x005c65b7);
    /* 005c65b7: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_005c65c1:; BB(0x005c65c1);
    /* 005c65c1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c65c4: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c65ca: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 005c65d0: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005c65d5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c65dau); f_0048ab58();
    /* 005c65da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c65dd: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005c65e0: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c65e4: je 0x5c65f6 */ if (fZ) goto L_005c65f6;
L_005c65e6:; BB(0x005c65e6);
    /* 005c65e6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c65e9: call 0x5c510a */ r_esp -= 4; W32(r_esp, 0x5c65eeu); f_005c510a();
    /* 005c65ee: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005c65f4: jmp 0x5c6600 */ goto L_005c6600;
L_005c65f6:; BB(0x005c65f6);
    /* 005c65f6: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005c6600:; BB(0x005c6600);
    /* 005c6600: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6603: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005c6609: mov dword ptr [eax + 0x98], ecx */ W32((u32)(r_eax+0x98u), r_ecx);
    /* 005c660f: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6612: cmp dword ptr [edx + 0x9c], 0 */ {  u32 a = R32((u32)(r_edx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6619: jne 0x5c665a */ if (!fZ) goto L_005c665a;
L_005c661b:; BB(0x005c661b);
    /* 005c661b: push 0x3104 */ { u32 v = 0x3104u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6620: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6625u); f_0048ab58();
    /* 005c6625: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6628: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005c662b: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c662f: je 0x5c6641 */ if (fZ) goto L_005c6641;
L_005c6631:; BB(0x005c6631);
    /* 005c6631: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c6634: call 0x4247c0 */ r_esp -= 4; W32(r_esp, 0x5c6639u); f_004247c0();
    /* 005c6639: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005c663f: jmp 0x5c664b */ goto L_005c664b;
L_005c6641:; BB(0x005c6641);
    /* 005c6641: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_005c664b:; BB(0x005c664b);
    /* 005c664b: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c664e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005c6654: mov dword ptr [eax + 0x9c], ecx */ W32((u32)(r_eax+0x9cu), r_ecx);
L_005c665a:; BB(0x005c665a);
    /* 005c665a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c665d: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 005c6663: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6666: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 005c666c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c666e: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5c6671u); call_ind(t); }
    /* 005c6671: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6673: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6674: ret  */ FN_RET(0x005c6136); r_esp += 4; return;
}

void f_005c6680(void) /* FUN_005c6680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6680);
    /* 005c6680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6681: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c6687: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c668a: call 0x5c5c09 */ r_esp -= 4; W32(r_esp, 0x5c668fu); f_005c5c09();
    /* 005c668f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6692: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c6695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6697: je 0x5c66a5 */ if (fZ) goto L_005c66a5;
L_005c6699:; BB(0x005c6699);
    /* 005c6699: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c669c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c669d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c66a2u); f_0048ac1b();
    /* 005c66a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c66a5:; BB(0x005c66a5);
    /* 005c66a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c66a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c66aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c66ab: ret 4 */ FN_RET(0x005c6680); r_esp += 8; return;
}

void f_005c66b0(void) /* FUN_005c66b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c66b0);
    /* 005c66b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c66b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c66b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c66b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c66b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c66ba: call 0x5e58b0 */ r_esp -= 4; W32(r_esp, 0x5c66bfu); f_005e58b0();
    /* 005c66bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c66c2: mov dword ptr [eax], 0x63ab7c */ W32((u32)(r_eax), 0x63ab7cu);
    /* 005c66c8: push 0x6985e0 */ { u32 v = 0x6985e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c66cd: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c66d3: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5c66d8u); f_005da413();
    /* 005c66d8: push 0x4ec */ { u32 v = 0x4ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005c66dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c66e0: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c66e5u); f_005e5ec3();
    /* 005c66e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c66e8: mov dword ptr [0x6fc0a0], ecx */ W32((u32)(0x6fc0a0u), r_ecx);
    /* 005c66ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c66f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005c66f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c66f4: ret  */ FN_RET(0x005c66b0); r_esp += 4; return;
}

void f_005c66f5(void) /* FUN_005c66f5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c66f5);
    /* 005c66f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c66f6: mov ebp, esp */ r_ebp = r_esp;
    /* 005c66f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c66f9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c66fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c66ff: mov dword ptr [eax], 0x63ab7c */ W32((u32)(r_eax), 0x63ab7cu);
    /* 005c6705: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6707: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c670d: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5c6712u); f_005da413();
    /* 005c6712: mov dword ptr [0x6fc0a0], 0 */ W32((u32)(0x6fc0a0u), 0x0u);
    /* 005c671c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c671f: call 0x5e5902 */ r_esp -= 4; W32(r_esp, 0x5c6724u); f_005e5902();
    /* 005c6724: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6726: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6727: ret  */ FN_RET(0x005c66f5); r_esp += 4; return;
}

void f_005c6728(void) /* FUN_005c6728 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6728);
    /* 005c6728: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6729: mov ebp, esp */ r_ebp = r_esp;
    /* 005c672b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c672e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c6731: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6734: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6735: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6738: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5c673du); f_005e626d();
    /* 005c673d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6740: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005c6743: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c6746: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c674a: je 0x5c6757 */ if (fZ) goto L_005c6757;
L_005c674c:; BB(0x005c674c);
    /* 005c674c: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6750: je 0x5c67c6 */ if (fZ) goto L_005c67c6;
L_005c6752:; BB(0x005c6752);
    /* 005c6752: jmp 0x5c683e */ goto L_005c683e;
L_005c6757:; BB(0x005c6757);
    /* 005c6757: push 0x18e71 */ { u32 v = 0x18e71u; r_esp -= 4; W32(r_esp, v); }
    /* 005c675c: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005c6761: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c6764: call 0x6003da */ r_esp -= 4; W32(r_esp, 0x5c6769u); f_006003da();
    /* 005c6769: mov dword ptr [0x6fc09c], 0x190 */ W32((u32)(0x6fc09cu), 0x190u);
    /* 005c6773: mov dword ptr [0x6fc098], 0x145 */ W32((u32)(0x6fc098u), 0x145u);
    /* 005c677d: mov ecx, dword ptr [0x6fc09c] */ r_ecx = R32((u32)(0x6fc09cu));
    /* 005c6783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6784: mov edx, dword ptr [0x6fc098] */ r_edx = R32((u32)(0x6fc098u));
    /* 005c678a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c678b: mov eax, dword ptr [0x6fc0a0] */ r_eax = R32((u32)(0x6fc0a0u));
    /* 005c6790: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c6793: mov edx, dword ptr [0x6fc0a0] */ r_edx = R32((u32)(0x6fc0a0u));
    /* 005c6799: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c679c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c679e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c67a1u); call_ind(t); }
    /* 005c67a1: mov eax, dword ptr [0x6fc0a0] */ r_eax = R32((u32)(0x6fc0a0u));
    /* 005c67a6: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c67a9: mov edx, dword ptr [0x6fc0a0] */ r_edx = R32((u32)(0x6fc0a0u));
    /* 005c67af: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c67b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c67b4: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c67b7u); call_ind(t); }
    /* 005c67b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c67b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c67bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c67be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c67c1: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c67c4u); call_ind(t); }
    /* 005c67c4: jmp 0x5c683e */ goto L_005c683e;
L_005c67c6:; BB(0x005c67c6);
    /* 005c67c6: mov dword ptr [0x6fc098], 0x145 */ W32((u32)(0x6fc098u), 0x145u);
    /* 005c67d0: mov eax, dword ptr [0x6fc09c] */ r_eax = R32((u32)(0x6fc09cu));
    /* 005c67d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c67d6: mov ecx, dword ptr [0x6fc098] */ r_ecx = R32((u32)(0x6fc098u));
    /* 005c67dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c67dd: mov edx, dword ptr [0x6fc0a0] */ r_edx = R32((u32)(0x6fc0a0u));
    /* 005c67e3: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005c67e6: mov eax, dword ptr [0x6fc0a0] */ r_eax = R32((u32)(0x6fc0a0u));
    /* 005c67eb: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005c67ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c67f0: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5c67f3u); call_ind(t); }
    /* 005c67f3: mov ecx, dword ptr [0x6fc09c] */ r_ecx = R32((u32)(0x6fc09cu));
    /* 005c67f9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c67fc: mov dword ptr [0x6fc09c], ecx */ W32((u32)(0x6fc09cu), r_ecx);
    /* 005c6802: mov edx, dword ptr [0x6fc0a0] */ r_edx = R32((u32)(0x6fc0a0u));
    /* 005c6808: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005c680b: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5c6810u); f_005d98da();
    /* 005c6810: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c6812: cmp dword ptr [0x6fc09c], eax */ {  u32 a = R32((u32)(0x6fc09cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c6818: jge 0x5c6824 */ if ((fS==fO)) goto L_005c6824;
L_005c681a:; BB(0x005c681a);
    /* 005c681a: mov dword ptr [0x6fc09c], 0x190 */ W32((u32)(0x6fc09cu), 0x190u);
L_005c6824:; BB(0x005c6824);
    /* 005c6824: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6826: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6829: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c682b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c682e: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c6831u); call_ind(t); }
    /* 005c6831: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6833: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6836: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6838: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c683b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c683eu); call_ind(t); }
L_005c683e:; BB(0x005c683e);
    /* 005c683e: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6840: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6841: ret 4 */ FN_RET(0x005c6728); r_esp += 8; return;
}

void f_005c6844(void) /* FUN_005c6844 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6844);
    /* 005c6844: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6845: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6847: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c684a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c684d: mov dword ptr [ebp - 0x10], 0x4eb */ W32((u32)(r_ebp+0xfffffff0u), 0x4ebu);
    /* 005c6854: mov dword ptr [ebp - 0xc], 0x52f */ W32((u32)(r_ebp+0xfffffff4u), 0x52fu);
    /* 005c685b: mov dword ptr [ebp - 8], 0x4ed */ W32((u32)(r_ebp+0xfffffff8u), 0x4edu);
    /* 005c6862: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c6865: call 0x5e59db */ r_esp -= 4; W32(r_esp, 0x5c686au); f_005e59db();
    /* 005c686a: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c686c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6871u); f_0048ab58();
    /* 005c6871: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6874: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c6877: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c687b: je 0x5c688a */ if (fZ) goto L_005c688a;
L_005c687d:; BB(0x005c687d);
    /* 005c687d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6880: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5c6885u); f_005e9d30();
    /* 005c6885: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c6888: jmp 0x5c6891 */ goto L_005c6891;
L_005c688a:; BB(0x005c688a);
    /* 005c688a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c6891:; BB(0x005c6891);
    /* 005c6891: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c6894: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c6897: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 005c689a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c689d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c689e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c68a1: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c68a4: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c68a9u); f_005ea0c3();
    /* 005c68a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c68ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c68ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c68b0: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 005c68b3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c68b6: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c68b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c68bb: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c68beu); call_ind(t); }
    /* 005c68be: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c68c0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c68c3: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c68c6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c68c9: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c68cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c68ce: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c68d1u); call_ind(t); }
    /* 005c68d1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c68d4: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c68d7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c68da: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c68dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c68df: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5c68e2u); call_ind(t); }
    /* 005c68e2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c68e5: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c68e8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c68eb: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c68ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c68f0: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c68f3u); call_ind(t); }
    /* 005c68f3: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c68f5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c68fau); f_0048ab58();
    /* 005c68fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c68fd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c6900: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6904: je 0x5c6913 */ if (fZ) goto L_005c6913;
L_005c6906:; BB(0x005c6906);
    /* 005c6906: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6909: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5c690eu); f_005e9d30();
    /* 005c690e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c6911: jmp 0x5c691a */ goto L_005c691a;
L_005c6913:; BB(0x005c6913);
    /* 005c6913: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005c691a:; BB(0x005c691a);
    /* 005c691a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c691d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c6920: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6924: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6927: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c692cu); f_005ea0c3();
    /* 005c692c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c692e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6930: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6933: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c6935: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6938: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5c693bu); call_ind(t); }
    /* 005c693b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c693d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6940: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c6942: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6945: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c6948u); call_ind(t); }
    /* 005c6948: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c694b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c694d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6950: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5c6953u); call_ind(t); }
    /* 005c6953: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6956: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6958: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c695b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c695eu); call_ind(t); }
    /* 005c695e: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6960: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6965u); f_0048ab58();
    /* 005c6965: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6968: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c696b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c696f: je 0x5c697e */ if (fZ) goto L_005c697e;
L_005c6971:; BB(0x005c6971);
    /* 005c6971: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c6974: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5c6979u); f_005e9d30();
    /* 005c6979: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c697c: jmp 0x5c6985 */ goto L_005c6985;
L_005c697e:; BB(0x005c697e);
    /* 005c697e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005c6985:; BB(0x005c6985);
    /* 005c6985: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c6988: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c698b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c698e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c698f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6992: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c6997u); f_005ea0c3();
    /* 005c6997: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6999: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c699b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c699e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c69a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c69a3: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5c69a6u); call_ind(t); }
    /* 005c69a6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005c69a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c69ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c69ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c69b0: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c69b3u); call_ind(t); }
    /* 005c69b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c69b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c69b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c69bb: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5c69beu); call_ind(t); }
    /* 005c69be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c69c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c69c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c69c6: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c69c9u); call_ind(t); }
    /* 005c69c9: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c69cb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c69d0u); f_0048ab58();
    /* 005c69d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c69d3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c69d6: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c69da: je 0x5c69f7 */ if (fZ) goto L_005c69f7;
L_005c69dc:; BB(0x005c69dc);
    /* 005c69dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c69de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c69e1: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5c69e6u); f_005e6160();
    /* 005c69e6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c69e9: mov dword ptr [eax], 0x63ab9c */ W32((u32)(r_eax), 0x63ab9cu);
    /* 005c69ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c69f2: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005c69f5: jmp 0x5c69fe */ goto L_005c69fe;
L_005c69f7:; BB(0x005c69f7);
    /* 005c69f7: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005c69fe:; BB(0x005c69fe);
    /* 005c69fe: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c6a01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a02: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c6a05: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x5c6a0au); f_005e5d66();
    /* 005c6a0a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6a0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6a0d: ret  */ FN_RET(0x005c6844); r_esp += 4; return;
}

void f_005c6a0e(void) /* FUN_005c6a0e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6a0e);
    /* 005c6a0e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a0f: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6a11: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c6a17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6a1a: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6a1e: jne 0x5c6a6c */ if (!fZ) goto L_005c6a6c;
L_005c6a20:; BB(0x005c6a20);
    /* 005c6a20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6a25: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6a28: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5c6a2du); f_005dd560();
    /* 005c6a2d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c6a30: cmp dword ptr [ecx + 0x20], eax */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6a33: jne 0x5c6a6c */ if (!fZ) goto L_005c6a6c;
L_005c6a35:; BB(0x005c6a35);
    /* 005c6a35: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c6a38: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005c6a3b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c6a3e: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6a42: je 0x5c6a4c */ if (fZ) goto L_005c6a4c;
L_005c6a44:; BB(0x005c6a44);
    /* 005c6a44: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6a48: je 0x5c6a4c */ if (fZ) goto L_005c6a4c;
L_005c6a4a:; BB(0x005c6a4a);
    /* 005c6a4a: jmp 0x5c6a6c */ goto L_005c6a6c;
L_005c6a4c:; BB(0x005c6a4c);
    /* 005c6a4c: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a51: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c6a57: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c6a59: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c6a5f: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c6a62u); call_ind(t); }
    /* 005c6a62: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6a65: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_005c6a6c:; BB(0x005c6a6c);
    /* 005c6a6c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c6a6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6a73: call 0x5e5b67 */ r_esp -= 4; W32(r_esp, 0x5c6a78u); f_005e5b67();
    /* 005c6a78: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6a7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6a7b: ret 4 */ FN_RET(0x005c6a0e); r_esp += 8; return;
}

void f_005c6a80(void) /* FUN_005c6a80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6a80);
    /* 005c6a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a81: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c6a87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6a8a: call 0x5c66f5 */ r_esp -= 4; W32(r_esp, 0x5c6a8fu); f_005c66f5();
    /* 005c6a8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6a92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c6a95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6a97: je 0x5c6aa5 */ if (fZ) goto L_005c6aa5;
L_005c6a99:; BB(0x005c6a99);
    /* 005c6a99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6a9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a9d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c6aa2u); f_0048ac1b();
    /* 005c6aa2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c6aa5:; BB(0x005c6aa5);
    /* 005c6aa5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6aa8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6aaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6aab: ret 4 */ FN_RET(0x005c6a80); r_esp += 8; return;
}

void f_005c6ab0(void) /* FUN_005c6ab0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6ab0);
    /* 005c6ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6ab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ab4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c6ab7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6aba: call 0x5e58b0 */ r_esp -= 4; W32(r_esp, 0x5c6abfu); f_005e58b0();
    /* 005c6abf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6ac2: mov dword ptr [eax], 0x63abb4 */ W32((u32)(r_eax), 0x63abb4u);
    /* 005c6ac8: push 0x698628 */ { u32 v = 0x698628u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6acd: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c6ad3: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5c6ad8u); f_005da413();
    /* 005c6ad8: push 0x509 */ { u32 v = 0x509u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6add: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6ae0: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c6ae5u); f_005e5ec3();
    /* 005c6ae5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6ae8: mov dword ptr [0x6fc0ac], ecx */ W32((u32)(0x6fc0acu), r_ecx);
    /* 005c6aee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6af1: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6af3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6af4: ret  */ FN_RET(0x005c6ab0); r_esp += 4; return;
}

void f_005c6af5(void) /* FUN_005c6af5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6af5);
    /* 005c6af5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6af6: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6af8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6af9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c6afc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6aff: mov dword ptr [eax], 0x63abb4 */ W32((u32)(r_eax), 0x63abb4u);
    /* 005c6b05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b07: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c6b0d: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5c6b12u); f_005da413();
    /* 005c6b12: mov dword ptr [0x6fc0ac], 0 */ W32((u32)(0x6fc0acu), 0x0u);
    /* 005c6b1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6b1f: call 0x5e5902 */ r_esp -= 4; W32(r_esp, 0x5c6b24u); f_005e5902();
    /* 005c6b24: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6b26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6b27: ret  */ FN_RET(0x005c6af5); r_esp += 4; return;
}

void f_005c6b28(void) /* FUN_005c6b28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6b28);
    /* 005c6b28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b29: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6b2b: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6b2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b2f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c6b32: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6b35: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c6b38: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6b3b: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c6b3e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6b40: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5c6b43u); call_ind(t); }
    /* 005c6b43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c6b45: jle 0x5c6b74 */ if ((fZ||fS!=fO)) goto L_005c6b74;
L_005c6b47:; BB(0x005c6b47);
    /* 005c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b49: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6b4c: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c6b4f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6b52: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c6b55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6b57: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5c6b5au); call_ind(t); }
    /* 005c6b5a: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c6b5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6b5e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6b61: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c6b64: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6b67: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c6b6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6b6c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c6b6fu); call_ind(t); }
    /* 005c6b6f: jmp 0x5c6d71 */ goto L_005c6d71;
L_005c6b74:; BB(0x005c6b74);
    /* 005c6b74: mov eax, dword ptr [0x6fc0b0] */ r_eax = R32((u32)(0x6fc0b0u));
    /* 005c6b79: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6b7c: mov dword ptr [0x6fc0b0], eax */ W32((u32)(0x6fc0b0u), r_eax);
    /* 005c6b81: cmp dword ptr [0x6fc0b0], 0x12c */ {  u32 a = R32((u32)(0x6fc0b0u)); u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6b8b: jne 0x5c6d71 */ if (!fZ) goto L_005c6d71;
L_005c6b91:; BB(0x005c6b91);
    /* 005c6b91: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6b94: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005c6b97: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x5c6b9cu); f_005ea279();
    /* 005c6b9c: cmp eax, 0x515 */ {  u32 a = r_eax; u32 b = 0x515u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6ba1: jne 0x5c6bc1 */ if (!fZ) goto L_005c6bc1;
L_005c6ba3:; BB(0x005c6ba3);
    /* 005c6ba3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ba5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6ba8: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005c6bab: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5c6bb0u); f_005ea1cf();
    /* 005c6bb0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6bb3: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c6bb6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6bb9: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c6bbc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6bbe: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c6bc1u); call_ind(t); }
L_005c6bc1:; BB(0x005c6bc1);
    /* 005c6bc1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6bc4: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c6bc7: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5c6bccu); f_005ea257();
    /* 005c6bcc: mov esi, eax */ r_esi = r_eax;
    /* 005c6bce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6bd1: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 005c6bd4: call 0x5ea2f8 */ r_esp -= 4; W32(r_esp, 0x5c6bd9u); f_005ea2f8();
    /* 005c6bd9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6bdb: jne 0x5c6c7a */ if (!fZ) goto L_005c6c7a;
L_005c6be1:; BB(0x005c6be1);
    /* 005c6be1: push 0x515 */ { u32 v = 0x515u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6be6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6be9: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005c6bec: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c6bf1u); f_005ea0c3();
    /* 005c6bf1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6bf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6bf5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6bf8: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6bfb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6bfe: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c6c01: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6c03: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c6c06u); call_ind(t); }
    /* 005c6c06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c08: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6c0b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6c0e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5c6c13u); f_005ea1cf();
    /* 005c6c13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6c16: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6c19: mov dword ptr [edx + 0x6c], 5 */ W32((u32)(r_edx+0x6cu), 0x5u);
    /* 005c6c20: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6c23: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6c26: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6c2a: jne 0x5c6c64 */ if (!fZ) goto L_005c6c64;
L_005c6c2c:; BB(0x005c6c2c);
    /* 005c6c2c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c2e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6c33u); f_0048ab58();
    /* 005c6c33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6c36: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c6c39: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6c3d: je 0x5c6c4e */ if (fZ) goto L_005c6c4e;
L_005c6c3f:; BB(0x005c6c3f);
    /* 005c6c3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6c44: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x5c6c49u); f_005d7698();
    /* 005c6c49: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c6c4c: jmp 0x5c6c55 */ goto L_005c6c55;
L_005c6c4e:; BB(0x005c6c4e);
    /* 005c6c4e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005c6c55:; BB(0x005c6c55);
    /* 005c6c55: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6c58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c59: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6c5c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6c5f: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5c6c64u); f_005e4060();
L_005c6c64:; BB(0x005c6c64);
    /* 005c6c64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6c67: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 005c6c6a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6c6d: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c6c70: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6c72: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c6c75u); call_ind(t); }
    /* 005c6c75: jmp 0x5c6d67 */ goto L_005c6d67;
L_005c6c7a:; BB(0x005c6c7a);
    /* 005c6c7a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6c7d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6c80: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x5c6c85u); f_005ea279();
    /* 005c6c85: cmp eax, 0x515 */ {  u32 a = r_eax; u32 b = 0x515u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6c8a: jne 0x5c6c9b */ if (!fZ) goto L_005c6c9b;
L_005c6c8c:; BB(0x005c6c8c);
    /* 005c6c8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6c91: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 005c6c94: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5c6c99u); f_005ea1cf();
    /* 005c6c99: jmp 0x5c6cb5 */ goto L_005c6cb5;
L_005c6c9b:; BB(0x005c6c9b);
    /* 005c6c9b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6c9e: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005c6ca1: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5c6ca6u); f_005ea257();
    /* 005c6ca6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6ca9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6caa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6cad: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c6cb0: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5c6cb5u); f_005ea1cf();
L_005c6cb5:; BB(0x005c6cb5);
    /* 005c6cb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6cb7: push 0x2a3 */ { u32 v = 0x2a3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6cbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6cbf: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 005c6cc2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6cc5: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c6cc8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6cca: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c6ccdu); call_ind(t); }
    /* 005c6ccd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ccf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6cd2: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6cd5: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5c6cdau); f_005e4060();
    /* 005c6cda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6cdd: call 0x5c6fe6 */ r_esp -= 4; W32(r_esp, 0x5c6ce2u); f_005c6fe6();
    /* 005c6ce2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ce3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6ce6: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005c6ce9: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c6ceeu); f_005ea0c3();
    /* 005c6cee: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6cf3: push 0x285 */ { u32 v = 0x285u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6cf8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6cfb: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005c6cfe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6d01: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005c6d04: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c6d06: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5c6d09u); call_ind(t); }
    /* 005c6d09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6d0c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6d0f: mov dword ptr [edx + 0x6c], 4 */ W32((u32)(r_edx+0x6cu), 0x4u);
    /* 005c6d16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d18: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6d1b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6d1e: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5c6d23u); f_005ea1cf();
    /* 005c6d23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6d26: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6d29: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6d2d: jne 0x5c6d67 */ if (!fZ) goto L_005c6d67;
L_005c6d2f:; BB(0x005c6d2f);
    /* 005c6d2f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d31: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6d36u); f_0048ab58();
    /* 005c6d36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6d39: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c6d3c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6d40: je 0x5c6d51 */ if (fZ) goto L_005c6d51;
L_005c6d42:; BB(0x005c6d42);
    /* 005c6d42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c6d47: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x5c6d4cu); f_005d7698();
    /* 005c6d4c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c6d4f: jmp 0x5c6d58 */ goto L_005c6d58;
L_005c6d51:; BB(0x005c6d51);
    /* 005c6d51: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005c6d58:; BB(0x005c6d58);
    /* 005c6d58: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6d5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6d5f: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005c6d62: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5c6d67u); f_005e4060();
L_005c6d67:; BB(0x005c6d67);
    /* 005c6d67: mov dword ptr [0x6fc0b0], 0 */ W32((u32)(0x6fc0b0u), 0x0u);
L_005c6d71:; BB(0x005c6d71);
    /* 005c6d71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c6d72: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6d74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6d75: ret  */ FN_RET(0x005c6b28); r_esp += 4; return;
}

void f_005c6d76(void) /* FUN_005c6d76 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6d76);
    /* 005c6d76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d77: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6d79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d7a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c6d7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6d80: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6d83: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6d86: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c6d89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6d8b: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5c6d8eu); call_ind(t); }
    /* 005c6d8e: cmp eax, 0xffffff6a */ {  u32 a = r_eax; u32 b = 0xffffff6au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c6d93: jle 0x5c6de1 */ if ((fZ||fS!=fO)) goto L_005c6de1;
L_005c6d95:; BB(0x005c6d95);
    /* 005c6d95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6d98: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6d9b: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x5c6da0u); f_005ea279();
    /* 005c6da0: cmp eax, 0x515 */ {  u32 a = r_eax; u32 b = 0x515u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6da5: je 0x5c6de1 */ if (fZ) goto L_005c6de1;
L_005c6da7:; BB(0x005c6da7);
    /* 005c6da7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6daa: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005c6dad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6db0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c6db3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6db5: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5c6db8u); call_ind(t); }
    /* 005c6db8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6db9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6dbc: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6dbf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6dc2: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c6dc5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6dc7: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5c6dcau); call_ind(t); }
    /* 005c6dca: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c6dcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6dce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6dd1: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6dd4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6dd7: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c6dda: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6ddc: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c6ddfu); call_ind(t); }
    /* 005c6ddf: jmp 0x5c6e0d */ goto L_005c6e0d;
L_005c6de1:; BB(0x005c6de1);
    /* 005c6de1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6de4: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6de7: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x5c6decu); f_005ea279();
    /* 005c6dec: cmp eax, 0x515 */ {  u32 a = r_eax; u32 b = 0x515u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6df1: je 0x5c6e0d */ if (fZ) goto L_005c6e0d;
L_005c6df3:; BB(0x005c6df3);
    /* 005c6df3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6df5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6df8: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005c6dfb: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5c6e00u); f_005e4060();
    /* 005c6e00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e02: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6e05: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005c6e08: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5c6e0du); f_005ea1cf();
L_005c6e0d:; BB(0x005c6e0d);
    /* 005c6e0d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6e0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6e10: ret  */ FN_RET(0x005c6d76); r_esp += 4; return;
}

void f_005c6e11(void) /* FUN_005c6e11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6e11);
    /* 005c6e11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e12: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6e14: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6e17: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c6e1a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6e1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6e21: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5c6e26u); f_005e626d();
    /* 005c6e26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6e29: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005c6e2c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c6e2f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6e33: je 0x5c6e37 */ if (fZ) goto L_005c6e37;
L_005c6e35:; BB(0x005c6e35);
    /* 005c6e35: jmp 0x5c6e67 */ goto L_005c6e67;
L_005c6e37:; BB(0x005c6e37);
    /* 005c6e37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6e3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6e3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6e41: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c6e44u); call_ind(t); }
    /* 005c6e44: mov ecx, dword ptr [0x6fc0ac] */ r_ecx = R32((u32)(0x6fc0acu));
    /* 005c6e4a: call 0x5c6b28 */ r_esp -= 4; W32(r_esp, 0x5c6e4fu); f_005c6b28();
    /* 005c6e4f: mov ecx, dword ptr [0x6fc0ac] */ r_ecx = R32((u32)(0x6fc0acu));
    /* 005c6e55: call 0x5c6d76 */ r_esp -= 4; W32(r_esp, 0x5c6e5au); f_005c6d76();
    /* 005c6e5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6e5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6e61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6e64: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c6e67u); call_ind(t); }
L_005c6e67:; BB(0x005c6e67);
    /* 005c6e67: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6e69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6e6a: ret 4 */ FN_RET(0x005c6e11); r_esp += 8; return;
}

