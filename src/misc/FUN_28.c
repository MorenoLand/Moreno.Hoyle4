#include "protos.h"

void f_0050d184(void) /* FUN_0050d184 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d184);
    /* 0050d184: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d185: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d187: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d188: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d18b: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d18f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d191: jl 0x50d19c */ if ((fS!=fO)) goto L_0050d19c;
L_0050d193:; BB(0x0050d193);
    /* 0050d193: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d197: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d19a: jl 0x50d1a0 */ if ((fS!=fO)) goto L_0050d1a0;
L_0050d19c:; BB(0x0050d19c);
    /* 0050d19c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d19e: jmp 0x50d1c8 */ goto L_0050d1c8;
L_0050d1a0:; BB(0x0050d1a0);
    /* 0050d1a0: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d1a4: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d1a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d1aa: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050d1b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d1b4: jne 0x50d1ba */ if (!fZ) goto L_0050d1ba;
L_0050d1b6:; BB(0x0050d1b6);
    /* 0050d1b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d1b8: jmp 0x50d1c8 */ goto L_0050d1c8;
L_0050d1ba:; BB(0x0050d1ba);
    /* 0050d1ba: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d1be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d1c1: mov eax, dword ptr [eax + edx*4 + 0x254] */ r_eax = R32((u32)(r_eax+r_edx*4+0x254u));
L_0050d1c8:; BB(0x0050d1c8);
    /* 0050d1c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d1ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d1cb: ret 4 */ FN_RET(0x0050d184); r_esp += 8; return;
}

void f_0050d1ce(void) /* FUN_0050d1ce */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d1ce);
    /* 0050d1ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d1cf: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d1d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d1d2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d1d5: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0050d1d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d1da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d1dd: call 0x50d184 */ r_esp -= 4; W32(r_esp, 0x50d1e2u); f_0050d184();
    /* 0050d1e2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0050d1e4: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0050d1e6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d1e7: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d1e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d1ea: ret 4 */ FN_RET(0x0050d1ce); r_esp += 8; return;
}

void f_0050d1ed(void) /* FUN_0050d1ed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d1ed);
    /* 0050d1ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d1ee: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d1f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d1f1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d1f4: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d1f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d1fa: jl 0x50d205 */ if ((fS!=fO)) goto L_0050d205;
L_0050d1fc:; BB(0x0050d1fc);
    /* 0050d1fc: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d200: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d203: jl 0x50d207 */ if ((fS!=fO)) goto L_0050d207;
L_0050d205:; BB(0x0050d205);
    /* 0050d205: jmp 0x50d27e */ goto L_0050d27e;
L_0050d207:; BB(0x0050d207);
    /* 0050d207: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d20b: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d20e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d211: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050d219: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d21b: jne 0x50d21f */ if (!fZ) goto L_0050d21f;
L_0050d21d:; BB(0x0050d21d);
    /* 0050d21d: jmp 0x50d27e */ goto L_0050d27e;
L_0050d21f:; BB(0x0050d21f);
    /* 0050d21f: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d223: je 0x50d236 */ if (fZ) goto L_0050d236;
L_0050d225:; BB(0x0050d225);
    /* 0050d225: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d229: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d22c: cmp dword ptr [eax + edx*4 + 0x254], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x254u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d234: je 0x50d24d */ if (fZ) goto L_0050d24d;
L_0050d236:; BB(0x0050d236);
    /* 0050d236: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d23a: jne 0x50d27e */ if (!fZ) goto L_0050d27e;
L_0050d23c:; BB(0x0050d23c);
    /* 0050d23c: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d240: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d243: cmp dword ptr [edx + ecx*4 + 0x254], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x254u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d24b: je 0x50d27e */ if (fZ) goto L_0050d27e;
L_0050d24d:; BB(0x0050d24d);
    /* 0050d24d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d251: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d254: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050d256: cmp dword ptr [ecx + eax*4 + 0x254], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x254u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d25e: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0050d261: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d265: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d268: mov dword ptr [ecx + eax*4 + 0x254], edx */ W32((u32)(r_ecx+r_eax*4+0x254u), r_edx);
    /* 0050d26f: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d273: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d276: mov dword ptr [eax + edx*4 + 8], 1 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x1u);
L_0050d27e:; BB(0x0050d27e);
    /* 0050d27e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d280: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d281: ret 8 */ FN_RET(0x0050d1ed); r_esp += 12; return;
}

void f_0050d284(void) /* FUN_0050d284 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d284);
    /* 0050d284: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d285: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d287: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d288: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d28b: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d28f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d291: jl 0x50d29c */ if ((fS!=fO)) goto L_0050d29c;
L_0050d293:; BB(0x0050d293);
    /* 0050d293: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d297: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d29a: jl 0x50d2a0 */ if ((fS!=fO)) goto L_0050d2a0;
L_0050d29c:; BB(0x0050d29c);
    /* 0050d29c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d29e: jmp 0x50d2c8 */ goto L_0050d2c8;
L_0050d2a0:; BB(0x0050d2a0);
    /* 0050d2a0: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d2a4: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d2a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d2aa: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050d2b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d2b4: jne 0x50d2ba */ if (!fZ) goto L_0050d2ba;
L_0050d2b6:; BB(0x0050d2b6);
    /* 0050d2b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d2b8: jmp 0x50d2c8 */ goto L_0050d2c8;
L_0050d2ba:; BB(0x0050d2ba);
    /* 0050d2ba: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d2be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d2c1: mov eax, dword ptr [eax + edx*4 + 0x2a8] */ r_eax = R32((u32)(r_eax+r_edx*4+0x2a8u));
L_0050d2c8:; BB(0x0050d2c8);
    /* 0050d2c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d2ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d2cb: ret 4 */ FN_RET(0x0050d284); r_esp += 8; return;
}

void f_0050d2ce(void) /* FUN_0050d2ce */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d2ce);
    /* 0050d2ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d2cf: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d2d1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050d2d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050d2d5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050d2d8: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d2dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d2de: jl 0x50d2e9 */ if ((fS!=fO)) goto L_0050d2e9;
L_0050d2e0:; BB(0x0050d2e0);
    /* 0050d2e0: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d2e4: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d2e7: jl 0x50d2ee */ if ((fS!=fO)) goto L_0050d2ee;
L_0050d2e9:; BB(0x0050d2e9);
    /* 0050d2e9: jmp 0x50d3a2 */ goto L_0050d3a2;
L_0050d2ee:; BB(0x0050d2ee);
    /* 0050d2ee: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050d2f2: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d2f5: jl 0x50d300 */ if ((fS!=fO)) goto L_0050d300;
L_0050d2f7:; BB(0x0050d2f7);
    /* 0050d2f7: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050d2fb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d2fe: jl 0x50d305 */ if ((fS!=fO)) goto L_0050d305;
L_0050d300:; BB(0x0050d300);
    /* 0050d300: jmp 0x50d3a2 */ goto L_0050d3a2;
L_0050d305:; BB(0x0050d305);
    /* 0050d305: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d309: imul ecx, ecx, 0xb */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xbu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d30c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d30f: movsx eax, byte ptr [edx + ecx + 0x16d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x16du));
    /* 0050d317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d319: jne 0x50d320 */ if (!fZ) goto L_0050d320;
L_0050d31b:; BB(0x0050d31b);
    /* 0050d31b: jmp 0x50d3a2 */ goto L_0050d3a2;
L_0050d320:; BB(0x0050d320);
    /* 0050d320: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d324: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d327: mov eax, dword ptr [edx + ecx*4 + 0x2a8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x2a8u));
    /* 0050d32e: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d331: je 0x50d3a2 */ if (fZ) goto L_0050d3a2;
L_0050d333:; BB(0x0050d333);
    /* 0050d333: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d337: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d33a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050d33d: sub eax, dword ptr [edx + ecx*4 + 0x2a8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4+0x2a8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050d344: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0050d347: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050d34b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d34d: jl 0x50d382 */ if ((fS!=fO)) goto L_0050d382;
L_0050d34f:; BB(0x0050d34f);
    /* 0050d34f: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d353: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d356: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d359: lea ecx, [eax + edx + 0x350] */ r_ecx = (u32)(r_eax+r_edx+0x350u);
    /* 0050d360: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050d364: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0050d367: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d36a: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050d36e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d372: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d375: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d378: lea edx, [esi + edx + 0x350] */ r_edx = (u32)(r_esi+r_edx+0x350u);
    /* 0050d37f: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_0050d382:; BB(0x0050d382);
    /* 0050d382: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d386: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d389: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050d38c: mov dword ptr [ecx + eax*4 + 0x2a8], edx */ W32((u32)(r_ecx+r_eax*4+0x2a8u), r_edx);
    /* 0050d393: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d397: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d39a: mov dword ptr [ecx + eax*4 + 8], 1 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x1u);
L_0050d3a2:; BB(0x0050d3a2);
    /* 0050d3a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050d3a3: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d3a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d3a6: ret 0x10 */ FN_RET(0x0050d2ce); r_esp += 20; return;
}

void f_0050d3a9(void) /* FUN_0050d3a9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d3a9);
    /* 0050d3a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d3aa: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d3ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d3ad: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d3b0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d3b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d3b6: jl 0x50d3c1 */ if ((fS!=fO)) goto L_0050d3c1;
L_0050d3b8:; BB(0x0050d3b8);
    /* 0050d3b8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d3bc: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d3bf: jl 0x50d3c5 */ if ((fS!=fO)) goto L_0050d3c5;
L_0050d3c1:; BB(0x0050d3c1);
    /* 0050d3c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d3c3: jmp 0x50d3ed */ goto L_0050d3ed;
L_0050d3c5:; BB(0x0050d3c5);
    /* 0050d3c5: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d3c9: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d3cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d3cf: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050d3d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d3d9: jne 0x50d3df */ if (!fZ) goto L_0050d3df;
L_0050d3db:; BB(0x0050d3db);
    /* 0050d3db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d3dd: jmp 0x50d3ed */ goto L_0050d3ed;
L_0050d3df:; BB(0x0050d3df);
    /* 0050d3df: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d3e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d3e6: mov eax, dword ptr [eax + edx*4 + 0x2fc] */ r_eax = R32((u32)(r_eax+r_edx*4+0x2fcu));
L_0050d3ed:; BB(0x0050d3ed);
    /* 0050d3ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d3ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d3f0: ret 4 */ FN_RET(0x0050d3a9); r_esp += 8; return;
}

void f_0050d3f3(void) /* FUN_0050d3f3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d3f3);
    /* 0050d3f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d3f4: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d3f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d3f7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d3fa: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d3fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d400: jl 0x50d40b */ if ((fS!=fO)) goto L_0050d40b;
L_0050d402:; BB(0x0050d402);
    /* 0050d402: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d406: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d409: jl 0x50d40d */ if ((fS!=fO)) goto L_0050d40d;
L_0050d40b:; BB(0x0050d40b);
    /* 0050d40b: jmp 0x50d458 */ goto L_0050d458;
L_0050d40d:; BB(0x0050d40d);
    /* 0050d40d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d411: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d414: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d417: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050d41f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d421: jne 0x50d425 */ if (!fZ) goto L_0050d425;
L_0050d423:; BB(0x0050d423);
    /* 0050d423: jmp 0x50d458 */ goto L_0050d458;
L_0050d425:; BB(0x0050d425);
    /* 0050d425: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d429: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d42c: mov ecx, dword ptr [eax + edx*4 + 0x2fc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2fcu));
    /* 0050d433: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d436: je 0x50d458 */ if (fZ) goto L_0050d458;
L_0050d438:; BB(0x0050d438);
    /* 0050d438: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d43c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d43f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0050d442: mov dword ptr [eax + edx*4 + 0x2fc], ecx */ W32((u32)(r_eax+r_edx*4+0x2fcu), r_ecx);
    /* 0050d449: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d44d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d450: mov dword ptr [eax + edx*4 + 8], 1 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x1u);
L_0050d458:; BB(0x0050d458);
    /* 0050d458: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d45a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d45b: ret 8 */ FN_RET(0x0050d3f3); r_esp += 12; return;
}

void f_0050d45e(void) /* FUN_0050d45e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d45e);
    /* 0050d45e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d45f: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d461: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d462: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d465: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d469: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d46b: jl 0x50d476 */ if ((fS!=fO)) goto L_0050d476;
L_0050d46d:; BB(0x0050d46d);
    /* 0050d46d: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d471: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d474: jl 0x50d47a */ if ((fS!=fO)) goto L_0050d47a;
L_0050d476:; BB(0x0050d476);
    /* 0050d476: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d478: jmp 0x50d4be */ goto L_0050d4be;
L_0050d47a:; BB(0x0050d47a);
    /* 0050d47a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d47e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d480: jl 0x50d48b */ if ((fS!=fO)) goto L_0050d48b;
L_0050d482:; BB(0x0050d482);
    /* 0050d482: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d486: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d489: jl 0x50d48f */ if ((fS!=fO)) goto L_0050d48f;
L_0050d48b:; BB(0x0050d48b);
    /* 0050d48b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d48d: jmp 0x50d4be */ goto L_0050d4be;
L_0050d48f:; BB(0x0050d48f);
    /* 0050d48f: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d493: imul ecx, ecx, 0xb */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xbu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d496: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d499: movsx eax, byte ptr [edx + ecx + 0x16d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x16du));
    /* 0050d4a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d4a3: jne 0x50d4a9 */ if (!fZ) goto L_0050d4a9;
L_0050d4a5:; BB(0x0050d4a5);
    /* 0050d4a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d4a7: jmp 0x50d4be */ goto L_0050d4be;
L_0050d4a9:; BB(0x0050d4a9);
    /* 0050d4a9: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d4ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d4b0: lea eax, [edx + ecx*4 + 0x4a0] */ r_eax = (u32)(r_edx+r_ecx*4+0x4a0u);
    /* 0050d4b7: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d4bb: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
L_0050d4be:; BB(0x0050d4be);
    /* 0050d4be: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d4c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d4c1: ret 8 */ FN_RET(0x0050d45e); r_esp += 12; return;
}

void f_0050d4c4(void) /* FUN_0050d4c4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d4c4);
    /* 0050d4c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d4c5: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d4c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d4c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050d4c9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d4cc: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d4d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d4d2: jl 0x50d4dd */ if ((fS!=fO)) goto L_0050d4dd;
L_0050d4d4:; BB(0x0050d4d4);
    /* 0050d4d4: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d4d8: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d4db: jl 0x50d4df */ if ((fS!=fO)) goto L_0050d4df;
L_0050d4dd:; BB(0x0050d4dd);
    /* 0050d4dd: jmp 0x50d54c */ goto L_0050d54c;
L_0050d4df:; BB(0x0050d4df);
    /* 0050d4df: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050d4e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d4e5: jl 0x50d4f0 */ if ((fS!=fO)) goto L_0050d4f0;
L_0050d4e7:; BB(0x0050d4e7);
    /* 0050d4e7: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050d4eb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d4ee: jl 0x50d4f2 */ if ((fS!=fO)) goto L_0050d4f2;
L_0050d4f0:; BB(0x0050d4f0);
    /* 0050d4f0: jmp 0x50d54c */ goto L_0050d54c;
L_0050d4f2:; BB(0x0050d4f2);
    /* 0050d4f2: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d4f6: imul ecx, ecx, 0xb */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xbu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d4f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d4fc: movsx eax, byte ptr [edx + ecx + 0x16d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x16du));
    /* 0050d504: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d506: jne 0x50d50a */ if (!fZ) goto L_0050d50a;
L_0050d508:; BB(0x0050d508);
    /* 0050d508: jmp 0x50d54c */ goto L_0050d54c;
L_0050d50a:; BB(0x0050d50a);
    /* 0050d50a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d50e: jle 0x50d54c */ if ((fZ||fS!=fO)) goto L_0050d54c;
L_0050d510:; BB(0x0050d510);
    /* 0050d510: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d514: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d517: lea eax, [edx + ecx*4 + 0x4a0] */ r_eax = (u32)(r_edx+r_ecx*4+0x4a0u);
    /* 0050d51e: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050d522: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0050d525: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050d528: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050d52c: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d530: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d533: lea ecx, [esi + ecx*4 + 0x4a0] */ r_ecx = (u32)(r_esi+r_ecx*4+0x4a0u);
    /* 0050d53a: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 0050d53d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d541: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d544: mov dword ptr [eax + edx*4 + 8], 1 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x1u);
L_0050d54c:; BB(0x0050d54c);
    /* 0050d54c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050d54d: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d54f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d550: ret 0xc */ FN_RET(0x0050d4c4); r_esp += 16; return;
}

void f_0050d553(void) /* FUN_0050d553 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d553);
    /* 0050d553: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d554: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d557: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d55a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d55e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d560: jl 0x50d56b */ if ((fS!=fO)) goto L_0050d56b;
L_0050d562:; BB(0x0050d562);
    /* 0050d562: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d566: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d569: jl 0x50d570 */ if ((fS!=fO)) goto L_0050d570;
L_0050d56b:; BB(0x0050d56b);
    /* 0050d56b: jmp 0x50d5f0 */ goto L_0050d5f0;
L_0050d570:; BB(0x0050d570);
    /* 0050d570: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050d574: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d576: jl 0x50d581 */ if ((fS!=fO)) goto L_0050d581;
L_0050d578:; BB(0x0050d578);
    /* 0050d578: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050d57c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d57f: jl 0x50d583 */ if ((fS!=fO)) goto L_0050d583;
L_0050d581:; BB(0x0050d581);
    /* 0050d581: jmp 0x50d5f0 */ goto L_0050d5f0;
L_0050d583:; BB(0x0050d583);
    /* 0050d583: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d587: imul ecx, ecx, 0xb */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xbu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d58a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d58d: movsx eax, byte ptr [edx + ecx + 0x16d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x16du));
    /* 0050d595: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d597: jne 0x50d59b */ if (!fZ) goto L_0050d59b;
L_0050d599:; BB(0x0050d599);
    /* 0050d599: jmp 0x50d5f0 */ goto L_0050d5f0;
L_0050d59b:; BB(0x0050d59b);
    /* 0050d59b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d59f: je 0x50d5c2 */ if (fZ) goto L_0050d5c2;
L_0050d5a1:; BB(0x0050d5a1);
    /* 0050d5a1: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d5a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d5a8: mov eax, dword ptr [edx + ecx*4 + 0x548] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x548u));
    /* 0050d5af: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d5b2: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d5b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d5b9: mov dword ptr [edx + ecx*4 + 0x548], eax */ W32((u32)(r_edx+r_ecx*4+0x548u), r_eax);
    /* 0050d5c0: jmp 0x50d5e1 */ goto L_0050d5e1;
L_0050d5c2:; BB(0x0050d5c2);
    /* 0050d5c2: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d5c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d5c9: mov edx, dword ptr [ecx + eax*4 + 0x59c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x59cu));
    /* 0050d5d0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050d5d3: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d5d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d5da: mov dword ptr [ecx + eax*4 + 0x59c], edx */ W32((u32)(r_ecx+r_eax*4+0x59cu), r_edx);
L_0050d5e1:; BB(0x0050d5e1);
    /* 0050d5e1: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d5e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d5e8: mov dword ptr [eax + edx*4 + 8], 1 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x1u);
L_0050d5f0:; BB(0x0050d5f0);
    /* 0050d5f0: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d5f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d5f3: ret 0xc */ FN_RET(0x0050d553); r_esp += 16; return;
}

void f_0050d5f6(void) /* FUN_0050d5f6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d5f6);
    /* 0050d5f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d5f7: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d5f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d5fa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d5fd: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d601: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d603: jl 0x50d60e */ if ((fS!=fO)) goto L_0050d60e;
L_0050d605:; BB(0x0050d605);
    /* 0050d605: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d609: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d60c: jl 0x50d613 */ if ((fS!=fO)) goto L_0050d613;
L_0050d60e:; BB(0x0050d60e);
    /* 0050d60e: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050d611: jmp 0x50d63d */ goto L_0050d63d;
L_0050d613:; BB(0x0050d613);
    /* 0050d613: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d617: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d61a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d61d: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050d625: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d627: jne 0x50d62e */ if (!fZ) goto L_0050d62e;
L_0050d629:; BB(0x0050d629);
    /* 0050d629: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050d62c: jmp 0x50d63d */ goto L_0050d63d;
L_0050d62e:; BB(0x0050d62e);
    /* 0050d62e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d632: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d635: mov ax, word ptr [eax + edx*2 + 0x4f4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4f4u))) & 0xffffu);
L_0050d63d:; BB(0x0050d63d);
    /* 0050d63d: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d63f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d640: ret 4 */ FN_RET(0x0050d5f6); r_esp += 8; return;
}

void f_0050d643(void) /* FUN_0050d643 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d643);
    /* 0050d643: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d644: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d646: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d647: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d64a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d64e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d650: jl 0x50d65b */ if ((fS!=fO)) goto L_0050d65b;
L_0050d652:; BB(0x0050d652);
    /* 0050d652: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d656: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d659: jl 0x50d65f */ if ((fS!=fO)) goto L_0050d65f;
L_0050d65b:; BB(0x0050d65b);
    /* 0050d65b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d65d: jmp 0x50d6b0 */ goto L_0050d6b0;
L_0050d65f:; BB(0x0050d65f);
    /* 0050d65f: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d663: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d666: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d669: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050d671: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d673: jne 0x50d679 */ if (!fZ) goto L_0050d679;
L_0050d675:; BB(0x0050d675);
    /* 0050d675: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d677: jmp 0x50d6b0 */ goto L_0050d6b0;
L_0050d679:; BB(0x0050d679);
    /* 0050d679: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d67d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d67f: jl 0x50d68a */ if ((fS!=fO)) goto L_0050d68a;
L_0050d681:; BB(0x0050d681);
    /* 0050d681: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d685: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0050d688: jb 0x50d68e */ if (fC) goto L_0050d68e;
L_0050d68a:; BB(0x0050d68a);
    /* 0050d68a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d68c: jmp 0x50d6b0 */ goto L_0050d6b0;
L_0050d68e:; BB(0x0050d68e);
    /* 0050d68e: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d692: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d695: movsx eax, word ptr [edx + ecx*2 + 0x51e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0x51eu));
    /* 0050d69d: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d6a1: mov edx, 1 */ r_edx = 0x1u;
    /* 0050d6a6: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050d6a8: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6aa: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0050d6ac: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0050d6ae: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0050d6b0:; BB(0x0050d6b0);
    /* 0050d6b0: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d6b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d6b3: ret 8 */ FN_RET(0x0050d643); r_esp += 12; return;
}

void f_0050d6b6(void) /* FUN_0050d6b6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d6b6);
    /* 0050d6b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d6b7: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d6b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d6ba: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d6bd: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d6c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d6c3: jl 0x50d6ce */ if ((fS!=fO)) goto L_0050d6ce;
L_0050d6c5:; BB(0x0050d6c5);
    /* 0050d6c5: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d6c9: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d6cc: jl 0x50d6d3 */ if ((fS!=fO)) goto L_0050d6d3;
L_0050d6ce:; BB(0x0050d6ce);
    /* 0050d6ce: jmp 0x50d780 */ goto L_0050d780;
L_0050d6d3:; BB(0x0050d6d3);
    /* 0050d6d3: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d6d7: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d6da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d6dd: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050d6e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d6e7: jne 0x50d6ee */ if (!fZ) goto L_0050d6ee;
L_0050d6e9:; BB(0x0050d6e9);
    /* 0050d6e9: jmp 0x50d780 */ goto L_0050d780;
L_0050d6ee:; BB(0x0050d6ee);
    /* 0050d6ee: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d6f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d6f4: jl 0x50d6ff */ if ((fS!=fO)) goto L_0050d6ff;
L_0050d6f6:; BB(0x0050d6f6);
    /* 0050d6f6: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d6fa: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0050d6fd: jb 0x50d701 */ if (fC) goto L_0050d701;
L_0050d6ff:; BB(0x0050d6ff);
    /* 0050d6ff: jmp 0x50d780 */ goto L_0050d780;
L_0050d701:; BB(0x0050d701);
    /* 0050d701: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d705: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d708: movsx eax, word ptr [edx + ecx*2 + 0x51e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0x51eu));
    /* 0050d710: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d714: mov edx, 1 */ r_edx = 0x1u;
    /* 0050d719: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050d71b: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050d71d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0050d71f: je 0x50d723 */ if (fZ) goto L_0050d723;
L_0050d721:; BB(0x0050d721);
    /* 0050d721: jmp 0x50d780 */ goto L_0050d780;
L_0050d723:; BB(0x0050d723);
    /* 0050d723: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d727: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d72b: mov edx, 1 */ r_edx = 0x1u;
    /* 0050d730: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050d732: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d735: mov ax, word ptr [ecx + eax*2 + 0x51e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x51eu))) & 0xffffu);
    /* 0050d73d: or ax, dx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_edx; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050d740: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d744: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d747: mov word ptr [edx + ecx*2 + 0x51e], ax */ W16((u32)(r_edx+r_ecx*2+0x51eu), (u16)r_eax);
    /* 0050d74f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d753: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d756: mov dx, word ptr [ecx + eax*2 + 0x4f4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4f4u))) & 0xffffu);
    /* 0050d75e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050d762: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d766: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d769: mov word ptr [ecx + eax*2 + 0x4f4], dx */ W16((u32)(r_ecx+r_eax*2+0x4f4u), (u16)r_edx);
    /* 0050d771: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d775: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d778: mov dword ptr [eax + edx*4 + 8], 1 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x1u);
L_0050d780:; BB(0x0050d780);
    /* 0050d780: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d782: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d783: ret 8 */ FN_RET(0x0050d6b6); r_esp += 12; return;
}

void f_0050d786(void) /* FUN_0050d786 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d786);
    /* 0050d786: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d787: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d789: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d78a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050d78d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d791: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d793: jl 0x50d79e */ if ((fS!=fO)) goto L_0050d79e;
L_0050d795:; BB(0x0050d795);
    /* 0050d795: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d799: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d79c: jl 0x50d7a3 */ if ((fS!=fO)) goto L_0050d7a3;
L_0050d79e:; BB(0x0050d79e);
    /* 0050d79e: jmp 0x50d855 */ goto L_0050d855;
L_0050d7a3:; BB(0x0050d7a3);
    /* 0050d7a3: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d7a7: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d7aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d7ad: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050d7b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d7b7: jne 0x50d7be */ if (!fZ) goto L_0050d7be;
L_0050d7b9:; BB(0x0050d7b9);
    /* 0050d7b9: jmp 0x50d855 */ goto L_0050d855;
L_0050d7be:; BB(0x0050d7be);
    /* 0050d7be: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d7c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d7c4: jl 0x50d7cf */ if ((fS!=fO)) goto L_0050d7cf;
L_0050d7c6:; BB(0x0050d7c6);
    /* 0050d7c6: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d7ca: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0050d7cd: jb 0x50d7d4 */ if (fC) goto L_0050d7d4;
L_0050d7cf:; BB(0x0050d7cf);
    /* 0050d7cf: jmp 0x50d855 */ goto L_0050d855;
L_0050d7d4:; BB(0x0050d7d4);
    /* 0050d7d4: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d7d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d7db: movsx eax, word ptr [edx + ecx*2 + 0x51e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0x51eu));
    /* 0050d7e3: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d7e7: mov edx, 1 */ r_edx = 0x1u;
    /* 0050d7ec: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050d7ee: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050d7f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0050d7f2: jne 0x50d7f6 */ if (!fZ) goto L_0050d7f6;
L_0050d7f4:; BB(0x0050d7f4);
    /* 0050d7f4: jmp 0x50d855 */ goto L_0050d855;
L_0050d7f6:; BB(0x0050d7f6);
    /* 0050d7f6: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d7fa: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050d7fe: mov edx, 1 */ r_edx = 0x1u;
    /* 0050d803: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050d805: not edx */ r_edx = ~r_edx;
    /* 0050d807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d80a: mov ax, word ptr [ecx + eax*2 + 0x51e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x51eu))) & 0xffffu);
    /* 0050d812: and ax, dx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050d815: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d819: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d81c: mov word ptr [edx + ecx*2 + 0x51e], ax */ W16((u32)(r_edx+r_ecx*2+0x51eu), (u16)r_eax);
    /* 0050d824: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d828: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d82b: mov dx, word ptr [ecx + eax*2 + 0x4f4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4f4u))) & 0xffffu);
    /* 0050d833: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050d837: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d83b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d83e: mov word ptr [ecx + eax*2 + 0x4f4], dx */ W16((u32)(r_ecx+r_eax*2+0x4f4u), (u16)r_edx);
    /* 0050d846: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d84a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d84d: mov dword ptr [eax + edx*4 + 8], 1 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x1u);
L_0050d855:; BB(0x0050d855);
    /* 0050d855: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d858: ret 8 */ FN_RET(0x0050d786); r_esp += 12; return;
}

void f_0050d85b(void) /* FUN_0050d85b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d85b);
    /* 0050d85b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d85c: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d85e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050d861: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050d864: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d868: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d86a: jl 0x50d875 */ if ((fS!=fO)) goto L_0050d875;
L_0050d86c:; BB(0x0050d86c);
    /* 0050d86c: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d870: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d873: jl 0x50d87d */ if ((fS!=fO)) goto L_0050d87d;
L_0050d875:; BB(0x0050d875);
    /* 0050d875: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050d878: jmp 0x50d93f */ goto L_0050d93f;
L_0050d87d:; BB(0x0050d87d);
    /* 0050d87d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d881: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d884: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d887: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050d88f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d891: jne 0x50d89b */ if (!fZ) goto L_0050d89b;
L_0050d893:; BB(0x0050d893);
    /* 0050d893: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050d896: jmp 0x50d93f */ goto L_0050d93f;
L_0050d89b:; BB(0x0050d89b);
    /* 0050d89b: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d89f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d8a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d8a6: mov edx, dword ptr [ecx + edx*4 + 0x2a8] */ r_edx = R32((u32)(r_ecx+r_edx*4+0x2a8u));
    /* 0050d8ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d8b0: add edx, dword ptr [ecx + eax*4 + 0x2fc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*4+0x2fcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050d8b7: mov eax, edx */ r_eax = r_edx;
    /* 0050d8b9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050d8ba: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050d8bf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050d8bf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050d8bf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050d8c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0050d8c4: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d8c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d8cb: movsx ecx, word ptr [eax + edx*2 + 0x4f4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2+0x4f4u));
    /* 0050d8d3: imul ecx, ecx, 0x2710 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2710u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d8d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050d8dc: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050d8de: cmp edx, 0x4c7250 */ {  u32 a = r_edx; u32 b = 0x4c7250u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d8e4: jl 0x50d8ec */ if ((fS!=fO)) goto L_0050d8ec;
L_0050d8e6:; BB(0x0050d8e6);
    /* 0050d8e6: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 0050d8ea: jmp 0x50d93f */ goto L_0050d93f;
L_0050d8ec:; BB(0x0050d8ec);
    /* 0050d8ec: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d8f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d8f3: mov eax, dword ptr [ecx + eax*4 + 0x2a8] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x2a8u));
    /* 0050d8fa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050d8fb: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050d900: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050d900, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050d900, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050d902: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d905: jge 0x50d93c */ if ((fS==fO)) goto L_0050d93c;
L_0050d907:; BB(0x0050d907);
    /* 0050d907: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d90b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d90e: mov eax, dword ptr [eax + edx*4 + 0x2fc] */ r_eax = R32((u32)(r_eax+r_edx*4+0x2fcu));
    /* 0050d915: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050d916: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050d91b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050d91b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050d91b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050d91d: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d920: jge 0x50d93c */ if ((fS==fO)) goto L_0050d93c;
L_0050d922:; BB(0x0050d922);
    /* 0050d922: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050d926: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050d929: movsx ecx, word ptr [eax + edx*2 + 0x4f4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2+0x4f4u));
    /* 0050d931: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d934: jne 0x50d93c */ if (!fZ) goto L_0050d93c;
L_0050d936:; BB(0x0050d936);
    /* 0050d936: mov ax, 2 */ r_eax = (r_eax & 0xffff0000u) | ((0x2u) & 0xffffu);
    /* 0050d93a: jmp 0x50d93f */ goto L_0050d93f;
L_0050d93c:; BB(0x0050d93c);
    /* 0050d93c: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_0050d93f:; BB(0x0050d93f);
    /* 0050d93f: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d941: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d942: ret 4 */ FN_RET(0x0050d85b); r_esp += 8; return;
}

void f_0050d945(void) /* FUN_0050d945 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050d945);
    /* 0050d945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d946: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d948: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050d94b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050d94c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050d94d: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0050d950: mov word ptr [ebp - 0x48], 0 */ W16((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0050d956: jmp 0x50d964 */ goto L_0050d964;
L_0050d958:; BB(0x0050d958);
    /* 0050d958: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0050d95c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050d960: mov word ptr [ebp - 0x48], ax */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_eax);
L_0050d964:; BB(0x0050d964);
    /* 0050d964: movsx ecx, word ptr [ebp - 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050d968: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d96b: jge 0x50d97d */ if ((fS==fO)) goto L_0050d97d;
L_0050d96d:; BB(0x0050d96d);
    /* 0050d96d: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050d971: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d974: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050d977: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 0050d97b: jmp 0x50d958 */ goto L_0050d958;
L_0050d97d:; BB(0x0050d97d);
    /* 0050d97d: mov word ptr [ebp - 0x44], 0 */ W16((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0050d983: mov word ptr [ebp - 0x48], 0 */ W16((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0050d989: jmp 0x50d997 */ goto L_0050d997;
L_0050d98b:; BB(0x0050d98b);
    /* 0050d98b: mov cx, word ptr [ebp - 0x44] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffbcu))) & 0xffffu);
    /* 0050d98f: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050d993: mov word ptr [ebp - 0x44], cx */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_ecx);
L_0050d997:; BB(0x0050d997);
    /* 0050d997: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050d99b: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d99e: jge 0x50dc79 */ if ((fS==fO)) goto L_0050dc79;
L_0050d9a4:; BB(0x0050d9a4);
    /* 0050d9a4: movsx eax, word ptr [ebp - 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050d9a8: imul eax, eax, 0xb */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xbu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d9ab: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050d9ae: movsx edx, byte ptr [ecx + eax + 0x16d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x16du));
    /* 0050d9b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d9b8: jne 0x50d9bc */ if (!fZ) goto L_0050d9bc;
L_0050d9ba:; BB(0x0050d9ba);
    /* 0050d9ba: jmp 0x50d98b */ goto L_0050d98b;
L_0050d9bc:; BB(0x0050d9bc);
    /* 0050d9bc: movsx eax, word ptr [ebp - 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050d9c0: imul eax, eax, 0xb */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xbu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d9c3: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050d9c6: lea edx, [ecx + eax + 0x16d] */ r_edx = (u32)(r_ecx+r_eax+0x16du);
    /* 0050d9cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d9ce: movsx eax, word ptr [ebp - 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050d9d2: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d9d5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050d9d8: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050d9da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d9db: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50d9e0u); f_00624510();
    /* 0050d9e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050d9e3: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050d9e7: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050d9ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050d9ed: mov cx, word ptr [ebp - 0x44] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffbcu))) & 0xffffu);
    /* 0050d9f1: mov word ptr [eax + edx + 0xc], cx */ W16((u32)(r_eax+r_edx+0xcu), (u16)r_ecx);
    /* 0050d9f6: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050d9fa: movsx eax, word ptr [ebp - 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050d9fe: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050da01: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050da04: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050da07: mov edx, dword ptr [esi + edx*4 + 0x4a0] */ r_edx = R32((u32)(r_esi+r_edx*4+0x4a0u));
    /* 0050da0e: mov dword ptr [ecx + eax + 0x24], edx */ W32((u32)(r_ecx+r_eax+0x24u), r_edx);
    /* 0050da12: movsx eax, word ptr [ebp - 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050da16: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050da19: mov eax, dword ptr [ecx + eax*4 + 0x2a8] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x2a8u));
    /* 0050da20: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050da21: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050da26: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050da26, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050da26, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050da28: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050da2c: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050da2f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050da32: mov dword ptr [ecx + edx + 0x20], eax */ W32((u32)(r_ecx+r_edx+0x20u), r_eax);
    /* 0050da36: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050da3a: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050da3e: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050da41: mov eax, dword ptr [eax + edx*4 + 0x2a8] */ r_eax = R32((u32)(r_eax+r_edx*4+0x2a8u));
    /* 0050da48: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050da49: mov esi, 0x64 */ r_esi = 0x64u;
    /* 0050da4e: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0050da4e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050da4e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050da50: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050da53: mov eax, dword ptr [eax + ecx*4 + 0x2fc] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x2fcu));
    /* 0050da5a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050da5c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050da5d: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050da62: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050da62, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050da62, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050da64: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050da68: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050da6b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050da6e: mov dword ptr [ecx + edx + 0x28], eax */ W32((u32)(r_ecx+r_edx+0x28u), r_eax);
    /* 0050da72: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050da76: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050da79: movsx ecx, word ptr [eax + edx*2 + 0x4f4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2+0x4f4u));
    /* 0050da81: imul ecx, ecx, 0x2710 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2710u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050da87: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050da89: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050da8d: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050da90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050da93: mov dword ptr [eax + edx + 0x2c], ecx */ W32((u32)(r_eax+r_edx+0x2cu), r_ecx);
    /* 0050da97: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050da9b: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050da9f: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050daa2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050daa5: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050daa8: mov ecx, dword ptr [esi + ecx*4 + 0x548] */ r_ecx = R32((u32)(r_esi+r_ecx*4+0x548u));
    /* 0050daaf: mov dword ptr [eax + edx + 0x30], ecx */ W32((u32)(r_eax+r_edx+0x30u), r_ecx);
    /* 0050dab3: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050dab7: movsx eax, word ptr [ebp - 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dabb: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dabe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050dac1: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050dac4: mov edx, dword ptr [esi + edx*4 + 0x59c] */ r_edx = R32((u32)(r_esi+r_edx*4+0x59cu));
    /* 0050dacb: mov dword ptr [ecx + eax + 0x34], edx */ W32((u32)(r_ecx+r_eax+0x34u), r_edx);
    /* 0050dacf: movsx eax, word ptr [ebp - 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050dad3: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dad6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050dad9: cmp dword ptr [ecx + eax + 0x350], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x350u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050dae1: jl 0x50db1d */ if ((fS!=fO)) goto L_0050db1d;
L_0050dae3:; BB(0x0050dae3);
    /* 0050dae3: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050dae7: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050daea: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050daed: mov eax, dword ptr [eax + edx + 0x350] */ r_eax = R32((u32)(r_eax+r_edx+0x350u));
    /* 0050daf4: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050daf7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050daf8: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050dafd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050dafd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050dafd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050daff: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050db03: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050db06: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050db09: sub eax, dword ptr [ecx + edx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx+0x24u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050db0d: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050db11: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050db14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050db17: mov dword ptr [ecx + edx + 0x1c], eax */ W32((u32)(r_ecx+r_edx+0x1cu), r_eax);
    /* 0050db1b: jmp 0x50db55 */ goto L_0050db55;
L_0050db1d:; BB(0x0050db1d);
    /* 0050db1d: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050db21: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050db24: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050db27: mov eax, dword ptr [eax + edx + 0x350] */ r_eax = R32((u32)(r_eax+r_edx+0x350u));
    /* 0050db2e: sub eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050db31: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050db32: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050db37: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050db37, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050db37, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050db39: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050db3d: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050db40: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050db43: sub eax, dword ptr [ecx + edx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx+0x24u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050db47: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050db4b: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050db4e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050db51: mov dword ptr [ecx + edx + 0x1c], eax */ W32((u32)(r_ecx+r_edx+0x1cu), r_eax);
L_0050db55:; BB(0x0050db55);
    /* 0050db55: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050db59: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050db5c: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050db5f: cmp dword ptr [eax + edx + 0x354], 0 */ {  u32 a = R32((u32)(r_eax+r_edx+0x354u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050db67: jl 0x50db95 */ if ((fS!=fO)) goto L_0050db95;
L_0050db69:; BB(0x0050db69);
    /* 0050db69: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050db6d: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050db70: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050db73: mov eax, dword ptr [edx + ecx + 0x354] */ r_eax = R32((u32)(r_edx+r_ecx+0x354u));
    /* 0050db7a: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050db7d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050db7e: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050db83: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050db83, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050db83, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050db85: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050db89: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050db8c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050db8f: mov dword ptr [ecx + edx + 0x14], eax */ W32((u32)(r_ecx+r_edx+0x14u), r_eax);
    /* 0050db93: jmp 0x50dbbf */ goto L_0050dbbf;
L_0050db95:; BB(0x0050db95);
    /* 0050db95: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050db99: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050db9c: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050db9f: mov eax, dword ptr [eax + edx + 0x354] */ r_eax = R32((u32)(r_eax+r_edx+0x354u));
    /* 0050dba6: sub eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050dba9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050dbaa: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050dbaf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050dbaf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050dbaf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050dbb1: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dbb5: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dbb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050dbbb: mov dword ptr [ecx + edx + 0x14], eax */ W32((u32)(r_ecx+r_edx+0x14u), r_eax);
L_0050dbbf:; BB(0x0050dbbf);
    /* 0050dbbf: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050dbc3: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dbc6: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050dbc9: cmp dword ptr [eax + edx + 0x358], 0 */ {  u32 a = R32((u32)(r_eax+r_edx+0x358u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050dbd1: jl 0x50dbff */ if ((fS!=fO)) goto L_0050dbff;
L_0050dbd3:; BB(0x0050dbd3);
    /* 0050dbd3: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050dbd7: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dbda: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050dbdd: mov eax, dword ptr [edx + ecx + 0x358] */ r_eax = R32((u32)(r_edx+r_ecx+0x358u));
    /* 0050dbe4: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050dbe7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050dbe8: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050dbed: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050dbed, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050dbed, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050dbef: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dbf3: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dbf6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050dbf9: mov dword ptr [ecx + edx + 0x18], eax */ W32((u32)(r_ecx+r_edx+0x18u), r_eax);
    /* 0050dbfd: jmp 0x50dc29 */ goto L_0050dc29;
L_0050dbff:; BB(0x0050dbff);
    /* 0050dbff: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050dc03: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dc06: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050dc09: mov eax, dword ptr [eax + edx + 0x358] */ r_eax = R32((u32)(r_eax+r_edx+0x358u));
    /* 0050dc10: sub eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050dc13: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050dc14: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050dc19: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050dc19, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050dc19, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050dc1b: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dc1f: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dc22: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050dc25: mov dword ptr [ecx + edx + 0x18], eax */ W32((u32)(r_ecx+r_edx+0x18u), r_eax);
L_0050dc29:; BB(0x0050dc29);
    /* 0050dc29: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dc2d: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dc30: movsx eax, word ptr [ebp - 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dc34: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dc37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050dc3a: mov edx, dword ptr [ecx + edx + 0x20] */ r_edx = R32((u32)(r_ecx+r_edx+0x20u));
    /* 0050dc3e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050dc41: add edx, dword ptr [ecx + eax + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050dc45: movsx eax, word ptr [ebp - 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dc49: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dc4c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050dc4f: mov eax, dword ptr [ecx + eax + 0x2c] */ r_eax = R32((u32)(r_ecx+r_eax+0x2cu));
    /* 0050dc53: lea ecx, [edx + eax - 0x2710] */ r_ecx = (u32)(r_edx+r_eax+0xffffd8f0u);
    /* 0050dc5a: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dc5e: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dc61: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050dc64: mov dword ptr [eax + edx + 0x10], ecx */ W32((u32)(r_eax+r_edx+0x10u), r_ecx);
    /* 0050dc68: mov cx, word ptr [ebp - 0x48] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0050dc6c: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050dc70: mov word ptr [ebp - 0x48], cx */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_ecx);
    /* 0050dc74: jmp 0x50d98b */ goto L_0050d98b;
L_0050dc79:; BB(0x0050dc79);
    /* 0050dc79: mov dx, word ptr [ebp - 0x48] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0050dc7d: mov word ptr [ebp - 0x40], dx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_edx);
    /* 0050dc81: mov word ptr [ebp - 0x48], 0 */ W16((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0050dc87: jmp 0x50dc95 */ goto L_0050dc95;
L_0050dc89:; BB(0x0050dc89);
    /* 0050dc89: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0050dc8d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050dc91: mov word ptr [ebp - 0x48], ax */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_eax);
L_0050dc95:; BB(0x0050dc95);
    /* 0050dc95: movsx ecx, word ptr [ebp - 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dc99: movsx edx, word ptr [ebp - 0x40] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 0050dc9d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050dc9f: jge 0x50dd9d */ if ((fS==fO)) goto L_0050dd9d;
L_0050dca5:; BB(0x0050dca5);
    /* 0050dca5: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0050dca9: mov word ptr [ebp - 0x4c], ax */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_eax);
    /* 0050dcad: movsx ecx, word ptr [ebp - 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dcb1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050dcb4: mov word ptr [ebp - 0x3c], cx */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_ecx);
    /* 0050dcb8: jmp 0x50dcc6 */ goto L_0050dcc6;
L_0050dcba:; BB(0x0050dcba);
    /* 0050dcba: mov dx, word ptr [ebp - 0x3c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc4u))) & 0xffffu);
    /* 0050dcbe: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050dcc2: mov word ptr [ebp - 0x3c], dx */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_edx);
L_0050dcc6:; BB(0x0050dcc6);
    /* 0050dcc6: movsx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050dcca: movsx ecx, word ptr [ebp - 0x40] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 0050dcce: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050dcd0: jge 0x50dd41 */ if ((fS==fO)) goto L_0050dd41;
L_0050dcd2:; BB(0x0050dcd2);
    /* 0050dcd2: movsx edx, word ptr [ebp - 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050dcd6: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dcd9: movsx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0050dcdd: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dce0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050dce3: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0050dce6: mov edx, dword ptr [ecx + edx + 0x10] */ r_edx = R32((u32)(r_ecx+r_edx+0x10u));
    /* 0050dcea: cmp edx, dword ptr [esi + eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050dcee: jg 0x50dd34 */ if ((!fZ&&fS==fO)) goto L_0050dd34;
L_0050dcf0:; BB(0x0050dcf0);
    /* 0050dcf0: movsx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050dcf4: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dcf7: movsx ecx, word ptr [ebp - 0x4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0050dcfb: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dcfe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050dd01: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0050dd04: mov eax, dword ptr [edx + eax + 0x10] */ r_eax = R32((u32)(r_edx+r_eax+0x10u));
    /* 0050dd08: cmp eax, dword ptr [esi + ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dd0c: jne 0x50dd3c */ if (!fZ) goto L_0050dd3c;
L_0050dd0e:; BB(0x0050dd0e);
    /* 0050dd0e: movsx ecx, word ptr [ebp - 0x4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0050dd12: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dd15: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050dd18: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050dd1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050dd1b: movsx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050dd1f: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dd22: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050dd25: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050dd27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050dd28: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x50dd2du); f_006325b0();
    /* 0050dd2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050dd30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050dd32: jge 0x50dd3c */ if ((fS==fO)) goto L_0050dd3c;
L_0050dd34:; BB(0x0050dd34);
    /* 0050dd34: mov dx, word ptr [ebp - 0x3c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc4u))) & 0xffffu);
    /* 0050dd38: mov word ptr [ebp - 0x4c], dx */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_edx);
L_0050dd3c:; BB(0x0050dd3c);
    /* 0050dd3c: jmp 0x50dcba */ goto L_0050dcba;
L_0050dd41:; BB(0x0050dd41);
    /* 0050dd41: movsx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0050dd45: movsx ecx, word ptr [ebp - 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dd49: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dd4b: je 0x50dd98 */ if (fZ) goto L_0050dd98;
L_0050dd4d:; BB(0x0050dd4d);
    /* 0050dd4d: movsx edx, word ptr [ebp - 0x4c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0050dd51: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dd54: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0050dd57: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050dd59: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050dd5e: lea edi, [ebp - 0x38] */ r_edi = (u32)(r_ebp+0xffffffc8u);
    /* 0050dd61: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050dd63: movsx eax, word ptr [ebp - 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dd67: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dd6a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0050dd6d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050dd6f: movsx ecx, word ptr [ebp - 0x4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0050dd73: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dd76: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050dd79: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050dd7b: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050dd80: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050dd82: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050dd86: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dd89: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050dd8c: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050dd8e: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050dd93: lea esi, [ebp - 0x38] */ r_esi = (u32)(r_ebp+0xffffffc8u);
    /* 0050dd96: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
L_0050dd98:; BB(0x0050dd98);
    /* 0050dd98: jmp 0x50dc89 */ goto L_0050dc89;
L_0050dd9d:; BB(0x0050dd9d);
    /* 0050dd9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050dd9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050dd9f: mov esp, ebp */ r_esp = r_ebp;
    /* 0050dda1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050dda2: ret 4 */ FN_RET(0x0050d945); r_esp += 8; return;
}

void f_0050dda5(void) /* FUN_0050dda5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050dda5);
    /* 0050dda5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050dda6: mov ebp, esp */ r_ebp = r_esp;
    /* 0050dda8: sub esp, 0x198 */ {  u32 a = r_esp; u32 b = 0x198u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ddae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050ddaf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050ddb0: mov dword ptr [ebp - 0x194], ecx */ W32((u32)(r_ebp+0xfffffe6cu), r_ecx);
    /* 0050ddb6: mov word ptr [ebp - 0x14c], 0 */ W16((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 0050ddbf: jmp 0x50ddd3 */ goto L_0050ddd3;
L_0050ddc1:; BB(0x0050ddc1);
    /* 0050ddc1: mov ax, word ptr [ebp - 0x14c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffeb4u))) & 0xffffu);
    /* 0050ddc8: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ddcc: mov word ptr [ebp - 0x14c], ax */ W16((u32)(r_ebp+0xfffffeb4u), (u16)r_eax);
L_0050ddd3:; BB(0x0050ddd3);
    /* 0050ddd3: movsx ecx, word ptr [ebp - 0x14c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeb4u));
    /* 0050ddda: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050dddd: jge 0x50ddf2 */ if ((fS==fO)) goto L_0050ddf2;
L_0050dddf:; BB(0x0050dddf);
    /* 0050dddf: movsx edx, word ptr [ebp - 0x14c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeb4u));
    /* 0050dde6: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dde9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050ddec: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 0050ddf0: jmp 0x50ddc1 */ goto L_0050ddc1;
L_0050ddf2:; BB(0x0050ddf2);
    /* 0050ddf2: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050ddf8: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050ddfe: add ecx, 0x5f0 */ {  u32 a = r_ecx; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050de04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050de05: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050de0a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50de0fu); f_00624510();
    /* 0050de0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050de12: push 0x692400 */ { u32 v = 0x692400u; r_esp -= 4; W32(r_esp, v); }
    /* 0050de17: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050de1c: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50de21u); f_00624520();
    /* 0050de21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050de24: lea edx, [ebp - 0x148] */ r_edx = (u32)(r_ebp+0xfffffeb8u);
    /* 0050de2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050de2b: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050de30: call dword ptr [0x63303c] */ { u32 t = R32((u32)(0x63303cu)); r_esp -= 4; W32(r_esp, 0x50de36u); call_ind(t); }
    /* 0050de36: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 0050de3c: cmp dword ptr [ebp - 0x150], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050de43: je 0x50e126 */ if (fZ) goto L_0050e126;
L_0050de49:; BB(0x0050de49);
    /* 0050de49: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0050de50:; BB(0x0050de50);
    /* 0050de50: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050de54: je 0x50e119 */ if (fZ) goto L_0050e119;
L_0050de5a:; BB(0x0050de5a);
    /* 0050de5a: lea eax, [ebp - 0x11c] */ r_eax = (u32)(r_ebp+0xfffffee4u);
    /* 0050de60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050de61: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x50de66u); f_00624990();
    /* 0050de66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050de69: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0050de6c: jbe 0x50de79 */ if ((fC||fZ)) goto L_0050de79;
L_0050de6e:; BB(0x0050de6e);
    /* 0050de6e: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0050de71: mov dword ptr [ebp - 0x198], ecx */ W32((u32)(r_ebp+0xfffffe68u), r_ecx);
    /* 0050de77: jmp 0x50de85 */ goto L_0050de85;
L_0050de79:; BB(0x0050de79);
    /* 0050de79: lea edx, [ebp - 0x11c] */ r_edx = (u32)(r_ebp+0xfffffee4u);
    /* 0050de7f: mov dword ptr [ebp - 0x198], edx */ W32((u32)(r_ebp+0xfffffe68u), r_edx);
L_0050de85:; BB(0x0050de85);
    /* 0050de85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050de87: lea eax, [ebp - 0x188] */ r_eax = (u32)(r_ebp+0xfffffe78u);
    /* 0050de8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050de8e: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0050de94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050de95: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050de9b: call 0x50f1ff */ r_esp -= 4; W32(r_esp, 0x50dea0u); f_0050f1ff();
    /* 0050dea0: movsx edx, byte ptr [ebp - 0x188] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffe78u));
    /* 0050dea7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dea9: je 0x50e0fd */ if (fZ) goto L_0050e0fd;
L_0050deaf:; BB(0x0050deaf);
    /* 0050deaf: mov word ptr [ebp - 0x18c], 0 */ W16((u32)(r_ebp+0xfffffe74u), 0x0u);
    /* 0050deb8: jmp 0x50decc */ goto L_0050decc;
L_0050deba:; BB(0x0050deba);
    /* 0050deba: mov ax, word ptr [ebp - 0x18c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe74u))) & 0xffffu);
    /* 0050dec1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050dec5: mov word ptr [ebp - 0x18c], ax */ W16((u32)(r_ebp+0xfffffe74u), (u16)r_eax);
L_0050decc:; BB(0x0050decc);
    /* 0050decc: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050ded3: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050ded7: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ded9: jge 0x50df34 */ if ((fS==fO)) goto L_0050df34;
L_0050dedb:; BB(0x0050dedb);
    /* 0050dedb: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050dee2: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dee5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050dee8: mov edx, dword ptr [ebp - 0x170] */ r_edx = R32((u32)(r_ebp+0xfffffe90u));
    /* 0050deee: cmp edx, dword ptr [ecx + eax + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050def2: jg 0x50df30 */ if ((!fZ&&fS==fO)) goto L_0050df30;
L_0050def4:; BB(0x0050def4);
    /* 0050def4: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050defb: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050defe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050df01: mov edx, dword ptr [ebp - 0x170] */ r_edx = R32((u32)(r_ebp+0xfffffe90u));
    /* 0050df07: cmp edx, dword ptr [ecx + eax + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050df0b: jne 0x50df32 */ if (!fZ) goto L_0050df32;
L_0050df0d:; BB(0x0050df0d);
    /* 0050df0d: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050df14: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050df17: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050df1a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050df1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050df1d: lea edx, [ebp - 0x188] */ r_edx = (u32)(r_ebp+0xfffffe78u);
    /* 0050df23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050df24: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x50df29u); f_006325b0();
    /* 0050df29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050df2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050df2e: jge 0x50df32 */ if ((fS==fO)) goto L_0050df32;
L_0050df30:; BB(0x0050df30);
    /* 0050df30: jmp 0x50df34 */ goto L_0050df34;
L_0050df32:; BB(0x0050df32);
    /* 0050df32: jmp 0x50deba */ goto L_0050deba;
L_0050df34:; BB(0x0050df34);
    /* 0050df34: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050df3b: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050df3f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050df41: je 0x50e08e */ if (fZ) goto L_0050e08e;
L_0050df47:; BB(0x0050df47);
    /* 0050df47: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050df4b: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050df4e: jne 0x50e009 */ if (!fZ) goto L_0050e009;
L_0050df54:; BB(0x0050df54);
    /* 0050df54: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050df5a: add eax, 0x5f0 */ {  u32 a = r_eax; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050df5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050df60: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050df65: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50df6au); f_00624510();
    /* 0050df6a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050df6d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050df70: add ecx, 0xac3 */ {  u32 a = r_ecx; u32 b = 0xac3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050df76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050df77: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050df7c: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50df81u); f_00624520();
    /* 0050df81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050df84: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050df89: call dword ptr [0x633024] */ { u32 t = R32((u32)(0x633024u)); r_esp -= 4; W32(r_esp, 0x50df8fu); call_ind(t); }
    /* 0050df8f: mov word ptr [ebp - 0x190], 0x31 */ W16((u32)(r_ebp+0xfffffe70u), 0x31u);
    /* 0050df98: jmp 0x50dfac */ goto L_0050dfac;
L_0050df9a:; BB(0x0050df9a);
    /* 0050df9a: mov dx, word ptr [ebp - 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe70u))) & 0xffffu);
    /* 0050dfa1: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050dfa5: mov word ptr [ebp - 0x190], dx */ W16((u32)(r_ebp+0xfffffe70u), (u16)r_edx);
L_0050dfac:; BB(0x0050dfac);
    /* 0050dfac: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050dfb3: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050dfba: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050dfbc: jle 0x50dfe8 */ if ((fZ||fS!=fO)) goto L_0050dfe8;
L_0050dfbe:; BB(0x0050dfbe);
    /* 0050dfbe: movsx edx, word ptr [ebp - 0x190] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050dfc5: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050dfc8: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dfcb: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0050dfce: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050dfd0: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050dfd7: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dfda: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050dfdd: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050dfdf: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050dfe4: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050dfe6: jmp 0x50df9a */ goto L_0050df9a;
L_0050dfe8:; BB(0x0050dfe8);
    /* 0050dfe8: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050dfef: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050dff2: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050dff5: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050dff7: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050dffc: lea esi, [ebp - 0x188] */ r_esi = (u32)(r_ebp+0xfffffe78u);
    /* 0050e002: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e004: jmp 0x50e08c */ goto L_0050e08c;
L_0050e009:; BB(0x0050e009);
    /* 0050e009: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050e00d: mov word ptr [ebp - 0x190], dx */ W16((u32)(r_ebp+0xfffffe70u), (u16)r_edx);
    /* 0050e014: jmp 0x50e028 */ goto L_0050e028;
L_0050e016:; BB(0x0050e016);
    /* 0050e016: mov ax, word ptr [ebp - 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe70u))) & 0xffffu);
    /* 0050e01d: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e021: mov word ptr [ebp - 0x190], ax */ W16((u32)(r_ebp+0xfffffe70u), (u16)r_eax);
L_0050e028:; BB(0x0050e028);
    /* 0050e028: movsx ecx, word ptr [ebp - 0x190] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e02f: movsx edx, word ptr [ebp - 0x18c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e036: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e038: jle 0x50e064 */ if ((fZ||fS!=fO)) goto L_0050e064;
L_0050e03a:; BB(0x0050e03a);
    /* 0050e03a: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e041: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050e044: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e047: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0050e04a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050e04c: movsx ecx, word ptr [ebp - 0x190] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e053: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e056: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e059: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e05b: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e060: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e062: jmp 0x50e016 */ goto L_0050e016;
L_0050e064:; BB(0x0050e064);
    /* 0050e064: movsx edx, word ptr [ebp - 0x18c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e06b: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e06e: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e071: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e073: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e078: lea esi, [ebp - 0x188] */ r_esi = (u32)(r_ebp+0xfffffe78u);
    /* 0050e07e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e080: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050e084: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e088: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_0050e08c:; BB(0x0050e08c);
    /* 0050e08c: jmp 0x50e0fd */ goto L_0050e0fd;
L_0050e08e:; BB(0x0050e08e);
    /* 0050e08e: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e095: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e098: jne 0x50e0d5 */ if (!fZ) goto L_0050e0d5;
L_0050e09a:; BB(0x0050e09a);
    /* 0050e09a: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050e0a0: add edx, 0x5f0 */ {  u32 a = r_edx; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050e0a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e0a7: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e0ac: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50e0b1u); f_00624510();
    /* 0050e0b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e0b4: lea eax, [ebp - 0x17d] */ r_eax = (u32)(r_ebp+0xfffffe83u);
    /* 0050e0ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e0bb: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e0c0: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50e0c5u); f_00624520();
    /* 0050e0c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e0c8: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e0cd: call dword ptr [0x633024] */ { u32 t = R32((u32)(0x633024u)); r_esp -= 4; W32(r_esp, 0x50e0d3u); call_ind(t); }
    /* 0050e0d3: jmp 0x50e0fd */ goto L_0050e0fd;
L_0050e0d5:; BB(0x0050e0d5);
    /* 0050e0d5: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e0dc: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e0df: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e0e2: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e0e4: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e0e9: lea esi, [ebp - 0x188] */ r_esi = (u32)(r_ebp+0xfffffe78u);
    /* 0050e0ef: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e0f1: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050e0f5: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e0f9: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_0050e0fd:; BB(0x0050e0fd);
    /* 0050e0fd: lea eax, [ebp - 0x148] */ r_eax = (u32)(r_ebp+0xfffffeb8u);
    /* 0050e103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e104: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0050e10a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e10b: call dword ptr [0x63304c] */ { u32 t = R32((u32)(0x63304cu)); r_esp -= 4; W32(r_esp, 0x50e111u); call_ind(t); }
    /* 0050e111: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0050e114: jmp 0x50de50 */ goto L_0050de50;
L_0050e119:; BB(0x0050e119);
    /* 0050e119: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0050e11f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e120: call dword ptr [0x633030] */ { u32 t = R32((u32)(0x633030u)); r_esp -= 4; W32(r_esp, 0x50e126u); call_ind(t); }
L_0050e126:; BB(0x0050e126);
    /* 0050e126: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e127: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050e128: mov esp, ebp */ r_esp = r_ebp;
    /* 0050e12a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050e12b: ret 4 */ FN_RET(0x0050dda5); r_esp += 8; return;
}

void f_0050e12e(void) /* FUN_0050e12e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050e12e);
    /* 0050e12e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050e12f: mov ebp, esp */ r_ebp = r_esp;
    /* 0050e131: sub esp, 0x198 */ {  u32 a = r_esp; u32 b = 0x198u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050e137: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050e138: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050e139: mov dword ptr [ebp - 0x194], ecx */ W32((u32)(r_ebp+0xfffffe6cu), r_ecx);
    /* 0050e13f: mov word ptr [ebp - 0x14c], 0 */ W16((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 0050e148: jmp 0x50e15c */ goto L_0050e15c;
L_0050e14a:; BB(0x0050e14a);
    /* 0050e14a: mov ax, word ptr [ebp - 0x14c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffeb4u))) & 0xffffu);
    /* 0050e151: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e155: mov word ptr [ebp - 0x14c], ax */ W16((u32)(r_ebp+0xfffffeb4u), (u16)r_eax);
L_0050e15c:; BB(0x0050e15c);
    /* 0050e15c: movsx ecx, word ptr [ebp - 0x14c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeb4u));
    /* 0050e163: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e166: jge 0x50e17b */ if ((fS==fO)) goto L_0050e17b;
L_0050e168:; BB(0x0050e168);
    /* 0050e168: movsx edx, word ptr [ebp - 0x14c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeb4u));
    /* 0050e16f: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e172: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050e175: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 0050e179: jmp 0x50e14a */ goto L_0050e14a;
L_0050e17b:; BB(0x0050e17b);
    /* 0050e17b: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050e181: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050e187: add ecx, 0x5f0 */ {  u32 a = r_ecx; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e18d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e18e: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e193: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50e198u); f_00624510();
    /* 0050e198: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e19b: push 0x692408 */ { u32 v = 0x692408u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e1a0: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e1a5: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50e1aau); f_00624520();
    /* 0050e1aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e1ad: lea edx, [ebp - 0x148] */ r_edx = (u32)(r_ebp+0xfffffeb8u);
    /* 0050e1b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e1b4: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e1b9: call dword ptr [0x63303c] */ { u32 t = R32((u32)(0x63303cu)); r_esp -= 4; W32(r_esp, 0x50e1bfu); call_ind(t); }
    /* 0050e1bf: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 0050e1c5: cmp dword ptr [ebp - 0x150], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e1cc: je 0x50e4af */ if (fZ) goto L_0050e4af;
L_0050e1d2:; BB(0x0050e1d2);
    /* 0050e1d2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0050e1d9:; BB(0x0050e1d9);
    /* 0050e1d9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e1dd: je 0x50e4a2 */ if (fZ) goto L_0050e4a2;
L_0050e1e3:; BB(0x0050e1e3);
    /* 0050e1e3: lea eax, [ebp - 0x11c] */ r_eax = (u32)(r_ebp+0xfffffee4u);
    /* 0050e1e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e1ea: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x50e1efu); f_00624990();
    /* 0050e1ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e1f2: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0050e1f5: jbe 0x50e202 */ if ((fC||fZ)) goto L_0050e202;
L_0050e1f7:; BB(0x0050e1f7);
    /* 0050e1f7: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0050e1fa: mov dword ptr [ebp - 0x198], ecx */ W32((u32)(r_ebp+0xfffffe68u), r_ecx);
    /* 0050e200: jmp 0x50e20e */ goto L_0050e20e;
L_0050e202:; BB(0x0050e202);
    /* 0050e202: lea edx, [ebp - 0x11c] */ r_edx = (u32)(r_ebp+0xfffffee4u);
    /* 0050e208: mov dword ptr [ebp - 0x198], edx */ W32((u32)(r_ebp+0xfffffe68u), r_edx);
L_0050e20e:; BB(0x0050e20e);
    /* 0050e20e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e210: lea eax, [ebp - 0x188] */ r_eax = (u32)(r_ebp+0xfffffe78u);
    /* 0050e216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e217: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0050e21d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e21e: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050e224: call 0x50f1ff */ r_esp -= 4; W32(r_esp, 0x50e229u); f_0050f1ff();
    /* 0050e229: movsx edx, byte ptr [ebp - 0x188] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffe78u));
    /* 0050e230: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e232: je 0x50e486 */ if (fZ) goto L_0050e486;
L_0050e238:; BB(0x0050e238);
    /* 0050e238: mov word ptr [ebp - 0x18c], 0 */ W16((u32)(r_ebp+0xfffffe74u), 0x0u);
    /* 0050e241: jmp 0x50e255 */ goto L_0050e255;
L_0050e243:; BB(0x0050e243);
    /* 0050e243: mov ax, word ptr [ebp - 0x18c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe74u))) & 0xffffu);
    /* 0050e24a: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e24e: mov word ptr [ebp - 0x18c], ax */ W16((u32)(r_ebp+0xfffffe74u), (u16)r_eax);
L_0050e255:; BB(0x0050e255);
    /* 0050e255: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e25c: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050e260: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e262: jge 0x50e2bd */ if ((fS==fO)) goto L_0050e2bd;
L_0050e264:; BB(0x0050e264);
    /* 0050e264: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e26b: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e26e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050e271: mov edx, dword ptr [ebp - 0x170] */ r_edx = R32((u32)(r_ebp+0xfffffe90u));
    /* 0050e277: cmp edx, dword ptr [ecx + eax + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e27b: jg 0x50e2b9 */ if ((!fZ&&fS==fO)) goto L_0050e2b9;
L_0050e27d:; BB(0x0050e27d);
    /* 0050e27d: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e284: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e287: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050e28a: mov edx, dword ptr [ebp - 0x170] */ r_edx = R32((u32)(r_ebp+0xfffffe90u));
    /* 0050e290: cmp edx, dword ptr [ecx + eax + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e294: jne 0x50e2bb */ if (!fZ) goto L_0050e2bb;
L_0050e296:; BB(0x0050e296);
    /* 0050e296: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e29d: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e2a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050e2a3: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e2a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2a6: lea edx, [ebp - 0x188] */ r_edx = (u32)(r_ebp+0xfffffe78u);
    /* 0050e2ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2ad: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x50e2b2u); f_006325b0();
    /* 0050e2b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e2b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050e2b7: jge 0x50e2bb */ if ((fS==fO)) goto L_0050e2bb;
L_0050e2b9:; BB(0x0050e2b9);
    /* 0050e2b9: jmp 0x50e2bd */ goto L_0050e2bd;
L_0050e2bb:; BB(0x0050e2bb);
    /* 0050e2bb: jmp 0x50e243 */ goto L_0050e243;
L_0050e2bd:; BB(0x0050e2bd);
    /* 0050e2bd: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e2c4: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050e2c8: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e2ca: je 0x50e417 */ if (fZ) goto L_0050e417;
L_0050e2d0:; BB(0x0050e2d0);
    /* 0050e2d0: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050e2d4: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e2d7: jne 0x50e392 */ if (!fZ) goto L_0050e392;
L_0050e2dd:; BB(0x0050e2dd);
    /* 0050e2dd: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050e2e3: add eax, 0x5f0 */ {  u32 a = r_eax; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050e2e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2e9: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2ee: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50e2f3u); f_00624510();
    /* 0050e2f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e2f6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050e2f9: add ecx, 0xac3 */ {  u32 a = r_ecx; u32 b = 0xac3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e2ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e300: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e305: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50e30au); f_00624520();
    /* 0050e30a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e30d: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e312: call dword ptr [0x633024] */ { u32 t = R32((u32)(0x633024u)); r_esp -= 4; W32(r_esp, 0x50e318u); call_ind(t); }
    /* 0050e318: mov word ptr [ebp - 0x190], 0x31 */ W16((u32)(r_ebp+0xfffffe70u), 0x31u);
    /* 0050e321: jmp 0x50e335 */ goto L_0050e335;
L_0050e323:; BB(0x0050e323);
    /* 0050e323: mov dx, word ptr [ebp - 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe70u))) & 0xffffu);
    /* 0050e32a: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e32e: mov word ptr [ebp - 0x190], dx */ W16((u32)(r_ebp+0xfffffe70u), (u16)r_edx);
L_0050e335:; BB(0x0050e335);
    /* 0050e335: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e33c: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e343: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e345: jle 0x50e371 */ if ((fZ||fS!=fO)) goto L_0050e371;
L_0050e347:; BB(0x0050e347);
    /* 0050e347: movsx edx, word ptr [ebp - 0x190] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e34e: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050e351: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e354: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0050e357: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050e359: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e360: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e363: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e366: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e368: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e36d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e36f: jmp 0x50e323 */ goto L_0050e323;
L_0050e371:; BB(0x0050e371);
    /* 0050e371: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e378: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e37b: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e37e: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e380: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e385: lea esi, [ebp - 0x188] */ r_esi = (u32)(r_ebp+0xfffffe78u);
    /* 0050e38b: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e38d: jmp 0x50e415 */ goto L_0050e415;
L_0050e392:; BB(0x0050e392);
    /* 0050e392: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050e396: mov word ptr [ebp - 0x190], dx */ W16((u32)(r_ebp+0xfffffe70u), (u16)r_edx);
    /* 0050e39d: jmp 0x50e3b1 */ goto L_0050e3b1;
L_0050e39f:; BB(0x0050e39f);
    /* 0050e39f: mov ax, word ptr [ebp - 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe70u))) & 0xffffu);
    /* 0050e3a6: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e3aa: mov word ptr [ebp - 0x190], ax */ W16((u32)(r_ebp+0xfffffe70u), (u16)r_eax);
L_0050e3b1:; BB(0x0050e3b1);
    /* 0050e3b1: movsx ecx, word ptr [ebp - 0x190] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e3b8: movsx edx, word ptr [ebp - 0x18c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e3bf: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e3c1: jle 0x50e3ed */ if ((fZ||fS!=fO)) goto L_0050e3ed;
L_0050e3c3:; BB(0x0050e3c3);
    /* 0050e3c3: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e3ca: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050e3cd: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e3d0: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0050e3d3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050e3d5: movsx ecx, word ptr [ebp - 0x190] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e3dc: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e3df: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e3e2: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e3e4: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e3e9: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e3eb: jmp 0x50e39f */ goto L_0050e39f;
L_0050e3ed:; BB(0x0050e3ed);
    /* 0050e3ed: movsx edx, word ptr [ebp - 0x18c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e3f4: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e3f7: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e3fa: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e3fc: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e401: lea esi, [ebp - 0x188] */ r_esi = (u32)(r_ebp+0xfffffe78u);
    /* 0050e407: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e409: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050e40d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e411: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_0050e415:; BB(0x0050e415);
    /* 0050e415: jmp 0x50e486 */ goto L_0050e486;
L_0050e417:; BB(0x0050e417);
    /* 0050e417: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e41e: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e421: jne 0x50e45e */ if (!fZ) goto L_0050e45e;
L_0050e423:; BB(0x0050e423);
    /* 0050e423: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050e429: add edx, 0x5f0 */ {  u32 a = r_edx; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050e42f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e430: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e435: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50e43au); f_00624510();
    /* 0050e43a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e43d: lea eax, [ebp - 0x17d] */ r_eax = (u32)(r_ebp+0xfffffe83u);
    /* 0050e443: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e444: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e449: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50e44eu); f_00624520();
    /* 0050e44e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e451: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e456: call dword ptr [0x633024] */ { u32 t = R32((u32)(0x633024u)); r_esp -= 4; W32(r_esp, 0x50e45cu); call_ind(t); }
    /* 0050e45c: jmp 0x50e486 */ goto L_0050e486;
L_0050e45e:; BB(0x0050e45e);
    /* 0050e45e: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e465: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e468: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e46b: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e46d: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e472: lea esi, [ebp - 0x188] */ r_esi = (u32)(r_ebp+0xfffffe78u);
    /* 0050e478: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e47a: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050e47e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e482: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_0050e486:; BB(0x0050e486);
    /* 0050e486: lea eax, [ebp - 0x148] */ r_eax = (u32)(r_ebp+0xfffffeb8u);
    /* 0050e48c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e48d: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0050e493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e494: call dword ptr [0x63304c] */ { u32 t = R32((u32)(0x63304cu)); r_esp -= 4; W32(r_esp, 0x50e49au); call_ind(t); }
    /* 0050e49a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0050e49d: jmp 0x50e1d9 */ goto L_0050e1d9;
L_0050e4a2:; BB(0x0050e4a2);
    /* 0050e4a2: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0050e4a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e4a9: call dword ptr [0x633030] */ { u32 t = R32((u32)(0x633030u)); r_esp -= 4; W32(r_esp, 0x50e4afu); call_ind(t); }
L_0050e4af:; BB(0x0050e4af);
    /* 0050e4af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e4b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050e4b1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050e4b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050e4b4: ret 4 */ FN_RET(0x0050e12e); r_esp += 8; return;
}

void f_0050e4b7(void) /* FUN_0050e4b7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050e4b7);
    /* 0050e4b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050e4b8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050e4ba: sub esp, 0x198 */ {  u32 a = r_esp; u32 b = 0x198u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050e4c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050e4c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050e4c2: mov dword ptr [ebp - 0x194], ecx */ W32((u32)(r_ebp+0xfffffe6cu), r_ecx);
    /* 0050e4c8: mov word ptr [ebp - 0x14c], 0 */ W16((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 0050e4d1: jmp 0x50e4e5 */ goto L_0050e4e5;
L_0050e4d3:; BB(0x0050e4d3);
    /* 0050e4d3: mov ax, word ptr [ebp - 0x14c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffeb4u))) & 0xffffu);
    /* 0050e4da: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e4de: mov word ptr [ebp - 0x14c], ax */ W16((u32)(r_ebp+0xfffffeb4u), (u16)r_eax);
L_0050e4e5:; BB(0x0050e4e5);
    /* 0050e4e5: movsx ecx, word ptr [ebp - 0x14c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeb4u));
    /* 0050e4ec: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e4ef: jge 0x50e504 */ if ((fS==fO)) goto L_0050e504;
L_0050e4f1:; BB(0x0050e4f1);
    /* 0050e4f1: movsx edx, word ptr [ebp - 0x14c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeb4u));
    /* 0050e4f8: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e4fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050e4fe: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 0050e502: jmp 0x50e4d3 */ goto L_0050e4d3;
L_0050e504:; BB(0x0050e504);
    /* 0050e504: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050e50a: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050e510: add ecx, 0x5f0 */ {  u32 a = r_ecx; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e516: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e517: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e51c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50e521u); f_00624510();
    /* 0050e521: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e524: push 0x692410 */ { u32 v = 0x692410u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e529: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e52e: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50e533u); f_00624520();
    /* 0050e533: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e536: lea edx, [ebp - 0x148] */ r_edx = (u32)(r_ebp+0xfffffeb8u);
    /* 0050e53c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e53d: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e542: call dword ptr [0x63303c] */ { u32 t = R32((u32)(0x63303cu)); r_esp -= 4; W32(r_esp, 0x50e548u); call_ind(t); }
    /* 0050e548: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 0050e54e: cmp dword ptr [ebp - 0x150], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e555: je 0x50e838 */ if (fZ) goto L_0050e838;
L_0050e55b:; BB(0x0050e55b);
    /* 0050e55b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0050e562:; BB(0x0050e562);
    /* 0050e562: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e566: je 0x50e82b */ if (fZ) goto L_0050e82b;
L_0050e56c:; BB(0x0050e56c);
    /* 0050e56c: lea eax, [ebp - 0x11c] */ r_eax = (u32)(r_ebp+0xfffffee4u);
    /* 0050e572: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e573: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x50e578u); f_00624990();
    /* 0050e578: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e57b: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0050e57e: jbe 0x50e58b */ if ((fC||fZ)) goto L_0050e58b;
L_0050e580:; BB(0x0050e580);
    /* 0050e580: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0050e583: mov dword ptr [ebp - 0x198], ecx */ W32((u32)(r_ebp+0xfffffe68u), r_ecx);
    /* 0050e589: jmp 0x50e597 */ goto L_0050e597;
L_0050e58b:; BB(0x0050e58b);
    /* 0050e58b: lea edx, [ebp - 0x11c] */ r_edx = (u32)(r_ebp+0xfffffee4u);
    /* 0050e591: mov dword ptr [ebp - 0x198], edx */ W32((u32)(r_ebp+0xfffffe68u), r_edx);
L_0050e597:; BB(0x0050e597);
    /* 0050e597: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e599: lea eax, [ebp - 0x188] */ r_eax = (u32)(r_ebp+0xfffffe78u);
    /* 0050e59f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e5a0: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0050e5a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e5a7: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050e5ad: call 0x50f1ff */ r_esp -= 4; W32(r_esp, 0x50e5b2u); f_0050f1ff();
    /* 0050e5b2: movsx edx, byte ptr [ebp - 0x188] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffe78u));
    /* 0050e5b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e5bb: je 0x50e80f */ if (fZ) goto L_0050e80f;
L_0050e5c1:; BB(0x0050e5c1);
    /* 0050e5c1: mov word ptr [ebp - 0x18c], 0 */ W16((u32)(r_ebp+0xfffffe74u), 0x0u);
    /* 0050e5ca: jmp 0x50e5de */ goto L_0050e5de;
L_0050e5cc:; BB(0x0050e5cc);
    /* 0050e5cc: mov ax, word ptr [ebp - 0x18c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe74u))) & 0xffffu);
    /* 0050e5d3: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e5d7: mov word ptr [ebp - 0x18c], ax */ W16((u32)(r_ebp+0xfffffe74u), (u16)r_eax);
L_0050e5de:; BB(0x0050e5de);
    /* 0050e5de: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e5e5: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050e5e9: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e5eb: jge 0x50e646 */ if ((fS==fO)) goto L_0050e646;
L_0050e5ed:; BB(0x0050e5ed);
    /* 0050e5ed: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e5f4: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e5f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050e5fa: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0050e600: cmp edx, dword ptr [ecx + eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e604: jg 0x50e642 */ if ((!fZ&&fS==fO)) goto L_0050e642;
L_0050e606:; BB(0x0050e606);
    /* 0050e606: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e60d: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e610: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050e613: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0050e619: cmp edx, dword ptr [ecx + eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e61d: jne 0x50e644 */ if (!fZ) goto L_0050e644;
L_0050e61f:; BB(0x0050e61f);
    /* 0050e61f: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e626: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e629: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050e62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e62e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e62f: lea edx, [ebp - 0x188] */ r_edx = (u32)(r_ebp+0xfffffe78u);
    /* 0050e635: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e636: call 0x6325b0 */ r_esp -= 4; W32(r_esp, 0x50e63bu); f_006325b0();
    /* 0050e63b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e63e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050e640: jge 0x50e644 */ if ((fS==fO)) goto L_0050e644;
L_0050e642:; BB(0x0050e642);
    /* 0050e642: jmp 0x50e646 */ goto L_0050e646;
L_0050e644:; BB(0x0050e644);
    /* 0050e644: jmp 0x50e5cc */ goto L_0050e5cc;
L_0050e646:; BB(0x0050e646);
    /* 0050e646: movsx eax, word ptr [ebp - 0x18c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e64d: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050e651: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e653: je 0x50e7a0 */ if (fZ) goto L_0050e7a0;
L_0050e659:; BB(0x0050e659);
    /* 0050e659: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050e65d: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e660: jne 0x50e71b */ if (!fZ) goto L_0050e71b;
L_0050e666:; BB(0x0050e666);
    /* 0050e666: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050e66c: add eax, 0x5f0 */ {  u32 a = r_eax; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050e671: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e672: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e677: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50e67cu); f_00624510();
    /* 0050e67c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e67f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050e682: add ecx, 0xac3 */ {  u32 a = r_ecx; u32 b = 0xac3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e688: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e689: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e68e: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50e693u); f_00624520();
    /* 0050e693: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e696: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e69b: call dword ptr [0x633024] */ { u32 t = R32((u32)(0x633024u)); r_esp -= 4; W32(r_esp, 0x50e6a1u); call_ind(t); }
    /* 0050e6a1: mov word ptr [ebp - 0x190], 0x31 */ W16((u32)(r_ebp+0xfffffe70u), 0x31u);
    /* 0050e6aa: jmp 0x50e6be */ goto L_0050e6be;
L_0050e6ac:; BB(0x0050e6ac);
    /* 0050e6ac: mov dx, word ptr [ebp - 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe70u))) & 0xffffu);
    /* 0050e6b3: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e6b7: mov word ptr [ebp - 0x190], dx */ W16((u32)(r_ebp+0xfffffe70u), (u16)r_edx);
L_0050e6be:; BB(0x0050e6be);
    /* 0050e6be: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e6c5: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e6cc: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e6ce: jle 0x50e6fa */ if ((fZ||fS!=fO)) goto L_0050e6fa;
L_0050e6d0:; BB(0x0050e6d0);
    /* 0050e6d0: movsx edx, word ptr [ebp - 0x190] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e6d7: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050e6da: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e6dd: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0050e6e0: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050e6e2: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e6e9: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e6ec: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e6ef: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e6f1: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e6f6: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e6f8: jmp 0x50e6ac */ goto L_0050e6ac;
L_0050e6fa:; BB(0x0050e6fa);
    /* 0050e6fa: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e701: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e704: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e707: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e709: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e70e: lea esi, [ebp - 0x188] */ r_esi = (u32)(r_ebp+0xfffffe78u);
    /* 0050e714: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e716: jmp 0x50e79e */ goto L_0050e79e;
L_0050e71b:; BB(0x0050e71b);
    /* 0050e71b: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050e71f: mov word ptr [ebp - 0x190], dx */ W16((u32)(r_ebp+0xfffffe70u), (u16)r_edx);
    /* 0050e726: jmp 0x50e73a */ goto L_0050e73a;
L_0050e728:; BB(0x0050e728);
    /* 0050e728: mov ax, word ptr [ebp - 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe70u))) & 0xffffu);
    /* 0050e72f: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e733: mov word ptr [ebp - 0x190], ax */ W16((u32)(r_ebp+0xfffffe70u), (u16)r_eax);
L_0050e73a:; BB(0x0050e73a);
    /* 0050e73a: movsx ecx, word ptr [ebp - 0x190] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e741: movsx edx, word ptr [ebp - 0x18c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e748: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e74a: jle 0x50e776 */ if ((fZ||fS!=fO)) goto L_0050e776;
L_0050e74c:; BB(0x0050e74c);
    /* 0050e74c: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e753: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050e756: imul eax, eax, 0x38 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x38u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e759: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0050e75c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050e75e: movsx ecx, word ptr [ebp - 0x190] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0050e765: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e768: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e76b: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e76d: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e772: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e774: jmp 0x50e728 */ goto L_0050e728;
L_0050e776:; BB(0x0050e776);
    /* 0050e776: movsx edx, word ptr [ebp - 0x18c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e77d: imul edx, edx, 0x38 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x38u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e780: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e783: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e785: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e78a: lea esi, [ebp - 0x188] */ r_esi = (u32)(r_ebp+0xfffffe78u);
    /* 0050e790: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e792: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050e796: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e79a: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_0050e79e:; BB(0x0050e79e);
    /* 0050e79e: jmp 0x50e80f */ goto L_0050e80f;
L_0050e7a0:; BB(0x0050e7a0);
    /* 0050e7a0: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e7a7: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e7aa: jne 0x50e7e7 */ if (!fZ) goto L_0050e7e7;
L_0050e7ac:; BB(0x0050e7ac);
    /* 0050e7ac: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0050e7b2: add edx, 0x5f0 */ {  u32 a = r_edx; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050e7b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e7b9: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e7be: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50e7c3u); f_00624510();
    /* 0050e7c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e7c6: lea eax, [ebp - 0x17d] */ r_eax = (u32)(r_ebp+0xfffffe83u);
    /* 0050e7cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e7cd: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e7d2: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50e7d7u); f_00624520();
    /* 0050e7d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e7da: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e7df: call dword ptr [0x633024] */ { u32 t = R32((u32)(0x633024u)); r_esp -= 4; W32(r_esp, 0x50e7e5u); call_ind(t); }
    /* 0050e7e5: jmp 0x50e80f */ goto L_0050e80f;
L_0050e7e7:; BB(0x0050e7e7);
    /* 0050e7e7: movsx ecx, word ptr [ebp - 0x18c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe74u));
    /* 0050e7ee: imul ecx, ecx, 0x38 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x38u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e7f1: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050e7f4: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e7f6: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0050e7fb: lea esi, [ebp - 0x188] */ r_esi = (u32)(r_ebp+0xfffffe78u);
    /* 0050e801: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050e803: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0050e807: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e80b: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_0050e80f:; BB(0x0050e80f);
    /* 0050e80f: lea eax, [ebp - 0x148] */ r_eax = (u32)(r_ebp+0xfffffeb8u);
    /* 0050e815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e816: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0050e81c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e81d: call dword ptr [0x63304c] */ { u32 t = R32((u32)(0x63304cu)); r_esp -= 4; W32(r_esp, 0x50e823u); call_ind(t); }
    /* 0050e823: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0050e826: jmp 0x50e562 */ goto L_0050e562;
L_0050e82b:; BB(0x0050e82b);
    /* 0050e82b: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0050e831: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e832: call dword ptr [0x633030] */ { u32 t = R32((u32)(0x633030u)); r_esp -= 4; W32(r_esp, 0x50e838u); call_ind(t); }
L_0050e838:; BB(0x0050e838);
    /* 0050e838: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e839: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050e83a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050e83c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050e83d: ret 4 */ FN_RET(0x0050e4b7); r_esp += 8; return;
}

void f_0050e840(void) /* FUN_0050e840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050e840);
    /* 0050e840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050e841: mov ebp, esp */ r_ebp = r_esp;
    /* 0050e843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050e846: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050e849: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050e84c: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0050e84f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e851: jne 0x50e859 */ if (!fZ) goto L_0050e859;
L_0050e853:; BB(0x0050e853);
    /* 0050e853: mov ax, 0x14 */ r_eax = (r_eax & 0xffff0000u) | ((0x14u) & 0xffffu);
    /* 0050e857: jmp 0x50e8ba */ goto L_0050e8ba;
L_0050e859:; BB(0x0050e859);
    /* 0050e859: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050e85f: jmp 0x50e86d */ goto L_0050e86d;
L_0050e861:; BB(0x0050e861);
    /* 0050e861: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050e865: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e869: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0050e86d:; BB(0x0050e86d);
    /* 0050e86d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050e871: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e874: jge 0x50e8b6 */ if ((fS==fO)) goto L_0050e8b6;
L_0050e876:; BB(0x0050e876);
    /* 0050e876: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050e87a: imul ecx, ecx, 0xb */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xbu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e87d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e880: movsx eax, byte ptr [edx + ecx + 0x16d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x16du));
    /* 0050e888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e88a: jne 0x50e88e */ if (!fZ) goto L_0050e88e;
L_0050e88c:; BB(0x0050e88c);
    /* 0050e88c: jmp 0x50e861 */ goto L_0050e861;
L_0050e88e:; BB(0x0050e88e);
    /* 0050e88e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0050e890: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050e893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e894: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050e898: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e89b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e89e: lea ecx, [eax + edx + 0x16d] */ r_ecx = (u32)(r_eax+r_edx+0x16du);
    /* 0050e8a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e8a6: call 0x632740 */ r_esp -= 4; W32(r_esp, 0x50e8abu); f_00632740();
    /* 0050e8ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e8ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e8b0: jne 0x50e8b4 */ if (!fZ) goto L_0050e8b4;
L_0050e8b2:; BB(0x0050e8b2);
    /* 0050e8b2: jmp 0x50e8b6 */ goto L_0050e8b6;
L_0050e8b4:; BB(0x0050e8b4);
    /* 0050e8b4: jmp 0x50e861 */ goto L_0050e861;
L_0050e8b6:; BB(0x0050e8b6);
    /* 0050e8b6: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_0050e8ba:; BB(0x0050e8ba);
    /* 0050e8ba: mov esp, ebp */ r_esp = r_ebp;
    /* 0050e8bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050e8bd: ret 4 */ FN_RET(0x0050e840); r_esp += 8; return;
}

void f_0050e8c0(void) /* FUN_0050e8c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050e8c0);
    /* 0050e8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050e8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050e8c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050e8c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050e8c9: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050e8cf: jmp 0x50e8dd */ goto L_0050e8dd;
L_0050e8d1:; BB(0x0050e8d1);
    /* 0050e8d1: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050e8d5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e8d9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0050e8dd:; BB(0x0050e8dd);
    /* 0050e8dd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050e8e1: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e8e4: jge 0x50e900 */ if ((fS==fO)) goto L_0050e900;
L_0050e8e6:; BB(0x0050e8e6);
    /* 0050e8e6: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050e8ea: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e8ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e8f0: movsx ecx, byte ptr [eax + edx + 0x16d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x16du));
    /* 0050e8f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e8fa: jne 0x50e8fe */ if (!fZ) goto L_0050e8fe;
L_0050e8fc:; BB(0x0050e8fc);
    /* 0050e8fc: jmp 0x50e900 */ goto L_0050e900;
L_0050e8fe:; BB(0x0050e8fe);
    /* 0050e8fe: jmp 0x50e8d1 */ goto L_0050e8d1;
L_0050e900:; BB(0x0050e900);
    /* 0050e900: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050e904: mov esp, ebp */ r_esp = r_ebp;
    /* 0050e906: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050e907: ret  */ FN_RET(0x0050e8c0); r_esp += 4; return;
}

void f_0050e908(void) /* FUN_0050e908 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050e908);
    /* 0050e908: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050e909: mov ebp, esp */ r_ebp = r_esp;
    /* 0050e90b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050e90e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050e911: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050e915: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e918: mov dword ptr [ecx + eax*4 + 0x2a8], 0x186a0 */ W32((u32)(r_ecx+r_eax*4+0x2a8u), 0x186a0u);
    /* 0050e923: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050e927: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e92a: mov dword ptr [eax + edx*4 + 0x2fc], 0xdbba0 */ W32((u32)(r_eax+r_edx*4+0x2fcu), 0xdbba0u);
    /* 0050e935: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050e93b: jmp 0x50e949 */ goto L_0050e949;
L_0050e93d:; BB(0x0050e93d);
    /* 0050e93d: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050e941: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e945: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_0050e949:; BB(0x0050e949);
    /* 0050e949: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050e94d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e950: jge 0x50e970 */ if ((fS==fO)) goto L_0050e970;
L_0050e952:; BB(0x0050e952);
    /* 0050e952: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050e956: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e959: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e95c: lea edx, [ecx + eax + 0x350] */ r_edx = (u32)(r_ecx+r_eax+0x350u);
    /* 0050e963: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050e967: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 0050e96e: jmp 0x50e93d */ goto L_0050e93d;
L_0050e970:; BB(0x0050e970);
    /* 0050e970: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050e974: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e977: mov dword ptr [edx + ecx*4 + 0x44c], 0 */ W32((u32)(r_edx+r_ecx*4+0x44cu), 0x0u);
    /* 0050e982: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050e988: jmp 0x50e996 */ goto L_0050e996;
L_0050e98a:; BB(0x0050e98a);
    /* 0050e98a: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050e98e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050e992: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0050e996:; BB(0x0050e996);
    /* 0050e996: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050e99a: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e99d: jge 0x50e9ba */ if ((fS==fO)) goto L_0050e9ba;
L_0050e99f:; BB(0x0050e99f);
    /* 0050e99f: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050e9a3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e9a6: lea ecx, [eax + edx*4 + 0x4a0] */ r_ecx = (u32)(r_eax+r_edx*4+0x4a0u);
    /* 0050e9ad: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050e9b1: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
    /* 0050e9b8: jmp 0x50e98a */ goto L_0050e98a;
L_0050e9ba:; BB(0x0050e9ba);
    /* 0050e9ba: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050e9be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e9c1: mov word ptr [ecx + eax*2 + 0x4f4], 0 */ W16((u32)(r_ecx+r_eax*2+0x4f4u), 0x0u);
    /* 0050e9cb: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050e9cf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e9d2: mov word ptr [eax + edx*2 + 0x51e], 0 */ W16((u32)(r_eax+r_edx*2+0x51eu), 0x0u);
    /* 0050e9dc: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050e9e0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e9e3: mov dword ptr [edx + ecx*4 + 0x548], 0 */ W32((u32)(r_edx+r_ecx*4+0x548u), 0x0u);
    /* 0050e9ee: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050e9f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050e9f5: mov dword ptr [ecx + eax*4 + 0x59c], 0 */ W32((u32)(r_ecx+r_eax*4+0x59cu), 0x0u);
    /* 0050ea00: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ea02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ea03: ret 4 */ FN_RET(0x0050e908); r_esp += 8; return;
}

void f_0050ea06(void) /* FUN_0050ea06 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050ea06);
    /* 0050ea06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea07: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ea09: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ea0c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050ea0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050ea12: call 0x50e8c0 */ r_esp -= 4; W32(r_esp, 0x50ea17u); f_0050e8c0();
    /* 0050ea17: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050ea1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050ea1e: call 0x50e8c0 */ r_esp -= 4; W32(r_esp, 0x50ea23u); f_0050e8c0();
    /* 0050ea23: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050ea27: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050ea2b: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ea2e: jne 0x50ea36 */ if (!fZ) goto L_0050ea36;
L_0050ea30:; BB(0x0050ea30);
    /* 0050ea30: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ea34: jmp 0x50ea80 */ goto L_0050ea80;
L_0050ea36:; BB(0x0050ea36);
    /* 0050ea36: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050ea3a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050ea3d: mov dword ptr [edx + ecx*4 + 8], 0 */ W32((u32)(r_edx+r_ecx*4+0x8u), 0x0u);
    /* 0050ea45: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050ea4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea4b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050ea4f: imul ecx, ecx, 0xd */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xdu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050ea52: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050ea55: lea eax, [edx + ecx + 0x5c] */ r_eax = (u32)(r_edx+r_ecx+0x5cu);
    /* 0050ea59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea5a: call 0x6264f0 */ r_esp -= 4; W32(r_esp, 0x50ea5fu); f_006264f0();
    /* 0050ea5f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ea62: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050ea66: imul ecx, ecx, 0xd */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xdu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050ea69: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050ea6c: mov byte ptr [edx + ecx + 0x68], 0 */ W8((u32)(r_edx+r_ecx+0x68u), 0x0u);
    /* 0050ea71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea73: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050ea77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea78: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050ea7b: call 0x50ea95 */ r_esp -= 4; W32(r_esp, 0x50ea80u); f_0050ea95();
L_0050ea80:; BB(0x0050ea80);
    /* 0050ea80: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ea82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ea83: ret 4 */ FN_RET(0x0050ea06); r_esp += 8; return;
}

void f_0050ea86(void) /* FUN_0050ea86 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050ea86);
    /* 0050ea86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea87: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ea89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea8a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050ea8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050ea8f: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ea91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ea92: ret 4 */ FN_RET(0x0050ea86); r_esp += 8; return;
}

void f_0050ea95(void) /* FUN_0050ea95 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050ea95);
    /* 0050ea95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea96: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ea98: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ea9b: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0050ea9e: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050eaa2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050eaa5: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 0050eaad: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050eab1: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050eab4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050eab7: mov byte ptr [eax + edx + 0x16d], 0 */ W8((u32)(r_eax+r_edx+0x16du), 0x0u);
    /* 0050eabf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050eac2: add ecx, 0x5f0 */ {  u32 a = r_ecx; u32 b = 0x5f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050eac8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eac9: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eace: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50ead3u); f_00624510();
    /* 0050ead3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ead6: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050eada: imul edx, edx, 0xd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050eadd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050eae0: lea ecx, [eax + edx + 0x5c] */ r_ecx = (u32)(r_eax+r_edx+0x5cu);
    /* 0050eae4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eae5: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eaea: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x50eaefu); f_00624520();
    /* 0050eaef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050eaf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eaf4: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eaf9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eafb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eafd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eaff: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb04: push 0x6f9a08 */ { u32 v = 0x6f9a08u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb09: call dword ptr [0x633044] */ { u32 t = R32((u32)(0x633044u)); r_esp -= 4; W32(r_esp, 0x50eb0fu); call_ind(t); }
    /* 0050eb0f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0050eb12: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eb16: jne 0x50eb21 */ if (!fZ) goto L_0050eb21;
L_0050eb18:; BB(0x0050eb18);
    /* 0050eb18: mov ax, 0xfffb */ r_eax = (r_eax & 0xffff0000u) | ((0xfffbu) & 0xffffu);
    /* 0050eb1c: jmp 0x50efa0 */ goto L_0050efa0;
L_0050eb21:; BB(0x0050eb21);
    /* 0050eb21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb23: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0050eb26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb27: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb29: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0050eb2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb2d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050eb30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb31: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50eb37u); call_ind(t); }
    /* 0050eb37: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eb3b: je 0x50eb4f */ if (fZ) goto L_0050eb4f;
L_0050eb3d:; BB(0x0050eb3d);
    /* 0050eb3d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050eb40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb41: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50eb47u); call_ind(t); }
    /* 0050eb47: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050eb4a: jmp 0x50efa0 */ goto L_0050efa0;
L_0050eb4f:; BB(0x0050eb4f);
    /* 0050eb4f: mov byte ptr [ebp - 0x18], 0 */ W8((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0050eb53: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eb57: jne 0x50eb62 */ if (!fZ) goto L_0050eb62;
L_0050eb59:; BB(0x0050eb59);
    /* 0050eb59: mov dword ptr [ebp - 0x28], 0x692418 */ W32((u32)(r_ebp+0xffffffd8u), 0x692418u);
    /* 0050eb60: jmp 0x50eb93 */ goto L_0050eb93;
L_0050eb62:; BB(0x0050eb62);
    /* 0050eb62: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eb66: jne 0x50eb71 */ if (!fZ) goto L_0050eb71;
L_0050eb68:; BB(0x0050eb68);
    /* 0050eb68: mov dword ptr [ebp - 0x2c], 0x692420 */ W32((u32)(r_ebp+0xffffffd4u), 0x692420u);
    /* 0050eb6f: jmp 0x50eb8d */ goto L_0050eb8d;
L_0050eb71:; BB(0x0050eb71);
    /* 0050eb71: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eb75: jne 0x50eb80 */ if (!fZ) goto L_0050eb80;
L_0050eb77:; BB(0x0050eb77);
    /* 0050eb77: mov dword ptr [ebp - 0x30], 0x692428 */ W32((u32)(r_ebp+0xffffffd0u), 0x692428u);
    /* 0050eb7e: jmp 0x50eb87 */ goto L_0050eb87;
L_0050eb80:; BB(0x0050eb80);
    /* 0050eb80: mov dword ptr [ebp - 0x30], 0x692430 */ W32((u32)(r_ebp+0xffffffd0u), 0x692430u);
L_0050eb87:; BB(0x0050eb87);
    /* 0050eb87: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0050eb8a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_0050eb8d:; BB(0x0050eb8d);
    /* 0050eb8d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0050eb90: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_0050eb93:; BB(0x0050eb93);
    /* 0050eb93: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0050eb96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb97: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0050eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb9b: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x50eba0u); f_006240c0();
    /* 0050eba0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050eba3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eba5: je 0x50ebb9 */ if (fZ) goto L_0050ebb9;
L_0050eba7:; BB(0x0050eba7);
    /* 0050eba7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ebaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebab: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50ebb1u); call_ind(t); }
    /* 0050ebb1: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ebb4: jmp 0x50efa0 */ goto L_0050efa0;
L_0050ebb9:; BB(0x0050ebb9);
    /* 0050ebb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebbb: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0050ebbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebbf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebc1: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0050ebc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebc5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ebc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebc9: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50ebcfu); call_ind(t); }
    /* 0050ebcf: cmp dword ptr [ebp - 0x20], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ebd3: je 0x50ebe7 */ if (fZ) goto L_0050ebe7;
L_0050ebd5:; BB(0x0050ebd5);
    /* 0050ebd5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ebd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebd9: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50ebdfu); call_ind(t); }
    /* 0050ebdf: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ebe2: jmp 0x50efa0 */ goto L_0050efa0;
L_0050ebe7:; BB(0x0050ebe7);
    /* 0050ebe7: mov byte ptr [ebp - 2], 0 */ W8((u32)(r_ebp+0xfffffffeu), 0x0u);
    /* 0050ebeb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebed: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0050ebf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebf1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebf3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ebf7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ebfa: lea eax, [edx + ecx*4 + 0x254] */ r_eax = (u32)(r_edx+r_ecx*4+0x254u);
    /* 0050ec01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec02: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ec05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec06: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50ec0cu); call_ind(t); }
    /* 0050ec0c: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ec10: je 0x50ec24 */ if (fZ) goto L_0050ec24;
L_0050ec12:; BB(0x0050ec12);
    /* 0050ec12: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ec15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec16: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50ec1cu); call_ind(t); }
    /* 0050ec1c: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ec1f: jmp 0x50efa0 */ goto L_0050efa0;
L_0050ec24:; BB(0x0050ec24);
    /* 0050ec24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec26: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0050ec29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec2a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec2c: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ec30: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ec33: lea eax, [edx + ecx*4 + 0x2a8] */ r_eax = (u32)(r_edx+r_ecx*4+0x2a8u);
    /* 0050ec3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec3b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ec3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec3f: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50ec45u); call_ind(t); }
    /* 0050ec45: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ec49: je 0x50ec5d */ if (fZ) goto L_0050ec5d;
L_0050ec4b:; BB(0x0050ec4b);
    /* 0050ec4b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ec4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec4f: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50ec55u); call_ind(t); }
    /* 0050ec55: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ec58: jmp 0x50efa0 */ goto L_0050efa0;
L_0050ec5d:; BB(0x0050ec5d);
    /* 0050ec5d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ec61: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ec64: cmp dword ptr [ecx + eax*4 + 0x2a8], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x2a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ec6c: jge 0x50ec80 */ if ((fS==fO)) goto L_0050ec80;
L_0050ec6e:; BB(0x0050ec6e);
    /* 0050ec6e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ec72: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ec75: mov dword ptr [eax + edx*4 + 0x2a8], 0 */ W32((u32)(r_eax+r_edx*4+0x2a8u), 0x0u);
L_0050ec80:; BB(0x0050ec80);
    /* 0050ec80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec82: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0050ec85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec86: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec88: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ec8c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ec8f: lea ecx, [eax + edx*4 + 0x2fc] */ r_ecx = (u32)(r_eax+r_edx*4+0x2fcu);
    /* 0050ec96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec97: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ec9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec9b: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50eca1u); call_ind(t); }
    /* 0050eca1: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eca5: je 0x50ecb9 */ if (fZ) goto L_0050ecb9;
L_0050eca7:; BB(0x0050eca7);
    /* 0050eca7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ecaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecab: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50ecb1u); call_ind(t); }
    /* 0050ecb1: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ecb4: jmp 0x50efa0 */ goto L_0050efa0;
L_0050ecb9:; BB(0x0050ecb9);
    /* 0050ecb9: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0050ecbf: jmp 0x50eccd */ goto L_0050eccd;
L_0050ecc1:; BB(0x0050ecc1);
    /* 0050ecc1: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 0050ecc5: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ecc9: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
L_0050eccd:; BB(0x0050eccd);
    /* 0050eccd: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050ecd1: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ecd4: jge 0x50ed1b */ if ((fS==fO)) goto L_0050ed1b;
L_0050ecd6:; BB(0x0050ecd6);
    /* 0050ecd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecd8: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0050ecdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecdc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecde: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ece2: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050ece5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ece8: lea eax, [edx + ecx + 0x350] */ r_eax = (u32)(r_edx+r_ecx+0x350u);
    /* 0050ecef: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050ecf3: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 0050ecf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecf7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ecfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecfb: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50ed01u); call_ind(t); }
    /* 0050ed01: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ed05: je 0x50ed19 */ if (fZ) goto L_0050ed19;
L_0050ed07:; BB(0x0050ed07);
    /* 0050ed07: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ed0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed0b: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50ed11u); call_ind(t); }
    /* 0050ed11: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ed14: jmp 0x50efa0 */ goto L_0050efa0;
L_0050ed19:; BB(0x0050ed19);
    /* 0050ed19: jmp 0x50ecc1 */ goto L_0050ecc1;
L_0050ed1b:; BB(0x0050ed1b);
    /* 0050ed1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed1d: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0050ed20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed21: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed23: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ed27: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ed2a: lea edx, [ecx + eax*4 + 0x44c] */ r_edx = (u32)(r_ecx+r_eax*4+0x44cu);
    /* 0050ed31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed32: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ed35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed36: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50ed3cu); call_ind(t); }
    /* 0050ed3c: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ed40: je 0x50ed54 */ if (fZ) goto L_0050ed54;
L_0050ed42:; BB(0x0050ed42);
    /* 0050ed42: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ed45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed46: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50ed4cu); call_ind(t); }
    /* 0050ed4c: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ed4f: jmp 0x50efa0 */ goto L_0050efa0;
L_0050ed54:; BB(0x0050ed54);
    /* 0050ed54: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ed58: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ed5b: cmp dword ptr [eax + edx*4 + 0x44c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x44cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ed63: jge 0x50ed77 */ if ((fS==fO)) goto L_0050ed77;
L_0050ed65:; BB(0x0050ed65);
    /* 0050ed65: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ed69: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ed6c: mov dword ptr [edx + ecx*4 + 0x44c], 0 */ W32((u32)(r_edx+r_ecx*4+0x44cu), 0x0u);
L_0050ed77:; BB(0x0050ed77);
    /* 0050ed77: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0050ed7d: jmp 0x50ed8b */ goto L_0050ed8b;
L_0050ed7f:; BB(0x0050ed7f);
    /* 0050ed7f: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 0050ed83: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ed87: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
L_0050ed8b:; BB(0x0050ed8b);
    /* 0050ed8b: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050ed8f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ed92: jge 0x50ee0a */ if ((fS==fO)) goto L_0050ee0a;
L_0050ed94:; BB(0x0050ed94);
    /* 0050ed94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed96: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0050ed99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed9a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed9c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050eda0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050eda3: lea edx, [ecx + eax*4 + 0x4a0] */ r_edx = (u32)(r_ecx+r_eax*4+0x4a0u);
    /* 0050edaa: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050edae: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 0050edb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050edb2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050edb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050edb6: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50edbcu); call_ind(t); }
    /* 0050edbc: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050edc0: je 0x50edd4 */ if (fZ) goto L_0050edd4;
L_0050edc2:; BB(0x0050edc2);
    /* 0050edc2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050edc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050edc6: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50edccu); call_ind(t); }
    /* 0050edcc: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050edcf: jmp 0x50efa0 */ goto L_0050efa0;
L_0050edd4:; BB(0x0050edd4);
    /* 0050edd4: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050edd8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050eddb: lea eax, [edx + ecx*4 + 0x4a0] */ r_eax = (u32)(r_edx+r_ecx*4+0x4a0u);
    /* 0050ede2: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050ede6: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050edea: jge 0x50ee05 */ if ((fS==fO)) goto L_0050ee05;
L_0050edec:; BB(0x0050edec);
    /* 0050edec: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050edf0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050edf3: lea ecx, [eax + edx*4 + 0x4a0] */ r_ecx = (u32)(r_eax+r_edx*4+0x4a0u);
    /* 0050edfa: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050edfe: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
L_0050ee05:; BB(0x0050ee05);
    /* 0050ee05: jmp 0x50ed7f */ goto L_0050ed7f;
L_0050ee0a:; BB(0x0050ee0a);
    /* 0050ee0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee0c: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0050ee0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee10: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee12: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ee16: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ee19: lea eax, [edx + ecx*2 + 0x4f4] */ r_eax = (u32)(r_edx+r_ecx*2+0x4f4u);
    /* 0050ee20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee21: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ee24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee25: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50ee2bu); call_ind(t); }
    /* 0050ee2b: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ee2f: je 0x50ee43 */ if (fZ) goto L_0050ee43;
L_0050ee31:; BB(0x0050ee31);
    /* 0050ee31: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ee34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee35: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50ee3bu); call_ind(t); }
    /* 0050ee3b: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ee3e: jmp 0x50efa0 */ goto L_0050efa0;
L_0050ee43:; BB(0x0050ee43);
    /* 0050ee43: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ee47: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ee4a: movsx edx, word ptr [ecx + eax*2 + 0x4f4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2+0x4f4u));
    /* 0050ee52: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050ee54: jge 0x50ee67 */ if ((fS==fO)) goto L_0050ee67;
L_0050ee56:; BB(0x0050ee56);
    /* 0050ee56: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ee5a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ee5d: mov word ptr [ecx + eax*2 + 0x4f4], 0 */ W16((u32)(r_ecx+r_eax*2+0x4f4u), 0x0u);
L_0050ee67:; BB(0x0050ee67);
    /* 0050ee67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee69: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0050ee6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee6d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee6f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ee73: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ee76: lea edx, [ecx + eax*2 + 0x51e] */ r_edx = (u32)(r_ecx+r_eax*2+0x51eu);
    /* 0050ee7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee7e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ee81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee82: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50ee88u); call_ind(t); }
    /* 0050ee88: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ee8c: je 0x50eea0 */ if (fZ) goto L_0050eea0;
L_0050ee8e:; BB(0x0050ee8e);
    /* 0050ee8e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ee91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee92: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50ee98u); call_ind(t); }
    /* 0050ee98: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ee9b: jmp 0x50efa0 */ goto L_0050efa0;
L_0050eea0:; BB(0x0050eea0);
    /* 0050eea0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eea2: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0050eea5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eea6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eea8: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050eeac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050eeaf: lea edx, [ecx + eax*4 + 0x548] */ r_edx = (u32)(r_ecx+r_eax*4+0x548u);
    /* 0050eeb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eeb7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050eeba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050eebb: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50eec1u); call_ind(t); }
    /* 0050eec1: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eec5: je 0x50eed9 */ if (fZ) goto L_0050eed9;
L_0050eec7:; BB(0x0050eec7);
    /* 0050eec7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050eeca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eecb: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50eed1u); call_ind(t); }
    /* 0050eed1: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050eed4: jmp 0x50efa0 */ goto L_0050efa0;
L_0050eed9:; BB(0x0050eed9);
    /* 0050eed9: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050eedd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050eee0: cmp dword ptr [eax + edx*4 + 0x548], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x548u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050eee8: jge 0x50eefc */ if ((fS==fO)) goto L_0050eefc;
L_0050eeea:; BB(0x0050eeea);
    /* 0050eeea: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050eeee: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050eef1: mov dword ptr [edx + ecx*4 + 0x548], 0 */ W32((u32)(r_edx+r_ecx*4+0x548u), 0x0u);
L_0050eefc:; BB(0x0050eefc);
    /* 0050eefc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eefe: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0050ef01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef02: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef04: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ef08: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ef0b: lea eax, [edx + ecx*4 + 0x59c] */ r_eax = (u32)(r_edx+r_ecx*4+0x59cu);
    /* 0050ef12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef13: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ef16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef17: call dword ptr [0x633028] */ { u32 t = R32((u32)(0x633028u)); r_esp -= 4; W32(r_esp, 0x50ef1du); call_ind(t); }
    /* 0050ef1d: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ef21: je 0x50ef32 */ if (fZ) goto L_0050ef32;
L_0050ef23:; BB(0x0050ef23);
    /* 0050ef23: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ef26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef27: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50ef2du); call_ind(t); }
    /* 0050ef2d: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050ef30: jmp 0x50efa0 */ goto L_0050efa0;
L_0050ef32:; BB(0x0050ef32);
    /* 0050ef32: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ef36: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ef39: cmp dword ptr [ecx + eax*4 + 0x59c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x59cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ef41: jge 0x50ef55 */ if ((fS==fO)) goto L_0050ef55;
L_0050ef43:; BB(0x0050ef43);
    /* 0050ef43: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ef47: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ef4a: mov dword ptr [eax + edx*4 + 0x59c], 0 */ W32((u32)(r_eax+r_edx*4+0x59cu), 0x0u);
L_0050ef55:; BB(0x0050ef55);
    /* 0050ef55: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ef58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef59: call dword ptr [0x633040] */ { u32 t = R32((u32)(0x633040u)); r_esp -= 4; W32(r_esp, 0x50ef5fu); call_ind(t); }
    /* 0050ef5f: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ef63: jne 0x50ef7f */ if (!fZ) goto L_0050ef7f;
L_0050ef65:; BB(0x0050ef65);
    /* 0050ef65: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0050ef68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef69: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ef6c: call 0x50e840 */ r_esp -= 4; W32(r_esp, 0x50ef71u); f_0050e840();
    /* 0050ef71: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0050ef74: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ef77: je 0x50ef7f */ if (fZ) goto L_0050ef7f;
L_0050ef79:; BB(0x0050ef79);
    /* 0050ef79: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 0050ef7d: jmp 0x50efa0 */ goto L_0050efa0;
L_0050ef7f:; BB(0x0050ef7f);
    /* 0050ef7f: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0050ef82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef83: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050ef87: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050ef8a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ef8d: lea ecx, [eax + edx + 0x16d] */ r_ecx = (u32)(r_eax+r_edx+0x16du);
    /* 0050ef94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef95: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50ef9au); f_00624510();
    /* 0050ef9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ef9d: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_0050efa0:; BB(0x0050efa0);
    /* 0050efa0: mov esp, ebp */ r_esp = r_ebp;
    /* 0050efa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050efa3: ret 8 */ FN_RET(0x0050ea95); r_esp += 12; return;
}

void f_0050efa6(void) /* FUN_0050efa6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050efa6);
    /* 0050efa6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050efa7: mov ebp, esp */ r_ebp = r_esp;
    /* 0050efa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050efaa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050efad: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050efb0: mov esp, ebp */ r_esp = r_ebp;
    /* 0050efb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050efb3: ret 0xc */ FN_RET(0x0050efa6); r_esp += 16; return;
}

void f_0050efb6(void) /* FUN_0050efb6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050efb6);
    /* 0050efb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050efb7: mov ebp, esp */ r_ebp = r_esp;
    /* 0050efb9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050efbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050efbd: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0050efc0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050efc3: mov byte ptr [eax + 0x160], 0 */ W8((u32)(r_eax+0x160u), 0x0u);
    /* 0050efca: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050efce: imul ecx, ecx, 0xb */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xbu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050efd1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050efd4: lea eax, [edx + ecx + 0x16d] */ r_eax = (u32)(r_edx+r_ecx+0x16du);
    /* 0050efdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050efdc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050efdf: add ecx, 0x249 */ {  u32 a = r_ecx; u32 b = 0x249u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050efe5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050efe6: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50efebu); f_00624510();
    /* 0050efeb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050efee: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050eff2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050eff5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050eff8: mov edx, dword ptr [ecx + edx*4 + 0x254] */ r_edx = R32((u32)(r_ecx+r_edx*4+0x254u));
    /* 0050efff: mov dword ptr [eax + 0x2a4], edx */ W32((u32)(r_eax+0x2a4u), r_edx);
    /* 0050f005: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050f009: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f00c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f00f: mov eax, dword ptr [edx + eax*4 + 0x2a8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2a8u));
    /* 0050f016: mov dword ptr [ecx + 0x2f8], eax */ W32((u32)(r_ecx+0x2f8u), r_eax);
    /* 0050f01c: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050f020: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f023: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f026: mov ecx, dword ptr [eax + ecx*4 + 0x2fc] */ r_ecx = R32((u32)(r_eax+r_ecx*4+0x2fcu));
    /* 0050f02d: mov dword ptr [edx + 0x34c], ecx */ W32((u32)(r_edx+0x34cu), r_ecx);
    /* 0050f033: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050f039: jmp 0x50f047 */ goto L_0050f047;
L_0050f03b:; BB(0x0050f03b);
    /* 0050f03b: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050f03f: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050f043: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0050f047:; BB(0x0050f047);
    /* 0050f047: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050f04b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f04e: jge 0x50f078 */ if ((fS==fO)) goto L_0050f078;
L_0050f050:; BB(0x0050f050);
    /* 0050f050: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050f054: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050f057: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f05a: lea eax, [edx + ecx + 0x350] */ r_eax = (u32)(r_edx+r_ecx+0x350u);
    /* 0050f061: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050f065: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050f069: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f06c: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 0050f06f: mov dword ptr [esi + edx*4 + 0x440], eax */ W32((u32)(r_esi+r_edx*4+0x440u), r_eax);
    /* 0050f076: jmp 0x50f03b */ goto L_0050f03b;
L_0050f078:; BB(0x0050f078);
    /* 0050f078: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050f07c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f07f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f082: mov ecx, dword ptr [eax + ecx*4 + 0x548] */ r_ecx = R32((u32)(r_eax+r_ecx*4+0x548u));
    /* 0050f089: mov dword ptr [edx + 0x598], ecx */ W32((u32)(r_edx+0x598u), r_ecx);
    /* 0050f08f: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050f093: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f096: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f099: mov edx, dword ptr [ecx + edx*4 + 0x59c] */ r_edx = R32((u32)(r_ecx+r_edx*4+0x59cu));
    /* 0050f0a0: mov dword ptr [eax + 0x5ec], edx */ W32((u32)(r_eax+0x5ecu), r_edx);
    /* 0050f0a6: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0050f0a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f0aa: call dword ptr [0x633048] */ { u32 t = R32((u32)(0x633048u)); r_esp -= 4; W32(r_esp, 0x50f0b0u); call_ind(t); }
    /* 0050f0b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050f0b3: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f0b9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f0bc: mov dword ptr [edx + 0x49c], ecx */ W32((u32)(r_edx+0x49cu), r_ecx);
    /* 0050f0c2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f0c5: cmp dword ptr [eax + 0x49c], 0x270f */ {  u32 a = R32((u32)(r_eax+0x49cu)); u32 b = 0x270fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f0cf: jg 0x50f0dd */ if ((!fZ&&fS==fO)) goto L_0050f0dd;
L_0050f0d1:; BB(0x0050f0d1);
    /* 0050f0d1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f0d4: cmp dword ptr [ecx + 0x49c], 0 */ {  u32 a = R32((u32)(r_ecx+0x49cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f0db: jge 0x50f0ea */ if ((fS==fO)) goto L_0050f0ea;
L_0050f0dd:; BB(0x0050f0dd);
    /* 0050f0dd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f0e0: mov dword ptr [edx + 0x49c], 0 */ W32((u32)(r_edx+0x49cu), 0x0u);
L_0050f0ea:; BB(0x0050f0ea);
    /* 0050f0ea: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f0ed: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 0050f0f3: imul ecx, ecx, 0x3e8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3e8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050f0f9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f0fc: mov dword ptr [edx + 0x49c], ecx */ W32((u32)(r_edx+0x49cu), r_ecx);
    /* 0050f102: mov eax, dword ptr [ebp - 0x12] */ r_eax = R32((u32)(r_ebp+0xffffffeeu));
    /* 0050f105: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050f10a: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0050f10d: mov ecx, dword ptr [ebp - 0xe] */ r_ecx = R32((u32)(r_ebp+0xfffffff2u));
    /* 0050f110: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f116: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050f118: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f11b: mov ecx, dword ptr [edx + 0x49c] */ r_ecx = R32((u32)(r_edx+0x49cu));
    /* 0050f121: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f123: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f126: mov dword ptr [edx + 0x49c], ecx */ W32((u32)(r_edx+0x49cu), r_ecx);
    /* 0050f12c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f12f: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 0050f135: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050f138: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f13b: mov dword ptr [edx + 0x49c], ecx */ W32((u32)(r_edx+0x49cu), r_ecx);
    /* 0050f141: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050f144: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050f149: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050f14c: mov ecx, dword ptr [ebp - 0xa] */ r_ecx = R32((u32)(r_ebp+0xfffffff6u));
    /* 0050f14f: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f155: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050f157: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050f158: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050f15d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050f15d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050f15d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050f15f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f162: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 0050f168: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f16a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f16d: mov dword ptr [edx + 0x49c], ecx */ W32((u32)(r_edx+0x49cu), r_ecx);
    /* 0050f173: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050f179: jmp 0x50f187 */ goto L_0050f187;
L_0050f17b:; BB(0x0050f17b);
    /* 0050f17b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050f17f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050f183: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0050f187:; BB(0x0050f187);
    /* 0050f187: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050f18b: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f18e: jge 0x50f1b5 */ if ((fS==fO)) goto L_0050f1b5;
L_0050f190:; BB(0x0050f190);
    /* 0050f190: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050f194: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f197: lea ecx, [eax + edx*4 + 0x4a0] */ r_ecx = (u32)(r_eax+r_edx*4+0x4a0u);
    /* 0050f19e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050f1a2: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050f1a6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f1a9: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0050f1ac: mov dword ptr [esi + eax*4 + 0x4f0], ecx */ W32((u32)(r_esi+r_eax*4+0x4f0u), r_ecx);
    /* 0050f1b3: jmp 0x50f17b */ goto L_0050f17b;
L_0050f1b5:; BB(0x0050f1b5);
    /* 0050f1b5: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050f1b9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f1bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f1bf: mov dx, word ptr [ecx + edx*2 + 0x4f4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0x4f4u))) & 0xffffu);
    /* 0050f1c7: mov word ptr [eax + 0x51c], dx */ W16((u32)(r_eax+0x51cu), (u16)r_edx);
    /* 0050f1ce: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0050f1d2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f1d5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f1d8: mov ax, word ptr [edx + eax*2 + 0x51e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0x51eu))) & 0xffffu);
    /* 0050f1e0: mov word ptr [ecx + 0x546], ax */ W16((u32)(r_ecx+0x546u), (u16)r_eax);
    /* 0050f1e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f1e9: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0050f1ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f1ee: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f1f0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f1f3: call 0x50efa6 */ r_esp -= 4; W32(r_esp, 0x50f1f8u); f_0050efa6();
    /* 0050f1f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050f1f9: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f1fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f1fc: ret 8 */ FN_RET(0x0050efb6); r_esp += 12; return;
}

void f_0050f1ff(void) /* FUN_0050f1ff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f1ff);
    /* 0050f1ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f200: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f202: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050f205: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0050f208: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f20b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f20c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f20f: add ecx, 0x160 */ {  u32 a = r_ecx; u32 b = 0x160u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f215: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f216: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50f21bu); f_00624510();
    /* 0050f21b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050f21e: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050f222: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f223: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f225: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f228: call 0x50ea95 */ r_esp -= 4; W32(r_esp, 0x50f22du); f_0050ea95();
    /* 0050f22d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0050f230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f232: jne 0x50f242 */ if (!fZ) goto L_0050f242;
L_0050f234:; BB(0x0050f234);
    /* 0050f234: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f237: movsx edx, byte ptr [ecx + 0x249] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x249u));
    /* 0050f23e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f240: jne 0x50f24d */ if (!fZ) goto L_0050f24d;
L_0050f242:; BB(0x0050f242);
    /* 0050f242: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050f245: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0050f248: jmp 0x50f3ef */ goto L_0050f3ef;
L_0050f24d:; BB(0x0050f24d);
    /* 0050f24d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f250: add ecx, 0x249 */ {  u32 a = r_ecx; u32 b = 0x249u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f256: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f257: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050f25a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f25b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50f260u); f_00624510();
    /* 0050f260: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050f263: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f266: add eax, 0x160 */ {  u32 a = r_eax; u32 b = 0x160u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050f26b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f26c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0050f26f: add ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f272: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f273: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x50f278u); f_00624510();
    /* 0050f278: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050f27b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050f27e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f281: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 0050f287: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0050f28a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050f28d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f290: mov ecx, dword ptr [eax + 0x4f0] */ r_ecx = R32((u32)(r_eax+0x4f0u));
    /* 0050f296: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0050f299: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f29c: mov eax, dword ptr [edx + 0x2f8] */ r_eax = R32((u32)(r_edx+0x2f8u));
    /* 0050f2a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050f2a3: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050f2a8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050f2a8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050f2a8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050f2aa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0050f2ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f2b0: mov eax, dword ptr [edx + 0x2f8] */ r_eax = R32((u32)(r_edx+0x2f8u));
    /* 0050f2b6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050f2b7: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050f2bc: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050f2bc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050f2bc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050f2be: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f2c1: mov eax, dword ptr [eax + 0x34c] */ r_eax = R32((u32)(r_eax+0x34cu));
    /* 0050f2c7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050f2c9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050f2ca: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050f2cf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050f2cf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050f2cf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050f2d1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0050f2d4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f2d7: movsx eax, word ptr [edx + 0x51c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x51cu));
    /* 0050f2de: imul eax, eax, 0x2710 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2710u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050f2e4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050f2e6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0050f2e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050f2ec: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f2ef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050f2f2: lea eax, [ecx + edx - 0x2710] */ r_eax = (u32)(r_ecx+r_edx+0xffffd8f0u);
    /* 0050f2f9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0050f2fc: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0050f2ff: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f302: cmp dword ptr [edx + 0x440], 0 */ {  u32 a = R32((u32)(r_edx+0x440u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f309: jl 0x50f32d */ if ((fS!=fO)) goto L_0050f32d;
L_0050f30b:; BB(0x0050f30b);
    /* 0050f30b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f30e: mov eax, dword ptr [eax + 0x440] */ r_eax = R32((u32)(r_eax+0x440u));
    /* 0050f314: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050f317: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050f318: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050f31d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050f31d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050f31d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050f31f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050f322: sub eax, dword ptr [edx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050f325: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0050f328: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0050f32b: jmp 0x50f34d */ goto L_0050f34d;
L_0050f32d:; BB(0x0050f32d);
    /* 0050f32d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f330: mov eax, dword ptr [edx + 0x440] */ r_eax = R32((u32)(r_edx+0x440u));
    /* 0050f336: sub eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050f339: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050f33a: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050f33f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050f33f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050f33f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050f341: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050f344: sub eax, dword ptr [edx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050f347: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0050f34a: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
L_0050f34d:; BB(0x0050f34d);
    /* 0050f34d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f350: cmp dword ptr [edx + 0x444], 0 */ {  u32 a = R32((u32)(r_edx+0x444u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f357: jl 0x50f375 */ if ((fS!=fO)) goto L_0050f375;
L_0050f359:; BB(0x0050f359);
    /* 0050f359: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f35c: mov eax, dword ptr [eax + 0x444] */ r_eax = R32((u32)(r_eax+0x444u));
    /* 0050f362: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050f365: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050f366: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050f36b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050f36b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050f36b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050f36d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050f370: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050f373: jmp 0x50f38f */ goto L_0050f38f;
L_0050f375:; BB(0x0050f375);
    /* 0050f375: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f378: mov eax, dword ptr [eax + 0x444] */ r_eax = R32((u32)(r_eax+0x444u));
    /* 0050f37e: sub eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050f381: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050f382: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050f387: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050f387, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050f387, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050f389: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050f38c: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
L_0050f38f:; BB(0x0050f38f);
    /* 0050f38f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f392: cmp dword ptr [eax + 0x448], 0 */ {  u32 a = R32((u32)(r_eax+0x448u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f399: jl 0x50f3b7 */ if ((fS!=fO)) goto L_0050f3b7;
L_0050f39b:; BB(0x0050f39b);
    /* 0050f39b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f39e: mov eax, dword ptr [ecx + 0x448] */ r_eax = R32((u32)(r_ecx+0x448u));
    /* 0050f3a4: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050f3a7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050f3a8: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050f3ad: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050f3ad, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050f3ad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050f3af: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050f3b2: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0050f3b5: jmp 0x50f3d1 */ goto L_0050f3d1;
L_0050f3b7:; BB(0x0050f3b7);
    /* 0050f3b7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f3ba: mov eax, dword ptr [eax + 0x448] */ r_eax = R32((u32)(r_eax+0x448u));
    /* 0050f3c0: sub eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050f3c3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050f3c4: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0050f3c9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050f3c9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050f3c9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050f3cb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050f3ce: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
L_0050f3d1:; BB(0x0050f3d1);
    /* 0050f3d1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050f3d4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f3d7: mov edx, dword ptr [ecx + 0x598] */ r_edx = R32((u32)(r_ecx+0x598u));
    /* 0050f3dd: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0050f3e0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050f3e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f3e6: mov edx, dword ptr [ecx + 0x5ec] */ r_edx = R32((u32)(r_ecx+0x5ecu));
    /* 0050f3ec: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
L_0050f3ef:; BB(0x0050f3ef);
    /* 0050f3ef: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f3f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f3f2: ret 0xc */ FN_RET(0x0050f1ff); r_esp += 16; return;
}

void f_0050f400(void) /* FUN_0050f400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f400);
    /* 0050f400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f401: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f40a: call 0x50ca1a */ r_esp -= 4; W32(r_esp, 0x50f40fu); f_0050ca1a();
    /* 0050f40f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f412: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050f415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f417: je 0x50f425 */ if (fZ) goto L_0050f425;
L_0050f419:; BB(0x0050f419);
    /* 0050f419: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f41c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f41d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x50f422u); f_0048ac1b();
    /* 0050f422: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050f425:; BB(0x0050f425);
    /* 0050f425: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f428: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f42a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f42b: ret 4 */ FN_RET(0x0050f400); r_esp += 8; return;
}

void f_0050f45b(void) /* FUN_0050f45b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f45b);
    /* 0050f45b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f45c: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f45e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f45f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f462: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f464: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f466: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f468: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f46b: call 0x41e7f0 */ r_esp -= 4; W32(r_esp, 0x50f470u); f_0041e7f0();
    /* 0050f470: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f473: mov dword ptr [eax], 0x63883c */ W32((u32)(r_eax), 0x63883cu);
    /* 0050f479: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f47c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f47e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f47f: ret  */ FN_RET(0x0050f45b); r_esp += 4; return;
}

void f_0050f480(void) /* FUN_0050f480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f480);
    /* 0050f480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f481: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f487: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f48a: mov dword ptr [eax], 0x63883c */ W32((u32)(r_eax), 0x63883cu);
    /* 0050f490: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f493: call 0x41f100 */ r_esp -= 4; W32(r_esp, 0x50f498u); f_0041f100();
    /* 0050f498: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f49a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f49b: ret  */ FN_RET(0x0050f480); r_esp += 4; return;
}

void f_0050f49c(void) /* FUN_0050f49c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f49c);
    /* 0050f49c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f49d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f49f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050f4a2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0050f4a5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050f4ac: mov dword ptr [ebp - 4], 0x3fe00000 */ W32((u32)(r_ebp+0xfffffffcu), 0x3fe00000u);
    /* 0050f4b3: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0050f4b7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0050f4ba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f4bd: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f4c0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0050f4c3: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0050f4c7: ja 0x50f511 */ if ((!fC&&!fZ)) goto L_0050f511;
L_0050f4c9:; BB(0x0050f4c9);
    /* 0050f4c9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f4cc: jmp dword ptr [edx*4 + 0x50f537] */ { u32 t = R32((u32)(r_edx*4+0x50f537u)); switch (t) { case 0x50f4d3u: goto L_0050f4d3; case 0x50f4e3u: goto L_0050f4e3; case 0x50f4f3u: goto L_0050f4f3; case 0x50f503u: goto L_0050f503; default: UNSUP(0x0050f4cc, "jump table entry is not a known target"); } }
L_0050f4d3:; BB(0x0050f4d3);
    /* 0050f4d3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050f4da: mov dword ptr [ebp - 4], 0x3fe00000 */ W32((u32)(r_ebp+0xfffffffcu), 0x3fe00000u);
    /* 0050f4e1: jmp 0x50f511 */ goto L_0050f511;
L_0050f4e3:; BB(0x0050f4e3);
    /* 0050f4e3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050f4ea: mov dword ptr [ebp - 4], 0x3fe80000 */ W32((u32)(r_ebp+0xfffffffcu), 0x3fe80000u);
    /* 0050f4f1: jmp 0x50f511 */ goto L_0050f511;
L_0050f4f3:; BB(0x0050f4f3);
    /* 0050f4f3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050f4fa: mov dword ptr [ebp - 4], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffffcu), 0x3ff00000u);
    /* 0050f501: jmp 0x50f511 */ goto L_0050f511;
L_0050f503:; BB(0x0050f503);
    /* 0050f503: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050f50a: mov dword ptr [ebp - 4], 0x3fd00000 */ W32((u32)(r_ebp+0xfffffffcu), 0x3fd00000u);
L_0050f511:; BB(0x0050f511);
    /* 0050f511: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f513: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f517: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f51a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f51b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050f51e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f51f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f521: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f525: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050f528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f529: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050f52c: call 0x42099e */ r_esp -= 4; W32(r_esp, 0x50f531u); f_0042099e();
    /* 0050f531: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f533: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f534: ret 0xc */ FN_RET(0x0050f49c); r_esp += 16; return;
}

void f_0050f547(void) /* FUN_0050f547 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f547);
    /* 0050f547: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f548: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f54a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f54b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f54e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f550: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f555: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f559: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f55c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f561u); f_0050f49c();
    /* 0050f561: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f563: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f564: ret 4 */ FN_RET(0x0050f547); r_esp += 8; return;
}

void f_0050f567(void) /* FUN_0050f567 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f567);
    /* 0050f567: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f568: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f56a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f56b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f56e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f570: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f575: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f578: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f579: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f57c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f581u); f_0050f49c();
    /* 0050f581: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f583: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f584: ret 4 */ FN_RET(0x0050f567); r_esp += 8; return;
}

void f_0050f587(void) /* FUN_0050f587 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f587);
    /* 0050f587: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f588: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f58a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f58b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f58e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f590: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f595: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f599: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f59c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f5a1u); f_0050f49c();
    /* 0050f5a1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f5a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f5a4: ret 4 */ FN_RET(0x0050f587); r_esp += 8; return;
}

void f_0050f5a7(void) /* FUN_0050f5a7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f5a7);
    /* 0050f5a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5a8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f5aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5ab: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f5ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5b0: push 0xca */ { u32 v = 0xcau; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f5b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f5bc: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f5c1u); f_0050f49c();
    /* 0050f5c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f5c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f5c4: ret 4 */ FN_RET(0x0050f5a7); r_esp += 8; return;
}

void f_0050f5c7(void) /* FUN_0050f5c7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f5c7);
    /* 0050f5c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5c8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f5ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5cb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f5ce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5d0: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f5d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f5dc: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f5e1u); f_0050f49c();
    /* 0050f5e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f5e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f5e4: ret 4 */ FN_RET(0x0050f5c7); r_esp += 8; return;
}

void f_0050f5e7(void) /* FUN_0050f5e7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f5e7);
    /* 0050f5e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5e8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f5ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f5ee: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5f0: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f5f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f5fc: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f601u); f_0050f49c();
    /* 0050f601: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f603: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f604: ret 4 */ FN_RET(0x0050f5e7); r_esp += 8; return;
}

void f_0050f607(void) /* FUN_0050f607 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f607);
    /* 0050f607: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f608: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f60a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f60b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f60e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f610: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f615: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f619: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f61c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f621u); f_0050f49c();
    /* 0050f621: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f623: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f624: ret 4 */ FN_RET(0x0050f607); r_esp += 8; return;
}

void f_0050f627(void) /* FUN_0050f627 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f627);
    /* 0050f627: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f628: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f62a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f62b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f62e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f630: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f635: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f638: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f639: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f63c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f641u); f_0050f49c();
    /* 0050f641: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f643: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f644: ret 4 */ FN_RET(0x0050f627); r_esp += 8; return;
}

void f_0050f647(void) /* FUN_0050f647 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f647);
    /* 0050f647: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f648: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f64a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f64b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f64e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f650: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f655: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f659: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f65c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f661u); f_0050f49c();
    /* 0050f661: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f663: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f664: ret 4 */ FN_RET(0x0050f647); r_esp += 8; return;
}

void f_0050f667(void) /* FUN_0050f667 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f667);
    /* 0050f667: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f668: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f66a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f66b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f66e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f670: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f675: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f679: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f67c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f681u); f_0050f49c();
    /* 0050f681: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f683: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f684: ret 4 */ FN_RET(0x0050f667); r_esp += 8; return;
}

void f_0050f687(void) /* FUN_0050f687 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f687);
    /* 0050f687: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f688: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f68a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f68b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f68e: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f693: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0050f695: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f699: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f69c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f6a1u); f_0050f49c();
    /* 0050f6a1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f6a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f6a4: ret 4 */ FN_RET(0x0050f687); r_esp += 8; return;
}

void f_0050f6a7(void) /* FUN_0050f6a7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f6a7);
    /* 0050f6a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6a8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f6aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6ab: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f6ae: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6b0: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f6b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f6bc: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f6c1u); f_0050f49c();
    /* 0050f6c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f6c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f6c4: ret 4 */ FN_RET(0x0050f6a7); r_esp += 8; return;
}

void f_0050f6c7(void) /* FUN_0050f6c7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f6c7);
    /* 0050f6c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6c8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f6ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6cb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f6ce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6d0: push 0xd1 */ { u32 v = 0xd1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f6d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f6dc: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f6e1u); f_0050f49c();
    /* 0050f6e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f6e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f6e4: ret 4 */ FN_RET(0x0050f6c7); r_esp += 8; return;
}

void f_0050f6e7(void) /* FUN_0050f6e7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f6e7);
    /* 0050f6e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6e8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f6ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f6ee: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6f0: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f6fc: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f701u); f_0050f49c();
    /* 0050f701: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f704: ret 4 */ FN_RET(0x0050f6e7); r_esp += 8; return;
}

void f_0050f707(void) /* FUN_0050f707 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f707);
    /* 0050f707: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f708: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f70a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f70b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f70e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f710: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f715: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f719: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f71c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f721u); f_0050f49c();
    /* 0050f721: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f723: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f724: ret 4 */ FN_RET(0x0050f707); r_esp += 8; return;
}

void f_0050f727(void) /* FUN_0050f727 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f727);
    /* 0050f727: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f728: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f72a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f72b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f72e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f730: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f735: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f738: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f739: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f73c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f741u); f_0050f49c();
    /* 0050f741: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f744: ret 4 */ FN_RET(0x0050f727); r_esp += 8; return;
}

void f_0050f747(void) /* FUN_0050f747 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f747);
    /* 0050f747: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f748: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f74a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f74b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f74e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f750: push 0xd5 */ { u32 v = 0xd5u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f755: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f759: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f75c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f761u); f_0050f49c();
    /* 0050f761: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f763: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f764: ret 4 */ FN_RET(0x0050f747); r_esp += 8; return;
}

void f_0050f767(void) /* FUN_0050f767 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f767);
    /* 0050f767: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f768: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f76a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f76b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f76e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f770: push 0xd6 */ { u32 v = 0xd6u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f775: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f778: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f779: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f77c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f781u); f_0050f49c();
    /* 0050f781: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f783: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f784: ret 4 */ FN_RET(0x0050f767); r_esp += 8; return;
}

void f_0050f787(void) /* FUN_0050f787 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f787);
    /* 0050f787: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f788: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f78a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f78b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f78e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f790: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f795: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f798: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f799: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f79c: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f7a1u); f_0050f49c();
    /* 0050f7a1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f7a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f7a4: ret 4 */ FN_RET(0x0050f787); r_esp += 8; return;
}

void f_0050f7a7(void) /* FUN_0050f7a7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f7a7);
    /* 0050f7a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7a8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f7aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7ab: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f7ae: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7b0: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f7b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f7bc: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f7c1u); f_0050f49c();
    /* 0050f7c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f7c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f7c4: ret 4 */ FN_RET(0x0050f7a7); r_esp += 8; return;
}

void f_0050f7c7(void) /* FUN_0050f7c7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f7c7);
    /* 0050f7c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7c8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f7ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7cb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f7ce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7d0: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f7d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f7dc: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f7e1u); f_0050f49c();
    /* 0050f7e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f7e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f7e4: ret 4 */ FN_RET(0x0050f7c7); r_esp += 8; return;
}

void f_0050f7e7(void) /* FUN_0050f7e7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f7e7);
    /* 0050f7e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7e8: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f7ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f7ee: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7f0: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f7f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f7fc: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f801u); f_0050f49c();
    /* 0050f801: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f803: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f804: ret 4 */ FN_RET(0x0050f7e7); r_esp += 8; return;
}

void f_0050f807(void) /* FUN_0050f807 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f807);
    /* 0050f807: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f808: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f80a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f80b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f80e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f810: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f811: ret 4 */ FN_RET(0x0050f807); r_esp += 8; return;
}

void f_0050f814(void) /* FUN_0050f814 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f814);
    /* 0050f814: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f815: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f817: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f818: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f81b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f81d: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f822: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f825: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f826: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f829: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f82eu); f_0050f49c();
    /* 0050f82e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f830: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f831: ret 4 */ FN_RET(0x0050f814); r_esp += 8; return;
}

void f_0050f834(void) /* FUN_0050f834 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f834);
    /* 0050f834: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f835: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f837: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f838: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f83b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f83d: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f842: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f845: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f846: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f849: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f84eu); f_0050f49c();
    /* 0050f84e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f851: ret 4 */ FN_RET(0x0050f834); r_esp += 8; return;
}

void f_0050f854(void) /* FUN_0050f854 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f854);
    /* 0050f854: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f855: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f857: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f858: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f85b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f85d: push 0xdd */ { u32 v = 0xddu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f862: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f865: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f866: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f869: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f86eu); f_0050f49c();
    /* 0050f86e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f870: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f871: ret 4 */ FN_RET(0x0050f854); r_esp += 8; return;
}

void f_0050f874(void) /* FUN_0050f874 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f874);
    /* 0050f874: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f875: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f877: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f878: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f87b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f87d: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f882: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f885: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f886: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f889: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f88eu); f_0050f49c();
    /* 0050f88e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f891: ret 4 */ FN_RET(0x0050f874); r_esp += 8; return;
}

void f_0050f894(void) /* FUN_0050f894 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f894);
    /* 0050f894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f895: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f897: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f898: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f89b: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f89d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f89e: ret 4 */ FN_RET(0x0050f894); r_esp += 8; return;
}

void f_0050f8a1(void) /* FUN_0050f8a1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f8a1);
    /* 0050f8a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8a2: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f8a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8a5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f8a8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8aa: push 0xdf */ { u32 v = 0xdfu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f8b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f8b6: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f8bbu); f_0050f49c();
    /* 0050f8bb: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f8bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f8be: ret 4 */ FN_RET(0x0050f8a1); r_esp += 8; return;
}

void f_0050f8c1(void) /* FUN_0050f8c1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f8c1);
    /* 0050f8c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8c2: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f8c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8c5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f8c8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8ca: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f8d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f8d6: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f8dbu); f_0050f49c();
    /* 0050f8db: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f8dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f8de: ret 4 */ FN_RET(0x0050f8c1); r_esp += 8; return;
}

void f_0050f8e1(void) /* FUN_0050f8e1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f8e1);
    /* 0050f8e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8e2: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f8e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f8e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f8ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f8eb: ret 4 */ FN_RET(0x0050f8e1); r_esp += 8; return;
}

void f_0050f8ee(void) /* FUN_0050f8ee */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f8ee);
    /* 0050f8ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8ef: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f8f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8f2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f8f5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8f7: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f8fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f8ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f900: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f903: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f908u); f_0050f49c();
    /* 0050f908: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f90a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f90b: ret 4 */ FN_RET(0x0050f8ee); r_esp += 8; return;
}

void f_0050f90e(void) /* FUN_0050f90e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f90e);
    /* 0050f90e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f90f: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f911: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f912: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f915: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f917: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f918: ret 4 */ FN_RET(0x0050f90e); r_esp += 8; return;
}

void f_0050f91b(void) /* FUN_0050f91b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f91b);
    /* 0050f91b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f91c: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f91e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f91f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f922: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f924: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f929: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f92c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f92d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f930: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f935u); f_0050f49c();
    /* 0050f935: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f937: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f938: ret 4 */ FN_RET(0x0050f91b); r_esp += 8; return;
}

void f_0050f93b(void) /* FUN_0050f93b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f93b);
    /* 0050f93b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f93c: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f93e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f93f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f942: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f944: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f949: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f94c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f94d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f950: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f955u); f_0050f49c();
    /* 0050f955: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f958: ret 4 */ FN_RET(0x0050f93b); r_esp += 8; return;
}

void f_0050f95b(void) /* FUN_0050f95b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f95b);
    /* 0050f95b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f95c: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f95e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f95f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f962: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f964: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f969: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f96c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f96d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f970: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f975u); f_0050f49c();
    /* 0050f975: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f977: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f978: ret 4 */ FN_RET(0x0050f95b); r_esp += 8; return;
}

void f_0050f97b(void) /* FUN_0050f97b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f97b);
    /* 0050f97b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f97c: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f97e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f97f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f982: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f984: push 0xe5 */ { u32 v = 0xe5u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f989: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f98c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f98d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f990: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f995u); f_0050f49c();
    /* 0050f995: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f997: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f998: ret 4 */ FN_RET(0x0050f97b); r_esp += 8; return;
}

void f_0050f99b(void) /* FUN_0050f99b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f99b);
    /* 0050f99b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f99c: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f99e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f99f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f9a2: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f9a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f9a5: ret 4 */ FN_RET(0x0050f99b); r_esp += 8; return;
}

void f_0050f9a8(void) /* FUN_0050f9a8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f9a8);
    /* 0050f9a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f9ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9ac: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f9af: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f9b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f9b2: ret 4 */ FN_RET(0x0050f9a8); r_esp += 8; return;
}

void f_0050f9b5(void) /* FUN_0050f9b5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f9b5);
    /* 0050f9b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9b6: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f9b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9b9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f9bc: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f9be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f9bf: ret 4 */ FN_RET(0x0050f9b5); r_esp += 8; return;
}

void f_0050f9c2(void) /* FUN_0050f9c2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f9c2);
    /* 0050f9c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9c3: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f9c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f9c9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9cb: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9d0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f9d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f9d7: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f9dcu); f_0050f49c();
    /* 0050f9dc: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f9de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f9df: ret 4 */ FN_RET(0x0050f9c2); r_esp += 8; return;
}

void f_0050f9e2(void) /* FUN_0050f9e2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050f9e2);
    /* 0050f9e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9e3: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f9e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050f9e9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9eb: push 0xe7 */ { u32 v = 0xe7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050f9f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f9f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050f9f7: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50f9fcu); f_0050f49c();
    /* 0050f9fc: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f9fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f9ff: ret 4 */ FN_RET(0x0050f9e2); r_esp += 8; return;
}

void f_0050fa02(void) /* FUN_0050fa02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fa02);
    /* 0050fa02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa03: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fa05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fa09: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa0b: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa10: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050fa13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fa17: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50fa1cu); f_0050f49c();
    /* 0050fa1c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fa1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fa1f: ret 4 */ FN_RET(0x0050fa02); r_esp += 8; return;
}

void f_0050fa22(void) /* FUN_0050fa22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fa22);
    /* 0050fa22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa23: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fa25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa26: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fa29: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa2b: push 0xe9 */ { u32 v = 0xe9u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050fa33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fa37: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50fa3cu); f_0050f49c();
    /* 0050fa3c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fa3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fa3f: ret 4 */ FN_RET(0x0050fa22); r_esp += 8; return;
}

void f_0050fa42(void) /* FUN_0050fa42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fa42);
    /* 0050fa42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa43: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fa45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fa49: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa4b: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa50: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050fa53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fa57: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50fa5cu); f_0050f49c();
    /* 0050fa5c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fa5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fa5f: ret 4 */ FN_RET(0x0050fa42); r_esp += 8; return;
}

void f_0050fa62(void) /* FUN_0050fa62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fa62);
    /* 0050fa62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa63: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fa65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fa69: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa6b: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050fa73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fa77: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50fa7cu); f_0050f49c();
    /* 0050fa7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fa7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fa7f: ret 4 */ FN_RET(0x0050fa62); r_esp += 8; return;
}

void f_0050fa82(void) /* FUN_0050fa82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fa82);
    /* 0050fa82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa83: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fa85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fa89: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa8b: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050fa93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fa97: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50fa9cu); f_0050f49c();
    /* 0050fa9c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fa9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fa9f: ret 4 */ FN_RET(0x0050fa82); r_esp += 8; return;
}

void f_0050faa2(void) /* FUN_0050faa2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050faa2);
    /* 0050faa2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050faa3: mov ebp, esp */ r_ebp = r_esp;
    /* 0050faa5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050faa6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050faa9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050faab: push 0x145 */ { u32 v = 0x145u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fab0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050fab3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fab4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fab7: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50fabcu); f_0050f49c();
    /* 0050fabc: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fabe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fabf: ret 4 */ FN_RET(0x0050faa2); r_esp += 8; return;
}

void f_0050fac2(void) /* FUN_0050fac2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fac2);
    /* 0050fac2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fac3: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fac5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fac6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fac9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050facb: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 0050fad0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050fad3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fad4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fad7: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50fadcu); f_0050f49c();
    /* 0050fadc: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fade: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fadf: ret 4 */ FN_RET(0x0050fac2); r_esp += 8; return;
}

void f_0050fae2(void) /* FUN_0050fae2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fae2);
    /* 0050fae2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fae3: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fae5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fae6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fae9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050faeb: push 0x146 */ { u32 v = 0x146u; r_esp -= 4; W32(r_esp, v); }
    /* 0050faf0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050faf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050faf4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050faf7: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50fafcu); f_0050f49c();
    /* 0050fafc: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fafe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050faff: ret 4 */ FN_RET(0x0050fae2); r_esp += 8; return;
}

void f_0050fb02(void) /* FUN_0050fb02 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fb02);
    /* 0050fb02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb03: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fb05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fb09: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb0b: push 0x150 */ { u32 v = 0x150u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb10: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050fb13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fb17: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50fb1cu); f_0050f49c();
    /* 0050fb1c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fb1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fb1f: ret 4 */ FN_RET(0x0050fb02); r_esp += 8; return;
}

void f_0050fb22(void) /* FUN_0050fb22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fb22);
    /* 0050fb22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb23: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fb25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb26: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fb29: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fb2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fb2c: ret 4 */ FN_RET(0x0050fb22); r_esp += 8; return;
}

void f_0050fb2f(void) /* FUN_0050fb2f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fb2f);
    /* 0050fb2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb30: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fb32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb33: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fb36: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fb38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fb39: ret 4 */ FN_RET(0x0050fb2f); r_esp += 8; return;
}

void f_0050fb3c(void) /* FUN_0050fb3c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fb3c);
    /* 0050fb3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb3d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fb3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb40: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fb43: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fb45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fb46: ret 4 */ FN_RET(0x0050fb3c); r_esp += 8; return;
}

void f_0050fb49(void) /* FUN_0050fb49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fb49);
    /* 0050fb49: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb4a: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fb4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb4d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fb50: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fb52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fb53: ret 4 */ FN_RET(0x0050fb49); r_esp += 8; return;
}

void f_0050fb56(void) /* FUN_0050fb56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fb56);
    /* 0050fb56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb57: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fb59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb5a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fb5d: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fb5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fb60: ret 4 */ FN_RET(0x0050fb56); r_esp += 8; return;
}

void f_0050fb63(void) /* FUN_0050fb63 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fb63);
    /* 0050fb63: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb64: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fb66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb67: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fb6a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fb6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fb6d: ret 4 */ FN_RET(0x0050fb63); r_esp += 8; return;
}

void f_0050fb70(void) /* FUN_0050fb70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fb70);
    /* 0050fb70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb71: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fb73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fb77: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fb79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fb7a: ret 4 */ FN_RET(0x0050fb70); r_esp += 8; return;
}

void f_0050fb7d(void) /* FUN_0050fb7d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fb7d);
    /* 0050fb7d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb7e: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fb80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb81: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fb84: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fb86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fb87: ret 4 */ FN_RET(0x0050fb7d); r_esp += 8; return;
}

void f_0050fb8a(void) /* FUN_0050fb8a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fb8a);
    /* 0050fb8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb8b: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fb8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb8e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fb91: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fb93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fb94: ret 4 */ FN_RET(0x0050fb8a); r_esp += 8; return;
}

void f_0050fb97(void) /* FUN_0050fb97 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fb97);
    /* 0050fb97: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb98: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fb9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fb9b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fb9e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fba0: push 0x141 */ { u32 v = 0x141u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fba5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050fba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fba9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fbac: call 0x50f49c */ r_esp -= 4; W32(r_esp, 0x50fbb1u); f_0050f49c();
    /* 0050fbb1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fbb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fbb4: ret 4 */ FN_RET(0x0050fb97); r_esp += 8; return;
}

void f_0050fbc0(void) /* FUN_0050fbc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fbc0);
    /* 0050fbc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fbc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fbc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fbc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fbc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fbca: call 0x50f480 */ r_esp -= 4; W32(r_esp, 0x50fbcfu); f_0050f480();
    /* 0050fbcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050fbd2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050fbd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fbd7: je 0x50fbe5 */ if (fZ) goto L_0050fbe5;
L_0050fbd9:; BB(0x0050fbd9);
    /* 0050fbd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fbdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fbdd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x50fbe2u); f_0048ac1b();
    /* 0050fbe2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050fbe5:; BB(0x0050fbe5);
    /* 0050fbe5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fbe8: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fbea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fbeb: ret 4 */ FN_RET(0x0050fbc0); r_esp += 8; return;
}

void f_0050fbf0(void) /* FUN_0050fbf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fbf0);
    /* 0050fbf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fbf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fbf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fbf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fbf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fbfa: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x50fbffu); f_005d5d20();
    /* 0050fbff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc02: mov dword ptr [eax], 0x638854 */ W32((u32)(r_eax), 0x638854u);
    /* 0050fc08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc0b: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fc0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fc0e: ret 8 */ FN_RET(0x0050fbf0); r_esp += 12; return;
}

void f_0050fc11(void) /* FUN_0050fc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fc11);
    /* 0050fc11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fc12: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fc14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fc15: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fc18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc1b: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0050fc21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fc22: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc25: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0050fc2b: call 0x50b535 */ r_esp -= 4; W32(r_esp, 0x50fc30u); f_0050b535();
    /* 0050fc30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fc32: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc35: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050fc3b: call 0x50b1d4 */ r_esp -= 4; W32(r_esp, 0x50fc40u); f_0050b1d4();
    /* 0050fc40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc43: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0050fc49: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 0050fc4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc52: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0050fc58: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0050fc5e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050fc60: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x50fc63u); call_ind(t); }
    /* 0050fc63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc66: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0050fc6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fc6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc70: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0050fc76: call 0x50b557 */ r_esp -= 4; W32(r_esp, 0x50fc7bu); f_0050b557();
    /* 0050fc7b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc7e: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050fc84: call 0x50b59b */ r_esp -= 4; W32(r_esp, 0x50fc89u); f_0050b59b();
    /* 0050fc89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc8c: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0050fc92: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 0050fc98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fc9b: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0050fca1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050fca7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050fca9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x50fcacu); call_ind(t); }
    /* 0050fcac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fcaf: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0050fcb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fcb6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fcb9: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0050fcbf: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x50fcc4u); f_005b79b9();
    /* 0050fcc4: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fcc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fcc7: ret  */ FN_RET(0x0050fc11); r_esp += 4; return;
}

void f_0050fcc8(void) /* FUN_0050fcc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fcc8);
    /* 0050fcc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fcc9: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fccb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fccc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fccf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fcd2: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0050fcd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fcd9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fcdc: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0050fce2: call 0x50b513 */ r_esp -= 4; W32(r_esp, 0x50fce7u); f_0050b513();
    /* 0050fce7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fce9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fcec: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050fcf2: call 0x50b1d4 */ r_esp -= 4; W32(r_esp, 0x50fcf7u); f_0050b1d4();
    /* 0050fcf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fcfa: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 0050fd00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fd01: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fd04: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0050fd0a: call 0x50b579 */ r_esp -= 4; W32(r_esp, 0x50fd0fu); f_0050b579();
    /* 0050fd0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fd12: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 0050fd18: call 0x50b59b */ r_esp -= 4; W32(r_esp, 0x50fd1du); f_0050b59b();
    /* 0050fd1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fd20: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050fd26: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0050fd2c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fd2f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0050fd35: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0050fd3b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050fd3d: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x50fd40u); call_ind(t); }
    /* 0050fd40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fd43: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0050fd49: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 0050fd4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fd52: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0050fd58: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050fd5e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050fd60: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x50fd63u); call_ind(t); }
    /* 0050fd63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fd66: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0050fd6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fd6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fd70: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0050fd76: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x50fd7bu); f_005b79b9();
    /* 0050fd7b: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fd7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fd7e: ret  */ FN_RET(0x0050fcc8); r_esp += 4; return;
}

void f_0050fd80(void) /* FUN_0050fd80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fd80);
    /* 0050fd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fd81: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fd83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050fd86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050fd89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fd8c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050fd8f: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0050fd91: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fd94: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050fd97: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0050fd9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fd9d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0050fda0: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050fda3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fda4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x50fda9u); f_0048ab58();
    /* 0050fda9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050fdac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fdaf: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0050fdb2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050fdb9: jmp 0x50fdc4 */ goto L_0050fdc4;
L_0050fdbb:; BB(0x0050fdbb);
    /* 0050fdbb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fdbe: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050fdc1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0050fdc4:; BB(0x0050fdc4);
    /* 0050fdc4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fdc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fdca: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050fdcd: jge 0x50fde1 */ if ((fS==fO)) goto L_0050fde1;
L_0050fdcf:; BB(0x0050fdcf);
    /* 0050fdcf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fdd2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0050fdd5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fdd8: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
    /* 0050fddf: jmp 0x50fdbb */ goto L_0050fdbb;
L_0050fde1:; BB(0x0050fde1);
    /* 0050fde1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fde4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0050fde7: mov dword ptr [eax], 0xffffffff */ W32((u32)(r_eax), 0xffffffffu);
    /* 0050fded: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fdf0: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fdf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fdf3: ret 8 */ FN_RET(0x0050fd80); r_esp += 12; return;
}

void f_0050fdf6(void) /* FUN_0050fdf6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fdf6);
    /* 0050fdf6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fdf7: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fdf9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050fdfc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0050fdff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fe02: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0050fe05: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050fe08: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fe0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fe0c: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x50fe11u); f_0048ac1b();
    /* 0050fe11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050fe14: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fe16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fe17: ret  */ FN_RET(0x0050fdf6); r_esp += 4; return;
}

void f_0050fe18(void) /* FUN_0050fe18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050fe18);
    /* 0050fe18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fe19: mov ebp, esp */ r_ebp = r_esp;
    /* 0050fe1b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050fe1e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0050fe21: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050fe24: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0050fe27: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fe2a: jne 0x50fe64 */ if (!fZ) goto L_0050fe64;
L_0050fe2c:; BB(0x0050fe2c);
    /* 0050fe2c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050fe33: jmp 0x50fe3e */ goto L_0050fe3e;
L_0050fe35:; BB(0x0050fe35);
    /* 0050fe35: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fe38: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050fe3b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0050fe3e:; BB(0x0050fe3e);
    /* 0050fe3e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050fe41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fe44: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050fe47: jge 0x50fe5a */ if ((fS==fO)) goto L_0050fe5a;
L_0050fe49:; BB(0x0050fe49);
    /* 0050fe49: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050fe4c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0050fe4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fe52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050fe55: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 0050fe58: jmp 0x50fe35 */ goto L_0050fe35;
L_0050fe5a:; BB(0x0050fe5a);
    /* 0050fe5a: mov eax, 1 */ r_eax = 0x1u;
    /* 0050fe5f: jmp 0x50fefc */ goto L_0050fefc;
L_0050fe64:; BB(0x0050fe64);
    /* 0050fe64: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050fe67: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0050fe6a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fe6d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0050fe70: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050fe73: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050fe75: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0050fe78:; BB(0x0050fe78);
    /* 0050fe78: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050fe7b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0050fe7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050fe81: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0050fe84: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fe87: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fe8a: jne 0x50feb0 */ if (!fZ) goto L_0050feb0;
L_0050fe8c:; BB(0x0050fe8c);
    /* 0050fe8c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050fe8f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0050fe92: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050fe95: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0050fe98: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0050fe9b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050fe9e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050fea1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050fea4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050fea8: jge 0x50feae */ if ((fS==fO)) goto L_0050feae;
L_0050feaa:; BB(0x0050feaa);
    /* 0050feaa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050feac: jmp 0x50fefc */ goto L_0050fefc;
L_0050feae:; BB(0x0050feae);
    /* 0050feae: jmp 0x50fe78 */ goto L_0050fe78;
L_0050feb0:; BB(0x0050feb0);
    /* 0050feb0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050feb3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0050feb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050feb9: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0050febc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050febf: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0050fec2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050fec5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0050fec8: jmp 0x50fed3 */ goto L_0050fed3;
L_0050feca:; BB(0x0050feca);
    /* 0050feca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fecd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050fed0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0050fed3:; BB(0x0050fed3);
    /* 0050fed3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050fed6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fed9: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050fedc: jge 0x50fef7 */ if ((fS==fO)) goto L_0050fef7;
L_0050fede:; BB(0x0050fede);
    /* 0050fede: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fee1: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050fee4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050fee7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fee9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050feec: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0050feef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050fef2: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 0050fef5: jmp 0x50feca */ goto L_0050feca;
L_0050fef7:; BB(0x0050fef7);
    /* 0050fef7: mov eax, 1 */ r_eax = 0x1u;
L_0050fefc:; BB(0x0050fefc);
    /* 0050fefc: mov esp, ebp */ r_esp = r_ebp;
    /* 0050fefe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050feff: ret  */ FN_RET(0x0050fe18); r_esp += 4; return;
}

void f_0050ff00(void) /* FUN_0050ff00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050ff00);
    /* 0050ff00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff01: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ff03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0050ff07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ff0a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0050ff0d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050ff10: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0050ff13: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ff15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ff16: ret 4 */ FN_RET(0x0050ff00); r_esp += 8; return;
}

void f_0050ff20(void) /* FUN_0050ff20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050ff20);
    /* 0050ff20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff21: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ff23: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ff26: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0050ff29: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050ff2c: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x50ff31u); f_005dd290();
    /* 0050ff31: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050ff34: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050ff37: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x50ff3cu); f_005dd290();
    /* 0050ff3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050ff3f: mov dword ptr [eax], 0x6388c4 */ W32((u32)(r_eax), 0x6388c4u);
    /* 0050ff45: push 0x3fc */ { u32 v = 0x3fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff4a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x50ff4fu); f_0048ab58();
    /* 0050ff4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ff52: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0050ff55: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ff59: je 0x50ff68 */ if (fZ) goto L_0050ff68;
L_0050ff5b:; BB(0x0050ff5b);
    /* 0050ff5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ff5e: call 0x5b9c90 */ r_esp -= 4; W32(r_esp, 0x50ff63u); f_005b9c90();
    /* 0050ff63: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050ff66: jmp 0x50ff6f */ goto L_0050ff6f;
L_0050ff68:; BB(0x0050ff68);
    /* 0050ff68: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0050ff6f:; BB(0x0050ff6f);
    /* 0050ff6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050ff72: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050ff75: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0050ff78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff7a: call 0x6243e0 */ r_esp -= 4; W32(r_esp, 0x50ff7fu); f_006243e0();
    /* 0050ff7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ff82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff83: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050ff86: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0050ff89: call 0x5b9cd5 */ r_esp -= 4; W32(r_esp, 0x50ff8eu); f_005b9cd5();
    /* 0050ff8e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050ff95: jmp 0x50ffa0 */ goto L_0050ffa0;
L_0050ff97:; BB(0x0050ff97);
    /* 0050ff97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0050ff9a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050ff9d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0050ffa0:; BB(0x0050ffa0);
    /* 0050ffa0: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ffa4: jge 0x50fff5 */ if ((fS==fO)) goto L_0050fff5;
L_0050ffa6:; BB(0x0050ffa6);
    /* 0050ffa6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0050ffad: jmp 0x50ffb8 */ goto L_0050ffb8;
L_0050ffaf:; BB(0x0050ffaf);
    /* 0050ffaf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0050ffb2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050ffb5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0050ffb8:; BB(0x0050ffb8);
    /* 0050ffb8: cmp dword ptr [ebp - 8], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ffbc: jge 0x50fff3 */ if ((fS==fO)) goto L_0050fff3;
L_0050ffbe:; BB(0x0050ffbe);
    /* 0050ffbe: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ffc0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x50ffc5u); f_0048ab58();
    /* 0050ffc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ffc8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0050ffcb: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ffcf: je 0x50ffde */ if (fZ) goto L_0050ffde;
L_0050ffd1:; BB(0x0050ffd1);
    /* 0050ffd1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ffd4: call 0x50a060 */ r_esp -= 4; W32(r_esp, 0x50ffd9u); f_0050a060();
    /* 0050ffd9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0050ffdc: jmp 0x50ffe5 */ goto L_0050ffe5;
L_0050ffde:; BB(0x0050ffde);
    /* 0050ffde: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0050ffe5:; BB(0x0050ffe5);
    /* 0050ffe5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050ffe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ffe9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050ffec: call 0x5dd3ac */ r_esp -= 4; W32(r_esp, 0x50fff1u); f_005dd3ac();
    /* 0050fff1: jmp 0x50ffaf */ goto L_0050ffaf;
L_0050fff3:; BB(0x0050fff3);
    /* 0050fff3: jmp 0x50ff97 */ goto L_0050ff97;
L_0050fff5:; BB(0x0050fff5);
    /* 0050fff5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050fff8: call 0x510395 */ r_esp -= 4; W32(r_esp, 0x50fffdu); f_00510395();
    /* 0050fffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00510000: mov esp, ebp */ r_esp = r_ebp;
    /* 00510002: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510003: ret  */ FN_RET(0x0050ff20); r_esp += 4; return;
}

void f_00510004(void) /* FUN_00510004 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00510004);
    /* 00510004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00510005: mov ebp, esp */ r_ebp = r_esp;
    /* 00510007: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051000a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0051000d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510010: mov dword ptr [eax], 0x6388c4 */ W32((u32)(r_eax), 0x6388c4u);
L_00510016:; BB(0x00510016);
    /* 00510016: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510019: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x51001eu); f_005dd4d2();
    /* 0051001e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510020: je 0x510067 */ if (fZ) goto L_00510067;
L_00510022:; BB(0x00510022);
    /* 00510022: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510024: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510027: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x51002cu); f_005dd560();
    /* 0051002c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051002f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510032: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510033: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510036: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x51003bu); f_005dd469();
    /* 0051003b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051003e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00510041: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510044: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00510047: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051004b: je 0x51005e */ if (fZ) goto L_0051005e;
L_0051004d:; BB(0x0051004d);
    /* 0051004d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051004f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510052: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00510054: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510057: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x510059u); call_ind(t); }
    /* 00510059: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0051005c: jmp 0x510065 */ goto L_00510065;
L_0051005e:; BB(0x0051005e);
    /* 0051005e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00510065:; BB(0x00510065);
    /* 00510065: jmp 0x510016 */ goto L_00510016;
L_00510067:; BB(0x00510067);
    /* 00510067: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051006a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0051006d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00510070: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00510073: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00510076: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051007a: je 0x51008d */ if (fZ) goto L_0051008d;
L_0051007c:; BB(0x0051007c);
    /* 0051007c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051007e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510081: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510083: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510086: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x510088u); call_ind(t); }
    /* 00510088: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051008b: jmp 0x510094 */ goto L_00510094;
L_0051008d:; BB(0x0051008d);
    /* 0051008d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00510094:; BB(0x00510094);
    /* 00510094: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510097: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051009a: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x51009fu); f_005dd2d3();
    /* 0051009f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005100a2: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x5100a7u); f_005dd2d3();
    /* 005100a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005100a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005100aa: ret  */ FN_RET(0x00510004); r_esp += 4; return;
}

void f_005100ab(void) /* FUN_005100ab */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005100ab);
    /* 005100ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005100ac: mov ebp, esp */ r_ebp = r_esp;
    /* 005100ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005100af: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005100b2: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005100b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005100b7: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5100bcu); f_005dd560();
    /* 005100bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005100bf: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005100c2: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005100c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005100c7: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5100ccu); f_005dd560();
    /* 005100cc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005100cf: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005100d2: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005100d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005100d7: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5100dcu); f_005dd560();
    /* 005100dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005100df: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005100e2: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005100e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005100e7: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5100ecu); f_005dd560();
    /* 005100ec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005100ef: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005100f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005100f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005100f5: ret 4 */ FN_RET(0x005100ab); r_esp += 8; return;
}

void f_005100f8(void) /* FUN_005100f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005100f8);
    /* 005100f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005100f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005100fb: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005100fe: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00510101: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510105: je 0x510195 */ if (fZ) goto L_00510195;
L_0051010b:; BB(0x0051010b);
    /* 0051010b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051010e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00510111: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510114: je 0x510193 */ if (fZ) goto L_00510193;
L_00510116:; BB(0x00510116);
    /* 00510116: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510119: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051011d: je 0x510127 */ if (fZ) goto L_00510127;
L_0051011f:; BB(0x0051011f);
    /* 0051011f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510122: call 0x5101a3 */ r_esp -= 4; W32(r_esp, 0x510127u); f_005101a3();
L_00510127:; BB(0x00510127);
    /* 00510127: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051012a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051012d: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 00510130: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00510137: jmp 0x510142 */ goto L_00510142;
L_00510139:; BB(0x00510139);
    /* 00510139: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051013c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051013f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00510142:; BB(0x00510142);
    /* 00510142: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510145: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510148: cmp ecx, dword ptr [eax + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051014b: jge 0x510193 */ if ((fS==fO)) goto L_00510193;
L_0051014d:; BB(0x0051014d);
    /* 0051014d: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051014f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x510154u); f_0048ab58();
    /* 00510154: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00510157: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051015a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051015e: je 0x51016d */ if (fZ) goto L_0051016d;
L_00510160:; BB(0x00510160);
    /* 00510160: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510163: call 0x50a060 */ r_esp -= 4; W32(r_esp, 0x510168u); f_0050a060();
    /* 00510168: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0051016b: jmp 0x510174 */ goto L_00510174;
L_0051016d:; BB(0x0051016d);
    /* 0051016d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00510174:; BB(0x00510174);
    /* 00510174: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510177: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510178: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051017b: call 0x5dd3ac */ r_esp -= 4; W32(r_esp, 0x510180u); f_005dd3ac();
    /* 00510180: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510182: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510185: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x51018au); f_005dd560();
    /* 0051018a: mov dword ptr [eax + 8], 0xc */ W32((u32)(r_eax+0x8u), 0xcu);
    /* 00510191: jmp 0x510139 */ goto L_00510139;
L_00510193:; BB(0x00510193);
    /* 00510193: jmp 0x51019d */ goto L_0051019d;
L_00510195:; BB(0x00510195);
    /* 00510195: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510198: call 0x5101a3 */ r_esp -= 4; W32(r_esp, 0x51019du); f_005101a3();
L_0051019d:; BB(0x0051019d);
    /* 0051019d: mov esp, ebp */ r_esp = r_ebp;
    /* 0051019f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005101a0: ret 4 */ FN_RET(0x005100f8); r_esp += 8; return;
}

void f_005101a3(void) /* FUN_005101a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005101a3);
    /* 005101a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005101a4: mov ebp, esp */ r_ebp = r_esp;
    /* 005101a6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005101a9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005101ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005101b3: jmp 0x5101be */ goto L_005101be;
L_005101b5:; BB(0x005101b5);
    /* 005101b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005101b8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005101bb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005101be:; BB(0x005101be);
    /* 005101be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005101c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005101c4: cmp edx, dword ptr [ecx + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005101c7: jge 0x5101de */ if ((fS==fO)) goto L_005101de;
L_005101c9:; BB(0x005101c9);
    /* 005101c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005101cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005101ce: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5101d3u); f_005dd560();
    /* 005101d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005101d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005101d7: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5101dcu); f_005dd469();
    /* 005101dc: jmp 0x5101b5 */ goto L_005101b5;
L_005101de:; BB(0x005101de);
    /* 005101de: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005101e1: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 005101e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005101ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005101eb: ret  */ FN_RET(0x005101a3); r_esp += 4; return;
}

void f_005101ec(void) /* FUN_005101ec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005101ec);
    /* 005101ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005101ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005101ef: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005101f2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005101f5: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 005101fb: call 0x531343 */ r_esp -= 4; W32(r_esp, 0x510200u); f_00531343();
    /* 00510200: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00510207: jmp 0x510212 */ goto L_00510212;
L_00510209:; BB(0x00510209);
    /* 00510209: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051020c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051020f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00510212:; BB(0x00510212);
    /* 00510212: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00510216: jge 0x510296 */ if ((fS==fO)) goto L_00510296;
L_00510218:; BB(0x00510218);
    /* 00510218: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0051021f: jmp 0x51022a */ goto L_0051022a;
L_00510221:; BB(0x00510221);
    /* 00510221: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00510224: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510227: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0051022a:; BB(0x0051022a);
    /* 0051022a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051022d: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x510232u); f_005dd4d2();
    /* 00510232: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00510235: jge 0x510291 */ if ((fS==fO)) goto L_00510291;
L_00510237:; BB(0x00510237);
    /* 00510237: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051023a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051023b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051023e: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x510243u); f_005dd560();
    /* 00510243: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00510246: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510249: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x51024eu); f_005dd4d2();
    /* 0051024e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00510251: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510252: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510255: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00510258: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x51025du); f_005b9dbe();
    /* 0051025d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00510260: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510264: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510267: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x51026cu); f_005dd560();
    /* 0051026c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051026f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510272: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510273: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00510276: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510277: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051027a: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x51027fu); f_005dd58e();
    /* 0051027f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510282: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510283: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510286: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510287: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051028a: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x51028fu); f_005dd58e();
    /* 0051028f: jmp 0x510221 */ goto L_00510221;
L_00510291:; BB(0x00510291);
    /* 00510291: jmp 0x510209 */ goto L_00510209;
L_00510296:; BB(0x00510296);
    /* 00510296: mov esp, ebp */ r_esp = r_ebp;
    /* 00510298: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510299: ret  */ FN_RET(0x005101ec); r_esp += 4; return;
}

void f_0051029a(void) /* FUN_0051029a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051029a);
    /* 0051029a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051029b: mov ebp, esp */ r_ebp = r_esp;
    /* 0051029d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005102a0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005102a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005102a6: mov dword ptr [0x6921f4], eax */ W32((u32)(0x6921f4u), r_eax);
    /* 005102ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005102b2: jmp 0x5102bd */ goto L_005102bd;
L_005102b4:; BB(0x005102b4);
    /* 005102b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005102b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005102ba: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005102bd:; BB(0x005102bd);
    /* 005102bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005102c0: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5102c5u); f_005dd4d2();
    /* 005102c5: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005102c8: jge 0x5102df */ if ((fS==fO)) goto L_005102df;
L_005102ca:; BB(0x005102ca);
    /* 005102ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005102cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005102ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005102d1: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5102d6u); f_005dd560();
    /* 005102d6: mov ecx, eax */ r_ecx = r_eax;
    /* 005102d8: call 0x50a1e3 */ r_esp -= 4; W32(r_esp, 0x5102ddu); f_0050a1e3();
    /* 005102dd: jmp 0x5102b4 */ goto L_005102b4;
L_005102df:; BB(0x005102df);
    /* 005102df: mov esp, ebp */ r_esp = r_ebp;
    /* 005102e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005102e2: ret 4 */ FN_RET(0x0051029a); r_esp += 8; return;
}

void f_005102e5(void) /* FUN_005102e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005102e5);
    /* 005102e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005102e6: mov ebp, esp */ r_ebp = r_esp;
    /* 005102e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005102eb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005102ee: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005102f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005102f2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005102f4: push 0x391 */ { u32 v = 0x391u; r_esp -= 4; W32(r_esp, v); }
    /* 005102f9: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005102fe: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00510301: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x510306u); f_005e8389();
    /* 00510306: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051030d: jmp 0x510318 */ goto L_00510318;
L_0051030f:; BB(0x0051030f);
    /* 0051030f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510312: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510315: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00510318:; BB(0x00510318);
    /* 00510318: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051031c: jge 0x51038f */ if ((fS==fO)) goto L_0051038f;
L_0051031e:; BB(0x0051031e);
    /* 0051031e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00510325: jmp 0x510330 */ goto L_00510330;
L_00510327:; BB(0x00510327);
    /* 00510327: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051032a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051032d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00510330:; BB(0x00510330);
    /* 00510330: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00510333: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00510336: jge 0x51038d */ if ((fS==fO)) goto L_0051038d;
L_00510338:; BB(0x00510338);
    /* 00510338: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051033b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051033c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051033f: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x510344u); f_005dd560();
    /* 00510344: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00510347: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051034a: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051034d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051034e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510351: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00510354: call 0x5b9dbe */ r_esp -= 4; W32(r_esp, 0x510359u); f_005b9dbe();
    /* 00510359: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0051035c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051035f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510360: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510363: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x510368u); f_005dd560();
    /* 00510368: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051036b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051036e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051036f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00510372: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510373: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510376: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x51037bu); f_005dd58e();
    /* 0051037b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051037e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051037f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510382: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510383: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510386: call 0x5dd58e */ r_esp -= 4; W32(r_esp, 0x51038bu); f_005dd58e();
    /* 0051038b: jmp 0x510327 */ goto L_00510327;
L_0051038d:; BB(0x0051038d);
    /* 0051038d: jmp 0x51030f */ goto L_0051030f;
L_0051038f:; BB(0x0051038f);
    /* 0051038f: mov esp, ebp */ r_esp = r_ebp;
    /* 00510391: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510392: ret 4 */ FN_RET(0x005102e5); r_esp += 8; return;
}

void f_00510395(void) /* FUN_00510395 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00510395);
    /* 00510395: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00510396: mov ebp, esp */ r_ebp = r_esp;
    /* 00510398: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051039b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0051039e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005103a5: jmp 0x5103b0 */ goto L_005103b0;
L_005103a7:; BB(0x005103a7);
    /* 005103a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005103aa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005103ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005103b0:; BB(0x005103b0);
    /* 005103b0: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005103b4: jge 0x51046d */ if ((fS==fO)) goto L_0051046d;
L_005103ba:; BB(0x005103ba);
    /* 005103ba: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005103c1: jmp 0x5103cc */ goto L_005103cc;
L_005103c3:; BB(0x005103c3);
    /* 005103c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005103c6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005103c9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005103cc:; BB(0x005103cc);
    /* 005103cc: cmp dword ptr [ebp - 0xc], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005103d0: jge 0x510468 */ if ((fS==fO)) goto L_00510468;
L_005103d6:; BB(0x005103d6);
    /* 005103d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005103d9: imul edx, edx, 0xd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005103dc: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005103df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005103e0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005103e3: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5103e8u); f_005dd560();
    /* 005103e8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005103eb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005103ee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005103f1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005103f4: jle 0x510402 */ if ((fZ||fS!=fO)) goto L_00510402;
L_005103f6:; BB(0x005103f6);
    /* 005103f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005103f9: mov dword ptr [ecx + 8], 0xa */ W32((u32)(r_ecx+0x8u), 0xau);
    /* 00510400: jmp 0x51040e */ goto L_0051040e;
L_00510402:; BB(0x00510402);
    /* 00510402: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510405: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00510408: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051040b: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
L_0051040e:; BB(0x0051040e);
    /* 0051040e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510411: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510414: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00510417: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051041b: jne 0x510451 */ if (!fZ) goto L_00510451;
L_0051041d:; BB(0x0051041d);
    /* 0051041d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510420: mov dword ptr [eax + 8], 0xb */ W32((u32)(r_eax+0x8u), 0xbu);
    /* 00510427: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 0051042d: call 0x52c1d9 */ r_esp -= 4; W32(r_esp, 0x510432u); f_0052c1d9();
    /* 00510432: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510435: je 0x510451 */ if (fZ) goto L_00510451;
L_00510437:; BB(0x00510437);
    /* 00510437: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 0051043d: call 0x52c1d9 */ r_esp -= 4; W32(r_esp, 0x510442u); f_0052c1d9();
    /* 00510442: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510445: je 0x510451 */ if (fZ) goto L_00510451;
L_00510447:; BB(0x00510447);
    /* 00510447: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051044a: mov dword ptr [ecx + 0x10], 0xd */ W32((u32)(r_ecx+0x10u), 0xdu);
L_00510451:; BB(0x00510451);
    /* 00510451: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510454: imul edx, edx, 0xd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00510457: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051045a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051045b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051045e: call 0x50a1bc */ r_esp -= 4; W32(r_esp, 0x510463u); f_0050a1bc();
    /* 00510463: jmp 0x5103c3 */ goto L_005103c3;
L_00510468:; BB(0x00510468);
    /* 00510468: jmp 0x5103a7 */ goto L_005103a7;
L_0051046d:; BB(0x0051046d);
    /* 0051046d: mov esp, ebp */ r_esp = r_ebp;
    /* 0051046f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510470: ret  */ FN_RET(0x00510395); r_esp += 4; return;
}

void f_00510480(void) /* FUN_00510480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00510480);
    /* 00510480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00510481: mov ebp, esp */ r_ebp = r_esp;
    /* 00510483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00510487: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051048a: call 0x510004 */ r_esp -= 4; W32(r_esp, 0x51048fu); f_00510004();
    /* 0051048f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00510492: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00510495: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510497: je 0x5104a5 */ if (fZ) goto L_005104a5;
L_00510499:; BB(0x00510499);
    /* 00510499: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051049c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051049d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5104a2u); f_0048ac1b();
    /* 005104a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005104a5:; BB(0x005104a5);
    /* 005104a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005104a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005104aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005104ab: ret 4 */ FN_RET(0x00510480); r_esp += 8; return;
}

void f_005104b0(void) /* FUN_005104b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005104b0);
    /* 005104b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005104b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005104b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005104b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005104b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005104b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005104bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005104be: call 0x5b6af0 */ r_esp -= 4; W32(r_esp, 0x5104c3u); f_005b6af0();
    /* 005104c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005104c6: mov dword ptr [eax], 0x6388cc */ W32((u32)(r_eax), 0x6388ccu);
    /* 005104cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005104cf: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 005104d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005104dc: mov dword ptr [edx + 0xb4], 0 */ W32((u32)(r_edx+0xb4u), 0x0u);
    /* 005104e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005104e9: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 005104f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005104f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005104f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005104f9: ret  */ FN_RET(0x005104b0); r_esp += 4; return;
}

void f_005104fa(void) /* FUN_005104fa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005104fa);
    /* 005104fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005104fb: mov ebp, esp */ r_ebp = r_esp;
    /* 005104fd: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00510500: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00510503: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00510506: mov dword ptr [eax], 0x6388cc */ W32((u32)(r_eax), 0x6388ccu);
    /* 0051050c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051050f: cmp dword ptr [ecx + 0xb0], 0 */ {  u32 a = R32((u32)(r_ecx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510516: je 0x510548 */ if (fZ) goto L_00510548;
L_00510518:; BB(0x00510518);
    /* 00510518: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051051b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00510521: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00510524: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510527: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051052a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051052e: je 0x510541 */ if (fZ) goto L_00510541;
L_00510530:; BB(0x00510530);
    /* 00510530: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510532: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510535: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510537: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051053a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x51053cu); call_ind(t); }
    /* 0051053c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051053f: jmp 0x510548 */ goto L_00510548;
L_00510541:; BB(0x00510541);
    /* 00510541: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00510548:; BB(0x00510548);
    /* 00510548: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051054b: cmp dword ptr [ecx + 0xb4], 0 */ {  u32 a = R32((u32)(r_ecx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510552: je 0x510584 */ if (fZ) goto L_00510584;
L_00510554:; BB(0x00510554);
    /* 00510554: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00510557: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051055d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00510560: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510563: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00510566: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051056a: je 0x51057d */ if (fZ) goto L_0051057d;
L_0051056c:; BB(0x0051056c);
    /* 0051056c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051056e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510571: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510573: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510576: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x510578u); call_ind(t); }
    /* 00510578: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0051057b: jmp 0x510584 */ goto L_00510584;
L_0051057d:; BB(0x0051057d);
    /* 0051057d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00510584:; BB(0x00510584);
    /* 00510584: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00510587: cmp dword ptr [ecx + 0xb8], 0 */ {  u32 a = R32((u32)(r_ecx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051058e: je 0x5105c0 */ if (fZ) goto L_005105c0;
L_00510590:; BB(0x00510590);
    /* 00510590: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00510593: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00510599: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051059c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051059f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005105a2: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005105a6: je 0x5105b9 */ if (fZ) goto L_005105b9;
L_005105a8:; BB(0x005105a8);
    /* 005105a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005105aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005105ad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005105af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005105b2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5105b4u); call_ind(t); }
    /* 005105b4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005105b7: jmp 0x5105c0 */ goto L_005105c0;
L_005105b9:; BB(0x005105b9);
    /* 005105b9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005105c0:; BB(0x005105c0);
    /* 005105c0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005105c3: call 0x5b6b65 */ r_esp -= 4; W32(r_esp, 0x5105c8u); f_005b6b65();
    /* 005105c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005105ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005105cb: ret  */ FN_RET(0x005104fa); r_esp += 4; return;
}

void f_005105cc(void) /* FUN_005105cc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005105cc);
    /* 005105cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005105cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005105cf: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005105d2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005105d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005105d7: push 0x186ad */ { u32 v = 0x186adu; r_esp -= 4; W32(r_esp, v); }
    /* 005105dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005105df: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x5105e4u); f_005e0461();
    /* 005105e4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005105e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005105e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005105eb: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x5105f0u); f_005d81dc();
    /* 005105f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005105f2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005105f5: call 0x5b6c5e */ r_esp -= 4; W32(r_esp, 0x5105fau); f_005b6c5e();
    /* 005105fa: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005105ff: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x510604u); f_0048ab58();
    /* 00510604: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00510607: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051060a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051060e: je 0x510621 */ if (fZ) goto L_00510621;
L_00510610:; BB(0x00510610);
    /* 00510610: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510613: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510614: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510617: call 0x510a24 */ r_esp -= 4; W32(r_esp, 0x51061cu); f_00510a24();
    /* 0051061c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051061f: jmp 0x510628 */ goto L_00510628;
L_00510621:; BB(0x00510621);
    /* 00510621: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00510628:; BB(0x00510628);
    /* 00510628: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051062b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051062e: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 00510634: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510637: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0051063d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510640: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00510643: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00510645: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00510647: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00510649: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051064c: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00510652: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510655: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0051065b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051065d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x510660u); call_ind(t); }
    /* 00510660: push 0x6924a0 */ { u32 v = 0x6924a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510665: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510668: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0051066e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510671: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00510677: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510679: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x51067cu); call_ind(t); }
    /* 0051067c: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00510681: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510684: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0051068a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051068d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00510693: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510695: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x510698u); call_ind(t); }
    /* 00510698: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051069a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051069c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051069e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005106a0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005106a3: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005106a9: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5106aeu); f_005d5ff2();
    /* 005106ae: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005106b0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005106b3: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 005106b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005106bc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005106c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005106c4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5106c7u); call_ind(t); }
    /* 005106c7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005106ca: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005106d0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005106d3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005106d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005106db: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5106deu); call_ind(t); }
    /* 005106de: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005106e0: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 005106e2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005106e5: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005106eb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005106ee: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005106f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005106f6: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5106f9u); call_ind(t); }
    /* 005106f9: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005106fb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005106fe: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00510704: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x510709u); f_005d65d6();
    /* 00510709: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051070b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051070e: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00510714: call 0x5d65f9 */ r_esp -= 4; W32(r_esp, 0x510719u); f_005d65f9();
    /* 00510719: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051071c: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00510722: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510725: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0051072b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051072d: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x510730u); call_ind(t); }
    /* 00510730: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00510735: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x51073au); f_0048ab58();
    /* 0051073a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051073d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00510740: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510744: je 0x510753 */ if (fZ) goto L_00510753;
L_00510746:; BB(0x00510746);
    /* 00510746: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510749: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x51074eu); f_005e8590();
    /* 0051074e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00510751: jmp 0x51075a */ goto L_0051075a;
L_00510753:; BB(0x00510753);
    /* 00510753: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0051075a:; BB(0x0051075a);
    /* 0051075a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051075d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510760: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 00510766: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00510768: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051076b: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00510771: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x510776u); f_005e87aa();
    /* 00510776: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00510778: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051077b: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00510781: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510784: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051078a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051078c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x51078fu); call_ind(t); }
    /* 0051078f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510792: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x510797u); f_005e06f2();
    /* 00510797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510798: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051079b: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 005107a1: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5107a6u); f_005e8740();
    /* 005107a6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005107a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005107ab: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 005107b1: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5107b6u); f_005e8775();
    /* 005107b6: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005107b8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005107bb: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 005107c1: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5107c6u); f_005e8e99();
    /* 005107c6: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005107c8: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 005107ca: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005107cd: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 005107d3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005107d6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005107dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005107de: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5107e1u); call_ind(t); }
    /* 005107e1: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005107e6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5107ebu); f_0048ab58();
    /* 005107eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005107ee: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005107f1: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005107f5: je 0x510804 */ if (fZ) goto L_00510804;
L_005107f7:; BB(0x005107f7);
    /* 005107f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005107fa: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5107ffu); f_005e8590();
    /* 005107ff: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00510802: jmp 0x51080b */ goto L_0051080b;
L_00510804:; BB(0x00510804);
    /* 00510804: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0051080b:; BB(0x0051080b);
    /* 0051080b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051080e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00510811: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 00510817: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00510819: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051081c: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00510822: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x510827u); f_005e87aa();
    /* 00510827: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00510829: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051082c: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00510832: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510835: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0051083b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051083d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x510840u); call_ind(t); }
    /* 00510840: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510843: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x510848u); f_005e06f2();
    /* 00510848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510849: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051084c: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00510852: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x510857u); f_005e8740();
    /* 00510857: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00510859: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051085c: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00510862: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x510867u); f_005e8775();
    /* 00510867: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00510869: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051086c: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00510872: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x510877u); f_005e8e99();
    /* 00510877: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00510879: push -9 */ { u32 v = 0xfffffff7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051087b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051087e: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00510884: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510887: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0051088d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051088f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x510892u); call_ind(t); }
    /* 00510892: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510894: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510897: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0051089d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051089e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005108a1: call 0x5b7955 */ r_esp -= 4; W32(r_esp, 0x5108a6u); f_005b7955();
    /* 005108a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005108a8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005108ab: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005108b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005108b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005108b5: call 0x5b7909 */ r_esp -= 4; W32(r_esp, 0x5108bau); f_005b7909();
    /* 005108ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005108bc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005108bf: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 005108c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005108c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005108c9: call 0x5b7909 */ r_esp -= 4; W32(r_esp, 0x5108ceu); f_005b7909();
    /* 005108ce: mov esp, ebp */ r_esp = r_ebp;
    /* 005108d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005108d1: ret  */ FN_RET(0x005105cc); r_esp += 4; return;
}

void f_005108d2(void) /* FUN_005108d2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005108d2);
    /* 005108d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005108d3: mov ebp, esp */ r_ebp = r_esp;
    /* 005108d5: sub esp, 0x18c */ {  u32 a = r_esp; u32 b = 0x18cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005108db: mov dword ptr [ebp - 0x18c], ecx */ W32((u32)(r_ebp+0xfffffe74u), r_ecx);
    /* 005108e1: lea eax, [ebp - 0x144] */ r_eax = (u32)(r_ebp+0xfffffebcu);
    /* 005108e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005108e8: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 005108ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005108ef: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005108f5: call 0x45d949 */ r_esp -= 4; W32(r_esp, 0x5108fau); f_0045d949();
    /* 005108fa: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00510900: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00510901: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00510903: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00510905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510906: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 0051090c: call 0x52dbd8 */ r_esp -= 4; W32(r_esp, 0x510911u); f_0052dbd8();
    /* 00510911: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00510917: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00510918: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051091a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0051091c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051091d: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00510923: call 0x52dc05 */ r_esp -= 4; W32(r_esp, 0x510928u); f_0052dc05();
    /* 00510928: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0051092e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051092f: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00510935: call 0x52dc32 */ r_esp -= 4; W32(r_esp, 0x51093au); f_0052dc32();
    /* 0051093a: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00510940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510941: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00510947: call 0x52dc8c */ r_esp -= 4; W32(r_esp, 0x51094cu); f_0052dc8c();
    /* 0051094c: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00510952: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510953: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00510959: call 0x52dcb9 */ r_esp -= 4; W32(r_esp, 0x51095eu); f_0052dcb9();
    /* 0051095e: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00510964: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00510966: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510967: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 0051096d: call 0x52dc5f */ r_esp -= 4; W32(r_esp, 0x510972u); f_0052dc5f();
    /* 00510972: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00510978: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0051097a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051097b: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00510981: call 0x52dce6 */ r_esp -= 4; W32(r_esp, 0x510986u); f_0052dce6();
    /* 00510986: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00510989: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051098a: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00510990: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510991: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x510996u); f_0060fb42();
    /* 00510996: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00510999: lea eax, [ebp - 0x188] */ r_eax = (u32)(r_ebp+0xfffffe78u);
    /* 0051099f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005109a0: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005109a6: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005109a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005109a9: call 0x60fb42 */ r_esp -= 4; W32(r_esp, 0x5109aeu); f_0060fb42();
    /* 005109ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005109b1: lea edx, [ebp - 0x188] */ r_edx = (u32)(r_ebp+0xfffffe78u);
    /* 005109b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005109b8: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005109bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005109bc: push 0x6924a8 */ { u32 v = 0x6924a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005109c1: lea ecx, [ebp - 0x140] */ r_ecx = (u32)(r_ebp+0xfffffec0u);
    /* 005109c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005109c8: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5109cdu); f_00624050();
    /* 005109cd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005109d0: lea edx, [ebp - 0x140] */ r_edx = (u32)(r_ebp+0xfffffec0u);
    /* 005109d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005109d7: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 005109dd: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005109e3: mov edx, dword ptr [ebp - 0x18c] */ r_edx = R32((u32)(r_ebp+0xfffffe74u));
    /* 005109e9: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005109ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005109f1: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5109f4u); call_ind(t); }
    /* 005109f4: mov ecx, dword ptr [ebp - 0x18c] */ r_ecx = R32((u32)(r_ebp+0xfffffe74u));
    /* 005109fa: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x5109ffu); f_005e030e();
    /* 005109ff: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510a06: je 0x510a20 */ if (fZ) goto L_00510a20;
L_00510a08:; BB(0x00510a08);
    /* 00510a08: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00510a0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510a0c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00510a0e: push 0x385 */ { u32 v = 0x385u; r_esp -= 4; W32(r_esp, v); }
    /* 00510a13: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00510a18: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00510a1b: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x510a20u); f_005e8389();
L_00510a20:; BB(0x00510a20);
    /* 00510a20: mov esp, ebp */ r_esp = r_ebp;
    /* 00510a22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510a23: ret  */ FN_RET(0x005108d2); r_esp += 4; return;
}

void f_00510a24(void) /* FUN_00510a24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00510a24);
    /* 00510a24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00510a25: mov ebp, esp */ r_ebp = r_esp;
    /* 00510a27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510a28: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00510a2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510a2e: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x510a33u); f_005d5d20();
    /* 00510a33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510a36: mov dword ptr [eax], 0x6388ec */ W32((u32)(r_eax), 0x6388ecu);
    /* 00510a3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510a3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00510a42: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00510a48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510a4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00510a4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510a4e: ret 4 */ FN_RET(0x00510a24); r_esp += 8; return;
}

void f_00510a51(void) /* FUN_00510a51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00510a51);
    /* 00510a51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00510a52: mov ebp, esp */ r_ebp = r_esp;
    /* 00510a54: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00510a57: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00510a5a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00510a61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510a63: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510a66: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x510a6bu); f_005d6635();
    /* 00510a6b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510a6e: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00510a74: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x510a79u); f_005e03cc();
    /* 00510a79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510a7b: mov ecx, dword ptr [0x6facd4] */ r_ecx = R32((u32)(0x6facd4u));
    /* 00510a81: call 0x44a1d2 */ r_esp -= 4; W32(r_esp, 0x510a86u); f_0044a1d2();
    /* 00510a86: mov ecx, dword ptr [0x6facd4] */ r_ecx = R32((u32)(0x6facd4u));
    /* 00510a8c: mov dword ptr [ecx + 0x1ce4], 1 */ W32((u32)(r_ecx+0x1ce4u), 0x1u);
    /* 00510a96: mov ecx, dword ptr [0x6facd4] */ r_ecx = R32((u32)(0x6facd4u));
    /* 00510a9c: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x510aa1u); f_00448ca3();
    /* 00510aa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510aa3: je 0x510ac0 */ if (fZ) goto L_00510ac0;
L_00510aa5:; BB(0x00510aa5);
    /* 00510aa5: mov edx, dword ptr [0x6facd4] */ r_edx = R32((u32)(0x6facd4u));
    /* 00510aab: mov eax, dword ptr [edx + 0x1ce8] */ r_eax = R32((u32)(r_edx+0x1ce8u));
    /* 00510ab1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00510ab4: mov ecx, dword ptr [0x6facd4] */ r_ecx = R32((u32)(0x6facd4u));
    /* 00510aba: mov dword ptr [ecx + 0x1ce8], eax */ W32((u32)(r_ecx+0x1ce8u), r_eax);
L_00510ac0:; BB(0x00510ac0);
    /* 00510ac0: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00510ac6: call 0x52ad81 */ r_esp -= 4; W32(r_esp, 0x510acbu); f_0052ad81();
    /* 00510acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510acd: je 0x510ada */ if (fZ) goto L_00510ada;
L_00510acf:; BB(0x00510acf);
    /* 00510acf: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00510ad5: call 0x52b40a */ r_esp -= 4; W32(r_esp, 0x510adau); f_0052b40a();
L_00510ada:; BB(0x00510ada);
    /* 00510ada: mov esp, ebp */ r_esp = r_ebp;
    /* 00510adc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510add: ret  */ FN_RET(0x00510a51); r_esp += 4; return;
}

void f_00510ade(void) /* FUN_00510ade */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00510ade);
    /* 00510ade: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00510adf: mov ebp, esp */ r_ebp = r_esp;
    /* 00510ae1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510ae2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00510ae5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510ae7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510ae9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510aec: call 0x5b6af0 */ r_esp -= 4; W32(r_esp, 0x510af1u); f_005b6af0();
    /* 00510af1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510af4: mov dword ptr [eax], 0x63895c */ W32((u32)(r_eax), 0x63895cu);
    /* 00510afa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510afd: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 00510b07: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510b0a: mov dword ptr [edx + 0xb4], 0 */ W32((u32)(r_edx+0xb4u), 0x0u);
    /* 00510b14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510b17: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 00510b21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510b24: mov dword ptr [ecx + 0xc4], 0 */ W32((u32)(r_ecx+0xc4u), 0x0u);
    /* 00510b2e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510b31: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 00510b3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510b3e: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00510b48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510b4b: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
    /* 00510b55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510b58: mov dword ptr [edx + 0xc0], 0 */ W32((u32)(r_edx+0xc0u), 0x0u);
    /* 00510b62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510b65: mov esp, ebp */ r_esp = r_ebp;
    /* 00510b67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510b68: ret  */ FN_RET(0x00510ade); r_esp += 4; return;
}

void f_00510b69(void) /* FUN_00510b69 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00510b69);
    /* 00510b69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00510b6a: mov ebp, esp */ r_ebp = r_esp;
    /* 00510b6c: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00510b6f: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00510b72: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510b75: mov dword ptr [eax], 0x63895c */ W32((u32)(r_eax), 0x63895cu);
    /* 00510b7b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510b7e: cmp dword ptr [ecx + 0xb0], 0 */ {  u32 a = R32((u32)(r_ecx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510b85: je 0x510bb7 */ if (fZ) goto L_00510bb7;
L_00510b87:; BB(0x00510b87);
    /* 00510b87: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510b8a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00510b90: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00510b93: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510b96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00510b99: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510b9d: je 0x510bb0 */ if (fZ) goto L_00510bb0;
L_00510b9f:; BB(0x00510b9f);
    /* 00510b9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510ba1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510ba4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510ba6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510ba9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x510babu); call_ind(t); }
    /* 00510bab: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00510bae: jmp 0x510bb7 */ goto L_00510bb7;
L_00510bb0:; BB(0x00510bb0);
    /* 00510bb0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00510bb7:; BB(0x00510bb7);
    /* 00510bb7: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510bba: cmp dword ptr [ecx + 0xb4], 0 */ {  u32 a = R32((u32)(r_ecx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510bc1: je 0x510bf3 */ if (fZ) goto L_00510bf3;
L_00510bc3:; BB(0x00510bc3);
    /* 00510bc3: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510bc6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00510bcc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00510bcf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510bd2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00510bd5: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510bd9: je 0x510bec */ if (fZ) goto L_00510bec;
L_00510bdb:; BB(0x00510bdb);
    /* 00510bdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510bdd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510be0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510be2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510be5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x510be7u); call_ind(t); }
    /* 00510be7: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00510bea: jmp 0x510bf3 */ goto L_00510bf3;
L_00510bec:; BB(0x00510bec);
    /* 00510bec: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00510bf3:; BB(0x00510bf3);
    /* 00510bf3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510bf6: cmp dword ptr [ecx + 0xb8], 0 */ {  u32 a = R32((u32)(r_ecx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510bfd: je 0x510c2f */ if (fZ) goto L_00510c2f;
L_00510bff:; BB(0x00510bff);
    /* 00510bff: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510c02: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00510c08: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00510c0b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510c0e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00510c11: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510c15: je 0x510c28 */ if (fZ) goto L_00510c28;
L_00510c17:; BB(0x00510c17);
    /* 00510c17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510c19: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00510c1c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510c1e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00510c21: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x510c23u); call_ind(t); }
    /* 00510c23: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00510c26: jmp 0x510c2f */ goto L_00510c2f;
L_00510c28:; BB(0x00510c28);
    /* 00510c28: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00510c2f:; BB(0x00510c2f);
    /* 00510c2f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510c32: cmp dword ptr [ecx + 0xc4], 0 */ {  u32 a = R32((u32)(r_ecx+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510c39: je 0x510c6b */ if (fZ) goto L_00510c6b;
L_00510c3b:; BB(0x00510c3b);
    /* 00510c3b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510c3e: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00510c44: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00510c47: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00510c4a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00510c4d: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510c51: je 0x510c64 */ if (fZ) goto L_00510c64;
L_00510c53:; BB(0x00510c53);
    /* 00510c53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510c55: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00510c58: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510c5a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00510c5d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x510c5fu); call_ind(t); }
    /* 00510c5f: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00510c62: jmp 0x510c6b */ goto L_00510c6b;
L_00510c64:; BB(0x00510c64);
    /* 00510c64: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00510c6b:; BB(0x00510c6b);
    /* 00510c6b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510c6e: cmp dword ptr [ecx + 0xc8], 0 */ {  u32 a = R32((u32)(r_ecx+0xc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510c75: je 0x510ca7 */ if (fZ) goto L_00510ca7;
L_00510c77:; BB(0x00510c77);
    /* 00510c77: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510c7a: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00510c80: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00510c83: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00510c86: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00510c89: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510c8d: je 0x510ca0 */ if (fZ) goto L_00510ca0;
L_00510c8f:; BB(0x00510c8f);
    /* 00510c8f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510c91: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510c94: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510c96: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510c99: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x510c9bu); call_ind(t); }
    /* 00510c9b: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00510c9e: jmp 0x510ca7 */ goto L_00510ca7;
L_00510ca0:; BB(0x00510ca0);
    /* 00510ca0: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00510ca7:; BB(0x00510ca7);
    /* 00510ca7: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510caa: cmp dword ptr [ecx + 0xcc], 0 */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510cb1: je 0x510ce3 */ if (fZ) goto L_00510ce3;
L_00510cb3:; BB(0x00510cb3);
    /* 00510cb3: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510cb6: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00510cbc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00510cbf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00510cc2: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00510cc5: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510cc9: je 0x510cdc */ if (fZ) goto L_00510cdc;
L_00510ccb:; BB(0x00510ccb);
    /* 00510ccb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510ccd: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00510cd0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510cd2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00510cd5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x510cd7u); call_ind(t); }
    /* 00510cd7: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00510cda: jmp 0x510ce3 */ goto L_00510ce3;
L_00510cdc:; BB(0x00510cdc);
    /* 00510cdc: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00510ce3:; BB(0x00510ce3);
    /* 00510ce3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510ce6: cmp dword ptr [ecx + 0xd0], 0 */ {  u32 a = R32((u32)(r_ecx+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510ced: je 0x510d1f */ if (fZ) goto L_00510d1f;
L_00510cef:; BB(0x00510cef);
    /* 00510cef: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510cf2: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00510cf8: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00510cfb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00510cfe: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00510d01: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510d05: je 0x510d18 */ if (fZ) goto L_00510d18;
L_00510d07:; BB(0x00510d07);
    /* 00510d07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510d09: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00510d0c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510d0e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00510d11: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x510d13u); call_ind(t); }
    /* 00510d13: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00510d16: jmp 0x510d1f */ goto L_00510d1f;
L_00510d18:; BB(0x00510d18);
    /* 00510d18: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00510d1f:; BB(0x00510d1f);
    /* 00510d1f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510d22: cmp dword ptr [ecx + 0xc0], 0 */ {  u32 a = R32((u32)(r_ecx+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510d29: je 0x510d5b */ if (fZ) goto L_00510d5b;
L_00510d2b:; BB(0x00510d2b);
    /* 00510d2b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510d2e: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00510d34: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00510d37: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00510d3a: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00510d3d: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510d41: je 0x510d54 */ if (fZ) goto L_00510d54;
L_00510d43:; BB(0x00510d43);
    /* 00510d43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510d45: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00510d48: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510d4a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00510d4d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x510d4fu); call_ind(t); }
    /* 00510d4f: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00510d52: jmp 0x510d5b */ goto L_00510d5b;
L_00510d54:; BB(0x00510d54);
    /* 00510d54: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00510d5b:; BB(0x00510d5b);
    /* 00510d5b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00510d5e: call 0x5b6b65 */ r_esp -= 4; W32(r_esp, 0x510d63u); f_005b6b65();
    /* 00510d63: mov esp, ebp */ r_esp = r_ebp;
    /* 00510d65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510d66: ret  */ FN_RET(0x00510b69); r_esp += 4; return;
}

void f_00510d67(void) /* FUN_00510d67 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00510d67);
    /* 00510d67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00510d68: mov ebp, esp */ r_ebp = r_esp;
    /* 00510d6a: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00510d6d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00510d70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510d72: push 0x186ac */ { u32 v = 0x186acu; r_esp -= 4; W32(r_esp, v); }
    /* 00510d77: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510d7a: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x510d7fu); f_005e0461();
    /* 00510d7f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00510d81: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00510d87: call 0x52d504 */ r_esp -= 4; W32(r_esp, 0x510d8cu); f_0052d504();
    /* 00510d8c: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00510d8f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00510d91: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00510d93: and al, 0xce */ {  u32 a = (u8)r_eax; u32 b = 0xceu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00510d95: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00510d98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510d99: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510d9c: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x510da1u); f_005d81dc();
    /* 00510da1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510da3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510da6: call 0x5b6c5e */ r_esp -= 4; W32(r_esp, 0x510dabu); f_005b6c5e();
    /* 00510dab: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510db0: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x510db5u); f_0048ab58();
    /* 00510db5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00510db8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00510dbb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510dbf: je 0x510dd2 */ if (fZ) goto L_00510dd2;
L_00510dc1:; BB(0x00510dc1);
    /* 00510dc1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510dc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510dc5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00510dc8: call 0x512cb8 */ r_esp -= 4; W32(r_esp, 0x510dcdu); f_00512cb8();
    /* 00510dcd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00510dd0: jmp 0x510dd9 */ goto L_00510dd9;
L_00510dd2:; BB(0x00510dd2);
    /* 00510dd2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00510dd9:; BB(0x00510dd9);
    /* 00510dd9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510ddc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00510ddf: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 00510de5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510de8: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00510dee: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510df1: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00510df4: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00510df9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510dfc: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00510e02: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e05: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00510e0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510e0d: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x510e10u); call_ind(t); }
    /* 00510e10: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00510e12: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00510e14: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00510e16: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e19: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00510e1f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e22: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00510e28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510e2a: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x510e2du); call_ind(t); }
    /* 00510e2d: push 0x6924d0 */ { u32 v = 0x6924d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510e32: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e35: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00510e3b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e3e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00510e44: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510e46: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x510e49u); call_ind(t); }
    /* 00510e49: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e4c: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00510e52: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e55: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00510e5b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510e5d: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x510e60u); call_ind(t); }
    /* 00510e60: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00510e62: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00510e64: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e67: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00510e6d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e70: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00510e76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510e78: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x510e7bu); call_ind(t); }
    /* 00510e7b: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00510e7d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e80: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00510e86: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x510e8bu); f_005d65d6();
    /* 00510e8b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e8e: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00510e94: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510e97: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00510e9d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510e9f: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x510ea2u); call_ind(t); }
    /* 00510ea2: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510ea7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x510eacu); f_0048ab58();
    /* 00510eac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00510eaf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00510eb2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510eb6: je 0x510ec9 */ if (fZ) goto L_00510ec9;
L_00510eb8:; BB(0x00510eb8);
    /* 00510eb8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510ebb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510ebc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00510ebf: call 0x512d3f */ r_esp -= 4; W32(r_esp, 0x510ec4u); f_00512d3f();
    /* 00510ec4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00510ec7: jmp 0x510ed0 */ goto L_00510ed0;
L_00510ec9:; BB(0x00510ec9);
    /* 00510ec9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00510ed0:; BB(0x00510ed0);
    /* 00510ed0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510ed3: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00510ed6: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 00510edc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510edf: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00510ee5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510ee8: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00510eeb: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00510ef0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510ef3: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00510ef9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510efc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00510f02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510f04: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x510f07u); call_ind(t); }
    /* 00510f07: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00510f09: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00510f0b: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00510f0d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f10: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00510f16: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f19: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00510f1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510f21: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x510f24u); call_ind(t); }
    /* 00510f24: push 0x6924d8 */ { u32 v = 0x6924d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00510f29: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f2c: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00510f32: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f35: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00510f3b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510f3d: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x510f40u); call_ind(t); }
    /* 00510f40: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f43: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00510f49: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f4c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00510f52: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510f54: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x510f57u); call_ind(t); }
    /* 00510f57: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00510f59: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00510f5b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f5e: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00510f64: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f67: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00510f6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510f6f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x510f72u); call_ind(t); }
    /* 00510f72: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 00510f74: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f77: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00510f7d: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x510f82u); f_005d65d6();
    /* 00510f82: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 00510f84: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f87: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00510f8d: call 0x5d65f9 */ r_esp -= 4; W32(r_esp, 0x510f92u); f_005d65f9();
    /* 00510f92: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f95: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 00510f9b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510f9e: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00510fa4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510fa6: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x510fa9u); call_ind(t); }
    /* 00510fa9: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510fae: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x510fb3u); f_0048ab58();
    /* 00510fb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00510fb6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00510fb9: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510fbd: je 0x510fd0 */ if (fZ) goto L_00510fd0;
L_00510fbf:; BB(0x00510fbf);
    /* 00510fbf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510fc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510fc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510fc6: call 0x512dc6 */ r_esp -= 4; W32(r_esp, 0x510fcbu); f_00512dc6();
    /* 00510fcb: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00510fce: jmp 0x510fd7 */ goto L_00510fd7;
L_00510fd0:; BB(0x00510fd0);
    /* 00510fd0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00510fd7:; BB(0x00510fd7);
    /* 00510fd7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510fda: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00510fdd: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 00510fe3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510fe6: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 00510fec: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510fef: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00510ff2: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00510ff7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510ffa: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00511000: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511003: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00511009: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051100b: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x51100eu); call_ind(t); }
    /* 0051100e: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00511010: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00511012: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00511014: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511017: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0051101d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511020: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00511026: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511028: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x51102bu); call_ind(t); }
    /* 0051102b: push 0x6924e0 */ { u32 v = 0x6924e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511030: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511033: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00511039: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051103c: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00511042: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511044: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x511047u); call_ind(t); }
    /* 00511047: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051104a: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00511050: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511053: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00511059: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051105b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x51105eu); call_ind(t); }
    /* 0051105e: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00511060: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00511062: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511065: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0051106b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051106e: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00511074: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511076: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x511079u); call_ind(t); }
    /* 00511079: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0051107b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051107e: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00511084: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x511089u); f_005d65d6();
    /* 00511089: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051108c: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00511092: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511095: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0051109b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051109d: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5110a0u); call_ind(t); }
    /* 005110a0: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005110a5: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5110aau); f_0048ab58();
    /* 005110aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005110ad: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005110b0: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005110b4: je 0x5110c3 */ if (fZ) goto L_005110c3;
L_005110b6:; BB(0x005110b6);
    /* 005110b6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005110b9: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5110beu); f_005e8590();
    /* 005110be: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005110c1: jmp 0x5110ca */ goto L_005110ca;
L_005110c3:; BB(0x005110c3);
    /* 005110c3: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005110ca:; BB(0x005110ca);
    /* 005110ca: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005110cd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005110d0: mov dword ptr [eax + 0xc4], ecx */ W32((u32)(r_eax+0xc4u), r_ecx);
    /* 005110d6: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 005110d8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005110db: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 005110e1: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5110e6u); f_005e87aa();
    /* 005110e6: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 005110e8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005110eb: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 005110f1: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5110f6u); f_005e8740();
    /* 005110f6: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005110f8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005110fb: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 00511101: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x511106u); f_005e8775();
    /* 00511106: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00511108: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051110b: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 00511111: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x511116u); f_005e8e99();
    /* 00511116: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00511118: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0051111a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051111d: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00511123: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511126: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0051112c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051112e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x511131u); call_ind(t); }
    /* 00511131: push 0x6924e8 */ { u32 v = 0x6924e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00511136: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511139: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0051113f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511142: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00511148: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051114a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x51114du); call_ind(t); }
    /* 0051114d: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00511152: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x511157u); f_0048ab58();
    /* 00511157: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051115a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051115d: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511161: je 0x511170 */ if (fZ) goto L_00511170;
L_00511163:; BB(0x00511163);
    /* 00511163: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00511166: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x51116bu); f_005e8590();
    /* 0051116b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0051116e: jmp 0x511177 */ goto L_00511177;
L_00511170:; BB(0x00511170);
    /* 00511170: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00511177:; BB(0x00511177);
    /* 00511177: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051117a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0051117d: mov dword ptr [eax + 0xc8], ecx */ W32((u32)(r_eax+0xc8u), r_ecx);
    /* 00511183: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00511185: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511188: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 0051118e: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x511193u); f_005e87aa();
    /* 00511193: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00511195: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511198: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 0051119e: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5111a3u); f_005e8740();
    /* 005111a3: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005111a5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005111a8: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 005111ae: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5111b3u); f_005e8775();
    /* 005111b3: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005111b5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005111b8: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 005111be: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5111c3u); f_005e8e99();
    /* 005111c3: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 005111c5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005111c7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005111ca: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 005111d0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005111d3: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005111d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005111db: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5111deu); call_ind(t); }
    /* 005111de: push 0x6924ec */ { u32 v = 0x6924ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005111e3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005111e6: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 005111ec: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005111ef: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005111f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005111f7: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5111fau); call_ind(t); }
    /* 005111fa: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005111ff: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x511204u); f_0048ab58();
    /* 00511204: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511207: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051120a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051120e: je 0x51121d */ if (fZ) goto L_0051121d;
L_00511210:; BB(0x00511210);
    /* 00511210: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00511213: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x511218u); f_005e8590();
    /* 00511218: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0051121b: jmp 0x511224 */ goto L_00511224;
L_0051121d:; BB(0x0051121d);
    /* 0051121d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00511224:; BB(0x00511224);
    /* 00511224: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511227: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051122a: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 00511230: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00511232: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511235: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 0051123b: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x511240u); f_005e87aa();
    /* 00511240: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00511242: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511245: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0051124b: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x511250u); f_005e8740();
    /* 00511250: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00511252: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511255: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 0051125b: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x511260u); f_005e8775();
    /* 00511260: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00511262: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511265: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 0051126b: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x511270u); f_005e8e99();
    /* 00511270: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00511272: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00511274: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511277: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0051127d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511280: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00511286: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511288: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x51128bu); call_ind(t); }
    /* 0051128b: push 0x6924f0 */ { u32 v = 0x6924f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511290: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511293: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00511299: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051129c: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005112a2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005112a4: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5112a7u); call_ind(t); }
    /* 005112a7: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005112a9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5112aeu); f_0048ab58();
    /* 005112ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005112b1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005112b4: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005112b8: je 0x5112c7 */ if (fZ) goto L_005112c7;
L_005112ba:; BB(0x005112ba);
    /* 005112ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005112bd: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5112c2u); f_005e9d30();
    /* 005112c2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005112c5: jmp 0x5112ce */ goto L_005112ce;
L_005112c7:; BB(0x005112c7);
    /* 005112c7: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005112ce:; BB(0x005112ce);
    /* 005112ce: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005112d1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005112d4: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 005112da: push 0xceb */ { u32 v = 0xcebu; r_esp -= 4; W32(r_esp, v); }
    /* 005112df: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005112e2: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 005112e8: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5112edu); f_005ea0c3();
    /* 005112ed: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005112f0: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005112f6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005112f9: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005112ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511301: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x511304u); call_ind(t); }
    /* 00511304: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00511306: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x51130bu); f_0048ab58();
    /* 0051130b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051130e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00511311: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511315: je 0x511324 */ if (fZ) goto L_00511324;
L_00511317:; BB(0x00511317);
    /* 00511317: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051131a: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x51131fu); f_005e9d30();
    /* 0051131f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00511322: jmp 0x51132b */ goto L_0051132b;
L_00511324:; BB(0x00511324);
    /* 00511324: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0051132b:; BB(0x0051132b);
    /* 0051132b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051132e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00511331: mov dword ptr [eax + 0xc0], ecx */ W32((u32)(r_eax+0xc0u), r_ecx);
    /* 00511337: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051133a: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00511340: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511343: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00511346: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511349: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 0051134f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511352: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 00511358: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051135a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x51135du); call_ind(t); }
    /* 0051135d: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 00511362: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511365: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 0051136b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x511370u); f_005ea0c3();
    /* 00511370: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511373: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 00511379: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051137c: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 00511382: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00511384: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x511387u); call_ind(t); }
    /* 00511387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00511389: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051138c: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 00511392: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511393: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511396: call 0x5b7909 */ r_esp -= 4; W32(r_esp, 0x51139bu); f_005b7909();
    /* 0051139b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051139d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005113a0: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 005113a6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005113a9: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005113af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005113b1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5113b4u); call_ind(t); }
    /* 005113b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005113b6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005113b9: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005113bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005113c0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005113c3: call 0x5b7909 */ r_esp -= 4; W32(r_esp, 0x5113c8u); f_005b7909();
    /* 005113c8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005113ca: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005113cd: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 005113d3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005113d6: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 005113dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005113de: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5113e1u); call_ind(t); }
    /* 005113e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005113e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005113e6: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 005113ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005113ed: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005113f0: call 0x5b7955 */ r_esp -= 4; W32(r_esp, 0x5113f5u); f_005b7955();
    /* 005113f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005113f7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005113fa: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00511400: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511401: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511404: call 0x5b7955 */ r_esp -= 4; W32(r_esp, 0x511409u); f_005b7955();
    /* 00511409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051140b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051140e: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00511414: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511415: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511418: call 0x5b7955 */ r_esp -= 4; W32(r_esp, 0x51141du); f_005b7955();
    /* 0051141d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051141f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511422: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00511428: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511429: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051142c: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x511431u); f_005b78bd();
    /* 00511431: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00511433: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511436: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0051143c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051143d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511440: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x511445u); f_005b78bd();
    /* 00511445: mov esp, ebp */ r_esp = r_ebp;
    /* 00511447: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00511448: ret  */ FN_RET(0x00510d67); r_esp += 4; return;
}

void f_00511449(void) /* FUN_00511449 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00511449);
    /* 00511449: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051144a: mov ebp, esp */ r_ebp = r_esp;
    /* 0051144c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051144d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00511450: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511452: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511454: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511456: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511458: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051145b: call 0x511464 */ r_esp -= 4; W32(r_esp, 0x511460u); f_00511464();
    /* 00511460: mov esp, ebp */ r_esp = r_ebp;
    /* 00511462: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00511463: ret  */ FN_RET(0x00511449); r_esp += 4; return;
}

void f_00511464(void) /* FUN_00511464 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00511464);
    /* 00511464: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00511465: mov ebp, esp */ r_ebp = r_esp;
    /* 00511467: sub esp, 0x710 */ {  u32 a = r_esp; u32 b = 0x710u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051146d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051146e: mov dword ptr [ebp - 0x700], ecx */ W32((u32)(r_ebp+0xfffff900u), r_ecx);
    /* 00511474: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 0051147a: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051147d: call 0x599086 */ r_esp -= 4; W32(r_esp, 0x511482u); f_00599086();
    /* 00511482: mov esi, eax */ r_esi = r_eax;
    /* 00511484: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 0051148a: call 0x52dbc4 */ r_esp -= 4; W32(r_esp, 0x51148fu); f_0052dbc4();
    /* 0051148f: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00511492: mov dword ptr [ebp - 0x170], esi */ W32((u32)(r_ebp+0xfffffe90u), r_esi);
    /* 00511498: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 0051149e: call 0x52dca5 */ r_esp -= 4; W32(r_esp, 0x5114a3u); f_0052dca5();
    /* 005114a3: mov esi, eax */ r_esi = r_eax;
    /* 005114a5: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 005114ab: call 0x52dbc4 */ r_esp -= 4; W32(r_esp, 0x5114b0u); f_0052dbc4();
    /* 005114b0: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005114b3: mov dword ptr [ebp - 0x5dc], esi */ W32((u32)(r_ebp+0xfffffa24u), r_esi);
    /* 005114b9: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 005114bf: call 0x52fdf4 */ r_esp -= 4; W32(r_esp, 0x5114c4u); f_0052fdf4();
    /* 005114c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005114c5: mov eax, dword ptr [0x6f9fd4] */ r_eax = R32((u32)(0x6f9fd4u));
    /* 005114ca: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005114cd: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5114d2u); f_005dd560();
    /* 005114d2: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005114d5: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005114d8: call 0x56fd2c */ r_esp -= 4; W32(r_esp, 0x5114ddu); f_0056fd2c();
    /* 005114dd: mov dword ptr [ebp - 0x644], eax */ W32((u32)(r_ebp+0xfffff9bcu), r_eax);
    /* 005114e3: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 005114e9: mov ecx, dword ptr [ecx + 0x104] */ r_ecx = R32((u32)(r_ecx+0x104u));
    /* 005114ef: mov edx, dword ptr [0x6f9fd4] */ r_edx = R32((u32)(0x6f9fd4u));
    /* 005114f5: mov eax, dword ptr [edx + 0x104] */ r_eax = R32((u32)(r_edx+0x104u));
    /* 005114fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005114fd: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x511500u); call_ind(t); }
    /* 00511500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511501: push 0x6924f4 */ { u32 v = 0x6924f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00511506: lea eax, [ebp - 0x16c] */ r_eax = (u32)(r_ebp+0xfffffe94u);
    /* 0051150c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051150d: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x511512u); f_00624050();
    /* 00511512: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511515: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00511517: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 0051151d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051151e: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511524: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x511529u); f_005d825e();
    /* 00511529: mov edx, dword ptr [ebp - 0x644] */ r_edx = R32((u32)(r_ebp+0xfffff9bcu));
    /* 0051152f: cmp edx, dword ptr [ebp - 0x170] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffe90u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511535: jge 0x511543 */ if ((fS==fO)) goto L_00511543;
L_00511537:; BB(0x00511537);
    /* 00511537: mov eax, dword ptr [ebp - 0x644] */ r_eax = R32((u32)(r_ebp+0xfffff9bcu));
    /* 0051153d: mov dword ptr [ebp - 0x170], eax */ W32((u32)(r_ebp+0xfffffe90u), r_eax);
L_00511543:; BB(0x00511543);
    /* 00511543: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00511545: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 0051154b: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x511550u); f_0060e7bd();
    /* 00511550: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00511552: cmp dword ptr [ebp - 0x170], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511559: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0051155c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051155d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051155f: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00511565: call 0x52abf2 */ r_esp -= 4; W32(r_esp, 0x51156au); f_0052abf2();
    /* 0051156a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051156c: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511572: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x511577u); f_005b79b9();
    /* 00511577: push 0x692504 */ { u32 v = 0x692504u; r_esp -= 4; W32(r_esp, v); }
    /* 0051157c: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511582: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00511588: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 0051158e: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00511594: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00511596: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x511599u); call_ind(t); }
    /* 00511599: push 0x69250c */ { u32 v = 0x69250cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051159e: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 005115a4: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 005115aa: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 005115b0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005115b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005115b8: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5115bbu); call_ind(t); }
    /* 005115bb: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 005115c1: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005115c7: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 005115cd: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005115d3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005115d5: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5115d8u); call_ind(t); }
    /* 005115d8: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 005115de: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 005115e4: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 005115ea: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005115f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005115f2: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5115f5u); call_ind(t); }
    /* 005115f5: cmp dword ptr [ebp - 0x170], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xfffffe90u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005115ff: jle 0x511652 */ if ((fZ||fS!=fO)) goto L_00511652;
L_00511601:; BB(0x00511601);
    /* 00511601: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 00511607: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00511608: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0051160d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0051160d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0051160d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0051160f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511610: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 00511616: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00511617: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0051161c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0051161c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0051161c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0051161e: mov eax, edx */ r_eax = r_edx;
    /* 00511620: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00511621: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00511626: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00511626, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00511626, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00511628: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511629: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 0051162f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00511630: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 00511635: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00511635, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00511635, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00511637: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511638: push 0x692514 */ { u32 v = 0x692514u; r_esp -= 4; W32(r_esp, v); }
    /* 0051163d: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 00511643: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511644: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x51164au); call_ind(t); }
    /* 0051164a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051164d: jmp 0x51170b */ goto L_0051170b;
L_00511652:; BB(0x00511652);
    /* 00511652: cmp dword ptr [ebp - 0x170], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0xfffffe90u)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051165c: jle 0x511693 */ if ((fZ||fS!=fO)) goto L_00511693;
L_0051165e:; BB(0x0051165e);
    /* 0051165e: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 00511664: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00511665: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0051166a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0051166a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0051166a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0051166c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051166d: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 00511673: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00511674: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00511679: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00511679, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00511679, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0051167b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051167c: push 0x692524 */ { u32 v = 0x692524u; r_esp -= 4; W32(r_esp, v); }
    /* 00511681: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 00511687: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511688: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x51168eu); call_ind(t); }
    /* 0051168e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511691: jmp 0x51170b */ goto L_0051170b;
L_00511693:; BB(0x00511693);
    /* 00511693: cmp dword ptr [ebp - 0x170], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051169a: jle 0x5116ba */ if ((fZ||fS!=fO)) goto L_005116ba;
L_0051169c:; BB(0x0051169c);
    /* 0051169c: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 005116a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005116a3: push 0x692530 */ { u32 v = 0x692530u; r_esp -= 4; W32(r_esp, v); }
    /* 005116a8: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 005116ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005116af: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x5116b5u); call_ind(t); }
    /* 005116b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005116b8: jmp 0x51170b */ goto L_0051170b;
L_005116ba:; BB(0x005116ba);
    /* 005116ba: push 0x692534 */ { u32 v = 0x692534u; r_esp -= 4; W32(r_esp, v); }
    /* 005116bf: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 005116c5: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 005116cb: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 005116d1: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005116d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005116d9: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x5116dcu); call_ind(t); }
    /* 005116dc: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005116e0: jne 0x511704 */ if (!fZ) goto L_00511704;
L_005116e2:; BB(0x005116e2);
    /* 005116e2: push 0x69253c */ { u32 v = 0x69253cu; r_esp -= 4; W32(r_esp, v); }
    /* 005116e7: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 005116ed: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 005116f3: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 005116f9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005116ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511701: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x511704u); call_ind(t); }
L_00511704:; BB(0x00511704);
    /* 00511704: mov byte ptr [ebp - 0x16c], 0 */ W8((u32)(r_ebp+0xfffffe94u), 0x0u);
L_0051170b:; BB(0x0051170b);
    /* 0051170b: lea eax, [ebp - 0x16c] */ r_eax = (u32)(r_ebp+0xfffffe94u);
    /* 00511711: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511712: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511718: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 0051171e: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511724: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0051172a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051172c: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x51172fu); call_ind(t); }
    /* 0051172f: cmp dword ptr [ebp - 0x644], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xfffff9bcu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511739: jle 0x511789 */ if ((fZ||fS!=fO)) goto L_00511789;
L_0051173b:; BB(0x0051173b);
    /* 0051173b: mov eax, dword ptr [ebp - 0x644] */ r_eax = R32((u32)(r_ebp+0xfffff9bcu));
    /* 00511741: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00511742: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00511747: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00511747, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00511747, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00511749: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051174a: mov eax, dword ptr [ebp - 0x644] */ r_eax = R32((u32)(r_ebp+0xfffff9bcu));
    /* 00511750: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00511751: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 00511756: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00511756, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00511756, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00511758: mov eax, edx */ r_eax = r_edx;
    /* 0051175a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0051175b: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00511760: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00511760, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00511760, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00511762: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511763: mov eax, dword ptr [ebp - 0x644] */ r_eax = R32((u32)(r_ebp+0xfffff9bcu));
    /* 00511769: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0051176a: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0051176f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0051176f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0051176f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00511771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511772: push 0x692544 */ { u32 v = 0x692544u; r_esp -= 4; W32(r_esp, v); }
    /* 00511777: lea edx, [ebp - 0x640] */ r_edx = (u32)(r_ebp+0xfffff9c0u);
    /* 0051177d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051177e: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x511784u); call_ind(t); }
    /* 00511784: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511787: jmp 0x5117f8 */ goto L_005117f8;
L_00511789:; BB(0x00511789);
    /* 00511789: cmp dword ptr [ebp - 0x644], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0xfffff9bcu)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511793: jle 0x5117ca */ if ((fZ||fS!=fO)) goto L_005117ca;
L_00511795:; BB(0x00511795);
    /* 00511795: mov eax, dword ptr [ebp - 0x644] */ r_eax = R32((u32)(r_ebp+0xfffff9bcu));
    /* 0051179b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0051179c: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 005117a1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005117a1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005117a1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005117a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005117a4: mov eax, dword ptr [ebp - 0x644] */ r_eax = R32((u32)(r_ebp+0xfffff9bcu));
    /* 005117aa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005117ab: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 005117b0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005117b0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005117b0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005117b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005117b3: push 0x692554 */ { u32 v = 0x692554u; r_esp -= 4; W32(r_esp, v); }
    /* 005117b8: lea edx, [ebp - 0x640] */ r_edx = (u32)(r_ebp+0xfffff9c0u);
    /* 005117be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005117bf: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x5117c5u); call_ind(t); }
    /* 005117c5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005117c8: jmp 0x5117f8 */ goto L_005117f8;
L_005117ca:; BB(0x005117ca);
    /* 005117ca: cmp dword ptr [ebp - 0x644], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff9bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005117d1: jle 0x5117f1 */ if ((fZ||fS!=fO)) goto L_005117f1;
L_005117d3:; BB(0x005117d3);
    /* 005117d3: mov eax, dword ptr [ebp - 0x644] */ r_eax = R32((u32)(r_ebp+0xfffff9bcu));
    /* 005117d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005117da: push 0x692560 */ { u32 v = 0x692560u; r_esp -= 4; W32(r_esp, v); }
    /* 005117df: lea ecx, [ebp - 0x640] */ r_ecx = (u32)(r_ebp+0xfffff9c0u);
    /* 005117e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005117e6: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x5117ecu); call_ind(t); }
    /* 005117ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005117ef: jmp 0x5117f8 */ goto L_005117f8;
L_005117f1:; BB(0x005117f1);
    /* 005117f1: mov byte ptr [ebp - 0x640], 0 */ W8((u32)(r_ebp+0xfffff9c0u), 0x0u);
L_005117f8:; BB(0x005117f8);
    /* 005117f8: lea edx, [ebp - 0x640] */ r_edx = (u32)(r_ebp+0xfffff9c0u);
    /* 005117fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005117ff: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511805: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 0051180b: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511811: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00511817: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511819: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x51181cu); call_ind(t); }
    /* 0051181c: cmp dword ptr [ebp - 0x170], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511823: jne 0x511842 */ if (!fZ) goto L_00511842;
L_00511825:; BB(0x00511825);
    /* 00511825: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511829: jne 0x511842 */ if (!fZ) goto L_00511842;
L_0051182b:; BB(0x0051182b);
    /* 0051182b: push 0x6f9b78 */ { u32 v = 0x6f9b78u; r_esp -= 4; W32(r_esp, v); }
    /* 00511830: lea eax, [ebp - 0x5d8] */ r_eax = (u32)(r_ebp+0xfffffa28u);
    /* 00511836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511837: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x51183du); call_ind(t); }
    /* 0051183d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511840: jmp 0x511857 */ goto L_00511857;
L_00511842:; BB(0x00511842);
    /* 00511842: push 0x6f9b7c */ { u32 v = 0x6f9b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00511847: lea ecx, [ebp - 0x5d8] */ r_ecx = (u32)(r_ebp+0xfffffa28u);
    /* 0051184d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051184e: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x511854u); call_ind(t); }
    /* 00511854: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511857:; BB(0x00511857);
    /* 00511857: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051185b: jle 0x51192d */ if ((fZ||fS!=fO)) goto L_0051192d;
L_00511861:; BB(0x00511861);
    /* 00511861: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00511867: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051186a: call 0x599023 */ r_esp -= 4; W32(r_esp, 0x51186fu); f_00599023();
    /* 0051186f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511871: jne 0x511880 */ if (!fZ) goto L_00511880;
L_00511873:; BB(0x00511873);
    /* 00511873: cmp dword ptr [ebp - 0x170], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051187a: jne 0x51192d */ if (!fZ) goto L_0051192d;
L_00511880:; BB(0x00511880);
    /* 00511880: cmp dword ptr [ebp + 8], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511887: jle 0x5118d2 */ if ((fZ||fS!=fO)) goto L_005118d2;
L_00511889:; BB(0x00511889);
    /* 00511889: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051188c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0051188d: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00511892: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00511892, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00511892, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00511894: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511895: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00511898: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00511899: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0051189e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0051189e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0051189e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005118a0: mov eax, edx */ r_eax = r_edx;
    /* 005118a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005118a3: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 005118a8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005118a8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005118a8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005118aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005118ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005118ae: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005118af: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 005118b4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005118b4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005118b4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005118b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005118b7: lea edx, [ebp - 0x5d8] */ r_edx = (u32)(r_ebp+0xfffffa28u);
    /* 005118bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005118be: push 0x692564 */ { u32 v = 0x692564u; r_esp -= 4; W32(r_esp, v); }
    /* 005118c3: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005118c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005118c7: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x5118cdu); call_ind(t); }
    /* 005118cd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005118d0: jmp 0x51192b */ goto L_0051192b;
L_005118d2:; BB(0x005118d2);
    /* 005118d2: cmp dword ptr [ebp + 8], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005118d9: jle 0x51190e */ if ((fZ||fS!=fO)) goto L_0051190e;
L_005118db:; BB(0x005118db);
    /* 005118db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005118de: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005118df: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 005118e4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005118e4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005118e4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005118e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005118e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005118ea: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005118eb: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 005118f0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005118f0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005118f0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005118f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005118f3: lea edx, [ebp - 0x5d8] */ r_edx = (u32)(r_ebp+0xfffffa28u);
    /* 005118f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005118fa: push 0x692574 */ { u32 v = 0x692574u; r_esp -= 4; W32(r_esp, v); }
    /* 005118ff: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00511902: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511903: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x511909u); call_ind(t); }
    /* 00511909: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051190c: jmp 0x51192b */ goto L_0051192b;
L_0051190e:; BB(0x0051190e);
    /* 0051190e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00511911: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511912: lea edx, [ebp - 0x5d8] */ r_edx = (u32)(r_ebp+0xfffffa28u);
    /* 00511918: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511919: push 0x692580 */ { u32 v = 0x692580u; r_esp -= 4; W32(r_esp, v); }
    /* 0051191e: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00511921: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511922: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x511928u); call_ind(t); }
    /* 00511928: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051192b:; BB(0x0051192b);
    /* 0051192b: jmp 0x511941 */ goto L_00511941;
L_0051192d:; BB(0x0051192d);
    /* 0051192d: lea ecx, [ebp - 0x5d8] */ r_ecx = (u32)(r_ebp+0xfffffa28u);
    /* 00511933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511934: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00511937: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511938: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x51193eu); call_ind(t); }
    /* 0051193e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511941:; BB(0x00511941);
    /* 00511941: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511945: jne 0x51199e */ if (!fZ) goto L_0051199e;
L_00511947:; BB(0x00511947);
    /* 00511947: mov eax, dword ptr [ebp - 0x644] */ r_eax = R32((u32)(r_ebp+0xfffff9bcu));
    /* 0051194d: sub eax, dword ptr [ebp - 0x170] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe90u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00511953: cmp eax, dword ptr [ebp - 0x5dc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffa24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511959: jge 0x51199e */ if ((fS==fO)) goto L_0051199e;
L_0051195b:; BB(0x0051195b);
    /* 0051195b: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0051195e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051195f: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511965: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 0051196b: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511971: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00511977: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00511979: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x51197cu); call_ind(t); }
    /* 0051197c: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511982: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00511988: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 0051198e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00511994: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511996: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x511999u); call_ind(t); }
    /* 00511999: jmp 0x511ad3 */ goto L_00511ad3;
L_0051199e:; BB(0x0051199e);
    /* 0051199e: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 005119a4: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005119a7: call 0x598fc9 */ r_esp -= 4; W32(r_esp, 0x5119acu); f_00598fc9();
    /* 005119ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005119ae: je 0x511a3d */ if (fZ) goto L_00511a3d;
L_005119b4:; BB(0x005119b4);
    /* 005119b4: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005119b8: je 0x5119fa */ if (fZ) goto L_005119fa;
L_005119ba:; BB(0x005119ba);
    /* 005119ba: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005119bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005119be: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 005119c4: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 005119ca: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 005119d0: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005119d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005119d8: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5119dbu); call_ind(t); }
    /* 005119db: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 005119e1: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 005119e7: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 005119ed: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005119f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005119f5: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5119f8u); call_ind(t); }
    /* 005119f8: jmp 0x511a38 */ goto L_00511a38;
L_005119fa:; BB(0x005119fa);
    /* 005119fa: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005119fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005119fe: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511a04: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00511a0a: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511a10: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00511a16: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511a18: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x511a1bu); call_ind(t); }
    /* 00511a1b: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511a21: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00511a27: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511a2d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00511a33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511a35: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x511a38u); call_ind(t); }
L_00511a38:; BB(0x00511a38);
    /* 00511a38: jmp 0x511ad3 */ goto L_00511ad3;
L_00511a3d:; BB(0x00511a3d);
    /* 00511a3d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511a41: je 0x511a95 */ if (fZ) goto L_00511a95;
L_00511a43:; BB(0x00511a43);
    /* 00511a43: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00511a49: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511a4c: call 0x599023 */ r_esp -= 4; W32(r_esp, 0x511a51u); f_00599023();
    /* 00511a51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511a53: je 0x511a95 */ if (fZ) goto L_00511a95;
L_00511a55:; BB(0x00511a55);
    /* 00511a55: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00511a58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511a59: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511a5f: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00511a65: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511a6b: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00511a71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511a73: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x511a76u); call_ind(t); }
    /* 00511a76: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511a7c: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00511a82: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511a88: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00511a8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511a90: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x511a93u); call_ind(t); }
    /* 00511a93: jmp 0x511ad3 */ goto L_00511ad3;
L_00511a95:; BB(0x00511a95);
    /* 00511a95: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00511a98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511a99: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511a9f: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00511aa5: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511aab: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00511ab1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511ab3: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x511ab6u); call_ind(t); }
    /* 00511ab6: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511abc: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00511ac2: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511ac8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00511ace: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511ad0: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x511ad3u); call_ind(t); }
L_00511ad3:; BB(0x00511ad3);
    /* 00511ad3: movsx eax, word ptr [ebp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 00511ad7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511ada: jne 0x511af7 */ if (!fZ) goto L_00511af7;
L_00511adc:; BB(0x00511adc);
    /* 00511adc: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511ae2: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00511ae8: call 0x5d65b7 */ r_esp -= 4; W32(r_esp, 0x511aedu); f_005d65b7();
    /* 00511aed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511aef: jne 0x511af7 */ if (!fZ) goto L_00511af7;
L_00511af1:; BB(0x00511af1);
    /* 00511af1: mov word ptr [ebp + 0x14], 1 */ W16((u32)(r_ebp+0x14u), 0x1u);
L_00511af7:; BB(0x00511af7);
    /* 00511af7: movsx edx, word ptr [ebp + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 00511afb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511afe: jne 0x511b64 */ if (!fZ) goto L_00511b64;
L_00511b00:; BB(0x00511b00);
    /* 00511b00: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511b06: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00511b0c: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511b12: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00511b18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511b1a: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x511b1du); call_ind(t); }
    /* 00511b1d: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00511b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511b21: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511b27: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00511b2d: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511b33: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00511b39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511b3b: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x511b3eu); call_ind(t); }
    /* 00511b3e: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00511b41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511b42: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511b48: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00511b4e: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511b54: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00511b5a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511b5c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x511b5fu); call_ind(t); }
    /* 00511b5f: jmp 0x511c58 */ goto L_00511c58;
L_00511b64:; BB(0x00511b64);
    /* 00511b64: movsx eax, word ptr [ebp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 00511b68: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511b6b: jne 0x511bd1 */ if (!fZ) goto L_00511bd1;
L_00511b6d:; BB(0x00511b6d);
    /* 00511b6d: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511b73: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00511b79: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511b7f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00511b85: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511b87: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x511b8au); call_ind(t); }
    /* 00511b8a: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00511b8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511b8e: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511b94: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00511b9a: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511ba0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00511ba6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511ba8: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x511babu); call_ind(t); }
    /* 00511bab: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00511bae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511baf: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511bb5: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00511bbb: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511bc1: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00511bc7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511bc9: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x511bccu); call_ind(t); }
    /* 00511bcc: jmp 0x511c58 */ goto L_00511c58;
L_00511bd1:; BB(0x00511bd1);
    /* 00511bd1: movsx eax, word ptr [ebp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 00511bd5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511bd8: jne 0x511c3b */ if (!fZ) goto L_00511c3b;
L_00511bda:; BB(0x00511bda);
    /* 00511bda: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511be0: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00511be6: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511bec: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00511bf2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511bf4: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x511bf7u); call_ind(t); }
    /* 00511bf7: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00511bfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511bfb: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511c01: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00511c07: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511c0d: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00511c13: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511c15: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x511c18u); call_ind(t); }
    /* 00511c18: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00511c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511c1c: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511c22: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00511c28: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511c2e: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00511c34: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511c36: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x511c39u); call_ind(t); }
    /* 00511c39: jmp 0x511c58 */ goto L_00511c58;
L_00511c3b:; BB(0x00511c3b);
    /* 00511c3b: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511c41: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00511c47: mov edx, dword ptr [ebp - 0x700] */ r_edx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511c4d: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00511c53: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511c55: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x511c58u); call_ind(t); }
L_00511c58:; BB(0x00511c58);
    /* 00511c58: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511c5e: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x511c63u); f_005e030e();
    /* 00511c63: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511c6a: je 0x511c84 */ if (fZ) goto L_00511c84;
L_00511c6c:; BB(0x00511c6c);
    /* 00511c6c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00511c6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511c70: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00511c72: push 0x385 */ { u32 v = 0x385u; r_esp -= 4; W32(r_esp, v); }
    /* 00511c77: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00511c7c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00511c7f: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x511c84u); f_005e8389();
L_00511c84:; BB(0x00511c84);
    /* 00511c84: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 00511c8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511c8b: mov edx, dword ptr [0x6f9fd4] */ r_edx = R32((u32)(0x6f9fd4u));
    /* 00511c91: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00511c97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511c98: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00511c9e: call 0x460713 */ r_esp -= 4; W32(r_esp, 0x511ca3u); f_00460713();
    /* 00511ca3: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 00511ca9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511caa: push 0x692588 */ { u32 v = 0x692588u; r_esp -= 4; W32(r_esp, v); }
    /* 00511caf: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00511cb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511cb6: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x511cbbu); f_00624050();
    /* 00511cbb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511cbe: lea eax, [ebp - 0x574] */ r_eax = (u32)(r_ebp+0xfffffa8cu);
    /* 00511cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511cc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511cc7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00511cc9: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00511ccf: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x511cd4u); f_0060e8c0();
    /* 00511cd4: push 0x69265c */ { u32 v = 0x69265cu; r_esp -= 4; W32(r_esp, v); }
    /* 00511cd9: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511cdf: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00511ce5: call 0x5d6977 */ r_esp -= 4; W32(r_esp, 0x511ceau); f_005d6977();
    /* 00511cea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511ceb: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x511cf0u); f_006240c0();
    /* 00511cf0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511cf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511cf5: jne 0x511d0d */ if (!fZ) goto L_00511d0d;
L_00511cf7:; BB(0x00511cf7);
    /* 00511cf7: push 0x692664 */ { u32 v = 0x692664u; r_esp -= 4; W32(r_esp, v); }
    /* 00511cfc: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00511d02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511d03: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x511d08u); f_00624510();
    /* 00511d08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511d0b: jmp 0x511d21 */ goto L_00511d21;
L_00511d0d:; BB(0x00511d0d);
    /* 00511d0d: push 0x6926b8 */ { u32 v = 0x6926b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00511d12: lea eax, [ebp - 0x574] */ r_eax = (u32)(r_ebp+0xfffffa8cu);
    /* 00511d18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511d19: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x511d1eu); f_00624510();
    /* 00511d1e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511d21:; BB(0x00511d21);
    /* 00511d21: push 0x692700 */ { u32 v = 0x692700u; r_esp -= 4; W32(r_esp, v); }
    /* 00511d26: mov ecx, dword ptr [ebp - 0x700] */ r_ecx = R32((u32)(r_ebp+0xfffff900u));
    /* 00511d2c: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00511d32: call 0x5d6977 */ r_esp -= 4; W32(r_esp, 0x511d37u); f_005d6977();
    /* 00511d37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511d38: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x511d3du); f_006240c0();
    /* 00511d3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511d40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511d42: jne 0x511d5a */ if (!fZ) goto L_00511d5a;
L_00511d44:; BB(0x00511d44);
    /* 00511d44: push 0x692708 */ { u32 v = 0x692708u; r_esp -= 4; W32(r_esp, v); }
    /* 00511d49: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00511d4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511d50: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x511d55u); f_00624520();
    /* 00511d55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511d58: jmp 0x511d99 */ goto L_00511d99;
L_00511d5a:; BB(0x00511d5a);
    /* 00511d5a: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511d60: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00511d66: call 0x5d65b7 */ r_esp -= 4; W32(r_esp, 0x511d6bu); f_005d65b7();
    /* 00511d6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511d6d: je 0x511d85 */ if (fZ) goto L_00511d85;
L_00511d6f:; BB(0x00511d6f);
    /* 00511d6f: push 0x692764 */ { u32 v = 0x692764u; r_esp -= 4; W32(r_esp, v); }
    /* 00511d74: lea ecx, [ebp - 0x574] */ r_ecx = (u32)(r_ebp+0xfffffa8cu);
    /* 00511d7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511d7b: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x511d80u); f_00624520();
    /* 00511d80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511d83: jmp 0x511d99 */ goto L_00511d99;
L_00511d85:; BB(0x00511d85);
    /* 00511d85: push 0x692804 */ { u32 v = 0x692804u; r_esp -= 4; W32(r_esp, v); }
    /* 00511d8a: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00511d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511d91: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x511d96u); f_00624520();
    /* 00511d96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511d99:; BB(0x00511d99);
    /* 00511d99: push 0x692898 */ { u32 v = 0x692898u; r_esp -= 4; W32(r_esp, v); }
    /* 00511d9e: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00511da4: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00511daa: call 0x5d6977 */ r_esp -= 4; W32(r_esp, 0x511dafu); f_005d6977();
    /* 00511daf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511db0: call 0x6240c0 */ r_esp -= 4; W32(r_esp, 0x511db5u); f_006240c0();
    /* 00511db5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511db8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511dba: jne 0x511dd0 */ if (!fZ) goto L_00511dd0;
L_00511dbc:; BB(0x00511dbc);
    /* 00511dbc: push 0x6928a0 */ { u32 v = 0x6928a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511dc1: lea ecx, [ebp - 0x574] */ r_ecx = (u32)(r_ebp+0xfffffa8cu);
    /* 00511dc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511dc8: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x511dcdu); f_00624520();
    /* 00511dcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511dd0:; BB(0x00511dd0);
    /* 00511dd0: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00511dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511dd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511ddb: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00511de1: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x511de6u); f_0060e8c0();
    /* 00511de6: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00511dec: call 0x52d504 */ r_esp -= 4; W32(r_esp, 0x511df1u); f_0052d504();
    /* 00511df1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511df3: jne 0x5125bc */ if (!fZ) goto L_005125bc;
L_00511df9:; BB(0x00511df9);
    /* 00511df9: cmp dword ptr [0x6f9f64], 0 */ {  u32 a = R32((u32)(0x6f9f64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511e00: jne 0x51216f */ if (!fZ) goto L_0051216f;
L_00511e06:; BB(0x00511e06);
    /* 00511e06: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00511e0c: call 0x52d531 */ r_esp -= 4; W32(r_esp, 0x511e11u); f_0052d531();
    /* 00511e11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511e13: jne 0x512156 */ if (!fZ) goto L_00512156;
L_00511e19:; BB(0x00511e19);
    /* 00511e19: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00511e1f: call 0x52fdf4 */ r_esp -= 4; W32(r_esp, 0x511e24u); f_0052fdf4();
    /* 00511e24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511e25: mov eax, dword ptr [0x6f9fd4] */ r_eax = R32((u32)(0x6f9fd4u));
    /* 00511e2a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00511e2d: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x511e32u); f_005dd560();
    /* 00511e32: mov dword ptr [ebp - 0x648], eax */ W32((u32)(r_ebp+0xfffff9b8u), r_eax);
    /* 00511e38: lea ecx, [ebp - 0x650] */ r_ecx = (u32)(r_ebp+0xfffff9b0u);
    /* 00511e3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511e3f: mov ecx, dword ptr [ebp - 0x648] */ r_ecx = R32((u32)(r_ebp+0xfffff9b8u));
    /* 00511e45: call 0x570ac7 */ r_esp -= 4; W32(r_esp, 0x511e4au); f_00570ac7();
    /* 00511e4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511e4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511e4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511e50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00511e52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00511e54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00511e56: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00511e58: lea edx, [ebp - 0x654] */ r_edx = (u32)(r_ebp+0xfffff9acu);
    /* 00511e5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511e5f: lea ecx, [ebp - 0x650] */ r_ecx = (u32)(r_ebp+0xfffff9b0u);
    /* 00511e65: call 0x5326cf */ r_esp -= 4; W32(r_esp, 0x511e6au); f_005326cf();
    /* 00511e6a: mov eax, dword ptr [0x6fa084] */ r_eax = R32((u32)(0x6fa084u));
    /* 00511e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511e70: lea ecx, [ebp - 0x678] */ r_ecx = (u32)(r_ebp+0xfffff988u);
    /* 00511e76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511e77: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00511e7d: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x511e82u); f_0054b5cb();
    /* 00511e82: mov ecx, eax */ r_ecx = r_eax;
    /* 00511e84: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x511e89u); f_0054b351();
    /* 00511e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511e8b: jne 0x511f4c */ if (!fZ) goto L_00511f4c;
L_00511e91:; BB(0x00511e91);
    /* 00511e91: mov edx, dword ptr [0x6fa024] */ r_edx = R32((u32)(0x6fa024u));
    /* 00511e97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511e98: lea eax, [ebp - 0x67c] */ r_eax = (u32)(r_ebp+0xfffff984u);
    /* 00511e9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511e9f: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00511ea5: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x511eaau); f_0054b5cb();
    /* 00511eaa: mov ecx, eax */ r_ecx = r_eax;
    /* 00511eac: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x511eb1u); f_0054b351();
    /* 00511eb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511eb3: jne 0x511f4c */ if (!fZ) goto L_00511f4c;
L_00511eb9:; BB(0x00511eb9);
    /* 00511eb9: mov ecx, dword ptr [0x6fa030] */ r_ecx = R32((u32)(0x6fa030u));
    /* 00511ebf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511ec0: lea edx, [ebp - 0x680] */ r_edx = (u32)(r_ebp+0xfffff980u);
    /* 00511ec6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511ec7: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00511ecd: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x511ed2u); f_0054b5cb();
    /* 00511ed2: mov ecx, eax */ r_ecx = r_eax;
    /* 00511ed4: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x511ed9u); f_0054b351();
    /* 00511ed9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511edb: jne 0x511f4c */ if (!fZ) goto L_00511f4c;
L_00511edd:; BB(0x00511edd);
    /* 00511edd: mov eax, dword ptr [0x6fa050] */ r_eax = R32((u32)(0x6fa050u));
    /* 00511ee2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511ee3: lea ecx, [ebp - 0x684] */ r_ecx = (u32)(r_ebp+0xfffff97cu);
    /* 00511ee9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511eea: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00511ef0: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x511ef5u); f_0054b5cb();
    /* 00511ef5: mov ecx, eax */ r_ecx = r_eax;
    /* 00511ef7: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x511efcu); f_0054b351();
    /* 00511efc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511efe: jne 0x511f4c */ if (!fZ) goto L_00511f4c;
L_00511f00:; BB(0x00511f00);
    /* 00511f00: mov edx, dword ptr [0x6fa0f8] */ r_edx = R32((u32)(0x6fa0f8u));
    /* 00511f06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511f07: lea eax, [ebp - 0x688] */ r_eax = (u32)(r_ebp+0xfffff978u);
    /* 00511f0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511f0e: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00511f14: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x511f19u); f_0054b5cb();
    /* 00511f19: mov ecx, eax */ r_ecx = r_eax;
    /* 00511f1b: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x511f20u); f_0054b351();
    /* 00511f20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511f22: jne 0x511f4c */ if (!fZ) goto L_00511f4c;
L_00511f24:; BB(0x00511f24);
    /* 00511f24: mov ecx, dword ptr [0x6fa058] */ r_ecx = R32((u32)(0x6fa058u));
    /* 00511f2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511f2b: lea edx, [ebp - 0x68c] */ r_edx = (u32)(r_ebp+0xfffff974u);
    /* 00511f31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511f32: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00511f38: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x511f3du); f_0054b5cb();
    /* 00511f3d: mov ecx, eax */ r_ecx = r_eax;
    /* 00511f3f: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x511f44u); f_0054b351();
    /* 00511f44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511f46: je 0x5120b6 */ if (fZ) goto L_005120b6;
L_00511f4c:; BB(0x00511f4c);
    /* 00511f4c: mov eax, dword ptr [0x6fa084] */ r_eax = R32((u32)(0x6fa084u));
    /* 00511f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511f52: lea ecx, [ebp - 0x690] */ r_ecx = (u32)(r_ebp+0xfffff970u);
    /* 00511f58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511f59: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00511f5f: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x511f64u); f_0054b5cb();
    /* 00511f64: mov ecx, eax */ r_ecx = r_eax;
    /* 00511f66: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x511f6bu); f_0054b351();
    /* 00511f6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511f6d: je 0x511f83 */ if (fZ) goto L_00511f83;
L_00511f6f:; BB(0x00511f6f);
    /* 00511f6f: push 0x6928f0 */ { u32 v = 0x6928f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511f74: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 00511f7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511f7b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x511f80u); f_00624510();
    /* 00511f80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511f83:; BB(0x00511f83);
    /* 00511f83: mov eax, dword ptr [0x6fa024] */ r_eax = R32((u32)(0x6fa024u));
    /* 00511f88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511f89: lea ecx, [ebp - 0x694] */ r_ecx = (u32)(r_ebp+0xfffff96cu);
    /* 00511f8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511f90: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00511f96: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x511f9bu); f_0054b5cb();
    /* 00511f9b: mov ecx, eax */ r_ecx = r_eax;
    /* 00511f9d: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x511fa2u); f_0054b351();
    /* 00511fa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511fa4: je 0x511fba */ if (fZ) goto L_00511fba;
L_00511fa6:; BB(0x00511fa6);
    /* 00511fa6: push 0x692904 */ { u32 v = 0x692904u; r_esp -= 4; W32(r_esp, v); }
    /* 00511fab: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 00511fb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511fb2: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x511fb7u); f_00624510();
    /* 00511fb7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511fba:; BB(0x00511fba);
    /* 00511fba: mov eax, dword ptr [0x6fa030] */ r_eax = R32((u32)(0x6fa030u));
    /* 00511fbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511fc0: lea ecx, [ebp - 0x698] */ r_ecx = (u32)(r_ebp+0xfffff968u);
    /* 00511fc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511fc7: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00511fcd: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x511fd2u); f_0054b5cb();
    /* 00511fd2: mov ecx, eax */ r_ecx = r_eax;
    /* 00511fd4: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x511fd9u); f_0054b351();
    /* 00511fd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511fdb: je 0x511ff1 */ if (fZ) goto L_00511ff1;
L_00511fdd:; BB(0x00511fdd);
    /* 00511fdd: push 0x692914 */ { u32 v = 0x692914u; r_esp -= 4; W32(r_esp, v); }
    /* 00511fe2: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 00511fe8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511fe9: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x511feeu); f_00624510();
    /* 00511fee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511ff1:; BB(0x00511ff1);
    /* 00511ff1: mov eax, dword ptr [0x6fa050] */ r_eax = R32((u32)(0x6fa050u));
    /* 00511ff6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511ff7: lea ecx, [ebp - 0x69c] */ r_ecx = (u32)(r_ebp+0xfffff964u);
    /* 00511ffd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511ffe: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00512004: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x512009u); f_0054b5cb();
    /* 00512009: mov ecx, eax */ r_ecx = r_eax;
    /* 0051200b: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x512010u); f_0054b351();
    /* 00512010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512012: je 0x512028 */ if (fZ) goto L_00512028;
L_00512014:; BB(0x00512014);
    /* 00512014: push 0x69291c */ { u32 v = 0x69291cu; r_esp -= 4; W32(r_esp, v); }
    /* 00512019: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 0051201f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512020: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x512025u); f_00624510();
    /* 00512025: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512028:; BB(0x00512028);
    /* 00512028: mov eax, dword ptr [0x6fa0f8] */ r_eax = R32((u32)(0x6fa0f8u));
    /* 0051202d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051202e: lea ecx, [ebp - 0x6a0] */ r_ecx = (u32)(r_ebp+0xfffff960u);
    /* 00512034: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512035: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 0051203b: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x512040u); f_0054b5cb();
    /* 00512040: mov ecx, eax */ r_ecx = r_eax;
    /* 00512042: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x512047u); f_0054b351();
    /* 00512047: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512049: je 0x51205f */ if (fZ) goto L_0051205f;
L_0051204b:; BB(0x0051204b);
    /* 0051204b: push 0x692928 */ { u32 v = 0x692928u; r_esp -= 4; W32(r_esp, v); }
    /* 00512050: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 00512056: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512057: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x51205cu); f_00624510();
    /* 0051205c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051205f:; BB(0x0051205f);
    /* 0051205f: mov eax, dword ptr [0x6fa058] */ r_eax = R32((u32)(0x6fa058u));
    /* 00512064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512065: lea ecx, [ebp - 0x6a4] */ r_ecx = (u32)(r_ebp+0xfffff95cu);
    /* 0051206b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051206c: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00512072: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x512077u); f_0054b5cb();
    /* 00512077: mov ecx, eax */ r_ecx = r_eax;
    /* 00512079: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x51207eu); f_0054b351();
    /* 0051207e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512080: je 0x512096 */ if (fZ) goto L_00512096;
L_00512082:; BB(0x00512082);
    /* 00512082: push 0x692938 */ { u32 v = 0x692938u; r_esp -= 4; W32(r_esp, v); }
    /* 00512087: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 0051208d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051208e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x512093u); f_00624510();
    /* 00512093: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512096:; BB(0x00512096);
    /* 00512096: lea eax, [ebp - 0x16c] */ r_eax = (u32)(r_ebp+0xfffffe94u);
    /* 0051209c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051209d: push 0x692948 */ { u32 v = 0x692948u; r_esp -= 4; W32(r_esp, v); }
    /* 005120a2: lea ecx, [ebp - 0x574] */ r_ecx = (u32)(r_ebp+0xfffffa8cu);
    /* 005120a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005120a9: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5120aeu); f_00624050();
    /* 005120ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005120b1: jmp 0x51213e */ goto L_0051213e;
L_005120b6:; BB(0x005120b6);
    /* 005120b6: mov edx, dword ptr [0x6fa0c4] */ r_edx = R32((u32)(0x6fa0c4u));
    /* 005120bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005120bd: lea eax, [ebp - 0x6a8] */ r_eax = (u32)(r_ebp+0xfffff958u);
    /* 005120c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005120c4: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 005120ca: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x5120cfu); f_0054b5cb();
    /* 005120cf: mov ecx, eax */ r_ecx = r_eax;
    /* 005120d1: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x5120d6u); f_0054b351();
    /* 005120d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005120d8: je 0x5120f0 */ if (fZ) goto L_005120f0;
L_005120da:; BB(0x005120da);
    /* 005120da: push 0x692a40 */ { u32 v = 0x692a40u; r_esp -= 4; W32(r_esp, v); }
    /* 005120df: lea ecx, [ebp - 0x574] */ r_ecx = (u32)(r_ebp+0xfffffa8cu);
    /* 005120e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005120e6: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5120ebu); f_00624510();
    /* 005120eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005120ee: jmp 0x51213e */ goto L_0051213e;
L_005120f0:; BB(0x005120f0);
    /* 005120f0: mov edx, dword ptr [0x6fa0a4] */ r_edx = R32((u32)(0x6fa0a4u));
    /* 005120f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005120f7: lea eax, [ebp - 0x6ac] */ r_eax = (u32)(r_ebp+0xfffff954u);
    /* 005120fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005120fe: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00512104: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x512109u); f_0054b5cb();
    /* 00512109: mov ecx, eax */ r_ecx = r_eax;
    /* 0051210b: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x512110u); f_0054b351();
    /* 00512110: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512112: je 0x51212a */ if (fZ) goto L_0051212a;
L_00512114:; BB(0x00512114);
    /* 00512114: push 0x692ac4 */ { u32 v = 0x692ac4u; r_esp -= 4; W32(r_esp, v); }
    /* 00512119: lea ecx, [ebp - 0x574] */ r_ecx = (u32)(r_ebp+0xfffffa8cu);
    /* 0051211f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512120: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x512125u); f_00624510();
    /* 00512125: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512128: jmp 0x51213e */ goto L_0051213e;
L_0051212a:; BB(0x0051212a);
    /* 0051212a: push 0x692b6c */ { u32 v = 0x692b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051212f: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00512135: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512136: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x51213bu); f_00624510();
    /* 0051213b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051213e:; BB(0x0051213e);
    /* 0051213e: lea ecx, [ebp - 0x654] */ r_ecx = (u32)(r_ebp+0xfffff9acu);
    /* 00512144: call 0x54b569 */ r_esp -= 4; W32(r_esp, 0x512149u); f_0054b569();
    /* 00512149: lea ecx, [ebp - 0x650] */ r_ecx = (u32)(r_ebp+0xfffff9b0u);
    /* 0051214f: call 0x5314b1 */ r_esp -= 4; W32(r_esp, 0x512154u); f_005314b1();
    /* 00512154: jmp 0x51216a */ goto L_0051216a;
L_00512156:; BB(0x00512156);
    /* 00512156: push 0x692d44 */ { u32 v = 0x692d44u; r_esp -= 4; W32(r_esp, v); }
    /* 0051215b: lea eax, [ebp - 0x574] */ r_eax = (u32)(r_ebp+0xfffffa8cu);
    /* 00512161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512162: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x512167u); f_00624510();
    /* 00512167: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051216a:; BB(0x0051216a);
    /* 0051216a: jmp 0x5125a6 */ goto L_005125a6;
L_0051216f:; BB(0x0051216f);
    /* 0051216f: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00512175: call 0x52d531 */ r_esp -= 4; W32(r_esp, 0x51217au); f_0052d531();
    /* 0051217a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051217c: jne 0x5123a9 */ if (!fZ) goto L_005123a9;
L_00512182:; BB(0x00512182);
    /* 00512182: push 0x692e7c */ { u32 v = 0x692e7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00512187: lea ecx, [ebp - 0x574] */ r_ecx = (u32)(r_ebp+0xfffffa8cu);
    /* 0051218d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051218e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x512193u); f_00624510();
    /* 00512193: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512196: mov word ptr [ebp - 0x174], 0 */ W16((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 0051219f: jmp 0x5121b3 */ goto L_005121b3;
L_005121a1:; BB(0x005121a1);
    /* 005121a1: mov dx, word ptr [ebp - 0x174] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe8cu))) & 0xffffu);
    /* 005121a8: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005121ac: mov word ptr [ebp - 0x174], dx */ W16((u32)(r_ebp+0xfffffe8cu), (u16)r_edx);
L_005121b3:; BB(0x005121b3);
    /* 005121b3: movsx eax, word ptr [ebp - 0x174] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe8cu));
    /* 005121ba: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005121bd: jge 0x5123a4 */ if ((fS==fO)) goto L_005123a4;
L_005121c3:; BB(0x005121c3);
    /* 005121c3: movsx ecx, word ptr [ebp - 0x174] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe8cu));
    /* 005121ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005121cb: mov edx, dword ptr [0x6f9fd4] */ r_edx = R32((u32)(0x6f9fd4u));
    /* 005121d1: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005121d4: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5121d9u); f_005dd560();
    /* 005121d9: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005121dc: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005121df: call 0x56fefa */ r_esp -= 4; W32(r_esp, 0x5121e4u); f_0056fefa();
    /* 005121e4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005121e7: je 0x51239f */ if (fZ) goto L_0051239f;
L_005121ed:; BB(0x005121ed);
    /* 005121ed: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005121f0: call 0x56ff27 */ r_esp -= 4; W32(r_esp, 0x5121f5u); f_0056ff27();
    /* 005121f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005121f8: je 0x51220b */ if (fZ) goto L_0051220b;
L_005121fa:; BB(0x005121fa);
    /* 005121fa: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005121fd: call 0x56ff27 */ r_esp -= 4; W32(r_esp, 0x512202u); f_0056ff27();
    /* 00512202: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512205: jne 0x51239f */ if (!fZ) goto L_0051239f;
L_0051220b:; BB(0x0051220b);
    /* 0051220b: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0051220e: cmp dword ptr [eax + 0x144], 0 */ {  u32 a = R32((u32)(r_eax+0x144u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512215: je 0x512223 */ if (fZ) goto L_00512223;
L_00512217:; BB(0x00512217);
    /* 00512217: mov dword ptr [ebp - 0x704], 0x692f10 */ W32((u32)(r_ebp+0xfffff8fcu), 0x692f10u);
    /* 00512221: jmp 0x51222d */ goto L_0051222d;
L_00512223:; BB(0x00512223);
    /* 00512223: mov dword ptr [ebp - 0x704], 0x692f28 */ W32((u32)(r_ebp+0xfffff8fcu), 0x692f28u);
L_0051222d:; BB(0x0051222d);
    /* 0051222d: mov ecx, dword ptr [ebp - 0x704] */ r_ecx = R32((u32)(r_ebp+0xfffff8fcu));
    /* 00512233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512234: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512237: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x51223cu); f_004259cd();
    /* 0051223c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051223d: push 0x692f40 */ { u32 v = 0x692f40u; r_esp -= 4; W32(r_esp, v); }
    /* 00512242: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 00512248: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512249: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x51224eu); f_00624050();
    /* 0051224e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512251: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00512254: cmp dword ptr [eax + 0x140], 0 */ {  u32 a = R32((u32)(r_eax+0x140u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051225b: jne 0x512273 */ if (!fZ) goto L_00512273;
L_0051225d:; BB(0x0051225d);
    /* 0051225d: push 0x692f50 */ { u32 v = 0x692f50u; r_esp -= 4; W32(r_esp, v); }
    /* 00512262: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 00512268: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512269: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x51226eu); f_00624520();
    /* 0051226e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512271: jmp 0x5122a1 */ goto L_005122a1;
L_00512273:; BB(0x00512273);
    /* 00512273: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512276: mov eax, dword ptr [edx + 0x140] */ r_eax = R32((u32)(r_edx+0x140u));
    /* 0051227c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051227d: push 0x692f5c */ { u32 v = 0x692f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00512282: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 00512288: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512289: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x51228eu); f_00624990();
    /* 0051228e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512291: lea edx, [ebp + eax - 0x16c] */ r_edx = (u32)(r_ebp+r_eax+0xfffffe94u);
    /* 00512298: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512299: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x51229eu); f_00624050();
    /* 0051229e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005122a1:; BB(0x005122a1);
    /* 005122a1: lea eax, [ebp - 0x16c] */ r_eax = (u32)(r_ebp+0xfffffe94u);
    /* 005122a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005122a8: lea ecx, [ebp - 0x574] */ r_ecx = (u32)(r_ebp+0xfffffa8cu);
    /* 005122ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005122af: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5122b4u); f_00624520();
    /* 005122b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005122b7: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005122ba: mov eax, dword ptr [edx + 0x140] */ r_eax = R32((u32)(r_edx+0x140u));
    /* 005122c0: mov dword ptr [ebp - 0x708], eax */ W32((u32)(r_ebp+0xfffff8f8u), r_eax);
    /* 005122c6: cmp dword ptr [ebp - 0x708], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffff8f8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005122cd: ja 0x51239f */ if ((!fC&&!fZ)) goto L_0051239f;
L_005122d3:; BB(0x005122d3);
    /* 005122d3: mov ecx, dword ptr [ebp - 0x708] */ r_ecx = R32((u32)(r_ebp+0xfffff8f8u));
    /* 005122d9: jmp dword ptr [ecx*4 + 0x512c98] */ { u32 t = R32((u32)(r_ecx*4+0x512c98u)); switch (t) { case 0x5122e0u: goto L_005122e0; case 0x5122f9u: goto L_005122f9; case 0x512331u: goto L_00512331; case 0x512369u: goto L_00512369; case 0x512507u: goto L_00512507; case 0x51253fu: goto L_0051253f; case 0x512577u: goto L_00512577; case 0x51258du: goto L_0051258d; default: UNSUP(0x005122d9, "jump table entry is not a known target"); } }
L_005122e0:; BB(0x005122e0);
    /* 005122e0: push 0x692f68 */ { u32 v = 0x692f68u; r_esp -= 4; W32(r_esp, v); }
    /* 005122e5: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 005122eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005122ec: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5122f1u); f_00624520();
    /* 005122f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005122f4: jmp 0x51239f */ goto L_0051239f;
L_005122f9:; BB(0x005122f9);
    /* 005122f9: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005122fc: cmp dword ptr [eax + 0x144], 0 */ {  u32 a = R32((u32)(r_eax+0x144u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512303: je 0x51231b */ if (fZ) goto L_0051231b;
L_00512305:; BB(0x00512305);
    /* 00512305: push 0x692ffc */ { u32 v = 0x692ffcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051230a: lea ecx, [ebp - 0x574] */ r_ecx = (u32)(r_ebp+0xfffffa8cu);
    /* 00512310: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512311: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x512316u); f_00624520();
    /* 00512316: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512319: jmp 0x51232f */ goto L_0051232f;
L_0051231b:; BB(0x0051231b);
    /* 0051231b: push 0x6930b0 */ { u32 v = 0x6930b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512320: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00512326: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512327: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x51232cu); f_00624520();
    /* 0051232c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051232f:; BB(0x0051232f);
    /* 0051232f: jmp 0x51239f */ goto L_0051239f;
L_00512331:; BB(0x00512331);
    /* 00512331: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00512334: cmp dword ptr [eax + 0x144], 0 */ {  u32 a = R32((u32)(r_eax+0x144u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051233b: je 0x512353 */ if (fZ) goto L_00512353;
L_0051233d:; BB(0x0051233d);
    /* 0051233d: push 0x693128 */ { u32 v = 0x693128u; r_esp -= 4; W32(r_esp, v); }
    /* 00512342: lea ecx, [ebp - 0x574] */ r_ecx = (u32)(r_ebp+0xfffffa8cu);
    /* 00512348: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512349: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x51234eu); f_00624520();
    /* 0051234e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512351: jmp 0x512367 */ goto L_00512367;
L_00512353:; BB(0x00512353);
    /* 00512353: push 0x6931b4 */ { u32 v = 0x6931b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00512358: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 0051235e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051235f: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x512364u); f_00624520();
    /* 00512364: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512367:; BB(0x00512367);
    /* 00512367: jmp 0x51239f */ goto L_0051239f;
L_00512369:; BB(0x00512369);
    /* 00512369: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0051236c: cmp dword ptr [eax + 0x144], 0 */ {  u32 a = R32((u32)(r_eax+0x144u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512373: je 0x51238b */ if (fZ) goto L_0051238b;
L_00512375:; BB(0x00512375);
    /* 00512375: push 0x69322c */ { u32 v = 0x69322cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051237a: lea ecx, [ebp - 0x574] */ r_ecx = (u32)(r_ebp+0xfffffa8cu);
    /* 00512380: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512381: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x512386u); f_00624520();
    /* 00512386: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512389: jmp 0x51239f */ goto L_0051239f;
L_0051238b:; BB(0x0051238b);
    /* 0051238b: push 0x693244 */ { u32 v = 0x693244u; r_esp -= 4; W32(r_esp, v); }
    /* 00512390: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00512396: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512397: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x51239cu); f_00624520();
    /* 0051239c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051239f:; BB(0x0051239f);
    /* 0051239f: jmp 0x5121a1 */ goto L_005121a1;
L_005123a4:; BB(0x005123a4);
    /* 005123a4: jmp 0x5125a6 */ goto L_005125a6;
L_005123a9:; BB(0x005123a9);
    /* 005123a9: push 0x693288 */ { u32 v = 0x693288u; r_esp -= 4; W32(r_esp, v); }
    /* 005123ae: lea eax, [ebp - 0x574] */ r_eax = (u32)(r_ebp+0xfffffa8cu);
    /* 005123b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005123b5: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5123bau); f_00624510();
    /* 005123ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005123bd: mov word ptr [ebp - 0x174], 0 */ W16((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 005123c6: jmp 0x5123da */ goto L_005123da;
L_005123c8:; BB(0x005123c8);
    /* 005123c8: mov cx, word ptr [ebp - 0x174] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe8cu))) & 0xffffu);
    /* 005123cf: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005123d3: mov word ptr [ebp - 0x174], cx */ W16((u32)(r_ebp+0xfffffe8cu), (u16)r_ecx);
L_005123da:; BB(0x005123da);
    /* 005123da: movsx edx, word ptr [ebp - 0x174] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe8cu));
    /* 005123e1: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005123e4: jge 0x5125a6 */ if ((fS==fO)) goto L_005125a6;
L_005123ea:; BB(0x005123ea);
    /* 005123ea: movsx eax, word ptr [ebp - 0x174] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe8cu));
    /* 005123f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005123f2: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 005123f8: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005123fb: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x512400u); f_005dd560();
    /* 00512400: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00512403: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512406: call 0x56fefa */ r_esp -= 4; W32(r_esp, 0x51240bu); f_0056fefa();
    /* 0051240b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051240e: je 0x5125a1 */ if (fZ) goto L_005125a1;
L_00512414:; BB(0x00512414);
    /* 00512414: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512417: call 0x56ff27 */ r_esp -= 4; W32(r_esp, 0x51241cu); f_0056ff27();
    /* 0051241c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051241f: je 0x512432 */ if (fZ) goto L_00512432;
L_00512421:; BB(0x00512421);
    /* 00512421: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512424: call 0x56ff27 */ r_esp -= 4; W32(r_esp, 0x512429u); f_0056ff27();
    /* 00512429: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051242c: jne 0x5125a1 */ if (!fZ) goto L_005125a1;
L_00512432:; BB(0x00512432);
    /* 00512432: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512435: cmp dword ptr [edx + 0x144], 0 */ {  u32 a = R32((u32)(r_edx+0x144u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051243c: je 0x51244a */ if (fZ) goto L_0051244a;
L_0051243e:; BB(0x0051243e);
    /* 0051243e: mov dword ptr [ebp - 0x70c], 0x69331c */ W32((u32)(r_ebp+0xfffff8f4u), 0x69331cu);
    /* 00512448: jmp 0x512454 */ goto L_00512454;
L_0051244a:; BB(0x0051244a);
    /* 0051244a: mov dword ptr [ebp - 0x70c], 0x693334 */ W32((u32)(r_ebp+0xfffff8f4u), 0x693334u);
L_00512454:; BB(0x00512454);
    /* 00512454: mov eax, dword ptr [ebp - 0x70c] */ r_eax = R32((u32)(r_ebp+0xfffff8f4u));
    /* 0051245a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051245b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0051245e: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x512463u); f_004259cd();
    /* 00512463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512464: push 0x69334c */ { u32 v = 0x69334cu; r_esp -= 4; W32(r_esp, v); }
    /* 00512469: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 0051246f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512470: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x512475u); f_00624050();
    /* 00512475: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512478: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0051247b: cmp dword ptr [edx + 0x140], 0 */ {  u32 a = R32((u32)(r_edx+0x140u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512482: jne 0x51249a */ if (!fZ) goto L_0051249a;
L_00512484:; BB(0x00512484);
    /* 00512484: push 0x69335c */ { u32 v = 0x69335cu; r_esp -= 4; W32(r_esp, v); }
    /* 00512489: lea eax, [ebp - 0x16c] */ r_eax = (u32)(r_ebp+0xfffffe94u);
    /* 0051248f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512490: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x512495u); f_00624520();
    /* 00512495: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512498: jmp 0x5124c8 */ goto L_005124c8;
L_0051249a:; BB(0x0051249a);
    /* 0051249a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0051249d: mov edx, dword ptr [ecx + 0x140] */ r_edx = R32((u32)(r_ecx+0x140u));
    /* 005124a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005124a4: push 0x693368 */ { u32 v = 0x693368u; r_esp -= 4; W32(r_esp, v); }
    /* 005124a9: lea eax, [ebp - 0x16c] */ r_eax = (u32)(r_ebp+0xfffffe94u);
    /* 005124af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005124b0: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x5124b5u); f_00624990();
    /* 005124b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005124b8: lea ecx, [ebp + eax - 0x16c] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffe94u);
    /* 005124bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005124c0: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5124c5u); f_00624050();
    /* 005124c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005124c8:; BB(0x005124c8);
    /* 005124c8: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 005124ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005124cf: lea eax, [ebp - 0x574] */ r_eax = (u32)(r_ebp+0xfffffa8cu);
    /* 005124d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005124d6: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5124dbu); f_00624520();
    /* 005124db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005124de: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005124e1: mov edx, dword ptr [ecx + 0x140] */ r_edx = R32((u32)(r_ecx+0x140u));
    /* 005124e7: mov dword ptr [ebp - 0x710], edx */ W32((u32)(r_ebp+0xfffff8f0u), r_edx);
    /* 005124ed: cmp dword ptr [ebp - 0x710], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffff8f0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005124f4: ja 0x5125a1 */ if ((!fC&&!fZ)) goto L_005125a1;
L_005124fa:; BB(0x005124fa);
    /* 005124fa: mov eax, dword ptr [ebp - 0x710] */ r_eax = R32((u32)(r_ebp+0xfffff8f0u));
    /* 00512500: jmp dword ptr [eax*4 + 0x512ca8] */ { u32 t = R32((u32)(r_eax*4+0x512ca8u)); switch (t) { case 0x512369u: goto L_00512369; case 0x512331u: goto L_00512331; case 0x5122f9u: goto L_005122f9; case 0x5122e0u: goto L_005122e0; case 0x512507u: goto L_00512507; case 0x51253fu: goto L_0051253f; case 0x512577u: goto L_00512577; case 0x51258du: goto L_0051258d; default: UNSUP(0x00512500, "jump table entry is not a known target"); } }
L_00512507:; BB(0x00512507);
    /* 00512507: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0051250a: cmp dword ptr [ecx + 0x144], 0 */ {  u32 a = R32((u32)(r_ecx+0x144u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512511: je 0x512529 */ if (fZ) goto L_00512529;
L_00512513:; BB(0x00512513);
    /* 00512513: push 0x693374 */ { u32 v = 0x693374u; r_esp -= 4; W32(r_esp, v); }
    /* 00512518: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 0051251e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051251f: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x512524u); f_00624520();
    /* 00512524: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512527: jmp 0x51253d */ goto L_0051253d;
L_00512529:; BB(0x00512529);
    /* 00512529: push 0x693390 */ { u32 v = 0x693390u; r_esp -= 4; W32(r_esp, v); }
    /* 0051252e: lea eax, [ebp - 0x574] */ r_eax = (u32)(r_ebp+0xfffffa8cu);
    /* 00512534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512535: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x51253au); f_00624520();
    /* 0051253a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051253d:; BB(0x0051253d);
    /* 0051253d: jmp 0x5125a1 */ goto L_005125a1;
L_0051253f:; BB(0x0051253f);
    /* 0051253f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512542: cmp dword ptr [ecx + 0x144], 0 */ {  u32 a = R32((u32)(r_ecx+0x144u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512549: je 0x512561 */ if (fZ) goto L_00512561;
L_0051254b:; BB(0x0051254b);
    /* 0051254b: push 0x6933b0 */ { u32 v = 0x6933b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512550: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00512556: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512557: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x51255cu); f_00624520();
    /* 0051255c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051255f: jmp 0x512575 */ goto L_00512575;
L_00512561:; BB(0x00512561);
    /* 00512561: push 0x6933d8 */ { u32 v = 0x6933d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00512566: lea eax, [ebp - 0x574] */ r_eax = (u32)(r_ebp+0xfffffa8cu);
    /* 0051256c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051256d: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x512572u); f_00624520();
    /* 00512572: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512575:; BB(0x00512575);
    /* 00512575: jmp 0x5125a1 */ goto L_005125a1;
L_00512577:; BB(0x00512577);
    /* 00512577: push 0x693400 */ { u32 v = 0x693400u; r_esp -= 4; W32(r_esp, v); }
    /* 0051257c: lea ecx, [ebp - 0x574] */ r_ecx = (u32)(r_ebp+0xfffffa8cu);
    /* 00512582: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512583: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x512588u); f_00624520();
    /* 00512588: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051258b: jmp 0x5125a1 */ goto L_005125a1;
L_0051258d:; BB(0x0051258d);
    /* 0051258d: push 0x693428 */ { u32 v = 0x693428u; r_esp -= 4; W32(r_esp, v); }
    /* 00512592: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00512598: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512599: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x51259eu); f_00624520();
    /* 0051259e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005125a1:; BB(0x005125a1);
    /* 005125a1: jmp 0x5123c8 */ goto L_005123c8;
L_005125a6:; BB(0x005125a6);
    /* 005125a6: lea eax, [ebp - 0x574] */ r_eax = (u32)(r_ebp+0xfffffa8cu);
    /* 005125ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005125ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005125af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005125b1: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 005125b7: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x5125bcu); f_0060e8c0();
L_005125bc:; BB(0x005125bc);
    /* 005125bc: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 005125c2: call 0x52d504 */ r_esp -= 4; W32(r_esp, 0x5125c7u); f_0052d504();
    /* 005125c7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005125ca: jne 0x512c80 */ if (!fZ) goto L_00512c80;
L_005125d0:; BB(0x005125d0);
    /* 005125d0: mov word ptr [ebp - 0x660], 0 */ W16((u32)(r_ebp+0xfffff9a0u), 0x0u);
    /* 005125d9: lea ecx, [ebp - 0x658] */ r_ecx = (u32)(r_ebp+0xfffff9a8u);
    /* 005125df: call 0x54b54c */ r_esp -= 4; W32(r_esp, 0x5125e4u); f_0054b54c();
    /* 005125e4: lea ecx, [ebp - 0x65c] */ r_ecx = (u32)(r_ebp+0xfffff9a4u);
    /* 005125ea: call 0x54b54c */ r_esp -= 4; W32(r_esp, 0x5125efu); f_0054b54c();
    /* 005125ef: lea ecx, [ebp - 0x66c] */ r_ecx = (u32)(r_ebp+0xfffff994u);
    /* 005125f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005125f6: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 005125fc: call 0x52fdf4 */ r_esp -= 4; W32(r_esp, 0x512601u); f_0052fdf4();
    /* 00512601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512602: mov edx, dword ptr [0x6f9fd4] */ r_edx = R32((u32)(0x6f9fd4u));
    /* 00512608: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0051260b: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x512610u); f_005dd560();
    /* 00512610: mov ecx, eax */ r_ecx = r_eax;
    /* 00512612: call 0x570ac7 */ r_esp -= 4; W32(r_esp, 0x512617u); f_00570ac7();
    /* 00512617: mov dword ptr [ebp - 0x670], 0 */ W32((u32)(r_ebp+0xfffff990u), 0x0u);
    /* 00512621: mov word ptr [ebp - 0x174], 0 */ W16((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 0051262a: jmp 0x51263e */ goto L_0051263e;
L_0051262c:; BB(0x0051262c);
    /* 0051262c: mov ax, word ptr [ebp - 0x174] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe8cu))) & 0xffffu);
    /* 00512633: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00512637: mov word ptr [ebp - 0x174], ax */ W16((u32)(r_ebp+0xfffffe8cu), (u16)r_eax);
L_0051263e:; BB(0x0051263e);
    /* 0051263e: movsx ecx, word ptr [ebp - 0x174] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe8cu));
    /* 00512645: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512648: jge 0x512731 */ if ((fS==fO)) goto L_00512731;
L_0051264e:; BB(0x0051264e);
    /* 0051264e: movsx edx, word ptr [ebp - 0x174] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe8cu));
    /* 00512655: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512656: mov eax, dword ptr [0x6f9fd4] */ r_eax = R32((u32)(0x6f9fd4u));
    /* 0051265b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0051265e: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x512663u); f_005dd560();
    /* 00512663: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00512666: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512669: call 0x56ff27 */ r_esp -= 4; W32(r_esp, 0x51266eu); f_0056ff27();
    /* 0051266e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512671: je 0x512684 */ if (fZ) goto L_00512684;
L_00512673:; BB(0x00512673);
    /* 00512673: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512676: call 0x56ff27 */ r_esp -= 4; W32(r_esp, 0x51267bu); f_0056ff27();
    /* 0051267b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051267e: jne 0x51272c */ if (!fZ) goto L_0051272c;
L_00512684:; BB(0x00512684);
    /* 00512684: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512686: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512688: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051268a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051268c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051268e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512690: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512692: lea ecx, [ebp - 0x6b8] */ r_ecx = (u32)(r_ebp+0xfffff948u);
    /* 00512698: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512699: lea edx, [ebp - 0x6b4] */ r_edx = (u32)(r_ebp+0xfffff94cu);
    /* 0051269f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005126a0: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005126a3: call 0x570ec5 */ r_esp -= 4; W32(r_esp, 0x5126a8u); f_00570ec5();
    /* 005126a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005126aa: call 0x5326cf */ r_esp -= 4; W32(r_esp, 0x5126afu); f_005326cf();
    /* 005126af: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005126b1: mov dword ptr [ebp - 0x65c], eax */ W32((u32)(r_ebp+0xfffff9a4u), r_eax);
    /* 005126b7: lea ecx, [ebp - 0x6b8] */ r_ecx = (u32)(r_ebp+0xfffff948u);
    /* 005126bd: call 0x54b569 */ r_esp -= 4; W32(r_esp, 0x5126c2u); f_0054b569();
    /* 005126c2: lea ecx, [ebp - 0x6b4] */ r_ecx = (u32)(r_ebp+0xfffff94cu);
    /* 005126c8: call 0x5314b1 */ r_esp -= 4; W32(r_esp, 0x5126cdu); f_005314b1();
    /* 005126cd: cmp dword ptr [ebp - 0x670], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff990u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005126d4: jne 0x5126fc */ if (!fZ) goto L_005126fc;
L_005126d6:; BB(0x005126d6);
    /* 005126d6: mov ecx, dword ptr [ebp - 0x65c] */ r_ecx = R32((u32)(r_ebp+0xfffff9a4u));
    /* 005126dc: mov dword ptr [ebp - 0x658], ecx */ W32((u32)(r_ebp+0xfffff9a8u), r_ecx);
    /* 005126e2: mov dx, word ptr [ebp - 0x174] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe8cu))) & 0xffffu);
    /* 005126e9: mov word ptr [ebp - 0x664], dx */ W16((u32)(r_ebp+0xfffff99cu), (u16)r_edx);
    /* 005126f0: mov dword ptr [ebp - 0x670], 1 */ W32((u32)(r_ebp+0xfffff990u), 0x1u);
    /* 005126fa: jmp 0x51272c */ goto L_0051272c;
L_005126fc:; BB(0x005126fc);
    /* 005126fc: lea eax, [ebp - 0x658] */ r_eax = (u32)(r_ebp+0xfffff9a8u);
    /* 00512702: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512703: lea ecx, [ebp - 0x65c] */ r_ecx = (u32)(r_ebp+0xfffff9a4u);
    /* 00512709: call 0x54b74e */ r_esp -= 4; W32(r_esp, 0x51270eu); f_0054b74e();
    /* 0051270e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512710: je 0x51272c */ if (fZ) goto L_0051272c;
L_00512712:; BB(0x00512712);
    /* 00512712: mov ecx, dword ptr [ebp - 0x65c] */ r_ecx = R32((u32)(r_ebp+0xfffff9a4u));
    /* 00512718: mov dword ptr [ebp - 0x658], ecx */ W32((u32)(r_ebp+0xfffff9a8u), r_ecx);
    /* 0051271e: mov dx, word ptr [ebp - 0x174] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe8cu))) & 0xffffu);
    /* 00512725: mov word ptr [ebp - 0x664], dx */ W16((u32)(r_ebp+0xfffff99cu), (u16)r_edx);
L_0051272c:; BB(0x0051272c);
    /* 0051272c: jmp 0x51262c */ goto L_0051262c;
L_00512731:; BB(0x00512731);
    /* 00512731: movsx eax, word ptr [ebp - 0x664] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff99cu));
    /* 00512738: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512739: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 0051273f: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00512742: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x512747u); f_005dd560();
    /* 00512747: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0051274a: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0051274d: mov ecx, dword ptr [edx + 0x154] */ r_ecx = R32((u32)(r_edx+0x154u));
    /* 00512753: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x512758u); f_005d9690();
    /* 00512758: mov dword ptr [ebp - 0x674], eax */ W32((u32)(r_ebp+0xfffff98cu), r_eax);
    /* 0051275e: lea eax, [ebp - 0x6bc] */ r_eax = (u32)(r_ebp+0xfffff944u);
    /* 00512764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512765: lea ecx, [ebp - 0x658] */ r_ecx = (u32)(r_ebp+0xfffff9a8u);
    /* 0051276b: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x512770u); f_0054b5cb();
    /* 00512770: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00512772: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512773: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512776: call 0x58076e */ r_esp -= 4; W32(r_esp, 0x51277bu); f_0058076e();
    /* 0051277b: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0051277e: mov ecx, dword ptr [edx + 0x154] */ r_ecx = R32((u32)(r_edx+0x154u));
    /* 00512784: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00512787: mov edx, dword ptr [eax + 0x154] */ r_edx = R32((u32)(r_eax+0x154u));
    /* 0051278d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051278f: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x512792u); call_ind(t); }
    /* 00512792: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512793: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 00512799: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051279a: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x51279fu); f_00624510();
    /* 0051279f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005127a2: cmp dword ptr [ebp - 0x674], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff98cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005127a9: jne 0x5127b3 */ if (!fZ) goto L_005127b3;
L_005127ab:; BB(0x005127ab);
    /* 005127ab: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005127ae: call 0x580a60 */ r_esp -= 4; W32(r_esp, 0x5127b3u); f_00580a60();
L_005127b3:; BB(0x005127b3);
    /* 005127b3: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 005127b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005127ba: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005127bd: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x5127c2u); f_004259cd();
    /* 005127c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005127c3: push 0x693468 */ { u32 v = 0x693468u; r_esp -= 4; W32(r_esp, v); }
    /* 005127c8: lea eax, [ebp - 0x574] */ r_eax = (u32)(r_ebp+0xfffffa8cu);
    /* 005127ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005127cf: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5127d4u); f_00624050();
    /* 005127d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005127d7: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 005127dd: call 0x52d531 */ r_esp -= 4; W32(r_esp, 0x5127e2u); f_0052d531();
    /* 005127e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005127e4: je 0x512a21 */ if (fZ) goto L_00512a21;
L_005127ea:; BB(0x005127ea);
    /* 005127ea: mov dword ptr [ebp - 0x670], 0 */ W32((u32)(r_ebp+0xfffff990u), 0x0u);
    /* 005127f4: mov word ptr [ebp - 0x174], 0 */ W16((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 005127fd: jmp 0x512811 */ goto L_00512811;
L_005127ff:; BB(0x005127ff);
    /* 005127ff: mov cx, word ptr [ebp - 0x174] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe8cu))) & 0xffffu);
    /* 00512806: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0051280a: mov word ptr [ebp - 0x174], cx */ W16((u32)(r_ebp+0xfffffe8cu), (u16)r_ecx);
L_00512811:; BB(0x00512811);
    /* 00512811: movsx edx, word ptr [ebp - 0x174] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe8cu));
    /* 00512818: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051281b: jge 0x51292d */ if ((fS==fO)) goto L_0051292d;
L_00512821:; BB(0x00512821);
    /* 00512821: movsx eax, word ptr [ebp - 0x174] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe8cu));
    /* 00512828: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512829: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 0051282f: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00512832: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x512837u); f_005dd560();
    /* 00512837: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0051283a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0051283d: call 0x56ff27 */ r_esp -= 4; W32(r_esp, 0x512842u); f_0056ff27();
    /* 00512842: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512845: je 0x512858 */ if (fZ) goto L_00512858;
L_00512847:; BB(0x00512847);
    /* 00512847: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0051284a: call 0x56ff27 */ r_esp -= 4; W32(r_esp, 0x51284fu); f_0056ff27();
    /* 0051284f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512852: jne 0x512928 */ if (!fZ) goto L_00512928;
L_00512858:; BB(0x00512858);
    /* 00512858: lea edx, [ebp - 0x6c4] */ r_edx = (u32)(r_ebp+0xfffff93cu);
    /* 0051285e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051285f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512862: call 0x570ec5 */ r_esp -= 4; W32(r_esp, 0x512867u); f_00570ec5();
    /* 00512867: mov ecx, eax */ r_ecx = r_eax;
    /* 00512869: call 0x531753 */ r_esp -= 4; W32(r_esp, 0x51286eu); f_00531753();
    /* 0051286e: mov word ptr [ebp - 0x660], ax */ W16((u32)(r_ebp+0xfffff9a0u), (u16)r_eax);
    /* 00512875: lea ecx, [ebp - 0x6c4] */ r_ecx = (u32)(r_ebp+0xfffff93cu);
    /* 0051287b: call 0x5314b1 */ r_esp -= 4; W32(r_esp, 0x512880u); f_005314b1();
    /* 00512880: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512882: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512884: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512886: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512888: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051288a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051288c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051288e: lea eax, [ebp - 0x6d0] */ r_eax = (u32)(r_ebp+0xfffff930u);
    /* 00512894: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512895: lea ecx, [ebp - 0x6cc] */ r_ecx = (u32)(r_ebp+0xfffff934u);
    /* 0051289b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051289c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0051289f: call 0x570ec5 */ r_esp -= 4; W32(r_esp, 0x5128a4u); f_00570ec5();
    /* 005128a4: mov ecx, eax */ r_ecx = r_eax;
    /* 005128a6: call 0x5326cf */ r_esp -= 4; W32(r_esp, 0x5128abu); f_005326cf();
    /* 005128ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005128ad: mov dword ptr [ebp - 0x65c], edx */ W32((u32)(r_ebp+0xfffff9a4u), r_edx);
    /* 005128b3: lea ecx, [ebp - 0x6d0] */ r_ecx = (u32)(r_ebp+0xfffff930u);
    /* 005128b9: call 0x54b569 */ r_esp -= 4; W32(r_esp, 0x5128beu); f_0054b569();
    /* 005128be: lea ecx, [ebp - 0x6cc] */ r_ecx = (u32)(r_ebp+0xfffff934u);
    /* 005128c4: call 0x5314b1 */ r_esp -= 4; W32(r_esp, 0x5128c9u); f_005314b1();
    /* 005128c9: cmp dword ptr [ebp - 0x670], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff990u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005128d0: jne 0x5128f8 */ if (!fZ) goto L_005128f8;
L_005128d2:; BB(0x005128d2);
    /* 005128d2: mov eax, dword ptr [ebp - 0x65c] */ r_eax = R32((u32)(r_ebp+0xfffff9a4u));
    /* 005128d8: mov dword ptr [ebp - 0x658], eax */ W32((u32)(r_ebp+0xfffff9a8u), r_eax);
    /* 005128de: mov cx, word ptr [ebp - 0x174] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe8cu))) & 0xffffu);
    /* 005128e5: mov word ptr [ebp - 0x664], cx */ W16((u32)(r_ebp+0xfffff99cu), (u16)r_ecx);
    /* 005128ec: mov dword ptr [ebp - 0x670], 1 */ W32((u32)(r_ebp+0xfffff990u), 0x1u);
    /* 005128f6: jmp 0x512928 */ goto L_00512928;
L_005128f8:; BB(0x005128f8);
    /* 005128f8: lea edx, [ebp - 0x658] */ r_edx = (u32)(r_ebp+0xfffff9a8u);
    /* 005128fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005128ff: lea ecx, [ebp - 0x65c] */ r_ecx = (u32)(r_ebp+0xfffff9a4u);
    /* 00512905: call 0x54b7d4 */ r_esp -= 4; W32(r_esp, 0x51290au); f_0054b7d4();
    /* 0051290a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051290c: je 0x512928 */ if (fZ) goto L_00512928;
L_0051290e:; BB(0x0051290e);
    /* 0051290e: mov eax, dword ptr [ebp - 0x65c] */ r_eax = R32((u32)(r_ebp+0xfffff9a4u));
    /* 00512914: mov dword ptr [ebp - 0x658], eax */ W32((u32)(r_ebp+0xfffff9a8u), r_eax);
    /* 0051291a: mov cx, word ptr [ebp - 0x174] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe8cu))) & 0xffffu);
    /* 00512921: mov word ptr [ebp - 0x664], cx */ W16((u32)(r_ebp+0xfffff99cu), (u16)r_ecx);
L_00512928:; BB(0x00512928);
    /* 00512928: jmp 0x5127ff */ goto L_005127ff;
L_0051292d:; BB(0x0051292d);
    /* 0051292d: movsx edx, word ptr [ebp - 0x664] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff99cu));
    /* 00512934: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512935: mov eax, dword ptr [0x6f9fd4] */ r_eax = R32((u32)(0x6f9fd4u));
    /* 0051293a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0051293d: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x512942u); f_005dd560();
    /* 00512942: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00512945: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512948: mov ecx, dword ptr [ecx + 0x15c] */ r_ecx = R32((u32)(r_ecx+0x15cu));
    /* 0051294e: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x512953u); f_005d9690();
    /* 00512953: mov dword ptr [ebp - 0x674], eax */ W32((u32)(r_ebp+0xfffff98cu), r_eax);
    /* 00512959: mov edx, dword ptr [ebp - 0x658] */ r_edx = R32((u32)(r_ebp+0xfffff9a8u));
    /* 0051295f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512960: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512963: call 0x5810c1 */ r_esp -= 4; W32(r_esp, 0x512968u); f_005810c1();
    /* 00512968: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0051296b: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 00512971: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512974: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 0051297a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051297c: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x51297fu); call_ind(t); }
    /* 0051297f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512980: lea eax, [ebp - 0x16c] */ r_eax = (u32)(r_ebp+0xfffffe94u);
    /* 00512986: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512987: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x51298cu); f_00624510();
    /* 0051298c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051298f: cmp dword ptr [ebp - 0x674], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff98cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512996: jne 0x5129a0 */ if (!fZ) goto L_005129a0;
L_00512998:; BB(0x00512998);
    /* 00512998: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0051299b: call 0x581573 */ r_esp -= 4; W32(r_esp, 0x5129a0u); f_00581573();
L_005129a0:; BB(0x005129a0);
    /* 005129a0: movsx ecx, word ptr [ebp - 0x660] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff9a0u));
    /* 005129a7: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005129aa: jl 0x512a21 */ if ((fS!=fO)) goto L_00512a21;
L_005129ac:; BB(0x005129ac);
    /* 005129ac: push 0x6fa06c */ { u32 v = 0x6fa06cu; r_esp -= 4; W32(r_esp, v); }
    /* 005129b1: mov edx, dword ptr [0x6fa0a8] */ r_edx = R32((u32)(0x6fa0a8u));
    /* 005129b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005129b8: mov eax, dword ptr [0x6fa0b0] */ r_eax = R32((u32)(0x6fa0b0u));
    /* 005129bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005129be: mov ecx, dword ptr [0x6fa048] */ r_ecx = R32((u32)(0x6fa048u));
    /* 005129c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005129c5: mov edx, dword ptr [0x6fa02c] */ r_edx = R32((u32)(0x6fa02cu));
    /* 005129cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005129cc: mov eax, dword ptr [0x6fa0f0] */ r_eax = R32((u32)(0x6fa0f0u));
    /* 005129d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005129d2: lea ecx, [ebp - 0x65c] */ r_ecx = (u32)(r_ebp+0xfffff9a4u);
    /* 005129d8: call 0x54b574 */ r_esp -= 4; W32(r_esp, 0x5129ddu); f_0054b574();
    /* 005129dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005129de: lea ecx, [ebp - 0x658] */ r_ecx = (u32)(r_ebp+0xfffff9a8u);
    /* 005129e4: call 0x54b7ed */ r_esp -= 4; W32(r_esp, 0x5129e9u); f_0054b7ed();
    /* 005129e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005129eb: je 0x512a21 */ if (fZ) goto L_00512a21;
L_005129ed:; BB(0x005129ed);
    /* 005129ed: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 005129f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005129f4: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005129f7: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x5129fcu); f_004259cd();
    /* 005129fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005129fd: push 0x693488 */ { u32 v = 0x693488u; r_esp -= 4; W32(r_esp, v); }
    /* 00512a02: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00512a08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512a09: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x512a0eu); f_00624990();
    /* 00512a0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512a11: lea eax, [ebp + eax - 0x574] */ r_eax = (u32)(r_ebp+r_eax+0xfffffa8cu);
    /* 00512a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512a19: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x512a1eu); f_00624050();
    /* 00512a1e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512a21:; BB(0x00512a21);
    /* 00512a21: lea ecx, [ebp - 0x66c] */ r_ecx = (u32)(r_ebp+0xfffff994u);
    /* 00512a27: call 0x531753 */ r_esp -= 4; W32(r_esp, 0x512a2cu); f_00531753();
    /* 00512a2c: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00512a2f: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512a32: jl 0x512c49 */ if ((fS!=fO)) goto L_00512c49;
L_00512a38:; BB(0x00512a38);
    /* 00512a38: mov word ptr [ebp - 0x174], 0 */ W16((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 00512a41: jmp 0x512a55 */ goto L_00512a55;
L_00512a43:; BB(0x00512a43);
    /* 00512a43: mov dx, word ptr [ebp - 0x174] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe8cu))) & 0xffffu);
    /* 00512a4a: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00512a4e: mov word ptr [ebp - 0x174], dx */ W16((u32)(r_ebp+0xfffffe8cu), (u16)r_edx);
L_00512a55:; BB(0x00512a55);
    /* 00512a55: movsx eax, word ptr [ebp - 0x174] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe8cu));
    /* 00512a5c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512a5f: jge 0x512c49 */ if ((fS==fO)) goto L_00512c49;
L_00512a65:; BB(0x00512a65);
    /* 00512a65: movsx ecx, word ptr [ebp - 0x174] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe8cu));
    /* 00512a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512a6d: mov edx, dword ptr [0x6f9fd4] */ r_edx = R32((u32)(0x6f9fd4u));
    /* 00512a73: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00512a76: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x512a7bu); f_005dd560();
    /* 00512a7b: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00512a7e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512a81: call 0x56ff27 */ r_esp -= 4; W32(r_esp, 0x512a86u); f_0056ff27();
    /* 00512a86: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512a89: je 0x512a9c */ if (fZ) goto L_00512a9c;
L_00512a8b:; BB(0x00512a8b);
    /* 00512a8b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512a8e: call 0x56ff27 */ r_esp -= 4; W32(r_esp, 0x512a93u); f_0056ff27();
    /* 00512a93: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512a96: jne 0x512c44 */ if (!fZ) goto L_00512c44;
L_00512a9c:; BB(0x00512a9c);
    /* 00512a9c: mov byte ptr [ebp - 0x16c], 0 */ W8((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 00512aa3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512aa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512aa7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512aa9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512aab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512aad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512aaf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512ab1: lea eax, [ebp - 0x6dc] */ r_eax = (u32)(r_ebp+0xfffff924u);
    /* 00512ab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512ab8: lea ecx, [ebp - 0x6d8] */ r_ecx = (u32)(r_ebp+0xfffff928u);
    /* 00512abe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512abf: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512ac2: call 0x570ec5 */ r_esp -= 4; W32(r_esp, 0x512ac7u); f_00570ec5();
    /* 00512ac7: mov ecx, eax */ r_ecx = r_eax;
    /* 00512ac9: call 0x5326cf */ r_esp -= 4; W32(r_esp, 0x512aceu); f_005326cf();
    /* 00512ace: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512ad0: mov dword ptr [ebp - 0x65c], edx */ W32((u32)(r_ebp+0xfffff9a4u), r_edx);
    /* 00512ad6: lea ecx, [ebp - 0x6dc] */ r_ecx = (u32)(r_ebp+0xfffff924u);
    /* 00512adc: call 0x54b569 */ r_esp -= 4; W32(r_esp, 0x512ae1u); f_0054b569();
    /* 00512ae1: lea ecx, [ebp - 0x6d8] */ r_ecx = (u32)(r_ebp+0xfffff928u);
    /* 00512ae7: call 0x5314b1 */ r_esp -= 4; W32(r_esp, 0x512aecu); f_005314b1();
    /* 00512aec: mov eax, dword ptr [0x6fa058] */ r_eax = R32((u32)(0x6fa058u));
    /* 00512af1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512af2: lea ecx, [ebp - 0x6e0] */ r_ecx = (u32)(r_ebp+0xfffff920u);
    /* 00512af8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512af9: lea ecx, [ebp - 0x65c] */ r_ecx = (u32)(r_ebp+0xfffff9a4u);
    /* 00512aff: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x512b04u); f_0054b5cb();
    /* 00512b04: mov ecx, eax */ r_ecx = r_eax;
    /* 00512b06: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x512b0bu); f_0054b351();
    /* 00512b0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512b0d: je 0x512b23 */ if (fZ) goto L_00512b23;
L_00512b0f:; BB(0x00512b0f);
    /* 00512b0f: push 0x6934a8 */ { u32 v = 0x6934a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00512b14: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 00512b1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512b1b: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x512b20u); f_00624510();
    /* 00512b20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512b23:; BB(0x00512b23);
    /* 00512b23: mov eax, dword ptr [0x6fa0c4] */ r_eax = R32((u32)(0x6fa0c4u));
    /* 00512b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512b29: lea ecx, [ebp - 0x6e4] */ r_ecx = (u32)(r_ebp+0xfffff91cu);
    /* 00512b2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512b30: lea ecx, [ebp - 0x65c] */ r_ecx = (u32)(r_ebp+0xfffff9a4u);
    /* 00512b36: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x512b3bu); f_0054b5cb();
    /* 00512b3b: mov ecx, eax */ r_ecx = r_eax;
    /* 00512b3d: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x512b42u); f_0054b351();
    /* 00512b42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512b44: je 0x512b5a */ if (fZ) goto L_00512b5a;
L_00512b46:; BB(0x00512b46);
    /* 00512b46: push 0x6934c8 */ { u32 v = 0x6934c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00512b4b: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 00512b51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512b52: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x512b57u); f_00624510();
    /* 00512b57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512b5a:; BB(0x00512b5a);
    /* 00512b5a: lea eax, [ebp - 0x6f0] */ r_eax = (u32)(r_ebp+0xfffff910u);
    /* 00512b60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512b61: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512b64: call 0x570ec5 */ r_esp -= 4; W32(r_esp, 0x512b69u); f_00570ec5();
    /* 00512b69: mov ecx, eax */ r_ecx = r_eax;
    /* 00512b6b: call 0x531a33 */ r_esp -= 4; W32(r_esp, 0x512b70u); f_00531a33();
    /* 00512b70: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00512b73: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00512b75: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512b78: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00512b7b: mov byte ptr [ebp - 0x6e8], dl */ W8((u32)(r_ebp+0xfffff918u), (u8)r_edx);
    /* 00512b81: lea ecx, [ebp - 0x6f0] */ r_ecx = (u32)(r_ebp+0xfffff910u);
    /* 00512b87: call 0x5314b1 */ r_esp -= 4; W32(r_esp, 0x512b8cu); f_005314b1();
    /* 00512b8c: mov eax, dword ptr [ebp - 0x6e8] */ r_eax = R32((u32)(r_ebp+0xfffff918u));
    /* 00512b92: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00512b97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512b99: je 0x512baf */ if (fZ) goto L_00512baf;
L_00512b9b:; BB(0x00512b9b);
    /* 00512b9b: push 0x6934d4 */ { u32 v = 0x6934d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00512ba0: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 00512ba6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512ba7: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x512bacu); f_00624510();
    /* 00512bac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512baf:; BB(0x00512baf);
    /* 00512baf: lea edx, [ebp - 0x6fc] */ r_edx = (u32)(r_ebp+0xfffff904u);
    /* 00512bb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512bb6: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512bb9: call 0x570ec5 */ r_esp -= 4; W32(r_esp, 0x512bbeu); f_00570ec5();
    /* 00512bbe: mov ecx, eax */ r_ecx = r_eax;
    /* 00512bc0: call 0x531bad */ r_esp -= 4; W32(r_esp, 0x512bc5u); f_00531bad();
    /* 00512bc5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00512bc8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00512bca: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512bcd: setle cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00512bd0: mov byte ptr [ebp - 0x6f4], cl */ W8((u32)(r_ebp+0xfffff90cu), (u8)r_ecx);
    /* 00512bd6: lea ecx, [ebp - 0x6fc] */ r_ecx = (u32)(r_ebp+0xfffff904u);
    /* 00512bdc: call 0x5314b1 */ r_esp -= 4; W32(r_esp, 0x512be1u); f_005314b1();
    /* 00512be1: mov edx, dword ptr [ebp - 0x6f4] */ r_edx = R32((u32)(r_ebp+0xfffff90cu));
    /* 00512be7: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00512bed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512bef: je 0x512c05 */ if (fZ) goto L_00512c05;
L_00512bf1:; BB(0x00512bf1);
    /* 00512bf1: push 0x6934dc */ { u32 v = 0x6934dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00512bf6: lea eax, [ebp - 0x16c] */ r_eax = (u32)(r_ebp+0xfffffe94u);
    /* 00512bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512bfd: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x512c02u); f_00624510();
    /* 00512c02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512c05:; BB(0x00512c05);
    /* 00512c05: movsx ecx, byte ptr [ebp - 0x16c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffe94u));
    /* 00512c0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512c0e: je 0x512c44 */ if (fZ) goto L_00512c44;
L_00512c10:; BB(0x00512c10);
    /* 00512c10: lea edx, [ebp - 0x16c] */ r_edx = (u32)(r_ebp+0xfffffe94u);
    /* 00512c16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512c17: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00512c1a: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x512c1fu); f_004259cd();
    /* 00512c1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512c20: push 0x6934e8 */ { u32 v = 0x6934e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00512c25: lea eax, [ebp - 0x574] */ r_eax = (u32)(r_ebp+0xfffffa8cu);
    /* 00512c2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512c2c: call 0x624990 */ r_esp -= 4; W32(r_esp, 0x512c31u); f_00624990();
    /* 00512c31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512c34: lea ecx, [ebp + eax - 0x574] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffa8cu);
    /* 00512c3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512c3c: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x512c41u); f_00624050();
    /* 00512c41: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512c44:; BB(0x00512c44);
    /* 00512c44: jmp 0x512a43 */ goto L_00512a43;
L_00512c49:; BB(0x00512c49);
    /* 00512c49: lea edx, [ebp - 0x574] */ r_edx = (u32)(r_ebp+0xfffffa8cu);
    /* 00512c4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512c50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512c52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512c54: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00512c5a: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x512c5fu); f_0060e8c0();
    /* 00512c5f: lea ecx, [ebp - 0x66c] */ r_ecx = (u32)(r_ebp+0xfffff994u);
    /* 00512c65: call 0x5314b1 */ r_esp -= 4; W32(r_esp, 0x512c6au); f_005314b1();
    /* 00512c6a: lea ecx, [ebp - 0x65c] */ r_ecx = (u32)(r_ebp+0xfffff9a4u);
    /* 00512c70: call 0x54b569 */ r_esp -= 4; W32(r_esp, 0x512c75u); f_0054b569();
    /* 00512c75: lea ecx, [ebp - 0x658] */ r_ecx = (u32)(r_ebp+0xfffff9a8u);
    /* 00512c7b: call 0x54b569 */ r_esp -= 4; W32(r_esp, 0x512c80u); f_0054b569();
L_00512c80:; BB(0x00512c80);
    /* 00512c80: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00512c86: mov cx, word ptr [ebp + 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x14u))) & 0xffffu);
    /* 00512c8a: mov word ptr [eax + 0xbc], cx */ W16((u32)(r_eax+0xbcu), (u16)r_ecx);
    /* 00512c91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00512c92: mov esp, ebp */ r_esp = r_ebp;
    /* 00512c94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512c95: ret 0x10 */ FN_RET(0x00511464); r_esp += 20; return;
}

void f_00512cb8(void) /* FUN_00512cb8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00512cb8);
    /* 00512cb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512cb9: mov ebp, esp */ r_ebp = r_esp;
    /* 00512cbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512cbc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00512cbf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512cc2: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x512cc7u); f_005d5d20();
    /* 00512cc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512cca: mov dword ptr [eax], 0x63897c */ W32((u32)(r_eax), 0x63897cu);
    /* 00512cd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512cd3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00512cd6: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00512cdc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512cdf: mov esp, ebp */ r_esp = r_ebp;
    /* 00512ce1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512ce2: ret 4 */ FN_RET(0x00512cb8); r_esp += 8; return;
}

void f_00512ce5(void) /* FUN_00512ce5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00512ce5);
    /* 00512ce5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512ce6: mov ebp, esp */ r_ebp = r_esp;
    /* 00512ce8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00512ceb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00512cee: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00512cf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512cf7: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00512cfd: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x512d02u); f_0060e7bd();
    /* 00512d02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512d04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512d06: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00512d0c: call 0x52abf2 */ r_esp -= 4; W32(r_esp, 0x512d11u); f_0052abf2();
    /* 00512d11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512d13: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00512d16: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x512d1bu); f_005d6635();
    /* 00512d1b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00512d1e: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00512d24: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x512d29u); f_005e03cc();
    /* 00512d29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512d2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512d2d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00512d30: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00512d36: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x512d3bu); f_005b79b9();
    /* 00512d3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00512d3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512d3e: ret  */ FN_RET(0x00512ce5); r_esp += 4; return;
}

void f_00512d3f(void) /* FUN_00512d3f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00512d3f);
    /* 00512d3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512d40: mov ebp, esp */ r_ebp = r_esp;
    /* 00512d42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512d43: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00512d46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512d49: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x512d4eu); f_005d5d20();
    /* 00512d4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512d51: mov dword ptr [eax], 0x6389ec */ W32((u32)(r_eax), 0x6389ecu);
    /* 00512d57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512d5a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00512d5d: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00512d63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512d66: mov esp, ebp */ r_esp = r_ebp;
    /* 00512d68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512d69: ret 4 */ FN_RET(0x00512d3f); r_esp += 8; return;
}

void f_00512d6c(void) /* FUN_00512d6c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00512d6c);
    /* 00512d6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512d6d: mov ebp, esp */ r_ebp = r_esp;
    /* 00512d6f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00512d72: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00512d75: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00512d7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512d7e: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00512d84: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x512d89u); f_0060e7bd();
    /* 00512d89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512d8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512d8d: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00512d93: call 0x52abf2 */ r_esp -= 4; W32(r_esp, 0x512d98u); f_0052abf2();
    /* 00512d98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512d9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00512d9d: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x512da2u); f_005d6635();
    /* 00512da2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00512da5: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00512dab: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x512db0u); f_005e03cc();
    /* 00512db0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512db4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00512db7: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00512dbd: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x512dc2u); f_005b79b9();
    /* 00512dc2: mov esp, ebp */ r_esp = r_ebp;
    /* 00512dc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512dc5: ret  */ FN_RET(0x00512d6c); r_esp += 4; return;
}

void f_00512dc6(void) /* FUN_00512dc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00512dc6);
    /* 00512dc6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512dc7: mov ebp, esp */ r_ebp = r_esp;
    /* 00512dc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512dca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00512dcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512dd0: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x512dd5u); f_005d5d20();
    /* 00512dd5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512dd8: mov dword ptr [eax], 0x638a5c */ W32((u32)(r_eax), 0x638a5cu);
    /* 00512dde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512de1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00512de4: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00512dea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512ded: mov esp, ebp */ r_esp = r_ebp;
    /* 00512def: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512df0: ret 4 */ FN_RET(0x00512dc6); r_esp += 8; return;
}

void f_00512df3(void) /* FUN_00512df3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00512df3);
    /* 00512df3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512df4: mov ebp, esp */ r_ebp = r_esp;
    /* 00512df6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00512df9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00512dfc: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00512e03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512e05: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00512e0b: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x512e10u); f_0060e7bd();
    /* 00512e10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512e12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512e14: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00512e1a: call 0x52abf2 */ r_esp -= 4; W32(r_esp, 0x512e1fu); f_0052abf2();
    /* 00512e1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512e21: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00512e24: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x512e29u); f_005d6635();
    /* 00512e29: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00512e2c: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00512e32: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x512e37u); f_005e03cc();
    /* 00512e37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512e3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512e3b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00512e3e: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00512e44: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x512e49u); f_005b79b9();
    /* 00512e49: mov esp, ebp */ r_esp = r_ebp;
    /* 00512e4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512e4c: ret  */ FN_RET(0x00512df3); r_esp += 4; return;
}

void f_00512e4d(void) /* FUN_00512e4d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00512e4d);
    /* 00512e4d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512e4e: mov ebp, esp */ r_ebp = r_esp;
    /* 00512e50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512e51: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00512e54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512e56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512e58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512e5b: call 0x5b6af0 */ r_esp -= 4; W32(r_esp, 0x512e60u); f_005b6af0();
    /* 00512e60: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512e63: mov dword ptr [eax], 0x638acc */ W32((u32)(r_eax), 0x638accu);
    /* 00512e69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512e6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00512e6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512e6f: ret  */ FN_RET(0x00512e4d); r_esp += 4; return;
}

void f_00512e70(void) /* FUN_00512e70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00512e70);
    /* 00512e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00512e73: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00512e76: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00512e79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512e7b: push 0x186ab */ { u32 v = 0x186abu; r_esp -= 4; W32(r_esp, v); }
    /* 00512e80: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512e83: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x512e88u); f_005e0461();
    /* 00512e88: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00512e8a: push 0x6934f0 */ { u32 v = 0x6934f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512e8f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512e92: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x512e97u); f_005d825e();
    /* 00512e97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512e99: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512e9c: call 0x5b6c5e */ r_esp -= 4; W32(r_esp, 0x512ea1u); f_005b6c5e();
    /* 00512ea1: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00512ea6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x512eabu); f_0048ab58();
    /* 00512eab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512eae: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00512eb1: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512eb5: je 0x512ec8 */ if (fZ) goto L_00512ec8;
L_00512eb7:; BB(0x00512eb7);
    /* 00512eb7: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512eba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512ebb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00512ebe: call 0x5142de */ r_esp -= 4; W32(r_esp, 0x512ec3u); f_005142de();
    /* 00512ec3: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00512ec6: jmp 0x512ecf */ goto L_00512ecf;
L_00512ec8:; BB(0x00512ec8);
    /* 00512ec8: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00512ecf:; BB(0x00512ecf);
    /* 00512ecf: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512ed2: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00512ed5: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 00512edb: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512ee0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512ee3: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00512ee9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512eec: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00512ef2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512ef4: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x512ef7u); call_ind(t); }
    /* 00512ef7: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512efa: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00512f00: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512f03: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00512f09: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512f0b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x512f0eu); call_ind(t); }
    /* 00512f0e: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00512f10: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00512f12: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512f15: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00512f1b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512f1e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00512f24: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512f26: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x512f29u); call_ind(t); }
    /* 00512f29: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00512f2b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512f2e: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00512f34: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x512f39u); f_005d65d6();
    /* 00512f39: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512f3c: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00512f42: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512f45: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00512f4b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512f4d: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x512f50u); call_ind(t); }
    /* 00512f50: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00512f55: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x512f5au); f_0048ab58();
    /* 00512f5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512f5d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00512f60: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512f64: je 0x512f77 */ if (fZ) goto L_00512f77;
L_00512f66:; BB(0x00512f66);
    /* 00512f66: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512f69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512f6a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00512f6d: call 0x514456 */ r_esp -= 4; W32(r_esp, 0x512f72u); f_00514456();
    /* 00512f72: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00512f75: jmp 0x512f7e */ goto L_00512f7e;
L_00512f77:; BB(0x00512f77);
    /* 00512f77: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00512f7e:; BB(0x00512f7e);
    /* 00512f7e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512f81: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00512f84: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 00512f8a: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512f8f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512f92: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00512f98: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512f9b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00512fa1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512fa3: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x512fa6u); call_ind(t); }
    /* 00512fa6: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512fa9: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00512faf: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512fb2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00512fb8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512fba: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x512fbdu); call_ind(t); }
    /* 00512fbd: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00512fbf: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00512fc1: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512fc4: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00512fca: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512fcd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00512fd3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512fd5: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x512fd8u); call_ind(t); }
    /* 00512fd8: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00512fda: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512fdd: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00512fe3: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x512fe8u); f_005d65d6();
    /* 00512fe8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512feb: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00512ff1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00512ff4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00512ffa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512ffc: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x512fffu); call_ind(t); }
    /* 00512fff: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00513004: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x513009u); f_0048ab58();
    /* 00513009: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051300c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0051300f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513013: je 0x513026 */ if (fZ) goto L_00513026;
L_00513015:; BB(0x00513015);
    /* 00513015: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513019: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051301c: call 0x5145ce */ r_esp -= 4; W32(r_esp, 0x513021u); f_005145ce();
    /* 00513021: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00513024: jmp 0x51302d */ goto L_0051302d;
L_00513026:; BB(0x00513026);
    /* 00513026: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0051302d:; BB(0x0051302d);
    /* 0051302d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513030: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00513033: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 00513039: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051303e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513041: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00513047: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051304a: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00513050: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513052: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x513055u); call_ind(t); }
    /* 00513055: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513058: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0051305e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513061: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00513067: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513069: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x51306cu); call_ind(t); }
    /* 0051306c: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0051306e: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 00513073: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513076: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0051307c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051307f: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00513085: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513087: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x51308au); call_ind(t); }
    /* 0051308a: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0051308c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051308f: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00513095: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x51309au); f_005d65d6();
    /* 0051309a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051309d: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 005130a3: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005130a6: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005130ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005130ae: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5130b1u); call_ind(t); }
    /* 005130b1: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005130b6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5130bbu); f_0048ab58();
    /* 005130bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005130be: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005130c1: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005130c5: je 0x5130d8 */ if (fZ) goto L_005130d8;
L_005130c7:; BB(0x005130c7);
    /* 005130c7: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005130ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005130cb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005130ce: call 0x514746 */ r_esp -= 4; W32(r_esp, 0x5130d3u); f_00514746();
    /* 005130d3: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005130d6: jmp 0x5130df */ goto L_005130df;
L_005130d8:; BB(0x005130d8);
    /* 005130d8: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005130df:; BB(0x005130df);
    /* 005130df: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005130e2: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005130e5: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 005130eb: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 005130f0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005130f3: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005130f9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005130fc: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00513102: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513104: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x513107u); call_ind(t); }
    /* 00513107: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051310a: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00513110: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513113: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00513119: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051311b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x51311eu); call_ind(t); }
    /* 0051311e: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00513120: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 00513125: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513128: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0051312e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513131: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00513137: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513139: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x51313cu); call_ind(t); }
    /* 0051313c: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0051313e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513141: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00513147: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x51314cu); f_005d65d6();
    /* 0051314c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051314f: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00513155: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513158: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0051315e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513160: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x513163u); call_ind(t); }
    /* 00513163: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00513168: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x51316du); f_0048ab58();
    /* 0051316d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513170: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00513173: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513177: je 0x51318a */ if (fZ) goto L_0051318a;
L_00513179:; BB(0x00513179);
    /* 00513179: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051317c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051317d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00513180: call 0x5148be */ r_esp -= 4; W32(r_esp, 0x513185u); f_005148be();
    /* 00513185: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00513188: jmp 0x513191 */ goto L_00513191;
L_0051318a:; BB(0x0051318a);
    /* 0051318a: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00513191:; BB(0x00513191);
    /* 00513191: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513194: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00513197: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 0051319d: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 005131a2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005131a5: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 005131ab: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005131ae: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005131b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005131b6: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5131b9u); call_ind(t); }
    /* 005131b9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005131bc: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 005131c2: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005131c5: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005131cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005131cd: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5131d0u); call_ind(t); }
    /* 005131d0: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 005131d2: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 005131d7: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005131da: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 005131e0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005131e3: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005131e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005131eb: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5131eeu); call_ind(t); }
    /* 005131ee: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005131f0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005131f3: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 005131f9: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x5131feu); f_005d65d6();
    /* 005131fe: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513201: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 00513207: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051320a: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00513210: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513212: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x513215u); call_ind(t); }
    /* 00513215: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0051321a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x51321fu); f_0048ab58();
    /* 0051321f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513222: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00513225: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513229: je 0x513238 */ if (fZ) goto L_00513238;
L_0051322b:; BB(0x0051322b);
    /* 0051322b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051322e: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x513233u); f_005e8590();
    /* 00513233: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00513236: jmp 0x51323f */ goto L_0051323f;
L_00513238:; BB(0x00513238);
    /* 00513238: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0051323f:; BB(0x0051323f);
    /* 0051323f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513242: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00513245: mov dword ptr [eax + 0xc4], ecx */ W32((u32)(r_eax+0xc4u), r_ecx);
    /* 0051324b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051324d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513250: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00513256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513257: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051325a: call 0x5b7909 */ r_esp -= 4; W32(r_esp, 0x51325fu); f_005b7909();
    /* 0051325f: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00513261: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513264: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 0051326a: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x51326fu); f_005e8740();
    /* 0051326f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00513271: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513274: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 0051327a: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x51327fu); f_005e8775();
    /* 0051327f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00513281: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513284: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0051328a: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x51328fu); f_005e8e99();
    /* 0051328f: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 00513291: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00513293: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513296: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 0051329c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051329f: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005132a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005132a7: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5132aau); call_ind(t); }
    /* 005132aa: push 0x693500 */ { u32 v = 0x693500u; r_esp -= 4; W32(r_esp, v); }
    /* 005132af: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005132b2: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 005132b8: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005132bb: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005132c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005132c3: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5132c6u); call_ind(t); }
    /* 005132c6: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005132cb: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5132d0u); f_0048ab58();
    /* 005132d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005132d3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005132d6: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005132da: je 0x5132e9 */ if (fZ) goto L_005132e9;
L_005132dc:; BB(0x005132dc);
    /* 005132dc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005132df: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5132e4u); f_005e8590();
    /* 005132e4: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005132e7: jmp 0x5132f0 */ goto L_005132f0;
L_005132e9:; BB(0x005132e9);
    /* 005132e9: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005132f0:; BB(0x005132f0);
    /* 005132f0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005132f3: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005132f6: mov dword ptr [eax + 0xc8], ecx */ W32((u32)(r_eax+0xc8u), r_ecx);
    /* 005132fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005132fe: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513301: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00513307: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513308: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051330b: call 0x5b7909 */ r_esp -= 4; W32(r_esp, 0x513310u); f_005b7909();
    /* 00513310: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00513312: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513315: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 0051331b: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x513320u); f_005e8740();
    /* 00513320: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00513322: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513325: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 0051332b: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x513330u); f_005e8775();
    /* 00513330: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00513332: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513335: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 0051333b: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x513340u); f_005e8e99();
    /* 00513340: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 00513342: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00513344: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513347: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 0051334d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513350: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00513356: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513358: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x51335bu); call_ind(t); }
    /* 0051335b: push 0x693508 */ { u32 v = 0x693508u; r_esp -= 4; W32(r_esp, v); }
    /* 00513360: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513363: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 00513369: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051336c: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00513372: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513374: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x513377u); call_ind(t); }
    /* 00513377: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0051337c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x513381u); f_0048ab58();
    /* 00513381: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513384: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00513387: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051338b: je 0x51339a */ if (fZ) goto L_0051339a;
L_0051338d:; BB(0x0051338d);
    /* 0051338d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00513390: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x513395u); f_005e8590();
    /* 00513395: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00513398: jmp 0x5133a1 */ goto L_005133a1;
L_0051339a:; BB(0x0051339a);
    /* 0051339a: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005133a1:; BB(0x005133a1);
    /* 005133a1: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005133a4: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005133a7: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 005133ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005133af: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005133b2: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005133b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005133b9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005133bc: call 0x5b7909 */ r_esp -= 4; W32(r_esp, 0x5133c1u); f_005b7909();
    /* 005133c1: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005133c3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005133c6: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 005133cc: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5133d1u); f_005e8740();
    /* 005133d1: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005133d3: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005133d6: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 005133dc: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5133e1u); f_005e8775();
    /* 005133e1: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005133e3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005133e6: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005133ec: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5133f1u); f_005e8e99();
    /* 005133f1: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 005133f3: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005133f8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005133fb: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00513401: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513404: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0051340a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051340c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x51340fu); call_ind(t); }
    /* 0051340f: push 0x693510 */ { u32 v = 0x693510u; r_esp -= 4; W32(r_esp, v); }
    /* 00513414: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513417: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0051341d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513420: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00513426: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513428: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x51342bu); call_ind(t); }
    /* 0051342b: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 00513430: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x513435u); f_0048ab58();
    /* 00513435: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513438: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0051343b: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051343f: je 0x51344e */ if (fZ) goto L_0051344e;
L_00513441:; BB(0x00513441);
    /* 00513441: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00513444: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x513449u); f_005e8590();
    /* 00513449: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0051344c: jmp 0x513455 */ goto L_00513455;
L_0051344e:; BB(0x0051344e);
    /* 0051344e: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00513455:; BB(0x00513455);
    /* 00513455: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513458: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0051345b: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 00513461: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513463: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513466: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0051346c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051346d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513470: call 0x5b7909 */ r_esp -= 4; W32(r_esp, 0x513475u); f_005b7909();
    /* 00513475: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00513477: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051347a: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 00513480: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x513485u); f_005e8740();
    /* 00513485: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00513487: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051348a: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 00513490: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x513495u); f_005e8775();
    /* 00513495: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00513497: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051349a: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005134a0: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5134a5u); f_005e8e99();
    /* 005134a5: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 005134a7: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 005134ac: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005134af: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 005134b5: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005134b8: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005134be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005134c0: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5134c3u); call_ind(t); }
    /* 005134c3: push 0x693518 */ { u32 v = 0x693518u; r_esp -= 4; W32(r_esp, v); }
    /* 005134c8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005134cb: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005134d1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005134d4: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005134da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005134dc: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5134dfu); call_ind(t); }
    /* 005134df: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005134e4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5134e9u); f_0048ab58();
    /* 005134e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005134ec: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005134ef: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005134f3: je 0x513502 */ if (fZ) goto L_00513502;
L_005134f5:; BB(0x005134f5);
    /* 005134f5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005134f8: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5134fdu); f_005e8590();
    /* 005134fd: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00513500: jmp 0x513509 */ goto L_00513509;
L_00513502:; BB(0x00513502);
    /* 00513502: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00513509:; BB(0x00513509);
    /* 00513509: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051350c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0051350f: mov dword ptr [eax + 0xd4], ecx */ W32((u32)(r_eax+0xd4u), r_ecx);
    /* 00513515: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513517: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051351a: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00513520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513521: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513524: call 0x5b7909 */ r_esp -= 4; W32(r_esp, 0x513529u); f_005b7909();
    /* 00513529: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051352b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051352e: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 00513534: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x513539u); f_005e8740();
    /* 00513539: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051353b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051353e: mov ecx, dword ptr [edx + 0xd4] */ r_ecx = R32((u32)(r_edx+0xd4u));
    /* 00513544: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x513549u); f_005e8775();
    /* 00513549: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051354b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051354e: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00513554: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x513559u); f_005e8e99();
    /* 00513559: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051355b: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00513560: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513563: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 00513569: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051356c: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00513572: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513574: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x513577u); call_ind(t); }
    /* 00513577: push 0x693520 */ { u32 v = 0x693520u; r_esp -= 4; W32(r_esp, v); }
    /* 0051357c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051357f: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00513585: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513588: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 0051358e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513590: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x513593u); call_ind(t); }
    /* 00513593: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513595: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x51359au); f_0048ab58();
    /* 0051359a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051359d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005135a0: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135a4: je 0x5135b3 */ if (fZ) goto L_005135b3;
L_005135a6:; BB(0x005135a6);
    /* 005135a6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005135a9: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5135aeu); f_005e9d30();
    /* 005135ae: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005135b1: jmp 0x5135ba */ goto L_005135ba;
L_005135b3:; BB(0x005135b3);
    /* 005135b3: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_005135ba:; BB(0x005135ba);
    /* 005135ba: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005135bd: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005135c0: mov dword ptr [eax + 0xd8], ecx */ W32((u32)(r_eax+0xd8u), r_ecx);
    /* 005135c6: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 005135cb: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005135ce: mov ecx, dword ptr [edx + 0xd8] */ r_ecx = R32((u32)(r_edx+0xd8u));
    /* 005135d4: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5135d9u); f_005ea0c3();
    /* 005135d9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005135dc: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 005135e2: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005135e5: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005135eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005135ed: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5135f0u); call_ind(t); }
    /* 005135f0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005135f3: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005135f9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005135fc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00513602: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513604: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x513607u); call_ind(t); }
    /* 00513607: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513608: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051360b: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00513611: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513614: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0051361a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051361c: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x51361fu); call_ind(t); }
    /* 0051361f: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513623: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513626: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 0051362c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051362f: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00513635: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513637: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x51363au); call_ind(t); }
    /* 0051363a: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051363c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x513641u); f_0048ab58();
    /* 00513641: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513644: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00513647: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051364b: je 0x51365a */ if (fZ) goto L_0051365a;
L_0051364d:; BB(0x0051364d);
    /* 0051364d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00513650: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x513655u); f_005e9d30();
    /* 00513655: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00513658: jmp 0x513661 */ goto L_00513661;
L_0051365a:; BB(0x0051365a);
    /* 0051365a: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00513661:; BB(0x00513661);
    /* 00513661: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513664: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513667: mov dword ptr [eax + 0xdc], ecx */ W32((u32)(r_eax+0xdcu), r_ecx);
    /* 0051366d: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 00513672: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513675: mov ecx, dword ptr [edx + 0xdc] */ r_ecx = R32((u32)(r_edx+0xdcu));
    /* 0051367b: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x513680u); f_005ea0c3();
    /* 00513680: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513683: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00513689: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051368c: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00513692: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513694: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x513697u); call_ind(t); }
    /* 00513697: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051369a: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 005136a0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005136a3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005136a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005136ab: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5136aeu); call_ind(t); }
    /* 005136ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005136af: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005136b2: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 005136b8: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005136bb: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005136c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005136c3: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5136c6u); call_ind(t); }
    /* 005136c6: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005136c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005136ca: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005136cd: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 005136d3: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005136d6: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 005136dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005136de: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5136e1u); call_ind(t); }
    /* 005136e1: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005136e3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5136e8u); f_0048ab58();
    /* 005136e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005136eb: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005136ee: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005136f2: je 0x513701 */ if (fZ) goto L_00513701;
L_005136f4:; BB(0x005136f4);
    /* 005136f4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005136f7: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5136fcu); f_005e9d30();
    /* 005136fc: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005136ff: jmp 0x513708 */ goto L_00513708;
L_00513701:; BB(0x00513701);
    /* 00513701: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00513708:; BB(0x00513708);
    /* 00513708: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051370b: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0051370e: mov dword ptr [eax + 0xe0], ecx */ W32((u32)(r_eax+0xe0u), r_ecx);
    /* 00513714: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 00513719: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051371c: mov ecx, dword ptr [edx + 0xe0] */ r_ecx = R32((u32)(r_edx+0xe0u));
    /* 00513722: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x513727u); f_005ea0c3();
    /* 00513727: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051372a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00513730: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513733: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00513739: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051373b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x51373eu); call_ind(t); }
    /* 0051373e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513741: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00513747: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051374a: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00513750: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513752: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x513755u); call_ind(t); }
    /* 00513755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513756: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513759: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0051375f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513762: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00513768: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051376a: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x51376du); call_ind(t); }
    /* 0051376d: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513771: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513774: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0051377a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051377d: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00513783: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513785: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x513788u); call_ind(t); }
    /* 00513788: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051378a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x51378fu); f_0048ab58();
    /* 0051378f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513792: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00513795: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513799: je 0x5137a8 */ if (fZ) goto L_005137a8;
L_0051379b:; BB(0x0051379b);
    /* 0051379b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0051379e: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5137a3u); f_005e9d30();
    /* 005137a3: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005137a6: jmp 0x5137af */ goto L_005137af;
L_005137a8:; BB(0x005137a8);
    /* 005137a8: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005137af:; BB(0x005137af);
    /* 005137af: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005137b2: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005137b5: mov dword ptr [eax + 0xe4], ecx */ W32((u32)(r_eax+0xe4u), r_ecx);
    /* 005137bb: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 005137c0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005137c3: mov ecx, dword ptr [edx + 0xe4] */ r_ecx = R32((u32)(r_edx+0xe4u));
    /* 005137c9: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5137ceu); f_005ea0c3();
    /* 005137ce: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005137d1: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 005137d7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005137da: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 005137e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005137e2: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5137e5u); call_ind(t); }
    /* 005137e5: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005137e8: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005137ee: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005137f1: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005137f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005137f9: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5137fcu); call_ind(t); }
    /* 005137fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005137fd: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513800: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00513806: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513809: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0051380f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513811: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x513814u); call_ind(t); }
    /* 00513814: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513818: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051381b: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00513821: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513824: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 0051382a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051382c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x51382fu); call_ind(t); }
    /* 0051382f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513831: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x513836u); f_0048ab58();
    /* 00513836: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513839: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0051383c: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513840: je 0x51384f */ if (fZ) goto L_0051384f;
L_00513842:; BB(0x00513842);
    /* 00513842: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00513845: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x51384au); f_005e9d30();
    /* 0051384a: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0051384d: jmp 0x513856 */ goto L_00513856;
L_0051384f:; BB(0x0051384f);
    /* 0051384f: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00513856:; BB(0x00513856);
    /* 00513856: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513859: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0051385c: mov dword ptr [eax + 0xe8], ecx */ W32((u32)(r_eax+0xe8u), r_ecx);
    /* 00513862: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 00513867: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051386a: mov ecx, dword ptr [edx + 0xe8] */ r_ecx = R32((u32)(r_edx+0xe8u));
    /* 00513870: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x513875u); f_005ea0c3();
    /* 00513875: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513878: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 0051387e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513881: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00513887: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513889: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x51388cu); call_ind(t); }
    /* 0051388c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051388f: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00513895: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513898: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0051389e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005138a0: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5138a3u); call_ind(t); }
    /* 005138a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005138a4: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005138a7: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 005138ad: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005138b0: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005138b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005138b8: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5138bbu); call_ind(t); }
    /* 005138bb: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005138be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005138bf: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005138c2: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 005138c8: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005138cb: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 005138d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005138d3: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5138d6u); call_ind(t); }
    /* 005138d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005138d8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005138db: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005138e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005138e2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005138e5: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x5138eau); f_005b78bd();
    /* 005138ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005138ec: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005138ef: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005138f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005138f6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005138f9: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x5138feu); f_005b78bd();
    /* 005138fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513900: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513903: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 00513909: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051390a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051390d: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x513912u); f_005b78bd();
    /* 00513912: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513914: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513917: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0051391d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051391e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513921: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x513926u); f_005b78bd();
    /* 00513926: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513928: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051392b: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00513931: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513932: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513935: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x51393au); f_005b78bd();
    /* 0051393a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051393c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051393f: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 00513945: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513946: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513949: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x51394eu); f_005b78bd();
    /* 0051394e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513950: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513953: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00513959: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051395a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051395d: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x513962u); f_005b78bd();
    /* 00513962: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513964: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513967: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0051396d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051396e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513971: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x513976u); f_005b78bd();
    /* 00513976: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513978: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051397b: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 00513981: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513982: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513985: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x51398au); f_005b78bd();
    /* 0051398a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051398c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051398f: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 00513995: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513996: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513999: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x51399eu); f_005b78bd();
    /* 0051399e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005139a1: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 005139a7: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5139acu); f_005d9883();
    /* 005139ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005139af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005139b0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005139b3: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 005139b9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005139bc: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005139c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005139c4: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5139c7u); call_ind(t); }
    /* 005139c7: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005139ca: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 005139d0: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5139d5u); f_005d9883();
    /* 005139d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005139d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005139d9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005139dc: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 005139e2: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005139e5: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 005139eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005139ed: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5139f0u); call_ind(t); }
    /* 005139f0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005139f3: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005139f9: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5139feu); f_005d9883();
    /* 005139fe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513a01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513a02: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513a05: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 00513a0b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513a0e: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00513a14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513a16: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x513a19u); call_ind(t); }
    /* 00513a19: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513a1c: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00513a22: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x513a27u); f_005d9883();
    /* 00513a27: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513a2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513a2b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513a2e: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 00513a34: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513a37: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00513a3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513a3f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x513a42u); call_ind(t); }
    /* 00513a42: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513a45: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00513a4b: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x513a50u); f_005d9883();
    /* 00513a50: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513a53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513a54: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513a57: mov ecx, dword ptr [ecx + 0xe8] */ r_ecx = R32((u32)(r_ecx+0xe8u));
    /* 00513a5d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00513a60: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00513a66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513a68: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x513a6bu); call_ind(t); }
    /* 00513a6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00513a6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00513a6e: ret  */ FN_RET(0x00512e70); r_esp += 4; return;
}

void f_00513a6f(void) /* FUN_00513a6f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00513a6f);
    /* 00513a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00513a70: mov ebp, esp */ r_ebp = r_esp;
    /* 00513a72: sub esp, 0x4b4 */ {  u32 a = r_esp; u32 b = 0x4b4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00513a78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513a79: mov dword ptr [ebp - 0x4b4], ecx */ W32((u32)(r_ebp+0xfffffb4cu), r_ecx);
    /* 00513a7f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00513a81: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00513a87: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x513a8cu); f_0060e7bd();
    /* 00513a8c: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513a92: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00513a95: mov dword ptr [eax + 0xec], ecx */ W32((u32)(r_eax+0xecu), r_ecx);
    /* 00513a9b: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513aa1: mov dword ptr [edx + 0xf0], 0 */ W32((u32)(r_edx+0xf0u), 0x0u);
    /* 00513aab: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00513ab1: call 0x52fdf4 */ r_esp -= 4; W32(r_esp, 0x513ab6u); f_0052fdf4();
    /* 00513ab6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513ab7: mov eax, dword ptr [0x6f9fd4] */ r_eax = R32((u32)(0x6f9fd4u));
    /* 00513abc: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00513abf: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x513ac4u); f_005dd560();
    /* 00513ac4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00513ac7: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513acc: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513ad2: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00513ad8: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513ade: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00513ae4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513ae6: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x513ae9u); call_ind(t); }
    /* 00513ae9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00513aeb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00513aee: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00513af4: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x513af9u); f_005dd560();
    /* 00513af9: mov ecx, eax */ r_ecx = r_eax;
    /* 00513afb: call 0x50a1d2 */ r_esp -= 4; W32(r_esp, 0x513b00u); f_0050a1d2();
    /* 00513b00: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00513b03: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513b06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513b07: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513b0d: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00513b13: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x513b18u); f_005ea1cf();
    /* 00513b18: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00513b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513b1c: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513b1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513b20: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513b23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513b24: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00513b27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513b28: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513b2e: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00513b34: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x513b39u); f_005d5ff2();
    /* 00513b39: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513b3f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00513b45: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00513b4f: push 0x693528 */ { u32 v = 0x693528u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b54: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513b5a: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 00513b60: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513b66: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00513b6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513b6e: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x513b71u); call_ind(t); }
    /* 00513b71: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513b77: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00513b7d: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513b83: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00513b89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513b8b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x513b8eu); call_ind(t); }
    /* 00513b8e: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b93: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513b99: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00513b9f: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513ba5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00513bab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513bad: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x513bb0u); call_ind(t); }
    /* 00513bb0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00513bb2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00513bb5: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00513bbb: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x513bc0u); f_005dd560();
    /* 00513bc0: mov ecx, eax */ r_ecx = r_eax;
    /* 00513bc2: call 0x50a1d2 */ r_esp -= 4; W32(r_esp, 0x513bc7u); f_0050a1d2();
    /* 00513bc7: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00513bca: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513bcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513bce: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513bd4: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 00513bda: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x513bdfu); f_005ea1cf();
    /* 00513bdf: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00513be2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513be3: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513be6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513be7: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513bea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513beb: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00513bee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513bef: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513bf5: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00513bfb: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x513c00u); f_005d5ff2();
    /* 00513c00: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513c06: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00513c0c: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00513c16: push 0x693530 */ { u32 v = 0x693530u; r_esp -= 4; W32(r_esp, v); }
    /* 00513c1b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513c21: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 00513c27: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513c2d: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00513c33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513c35: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x513c38u); call_ind(t); }
    /* 00513c38: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513c3e: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00513c44: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513c4a: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00513c50: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513c52: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x513c55u); call_ind(t); }
    /* 00513c55: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513c5a: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513c60: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00513c66: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513c6c: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00513c72: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513c74: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x513c77u); call_ind(t); }
    /* 00513c77: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00513c79: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00513c7c: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00513c82: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x513c87u); f_005dd560();
    /* 00513c87: mov ecx, eax */ r_ecx = r_eax;
    /* 00513c89: call 0x50a1d2 */ r_esp -= 4; W32(r_esp, 0x513c8eu); f_0050a1d2();
    /* 00513c8e: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00513c91: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513c94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513c95: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513c9b: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00513ca1: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x513ca6u); f_005ea1cf();
    /* 00513ca6: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00513ca9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513caa: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513cad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513cae: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513cb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513cb2: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00513cb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513cb6: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513cbc: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00513cc2: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x513cc7u); f_005d5ff2();
    /* 00513cc7: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513ccd: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00513cd3: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00513cdd: push 0x693538 */ { u32 v = 0x693538u; r_esp -= 4; W32(r_esp, v); }
    /* 00513ce2: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513ce8: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00513cee: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513cf4: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00513cfa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513cfc: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x513cffu); call_ind(t); }
    /* 00513cff: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513d05: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00513d0b: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513d11: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00513d17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513d19: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x513d1cu); call_ind(t); }
    /* 00513d1c: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513d21: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513d27: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00513d2d: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513d33: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00513d39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513d3b: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x513d3eu); call_ind(t); }
    /* 00513d3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513d40: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00513d43: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00513d49: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x513d4eu); f_005dd560();
    /* 00513d4e: mov ecx, eax */ r_ecx = r_eax;
    /* 00513d50: call 0x50a1d2 */ r_esp -= 4; W32(r_esp, 0x513d55u); f_0050a1d2();
    /* 00513d55: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00513d58: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513d5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513d5c: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513d62: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00513d68: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x513d6du); f_005ea1cf();
    /* 00513d6d: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00513d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513d71: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513d74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513d75: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513d78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513d79: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00513d7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513d7d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513d83: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00513d89: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x513d8eu); f_005d5ff2();
    /* 00513d8e: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513d94: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00513d9a: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00513da4: push 0x693540 */ { u32 v = 0x693540u; r_esp -= 4; W32(r_esp, v); }
    /* 00513da9: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513daf: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 00513db5: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513dbb: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00513dc1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513dc3: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x513dc6u); call_ind(t); }
    /* 00513dc6: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513dcc: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00513dd2: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513dd8: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00513dde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513de0: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x513de3u); call_ind(t); }
    /* 00513de3: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513de8: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513dee: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00513df4: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513dfa: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00513e00: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513e02: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x513e05u); call_ind(t); }
    /* 00513e05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513e07: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00513e0a: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 00513e10: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x513e15u); f_005dd560();
    /* 00513e15: mov ecx, eax */ r_ecx = r_eax;
    /* 00513e17: call 0x50a1d2 */ r_esp -= 4; W32(r_esp, 0x513e1cu); f_0050a1d2();
    /* 00513e1c: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00513e1f: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513e22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e23: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513e29: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 00513e2f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x513e34u); f_005ea1cf();
    /* 00513e34: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00513e37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513e38: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513e3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e3c: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00513e3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e40: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00513e43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513e44: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513e4a: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 00513e50: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x513e55u); f_005d5ff2();
    /* 00513e55: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513e5b: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00513e61: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00513e6b: push 0x693548 */ { u32 v = 0x693548u; r_esp -= 4; W32(r_esp, v); }
    /* 00513e70: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513e76: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 00513e7c: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513e82: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00513e88: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513e8a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x513e8du); call_ind(t); }
    /* 00513e8d: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513e93: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 00513e99: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513e9f: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00513ea5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00513ea7: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x513eaau); call_ind(t); }
    /* 00513eaa: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513eb0: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x513eb5u); f_005e030e();
    /* 00513eb5: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513ebc: je 0x513ed6 */ if (fZ) goto L_00513ed6;
L_00513ebe:; BB(0x00513ebe);
    /* 00513ebe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513ec0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513ec2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513ec4: push 0x385 */ { u32 v = 0x385u; r_esp -= 4; W32(r_esp, v); }
    /* 00513ec9: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 00513ece: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00513ed1: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x513ed6u); f_005e8389();
L_00513ed6:; BB(0x00513ed6);
    /* 00513ed6: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00513ed9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513eda: mov edx, dword ptr [0x6f9fd4] */ r_edx = R32((u32)(0x6f9fd4u));
    /* 00513ee0: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00513ee6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513ee7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 00513eed: call 0x460713 */ r_esp -= 4; W32(r_esp, 0x513ef2u); f_00460713();
    /* 00513ef2: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00513ef5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513ef6: push 0x693550 */ { u32 v = 0x693550u; r_esp -= 4; W32(r_esp, v); }
    /* 00513efb: lea edx, [ebp - 0x47c] */ r_edx = (u32)(r_ebp+0xfffffb84u);
    /* 00513f01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f02: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x513f07u); f_00624050();
    /* 00513f07: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513f0a: lea eax, [ebp - 0x47c] */ r_eax = (u32)(r_ebp+0xfffffb84u);
    /* 00513f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513f11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f13: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00513f15: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00513f1b: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x513f20u); f_0060e8c0();
    /* 00513f20: push 0x693624 */ { u32 v = 0x693624u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f25: lea ecx, [ebp - 0x47c] */ r_ecx = (u32)(r_ebp+0xfffffb84u);
    /* 00513f2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f2c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x513f31u); f_00624510();
    /* 00513f31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513f34: lea edx, [ebp - 0x47c] */ r_edx = (u32)(r_ebp+0xfffffb84u);
    /* 00513f3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f3f: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00513f45: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x513f4au); f_0060e8c0();
    /* 00513f4a: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00513f50: call 0x52fdf4 */ r_esp -= 4; W32(r_esp, 0x513f55u); f_0052fdf4();
    /* 00513f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513f56: mov eax, dword ptr [0x6f9fd4] */ r_eax = R32((u32)(0x6f9fd4u));
    /* 00513f5b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00513f5e: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x513f63u); f_005dd560();
    /* 00513f63: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00513f66: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00513f69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00513f6d: call 0x570ac7 */ r_esp -= 4; W32(r_esp, 0x513f72u); f_00570ac7();
    /* 00513f72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f7e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f80: lea edx, [ebp - 0x480] */ r_edx = (u32)(r_ebp+0xfffffb80u);
    /* 00513f86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f87: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00513f8a: call 0x5326cf */ r_esp -= 4; W32(r_esp, 0x513f8fu); f_005326cf();
    /* 00513f8f: mov eax, dword ptr [0x6fa084] */ r_eax = R32((u32)(0x6fa084u));
    /* 00513f94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513f95: lea ecx, [ebp - 0x484] */ r_ecx = (u32)(r_ebp+0xfffffb7cu);
    /* 00513f9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f9c: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 00513fa2: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x513fa7u); f_0054b5cb();
    /* 00513fa7: mov ecx, eax */ r_ecx = r_eax;
    /* 00513fa9: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x513faeu); f_0054b351();
    /* 00513fae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513fb0: jne 0x514021 */ if (!fZ) goto L_00514021;
L_00513fb2:; BB(0x00513fb2);
    /* 00513fb2: mov edx, dword ptr [0x6fa024] */ r_edx = R32((u32)(0x6fa024u));
    /* 00513fb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513fb9: lea eax, [ebp - 0x488] */ r_eax = (u32)(r_ebp+0xfffffb78u);
    /* 00513fbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513fc0: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 00513fc6: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x513fcbu); f_0054b5cb();
    /* 00513fcb: mov ecx, eax */ r_ecx = r_eax;
    /* 00513fcd: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x513fd2u); f_0054b351();
    /* 00513fd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513fd4: jne 0x514021 */ if (!fZ) goto L_00514021;
L_00513fd6:; BB(0x00513fd6);
    /* 00513fd6: mov ecx, dword ptr [0x6fa030] */ r_ecx = R32((u32)(0x6fa030u));
    /* 00513fdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513fdd: lea edx, [ebp - 0x48c] */ r_edx = (u32)(r_ebp+0xfffffb74u);
    /* 00513fe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513fe4: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 00513fea: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x513fefu); f_0054b5cb();
    /* 00513fef: mov ecx, eax */ r_ecx = r_eax;
    /* 00513ff1: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x513ff6u); f_0054b351();
    /* 00513ff6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513ff8: jne 0x514021 */ if (!fZ) goto L_00514021;
L_00513ffa:; BB(0x00513ffa);
    /* 00513ffa: mov eax, dword ptr [0x6fa050] */ r_eax = R32((u32)(0x6fa050u));
    /* 00513fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514000: lea ecx, [ebp - 0x490] */ r_ecx = (u32)(r_ebp+0xfffffb70u);
    /* 00514006: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514007: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 0051400d: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x514012u); f_0054b5cb();
    /* 00514012: mov ecx, eax */ r_ecx = r_eax;
    /* 00514014: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x514019u); f_0054b351();
    /* 00514019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051401b: je 0x514112 */ if (fZ) goto L_00514112;
L_00514021:; BB(0x00514021);
    /* 00514021: mov edx, dword ptr [0x6fa084] */ r_edx = R32((u32)(0x6fa084u));
    /* 00514027: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514028: lea eax, [ebp - 0x494] */ r_eax = (u32)(r_ebp+0xfffffb6cu);
    /* 0051402e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051402f: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 00514035: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x51403au); f_0054b5cb();
    /* 0051403a: mov ecx, eax */ r_ecx = r_eax;
    /* 0051403c: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x514041u); f_0054b351();
    /* 00514041: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514043: je 0x514056 */ if (fZ) goto L_00514056;
L_00514045:; BB(0x00514045);
    /* 00514045: push 0x6936dc */ { u32 v = 0x6936dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051404a: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 0051404d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051404e: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x514053u); f_00624510();
    /* 00514053: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00514056:; BB(0x00514056);
    /* 00514056: mov edx, dword ptr [0x6fa024] */ r_edx = R32((u32)(0x6fa024u));
    /* 0051405c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051405d: lea eax, [ebp - 0x498] */ r_eax = (u32)(r_ebp+0xfffffb68u);
    /* 00514063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514064: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 0051406a: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x51406fu); f_0054b5cb();
    /* 0051406f: mov ecx, eax */ r_ecx = r_eax;
    /* 00514071: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x514076u); f_0054b351();
    /* 00514076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514078: je 0x51408b */ if (fZ) goto L_0051408b;
L_0051407a:; BB(0x0051407a);
    /* 0051407a: push 0x6936ec */ { u32 v = 0x6936ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051407f: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00514082: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514083: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x514088u); f_00624510();
    /* 00514088: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051408b:; BB(0x0051408b);
    /* 0051408b: mov edx, dword ptr [0x6fa030] */ r_edx = R32((u32)(0x6fa030u));
    /* 00514091: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514092: lea eax, [ebp - 0x49c] */ r_eax = (u32)(r_ebp+0xfffffb64u);
    /* 00514098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514099: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 0051409f: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x5140a4u); f_0054b5cb();
    /* 005140a4: mov ecx, eax */ r_ecx = r_eax;
    /* 005140a6: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x5140abu); f_0054b351();
    /* 005140ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005140ad: je 0x5140c0 */ if (fZ) goto L_005140c0;
L_005140af:; BB(0x005140af);
    /* 005140af: push 0x6936f8 */ { u32 v = 0x6936f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005140b4: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 005140b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005140b8: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5140bdu); f_00624510();
    /* 005140bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005140c0:; BB(0x005140c0);
    /* 005140c0: mov edx, dword ptr [0x6fa050] */ r_edx = R32((u32)(0x6fa050u));
    /* 005140c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005140c7: lea eax, [ebp - 0x4a0] */ r_eax = (u32)(r_ebp+0xfffffb60u);
    /* 005140cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005140ce: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 005140d4: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x5140d9u); f_0054b5cb();
    /* 005140d9: mov ecx, eax */ r_ecx = r_eax;
    /* 005140db: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x5140e0u); f_0054b351();
    /* 005140e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005140e2: je 0x5140f5 */ if (fZ) goto L_005140f5;
L_005140e4:; BB(0x005140e4);
    /* 005140e4: push 0x693700 */ { u32 v = 0x693700u; r_esp -= 4; W32(r_esp, v); }
    /* 005140e9: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 005140ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005140ed: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5140f2u); f_00624510();
    /* 005140f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005140f5:; BB(0x005140f5);
    /* 005140f5: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 005140f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005140f9: push 0x69370c */ { u32 v = 0x69370cu; r_esp -= 4; W32(r_esp, v); }
    /* 005140fe: lea eax, [ebp - 0x47c] */ r_eax = (u32)(r_ebp+0xfffffb84u);
    /* 00514104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514105: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x51410au); f_00624050();
    /* 0051410a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051410d: jmp 0x514214 */ goto L_00514214;
L_00514112:; BB(0x00514112);
    /* 00514112: mov ecx, dword ptr [0x6fa0f8] */ r_ecx = R32((u32)(0x6fa0f8u));
    /* 00514118: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514119: lea edx, [ebp - 0x4a4] */ r_edx = (u32)(r_ebp+0xfffffb5cu);
    /* 0051411f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514120: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 00514126: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x51412bu); f_0054b5cb();
    /* 0051412b: mov ecx, eax */ r_ecx = r_eax;
    /* 0051412d: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x514132u); f_0054b351();
    /* 00514132: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514134: je 0x51414f */ if (fZ) goto L_0051414f;
L_00514136:; BB(0x00514136);
    /* 00514136: push 0x69376c */ { u32 v = 0x69376cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051413b: lea eax, [ebp - 0x47c] */ r_eax = (u32)(r_ebp+0xfffffb84u);
    /* 00514141: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514142: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x514147u); f_00624510();
    /* 00514147: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051414a: jmp 0x514214 */ goto L_00514214;
L_0051414f:; BB(0x0051414f);
    /* 0051414f: mov ecx, dword ptr [0x6fa058] */ r_ecx = R32((u32)(0x6fa058u));
    /* 00514155: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514156: lea edx, [ebp - 0x4a8] */ r_edx = (u32)(r_ebp+0xfffffb58u);
    /* 0051415c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051415d: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 00514163: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x514168u); f_0054b5cb();
    /* 00514168: mov ecx, eax */ r_ecx = r_eax;
    /* 0051416a: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x51416fu); f_0054b351();
    /* 0051416f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514171: je 0x51418c */ if (fZ) goto L_0051418c;
L_00514173:; BB(0x00514173);
    /* 00514173: push 0x6937f0 */ { u32 v = 0x6937f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514178: lea eax, [ebp - 0x47c] */ r_eax = (u32)(r_ebp+0xfffffb84u);
    /* 0051417e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051417f: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x514184u); f_00624510();
    /* 00514184: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514187: jmp 0x514214 */ goto L_00514214;
L_0051418c:; BB(0x0051418c);
    /* 0051418c: mov ecx, dword ptr [0x6fa0c4] */ r_ecx = R32((u32)(0x6fa0c4u));
    /* 00514192: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514193: lea edx, [ebp - 0x4ac] */ r_edx = (u32)(r_ebp+0xfffffb54u);
    /* 00514199: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051419a: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 005141a0: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x5141a5u); f_0054b5cb();
    /* 005141a5: mov ecx, eax */ r_ecx = r_eax;
    /* 005141a7: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x5141acu); f_0054b351();
    /* 005141ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005141ae: je 0x5141c6 */ if (fZ) goto L_005141c6;
L_005141b0:; BB(0x005141b0);
    /* 005141b0: push 0x6938a4 */ { u32 v = 0x6938a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005141b5: lea eax, [ebp - 0x47c] */ r_eax = (u32)(r_ebp+0xfffffb84u);
    /* 005141bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005141bc: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5141c1u); f_00624510();
    /* 005141c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005141c4: jmp 0x514214 */ goto L_00514214;
L_005141c6:; BB(0x005141c6);
    /* 005141c6: mov ecx, dword ptr [0x6fa0a4] */ r_ecx = R32((u32)(0x6fa0a4u));
    /* 005141cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005141cd: lea edx, [ebp - 0x4b0] */ r_edx = (u32)(r_ebp+0xfffffb50u);
    /* 005141d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005141d4: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 005141da: call 0x54b5cb */ r_esp -= 4; W32(r_esp, 0x5141dfu); f_0054b5cb();
    /* 005141df: mov ecx, eax */ r_ecx = r_eax;
    /* 005141e1: call 0x54b351 */ r_esp -= 4; W32(r_esp, 0x5141e6u); f_0054b351();
    /* 005141e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005141e8: je 0x514200 */ if (fZ) goto L_00514200;
L_005141ea:; BB(0x005141ea);
    /* 005141ea: push 0x693940 */ { u32 v = 0x693940u; r_esp -= 4; W32(r_esp, v); }
    /* 005141ef: lea eax, [ebp - 0x47c] */ r_eax = (u32)(r_ebp+0xfffffb84u);
    /* 005141f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005141f6: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5141fbu); f_00624510();
    /* 005141fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005141fe: jmp 0x514214 */ goto L_00514214;
L_00514200:; BB(0x00514200);
    /* 00514200: push 0x693a48 */ { u32 v = 0x693a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00514205: lea ecx, [ebp - 0x47c] */ r_ecx = (u32)(r_ebp+0xfffffb84u);
    /* 0051420b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051420c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x514211u); f_00624510();
    /* 00514211: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00514214:; BB(0x00514214);
    /* 00514214: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 0051421a: call 0x52d531 */ r_esp -= 4; W32(r_esp, 0x51421fu); f_0052d531();
    /* 0051421f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514222: jne 0x514238 */ if (!fZ) goto L_00514238;
L_00514224:; BB(0x00514224);
    /* 00514224: push 0x693b0c */ { u32 v = 0x693b0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00514229: lea edx, [ebp - 0x47c] */ r_edx = (u32)(r_ebp+0xfffffb84u);
    /* 0051422f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514230: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x514235u); f_00624510();
    /* 00514235: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00514238:; BB(0x00514238);
    /* 00514238: lea eax, [ebp - 0x47c] */ r_eax = (u32)(r_ebp+0xfffffb84u);
    /* 0051423e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051423f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514241: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514243: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 00514249: call 0x60e8c0 */ r_esp -= 4; W32(r_esp, 0x51424eu); f_0060e8c0();
    /* 0051424e: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514252: je 0x514290 */ if (fZ) goto L_00514290;
L_00514254:; BB(0x00514254);
    /* 00514254: mov word ptr [ebp - 0x7c], 0 */ W16((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0051425a: jmp 0x514268 */ goto L_00514268;
L_0051425c:; BB(0x0051425c);
    /* 0051425c: mov cx, word ptr [ebp - 0x7c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff84u))) & 0xffffu);
    /* 00514260: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00514264: mov word ptr [ebp - 0x7c], cx */ W16((u32)(r_ebp+0xffffff84u), (u16)r_ecx);
L_00514268:; BB(0x00514268);
    /* 00514268: movsx edx, word ptr [ebp - 0x7c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 0051426c: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051426f: jge 0x51428e */ if ((fS==fO)) goto L_0051428e;
L_00514271:; BB(0x00514271);
    /* 00514271: movsx eax, word ptr [ebp - 0x7c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 00514275: movsx ecx, word ptr [ebp - 0x7c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 00514279: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051427f: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00514282: mov eax, dword ptr [esi + eax*4] */ r_eax = R32((u32)(r_esi+r_eax*4));
    /* 00514285: mov dword ptr [edx + ecx*4 + 0xf4], eax */ W32((u32)(r_edx+r_ecx*4+0xf4u), r_eax);
    /* 0051428c: jmp 0x51425c */ goto L_0051425c;
L_0051428e:; BB(0x0051428e);
    /* 0051428e: jmp 0x5142c4 */ goto L_005142c4;
L_00514290:; BB(0x00514290);
    /* 00514290: mov word ptr [ebp - 0x7c], 0 */ W16((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 00514296: jmp 0x5142a4 */ goto L_005142a4;
L_00514298:; BB(0x00514298);
    /* 00514298: mov cx, word ptr [ebp - 0x7c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff84u))) & 0xffffu);
    /* 0051429c: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005142a0: mov word ptr [ebp - 0x7c], cx */ W16((u32)(r_ebp+0xffffff84u), (u16)r_ecx);
L_005142a4:; BB(0x005142a4);
    /* 005142a4: movsx edx, word ptr [ebp - 0x7c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 005142a8: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005142ab: jge 0x5142c4 */ if ((fS==fO)) goto L_005142c4;
L_005142ad:; BB(0x005142ad);
    /* 005142ad: movsx eax, word ptr [ebp - 0x7c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 005142b1: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005142b7: mov dword ptr [ecx + eax*4 + 0xf4], 0 */ W32((u32)(r_ecx+r_eax*4+0xf4u), 0x0u);
    /* 005142c2: jmp 0x514298 */ goto L_00514298;
L_005142c4:; BB(0x005142c4);
    /* 005142c4: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 005142ca: call 0x54b569 */ r_esp -= 4; W32(r_esp, 0x5142cfu); f_0054b569();
    /* 005142cf: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005142d2: call 0x5314b1 */ r_esp -= 4; W32(r_esp, 0x5142d7u); f_005314b1();
    /* 005142d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005142d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005142da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005142db: ret 8 */ FN_RET(0x00513a6f); r_esp += 12; return;
}

void f_00514318(void) /* FUN_00514318 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514318);
    /* 00514318: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514319: mov ebp, esp */ r_ebp = r_esp;
    /* 0051431b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051431c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051431f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514322: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514329: je 0x5143a9 */ if (fZ) goto L_005143a9;
L_0051432b:; BB(0x0051432b);
    /* 0051432b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051432e: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514334: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0051433a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051433d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514340: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514346: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 0051434c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051434f: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00514359: push 0x693be4 */ { u32 v = 0x693be4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051435e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514361: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514367: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 0051436d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514370: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00514376: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0051437c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051437e: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x514381u); call_ind(t); }
    /* 00514381: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514384: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051438a: mov ecx, dword ptr [ecx + 0xd8] */ r_ecx = R32((u32)(r_ecx+0xd8u));
    /* 00514390: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514393: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00514399: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0051439f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005143a1: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5143a4u); call_ind(t); }
    /* 005143a4: jmp 0x514442 */ goto L_00514442;
L_005143a9:; BB(0x005143a9);
    /* 005143a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005143ac: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 005143b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005143b5: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005143bb: mov edx, dword ptr [edx + 0xf0] */ r_edx = R32((u32)(r_edx+0xf0u));
    /* 005143c1: cmp edx, dword ptr [ecx + 0xec] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005143c7: jge 0x514442 */ if ((fS==fO)) goto L_00514442;
L_005143c9:; BB(0x005143c9);
    /* 005143c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005143cc: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005143d2: mov edx, dword ptr [ecx + 0xf0] */ r_edx = R32((u32)(r_ecx+0xf0u));
    /* 005143d8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005143db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005143de: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005143e4: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 005143ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005143ed: mov dword ptr [edx + 0xcc], 1 */ W32((u32)(r_edx+0xccu), 0x1u);
    /* 005143f7: push 0x693bec */ { u32 v = 0x693becu; r_esp -= 4; W32(r_esp, v); }
    /* 005143fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005143ff: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00514405: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 0051440b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051440e: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00514414: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0051441a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051441c: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x51441fu); call_ind(t); }
    /* 0051441f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514422: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514428: mov ecx, dword ptr [edx + 0xd8] */ r_ecx = R32((u32)(r_edx+0xd8u));
    /* 0051442e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514431: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00514437: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0051443d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051443f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x514442u); call_ind(t); }
L_00514442:; BB(0x00514442);
    /* 00514442: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514444: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514447: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051444d: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x514452u); f_005b79b9();
    /* 00514452: mov esp, ebp */ r_esp = r_ebp;
    /* 00514454: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514455: ret  */ FN_RET(0x00514318); r_esp += 4; return;
}

void f_00514490(void) /* FUN_00514490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514490);
    /* 00514490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514491: mov ebp, esp */ r_ebp = r_esp;
    /* 00514493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00514497: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051449a: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005144a1: je 0x514521 */ if (fZ) goto L_00514521;
L_005144a3:; BB(0x005144a3);
    /* 005144a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005144a6: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 005144ac: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005144b2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005144b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005144b8: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 005144be: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 005144c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005144c7: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 005144d1: push 0x693bf4 */ { u32 v = 0x693bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 005144d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005144d9: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 005144df: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 005144e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005144e8: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 005144ee: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005144f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005144f6: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5144f9u); call_ind(t); }
    /* 005144f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005144fc: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00514502: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 00514508: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051450b: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00514511: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 00514517: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514519: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x51451cu); call_ind(t); }
    /* 0051451c: jmp 0x5145ba */ goto L_005145ba;
L_00514521:; BB(0x00514521);
    /* 00514521: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514524: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0051452a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051452d: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00514533: mov edx, dword ptr [edx + 0xf0] */ r_edx = R32((u32)(r_edx+0xf0u));
    /* 00514539: cmp edx, dword ptr [ecx + 0xec] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051453f: jge 0x5145ba */ if ((fS==fO)) goto L_005145ba;
L_00514541:; BB(0x00514541);
    /* 00514541: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514544: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051454a: mov edx, dword ptr [ecx + 0xf0] */ r_edx = R32((u32)(r_ecx+0xf0u));
    /* 00514550: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00514553: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514556: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051455c: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 00514562: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514565: mov dword ptr [edx + 0xcc], 1 */ W32((u32)(r_edx+0xccu), 0x1u);
    /* 0051456f: push 0x693bfc */ { u32 v = 0x693bfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00514574: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514577: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051457d: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 00514583: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514586: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0051458c: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00514592: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514594: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x514597u); call_ind(t); }
    /* 00514597: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051459a: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 005145a0: mov ecx, dword ptr [edx + 0xdc] */ r_ecx = R32((u32)(r_edx+0xdcu));
    /* 005145a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005145a9: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 005145af: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 005145b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005145b7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5145bau); call_ind(t); }
L_005145ba:; BB(0x005145ba);
    /* 005145ba: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005145bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005145bf: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005145c5: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x5145cau); f_005b79b9();
    /* 005145ca: mov esp, ebp */ r_esp = r_ebp;
    /* 005145cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005145cd: ret  */ FN_RET(0x00514490); r_esp += 4; return;
}

void f_00514608(void) /* FUN_00514608 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514608);
    /* 00514608: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514609: mov ebp, esp */ r_ebp = r_esp;
    /* 0051460b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051460c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051460f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514612: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514619: je 0x514699 */ if (fZ) goto L_00514699;
L_0051461b:; BB(0x0051461b);
    /* 0051461b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051461e: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514624: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0051462a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051462d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514630: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514636: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 0051463c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051463f: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00514649: push 0x693c04 */ { u32 v = 0x693c04u; r_esp -= 4; W32(r_esp, v); }
    /* 0051464e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514651: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514657: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 0051465d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514660: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00514666: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0051466c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051466e: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x514671u); call_ind(t); }
    /* 00514671: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514674: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051467a: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 00514680: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514683: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00514689: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0051468f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514691: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x514694u); call_ind(t); }
    /* 00514694: jmp 0x514732 */ goto L_00514732;
L_00514699:; BB(0x00514699);
    /* 00514699: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051469c: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 005146a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005146a5: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005146ab: mov edx, dword ptr [edx + 0xf0] */ r_edx = R32((u32)(r_edx+0xf0u));
    /* 005146b1: cmp edx, dword ptr [ecx + 0xec] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005146b7: jge 0x514732 */ if ((fS==fO)) goto L_00514732;
L_005146b9:; BB(0x005146b9);
    /* 005146b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005146bc: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005146c2: mov edx, dword ptr [ecx + 0xf0] */ r_edx = R32((u32)(r_ecx+0xf0u));
    /* 005146c8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005146cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005146ce: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005146d4: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 005146da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005146dd: mov dword ptr [edx + 0xcc], 1 */ W32((u32)(r_edx+0xccu), 0x1u);
    /* 005146e7: push 0x693c0c */ { u32 v = 0x693c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 005146ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005146ef: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005146f5: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 005146fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005146fe: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00514704: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 0051470a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051470c: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x51470fu); call_ind(t); }
    /* 0051470f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514712: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514718: mov ecx, dword ptr [edx + 0xe0] */ r_ecx = R32((u32)(r_edx+0xe0u));
    /* 0051471e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514721: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00514727: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0051472d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051472f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x514732u); call_ind(t); }
L_00514732:; BB(0x00514732);
    /* 00514732: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00514734: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514737: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051473d: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x514742u); f_005b79b9();
    /* 00514742: mov esp, ebp */ r_esp = r_ebp;
    /* 00514744: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514745: ret  */ FN_RET(0x00514608); r_esp += 4; return;
}

void f_00514780(void) /* FUN_00514780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514780);
    /* 00514780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514781: mov ebp, esp */ r_ebp = r_esp;
    /* 00514783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00514787: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051478a: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514791: je 0x514811 */ if (fZ) goto L_00514811;
L_00514793:; BB(0x00514793);
    /* 00514793: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514796: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0051479c: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005147a2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005147a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005147a8: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 005147ae: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 005147b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005147b7: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 005147c1: push 0x693c14 */ { u32 v = 0x693c14u; r_esp -= 4; W32(r_esp, v); }
    /* 005147c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005147c9: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 005147cf: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 005147d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005147d8: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 005147de: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005147e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005147e6: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5147e9u); call_ind(t); }
    /* 005147e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005147ec: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005147f2: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 005147f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005147fb: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00514801: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 00514807: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514809: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x51480cu); call_ind(t); }
    /* 0051480c: jmp 0x5148aa */ goto L_005148aa;
L_00514811:; BB(0x00514811);
    /* 00514811: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514814: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0051481a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051481d: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00514823: mov edx, dword ptr [edx + 0xf0] */ r_edx = R32((u32)(r_edx+0xf0u));
    /* 00514829: cmp edx, dword ptr [ecx + 0xec] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051482f: jge 0x5148aa */ if ((fS==fO)) goto L_005148aa;
L_00514831:; BB(0x00514831);
    /* 00514831: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514834: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051483a: mov edx, dword ptr [ecx + 0xf0] */ r_edx = R32((u32)(r_ecx+0xf0u));
    /* 00514840: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00514843: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514846: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051484c: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 00514852: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514855: mov dword ptr [edx + 0xcc], 1 */ W32((u32)(r_edx+0xccu), 0x1u);
    /* 0051485f: push 0x693c1c */ { u32 v = 0x693c1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00514864: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514867: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051486d: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 00514873: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514876: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0051487c: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00514882: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514884: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x514887u); call_ind(t); }
    /* 00514887: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051488a: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514890: mov ecx, dword ptr [edx + 0xe4] */ r_ecx = R32((u32)(r_edx+0xe4u));
    /* 00514896: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514899: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0051489f: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 005148a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005148a7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5148aau); call_ind(t); }
L_005148aa:; BB(0x005148aa);
    /* 005148aa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005148ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005148af: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005148b5: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x5148bau); f_005b79b9();
    /* 005148ba: mov esp, ebp */ r_esp = r_ebp;
    /* 005148bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005148bd: ret  */ FN_RET(0x00514780); r_esp += 4; return;
}

void f_005148f8(void) /* FUN_005148f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005148f8);
    /* 005148f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005148f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005148fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005148fc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005148ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514902: cmp dword ptr [eax + 0xcc], 0 */ {  u32 a = R32((u32)(r_eax+0xccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514909: je 0x514989 */ if (fZ) goto L_00514989;
L_0051490b:; BB(0x0051490b);
    /* 0051490b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051490e: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514914: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0051491a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051491d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514920: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514926: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 0051492c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051492f: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00514939: push 0x693c24 */ { u32 v = 0x693c24u; r_esp -= 4; W32(r_esp, v); }
    /* 0051493e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514941: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514947: mov ecx, dword ptr [edx + 0xd4] */ r_ecx = R32((u32)(r_edx+0xd4u));
    /* 0051494d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514950: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00514956: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 0051495c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051495e: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x514961u); call_ind(t); }
    /* 00514961: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514964: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051496a: mov ecx, dword ptr [ecx + 0xe8] */ r_ecx = R32((u32)(r_ecx+0xe8u));
    /* 00514970: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514973: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00514979: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 0051497f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514981: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x514984u); call_ind(t); }
    /* 00514984: jmp 0x514a22 */ goto L_00514a22;
L_00514989:; BB(0x00514989);
    /* 00514989: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051498c: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514992: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514995: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 0051499b: mov edx, dword ptr [edx + 0xf0] */ r_edx = R32((u32)(r_edx+0xf0u));
    /* 005149a1: cmp edx, dword ptr [ecx + 0xec] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005149a7: jge 0x514a22 */ if ((fS==fO)) goto L_00514a22;
L_005149a9:; BB(0x005149a9);
    /* 005149a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005149ac: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005149b2: mov edx, dword ptr [ecx + 0xf0] */ r_edx = R32((u32)(r_ecx+0xf0u));
    /* 005149b8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005149bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005149be: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005149c4: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 005149ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005149cd: mov dword ptr [edx + 0xcc], 1 */ W32((u32)(r_edx+0xccu), 0x1u);
    /* 005149d7: push 0x693c2c */ { u32 v = 0x693c2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005149dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005149df: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005149e5: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 005149eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005149ee: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005149f4: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 005149fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005149fc: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5149ffu); call_ind(t); }
    /* 005149ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514a02: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00514a08: mov ecx, dword ptr [edx + 0xe8] */ r_ecx = R32((u32)(r_edx+0xe8u));
    /* 00514a0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514a11: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00514a17: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00514a1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514a1f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x514a22u); call_ind(t); }
L_00514a22:; BB(0x00514a22);
    /* 00514a22: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00514a24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514a27: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00514a2d: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x514a32u); f_005b79b9();
    /* 00514a32: mov esp, ebp */ r_esp = r_ebp;
    /* 00514a34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514a35: ret  */ FN_RET(0x005148f8); r_esp += 4; return;
}

void f_00514a36(void) /* FUN_00514a36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514a36);
    /* 00514a36: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514a37: mov ebp, esp */ r_ebp = r_esp;
    /* 00514a39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514a3a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00514a3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514a3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514a41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514a44: call 0x5b6af0 */ r_esp -= 4; W32(r_esp, 0x514a49u); f_005b6af0();
    /* 00514a49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514a4c: mov dword ptr [eax], 0x638d1c */ W32((u32)(r_eax), 0x638d1cu);
    /* 00514a52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514a55: mov esp, ebp */ r_esp = r_ebp;
    /* 00514a57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514a58: ret  */ FN_RET(0x00514a36); r_esp += 4; return;
}

void f_00514a59(void) /* FUN_00514a59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514a59);
    /* 00514a59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514a5a: mov ebp, esp */ r_ebp = r_esp;
    /* 00514a5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00514a5f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00514a62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514a64: push 0xcee */ { u32 v = 0xceeu; r_esp -= 4; W32(r_esp, v); }
    /* 00514a69: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514a6c: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x514a71u); f_005e0461();
    /* 00514a71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514a73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514a76: call 0x5b6c5e */ r_esp -= 4; W32(r_esp, 0x514a7bu); f_005b6c5e();
    /* 00514a7b: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514a80: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x514a85u); f_0048ab58();
    /* 00514a85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514a88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00514a8b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514a8f: je 0x514aa2 */ if (fZ) goto L_00514aa2;
L_00514a91:; BB(0x00514a91);
    /* 00514a91: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514a94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514a95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514a98: call 0x514c75 */ r_esp -= 4; W32(r_esp, 0x514a9du); f_00514c75();
    /* 00514a9d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00514aa0: jmp 0x514aa9 */ goto L_00514aa9;
L_00514aa2:; BB(0x00514aa2);
    /* 00514aa2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00514aa9:; BB(0x00514aa9);
    /* 00514aa9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514aac: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00514aaf: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 00514ab5: push 0xcef */ { u32 v = 0xcefu; r_esp -= 4; W32(r_esp, v); }
    /* 00514aba: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514abd: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00514ac3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514ac6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00514acc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514ace: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x514ad1u); call_ind(t); }
    /* 00514ad1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514ad4: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00514ada: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514add: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00514ae3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514ae5: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x514ae8u); call_ind(t); }
    /* 00514ae8: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00514aea: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00514aec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514aef: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00514af5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514af8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00514afe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514b00: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x514b03u); call_ind(t); }
    /* 00514b03: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 00514b05: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514b08: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00514b0e: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x514b13u); f_005d65d6();
    /* 00514b13: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00514b15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514b18: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00514b1e: call 0x5d65f9 */ r_esp -= 4; W32(r_esp, 0x514b23u); f_005d65f9();
    /* 00514b23: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514b26: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 00514b2c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514b2f: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00514b35: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514b37: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x514b3au); call_ind(t); }
    /* 00514b3a: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514b3f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x514b44u); f_0048ab58();
    /* 00514b44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514b47: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00514b4a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514b4e: je 0x514b61 */ if (fZ) goto L_00514b61;
L_00514b50:; BB(0x00514b50);
    /* 00514b50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514b54: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514b57: call 0x514d44 */ r_esp -= 4; W32(r_esp, 0x514b5cu); f_00514d44();
    /* 00514b5c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00514b5f: jmp 0x514b68 */ goto L_00514b68;
L_00514b61:; BB(0x00514b61);
    /* 00514b61: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00514b68:; BB(0x00514b68);
    /* 00514b68: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514b6b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00514b6e: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 00514b74: push 0xcf0 */ { u32 v = 0xcf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514b79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514b7c: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00514b82: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514b85: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00514b8b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514b8d: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x514b90u); call_ind(t); }
    /* 00514b90: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514b93: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00514b99: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514b9c: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00514ba2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514ba4: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x514ba7u); call_ind(t); }
    /* 00514ba7: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00514ba9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00514bab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514bae: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00514bb4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514bb7: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00514bbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514bbf: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x514bc2u); call_ind(t); }
    /* 00514bc2: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 00514bc4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514bc7: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00514bcd: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x514bd2u); f_005d65d6();
    /* 00514bd2: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00514bd4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514bd7: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00514bdd: call 0x5d65f9 */ r_esp -= 4; W32(r_esp, 0x514be2u); f_005d65f9();
    /* 00514be2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514be5: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00514beb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514bee: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00514bf4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514bf6: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x514bf9u); call_ind(t); }
    /* 00514bf9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514bfb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514bfe: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 00514c04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514c05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514c08: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x514c0du); f_005b78bd();
    /* 00514c0d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514c0f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514c12: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00514c18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514c19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514c1c: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x514c21u); f_005b78bd();
    /* 00514c21: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514c24: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 00514c2e: mov esp, ebp */ r_esp = r_ebp;
    /* 00514c30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514c31: ret  */ FN_RET(0x00514a59); r_esp += 4; return;
}

void f_00514c32(void) /* FUN_00514c32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514c32);
    /* 00514c32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514c33: mov ebp, esp */ r_ebp = r_esp;
    /* 00514c35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514c36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00514c39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514c3c: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x514c41u); f_005e030e();
    /* 00514c41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514c44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00514c47: mov dword ptr [eax + 0xb0], ecx */ W32((u32)(r_eax+0xb0u), r_ecx);
    /* 00514c4d: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514c54: je 0x514c6f */ if (fZ) goto L_00514c6f;
L_00514c56:; BB(0x00514c56);
    /* 00514c56: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00514c58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514c5a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00514c5c: push 0x385 */ { u32 v = 0x385u; r_esp -= 4; W32(r_esp, v); }
    /* 00514c61: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 00514c67: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00514c6a: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x514c6fu); f_005e8389();
L_00514c6f:; BB(0x00514c6f);
    /* 00514c6f: mov esp, ebp */ r_esp = r_ebp;
    /* 00514c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514c72: ret 4 */ FN_RET(0x00514c32); r_esp += 8; return;
}

void f_00514c75(void) /* FUN_00514c75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514c75);
    /* 00514c75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514c76: mov ebp, esp */ r_ebp = r_esp;
    /* 00514c78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514c79: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00514c7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514c7f: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x514c84u); f_005d5d20();
    /* 00514c84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514c87: mov dword ptr [eax], 0x638d3c */ W32((u32)(r_eax), 0x638d3cu);
    /* 00514c8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514c90: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00514c93: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00514c99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514c9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514c9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514c9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514ca1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514ca4: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x514ca9u); f_005d5ff2();
    /* 00514ca9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514cac: mov esp, ebp */ r_esp = r_ebp;
    /* 00514cae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514caf: ret 4 */ FN_RET(0x00514c75); r_esp += 8; return;
}

void f_00514cb2(void) /* FUN_00514cb2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514cb2);
    /* 00514cb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514cb3: mov ebp, esp */ r_ebp = r_esp;
    /* 00514cb5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00514cb8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00514cbb: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00514cc1: call 0x52fdf4 */ r_esp -= 4; W32(r_esp, 0x514cc6u); f_0052fdf4();
    /* 00514cc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514cc7: mov eax, dword ptr [0x6f9fd4] */ r_eax = R32((u32)(0x6f9fd4u));
    /* 00514ccc: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00514ccf: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x514cd4u); f_005dd560();
    /* 00514cd4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00514cd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514cd9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514cdc: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x514ce1u); f_005d6635();
    /* 00514ce1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514ce4: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00514cea: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x514cefu); f_005e03cc();
    /* 00514cef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514cf1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514cf4: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00514cfa: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x514cffu); f_005b79b9();
    /* 00514cff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514d04: call 0x56ff3b */ r_esp -= 4; W32(r_esp, 0x514d09u); f_0056ff3b();
    /* 00514d09: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514d0c: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00514d12: cmp dword ptr [ecx + 0xb0], 0 */ {  u32 a = R32((u32)(r_ecx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514d19: je 0x514d40 */ if (fZ) goto L_00514d40;
L_00514d1b:; BB(0x00514d1b);
    /* 00514d1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d1d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514d20: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00514d26: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00514d2c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514d2f: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00514d35: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00514d3b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514d3d: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x514d40u); call_ind(t); }
L_00514d40:; BB(0x00514d40);
    /* 00514d40: mov esp, ebp */ r_esp = r_ebp;
    /* 00514d42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514d43: ret  */ FN_RET(0x00514cb2); r_esp += 4; return;
}

void f_00514d44(void) /* FUN_00514d44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514d44);
    /* 00514d44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514d45: mov ebp, esp */ r_ebp = r_esp;
    /* 00514d47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514d48: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00514d4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514d4e: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x514d53u); f_005d5d20();
    /* 00514d53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514d56: mov dword ptr [eax], 0x638dac */ W32((u32)(r_eax), 0x638dacu);
    /* 00514d5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514d5f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00514d62: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00514d68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d6a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514d73: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x514d78u); f_005d5ff2();
    /* 00514d78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514d7b: mov esp, ebp */ r_esp = r_ebp;
    /* 00514d7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514d7e: ret 4 */ FN_RET(0x00514d44); r_esp += 8; return;
}

void f_00514d81(void) /* FUN_00514d81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514d81);
    /* 00514d81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514d82: mov ebp, esp */ r_ebp = r_esp;
    /* 00514d84: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00514d87: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00514d8a: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00514d90: call 0x52fdf4 */ r_esp -= 4; W32(r_esp, 0x514d95u); f_0052fdf4();
    /* 00514d95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514d96: mov eax, dword ptr [0x6f9fd4] */ r_eax = R32((u32)(0x6f9fd4u));
    /* 00514d9b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00514d9e: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x514da3u); f_005dd560();
    /* 00514da3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00514da6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514da8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514dab: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x514db0u); f_005d6635();
    /* 00514db0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514db3: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00514db9: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x514dbeu); f_005e03cc();
    /* 00514dbe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00514dc0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514dc3: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00514dc9: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x514dceu); f_005b79b9();
    /* 00514dce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514dd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514dd3: call 0x56ff3b */ r_esp -= 4; W32(r_esp, 0x514dd8u); f_0056ff3b();
    /* 00514dd8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514ddb: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00514de1: cmp dword ptr [ecx + 0xb0], 0 */ {  u32 a = R32((u32)(r_ecx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514de8: je 0x514e0f */ if (fZ) goto L_00514e0f;
L_00514dea:; BB(0x00514dea);
    /* 00514dea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514dec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514def: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00514df5: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00514dfb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514dfe: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00514e04: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00514e0a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514e0c: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x514e0fu); call_ind(t); }
L_00514e0f:; BB(0x00514e0f);
    /* 00514e0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00514e11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514e12: ret  */ FN_RET(0x00514d81); r_esp += 4; return;
}

void f_00514e13(void) /* FUN_00514e13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514e13);
    /* 00514e13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514e14: mov ebp, esp */ r_ebp = r_esp;
    /* 00514e16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514e17: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00514e1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514e21: call 0x5b6af0 */ r_esp -= 4; W32(r_esp, 0x514e26u); f_005b6af0();
    /* 00514e26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514e29: mov dword ptr [eax], 0x638e1c */ W32((u32)(r_eax), 0x638e1cu);
    /* 00514e2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514e32: mov esp, ebp */ r_esp = r_ebp;
    /* 00514e34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514e35: ret  */ FN_RET(0x00514e13); r_esp += 4; return;
}

void f_00514e36(void) /* FUN_00514e36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00514e36);
    /* 00514e36: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514e37: mov ebp, esp */ r_ebp = r_esp;
    /* 00514e39: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00514e3c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00514e3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e41: push 0xd07 */ { u32 v = 0xd07u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e46: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514e49: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x514e4eu); f_005e0461();
    /* 00514e4e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e50: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514e53: call 0x5b6c5e */ r_esp -= 4; W32(r_esp, 0x514e58u); f_005b6c5e();
    /* 00514e58: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514e5b: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00514e61: mov dword ptr [ecx + 0xcc], 0x33 */ W32((u32)(r_ecx+0xccu), 0x33u);
    /* 00514e6b: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e70: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x514e75u); f_0048ab58();
    /* 00514e75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514e78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00514e7b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514e7f: je 0x514e94 */ if (fZ) goto L_00514e94;
L_00514e81:; BB(0x00514e81);
    /* 00514e81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e83: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514e86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514e87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00514e8a: call 0x515b28 */ r_esp -= 4; W32(r_esp, 0x514e8fu); f_00515b28();
    /* 00514e8f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00514e92: jmp 0x514e9b */ goto L_00514e9b;
L_00514e94:; BB(0x00514e94);
    /* 00514e94: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00514e9b:; BB(0x00514e9b);
    /* 00514e9b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514e9e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00514ea1: mov dword ptr [eax + 0xb0], ecx */ W32((u32)(r_eax+0xb0u), r_ecx);
    /* 00514ea7: push 0x61ac */ { u32 v = 0x61acu; r_esp -= 4; W32(r_esp, v); }
    /* 00514eac: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514eaf: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00514eb5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514eb8: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00514ebe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514ec0: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x514ec3u); call_ind(t); }
    /* 00514ec3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514ec6: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00514ecc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514ecf: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00514ed5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514ed7: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x514edau); call_ind(t); }
    /* 00514eda: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00514edc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00514ede: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514ee1: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00514ee7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514eea: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00514ef0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514ef2: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x514ef5u); call_ind(t); }
    /* 00514ef5: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00514efa: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x514effu); f_0048ab58();
    /* 00514eff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514f02: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00514f05: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514f09: je 0x514f1e */ if (fZ) goto L_00514f1e;
L_00514f0b:; BB(0x00514f0b);
    /* 00514f0b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00514f0d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514f11: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00514f14: call 0x515b28 */ r_esp -= 4; W32(r_esp, 0x514f19u); f_00515b28();
    /* 00514f19: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00514f1c: jmp 0x514f25 */ goto L_00514f25;
L_00514f1e:; BB(0x00514f1e);
    /* 00514f1e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00514f25:; BB(0x00514f25);
    /* 00514f25: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514f28: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00514f2b: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 00514f31: push 0x61ac */ { u32 v = 0x61acu; r_esp -= 4; W32(r_esp, v); }
    /* 00514f36: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514f39: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00514f3f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514f42: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00514f48: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514f4a: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x514f4du); call_ind(t); }
    /* 00514f4d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514f50: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00514f56: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514f59: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00514f5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514f61: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x514f64u); call_ind(t); }
    /* 00514f64: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 00514f69: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00514f6b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514f6e: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00514f74: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514f77: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00514f7d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514f7f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x514f82u); call_ind(t); }
    /* 00514f82: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00514f87: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x514f8cu); f_0048ab58();
    /* 00514f8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514f8f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00514f92: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514f96: je 0x514fab */ if (fZ) goto L_00514fab;
L_00514f98:; BB(0x00514f98);
    /* 00514f98: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00514f9a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514f9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514f9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00514fa1: call 0x515b28 */ r_esp -= 4; W32(r_esp, 0x514fa6u); f_00515b28();
    /* 00514fa6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00514fa9: jmp 0x514fb2 */ goto L_00514fb2;
L_00514fab:; BB(0x00514fab);
    /* 00514fab: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00514fb2:; BB(0x00514fb2);
    /* 00514fb2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514fb5: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00514fb8: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 00514fbe: push 0x61ac */ { u32 v = 0x61acu; r_esp -= 4; W32(r_esp, v); }
    /* 00514fc3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514fc6: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00514fcc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514fcf: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00514fd5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514fd7: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x514fdau); call_ind(t); }
    /* 00514fda: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514fdd: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00514fe3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514fe6: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00514fec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514fee: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x514ff1u); call_ind(t); }
    /* 00514ff1: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00514ff6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00514ff8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00514ffb: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00515001: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515004: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0051500a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051500c: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x51500fu); call_ind(t); }
    /* 0051500f: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00515014: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x515019u); f_0048ab58();
    /* 00515019: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051501c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0051501f: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515023: je 0x515038 */ if (fZ) goto L_00515038;
L_00515025:; BB(0x00515025);
    /* 00515025: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00515027: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051502a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051502b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051502e: call 0x515b28 */ r_esp -= 4; W32(r_esp, 0x515033u); f_00515b28();
    /* 00515033: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00515036: jmp 0x51503f */ goto L_0051503f;
L_00515038:; BB(0x00515038);
    /* 00515038: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0051503f:; BB(0x0051503f);
    /* 0051503f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515042: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00515045: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 0051504b: push 0x61ac */ { u32 v = 0x61acu; r_esp -= 4; W32(r_esp, v); }
    /* 00515050: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515053: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00515059: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051505c: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00515062: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515064: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x515067u); call_ind(t); }
    /* 00515067: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051506a: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00515070: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515073: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00515079: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051507b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x51507eu); call_ind(t); }
    /* 0051507e: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 00515083: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00515085: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515088: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0051508e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515091: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00515097: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515099: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x51509cu); call_ind(t); }
    /* 0051509c: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005150a1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5150a6u); f_0048ab58();
    /* 005150a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005150a9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005150ac: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005150b0: je 0x5150c5 */ if (fZ) goto L_005150c5;
L_005150b2:; BB(0x005150b2);
    /* 005150b2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005150b4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005150b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005150b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005150bb: call 0x515b28 */ r_esp -= 4; W32(r_esp, 0x5150c0u); f_00515b28();
    /* 005150c0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005150c3: jmp 0x5150cc */ goto L_005150cc;
L_005150c5:; BB(0x005150c5);
    /* 005150c5: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005150cc:; BB(0x005150cc);
    /* 005150cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005150cf: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005150d2: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 005150d8: push 0x61ac */ { u32 v = 0x61acu; r_esp -= 4; W32(r_esp, v); }
    /* 005150dd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005150e0: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 005150e6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005150e9: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005150ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005150f1: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5150f4u); call_ind(t); }
    /* 005150f4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005150f7: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 005150fd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515100: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00515106: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515108: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x51510bu); call_ind(t); }
    /* 0051510b: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 00515110: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00515112: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515115: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0051511b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051511e: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00515124: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515126: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x515129u); call_ind(t); }
    /* 00515129: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0051512e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x515133u); f_0048ab58();
    /* 00515133: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00515136: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00515139: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051513d: je 0x51514c */ if (fZ) goto L_0051514c;
L_0051513f:; BB(0x0051513f);
    /* 0051513f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00515142: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x515147u); f_005e8590();
    /* 00515147: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0051514a: jmp 0x515153 */ goto L_00515153;
L_0051514c:; BB(0x0051514c);
    /* 0051514c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00515153:; BB(0x00515153);
    /* 00515153: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515156: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00515159: mov dword ptr [eax + 0xc4], ecx */ W32((u32)(r_eax+0xc4u), r_ecx);
    /* 0051515f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515161: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515164: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0051516a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051516b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051516e: call 0x5b7909 */ r_esp -= 4; W32(r_esp, 0x515173u); f_005b7909();
    /* 00515173: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00515175: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515178: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 0051517e: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x515183u); f_005e87aa();
    /* 00515183: push 0x10a */ { u32 v = 0x10au; r_esp -= 4; W32(r_esp, v); }
    /* 00515188: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051518b: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 00515191: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x515196u); f_005e8740();
    /* 00515196: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00515198: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051519b: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 005151a1: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5151a6u); f_005e8775();
    /* 005151a6: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005151a8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005151ab: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 005151b1: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5151b6u); f_005e8e99();
    /* 005151b6: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005151b8: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005151ba: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005151bd: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 005151c3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005151c6: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 005151cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005151ce: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5151d1u); call_ind(t); }
    /* 005151d1: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005151d6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5151dbu); f_0048ab58();
    /* 005151db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005151de: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005151e1: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005151e5: je 0x5151f8 */ if (fZ) goto L_005151f8;
L_005151e7:; BB(0x005151e7);
    /* 005151e7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005151ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005151eb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005151ee: call 0x515e6a */ r_esp -= 4; W32(r_esp, 0x5151f3u); f_00515e6a();
    /* 005151f3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005151f6: jmp 0x5151ff */ goto L_005151ff;
L_005151f8:; BB(0x005151f8);
    /* 005151f8: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005151ff:; BB(0x005151ff);
    /* 005151ff: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515202: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00515205: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 0051520b: push 0x207c */ { u32 v = 0x207cu; r_esp -= 4; W32(r_esp, v); }
    /* 00515210: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515213: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 00515219: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051521c: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00515222: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515224: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x515227u); call_ind(t); }
    /* 00515227: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051522a: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 00515230: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515233: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00515239: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051523b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x51523eu); call_ind(t); }
    /* 0051523e: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00515240: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515243: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 00515249: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x51524eu); f_005d65d6();
    /* 0051524e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00515250: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 00515255: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515258: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 0051525e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515261: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00515267: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515269: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x51526cu); call_ind(t); }
    /* 0051526c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051526f: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 00515275: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515278: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0051527e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515280: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x515283u); call_ind(t); }
    /* 00515283: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515288: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x51528du); f_0048ab58();
    /* 0051528d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00515290: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00515293: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515297: je 0x5152aa */ if (fZ) goto L_005152aa;
L_00515299:; BB(0x00515299);
    /* 00515299: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051529c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051529d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005152a0: call 0x515efc */ r_esp -= 4; W32(r_esp, 0x5152a5u); f_00515efc();
    /* 005152a5: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005152a8: jmp 0x5152b1 */ goto L_005152b1;
L_005152aa:; BB(0x005152aa);
    /* 005152aa: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005152b1:; BB(0x005152b1);
    /* 005152b1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005152b4: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005152b7: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 005152bd: push 0x207b */ { u32 v = 0x207bu; r_esp -= 4; W32(r_esp, v); }
    /* 005152c2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005152c5: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005152cb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005152ce: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005152d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005152d6: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5152d9u); call_ind(t); }
    /* 005152d9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005152dc: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005152e2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005152e5: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005152eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005152ed: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5152f0u); call_ind(t); }
    /* 005152f0: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 005152f2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005152f5: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005152fb: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x515300u); f_005d65d6();
    /* 00515300: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00515302: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00515307: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051530a: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00515310: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515313: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00515319: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051531b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x51531eu); call_ind(t); }
    /* 0051531e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515321: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00515327: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051532a: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00515330: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515332: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x515335u); call_ind(t); }
    /* 00515335: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515337: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051533a: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00515340: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515341: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515344: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x515349u); f_005b78bd();
    /* 00515349: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051534e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515351: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00515357: call 0x5d9916 */ r_esp -= 4; W32(r_esp, 0x51535cu); f_005d9916();
    /* 0051535c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051535e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515361: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00515367: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515368: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051536b: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x515370u); f_005b78bd();
    /* 00515370: push 0x10b */ { u32 v = 0x10bu; r_esp -= 4; W32(r_esp, v); }
    /* 00515375: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515378: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 0051537e: call 0x5d9916 */ r_esp -= 4; W32(r_esp, 0x515383u); f_005d9916();
    /* 00515383: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515385: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515388: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0051538e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051538f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515392: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x515397u); f_005b78bd();
    /* 00515397: push 0x122 */ { u32 v = 0x122u; r_esp -= 4; W32(r_esp, v); }
    /* 0051539c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051539f: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 005153a5: call 0x5d9916 */ r_esp -= 4; W32(r_esp, 0x5153aau); f_005d9916();
    /* 005153aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005153ac: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005153af: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005153b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005153b6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005153b9: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x5153beu); f_005b78bd();
    /* 005153be: push 0x132 */ { u32 v = 0x132u; r_esp -= 4; W32(r_esp, v); }
    /* 005153c3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005153c6: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 005153cc: call 0x5d9916 */ r_esp -= 4; W32(r_esp, 0x5153d1u); f_005d9916();
    /* 005153d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005153d3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005153d6: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 005153dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005153dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005153e0: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x5153e5u); f_005b78bd();
    /* 005153e5: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 005153ea: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005153ed: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 005153f3: call 0x5d9916 */ r_esp -= 4; W32(r_esp, 0x5153f8u); f_005d9916();
    /* 005153f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005153fa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005153fd: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 00515403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515404: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515407: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x51540cu); f_005b78bd();
    /* 0051540c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051540e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00515411: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00515417: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515418: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051541b: call 0x5b78bd */ r_esp -= 4; W32(r_esp, 0x515420u); f_005b78bd();
    /* 00515420: mov esp, ebp */ r_esp = r_ebp;
    /* 00515422: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515423: ret  */ FN_RET(0x00514e36); r_esp += 4; return;
}

void f_00515424(void) /* FUN_00515424 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00515424);
    /* 00515424: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00515425: mov ebp, esp */ r_ebp = r_esp;
    /* 00515427: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051542a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051542d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515430: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
    /* 0051543a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00515440: jmp 0x51544e */ goto L_0051544e;
L_00515442:; BB(0x00515442);
    /* 00515442: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00515446: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0051544a: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_0051544e:; BB(0x0051544e);
    /* 0051544e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00515452: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515455: jge 0x51549a */ if ((fS==fO)) goto L_0051549a;
L_00515457:; BB(0x00515457);
    /* 00515457: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0051545b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051545c: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00515462: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00515465: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x51546au); f_005dd560();
    /* 0051546a: mov ecx, eax */ r_ecx = r_eax;
    /* 0051546c: call 0x56fefa */ r_esp -= 4; W32(r_esp, 0x515471u); f_0056fefa();
    /* 00515471: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515474: je 0x515478 */ if (fZ) goto L_00515478;
L_00515476:; BB(0x00515476);
    /* 00515476: jmp 0x515442 */ goto L_00515442;
L_00515478:; BB(0x00515478);
    /* 00515478: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0051547c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051547d: mov eax, dword ptr [0x6f9fd4] */ r_eax = R32((u32)(0x6f9fd4u));
    /* 00515482: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00515485: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x51548au); f_005dd560();
    /* 0051548a: mov ecx, eax */ r_ecx = r_eax;
    /* 0051548c: call 0x56fd2c */ r_esp -= 4; W32(r_esp, 0x515491u); f_0056fd2c();
    /* 00515491: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515494: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
L_0051549a:; BB(0x0051549a);
    /* 0051549a: mov edx, dword ptr [0x692498] */ r_edx = R32((u32)(0x692498u));
    /* 005154a0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005154a3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005154a6: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005154a9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005154ac: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005154b0: ja 0x51553b */ if ((!fC&&!fZ)) goto L_0051553b;
L_005154b6:; BB(0x005154b6);
    /* 005154b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005154b9: jmp dword ptr [ecx*4 + 0x51589c] */ { u32 t = R32((u32)(r_ecx*4+0x51589cu)); switch (t) { case 0x51551du: goto L_0051551d; case 0x5154ffu: goto L_005154ff; case 0x51553bu: goto L_0051553b; case 0x5154e1u: goto L_005154e1; case 0x5154c0u: goto L_005154c0; case 0x515738u: goto L_00515738; case 0x515751u: goto L_00515751; case 0x51576au: goto L_0051576a; case 0x5157b3u: goto L_005157b3; case 0x515783u: goto L_00515783; case 0x51579cu: goto L_0051579c; case 0x5157efu: goto L_005157ef; case 0x515801u: goto L_00515801; case 0x515810u: goto L_00515810; case 0x51581fu: goto L_0051581f; case 0x51582eu: goto L_0051582e; case 0x51583du: goto L_0051583d; case 0x5157dbu: goto L_005157db; case 0x51586au: goto L_0051586a; case 0x51584cu: goto L_0051584c; case 0x51585bu: goto L_0051585b; case 0x515879u: goto L_00515879; default: UNSUP(0x005154b9, "jump table entry is not a known target"); } }
L_005154c0:; BB(0x005154c0);
    /* 005154c0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005154c3: cmp dword ptr [edx + 0xdc], 0x7a120 */ {  u32 a = R32((u32)(r_edx+0xdcu)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005154cd: jl 0x5154e1 */ if ((fS!=fO)) goto L_005154e1;
L_005154cf:; BB(0x005154cf);
    /* 005154cf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005154d2: mov dword ptr [eax + 0xd4], 6 */ W32((u32)(r_eax+0xd4u), 0x6u);
    /* 005154dc: jmp 0x515566 */ goto L_00515566;
L_005154e1:; BB(0x005154e1);
    /* 005154e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005154e4: cmp dword ptr [ecx + 0xdc], 0x186a0 */ {  u32 a = R32((u32)(r_ecx+0xdcu)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005154ee: jl 0x5154ff */ if ((fS!=fO)) goto L_005154ff;
L_005154f0:; BB(0x005154f0);
    /* 005154f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005154f3: mov dword ptr [edx + 0xd4], 5 */ W32((u32)(r_edx+0xd4u), 0x5u);
    /* 005154fd: jmp 0x515566 */ goto L_00515566;
L_005154ff:; BB(0x005154ff);
    /* 005154ff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515502: cmp dword ptr [eax + 0xdc], 0x61a8 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051550c: jl 0x51551d */ if ((fS!=fO)) goto L_0051551d;
L_0051550e:; BB(0x0051550e);
    /* 0051550e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515511: mov dword ptr [ecx + 0xd4], 3 */ W32((u32)(r_ecx+0xd4u), 0x3u);
    /* 0051551b: jmp 0x515566 */ goto L_00515566;
L_0051551d:; BB(0x0051551d);
    /* 0051551d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515520: cmp dword ptr [edx + 0xdc], 0x1388 */ {  u32 a = R32((u32)(r_edx+0xdcu)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051552a: jl 0x51553b */ if ((fS!=fO)) goto L_0051553b;
L_0051552c:; BB(0x0051552c);
    /* 0051552c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051552f: mov dword ptr [eax + 0xd4], 2 */ W32((u32)(r_eax+0xd4u), 0x2u);
    /* 00515539: jmp 0x515566 */ goto L_00515566;
L_0051553b:; BB(0x0051553b);
    /* 0051553b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051553e: cmp dword ptr [ecx + 0xdc], 0x3e8 */ {  u32 a = R32((u32)(r_ecx+0xdcu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515548: jl 0x515559 */ if ((fS!=fO)) goto L_00515559;
L_0051554a:; BB(0x0051554a);
    /* 0051554a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051554d: mov dword ptr [edx + 0xd4], 1 */ W32((u32)(r_edx+0xd4u), 0x1u);
    /* 00515557: jmp 0x515566 */ goto L_00515566;
L_00515559:; BB(0x00515559);
    /* 00515559: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051555c: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
L_00515566:; BB(0x00515566);
    /* 00515566: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515568: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051556a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051556c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051556e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515571: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00515577: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x51557cu); f_005d5ff2();
    /* 0051557c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051557e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515580: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515582: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515584: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515587: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 0051558d: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515592u); f_005d5ff2();
    /* 00515592: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515594: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515596: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515598: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051559a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051559d: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005155a3: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5155a8u); f_005d5ff2();
    /* 005155a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005155aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005155ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005155ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005155b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005155b3: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 005155b9: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5155beu); f_005d5ff2();
    /* 005155be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005155c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005155c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005155c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005155c6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005155c9: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 005155cf: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5155d4u); f_005d5ff2();
    /* 005155d4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005155d7: cmp dword ptr [eax + 0xdc], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005155e1: jl 0x5155fc */ if ((fS!=fO)) goto L_005155fc;
L_005155e3:; BB(0x005155e3);
    /* 005155e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005155e6: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 005155ec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005155ef: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005155f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005155f7: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5155fau); call_ind(t); }
    /* 005155fa: jmp 0x515613 */ goto L_00515613;
L_005155fc:; BB(0x005155fc);
    /* 005155fc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005155ff: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00515605: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515608: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0051560e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515610: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x515613u); call_ind(t); }
L_00515613:; BB(0x00515613);
    /* 00515613: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515616: cmp dword ptr [eax + 0xdc], 0x1388 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515620: jl 0x51563b */ if ((fS!=fO)) goto L_0051563b;
L_00515622:; BB(0x00515622);
    /* 00515622: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515625: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 0051562b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051562e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00515634: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515636: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x515639u); call_ind(t); }
    /* 00515639: jmp 0x515652 */ goto L_00515652;
L_0051563b:; BB(0x0051563b);
    /* 0051563b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051563e: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00515644: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515647: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051564d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051564f: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x515652u); call_ind(t); }
L_00515652:; BB(0x00515652);
    /* 00515652: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515655: cmp dword ptr [eax + 0xdc], 0x61a8 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051565f: jl 0x51567a */ if ((fS!=fO)) goto L_0051567a;
L_00515661:; BB(0x00515661);
    /* 00515661: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515664: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 0051566a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051566d: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00515673: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515675: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x515678u); call_ind(t); }
    /* 00515678: jmp 0x515691 */ goto L_00515691;
L_0051567a:; BB(0x0051567a);
    /* 0051567a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051567d: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00515683: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515686: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0051568c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051568e: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x515691u); call_ind(t); }
L_00515691:; BB(0x00515691);
    /* 00515691: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515694: cmp dword ptr [eax + 0xdc], 0x186a0 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051569e: jl 0x5156b9 */ if ((fS!=fO)) goto L_005156b9;
L_005156a0:; BB(0x005156a0);
    /* 005156a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005156a3: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 005156a9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005156ac: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005156b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005156b4: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5156b7u); call_ind(t); }
    /* 005156b7: jmp 0x5156d0 */ goto L_005156d0;
L_005156b9:; BB(0x005156b9);
    /* 005156b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005156bc: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005156c2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005156c5: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005156cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005156cd: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5156d0u); call_ind(t); }
L_005156d0:; BB(0x005156d0);
    /* 005156d0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005156d3: cmp dword ptr [eax + 0xdc], 0x7a120 */ {  u32 a = R32((u32)(r_eax+0xdcu)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005156dd: jl 0x5156f8 */ if ((fS!=fO)) goto L_005156f8;
L_005156df:; BB(0x005156df);
    /* 005156df: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005156e2: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 005156e8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005156eb: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005156f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005156f3: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5156f6u); call_ind(t); }
    /* 005156f6: jmp 0x51570f */ goto L_0051570f;
L_005156f8:; BB(0x005156f8);
    /* 005156f8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005156fb: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00515701: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515704: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0051570a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051570c: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x51570fu); call_ind(t); }
L_0051570f:; BB(0x0051570f);
    /* 0051570f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515712: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00515718: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0051571b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051571e: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00515721: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00515724: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00515728: ja 0x5157b3 */ if ((!fC&&!fZ)) goto L_005157b3;
L_0051572e:; BB(0x0051572e);
    /* 0051572e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515731: jmp dword ptr [eax*4 + 0x5158b0] */ { u32 t = R32((u32)(r_eax*4+0x5158b0u)); switch (t) { case 0x5154c0u: goto L_005154c0; case 0x5154e1u: goto L_005154e1; case 0x51553bu: goto L_0051553b; case 0x5154ffu: goto L_005154ff; case 0x51551du: goto L_0051551d; case 0x515738u: goto L_00515738; case 0x515751u: goto L_00515751; case 0x51576au: goto L_0051576a; case 0x5157b3u: goto L_005157b3; case 0x515783u: goto L_00515783; case 0x51579cu: goto L_0051579c; case 0x5157efu: goto L_005157ef; case 0x515801u: goto L_00515801; case 0x515810u: goto L_00515810; case 0x51581fu: goto L_0051581f; case 0x51582eu: goto L_0051582e; case 0x51583du: goto L_0051583d; case 0x5157dbu: goto L_005157db; case 0x51586au: goto L_0051586a; case 0x51584cu: goto L_0051584c; case 0x51585bu: goto L_0051585b; case 0x515879u: goto L_00515879; default: UNSUP(0x00515731, "jump table entry is not a known target"); } }
L_00515738:; BB(0x00515738);
    /* 00515738: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051573b: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00515741: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515744: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0051574a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051574c: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x51574fu); call_ind(t); }
    /* 0051574f: jmp 0x5157b3 */ goto L_005157b3;
L_00515751:; BB(0x00515751);
    /* 00515751: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515754: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 0051575a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051575d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00515763: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515765: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x515768u); call_ind(t); }
    /* 00515768: jmp 0x5157b3 */ goto L_005157b3;
L_0051576a:; BB(0x0051576a);
    /* 0051576a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051576d: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00515773: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515776: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0051577c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051577e: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x515781u); call_ind(t); }
    /* 00515781: jmp 0x5157b3 */ goto L_005157b3;
L_00515783:; BB(0x00515783);
    /* 00515783: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515786: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 0051578c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051578f: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00515795: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00515797: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x51579au); call_ind(t); }
    /* 0051579a: jmp 0x5157b3 */ goto L_005157b3;
L_0051579c:; BB(0x0051579c);
    /* 0051579c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051579f: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 005157a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005157a8: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005157ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005157b0: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5157b3u); call_ind(t); }
L_005157b3:; BB(0x005157b3);
    /* 005157b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005157b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005157b8: call 0x5b79b9 */ r_esp -= 4; W32(r_esp, 0x5157bdu); f_005b79b9();
    /* 005157bd: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 005157c3: call 0x52d4c3 */ r_esp -= 4; W32(r_esp, 0x5157c8u); f_0052d4c3();
    /* 005157c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005157cb: cmp dword ptr [ebp - 0x14], 0x17 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005157cf: ja 0x5157db */ if ((!fC&&!fZ)) goto L_005157db;
L_005157d1:; BB(0x005157d1);
    /* 005157d1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005157d4: jmp dword ptr [eax*4 + 0x5158c8] */ { u32 t = R32((u32)(r_eax*4+0x5158c8u)); switch (t) { case 0x51579cu: goto L_0051579c; case 0x515783u: goto L_00515783; case 0x5157b3u: goto L_005157b3; case 0x51576au: goto L_0051576a; case 0x515751u: goto L_00515751; case 0x515738u: goto L_00515738; case 0x5154c0u: goto L_005154c0; case 0x5154e1u: goto L_005154e1; case 0x51553bu: goto L_0051553b; case 0x5154ffu: goto L_005154ff; case 0x51551du: goto L_0051551d; case 0x5157efu: goto L_005157ef; case 0x515801u: goto L_00515801; case 0x515810u: goto L_00515810; case 0x51581fu: goto L_0051581f; case 0x51582eu: goto L_0051582e; case 0x51583du: goto L_0051583d; case 0x5157dbu: goto L_005157db; case 0x51586au: goto L_0051586a; case 0x51584cu: goto L_0051584c; case 0x51585bu: goto L_0051585b; case 0x515879u: goto L_00515879; default: UNSUP(0x005157d4, "jump table entry is not a known target"); } }
L_005157db:; BB(0x005157db);
    /* 005157db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005157de: mov edx, dword ptr [0x69249c] */ r_edx = R32((u32)(0x69249cu));
    /* 005157e4: mov dword ptr [ecx + 0xd8], edx */ W32((u32)(r_ecx+0xd8u), r_edx);
    /* 005157ea: jmp 0x515886 */ goto L_00515886;
L_005157ef:; BB(0x005157ef);
    /* 005157ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005157f2: mov dword ptr [eax + 0xd8], 1 */ W32((u32)(r_eax+0xd8u), 0x1u);
    /* 005157fc: jmp 0x515886 */ goto L_00515886;
L_00515801:; BB(0x00515801);
    /* 00515801: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515804: mov dword ptr [ecx + 0xd8], 2 */ W32((u32)(r_ecx+0xd8u), 0x2u);
    /* 0051580e: jmp 0x515886 */ goto L_00515886;
L_00515810:; BB(0x00515810);
    /* 00515810: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515813: mov dword ptr [edx + 0xd8], 3 */ W32((u32)(r_edx+0xd8u), 0x3u);
    /* 0051581d: jmp 0x515886 */ goto L_00515886;
L_0051581f:; BB(0x0051581f);
    /* 0051581f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515822: mov dword ptr [eax + 0xd8], 4 */ W32((u32)(r_eax+0xd8u), 0x4u);
    /* 0051582c: jmp 0x515886 */ goto L_00515886;
L_0051582e:; BB(0x0051582e);
    /* 0051582e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515831: mov dword ptr [ecx + 0xd8], 5 */ W32((u32)(r_ecx+0xd8u), 0x5u);
    /* 0051583b: jmp 0x515886 */ goto L_00515886;
L_0051583d:; BB(0x0051583d);
    /* 0051583d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515840: mov dword ptr [edx + 0xd8], 6 */ W32((u32)(r_edx+0xd8u), 0x6u);
    /* 0051584a: jmp 0x515886 */ goto L_00515886;
L_0051584c:; BB(0x0051584c);
    /* 0051584c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051584f: mov dword ptr [eax + 0xd8], 7 */ W32((u32)(r_eax+0xd8u), 0x7u);
    /* 00515859: jmp 0x515886 */ goto L_00515886;
L_0051585b:; BB(0x0051585b);
    /* 0051585b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051585e: mov dword ptr [ecx + 0xd8], 8 */ W32((u32)(r_ecx+0xd8u), 0x8u);
    /* 00515868: jmp 0x515886 */ goto L_00515886;
L_0051586a:; BB(0x0051586a);
    /* 0051586a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051586d: mov dword ptr [edx + 0xd8], 9 */ W32((u32)(r_edx+0xd8u), 0x9u);
    /* 00515877: jmp 0x515886 */ goto L_00515886;
L_00515879:; BB(0x00515879);
    /* 00515879: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051587c: mov dword ptr [eax + 0xd8], 0xa */ W32((u32)(r_eax+0xd8u), 0xau);
L_00515886:; BB(0x00515886);
    /* 00515886: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515889: call 0x515f8e */ r_esp -= 4; W32(r_esp, 0x51588eu); f_00515f8e();
    /* 0051588e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515891: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x515896u); f_005e030e();
    /* 00515896: mov esp, ebp */ r_esp = r_ebp;
    /* 00515898: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515899: ret 4 */ FN_RET(0x00515424); r_esp += 8; return;
}

void f_00515928(void) /* FUN_00515928 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00515928);
    /* 00515928: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00515929: mov ebp, esp */ r_ebp = r_esp;
    /* 0051592b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051592e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00515931: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515934: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 0051593a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0051593d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515940: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00515943: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00515946: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0051594a: ja 0x515956 */ if ((!fC&&!fZ)) goto L_00515956;
L_0051594c:; BB(0x0051594c);
    /* 0051594c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051594f: jmp dword ptr [eax*4 + 0x515b10] */ { u32 t = R32((u32)(r_eax*4+0x515b10u)); switch (t) { case 0x515963u: goto L_00515963; case 0x51598du: goto L_0051598d; case 0x5159b4u: goto L_005159b4; case 0x515956u: goto L_00515956; case 0x5159dbu: goto L_005159db; case 0x515a02u: goto L_00515a02; default: UNSUP(0x0051594f, "jump table entry is not a known target"); } }
L_00515956:; BB(0x00515956);
    /* 00515956: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515959: call 0x5b79d2 */ r_esp -= 4; W32(r_esp, 0x51595eu); f_005b79d2();
    /* 0051595e: jmp 0x515b0c */ goto L_00515b0c;
L_00515963:; BB(0x00515963);
    /* 00515963: mov dword ptr [ebp - 8], 0x3e8 */ W32((u32)(r_ebp+0xfffffff8u), 0x3e8u);
    /* 0051596a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051596d: mov dword ptr [ecx + 0xd0], 0x10 */ W32((u32)(r_ecx+0xd0u), 0x10u);
    /* 00515977: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0051597e: mov dword ptr [0x692498], 1 */ W32((u32)(0x692498u), 0x1u);
    /* 00515988: jmp 0x515a27 */ goto L_00515a27;
L_0051598d:; BB(0x0051598d);
    /* 0051598d: mov dword ptr [ebp - 8], 0x1388 */ W32((u32)(r_ebp+0xfffffff8u), 0x1388u);
    /* 00515994: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515997: mov dword ptr [edx + 0xd0], 0x10 */ W32((u32)(r_edx+0xd0u), 0x10u);
    /* 005159a1: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005159a8: mov dword ptr [0x692498], 2 */ W32((u32)(0x692498u), 0x2u);
    /* 005159b2: jmp 0x515a27 */ goto L_00515a27;
L_005159b4:; BB(0x005159b4);
    /* 005159b4: mov dword ptr [ebp - 8], 0x61a8 */ W32((u32)(r_ebp+0xfffffff8u), 0x61a8u);
    /* 005159bb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005159be: mov dword ptr [eax + 0xd0], 0x10 */ W32((u32)(r_eax+0xd0u), 0x10u);
    /* 005159c8: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005159cf: mov dword ptr [0x692498], 3 */ W32((u32)(0x692498u), 0x3u);
    /* 005159d9: jmp 0x515a27 */ goto L_00515a27;
L_005159db:; BB(0x005159db);
    /* 005159db: mov dword ptr [ebp - 8], 0x186a0 */ W32((u32)(r_ebp+0xfffffff8u), 0x186a0u);
    /* 005159e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005159e5: mov dword ptr [ecx + 0xd0], 0x10 */ W32((u32)(r_ecx+0xd0u), 0x10u);
    /* 005159ef: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 005159f6: mov dword ptr [0x692498], 5 */ W32((u32)(0x692498u), 0x5u);
    /* 00515a00: jmp 0x515a27 */ goto L_00515a27;
L_00515a02:; BB(0x00515a02);
    /* 00515a02: mov dword ptr [ebp - 8], 0x7a120 */ W32((u32)(r_ebp+0xfffffff8u), 0x7a120u);
    /* 00515a09: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515a0c: mov dword ptr [edx + 0xd0], 0x20 */ W32((u32)(r_edx+0xd0u), 0x20u);
    /* 00515a16: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00515a1d: mov dword ptr [0x692498], 6 */ W32((u32)(0x692498u), 0x6u);
L_00515a27:; BB(0x00515a27);
    /* 00515a27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515a2a: call 0x5160e1 */ r_esp -= 4; W32(r_esp, 0x515a2fu); f_005160e1();
    /* 00515a2f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515a32: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00515a38: mov dword ptr [0x69249c], ecx */ W32((u32)(0x69249cu), r_ecx);
    /* 00515a3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515a40: push 0xc362 */ { u32 v = 0xc362u; r_esp -= 4; W32(r_esp, v); }
    /* 00515a45: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00515a4b: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00515a4e: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00515a51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515a52: call dword ptr [0x63320c] */ { u32 t = R32((u32)(0x63320cu)); r_esp -= 4; W32(r_esp, 0x515a58u); call_ind(t); }
    /* 00515a58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515a59: call dword ptr [0x633204] */ { u32 t = R32((u32)(0x633204u)); r_esp -= 4; W32(r_esp, 0x515a5fu); call_ind(t); }
    /* 00515a5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515a61: push 0xc363 */ { u32 v = 0xc363u; r_esp -= 4; W32(r_esp, v); }
    /* 00515a66: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 00515a6c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00515a6f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00515a72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515a73: call dword ptr [0x63320c] */ { u32 t = R32((u32)(0x63320cu)); r_esp -= 4; W32(r_esp, 0x515a79u); call_ind(t); }
    /* 00515a79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515a7a: call dword ptr [0x633204] */ { u32 t = R32((u32)(0x633204u)); r_esp -= 4; W32(r_esp, 0x515a80u); call_ind(t); }
    /* 00515a80: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00515a86: call 0x52d4d7 */ r_esp -= 4; W32(r_esp, 0x515a8bu); f_0052d4d7();
    /* 00515a8b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515a8e: je 0x515ab0 */ if (fZ) goto L_00515ab0;
L_00515a90:; BB(0x00515a90);
    /* 00515a90: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00515a96: call 0x52d4d7 */ r_esp -= 4; W32(r_esp, 0x515a9bu); f_0052d4d7();
    /* 00515a9b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515a9e: je 0x515ab0 */ if (fZ) goto L_00515ab0;
L_00515aa0:; BB(0x00515aa0);
    /* 00515aa0: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00515aa6: call 0x52d4c3 */ r_esp -= 4; W32(r_esp, 0x515aabu); f_0052d4c3();
    /* 00515aab: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515aae: jne 0x515acd */ if (!fZ) goto L_00515acd;
L_00515ab0:; BB(0x00515ab0);
    /* 00515ab0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515ab2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515ab5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515ab6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515ab9: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00515abf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515ac0: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00515ac6: call 0x52eddd */ r_esp -= 4; W32(r_esp, 0x515acbu); f_0052eddd();
    /* 00515acb: jmp 0x515ae8 */ goto L_00515ae8;
L_00515acd:; BB(0x00515acd);
    /* 00515acd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515acf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515ad2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515ad3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515ad6: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00515adc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515add: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00515ae3: call 0x52eddd */ r_esp -= 4; W32(r_esp, 0x515ae8u); f_0052eddd();
L_00515ae8:; BB(0x00515ae8);
    /* 00515ae8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515aea: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00515af0: call 0x52ea38 */ r_esp -= 4; W32(r_esp, 0x515af5u); f_0052ea38();
    /* 00515af5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515af8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515af9: mov ecx, dword ptr [0x6f9fd4] */ r_ecx = R32((u32)(0x6f9fd4u));
    /* 00515aff: call 0x52dd13 */ r_esp -= 4; W32(r_esp, 0x515b04u); f_0052dd13();
    /* 00515b04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00515b07: call 0x5b79d2 */ r_esp -= 4; W32(r_esp, 0x515b0cu); f_005b79d2();
L_00515b0c:; BB(0x00515b0c);
    /* 00515b0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00515b0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515b0f: ret  */ FN_RET(0x00515928); r_esp += 4; return;
}

void f_00515b28(void) /* FUN_00515b28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00515b28);
    /* 00515b28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00515b29: mov ebp, esp */ r_ebp = r_esp;
    /* 00515b2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515b2c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00515b2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515b32: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x515b37u); f_005d5d20();
    /* 00515b37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515b3a: mov dword ptr [eax], 0x638e3c */ W32((u32)(r_eax), 0x638e3cu);
    /* 00515b40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515b43: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00515b46: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 00515b4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515b4f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00515b52: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 00515b58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515b63: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515b68u); f_005d5ff2();
    /* 00515b68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515b6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00515b6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515b6e: ret 8 */ FN_RET(0x00515b28); r_esp += 12; return;
}

void f_00515b71(void) /* FUN_00515b71 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00515b71);
    /* 00515b71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00515b72: mov ebp, esp */ r_ebp = r_esp;
    /* 00515b74: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00515b77: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00515b7a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b7c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b7e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b80: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515b85: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515b8au); f_005d5ff2();
    /* 00515b8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515b8d: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00515b93: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00515b96: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515b99: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00515b9c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00515b9f: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00515ba3: ja 0x515baf */ if ((!fC&&!fZ)) goto L_00515baf;
L_00515ba5:; BB(0x00515ba5);
    /* 00515ba5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00515ba8: jmp dword ptr [eax*4 + 0x515e56] */ { u32 t = R32((u32)(r_eax*4+0x515e56u)); switch (t) { case 0x515c37u: goto L_00515c37; case 0x515cbfu: goto L_00515cbf; case 0x515bafu: goto L_00515baf; case 0x515d47u: goto L_00515d47; case 0x515dcfu: goto L_00515dcf; default: UNSUP(0x00515ba8, "jump table entry is not a known target"); } }
L_00515baf:; BB(0x00515baf);
    /* 00515baf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515bb2: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00515bb8: mov dword ptr [edx + 0xd4], 1 */ W32((u32)(r_edx+0xd4u), 0x1u);
    /* 00515bc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515bc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515bc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515bc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515bca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515bcd: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00515bd3: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00515bd9: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515bdeu); f_005d5ff2();
    /* 00515bde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515be0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515be2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515be4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515be6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515be9: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00515bef: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00515bf5: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515bfau); f_005d5ff2();
    /* 00515bfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515bfc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515bfe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515c05: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00515c0b: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00515c11: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515c16u); f_005d5ff2();
    /* 00515c16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515c21: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00515c27: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 00515c2d: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515c32u); f_005d5ff2();
    /* 00515c32: jmp 0x515e52 */ goto L_00515e52;
L_00515c37:; BB(0x00515c37);
    /* 00515c37: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515c3a: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00515c40: mov dword ptr [eax + 0xd4], 2 */ W32((u32)(r_eax+0xd4u), 0x2u);
    /* 00515c4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515c55: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00515c5b: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00515c61: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515c66u); f_005d5ff2();
    /* 00515c66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c6a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c6e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515c71: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00515c77: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00515c7d: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515c82u); f_005d5ff2();
    /* 00515c82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c8a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515c8d: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00515c93: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00515c99: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515c9eu); f_005d5ff2();
    /* 00515c9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515ca0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515ca2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515ca4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515ca6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515ca9: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00515caf: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 00515cb5: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515cbau); f_005d5ff2();
    /* 00515cba: jmp 0x515e52 */ goto L_00515e52;
L_00515cbf:; BB(0x00515cbf);
    /* 00515cbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515cc2: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00515cc8: mov dword ptr [ecx + 0xd4], 3 */ W32((u32)(r_ecx+0xd4u), 0x3u);
    /* 00515cd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515cd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515cd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515cd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515cda: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515cdd: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00515ce3: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00515ce9: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515ceeu); f_005d5ff2();
    /* 00515cee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515cf0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515cf2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515cf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515cf6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515cf9: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00515cff: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00515d05: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515d0au); f_005d5ff2();
    /* 00515d0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515d15: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00515d1b: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 00515d21: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515d26u); f_005d5ff2();
    /* 00515d26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d2e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515d31: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00515d37: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 00515d3d: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515d42u); f_005d5ff2();
    /* 00515d42: jmp 0x515e52 */ goto L_00515e52;
L_00515d47:; BB(0x00515d47);
    /* 00515d47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515d4a: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00515d50: mov dword ptr [edx + 0xd4], 5 */ W32((u32)(r_edx+0xd4u), 0x5u);
    /* 00515d5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515d65: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00515d6b: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 00515d71: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515d76u); f_005d5ff2();
    /* 00515d76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d7e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515d81: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00515d87: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00515d8d: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515d92u); f_005d5ff2();
    /* 00515d92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515d9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515d9d: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00515da3: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00515da9: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515daeu); f_005d5ff2();
    /* 00515dae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515db0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515db2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515db4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515db6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515db9: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00515dbf: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 00515dc5: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515dcau); f_005d5ff2();
    /* 00515dca: jmp 0x515e52 */ goto L_00515e52;
L_00515dcf:; BB(0x00515dcf);
    /* 00515dcf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515dd2: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00515dd8: mov dword ptr [eax + 0xd4], 6 */ W32((u32)(r_eax+0xd4u), 0x6u);
    /* 00515de2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515de4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515de6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515de8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515dea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515ded: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00515df3: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 00515df9: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515dfeu); f_005d5ff2();
    /* 00515dfe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e00: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515e09: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00515e0f: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00515e15: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515e1au); f_005d5ff2();
    /* 00515e1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e1e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e22: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515e25: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00515e2b: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00515e31: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515e36u); f_005d5ff2();
    /* 00515e36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515e41: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00515e47: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00515e4d: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515e52u); f_005d5ff2();
L_00515e52:; BB(0x00515e52);
    /* 00515e52: mov esp, ebp */ r_esp = r_ebp;
    /* 00515e54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515e55: ret  */ FN_RET(0x00515b71); r_esp += 4; return;
}

void f_00515e6a(void) /* FUN_00515e6a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00515e6a);
    /* 00515e6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00515e6b: mov ebp, esp */ r_ebp = r_esp;
    /* 00515e6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515e6e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00515e71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515e74: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x515e79u); f_005d5d20();
    /* 00515e79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515e7c: mov dword ptr [eax], 0x638eac */ W32((u32)(r_eax), 0x638eacu);
    /* 00515e82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515e85: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00515e88: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00515e8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515e99: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x515e9eu); f_005d5ff2();
    /* 00515e9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00515ea1: mov esp, ebp */ r_esp = r_ebp;
    /* 00515ea3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00515ea4: ret 4 */ FN_RET(0x00515e6a); r_esp += 8; return;
}

