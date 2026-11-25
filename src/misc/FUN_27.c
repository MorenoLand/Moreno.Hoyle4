#include "protos.h"

void f_0050b4cd(void) /* FUN_0050b4cd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b4cd);
    /* 0050b4cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b4ce: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b4d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b4d1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b4d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b4d7: mov eax, dword ptr [eax + 0xbc] */ r_eax = R32((u32)(r_eax+0xbcu));
    /* 0050b4dd: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b4df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b4e0: ret  */ FN_RET(0x0050b4cd); r_esp += 4; return;
}

void f_0050b4e1(void) /* FUN_0050b4e1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b4e1);
    /* 0050b4e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b4e2: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b4e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b4e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b4e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b4eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050b4ee: mov dword ptr [eax + 0xbc], ecx */ W32((u32)(r_eax+0xbcu), r_ecx);
    /* 0050b4f4: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b4f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b4f7: ret 4 */ FN_RET(0x0050b4e1); r_esp += 8; return;
}

void f_0050b4fa(void) /* FUN_0050b4fa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b4fa);
    /* 0050b4fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b4fb: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b4fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b4fe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b501: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b504: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050b507: mov dword ptr [eax + 0xc0], ecx */ W32((u32)(r_eax+0xc0u), r_ecx);
    /* 0050b50d: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b50f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b510: ret 4 */ FN_RET(0x0050b4fa); r_esp += 8; return;
}

void f_0050b513(void) /* FUN_0050b513 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b513);
    /* 0050b513: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b514: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b516: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b517: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b51a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b51d: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0050b523: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050b526: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b529: mov dword ptr [edx + 0xbc], ecx */ W32((u32)(r_edx+0xbcu), r_ecx);
    /* 0050b52f: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b531: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b532: ret 4 */ FN_RET(0x0050b513); r_esp += 8; return;
}

void f_0050b535(void) /* FUN_0050b535 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b535);
    /* 0050b535: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b536: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b538: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b539: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b53c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b53f: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0050b545: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050b548: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b54b: mov dword ptr [edx + 0xbc], ecx */ W32((u32)(r_edx+0xbcu), r_ecx);
    /* 0050b551: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b553: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b554: ret 4 */ FN_RET(0x0050b535); r_esp += 8; return;
}

void f_0050b557(void) /* FUN_0050b557 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b557);
    /* 0050b557: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b558: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b55a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b55b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b55e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b561: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0050b567: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050b56a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b56d: mov dword ptr [edx + 0xc0], ecx */ W32((u32)(r_edx+0xc0u), r_ecx);
    /* 0050b573: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b575: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b576: ret 4 */ FN_RET(0x0050b557); r_esp += 8; return;
}

void f_0050b579(void) /* FUN_0050b579 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b579);
    /* 0050b579: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b57a: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b57c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b57d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b580: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b583: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0050b589: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050b58c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b58f: mov dword ptr [edx + 0xc0], ecx */ W32((u32)(r_edx+0xc0u), r_ecx);
    /* 0050b595: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b597: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b598: ret 4 */ FN_RET(0x0050b579); r_esp += 8; return;
}

void f_0050b59b(void) /* FUN_0050b59b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b59b);
    /* 0050b59b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b59c: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b59e: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050b5a1: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0050b5a4: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0050b5a7: cmp dword ptr [eax + 0xc0], 0xf423f */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b5b1: jle 0x50b60a */ if ((fZ||fS!=fO)) goto L_0050b60a;
L_0050b5b3:; BB(0x0050b5b3);
    /* 0050b5b3: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0050b5b6: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 0050b5bc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050b5bd: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0050b5c2: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050b5c2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050b5c2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050b5c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b5c5: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0050b5c8: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0050b5ce: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050b5cf: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0050b5d4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050b5d4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050b5d4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050b5d6: mov eax, edx */ r_eax = r_edx;
    /* 0050b5d8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050b5d9: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0050b5de: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050b5de, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050b5de, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050b5e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050b5e1: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0050b5e4: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0050b5ea: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050b5eb: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0050b5f0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050b5f0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050b5f0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050b5f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050b5f3: push 0x6922e4 */ { u32 v = 0x6922e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b5f8: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 0050b5fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b5fc: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x50b602u); call_ind(t); }
    /* 0050b602: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050b605: jmp 0x50b68d */ goto L_0050b68d;
L_0050b60a:; BB(0x0050b60a);
    /* 0050b60a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0050b60d: cmp dword ptr [eax + 0xc0], 0x3e7 */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b617: jle 0x50b651 */ if ((fZ||fS!=fO)) goto L_0050b651;
L_0050b619:; BB(0x0050b619);
    /* 0050b619: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0050b61c: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 0050b622: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050b623: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0050b628: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050b628, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050b628, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050b62a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b62b: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0050b62e: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0050b634: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050b635: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0050b63a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050b63a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050b63a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050b63c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050b63d: push 0x6922f4 */ { u32 v = 0x6922f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b642: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 0050b645: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b646: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x50b64cu); call_ind(t); }
    /* 0050b64c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050b64f: jmp 0x50b68d */ goto L_0050b68d;
L_0050b651:; BB(0x0050b651);
    /* 0050b651: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0050b654: cmp dword ptr [eax + 0xc0], 0 */ {  u32 a = R32((u32)(r_eax+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b65b: jle 0x50b67b */ if ((fZ||fS!=fO)) goto L_0050b67b;
L_0050b65d:; BB(0x0050b65d);
    /* 0050b65d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0050b660: mov edx, dword ptr [ecx + 0xc0] */ r_edx = R32((u32)(r_ecx+0xc0u));
    /* 0050b666: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b667: push 0x692300 */ { u32 v = 0x692300u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b66c: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 0050b66f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050b670: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x50b676u); call_ind(t); }
    /* 0050b676: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050b679: jmp 0x50b68d */ goto L_0050b68d;
L_0050b67b:; BB(0x0050b67b);
    /* 0050b67b: push 0x692304 */ { u32 v = 0x692304u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b680: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0050b683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b684: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x50b68au); call_ind(t); }
    /* 0050b68a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050b68d:; BB(0x0050b68d);
    /* 0050b68d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 0050b690: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b691: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0050b694: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 0050b69a: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0050b69d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050b6a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050b6a5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x50b6a8u); call_ind(t); }
    /* 0050b6a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b6aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b6ab: ret  */ FN_RET(0x0050b59b); r_esp += 4; return;
}

void f_0050b6ac(void) /* FUN_0050b6ac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b6ac);
    /* 0050b6ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b6ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b6af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b6b0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b6b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b6b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b6b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b6ba: call 0x50fbf0 */ r_esp -= 4; W32(r_esp, 0x50b6bfu); f_0050fbf0();
    /* 0050b6bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b6c2: mov dword ptr [eax], 0x638604 */ W32((u32)(r_eax), 0x638604u);
    /* 0050b6c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b6cb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050b6ce: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 0050b6d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b6d7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050b6da: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0050b6e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b6e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b6e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b6e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b6e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b6eb: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x50b6f0u); f_005d5ff2();
    /* 0050b6f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b6f3: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b6f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b6f6: ret 8 */ FN_RET(0x0050b6ac); r_esp += 12; return;
}

void f_0050b6f9(void) /* FUN_0050b6f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b6f9);
    /* 0050b6f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b6fa: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b6fc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050b6ff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050b702: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050b705: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050b70b: call 0x50b4cd */ r_esp -= 4; W32(r_esp, 0x50b710u); f_0050b4cd();
    /* 0050b710: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0050b712: jg 0x50b719 */ if ((!fZ&&fS==fO)) goto L_0050b719;
L_0050b714:; BB(0x0050b714);
    /* 0050b714: jmp 0x50b7a1 */ goto L_0050b7a1;
L_0050b719:; BB(0x0050b719);
    /* 0050b719: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050b71c: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 0050b722: call 0x50b4cd */ r_esp -= 4; W32(r_esp, 0x50b727u); f_0050b4cd();
    /* 0050b727: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050b72a: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0050b730: cmp eax, dword ptr [ecx + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xc8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b736: jge 0x50b73a */ if ((fS==fO)) goto L_0050b73a;
L_0050b738:; BB(0x0050b738);
    /* 0050b738: jmp 0x50b7a1 */ goto L_0050b7a1;
L_0050b73a:; BB(0x0050b73a);
    /* 0050b73a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0050b741: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050b744: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0050b74a: call 0x50b4cd */ r_esp -= 4; W32(r_esp, 0x50b74fu); f_0050b4cd();
    /* 0050b74f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050b751: je 0x50b76a */ if (fZ) goto L_0050b76a;
L_0050b753:; BB(0x0050b753);
    /* 0050b753: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050b756: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050b75c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050b75f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050b765: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050b767: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x50b76au); call_ind(t); }
L_0050b76a:; BB(0x0050b76a);
    /* 0050b76a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050b76d: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050b773: cmp dword ptr [ecx + 0xb8], 0 */ {  u32 a = R32((u32)(r_ecx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050b77a: je 0x50b7a1 */ if (fZ) goto L_0050b7a1;
L_0050b77c:; BB(0x0050b77c);
    /* 0050b77c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b77e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050b781: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050b787: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0050b78d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050b790: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050b796: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 0050b79c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050b79e: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x50b7a1u); call_ind(t); }
L_0050b7a1:; BB(0x0050b7a1);
    /* 0050b7a1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b7a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b7a4: ret  */ FN_RET(0x0050b6f9); r_esp += 4; return;
}

void f_0050b7a5(void) /* FUN_0050b7a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b7a5);
    /* 0050b7a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7a6: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b7a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7a9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b7ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b7b3: call 0x50fbf0 */ r_esp -= 4; W32(r_esp, 0x50b7b8u); f_0050fbf0();
    /* 0050b7b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b7bb: mov dword ptr [eax], 0x638674 */ W32((u32)(r_eax), 0x638674u);
    /* 0050b7c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b7c4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050b7c7: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 0050b7cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b7d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050b7d3: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0050b7d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b7e4: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x50b7e9u); f_005d5ff2();
    /* 0050b7e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b7ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b7ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b7ef: ret 8 */ FN_RET(0x0050b7a5); r_esp += 12; return;
}

void f_0050b7f2(void) /* FUN_0050b7f2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b7f2);
    /* 0050b7f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7f3: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b7f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b7f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b7fc: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050b802: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b805: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050b80b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050b80d: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x50b810u); call_ind(t); }
    /* 0050b810: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b812: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b813: ret  */ FN_RET(0x0050b7f2); r_esp += 4; return;
}

void f_0050b814(void) /* FUN_0050b814 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b814);
    /* 0050b814: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b815: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b817: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b818: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b81b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b81d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b81f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b822: call 0x50fbf0 */ r_esp -= 4; W32(r_esp, 0x50b827u); f_0050fbf0();
    /* 0050b827: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b82a: mov dword ptr [eax], 0x6386e4 */ W32((u32)(r_eax), 0x6386e4u);
    /* 0050b830: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b833: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050b836: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 0050b83c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b83f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050b842: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0050b848: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b84a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b84c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b84e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b850: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b853: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x50b858u); f_005d5ff2();
    /* 0050b858: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b85b: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b85d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b85e: ret 8 */ FN_RET(0x0050b814); r_esp += 12; return;
}

void f_0050b861(void) /* FUN_0050b861 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b861);
    /* 0050b861: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b862: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b864: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b865: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b868: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b86a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b86b: ret  */ FN_RET(0x0050b861); r_esp += 4; return;
}

void f_0050b86c(void) /* FUN_0050b86c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b86c);
    /* 0050b86c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b86d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b86f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b870: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b873: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b875: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b877: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b87a: call 0x50fbf0 */ r_esp -= 4; W32(r_esp, 0x50b87fu); f_0050fbf0();
    /* 0050b87f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b882: mov dword ptr [eax], 0x638754 */ W32((u32)(r_eax), 0x638754u);
    /* 0050b888: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b88b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050b88e: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 0050b894: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b897: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050b89a: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0050b8a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b8a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b8a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b8a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b8a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b8ab: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x50b8b0u); f_005d5ff2();
    /* 0050b8b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b8b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b8b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b8b6: ret 8 */ FN_RET(0x0050b86c); r_esp += 12; return;
}

void f_0050b8b9(void) /* FUN_0050b8b9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b8b9);
    /* 0050b8b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b8ba: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b8bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b8bd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b8c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b8c3: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050b8c9: call 0x50b4cd */ r_esp -= 4; W32(r_esp, 0x50b8ceu); f_0050b4cd();
    /* 0050b8ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050b8d0: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050b8d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b8d5: mov dword ptr [edx + 0xcc], ecx */ W32((u32)(r_edx+0xccu), r_ecx);
    /* 0050b8db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b8de: call 0x50fcc8 */ r_esp -= 4; W32(r_esp, 0x50b8e3u); f_0050fcc8();
    /* 0050b8e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b8e6: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 0050b8f0: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b8f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b8f3: ret  */ FN_RET(0x0050b8b9); r_esp += 4; return;
}

void f_0050b8f4(void) /* FUN_0050b8f4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b8f4);
    /* 0050b8f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b8f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b8f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050b8f8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050b8fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b8fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b8ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b902: call 0x50fbf0 */ r_esp -= 4; W32(r_esp, 0x50b907u); f_0050fbf0();
    /* 0050b907: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b90a: mov dword ptr [eax], 0x6387c4 */ W32((u32)(r_eax), 0x6387c4u);
    /* 0050b910: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b913: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050b916: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 0050b91c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b91f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050b922: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0050b928: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b92a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b92c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b92e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b930: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b933: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x50b938u); f_005d5ff2();
    /* 0050b938: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b93a: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050b93c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b93f: call 0x5d678c */ r_esp -= 4; W32(r_esp, 0x50b944u); f_005d678c();
    /* 0050b944: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050b947: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b949: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b94a: ret 8 */ FN_RET(0x0050b8f4); r_esp += 12; return;
}

