#include "protos.h"

void f_005e2077(void) /* FUN_005e2077 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2077);
    /* 005e2077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2078: mov ebp, esp */ r_ebp = r_esp;
    /* 005e207a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e207d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e2080: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2083: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e2086: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2089: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e208a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e208d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2090: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 005e2093: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2096: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005e209c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e209f: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e20a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e20a7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e20aau); call_ind(t); }
    /* 005e20aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e20b1: jmp 0x5e20bc */ goto L_005e20bc;
L_005e20b3:; BB(0x005e20b3);
    /* 005e20b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e20b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e20b9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e20bc:; BB(0x005e20bc);
    /* 005e20bc: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e20c0: jge 0x5e2109 */ if ((fS==fO)) goto L_005e2109;
L_005e20c2:; BB(0x005e20c2);
    /* 005e20c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e20c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e20c8: cmp dword ptr [edx + ecx*4 + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e20d0: je 0x5e2107 */ if (fZ) goto L_005e2107;
L_005e20d2:; BB(0x005e20d2);
    /* 005e20d2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e20d5: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005e20db: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e20e0u); f_005d9883();
    /* 005e20e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e20e3: lea edx, [eax + ecx + 1] */ r_edx = (u32)(r_eax+r_ecx+0x1u);
    /* 005e20e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e20e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e20eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e20ee: mov ecx, dword ptr [ecx + eax*4 + 0x98] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 005e20f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e20f8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e20fb: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 005e2102: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e2104: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5e2107u); call_ind(t); }
L_005e2107:; BB(0x005e2107);
    /* 005e2107: jmp 0x5e20b3 */ goto L_005e20b3;
L_005e2109:; BB(0x005e2109);
    /* 005e2109: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e2110: jmp 0x5e211b */ goto L_005e211b;
L_005e2112:; BB(0x005e2112);
    /* 005e2112: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2115: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2118: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e211b:; BB(0x005e211b);
    /* 005e211b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e211e: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e2123u); f_005e24af();
    /* 005e2123: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2126: jge 0x5e2157 */ if ((fS==fO)) goto L_005e2157;
L_005e2128:; BB(0x005e2128);
    /* 005e2128: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e212b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005e212e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2132: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e2135: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2138: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 005e213b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e213e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e213f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2142: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e2147u); f_005e246d();
    /* 005e2147: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e214a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e214d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e214f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2152: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e2155u); call_ind(t); }
    /* 005e2155: jmp 0x5e2112 */ goto L_005e2112;
L_005e2157:; BB(0x005e2157);
    /* 005e2157: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2159: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e215a: ret 4 */ FN_RET(0x005e2077); r_esp += 8; return;
}

void f_005e215d(void) /* FUN_005e215d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e215d);
    /* 005e215d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e215e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2160: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2163: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005e2166: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e2169: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005e216f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005e2171: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005e2173: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2176: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2179: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005e217c: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005e2183: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005e218a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005e2191: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e2198: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 005e219f: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 005e21a6: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 005e21ad: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 005e21b4: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 005e21bb: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 005e21c2: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 005e21c9: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005e21d0: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e21d4: jge 0x5e21dd */ if ((fS==fO)) goto L_005e21dd;
L_005e21d6:; BB(0x005e21d6);
    /* 005e21d6: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_005e21dd:; BB(0x005e21dd);
    /* 005e21dd: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e21e0: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5e21e5u); f_005e06f2();
    /* 005e21e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e21e8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e21ea: cmp edx, 0x27f */ {  u32 a = r_edx; u32 b = 0x27fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e21f0: jle 0x5e2204 */ if ((fZ||fS!=fO)) goto L_005e2204;
L_005e21f2:; BB(0x005e21f2);
    /* 005e21f2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e21f5: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5e21fau); f_005e06f2();
    /* 005e21fa: mov ecx, 0x27f */ r_ecx = 0x27fu;
    /* 005e21ff: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2201: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005e2204:; BB(0x005e2204);
    /* 005e2204: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2208: jge 0x5e2211 */ if ((fS==fO)) goto L_005e2211;
L_005e220a:; BB(0x005e220a);
    /* 005e220a: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
L_005e2211:; BB(0x005e2211);
    /* 005e2211: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e2214: call 0x5e0709 */ r_esp -= 4; W32(r_esp, 0x5e2219u); f_005e0709();
    /* 005e2219: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e221c: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e221e: cmp edx, 0x1df */ {  u32 a = r_edx; u32 b = 0x1dfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2224: jle 0x5e2238 */ if ((fZ||fS!=fO)) goto L_005e2238;
L_005e2226:; BB(0x005e2226);
    /* 005e2226: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e2229: call 0x5e0709 */ r_esp -= 4; W32(r_esp, 0x5e222eu); f_005e0709();
    /* 005e222e: mov ecx, 0x1df */ r_ecx = 0x1dfu;
    /* 005e2233: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2235: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_005e2238:; BB(0x005e2238);
    /* 005e2238: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e223a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e223d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e223e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2242: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e2245: call 0x5e0663 */ r_esp -= 4; W32(r_esp, 0x5e224au); f_005e0663();
    /* 005e224a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e224c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e224e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e2251: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005e2257: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e225a: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005e2260: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e2262: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e2265u); call_ind(t); }
    /* 005e2265: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005e226c: jmp 0x5e2277 */ goto L_005e2277;
L_005e226e:; BB(0x005e226e);
    /* 005e226e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e2271: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2274: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_005e2277:; BB(0x005e2277);
    /* 005e2277: cmp dword ptr [ebp - 0x3c], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e227b: jge 0x5e22be */ if ((fS==fO)) goto L_005e22be;
L_005e227d:; BB(0x005e227d);
    /* 005e227d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e2280: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e2283: cmp dword ptr [edx + ecx*4 + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e228b: je 0x5e22bc */ if (fZ) goto L_005e22bc;
L_005e228d:; BB(0x005e228d);
    /* 005e228d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e2290: mov ecx, dword ptr [ebp + eax*8 - 0x2c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd4u));
    /* 005e2294: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2295: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e2298: mov eax, dword ptr [ebp + edx*8 - 0x30] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd0u));
    /* 005e229c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e229d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e22a0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e22a3: mov ecx, dword ptr [edx + ecx*4 + 0x98] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x98u));
    /* 005e22aa: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e22ad: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e22b0: mov eax, dword ptr [edx + eax*4 + 0x98] */ r_eax = R32((u32)(r_edx+r_eax*4+0x98u));
    /* 005e22b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e22b9: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e22bcu); call_ind(t); }
L_005e22bc:; BB(0x005e22bc);
    /* 005e22bc: jmp 0x5e226e */ goto L_005e226e;
L_005e22be:; BB(0x005e22be);
    /* 005e22be: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005e22c1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e22c4: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005e22cb: jmp 0x5e22d6 */ goto L_005e22d6;
L_005e22cd:; BB(0x005e22cd);
    /* 005e22cd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e22d0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e22d3: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_005e22d6:; BB(0x005e22d6);
    /* 005e22d6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e22d9: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e22deu); f_005e24af();
    /* 005e22de: cmp dword ptr [ebp - 0x3c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e22e1: jge 0x5e2322 */ if ((fS==fO)) goto L_005e2322;
L_005e22e3:; BB(0x005e22e3);
    /* 005e22e3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e22e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e22e7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005e22ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e22eb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e22ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e22ef: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e22f2: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e22f7u); f_005e246d();
    /* 005e22f7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e22fa: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e22fd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e22ff: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e2302: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5e2305u); call_ind(t); }
    /* 005e2305: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e2308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2309: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e230c: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e2311u); f_005e246d();
    /* 005e2311: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2313: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e2318u); f_005d98da();
    /* 005e2318: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e231b: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e231d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005e2320: jmp 0x5e22cd */ goto L_005e22cd;
L_005e2322:; BB(0x005e2322);
    /* 005e2322: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2324: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2325: ret 8 */ FN_RET(0x005e215d); r_esp += 12; return;
}

void f_005e2328(void) /* FUN_005e2328 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2328);
    /* 005e2328: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2329: mov ebp, esp */ r_ebp = r_esp;
    /* 005e232b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e232c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e232f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e2332: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e2337u); f_005e06d0();
    /* 005e2337: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e233a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e233c: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 005e233f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e2342: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e2347u); f_005e06e1();
    /* 005e2347: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e234a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e234c: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 005e234f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2352: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e2357u); f_005e06d0();
    /* 005e2357: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e235a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e235c: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 005e235f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2362: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e2367u); f_005e06e1();
    /* 005e2367: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e236a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e236c: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 005e236f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e2372: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2373: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e2376: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2377: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e237a: call 0x5e2385 */ r_esp -= 4; W32(r_esp, 0x5e237fu); f_005e2385();
    /* 005e237f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2381: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2382: ret 0xc */ FN_RET(0x005e2328); r_esp += 16; return;
}

void f_005e2385(void) /* FUN_005e2385 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2385);
    /* 005e2385: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2386: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2388: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e238b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e238e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e2391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2392: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e2395: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2396: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2399: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 005e239f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e23a2: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 005e23a8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e23aa: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x5e23adu); call_ind(t); }
    /* 005e23ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e23af: je 0x5e23bb */ if (fZ) goto L_005e23bb;
L_005e23b1:; BB(0x005e23b1);
    /* 005e23b1: mov eax, 1 */ r_eax = 0x1u;
    /* 005e23b6: jmp 0x5e2467 */ goto L_005e2467;
L_005e23bb:; BB(0x005e23bb);
    /* 005e23bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e23c2: jmp 0x5e23cd */ goto L_005e23cd;
L_005e23c4:; BB(0x005e23c4);
    /* 005e23c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e23c7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e23ca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e23cd:; BB(0x005e23cd);
    /* 005e23cd: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e23d1: jge 0x5e2417 */ if ((fS==fO)) goto L_005e2417;
L_005e23d3:; BB(0x005e23d3);
    /* 005e23d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e23d6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e23d9: cmp dword ptr [eax + edx*4 + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e23e1: je 0x5e2415 */ if (fZ) goto L_005e2415;
L_005e23e3:; BB(0x005e23e3);
    /* 005e23e3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e23e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e23e7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e23ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e23eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e23ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e23f1: mov ecx, dword ptr [ecx + eax*4 + 0x98] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 005e23f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e23fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e23fe: mov edx, dword ptr [eax + edx*4 + 0x98] */ r_edx = R32((u32)(r_eax+r_edx*4+0x98u));
    /* 005e2405: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e2407: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x5e240au); call_ind(t); }
    /* 005e240a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e240c: je 0x5e2415 */ if (fZ) goto L_005e2415;
L_005e240e:; BB(0x005e240e);
    /* 005e240e: mov eax, 1 */ r_eax = 0x1u;
    /* 005e2413: jmp 0x5e2467 */ goto L_005e2467;
L_005e2415:; BB(0x005e2415);
    /* 005e2415: jmp 0x5e23c4 */ goto L_005e23c4;
L_005e2417:; BB(0x005e2417);
    /* 005e2417: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e241e: jmp 0x5e2429 */ goto L_005e2429;
L_005e2420:; BB(0x005e2420);
    /* 005e2420: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2423: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2426: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e2429:; BB(0x005e2429);
    /* 005e2429: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e242c: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e2431u); f_005e24af();
    /* 005e2431: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2434: jge 0x5e2465 */ if ((fS==fO)) goto L_005e2465;
L_005e2436:; BB(0x005e2436);
    /* 005e2436: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e2439: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e243a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e243d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e243e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2441: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2442: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2445: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e244au); f_005e246d();
    /* 005e244a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e244d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2450: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e2452: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2455: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x5e2458u); call_ind(t); }
    /* 005e2458: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e245a: je 0x5e2463 */ if (fZ) goto L_005e2463;
L_005e245c:; BB(0x005e245c);
    /* 005e245c: mov eax, 1 */ r_eax = 0x1u;
    /* 005e2461: jmp 0x5e2467 */ goto L_005e2467;
L_005e2463:; BB(0x005e2463);
    /* 005e2463: jmp 0x5e2420 */ goto L_005e2420;
L_005e2465:; BB(0x005e2465);
    /* 005e2465: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e2467:; BB(0x005e2467);
    /* 005e2467: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2469: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e246a: ret 8 */ FN_RET(0x005e2385); r_esp += 12; return;
}

void f_005e246d(void) /* FUN_005e246d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e246d);
    /* 005e246d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e246e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2470: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2471: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e2474: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2477: cmp dword ptr [eax + 0x94], 0 */ {  u32 a = R32((u32)(r_eax+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e247e: je 0x5e24a7 */ if (fZ) goto L_005e24a7;
L_005e2480:; BB(0x005e2480);
    /* 005e2480: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2483: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 005e2489: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e248eu); f_005dd4d2();
    /* 005e248e: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2491: jge 0x5e24a7 */ if ((fS==fO)) goto L_005e24a7;
L_005e2493:; BB(0x005e2493);
    /* 005e2493: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e2496: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2497: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e249a: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005e24a0: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e24a5u); f_005dd560();
    /* 005e24a5: jmp 0x5e24a9 */ goto L_005e24a9;
L_005e24a7:; BB(0x005e24a7);
    /* 005e24a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e24a9:; BB(0x005e24a9);
    /* 005e24a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e24ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e24ac: ret 4 */ FN_RET(0x005e246d); r_esp += 8; return;
}

void f_005e24af(void) /* FUN_005e24af */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e24af);
    /* 005e24af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e24b0: mov ebp, esp */ r_ebp = r_esp;
    /* 005e24b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e24b3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e24b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e24b9: cmp dword ptr [eax + 0x94], 0 */ {  u32 a = R32((u32)(r_eax+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e24c0: je 0x5e24d2 */ if (fZ) goto L_005e24d2;
L_005e24c2:; BB(0x005e24c2);
    /* 005e24c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e24c5: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 005e24cb: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e24d0u); f_005dd4d2();
    /* 005e24d0: jmp 0x5e24d4 */ goto L_005e24d4;
L_005e24d2:; BB(0x005e24d2);
    /* 005e24d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e24d4:; BB(0x005e24d4);
    /* 005e24d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e24d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e24d7: ret  */ FN_RET(0x005e24af); r_esp += 4; return;
}

void f_005e24d8(void) /* FUN_005e24d8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e24d8);
    /* 005e24d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e24d9: mov ebp, esp */ r_ebp = r_esp;
    /* 005e24db: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e24de: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e24e1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e24e8: jmp 0x5e24f3 */ goto L_005e24f3;
L_005e24ea:; BB(0x005e24ea);
    /* 005e24ea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e24ed: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e24f0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e24f3:; BB(0x005e24f3);
    /* 005e24f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e24f6: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e24fbu); f_005e24af();
    /* 005e24fb: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e24fe: jge 0x5e2566 */ if ((fS==fO)) goto L_005e2566;
L_005e2500:; BB(0x005e2500);
    /* 005e2500: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2504: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2507: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e250cu); f_005e246d();
    /* 005e250c: mov ecx, eax */ r_ecx = r_eax;
    /* 005e250e: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e2513u); f_005e345f();
    /* 005e2513: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2516: jne 0x5e2526 */ if (!fZ) goto L_005e2526;
L_005e2518:; BB(0x005e2518);
    /* 005e2518: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e251b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e251c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e251f: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e2524u); f_005e246d();
    /* 005e2524: jmp 0x5e2568 */ goto L_005e2568;
L_005e2526:; BB(0x005e2526);
    /* 005e2526: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2529: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e252a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e252d: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e2532u); f_005e246d();
    /* 005e2532: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2539: je 0x5e2564 */ if (fZ) goto L_005e2564;
L_005e253b:; BB(0x005e253b);
    /* 005e253b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e253e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e253f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2542: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2543: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2546: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e254bu); f_005e246d();
    /* 005e254b: mov ecx, dword ptr [eax + 0x88c] */ r_ecx = R32((u32)(r_eax+0x88cu));
    /* 005e2551: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x5e2556u); f_005e24d8();
    /* 005e2556: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e2559: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e255d: je 0x5e2564 */ if (fZ) goto L_005e2564;
L_005e255f:; BB(0x005e255f);
    /* 005e255f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2562: jmp 0x5e2568 */ goto L_005e2568;
L_005e2564:; BB(0x005e2564);
    /* 005e2564: jmp 0x5e24ea */ goto L_005e24ea;
L_005e2566:; BB(0x005e2566);
    /* 005e2566: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e2568:; BB(0x005e2568);
    /* 005e2568: mov esp, ebp */ r_esp = r_ebp;
    /* 005e256a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e256b: ret 4 */ FN_RET(0x005e24d8); r_esp += 8; return;
}

void f_005e256e(void) /* FUN_005e256e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e256e);
    /* 005e256e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e256f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2571: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2574: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e2577: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e257a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e257b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e257e: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x5e2583u); f_005e24d8();
    /* 005e2583: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e2586: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e258a: je 0x5e2594 */ if (fZ) goto L_005e2594;
L_005e258c:; BB(0x005e258c);
    /* 005e258c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e258f: call 0x5e3c28 */ r_esp -= 4; W32(r_esp, 0x5e2594u); f_005e3c28();
L_005e2594:; BB(0x005e2594);
    /* 005e2594: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2596: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2597: ret 4 */ FN_RET(0x005e256e); r_esp += 8; return;
}

void f_005e259a(void) /* FUN_005e259a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e259a);
    /* 005e259a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e259b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e259d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e25a0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e25a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e25a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e25a7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e25aa: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x5e25afu); f_005e24d8();
    /* 005e25af: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e25b2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e25b6: je 0x5e25c0 */ if (fZ) goto L_005e25c0;
L_005e25b8:; BB(0x005e25b8);
    /* 005e25b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e25bb: call 0x5e3d2f */ r_esp -= 4; W32(r_esp, 0x5e25c0u); f_005e3d2f();
L_005e25c0:; BB(0x005e25c0);
    /* 005e25c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e25c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e25c3: ret 4 */ FN_RET(0x005e259a); r_esp += 8; return;
}

void f_005e25c6(void) /* FUN_005e25c6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e25c6);
    /* 005e25c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e25c7: mov ebp, esp */ r_ebp = r_esp;
    /* 005e25c9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e25cc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e25cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e25d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e25d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e25d6: call 0x5e24d8 */ r_esp -= 4; W32(r_esp, 0x5e25dbu); f_005e24d8();
    /* 005e25db: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e25de: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e25e2: je 0x5e25f5 */ if (fZ) goto L_005e25f5;