void f_0050b94d(void) /* FUN_0050b94d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050b94d);
    /* 0050b94d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b94e: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b950: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050b953: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0050b956: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b959: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0050b95f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050b962: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b965: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0050b96b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0050b96e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b971: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0050b977: cmp dword ptr [edx + 0xcc], 0 */ {  u32 a = R32((u32)(r_edx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b97e: jle 0x50b9c6 */ if ((fZ||fS!=fO)) goto L_0050b9c6;
L_0050b980:; BB(0x0050b980);
    /* 0050b980: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b983: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050b989: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 0050b98f: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050b992: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b995: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050b99b: cmp edx, dword ptr [ecx + 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b9a1: jle 0x50b9c6 */ if ((fZ||fS!=fO)) goto L_0050b9c6;
L_0050b9a3:; BB(0x0050b9a3);
    /* 0050b9a3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b9a6: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050b9ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b9af: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0050b9b5: mov eax, dword ptr [eax + 0xcc] */ r_eax = R32((u32)(r_eax+0xccu));
    /* 0050b9bb: sub eax, dword ptr [edx + 0xbc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xbcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050b9c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0050b9c4: jmp 0x50ba0a */ goto L_0050ba0a;
L_0050b9c6:; BB(0x0050b9c6);
    /* 0050b9c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b9c9: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0050b9cf: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0050b9d5: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050b9d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b9db: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0050b9e1: cmp eax, dword ptr [edx + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xc8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b9e7: jge 0x50ba0a */ if ((fS==fO)) goto L_0050ba0a;
L_0050b9e9:; BB(0x0050b9e9);
    /* 0050b9e9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b9ec: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050b9f2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b9f5: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050b9fb: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 0050ba01: sub ecx, dword ptr [eax + 0xbc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xbcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050ba07: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0050ba0a:; BB(0x0050ba0a);
    /* 0050ba0a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ba0d: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050ba13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ba16: cmp ecx, dword ptr [eax + 0xc0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ba1c: jle 0x50ba30 */ if ((fZ||fS!=fO)) goto L_0050ba30;
L_0050ba1e:; BB(0x0050ba1e);
    /* 0050ba1e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ba21: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050ba27: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0050ba2d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0050ba30:; BB(0x0050ba30);
    /* 0050ba30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ba33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ba34: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ba37: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050ba3d: call 0x50b513 */ r_esp -= 4; W32(r_esp, 0x50ba42u); f_0050b513();
    /* 0050ba42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ba44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ba47: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 0050ba4d: call 0x50b1d4 */ r_esp -= 4; W32(r_esp, 0x50ba52u); f_0050b1d4();
    /* 0050ba52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ba55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ba56: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ba59: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050ba5f: call 0x50b579 */ r_esp -= 4; W32(r_esp, 0x50ba64u); f_0050b579();
    /* 0050ba64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ba67: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 0050ba6d: call 0x50b59b */ r_esp -= 4; W32(r_esp, 0x50ba72u); f_0050b59b();
    /* 0050ba72: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ba75: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050ba7b: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0050ba81: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ba84: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050ba8a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0050ba90: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050ba92: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x50ba95u); call_ind(t); }
    /* 0050ba95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ba98: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0050ba9e: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 0050baa4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050baa7: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0050baad: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050bab3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050bab5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x50bab8u); call_ind(t); }
    /* 0050bab8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050babb: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0050bac1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050bac2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050bac5: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0050bacb: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x50bad0u); f_005b79b9();
    /* 0050bad0: mov esp, ebp */ r_esp = r_ebp;
    /* 0050bad2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bad3: ret  */ FN_RET(0x0050b94d); r_esp += 4; return;
}

void f_0050bad4(void) /* FUN_0050bad4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bad4);
    /* 0050bad4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bad5: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bad7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050bada: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050badd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bae0: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0050bae6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050bae9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050baec: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050baf2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050baf5: cmp ecx, dword ptr [eax + 0xbc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050bafb: jle 0x50bb0f */ if ((fZ||fS!=fO)) goto L_0050bb0f;
L_0050bafd:; BB(0x0050bafd);
    /* 0050bafd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bb00: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050bb06: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0050bb0c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0050bb0f:; BB(0x0050bb0f);
    /* 0050bb0f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bb12: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050bb18: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0050bb1e: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050bb21: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bb24: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050bb2a: cmp ecx, dword ptr [eax + 0xc8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xc8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050bb30: jge 0x50bb44 */ if ((fS==fO)) goto L_0050bb44;
L_0050bb32:; BB(0x0050bb32);
    /* 0050bb32: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bb35: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0050bb3b: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0050bb41: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0050bb44:; BB(0x0050bb44);
    /* 0050bb44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050bb47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050bb48: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bb4b: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0050bb51: call 0x50b535 */ r_esp -= 4; W32(r_esp, 0x50bb56u); f_0050b535();
    /* 0050bb56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050bb58: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bb5b: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050bb61: call 0x50b1d4 */ r_esp -= 4; W32(r_esp, 0x50bb66u); f_0050b1d4();
    /* 0050bb66: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bb69: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0050bb6f: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 0050bb75: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bb78: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0050bb7e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0050bb84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050bb86: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x50bb89u); call_ind(t); }
    /* 0050bb89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050bb8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050bb8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bb90: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 0050bb96: call 0x50b557 */ r_esp -= 4; W32(r_esp, 0x50bb9bu); f_0050b557();
    /* 0050bb9b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bb9e: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0050bba4: call 0x50b59b */ r_esp -= 4; W32(r_esp, 0x50bba9u); f_0050b59b();
    /* 0050bba9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bbac: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050bbb2: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 0050bbb8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bbbb: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050bbc1: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0050bbc7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050bbc9: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x50bbccu); call_ind(t); }
    /* 0050bbcc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bbcf: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 0050bbd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050bbd6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050bbd9: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050bbdf: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x50bbe4u); f_005b79b9();
    /* 0050bbe4: mov esp, ebp */ r_esp = r_ebp;
    /* 0050bbe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bbe7: ret  */ FN_RET(0x0050bad4); r_esp += 4; return;
}

void f_0050bbf0(void) /* FUN_0050bbf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bbf0);
    /* 0050bbf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bbf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bbf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050bbf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050bbf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050bbfa: call 0x5b6b65 */ r_esp -= 4; W32(r_esp, 0x50bbffu); f_005b6b65();
    /* 0050bbff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050bc02: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050bc05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050bc07: je 0x50bc15 */ if (fZ) goto L_0050bc15;
L_0050bc09:; BB(0x0050bc09);
    /* 0050bc09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050bc0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc0d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x50bc12u); f_0048ac1b();
    /* 0050bc12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050bc15:; BB(0x0050bc15);
    /* 0050bc15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050bc18: mov esp, ebp */ r_esp = r_ebp;
    /* 0050bc1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc1b: ret 4 */ FN_RET(0x0050bbf0); r_esp += 8; return;
}

void f_0050bc20(void) /* FUN_0050bc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc20);
    /* 0050bc20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc21: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc23: call 0x50bc2a */ r_esp -= 4; W32(r_esp, 0x50bc28u); f_0050bc2a();
    /* 0050bc28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc29: ret  */ FN_RET(0x0050bc20); r_esp += 4; return;
}

void f_0050bc2a(void) /* FUN_0050bc2a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc2a);
    /* 0050bc2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc2b: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc2d: mov byte ptr [0x6f98b0], 0xe */ W8((u32)(0x6f98b0u), 0xeu);
    /* 0050bc34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc35: ret  */ FN_RET(0x0050bc2a); r_esp += 4; return;
}

void f_0050bc36(void) /* FUN_0050bc36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc36);
    /* 0050bc36: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc37: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc39: call 0x50bc40 */ r_esp -= 4; W32(r_esp, 0x50bc3eu); f_0050bc40();
    /* 0050bc3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc3f: ret  */ FN_RET(0x0050bc36); r_esp += 4; return;
}

void f_0050bc40(void) /* FUN_0050bc40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc40);
    /* 0050bc40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc41: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc43: mov byte ptr [0x6f98ec], 0xd */ W8((u32)(0x6f98ecu), 0xdu);
    /* 0050bc4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc4b: ret  */ FN_RET(0x0050bc40); r_esp += 4; return;
}

void f_0050bc4c(void) /* FUN_0050bc4c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc4c);
    /* 0050bc4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc4d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc4f: call 0x50bc56 */ r_esp -= 4; W32(r_esp, 0x50bc54u); f_0050bc56();
    /* 0050bc54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc55: ret  */ FN_RET(0x0050bc4c); r_esp += 4; return;
}

void f_0050bc56(void) /* FUN_0050bc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc56);
    /* 0050bc56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc57: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc59: mov byte ptr [0x6f98dc], 0xc */ W8((u32)(0x6f98dcu), 0xcu);
    /* 0050bc60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc61: ret  */ FN_RET(0x0050bc56); r_esp += 4; return;
}

void f_0050bc62(void) /* FUN_0050bc62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc62);
    /* 0050bc62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc63: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc65: call 0x50bc6c */ r_esp -= 4; W32(r_esp, 0x50bc6au); f_0050bc6c();
    /* 0050bc6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc6b: ret  */ FN_RET(0x0050bc62); r_esp += 4; return;
}

void f_0050bc6c(void) /* FUN_0050bc6c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc6c);
    /* 0050bc6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc6d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc6f: mov byte ptr [0x6f987c], 0xb */ W8((u32)(0x6f987cu), 0xbu);
    /* 0050bc76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc77: ret  */ FN_RET(0x0050bc6c); r_esp += 4; return;
}

void f_0050bc78(void) /* FUN_0050bc78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc78);
    /* 0050bc78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc79: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc7b: call 0x50bc82 */ r_esp -= 4; W32(r_esp, 0x50bc80u); f_0050bc82();
    /* 0050bc80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc81: ret  */ FN_RET(0x0050bc78); r_esp += 4; return;
}

void f_0050bc82(void) /* FUN_0050bc82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc82);
    /* 0050bc82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc83: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc85: mov byte ptr [0x6f98c0], 0xa */ W8((u32)(0x6f98c0u), 0xau);
    /* 0050bc8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc8d: ret  */ FN_RET(0x0050bc82); r_esp += 4; return;
}

void f_0050bc8e(void) /* FUN_0050bc8e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc8e);
    /* 0050bc8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc8f: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc91: call 0x50bc98 */ r_esp -= 4; W32(r_esp, 0x50bc96u); f_0050bc98();
    /* 0050bc96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc97: ret  */ FN_RET(0x0050bc8e); r_esp += 4; return;
}

void f_0050bc98(void) /* FUN_0050bc98 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bc98);
    /* 0050bc98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc99: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bc9b: mov byte ptr [0x6f98e4], 9 */ W8((u32)(0x6f98e4u), 0x9u);
    /* 0050bca2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bca3: ret  */ FN_RET(0x0050bc98); r_esp += 4; return;
}

void f_0050bca4(void) /* FUN_0050bca4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bca4);
    /* 0050bca4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bca5: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bca7: call 0x50bcae */ r_esp -= 4; W32(r_esp, 0x50bcacu); f_0050bcae();
    /* 0050bcac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bcad: ret  */ FN_RET(0x0050bca4); r_esp += 4; return;
}

void f_0050bcae(void) /* FUN_0050bcae */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bcae);
    /* 0050bcae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bcaf: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bcb1: mov byte ptr [0x6f98a0], 8 */ W8((u32)(0x6f98a0u), 0x8u);
    /* 0050bcb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bcb9: ret  */ FN_RET(0x0050bcae); r_esp += 4; return;
}

void f_0050bcba(void) /* FUN_0050bcba */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bcba);
    /* 0050bcba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bcbb: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bcbd: call 0x50bcc4 */ r_esp -= 4; W32(r_esp, 0x50bcc2u); f_0050bcc4();
    /* 0050bcc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bcc3: ret  */ FN_RET(0x0050bcba); r_esp += 4; return;
}

void f_0050bcc4(void) /* FUN_0050bcc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bcc4);
    /* 0050bcc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bcc5: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bcc7: mov byte ptr [0x6f98fc], 7 */ W8((u32)(0x6f98fcu), 0x7u);
    /* 0050bcce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bccf: ret  */ FN_RET(0x0050bcc4); r_esp += 4; return;
}

void f_0050bcd0(void) /* FUN_0050bcd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bcd0);
    /* 0050bcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bcd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bcd3: call 0x50bcda */ r_esp -= 4; W32(r_esp, 0x50bcd8u); f_0050bcda();
    /* 0050bcd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bcd9: ret  */ FN_RET(0x0050bcd0); r_esp += 4; return;
}

void f_0050bcda(void) /* FUN_0050bcda */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bcda);
    /* 0050bcda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bcdb: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bcdd: mov byte ptr [0x6f98c8], 6 */ W8((u32)(0x6f98c8u), 0x6u);
    /* 0050bce4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bce5: ret  */ FN_RET(0x0050bcda); r_esp += 4; return;
}

void f_0050bce6(void) /* FUN_0050bce6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bce6);
    /* 0050bce6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bce7: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bce9: call 0x50bcf0 */ r_esp -= 4; W32(r_esp, 0x50bceeu); f_0050bcf0();
    /* 0050bcee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bcef: ret  */ FN_RET(0x0050bce6); r_esp += 4; return;
}

void f_0050bcf0(void) /* FUN_0050bcf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bcf0);
    /* 0050bcf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bcf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bcf3: mov byte ptr [0x6f9878], 5 */ W8((u32)(0x6f9878u), 0x5u);
    /* 0050bcfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bcfb: ret  */ FN_RET(0x0050bcf0); r_esp += 4; return;
}

void f_0050bcfc(void) /* FUN_0050bcfc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bcfc);
    /* 0050bcfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bcfd: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bcff: call 0x50bd06 */ r_esp -= 4; W32(r_esp, 0x50bd04u); f_0050bd06();
    /* 0050bd04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd05: ret  */ FN_RET(0x0050bcfc); r_esp += 4; return;
}

void f_0050bd06(void) /* FUN_0050bd06 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd06);
    /* 0050bd06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd07: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd09: mov byte ptr [0x6f98b8], 4 */ W8((u32)(0x6f98b8u), 0x4u);
    /* 0050bd10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd11: ret  */ FN_RET(0x0050bd06); r_esp += 4; return;
}

void f_0050bd12(void) /* FUN_0050bd12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd12);
    /* 0050bd12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd13: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd15: call 0x50bd1c */ r_esp -= 4; W32(r_esp, 0x50bd1au); f_0050bd1c();
    /* 0050bd1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd1b: ret  */ FN_RET(0x0050bd12); r_esp += 4; return;
}

void f_0050bd1c(void) /* FUN_0050bd1c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd1c);
    /* 0050bd1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd1d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd1f: mov byte ptr [0x6f9888], 3 */ W8((u32)(0x6f9888u), 0x3u);
    /* 0050bd26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd27: ret  */ FN_RET(0x0050bd1c); r_esp += 4; return;
}

void f_0050bd28(void) /* FUN_0050bd28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd28);
    /* 0050bd28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd29: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd2b: call 0x50bd32 */ r_esp -= 4; W32(r_esp, 0x50bd30u); f_0050bd32();
    /* 0050bd30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd31: ret  */ FN_RET(0x0050bd28); r_esp += 4; return;
}

void f_0050bd32(void) /* FUN_0050bd32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd32);
    /* 0050bd32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd33: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd35: mov byte ptr [0x6f9884], 2 */ W8((u32)(0x6f9884u), 0x2u);
    /* 0050bd3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd3d: ret  */ FN_RET(0x0050bd32); r_esp += 4; return;
}

void f_0050bd3e(void) /* FUN_0050bd3e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd3e);
    /* 0050bd3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd3f: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd41: call 0x50bd48 */ r_esp -= 4; W32(r_esp, 0x50bd46u); f_0050bd48();
    /* 0050bd46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd47: ret  */ FN_RET(0x0050bd3e); r_esp += 4; return;
}

void f_0050bd48(void) /* FUN_0050bd48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd48);
    /* 0050bd48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd49: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd4b: mov byte ptr [0x6f9864], 1 */ W8((u32)(0x6f9864u), 0x1u);
    /* 0050bd52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd53: ret  */ FN_RET(0x0050bd48); r_esp += 4; return;
}

void f_0050bd54(void) /* FUN_0050bd54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd54);
    /* 0050bd54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd55: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd57: call 0x50bd5e */ r_esp -= 4; W32(r_esp, 0x50bd5cu); f_0050bd5e();
    /* 0050bd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd5d: ret  */ FN_RET(0x0050bd54); r_esp += 4; return;
}

void f_0050bd5e(void) /* FUN_0050bd5e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd5e);
    /* 0050bd5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd5f: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd61: mov byte ptr [0x6f98e0], 0 */ W8((u32)(0x6f98e0u), 0x0u);
    /* 0050bd68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd69: ret  */ FN_RET(0x0050bd5e); r_esp += 4; return;
}