L_005e25e4:; BB(0x005e25e4);
    /* 005e25e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e25e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e25e9: cmp dword ptr [ecx + 0x894], 0 */ {  u32 a = R32((u32)(r_ecx+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e25f0: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005e25f3: jmp 0x5e25f7 */ goto L_005e25f7;
L_005e25f5:; BB(0x005e25f5);
    /* 005e25f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e25f7:; BB(0x005e25f7);
    /* 005e25f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005e25f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e25fa: ret 4 */ FN_RET(0x005e25c6); r_esp += 8; return;
}

void f_005e25fd(void) /* FUN_005e25fd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e25fd);
    /* 005e25fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e25fe: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2600: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2603: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e2606: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e260d: jmp 0x5e2618 */ goto L_005e2618;
L_005e260f:; BB(0x005e260f);
    /* 005e260f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2612: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2615: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e2618:; BB(0x005e2618);
    /* 005e2618: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e261b: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e2620u); f_005e24af();
    /* 005e2620: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2623: jge 0x5e266b */ if ((fS==fO)) goto L_005e266b;
L_005e2625:; BB(0x005e2625);
    /* 005e2625: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2628: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2629: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e262c: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e2631u); f_005e246d();
    /* 005e2631: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e2634: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2637: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e263cu); f_005e345f();
    /* 005e263c: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e263f: jne 0x5e264b */ if (!fZ) goto L_005e264b;
L_005e2641:; BB(0x005e2641);
    /* 005e2641: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2644: call 0x5e3d9c */ r_esp -= 4; W32(r_esp, 0x5e2649u); f_005e3d9c();
    /* 005e2649: jmp 0x5e266b */ goto L_005e266b;
L_005e264b:; BB(0x005e264b);
    /* 005e264b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e264e: cmp dword ptr [edx + 0x88c], 0 */ {  u32 a = R32((u32)(r_edx+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2655: je 0x5e2669 */ if (fZ) goto L_005e2669;
L_005e2657:; BB(0x005e2657);
    /* 005e2657: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e265a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e265b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e265e: mov ecx, dword ptr [ecx + 0x88c] */ r_ecx = R32((u32)(r_ecx+0x88cu));
    /* 005e2664: call 0x5e25fd */ r_esp -= 4; W32(r_esp, 0x5e2669u); f_005e25fd();
L_005e2669:; BB(0x005e2669);
    /* 005e2669: jmp 0x5e260f */ goto L_005e260f;
L_005e266b:; BB(0x005e266b);
    /* 005e266b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e266d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e266e: ret 4 */ FN_RET(0x005e25fd); r_esp += 8; return;
}

void f_005e2671(void) /* FUN_005e2671 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2671);
    /* 005e2671: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2672: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2674: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2677: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e267a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e2681: jmp 0x5e268c */ goto L_005e268c;
L_005e2683:; BB(0x005e2683);
    /* 005e2683: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2686: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2689: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e268c:; BB(0x005e268c);
    /* 005e268c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e268f: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e2694u); f_005e24af();
    /* 005e2694: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2697: jge 0x5e26df */ if ((fS==fO)) goto L_005e26df;
L_005e2699:; BB(0x005e2699);
    /* 005e2699: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e269c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e269d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e26a0: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e26a5u); f_005e246d();
    /* 005e26a5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e26a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e26ab: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e26b0u); f_005e345f();
    /* 005e26b0: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e26b3: jne 0x5e26bf */ if (!fZ) goto L_005e26bf;
L_005e26b5:; BB(0x005e26b5);
    /* 005e26b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e26b8: call 0x5e3e0d */ r_esp -= 4; W32(r_esp, 0x5e26bdu); f_005e3e0d();
    /* 005e26bd: jmp 0x5e26df */ goto L_005e26df;
L_005e26bf:; BB(0x005e26bf);
    /* 005e26bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e26c2: cmp dword ptr [edx + 0x88c], 0 */ {  u32 a = R32((u32)(r_edx+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e26c9: je 0x5e26dd */ if (fZ) goto L_005e26dd;
L_005e26cb:; BB(0x005e26cb);
    /* 005e26cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e26ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e26cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e26d2: mov ecx, dword ptr [ecx + 0x88c] */ r_ecx = R32((u32)(r_ecx+0x88cu));
    /* 005e26d8: call 0x5e2671 */ r_esp -= 4; W32(r_esp, 0x5e26ddu); f_005e2671();
L_005e26dd:; BB(0x005e26dd);
    /* 005e26dd: jmp 0x5e2683 */ goto L_005e2683;
L_005e26df:; BB(0x005e26df);
    /* 005e26df: mov esp, ebp */ r_esp = r_ebp;
    /* 005e26e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e26e2: ret 4 */ FN_RET(0x005e2671); r_esp += 8; return;
}

void f_005e26e5(void) /* FUN_005e26e5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e26e5);
    /* 005e26e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e26e6: mov ebp, esp */ r_ebp = r_esp;
    /* 005e26e8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e26eb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e26ee: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e26f5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e26fc: jmp 0x5e2707 */ goto L_005e2707;
L_005e26fe:; BB(0x005e26fe);
    /* 005e26fe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2701: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2704: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e2707:; BB(0x005e2707);
    /* 005e2707: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e270a: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e270fu); f_005e24af();
    /* 005e270f: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2712: jge 0x5e276a */ if ((fS==fO)) goto L_005e276a;
L_005e2714:; BB(0x005e2714);
    /* 005e2714: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2717: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2718: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e271b: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e2720u); f_005e246d();
    /* 005e2720: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e2723: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2726: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e272bu); f_005e345f();
    /* 005e272b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e272e: jne 0x5e273a */ if (!fZ) goto L_005e273a;
L_005e2730:; BB(0x005e2730);
    /* 005e2730: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2733: call 0x5e3e7e */ r_esp -= 4; W32(r_esp, 0x5e2738u); f_005e3e7e();
    /* 005e2738: jmp 0x5e276c */ goto L_005e276c;
L_005e273a:; BB(0x005e273a);
    /* 005e273a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e273d: cmp dword ptr [edx + 0x88c], 0 */ {  u32 a = R32((u32)(r_edx+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2744: je 0x5e2768 */ if (fZ) goto L_005e2768;
L_005e2746:; BB(0x005e2746);
    /* 005e2746: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2749: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e274a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e274d: mov ecx, dword ptr [ecx + 0x88c] */ r_ecx = R32((u32)(r_ecx+0x88cu));
    /* 005e2753: call 0x5e26e5 */ r_esp -= 4; W32(r_esp, 0x5e2758u); f_005e26e5();
    /* 005e2758: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e275b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e275f: je 0x5e2768 */ if (fZ) goto L_005e2768;
L_005e2761:; BB(0x005e2761);
    /* 005e2761: mov eax, 1 */ r_eax = 0x1u;
    /* 005e2766: jmp 0x5e276c */ goto L_005e276c;
L_005e2768:; BB(0x005e2768);
    /* 005e2768: jmp 0x5e26fe */ goto L_005e26fe;
L_005e276a:; BB(0x005e276a);
    /* 005e276a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e276c:; BB(0x005e276c);
    /* 005e276c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e276e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e276f: ret 4 */ FN_RET(0x005e26e5); r_esp += 8; return;
}

void f_005e2772(void) /* FUN_005e2772 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2772);
    /* 005e2772: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2773: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2775: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2778: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2779: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e277c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e2783: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2786: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005e278c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005e278e: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005e2790: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2793: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2796: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e2799: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e27a0: jmp 0x5e27ab */ goto L_005e27ab;
L_005e27a2:; BB(0x005e27a2);
    /* 005e27a2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e27a5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e27a8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005e27ab:; BB(0x005e27ab);
    /* 005e27ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e27ae: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e27b3u); f_005e24af();
    /* 005e27b3: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e27b6: jge 0x5e27d5 */ if ((fS==fO)) goto L_005e27d5;
L_005e27b8:; BB(0x005e27b8);
    /* 005e27b8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e27bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e27bc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e27bf: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e27c4u); f_005e246d();
    /* 005e27c4: mov ecx, eax */ r_ecx = r_eax;
    /* 005e27c6: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e27cbu); f_005d98da();
    /* 005e27cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e27ce: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e27d0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e27d3: jmp 0x5e27a2 */ goto L_005e27a2;
L_005e27d5:; BB(0x005e27d5);
    /* 005e27d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e27d8: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e27db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e27dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e27df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e27e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e27e3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e27e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e27e8: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e27ebu); call_ind(t); }
    /* 005e27eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e27ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e27ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e27f2: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 005e27f8: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x5e27fdu); f_005dd425();
    /* 005e27fd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2800: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 005e2806: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e280bu); f_005d9883();
    /* 005e280b: mov esi, eax */ r_esi = r_eax;
    /* 005e280d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2810: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005e2816: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e281bu); f_005dd4d2();
    /* 005e281b: lea ecx, [esi + eax + 8] */ r_ecx = (u32)(r_esi+r_eax+0x8u);
    /* 005e281f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2820: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e2823: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e2825: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e2828: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5e282bu); call_ind(t); }
    /* 005e282b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e282c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e282e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e282f: ret 4 */ FN_RET(0x005e2772); r_esp += 8; return;
}

void f_005e2832(void) /* FUN_005e2832 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2832);
    /* 005e2832: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2833: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2835: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2838: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e283b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e283e: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e2843u); f_005e24af();
    /* 005e2843: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e2846: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e2849: jmp 0x5e2854 */ goto L_005e2854;
L_005e284b:; BB(0x005e284b);
    /* 005e284b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e284e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e2851: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e2854:; BB(0x005e2854);
    /* 005e2854: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2858: jle 0x5e288e */ if ((fZ||fS!=fO)) goto L_005e288e;
L_005e285a:; BB(0x005e285a);
    /* 005e285a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e285d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e285e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2861: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e2866u); f_005e246d();
    /* 005e2866: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2868: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e286du); f_005e345f();
    /* 005e286d: cmp eax, 0xc350 */ {  u32 a = r_eax; u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2872: jl 0x5e288c */ if ((fS!=fO)) goto L_005e288c;
L_005e2874:; BB(0x005e2874);
    /* 005e2874: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2877: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2878: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e287b: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e2880u); f_005e246d();
    /* 005e2880: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2882: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e2887u); f_005e345f();
    /* 005e2887: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e288a: jmp 0x5e2893 */ goto L_005e2893;
L_005e288c:; BB(0x005e288c);
    /* 005e288c: jmp 0x5e284b */ goto L_005e284b;
L_005e288e:; BB(0x005e288e);
    /* 005e288e: mov eax, 0xc350 */ r_eax = 0xc350u;
L_005e2893:; BB(0x005e2893);
    /* 005e2893: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2895: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2896: ret  */ FN_RET(0x005e2832); r_esp += 4; return;
}

void f_005e2897(void) /* FUN_005e2897 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2897);
    /* 005e2897: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2898: mov ebp, esp */ r_ebp = r_esp;
    /* 005e289a: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e289d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e28a0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e28a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e28aa: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005e28b0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005e28b2: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005e28b4: and ecx, 0xfffffffc */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e28b7: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e28ba: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e28bd: push 0x8c4 */ { u32 v = 0x8c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e28c2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e28c7u); f_0048ab58();
    /* 005e28c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e28ca: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e28cd: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e28d1: je 0x5e2901 */ if (fZ) goto L_005e2901;
L_005e28d3:; BB(0x005e28d3);
    /* 005e28d3: cmp dword ptr [ebp + 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e28d7: jne 0x5e28e6 */ if (!fZ) goto L_005e28e6;
L_005e28d9:; BB(0x005e28d9);
    /* 005e28d9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e28dc: call 0x5e2832 */ r_esp -= 4; W32(r_esp, 0x5e28e1u); f_005e2832();
    /* 005e28e1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e28e4: jmp 0x5e28ec */ goto L_005e28ec;
L_005e28e6:; BB(0x005e28e6);
    /* 005e28e6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e28e9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_005e28ec:; BB(0x005e28ec);
    /* 005e28ec: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e28ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e28f0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e28f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e28f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e28f7: call 0x5e2d4e */ r_esp -= 4; W32(r_esp, 0x5e28fcu); f_005e2d4e();
    /* 005e28fc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e28ff: jmp 0x5e2908 */ goto L_005e2908;
L_005e2901:; BB(0x005e2901);
    /* 005e2901: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005e2908:; BB(0x005e2908);
    /* 005e2908: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e290b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e290e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2911: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e2916u); f_005e345f();
    /* 005e2916: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2919: jne 0x5e2951 */ if (!fZ) goto L_005e2951;
L_005e291b:; BB(0x005e291b);
    /* 005e291b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e291e: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 005e2924: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2925: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2928: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5e292du); f_005e8740();
    /* 005e292d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2930: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005e2936: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e2937: mov ecx, 3 */ r_ecx = 0x3u;
    /* 005e293c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e293c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e293c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e293e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e293f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2942: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5e2947u); f_005e8775();
    /* 005e2947: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e294a: call 0x5e35d0 */ r_esp -= 4; W32(r_esp, 0x5e294fu); f_005e35d0();
    /* 005e294f: jmp 0x5e29a8 */ goto L_005e29a8;
L_005e2951:; BB(0x005e2951);
    /* 005e2951: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2955: jle 0x5e2963 */ if ((fZ||fS!=fO)) goto L_005e2963;
L_005e2957:; BB(0x005e2957);
    /* 005e2957: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e295a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e295d: mov dword ptr [edx + 0x8a4], eax */ W32((u32)(r_edx+0x8a4u), r_eax);
L_005e2963:; BB(0x005e2963);
    /* 005e2963: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2966: mov edx, dword ptr [ecx + 0x8a4] */ r_edx = R32((u32)(r_ecx+0x8a4u));
    /* 005e296c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e296d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2970: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e2975u); f_005e87aa();
    /* 005e2975: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2978: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2979: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e297c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e297e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2981: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5e2984u); call_ind(t); }
    /* 005e2984: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2987: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 005e298d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e298e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2991: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5e2996u); f_005e8740();
    /* 005e2996: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2999: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005e299f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e29a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e29a3: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5e29a8u); f_005e8775();
L_005e29a8:; BB(0x005e29a8);
    /* 005e29a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e29ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e29ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e29b0: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e29b3u); call_ind(t); }
    /* 005e29b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e29b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e29b7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e29ba: call 0x5e2772 */ r_esp -= 4; W32(r_esp, 0x5e29bfu); f_005e2772();
    /* 005e29bf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e29c2: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005e29c8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e29cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e29ce: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 005e29d4: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e29db: jmp 0x5e29e6 */ goto L_005e29e6;
L_005e29dd:; BB(0x005e29dd);
    /* 005e29dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e29e0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e29e3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005e29e6:; BB(0x005e29e6);
    /* 005e29e6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e29e9: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e29eeu); f_005e24af();
    /* 005e29ee: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e29f1: jge 0x5e2a10 */ if ((fS==fO)) goto L_005e2a10;
L_005e29f3:; BB(0x005e29f3);
    /* 005e29f3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e29f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e29f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e29fa: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e29ffu); f_005e246d();
    /* 005e29ff: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2a01: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e2a06u); f_005d98da();
    /* 005e2a06: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2a09: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2a0b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e2a0e: jmp 0x5e29dd */ goto L_005e29dd;
L_005e2a10:; BB(0x005e2a10);
    /* 005e2a10: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2a13: cmp dword ptr [edx + 0xb8], 2 */ {  u32 a = R32((u32)(r_edx+0xb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2a1a: je 0x5e2a38 */ if (fZ) goto L_005e2a38;
L_005e2a1c:; BB(0x005e2a1c);
    /* 005e2a1c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2a1f: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2a22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a23: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2a26: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 005e2a2c: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a30: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2a33: call 0x5e07d6 */ r_esp -= 4; W32(r_esp, 0x5e2a38u); f_005e07d6();
L_005e2a38:; BB(0x005e2a38);
    /* 005e2a38: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2a3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2a3b: ret 0xc */ FN_RET(0x005e2897); r_esp += 16; return;
}

void f_005e2a3e(void) /* FUN_005e2a3e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2a3e);
    /* 005e2a3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a3f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2a41: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2a44: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e2a47: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a4c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e2a51u); f_0048ab58();
    /* 005e2a51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2a54: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e2a57: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2a5b: je 0x5e2a76 */ if (fZ) goto L_005e2a76;
L_005e2a5d:; BB(0x005e2a5d);
    /* 005e2a5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2a62: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005e2a68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2a6c: call 0x5e0b50 */ r_esp -= 4; W32(r_esp, 0x5e2a71u); f_005e0b50();
    /* 005e2a71: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e2a74: jmp 0x5e2a7d */ goto L_005e2a7d;
L_005e2a76:; BB(0x005e2a76);
    /* 005e2a76: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005e2a7d:; BB(0x005e2a7d);
    /* 005e2a7d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2a80: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2a82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2a83: ret  */ FN_RET(0x005e2a3e); r_esp += 4; return;
}

void f_005e2a84(void) /* FUN_005e2a84 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2a84);
    /* 005e2a84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a85: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2a87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a88: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e2a8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2a8e: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5e2a93u); f_005d5d20();
    /* 005e2a93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2a96: mov dword ptr [eax], 0x63bc0c */ W32((u32)(r_eax), 0x63bc0cu);
    /* 005e2a9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2a9f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e2aa2: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 005e2aa8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2aab: mov dword ptr [eax + 0xd0], 0 */ W32((u32)(r_eax+0xd0u), 0x0u);
    /* 005e2ab5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2ab8: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 005e2ac2: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ac4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2ac7: call 0x5d6c57 */ r_esp -= 4; W32(r_esp, 0x5e2accu); f_005d6c57();
    /* 005e2acc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ace: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ad0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2ad3: call 0x5d6c88 */ r_esp -= 4; W32(r_esp, 0x5e2ad8u); f_005d6c88();
    /* 005e2ad8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2adb: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2add: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2ade: ret 4 */ FN_RET(0x005e2a84); r_esp += 8; return;
}

void f_005e2ae1(void) /* FUN_005e2ae1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2ae1);
    /* 005e2ae1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ae2: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2ae4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2ae7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e2aea: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2aed: mov dword ptr [eax], 0x63bc0c */ W32((u32)(r_eax), 0x63bc0cu);
    /* 005e2af3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2af6: cmp dword ptr [ecx + 0xd4], 0 */ {  u32 a = R32((u32)(r_ecx+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2afd: je 0x5e2b3c */ if (fZ) goto L_005e2b3c;
L_005e2aff:; BB(0x005e2aff);
    /* 005e2aff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2b02: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005e2b08: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e2b0b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2b0e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e2b11: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2b15: je 0x5e2b28 */ if (fZ) goto L_005e2b28;
L_005e2b17:; BB(0x005e2b17);
    /* 005e2b17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b19: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2b1c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e2b1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2b21: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e2b23u); call_ind(t); }
    /* 005e2b23: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e2b26: jmp 0x5e2b2f */ goto L_005e2b2f;
L_005e2b28:; BB(0x005e2b28);
    /* 005e2b28: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005e2b2f:; BB(0x005e2b2f);
    /* 005e2b2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2b32: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
L_005e2b3c:; BB(0x005e2b3c);
    /* 005e2b3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2b3f: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5e2b44u); f_005d5dfb();
    /* 005e2b44: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2b46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2b47: ret  */ FN_RET(0x005e2ae1); r_esp += 4; return;
}

void f_005e2b48(void) /* FUN_005e2b48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2b48);
    /* 005e2b48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b49: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2b4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b4c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e2b4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2b52: cmp dword ptr [eax + 0xd0], 0 */ {  u32 a = R32((u32)(r_eax+0xd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2b59: je 0x5e2b94 */ if (fZ) goto L_005e2b94;
L_005e2b5b:; BB(0x005e2b5b);
    /* 005e2b5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2b5e: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 005e2b64: call 0x5e078a */ r_esp -= 4; W32(r_esp, 0x5e2b69u); f_005e078a();
    /* 005e2b69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2b6b: je 0x5e2b86 */ if (fZ) goto L_005e2b86;
L_005e2b6d:; BB(0x005e2b6d);
    /* 005e2b6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2b70: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 005e2b76: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2b79: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 005e2b7f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e2b81: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5e2b84u); call_ind(t); }
    /* 005e2b84: jmp 0x5e2b94 */ goto L_005e2b94;
L_005e2b86:; BB(0x005e2b86);
    /* 005e2b86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2b89: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 005e2b8f: call 0x5e1f28 */ r_esp -= 4; W32(r_esp, 0x5e2b94u); f_005e1f28();
L_005e2b94:; BB(0x005e2b94);
    /* 005e2b94: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2b96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2b97: ret  */ FN_RET(0x005e2b48); r_esp += 4; return;
}

void f_005e2b98(void) /* FUN_005e2b98 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2b98);
    /* 005e2b98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b99: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2b9b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2b9e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e2ba1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2ba4: cmp dword ptr [eax + 0xd4], 0 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2bab: jne 0x5e2be3 */ if (!fZ) goto L_005e2be3;
L_005e2bad:; BB(0x005e2bad);
    /* 005e2bad: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2bb2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e2bb7u); f_0048ab58();
    /* 005e2bb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2bba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e2bbd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2bc1: je 0x5e2bd0 */ if (fZ) goto L_005e2bd0;
L_005e2bc3:; BB(0x005e2bc3);
    /* 005e2bc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2bc6: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5e2bcbu); f_005e8590();
    /* 005e2bcb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e2bce: jmp 0x5e2bd7 */ goto L_005e2bd7;
L_005e2bd0:; BB(0x005e2bd0);
    /* 005e2bd0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005e2bd7:; BB(0x005e2bd7);
    /* 005e2bd7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2bda: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2bdd: mov dword ptr [ecx + 0xd4], edx */ W32((u32)(r_ecx+0xd4u), r_edx);
L_005e2be3:; BB(0x005e2be3);
    /* 005e2be3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2be6: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 005e2bec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2bef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e2bf2: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005e2bf5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e2bf8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2bf9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2bfc: mov ecx, dword ptr [edx + 0xd4] */ r_ecx = R32((u32)(r_edx+0xd4u));
    /* 005e2c02: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c05: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 005e2c0b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e2c0d: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5e2c10u); call_ind(t); }
    /* 005e2c10: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e2c13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c14: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c17: mov ecx, dword ptr [edx + 0xd4] */ r_ecx = R32((u32)(r_edx+0xd4u));
    /* 005e2c1d: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e2c22u); f_005e87aa();
    /* 005e2c22: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c25: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 005e2c2b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c2e: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005e2c34: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e2c36: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e2c39u); call_ind(t); }
    /* 005e2c39: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e2c3e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c41: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e2c44u); call_ind(t); }
    /* 005e2c44: sub eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e2c47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c48: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c4b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e2c4d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c50: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e2c53u); call_ind(t); }
    /* 005e2c53: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2c56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c57: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c5a: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 005e2c60: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c63: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005e2c69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e2c6b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e2c6eu); call_ind(t); }
    /* 005e2c6e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c71: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e2c76u); f_005d9883();
    /* 005e2c76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c77: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c7a: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 005e2c80: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c83: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005e2c89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e2c8b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e2c8eu); call_ind(t); }
    /* 005e2c8e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2c90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2c91: ret 8 */ FN_RET(0x005e2b98); r_esp += 12; return;
}

void f_005e2c94(void) /* FUN_005e2c94 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2c94);
    /* 005e2c94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c95: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2c97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c98: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e2c9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2c9e: call 0x5d6d06 */ r_esp -= 4; W32(r_esp, 0x5e2ca3u); f_005d6d06();
    /* 005e2ca3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2ca6: cmp dword ptr [eax + 0xd4], 0 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2cad: je 0x5e2cc6 */ if (fZ) goto L_005e2cc6;
L_005e2caf:; BB(0x005e2caf);
    /* 005e2caf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2cb2: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 005e2cb8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2cbb: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005e2cc1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e2cc3: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e2cc6u); call_ind(t); }
L_005e2cc6:; BB(0x005e2cc6);
    /* 005e2cc6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2cc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2cc9: ret  */ FN_RET(0x005e2c94); r_esp += 4; return;
}

void f_005e2cca(void) /* FUN_005e2cca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2cca);
    /* 005e2cca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ccb: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2ccd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2cce: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e2cd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2cd4: call 0x5d6d33 */ r_esp -= 4; W32(r_esp, 0x5e2cd9u); f_005d6d33();
    /* 005e2cd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2cdc: cmp dword ptr [eax + 0xd4], 0 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2ce3: je 0x5e2cfc */ if (fZ) goto L_005e2cfc;
L_005e2ce5:; BB(0x005e2ce5);
    /* 005e2ce5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2ce8: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 005e2cee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2cf1: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005e2cf7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e2cf9: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e2cfcu); call_ind(t); }
L_005e2cfc:; BB(0x005e2cfc);
    /* 005e2cfc: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2cfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2cff: ret  */ FN_RET(0x005e2cca); r_esp += 4; return;
}

void f_005e2d00(void) /* FUN_005e2d00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2d00);
    /* 005e2d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d01: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d05: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e2d08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2d0b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e2d0e: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e2d13u); f_005e06d0();
    /* 005e2d13: mov esi, eax */ r_esi = r_eax;
    /* 005e2d15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2d18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e2d1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2d1d: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e2d20u); call_ind(t); }
    /* 005e2d20: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2d22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e2d23: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2d25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2d26: ret  */ FN_RET(0x005e2d00); r_esp += 4; return;
}

void f_005e2d27(void) /* FUN_005e2d27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2d27);
    /* 005e2d27: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d28: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2d2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d2b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d2c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e2d2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2d32: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e2d35: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e2d3au); f_005e06e1();
    /* 005e2d3a: mov esi, eax */ r_esi = r_eax;
    /* 005e2d3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2d3f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e2d41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2d44: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e2d47u); call_ind(t); }
    /* 005e2d47: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2d49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e2d4a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2d4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2d4d: ret  */ FN_RET(0x005e2d27); r_esp += 4; return;
}

void f_005e2d4e(void) /* FUN_005e2d4e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2d4e);
    /* 005e2d4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d4f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2d51: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2d54: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e2d57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2d5a: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5e2d5fu); f_005e8590();
    /* 005e2d5f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2d62: mov dword ptr [eax], 0x63bc7c */ W32((u32)(r_eax), 0x63bc7cu);
    /* 005e2d68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2d6b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e2d6e: mov dword ptr [ecx + 0x888], edx */ W32((u32)(r_ecx+0x888u), r_edx);
    /* 005e2d74: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2d77: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e2d7a: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005e2d7d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2d80: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2d83: mov dword ptr [edx + 0x8b0], eax */ W32((u32)(r_edx+0x8b0u), r_eax);
    /* 005e2d89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2d8c: mov dword ptr [ecx + 0x88c], 0 */ W32((u32)(r_ecx+0x88cu), 0x0u);
    /* 005e2d96: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2d99: mov dword ptr [edx + 0x890], 0 */ W32((u32)(r_edx+0x890u), 0x0u);
    /* 005e2da3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2da6: mov dword ptr [eax + 0x894], 0 */ W32((u32)(r_eax+0x894u), 0x0u);
    /* 005e2db0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2db3: mov dword ptr [ecx + 0x8b8], 0 */ W32((u32)(r_ecx+0x8b8u), 0x0u);
    /* 005e2dbd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2dc0: mov dword ptr [edx + 0x8bc], 1 */ W32((u32)(r_edx+0x8bcu), 0x1u);
    /* 005e2dca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2dcd: mov byte ptr [eax + 0x8c0], 0 */ W8((u32)(r_eax+0x8c0u), 0x0u);
    /* 005e2dd4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2dd7: mov dword ptr [ecx + 0x8b4], 0 */ W32((u32)(r_ecx+0x8b4u), 0x0u);
    /* 005e2de1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2de4: mov dword ptr [edx + 0x898], 0 */ W32((u32)(r_edx+0x898u), 0x0u);
    /* 005e2dee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e2df5: jmp 0x5e2e00 */ goto L_005e2e00;
L_005e2df7:; BB(0x005e2df7);
    /* 005e2df7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2dfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2dfd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e2e00:; BB(0x005e2e00);
    /* 005e2e00: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2e04: jge 0x5e2e19 */ if ((fS==fO)) goto L_005e2e19;
L_005e2e06:; BB(0x005e2e06);
    /* 005e2e06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2e09: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e0c: mov dword ptr [edx + ecx*4 + 0x89c], 0 */ W32((u32)(r_edx+r_ecx*4+0x89cu), 0x0u);
    /* 005e2e17: jmp 0x5e2df7 */ goto L_005e2df7;
L_005e2e19:; BB(0x005e2e19);
    /* 005e2e19: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e1c: mov dword ptr [eax + 0x8a4], 0x25 */ W32((u32)(r_eax+0x8a4u), 0x25u);
    /* 005e2e26: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e29: mov dword ptr [ecx + 0x8a8], 0x40 */ W32((u32)(r_ecx+0x8a8u), 0x40u);
    /* 005e2e33: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e36: mov dword ptr [edx + 0x8ac], 0x3a */ W32((u32)(r_edx+0x8acu), 0x3au);
    /* 005e2e40: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e43: cmp dword ptr [eax + 0x898], 0 */ {  u32 a = R32((u32)(r_eax+0x898u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2e4a: jne 0x5e2ebd */ if (!fZ) goto L_005e2ebd;
L_005e2e4c:; BB(0x005e2e4c);
    /* 005e2e4c: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e4e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e2e53u); f_0048ab58();
    /* 005e2e53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2e56: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e2e59: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2e5d: je 0x5e2e6c */ if (fZ) goto L_005e2e6c;
L_005e2e5f:; BB(0x005e2e5f);
    /* 005e2e5f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2e62: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5e2e67u); f_005e3fb0();
    /* 005e2e67: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e2e6a: jmp 0x5e2e73 */ goto L_005e2e73;
L_005e2e6c:; BB(0x005e2e6c);
    /* 005e2e6c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005e2e73:; BB(0x005e2e73);
    /* 005e2e73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e76: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2e79: mov dword ptr [ecx + 0x898], edx */ W32((u32)(r_ecx+0x898u), r_edx);
    /* 005e2e7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e81: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e84: mov ecx, dword ptr [eax + 0x898] */ r_ecx = R32((u32)(r_eax+0x898u));
    /* 005e2e8a: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e2e8fu); f_005ea0c3();
    /* 005e2e8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e92: mov ecx, dword ptr [ecx + 0x898] */ r_ecx = R32((u32)(r_ecx+0x898u));
    /* 005e2e98: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e9b: mov eax, dword ptr [edx + 0x898] */ r_eax = R32((u32)(r_edx+0x898u));
    /* 005e2ea1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e2ea3: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e2ea6u); call_ind(t); }
    /* 005e2ea6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2ea9: mov ecx, dword ptr [eax + 0x898] */ r_ecx = R32((u32)(r_eax+0x898u));
    /* 005e2eaf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2eb2: mov eax, dword ptr [edx + 0x898] */ r_eax = R32((u32)(r_edx+0x898u));
    /* 005e2eb8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e2eba: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e2ebdu); call_ind(t); }
L_005e2ebd:; BB(0x005e2ebd);
    /* 005e2ebd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ebf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ec1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2ec4: call 0x5e8eba */ r_esp -= 4; W32(r_esp, 0x5e2ec9u); f_005e8eba();
    /* 005e2ec9: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ecb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2ece: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5e2ed3u); f_005e8e99();
    /* 005e2ed3: mov eax, dword ptr [0x687098] */ r_eax = R32((u32)(0x687098u));
    /* 005e2ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ed9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2edc: call 0x5e8b9e */ r_esp -= 4; W32(r_esp, 0x5e2ee1u); f_005e8b9e();
    /* 005e2ee1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2ee4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2ee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2ee7: ret 8 */ FN_RET(0x005e2d4e); r_esp += 12; return;
}

void f_005e2eea(void) /* FUN_005e2eea */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2eea);
    /* 005e2eea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2eeb: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2eed: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2ef0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005e2ef3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2ef6: mov dword ptr [eax], 0x63bc7c */ W32((u32)(r_eax), 0x63bc7cu);
    /* 005e2efc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2eff: mov dword ptr [ecx + 0x888], 0 */ W32((u32)(r_ecx+0x888u), 0x0u);
    /* 005e2f09: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2f0c: cmp dword ptr [edx + 0x88c], 0 */ {  u32 a = R32((u32)(r_edx+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2f13: je 0x5e2f60 */ if (fZ) goto L_005e2f60;
L_005e2f15:; BB(0x005e2f15);
    /* 005e2f15: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2f18: mov ecx, dword ptr [eax + 0x88c] */ r_ecx = R32((u32)(r_eax+0x88cu));
    /* 005e2f1e: call 0x5e1f28 */ r_esp -= 4; W32(r_esp, 0x5e2f23u); f_005e1f28();
    /* 005e2f23: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2f26: mov edx, dword ptr [ecx + 0x88c] */ r_edx = R32((u32)(r_ecx+0x88cu));
    /* 005e2f2c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e2f2f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2f32: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e2f35: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2f39: je 0x5e2f4c */ if (fZ) goto L_005e2f4c;
L_005e2f3b:; BB(0x005e2f3b);
    /* 005e2f3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2f3d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2f40: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e2f42: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2f45: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e2f47u); call_ind(t); }
    /* 005e2f47: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005e2f4a: jmp 0x5e2f53 */ goto L_005e2f53;
L_005e2f4c:; BB(0x005e2f4c);
    /* 005e2f4c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005e2f53:; BB(0x005e2f53);
    /* 005e2f53: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2f56: mov dword ptr [eax + 0x88c], 0 */ W32((u32)(r_eax+0x88cu), 0x0u);
L_005e2f60:; BB(0x005e2f60);
    /* 005e2f60: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2f63: cmp dword ptr [ecx + 0x890], 0 */ {  u32 a = R32((u32)(r_ecx+0x890u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2f6a: je 0x5e2fc0 */ if (fZ) goto L_005e2fc0;
L_005e2f6c:; BB(0x005e2f6c);
    /* 005e2f6c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2f6f: mov ecx, dword ptr [edx + 0x890] */ r_ecx = R32((u32)(r_edx+0x890u));
    /* 005e2f75: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2f78: mov edx, dword ptr [eax + 0x890] */ r_edx = R32((u32)(r_eax+0x890u));
    /* 005e2f7e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e2f80: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5e2f83u); call_ind(t); }
    /* 005e2f83: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2f86: mov edx, dword ptr [ecx + 0x890] */ r_edx = R32((u32)(r_ecx+0x890u));
    /* 005e2f8c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005e2f8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2f92: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e2f95: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2f99: je 0x5e2fac */ if (fZ) goto L_005e2fac;
L_005e2f9b:; BB(0x005e2f9b);
    /* 005e2f9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2f9d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2fa0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e2fa2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e2fa5: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e2fa7u); call_ind(t); }
    /* 005e2fa7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e2faa: jmp 0x5e2fb3 */ goto L_005e2fb3;
L_005e2fac:; BB(0x005e2fac);
    /* 005e2fac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005e2fb3:; BB(0x005e2fb3);
    /* 005e2fb3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2fb6: mov dword ptr [eax + 0x890], 0 */ W32((u32)(r_eax+0x890u), 0x0u);
L_005e2fc0:; BB(0x005e2fc0);
    /* 005e2fc0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2fc3: cmp dword ptr [ecx + 0x894], 0 */ {  u32 a = R32((u32)(r_ecx+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2fca: je 0x5e3020 */ if (fZ) goto L_005e3020;
L_005e2fcc:; BB(0x005e2fcc);
    /* 005e2fcc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2fcf: mov ecx, dword ptr [edx + 0x894] */ r_ecx = R32((u32)(r_edx+0x894u));
    /* 005e2fd5: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2fd8: mov edx, dword ptr [eax + 0x894] */ r_edx = R32((u32)(r_eax+0x894u));
    /* 005e2fde: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e2fe0: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5e2fe3u); call_ind(t); }
    /* 005e2fe3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2fe6: mov edx, dword ptr [ecx + 0x894] */ r_edx = R32((u32)(r_ecx+0x894u));
    /* 005e2fec: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005e2fef: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e2ff2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e2ff5: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2ff9: je 0x5e300c */ if (fZ) goto L_005e300c;
L_005e2ffb:; BB(0x005e2ffb);
    /* 005e2ffb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ffd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e3000: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e3002: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e3005: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e3007u); call_ind(t); }
    /* 005e3007: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005e300a: jmp 0x5e3013 */ goto L_005e3013;
L_005e300c:; BB(0x005e300c);
    /* 005e300c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005e3013:; BB(0x005e3013);
    /* 005e3013: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e3016: mov dword ptr [eax + 0x894], 0 */ W32((u32)(r_eax+0x894u), 0x0u);
L_005e3020:; BB(0x005e3020);
    /* 005e3020: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e3023: cmp dword ptr [ecx + 0x898], 0 */ {  u32 a = R32((u32)(r_ecx+0x898u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e302a: je 0x5e3079 */ if (fZ) goto L_005e3079;
L_005e302c:; BB(0x005e302c);
    /* 005e302c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e302e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e3031: mov ecx, dword ptr [edx + 0x898] */ r_ecx = R32((u32)(r_edx+0x898u));
    /* 005e3037: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5e303cu); f_005e40dc();
    /* 005e303c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e303f: mov ecx, dword ptr [eax + 0x898] */ r_ecx = R32((u32)(r_eax+0x898u));
    /* 005e3045: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e3048: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e304b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005e304e: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3052: je 0x5e3065 */ if (fZ) goto L_005e3065;
L_005e3054:; BB(0x005e3054);
    /* 005e3054: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3056: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e3059: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e305b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e305e: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e3060u); call_ind(t); }
    /* 005e3060: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005e3063: jmp 0x5e306c */ goto L_005e306c;
L_005e3065:; BB(0x005e3065);
    /* 005e3065: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005e306c:; BB(0x005e306c);
    /* 005e306c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e306f: mov dword ptr [eax + 0x898], 0 */ W32((u32)(r_eax+0x898u), 0x0u);
L_005e3079:; BB(0x005e3079);
    /* 005e3079: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e3080: jmp 0x5e308b */ goto L_005e308b;
L_005e3082:; BB(0x005e3082);
    /* 005e3082: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3085: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3088: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e308f: jge 0x5e30e8 */ if ((fS==fO)) goto L_005e30e8;
L_005e3091:; BB(0x005e3091);
    /* 005e3091: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3094: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e3097: cmp dword ptr [eax + edx*4 + 0x89c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x89cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e309f: je 0x5e30e6 */ if (fZ) goto L_005e30e6;
L_005e30a1:; BB(0x005e30a1);
    /* 005e30a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30a4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e30a7: mov eax, dword ptr [edx + ecx*4 + 0x89c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x89cu));
    /* 005e30ae: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005e30b1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e30b4: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005e30b7: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e30bb: je 0x5e30ce */ if (fZ) goto L_005e30ce;
L_005e30bd:; BB(0x005e30bd);
    /* 005e30bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e30bf: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e30c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e30c4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e30c7: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e30c9u); call_ind(t); }
    /* 005e30c9: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e30cc: jmp 0x5e30d5 */ goto L_005e30d5;
L_005e30ce:; BB(0x005e30ce);
    /* 005e30ce: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005e30d5:; BB(0x005e30d5);
    /* 005e30d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e30d8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e30db: mov dword ptr [edx + ecx*4 + 0x89c], 0 */ W32((u32)(r_edx+r_ecx*4+0x89cu), 0x0u);
L_005e30e6:; BB(0x005e30e6);
    /* 005e30e6: jmp 0x5e3082 */ goto L_005e3082;
L_005e30e8:; BB(0x005e30e8);
    /* 005e30e8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e30eb: call 0x5e8680 */ r_esp -= 4; W32(r_esp, 0x5e30f0u); f_005e8680();
    /* 005e30f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e30f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e30f3: ret  */ FN_RET(0x005e2eea); r_esp += 4; return;
}

void f_005e30f4(void) /* FUN_005e30f4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e30f4);
    /* 005e30f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e30f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005e30f7: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e30fa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e30fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e30fc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e30ff: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3102: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3109: jne 0x5e312b */ if (!fZ) goto L_005e312b;
L_005e310b:; BB(0x005e310b);
    /* 005e310b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e310e: mov ecx, dword ptr [ecx + 0x888] */ r_ecx = R32((u32)(r_ecx+0x888u));
    /* 005e3114: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3117: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 005e311d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e311f: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x5e3122u); call_ind(t); }
    /* 005e3122: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3125: mov dword ptr [ecx + 0x88c], eax */ W32((u32)(r_ecx+0x88cu), r_eax);
L_005e312b:; BB(0x005e312b);
    /* 005e312b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e312e: mov eax, dword ptr [edx + 0x88c] */ r_eax = R32((u32)(r_edx+0x88cu));
    /* 005e3134: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3137: mov dword ptr [eax + 0x90], ecx */ W32((u32)(r_eax+0x90u), r_ecx);
    /* 005e313d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e313f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e3142: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3143: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3146: mov ecx, dword ptr [eax + 0x88c] */ r_ecx = R32((u32)(r_eax+0x88cu));
    /* 005e314c: call 0x5e1505 */ r_esp -= 4; W32(r_esp, 0x5e3151u); f_005e1505();
    /* 005e3151: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3154: cmp dword ptr [ecx + 0x890], 0 */ {  u32 a = R32((u32)(r_ecx+0x890u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e315b: jne 0x5e3190 */ if (!fZ) goto L_005e3190;
L_005e315d:; BB(0x005e315d);
    /* 005e315d: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e315f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e3164u); f_0048ab58();
    /* 005e3164: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3167: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e316a: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e316e: je 0x5e317d */ if (fZ) goto L_005e317d;
L_005e3170:; BB(0x005e3170);
    /* 005e3170: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3173: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5e3178u); f_005e9d30();
    /* 005e3178: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e317b: jmp 0x5e3184 */ goto L_005e3184;
L_005e317d:; BB(0x005e317d);
    /* 005e317d: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005e3184:; BB(0x005e3184);
    /* 005e3184: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3187: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e318a: mov dword ptr [edx + 0x890], eax */ W32((u32)(r_edx+0x890u), r_eax);
L_005e3190:; BB(0x005e3190);
    /* 005e3190: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3193: mov edx, dword ptr [ecx + 0x890] */ r_edx = R32((u32)(r_ecx+0x890u));
    /* 005e3199: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e319c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e319f: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005e31a2: push 0x41f */ { u32 v = 0x41fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e31a7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e31aa: mov ecx, dword ptr [edx + 0x890] */ r_ecx = R32((u32)(r_edx+0x890u));
    /* 005e31b0: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e31b5u); f_005ea0c3();
    /* 005e31b5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e31b8: mov ecx, dword ptr [eax + 0x890] */ r_ecx = R32((u32)(r_eax+0x890u));
    /* 005e31be: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e31c1: mov eax, dword ptr [edx + 0x890] */ r_eax = R32((u32)(r_edx+0x890u));
    /* 005e31c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e31c9: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e31ccu); call_ind(t); }
    /* 005e31cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e31cf: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e31d4u); f_005d9883();
    /* 005e31d4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e31d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e31d8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e31db: mov ecx, dword ptr [eax + 0x890] */ r_ecx = R32((u32)(r_eax+0x890u));
    /* 005e31e1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e31e4: mov eax, dword ptr [edx + 0x890] */ r_eax = R32((u32)(r_edx+0x890u));
    /* 005e31ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e31ec: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e31efu); call_ind(t); }
    /* 005e31ef: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e31f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e31f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e31f7: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e31fau); call_ind(t); }
    /* 005e31fa: mov esi, eax */ r_esi = r_eax;
    /* 005e31fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e31ff: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e3204u); f_005d98c3();
    /* 005e3204: lea eax, [esi + eax - 8] */ r_eax = (u32)(r_esi+r_eax+0xfffffff8u);
    /* 005e3208: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e320b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e320e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e3210: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3213: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e3216u); call_ind(t); }
    /* 005e3216: mov esi, eax */ r_esi = r_eax;
    /* 005e3218: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e321b: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e3220u); f_005d98da();
    /* 005e3220: mov edi, eax */ r_edi = r_eax;
    /* 005e3222: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3225: mov ecx, dword ptr [eax + 0x890] */ r_ecx = R32((u32)(r_eax+0x890u));
    /* 005e322b: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e3230u); f_005d98da();
    /* 005e3230: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005e3232: mov eax, edi */ r_eax = r_edi;
    /* 005e3234: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e3235: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e3237: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e3239: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e323b: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 005e323e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3241: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3242: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3245: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3246: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3249: mov ecx, dword ptr [eax + 0x890] */ r_ecx = R32((u32)(r_eax+0x890u));
    /* 005e324f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3252: mov eax, dword ptr [edx + 0x890] */ r_eax = R32((u32)(r_edx+0x890u));
    /* 005e3258: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e325a: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e325du); call_ind(t); }
    /* 005e325d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3260: mov ecx, dword ptr [eax + 0x890] */ r_ecx = R32((u32)(r_eax+0x890u));
    /* 005e3266: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3269: mov eax, dword ptr [edx + 0x890] */ r_eax = R32((u32)(r_edx+0x890u));
    /* 005e326f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3271: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e3274u); call_ind(t); }
    /* 005e3274: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e3275: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e3276: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3278: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3279: ret 4 */ FN_RET(0x005e30f4); r_esp += 8; return;
}

void f_005e327c(void) /* FUN_005e327c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e327c);
    /* 005e327c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e327d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e327f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3282: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e3285: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3288: call 0x5e4fdf */ r_esp -= 4; W32(r_esp, 0x5e328du); f_005e4fdf();
    /* 005e328d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3290: cmp dword ptr [eax + 0x894], 0 */ {  u32 a = R32((u32)(r_eax+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3297: je 0x5e32b0 */ if (fZ) goto L_005e32b0;
L_005e3299:; BB(0x005e3299);
    /* 005e3299: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e329c: mov ecx, dword ptr [ecx + 0x894] */ r_ecx = R32((u32)(r_ecx+0x894u));
    /* 005e32a2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e32a5: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 005e32ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e32ad: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e32b0u); call_ind(t); }
L_005e32b0:; BB(0x005e32b0);
    /* 005e32b0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e32b3: cmp dword ptr [eax + 0x890], 0 */ {  u32 a = R32((u32)(r_eax+0x890u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e32ba: je 0x5e32d3 */ if (fZ) goto L_005e32d3;
L_005e32bc:; BB(0x005e32bc);
    /* 005e32bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e32bf: mov ecx, dword ptr [ecx + 0x890] */ r_ecx = R32((u32)(r_ecx+0x890u));
    /* 005e32c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e32c8: mov eax, dword ptr [edx + 0x890] */ r_eax = R32((u32)(r_edx+0x890u));
    /* 005e32ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e32d0: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e32d3u); call_ind(t); }
L_005e32d3:; BB(0x005e32d3);
    /* 005e32d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e32da: jmp 0x5e32e5 */ goto L_005e32e5;
L_005e32dc:; BB(0x005e32dc);
    /* 005e32dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e32df: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e32e2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e32e5:; BB(0x005e32e5);
    /* 005e32e5: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e32e9: jge 0x5e331c */ if ((fS==fO)) goto L_005e331c;
L_005e32eb:; BB(0x005e32eb);
    /* 005e32eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e32ee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e32f1: cmp dword ptr [edx + ecx*4 + 0x89c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x89cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e32f9: je 0x5e331a */ if (fZ) goto L_005e331a;
L_005e32fb:; BB(0x005e32fb);
    /* 005e32fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e32fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3301: mov ecx, dword ptr [ecx + eax*4 + 0x89c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x89cu));
    /* 005e3308: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e330b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e330e: mov edx, dword ptr [eax + edx*4 + 0x89c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x89cu));
    /* 005e3315: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e3317: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5e331au); call_ind(t); }
L_005e331a:; BB(0x005e331a);
    /* 005e331a: jmp 0x5e32dc */ goto L_005e32dc;
L_005e331c:; BB(0x005e331c);
    /* 005e331c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e331e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e331f: ret  */ FN_RET(0x005e327c); r_esp += 4; return;
}

void f_005e3320(void) /* FUN_005e3320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3320);
    /* 005e3320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3321: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3323: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3326: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e3329: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e332c: call 0x5e4faf */ r_esp -= 4; W32(r_esp, 0x5e3331u); f_005e4faf();
    /* 005e3331: mov eax, dword ptr [0x687098] */ r_eax = R32((u32)(0x687098u));
    /* 005e3336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3337: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e333a: call 0x5e3bb0 */ r_esp -= 4; W32(r_esp, 0x5e333fu); f_005e3bb0();
    /* 005e333f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3341: jne 0x5e3352 */ if (!fZ) goto L_005e3352;
L_005e3343:; BB(0x005e3343);
    /* 005e3343: mov ecx, dword ptr [0x687098] */ r_ecx = R32((u32)(0x687098u));
    /* 005e3349: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e334a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e334d: call 0x5e8b9e */ r_esp -= 4; W32(r_esp, 0x5e3352u); f_005e8b9e();
L_005e3352:; BB(0x005e3352);
    /* 005e3352: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3355: mov eax, dword ptr [edx + 0x85c] */ r_eax = R32((u32)(r_edx+0x85cu));
    /* 005e335b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e335e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3361: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3364: cmp edx, dword ptr [ecx + 0x8ac] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8acu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e336a: jne 0x5e337e */ if (!fZ) goto L_005e337e;
L_005e336c:; BB(0x005e336c);
    /* 005e336c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e336f: mov ecx, dword ptr [eax + 0x8a4] */ r_ecx = R32((u32)(r_eax+0x8a4u));
    /* 005e3375: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3376: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3379: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e337eu); f_005e87aa();
L_005e337e:; BB(0x005e337e);
    /* 005e337e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3381: cmp dword ptr [edx + 0x894], 0 */ {  u32 a = R32((u32)(r_edx+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3388: je 0x5e33a1 */ if (fZ) goto L_005e33a1;
L_005e338a:; BB(0x005e338a);
    /* 005e338a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e338d: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 005e3393: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3396: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 005e339c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e339e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e33a1u); call_ind(t); }
L_005e33a1:; BB(0x005e33a1);
    /* 005e33a1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e33a4: cmp dword ptr [eax + 0x890], 0 */ {  u32 a = R32((u32)(r_eax+0x890u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e33ab: je 0x5e33d5 */ if (fZ) goto L_005e33d5;
L_005e33ad:; BB(0x005e33ad);
    /* 005e33ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e33b0: mov ecx, dword ptr [ecx + 0x890] */ r_ecx = R32((u32)(r_ecx+0x890u));
    /* 005e33b6: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x5e33bbu); f_005ea279();
    /* 005e33bb: cmp eax, 0x43c */ {  u32 a = r_eax; u32 b = 0x43cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e33c0: jne 0x5e33d5 */ if (!fZ) goto L_005e33d5;
L_005e33c2:; BB(0x005e33c2);
    /* 005e33c2: push 0x41f */ { u32 v = 0x41fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e33c7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e33ca: mov ecx, dword ptr [edx + 0x890] */ r_ecx = R32((u32)(r_edx+0x890u));
    /* 005e33d0: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e33d5u); f_005ea0c3();
L_005e33d5:; BB(0x005e33d5);
    /* 005e33d5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e33d8: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e33df: je 0x5e33ef */ if (fZ) goto L_005e33ef;
L_005e33e1:; BB(0x005e33e1);
    /* 005e33e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e33e4: mov ecx, dword ptr [ecx + 0x88c] */ r_ecx = R32((u32)(r_ecx+0x88cu));
    /* 005e33ea: call 0x5e1f28 */ r_esp -= 4; W32(r_esp, 0x5e33efu); f_005e1f28();
L_005e33ef:; BB(0x005e33ef);
    /* 005e33ef: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e33f2: cmp dword ptr [edx + 0x890], 0 */ {  u32 a = R32((u32)(r_edx+0x890u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e33f9: je 0x5e3412 */ if (fZ) goto L_005e3412;
L_005e33fb:; BB(0x005e33fb);
    /* 005e33fb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e33fe: mov ecx, dword ptr [eax + 0x890] */ r_ecx = R32((u32)(r_eax+0x890u));
    /* 005e3404: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3407: mov eax, dword ptr [edx + 0x890] */ r_eax = R32((u32)(r_edx+0x890u));
    /* 005e340d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e340f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e3412u); call_ind(t); }
L_005e3412:; BB(0x005e3412);
    /* 005e3412: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e3419: jmp 0x5e3424 */ goto L_005e3424;
L_005e341b:; BB(0x005e341b);
    /* 005e341b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e341e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e3421: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e3424:; BB(0x005e3424);
    /* 005e3424: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e3428: jge 0x5e345b */ if ((fS==fO)) goto L_005e345b;
L_005e342a:; BB(0x005e342a);
    /* 005e342a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e342d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3430: cmp dword ptr [edx + ecx*4 + 0x89c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x89cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3438: je 0x5e3459 */ if (fZ) goto L_005e3459;
L_005e343a:; BB(0x005e343a);
    /* 005e343a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e343d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3440: mov ecx, dword ptr [ecx + eax*4 + 0x89c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x89cu));
    /* 005e3447: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e344a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e344d: mov edx, dword ptr [eax + edx*4 + 0x89c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x89cu));
    /* 005e3454: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e3456: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5e3459u); call_ind(t); }
L_005e3459:; BB(0x005e3459);
    /* 005e3459: jmp 0x5e341b */ goto L_005e341b;
L_005e345b:; BB(0x005e345b);
    /* 005e345b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e345d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e345e: ret  */ FN_RET(0x005e3320); r_esp += 4; return;
}

void f_005e345f(void) /* FUN_005e345f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e345f);
    /* 005e345f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3460: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3462: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3463: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3466: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3469: mov eax, dword ptr [eax + 0x8b0] */ r_eax = R32((u32)(r_eax+0x8b0u));
    /* 005e346f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3472: ret  */ FN_RET(0x005e345f); r_esp += 4; return;
}

void f_005e3473(void) /* FUN_005e3473 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3473);
    /* 005e3473: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3474: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3476: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3479: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e347a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e347d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e3480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3481: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e3484: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3485: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3488: call 0x5e4f55 */ r_esp -= 4; W32(r_esp, 0x5e348du); f_005e4f55();
    /* 005e348d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e3494: jmp 0x5e349f */ goto L_005e349f;
L_005e3496:; BB(0x005e3496);
    /* 005e3496: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3499: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e349c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005e349f:; BB(0x005e349f);
    /* 005e349f: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e34a3: jge 0x5e3507 */ if ((fS==fO)) goto L_005e3507;
L_005e34a5:; BB(0x005e34a5);
    /* 005e34a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e34a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e34ab: cmp dword ptr [ecx + eax*4 + 0x89c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x89cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e34b3: je 0x5e3505 */ if (fZ) goto L_005e3505;
L_005e34b5:; BB(0x005e34b5);
    /* 005e34b5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e34b8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e34ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e34bd: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5e34c0u); call_ind(t); }
    /* 005e34c0: mov esi, eax */ r_esi = r_eax;
    /* 005e34c2: add esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e34c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e34c8: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e34cdu); f_005d98da();
    /* 005e34cd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e34ce: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e34d0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e34d2: lea ecx, [esi + eax - 1] */ r_ecx = (u32)(r_esi+r_eax+0xffffffffu);
    /* 005e34d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e34d7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e34da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e34dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e34df: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x5e34e2u); call_ind(t); }
    /* 005e34e2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e34e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e34e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e34e9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e34ec: mov ecx, dword ptr [edx + ecx*4 + 0x89c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x89cu));
    /* 005e34f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e34f6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e34f9: mov eax, dword ptr [edx + eax*4 + 0x89c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x89cu));
    /* 005e3500: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3502: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e3505u); call_ind(t); }
L_005e3505:; BB(0x005e3505);
    /* 005e3505: jmp 0x5e3496 */ goto L_005e3496;
L_005e3507:; BB(0x005e3507);
    /* 005e3507: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e3508: mov esp, ebp */ r_esp = r_ebp;
    /* 005e350a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e350b: ret 8 */ FN_RET(0x005e3473); r_esp += 12; return;
}

void f_005e350e(void) /* FUN_005e350e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e350e);
    /* 005e350e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e350f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3511: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3512: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e3513: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3516: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3519: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e351c: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e3521u); f_005e06d0();
    /* 005e3521: mov esi, eax */ r_esi = r_eax;
    /* 005e3523: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3526: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e3528: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e352b: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e352eu); call_ind(t); }
    /* 005e352e: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e3530: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e3531: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3533: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3534: ret  */ FN_RET(0x005e350e); r_esp += 4; return;
}

void f_005e3535(void) /* FUN_005e3535 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3535);
    /* 005e3535: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3536: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3538: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3539: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e353a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e353d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3540: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e3543: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e3548u); f_005e06e1();
    /* 005e3548: mov esi, eax */ r_esi = r_eax;
    /* 005e354a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e354d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e354f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3552: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e3555u); call_ind(t); }
    /* 005e3555: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e3557: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e3558: mov esp, ebp */ r_esp = r_ebp;
    /* 005e355a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e355b: ret  */ FN_RET(0x005e3535); r_esp += 4; return;
}

void f_005e355c(void) /* FUN_005e355c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e355c);
    /* 005e355c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e355d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e355f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3562: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e3565: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e3568: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3569: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e356c: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x5e3571u); f_005d975e();
    /* 005e3571: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e3578: jmp 0x5e3583 */ goto L_005e3583;
L_005e357a:; BB(0x005e357a);
    /* 005e357a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e357d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3580: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e3583:; BB(0x005e3583);
    /* 005e3583: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e3587: jge 0x5e35ca */ if ((fS==fO)) goto L_005e35ca;
L_005e3589:; BB(0x005e3589);
    /* 005e3589: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e358c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e358f: cmp dword ptr [eax + edx*4 + 0x89c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x89cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3597: je 0x5e35c8 */ if (fZ) goto L_005e35c8;
L_005e3599:; BB(0x005e3599);
    /* 005e3599: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e359c: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e35a1u); f_005d9883();
    /* 005e35a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e35a4: lea edx, [eax + ecx + 1] */ r_edx = (u32)(r_eax+r_ecx+0x1u);
    /* 005e35a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e35a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e35ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e35af: mov ecx, dword ptr [ecx + eax*4 + 0x89c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x89cu));
    /* 005e35b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e35b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e35bc: mov edx, dword ptr [eax + edx*4 + 0x89c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x89cu));
    /* 005e35c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e35c5: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5e35c8u); call_ind(t); }
L_005e35c8:; BB(0x005e35c8);
    /* 005e35c8: jmp 0x5e357a */ goto L_005e357a;
L_005e35ca:; BB(0x005e35ca);
    /* 005e35ca: mov esp, ebp */ r_esp = r_ebp;
    /* 005e35cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e35cd: ret 4 */ FN_RET(0x005e355c); r_esp += 8; return;
}

void f_005e35d0(void) /* FUN_005e35d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e35d0);
    /* 005e35d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e35d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e35d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e35d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e35d7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e35da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e35e1: jmp 0x5e35ec */ goto L_005e35ec;
L_005e35e3:; BB(0x005e35e3);
    /* 005e35e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e35e6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e35e9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e35ec:; BB(0x005e35ec);
    /* 005e35ec: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e35f0: jge 0x5e3793 */ if ((fS==fO)) goto L_005e3793;
L_005e35f6:; BB(0x005e35f6);
    /* 005e35f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e35f9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e35fc: cmp dword ptr [edx + ecx*4 + 0x89c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x89cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3604: jne 0x5e378e */ if (!fZ) goto L_005e378e;
L_005e360a:; BB(0x005e360a);
    /* 005e360a: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e360c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e3611u); f_0048ab58();
    /* 005e3611: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3614: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e3617: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e361b: je 0x5e362a */ if (fZ) goto L_005e362a;
L_005e361d:; BB(0x005e361d);
    /* 005e361d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3620: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x5e3625u); f_005e4bb0();
    /* 005e3625: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e3628: jmp 0x5e3631 */ goto L_005e3631;
L_005e362a:; BB(0x005e362a);
    /* 005e362a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005e3631:; BB(0x005e3631);
    /* 005e3631: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3634: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3637: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e363a: mov dword ptr [ecx + eax*4 + 0x89c], edx */ W32((u32)(r_ecx+r_eax*4+0x89cu), r_edx);
    /* 005e3641: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3644: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3647: mov edx, dword ptr [ecx + eax*4 + 0x89c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x89cu));
    /* 005e364e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3651: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e3654: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005e3657: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3659: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e365c: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e3661u); f_005d98c3();
    /* 005e3661: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e3664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3665: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3668: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e366b: mov ecx, dword ptr [eax + edx*4 + 0x89c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x89cu));
    /* 005e3672: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3675: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3678: mov edx, dword ptr [eax + edx*4 + 0x89c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x89cu));
    /* 005e367f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e3681: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5e3684u); call_ind(t); }
    /* 005e3684: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3687: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e3689: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e368c: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e368fu); call_ind(t); }
    /* 005e368f: mov esi, eax */ r_esi = r_eax;
    /* 005e3691: add esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e3694: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3697: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e369cu); f_005d98da();
    /* 005e369c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e369d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e369f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e36a1: lea eax, [esi + eax - 1] */ r_eax = (u32)(r_esi+r_eax+0xffffffffu);
    /* 005e36a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e36a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e36a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e36ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e36ae: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e36b1u); call_ind(t); }
    /* 005e36b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e36b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e36b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e36b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e36bb: mov ecx, dword ptr [ecx + eax*4 + 0x89c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x89cu));
    /* 005e36c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e36c5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e36c8: mov edx, dword ptr [eax + edx*4 + 0x89c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x89cu));
    /* 005e36cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e36d1: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5e36d4u); call_ind(t); }
    /* 005e36d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e36d7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e36da: mov ecx, dword ptr [edx + ecx*4 + 0x89c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x89cu));
    /* 005e36e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e36e4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e36e7: mov eax, dword ptr [edx + eax*4 + 0x89c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x89cu));
    /* 005e36ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e36f0: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e36f3u); call_ind(t); }
    /* 005e36f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e36f6: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e36fbu); f_005d9883();
    /* 005e36fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e36fe: lea edx, [eax + ecx + 1] */ r_edx = (u32)(r_eax+r_ecx+0x1u);
    /* 005e3702: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3703: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3706: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3709: mov ecx, dword ptr [ecx + eax*4 + 0x89c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x89cu));
    /* 005e3710: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3713: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3716: mov edx, dword ptr [eax + edx*4 + 0x89c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x89cu));
    /* 005e371d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e371f: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5e3722u); call_ind(t); }
    /* 005e3722: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3726: jne 0x5e375c */ if (!fZ) goto L_005e375c;
L_005e3728:; BB(0x005e3728);
    /* 005e3728: mov ecx, dword ptr [0x699ba4] */ r_ecx = R32((u32)(0x699ba4u));
    /* 005e372e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e372f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3732: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3735: mov ecx, dword ptr [eax + edx*4 + 0x89c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x89cu));
    /* 005e373c: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5e3741u); f_005e4eac();
    /* 005e3741: mov ecx, dword ptr [0x699ba4] */ r_ecx = R32((u32)(0x699ba4u));
    /* 005e3747: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3748: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e374b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e374e: mov ecx, dword ptr [eax + edx*4 + 0x89c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x89cu));
    /* 005e3755: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5e375au); f_005e4f18();
    /* 005e375a: jmp 0x5e378e */ goto L_005e378e;
L_005e375c:; BB(0x005e375c);
    /* 005e375c: mov ecx, dword ptr [0x6870a0] */ r_ecx = R32((u32)(0x6870a0u));
    /* 005e3762: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3763: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3766: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3769: mov ecx, dword ptr [eax + edx*4 + 0x89c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x89cu));
    /* 005e3770: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5e3775u); f_005e4eac();
    /* 005e3775: mov ecx, dword ptr [0x6870a0] */ r_ecx = R32((u32)(0x6870a0u));
    /* 005e377b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e377c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e377f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3782: mov ecx, dword ptr [eax + edx*4 + 0x89c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x89cu));
    /* 005e3789: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5e378eu); f_005e4f18();
L_005e378e:; BB(0x005e378e);
    /* 005e378e: jmp 0x5e35e3 */ goto L_005e35e3;
L_005e3793:; BB(0x005e3793);
    /* 005e3793: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e3794: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3796: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3797: ret  */ FN_RET(0x005e35d0); r_esp += 4; return;
}

void f_005e3798(void) /* FUN_005e3798 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3798);
    /* 005e3798: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3799: mov ebp, esp */ r_ebp = r_esp;
    /* 005e379b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e379e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e37a1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e37a4: mov ecx, dword ptr [eax + 0x85c] */ r_ecx = R32((u32)(r_eax+0x85cu));
    /* 005e37aa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e37ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e37b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e37b3: cmp eax, dword ptr [edx + 0x8a4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e37b9: jne 0x5e37c9 */ if (!fZ) goto L_005e37c9;
L_005e37bb:; BB(0x005e37bb);
    /* 005e37bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e37be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e37bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e37c2: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e37c7u); f_005e87aa();
    /* 005e37c7: jmp 0x5e3825 */ goto L_005e3825;
L_005e37c9:; BB(0x005e37c9);
    /* 005e37c9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e37cc: mov eax, dword ptr [edx + 0x85c] */ r_eax = R32((u32)(r_edx+0x85cu));
    /* 005e37d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e37d5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e37d8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e37db: cmp edx, dword ptr [ecx + 0x8a8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e37e1: jne 0x5e37f1 */ if (!fZ) goto L_005e37f1;
L_005e37e3:; BB(0x005e37e3);
    /* 005e37e3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e37e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e37e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e37ea: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e37efu); f_005e87aa();
    /* 005e37ef: jmp 0x5e3825 */ goto L_005e3825;
L_005e37f1:; BB(0x005e37f1);
    /* 005e37f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e37f4: mov edx, dword ptr [ecx + 0x85c] */ r_edx = R32((u32)(r_ecx+0x85cu));
    /* 005e37fa: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e37fd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3800: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3803: cmp ecx, dword ptr [eax + 0x8ac] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8acu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3809: jne 0x5e3819 */ if (!fZ) goto L_005e3819;
L_005e380b:; BB(0x005e380b);
    /* 005e380b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e380e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e380f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3812: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e3817u); f_005e87aa();
    /* 005e3817: jmp 0x5e3825 */ goto L_005e3825;
L_005e3819:; BB(0x005e3819);
    /* 005e3819: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e381c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e381d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3820: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e3825u); f_005e87aa();
L_005e3825:; BB(0x005e3825);
    /* 005e3825: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3828: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e382b: mov dword ptr [ecx + 0x8a4], edx */ W32((u32)(r_ecx+0x8a4u), r_edx);
    /* 005e3831: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3834: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e3837: mov dword ptr [eax + 0x8a8], ecx */ W32((u32)(r_eax+0x8a8u), r_ecx);
    /* 005e383d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3840: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e3843: mov dword ptr [edx + 0x8ac], eax */ W32((u32)(r_edx+0x8acu), r_eax);
    /* 005e3849: mov esp, ebp */ r_esp = r_ebp;
    /* 005e384b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e384c: ret 0xc */ FN_RET(0x005e3798); r_esp += 16; return;
}

void f_005e384f(void) /* FUN_005e384f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e384f);
    /* 005e384f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3850: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3852: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3855: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e3858: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e385b: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e3860u); f_005e345f();
    /* 005e3860: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3863: je 0x5e399c */ if (fZ) goto L_005e399c;
L_005e3869:; BB(0x005e3869);
    /* 005e3869: mov eax, dword ptr [0x699ba8] */ r_eax = R32((u32)(0x699ba8u));
    /* 005e386e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e386f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3872: call 0x5e8b9e */ r_esp -= 4; W32(r_esp, 0x5e3877u); f_005e8b9e();
    /* 005e3877: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e387a: call 0x5e3e7e */ r_esp -= 4; W32(r_esp, 0x5e387fu); f_005e3e7e();
    /* 005e387f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3881: je 0x5e38d0 */ if (fZ) goto L_005e38d0;
L_005e3883:; BB(0x005e3883);
    /* 005e3883: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3886: mov edx, dword ptr [ecx + 0x8ac] */ r_edx = R32((u32)(r_ecx+0x8acu));
    /* 005e388c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e388d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3890: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e3895u); f_005e87aa();
    /* 005e3895: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3898: cmp dword ptr [eax + 0x890], 0 */ {  u32 a = R32((u32)(r_eax+0x890u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e389f: je 0x5e38b4 */ if (fZ) goto L_005e38b4;
L_005e38a1:; BB(0x005e38a1);
    /* 005e38a1: push 0x43c */ { u32 v = 0x43cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e38a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e38a9: mov ecx, dword ptr [ecx + 0x890] */ r_ecx = R32((u32)(r_ecx+0x890u));
    /* 005e38af: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e38b4u); f_005ea0c3();
L_005e38b4:; BB(0x005e38b4);
    /* 005e38b4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e38b7: cmp dword ptr [edx + 0x894], 0 */ {  u32 a = R32((u32)(r_edx+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e38be: je 0x5e38d0 */ if (fZ) goto L_005e38d0;
L_005e38c0:; BB(0x005e38c0);
    /* 005e38c0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38c2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e38c5: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 005e38cb: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e38d0u); f_005ea1cf();
L_005e38d0:; BB(0x005e38d0);
    /* 005e38d0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e38d3: cmp dword ptr [ecx + 0x888], 0 */ {  u32 a = R32((u32)(r_ecx+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e38da: je 0x5e399c */ if (fZ) goto L_005e399c;
L_005e38e0:; BB(0x005e38e0);
    /* 005e38e0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e38e3: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 005e38e9: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e38f0: je 0x5e399c */ if (fZ) goto L_005e399c;
L_005e38f6:; BB(0x005e38f6);
    /* 005e38f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e38fd: jmp 0x5e3908 */ goto L_005e3908;
L_005e38ff:; BB(0x005e38ff);
    /* 005e38ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3902: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3905: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e3908:; BB(0x005e3908);
    /* 005e3908: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e390b: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 005e3911: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005e3917: mov ecx, dword ptr [ecx + 0x888] */ r_ecx = R32((u32)(r_ecx+0x888u));
    /* 005e391d: call 0x5e24af */ r_esp -= 4; W32(r_esp, 0x5e3922u); f_005e24af();
    /* 005e3922: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e3925: jge 0x5e3988 */ if ((fS==fO)) goto L_005e3988;
L_005e3927:; BB(0x005e3927);
    /* 005e3927: mov edx, dword ptr [0x699ba8] */ r_edx = R32((u32)(0x699ba8u));
    /* 005e392d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e392e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3931: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3932: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3935: mov edx, dword ptr [ecx + 0x888] */ r_edx = R32((u32)(r_ecx+0x888u));
    /* 005e393b: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005e3941: mov ecx, dword ptr [eax + 0x888] */ r_ecx = R32((u32)(r_eax+0x888u));
    /* 005e3947: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e394cu); f_005e246d();
    /* 005e394c: mov ecx, eax */ r_ecx = r_eax;
    /* 005e394e: call 0x5e3bb0 */ r_esp -= 4; W32(r_esp, 0x5e3953u); f_005e3bb0();
    /* 005e3953: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3955: je 0x5e3983 */ if (fZ) goto L_005e3983;
L_005e3957:; BB(0x005e3957);
    /* 005e3957: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e395a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e395b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e395e: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 005e3964: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005e396a: mov ecx, dword ptr [ecx + 0x888] */ r_ecx = R32((u32)(r_ecx+0x888u));
    /* 005e3970: call 0x5e246d */ r_esp -= 4; W32(r_esp, 0x5e3975u); f_005e246d();
    /* 005e3975: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e3978: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e397b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e397d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3980: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5e3983u); call_ind(t); }
L_005e3983:; BB(0x005e3983);
    /* 005e3983: jmp 0x5e38ff */ goto L_005e38ff;
L_005e3988:; BB(0x005e3988);
    /* 005e3988: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e398b: mov edx, dword ptr [ecx + 0x888] */ r_edx = R32((u32)(r_ecx+0x888u));
    /* 005e3991: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005e3997: call 0x5e384f */ r_esp -= 4; W32(r_esp, 0x5e399cu); f_005e384f();
L_005e399c:; BB(0x005e399c);
    /* 005e399c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e399e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e399f: ret  */ FN_RET(0x005e384f); r_esp += 4; return;
}

void f_005e39a0(void) /* FUN_005e39a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e39a0);
    /* 005e39a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e39a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e39a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e39a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e39a7: mov eax, dword ptr [0x687098] */ r_eax = R32((u32)(0x687098u));
    /* 005e39ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e39ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e39b0: call 0x5e8b9e */ r_esp -= 4; W32(r_esp, 0x5e39b5u); f_005e8b9e();
    /* 005e39b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e39b8: call 0x5e3e7e */ r_esp -= 4; W32(r_esp, 0x5e39bdu); f_005e3e7e();
    /* 005e39bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e39bf: je 0x5e3a0e */ if (fZ) goto L_005e3a0e;
L_005e39c1:; BB(0x005e39c1);
    /* 005e39c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e39c4: mov edx, dword ptr [ecx + 0x8a4] */ r_edx = R32((u32)(r_ecx+0x8a4u));
    /* 005e39ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e39cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e39ce: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e39d3u); f_005e87aa();
    /* 005e39d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e39d6: cmp dword ptr [eax + 0x890], 0 */ {  u32 a = R32((u32)(r_eax+0x890u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e39dd: je 0x5e39f2 */ if (fZ) goto L_005e39f2;
L_005e39df:; BB(0x005e39df);
    /* 005e39df: push 0x41f */ { u32 v = 0x41fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e39e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e39e7: mov ecx, dword ptr [ecx + 0x890] */ r_ecx = R32((u32)(r_ecx+0x890u));
    /* 005e39ed: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e39f2u); f_005ea0c3();
L_005e39f2:; BB(0x005e39f2);
    /* 005e39f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e39f5: cmp dword ptr [edx + 0x894], 0 */ {  u32 a = R32((u32)(r_edx+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e39fc: je 0x5e3a0e */ if (fZ) goto L_005e3a0e;
L_005e39fe:; BB(0x005e39fe);
    /* 005e39fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3a00: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3a03: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 005e3a09: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e3a0eu); f_005ea1cf();
L_005e3a0e:; BB(0x005e3a0e);
    /* 005e3a0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3a11: cmp dword ptr [ecx + 0x898], 0 */ {  u32 a = R32((u32)(r_ecx+0x898u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3a18: je 0x5e3a2a */ if (fZ) goto L_005e3a2a;
L_005e3a1a:; BB(0x005e3a1a);
    /* 005e3a1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3a1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3a1f: mov ecx, dword ptr [edx + 0x898] */ r_ecx = R32((u32)(r_edx+0x898u));
    /* 005e3a25: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5e3a2au); f_005e40dc();
L_005e3a2a:; BB(0x005e3a2a);
    /* 005e3a2a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3a2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3a2d: ret  */ FN_RET(0x005e39a0); r_esp += 4; return;
}

void f_005e3a2e(void) /* FUN_005e3a2e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3a2e);
    /* 005e3a2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3a2f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3a31: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3a34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e3a35: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e3a38: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e3a3f: jmp 0x5e3a4a */ goto L_005e3a4a;
L_005e3a41:; BB(0x005e3a41);
    /* 005e3a41: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3a44: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e3a47: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e3a4a:; BB(0x005e3a4a);
    /* 005e3a4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3a4d: mov edx, dword ptr [ecx + 0x888] */ r_edx = R32((u32)(r_ecx+0x888u));
    /* 005e3a53: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 005e3a59: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e3a5eu); f_005dd4d2();
    /* 005e3a5e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e3a61: jge 0x5e3ad0 */ if ((fS==fO)) goto L_005e3ad0;
L_005e3a63:; BB(0x005e3a63);
    /* 005e3a63: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3a66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3a67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3a6a: mov edx, dword ptr [ecx + 0x888] */ r_edx = R32((u32)(r_ecx+0x888u));
    /* 005e3a70: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 005e3a76: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e3a7bu); f_005dd560();
    /* 005e3a7b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e3a7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3a81: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e3a86u); f_005e345f();
    /* 005e3a86: mov esi, eax */ r_esi = r_eax;
    /* 005e3a88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3a8b: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e3a90u); f_005e345f();
    /* 005e3a90: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3a92: jne 0x5e3a96 */ if (!fZ) goto L_005e3a96;
L_005e3a94:; BB(0x005e3a94);
    /* 005e3a94: jmp 0x5e3a41 */ goto L_005e3a41;
L_005e3a96:; BB(0x005e3a96);
    /* 005e3a96: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3a99: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3aa0: je 0x5e3acb */ if (fZ) goto L_005e3acb;
L_005e3aa2:; BB(0x005e3aa2);
    /* 005e3aa2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3aa5: mov ecx, dword ptr [ecx + 0x88c] */ r_ecx = R32((u32)(r_ecx+0x88cu));
    /* 005e3aab: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x5e3ab0u); f_005e07a3();
    /* 005e3ab0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3ab2: je 0x5e3acb */ if (fZ) goto L_005e3acb;
L_005e3ab4:; BB(0x005e3ab4);
    /* 005e3ab4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3ab7: mov ecx, dword ptr [edx + 0x88c] */ r_ecx = R32((u32)(r_edx+0x88cu));
    /* 005e3abd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3ac0: mov edx, dword ptr [eax + 0x88c] */ r_edx = R32((u32)(r_eax+0x88cu));
    /* 005e3ac6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e3ac8: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5e3acbu); call_ind(t); }
L_005e3acb:; BB(0x005e3acb);
    /* 005e3acb: jmp 0x5e3a41 */ goto L_005e3a41;
L_005e3ad0:; BB(0x005e3ad0);
    /* 005e3ad0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3ad3: cmp dword ptr [ecx + 0x88c], 0 */ {  u32 a = R32((u32)(r_ecx+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3ada: je 0x5e3b06 */ if (fZ) goto L_005e3b06;
L_005e3adc:; BB(0x005e3adc);
    /* 005e3adc: mov edx, dword ptr [0x699ba8] */ r_edx = R32((u32)(0x699ba8u));
    /* 005e3ae2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ae3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3ae6: call 0x5e3bb0 */ r_esp -= 4; W32(r_esp, 0x5e3aebu); f_005e3bb0();
    /* 005e3aeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3aed: je 0x5e3b06 */ if (fZ) goto L_005e3b06;
L_005e3aef:; BB(0x005e3aef);
    /* 005e3aef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3af2: mov ecx, dword ptr [eax + 0x88c] */ r_ecx = R32((u32)(r_eax+0x88cu));
    /* 005e3af8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3afb: mov eax, dword ptr [edx + 0x88c] */ r_eax = R32((u32)(r_edx+0x88cu));
    /* 005e3b01: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3b03: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x5e3b06u); call_ind(t); }
L_005e3b06:; BB(0x005e3b06);
    /* 005e3b06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b08: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3b0b: mov ecx, dword ptr [eax + 0x898] */ r_ecx = R32((u32)(r_eax+0x898u));
    /* 005e3b11: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5e3b16u); f_005e40dc();
    /* 005e3b16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e3b17: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3b19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3b1a: ret  */ FN_RET(0x005e3a2e); r_esp += 4; return;
}

void f_005e3b1b(void) /* FUN_005e3b1b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3b1b);
    /* 005e3b1b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b1c: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3b1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b1f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3b22: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3b25: cmp dword ptr [eax + 0x88c], 0 */ {  u32 a = R32((u32)(r_eax+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3b2c: je 0x5e3b45 */ if (fZ) goto L_005e3b45;
L_005e3b2e:; BB(0x005e3b2e);
    /* 005e3b2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3b31: mov ecx, dword ptr [ecx + 0x88c] */ r_ecx = R32((u32)(r_ecx+0x88cu));
    /* 005e3b37: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3b3a: mov eax, dword ptr [edx + 0x88c] */ r_eax = R32((u32)(r_edx+0x88cu));
    /* 005e3b40: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3b42: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x5e3b45u); call_ind(t); }
L_005e3b45:; BB(0x005e3b45);
    /* 005e3b45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3b4a: mov ecx, dword ptr [eax + 0x898] */ r_ecx = R32((u32)(r_eax+0x898u));
    /* 005e3b50: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5e3b55u); f_005e40dc();
    /* 005e3b55: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3b57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3b58: ret  */ FN_RET(0x005e3b1b); r_esp += 4; return;
}

void f_005e3b59(void) /* FUN_005e3b59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3b59);
    /* 005e3b59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b5a: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3b5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b5d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3b60: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3b63: cmp dword ptr [eax + 0x888], 0 */ {  u32 a = R32((u32)(r_eax+0x888u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3b6a: je 0x5e3bac */ if (fZ) goto L_005e3bac;
L_005e3b6c:; BB(0x005e3b6c);
    /* 005e3b6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3b6f: cmp dword ptr [ecx + 0x88c], 0 */ {  u32 a = R32((u32)(r_ecx+0x88cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3b76: jne 0x5e3bac */ if (!fZ) goto L_005e3bac;
L_005e3b78:; BB(0x005e3b78);
    /* 005e3b78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3b7b: call 0x5e345f */ r_esp -= 4; W32(r_esp, 0x5e3b80u); f_005e345f();
    /* 005e3b80: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3b83: je 0x5e3bac */ if (fZ) goto L_005e3bac;
L_005e3b85:; BB(0x005e3b85);
    /* 005e3b85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3b88: call 0x5e3e7e */ r_esp -= 4; W32(r_esp, 0x5e3b8du); f_005e3e7e();
    /* 005e3b8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3b8f: je 0x5e3bac */ if (fZ) goto L_005e3bac;
L_005e3b91:; BB(0x005e3b91);
    /* 005e3b91: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3b94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3b98: mov ecx, dword ptr [eax + 0x888] */ r_ecx = R32((u32)(r_eax+0x888u));
    /* 005e3b9e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3ba1: mov eax, dword ptr [edx + 0x888] */ r_eax = R32((u32)(r_edx+0x888u));
    /* 005e3ba7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3ba9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e3bacu); call_ind(t); }
L_005e3bac:; BB(0x005e3bac);
    /* 005e3bac: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3bae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3baf: ret  */ FN_RET(0x005e3b59); r_esp += 4; return;
}

void f_005e3bb0(void) /* FUN_005e3bb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3bb0);
    /* 005e3bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3bb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3bba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3bbc: mov cl, byte ptr [eax + 0x3e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x3eu))) & 0xffu);
    /* 005e3bbf: mov edx, dword ptr [ebp + 0xa] */ r_edx = R32((u32)(r_ebp+0xau));
    /* 005e3bc2: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e3bc8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3bca: jne 0x5e3bfd */ if (!fZ) goto L_005e3bfd;
L_005e3bcc:; BB(0x005e3bcc);
    /* 005e3bcc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3bcf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3bd1: mov cl, byte ptr [eax + 0x3d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x3du))) & 0xffu);
    /* 005e3bd4: mov edx, dword ptr [ebp + 9] */ r_edx = R32((u32)(r_ebp+0x9u));
    /* 005e3bd7: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e3bdd: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3bdf: jne 0x5e3bfd */ if (!fZ) goto L_005e3bfd;
L_005e3be1:; BB(0x005e3be1);
    /* 005e3be1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3be4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3be6: mov cl, byte ptr [eax + 0x3c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x3cu))) & 0xffu);
    /* 005e3be9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e3bec: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e3bf2: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3bf4: jne 0x5e3bfd */ if (!fZ) goto L_005e3bfd;
L_005e3bf6:; BB(0x005e3bf6);
    /* 005e3bf6: mov eax, 1 */ r_eax = 0x1u;
    /* 005e3bfb: jmp 0x5e3bff */ goto L_005e3bff;
L_005e3bfd:; BB(0x005e3bfd);
    /* 005e3bfd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e3bff:; BB(0x005e3bff);
    /* 005e3bff: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3c01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3c02: ret 4 */ FN_RET(0x005e3bb0); r_esp += 8; return;
}

void f_005e3c05(void) /* FUN_005e3c05 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3c05);
    /* 005e3c05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c06: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3c08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c09: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3c0c: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005e3c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c11: call 0x624600 */ r_esp -= 4; W32(r_esp, 0x5e3c16u); f_00624600();
    /* 005e3c16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3c19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3c1c: mov byte ptr [ecx + 0x8c0], al */ W8((u32)(r_ecx+0x8c0u), (u8)r_eax);
    /* 005e3c22: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3c24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3c25: ret 4 */ FN_RET(0x005e3c05); r_esp += 8; return;
}

void f_005e3c28(void) /* FUN_005e3c28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3c28);
    /* 005e3c28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c29: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3c2b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3c2e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e3c31: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3c34: cmp dword ptr [eax + 0x894], 0 */ {  u32 a = R32((u32)(r_eax+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3c3b: jne 0x5e3d08 */ if (!fZ) goto L_005e3d08;
L_005e3c41:; BB(0x005e3c41);
    /* 005e3c41: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c43: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e3c48u); f_0048ab58();
    /* 005e3c48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3c4b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e3c4e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3c52: je 0x5e3c61 */ if (fZ) goto L_005e3c61;
L_005e3c54:; BB(0x005e3c54);
    /* 005e3c54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3c57: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5e3c5cu); f_005e9d30();
    /* 005e3c5c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e3c5f: jmp 0x5e3c68 */ goto L_005e3c68;
L_005e3c61:; BB(0x005e3c61);
    /* 005e3c61: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005e3c68:; BB(0x005e3c68);
    /* 005e3c68: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3c6b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3c6e: mov dword ptr [ecx + 0x894], edx */ W32((u32)(r_ecx+0x894u), r_edx);
    /* 005e3c74: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3c77: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 005e3c7d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3c80: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e3c83: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005e3c86: push 0x4e0 */ { u32 v = 0x4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c8b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3c8e: mov ecx, dword ptr [ecx + 0x894] */ r_ecx = R32((u32)(r_ecx+0x894u));
    /* 005e3c94: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e3c99u); f_005ea0c3();
    /* 005e3c99: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3c9c: mov ecx, dword ptr [edx + 0x894] */ r_ecx = R32((u32)(r_edx+0x894u));
    /* 005e3ca2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3ca5: mov edx, dword ptr [eax + 0x894] */ r_edx = R32((u32)(r_eax+0x894u));
    /* 005e3cab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e3cad: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5e3cb0u); call_ind(t); }
    /* 005e3cb0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3cb3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e3cb5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3cb8: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e3cbbu); call_ind(t); }
    /* 005e3cbb: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e3cbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3cbf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3cc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3cc4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3cc7: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e3ccau); call_ind(t); }
    /* 005e3cca: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e3ccd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3cce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3cd1: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 005e3cd7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3cda: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 005e3ce0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3ce2: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e3ce5u); call_ind(t); }
    /* 005e3ce5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3ce8: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e3cedu); f_005d9883();
    /* 005e3ced: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e3cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3cf1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3cf4: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 005e3cfa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3cfd: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 005e3d03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3d05: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e3d08u); call_ind(t); }
L_005e3d08:; BB(0x005e3d08);
    /* 005e3d08: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3d0b: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5e3d10u); f_005d9690();
    /* 005e3d10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3d12: je 0x5e3d2b */ if (fZ) goto L_005e3d2b;
L_005e3d14:; BB(0x005e3d14);
    /* 005e3d14: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3d17: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 005e3d1d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3d20: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 005e3d26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3d28: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e3d2bu); call_ind(t); }
L_005e3d2b:; BB(0x005e3d2b);
    /* 005e3d2b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3d2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3d2e: ret  */ FN_RET(0x005e3c28); r_esp += 4; return;
}

void f_005e3d2f(void) /* FUN_005e3d2f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3d2f);
    /* 005e3d2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d30: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3d32: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3d35: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e3d38: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3d3b: cmp dword ptr [eax + 0x894], 0 */ {  u32 a = R32((u32)(r_eax+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3d42: je 0x5e3d98 */ if (fZ) goto L_005e3d98;
L_005e3d44:; BB(0x005e3d44);
    /* 005e3d44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3d47: mov ecx, dword ptr [ecx + 0x894] */ r_ecx = R32((u32)(r_ecx+0x894u));
    /* 005e3d4d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3d50: mov eax, dword ptr [edx + 0x894] */ r_eax = R32((u32)(r_edx+0x894u));
    /* 005e3d56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3d58: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e3d5bu); call_ind(t); }
    /* 005e3d5b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3d5e: mov ecx, dword ptr [eax + 0x894] */ r_ecx = R32((u32)(r_eax+0x894u));
    /* 005e3d64: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e3d67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3d6a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e3d6d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3d71: je 0x5e3d84 */ if (fZ) goto L_005e3d84;
L_005e3d73:; BB(0x005e3d73);
    /* 005e3d73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3d78: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3d7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3d7d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e3d7fu); call_ind(t); }
    /* 005e3d7f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e3d82: jmp 0x5e3d8b */ goto L_005e3d8b;
L_005e3d84:; BB(0x005e3d84);
    /* 005e3d84: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005e3d8b:; BB(0x005e3d8b);
    /* 005e3d8b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3d8e: mov dword ptr [eax + 0x894], 0 */ W32((u32)(r_eax+0x894u), 0x0u);
L_005e3d98:; BB(0x005e3d98);
    /* 005e3d98: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3d9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3d9b: ret  */ FN_RET(0x005e3d2f); r_esp += 4; return;
}

void f_005e3d9c(void) /* FUN_005e3d9c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3d9c);
    /* 005e3d9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d9d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3d9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3da0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3da3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3da6: cmp dword ptr [eax + 0x8bc], 0 */ {  u32 a = R32((u32)(r_eax+0x8bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3dad: jne 0x5e3e09 */ if (!fZ) goto L_005e3e09;
L_005e3daf:; BB(0x005e3daf);
    /* 005e3daf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3db2: mov dword ptr [ecx + 0x8bc], 1 */ W32((u32)(r_ecx+0x8bcu), 0x1u);
    /* 005e3dbc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3dbf: mov eax, dword ptr [edx + 0x8a4] */ r_eax = R32((u32)(r_edx+0x8a4u));
    /* 005e3dc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3dc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3dc9: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e3dceu); f_005e87aa();
    /* 005e3dce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3dd1: cmp dword ptr [ecx + 0x890], 0 */ {  u32 a = R32((u32)(r_ecx+0x890u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3dd8: je 0x5e3ded */ if (fZ) goto L_005e3ded;
L_005e3dda:; BB(0x005e3dda);
    /* 005e3dda: push 0x41f */ { u32 v = 0x41fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ddf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3de2: mov ecx, dword ptr [edx + 0x890] */ r_ecx = R32((u32)(r_edx+0x890u));
    /* 005e3de8: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e3dedu); f_005ea0c3();
L_005e3ded:; BB(0x005e3ded);
    /* 005e3ded: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3df0: cmp dword ptr [eax + 0x894], 0 */ {  u32 a = R32((u32)(r_eax+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3df7: je 0x5e3e09 */ if (fZ) goto L_005e3e09;
L_005e3df9:; BB(0x005e3df9);
    /* 005e3df9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3dfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3dfe: mov ecx, dword ptr [ecx + 0x894] */ r_ecx = R32((u32)(r_ecx+0x894u));
    /* 005e3e04: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e3e09u); f_005ea1cf();
L_005e3e09:; BB(0x005e3e09);
    /* 005e3e09: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3e0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3e0c: ret  */ FN_RET(0x005e3d9c); r_esp += 4; return;
}

void f_005e3e0d(void) /* FUN_005e3e0d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3e0d);
    /* 005e3e0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e0e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3e10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e11: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3e14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3e17: cmp dword ptr [eax + 0x8bc], 0 */ {  u32 a = R32((u32)(r_eax+0x8bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3e1e: je 0x5e3e7a */ if (fZ) goto L_005e3e7a;
L_005e3e20:; BB(0x005e3e20);
    /* 005e3e20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3e23: mov dword ptr [ecx + 0x8bc], 0 */ W32((u32)(r_ecx+0x8bcu), 0x0u);
    /* 005e3e2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3e30: mov eax, dword ptr [edx + 0x8a8] */ r_eax = R32((u32)(r_edx+0x8a8u));
    /* 005e3e36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3e3a: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5e3e3fu); f_005e87aa();
    /* 005e3e3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3e42: cmp dword ptr [ecx + 0x890], 0 */ {  u32 a = R32((u32)(r_ecx+0x890u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3e49: je 0x5e3e5e */ if (fZ) goto L_005e3e5e;
L_005e3e4b:; BB(0x005e3e4b);
    /* 005e3e4b: push 0x43a */ { u32 v = 0x43au; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e50: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3e53: mov ecx, dword ptr [edx + 0x890] */ r_ecx = R32((u32)(r_edx+0x890u));
    /* 005e3e59: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5e3e5eu); f_005ea0c3();
L_005e3e5e:; BB(0x005e3e5e);
    /* 005e3e5e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3e61: cmp dword ptr [eax + 0x894], 0 */ {  u32 a = R32((u32)(r_eax+0x894u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3e68: je 0x5e3e7a */ if (fZ) goto L_005e3e7a;
L_005e3e6a:; BB(0x005e3e6a);
    /* 005e3e6a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3e6f: mov ecx, dword ptr [ecx + 0x894] */ r_ecx = R32((u32)(r_ecx+0x894u));
    /* 005e3e75: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e3e7au); f_005ea1cf();
L_005e3e7a:; BB(0x005e3e7a);
    /* 005e3e7a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3e7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3e7d: ret  */ FN_RET(0x005e3e0d); r_esp += 4; return;
}

void f_005e3e7e(void) /* FUN_005e3e7e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3e7e);
    /* 005e3e7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e7f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3e81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e82: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3e85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3e88: mov eax, dword ptr [eax + 0x8bc] */ r_eax = R32((u32)(r_eax+0x8bcu));
    /* 005e3e8e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3e90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3e91: ret  */ FN_RET(0x005e3e7e); r_esp += 4; return;
}

void f_005e3ec0(void) /* FUN_005e3ec0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3ec0);
    /* 005e3ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3ec3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3ec6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3ec9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e3ecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ecd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3ed0: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5e3ed5u); f_005e626d();
    /* 005e3ed5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3ed8: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005e3edb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e3ede: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3ee2: je 0x5e3eec */ if (fZ) goto L_005e3eec;
L_005e3ee4:; BB(0x005e3ee4);
    /* 005e3ee4: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3ee8: je 0x5e3f08 */ if (fZ) goto L_005e3f08;
L_005e3eea:; BB(0x005e3eea);
    /* 005e3eea: jmp 0x5e3f13 */ goto L_005e3f13;
L_005e3eec:; BB(0x005e3eec);
    /* 005e3eec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3eee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3ef1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3ef3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3ef6: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e3ef9u); call_ind(t); }
    /* 005e3ef9: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3efb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3efe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3f00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3f03: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5e3f06u); call_ind(t); }
    /* 005e3f06: jmp 0x5e3f13 */ goto L_005e3f13;
L_005e3f08:; BB(0x005e3f08);
    /* 005e3f08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3f0b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e3f0e: call 0x5e3a2e */ r_esp -= 4; W32(r_esp, 0x5e3f13u); f_005e3a2e();
L_005e3f13:; BB(0x005e3f13);
    /* 005e3f13: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3f15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3f16: ret 4 */ FN_RET(0x005e3ec0); r_esp += 8; return;
}

void f_005e3f20(void) /* FUN_005e3f20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3f20);
    /* 005e3f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f21: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3f27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3f2a: call 0x5e0cd4 */ r_esp -= 4; W32(r_esp, 0x5e3f2fu); f_005e0cd4();
    /* 005e3f2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e3f32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e3f35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3f37: je 0x5e3f45 */ if (fZ) goto L_005e3f45;
L_005e3f39:; BB(0x005e3f39);
    /* 005e3f39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3f3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f3d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e3f42u); f_0048ac1b();
    /* 005e3f42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e3f45:; BB(0x005e3f45);
    /* 005e3f45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3f48: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3f4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3f4b: ret 4 */ FN_RET(0x005e3f20); r_esp += 8; return;
}

void f_005e3f50(void) /* FUN_005e3f50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3f50);
    /* 005e3f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f51: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3f57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3f5a: call 0x5e2ae1 */ r_esp -= 4; W32(r_esp, 0x5e3f5fu); f_005e2ae1();
    /* 005e3f5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e3f62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e3f65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3f67: je 0x5e3f75 */ if (fZ) goto L_005e3f75;
L_005e3f69:; BB(0x005e3f69);
    /* 005e3f69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3f6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f6d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e3f72u); f_0048ac1b();
    /* 005e3f72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e3f75:; BB(0x005e3f75);
    /* 005e3f75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3f78: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3f7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3f7b: ret 4 */ FN_RET(0x005e3f50); r_esp += 8; return;
}

void f_005e3f80(void) /* FUN_005e3f80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3f80);
    /* 005e3f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f81: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3f87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3f8a: call 0x5e2eea */ r_esp -= 4; W32(r_esp, 0x5e3f8fu); f_005e2eea();
    /* 005e3f8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e3f92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e3f95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3f97: je 0x5e3fa5 */ if (fZ) goto L_005e3fa5;
L_005e3f99:; BB(0x005e3f99);
    /* 005e3f99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3f9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f9d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e3fa2u); f_0048ac1b();
    /* 005e3fa2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e3fa5:; BB(0x005e3fa5);
    /* 005e3fa5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3fa8: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3faa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3fab: ret 4 */ FN_RET(0x005e3f80); r_esp += 8; return;
}

void f_005e3fed(void) /* FUN_005e3fed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3fed);
    /* 005e3fed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3fee: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3ff0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ff1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3ff4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3ff7: mov dword ptr [eax], 0x63bcec */ W32((u32)(r_eax), 0x63bcecu);
    /* 005e3ffd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4000: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4004: je 0x5e4015 */ if (fZ) goto L_005e4015;
L_005e4006:; BB(0x005e4006);
    /* 005e4006: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4009: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e400a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e400d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e4010: call 0x5dff2f */ r_esp -= 4; W32(r_esp, 0x5e4015u); f_005dff2f();
L_005e4015:; BB(0x005e4015);
    /* 005e4015: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e401a: call 0x5e40dc */ r_esp -= 4; W32(r_esp, 0x5e401fu); f_005e40dc();
    /* 005e401f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4021: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4024: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5e4029u); f_005e4060();
    /* 005e4029: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e402c: call 0x5e9dde */ r_esp -= 4; W32(r_esp, 0x5e4031u); f_005e9dde();
    /* 005e4031: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4034: ret  */ FN_RET(0x005e3fed); r_esp += 4; return;
}

void f_005e4035(void) /* FUN_005e4035 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4035);
    /* 005e4035: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4036: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4038: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4039: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e403c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e403f: call 0x5e9e15 */ r_esp -= 4; W32(r_esp, 0x5e4044u); f_005e9e15();
    /* 005e4044: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4047: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e404b: je 0x5e405c */ if (fZ) goto L_005e405c;
L_005e404d:; BB(0x005e404d);
    /* 005e404d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4050: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4051: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4054: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e4057: call 0x5dff00 */ r_esp -= 4; W32(r_esp, 0x5e405cu); f_005dff00();
L_005e405c:; BB(0x005e405c);
    /* 005e405c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e405e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e405f: ret  */ FN_RET(0x005e4035); r_esp += 4; return;
}

void f_005e4060(void) /* FUN_005e4060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4060);
    /* 005e4060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4061: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4063: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4066: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e4069: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e406c: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4070: je 0x5e40af */ if (fZ) goto L_005e40af;
L_005e4072:; BB(0x005e4072);
    /* 005e4072: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4075: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 005e4078: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e407b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e407e: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 005e4085: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4088: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e408b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e408e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e4091: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4095: je 0x5e40a8 */ if (fZ) goto L_005e40a8;
L_005e4097:; BB(0x005e4097);
    /* 005e4097: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4099: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e409c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e409e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e40a1: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e40a3u); call_ind(t); }
    /* 005e40a3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e40a6: jmp 0x5e40af */ goto L_005e40af;
L_005e40a8:; BB(0x005e40a8);
    /* 005e40a8: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005e40af:; BB(0x005e40af);
    /* 005e40af: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e40b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e40b5: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
    /* 005e40b8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e40bb: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e40bf: je 0x5e40d6 */ if (fZ) goto L_005e40d6;
L_005e40c1:; BB(0x005e40c1);
    /* 005e40c1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e40c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e40c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e40c8: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005e40cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e40ce: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e40d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e40d3: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e40d6u); call_ind(t); }
L_005e40d6:; BB(0x005e40d6);
    /* 005e40d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e40d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e40d9: ret 4 */ FN_RET(0x005e4060); r_esp += 8; return;
}

void f_005e40dc(void) /* FUN_005e40dc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e40dc);
    /* 005e40dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e40dd: mov ebp, esp */ r_ebp = r_esp;
    /* 005e40df: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e40e2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e40e5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e40e8: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e40ec: je 0x5e411b */ if (fZ) goto L_005e411b;
L_005e40ee:; BB(0x005e40ee);
    /* 005e40ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e40f1: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005e40f4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e40f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e40fa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e40fd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4101: je 0x5e4114 */ if (fZ) goto L_005e4114;
L_005e4103:; BB(0x005e4103);
    /* 005e4103: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4105: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4108: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e410a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e410d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e410fu); call_ind(t); }
    /* 005e410f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e4112: jmp 0x5e411b */ goto L_005e411b;
L_005e4114:; BB(0x005e4114);
    /* 005e4114: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005e411b:; BB(0x005e411b);
    /* 005e411b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e411e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e4121: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
    /* 005e4124: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4127: cmp dword ptr [edx + 0x70], 0 */ {  u32 a = R32((u32)(r_edx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e412b: je 0x5e413c */ if (fZ) goto L_005e413c;
L_005e412d:; BB(0x005e412d);
    /* 005e412d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4131: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4134: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005e4137: call 0x5e624a */ r_esp -= 4; W32(r_esp, 0x5e413cu); f_005e624a();
L_005e413c:; BB(0x005e413c);
    /* 005e413c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e413e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e413f: ret 4 */ FN_RET(0x005e40dc); r_esp += 8; return;
}

void f_005e4142(void) /* FUN_005e4142 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4142);
    /* 005e4142: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4143: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4145: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4146: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4149: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e414b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e414d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e414e: ret 4 */ FN_RET(0x005e4142); r_esp += 8; return;
}

void f_005e4151(void) /* FUN_005e4151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4151);
    /* 005e4151: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4152: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4154: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4155: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4158: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e415b: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e415f: je 0x5e416c */ if (fZ) goto L_005e416c;
L_005e4161:; BB(0x005e4161);
    /* 005e4161: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4164: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005e4167: call 0x5e63c5 */ r_esp -= 4; W32(r_esp, 0x5e416cu); f_005e63c5();
L_005e416c:; BB(0x005e416c);
    /* 005e416c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e416f: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4173: je 0x5e4186 */ if (fZ) goto L_005e4186;
L_005e4175:; BB(0x005e4175);
    /* 005e4175: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4178: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005e417b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e417e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e4181: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e4183: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e4186u); call_ind(t); }
L_005e4186:; BB(0x005e4186);
    /* 005e4186: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4188: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4189: ret  */ FN_RET(0x005e4151); r_esp += 4; return;
}

void f_005e4190(void) /* FUN_005e4190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4190);
    /* 005e4190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4191: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4197: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e419a: call 0x5e3fed */ r_esp -= 4; W32(r_esp, 0x5e419fu); f_005e3fed();
    /* 005e419f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e41a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e41a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e41a7: je 0x5e41b5 */ if (fZ) goto L_005e41b5;
L_005e41a9:; BB(0x005e41a9);
    /* 005e41a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e41ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e41ad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e41b2u); f_0048ac1b();
    /* 005e41b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e41b5:; BB(0x005e41b5);
    /* 005e41b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e41b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005e41ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e41bb: ret 4 */ FN_RET(0x005e4190); r_esp += 8; return;
}

void f_005e41c0(void) /* FUN_005e41c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e41c0);
    /* 005e41c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e41c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e41c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e41c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e41c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e41ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e41cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e41ce: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x5e41d3u); f_005d7540();
    /* 005e41d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e41d6: mov dword ptr [ecx], 0x63bd3c */ W32((u32)(r_ecx), 0x63bd3cu);
    /* 005e41dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e41df: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 005e41e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e41e9: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
    /* 005e41f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e41f3: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 005e41fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e41fd: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 005e4204: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4207: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 005e420e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4211: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 005e4218: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e421b: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 005e4222: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4225: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 005e422c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e422f: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 005e4236: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4239: mov dword ptr [edx + 0x70], 1 */ W32((u32)(r_edx+0x70u), 0x1u);
    /* 005e4240: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4243: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 005e424a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e424d: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
    /* 005e4254: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4257: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4259: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e425a: ret 4 */ FN_RET(0x005e41c0); r_esp += 8; return;
}

void f_005e425d(void) /* FUN_005e425d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e425d);
    /* 005e425d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e425e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4260: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4263: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e4266: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4269: mov dword ptr [eax], 0x63bd3c */ W32((u32)(r_eax), 0x63bd3cu);
L_005e426f:; BB(0x005e426f);
    /* 005e426f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4272: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4276: je 0x5e42cd */ if (fZ) goto L_005e42cd;
L_005e4278:; BB(0x005e4278);
    /* 005e4278: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e427b: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005e427e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4281: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4284: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 005e4287: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e428a: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005e428d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4290: mov edx, dword ptr [ecx + eax*4 + 0x2c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x2cu));
    /* 005e4294: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e4297: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e429a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e429b: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e42a0u); f_0048ac1b();
    /* 005e42a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e42a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e42a6: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005e42a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e42ac: mov dword ptr [eax + edx*4 + 0x2c], 0 */ W32((u32)(r_eax+r_edx*4+0x2cu), 0x0u);
    /* 005e42b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e42b7: mov eax, dword ptr [ecx + 0x58] */ r_eax = R32((u32)(r_ecx+0x58u));
    /* 005e42ba: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e42bd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e42be: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005e42c3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e42c3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e42c3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e42c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e42c8: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 005e42cb: jmp 0x5e426f */ goto L_005e426f;
L_005e42cd:; BB(0x005e42cd);
    /* 005e42cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e42d0: call 0x5d75a3 */ r_esp -= 4; W32(r_esp, 0x5e42d5u); f_005d75a3();
    /* 005e42d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e42d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e42d8: ret  */ FN_RET(0x005e425d); r_esp += 4; return;
}

void f_005e42d9(void) /* FUN_005e42d9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e42d9);
    /* 005e42d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e42da: mov ebp, esp */ r_ebp = r_esp;
    /* 005e42dc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e42df: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e42e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e42e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e42e6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e42e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e42eb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e42ee: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e42f1: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x5e42f6u); f_005ba399();
    /* 005e42f6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e42f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e42fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e42fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4301: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e4304u); call_ind(t); }
    /* 005e4304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4305: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4308: call 0x5e449a */ r_esp -= 4; W32(r_esp, 0x5e430du); f_005e449a();
    /* 005e430d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4311: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4314: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e4317: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e431a: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x5e431fu); f_005ba79b();
    /* 005e431f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4321: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4322: ret 4 */ FN_RET(0x005e42d9); r_esp += 8; return;
}

void f_005e4325(void) /* FUN_005e4325 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4325);
    /* 005e4325: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4326: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4328: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e432b: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005e432e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e4331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4332: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4334: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005e4337: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e433a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e433d: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x5e4342u); f_005ba399();
    /* 005e4342: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e4345: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e4348: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e434b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e434c: push 0x699bec */ { u32 v = 0x699becu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4351: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005e4354: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4355: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5e435au); f_00624050();
    /* 005e435a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e435d: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005e4360: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4361: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5e4366u); f_0060fc40();
    /* 005e4366: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4369: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e436c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e436d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e4370: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e4372: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e4375: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e4378u); call_ind(t); }
    /* 005e4378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4379: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005e437c: call 0x5e4421 */ r_esp -= 4; W32(r_esp, 0x5e4381u); f_005e4421();
    /* 005e4381: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4382: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005e4385: call 0x5e449a */ r_esp -= 4; W32(r_esp, 0x5e438au); f_005e449a();
    /* 005e438a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e438d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e438e: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005e4391: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e4394: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e4397: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x5e439cu); f_005ba79b();
    /* 005e439c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e439e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e439f: ret 8 */ FN_RET(0x005e4325); r_esp += 12; return;
}

void f_005e43a2(void) /* FUN_005e43a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e43a2);
    /* 005e43a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e43a3: mov ebp, esp */ r_ebp = r_esp;
    /* 005e43a5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e43a8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e43ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e43ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e43af: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e43b1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e43b4: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e43b7: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e43ba: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x5e43bfu); f_005ba399();
    /* 005e43bf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e43c2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e43c6: je 0x5e4409 */ if (fZ) goto L_005e4409;
L_005e43c8:; BB(0x005e43c8);
    /* 005e43c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e43cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e43cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e43d0: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e43d3u); call_ind(t); }
    /* 005e43d3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e43d6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e43da: je 0x5e4409 */ if (fZ) goto L_005e4409;
L_005e43dc:; BB(0x005e43dc);
    /* 005e43dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e43df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e43e1: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 005e43e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e43e5: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5e43eau); f_0060ee31();
    /* 005e43ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e43ed: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e43f0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e43f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e43f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e43f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e43f8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e43fb: call 0x5e4421 */ r_esp -= 4; W32(r_esp, 0x5e4400u); f_005e4421();
    /* 005e4400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4401: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4404: call 0x5e449a */ r_esp -= 4; W32(r_esp, 0x5e4409u); f_005e449a();
L_005e4409:; BB(0x005e4409);
    /* 005e4409: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e440c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e440d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4410: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e4413: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005e4416: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x5e441bu); f_005ba79b();
    /* 005e441b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e441d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e441e: ret 4 */ FN_RET(0x005e43a2); r_esp += 8; return;
}

void f_005e4421(void) /* FUN_005e4421 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4421);
    /* 005e4421: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4422: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4424: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4427: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e442a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e442e: je 0x5e4443 */ if (fZ) goto L_005e4443;
L_005e4430:; BB(0x005e4430);
    /* 005e4430: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e4433: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4435: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 005e4438: cmp dword ptr [ebp + 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e443b: jge 0x5e4443 */ if ((fS==fO)) goto L_005e4443;
L_005e443d:; BB(0x005e443d);
    /* 005e443d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4441: jge 0x5e4447 */ if ((fS==fO)) goto L_005e4447;
L_005e4443:; BB(0x005e4443);
    /* 005e4443: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e4445: jmp 0x5e4494 */ goto L_005e4494;
L_005e4447:; BB(0x005e4447);
    /* 005e4447: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e444a: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e444d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005e4450:; BB(0x005e4450);
    /* 005e4450: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e4453: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e4456: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4459: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 005e445c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e445e: jle 0x5e4491 */ if ((fZ||fS!=fO)) goto L_005e4491;
L_005e4460:; BB(0x005e4460);
    /* 005e4460: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4463: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e4466: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e4469: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e446c: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 005e446f: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 005e4473: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4476: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e4479: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e447c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e447f: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e4484: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005e4486: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4489: lea edx, [ecx + eax*2] */ r_edx = (u32)(r_ecx+r_eax*2);
    /* 005e448c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e448f: jmp 0x5e4450 */ goto L_005e4450;
L_005e4491:; BB(0x005e4491);
    /* 005e4491: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005e4494:; BB(0x005e4494);
    /* 005e4494: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4496: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4497: ret 8 */ FN_RET(0x005e4421); r_esp += 12; return;
}

void f_005e449a(void) /* FUN_005e449a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e449a);
    /* 005e449a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e449b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e449d: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e44a0: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005e44a3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e44a7: jne 0x5e44ae */ if (!fZ) goto L_005e44ae;
L_005e44a9:; BB(0x005e44a9);
    /* 005e44a9: jmp 0x5e45f4 */ goto L_005e45f4;
L_005e44ae:; BB(0x005e44ae);
    /* 005e44ae: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e44b1: call 0x5e49f3 */ r_esp -= 4; W32(r_esp, 0x5e44b6u); f_005e49f3();
    /* 005e44b6: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005e44b8: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005e44ba: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e44bb: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005e44be: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e44c1: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005e44c4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e44c7: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e44ca: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 005e44cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e44d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e44d2: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 005e44d5: cmp ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e44db: jge 0x5e450b */ if ((fS==fO)) goto L_005e450b;
L_005e44dd:; BB(0x005e44dd);
    /* 005e44dd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e44e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e44e2: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 005e44e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e44e6: push 0x699c00 */ { u32 v = 0x699c00u; r_esp -= 4; W32(r_esp, v); }
    /* 005e44eb: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005e44ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e44ef: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5e44f4u); f_00624050();
    /* 005e44f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e44f7: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 005e44fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e44fb: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5e4500u); f_0060fc40();
    /* 005e4500: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4503: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e4506: mov word ptr [eax], 0xffff */ W16((u32)(r_eax), 0xffffu);
L_005e450b:; BB(0x005e450b);
    /* 005e450b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e450e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e4510: mov dx, word ptr [ecx + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4u))) & 0xffffu);
    /* 005e4514: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4516: je 0x5e4564 */ if (fZ) goto L_005e4564;
L_005e4518:; BB(0x005e4518);
    /* 005e4518: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e451b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e451d: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 005e4521: lea edx, [ecx*4 + 6] */ r_edx = (u32)(r_ecx*4+0x6u);
    /* 005e4528: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e452b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e452e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e452f: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e4534u); f_0048ab58();
    /* 005e4534: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4537: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e453a: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005e453d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e4540: mov dword ptr [ecx + edx*4 + 0x2c], eax */ W32((u32)(r_ecx+r_edx*4+0x2cu), r_eax);
    /* 005e4544: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4547: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4548: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e454b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e454c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e454f: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005e4552: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e4555: mov ecx, dword ptr [eax + edx*4 + 0x2c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 005e4559: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e455a: call 0x625050 */ r_esp -= 4; W32(r_esp, 0x5e455fu); f_00625050();
    /* 005e455f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4562: jmp 0x5e45c6 */ goto L_005e45c6;
L_005e4564:; BB(0x005e4564);
    /* 005e4564: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005e456b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005e456d: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e4572u); f_0048ab58();
    /* 005e4572: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4575: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e4578: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 005e457b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e457e: mov dword ptr [edx + ecx*4 + 0x2c], eax */ W32((u32)(r_edx+r_ecx*4+0x2cu), r_eax);
    /* 005e4582: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4586: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e4589: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e458a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e458d: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005e4590: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e4593: mov edx, dword ptr [ecx + eax*4 + 0x2c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x2cu));
    /* 005e4597: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4598: call 0x625050 */ r_esp -= 4; W32(r_esp, 0x5e459du); f_00625050();
    /* 005e459d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e45a0: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e45a3: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005e45a6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e45a9: mov eax, dword ptr [edx + ecx*4 + 0x2c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x2cu));
    /* 005e45ad: mov word ptr [eax + 6], 0 */ W16((u32)(r_eax+0x6u), 0x0u);
    /* 005e45b3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e45b6: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005e45b9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e45bc: mov ecx, dword ptr [eax + edx*4 + 0x2c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 005e45c0: mov word ptr [ecx + 8], 0 */ W16((u32)(r_ecx+0x8u), 0x0u);
L_005e45c6:; BB(0x005e45c6);
    /* 005e45c6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e45c9: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005e45cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e45cf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e45d0: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005e45d5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e45d5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e45d5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e45d7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e45da: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 005e45dd: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e45e1: je 0x5e45f4 */ if (fZ) goto L_005e45f4;
L_005e45e3:; BB(0x005e45e3);
    /* 005e45e3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e45e6: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e45ea: je 0x5e45f4 */ if (fZ) goto L_005e45f4;
L_005e45ec:; BB(0x005e45ec);
    /* 005e45ec: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e45ef: call 0x5e45fa */ r_esp -= 4; W32(r_esp, 0x5e45f4u); f_005e45fa();
L_005e45f4:; BB(0x005e45f4);
    /* 005e45f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e45f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e45f7: ret 4 */ FN_RET(0x005e449a); r_esp += 8; return;
}

void f_005e45fa(void) /* FUN_005e45fa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e45fa);
    /* 005e45fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e45fb: mov ebp, esp */ r_ebp = r_esp;
    /* 005e45fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e45fe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4601: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4604: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 005e460b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e460e: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005e4611: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4614: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4617: mov edx, dword ptr [ecx + edx*4 + 0x2c] */ r_edx = R32((u32)(r_ecx+r_edx*4+0x2cu));
    /* 005e461b: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 005e461e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4621: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005e4624: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e4626: mov dx, word ptr [ecx + 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x2u))) & 0xffffu);
    /* 005e462a: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4630: je 0x5e4647 */ if (fZ) goto L_005e4647;
L_005e4632:; BB(0x005e4632);
    /* 005e4632: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4635: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005e4638: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e463a: mov dx, word ptr [ecx + 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x2u))) & 0xffffu);
    /* 005e463e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e463f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4642: call 0x5e4a50 */ r_esp -= 4; W32(r_esp, 0x5e4647u); f_005e4a50();
L_005e4647:; BB(0x005e4647);
    /* 005e4647: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e464a: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005e464d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e464f: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 005e4652: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4655: jle 0x5e46e4 */ if ((fZ||fS!=fO)) goto L_005e46e4;
L_005e465b:; BB(0x005e465b);
    /* 005e465b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e465e: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005e4661: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e4663: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 005e4666: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e466c: jge 0x5e46e4 */ if ((fS==fO)) goto L_005e46e4;
L_005e466e:; BB(0x005e466e);
    /* 005e466e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4671: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4675: je 0x5e469c */ if (fZ) goto L_005e469c;
L_005e4677:; BB(0x005e4677);
    /* 005e4677: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4679: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e467b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e467d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4680: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005e4683: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e4685: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 005e4688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4689: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e468c: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005e468f: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5e4694u); f_005e8389();
    /* 005e4694: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4697: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 005e469a: jmp 0x5e46c1 */ goto L_005e46c1;
L_005e469c:; BB(0x005e469c);
    /* 005e469c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e469e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e46a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e46a5: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005e46a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e46aa: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 005e46ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e46ae: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005e46b3: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e46b6: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5e46bbu); f_005e8389();
    /* 005e46bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e46be: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
L_005e46c1:; BB(0x005e46c1);
    /* 005e46c1: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e46c7: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x5e46ccu); f_005d9e34();
    /* 005e46cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e46cf: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 005e46d2: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e46d4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e46d7: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 005e46da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e46dd: mov dword ptr [eax + 0x64], 1 */ W32((u32)(r_eax+0x64u), 0x1u);
L_005e46e4:; BB(0x005e46e4);
    /* 005e46e4: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e46ea: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x5e46efu); f_005d9e34();
    /* 005e46ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e46f2: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005e46f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e46f8: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005e46fb: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e46fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4701: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 005e4704: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4707: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 005e470e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4711: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005e4714: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4717: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e471a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e471c: mov dx, word ptr [ecx + eax*4 + 6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*4+0x6u))) & 0xffffu);
    /* 005e4721: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4724: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 005e4727: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e472a: cmp dword ptr [ecx + 0x20], -1 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e472e: jne 0x5e473c */ if (!fZ) goto L_005e473c;
L_005e4730:; BB(0x005e4730);
    /* 005e4730: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4733: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4736: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005e4739: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
L_005e473c:; BB(0x005e473c);
    /* 005e473c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e473f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005e4742: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4743: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4746: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e4749: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e474eu); f_005ea1cf();
    /* 005e474e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4751: ret  */ FN_RET(0x005e45fa); r_esp += 4; return;
}

void f_005e4752(void) /* FUN_005e4752 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4752);
    /* 005e4752: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4753: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4755: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4758: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e475b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e475e: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 005e4765: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4768: call 0x5e49f3 */ r_esp -= 4; W32(r_esp, 0x5e476du); f_005e49f3();
    /* 005e476d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e476f: jne 0x5e4776 */ if (!fZ) goto L_005e4776;
L_005e4771:; BB(0x005e4771);
    /* 005e4771: jmp 0x5e4805 */ goto L_005e4805;
L_005e4776:; BB(0x005e4776);
    /* 005e4776: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4779: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e477c: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005e477f: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005e4782: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4785: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005e4788: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4789: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e478c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e478f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e4794u); f_005ea1cf();
    /* 005e4794: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4797: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 005e479a: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e479d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e47a0: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 005e47a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e47a6: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005e47a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e47ac: mov ecx, dword ptr [eax + edx*4 + 0x2c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2cu));
    /* 005e47b0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e47b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e47b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e47b7: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e47bcu); f_0048ac1b();
    /* 005e47bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e47bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e47c2: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005e47c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e47c8: mov dword ptr [edx + ecx*4 + 0x2c], 0 */ W32((u32)(r_edx+r_ecx*4+0x2cu), 0x0u);
    /* 005e47d0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e47d3: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 005e47d6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e47d9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e47da: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005e47df: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e47df, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e47df, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e47e1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e47e4: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 005e47e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e47ea: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 005e47f1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e47f4: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 005e47fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e47fe: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_005e4805:; BB(0x005e4805);
    /* 005e4805: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4807: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4808: ret  */ FN_RET(0x005e4752); r_esp += 4; return;
}

void f_005e4809(void) /* FUN_005e4809 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4809);
    /* 005e4809: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e480a: mov ebp, esp */ r_ebp = r_esp;
    /* 005e480c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e480f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e4812: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e4819: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e4820: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4823: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4827: jne 0x5e483d */ if (!fZ) goto L_005e483d;
L_005e4829:; BB(0x005e4829);
    /* 005e4829: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e482c: call 0x5e49f3 */ r_esp -= 4; W32(r_esp, 0x5e4831u); f_005e49f3();
    /* 005e4831: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4833: je 0x5e483d */ if (fZ) goto L_005e483d;
L_005e4835:; BB(0x005e4835);
    /* 005e4835: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4838: call 0x5e45fa */ r_esp -= 4; W32(r_esp, 0x5e483du); f_005e45fa();
L_005e483d:; BB(0x005e483d);
    /* 005e483d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4840: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4844: jle 0x5e49d8 */ if ((fZ||fS!=fO)) goto L_005e49d8;
L_005e484a:; BB(0x005e484a);
    /* 005e484a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e4850: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x5e4855u); f_005d9e34();
    /* 005e4855: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e4858: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e485b: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005e485e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4860: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 005e4864: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4866: je 0x5e4880 */ if (fZ) goto L_005e4880;
L_005e4868:; BB(0x005e4868);
    /* 005e4868: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e486b: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005e486e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4871: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005e4874: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4876: mov cx, word ptr [eax + edx*4 + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*4+0x8u))) & 0xffffu);
    /* 005e487b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e487e: jmp 0x5e4887 */ goto L_005e4887;
L_005e4880:; BB(0x005e4880);
    /* 005e4880: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005e4887:; BB(0x005e4887);
    /* 005e4887: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e488b: jne 0x5e4989 */ if (!fZ) goto L_005e4989;
L_005e4891:; BB(0x005e4891);
    /* 005e4891: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4894: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005e4897: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e489a: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e489d: jle 0x5e4989 */ if ((fZ||fS!=fO)) goto L_005e4989;
L_005e48a3:; BB(0x005e48a3);
    /* 005e48a3: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005e48aa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e48ad: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005e48b0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e48b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e48b6: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 005e48b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e48bc: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005e48bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e48c1: mov ax, word ptr [edx + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x4u))) & 0xffffu);
    /* 005e48c5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e48c8: cmp dword ptr [ecx + 0x6c], eax */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e48cb: jl 0x5e4946 */ if ((fS!=fO)) goto L_005e4946;
L_005e48cd:; BB(0x005e48cd);
    /* 005e48cd: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e48d3: call 0x5d9e34 */ r_esp -= 4; W32(r_esp, 0x5e48d8u); f_005d9e34();
    /* 005e48d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e48db: cmp dword ptr [edx + 0x78], eax */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e48de: jle 0x5e4921 */ if ((fZ||fS!=fO)) goto L_005e4921;
L_005e48e0:; BB(0x005e48e0);
    /* 005e48e0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005e48e7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e48ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e48f1: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005e48f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e48f5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e48f8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e48fb: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e4900u); f_005ea1cf();
    /* 005e4900: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4903: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 005e490a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e490d: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005e4910: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e4912: mov ax, word ptr [edx + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x4u))) & 0xffffu);
    /* 005e4916: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4919: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e491c: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 005e491f: jmp 0x5e4944 */ goto L_005e4944;
L_005e4921:; BB(0x005e4921);
    /* 005e4921: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e4928: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e492b: call 0x5e4752 */ r_esp -= 4; W32(r_esp, 0x5e4930u); f_005e4752();
    /* 005e4930: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4933: call 0x5e49f3 */ r_esp -= 4; W32(r_esp, 0x5e4938u); f_005e49f3();
    /* 005e4938: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e493a: je 0x5e4944 */ if (fZ) goto L_005e4944;
L_005e493c:; BB(0x005e493c);
    /* 005e493c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e493f: call 0x5e45fa */ r_esp -= 4; W32(r_esp, 0x5e4944u); f_005e45fa();
L_005e4944:; BB(0x005e4944);
    /* 005e4944: jmp 0x5e4984 */ goto L_005e4984;
L_005e4946:; BB(0x005e4946);
    /* 005e4946: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4949: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005e494c: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e494f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4952: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 005e4955: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4958: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005e495b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e495d: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 005e4961: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4963: je 0x5e497d */ if (fZ) goto L_005e497d;
L_005e4965:; BB(0x005e4965);
    /* 005e4965: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4968: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005e496b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e496e: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005e4971: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4973: mov cx, word ptr [eax + edx*4 + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*4+0x8u))) & 0xffffu);
    /* 005e4978: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e497b: jmp 0x5e4984 */ goto L_005e4984;
L_005e497d:; BB(0x005e497d);
    /* 005e497d: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005e4984:; BB(0x005e4984);
    /* 005e4984: jmp 0x5e4887 */ goto L_005e4887;
L_005e4989:; BB(0x005e4989);
    /* 005e4989: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e498d: je 0x5e49d8 */ if (fZ) goto L_005e49d8;
L_005e498f:; BB(0x005e498f);
    /* 005e498f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4992: cmp dword ptr [edx + 0x54], 0 */ {  u32 a = R32((u32)(r_edx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4996: je 0x5e49d8 */ if (fZ) goto L_005e49d8;
L_005e4998:; BB(0x005e4998);
    /* 005e4998: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e499b: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005e499e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e49a1: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e49a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e49a6: mov dx, word ptr [ecx + eax*4 + 6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*4+0x6u))) & 0xffffu);
    /* 005e49ab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e49ae: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 005e49b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e49b4: cmp dword ptr [ecx + 0x20], -1 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e49b8: jne 0x5e49c6 */ if (!fZ) goto L_005e49c6;
L_005e49ba:; BB(0x005e49ba);
    /* 005e49ba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e49bd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e49c0: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005e49c3: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
L_005e49c6:; BB(0x005e49c6);
    /* 005e49c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e49c9: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005e49cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e49cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e49d0: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e49d3: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5e49d8u); f_005ea1cf();
L_005e49d8:; BB(0x005e49d8);
    /* 005e49d8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e49db: call 0x5e49f3 */ r_esp -= 4; W32(r_esp, 0x5e49e0u); f_005e49f3();
    /* 005e49e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e49e2: jne 0x5e49ef */ if (!fZ) goto L_005e49ef;
L_005e49e4:; BB(0x005e49e4);
    /* 005e49e4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e49e7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e49e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e49ec: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x5e49efu); call_ind(t); }
L_005e49ef:; BB(0x005e49ef);
    /* 005e49ef: mov esp, ebp */ r_esp = r_ebp;
    /* 005e49f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e49f2: ret  */ FN_RET(0x005e4809); r_esp += 4; return;
}

void f_005e49f3(void) /* FUN_005e49f3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e49f3);
    /* 005e49f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e49f4: mov ebp, esp */ r_ebp = r_esp;
    /* 005e49f6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e49f9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e49fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e49ff: cmp dword ptr [eax + 0x60], 0 */ {  u32 a = R32((u32)(r_eax+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4a03: jg 0x5e4a29 */ if ((!fZ&&fS==fO)) goto L_005e4a29;
L_005e4a05:; BB(0x005e4a05);
    /* 005e4a05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4a08: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4a0c: je 0x5e4a20 */ if (fZ) goto L_005e4a20;
L_005e4a0e:; BB(0x005e4a0e);
    /* 005e4a0e: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e4a14: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e4a17: call 0x61c7bf */ r_esp -= 4; W32(r_esp, 0x5e4a1cu); f_0061c7bf();
    /* 005e4a1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4a1e: jne 0x5e4a29 */ if (!fZ) goto L_005e4a29;
L_005e4a20:; BB(0x005e4a20);
    /* 005e4a20: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e4a27: jmp 0x5e4a30 */ goto L_005e4a30;
L_005e4a29:; BB(0x005e4a29);
    /* 005e4a29: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005e4a30:; BB(0x005e4a30);
    /* 005e4a30: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4a33: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4a35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4a36: ret  */ FN_RET(0x005e49f3); r_esp += 4; return;
}

void f_005e4a37(void) /* FUN_005e4a37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4a37);
    /* 005e4a37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a38: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4a3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a3b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4a3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4a41: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4a43: cmp dword ptr [eax + 0x60], 0xa */ {  u32 a = R32((u32)(r_eax+0x60u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4a47: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005e4a4a: mov eax, ecx */ r_eax = r_ecx;
    /* 005e4a4c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4a4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4a4f: ret  */ FN_RET(0x005e4a37); r_esp += 4; return;
}

void f_005e4a50(void) /* FUN_005e4a50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4a50);
    /* 005e4a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a51: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4a57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4a5a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e4a5d: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 005e4a60: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4a62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4a63: ret 4 */ FN_RET(0x005e4a50); r_esp += 8; return;
}

void f_005e4a66(void) /* FUN_005e4a66 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4a66);
    /* 005e4a66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a67: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4a69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a6a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4a6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4a70: call 0x5e49f3 */ r_esp -= 4; W32(r_esp, 0x5e4a75u); f_005e49f3();
    /* 005e4a75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4a77: je 0x5e4ac1 */ if (fZ) goto L_005e4ac1;
L_005e4a79:; BB(0x005e4a79);
    /* 005e4a79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4a7c: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4a80: je 0x5e4a96 */ if (fZ) goto L_005e4a96;
L_005e4a82:; BB(0x005e4a82);
    /* 005e4a82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4a85: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4a89: je 0x5e4a96 */ if (fZ) goto L_005e4a96;
L_005e4a8b:; BB(0x005e4a8b);
    /* 005e4a8b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4a8e: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 005e4a91: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x5e4a96u); f_005e84af();
L_005e4a96:; BB(0x005e4a96);
    /* 005e4a96: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4a99: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_005e4aa0:; BB(0x005e4aa0);
    /* 005e4aa0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4aa3: call 0x5e49f3 */ r_esp -= 4; W32(r_esp, 0x5e4aa8u); f_005e49f3();
    /* 005e4aa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4aaa: je 0x5e4ab6 */ if (fZ) goto L_005e4ab6;
L_005e4aac:; BB(0x005e4aac);
    /* 005e4aac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4aaf: call 0x5e4752 */ r_esp -= 4; W32(r_esp, 0x5e4ab4u); f_005e4752();
    /* 005e4ab4: jmp 0x5e4aa0 */ goto L_005e4aa0;
L_005e4ab6:; BB(0x005e4ab6);
    /* 005e4ab6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4ab9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e4abb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4abe: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5e4ac1u); call_ind(t); }
L_005e4ac1:; BB(0x005e4ac1);
    /* 005e4ac1: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4ac3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4ac4: ret  */ FN_RET(0x005e4a66); r_esp += 4; return;
}

void f_005e4ac5(void) /* FUN_005e4ac5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4ac5);
    /* 005e4ac5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ac6: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4ac8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ac9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4acc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4acf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e4ad2: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
    /* 005e4ad5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4ad7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4ad8: ret 4 */ FN_RET(0x005e4ac5); r_esp += 8; return;
}

void f_005e4adb(void) /* FUN_005e4adb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4adb);
    /* 005e4adb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4adc: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4ade: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4ae1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e4ae4: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4ae8: jne 0x5e4b1a */ if (!fZ) goto L_005e4b1a;
L_005e4aea:; BB(0x005e4aea);
    /* 005e4aea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4aed: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4af1: je 0x5e4b0d */ if (fZ) goto L_005e4b0d;
L_005e4af3:; BB(0x005e4af3);
    /* 005e4af3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4af6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e4af9: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4afd: je 0x5e4b0d */ if (fZ) goto L_005e4b0d;
L_005e4aff:; BB(0x005e4aff);
    /* 005e4aff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4b02: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e4b05: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 005e4b08: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005e4b0b: jmp 0x5e4b18 */ goto L_005e4b18;
L_005e4b0d:; BB(0x005e4b0d);
    /* 005e4b0d: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e4b12: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e4b15: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005e4b18:; BB(0x005e4b18);
    /* 005e4b18: jmp 0x5e4b20 */ goto L_005e4b20;
L_005e4b1a:; BB(0x005e4b1a);
    /* 005e4b1a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e4b1d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005e4b20:; BB(0x005e4b20);
    /* 005e4b20: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e4b23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b24: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b26: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4b29: call 0x5ba399 */ r_esp -= 4; W32(r_esp, 0x5e4b2eu); f_005ba399();
    /* 005e4b2e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e4b31: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4b35: je 0x5e4b6d */ if (fZ) goto L_005e4b6d;
L_005e4b37:; BB(0x005e4b37);
    /* 005e4b37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4b3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e4b3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4b3f: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e4b42u); call_ind(t); }
    /* 005e4b42: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e4b45: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4b49: je 0x5e4b58 */ if (fZ) goto L_005e4b58;
L_005e4b4b:; BB(0x005e4b4b);
    /* 005e4b4b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4b4e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b50: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 005e4b53: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e4b56: jmp 0x5e4b5f */ goto L_005e4b5f;
L_005e4b58:; BB(0x005e4b58);
    /* 005e4b58: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005e4b5f:; BB(0x005e4b5f);
    /* 005e4b5f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4b62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b63: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4b66: call 0x5ba79b */ r_esp -= 4; W32(r_esp, 0x5e4b6bu); f_005ba79b();
    /* 005e4b6b: jmp 0x5e4b74 */ goto L_005e4b74;
L_005e4b6d:; BB(0x005e4b6d);
    /* 005e4b6d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005e4b74:; BB(0x005e4b74);
    /* 005e4b74: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4b77: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4b79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4b7a: ret 8 */ FN_RET(0x005e4adb); r_esp += 12; return;
}

void f_005e4b80(void) /* FUN_005e4b80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4b80);
    /* 005e4b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b81: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4b87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4b8a: call 0x5e425d */ r_esp -= 4; W32(r_esp, 0x5e4b8fu); f_005e425d();
    /* 005e4b8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e4b92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e4b95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4b97: je 0x5e4ba5 */ if (fZ) goto L_005e4ba5;
L_005e4b99:; BB(0x005e4b99);
    /* 005e4b99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4b9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b9d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e4ba2u); f_0048ac1b();
    /* 005e4ba2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e4ba5:; BB(0x005e4ba5);
    /* 005e4ba5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4ba8: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4baa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4bab: ret 4 */ FN_RET(0x005e4b80); r_esp += 8; return;
}

void f_005e4bb0(void) /* FUN_005e4bb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4bb0);
    /* 005e4bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4bb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4bba: call 0x5d94ef */ r_esp -= 4; W32(r_esp, 0x5e4bbfu); f_005d94ef();
    /* 005e4bbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4bc2: mov dword ptr [eax], 0x63bd54 */ W32((u32)(r_eax), 0x63bd54u);
    /* 005e4bc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4bcb: mov byte ptr [ecx + 0x2c], 0 */ W8((u32)(r_ecx+0x2cu), 0x0u);
    /* 005e4bcf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4bd2: mov byte ptr [edx + 0x2d], 0 */ W8((u32)(r_edx+0x2du), 0x0u);
    /* 005e4bd6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4bd9: mov byte ptr [eax + 0x36], 0xff */ W8((u32)(r_eax+0x36u), 0xffu);
    /* 005e4bdd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4be0: mov dword ptr [ecx + 0x38], 4 */ W32((u32)(r_ecx+0x38u), 0x4u);
    /* 005e4be7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4bea: mov byte ptr [edx + 0x30], 0 */ W8((u32)(r_edx+0x30u), 0x0u);
    /* 005e4bee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4bf1: mov byte ptr [eax + 0x2f], 0 */ W8((u32)(r_eax+0x2fu), 0x0u);
    /* 005e4bf5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4bf8: mov byte ptr [ecx + 0x2e], 0 */ W8((u32)(r_ecx+0x2eu), 0x0u);
    /* 005e4bfc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4bff: mov byte ptr [edx + 0x31], 0 */ W8((u32)(r_edx+0x31u), 0x0u);
    /* 005e4c03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4c06: mov byte ptr [eax + 0x34], 0 */ W8((u32)(r_eax+0x34u), 0x0u);
    /* 005e4c0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4c0d: mov byte ptr [ecx + 0x33], 0 */ W8((u32)(r_ecx+0x33u), 0x0u);
    /* 005e4c11: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4c14: mov byte ptr [edx + 0x32], 0 */ W8((u32)(r_edx+0x32u), 0x0u);
    /* 005e4c18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4c1b: mov byte ptr [eax + 0x35], 0 */ W8((u32)(r_eax+0x35u), 0x0u);
    /* 005e4c1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4c22: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4c24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4c25: ret  */ FN_RET(0x005e4bb0); r_esp += 4; return;
}

void f_005e4c26(void) /* FUN_005e4c26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4c26);
    /* 005e4c26: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c27: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4c29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c2a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4c2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4c30: mov dword ptr [eax], 0x63bd54 */ W32((u32)(r_eax), 0x63bd54u);
    /* 005e4c36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4c39: call 0x5d9576 */ r_esp -= 4; W32(r_esp, 0x5e4c3eu); f_005d9576();
    /* 005e4c3e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4c40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4c41: ret  */ FN_RET(0x005e4c26); r_esp += 4; return;
}

void f_005e4c42(void) /* FUN_005e4c42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4c42);
    /* 005e4c42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c43: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4c45: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4c48: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e4c4b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4c4e: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5e4c53u); f_005d96a9();
    /* 005e4c53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4c55: je 0x5e4c5c */ if (fZ) goto L_005e4c5c;
L_005e4c57:; BB(0x005e4c57);
    /* 005e4c57: jmp 0x5e4e4c */ goto L_005e4e4c;
L_005e4c5c:; BB(0x005e4c5c);
    /* 005e4c5c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4c5f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005e4c62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c63: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4c66: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005e4c69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4c6d: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005e4c70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c71: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4c74: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e4c77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c78: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005e4c7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c7c: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5e4c82u); call_ind(t); }
    /* 005e4c82: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e4c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c86: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005e4c89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c8a: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005e4c8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c8e: call dword ptr [0x633238] */ { u32 t = R32((u32)(0x633238u)); r_esp -= 4; W32(r_esp, 0x5e4c94u); call_ind(t); }
    /* 005e4c94: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4c97: mov ecx, dword ptr [eax + 0x2e] */ r_ecx = R32((u32)(r_eax+0x2eu));
    /* 005e4c9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c9b: call 0x608888 */ r_esp -= 4; W32(r_esp, 0x5e4ca0u); f_00608888();
    /* 005e4ca0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4ca3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e4ca6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4ca9: mov al, byte ptr [edx + 0x30] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x30u))) & 0xffu);
    /* 005e4cac: mov byte ptr [ebp - 0x18], al */ W8((u32)(r_ebp+0xffffffe8u), (u8)r_eax);
    /* 005e4caf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4cb2: mov dl, byte ptr [ecx + 0x2f] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2fu))) & 0xffu);
    /* 005e4cb5: mov byte ptr [ebp - 0x17], dl */ W8((u32)(r_ebp+0xffffffe9u), (u8)r_edx);
    /* 005e4cb8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4cbb: mov cl, byte ptr [eax + 0x2e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2eu))) & 0xffu);
    /* 005e4cbe: mov byte ptr [ebp - 0x16], cl */ W8((u32)(r_ebp+0xffffffeau), (u8)r_ecx);
    /* 005e4cc1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4cc4: call 0x5e5071 */ r_esp -= 4; W32(r_esp, 0x5e4cc9u); f_005e5071();
    /* 005e4cc9: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 005e4ccc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4ccf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e4cd1: mov al, byte ptr [edx + 0x2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2cu))) & 0xffu);
    /* 005e4cd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4cd6: je 0x5e4d1a */ if (fZ) goto L_005e4d1a;
L_005e4cd8:; BB(0x005e4cd8);
    /* 005e4cd8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4cdb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e4cde: jmp 0x5e4ce9 */ goto L_005e4ce9;
L_005e4ce0:; BB(0x005e4ce0);
    /* 005e4ce0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4ce3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e4ce6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005e4ce9:; BB(0x005e4ce9);
    /* 005e4ce9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4cec: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4cef: jge 0x5e4d1a */ if ((fS==fO)) goto L_005e4d1a;
L_005e4cf1:; BB(0x005e4cf1);
    /* 005e4cf1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4cf4: call 0x5e5098 */ r_esp -= 4; W32(r_esp, 0x5e4cf9u); f_005e5098();
    /* 005e4cf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4cfa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e4cfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4cfe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4d01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d02: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4d05: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4d08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d09: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4d0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d0d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4d10: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e4d13: call 0x5e0914 */ r_esp -= 4; W32(r_esp, 0x5e4d18u); f_005e0914();
    /* 005e4d18: jmp 0x5e4ce0 */ goto L_005e4ce0;
L_005e4d1a:; BB(0x005e4d1a);
    /* 005e4d1a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4d1d: mov ecx, dword ptr [eax + 0x32] */ r_ecx = R32((u32)(r_eax+0x32u));
    /* 005e4d20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d21: call 0x608888 */ r_esp -= 4; W32(r_esp, 0x5e4d26u); f_00608888();
    /* 005e4d26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4d29: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e4d2c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4d2f: mov al, byte ptr [edx + 0x34] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x34u))) & 0xffu);
    /* 005e4d32: mov byte ptr [ebp - 0x18], al */ W8((u32)(r_ebp+0xffffffe8u), (u8)r_eax);
    /* 005e4d35: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4d38: mov dl, byte ptr [ecx + 0x33] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x33u))) & 0xffu);
    /* 005e4d3b: mov byte ptr [ebp - 0x17], dl */ W8((u32)(r_ebp+0xffffffe9u), (u8)r_edx);
    /* 005e4d3e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4d41: mov cl, byte ptr [eax + 0x32] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x32u))) & 0xffu);
    /* 005e4d44: mov byte ptr [ebp - 0x16], cl */ W8((u32)(r_ebp+0xffffffeau), (u8)r_ecx);
    /* 005e4d47: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4d4a: call 0x5e5071 */ r_esp -= 4; W32(r_esp, 0x5e4d4fu); f_005e5071();
    /* 005e4d4f: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 005e4d52: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4d55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e4d57: mov al, byte ptr [edx + 0x2d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2du))) & 0xffu);
    /* 005e4d5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4d5c: je 0x5e4e4c */ if (fZ) goto L_005e4e4c;
L_005e4d62:; BB(0x005e4d62);
    /* 005e4d62: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4d65: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4d68: cmp edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4d6b: jne 0x5e4d97 */ if (!fZ) goto L_005e4d97;
L_005e4d6d:; BB(0x005e4d6d);
    /* 005e4d6d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4d70: call 0x5e5098 */ r_esp -= 4; W32(r_esp, 0x5e4d75u); f_005e5098();
    /* 005e4d75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d76: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e4d79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4d7d: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005e4d80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d81: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4d84: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4d87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d88: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4d8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d8c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4d8f: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e4d92: call 0x5e0914 */ r_esp -= 4; W32(r_esp, 0x5e4d97u); f_005e0914();
L_005e4d97:; BB(0x005e4d97);
    /* 005e4d97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4d9a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4d9d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4da0: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005e4da3: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e4da6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4da8: jne 0x5e4dd7 */ if (!fZ) goto L_005e4dd7;
L_005e4daa:; BB(0x005e4daa);
    /* 005e4daa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4dad: call 0x5e5098 */ r_esp -= 4; W32(r_esp, 0x5e4db2u); f_005e5098();
    /* 005e4db2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4db3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e4db6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4db7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4dba: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005e4dbd: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e4dc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4dc1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4dc4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4dc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4dc8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4dcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4dcc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4dcf: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e4dd2: call 0x5e0914 */ r_esp -= 4; W32(r_esp, 0x5e4dd7u); f_005e0914();
L_005e4dd7:; BB(0x005e4dd7);
    /* 005e4dd7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4dda: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4ddd: cmp ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4de0: jne 0x5e4e0c */ if (!fZ) goto L_005e4e0c;
L_005e4de2:; BB(0x005e4de2);
    /* 005e4de2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4de5: call 0x5e5098 */ r_esp -= 4; W32(r_esp, 0x5e4deau); f_005e5098();
    /* 005e4dea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4deb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e4dee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4def: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4df2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4df5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4df6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4df9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4dfa: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4dfd: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e4e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e01: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4e04: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e4e07: call 0x5e0963 */ r_esp -= 4; W32(r_esp, 0x5e4e0cu); f_005e0963();
L_005e4e0c:; BB(0x005e4e0c);
    /* 005e4e0c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4e0f: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e4e12: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4e15: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005e4e18: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4e1b: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4e1d: jne 0x5e4e4c */ if (!fZ) goto L_005e4e4c;
L_005e4e1f:; BB(0x005e4e1f);
    /* 005e4e1f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4e22: call 0x5e5098 */ r_esp -= 4; W32(r_esp, 0x5e4e27u); f_005e5098();
    /* 005e4e27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e28: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e4e2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e2c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4e2f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4e32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4e36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e37: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4e3a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005e4e3d: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e41: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4e44: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e4e47: call 0x5e0963 */ r_esp -= 4; W32(r_esp, 0x5e4e4cu); f_005e0963();
L_005e4e4c:; BB(0x005e4e4c);
    /* 005e4e4c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4e4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4e4f: ret 4 */ FN_RET(0x005e4c42); r_esp += 8; return;
}

void f_005e4e52(void) /* FUN_005e4e52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4e52);
    /* 005e4e52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e53: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4e55: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4e58: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e4e5b: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e4e5e: mov byte ptr [ebp - 2], al */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_eax);
    /* 005e4e61: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005e4e64: mov byte ptr [ebp - 3], cl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ecx);
    /* 005e4e67: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005e4e6a: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
    /* 005e4e6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e71: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4e74: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5e4e79u); f_005e4eac();
    /* 005e4e79: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4e7c: ret 0xc */ FN_RET(0x005e4e52); r_esp += 16; return;
}

void f_005e4e7f(void) /* FUN_005e4e7f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4e7f);
    /* 005e4e7f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e80: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4e82: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4e85: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e4e88: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e4e8b: mov byte ptr [ebp - 2], al */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_eax);
    /* 005e4e8e: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005e4e91: mov byte ptr [ebp - 3], cl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ecx);
    /* 005e4e94: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005e4e97: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
    /* 005e4e9a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4e9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e9e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e4ea1: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5e4ea6u); f_005e4f18();
    /* 005e4ea6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4ea8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4ea9: ret 0xc */ FN_RET(0x005e4e7f); r_esp += 16; return;
}

void f_005e4eac(void) /* FUN_005e4eac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4eac);
    /* 005e4eac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ead: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4eaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4eb0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4eb3: mov eax, dword ptr [ebp + 0xa] */ r_eax = R32((u32)(r_ebp+0xau));
    /* 005e4eb6: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e4ebb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4ebd: jne 0x5e4ee2 */ if (!fZ) goto L_005e4ee2;
L_005e4ebf:; BB(0x005e4ebf);
    /* 005e4ebf: mov ecx, dword ptr [ebp + 9] */ r_ecx = R32((u32)(r_ebp+0x9u));
    /* 005e4ec2: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4ec8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4eca: jne 0x5e4ee2 */ if (!fZ) goto L_005e4ee2;
L_005e4ecc:; BB(0x005e4ecc);
    /* 005e4ecc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e4ecf: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e4ed5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4ed7: jne 0x5e4ee2 */ if (!fZ) goto L_005e4ee2;
L_005e4ed9:; BB(0x005e4ed9);
    /* 005e4ed9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4edc: mov byte ptr [eax + 0x2c], 0 */ W8((u32)(r_eax+0x2cu), 0x0u);
    /* 005e4ee0: jmp 0x5e4ee9 */ goto L_005e4ee9;
L_005e4ee2:; BB(0x005e4ee2);
    /* 005e4ee2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4ee5: mov byte ptr [ecx + 0x2c], 1 */ W8((u32)(r_ecx+0x2cu), 0x1u);
L_005e4ee9:; BB(0x005e4ee9);
    /* 005e4ee9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4eec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e4eef: mov dword ptr [edx + 0x2e], eax */ W32((u32)(r_edx+0x2eu), r_eax);
    /* 005e4ef2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4ef5: add ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4ef8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ef9: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e4eff: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e4f02: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005e4f05: call 0x61c1ef */ r_esp -= 4; W32(r_esp, 0x5e4f0au); f_0061c1ef();
    /* 005e4f0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4f0d: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e4f12u); f_005d9aa5();
    /* 005e4f12: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4f14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4f15: ret 4 */ FN_RET(0x005e4eac); r_esp += 8; return;
}

void f_005e4f18(void) /* FUN_005e4f18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4f18);
    /* 005e4f18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f19: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4f1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f1c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4f1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4f22: mov byte ptr [eax + 0x2d], 1 */ W8((u32)(r_eax+0x2du), 0x1u);
    /* 005e4f26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4f29: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e4f2c: mov dword ptr [ecx + 0x32], edx */ W32((u32)(r_ecx+0x32u), r_edx);
    /* 005e4f2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4f32: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e4f35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f36: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e4f3c: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e4f3f: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005e4f42: call 0x61c1ef */ r_esp -= 4; W32(r_esp, 0x5e4f47u); f_0061c1ef();
    /* 005e4f47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4f4a: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e4f4fu); f_005d9aa5();
    /* 005e4f4f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4f51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4f52: ret 4 */ FN_RET(0x005e4f18); r_esp += 8; return;
}

void f_005e4f55(void) /* FUN_005e4f55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4f55);
    /* 005e4f55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f56: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4f58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f59: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4f5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4f5f: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e4f64u); f_005d9aa5();
    /* 005e4f64: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e4f67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f68: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e4f6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4f6f: call 0x5d994e */ r_esp -= 4; W32(r_esp, 0x5e4f74u); f_005d994e();
    /* 005e4f74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4f77: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e4f7cu); f_005d9aa5();
    /* 005e4f7c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4f7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4f7f: ret 8 */ FN_RET(0x005e4f55); r_esp += 12; return;
}

void f_005e4f82(void) /* FUN_005e4f82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4f82);
    /* 005e4f82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f83: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4f85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4f89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4f8c: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e4f91u); f_005d9aa5();
    /* 005e4f91: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e4f94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f95: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e4f98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4f9c: call 0x5d98f1 */ r_esp -= 4; W32(r_esp, 0x5e4fa1u); f_005d98f1();
    /* 005e4fa1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4fa4: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e4fa9u); f_005d9aa5();
    /* 005e4fa9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4fab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4fac: ret 8 */ FN_RET(0x005e4f82); r_esp += 12; return;
}

void f_005e4faf(void) /* FUN_005e4faf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4faf);
    /* 005e4faf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4fb0: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4fb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4fb3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4fb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4fb9: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5e4fbeu); f_005d9690();
    /* 005e4fbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4fc0: je 0x5e4fdb */ if (fZ) goto L_005e4fdb;
L_005e4fc2:; BB(0x005e4fc2);
    /* 005e4fc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4fc5: call 0x5d9a0f */ r_esp -= 4; W32(r_esp, 0x5e4fcau); f_005d9a0f();
    /* 005e4fca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4fcd: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4fd1: je 0x5e4fdb */ if (fZ) goto L_005e4fdb;
L_005e4fd3:; BB(0x005e4fd3);
    /* 005e4fd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4fd6: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e4fdbu); f_005d9aa5();
L_005e4fdb:; BB(0x005e4fdb);
    /* 005e4fdb: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4fdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4fde: ret  */ FN_RET(0x005e4faf); r_esp += 4; return;
}

void f_005e4fdf(void) /* FUN_005e4fdf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4fdf);
    /* 005e4fdf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4fe0: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4fe2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4fe3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4fe6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4fe9: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5e4feeu); f_005d96a9();
    /* 005e4fee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4ff0: je 0x5e500b */ if (fZ) goto L_005e500b;
L_005e4ff2:; BB(0x005e4ff2);
    /* 005e4ff2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4ff5: call 0x5d9a24 */ r_esp -= 4; W32(r_esp, 0x5e4ffau); f_005d9a24();
    /* 005e4ffa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4ffd: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5001: je 0x5e500b */ if (fZ) goto L_005e500b;
L_005e5003:; BB(0x005e5003);
    /* 005e5003: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5006: call 0x5d9aa5 */ r_esp -= 4; W32(r_esp, 0x5e500bu); f_005d9aa5();
L_005e500b:; BB(0x005e500b);
    /* 005e500b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e500d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e500e: ret  */ FN_RET(0x005e4fdf); r_esp += 4; return;
}

void f_005e500f(void) /* FUN_005e500f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e500f);
    /* 005e500f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5010: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5012: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5015: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e5018: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e501b: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e501e: mov byte ptr [eax + 0x36], cl */ W8((u32)(r_eax+0x36u), (u8)r_ecx);
    /* 005e5021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5024: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5028: je 0x5e506b */ if (fZ) goto L_005e506b;
L_005e502a:; BB(0x005e502a);
    /* 005e502a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e502d: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5e5032u); f_005d9690();
    /* 005e5032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5034: je 0x5e506b */ if (fZ) goto L_005e506b;
L_005e5036:; BB(0x005e5036);
    /* 005e5036: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5039: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005e503c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e503d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5040: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005e5043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5044: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5047: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005e504a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e504b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e504e: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e5051: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5052: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005e5055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5056: call dword ptr [0x633234] */ { u32 t = R32((u32)(0x633234u)); r_esp -= 4; W32(r_esp, 0x5e505cu); call_ind(t); }
    /* 005e505c: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005e505f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5060: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5063: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e5066: call 0x5e087b */ r_esp -= 4; W32(r_esp, 0x5e506bu); f_005e087b();
L_005e506b:; BB(0x005e506b);
    /* 005e506b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e506d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e506e: ret 4 */ FN_RET(0x005e500f); r_esp += 8; return;
}

void f_005e5071(void) /* FUN_005e5071 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5071);
    /* 005e5071: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5072: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5074: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5075: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5078: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e507b: mov al, byte ptr [eax + 0x36] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x36u))) & 0xffu);
    /* 005e507e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5081: ret  */ FN_RET(0x005e5071); r_esp += 4; return;
}

void f_005e5082(void) /* FUN_005e5082 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5082);
    /* 005e5082: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5083: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5085: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5086: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5089: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e508c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e508f: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 005e5092: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5095: ret 4 */ FN_RET(0x005e5082); r_esp += 8; return;
}

void f_005e5098(void) /* FUN_005e5098 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5098);
    /* 005e5098: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5099: mov ebp, esp */ r_ebp = r_esp;
    /* 005e509b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e509c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e509f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e50a2: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 005e50a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e50a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e50a8: ret  */ FN_RET(0x005e5098); r_esp += 4; return;
}

void f_005e50a9(void) /* FUN_005e50a9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e50a9);
    /* 005e50a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e50aa: mov ebp, esp */ r_ebp = r_esp;
    /* 005e50ac: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e50af: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e50b2: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005e50b7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e50ba: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005e50bd: call 0x61c2d1 */ r_esp -= 4; W32(r_esp, 0x5e50c2u); f_0061c2d1();
    /* 005e50c2: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 005e50c5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e50c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e50c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e50cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e50cd: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e50d3: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e50d6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005e50d9: call 0x61c2e5 */ r_esp -= 4; W32(r_esp, 0x5e50deu); f_0061c2e5();
    /* 005e50de: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e50e1: add eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e50e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e50e5: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e50eb: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e50ee: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005e50f1: call 0x61c1ef */ r_esp -= 4; W32(r_esp, 0x5e50f6u); f_0061c1ef();
    /* 005e50f6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e50f9: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e50fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e50fd: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005e5103: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e5106: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005e5109: call 0x61c1ef */ r_esp -= 4; W32(r_esp, 0x5e510eu); f_0061c1ef();
    /* 005e510e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5111: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5112: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5115: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5116: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e511c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e511f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005e5122: call 0x61c2e5 */ r_esp -= 4; W32(r_esp, 0x5e5127u); f_0061c2e5();
    /* 005e5127: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5129: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e512a: ret 8 */ FN_RET(0x005e50a9); r_esp += 12; return;
}

void f_005e512d(void) /* FUN_005e512d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e512d);
    /* 005e512d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e512e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5130: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5131: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5134: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5137: call 0x5d94ef */ r_esp -= 4; W32(r_esp, 0x5e513cu); f_005d94ef();
    /* 005e513c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e513f: mov dword ptr [eax], 0x63bd9c */ W32((u32)(r_eax), 0x63bd9cu);
    /* 005e5145: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5148: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 005e514f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5152: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 005e5159: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e515c: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 005e5163: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5166: mov edx, dword ptr [0x6870a0] */ r_edx = R32((u32)(0x6870a0u));
    /* 005e516c: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 005e516f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5172: mov ecx, dword ptr [0x68709c] */ r_ecx = R32((u32)(0x68709cu));
    /* 005e5178: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 005e517b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e517e: mov eax, dword ptr [0x687098] */ r_eax = R32((u32)(0x687098u));
    /* 005e5183: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005e5186: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5189: mov esp, ebp */ r_esp = r_ebp;
    /* 005e518b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e518c: ret  */ FN_RET(0x005e512d); r_esp += 4; return;
}

void f_005e518d(void) /* FUN_005e518d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e518d);
    /* 005e518d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e518e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5190: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5193: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005e5196: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e5199: mov dword ptr [eax], 0x63bd9c */ W32((u32)(r_eax), 0x63bd9cu);
    /* 005e519f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e51a2: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e51a6: je 0x5e51df */ if (fZ) goto L_005e51df;
L_005e51a8:; BB(0x005e51a8);
    /* 005e51a8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e51ab: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005e51ae: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e51b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e51b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e51b7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e51bb: je 0x5e51ce */ if (fZ) goto L_005e51ce;
L_005e51bd:; BB(0x005e51bd);
    /* 005e51bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e51c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e51c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e51c7: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e51c9u); call_ind(t); }
    /* 005e51c9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e51cc: jmp 0x5e51d5 */ goto L_005e51d5;
L_005e51ce:; BB(0x005e51ce);
    /* 005e51ce: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005e51d5:; BB(0x005e51d5);
    /* 005e51d5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e51d8: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_005e51df:; BB(0x005e51df);
    /* 005e51df: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e51e2: cmp dword ptr [edx + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e51e6: je 0x5e521f */ if (fZ) goto L_005e521f;
L_005e51e8:; BB(0x005e51e8);
    /* 005e51e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e51eb: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e51ee: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e51f1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e51f4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e51f7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e51fb: je 0x5e520e */ if (fZ) goto L_005e520e;
L_005e51fd:; BB(0x005e51fd);
    /* 005e51fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51ff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5202: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5204: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5207: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e5209u); call_ind(t); }
    /* 005e5209: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e520c: jmp 0x5e5215 */ goto L_005e5215;
L_005e520e:; BB(0x005e520e);
    /* 005e520e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e5215:; BB(0x005e5215);
    /* 005e5215: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e5218: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_005e521f:; BB(0x005e521f);
    /* 005e521f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e5222: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5226: je 0x5e525f */ if (fZ) goto L_005e525f;
L_005e5228:; BB(0x005e5228);
    /* 005e5228: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e522b: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005e522e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e5231: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e5234: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e5237: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e523b: je 0x5e524e */ if (fZ) goto L_005e524e;
L_005e523d:; BB(0x005e523d);
    /* 005e523d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e523f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5242: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5244: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5247: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e5249u); call_ind(t); }
    /* 005e5249: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e524c: jmp 0x5e5255 */ goto L_005e5255;
L_005e524e:; BB(0x005e524e);
    /* 005e524e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005e5255:; BB(0x005e5255);
    /* 005e5255: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e5258: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_005e525f:; BB(0x005e525f);
    /* 005e525f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e5262: call 0x5d9576 */ r_esp -= 4; W32(r_esp, 0x5e5267u); f_005d9576();
    /* 005e5267: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5269: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e526a: ret  */ FN_RET(0x005e518d); r_esp += 4; return;
}

void f_005e526b(void) /* FUN_005e526b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e526b);
    /* 005e526b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e526c: mov ebp, esp */ r_ebp = r_esp;
    /* 005e526e: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5271: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e5274: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5277: call 0x5d95c3 */ r_esp -= 4; W32(r_esp, 0x5e527cu); f_005d95c3();
    /* 005e527c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e527f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5281: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5284: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e5287u); call_ind(t); }
    /* 005e5287: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e528a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e528d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e528f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5292: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e5295u); call_ind(t); }
    /* 005e5295: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e5298: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e529b: call 0x5d98c3 */ r_esp -= 4; W32(r_esp, 0x5e52a0u); f_005d98c3();
    /* 005e52a0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e52a3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e52a6: call 0x5d98da */ r_esp -= 4; W32(r_esp, 0x5e52abu); f_005d98da();
    /* 005e52ab: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e52ae: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e52b1: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e52b5: jne 0x5e52e7 */ if (!fZ) goto L_005e52e7;
L_005e52b7:; BB(0x005e52b7);
    /* 005e52b7: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e52b9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e52beu); f_0048ab58();
    /* 005e52be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e52c1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e52c4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e52c8: je 0x5e52d7 */ if (fZ) goto L_005e52d7;
L_005e52ca:; BB(0x005e52ca);
    /* 005e52ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e52cd: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x5e52d2u); f_005e4bb0();
    /* 005e52d2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e52d5: jmp 0x5e52de */ goto L_005e52de;
L_005e52d7:; BB(0x005e52d7);
    /* 005e52d7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e52de:; BB(0x005e52de);
    /* 005e52de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e52e1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e52e4: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
L_005e52e7:; BB(0x005e52e7);
    /* 005e52e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e52ea: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e52ee: jne 0x5e5320 */ if (!fZ) goto L_005e5320;
L_005e52f0:; BB(0x005e52f0);
    /* 005e52f0: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e52f2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e52f7u); f_0048ab58();
    /* 005e52f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e52fa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e52fd: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5301: je 0x5e5310 */ if (fZ) goto L_005e5310;
L_005e5303:; BB(0x005e5303);
    /* 005e5303: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e5306: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x5e530bu); f_005e4bb0();
    /* 005e530b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e530e: jmp 0x5e5317 */ goto L_005e5317;
L_005e5310:; BB(0x005e5310);
    /* 005e5310: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005e5317:; BB(0x005e5317);
    /* 005e5317: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e531a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e531d: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
L_005e5320:; BB(0x005e5320);
    /* 005e5320: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5323: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5327: jne 0x5e5359 */ if (!fZ) goto L_005e5359;
L_005e5329:; BB(0x005e5329);
    /* 005e5329: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e532b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e5330u); f_0048ab58();
    /* 005e5330: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5333: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e5336: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e533a: je 0x5e5349 */ if (fZ) goto L_005e5349;
L_005e533c:; BB(0x005e533c);
    /* 005e533c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e533f: call 0x5e4bb0 */ r_esp -= 4; W32(r_esp, 0x5e5344u); f_005e4bb0();
    /* 005e5344: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005e5347: jmp 0x5e5350 */ goto L_005e5350;
L_005e5349:; BB(0x005e5349);
    /* 005e5349: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005e5350:; BB(0x005e5350);
    /* 005e5350: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5353: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e5356: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
L_005e5359:; BB(0x005e5359);
    /* 005e5359: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e535c: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005e535f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5362: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e5365: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005e5368: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e536b: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005e536e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5371: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e5374: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005e5377: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e537a: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005e537d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5380: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e5383: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005e5386: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5389: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e538eu); f_005d9883();
    /* 005e538e: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5392: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5395: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005e5398: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e539b: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005e539e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e53a0: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e53a3u); call_ind(t); }
    /* 005e53a3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e53a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e53a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e53aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e53ab: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e53ae: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e53b1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e53b4: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005e53b7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e53b9: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5e53bcu); call_ind(t); }
    /* 005e53bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e53bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e53c0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e53c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e53c4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e53c7: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005e53ca: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e53cd: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005e53d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e53d2: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e53d5u); call_ind(t); }
    /* 005e53d5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e53d8: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005e53db: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e53de: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005e53e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e53e3: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e53e6u); call_ind(t); }
    /* 005e53e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e53e9: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e53eeu); f_005d9883();
    /* 005e53ee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e53f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e53f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e53f5: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e53f8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e53fb: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005e53fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5400: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e5403u); call_ind(t); }
    /* 005e5403: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5406: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e540a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e540d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5410: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5411: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5414: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005e5417: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e541a: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005e541d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e541f: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5e5422u); call_ind(t); }
    /* 005e5422: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5425: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5426: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5429: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e542c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e542d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5430: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e5433: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5436: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005e5439: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e543b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e543eu); call_ind(t); }
    /* 005e543e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5441: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e5444: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5447: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005e544a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e544c: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e544fu); call_ind(t); }
    /* 005e544f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5452: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5e5457u); f_005d9883();
    /* 005e5457: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e545a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e545b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e545e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005e5461: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5464: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005e5467: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5469: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e546cu); call_ind(t); }
    /* 005e546c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e546f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e5472: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5473: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5476: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5479: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e547a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e547d: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005e5480: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5483: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005e5486: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5488: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5e548bu); call_ind(t); }
    /* 005e548b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e548e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5491: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5492: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5495: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5496: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5499: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005e549c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e549f: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005e54a2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e54a4: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e54a7u); call_ind(t); }
    /* 005e54a7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e54aa: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005e54ad: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e54b0: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005e54b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e54b5: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e54b8u); call_ind(t); }
    /* 005e54b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e54bb: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005e54be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e54bf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e54c2: call 0x5e5778 */ r_esp -= 4; W32(r_esp, 0x5e54c7u); f_005e5778();
    /* 005e54c7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e54ca: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005e54cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e54ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e54d1: call 0x5e57b8 */ r_esp -= 4; W32(r_esp, 0x5e54d6u); f_005e57b8();
    /* 005e54d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e54d9: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005e54dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e54dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e54e0: call 0x5e57f8 */ r_esp -= 4; W32(r_esp, 0x5e54e5u); f_005e57f8();
    /* 005e54e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e54e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e54e8: ret  */ FN_RET(0x005e526b); r_esp += 4; return;
}

void f_005e54e9(void) /* FUN_005e54e9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e54e9);
    /* 005e54e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e54ea: mov ebp, esp */ r_ebp = r_esp;
    /* 005e54ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e54ed: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e54f0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e54f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e54f4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e54f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e54f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e54fb: call 0x5d994e */ r_esp -= 4; W32(r_esp, 0x5e5500u); f_005d994e();
    /* 005e5500: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5503: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5507: je 0x5e555a */ if (fZ) goto L_005e555a;
L_005e5509:; BB(0x005e5509);
    /* 005e5509: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e550c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e550d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5510: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5511: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5514: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e5517: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e551a: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005e551d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e551f: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5e5522u); call_ind(t); }
    /* 005e5522: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e5525: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5526: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5529: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e552c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e552d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5530: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e5533: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5536: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005e5539: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e553b: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e553eu); call_ind(t); }
    /* 005e553e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e5541: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5544: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5545: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5548: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5549: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e554c: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005e554f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5552: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005e5555: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5557: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5e555au); call_ind(t); }
L_005e555a:; BB(0x005e555a);
    /* 005e555a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e555c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e555d: ret 8 */ FN_RET(0x005e54e9); r_esp += 12; return;
}

void f_005e5560(void) /* FUN_005e5560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5560);
    /* 005e5560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5561: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5567: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e556a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e556b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e556e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e556f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5572: call 0x5d98f1 */ r_esp -= 4; W32(r_esp, 0x5e5577u); f_005d98f1();
    /* 005e5577: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e557a: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e557e: je 0x5e55d7 */ if (fZ) goto L_005e55d7;
L_005e5580:; BB(0x005e5580);
    /* 005e5580: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e5583: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5584: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5587: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5588: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e558b: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e558e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5591: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005e5594: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5596: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5e5599u); call_ind(t); }
    /* 005e5599: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e559c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e559f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e55a0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e55a3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e55a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e55a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e55aa: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e55ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e55b0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005e55b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e55b5: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x5e55b8u); call_ind(t); }
    /* 005e55b8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e55bb: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e55be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e55bf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e55c2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e55c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e55c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e55c9: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005e55cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e55cf: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005e55d2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e55d4: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5e55d7u); call_ind(t); }
L_005e55d7:; BB(0x005e55d7);
    /* 005e55d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005e55d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e55da: ret 8 */ FN_RET(0x005e5560); r_esp += 12; return;
}

void f_005e55dd(void) /* FUN_005e55dd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e55dd);
    /* 005e55dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e55de: mov ebp, esp */ r_ebp = r_esp;
    /* 005e55e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e55e1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e55e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e55e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e55e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e55eb: call 0x5d975e */ r_esp -= 4; W32(r_esp, 0x5e55f0u); f_005d975e();
    /* 005e55f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e55f3: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e55f7: je 0x5e5641 */ if (fZ) goto L_005e5641;
L_005e55f9:; BB(0x005e55f9);
    /* 005e55f9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e55fc: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e55ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5600: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5603: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005e5606: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5609: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005e560c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e560e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e5611u); call_ind(t); }
    /* 005e5611: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5614: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5617: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5618: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e561b: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005e561e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5621: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005e5624: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5626: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e5629u); call_ind(t); }
    /* 005e5629: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e562c: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e562f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5630: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5633: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005e5636: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5639: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005e563c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e563e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e5641u); call_ind(t); }
L_005e5641:; BB(0x005e5641);
    /* 005e5641: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5643: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5644: ret 4 */ FN_RET(0x005e55dd); r_esp += 8; return;
}

void f_005e5647(void) /* FUN_005e5647 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5647);
    /* 005e5647: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5648: mov ebp, esp */ r_ebp = r_esp;
    /* 005e564a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e564b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e564e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5651: call 0x5d9a24 */ r_esp -= 4; W32(r_esp, 0x5e5656u); f_005d9a24();
    /* 005e5656: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5659: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005e565c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e565f: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005e5662: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5664: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e5667u); call_ind(t); }
    /* 005e5667: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e566a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e566d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5670: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005e5673: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5675: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e5678u); call_ind(t); }
    /* 005e5678: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e567b: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005e567e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5681: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005e5684: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5686: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e5689u); call_ind(t); }
    /* 005e5689: mov esp, ebp */ r_esp = r_ebp;
    /* 005e568b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e568c: ret  */ FN_RET(0x005e5647); r_esp += 4; return;
}

void f_005e568d(void) /* FUN_005e568d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e568d);
    /* 005e568d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e568e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5690: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5691: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5694: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5697: call 0x5d9a0f */ r_esp -= 4; W32(r_esp, 0x5e569cu); f_005d9a0f();
    /* 005e569c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e569f: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005e56a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e56a5: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005e56a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e56aa: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e56adu); call_ind(t); }
    /* 005e56ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e56b0: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005e56b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e56b6: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005e56b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e56bb: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e56beu); call_ind(t); }
    /* 005e56be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e56c1: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005e56c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e56c7: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005e56ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e56cc: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e56cfu); call_ind(t); }
    /* 005e56cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005e56d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e56d2: ret  */ FN_RET(0x005e568d); r_esp += 4; return;
}

void f_005e56d3(void) /* FUN_005e56d3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e56d3);
    /* 005e56d3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e56d4: mov ebp, esp */ r_ebp = r_esp;
    /* 005e56d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e56d7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e56da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e56dd: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e56e0: mov byte ptr [eax + 0x3a], cl */ W8((u32)(r_eax+0x3au), (u8)r_ecx);
    /* 005e56e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e56e6: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005e56e9: mov byte ptr [edx + 0x39], al */ W8((u32)(r_edx+0x39u), (u8)r_eax);
    /* 005e56ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e56ef: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005e56f2: mov byte ptr [ecx + 0x38], dl */ W8((u32)(r_ecx+0x38u), (u8)r_edx);
    /* 005e56f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e56f8: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005e56fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e56fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e56ff: call 0x5e5778 */ r_esp -= 4; W32(r_esp, 0x5e5704u); f_005e5778();
    /* 005e5704: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5706: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5707: ret 0xc */ FN_RET(0x005e56d3); r_esp += 16; return;
}

void f_005e570a(void) /* FUN_005e570a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e570a);
    /* 005e570a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e570b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e570d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e570e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5711: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5714: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e5717: mov byte ptr [eax + 0x3e], cl */ W8((u32)(r_eax+0x3eu), (u8)r_ecx);
    /* 005e571a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e571d: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005e5720: mov byte ptr [edx + 0x3d], al */ W8((u32)(r_edx+0x3du), (u8)r_eax);
    /* 005e5723: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5726: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005e5729: mov byte ptr [ecx + 0x3c], dl */ W8((u32)(r_ecx+0x3cu), (u8)r_edx);
    /* 005e572c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e572f: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005e5732: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5733: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5736: call 0x5e57b8 */ r_esp -= 4; W32(r_esp, 0x5e573bu); f_005e57b8();
    /* 005e573b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e573d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e573e: ret 0xc */ FN_RET(0x005e570a); r_esp += 16; return;
}

void f_005e5741(void) /* FUN_005e5741 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5741);
    /* 005e5741: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5742: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5744: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5745: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5748: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e574b: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e574e: mov byte ptr [eax + 0x42], cl */ W8((u32)(r_eax+0x42u), (u8)r_ecx);
    /* 005e5751: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5754: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005e5757: mov byte ptr [edx + 0x41], al */ W8((u32)(r_edx+0x41u), (u8)r_eax);
    /* 005e575a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e575d: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005e5760: mov byte ptr [ecx + 0x40], dl */ W8((u32)(r_ecx+0x40u), (u8)r_edx);
    /* 005e5763: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5766: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005e5769: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e576a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e576d: call 0x5e57f8 */ r_esp -= 4; W32(r_esp, 0x5e5772u); f_005e57f8();
    /* 005e5772: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5774: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5775: ret 0xc */ FN_RET(0x005e5741); r_esp += 16; return;
}

void f_005e5778(void) /* FUN_005e5778 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5778);
    /* 005e5778: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5779: mov ebp, esp */ r_ebp = r_esp;
    /* 005e577b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e577c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e577f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5782: mov cl, byte ptr [ebp + 0xa] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005e5785: mov byte ptr [eax + 0x3a], cl */ W8((u32)(r_eax+0x3au), (u8)r_ecx);
    /* 005e5788: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e578b: mov al, byte ptr [ebp + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 005e578e: mov byte ptr [edx + 0x39], al */ W8((u32)(r_edx+0x39u), (u8)r_eax);
    /* 005e5791: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5794: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e5797: mov byte ptr [ecx + 0x38], dl */ W8((u32)(r_ecx+0x38u), (u8)r_edx);
    /* 005e579a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e579d: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e57a1: je 0x5e57b2 */ if (fZ) goto L_005e57b2;
L_005e57a3:; BB(0x005e57a3);
    /* 005e57a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e57a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e57a7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e57aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e57ad: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5e57b2u); f_005e4f18();
L_005e57b2:; BB(0x005e57b2);
    /* 005e57b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e57b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e57b5: ret 4 */ FN_RET(0x005e5778); r_esp += 8; return;
}

void f_005e57b8(void) /* FUN_005e57b8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e57b8);
    /* 005e57b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e57b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005e57bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e57bc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e57bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e57c2: mov cl, byte ptr [ebp + 0xa] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005e57c5: mov byte ptr [eax + 0x3e], cl */ W8((u32)(r_eax+0x3eu), (u8)r_ecx);
    /* 005e57c8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e57cb: mov al, byte ptr [ebp + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 005e57ce: mov byte ptr [edx + 0x3d], al */ W8((u32)(r_edx+0x3du), (u8)r_eax);
    /* 005e57d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e57d4: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e57d7: mov byte ptr [ecx + 0x3c], dl */ W8((u32)(r_ecx+0x3cu), (u8)r_edx);
    /* 005e57da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e57dd: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e57e1: je 0x5e57f2 */ if (fZ) goto L_005e57f2;
L_005e57e3:; BB(0x005e57e3);
    /* 005e57e3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e57e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e57e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e57ea: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005e57ed: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5e57f2u); f_005e4f18();
L_005e57f2:; BB(0x005e57f2);
    /* 005e57f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e57f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e57f5: ret 4 */ FN_RET(0x005e57b8); r_esp += 8; return;
}

void f_005e57f8(void) /* FUN_005e57f8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e57f8);
    /* 005e57f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e57f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005e57fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e57fc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e57ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5802: mov cl, byte ptr [ebp + 0xa] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005e5805: mov byte ptr [eax + 0x42], cl */ W8((u32)(r_eax+0x42u), (u8)r_ecx);
    /* 005e5808: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e580b: mov al, byte ptr [ebp + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 005e580e: mov byte ptr [edx + 0x41], al */ W8((u32)(r_edx+0x41u), (u8)r_eax);
    /* 005e5811: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5814: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e5817: mov byte ptr [ecx + 0x40], dl */ W8((u32)(r_ecx+0x40u), (u8)r_edx);
    /* 005e581a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e581d: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5821: je 0x5e5841 */ if (fZ) goto L_005e5841;
L_005e5823:; BB(0x005e5823);
    /* 005e5823: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5826: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5827: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e582a: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005e582d: call 0x5e4f18 */ r_esp -= 4; W32(r_esp, 0x5e5832u); f_005e4f18();
    /* 005e5832: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5836: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5839: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005e583c: call 0x5e4eac */ r_esp -= 4; W32(r_esp, 0x5e5841u); f_005e4eac();
L_005e5841:; BB(0x005e5841);
    /* 005e5841: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5843: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5844: ret 4 */ FN_RET(0x005e57f8); r_esp += 8; return;
}

void f_005e5850(void) /* FUN_005e5850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5850);
    /* 005e5850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5851: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5857: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e585a: call 0x5e4c26 */ r_esp -= 4; W32(r_esp, 0x5e585fu); f_005e4c26();
    /* 005e585f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5862: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e5865: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5867: je 0x5e5875 */ if (fZ) goto L_005e5875;
L_005e5869:; BB(0x005e5869);
    /* 005e5869: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e586c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e586d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e5872u); f_0048ac1b();
    /* 005e5872: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e5875:; BB(0x005e5875);
    /* 005e5875: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5878: mov esp, ebp */ r_esp = r_ebp;
    /* 005e587a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e587b: ret 4 */ FN_RET(0x005e5850); r_esp += 8; return;
}

void f_005e5880(void) /* FUN_005e5880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5880);
    /* 005e5880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5881: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5887: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e588a: call 0x5e518d */ r_esp -= 4; W32(r_esp, 0x5e588fu); f_005e518d();
    /* 005e588f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5892: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e5895: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5897: je 0x5e58a5 */ if (fZ) goto L_005e58a5;
L_005e5899:; BB(0x005e5899);
    /* 005e5899: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e589c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e589d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e58a2u); f_0048ac1b();
    /* 005e58a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e58a5:; BB(0x005e58a5);
    /* 005e58a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e58a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005e58aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e58ab: ret 4 */ FN_RET(0x005e5880); r_esp += 8; return;
}

void f_005e58b0(void) /* FUN_005e58b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e58b0);
    /* 005e58b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e58b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e58b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e58b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e58b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e58ba: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5e58bfu); f_005dfbf0();
    /* 005e58bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e58c2: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e58c5: call 0x5dd290 */ r_esp -= 4; W32(r_esp, 0x5e58cau); f_005dd290();
    /* 005e58ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e58cd: mov dword ptr [eax], 0x63bde4 */ W32((u32)(r_eax), 0x63bde4u);
    /* 005e58d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e58d6: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005e58dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e58df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e58e2: call 0x5e5f37 */ r_esp -= 4; W32(r_esp, 0x5e58e7u); f_005e5f37();
    /* 005e58e7: mov dword ptr [0x6f7038], 0 */ W32((u32)(0x6f7038u), 0x0u);
    /* 005e58f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e58f4: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 005e58fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e58fe: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5900: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5901: ret  */ FN_RET(0x005e58b0); r_esp += 4; return;
}

void f_005e5902(void) /* FUN_005e5902 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5902);
    /* 005e5902: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5903: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5905: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e590b: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 005e5911: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005e5917: mov dword ptr [eax], 0x63bde4 */ W32((u32)(r_eax), 0x63bde4u);
    /* 005e591d: mov ecx, dword ptr [0x6f7038] */ r_ecx = R32((u32)(0x6f7038u));
    /* 005e5923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5924: push 0x699c54 */ { u32 v = 0x699c54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5929: lea edx, [ebp - 0x80] */ r_edx = (u32)(r_ebp+0xffffff80u);
    /* 005e592c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e592d: call dword ptr [0x63322c] */ { u32 t = R32((u32)(0x63322cu)); r_esp -= 4; W32(r_esp, 0x5e5933u); call_ind(t); }
    /* 005e5933: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5936: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 005e5939: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e593a: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5e593fu); f_0060fc40();
    /* 005e593f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e5942:; BB(0x005e5942);
    /* 005e5942: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005e5948: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e594b: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e5950u); f_005dd4d2();
    /* 005e5950: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5952: je 0x5e59b1 */ if (fZ) goto L_005e59b1;
L_005e5954:; BB(0x005e5954);
    /* 005e5954: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5956: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005e595c: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e595f: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e5964u); f_005dd560();
    /* 005e5964: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005e596a: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e5970: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 005e5976: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e597c: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 005e5982: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5989: je 0x5e59a5 */ if (fZ) goto L_005e59a5;
L_005e598b:; BB(0x005e598b);
    /* 005e598b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e598d: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005e5993: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5995: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005e599b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e599du); call_ind(t); }
    /* 005e599d: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005e59a3: jmp 0x5e59af */ goto L_005e59af;
L_005e59a5:; BB(0x005e59a5);
    /* 005e59a5: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_005e59af:; BB(0x005e59af);
    /* 005e59af: jmp 0x5e5942 */ goto L_005e5942;
L_005e59b1:; BB(0x005e59b1);
    /* 005e59b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e59b3: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005e59b9: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x5e59beu); f_005e5d66();
    /* 005e59be: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005e59c4: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e59c7: call 0x5dd2d3 */ r_esp -= 4; W32(r_esp, 0x5e59ccu); f_005dd2d3();
    /* 005e59cc: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005e59d2: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5e59d7u); f_005dfc0f();
    /* 005e59d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005e59d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e59da: ret  */ FN_RET(0x005e5902); r_esp += 4; return;
}

void f_005e59db(void) /* FUN_005e59db */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e59db);
    /* 005e59db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e59dc: mov ebp, esp */ r_ebp = r_esp;
    /* 005e59de: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e59e1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e59e4: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 005e59e9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e59eeu); f_0048ab58();
    /* 005e59ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e59f1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e59f4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e59f8: je 0x5e5a09 */ if (fZ) goto L_005e5a09;
L_005e59fa:; BB(0x005e59fa);
    /* 005e59fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e59fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e59ff: call 0x5dfc30 */ r_esp -= 4; W32(r_esp, 0x5e5a04u); f_005dfc30();
    /* 005e5a04: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e5a07: jmp 0x5e5a10 */ goto L_005e5a10;
L_005e5a09:; BB(0x005e5a09);
    /* 005e5a09: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005e5a10:; BB(0x005e5a10);
    /* 005e5a10: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e5a13: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e5a16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5a1b: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x5e5a20u); f_005e0731();
    /* 005e5a20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5a23: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x5e5a28u); f_005e030e();
    /* 005e5a28: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5a2b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005e5a2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a2f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5a32: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5e5a37u); f_005e5ec3();
    /* 005e5a37: cmp dword ptr [0x6f6f24], 0 */ {  u32 a = R32((u32)(0x6f6f24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5a3e: je 0x5e5aaa */ if (fZ) goto L_005e5aaa;
L_005e5a40:; BB(0x005e5a40);
    /* 005e5a40: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a45: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e5a4au); f_0048ab58();
    /* 005e5a4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5a4d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e5a50: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5a54: je 0x5e5a63 */ if (fZ) goto L_005e5a63;
L_005e5a56:; BB(0x005e5a56);
    /* 005e5a56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5a59: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5e5a5eu); f_005e8590();
    /* 005e5a5e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e5a61: jmp 0x5e5a6a */ goto L_005e5a6a;
L_005e5a63:; BB(0x005e5a63);
    /* 005e5a63: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005e5a6a:; BB(0x005e5a6a);
    /* 005e5a6a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e5a6d: mov dword ptr [0x6fc3f8], eax */ W32((u32)(0x6fc3f8u), r_eax);
    /* 005e5a72: mov ecx, dword ptr [0x6fc3f8] */ r_ecx = R32((u32)(0x6fc3f8u));
    /* 005e5a78: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5a7a: mov ecx, dword ptr [0x6fc3f8] */ r_ecx = R32((u32)(0x6fc3f8u));
    /* 005e5a80: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e5a83u); call_ind(t); }
    /* 005e5a83: push 0x270f */ { u32 v = 0x270fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a88: mov eax, dword ptr [0x6fc3f8] */ r_eax = R32((u32)(0x6fc3f8u));
    /* 005e5a8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5a8f: mov ecx, dword ptr [0x6fc3f8] */ r_ecx = R32((u32)(0x6fc3f8u));
    /* 005e5a95: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e5a98u); call_ind(t); }
    /* 005e5a98: mov eax, dword ptr [0x6fc3f8] */ r_eax = R32((u32)(0x6fc3f8u));
    /* 005e5a9d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5a9f: mov ecx, dword ptr [0x6fc3f8] */ r_ecx = R32((u32)(0x6fc3f8u));
    /* 005e5aa5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e5aa8u); call_ind(t); }
    /* 005e5aa8: jmp 0x5e5ab4 */ goto L_005e5ab4;
L_005e5aaa:; BB(0x005e5aaa);
    /* 005e5aaa: mov dword ptr [0x6fc3f8], 0 */ W32((u32)(0x6fc3f8u), 0x0u);
L_005e5ab4:; BB(0x005e5ab4);
    /* 005e5ab4: cmp dword ptr [0x6f6f28], 0 */ {  u32 a = R32((u32)(0x6f6f28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5abb: je 0x5e5b59 */ if (fZ) goto L_005e5b59;
L_005e5ac1:; BB(0x005e5ac1);
    /* 005e5ac1: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ac6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5e5acbu); f_0048ab58();
    /* 005e5acb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5ace: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e5ad1: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5ad5: je 0x5e5ae4 */ if (fZ) goto L_005e5ae4;
L_005e5ad7:; BB(0x005e5ad7);
    /* 005e5ad7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5ada: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5e5adfu); f_005e8590();
    /* 005e5adf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e5ae2: jmp 0x5e5aeb */ goto L_005e5aeb;
L_005e5ae4:; BB(0x005e5ae4);
    /* 005e5ae4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005e5aeb:; BB(0x005e5aeb);
    /* 005e5aeb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5aee: mov dword ptr [0x6fc3fc], eax */ W32((u32)(0x6fc3fcu), r_eax);
    /* 005e5af3: mov ecx, dword ptr [0x6fc3fc] */ r_ecx = R32((u32)(0x6fc3fcu));
    /* 005e5af9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5afb: mov ecx, dword ptr [0x6fc3fc] */ r_ecx = R32((u32)(0x6fc3fcu));
    /* 005e5b01: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e5b04u); call_ind(t); }
    /* 005e5b04: push 0x270f */ { u32 v = 0x270fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b09: mov eax, dword ptr [0x6fc3fc] */ r_eax = R32((u32)(0x6fc3fcu));
    /* 005e5b0e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5b10: mov ecx, dword ptr [0x6fc3fc] */ r_ecx = R32((u32)(0x6fc3fcu));
    /* 005e5b16: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e5b19u); call_ind(t); }
    /* 005e5b19: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b1d: mov eax, dword ptr [0x6fc3fc] */ r_eax = R32((u32)(0x6fc3fcu));
    /* 005e5b22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5b24: mov ecx, dword ptr [0x6fc3fc] */ r_ecx = R32((u32)(0x6fc3fcu));
    /* 005e5b2a: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e5b2du); call_ind(t); }
    /* 005e5b2d: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b2f: mov ecx, dword ptr [0x6fc3fc] */ r_ecx = R32((u32)(0x6fc3fcu));
    /* 005e5b35: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5e5b3au); f_005e8740();
    /* 005e5b3a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b3c: mov ecx, dword ptr [0x6fc3fc] */ r_ecx = R32((u32)(0x6fc3fcu));
    /* 005e5b42: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5e5b47u); f_005e8775();
    /* 005e5b47: mov eax, dword ptr [0x6fc3fc] */ r_eax = R32((u32)(0x6fc3fcu));
    /* 005e5b4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5b4e: mov ecx, dword ptr [0x6fc3fc] */ r_ecx = R32((u32)(0x6fc3fcu));
    /* 005e5b54: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5e5b57u); call_ind(t); }
    /* 005e5b57: jmp 0x5e5b63 */ goto L_005e5b63;
L_005e5b59:; BB(0x005e5b59);
    /* 005e5b59: mov dword ptr [0x6fc3fc], 0 */ W32((u32)(0x6fc3fcu), 0x0u);
L_005e5b63:; BB(0x005e5b63);
    /* 005e5b63: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5b65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5b66: ret  */ FN_RET(0x005e59db); r_esp += 4; return;
}

void f_005e5b67(void) /* FUN_005e5b67 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5b67);
    /* 005e5b67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b68: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5b6a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5b6d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e5b70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5b73: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e5b76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e5b79: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5b7c: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5b80: jne 0x5e5d5a */ if (!fZ) goto L_005e5d5a;
L_005e5b86:; BB(0x005e5b86);
    /* 005e5b86: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5b89: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5b8d: je 0x5e5d5a */ if (fZ) goto L_005e5d5a;
L_005e5b93:; BB(0x005e5b93);
    /* 005e5b93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5b96: call 0x5e5f8e */ r_esp -= 4; W32(r_esp, 0x5e5b9bu); f_005e5f8e();
    /* 005e5b9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5b9d: je 0x5e5bcd */ if (fZ) goto L_005e5bcd;
L_005e5b9f:; BB(0x005e5b9f);
    /* 005e5b9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5ba2: call 0x5e5f8e */ r_esp -= 4; W32(r_esp, 0x5e5ba7u); f_005e5f8e();
    /* 005e5ba7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5baa: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005e5bad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5bb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bb1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5bb4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e5bb7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5bba: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005e5bbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5bbf: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e5bc2u); call_ind(t); }
    /* 005e5bc2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5bc5: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005e5bc8: jmp 0x5e5d60 */ goto L_005e5d60;
L_005e5bcd:; BB(0x005e5bcd);
    /* 005e5bcd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5bd0: call 0x5e60aa */ r_esp -= 4; W32(r_esp, 0x5e5bd5u); f_005e60aa();
    /* 005e5bd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5bd7: je 0x5e5c76 */ if (fZ) goto L_005e5c76;
L_005e5bdd:; BB(0x005e5bdd);
    /* 005e5bdd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5be0: call 0x5e60aa */ r_esp -= 4; W32(r_esp, 0x5e5be5u); f_005e60aa();
    /* 005e5be5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5be8: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005e5beb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5bee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5bf2: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e5bf5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5bf8: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005e5bfb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5bfd: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e5c00u); call_ind(t); }
    /* 005e5c00: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5c03: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5c07: je 0x5e5c14 */ if (fZ) goto L_005e5c14;
L_005e5c09:; BB(0x005e5c09);
    /* 005e5c09: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5c0c: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005e5c0f: jmp 0x5e5d60 */ goto L_005e5d60;
L_005e5c14:; BB(0x005e5c14);
    /* 005e5c14: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5c17: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005e5c1a: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e5c1fu); f_005e06d0();
    /* 005e5c1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5c22: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e5c25: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e5c27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5c2a: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005e5c2d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5c30: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005e5c33: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e5c38u); f_005e06e1();
    /* 005e5c38: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5c3b: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005e5c3e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5c40: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5c43: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 005e5c46: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5c49: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e5c4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c4d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5c50: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005e5c53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5c57: call 0x5e5fe8 */ r_esp -= 4; W32(r_esp, 0x5e5c5cu); f_005e5fe8();
    /* 005e5c5c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5c5f: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005e5c62: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5c65: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5c69: jne 0x5e5c76 */ if (!fZ) goto L_005e5c76;
L_005e5c6b:; BB(0x005e5c6b);
    /* 005e5c6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5c6e: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005e5c71: jmp 0x5e5d60 */ goto L_005e5d60;
L_005e5c76:; BB(0x005e5c76);
    /* 005e5c76: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5c79: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005e5c7c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005e5c7f: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5c83: je 0x5e5c87 */ if (fZ) goto L_005e5c87;
L_005e5c85:; BB(0x005e5c85);
    /* 005e5c85: jmp 0x5e5ca1 */ goto L_005e5ca1;
L_005e5c87:; BB(0x005e5c87);
    /* 005e5c87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5c8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5c8e: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005e5c91: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5c94: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005e5c97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5c99: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e5c9cu); call_ind(t); }
    /* 005e5c9c: jmp 0x5e5d5a */ goto L_005e5d5a;
L_005e5ca1:; BB(0x005e5ca1);
    /* 005e5ca1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5ca4: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5ca7: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e5cacu); f_005dd4d2();
    /* 005e5cac: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e5caf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e5cb2: jmp 0x5e5cbd */ goto L_005e5cbd;
L_005e5cb4:; BB(0x005e5cb4);
    /* 005e5cb4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5cb7: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e5cba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e5cbd:; BB(0x005e5cbd);
    /* 005e5cbd: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e5cc1: jl 0x5e5d5a */ if ((fS!=fO)) goto L_005e5d5a;
L_005e5cc7:; BB(0x005e5cc7);
    /* 005e5cc7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5cca: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005e5ccd: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e5cd2u); f_005e06d0();
    /* 005e5cd2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5cd5: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005e5cd8: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5cda: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5cdd: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005e5ce0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5ce3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e5ce6: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e5cebu); f_005e06e1();
    /* 005e5ceb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5cee: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e5cf1: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e5cf3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5cf6: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 005e5cf9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5cfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cfd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5d00: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5d03: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e5d08u); f_005dd560();
    /* 005e5d08: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5d0b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005e5d0e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5d11: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e5d14: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e5d19u); f_005e06d0();
    /* 005e5d19: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5d1c: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e5d1f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e5d21: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5d24: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005e5d27: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5d2a: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005e5d2d: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e5d32u); f_005e06e1();
    /* 005e5d32: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5d35: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005e5d38: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5d3a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5d3d: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 005e5d40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5d47: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005e5d4a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5d4d: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005e5d50: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5d52: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e5d55u); call_ind(t); }
    /* 005e5d55: jmp 0x5e5cb4 */ goto L_005e5cb4;
L_005e5d5a:; BB(0x005e5d5a);
    /* 005e5d5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5d5d: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_005e5d60:; BB(0x005e5d60);
    /* 005e5d60: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5d62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5d63: ret 4 */ FN_RET(0x005e5b67); r_esp += 8; return;
}

void f_005e5d66(void) /* FUN_005e5d66 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5d66);
    /* 005e5d66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d67: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5d69: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5d6c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e5d6f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5d72: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5d76: je 0x5e5da5 */ if (fZ) goto L_005e5da5;
L_005e5d78:; BB(0x005e5d78);
    /* 005e5d78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5d7b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e5d7e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e5d81: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5d84: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e5d87: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5d8b: je 0x5e5d9e */ if (fZ) goto L_005e5d9e;
L_005e5d8d:; BB(0x005e5d8d);
    /* 005e5d8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5d92: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5d94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5d97: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e5d99u); call_ind(t); }
    /* 005e5d99: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e5d9c: jmp 0x5e5da5 */ goto L_005e5da5;
L_005e5d9e:; BB(0x005e5d9e);
    /* 005e5d9e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005e5da5:; BB(0x005e5da5);
    /* 005e5da5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5da8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5dab: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005e5dae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5db1: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5db5: je 0x5e5dc6 */ if (fZ) goto L_005e5dc6;
L_005e5db7:; BB(0x005e5db7);
    /* 005e5db7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5dba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5dbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5dbe: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e5dc1: call 0x5e624a */ r_esp -= 4; W32(r_esp, 0x5e5dc6u); f_005e624a();
L_005e5dc6:; BB(0x005e5dc6);
    /* 005e5dc6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5dc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5dc9: ret 4 */ FN_RET(0x005e5d66); r_esp += 8; return;
}

void f_005e5dcc(void) /* FUN_005e5dcc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5dcc);
    /* 005e5dcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5dcd: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5dcf: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5dd2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e5dd5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5dd8: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5ddc: je 0x5e5de9 */ if (fZ) goto L_005e5de9;
L_005e5dde:; BB(0x005e5dde);
    /* 005e5dde: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5de1: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e5de4: call 0x5e63c5 */ r_esp -= 4; W32(r_esp, 0x5e5de9u); f_005e63c5();
L_005e5de9:; BB(0x005e5de9);
    /* 005e5de9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e5df0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5df3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5df4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5df7: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5dfa: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e5dffu); f_005dd560();
    /* 005e5dff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e5e02:; BB(0x005e5e02);
    /* 005e5e02: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5e05: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5e08: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e5e0du); f_005dd4d2();
    /* 005e5e0d: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e5e10: jge 0x5e5e3a */ if ((fS==fO)) goto L_005e5e3a;
L_005e5e12:; BB(0x005e5e12);
    /* 005e5e12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5e15: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5e17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5e1a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5e5e1du); call_ind(t); }
    /* 005e5e1d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5e20: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5e23: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e5e26: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5e29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e2a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5e2d: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5e30: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e5e35u); f_005dd560();
    /* 005e5e35: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e5e38: jmp 0x5e5e02 */ goto L_005e5e02;
L_005e5e3a:; BB(0x005e5e3a);
    /* 005e5e3a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e5e41: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5e44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e45: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5e48: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5e4b: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e5e50u); f_005dd560();
    /* 005e5e50: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e5e53:; BB(0x005e5e53);
    /* 005e5e53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5e56: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5e59: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e5e5eu); f_005dd4d2();
    /* 005e5e5e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e5e61: jge 0x5e5ebf */ if ((fS==fO)) goto L_005e5ebf;
L_005e5e63:; BB(0x005e5e63);
    /* 005e5e63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5e66: call 0x5e0a75 */ r_esp -= 4; W32(r_esp, 0x5e5e6bu); f_005e0a75();
    /* 005e5e6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5e6d: je 0x5e5ea2 */ if (fZ) goto L_005e5ea2;
L_005e5e6f:; BB(0x005e5e6f);
    /* 005e5e6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5e72: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e5e75: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5e78: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e5e7b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5e7f: je 0x5e5e92 */ if (fZ) goto L_005e5e92;
L_005e5e81:; BB(0x005e5e81);
    /* 005e5e81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e83: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5e86: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5e88: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5e8b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e5e8du); call_ind(t); }
    /* 005e5e8d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e5e90: jmp 0x5e5e99 */ goto L_005e5e99;
L_005e5e92:; BB(0x005e5e92);
    /* 005e5e92: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005e5e99:; BB(0x005e5e99);
    /* 005e5e99: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e5ea0: jmp 0x5e5eab */ goto L_005e5eab;
L_005e5ea2:; BB(0x005e5ea2);
    /* 005e5ea2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5ea5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5ea8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005e5eab:; BB(0x005e5eab);
    /* 005e5eab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5eae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5eaf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5eb2: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5eb5: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e5ebau); f_005dd560();
    /* 005e5eba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e5ebd: jmp 0x5e5e53 */ goto L_005e5e53;
L_005e5ebf:; BB(0x005e5ebf);
    /* 005e5ebf: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5ec1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5ec2: ret  */ FN_RET(0x005e5dcc); r_esp += 4; return;
}

void f_005e5ec3(void) /* FUN_005e5ec3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5ec3);
    /* 005e5ec3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ec4: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5ec6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5ec9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e5ecc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5ecf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5ed2: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005e5ed5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ed7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5eda: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5edd: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e5ee2u); f_005dd560();
    /* 005e5ee2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e5ee5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5ee9: je 0x5e5ef9 */ if (fZ) goto L_005e5ef9;
L_005e5eeb:; BB(0x005e5eeb);
    /* 005e5eeb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5eed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5ef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ef1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5ef4: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x5e5ef9u); f_005e0461();
L_005e5ef9:; BB(0x005e5ef9);
    /* 005e5ef9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5efb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5efc: ret 4 */ FN_RET(0x005e5ec3); r_esp += 8; return;
}

void f_005e5eff(void) /* FUN_005e5eff */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5eff);
    /* 005e5eff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f00: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5f02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f03: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5f06: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5f09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f0d: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5f10: call 0x5dd425 */ r_esp -= 4; W32(r_esp, 0x5e5f15u); f_005dd425();
    /* 005e5f15: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5f17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5f18: ret 4 */ FN_RET(0x005e5eff); r_esp += 8; return;
}

void f_005e5f1b(void) /* FUN_005e5f1b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5f1b);
    /* 005e5f1b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f1c: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5f1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f1f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5f22: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5f25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f29: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5f2c: call 0x5dd469 */ r_esp -= 4; W32(r_esp, 0x5e5f31u); f_005dd469();
    /* 005e5f31: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5f33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5f34: ret 4 */ FN_RET(0x005e5f1b); r_esp += 8; return;
}

void f_005e5f37(void) /* FUN_005e5f37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5f37);
    /* 005e5f37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f38: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5f3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f3b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5f3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f41: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5f44: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 005e5f47: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f4a: cmp dword ptr [edx + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5f4e: je 0x5e5f67 */ if (fZ) goto L_005e5f67;
L_005e5f50:; BB(0x005e5f50);
    /* 005e5f50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f55: call 0x5e6094 */ r_esp -= 4; W32(r_esp, 0x5e5f5au); f_005e6094();
    /* 005e5f5a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f5d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5f5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f62: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5e5f65u); call_ind(t); }
    /* 005e5f65: jmp 0x5e5f72 */ goto L_005e5f72;
L_005e5f67:; BB(0x005e5f67);
    /* 005e5f67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5f6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f6f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5e5f72u); call_ind(t); }
L_005e5f72:; BB(0x005e5f72);
    /* 005e5f72: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5f74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5f75: ret 4 */ FN_RET(0x005e5f37); r_esp += 8; return;
}

void f_005e5f78(void) /* FUN_005e5f78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5f78);
    /* 005e5f78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f79: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5f7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f7c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5f7f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5f81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5f82: ret  */ FN_RET(0x005e5f78); r_esp += 4; return;
}

void f_005e5f83(void) /* FUN_005e5f83 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5f83);
    /* 005e5f83: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f84: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5f86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f87: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5f8a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5f8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5f8d: ret  */ FN_RET(0x005e5f83); r_esp += 4; return;
}

void f_005e5f8e(void) /* FUN_005e5f8e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5f8e);
    /* 005e5f8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f8f: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5f91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f92: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5f95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f98: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 005e5f9b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5f9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5f9e: ret  */ FN_RET(0x005e5f8e); r_esp += 4; return;
}

void f_005e5f9f(void) /* FUN_005e5f9f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5f9f);
    /* 005e5f9f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fa0: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5fa2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fa3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5fa6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5fa9: call 0x5e60aa */ r_esp -= 4; W32(r_esp, 0x5e5faeu); f_005e60aa();
    /* 005e5fae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5fb0: je 0x5e5fbc */ if (fZ) goto L_005e5fbc;
L_005e5fb2:; BB(0x005e5fb2);
    /* 005e5fb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5fb5: call 0x5e60aa */ r_esp -= 4; W32(r_esp, 0x5e5fbau); f_005e60aa();
    /* 005e5fba: jmp 0x5e5fe2 */ goto L_005e5fe2;
L_005e5fbc:; BB(0x005e5fbc);
    /* 005e5fbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5fbf: call 0x5e5f8e */ r_esp -= 4; W32(r_esp, 0x5e5fc4u); f_005e5f8e();
    /* 005e5fc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5fc6: je 0x5e5fd2 */ if (fZ) goto L_005e5fd2;
L_005e5fc8:; BB(0x005e5fc8);
    /* 005e5fc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5fcb: call 0x5e5f8e */ r_esp -= 4; W32(r_esp, 0x5e5fd0u); f_005e5f8e();
    /* 005e5fd0: jmp 0x5e5fe2 */ goto L_005e5fe2;
L_005e5fd2:; BB(0x005e5fd2);
    /* 005e5fd2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e5fd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fd6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e5fd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5fdd: call 0x5e5fe8 */ r_esp -= 4; W32(r_esp, 0x5e5fe2u); f_005e5fe8();
L_005e5fe2:; BB(0x005e5fe2);
    /* 005e5fe2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5fe4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5fe5: ret 8 */ FN_RET(0x005e5f9f); r_esp += 12; return;
}

void f_005e5fe8(void) /* FUN_005e5fe8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5fe8);
    /* 005e5fe8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fe9: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5feb: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5fee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fef: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e5ff2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e5ff9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5ffc: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5fff: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e6004u); f_005dd4d2();
    /* 005e6004: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e6007: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e600a:; BB(0x005e600a);
    /* 005e600a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e600e: jl 0x5e608a */ if ((fS!=fO)) goto L_005e608a;
L_005e6010:; BB(0x005e6010);
    /* 005e6010: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6014: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6017: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e601a: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e601fu); f_005dd560();
    /* 005e601f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e6022: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6025: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e602au); f_005e06d0();
    /* 005e602a: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e602d: jl 0x5e607f */ if ((fS!=fO)) goto L_005e607f;
L_005e602f:; BB(0x005e602f);
    /* 005e602f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6032: call 0x5e06d0 */ r_esp -= 4; W32(r_esp, 0x5e6037u); f_005e06d0();
    /* 005e6037: mov esi, eax */ r_esi = r_eax;
    /* 005e6039: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e603c: call 0x5e06f2 */ r_esp -= 4; W32(r_esp, 0x5e6041u); f_005e06f2();
    /* 005e6041: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e6043: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6046: jg 0x5e607f */ if ((!fZ&&fS==fO)) goto L_005e607f;
L_005e6048:; BB(0x005e6048);
    /* 005e6048: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e604b: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e6050u); f_005e06e1();
    /* 005e6050: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6053: jl 0x5e607f */ if ((fS!=fO)) goto L_005e607f;
L_005e6055:; BB(0x005e6055);
    /* 005e6055: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6058: call 0x5e06e1 */ r_esp -= 4; W32(r_esp, 0x5e605du); f_005e06e1();
    /* 005e605d: mov esi, eax */ r_esi = r_eax;
    /* 005e605f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6062: call 0x5e0709 */ r_esp -= 4; W32(r_esp, 0x5e6067u); f_005e0709();
    /* 005e6067: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e6069: cmp dword ptr [ebp + 0xc], esi */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e606c: jg 0x5e607f */ if ((!fZ&&fS==fO)) goto L_005e607f;
L_005e606e:; BB(0x005e606e);
    /* 005e606e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6071: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x5e6076u); f_005e07a3();
    /* 005e6076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6078: je 0x5e607f */ if (fZ) goto L_005e607f;
L_005e607a:; BB(0x005e607a);
    /* 005e607a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e607d: jmp 0x5e608d */ goto L_005e608d;
L_005e607f:; BB(0x005e607f);
    /* 005e607f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6082: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6085: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e6088: jmp 0x5e600a */ goto L_005e600a;
L_005e608a:; BB(0x005e608a);
    /* 005e608a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005e608d:; BB(0x005e608d);
    /* 005e608d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e608e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6091: ret 8 */ FN_RET(0x005e5fe8); r_esp += 12; return;
}

void f_005e6094(void) /* FUN_005e6094 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6094);
    /* 005e6094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6095: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6097: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6098: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e609b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e609e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e60a1: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 005e60a4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e60a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e60a7: ret 4 */ FN_RET(0x005e6094); r_esp += 8; return;
}

void f_005e60aa(void) /* FUN_005e60aa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e60aa);
    /* 005e60aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e60ab: mov ebp, esp */ r_ebp = r_esp;
    /* 005e60ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e60ae: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e60b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e60b4: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 005e60b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005e60b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e60ba: ret  */ FN_RET(0x005e60aa); r_esp += 4; return;
}

void f_005e60bb(void) /* FUN_005e60bb */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e60bb);
    /* 005e60bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e60bc: mov ebp, esp */ r_ebp = r_esp;
    /* 005e60be: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e60c1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e60c4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e60c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e60c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e60cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e60cc: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005e60d2: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e60d5: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005e60d8: call 0x61c2e5 */ r_esp -= 4; W32(r_esp, 0x5e60ddu); f_0061c2e5();
    /* 005e60dd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e60e4: jmp 0x5e60ef */ goto L_005e60ef;
L_005e60e6:; BB(0x005e60e6);
    /* 005e60e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e60e9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e60ec: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005e60ef:; BB(0x005e60ef);
    /* 005e60ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e60f2: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e60f5: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5e60fau); f_005dd4d2();
    /* 005e60fa: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e60fd: jge 0x5e6123 */ if ((fS==fO)) goto L_005e6123;
L_005e60ff:; BB(0x005e60ff);
    /* 005e60ff: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6102: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6103: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6106: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6109: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5e610eu); f_005dd560();
    /* 005e610e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e6111: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e6114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6115: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6118: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6119: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e611c: call 0x5e0a89 */ r_esp -= 4; W32(r_esp, 0x5e6121u); f_005e0a89();
    /* 005e6121: jmp 0x5e60e6 */ goto L_005e60e6;
L_005e6123:; BB(0x005e6123);
    /* 005e6123: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6125: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6126: ret 8 */ FN_RET(0x005e60bb); r_esp += 12; return;
}

void f_005e6130(void) /* FUN_005e6130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6130);
    /* 005e6130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6131: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6137: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e613a: call 0x5e5902 */ r_esp -= 4; W32(r_esp, 0x5e613fu); f_005e5902();
    /* 005e613f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6142: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e6145: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6147: je 0x5e6155 */ if (fZ) goto L_005e6155;
L_005e6149:; BB(0x005e6149);
    /* 005e6149: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e614c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e614d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5e6152u); f_0048ac1b();
    /* 005e6152: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e6155:; BB(0x005e6155);
    /* 005e6155: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6158: mov esp, ebp */ r_esp = r_ebp;
    /* 005e615a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e615b: ret 4 */ FN_RET(0x005e6130); r_esp += 8; return;
}

void f_005e6160(void) /* FUN_005e6160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6160);
    /* 005e6160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6161: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6167: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e616a: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5e616fu); f_005dfbf0();
    /* 005e616f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6172: mov dword ptr [eax], 0x63be04 */ W32((u32)(r_eax), 0x63be04u);
    /* 005e6178: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e617b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e617e: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 005e6181: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6184: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6188: je 0x5e6196 */ if (fZ) goto L_005e6196;
L_005e618a:; BB(0x005e618a);
    /* 005e618a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e618d: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005e6190: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6193: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_005e6196:; BB(0x005e6196);
    /* 005e6196: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6199: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 005e61a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e61a3: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 005e61aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e61ad: mov dword ptr [eax + 0x18], 0xffffffff */ W32((u32)(r_eax+0x18u), 0xffffffffu);
    /* 005e61b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e61b7: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 005e61be: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e61c1: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 005e61c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e61cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005e61cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e61ce: ret 4 */ FN_RET(0x005e6160); r_esp += 8; return;
}

void f_005e61d1(void) /* FUN_005e61d1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e61d1);
    /* 005e61d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e61d2: mov ebp, esp */ r_ebp = r_esp;
    /* 005e61d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e61d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e61d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e61db: mov dword ptr [eax], 0x63be04 */ W32((u32)(r_eax), 0x63be04u);
    /* 005e61e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e61e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e61e6: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x5e61ebu); f_005e62ca();
    /* 005e61eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e61ee: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e61f2: je 0x5e6214 */ if (fZ) goto L_005e6214;
L_005e61f4:; BB(0x005e61f4);
    /* 005e61f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e61f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e61f9: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e61fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e61ff: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005e6202: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e6204: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5e6207u); call_ind(t); }
    /* 005e6207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e620a: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005e620d: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
L_005e6214:; BB(0x005e6214);
    /* 005e6214: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6217: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e621b: je 0x5e622a */ if (fZ) goto L_005e622a;
L_005e621d:; BB(0x005e621d);
    /* 005e621d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6220: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e6223: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
L_005e622a:; BB(0x005e622a);
    /* 005e622a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e622d: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 005e6234: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6237: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 005e623e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6241: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5e6246u); f_005dfc0f();
    /* 005e6246: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6248: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6249: ret  */ FN_RET(0x005e61d1); r_esp += 4; return;
}

void f_005e624a(void) /* FUN_005e624a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e624a);
    /* 005e624a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e624b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e624d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e624e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6251: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6254: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6257: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005e625a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e625c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e625f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e6261: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6264: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5e6267u); call_ind(t); }
    /* 005e6267: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6269: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e626a: ret 4 */ FN_RET(0x005e624a); r_esp += 8; return;
}

void f_005e626d(void) /* FUN_005e626d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e626d);
    /* 005e626d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e626e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6270: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6271: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6274: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6277: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e627a: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 005e627d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e627f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6280: ret 4 */ FN_RET(0x005e626d); r_esp += 8; return;
}

void f_005e6283(void) /* FUN_005e6283 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6283);
    /* 005e6283: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6284: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6286: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6287: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e628a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e6290: call 0x5d9e7e */ r_esp -= 4; W32(r_esp, 0x5e6295u); f_005d9e7e();
    /* 005e6295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6297: je 0x5e629b */ if (fZ) goto L_005e629b;
L_005e6299:; BB(0x005e6299);
    /* 005e6299: jmp 0x5e62c6 */ goto L_005e62c6;
L_005e629b:; BB(0x005e629b);
    /* 005e629b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e629e: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e62a2: je 0x5e62b1 */ if (fZ) goto L_005e62b1;
L_005e62a4:; BB(0x005e62a4);
    /* 005e62a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e62a7: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e62aa: call 0x5e6283 */ r_esp -= 4; W32(r_esp, 0x5e62afu); f_005e6283();
    /* 005e62af: jmp 0x5e62c6 */ goto L_005e62c6;
L_005e62b1:; BB(0x005e62b1);
    /* 005e62b1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e62b4: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005e62b7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e62ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e62bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e62be: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e62c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e62c3: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5e62c6u); call_ind(t); }
L_005e62c6:; BB(0x005e62c6);
    /* 005e62c6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e62c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e62c9: ret  */ FN_RET(0x005e6283); r_esp += 4; return;
}

void f_005e62ca(void) /* FUN_005e62ca */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e62ca);
    /* 005e62ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e62cb: mov ebp, esp */ r_ebp = r_esp;
    /* 005e62cd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e62d0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e62d3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e62d6: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e62da: je 0x5e6309 */ if (fZ) goto L_005e6309;
L_005e62dc:; BB(0x005e62dc);
    /* 005e62dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e62df: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005e62e2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e62e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e62e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e62eb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e62ef: je 0x5e6302 */ if (fZ) goto L_005e6302;
L_005e62f1:; BB(0x005e62f1);
    /* 005e62f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e62f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e62f6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e62f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e62fb: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e62fdu); call_ind(t); }
    /* 005e62fd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e6300: jmp 0x5e6309 */ goto L_005e6309;
L_005e6302:; BB(0x005e6302);
    /* 005e6302: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005e6309:; BB(0x005e6309);
    /* 005e6309: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e630c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e630f: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005e6312: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6315: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6319: je 0x5e632a */ if (fZ) goto L_005e632a;
L_005e631b:; BB(0x005e631b);
    /* 005e631b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e631e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e631f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6322: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e6325: call 0x5e624a */ r_esp -= 4; W32(r_esp, 0x5e632au); f_005e624a();
L_005e632a:; BB(0x005e632a);
    /* 005e632a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e632c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e632d: ret 4 */ FN_RET(0x005e62ca); r_esp += 8; return;
}

void f_005e6330(void) /* FUN_005e6330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6330);
    /* 005e6330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6331: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6337: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e633a: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e633d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e633e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6341: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e6343: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6346: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5e6349u); call_ind(t); }
    /* 005e6349: mov esp, ebp */ r_esp = r_ebp;
    /* 005e634b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e634c: ret 4 */ FN_RET(0x005e6330); r_esp += 8; return;
}

void f_005e634f(void) /* FUN_005e634f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e634f);
    /* 005e634f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6350: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6352: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6353: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6356: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e635c: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5e6361u); f_005d9e23();
    /* 005e6361: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6364: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6367: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 005e636a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e636c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e636d: ret 4 */ FN_RET(0x005e634f); r_esp += 8; return;
}

void f_005e6370(void) /* FUN_005e6370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6370);
    /* 005e6370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6371: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6377: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e637a: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 005e6381: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6383: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6384: ret  */ FN_RET(0x005e6370); r_esp += 4; return;
}

void f_005e6385(void) /* FUN_005e6385 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6385);
    /* 005e6385: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6386: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6388: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6389: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e638c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e638f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6392: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 005e6395: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6397: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6398: ret 4 */ FN_RET(0x005e6385); r_esp += 8; return;
}

void f_005e639b(void) /* FUN_005e639b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e639b);
    /* 005e639b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e639c: mov ebp, esp */ r_ebp = r_esp;
    /* 005e639e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e639f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e63a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e63a5: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e63a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e63ab: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 005e63ae: mov esp, ebp */ r_esp = r_ebp;
    /* 005e63b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e63b1: ret 4 */ FN_RET(0x005e639b); r_esp += 8; return;
}

void f_005e63b4(void) /* FUN_005e63b4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e63b4);
    /* 005e63b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e63b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005e63b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e63b8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e63bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e63be: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 005e63c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005e63c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e63c4: ret  */ FN_RET(0x005e63b4); r_esp += 4; return;
}

void f_005e63c5(void) /* FUN_005e63c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e63c5);
    /* 005e63c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e63c6: mov ebp, esp */ r_ebp = r_esp;
    /* 005e63c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e63c9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e63cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e63cf: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e63d3: je 0x5e63e2 */ if (fZ) goto L_005e63e2;
L_005e63d5:; BB(0x005e63d5);
    /* 005e63d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e63d8: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005e63db: call 0x5e63c5 */ r_esp -= 4; W32(r_esp, 0x5e63e0u); f_005e63c5();
    /* 005e63e0: jmp 0x5e6410 */ goto L_005e6410;
L_005e63e2:; BB(0x005e63e2);
    /* 005e63e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e63e5: cmp dword ptr [edx + 0x1c], 0 */ {  u32 a = R32((u32)(r_edx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e63e9: je 0x5e6410 */ if (fZ) goto L_005e6410;
L_005e63eb:; BB(0x005e63eb);
    /* 005e63eb: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005e63f1: call 0x5d9e23 */ r_esp -= 4; W32(r_esp, 0x5e63f6u); f_005d9e23();
    /* 005e63f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e63f9: cmp eax, dword ptr [ecx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e63fc: jl 0x5e6410 */ if ((fS!=fO)) goto L_005e6410;
L_005e63fe:; BB(0x005e63fe);
    /* 005e63fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6401: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 005e6408: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e640b: call 0x5e6283 */ r_esp -= 4; W32(r_esp, 0x5e6410u); f_005e6283();
L_005e6410:; BB(0x005e6410);
    /* 005e6410: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6412: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6413: ret  */ FN_RET(0x005e63c5); r_esp += 4; return;
}

void f_005e6420(void) /* FUN_005e6420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6420);
    /* 005e6420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6421: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e642a: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5e642fu); f_005d5d20();
    /* 005e642f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6432: mov dword ptr [eax], 0x63be1c */ W32((u32)(r_eax), 0x63be1cu);
    /* 005e6438: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e643b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e643e: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 005e6444: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6447: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e644a: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 005e6450: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6453: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6455: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6456: ret 8 */ FN_RET(0x005e6420); r_esp += 12; return;
}

void f_005e6459(void) /* FUN_005e6459 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6459);
    /* 005e6459: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e645a: mov ebp, esp */ r_ebp = r_esp;
    /* 005e645c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e645d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6460: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6463: mov dword ptr [eax], 0x63be1c */ W32((u32)(r_eax), 0x63be1cu);
    /* 005e6469: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e646c: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5e6471u); f_005d5dfb();
    /* 005e6471: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6473: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6474: ret  */ FN_RET(0x005e6459); r_esp += 4; return;
}