void f_0050bd6a(void) /* FUN_0050bd6a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd6a);
    /* 0050bd6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd6b: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd6d: call 0x50bd74 */ r_esp -= 4; W32(r_esp, 0x50bd72u); f_0050bd74();
    /* 0050bd72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd73: ret  */ FN_RET(0x0050bd6a); r_esp += 4; return;
}

void f_0050bd74(void) /* FUN_0050bd74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd74);
    /* 0050bd74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd75: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd77: mov byte ptr [0x6f986c], 0x60 */ W8((u32)(0x6f986cu), 0x60u);
    /* 0050bd7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd7f: ret  */ FN_RET(0x0050bd74); r_esp += 4; return;
}

void f_0050bd80(void) /* FUN_0050bd80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd80);
    /* 0050bd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd81: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd83: call 0x50bd8a */ r_esp -= 4; W32(r_esp, 0x50bd88u); f_0050bd8a();
    /* 0050bd88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd89: ret  */ FN_RET(0x0050bd80); r_esp += 4; return;
}

void f_0050bd8a(void) /* FUN_0050bd8a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd8a);
    /* 0050bd8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd8b: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd8d: mov byte ptr [0x6f98a8], 0x50 */ W8((u32)(0x6f98a8u), 0x50u);
    /* 0050bd94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd95: ret  */ FN_RET(0x0050bd8a); r_esp += 4; return;
}

void f_0050bd96(void) /* FUN_0050bd96 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bd96);
    /* 0050bd96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd97: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd99: call 0x50bda0 */ r_esp -= 4; W32(r_esp, 0x50bd9eu); f_0050bda0();
    /* 0050bd9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd9f: ret  */ FN_RET(0x0050bd96); r_esp += 4; return;
}

void f_0050bda0(void) /* FUN_0050bda0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bda0);
    /* 0050bda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bda3: mov byte ptr [0x6f9890], 0x40 */ W8((u32)(0x6f9890u), 0x40u);
    /* 0050bdaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bdab: ret  */ FN_RET(0x0050bda0); r_esp += 4; return;
}

void f_0050bdac(void) /* FUN_0050bdac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bdac);
    /* 0050bdac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bdad: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bdaf: call 0x50bdb6 */ r_esp -= 4; W32(r_esp, 0x50bdb4u); f_0050bdb6();
    /* 0050bdb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bdb5: ret  */ FN_RET(0x0050bdac); r_esp += 4; return;
}

void f_0050bdb6(void) /* FUN_0050bdb6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bdb6);
    /* 0050bdb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bdb7: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bdb9: mov byte ptr [0x6f98b4], 0x30 */ W8((u32)(0x6f98b4u), 0x30u);
    /* 0050bdc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bdc1: ret  */ FN_RET(0x0050bdb6); r_esp += 4; return;
}

void f_0050bdc2(void) /* FUN_0050bdc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bdc2);
    /* 0050bdc2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bdc3: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bdc5: call 0x50bdcc */ r_esp -= 4; W32(r_esp, 0x50bdcau); f_0050bdcc();
    /* 0050bdca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bdcb: ret  */ FN_RET(0x0050bdc2); r_esp += 4; return;
}

void f_0050bdcc(void) /* FUN_0050bdcc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bdcc);
    /* 0050bdcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bdcd: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bdcf: mov byte ptr [0x6f9894], 0x20 */ W8((u32)(0x6f9894u), 0x20u);
    /* 0050bdd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bdd7: ret  */ FN_RET(0x0050bdcc); r_esp += 4; return;
}

void f_0050bdd8(void) /* FUN_0050bdd8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bdd8);
    /* 0050bdd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bdd9: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bddb: call 0x50bde2 */ r_esp -= 4; W32(r_esp, 0x50bde0u); f_0050bde2();
    /* 0050bde0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bde1: ret  */ FN_RET(0x0050bdd8); r_esp += 4; return;
}

void f_0050bde2(void) /* FUN_0050bde2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bde2);
    /* 0050bde2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bde3: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bde5: mov byte ptr [0x6f9858], 0x10 */ W8((u32)(0x6f9858u), 0x10u);
    /* 0050bdec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bded: ret  */ FN_RET(0x0050bde2); r_esp += 4; return;
}

void f_0050bdee(void) /* FUN_0050bdee */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bdee);
    /* 0050bdee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bdef: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bdf1: call 0x50bdf8 */ r_esp -= 4; W32(r_esp, 0x50bdf6u); f_0050bdf8();
    /* 0050bdf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bdf7: ret  */ FN_RET(0x0050bdee); r_esp += 4; return;
}

void f_0050bdf8(void) /* FUN_0050bdf8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bdf8);
    /* 0050bdf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bdf9: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bdfb: mov dword ptr [0x6f98d4], 0x6f98b0 */ W32((u32)(0x6f98d4u), 0x6f98b0u);
    /* 0050be05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be06: ret  */ FN_RET(0x0050bdf8); r_esp += 4; return;
}

void f_0050be07(void) /* FUN_0050be07 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be07);
    /* 0050be07: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be08: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be0a: call 0x50be11 */ r_esp -= 4; W32(r_esp, 0x50be0fu); f_0050be11();
    /* 0050be0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be10: ret  */ FN_RET(0x0050be07); r_esp += 4; return;
}

void f_0050be11(void) /* FUN_0050be11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be11);
    /* 0050be11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be12: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be14: mov dword ptr [0x6f98f8], 0x6f98ec */ W32((u32)(0x6f98f8u), 0x6f98ecu);
    /* 0050be1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be1f: ret  */ FN_RET(0x0050be11); r_esp += 4; return;
}

void f_0050be20(void) /* FUN_0050be20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be20);
    /* 0050be20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be21: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be23: call 0x50be2a */ r_esp -= 4; W32(r_esp, 0x50be28u); f_0050be2a();
    /* 0050be28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be29: ret  */ FN_RET(0x0050be20); r_esp += 4; return;
}

void f_0050be2a(void) /* FUN_0050be2a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be2a);
    /* 0050be2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be2b: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be2d: mov dword ptr [0x6f98a4], 0x6f98dc */ W32((u32)(0x6f98a4u), 0x6f98dcu);
    /* 0050be37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be38: ret  */ FN_RET(0x0050be2a); r_esp += 4; return;
}

void f_0050be39(void) /* FUN_0050be39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be39);
    /* 0050be39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be3a: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be3c: call 0x50be43 */ r_esp -= 4; W32(r_esp, 0x50be41u); f_0050be43();
    /* 0050be41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be42: ret  */ FN_RET(0x0050be39); r_esp += 4; return;
}

void f_0050be43(void) /* FUN_0050be43 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be43);
    /* 0050be43: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be44: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be46: mov dword ptr [0x6f98ac], 0x6f987c */ W32((u32)(0x6f98acu), 0x6f987cu);
    /* 0050be50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be51: ret  */ FN_RET(0x0050be43); r_esp += 4; return;
}

void f_0050be52(void) /* FUN_0050be52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be52);
    /* 0050be52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be53: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be55: call 0x50be5c */ r_esp -= 4; W32(r_esp, 0x50be5au); f_0050be5c();
    /* 0050be5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be5b: ret  */ FN_RET(0x0050be52); r_esp += 4; return;
}

void f_0050be5c(void) /* FUN_0050be5c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be5c);
    /* 0050be5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be5d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be5f: mov dword ptr [0x6f98bc], 0x6f98c0 */ W32((u32)(0x6f98bcu), 0x6f98c0u);
    /* 0050be69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be6a: ret  */ FN_RET(0x0050be5c); r_esp += 4; return;
}

void f_0050be6b(void) /* FUN_0050be6b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be6b);
    /* 0050be6b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be6c: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be6e: call 0x50be75 */ r_esp -= 4; W32(r_esp, 0x50be73u); f_0050be75();
    /* 0050be73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be74: ret  */ FN_RET(0x0050be6b); r_esp += 4; return;
}

void f_0050be75(void) /* FUN_0050be75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be75);
    /* 0050be75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be76: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be78: mov dword ptr [0x6f98c4], 0x6f98e4 */ W32((u32)(0x6f98c4u), 0x6f98e4u);
    /* 0050be82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be83: ret  */ FN_RET(0x0050be75); r_esp += 4; return;
}

void f_0050be84(void) /* FUN_0050be84 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be84);
    /* 0050be84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be85: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be87: call 0x50be8e */ r_esp -= 4; W32(r_esp, 0x50be8cu); f_0050be8e();
    /* 0050be8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be8d: ret  */ FN_RET(0x0050be84); r_esp += 4; return;
}

void f_0050be8e(void) /* FUN_0050be8e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be8e);
    /* 0050be8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be8f: mov ebp, esp */ r_ebp = r_esp;
    /* 0050be91: mov dword ptr [0x6f9870], 0x6f98a0 */ W32((u32)(0x6f9870u), 0x6f98a0u);
    /* 0050be9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050be9c: ret  */ FN_RET(0x0050be8e); r_esp += 4; return;
}

void f_0050be9d(void) /* FUN_0050be9d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050be9d);
    /* 0050be9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050be9e: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bea0: call 0x50bea7 */ r_esp -= 4; W32(r_esp, 0x50bea5u); f_0050bea7();
    /* 0050bea5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bea6: ret  */ FN_RET(0x0050be9d); r_esp += 4; return;
}

void f_0050bea7(void) /* FUN_0050bea7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bea7);
    /* 0050bea7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bea8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050beaa: mov dword ptr [0x6f98e8], 0x6f98fc */ W32((u32)(0x6f98e8u), 0x6f98fcu);
    /* 0050beb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050beb5: ret  */ FN_RET(0x0050bea7); r_esp += 4; return;
}

void f_0050beb6(void) /* FUN_0050beb6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050beb6);
    /* 0050beb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050beb7: mov ebp, esp */ r_ebp = r_esp;
    /* 0050beb9: call 0x50bec0 */ r_esp -= 4; W32(r_esp, 0x50bebeu); f_0050bec0();
    /* 0050bebe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bebf: ret  */ FN_RET(0x0050beb6); r_esp += 4; return;
}

void f_0050bec0(void) /* FUN_0050bec0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bec0);
    /* 0050bec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bec1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bec3: mov dword ptr [0x6f988c], 0x6f98c8 */ W32((u32)(0x6f988cu), 0x6f98c8u);
    /* 0050becd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bece: ret  */ FN_RET(0x0050bec0); r_esp += 4; return;
}

void f_0050becf(void) /* FUN_0050becf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050becf);
    /* 0050becf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bed0: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bed2: call 0x50bed9 */ r_esp -= 4; W32(r_esp, 0x50bed7u); f_0050bed9();
    /* 0050bed7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bed8: ret  */ FN_RET(0x0050becf); r_esp += 4; return;
}

void f_0050bed9(void) /* FUN_0050bed9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bed9);
    /* 0050bed9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050beda: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bedc: mov dword ptr [0x6f98cc], 0x6f9878 */ W32((u32)(0x6f98ccu), 0x6f9878u);
    /* 0050bee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bee7: ret  */ FN_RET(0x0050bed9); r_esp += 4; return;
}

void f_0050bee8(void) /* FUN_0050bee8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bee8);
    /* 0050bee8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bee9: mov ebp, esp */ r_ebp = r_esp;
    /* 0050beeb: call 0x50bef2 */ r_esp -= 4; W32(r_esp, 0x50bef0u); f_0050bef2();
    /* 0050bef0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bef1: ret  */ FN_RET(0x0050bee8); r_esp += 4; return;
}

void f_0050bef2(void) /* FUN_0050bef2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bef2);
    /* 0050bef2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bef3: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bef5: mov dword ptr [0x6f98f0], 0x6f98b8 */ W32((u32)(0x6f98f0u), 0x6f98b8u);
    /* 0050beff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf00: ret  */ FN_RET(0x0050bef2); r_esp += 4; return;
}

void f_0050bf01(void) /* FUN_0050bf01 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf01);
    /* 0050bf01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf02: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf04: call 0x50bf0b */ r_esp -= 4; W32(r_esp, 0x50bf09u); f_0050bf0b();
    /* 0050bf09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf0a: ret  */ FN_RET(0x0050bf01); r_esp += 4; return;
}

void f_0050bf0b(void) /* FUN_0050bf0b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf0b);
    /* 0050bf0b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf0c: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf0e: mov dword ptr [0x6f9860], 0x6f9888 */ W32((u32)(0x6f9860u), 0x6f9888u);
    /* 0050bf18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf19: ret  */ FN_RET(0x0050bf0b); r_esp += 4; return;
}

void f_0050bf1a(void) /* FUN_0050bf1a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf1a);
    /* 0050bf1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf1b: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf1d: call 0x50bf24 */ r_esp -= 4; W32(r_esp, 0x50bf22u); f_0050bf24();
    /* 0050bf22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf23: ret  */ FN_RET(0x0050bf1a); r_esp += 4; return;
}

void f_0050bf24(void) /* FUN_0050bf24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf24);
    /* 0050bf24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf25: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf27: mov dword ptr [0x6f989c], 0x6f9884 */ W32((u32)(0x6f989cu), 0x6f9884u);
    /* 0050bf31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf32: ret  */ FN_RET(0x0050bf24); r_esp += 4; return;
}

void f_0050bf33(void) /* FUN_0050bf33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf33);
    /* 0050bf33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf34: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf36: call 0x50bf3d */ r_esp -= 4; W32(r_esp, 0x50bf3bu); f_0050bf3d();
    /* 0050bf3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf3c: ret  */ FN_RET(0x0050bf33); r_esp += 4; return;
}

void f_0050bf3d(void) /* FUN_0050bf3d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf3d);
    /* 0050bf3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf3e: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf40: mov dword ptr [0x6f9898], 0x6f9864 */ W32((u32)(0x6f9898u), 0x6f9864u);
    /* 0050bf4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf4b: ret  */ FN_RET(0x0050bf3d); r_esp += 4; return;
}

void f_0050bf4c(void) /* FUN_0050bf4c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf4c);
    /* 0050bf4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf4d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf4f: call 0x50bf56 */ r_esp -= 4; W32(r_esp, 0x50bf54u); f_0050bf56();
    /* 0050bf54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf55: ret  */ FN_RET(0x0050bf4c); r_esp += 4; return;
}

void f_0050bf56(void) /* FUN_0050bf56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf56);
    /* 0050bf56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf57: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf59: mov dword ptr [0x6f98f4], 0x6f98e0 */ W32((u32)(0x6f98f4u), 0x6f98e0u);
    /* 0050bf63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf64: ret  */ FN_RET(0x0050bf56); r_esp += 4; return;
}

void f_0050bf65(void) /* FUN_0050bf65 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf65);
    /* 0050bf65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf66: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf68: call 0x50bf6f */ r_esp -= 4; W32(r_esp, 0x50bf6du); f_0050bf6f();
    /* 0050bf6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf6e: ret  */ FN_RET(0x0050bf65); r_esp += 4; return;
}

void f_0050bf6f(void) /* FUN_0050bf6f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf6f);
    /* 0050bf6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf70: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf72: mov dword ptr [0x6f985c], 0x6f986c */ W32((u32)(0x6f985cu), 0x6f986cu);
    /* 0050bf7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf7d: ret  */ FN_RET(0x0050bf6f); r_esp += 4; return;
}