void f_005e6475(void) /* FUN_005e6475 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6475);
    /* 005e6475: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6476: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6478: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6479: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e647c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e647e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6481: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 005e6487: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6488: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e648b: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 005e6491: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6494: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 005e649a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e649c: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5e649fu); call_ind(t); }
    /* 005e649f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e64a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e64a2: ret  */ FN_RET(0x005e6475); r_esp += 4; return;
}

void f_005e64a3(void) /* FUN_005e64a3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e64a3);
    /* 005e64a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e64a4: mov ebp, esp */ r_ebp = r_esp;
    /* 005e64a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e64a7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e64aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e64ad: call 0x5d4d90 */ r_esp -= 4; W32(r_esp, 0x5e64b2u); f_005d4d90();
    /* 005e64b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e64b5: mov dword ptr [eax], 0x63be8c */ W32((u32)(r_eax), 0x63be8cu);
    /* 005e64bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e64be: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e64c1: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 005e64c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e64ca: mov dword ptr [eax + 0x88], 0 */ W32((u32)(r_eax+0x88u), 0x0u);
    /* 005e64d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e64d7: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 005e64e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e64e4: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 005e64ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e64f1: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 005e64fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e64fe: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 005e6508: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e650b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e650e: ret 4 */ FN_RET(0x005e64a3); r_esp += 8; return;
}

void f_005e6511(void) /* FUN_005e6511 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6511);
    /* 005e6511: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6512: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6514: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6515: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6518: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e651b: mov dword ptr [eax], 0x63be8c */ W32((u32)(r_eax), 0x63be8cu);
    /* 005e6521: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6524: call 0x5d4dd0 */ r_esp -= 4; W32(r_esp, 0x5e6529u); f_005d4dd0();
    /* 005e6529: mov esp, ebp */ r_esp = r_ebp;
    /* 005e652b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e652c: ret  */ FN_RET(0x005e6511); r_esp += 4; return;
}

void f_005e652d(void) /* FUN_005e652d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e652d);
    /* 005e652d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e652e: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6530: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6531: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6534: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6537: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e653a: mov dword ptr [eax + 0x94], ecx */ W32((u32)(r_eax+0x94u), r_ecx);
    /* 005e6540: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6543: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e6546: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 005e654c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e654e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e654f: ret 8 */ FN_RET(0x005e652d); r_esp += 12; return;
}

void f_005e6552(void) /* FUN_005e6552 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6552);
    /* 005e6552: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6553: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6556: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6559: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e655c: mov eax, dword ptr [eax + 0x94] */ r_eax = R32((u32)(r_eax+0x94u));
    /* 005e6562: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6564: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6565: ret  */ FN_RET(0x005e6552); r_esp += 4; return;
}