void f_0050bf7e(void) /* FUN_0050bf7e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf7e);
    /* 0050bf7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf7f: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf81: call 0x50bf88 */ r_esp -= 4; W32(r_esp, 0x50bf86u); f_0050bf88();
    /* 0050bf86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf87: ret  */ FN_RET(0x0050bf7e); r_esp += 4; return;
}

void f_0050bf88(void) /* FUN_0050bf88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf88);
    /* 0050bf88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf89: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf8b: mov dword ptr [0x6f9880], 0x6f98a8 */ W32((u32)(0x6f9880u), 0x6f98a8u);
    /* 0050bf95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf96: ret  */ FN_RET(0x0050bf88); r_esp += 4; return;
}

void f_0050bf97(void) /* FUN_0050bf97 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bf97);
    /* 0050bf97: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf98: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bf9a: call 0x50bfa1 */ r_esp -= 4; W32(r_esp, 0x50bf9fu); f_0050bfa1();
    /* 0050bf9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bfa0: ret  */ FN_RET(0x0050bf97); r_esp += 4; return;
}

void f_0050bfa1(void) /* FUN_0050bfa1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bfa1);
    /* 0050bfa1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bfa2: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bfa4: mov dword ptr [0x6f9874], 0x6f9890 */ W32((u32)(0x6f9874u), 0x6f9890u);
    /* 0050bfae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bfaf: ret  */ FN_RET(0x0050bfa1); r_esp += 4; return;
}

void f_0050bfb0(void) /* FUN_0050bfb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bfb0);
    /* 0050bfb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bfb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bfb3: call 0x50bfba */ r_esp -= 4; W32(r_esp, 0x50bfb8u); f_0050bfba();
    /* 0050bfb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bfb9: ret  */ FN_RET(0x0050bfb0); r_esp += 4; return;
}

void f_0050bfba(void) /* FUN_0050bfba */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bfba);
    /* 0050bfba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bfbb: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bfbd: mov dword ptr [0x6f98d0], 0x6f98b4 */ W32((u32)(0x6f98d0u), 0x6f98b4u);
    /* 0050bfc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bfc8: ret  */ FN_RET(0x0050bfba); r_esp += 4; return;
}

void f_0050bfc9(void) /* FUN_0050bfc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bfc9);
    /* 0050bfc9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bfca: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bfcc: call 0x50bfd3 */ r_esp -= 4; W32(r_esp, 0x50bfd1u); f_0050bfd3();
    /* 0050bfd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bfd2: ret  */ FN_RET(0x0050bfc9); r_esp += 4; return;
}

void f_0050bfd3(void) /* FUN_0050bfd3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bfd3);
    /* 0050bfd3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bfd4: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bfd6: mov dword ptr [0x6f9868], 0x6f9894 */ W32((u32)(0x6f9868u), 0x6f9894u);
    /* 0050bfe0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bfe1: ret  */ FN_RET(0x0050bfd3); r_esp += 4; return;
}

void f_0050bfe2(void) /* FUN_0050bfe2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bfe2);
    /* 0050bfe2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bfe3: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bfe5: call 0x50bfec */ r_esp -= 4; W32(r_esp, 0x50bfeau); f_0050bfec();
    /* 0050bfea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bfeb: ret  */ FN_RET(0x0050bfe2); r_esp += 4; return;
}

void f_0050bfec(void) /* FUN_0050bfec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bfec);
    /* 0050bfec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bfed: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bfef: mov dword ptr [0x6f98d8], 0x6f9858 */ W32((u32)(0x6f98d8u), 0x6f9858u);
    /* 0050bff9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bffa: ret  */ FN_RET(0x0050bfec); r_esp += 4; return;
}

void f_0050bffb(void) /* FUN_0050bffb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050bffb);
    /* 0050bffb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bffc: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bffe: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c001: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050c004: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050c007: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c009: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c00b: mov edx, dword ptr [0x6f98a4] */ r_edx = R32((u32)(0x6f98a4u));
    /* 0050c011: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c013: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c015: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c017: jl 0x50c02b */ if ((fS!=fO)) goto L_0050c02b;
L_0050c019:; BB(0x0050c019);
    /* 0050c019: mov ecx, dword ptr [0x6fa04c] */ r_ecx = R32((u32)(0x6fa04cu));
    /* 0050c01f: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0050c021: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c024: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0050c026: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c029: jmp 0x50c043 */ goto L_0050c043;
L_0050c02b:; BB(0x0050c02b);
    /* 0050c02b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050c02e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050c030: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0050c032: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c035: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
    /* 0050c038: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c03b: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0050c03e: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0050c040: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0050c043:; BB(0x0050c043);
    /* 0050c043: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c045: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c046: ret 4 */ FN_RET(0x0050bffb); r_esp += 8; return;
}

void f_0050c049(void) /* FUN_0050c049 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c049);
    /* 0050c049: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c04a: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c04c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c04f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050c052: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050c055: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c057: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c059: mov edx, dword ptr [0x6f98d4] */ r_edx = R32((u32)(0x6f98d4u));
    /* 0050c05f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c061: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c063: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c065: jne 0x50c079 */ if (!fZ) goto L_0050c079;
L_0050c067:; BB(0x0050c067);
    /* 0050c067: mov ecx, dword ptr [0x6fa0d0] */ r_ecx = R32((u32)(0x6fa0d0u));
    /* 0050c06d: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0050c06f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c072: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0050c074: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c077: jmp 0x50c0b7 */ goto L_0050c0b7;
L_0050c079:; BB(0x0050c079);
    /* 0050c079: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050c07c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050c07e: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0050c080: mov eax, dword ptr [0x6f98a4] */ r_eax = R32((u32)(0x6f98a4u));
    /* 0050c085: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c087: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c089: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c08b: jl 0x50c09f */ if ((fS!=fO)) goto L_0050c09f;
L_0050c08d:; BB(0x0050c08d);
    /* 0050c08d: mov edx, dword ptr [0x6fa0b8] */ r_edx = R32((u32)(0x6fa0b8u));
    /* 0050c093: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c095: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c098: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0050c09a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c09d: jmp 0x50c0b7 */ goto L_0050c0b7;
L_0050c09f:; BB(0x0050c09f);
    /* 0050c09f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050c0a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c0a4: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c0a6: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c0a9: mov byte ptr [ebp - 4], al */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_eax);
    /* 0050c0ac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c0af: mov dl, byte ptr [ebp - 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0050c0b2: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 0050c0b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0050c0b7:; BB(0x0050c0b7);
    /* 0050c0b7: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c0b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c0ba: ret 4 */ FN_RET(0x0050c049); r_esp += 8; return;
}

void f_0050c0bd(void) /* FUN_0050c0bd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c0bd);
    /* 0050c0bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c0be: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c0c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c0c1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c0c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c0c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c0c9: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c0cb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c0ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c0d0: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c0d2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c0d4: jne 0x50c0dd */ if (!fZ) goto L_0050c0dd;
L_0050c0d6:; BB(0x0050c0d6);
    /* 0050c0d6: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c0db: jmp 0x50c0df */ goto L_0050c0df;
L_0050c0dd:; BB(0x0050c0dd);
    /* 0050c0dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0050c0df:; BB(0x0050c0df);
    /* 0050c0df: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c0e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c0e2: ret 4 */ FN_RET(0x0050c0bd); r_esp += 8; return;
}

void f_0050c0e5(void) /* FUN_0050c0e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c0e5);
    /* 0050c0e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c0e6: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c0e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c0e9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c0ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c0ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c0f1: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c0f3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c0f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c0f8: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c0fa: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c0fc: jne 0x50c102 */ if (!fZ) goto L_0050c102;
L_0050c0fe:; BB(0x0050c0fe);
    /* 0050c0fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c100: jmp 0x50c107 */ goto L_0050c107;
L_0050c102:; BB(0x0050c102);
    /* 0050c102: mov eax, 1 */ r_eax = 0x1u;
L_0050c107:; BB(0x0050c107);
    /* 0050c107: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c109: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c10a: ret 4 */ FN_RET(0x0050c0e5); r_esp += 8; return;
}

void f_0050c10d(void) /* FUN_0050c10d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c10d);
    /* 0050c10d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c10e: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c110: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c111: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c114: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c117: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c119: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c11b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c11e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c120: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c122: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c124: jne 0x50c12d */ if (!fZ) goto L_0050c12d;
L_0050c126:; BB(0x0050c126);
    /* 0050c126: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c12b: jmp 0x50c12f */ goto L_0050c12f;
L_0050c12d:; BB(0x0050c12d);
    /* 0050c12d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0050c12f:; BB(0x0050c12f);
    /* 0050c12f: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c131: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c132: ret 4 */ FN_RET(0x0050c10d); r_esp += 8; return;
}

void f_0050c135(void) /* FUN_0050c135 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c135);
    /* 0050c135: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c136: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c138: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c139: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c13c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c13f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c141: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c143: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c146: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c148: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c14a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c14c: jne 0x50c152 */ if (!fZ) goto L_0050c152;
L_0050c14e:; BB(0x0050c14e);
    /* 0050c14e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c150: jmp 0x50c157 */ goto L_0050c157;
L_0050c152:; BB(0x0050c152);
    /* 0050c152: mov eax, 1 */ r_eax = 0x1u;
L_0050c157:; BB(0x0050c157);
    /* 0050c157: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c159: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c15a: ret 4 */ FN_RET(0x0050c135); r_esp += 8; return;
}

void f_0050c15d(void) /* FUN_0050c15d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c15d);
    /* 0050c15d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c15e: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c160: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c161: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c164: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c167: mov byte ptr [eax], 0xff */ W8((u32)(r_eax), 0xffu);
    /* 0050c16a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c16d: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c16f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c170: ret  */ FN_RET(0x0050c15d); r_esp += 4; return;
}

void f_0050c171(void) /* FUN_0050c171 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c171);
    /* 0050c171: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c172: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c174: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c175: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c178: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c17b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c17d: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c17f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050c182: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c184: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c186: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c188: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c18b: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0050c18d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c190: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c192: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c193: ret 8 */ FN_RET(0x0050c171); r_esp += 12; return;
}

void f_0050c196(void) /* FUN_0050c196 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c196);
    /* 0050c196: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c197: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c199: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c19a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c19d: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c19f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c1a0: ret  */ FN_RET(0x0050c196); r_esp += 4; return;
}

void f_0050c1a1(void) /* FUN_0050c1a1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c1a1);
    /* 0050c1a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c1a2: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c1a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c1a5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c1a8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c1ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c1ad: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c1af: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050c1b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c1b4: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c1b6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c1b8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c1bb: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0050c1bd: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c1bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c1c0: ret 8 */ FN_RET(0x0050c1a1); r_esp += 12; return;
}

void f_0050c1c3(void) /* FUN_0050c1c3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c1c3);
    /* 0050c1c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c1c4: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c1c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c1c7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c1ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c1cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c1cf: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c1d1: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c1d4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c1d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c1d9: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c1db: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c1dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c1e0: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0050c1e2: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c1e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c1e5: ret 4 */ FN_RET(0x0050c1c3); r_esp += 8; return;
}

void f_0050c1e8(void) /* FUN_0050c1e8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c1e8);
    /* 0050c1e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c1e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c1eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c1ec: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c1ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c1f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c1f4: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c1f6: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c1fc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c1ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c201: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c203: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c205: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c208: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0050c20a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c20c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c20d: ret 4 */ FN_RET(0x0050c1e8); r_esp += 8; return;
}

void f_0050c210(void) /* FUN_0050c210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c210);
    /* 0050c210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c211: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c213: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c216: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050c219: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050c21c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c21e: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c220: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c226: mov byte ptr [ebp - 4], cl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_ecx);
    /* 0050c229: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c22c: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0050c22f: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0050c231: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c234: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c236: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c237: ret 4 */ FN_RET(0x0050c210); r_esp += 8; return;
}

void f_0050c23a(void) /* FUN_0050c23a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c23a);
    /* 0050c23a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c23b: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c23d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c240: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050c243: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050c246: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c248: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c24a: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c24d: mov byte ptr [ebp - 4], cl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_ecx);
    /* 0050c250: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c253: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0050c256: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0050c258: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c25b: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c25d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c25e: ret 4 */ FN_RET(0x0050c23a); r_esp += 8; return;
}

void f_0050c261(void) /* FUN_0050c261 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c261);
    /* 0050c261: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c262: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c264: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c265: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c268: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c26b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c26d: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c26f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c272: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c274: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c276: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c278: jne 0x50c281 */ if (!fZ) goto L_0050c281;
L_0050c27a:; BB(0x0050c27a);
    /* 0050c27a: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c27f: jmp 0x50c283 */ goto L_0050c283;
L_0050c281:; BB(0x0050c281);
    /* 0050c281: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0050c283:; BB(0x0050c283);
    /* 0050c283: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c285: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c286: ret 4 */ FN_RET(0x0050c261); r_esp += 8; return;
}

void f_0050c289(void) /* FUN_0050c289 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c289);
    /* 0050c289: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c28a: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c28c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c28d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c290: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c293: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c295: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c297: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c29a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c29c: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c29e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c2a0: je 0x50c2a9 */ if (fZ) goto L_0050c2a9;
L_0050c2a2:; BB(0x0050c2a2);
    /* 0050c2a2: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c2a7: jmp 0x50c2ab */ goto L_0050c2ab;
L_0050c2a9:; BB(0x0050c2a9);
    /* 0050c2a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0050c2ab:; BB(0x0050c2ab);
    /* 0050c2ab: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c2ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c2ae: ret 4 */ FN_RET(0x0050c289); r_esp += 8; return;
}

void f_0050c2c0(void) /* FUN_0050c2c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c2c0);
    /* 0050c2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c2c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c2c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c2c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c2ca: mov word ptr [eax], 0xffff */ W16((u32)(r_eax), 0xffffu);
    /* 0050c2cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c2d2: mov word ptr [ecx + 2], 0 */ W16((u32)(r_ecx+0x2u), 0x0u);
    /* 0050c2d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c2db: mov word ptr [edx + 4], 0 */ W16((u32)(r_edx+0x4u), 0x0u);
    /* 0050c2e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c2e4: mov word ptr [eax + 6], 0 */ W16((u32)(r_eax+0x6u), 0x0u);
    /* 0050c2ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c2ed: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0050c2f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c2f4: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 0050c2f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c2fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c2fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c2fe: ret  */ FN_RET(0x0050c2c0); r_esp += 4; return;
}

void f_0050c2ff(void) /* FUN_0050c2ff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c2ff);
    /* 0050c2ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c300: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c302: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c303: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c306: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c309: ret  */ FN_RET(0x0050c2ff); r_esp += 4; return;
}

void f_0050c30a(void) /* FUN_0050c30a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c30a);
    /* 0050c30a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c30b: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c30d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c30e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c311: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c314: mov word ptr [eax], 0x1fff */ W16((u32)(r_eax), 0x1fffu);
    /* 0050c319: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c31c: mov word ptr [ecx + 2], 0x1fff */ W16((u32)(r_ecx+0x2u), 0x1fffu);
    /* 0050c322: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c325: mov word ptr [edx + 4], 0x1fff */ W16((u32)(r_edx+0x4u), 0x1fffu);
    /* 0050c32b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c32e: mov word ptr [eax + 6], 0x1fff */ W16((u32)(r_eax+0x6u), 0x1fffu);
    /* 0050c334: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c337: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0050c33b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c33e: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 0050c342: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c344: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c345: ret  */ FN_RET(0x0050c30a); r_esp += 4; return;
}

void f_0050c346(void) /* FUN_0050c346 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c346);
    /* 0050c346: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c347: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c349: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c34a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c34d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c350: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 0050c355: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c358: mov word ptr [ecx + 2], 0 */ W16((u32)(r_ecx+0x2u), 0x0u);
    /* 0050c35e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c361: mov word ptr [edx + 4], 0 */ W16((u32)(r_edx+0x4u), 0x0u);
    /* 0050c367: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c36a: mov word ptr [eax + 6], 0 */ W16((u32)(r_eax+0x6u), 0x0u);
    /* 0050c370: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c373: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0050c377: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c37a: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 0050c37e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c380: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c381: ret  */ FN_RET(0x0050c346); r_esp += 4; return;
}

void f_0050c382(void) /* FUN_0050c382 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c382);
    /* 0050c382: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c383: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c385: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c388: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0050c38b: mov eax, dword ptr [0x6f98d4] */ r_eax = R32((u32)(0x6f98d4u));
    /* 0050c390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c391: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0050c394: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c395: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c398: call 0x50c23a */ r_esp -= 4; W32(r_esp, 0x50c39du); f_0050c23a();
    /* 0050c39d: mov ecx, eax */ r_ecx = r_eax;
    /* 0050c39f: call 0x50c0bd */ r_esp -= 4; W32(r_esp, 0x50c3a4u); f_0050c0bd();
    /* 0050c3a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c3a6: je 0x50c3b8 */ if (fZ) goto L_0050c3b8;
L_0050c3a8:; BB(0x0050c3a8);
    /* 0050c3a8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c3ab: mov al, byte ptr [edx + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x9u))) & 0xffu);
    /* 0050c3ae: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050c3b0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c3b3: mov byte ptr [ecx + 9], al */ W8((u32)(r_ecx+0x9u), (u8)r_eax);
    /* 0050c3b6: jmp 0x50c41c */ goto L_0050c41c;
L_0050c3b8:; BB(0x0050c3b8);
    /* 0050c3b8: mov edx, dword ptr [0x6f98f8] */ r_edx = R32((u32)(0x6f98f8u));
    /* 0050c3be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3bf: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0050c3c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3c3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c3c6: call 0x50c23a */ r_esp -= 4; W32(r_esp, 0x50c3cbu); f_0050c23a();
    /* 0050c3cb: mov ecx, eax */ r_ecx = r_eax;
    /* 0050c3cd: call 0x50c0bd */ r_esp -= 4; W32(r_esp, 0x50c3d2u); f_0050c0bd();
    /* 0050c3d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c3d4: je 0x50c3e7 */ if (fZ) goto L_0050c3e7;
L_0050c3d6:; BB(0x0050c3d6);
    /* 0050c3d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c3d9: mov dl, byte ptr [ecx + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x8u))) & 0xffu);
    /* 0050c3dc: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050c3df: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c3e2: mov byte ptr [eax + 8], dl */ W8((u32)(r_eax+0x8u), (u8)r_edx);
    /* 0050c3e5: jmp 0x50c41c */ goto L_0050c41c;
L_0050c3e7:; BB(0x0050c3e7);
    /* 0050c3e7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c3ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c3ee: call 0x50c766 */ r_esp -= 4; W32(r_esp, 0x50c3f3u); f_0050c766();
    /* 0050c3f3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050c3f6: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0050c3f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3fa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c3fd: call 0x50c23a */ r_esp -= 4; W32(r_esp, 0x50c402u); f_0050c23a();
    /* 0050c402: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0050c404: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c406: mov edx, 1 */ r_edx = 0x1u;
    /* 0050c40b: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050c40d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c410: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0050c413: or cx, dx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_edx; u32 r = (a | b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050c416: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c419: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
L_0050c41c:; BB(0x0050c41c);
    /* 0050c41c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c41e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c41f: ret 4 */ FN_RET(0x0050c382); r_esp += 8; return;
}

void f_0050c422(void) /* FUN_0050c422 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c422);
    /* 0050c422: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c423: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c425: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c428: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050c42b: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050c431: jmp 0x50c43f */ goto L_0050c43f;
L_0050c433:; BB(0x0050c433);
    /* 0050c433: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050c437: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050c43b: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0050c43f:; BB(0x0050c43f);
    /* 0050c43f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c443: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c446: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0050c44a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c44c: jge 0x50c464 */ if ((fS==fO)) goto L_0050c464;
L_0050c44e:; BB(0x0050c44e);
    /* 0050c44e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c452: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c455: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050c457: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c459: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c45a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050c45d: call 0x50c382 */ r_esp -= 4; W32(r_esp, 0x50c462u); f_0050c382();
    /* 0050c462: jmp 0x50c433 */ goto L_0050c433;
L_0050c464:; BB(0x0050c464);
    /* 0050c464: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c466: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c467: ret 4 */ FN_RET(0x0050c422); r_esp += 8; return;
}

void f_0050c46a(void) /* FUN_0050c46a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c46a);
    /* 0050c46a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c46b: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c46d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c470: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0050c473: mov eax, dword ptr [0x6f98d4] */ r_eax = R32((u32)(0x6f98d4u));
    /* 0050c478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c479: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0050c47c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c47d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c480: call 0x50c23a */ r_esp -= 4; W32(r_esp, 0x50c485u); f_0050c23a();
    /* 0050c485: mov ecx, eax */ r_ecx = r_eax;
    /* 0050c487: call 0x50c0bd */ r_esp -= 4; W32(r_esp, 0x50c48cu); f_0050c0bd();
    /* 0050c48c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c48e: je 0x50c4a0 */ if (fZ) goto L_0050c4a0;
L_0050c490:; BB(0x0050c490);
    /* 0050c490: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c493: mov al, byte ptr [edx + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x9u))) & 0xffu);
    /* 0050c496: sub al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050c498: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c49b: mov byte ptr [ecx + 9], al */ W8((u32)(r_ecx+0x9u), (u8)r_eax);
    /* 0050c49e: jmp 0x50c50b */ goto L_0050c50b;
L_0050c4a0:; BB(0x0050c4a0);
    /* 0050c4a0: mov edx, dword ptr [0x6f98f8] */ r_edx = R32((u32)(0x6f98f8u));
    /* 0050c4a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c4a7: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0050c4aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c4ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c4ae: call 0x50c23a */ r_esp -= 4; W32(r_esp, 0x50c4b3u); f_0050c23a();
    /* 0050c4b3: mov ecx, eax */ r_ecx = r_eax;
    /* 0050c4b5: call 0x50c0bd */ r_esp -= 4; W32(r_esp, 0x50c4bau); f_0050c0bd();
    /* 0050c4ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c4bc: je 0x50c4cf */ if (fZ) goto L_0050c4cf;
L_0050c4be:; BB(0x0050c4be);
    /* 0050c4be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c4c1: mov dl, byte ptr [ecx + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x8u))) & 0xffu);
    /* 0050c4c4: sub dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050c4c7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c4ca: mov byte ptr [eax + 8], dl */ W8((u32)(r_eax+0x8u), (u8)r_edx);
    /* 0050c4cd: jmp 0x50c50b */ goto L_0050c50b;
L_0050c4cf:; BB(0x0050c4cf);
    /* 0050c4cf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c4d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c4d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c4d6: call 0x50c766 */ r_esp -= 4; W32(r_esp, 0x50c4dbu); f_0050c766();
    /* 0050c4db: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050c4de: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0050c4e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c4e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c4e5: call 0x50c23a */ r_esp -= 4; W32(r_esp, 0x50c4eau); f_0050c23a();
    /* 0050c4ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0050c4ec: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c4ee: mov edx, 1 */ r_edx = 0x1u;
    /* 0050c4f3: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050c4f5: mov eax, 0x1fff */ r_eax = 0x1fffu;
    /* 0050c4fa: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050c4fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c4ff: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0050c502: and dx, ax */ {  u32 a = (u16)r_edx; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050c505: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c508: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
L_0050c50b:; BB(0x0050c50b);
    /* 0050c50b: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c50d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c50e: ret 4 */ FN_RET(0x0050c46a); r_esp += 8; return;
}

void f_0050c511(void) /* FUN_0050c511 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c511);
    /* 0050c511: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c512: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c514: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c517: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050c51a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050c520: jmp 0x50c52e */ goto L_0050c52e;
L_0050c522:; BB(0x0050c522);
    /* 0050c522: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050c526: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050c52a: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0050c52e:; BB(0x0050c52e);
    /* 0050c52e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c532: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c535: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0050c539: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c53b: jge 0x50c553 */ if ((fS==fO)) goto L_0050c553;
L_0050c53d:; BB(0x0050c53d);
    /* 0050c53d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c541: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c544: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050c546: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c549: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050c54c: call 0x50c46a */ r_esp -= 4; W32(r_esp, 0x50c551u); f_0050c46a();
    /* 0050c551: jmp 0x50c522 */ goto L_0050c522;
L_0050c553:; BB(0x0050c553);
    /* 0050c553: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c555: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c556: ret 4 */ FN_RET(0x0050c511); r_esp += 8; return;
}

void f_0050c559(void) /* FUN_0050c559 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c559);
    /* 0050c559: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c55a: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c55c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c55d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050c560: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c563: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c565: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0050c568: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c56a: je 0x50c595 */ if (fZ) goto L_0050c595;
L_0050c56c:; BB(0x0050c56c);
    /* 0050c56c: mov edx, dword ptr [0x6f9874] */ r_edx = R32((u32)(0x6f9874u));
    /* 0050c572: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c573: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c576: call 0x50c1c3 */ r_esp -= 4; W32(r_esp, 0x50c57bu); f_0050c1c3();
    /* 0050c57b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c57e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c57f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c582: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c583: call 0x50c8b6 */ r_esp -= 4; W32(r_esp, 0x50c588u); f_0050c8b6();
    /* 0050c588: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c58b: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c590: jmp 0x50c6ad */ goto L_0050c6ad;
L_0050c595:; BB(0x0050c595);
    /* 0050c595: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c598: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c59a: mov ax, word ptr [edx + 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x2u))) & 0xffffu);
    /* 0050c59e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c5a0: je 0x50c5ce */ if (fZ) goto L_0050c5ce;
L_0050c5a2:; BB(0x0050c5a2);
    /* 0050c5a2: mov ecx, dword ptr [0x6f98d0] */ r_ecx = R32((u32)(0x6f98d0u));
    /* 0050c5a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c5a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c5ac: call 0x50c1c3 */ r_esp -= 4; W32(r_esp, 0x50c5b1u); f_0050c1c3();
    /* 0050c5b1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c5b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c5b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c5b8: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c5bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c5bc: call 0x50c8b6 */ r_esp -= 4; W32(r_esp, 0x50c5c1u); f_0050c8b6();
    /* 0050c5c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c5c4: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c5c9: jmp 0x50c6ad */ goto L_0050c6ad;
L_0050c5ce:; BB(0x0050c5ce);
    /* 0050c5ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c5d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050c5d3: mov dx, word ptr [ecx + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4u))) & 0xffffu);
    /* 0050c5d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c5d9: je 0x50c606 */ if (fZ) goto L_0050c606;
L_0050c5db:; BB(0x0050c5db);
    /* 0050c5db: mov eax, dword ptr [0x6f9868] */ r_eax = R32((u32)(0x6f9868u));
    /* 0050c5e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c5e1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c5e4: call 0x50c1c3 */ r_esp -= 4; W32(r_esp, 0x50c5e9u); f_0050c1c3();
    /* 0050c5e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c5ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c5ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c5f0: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c5f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c5f4: call 0x50c8b6 */ r_esp -= 4; W32(r_esp, 0x50c5f9u); f_0050c8b6();
    /* 0050c5f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c5fc: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c601: jmp 0x50c6ad */ goto L_0050c6ad;
L_0050c606:; BB(0x0050c606);
    /* 0050c606: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c609: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c60b: mov cx, word ptr [eax + 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x6u))) & 0xffffu);
    /* 0050c60f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c611: je 0x50c63c */ if (fZ) goto L_0050c63c;
L_0050c613:; BB(0x0050c613);
    /* 0050c613: mov edx, dword ptr [0x6f98d8] */ r_edx = R32((u32)(0x6f98d8u));
    /* 0050c619: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c61a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c61d: call 0x50c1c3 */ r_esp -= 4; W32(r_esp, 0x50c622u); f_0050c1c3();
    /* 0050c622: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c626: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c629: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c62c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c62d: call 0x50c8b6 */ r_esp -= 4; W32(r_esp, 0x50c632u); f_0050c8b6();
    /* 0050c632: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c635: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c63a: jmp 0x50c6ad */ goto L_0050c6ad;
L_0050c63c:; BB(0x0050c63c);
    /* 0050c63c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c63f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c641: mov al, byte ptr [edx + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x8u))) & 0xffu);
    /* 0050c644: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0050c646: jbe 0x50c674 */ if ((fC||fZ)) goto L_0050c674;
L_0050c648:; BB(0x0050c648);
    /* 0050c648: mov ecx, dword ptr [0x6f9880] */ r_ecx = R32((u32)(0x6f9880u));
    /* 0050c64e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c64f: mov edx, dword ptr [0x6f98f8] */ r_edx = R32((u32)(0x6f98f8u));
    /* 0050c655: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c656: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c659: call 0x50c1a1 */ r_esp -= 4; W32(r_esp, 0x50c65eu); f_0050c1a1();
    /* 0050c65e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c661: mov cl, byte ptr [eax + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x8u))) & 0xffu);
    /* 0050c664: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050c667: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c66a: mov byte ptr [edx + 8], cl */ W8((u32)(r_edx+0x8u), (u8)r_ecx);
    /* 0050c66d: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c672: jmp 0x50c6ad */ goto L_0050c6ad;
L_0050c674:; BB(0x0050c674);
    /* 0050c674: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c677: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c679: mov cl, byte ptr [eax + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x9u))) & 0xffu);
    /* 0050c67c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0050c67e: jbe 0x50c6ab */ if ((fC||fZ)) goto L_0050c6ab;
L_0050c680:; BB(0x0050c680);
    /* 0050c680: mov edx, dword ptr [0x6f985c] */ r_edx = R32((u32)(0x6f985cu));
    /* 0050c686: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c687: mov eax, dword ptr [0x6f98d4] */ r_eax = R32((u32)(0x6f98d4u));
    /* 0050c68c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c68d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c690: call 0x50c1a1 */ r_esp -= 4; W32(r_esp, 0x50c695u); f_0050c1a1();
    /* 0050c695: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c698: mov dl, byte ptr [ecx + 9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x9u))) & 0xffu);
    /* 0050c69b: sub dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050c69e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c6a1: mov byte ptr [eax + 9], dl */ W8((u32)(r_eax+0x9u), (u8)r_edx);
    /* 0050c6a4: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c6a9: jmp 0x50c6ad */ goto L_0050c6ad;
L_0050c6ab:; BB(0x0050c6ab);
    /* 0050c6ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0050c6ad:; BB(0x0050c6ad);
    /* 0050c6ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c6af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c6b0: ret 4 */ FN_RET(0x0050c559); r_esp += 8; return;
}