void f_005e6566(void) /* FUN_005e6566 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6566);
    /* 005e6566: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6567: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6569: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e656a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e656d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6570: mov eax, dword ptr [eax + 0x98] */ r_eax = R32((u32)(r_eax+0x98u));
    /* 005e6576: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6578: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6579: ret  */ FN_RET(0x005e6566); r_esp += 4; return;
}

void f_005e657a(void) /* FUN_005e657a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e657a);
    /* 005e657a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e657b: mov ebp, esp */ r_ebp = r_esp;
    /* 005e657d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6580: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6583: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6586: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6587: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e658a: call 0x5d9738 */ r_esp -= 4; W32(r_esp, 0x5e658fu); f_005d9738();
    /* 005e658f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6591: jne 0x5e659f */ if (!fZ) goto L_005e659f;
L_005e6593:; BB(0x005e6593);
    /* 005e6593: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6596: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e659d: je 0x5e65a8 */ if (fZ) goto L_005e65a8;
L_005e659f:; BB(0x005e659f);
    /* 005e659f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e65a2: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e65a6: je 0x5e65af */ if (fZ) goto L_005e65af;
L_005e65a8:; BB(0x005e65a8);
    /* 005e65a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e65aa: jmp 0x5e687c */ goto L_005e687c;
L_005e65af:; BB(0x005e65af);
    /* 005e65af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e65b2: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005e65b5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e65b8: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e65bc: je 0x5e65d7 */ if (fZ) goto L_005e65d7;