void f_0050c6b3(void) /* FUN_0050c6b3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c6b3);
    /* 0050c6b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6b4: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c6b6: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c6b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6ba: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0050c6bd: mov eax, dword ptr [0x6f98d4] */ r_eax = R32((u32)(0x6f98d4u));
    /* 0050c6c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6c3: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0050c6c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c6ca: call 0x50c23a */ r_esp -= 4; W32(r_esp, 0x50c6cfu); f_0050c23a();
    /* 0050c6cf: mov ecx, eax */ r_ecx = r_eax;
    /* 0050c6d1: call 0x50c0bd */ r_esp -= 4; W32(r_esp, 0x50c6d6u); f_0050c0bd();
    /* 0050c6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c6d8: je 0x50c6f1 */ if (fZ) goto L_0050c6f1;
L_0050c6da:; BB(0x0050c6da);
    /* 0050c6da: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c6dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c6df: mov al, byte ptr [edx + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x9u))) & 0xffu);
    /* 0050c6e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0050c6e4: jbe 0x50c6ed */ if ((fC||fZ)) goto L_0050c6ed;
L_0050c6e6:; BB(0x0050c6e6);
    /* 0050c6e6: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c6eb: jmp 0x50c75f */ goto L_0050c75f;
L_0050c6ed:; BB(0x0050c6ed);
    /* 0050c6ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c6ef: jmp 0x50c75f */ goto L_0050c75f;
L_0050c6f1:; BB(0x0050c6f1);
    /* 0050c6f1: mov ecx, dword ptr [0x6f98f8] */ r_ecx = R32((u32)(0x6f98f8u));
    /* 0050c6f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6f8: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0050c6fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c6ff: call 0x50c23a */ r_esp -= 4; W32(r_esp, 0x50c704u); f_0050c23a();
    /* 0050c704: mov ecx, eax */ r_ecx = r_eax;
    /* 0050c706: call 0x50c0bd */ r_esp -= 4; W32(r_esp, 0x50c70bu); f_0050c0bd();
    /* 0050c70b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c70d: je 0x50c726 */ if (fZ) goto L_0050c726;
L_0050c70f:; BB(0x0050c70f);
    /* 0050c70f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c712: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c714: mov cl, byte ptr [eax + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x8u))) & 0xffu);
    /* 0050c717: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0050c719: jbe 0x50c722 */ if ((fC||fZ)) goto L_0050c722;
L_0050c71b:; BB(0x0050c71b);
    /* 0050c71b: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c720: jmp 0x50c75f */ goto L_0050c75f;
L_0050c722:; BB(0x0050c722);
    /* 0050c722: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c724: jmp 0x50c75f */ goto L_0050c75f;
L_0050c726:; BB(0x0050c726);
    /* 0050c726: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c729: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c72a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050c72d: call 0x50c80e */ r_esp -= 4; W32(r_esp, 0x50c732u); f_0050c80e();
    /* 0050c732: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c734: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0050c737: mov esi, ecx */ r_esi = r_ecx;
    /* 0050c739: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0050c73c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c73d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c740: call 0x50c23a */ r_esp -= 4; W32(r_esp, 0x50c745u); f_0050c23a();
    /* 0050c745: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0050c747: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c749: mov edx, 1 */ r_edx = 0x1u;
    /* 0050c74e: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050c750: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0050c752: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c754: je 0x50c75d */ if (fZ) goto L_0050c75d;
L_0050c756:; BB(0x0050c756);
    /* 0050c756: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c75b: jmp 0x50c75f */ goto L_0050c75f;
L_0050c75d:; BB(0x0050c75d);
    /* 0050c75d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0050c75f:; BB(0x0050c75f);
    /* 0050c75f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c760: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c763: ret 4 */ FN_RET(0x0050c6b3); r_esp += 8; return;
}

void f_0050c766(void) /* FUN_0050c766 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c766);
    /* 0050c766: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c767: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c769: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c76c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0050c76f: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0050c772: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c773: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c776: call 0x50c210 */ r_esp -= 4; W32(r_esp, 0x50c77bu); f_0050c210();
    /* 0050c77b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c77d: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c77f: mov edx, dword ptr [0x6f9874] */ r_edx = R32((u32)(0x6f9874u));
    /* 0050c785: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c787: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c789: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c78b: jne 0x50c792 */ if (!fZ) goto L_0050c792;
L_0050c78d:; BB(0x0050c78d);
    /* 0050c78d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c790: jmp 0x50c808 */ goto L_0050c808;
L_0050c792:; BB(0x0050c792);
    /* 0050c792: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0050c795: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c796: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c799: call 0x50c210 */ r_esp -= 4; W32(r_esp, 0x50c79eu); f_0050c210();
    /* 0050c79e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050c7a0: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c7a2: mov eax, dword ptr [0x6f98d0] */ r_eax = R32((u32)(0x6f98d0u));
    /* 0050c7a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c7a9: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c7ab: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c7ad: jne 0x50c7b7 */ if (!fZ) goto L_0050c7b7;
L_0050c7af:; BB(0x0050c7af);
    /* 0050c7af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c7b2: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c7b5: jmp 0x50c808 */ goto L_0050c808;
L_0050c7b7:; BB(0x0050c7b7);
    /* 0050c7b7: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0050c7ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c7be: call 0x50c210 */ r_esp -= 4; W32(r_esp, 0x50c7c3u); f_0050c210();
    /* 0050c7c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c7c5: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c7c7: mov edx, dword ptr [0x6f9868] */ r_edx = R32((u32)(0x6f9868u));
    /* 0050c7cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c7cf: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c7d1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c7d3: jne 0x50c7dd */ if (!fZ) goto L_0050c7dd;
L_0050c7d5:; BB(0x0050c7d5);
    /* 0050c7d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c7d8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c7db: jmp 0x50c808 */ goto L_0050c808;
L_0050c7dd:; BB(0x0050c7dd);
    /* 0050c7dd: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0050c7e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7e1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c7e4: call 0x50c210 */ r_esp -= 4; W32(r_esp, 0x50c7e9u); f_0050c210();
    /* 0050c7e9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050c7eb: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c7ed: mov eax, dword ptr [0x6f98d8] */ r_eax = R32((u32)(0x6f98d8u));
    /* 0050c7f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c7f4: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c7f6: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c7f8: jne 0x50c802 */ if (!fZ) goto L_0050c802;
L_0050c7fa:; BB(0x0050c7fa);
    /* 0050c7fa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c7fd: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c800: jmp 0x50c808 */ goto L_0050c808;
L_0050c802:; BB(0x0050c802);
    /* 0050c802: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c805: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0050c808:; BB(0x0050c808);
    /* 0050c808: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c80a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c80b: ret 4 */ FN_RET(0x0050c766); r_esp += 8; return;
}

void f_0050c80e(void) /* FUN_0050c80e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c80e);
    /* 0050c80e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c80f: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c811: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c814: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0050c817: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0050c81a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c81b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c81e: call 0x50c210 */ r_esp -= 4; W32(r_esp, 0x50c823u); f_0050c210();
    /* 0050c823: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c825: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c827: mov edx, dword ptr [0x6f9874] */ r_edx = R32((u32)(0x6f9874u));
    /* 0050c82d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c82f: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c831: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c833: jne 0x50c83a */ if (!fZ) goto L_0050c83a;
L_0050c835:; BB(0x0050c835);
    /* 0050c835: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c838: jmp 0x50c8b0 */ goto L_0050c8b0;
L_0050c83a:; BB(0x0050c83a);
    /* 0050c83a: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0050c83d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c83e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c841: call 0x50c210 */ r_esp -= 4; W32(r_esp, 0x50c846u); f_0050c210();
    /* 0050c846: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050c848: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c84a: mov eax, dword ptr [0x6f98d0] */ r_eax = R32((u32)(0x6f98d0u));
    /* 0050c84f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c851: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c853: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c855: jne 0x50c85f */ if (!fZ) goto L_0050c85f;
L_0050c857:; BB(0x0050c857);
    /* 0050c857: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c85a: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c85d: jmp 0x50c8b0 */ goto L_0050c8b0;
L_0050c85f:; BB(0x0050c85f);
    /* 0050c85f: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0050c862: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c863: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c866: call 0x50c210 */ r_esp -= 4; W32(r_esp, 0x50c86bu); f_0050c210();
    /* 0050c86b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c86d: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c86f: mov edx, dword ptr [0x6f9868] */ r_edx = R32((u32)(0x6f9868u));
    /* 0050c875: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c877: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0050c879: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c87b: jne 0x50c885 */ if (!fZ) goto L_0050c885;
L_0050c87d:; BB(0x0050c87d);
    /* 0050c87d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c880: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c883: jmp 0x50c8b0 */ goto L_0050c8b0;
L_0050c885:; BB(0x0050c885);
    /* 0050c885: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0050c888: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c889: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c88c: call 0x50c210 */ r_esp -= 4; W32(r_esp, 0x50c891u); f_0050c210();
    /* 0050c891: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050c893: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c895: mov eax, dword ptr [0x6f98d8] */ r_eax = R32((u32)(0x6f98d8u));
    /* 0050c89a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c89c: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c89e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c8a0: jne 0x50c8aa */ if (!fZ) goto L_0050c8aa;
L_0050c8a2:; BB(0x0050c8a2);
    /* 0050c8a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c8a5: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c8a8: jmp 0x50c8b0 */ goto L_0050c8b0;
L_0050c8aa:; BB(0x0050c8aa);
    /* 0050c8aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050c8ad: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0050c8b0:; BB(0x0050c8b0);
    /* 0050c8b0: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c8b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c8b3: ret 4 */ FN_RET(0x0050c80e); r_esp += 8; return;
}

void f_0050c8b6(void) /* FUN_0050c8b6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c8b6);
    /* 0050c8b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8b7: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c8b9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c8bc: mov eax, dword ptr [0x6f98f4] */ r_eax = R32((u32)(0x6f98f4u));
    /* 0050c8c1: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050c8c3: mov byte ptr [ebp - 4], cl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_ecx);
    /* 0050c8c6: jmp 0x50c8d1 */ goto L_0050c8d1;
L_0050c8c8:; BB(0x0050c8c8);
    /* 0050c8c8: mov dl, byte ptr [ebp - 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0050c8cb: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050c8ce: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
L_0050c8d1:; BB(0x0050c8d1);
    /* 0050c8d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c8d4: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050c8d9: mov ecx, dword ptr [0x6f98a4] */ r_ecx = R32((u32)(0x6f98a4u));
    /* 0050c8df: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050c8e1: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0050c8e3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c8e5: jg 0x50c943 */ if ((!fZ&&fS==fO)) goto L_0050c943;
L_0050c8e7:; BB(0x0050c8e7);
    /* 0050c8e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c8ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c8ec: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0050c8ef: mov edx, ecx */ r_edx = r_ecx;
    /* 0050c8f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c8f4: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0050c8fa: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c8ff: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0050c901: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0050c903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c905: je 0x50c941 */ if (fZ) goto L_0050c941;
L_0050c907:; BB(0x0050c907);
    /* 0050c907: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0050c90a: mov byte ptr [ebp - 8], cl */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_ecx);
    /* 0050c90d: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0050c910: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c911: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0050c914: call 0x50c1e8 */ r_esp -= 4; W32(r_esp, 0x50c919u); f_0050c1e8();
    /* 0050c919: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050c91c: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0050c922: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c927: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0050c929: mov ecx, 0x1fff */ r_ecx = 0x1fffu;
    /* 0050c92e: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c930: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c933: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 0050c936: and ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050c939: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c93c: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 0050c93f: jmp 0x50c943 */ goto L_0050c943;
L_0050c941:; BB(0x0050c941);
    /* 0050c941: jmp 0x50c8c8 */ goto L_0050c8c8;
L_0050c943:; BB(0x0050c943);
    /* 0050c943: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c945: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c946: ret  */ FN_RET(0x0050c8b6); r_esp += 4; return;
}

void f_0050c950(void) /* FUN_0050c950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c950);
    /* 0050c950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c951: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c953: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c956: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0050c959: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050c95c: call 0x48e320 */ r_esp -= 4; W32(r_esp, 0x50c961u); f_0048e320();
    /* 0050c961: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050c964: mov dword ptr [eax], 0x638834 */ W32((u32)(r_eax), 0x638834u);
    /* 0050c96a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050c970: jmp 0x50c97e */ goto L_0050c97e;
L_0050c972:; BB(0x0050c972);
    /* 0050c972: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050c976: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050c97a: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_0050c97e:; BB(0x0050c97e);
    /* 0050c97e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c982: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c985: jg 0x50c9aa */ if ((!fZ&&fS==fO)) goto L_0050c9aa;
L_0050c987:; BB(0x0050c987);
    /* 0050c987: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c98b: imul eax, eax, 0xb */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xbu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050c98e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050c991: mov byte ptr [ecx + eax + 0x16d], 0 */ W8((u32)(r_ecx+r_eax+0x16du), 0x0u);
    /* 0050c999: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c99d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050c9a0: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 0050c9a8: jmp 0x50c972 */ goto L_0050c972;
L_0050c9aa:; BB(0x0050c9aa);
    /* 0050c9aa: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050c9b2: add ecx, 0x5f0 */ {  u32 a = r_ecx; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c9b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9bb: call dword ptr [0x633038] */ { u32 t = R32((u32)(0x633038u)); r_esp -= 4; W32(r_esp, 0x50c9c1u); call_ind(t); }
    /* 0050c9c1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0050c9c4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c9c8: jle 0x50ca09 */ if ((fZ||fS!=fO)) goto L_0050ca09;
L_0050c9ca:; BB(0x0050c9ca);
    /* 0050c9ca: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c9ce: jle 0x50c9ed */ if ((fZ||fS!=fO)) goto L_0050c9ed;
L_0050c9d0:; BB(0x0050c9d0);
    /* 0050c9d0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050c9d3: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c9d6: movsx eax, byte ptr [edx + 0x5f0] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x5f0u));
    /* 0050c9dd: cmp eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c9e0: je 0x50c9ed */ if (fZ) goto L_0050c9ed;
L_0050c9e2:; BB(0x0050c9e2);
    /* 0050c9e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050c9e5: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c9e8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050c9eb: jmp 0x50c9ca */ goto L_0050c9ca;
L_0050c9ed:; BB(0x0050c9ed);
    /* 0050c9ed: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050c9f0: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c9f3: mov byte ptr [edx + 0x5f0], 0x5c */ W8((u32)(r_edx+0x5f0u), 0x5cu);
    /* 0050c9fa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050c9fd: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050ca00: mov byte ptr [eax + 0x5f1], 0 */ W8((u32)(r_eax+0x5f1u), 0x0u);
    /* 0050ca07: jmp 0x50ca13 */ goto L_0050ca13;
L_0050ca09:; BB(0x0050ca09);
    /* 0050ca09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ca0c: mov byte ptr [ecx + 0x5f0], 0 */ W8((u32)(r_ecx+0x5f0u), 0x0u);
L_0050ca13:; BB(0x0050ca13);
    /* 0050ca13: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ca16: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ca18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ca19: ret  */ FN_RET(0x0050c950); r_esp += 4; return;
}

void f_0050ca1a(void) /* FUN_0050ca1a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050ca1a);
    /* 0050ca1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca1b: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ca1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca1e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050ca21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ca24: mov dword ptr [eax], 0x638834 */ W32((u32)(r_eax), 0x638834u);
    /* 0050ca2a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ca2d: call 0x48e361 */ r_esp -= 4; W32(r_esp, 0x50ca32u); f_0048e361();
    /* 0050ca32: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ca34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ca35: ret  */ FN_RET(0x0050ca1a); r_esp += 4; return;
}