L_005e65be:; BB(0x005e65be);
    /* 005e65be: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e65c2: je 0x5e6834 */ if (fZ) goto L_005e6834;
L_005e65c8:; BB(0x005e65c8);
    /* 005e65c8: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e65cc: je 0x5e66a9 */ if (fZ) goto L_005e66a9;
L_005e65d2:; BB(0x005e65d2);
    /* 005e65d2: jmp 0x5e6876 */ goto L_005e6876;
L_005e65d7:; BB(0x005e65d7);
    /* 005e65d7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e65da: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005e65dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e65de: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e65e1: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e65e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e65e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e65e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e65ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e65ed: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5e65f0u); call_ind(t); }
    /* 005e65f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e65f2: je 0x5e660b */ if (fZ) goto L_005e660b;
L_005e65f4:; BB(0x005e65f4);
    /* 005e65f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e65f7: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005e65fa: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e65fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e65ff: je 0x5e660b */ if (fZ) goto L_005e660b;
L_005e6601:; BB(0x005e6601);
    /* 005e6601: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6604: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
L_005e660b:; BB(0x005e660b);
    /* 005e660b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e660e: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005e6611: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6612: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6615: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005e6618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6619: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e661c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e661e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6621: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5e6624u); call_ind(t); }
    /* 005e6624: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6626: je 0x5e66a4 */ if (fZ) goto L_005e66a4;
L_005e6628:; BB(0x005e6628);
    /* 005e6628: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e662b: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005e662e: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6631: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6633: je 0x5e66a4 */ if (fZ) goto L_005e66a4;
L_005e6635:; BB(0x005e6635);
    /* 005e6635: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6638: cmp dword ptr [edx + 0x88], 0 */ {  u32 a = R32((u32)(r_edx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e663f: jne 0x5e66a4 */ if (!fZ) goto L_005e66a4;
L_005e6641:; BB(0x005e6641);
    /* 005e6641: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6644: mov dword ptr [eax + 0x88], 1 */ W32((u32)(r_eax+0x88u), 0x1u);
    /* 005e664e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6651: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 005e6658: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e665b: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 005e6661: call 0x5e728a */ r_esp -= 4; W32(r_esp, 0x5e6666u); f_005e728a();
    /* 005e6666: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6668: jne 0x5e6688 */ if (!fZ) goto L_005e6688;
L_005e666a:; BB(0x005e666a);
    /* 005e666a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e666d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e666f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6672: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e6675u); call_ind(t); }
    /* 005e6675: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6678: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005e667b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e667d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6680: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 005e6686: jmp 0x5e66a4 */ goto L_005e66a4;
L_005e6688:; BB(0x005e6688);
    /* 005e6688: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e668b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e668d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6690: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e6693u); call_ind(t); }
    /* 005e6693: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6696: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005e6699: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e669b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e669e: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
L_005e66a4:; BB(0x005e66a4);
    /* 005e66a4: jmp 0x5e6876 */ goto L_005e6876;
L_005e66a9:; BB(0x005e66a9);
    /* 005e66a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e66ac: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e66b3: je 0x5e6832 */ if (fZ) goto L_005e6832;
L_005e66b9:; BB(0x005e66b9);
    /* 005e66b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e66bc: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 005e66c2: call 0x5e728a */ r_esp -= 4; W32(r_esp, 0x5e66c7u); f_005e728a();
    /* 005e66c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e66c9: jne 0x5e6775 */ if (!fZ) goto L_005e6775;
L_005e66cf:; BB(0x005e66cf);
    /* 005e66cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e66d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e66d5: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005e66d8: sub edx, dword ptr [ecx + 0x90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x90u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e66de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e66e1: cmp edx, dword ptr [eax + 0x94] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x94u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e66e7: jge 0x5e670c */ if ((fS==fO)) goto L_005e670c;
L_005e66e9:; BB(0x005e66e9);
    /* 005e66e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e66ec: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 005e66f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e66f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e66f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e66f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e66fb: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e66feu); call_ind(t); }
    /* 005e66fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e66ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6702: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6704: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6707: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e670au); call_ind(t); }
    /* 005e670a: jmp 0x5e6770 */ goto L_005e6770;
L_005e670c:; BB(0x005e670c);
    /* 005e670c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e670f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6712: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005e6715: sub edx, dword ptr [ecx + 0x90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x90u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e671b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e671e: cmp edx, dword ptr [eax + 0x98] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6724: jle 0x5e6749 */ if ((fZ||fS!=fO)) goto L_005e6749;
L_005e6726:; BB(0x005e6726);
    /* 005e6726: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6729: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 005e672f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6730: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6733: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6735: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6738: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e673bu); call_ind(t); }
    /* 005e673b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e673c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e673f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6741: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6744: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6747u); call_ind(t); }
    /* 005e6747: jmp 0x5e6770 */ goto L_005e6770;
L_005e6749:; BB(0x005e6749);
    /* 005e6749: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e674c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e674f: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005e6752: sub edx, dword ptr [ecx + 0x90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x90u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e6758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6759: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e675c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e675e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6761: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5e6764u); call_ind(t); }
    /* 005e6764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6765: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6768: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e676a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e676d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6770u); call_ind(t); }
L_005e6770:; BB(0x005e6770);
    /* 005e6770: jmp 0x5e6816 */ goto L_005e6816;
L_005e6775:; BB(0x005e6775);
    /* 005e6775: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6778: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e677b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005e677e: sub edx, dword ptr [ecx + 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e6784: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6787: cmp edx, dword ptr [eax + 0x94] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x94u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e678d: jge 0x5e67b2 */ if ((fS==fO)) goto L_005e67b2;
L_005e678f:; BB(0x005e678f);
    /* 005e678f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6792: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e6794: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6797: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e679au); call_ind(t); }
    /* 005e679a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e679b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e679e: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 005e67a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e67a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e67a8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e67aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e67ad: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5e67b0u); call_ind(t); }
    /* 005e67b0: jmp 0x5e6816 */ goto L_005e6816;
L_005e67b2:; BB(0x005e67b2);
    /* 005e67b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e67b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e67b8: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005e67bb: sub eax, dword ptr [edx + 0x8c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e67c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e67c4: cmp eax, dword ptr [ecx + 0x98] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e67ca: jle 0x5e67ef */ if ((fZ||fS!=fO)) goto L_005e67ef;
L_005e67cc:; BB(0x005e67cc);
    /* 005e67cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e67cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e67d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e67d4: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5e67d7u); call_ind(t); }
    /* 005e67d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e67d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e67db: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 005e67e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e67e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e67e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e67e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e67ea: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e67edu); call_ind(t); }
    /* 005e67ed: jmp 0x5e6816 */ goto L_005e6816;
L_005e67ef:; BB(0x005e67ef);
    /* 005e67ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e67f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e67f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e67f7: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5e67fau); call_ind(t); }
    /* 005e67fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e67fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e67fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6801: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005e6804: sub edx, dword ptr [ecx + 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e680a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e680b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e680e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6810: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6813: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5e6816u); call_ind(t); }
L_005e6816:; BB(0x005e6816);
    /* 005e6816: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6819: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e681a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e681d: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 005e6823: call 0x5e7431 */ r_esp -= 4; W32(r_esp, 0x5e6828u); f_005e7431();
    /* 005e6828: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e682b: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
L_005e6832:; BB(0x005e6832);
    /* 005e6832: jmp 0x5e6876 */ goto L_005e6876;
L_005e6834:; BB(0x005e6834);
    /* 005e6834: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6837: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005e683a: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e683d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e683f: je 0x5e6876 */ if (fZ) goto L_005e6876;
L_005e6841:; BB(0x005e6841);
    /* 005e6841: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6844: cmp dword ptr [edx + 0x88], 0 */ {  u32 a = R32((u32)(r_edx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e684b: je 0x5e6876 */ if (fZ) goto L_005e6876;
L_005e684d:; BB(0x005e684d);
    /* 005e684d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6851: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6854: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 005e685a: call 0x5e7431 */ r_esp -= 4; W32(r_esp, 0x5e685fu); f_005e7431();
    /* 005e685f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6862: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
    /* 005e686c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e686f: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_005e6876:; BB(0x005e6876);
    /* 005e6876: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6879: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
L_005e687c:; BB(0x005e687c);
    /* 005e687c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e687e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e687f: ret 4 */ FN_RET(0x005e657a); r_esp += 8; return;
}