void f_0050ca36(void) /* FUN_0050ca36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050ca36);
    /* 0050ca36: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca37: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ca39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca3a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050ca3d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050ca40: imul eax, eax, 0xb */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xbu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050ca43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ca46: lea edx, [ecx + eax + 0x16d] */ r_edx = (u32)(r_ecx+r_eax+0x16du);
    /* 0050ca4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca4e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050ca51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca52: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50ca57u); f_00624510();
    /* 0050ca57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ca5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ca5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ca5d: ret 8 */ FN_RET(0x0050ca36); r_esp += 12; return;
}

void f_0050ca60(void) /* FUN_0050ca60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050ca60);
    /* 0050ca60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca61: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ca63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ca66: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0050ca69: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050ca6f: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050ca75: jmp 0x50ca83 */ goto L_0050ca83;
L_0050ca77:; BB(0x0050ca77);
    /* 0050ca77: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050ca7b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ca7f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0050ca83:; BB(0x0050ca83);
    /* 0050ca83: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050ca87: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ca8a: jge 0x50cad7 */ if ((fS==fO)) goto L_0050cad7;
L_0050ca8c:; BB(0x0050ca8c);
    /* 0050ca8c: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050ca90: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050ca93: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ca96: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050ca9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050caa0: je 0x50cad5 */ if (fZ) goto L_0050cad5;
L_0050caa2:; BB(0x0050caa2);
    /* 0050caa2: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050caa6: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050caa9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050caac: lea ecx, [eax + edx + 0x16d] */ r_ecx = (u32)(r_eax+r_edx+0x16du);
    /* 0050cab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cab4: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050cab8: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050cabb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050cabe: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cac1: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50cac6u); f_00624510();
    /* 0050cac6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cac9: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050cacd: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050cad1: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_0050cad5:; BB(0x0050cad5);
    /* 0050cad5: jmp 0x50ca77 */ goto L_0050ca77;
L_0050cad7:; BB(0x0050cad7);
    /* 0050cad7: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050cadb: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050cade: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050cae1: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 0050cae5: mov esp, ebp */ r_esp = r_ebp;
    /* 0050cae7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050cae8: ret 4 */ FN_RET(0x0050ca60); r_esp += 8; return;
}

void f_0050caeb(void) /* FUN_0050caeb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050caeb);
    /* 0050caeb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050caec: mov ebp, esp */ r_ebp = r_esp;
    /* 0050caee: sub esp, 0x158 */ {  u32 a = r_esp; u32 b = 0x158u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050caf4: mov dword ptr [ebp - 0x154], ecx */ W32((u32)(r_ebp+0xfffffeacu), r_ecx);
    /* 0050cafa: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050cb00: jmp 0x50cb0e */ goto L_0050cb0e;
L_0050cb02:; BB(0x0050cb02);
    /* 0050cb02: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050cb06: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050cb0a: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_0050cb0e:; BB(0x0050cb0e);
    /* 0050cb0e: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050cb12: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cb15: jge 0x50cb40 */ if ((fS==fO)) goto L_0050cb40;
L_0050cb17:; BB(0x0050cb17);
    /* 0050cb17: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050cb1b: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050cb1e: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 0050cb24: mov byte ptr [eax + edx + 0x16d], 0 */ W8((u32)(r_eax+r_edx+0x16du), 0x0u);
    /* 0050cb2c: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050cb30: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0050cb36: mov dword ptr [edx + ecx*4 + 8], 0 */ W32((u32)(r_edx+r_ecx*4+0x8u), 0x0u);
    /* 0050cb3e: jmp 0x50cb02 */ goto L_0050cb02;
L_0050cb40:; BB(0x0050cb40);
    /* 0050cb40: mov word ptr [ebp - 0x14c], 0 */ W16((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 0050cb49: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 0050cb4f: add eax, 0x5f0 */ {  u32 a = r_eax; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cb54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb55: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb5a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50cb5fu); f_00624510();
    /* 0050cb5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cb62: push 0x6923f8 */ { u32 v = 0x6923f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb67: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb6c: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50cb71u); f_00624520();
    /* 0050cb71: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cb74: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 0050cb7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb7b: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb80: call dword ptr [0x63303c] */ { u32 t = R32((u32)(0x63303cu)); r_esp -= 4; W32(r_esp, 0x50cb86u); call_ind(t); }
    /* 0050cb86: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 0050cb8c: cmp dword ptr [ebp - 0x150], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cb93: je 0x50cc79 */ if (fZ) goto L_0050cc79;
L_0050cb99:; BB(0x0050cb99);
    /* 0050cb99: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0050cba0:; BB(0x0050cba0);
    /* 0050cba0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cba4: je 0x50cc6c */ if (fZ) goto L_0050cc6c;
L_0050cbaa:; BB(0x0050cbaa);
    /* 0050cbaa: lea edx, [ebp - 0x11c] */ r_edx = (u32)(r_ebp+0xfffffee4u);
    /* 0050cbb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cbb1: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x50cbb6u); f_00624990();
    /* 0050cbb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cbb9: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0050cbbc: jbe 0x50cbc9 */ if ((fC||fZ)) goto L_0050cbc9;
L_0050cbbe:; BB(0x0050cbbe);
    /* 0050cbbe: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0050cbc1: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 0050cbc7: jmp 0x50cbd5 */ goto L_0050cbd5;
L_0050cbc9:; BB(0x0050cbc9);
    /* 0050cbc9: lea ecx, [ebp - 0x11c] */ r_ecx = (u32)(r_ebp+0xfffffee4u);
    /* 0050cbcf: mov dword ptr [ebp - 0x158], ecx */ W32((u32)(r_ebp+0xfffffea8u), r_ecx);
L_0050cbd5:; BB(0x0050cbd5);
    /* 0050cbd5: mov edx, dword ptr [ebp - 0x158] */ r_edx = R32((u32)(r_ebp+0xfffffea8u));
    /* 0050cbdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cbdc: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0050cbe2: call 0x50ea06 */ r_esp -= 4; W32(r_esp, 0x50cbe7u); f_0050ea06();
    /* 0050cbe7: mov word ptr [ebp - 0x14c], ax */ W16((u32)(r_ebp+0xfffffeb4u), (u16)r_eax);
    /* 0050cbee: movsx eax, word ptr [ebp - 0x14c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeb4u));
    /* 0050cbf5: cmp eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cbf8: jne 0x50cc3c */ if (!fZ) goto L_0050cc3c;
L_0050cbfa:; BB(0x0050cbfa);
    /* 0050cbfa: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0050cc00: add ecx, 0x5f0 */ {  u32 a = r_ecx; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050cc06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc07: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc0c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50cc11u); f_00624510();
    /* 0050cc11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cc14: lea edx, [ebp - 0x11c] */ r_edx = (u32)(r_ebp+0xfffffee4u);
    /* 0050cc1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc1b: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc20: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50cc25u); f_00624520();
    /* 0050cc25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cc28: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc2d: call dword ptr [0x633024] */ { u32 t = R32((u32)(0x633024u)); r_esp -= 4; W32(r_esp, 0x50cc33u); call_ind(t); }
    /* 0050cc33: mov word ptr [ebp - 0x14c], 0 */ W16((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_0050cc3c:; BB(0x0050cc3c);
    /* 0050cc3c: movsx eax, word ptr [ebp - 0x14c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeb4u));
    /* 0050cc43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cc45: je 0x50cc50 */ if (fZ) goto L_0050cc50;
L_0050cc47:; BB(0x0050cc47);
    /* 0050cc47: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050cc4e: jmp 0x50cc67 */ goto L_0050cc67;
L_0050cc50:; BB(0x0050cc50);
    /* 0050cc50: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 0050cc56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc57: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0050cc5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc5e: call dword ptr [0x63304c] */ { u32 t = R32((u32)(0x63304cu)); r_esp -= 4; W32(r_esp, 0x50cc64u); call_ind(t); }
    /* 0050cc64: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0050cc67:; BB(0x0050cc67);
    /* 0050cc67: jmp 0x50cba0 */ goto L_0050cba0;
L_0050cc6c:; BB(0x0050cc6c);
    /* 0050cc6c: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0050cc72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc73: call dword ptr [0x633030] */ { u32 t = R32((u32)(0x633030u)); r_esp -= 4; W32(r_esp, 0x50cc79u); call_ind(t); }
L_0050cc79:; BB(0x0050cc79);
    /* 0050cc79: mov ax, word ptr [ebp - 0x14c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffeb4u))) & 0xffffu);
    /* 0050cc80: mov esp, ebp */ r_esp = r_ebp;
    /* 0050cc82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050cc83: ret  */ FN_RET(0x0050caeb); r_esp += 4; return;
}

void f_0050cc84(void) /* FUN_0050cc84 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050cc84);
    /* 0050cc84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc85: mov ebp, esp */ r_ebp = r_esp;
    /* 0050cc87: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050cc8a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0050cc8d: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050cc93: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050cc99: jmp 0x50cca7 */ goto L_0050cca7;
L_0050cc9b:; BB(0x0050cc9b);
    /* 0050cc9b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050cc9f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050cca3: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0050cca7:; BB(0x0050cca7);
    /* 0050cca7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050ccab: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ccae: jge 0x50ccdf */ if ((fS==fO)) goto L_0050ccdf;
L_0050ccb0:; BB(0x0050ccb0);
    /* 0050ccb0: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050ccb4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ccb7: cmp dword ptr [eax + edx*4 + 8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ccbc: je 0x50ccdd */ if (fZ) goto L_0050ccdd;
L_0050ccbe:; BB(0x0050ccbe);
    /* 0050ccbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ccc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ccc2: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050ccc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ccc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ccca: call 0x50efa6 */ r_esp -= 4; W32(r_esp, 0x50cccfu); f_0050efa6();
    /* 0050cccf: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0050ccd3: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050ccd7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ccd9: je 0x50ccdd */ if (fZ) goto L_0050ccdd;
L_0050ccdb:; BB(0x0050ccdb);
    /* 0050ccdb: jmp 0x50ccdf */ goto L_0050ccdf;
L_0050ccdd:; BB(0x0050ccdd);
    /* 0050ccdd: jmp 0x50cc9b */ goto L_0050cc9b;
L_0050ccdf:; BB(0x0050ccdf);
    /* 0050ccdf: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050cce3: mov esp, ebp */ r_esp = r_ebp;
    /* 0050cce5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050cce6: ret  */ FN_RET(0x0050cc84); r_esp += 4; return;
}

void f_0050cce7(void) /* FUN_0050cce7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050cce7);
    /* 0050cce7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050cce8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ccea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cceb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050ccee: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ccf1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ccf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ccf4: ret 8 */ FN_RET(0x0050cce7); r_esp += 12; return;
}

void f_0050ccf7(void) /* FUN_0050ccf7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050ccf7);
    /* 0050ccf7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ccf8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ccfa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ccfd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050cd00: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050cd03: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0050cd06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cd08: jne 0x50cd13 */ if (!fZ) goto L_0050cd13;
L_0050cd0a:; BB(0x0050cd0a);
    /* 0050cd0a: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050cd0e: jmp 0x50cdc8 */ goto L_0050cdc8;
L_0050cd13:; BB(0x0050cd13);
    /* 0050cd13: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050cd16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd17: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cd1a: call 0x50e840 */ r_esp -= 4; W32(r_esp, 0x50cd1fu); f_0050e840();
    /* 0050cd1f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050cd23: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050cd27: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cd2a: je 0x50cd35 */ if (fZ) goto L_0050cd35;
L_0050cd2c:; BB(0x0050cd2c);
    /* 0050cd2c: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 0050cd30: jmp 0x50cdc8 */ goto L_0050cdc8;
L_0050cd35:; BB(0x0050cd35);
    /* 0050cd35: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cd38: call 0x50e8c0 */ r_esp -= 4; W32(r_esp, 0x50cd3du); f_0050e8c0();
    /* 0050cd3d: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050cd41: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050cd45: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cd48: jne 0x50cd50 */ if (!fZ) goto L_0050cd50;
L_0050cd4a:; BB(0x0050cd4a);
    /* 0050cd4a: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050cd4e: jmp 0x50cdc8 */ goto L_0050cdc8;
L_0050cd50:; BB(0x0050cd50);
    /* 0050cd50: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd52: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050cd55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd56: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050cd5a: imul eax, eax, 0xb */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xbu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050cd5d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cd60: lea edx, [ecx + eax + 0x16d] */ r_edx = (u32)(r_ecx+r_eax+0x16du);
    /* 0050cd67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd68: call 0x6264f0 */ r_esp -= 4; W32(r_esp, 0x50cd6du); f_006264f0();
    /* 0050cd6d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cd70: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050cd74: imul eax, eax, 0xb */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xbu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050cd77: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cd7a: mov byte ptr [ecx + eax + 0x177], 0 */ W8((u32)(r_ecx+r_eax+0x177u), 0x0u);
    /* 0050cd82: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050cd84: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cd88: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0050cd8b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050cd8f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cd92: mov dword ptr [ecx + eax*4 + 0x254], edx */ W32((u32)(r_ecx+r_eax*4+0x254u), r_edx);
    /* 0050cd99: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050cd9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd9e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cda1: call 0x50e908 */ r_esp -= 4; W32(r_esp, 0x50cda6u); f_0050e908();
    /* 0050cda6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050cdaa: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050cdad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cdb0: mov byte ptr [ecx + eax + 0x5c], 0 */ W8((u32)(r_ecx+r_eax+0x5cu), 0x0u);
    /* 0050cdb5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050cdb9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cdbc: mov dword ptr [eax + edx*4 + 8], 1 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x1u);
    /* 0050cdc4: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_0050cdc8:; BB(0x0050cdc8);
    /* 0050cdc8: mov esp, ebp */ r_esp = r_ebp;
    /* 0050cdca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050cdcb: ret 8 */ FN_RET(0x0050ccf7); r_esp += 12; return;
}

void f_0050cdce(void) /* FUN_0050cdce */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050cdce);
    /* 0050cdce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050cdcf: mov ebp, esp */ r_ebp = r_esp;
    /* 0050cdd1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050cdd4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050cdd7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050cdda: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0050cddd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cddf: jne 0x50cde7 */ if (!fZ) goto L_0050cde7;
L_0050cde1:; BB(0x0050cde1);
    /* 0050cde1: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050cde5: jmp 0x50ce13 */ goto L_0050ce13;
L_0050cde7:; BB(0x0050cde7);
    /* 0050cde7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050cdea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cdeb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cdee: call 0x50e840 */ r_esp -= 4; W32(r_esp, 0x50cdf3u); f_0050e840();
    /* 0050cdf3: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050cdf7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050cdfb: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cdfe: jne 0x50ce06 */ if (!fZ) goto L_0050ce06;
L_0050ce00:; BB(0x0050ce00);
    /* 0050ce00: mov ax, 0xfffc */ r_eax = (r_eax & 0xffff0000u) | ((0xfffcu) & 0xffffu);
    /* 0050ce04: jmp 0x50ce13 */ goto L_0050ce13;
L_0050ce06:; BB(0x0050ce06);
    /* 0050ce06: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050ce0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ce0b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050ce0e: call 0x50ce19 */ r_esp -= 4; W32(r_esp, 0x50ce13u); f_0050ce19();
L_0050ce13:; BB(0x0050ce13);
    /* 0050ce13: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ce15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ce16: ret 4 */ FN_RET(0x0050cdce); r_esp += 8; return;
}

void f_0050ce19(void) /* FUN_0050ce19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050ce19);
    /* 0050ce19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ce1a: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ce1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ce1d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050ce20: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ce24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050ce26: jl 0x50ce31 */ if ((fS!=fO)) goto L_0050ce31;
L_0050ce28:; BB(0x0050ce28);
    /* 0050ce28: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ce2c: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ce2f: jl 0x50ce3a */ if ((fS!=fO)) goto L_0050ce3a;
L_0050ce31:; BB(0x0050ce31);
    /* 0050ce31: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050ce35: jmp 0x50ceca */ goto L_0050ceca;
L_0050ce3a:; BB(0x0050ce3a);
    /* 0050ce3a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ce3e: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050ce41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ce44: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050ce4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ce4e: jne 0x50ce56 */ if (!fZ) goto L_0050ce56;
L_0050ce50:; BB(0x0050ce50);
    /* 0050ce50: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050ce54: jmp 0x50ceca */ goto L_0050ceca;
L_0050ce56:; BB(0x0050ce56);
    /* 0050ce56: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ce5a: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050ce5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ce60: mov byte ptr [eax + edx + 0x16d], 0 */ W8((u32)(r_eax+r_edx+0x16du), 0x0u);
    /* 0050ce68: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ce6c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ce6f: mov dword ptr [edx + ecx*4 + 8], 0 */ W32((u32)(r_edx+r_ecx*4+0x8u), 0x0u);
    /* 0050ce77: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ce7b: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050ce7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ce81: movsx edx, byte ptr [ecx + eax + 0x5c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x5cu));
    /* 0050ce86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ce88: je 0x50cec7 */ if (fZ) goto L_0050cec7;
L_0050ce8a:; BB(0x0050ce8a);
    /* 0050ce8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ce8d: add eax, 0x5f0 */ {  u32 a = r_eax; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050ce92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ce93: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ce98: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50ce9du); f_00624510();
    /* 0050ce9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cea0: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050cea4: imul ecx, ecx, 0xd */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xdu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050cea7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ceaa: lea eax, [edx + ecx + 0x5c] */ r_eax = (u32)(r_edx+r_ecx+0x5cu);
    /* 0050ceae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ceaf: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ceb4: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50ceb9u); f_00624520();
    /* 0050ceb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cebc: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cec1: call dword ptr [0x633024] */ { u32 t = R32((u32)(0x633024u)); r_esp -= 4; W32(r_esp, 0x50cec7u); call_ind(t); }
L_0050cec7:; BB(0x0050cec7);
    /* 0050cec7: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_0050ceca:; BB(0x0050ceca);
    /* 0050ceca: mov esp, ebp */ r_esp = r_ebp;
    /* 0050cecc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050cecd: ret 4 */ FN_RET(0x0050ce19); r_esp += 8; return;
}

void f_0050ced0(void) /* FUN_0050ced0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050ced0);
    /* 0050ced0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ced1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ced3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ced6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050ced9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050cedc: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0050cedf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cee1: jne 0x50cee9 */ if (!fZ) goto L_0050cee9;
L_0050cee3:; BB(0x0050cee3);
    /* 0050cee3: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050cee7: jmp 0x50cf15 */ goto L_0050cf15;
L_0050cee9:; BB(0x0050cee9);
    /* 0050cee9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050ceec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ceed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cef0: call 0x50e840 */ r_esp -= 4; W32(r_esp, 0x50cef5u); f_0050e840();
    /* 0050cef5: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050cef9: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050cefd: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cf00: jne 0x50cf08 */ if (!fZ) goto L_0050cf08;
L_0050cf02:; BB(0x0050cf02);
    /* 0050cf02: mov ax, 0xfffc */ r_eax = (r_eax & 0xffff0000u) | ((0xfffcu) & 0xffffu);
    /* 0050cf06: jmp 0x50cf15 */ goto L_0050cf15;
L_0050cf08:; BB(0x0050cf08);
    /* 0050cf08: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050cf0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf0d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cf10: call 0x50cf1b */ r_esp -= 4; W32(r_esp, 0x50cf15u); f_0050cf1b();
L_0050cf15:; BB(0x0050cf15);
    /* 0050cf15: mov esp, ebp */ r_esp = r_ebp;
    /* 0050cf17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050cf18: ret 4 */ FN_RET(0x0050ced0); r_esp += 8; return;
}

void f_0050cf1b(void) /* FUN_0050cf1b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050cf1b);
    /* 0050cf1b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf1c: mov ebp, esp */ r_ebp = r_esp;
    /* 0050cf1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf1f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050cf22: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050cf26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050cf28: jl 0x50cf33 */ if ((fS!=fO)) goto L_0050cf33;
L_0050cf2a:; BB(0x0050cf2a);
    /* 0050cf2a: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050cf2e: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cf31: jl 0x50cf39 */ if ((fS!=fO)) goto L_0050cf39;
L_0050cf33:; BB(0x0050cf33);
    /* 0050cf33: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050cf37: jmp 0x50cf74 */ goto L_0050cf74;
L_0050cf39:; BB(0x0050cf39);
    /* 0050cf39: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050cf3d: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050cf40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050cf43: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050cf4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cf4d: jne 0x50cf55 */ if (!fZ) goto L_0050cf55;
L_0050cf4f:; BB(0x0050cf4f);
    /* 0050cf4f: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050cf53: jmp 0x50cf74 */ goto L_0050cf74;
L_0050cf55:; BB(0x0050cf55);
    /* 0050cf55: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0050cf59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050cf5d: call 0x50e908 */ r_esp -= 4; W32(r_esp, 0x50cf62u); f_0050e908();
    /* 0050cf62: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050cf66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050cf69: mov dword ptr [ecx + eax*4 + 8], 1 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x1u);
    /* 0050cf71: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_0050cf74:; BB(0x0050cf74);
    /* 0050cf74: mov esp, ebp */ r_esp = r_ebp;
    /* 0050cf76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050cf77: ret 4 */ FN_RET(0x0050cf1b); r_esp += 8; return;
}

void f_0050cf7a(void) /* FUN_0050cf7a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050cf7a);
    /* 0050cf7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf7b: mov ebp, esp */ r_ebp = r_esp;
    /* 0050cf7d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050cf80: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050cf83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050cf86: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0050cf89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cf8b: jne 0x50cf93 */ if (!fZ) goto L_0050cf93;
L_0050cf8d:; BB(0x0050cf8d);
    /* 0050cf8d: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050cf91: jmp 0x50cfb6 */ goto L_0050cfb6;
L_0050cf93:; BB(0x0050cf93);
    /* 0050cf93: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050cf96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf97: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cf9a: call 0x50e840 */ r_esp -= 4; W32(r_esp, 0x50cf9fu); f_0050e840();
    /* 0050cf9f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050cfa3: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050cfa7: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cfaa: jne 0x50cfb2 */ if (!fZ) goto L_0050cfb2;
L_0050cfac:; BB(0x0050cfac);
    /* 0050cfac: mov ax, 0xfffc */ r_eax = (r_eax & 0xffff0000u) | ((0xfffcu) & 0xffffu);
    /* 0050cfb0: jmp 0x50cfb6 */ goto L_0050cfb6;
L_0050cfb2:; BB(0x0050cfb2);
    /* 0050cfb2: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_0050cfb6:; BB(0x0050cfb6);
    /* 0050cfb6: mov esp, ebp */ r_esp = r_ebp;
    /* 0050cfb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050cfb9: ret 4 */ FN_RET(0x0050cf7a); r_esp += 8; return;
}

void f_0050cfbc(void) /* FUN_0050cfbc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050cfbc);
    /* 0050cfbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050cfbd: mov ebp, esp */ r_ebp = r_esp;
    /* 0050cfbf: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050cfc2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050cfc5: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050cfc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050cfcb: jl 0x50cfd6 */ if ((fS!=fO)) goto L_0050cfd6;
L_0050cfcd:; BB(0x0050cfcd);
    /* 0050cfcd: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050cfd1: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cfd4: jl 0x50cfdc */ if ((fS!=fO)) goto L_0050cfdc;
L_0050cfd6:; BB(0x0050cfd6);
    /* 0050cfd6: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050cfda: jmp 0x50d04a */ goto L_0050d04a;
L_0050cfdc:; BB(0x0050cfdc);
    /* 0050cfdc: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050cfe0: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050cfe3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050cfe6: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050cfee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cff0: jne 0x50cff8 */ if (!fZ) goto L_0050cff8;
L_0050cff2:; BB(0x0050cff2);
    /* 0050cff2: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050cff6: jmp 0x50d04a */ goto L_0050d04a;
L_0050cff8:; BB(0x0050cff8);
    /* 0050cff8: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050cffc: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cfff: je 0x50d019 */ if (fZ) goto L_0050d019;
L_0050d001:; BB(0x0050d001);
    /* 0050d001: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d005: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d008: je 0x50d019 */ if (fZ) goto L_0050d019;
L_0050d00a:; BB(0x0050d00a);
    /* 0050d00a: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d00e: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d011: je 0x50d019 */ if (fZ) goto L_0050d019;
L_0050d013:; BB(0x0050d013);
    /* 0050d013: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050d017: jmp 0x50d04a */ goto L_0050d04a;
L_0050d019:; BB(0x0050d019);
    /* 0050d019: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0050d01d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d01e: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0050d022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d023: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d026: call 0x50efb6 */ r_esp -= 4; W32(r_esp, 0x50d02bu); f_0050efb6();
    /* 0050d02b: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050d02f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050d033: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d035: jne 0x50d046 */ if (!fZ) goto L_0050d046;
L_0050d037:; BB(0x0050d037);
    /* 0050d037: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0050d03b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d03c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d03f: call 0x50ce19 */ r_esp -= 4; W32(r_esp, 0x50d044u); f_0050ce19();
    /* 0050d044: jmp 0x50d04a */ goto L_0050d04a;
L_0050d046:; BB(0x0050d046);
    /* 0050d046: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_0050d04a:; BB(0x0050d04a);
    /* 0050d04a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d04c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d04d: ret 8 */ FN_RET(0x0050cfbc); r_esp += 12; return;
}

void f_0050d050(void) /* FUN_0050d050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d050);
    /* 0050d050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d051: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d053: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050d056: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050d059: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050d05c: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0050d05f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d061: jne 0x50d069 */ if (!fZ) goto L_0050d069;
L_0050d063:; BB(0x0050d063);
    /* 0050d063: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050d067: jmp 0x50d09a */ goto L_0050d09a;
L_0050d069:; BB(0x0050d069);
    /* 0050d069: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050d06c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d06d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d070: call 0x50e840 */ r_esp -= 4; W32(r_esp, 0x50d075u); f_0050e840();
    /* 0050d075: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050d079: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050d07d: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d080: jne 0x50d088 */ if (!fZ) goto L_0050d088;
L_0050d082:; BB(0x0050d082);
    /* 0050d082: mov ax, 0xfffc */ r_eax = (r_eax & 0xffff0000u) | ((0xfffcu) & 0xffffu);
    /* 0050d086: jmp 0x50d09a */ goto L_0050d09a;
L_0050d088:; BB(0x0050d088);
    /* 0050d088: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0050d08c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d08d: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050d091: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d092: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d095: call 0x50cfbc */ r_esp -= 4; W32(r_esp, 0x50d09au); f_0050cfbc();
L_0050d09a:; BB(0x0050d09a);
    /* 0050d09a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d09c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d09d: ret 8 */ FN_RET(0x0050d050); r_esp += 12; return;
}

void f_0050d0a0(void) /* FUN_0050d0a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d0a0);
    /* 0050d0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d0a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050d0a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050d0a9: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d0ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d0af: jl 0x50d0ba */ if ((fS!=fO)) goto L_0050d0ba;
L_0050d0b1:; BB(0x0050d0b1);
    /* 0050d0b1: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d0b5: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d0b8: jl 0x50d0c0 */ if ((fS!=fO)) goto L_0050d0c0;
L_0050d0ba:; BB(0x0050d0ba);
    /* 0050d0ba: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050d0be: jmp 0x50d12e */ goto L_0050d12e;
L_0050d0c0:; BB(0x0050d0c0);
    /* 0050d0c0: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d0c4: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d0c7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d0ca: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050d0d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d0d4: jne 0x50d0dc */ if (!fZ) goto L_0050d0dc;
L_0050d0d6:; BB(0x0050d0d6);
    /* 0050d0d6: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050d0da: jmp 0x50d12e */ goto L_0050d12e;
L_0050d0dc:; BB(0x0050d0dc);
    /* 0050d0dc: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d0e0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d0e3: je 0x50d0fd */ if (fZ) goto L_0050d0fd;
L_0050d0e5:; BB(0x0050d0e5);
    /* 0050d0e5: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d0e9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d0ec: je 0x50d0fd */ if (fZ) goto L_0050d0fd;
L_0050d0ee:; BB(0x0050d0ee);
    /* 0050d0ee: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d0f2: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d0f5: je 0x50d0fd */ if (fZ) goto L_0050d0fd;
L_0050d0f7:; BB(0x0050d0f7);
    /* 0050d0f7: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050d0fb: jmp 0x50d12e */ goto L_0050d12e;
L_0050d0fd:; BB(0x0050d0fd);
    /* 0050d0fd: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0050d101: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d102: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0050d106: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d107: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d10a: call 0x50efb6 */ r_esp -= 4; W32(r_esp, 0x50d10fu); f_0050efb6();
    /* 0050d10f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050d113: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050d117: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d119: jne 0x50d12a */ if (!fZ) goto L_0050d12a;
L_0050d11b:; BB(0x0050d11b);
    /* 0050d11b: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0050d11f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d120: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d123: call 0x50cf1b */ r_esp -= 4; W32(r_esp, 0x50d128u); f_0050cf1b();
    /* 0050d128: jmp 0x50d12e */ goto L_0050d12e;
L_0050d12a:; BB(0x0050d12a);
    /* 0050d12a: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_0050d12e:; BB(0x0050d12e);
    /* 0050d12e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d131: ret 8 */ FN_RET(0x0050d0a0); r_esp += 12; return;
}

void f_0050d134(void) /* FUN_0050d134 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d134);
    /* 0050d134: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d135: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d137: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050d13a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050d13d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050d140: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0050d143: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d145: jne 0x50d14d */ if (!fZ) goto L_0050d14d;
L_0050d147:; BB(0x0050d147);
    /* 0050d147: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 0050d14b: jmp 0x50d17e */ goto L_0050d17e;
L_0050d14d:; BB(0x0050d14d);
    /* 0050d14d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050d150: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d151: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d154: call 0x50e840 */ r_esp -= 4; W32(r_esp, 0x50d159u); f_0050e840();
    /* 0050d159: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050d15d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050d161: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d164: jne 0x50d16c */ if (!fZ) goto L_0050d16c;
L_0050d166:; BB(0x0050d166);
    /* 0050d166: mov ax, 0xfffc */ r_eax = (r_eax & 0xffff0000u) | ((0xfffcu) & 0xffffu);
    /* 0050d16a: jmp 0x50d17e */ goto L_0050d17e;
L_0050d16c:; BB(0x0050d16c);
    /* 0050d16c: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0050d170: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d171: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050d175: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d176: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d179: call 0x50d0a0 */ r_esp -= 4; W32(r_esp, 0x50d17eu); f_0050d0a0();
L_0050d17e:; BB(0x0050d17e);
    /* 0050d17e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d181: ret 8 */ FN_RET(0x0050d134); r_esp += 12; return;
}

