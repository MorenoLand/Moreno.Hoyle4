#include "protos.h"

void f_005c6e6d(void) /* FUN_005c6e6d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6e6d);
    /* 005c6e6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e6e: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6e70: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6e73: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c6e76: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6e79: call 0x5e59db */ r_esp -= 4; W32(r_esp, 0x5c6e7eu); f_005e59db();
    /* 005c6e7e: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e80: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6e85u); f_0048ab58();
    /* 005c6e85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6e88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c6e8b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6e8f: je 0x5c6e9e */ if (fZ) goto L_005c6e9e;
L_005c6e91:; BB(0x005c6e91);
    /* 005c6e91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c6e94: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5c6e99u); f_005e9d30();
    /* 005c6e99: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c6e9c: jmp 0x5c6ea5 */ goto L_005c6ea5;
L_005c6e9e:; BB(0x005c6e9e);
    /* 005c6e9e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005c6ea5:; BB(0x005c6ea5);
    /* 005c6ea5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6ea8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6eab: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 005c6eae: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6eb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6eb2: push 0x2a3 */ { u32 v = 0x2a3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6eb7: push 0x50a */ { u32 v = 0x50au; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ebc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6ebf: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005c6ec2: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x5c6ec7u); f_005e9f50();
    /* 005c6ec7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6eca: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c6ecd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6ed0: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c6ed3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6ed5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c6ed8u); call_ind(t); }
    /* 005c6ed8: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6eda: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6edfu); f_0048ab58();
    /* 005c6edf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6ee2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c6ee5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6ee9: je 0x5c6ef8 */ if (fZ) goto L_005c6ef8;
L_005c6eeb:; BB(0x005c6eeb);
    /* 005c6eeb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c6eee: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5c6ef3u); f_005e3fb0();
    /* 005c6ef3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c6ef6: jmp 0x5c6eff */ goto L_005c6eff;
L_005c6ef8:; BB(0x005c6ef8);
    /* 005c6ef8: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005c6eff:; BB(0x005c6eff);
    /* 005c6eff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6f02: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c6f05: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 005c6f08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f0a: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f0f: push 0x285 */ { u32 v = 0x285u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f14: push 0x50d */ { u32 v = 0x50du; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f19: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6f1c: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005c6f1f: call 0x5e9f50 */ r_esp -= 4; W32(r_esp, 0x5c6f24u); f_005e9f50();
    /* 005c6f24: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6f27: call 0x5c6fe6 */ r_esp -= 4; W32(r_esp, 0x5c6f2cu); f_005c6fe6();
    /* 005c6f2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6f30: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6f33: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c6f38u); f_005ea0c3();
    /* 005c6f38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6f3b: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005c6f3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6f41: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c6f44: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6f46: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c6f49u); call_ind(t); }
    /* 005c6f49: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6f4c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6f4f: mov dword ptr [ecx + 0x6c], 4 */ W32((u32)(r_ecx+0x6cu), 0x4u);
    /* 005c6f56: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f58: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6f5du); f_0048ab58();
    /* 005c6f5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6f60: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c6f63: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6f67: je 0x5c6f78 */ if (fZ) goto L_005c6f78;
L_005c6f69:; BB(0x005c6f69);
    /* 005c6f69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6f6e: call 0x5d7698 */ r_esp -= 4; W32(r_esp, 0x5c6f73u); f_005d7698();
    /* 005c6f73: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c6f76: jmp 0x5c6f7f */ goto L_005c6f7f;
L_005c6f78:; BB(0x005c6f78);
    /* 005c6f78: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005c6f7f:; BB(0x005c6f7f);
    /* 005c6f7f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6f82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f83: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6f86: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c6f89: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5c6f8eu); f_005e4060();
    /* 005c6f8e: push 0x18e71 */ { u32 v = 0x18e71u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f93: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005c6f99: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005c6f9c: call 0x6003da */ r_esp -= 4; W32(r_esp, 0x5c6fa1u); f_006003da();
    /* 005c6fa1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6fa3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c6fa8u); f_0048ab58();
    /* 005c6fa8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6fab: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c6fae: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6fb2: je 0x5c6fcf */ if (fZ) goto L_005c6fcf;
L_005c6fb4:; BB(0x005c6fb4);
    /* 005c6fb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6fb6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6fb9: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5c6fbeu); f_005e6160();
    /* 005c6fbe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6fc1: mov dword ptr [edx], 0x63abd4 */ W32((u32)(r_edx), 0x63abd4u);
    /* 005c6fc7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c6fca: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c6fcd: jmp 0x5c6fd6 */ goto L_005c6fd6;
L_005c6fcf:; BB(0x005c6fcf);
    /* 005c6fcf: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c6fd6:; BB(0x005c6fd6);
    /* 005c6fd6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c6fd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6fda: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6fdd: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x5c6fe2u); f_005e5d66();
    /* 005c6fe2: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6fe4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6fe5: ret  */ FN_RET(0x005c6e6d); r_esp += 4; return;
}

void f_005c6fe6(void) /* FUN_005c6fe6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6fe6);
    /* 005c6fe6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6fe7: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6fe9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6fec: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c6fef: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ff1: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c6ff6u); f_0060ee31();
    /* 005c6ff6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6ff9: add eax, 0x50b */ {  u32 a = r_eax; u32 b = 0x50bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6ffe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c7001:; BB(0x005c7001);
    /* 005c7001: cmp dword ptr [ebp - 4], 0x515 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x515u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7008: je 0x5c701a */ if (fZ) goto L_005c701a;
L_005c700a:; BB(0x005c700a);
    /* 005c700a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c700d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c7010: call 0x5ea279 */ r_esp -= 4; W32(r_esp, 0x5c7015u); f_005ea279();
    /* 005c7015: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7018: jne 0x5c702e */ if (!fZ) goto L_005c702e;
L_005c701a:; BB(0x005c701a);
    /* 005c701a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005c701c: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c7021u); f_0060ee31();
    /* 005c7021: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7024: add eax, 0x50b */ {  u32 a = r_eax; u32 b = 0x50bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7029: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c702c: jmp 0x5c7001 */ goto L_005c7001;
L_005c702e:; BB(0x005c702e);
    /* 005c702e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7031: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7034: ret  */ FN_RET(0x005c6fe6); r_esp += 4; return;
}

void f_005c7035(void) /* FUN_005c7035 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7035);
    /* 005c7035: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7036: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7038: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c703b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c703e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c7041: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7045: jne 0x5c7093 */ if (!fZ) goto L_005c7093;
L_005c7047:; BB(0x005c7047);
    /* 005c7047: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7049: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c704c: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c704f: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5c7054u); f_005dd560();
    /* 005c7054: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c7057: cmp dword ptr [ecx + 0x20], eax */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c705a: jne 0x5c7093 */ if (!fZ) goto L_005c7093;
L_005c705c:; BB(0x005c705c);
    /* 005c705c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c705f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005c7062: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c7065: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7069: je 0x5c7073 */ if (fZ) goto L_005c7073;
L_005c706b:; BB(0x005c706b);
    /* 005c706b: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c706f: je 0x5c7073 */ if (fZ) goto L_005c7073;
L_005c7071:; BB(0x005c7071);
    /* 005c7071: jmp 0x5c7093 */ goto L_005c7093;
L_005c7073:; BB(0x005c7073);
    /* 005c7073: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7078: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c707e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c7080: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c7086: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c7089u); call_ind(t); }
    /* 005c7089: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c708c: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_005c7093:; BB(0x005c7093);
    /* 005c7093: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c7096: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7097: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c709a: call 0x5e5b67 */ r_esp -= 4; W32(r_esp, 0x5c709fu); f_005e5b67();
    /* 005c709f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c70a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c70a2: ret 4 */ FN_RET(0x005c7035); r_esp += 8; return;
}

void f_005c70b0(void) /* FUN_005c70b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c70b0);
    /* 005c70b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c70b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c70b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c70b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c70b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c70ba: call 0x5c6af5 */ r_esp -= 4; W32(r_esp, 0x5c70bfu); f_005c6af5();
    /* 005c70bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c70c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c70c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c70c7: je 0x5c70d5 */ if (fZ) goto L_005c70d5;
L_005c70c9:; BB(0x005c70c9);
    /* 005c70c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c70cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c70cd: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c70d2u); f_0048ac1b();
    /* 005c70d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c70d5:; BB(0x005c70d5);
    /* 005c70d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c70d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c70da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c70db: ret 4 */ FN_RET(0x005c70b0); r_esp += 8; return;
}

void f_005c70e0(void) /* FUN_005c70e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c70e0);
    /* 005c70e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c70e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c70e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c70e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c70e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c70ec: call 0x5e58b0 */ r_esp -= 4; W32(r_esp, 0x5c70f1u); f_005e58b0();
    /* 005c70f1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c70f4: mov dword ptr [eax], 0x63abec */ W32((u32)(r_eax), 0x63abecu);
    /* 005c70fa: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7101: je 0x5c713a */ if (fZ) goto L_005c713a;
L_005c7103:; BB(0x005c7103);
    /* 005c7103: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7109: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c710c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c710f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c7112: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7116: je 0x5c7129 */ if (fZ) goto L_005c7129;
L_005c7118:; BB(0x005c7118);
    /* 005c7118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c711a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c711d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c711f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7122: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c7124u); call_ind(t); }
    /* 005c7124: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c7127: jmp 0x5c7130 */ goto L_005c7130;
L_005c7129:; BB(0x005c7129);
    /* 005c7129: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005c7130:; BB(0x005c7130);
    /* 005c7130: mov dword ptr [0x6fc470], 0 */ W32((u32)(0x6fc470u), 0x0u);
L_005c713a:; BB(0x005c713a);
    /* 005c713a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c713c: push 0x698688 */ { u32 v = 0x698688u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7141: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005c7146: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005c7149: call 0x61ba62 */ r_esp -= 4; W32(r_esp, 0x5c714eu); f_0061ba62();
    /* 005c714e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c7151: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7154: mov edx, dword ptr [ecx*4 + 0x698678] */ r_edx = R32((u32)(r_ecx*4+0x698678u));
    /* 005c715b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c715c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c715f: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c7164u); f_005e5ec3();
    /* 005c7164: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7167: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c716a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c716d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7170: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c7171: idiv dword ptr [0x698684] */ { i32 d = (i32)R32((u32)(0x698684u)); if (!d) UNSUP(0x005c7171, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c7171, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c7177: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c717a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c717d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c717e: push 0x698694 */ { u32 v = 0x698694u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7183: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005c7189: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005c718c: call 0x61baba */ r_esp -= 4; W32(r_esp, 0x5c7191u); f_0061baba();
    /* 005c7191: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7193: call 0x60eebe */ r_esp -= 4; W32(r_esp, 0x5c7198u); f_0060eebe();
    /* 005c7198: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c719b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c719e: mov esp, ebp */ r_esp = r_ebp;
    /* 005c71a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c71a1: ret  */ FN_RET(0x005c70e0); r_esp += 4; return;
}

void f_005c71a2(void) /* FUN_005c71a2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c71a2);
    /* 005c71a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c71a3: mov ebp, esp */ r_ebp = r_esp;
    /* 005c71a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c71a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c71a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c71ac: mov dword ptr [eax], 0x63abec */ W32((u32)(r_eax), 0x63abecu);
    /* 005c71b2: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005c71b8: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c71bb: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c71be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c71bf: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005c71c4: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c71c7: mov edx, dword ptr [0x6f6ee8] */ r_edx = R32((u32)(0x6f6ee8u));
    /* 005c71cd: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c71d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c71d2: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c71d5u); call_ind(t); }
    /* 005c71d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c71d8: call 0x5e5902 */ r_esp -= 4; W32(r_esp, 0x5c71ddu); f_005e5902();
    /* 005c71dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005c71df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c71e0: ret  */ FN_RET(0x005c71a2); r_esp += 4; return;
}

void f_005c71e1(void) /* FUN_005c71e1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c71e1);
    /* 005c71e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c71e2: mov ebp, esp */ r_ebp = r_esp;
    /* 005c71e4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c71e7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c71ea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c71ed: call 0x5e59db */ r_esp -= 4; W32(r_esp, 0x5c71f2u); f_005e59db();
    /* 005c71f2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c71f4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c71f9u); f_0048ab58();
    /* 005c71f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c71fc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c71ff: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7203: je 0x5c7220 */ if (fZ) goto L_005c7220;
L_005c7205:; BB(0x005c7205);
    /* 005c7205: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c720a: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5c720fu); f_005e6160();
    /* 005c720f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7212: mov dword ptr [eax], 0x63ac0c */ W32((u32)(r_eax), 0x63ac0cu);
    /* 005c7218: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c721b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c721e: jmp 0x5c7227 */ goto L_005c7227;
L_005c7220:; BB(0x005c7220);
    /* 005c7220: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005c7227:; BB(0x005c7227);
    /* 005c7227: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c722a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c722b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c722e: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x5c7233u); f_005e5d66();
    /* 005c7233: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7235: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7236: ret  */ FN_RET(0x005c71e1); r_esp += 4; return;
}

void f_005c7237(void) /* FUN_005c7237 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7237);
    /* 005c7237: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7238: mov ebp, esp */ r_ebp = r_esp;
    /* 005c723a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c723b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c723e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c7241: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7245: je 0x5c7250 */ if (fZ) goto L_005c7250;
L_005c7247:; BB(0x005c7247);
    /* 005c7247: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c724a: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c724e: jne 0x5c7263 */ if (!fZ) goto L_005c7263;
L_005c7250:; BB(0x005c7250);
    /* 005c7250: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7252: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7255: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c7258: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c725b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c725e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c7260: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5c7263u); call_ind(t); }
L_005c7263:; BB(0x005c7263);
    /* 005c7263: mov eax, 1 */ r_eax = 0x1u;
    /* 005c7268: mov esp, ebp */ r_esp = r_ebp;
    /* 005c726a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c726b: ret 4 */ FN_RET(0x005c7237); r_esp += 8; return;
}

void f_005c7270(void) /* FUN_005c7270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7270);
    /* 005c7270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7271: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c7277: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c727a: call 0x5c71a2 */ r_esp -= 4; W32(r_esp, 0x5c727fu); f_005c71a2();
    /* 005c727f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c7282: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c7285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7287: je 0x5c7295 */ if (fZ) goto L_005c7295;
L_005c7289:; BB(0x005c7289);
    /* 005c7289: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c728c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c728d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c7292u); f_0048ac1b();
    /* 005c7292: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c7295:; BB(0x005c7295);
    /* 005c7295: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7298: mov esp, ebp */ r_esp = r_ebp;
    /* 005c729a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c729b: ret 4 */ FN_RET(0x005c7270); r_esp += 8; return;
}

void f_005c72a0(void) /* FUN_005c72a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c72a0);
    /* 005c72a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c72a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c72a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c72a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c72a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c72ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c72ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c72b0: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5c72b5u); f_005e626d();
    /* 005c72b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c72b8: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005c72bb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c72be: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c72c2: je 0x5c72d2 */ if (fZ) goto L_005c72d2;
L_005c72c4:; BB(0x005c72c4);
    /* 005c72c4: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c72c8: je 0x5c72e1 */ if (fZ) goto L_005c72e1;
L_005c72ca:; BB(0x005c72ca);
    /* 005c72ca: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c72ce: je 0x5c72ed */ if (fZ) goto L_005c72ed;
L_005c72d0:; BB(0x005c72d0);
    /* 005c72d0: jmp 0x5c72fa */ goto L_005c72fa;
L_005c72d2:; BB(0x005c72d2);
    /* 005c72d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c72d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c72d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c72d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c72dc: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c72dfu); call_ind(t); }
    /* 005c72df: jmp 0x5c72fa */ goto L_005c72fa;
L_005c72e1:; BB(0x005c72e1);
    /* 005c72e1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c72e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c72e6: call 0x5e6330 */ r_esp -= 4; W32(r_esp, 0x5c72ebu); f_005e6330();
    /* 005c72eb: jmp 0x5c72fa */ goto L_005c72fa;
L_005c72ed:; BB(0x005c72ed);
    /* 005c72ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c72ef: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c72f5: call 0x45b98a */ r_esp -= 4; W32(r_esp, 0x5c72fau); f_0045b98a();
L_005c72fa:; BB(0x005c72fa);
    /* 005c72fa: mov esp, ebp */ r_esp = r_ebp;
    /* 005c72fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c72fd: ret 4 */ FN_RET(0x005c72a0); r_esp += 8; return;
}

void f_005c7300(void) /* FUN_005c7300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7300);
    /* 005c7300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7301: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c7307: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c730a: call 0x5e58b0 */ r_esp -= 4; W32(r_esp, 0x5c730fu); f_005e58b0();
    /* 005c730f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7312: mov dword ptr [eax], 0x63ac24 */ W32((u32)(r_eax), 0x63ac24u);
    /* 005c7318: push 0x270e */ { u32 v = 0x270eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c731d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7320: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c7325u); f_005e5ec3();
    /* 005c7325: mov dword ptr [0x6fc0b4], 0 */ W32((u32)(0x6fc0b4u), 0x0u);
    /* 005c732f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7332: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7334: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7335: ret  */ FN_RET(0x005c7300); r_esp += 4; return;
}

void f_005c7336(void) /* FUN_005c7336 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7336);
    /* 005c7336: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7337: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7339: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c733a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c733d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7340: mov dword ptr [eax], 0x63ac24 */ W32((u32)(r_eax), 0x63ac24u);
    /* 005c7346: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005c734c: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c734f: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005c7352: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7353: call 0x5c757b */ r_esp -= 4; W32(r_esp, 0x5c7358u); f_005c757b();
    /* 005c7358: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c735b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c735e: call 0x5e5902 */ r_esp -= 4; W32(r_esp, 0x5c7363u); f_005e5902();
    /* 005c7363: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7365: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7366: ret  */ FN_RET(0x005c7336); r_esp += 4; return;
}

void f_005c7367(void) /* FUN_005c7367 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7367);
    /* 005c7367: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7368: mov ebp, esp */ r_ebp = r_esp;
    /* 005c736a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c736d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c7370: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7373: call 0x5e59db */ r_esp -= 4; W32(r_esp, 0x5c7378u); f_005e59db();
    /* 005c7378: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c737b: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c737e: call 0x5dd4d2 */ r_esp -= 4; W32(r_esp, 0x5c7383u); f_005dd4d2();
    /* 005c7383: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7385: je 0x5c73bf */ if (fZ) goto L_005c73bf;
L_005c7387:; BB(0x005c7387);
    /* 005c7387: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c738b: mov byte ptr [ebp - 3], 0 */ W8((u32)(r_ebp+0xfffffffdu), 0x0u);
    /* 005c738f: mov byte ptr [ebp - 2], 0 */ W8((u32)(r_ebp+0xfffffffeu), 0x0u);
    /* 005c7393: mov byte ptr [ebp - 1], 0xff */ W8((u32)(r_ebp+0xffffffffu), 0xffu);
    /* 005c7397: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7399: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c739c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c739d: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c73a2: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 005c73a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c73a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c73ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c73ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c73b0: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c73b3: call 0x5dd560 */ r_esp -= 4; W32(r_esp, 0x5c73b8u); f_005dd560();
    /* 005c73b8: mov ecx, eax */ r_ecx = r_eax;
    /* 005c73ba: call 0x5e09b2 */ r_esp -= 4; W32(r_esp, 0x5c73bfu); f_005e09b2();
L_005c73bf:; BB(0x005c73bf);
    /* 005c73bf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c73c1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c73c6u); f_0048ab58();
    /* 005c73c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c73c9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c73cc: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c73d0: je 0x5c73ed */ if (fZ) goto L_005c73ed;
L_005c73d2:; BB(0x005c73d2);
    /* 005c73d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c73d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c73d7: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5c73dcu); f_005e6160();
    /* 005c73dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c73df: mov dword ptr [ecx], 0x63ac44 */ W32((u32)(r_ecx), 0x63ac44u);
    /* 005c73e5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c73e8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005c73eb: jmp 0x5c73f4 */ goto L_005c73f4;
L_005c73ed:; BB(0x005c73ed);
    /* 005c73ed: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005c73f4:; BB(0x005c73f4);
    /* 005c73f4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c73f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c73f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c73fb: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x5c7400u); f_005e5d66();
    /* 005c7400: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7403: ret  */ FN_RET(0x005c7367); r_esp += 4; return;
}

void f_005c7404(void) /* FUN_005c7404 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7404);
    /* 005c7404: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7405: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7407: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7408: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c740b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c740e: cmp dword ptr [eax + 0x18], 2 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7412: jne 0x5c741e */ if (!fZ) goto L_005c741e;
L_005c7414:; BB(0x005c7414);
    /* 005c7414: mov dword ptr [0x6fc0b4], 1 */ W32((u32)(0x6fc0b4u), 0x1u);
L_005c741e:; BB(0x005c741e);
    /* 005c741e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c7421: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7425: jne 0x5c7431 */ if (!fZ) goto L_005c7431;
L_005c7427:; BB(0x005c7427);
    /* 005c7427: mov dword ptr [0x6fc0b4], 1 */ W32((u32)(0x6fc0b4u), 0x1u);
L_005c7431:; BB(0x005c7431);
    /* 005c7431: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c7433: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7435: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7436: ret 4 */ FN_RET(0x005c7404); r_esp += 8; return;
}

void f_005c7439(void) /* FUN_005c7439 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7439);
    /* 005c7439: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c743a: mov ebp, esp */ r_ebp = r_esp;
    /* 005c743c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c743f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005c7446: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005c744d: mov dword ptr [ebp - 0x14], 0x6986d4 */ W32((u32)(r_ebp+0xffffffecu), 0x6986d4u);
    /* 005c7454: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c745b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005c7462: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c7469: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c7470: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005c7473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7474: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7479: push 0x803 */ { u32 v = 0x803u; r_esp -= 4; W32(r_esp, v); }
    /* 005c747e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7480: call dword ptr [0x6332ac] */ { u32 t = R32((u32)(0x6332acu)); r_esp -= 4; W32(r_esp, 0x5c7486u); call_ind(t); }
    /* 005c7486: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005c7488: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005c748a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c748b: mov esp, ebp */ r_esp = r_ebp;
    /* 005c748d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c748e: ret  */ FN_RET(0x005c7439); r_esp += 4; return;
}

void f_005c748f(void) /* FUN_005c748f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c748f);
    /* 005c748f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7490: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7492: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7495: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005c749c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005c74a3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c74aa: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c74ad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c74b0: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005c74b7: mov dword ptr [ebp - 0x18], 0x40000000 */ W32((u32)(r_ebp+0xffffffe8u), 0x40000000u);
    /* 005c74be: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c74c1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c74c4: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 005c74c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c74c8: push 0x30200 */ { u32 v = 0x30200u; r_esp -= 4; W32(r_esp, v); }
    /* 005c74cd: push 0x803 */ { u32 v = 0x803u; r_esp -= 4; W32(r_esp, v); }
    /* 005c74d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c74d4: call dword ptr [0x6332ac] */ { u32 t = R32((u32)(0x6332acu)); r_esp -= 4; W32(r_esp, 0x5c74dau); call_ind(t); }
    /* 005c74da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c74dc: jne 0x5c7536 */ if (!fZ) goto L_005c7536;
L_005c74de:; BB(0x005c74de);
    /* 005c74de: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 005c74e2: mov word ptr [0x6fc0c0], ax */ W16((u32)(0x6fc0c0u), (u16)r_eax);
    /* 005c74e8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c74ef: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005c74f5: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c74f8: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005c74fb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c74fe: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 005c7505: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c750c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005c750f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7510: push 0x50000 */ { u32 v = 0x50000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7515: push 0x841 */ { u32 v = 0x841u; r_esp -= 4; W32(r_esp, v); }
    /* 005c751a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c751c: mov dx, word ptr [0x6fc0c0] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x6fc0c0u))) & 0xffffu);
    /* 005c7523: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7524: call dword ptr [0x6332ac] */ { u32 t = R32((u32)(0x6332acu)); r_esp -= 4; W32(r_esp, 0x5c752au); call_ind(t); }
    /* 005c752a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c752d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c752e: call 0x5c75d2 */ r_esp -= 4; W32(r_esp, 0x5c7533u); f_005c75d2();
    /* 005c7533: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c7536:; BB(0x005c7536);
    /* 005c7536: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7538: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7539: ret  */ FN_RET(0x005c748f); r_esp += 4; return;
}

void f_005c753a(void) /* FUN_005c753a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c753a);
    /* 005c753a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c753b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c753d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7540: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c7543: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c7546: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c754d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7550: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c7553: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c755a: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 005c755d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c755e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7561: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7562: push 0x806 */ { u32 v = 0x806u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7567: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7569: mov cx, word ptr [0x6fc0c0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x6fc0c0u))) & 0xffffu);
    /* 005c7570: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7571: call dword ptr [0x6332ac] */ { u32 t = R32((u32)(0x6332acu)); r_esp -= 4; W32(r_esp, 0x5c7577u); call_ind(t); }
    /* 005c7577: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7579: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c757a: ret  */ FN_RET(0x005c753a); r_esp += 4; return;
}

void f_005c757b(void) /* FUN_005c757b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c757b);
    /* 005c757b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c757c: mov ebp, esp */ r_ebp = r_esp;
    /* 005c757e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c757f: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 005c7582: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7583: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7585: push 0x804 */ { u32 v = 0x804u; r_esp -= 4; W32(r_esp, v); }
    /* 005c758a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c758c: mov cx, word ptr [0x6fc0c0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x6fc0c0u))) & 0xffffu);
    /* 005c7593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7594: call dword ptr [0x6332ac] */ { u32 t = R32((u32)(0x6332acu)); r_esp -= 4; W32(r_esp, 0x5c759au); call_ind(t); }
    /* 005c759a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c759c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c759e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c75a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c75a2: call dword ptr [0x6331f0] */ { u32 t = R32((u32)(0x6331f0u)); r_esp -= 4; W32(r_esp, 0x5c75a8u); call_ind(t); }
    /* 005c75a8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c75ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c75ac: call dword ptr [0x6331e8] */ { u32 t = R32((u32)(0x6331e8u)); r_esp -= 4; W32(r_esp, 0x5c75b2u); call_ind(t); }
    /* 005c75b2: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005c75b8: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c75bb: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005c75be: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005c75c3: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005c75c6: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005c75c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c75cb: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5c75ceu); call_ind(t); }
    /* 005c75ce: mov esp, ebp */ r_esp = r_ebp;
    /* 005c75d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c75d1: ret  */ FN_RET(0x005c757b); r_esp += 4; return;
}

void f_005c75d2(void) /* FUN_005c75d2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c75d2);
    /* 005c75d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c75d3: mov ebp, esp */ r_ebp = r_esp;
    /* 005c75d5: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c75d8: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005c75db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c75dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c75df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c75e0: call dword ptr [0x6331ec] */ { u32 t = R32((u32)(0x6331ecu)); r_esp -= 4; W32(r_esp, 0x5c75e6u); call_ind(t); }
    /* 005c75e6: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005c75e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c75ea: push 0x20000 */ { u32 v = 0x20000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c75ef: push 0x843 */ { u32 v = 0x843u; r_esp -= 4; W32(r_esp, v); }
    /* 005c75f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c75f6: mov ax, word ptr [0x6fc0c0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fc0c0u))) & 0xffffu);
    /* 005c75fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c75fd: call dword ptr [0x6332ac] */ { u32 t = R32((u32)(0x6332acu)); r_esp -= 4; W32(r_esp, 0x5c7603u); call_ind(t); }
    /* 005c7603: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7606: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c7609: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c760c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c760f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c7612: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c7613: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c7615: mov ecx, eax */ r_ecx = r_eax;
    /* 005c7617: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c7619: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c761c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c761d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c761f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c7621: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7623: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005c7626: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c7629: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c762a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c762c: mov ecx, eax */ r_ecx = r_eax;
    /* 005c762e: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c7630: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7633: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c7634: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c7636: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c7638: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c763a: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005c763d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7640: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005c7643: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7646: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c7649: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005c7650: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c7653: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005c7656: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7659: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005c765c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c765f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c7662: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c7665: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c7668: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 005c766b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c766c: push 0x50000 */ { u32 v = 0x50000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7671: push 0x842 */ { u32 v = 0x842u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7676: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c7678: mov ax, word ptr [0x6fc0c0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6fc0c0u))) & 0xffffu);
    /* 005c767e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c767f: call dword ptr [0x6332ac] */ { u32 t = R32((u32)(0x6332acu)); r_esp -= 4; W32(r_esp, 0x5c7685u); call_ind(t); }
    /* 005c7685: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7687: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7688: ret  */ FN_RET(0x005c75d2); r_esp += 4; return;
}

void f_005c7690(void) /* FUN_005c7690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7690);
    /* 005c7690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7691: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c7697: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c769a: call 0x5c7336 */ r_esp -= 4; W32(r_esp, 0x5c769fu); f_005c7336();
    /* 005c769f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c76a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c76a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c76a7: je 0x5c76b5 */ if (fZ) goto L_005c76b5;
L_005c76a9:; BB(0x005c76a9);
    /* 005c76a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c76ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c76ad: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c76b2u); f_0048ac1b();
    /* 005c76b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c76b5:; BB(0x005c76b5);
    /* 005c76b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c76b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c76ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c76bb: ret 4 */ FN_RET(0x005c7690); r_esp += 8; return;
}

void f_005c76c0(void) /* FUN_005c76c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c76c0);
    /* 005c76c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c76c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c76c3: sub esp, 0x3e8 */ {  u32 a = r_esp; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c76c9: mov dword ptr [ebp - 0x3e4], ecx */ W32((u32)(r_ebp+0xfffffc1cu), r_ecx);
    /* 005c76cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c76d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c76d3: mov ecx, dword ptr [ebp - 0x3e4] */ r_ecx = R32((u32)(r_ebp+0xfffffc1cu));
    /* 005c76d9: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5c76deu); f_005e626d();
    /* 005c76de: mov ecx, dword ptr [ebp - 0x3e4] */ r_ecx = R32((u32)(r_ebp+0xfffffc1cu));
    /* 005c76e4: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005c76e7: mov dword ptr [ebp - 0x3e8], edx */ W32((u32)(r_ebp+0xfffffc18u), r_edx);
    /* 005c76ed: cmp dword ptr [ebp - 0x3e8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffc18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c76f4: je 0x5c7708 */ if (fZ) goto L_005c7708;
L_005c76f6:; BB(0x005c76f6);
    /* 005c76f6: cmp dword ptr [ebp - 0x3e8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffc18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c76fd: je 0x5c78b1 */ if (fZ) goto L_005c78b1;
L_005c7703:; BB(0x005c7703);
    /* 005c7703: jmp 0x5c79e4 */ goto L_005c79e4;
L_005c7708:; BB(0x005c7708);
    /* 005c7708: call 0x5c7439 */ r_esp -= 4; W32(r_esp, 0x5c770du); f_005c7439();
    /* 005c770d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c770f: jne 0x5c771b */ if (!fZ) goto L_005c771b;
L_005c7711:; BB(0x005c7711);
    /* 005c7711: mov dword ptr [0x6fc0b4], 1 */ W32((u32)(0x6fc0b4u), 0x1u);
L_005c771b:; BB(0x005c771b);
    /* 005c771b: mov dword ptr [ebp - 0x360], 0 */ W32((u32)(r_ebp+0xfffffca0u), 0x0u);
    /* 005c7725: lea eax, [ebp - 0x340] */ r_eax = (u32)(r_ebp+0xfffffcc0u);
    /* 005c772b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c772c: mov ecx, dword ptr [0x68713c] */ r_ecx = R32((u32)(0x68713cu));
    /* 005c7732: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7733: call dword ptr [0x63303c] */ { u32 t = R32((u32)(0x63303cu)); r_esp -= 4; W32(r_esp, 0x5c7739u); call_ind(t); }
    /* 005c7739: mov dword ptr [ebp - 0x35c], eax */ W32((u32)(r_ebp+0xfffffca4u), r_eax);
    /* 005c773f: cmp dword ptr [ebp - 0x35c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffca4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7746: je 0x5c7775 */ if (fZ) goto L_005c7775;
L_005c7748:; BB(0x005c7748);
    /* 005c7748: mov dword ptr [ebp - 0x360], 1 */ W32((u32)(r_ebp+0xfffffca0u), 0x1u);
    /* 005c7752: mov edx, dword ptr [0x68713c] */ r_edx = R32((u32)(0x68713cu));
    /* 005c7758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7759: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005c775f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7760: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5c7765u); f_00624510();
    /* 005c7765: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7768: mov ecx, dword ptr [ebp - 0x35c] */ r_ecx = R32((u32)(r_ebp+0xfffffca4u));
    /* 005c776e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c776f: call dword ptr [0x633030] */ { u32 t = R32((u32)(0x633030u)); r_esp -= 4; W32(r_esp, 0x5c7775u); call_ind(t); }
L_005c7775:; BB(0x005c7775);
    /* 005c7775: cmp dword ptr [ebp - 0x360], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffca0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c777c: jne 0x5c781d */ if (!fZ) goto L_005c781d;
L_005c7782:; BB(0x005c7782);
    /* 005c7782: movsx edx, byte ptr [0x6f6f00] */ r_edx = (u32)(i32)(i8)R8((u32)(0x6f6f00u));
    /* 005c7789: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c778b: je 0x5c781d */ if (fZ) goto L_005c781d;
L_005c7791:; BB(0x005c7791);
    /* 005c7791: mov al, byte ptr [0x6f6f00] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6f6f00u))) & 0xffu);
    /* 005c7796: mov byte ptr [ebp - 0x200], al */ W8((u32)(r_ebp+0xfffffe00u), (u8)r_eax);
    /* 005c779c: mov byte ptr [ebp - 0x1ff], 0 */ W8((u32)(r_ebp+0xfffffe01u), 0x0u);
    /* 005c77a3: push 0x69871c */ { u32 v = 0x69871cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c77a8: lea ecx, [ebp - 0x200] */ r_ecx = (u32)(r_ebp+0xfffffe00u);
    /* 005c77ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c77af: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5c77b4u); f_00624520();
    /* 005c77b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c77b7: mov edx, dword ptr [0x68713c] */ r_edx = R32((u32)(0x68713cu));
    /* 005c77bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c77be: lea eax, [ebp - 0x200] */ r_eax = (u32)(r_ebp+0xfffffe00u);
    /* 005c77c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c77c5: call 0x624520 */ r_esp -= 4; W32(r_esp, 0x5c77cau); f_00624520();
    /* 005c77ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c77cd: lea ecx, [ebp - 0x340] */ r_ecx = (u32)(r_ebp+0xfffffcc0u);
    /* 005c77d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c77d4: lea edx, [ebp - 0x200] */ r_edx = (u32)(r_ebp+0xfffffe00u);
    /* 005c77da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c77db: call dword ptr [0x63303c] */ { u32 t = R32((u32)(0x63303cu)); r_esp -= 4; W32(r_esp, 0x5c77e1u); call_ind(t); }
    /* 005c77e1: mov dword ptr [ebp - 0x35c], eax */ W32((u32)(r_ebp+0xfffffca4u), r_eax);
    /* 005c77e7: cmp dword ptr [ebp - 0x35c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffca4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c77ee: je 0x5c781d */ if (fZ) goto L_005c781d;
L_005c77f0:; BB(0x005c77f0);
    /* 005c77f0: mov dword ptr [ebp - 0x360], 1 */ W32((u32)(r_ebp+0xfffffca0u), 0x1u);
    /* 005c77fa: lea eax, [ebp - 0x200] */ r_eax = (u32)(r_ebp+0xfffffe00u);
    /* 005c7800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7801: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005c7807: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7808: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5c780du); f_00624510();
    /* 005c780d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7810: mov edx, dword ptr [ebp - 0x35c] */ r_edx = R32((u32)(r_ebp+0xfffffca4u));
    /* 005c7816: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7817: call dword ptr [0x633030] */ { u32 t = R32((u32)(0x633030u)); r_esp -= 4; W32(r_esp, 0x5c781du); call_ind(t); }
L_005c781d:; BB(0x005c781d);
    /* 005c781d: cmp dword ptr [ebp - 0x360], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffca0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7824: je 0x5c788f */ if (fZ) goto L_005c788f;
L_005c7826:; BB(0x005c7826);
    /* 005c7826: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005c782c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c782d: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005c7833: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c7836: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005c7839: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c783a: call 0x5c748f */ r_esp -= 4; W32(r_esp, 0x5c783fu); f_005c748f();
    /* 005c783f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7842: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005c7848: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c784b: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005c784e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c784f: call 0x5c753a */ r_esp -= 4; W32(r_esp, 0x5c7854u); f_005c753a();
    /* 005c7854: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7857: mov dword ptr [ebp - 0x350], 1 */ W32((u32)(r_ebp+0xfffffcb0u), 0x1u);
    /* 005c7861: lea ecx, [ebp - 0x358] */ r_ecx = (u32)(r_ebp+0xfffffca8u);
    /* 005c7867: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7868: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005c786d: push 0x814 */ { u32 v = 0x814u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7872: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7874: mov dx, word ptr [0x6fc0c0] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x6fc0c0u))) & 0xffffu);
    /* 005c787b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c787c: call dword ptr [0x6332ac] */ { u32 t = R32((u32)(0x6332acu)); r_esp -= 4; W32(r_esp, 0x5c7882u); call_ind(t); }
    /* 005c7882: mov eax, dword ptr [ebp - 0x354] */ r_eax = R32((u32)(r_ebp+0xfffffcacu));
    /* 005c7888: mov dword ptr [0x6fc0bc], eax */ W32((u32)(0x6fc0bcu), r_eax);
    /* 005c788d: jmp 0x5c7899 */ goto L_005c7899;
L_005c788f:; BB(0x005c788f);
    /* 005c788f: mov dword ptr [0x6fc0b4], 1 */ W32((u32)(0x6fc0b4u), 0x1u);
L_005c7899:; BB(0x005c7899);
    /* 005c7899: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c789b: mov ecx, dword ptr [ebp - 0x3e4] */ r_ecx = R32((u32)(r_ebp+0xfffffc1cu));
    /* 005c78a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c78a3: mov ecx, dword ptr [ebp - 0x3e4] */ r_ecx = R32((u32)(r_ebp+0xfffffc1cu));
    /* 005c78a9: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c78acu); call_ind(t); }
    /* 005c78ac: jmp 0x5c79e4 */ goto L_005c79e4;
L_005c78b1:; BB(0x005c78b1);
    /* 005c78b1: mov dword ptr [ebp - 0x350], 2 */ W32((u32)(r_ebp+0xfffffcb0u), 0x2u);
    /* 005c78bb: mov dword ptr [ebp - 0x354], 0 */ W32((u32)(r_ebp+0xfffffcacu), 0x0u);
    /* 005c78c5: lea eax, [ebp - 0x358] */ r_eax = (u32)(r_ebp+0xfffffca8u);
    /* 005c78cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c78cc: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005c78d1: push 0x814 */ { u32 v = 0x814u; r_esp -= 4; W32(r_esp, v); }
    /* 005c78d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c78d8: mov cx, word ptr [0x6fc0c0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x6fc0c0u))) & 0xffffu);
    /* 005c78df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c78e0: call dword ptr [0x6332ac] */ { u32 t = R32((u32)(0x6332acu)); r_esp -= 4; W32(r_esp, 0x5c78e6u); call_ind(t); }
    /* 005c78e6: mov edx, dword ptr [ebp - 0x354] */ r_edx = R32((u32)(r_ebp+0xfffffcacu));
    /* 005c78ec: mov dword ptr [0x6fc0b8], edx */ W32((u32)(0x6fc0b8u), r_edx);
    /* 005c78f2: mov dword ptr [ebp - 0x350], 4 */ W32((u32)(r_ebp+0xfffffcb0u), 0x4u);
    /* 005c78fc: lea eax, [ebp - 0x358] */ r_eax = (u32)(r_ebp+0xfffffca8u);
    /* 005c7902: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7903: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7908: push 0x814 */ { u32 v = 0x814u; r_esp -= 4; W32(r_esp, v); }
    /* 005c790d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c790f: mov cx, word ptr [0x6fc0c0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x6fc0c0u))) & 0xffffu);
    /* 005c7916: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7917: call dword ptr [0x6332ac] */ { u32 t = R32((u32)(0x6332acu)); r_esp -= 4; W32(r_esp, 0x5c791du); call_ind(t); }
    /* 005c791d: cmp dword ptr [ebp - 0x354], 0x211 */ {  u32 a = R32((u32)(r_ebp+0xfffffcacu)); u32 b = 0x211u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7927: je 0x5c7941 */ if (fZ) goto L_005c7941;
L_005c7929:; BB(0x005c7929);
    /* 005c7929: cmp dword ptr [ebp - 0x354], 0x20c */ {  u32 a = R32((u32)(r_ebp+0xfffffcacu)); u32 b = 0x20cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7933: je 0x5c7941 */ if (fZ) goto L_005c7941;
L_005c7935:; BB(0x005c7935);
    /* 005c7935: cmp dword ptr [ebp - 0x354], 0x20d */ {  u32 a = R32((u32)(r_ebp+0xfffffcacu)); u32 b = 0x20du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c793f: jne 0x5c7975 */ if (!fZ) goto L_005c7975;
L_005c7941:; BB(0x005c7941);
    /* 005c7941: mov edx, dword ptr [ebp - 0x354] */ r_edx = R32((u32)(r_ebp+0xfffffcacu));
    /* 005c7947: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7948: push 0x698718 */ { u32 v = 0x698718u; r_esp -= 4; W32(r_esp, v); }
    /* 005c794d: lea eax, [ebp - 0x3e0] */ r_eax = (u32)(r_ebp+0xfffffc20u);
    /* 005c7953: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7954: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c7959u); f_00624050();
    /* 005c7959: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c795c: lea ecx, [ebp - 0x3e0] */ r_ecx = (u32)(r_ebp+0xfffffc20u);
    /* 005c7962: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7963: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5c7968u); f_0060fc40();
    /* 005c7968: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c796b: mov dword ptr [0x6fc0b4], 1 */ W32((u32)(0x6fc0b4u), 0x1u);
L_005c7975:; BB(0x005c7975);
    /* 005c7975: cmp dword ptr [0x6fc0b4], 0 */ {  u32 a = R32((u32)(0x6fc0b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c797c: jne 0x5c798c */ if (!fZ) goto L_005c798c;
L_005c797e:; BB(0x005c797e);
    /* 005c797e: mov edx, dword ptr [0x6fc0b8] */ r_edx = R32((u32)(0x6fc0b8u));
    /* 005c7984: cmp edx, dword ptr [0x6fc0bc] */ {  u32 a = r_edx; u32 b = R32((u32)(0x6fc0bcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c798a: jb 0x5c79a3 */ if (fC) goto L_005c79a3;
L_005c798c:; BB(0x005c798c);
    /* 005c798c: push 0x2336 */ { u32 v = 0x2336u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7991: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005c7996: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7998: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c799e: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c79a1u); call_ind(t); }
    /* 005c79a1: jmp 0x5c79e4 */ goto L_005c79e4;
L_005c79a3:; BB(0x005c79a3);
    /* 005c79a3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005c79a5: mov eax, dword ptr [ebp - 0x3e4] */ r_eax = R32((u32)(r_ebp+0xfffffc1cu));
    /* 005c79ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c79ad: mov ecx, dword ptr [ebp - 0x3e4] */ r_ecx = R32((u32)(r_ebp+0xfffffc1cu));
    /* 005c79b3: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c79b6u); call_ind(t); }
    /* 005c79b6: mov ecx, dword ptr [ebp - 0x3e4] */ r_ecx = R32((u32)(r_ebp+0xfffffc1cu));
    /* 005c79bc: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x5c79c1u); f_005e63b4();
    /* 005c79c1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c79c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c79c5: mov ecx, dword ptr [ebp - 0x3e4] */ r_ecx = R32((u32)(r_ebp+0xfffffc1cu));
    /* 005c79cb: call 0x5e6385 */ r_esp -= 4; W32(r_esp, 0x5c79d0u); f_005e6385();
    /* 005c79d0: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005c79d5: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c79d8: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005c79db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c79dc: call 0x5c75d2 */ r_esp -= 4; W32(r_esp, 0x5c79e1u); f_005c75d2();
    /* 005c79e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c79e4:; BB(0x005c79e4);
    /* 005c79e4: mov esp, ebp */ r_esp = r_ebp;
    /* 005c79e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c79e7: ret 4 */ FN_RET(0x005c76c0); r_esp += 8; return;
}

void f_005c79f0(void) /* FUN_005c79f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c79f0);
    /* 005c79f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c79f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c79f3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c79f6: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c79f9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c79fc: call 0x446fe0 */ r_esp -= 4; W32(r_esp, 0x5c7a01u); f_00446fe0();
    /* 005c7a01: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c7a04: mov dword ptr [eax], 0x63ac5c */ W32((u32)(r_eax), 0x63ac5cu);
    /* 005c7a0a: push 0x6f6ec8 */ { u32 v = 0x6f6ec8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a0f: push 0x698720 */ { u32 v = 0x698720u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a14: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005c7a17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a18: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5c7a1du); f_00624050();
    /* 005c7a1d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7a20: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005c7a23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a24: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c7a2a: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5c7a2fu); f_005da413();
    /* 005c7a2f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c7a32: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c7a35: mov dword ptr [eax + 0x1cb0], ecx */ W32((u32)(r_eax+0x1cb0u), r_ecx);
    /* 005c7a3b: push 0x186a3 */ { u32 v = 0x186a3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a40: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c7a43: call 0x5e5ec3 */ r_esp -= 4; W32(r_esp, 0x5c7a48u); f_005e5ec3();
    /* 005c7a48: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c7a4b: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7a4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7a4e: ret 4 */ FN_RET(0x005c79f0); r_esp += 8; return;
}

void f_005c7a51(void) /* FUN_005c7a51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7a51);
    /* 005c7a51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a52: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7a54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a55: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c7a58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7a5b: mov dword ptr [eax], 0x63ac5c */ W32((u32)(r_eax), 0x63ac5cu);
    /* 005c7a61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a63: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c7a69: call 0x5da413 */ r_esp -= 4; W32(r_esp, 0x5c7a6eu); f_005da413();
    /* 005c7a6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7a71: call 0x44711a */ r_esp -= 4; W32(r_esp, 0x5c7a76u); f_0044711a();
    /* 005c7a76: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7a78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7a79: ret  */ FN_RET(0x005c7a51); r_esp += 4; return;
}

void f_005c7a7a(void) /* FUN_005c7a7a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7a7a);
    /* 005c7a7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a7b: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7a7d: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7a80: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c7a83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c7a86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a87: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7a8a: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5c7a8fu); f_005e626d();
    /* 005c7a8f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7a92: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005c7a95: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005c7a98: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7a9c: je 0x5c7ab7 */ if (fZ) goto L_005c7ab7;
L_005c7a9e:; BB(0x005c7a9e);
    /* 005c7a9e: cmp dword ptr [ebp - 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7aa2: je 0x5c7c9f */ if (fZ) goto L_005c7c9f;
L_005c7aa8:; BB(0x005c7aa8);
    /* 005c7aa8: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7aac: je 0x5c7d05 */ if (fZ) goto L_005c7d05;
L_005c7ab2:; BB(0x005c7ab2);
    /* 005c7ab2: jmp 0x5c7dc7 */ goto L_005c7dc7;
L_005c7ab7:; BB(0x005c7ab7);
    /* 005c7ab7: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7ab9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c7abeu); f_0048ab58();
    /* 005c7abe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7ac1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c7ac4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7ac8: je 0x5c7ad7 */ if (fZ) goto L_005c7ad7;
L_005c7aca:; BB(0x005c7aca);
    /* 005c7aca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7acd: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5c7ad2u); f_005e9d30();
    /* 005c7ad2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c7ad5: jmp 0x5c7ade */ goto L_005c7ade;
L_005c7ad7:; BB(0x005c7ad7);
    /* 005c7ad7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c7ade:; BB(0x005c7ade);
    /* 005c7ade: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c7ae1: mov dword ptr [0x6fc0c8], eax */ W32((u32)(0x6fc0c8u), r_eax);
    /* 005c7ae6: mov ecx, dword ptr [0x6fc0c8] */ r_ecx = R32((u32)(0x6fc0c8u));
    /* 005c7aec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c7aee: mov ecx, dword ptr [0x6fc0c8] */ r_ecx = R32((u32)(0x6fc0c8u));
    /* 005c7af4: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5c7af7u); call_ind(t); }
    /* 005c7af7: push 0x61fe */ { u32 v = 0x61feu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7afc: mov ecx, dword ptr [0x6fc0c8] */ r_ecx = R32((u32)(0x6fc0c8u));
    /* 005c7b02: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c7b07u); f_005ea0c3();
    /* 005c7b07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7b09: mov eax, dword ptr [0x6fc0c8] */ r_eax = R32((u32)(0x6fc0c8u));
    /* 005c7b0e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7b10: mov ecx, dword ptr [0x6fc0c8] */ r_ecx = R32((u32)(0x6fc0c8u));
    /* 005c7b16: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c7b19u); call_ind(t); }
    /* 005c7b19: mov eax, dword ptr [0x6fc0c8] */ r_eax = R32((u32)(0x6fc0c8u));
    /* 005c7b1e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7b20: mov ecx, dword ptr [0x6fc0c8] */ r_ecx = R32((u32)(0x6fc0c8u));
    /* 005c7b26: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x5c7b29u); call_ind(t); }
    /* 005c7b29: mov eax, dword ptr [0x6fc0c8] */ r_eax = R32((u32)(0x6fc0c8u));
    /* 005c7b2e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7b30: mov ecx, dword ptr [0x6fc0c8] */ r_ecx = R32((u32)(0x6fc0c8u));
    /* 005c7b36: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c7b39u); call_ind(t); }
    /* 005c7b39: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7b3e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c7b43u); f_0048ab58();
    /* 005c7b43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7b46: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c7b49: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b4d: je 0x5c7b5c */ if (fZ) goto L_005c7b5c;
L_005c7b4f:; BB(0x005c7b4f);
    /* 005c7b4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7b52: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5c7b57u); f_005e8590();
    /* 005c7b57: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c7b5a: jmp 0x5c7b63 */ goto L_005c7b63;
L_005c7b5c:; BB(0x005c7b5c);
    /* 005c7b5c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c7b63:; BB(0x005c7b63);
    /* 005c7b63: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c7b66: mov dword ptr [0x6fc0c4], eax */ W32((u32)(0x6fc0c4u), r_eax);
    /* 005c7b6b: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7b71: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c7b73: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7b79: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5c7b7cu); call_ind(t); }
    /* 005c7b7c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c7b7e: mov eax, dword ptr [0x6fc0c4] */ r_eax = R32((u32)(0x6fc0c4u));
    /* 005c7b83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7b85: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7b8b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c7b8eu); call_ind(t); }
    /* 005c7b8e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7b90: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7b96: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5c7b9bu); f_005e87aa();
    /* 005c7b9b: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7ba0: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7ba6: call 0x5e8740 */ r_esp -= 4; W32(r_esp, 0x5c7babu); f_005e8740();
    /* 005c7bab: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7bad: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7bb3: call 0x5e8775 */ r_esp -= 4; W32(r_esp, 0x5c7bb8u); f_005e8775();
    /* 005c7bb8: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7bba: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7bc0: call 0x5e8e99 */ r_esp -= 4; W32(r_esp, 0x5c7bc5u); f_005e8e99();
    /* 005c7bc5: push 0x69872c */ { u32 v = 0x69872cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7bca: mov eax, dword ptr [0x6fc0c4] */ r_eax = R32((u32)(0x6fc0c4u));
    /* 005c7bcf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7bd1: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7bd7: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c7bdau); call_ind(t); }
    /* 005c7bda: mov eax, dword ptr [0x6fc0c4] */ r_eax = R32((u32)(0x6fc0c4u));
    /* 005c7bdf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7be1: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7be7: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x5c7beau); call_ind(t); }
    /* 005c7bea: mov eax, dword ptr [0x6fc0c4] */ r_eax = R32((u32)(0x6fc0c4u));
    /* 005c7bef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7bf1: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7bf7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c7bfau); call_ind(t); }
    /* 005c7bfa: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c01: jne 0x5c7c5d */ if (!fZ) goto L_005c7c5d;
L_005c7c03:; BB(0x005c7c03);
    /* 005c7c03: push 0xe318 */ { u32 v = 0xe318u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c08: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c7c0du); f_0048ab58();
    /* 005c7c0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7c10: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c7c13: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c17: je 0x5c7c30 */ if (fZ) goto L_005c7c30;
L_005c7c19:; BB(0x005c7c19);
    /* 005c7c19: push 0x698748 */ { u32 v = 0x698748u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c1e: push 0x698758 */ { u32 v = 0x698758u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c23: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7c26: call 0x5ea970 */ r_esp -= 4; W32(r_esp, 0x5c7c2bu); f_005ea970();
    /* 005c7c2b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c7c2e: jmp 0x5c7c37 */ goto L_005c7c37;
L_005c7c30:; BB(0x005c7c30);
    /* 005c7c30: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005c7c37:; BB(0x005c7c37);
    /* 005c7c37: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c7c3a: mov dword ptr [0x6fc470], eax */ W32((u32)(0x6fc470u), r_eax);
    /* 005c7c3f: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7c45: call 0x5ecec1 */ r_esp -= 4; W32(r_esp, 0x5c7c4au); f_005ecec1();
    /* 005c7c4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c4c: je 0x5c7c5b */ if (fZ) goto L_005c7c5b;
L_005c7c4e:; BB(0x005c7c4e);
    /* 005c7c4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c50: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7c56: call 0x5ee082 */ r_esp -= 4; W32(r_esp, 0x5c7c5bu); f_005ee082();
L_005c7c5b:; BB(0x005c7c5b);
    /* 005c7c5b: jmp 0x5c7c68 */ goto L_005c7c68;
L_005c7c5d:; BB(0x005c7c5d);
    /* 005c7c5d: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7c63: call 0x5eb284 */ r_esp -= 4; W32(r_esp, 0x5c7c68u); f_005eb284();
L_005c7c68:; BB(0x005c7c68);
    /* 005c7c68: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7c6e: call 0x5ecec1 */ r_esp -= 4; W32(r_esp, 0x5c7c73u); f_005ecec1();
    /* 005c7c73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c75: je 0x5c7c8d */ if (fZ) goto L_005c7c8d;
L_005c7c77:; BB(0x005c7c77);
    /* 005c7c77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c7b: push 0x5c824f */ { u32 v = 0x5c824fu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c82: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7c88: call 0x5ed69c */ r_esp -= 4; W32(r_esp, 0x5c7c8du); f_005ed69c();
L_005c7c8d:; BB(0x005c7c8d);
    /* 005c7c8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c8f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7c92: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c7c94: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7c97: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c7c9au); call_ind(t); }
    /* 005c7c9a: jmp 0x5c7e41 */ goto L_005c7e41;
L_005c7c9f:; BB(0x005c7c9f);
    /* 005c7c9f: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7ca5: call 0x5ecec1 */ r_esp -= 4; W32(r_esp, 0x5c7caau); f_005ecec1();
    /* 005c7caa: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c7cad: cmp dword ptr [ebp - 0x30], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7cb1: je 0x5c7cbb */ if (fZ) goto L_005c7cbb;
L_005c7cb3:; BB(0x005c7cb3);
    /* 005c7cb3: cmp dword ptr [ebp - 0x30], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7cb7: je 0x5c7cca */ if (fZ) goto L_005c7cca;
L_005c7cb9:; BB(0x005c7cb9);
    /* 005c7cb9: jmp 0x5c7ce6 */ goto L_005c7ce6;
L_005c7cbb:; BB(0x005c7cbb);
    /* 005c7cbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7cbd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7cc0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7cc2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7cc5: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c7cc8u); call_ind(t); }
    /* 005c7cc8: jmp 0x5c7cf3 */ goto L_005c7cf3;
L_005c7cca:; BB(0x005c7cca);
    /* 005c7cca: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7ccc: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7cd2: call 0x5ed4f7 */ r_esp -= 4; W32(r_esp, 0x5c7cd7u); f_005ed4f7();
    /* 005c7cd7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7cd9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7cdc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7cde: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7ce1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c7ce4u); call_ind(t); }
    /* 005c7ce4: jmp 0x5c7cf3 */ goto L_005c7cf3;
L_005c7ce6:; BB(0x005c7ce6);
    /* 005c7ce6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7ce8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7ceb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7ced: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7cf0: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c7cf3u); call_ind(t); }
L_005c7cf3:; BB(0x005c7cf3);
    /* 005c7cf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7cf5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7cf8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7cfa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7cfd: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c7d00u); call_ind(t); }
    /* 005c7d00: jmp 0x5c7e41 */ goto L_005c7e41;
L_005c7d05:; BB(0x005c7d05);
    /* 005c7d05: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c7d0b: jmp 0x5c7d19 */ goto L_005c7d19;
L_005c7d0d:; BB(0x005c7d0d);
    /* 005c7d0d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005c7d11: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005c7d15: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005c7d19:; BB(0x005c7d19);
    /* 005c7d19: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c7d1d: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c7d20: jge 0x5c7d37 */ if ((fS==fO)) goto L_005c7d37;
L_005c7d22:; BB(0x005c7d22);
    /* 005c7d22: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005c7d26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7d27: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c7d2d: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5c7d32u); f_0045c419();
    /* 005c7d32: mov byte ptr [eax], 2 */ W8((u32)(r_eax), 0x2u);
    /* 005c7d35: jmp 0x5c7d0d */ goto L_005c7d0d;
L_005c7d37:; BB(0x005c7d37);
    /* 005c7d37: mov eax, dword ptr [0x6f6ee8] */ r_eax = R32((u32)(0x6f6ee8u));
    /* 005c7d3c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c7d3f: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005c7d42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7d43: call dword ptr [0x633200] */ { u32 t = R32((u32)(0x633200u)); r_esp -= 4; W32(r_esp, 0x5c7d49u); call_ind(t); }
    /* 005c7d49: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7d4c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c7d4f: call 0x5c7eb1 */ r_esp -= 4; W32(r_esp, 0x5c7d54u); f_005c7eb1();
    /* 005c7d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7d55: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7d5b: call 0x5eb451 */ r_esp -= 4; W32(r_esp, 0x5c7d60u); f_005eb451();
    /* 005c7d60: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7d66: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c7d68: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7d6e: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5c7d71u); call_ind(t); }
    /* 005c7d71: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c7d77: call 0x5da0fe */ r_esp -= 4; W32(r_esp, 0x5c7d7cu); f_005da0fe();
    /* 005c7d7c: cmp eax, 0x2330 */ {  u32 a = r_eax; u32 b = 0x2330u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d81: je 0x5c7dc5 */ if (fZ) goto L_005c7dc5;
L_005c7d83:; BB(0x005c7d83);
    /* 005c7d83: push 0x698764 */ { u32 v = 0x698764u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7d88: mov eax, dword ptr [0x6fc0c4] */ r_eax = R32((u32)(0x6fc0c4u));
    /* 005c7d8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7d8f: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7d95: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c7d98u); call_ind(t); }
    /* 005c7d98: mov eax, dword ptr [0x6fc0c4] */ r_eax = R32((u32)(0x6fc0c4u));
    /* 005c7d9d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7d9f: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7da5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c7da8u); call_ind(t); }
    /* 005c7da8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7dab: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c7dae: call 0x5c7e9d */ r_esp -= 4; W32(r_esp, 0x5c7db3u); f_005c7e9d();
    /* 005c7db3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7db4: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c7dba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c7dbc: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c7dc2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c7dc5u); call_ind(t); }
L_005c7dc5:; BB(0x005c7dc5);
    /* 005c7dc5: jmp 0x5c7e41 */ goto L_005c7e41;
L_005c7dc7:; BB(0x005c7dc7);
    /* 005c7dc7: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7dce: je 0x5c7e06 */ if (fZ) goto L_005c7e06;
L_005c7dd0:; BB(0x005c7dd0);
    /* 005c7dd0: mov eax, dword ptr [0x6fc470] */ r_eax = R32((u32)(0x6fc470u));
    /* 005c7dd5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c7dd8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7ddb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c7dde: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7de2: je 0x5c7df5 */ if (fZ) goto L_005c7df5;
L_005c7de4:; BB(0x005c7de4);
    /* 005c7de4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7de6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7de9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c7deb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7dee: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c7df0u); call_ind(t); }
    /* 005c7df0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c7df3: jmp 0x5c7dfc */ goto L_005c7dfc;
L_005c7df5:; BB(0x005c7df5);
    /* 005c7df5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005c7dfc:; BB(0x005c7dfc);
    /* 005c7dfc: mov dword ptr [0x6fc470], 0 */ W32((u32)(0x6fc470u), 0x0u);
L_005c7e06:; BB(0x005c7e06);
    /* 005c7e06: push 0x698778 */ { u32 v = 0x698778u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7e0b: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7e11: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c7e13: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7e19: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5c7e1cu); call_ind(t); }
    /* 005c7e1c: mov eax, dword ptr [0x6fc0c4] */ r_eax = R32((u32)(0x6fc0c4u));
    /* 005c7e21: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7e23: mov ecx, dword ptr [0x6fc0c4] */ r_ecx = R32((u32)(0x6fc0c4u));
    /* 005c7e29: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c7e2cu); call_ind(t); }
    /* 005c7e2c: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7e31: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005c7e36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7e38: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c7e3e: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c7e41u); call_ind(t); }
L_005c7e41:; BB(0x005c7e41);
    /* 005c7e41: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7e43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7e44: ret 4 */ FN_RET(0x005c7a7a); r_esp += 8; return;
}

void f_005c7e47(void) /* FUN_005c7e47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7e47);
    /* 005c7e47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7e48: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7e4a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7e4d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c7e50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7e53: call 0x4476a6 */ r_esp -= 4; W32(r_esp, 0x5c7e58u); f_004476a6();
    /* 005c7e58: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7e5a: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c7e5fu); f_0048ab58();
    /* 005c7e5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7e62: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c7e65: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e69: je 0x5c7e86 */ if (fZ) goto L_005c7e86;
L_005c7e6b:; BB(0x005c7e6b);
    /* 005c7e6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7e6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7e70: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5c7e75u); f_005e6160();
    /* 005c7e75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7e78: mov dword ptr [eax], 0x63ad14 */ W32((u32)(r_eax), 0x63ad14u);
    /* 005c7e7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7e81: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c7e84: jmp 0x5c7e8d */ goto L_005c7e8d;
L_005c7e86:; BB(0x005c7e86);
    /* 005c7e86: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005c7e8d:; BB(0x005c7e8d);
    /* 005c7e8d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7e90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7e91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7e94: call 0x5e5d66 */ r_esp -= 4; W32(r_esp, 0x5c7e99u); f_005e5d66();
    /* 005c7e99: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7e9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7e9c: ret  */ FN_RET(0x005c7e47); r_esp += 4; return;
}

void f_005c7e9d(void) /* FUN_005c7e9d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7e9d);
    /* 005c7e9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7e9e: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7ea0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7ea1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c7ea4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7ea7: mov eax, dword ptr [eax + 0x1cb0] */ r_eax = R32((u32)(r_eax+0x1cb0u));
    /* 005c7ead: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7eaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7eb0: ret  */ FN_RET(0x005c7e9d); r_esp += 4; return;
}

void f_005c7eb1(void) /* FUN_005c7eb1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7eb1);
    /* 005c7eb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7eb2: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7eb4: sub esp, 0x144 */ {  u32 a = r_esp; u32 b = 0x144u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7eba: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 005c7ec0: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 005c7ec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7ec7: push 0x69878c */ { u32 v = 0x69878cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7ecc: mov ecx, dword ptr [0x6fc470] */ r_ecx = R32((u32)(0x6fc470u));
    /* 005c7ed2: call 0x5ed4d3 */ r_esp -= 4; W32(r_esp, 0x5c7ed7u); f_005ed4d3();
    /* 005c7ed7: push 0x698794 */ { u32 v = 0x698794u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7edc: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005c7ee2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7ee3: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c7ee8u); f_00624720();
    /* 005c7ee8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7eeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7eed: je 0x5c7f46 */ if (fZ) goto L_005c7f46;
L_005c7eef:; BB(0x005c7eef);
    /* 005c7eef: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005c7ef5: mov dword ptr [edx + 0x1cb0], 4 */ W32((u32)(r_edx+0x1cb0u), 0x4u);
    /* 005c7eff: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7f01: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c7f06u); f_0048ab58();
    /* 005c7f06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7f09: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 005c7f0f: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f16: je 0x5c7f31 */ if (fZ) goto L_005c7f31;
L_005c7f18:; BB(0x005c7f18);
    /* 005c7f18: mov eax, dword ptr [0x6fc470] */ r_eax = R32((u32)(0x6fc470u));
    /* 005c7f1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7f1e: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005c7f24: call 0x506380 */ r_esp -= 4; W32(r_esp, 0x5c7f29u); f_00506380();
    /* 005c7f29: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 005c7f2f: jmp 0x5c7f3b */ goto L_005c7f3b;
L_005c7f31:; BB(0x005c7f31);
    /* 005c7f31: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_005c7f3b:; BB(0x005c7f3b);
    /* 005c7f3b: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005c7f41: jmp 0x5c824b */ goto L_005c824b;
L_005c7f46:; BB(0x005c7f46);
    /* 005c7f46: push 0x6987a8 */ { u32 v = 0x6987a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7f4b: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005c7f51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7f52: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c7f57u); f_00624720();
    /* 005c7f57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7f5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f5c: je 0x5c7fb5 */ if (fZ) goto L_005c7fb5;
L_005c7f5e:; BB(0x005c7f5e);
    /* 005c7f5e: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005c7f64: mov dword ptr [edx + 0x1cb0], 4 */ W32((u32)(r_edx+0x1cb0u), 0x4u);
    /* 005c7f6e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7f70: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c7f75u); f_0048ab58();
    /* 005c7f75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7f78: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 005c7f7e: cmp dword ptr [ebp - 0x108], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f85: je 0x5c7fa0 */ if (fZ) goto L_005c7fa0;
L_005c7f87:; BB(0x005c7f87);
    /* 005c7f87: mov eax, dword ptr [0x6fc470] */ r_eax = R32((u32)(0x6fc470u));
    /* 005c7f8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7f8d: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005c7f93: call 0x506380 */ r_esp -= 4; W32(r_esp, 0x5c7f98u); f_00506380();
    /* 005c7f98: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005c7f9e: jmp 0x5c7faa */ goto L_005c7faa;
L_005c7fa0:; BB(0x005c7fa0);
    /* 005c7fa0: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
L_005c7faa:; BB(0x005c7faa);
    /* 005c7faa: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 005c7fb0: jmp 0x5c824b */ goto L_005c824b;
L_005c7fb5:; BB(0x005c7fb5);
    /* 005c7fb5: push 0x6987b4 */ { u32 v = 0x6987b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7fba: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005c7fc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7fc1: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c7fc6u); f_00624720();
    /* 005c7fc6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7fc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7fcb: je 0x5c8024 */ if (fZ) goto L_005c8024;
L_005c7fcd:; BB(0x005c7fcd);
    /* 005c7fcd: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005c7fd3: mov dword ptr [edx + 0x1cb0], 4 */ W32((u32)(r_edx+0x1cb0u), 0x4u);
    /* 005c7fdd: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7fdf: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c7fe4u); f_0048ab58();
    /* 005c7fe4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7fe7: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005c7fed: cmp dword ptr [ebp - 0x10c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7ff4: je 0x5c800f */ if (fZ) goto L_005c800f;
L_005c7ff6:; BB(0x005c7ff6);
    /* 005c7ff6: mov eax, dword ptr [0x6fc470] */ r_eax = R32((u32)(0x6fc470u));
    /* 005c7ffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7ffc: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005c8002: call 0x506380 */ r_esp -= 4; W32(r_esp, 0x5c8007u); f_00506380();
    /* 005c8007: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 005c800d: jmp 0x5c8019 */ goto L_005c8019;
L_005c800f:; BB(0x005c800f);
    /* 005c800f: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
L_005c8019:; BB(0x005c8019);
    /* 005c8019: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 005c801f: jmp 0x5c824b */ goto L_005c824b;
L_005c8024:; BB(0x005c8024);
    /* 005c8024: push 0x6987c0 */ { u32 v = 0x6987c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8029: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005c802f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8030: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c8035u); f_00624720();
    /* 005c8035: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8038: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c803a: je 0x5c8093 */ if (fZ) goto L_005c8093;
L_005c803c:; BB(0x005c803c);
    /* 005c803c: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005c8042: mov dword ptr [edx + 0x1cb0], 4 */ W32((u32)(r_edx+0x1cb0u), 0x4u);
    /* 005c804c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c804e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c8053u); f_0048ab58();
    /* 005c8053: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8056: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 005c805c: cmp dword ptr [ebp - 0x110], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8063: je 0x5c807e */ if (fZ) goto L_005c807e;
L_005c8065:; BB(0x005c8065);
    /* 005c8065: mov eax, dword ptr [0x6fc470] */ r_eax = R32((u32)(0x6fc470u));
    /* 005c806a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c806b: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005c8071: call 0x506380 */ r_esp -= 4; W32(r_esp, 0x5c8076u); f_00506380();
    /* 005c8076: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 005c807c: jmp 0x5c8088 */ goto L_005c8088;
L_005c807e:; BB(0x005c807e);
    /* 005c807e: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
L_005c8088:; BB(0x005c8088);
    /* 005c8088: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 005c808e: jmp 0x5c824b */ goto L_005c824b;
L_005c8093:; BB(0x005c8093);
    /* 005c8093: push 0x6987d0 */ { u32 v = 0x6987d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8098: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005c809e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c809f: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c80a4u); f_00624720();
    /* 005c80a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c80a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c80a9: je 0x5c8102 */ if (fZ) goto L_005c8102;
L_005c80ab:; BB(0x005c80ab);
    /* 005c80ab: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005c80b1: mov dword ptr [edx + 0x1cb0], 0 */ W32((u32)(r_edx+0x1cb0u), 0x0u);
    /* 005c80bb: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c80bd: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c80c2u); f_0048ab58();
    /* 005c80c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c80c5: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 005c80cb: cmp dword ptr [ebp - 0x114], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c80d2: je 0x5c80ed */ if (fZ) goto L_005c80ed;
L_005c80d4:; BB(0x005c80d4);
    /* 005c80d4: mov eax, dword ptr [0x6fc470] */ r_eax = R32((u32)(0x6fc470u));
    /* 005c80d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c80da: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005c80e0: call 0x41a8f0 */ r_esp -= 4; W32(r_esp, 0x5c80e5u); f_0041a8f0();
    /* 005c80e5: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 005c80eb: jmp 0x5c80f7 */ goto L_005c80f7;
L_005c80ed:; BB(0x005c80ed);
    /* 005c80ed: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_005c80f7:; BB(0x005c80f7);
    /* 005c80f7: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 005c80fd: jmp 0x5c824b */ goto L_005c824b;
L_005c8102:; BB(0x005c8102);
    /* 005c8102: push 0x6987dc */ { u32 v = 0x6987dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8107: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005c810d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c810e: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c8113u); f_00624720();
    /* 005c8113: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8116: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8118: je 0x5c8171 */ if (fZ) goto L_005c8171;
L_005c811a:; BB(0x005c811a);
    /* 005c811a: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005c8120: mov dword ptr [edx + 0x1cb0], 3 */ W32((u32)(r_edx+0x1cb0u), 0x3u);
    /* 005c812a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c812c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c8131u); f_0048ab58();
    /* 005c8131: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8134: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 005c813a: cmp dword ptr [ebp - 0x118], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8141: je 0x5c815c */ if (fZ) goto L_005c815c;
L_005c8143:; BB(0x005c8143);
    /* 005c8143: mov eax, dword ptr [0x6fc470] */ r_eax = R32((u32)(0x6fc470u));
    /* 005c8148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8149: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005c814f: call 0x49fe10 */ r_esp -= 4; W32(r_esp, 0x5c8154u); f_0049fe10();
    /* 005c8154: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 005c815a: jmp 0x5c8166 */ goto L_005c8166;
L_005c815c:; BB(0x005c815c);
    /* 005c815c: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
L_005c8166:; BB(0x005c8166);
    /* 005c8166: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 005c816c: jmp 0x5c824b */ goto L_005c824b;
L_005c8171:; BB(0x005c8171);
    /* 005c8171: push 0x6987e4 */ { u32 v = 0x6987e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8176: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005c817c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c817d: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c8182u); f_00624720();
    /* 005c8182: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8185: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8187: je 0x5c81dd */ if (fZ) goto L_005c81dd;
L_005c8189:; BB(0x005c8189);
    /* 005c8189: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005c818f: mov dword ptr [edx + 0x1cb0], 1 */ W32((u32)(r_edx+0x1cb0u), 0x1u);
    /* 005c8199: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c819b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c81a0u); f_0048ab58();
    /* 005c81a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c81a3: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 005c81a9: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c81b0: je 0x5c81cb */ if (fZ) goto L_005c81cb;
L_005c81b2:; BB(0x005c81b2);
    /* 005c81b2: mov eax, dword ptr [0x6fc470] */ r_eax = R32((u32)(0x6fc470u));
    /* 005c81b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c81b8: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005c81be: call 0x43f530 */ r_esp -= 4; W32(r_esp, 0x5c81c3u); f_0043f530();
    /* 005c81c3: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 005c81c9: jmp 0x5c81d5 */ goto L_005c81d5;
L_005c81cb:; BB(0x005c81cb);
    /* 005c81cb: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
L_005c81d5:; BB(0x005c81d5);
    /* 005c81d5: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 005c81db: jmp 0x5c824b */ goto L_005c824b;
L_005c81dd:; BB(0x005c81dd);
    /* 005c81dd: push 0x6987ec */ { u32 v = 0x6987ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005c81e2: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 005c81e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c81e9: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c81eeu); f_00624720();
    /* 005c81ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c81f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c81f3: je 0x5c8249 */ if (fZ) goto L_005c8249;
L_005c81f5:; BB(0x005c81f5);
    /* 005c81f5: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005c81fb: mov dword ptr [edx + 0x1cb0], 5 */ W32((u32)(r_edx+0x1cb0u), 0x5u);
    /* 005c8205: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8207: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c820cu); f_0048ab58();
    /* 005c820c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c820f: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 005c8215: cmp dword ptr [ebp - 0x120], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c821c: je 0x5c8237 */ if (fZ) goto L_005c8237;
L_005c821e:; BB(0x005c821e);
    /* 005c821e: mov eax, dword ptr [0x6fc470] */ r_eax = R32((u32)(0x6fc470u));
    /* 005c8223: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8224: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 005c822a: call 0x5d1920 */ r_esp -= 4; W32(r_esp, 0x5c822fu); f_005d1920();
    /* 005c822f: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 005c8235: jmp 0x5c8241 */ goto L_005c8241;
L_005c8237:; BB(0x005c8237);
    /* 005c8237: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
L_005c8241:; BB(0x005c8241);
    /* 005c8241: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 005c8247: jmp 0x5c824b */ goto L_005c824b;
L_005c8249:; BB(0x005c8249);
    /* 005c8249: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c824b:; BB(0x005c824b);
    /* 005c824b: mov esp, ebp */ r_esp = r_ebp;
    /* 005c824d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c824e: ret  */ FN_RET(0x005c7eb1); r_esp += 4; return;
}

void f_005c824f(void) /* FUN_005c824f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c824f);
    /* 005c824f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8250: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8252: push 0x6987f8 */ { u32 v = 0x6987f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8257: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c825a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c825b: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c8260u); f_00624720();
    /* 005c8260: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8263: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8265: je 0x5c8271 */ if (fZ) goto L_005c8271;
L_005c8267:; BB(0x005c8267);
    /* 005c8267: mov eax, 1 */ r_eax = 0x1u;
    /* 005c826c: jmp 0x5c833d */ goto L_005c833d;
L_005c8271:; BB(0x005c8271);
    /* 005c8271: push 0x69880c */ { u32 v = 0x69880cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8276: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8279: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c827a: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c827fu); f_00624720();
    /* 005c827f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8282: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8284: je 0x5c8290 */ if (fZ) goto L_005c8290;
L_005c8286:; BB(0x005c8286);
    /* 005c8286: mov eax, 1 */ r_eax = 0x1u;
    /* 005c828b: jmp 0x5c833d */ goto L_005c833d;
L_005c8290:; BB(0x005c8290);
    /* 005c8290: push 0x698818 */ { u32 v = 0x698818u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8295: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c8298: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8299: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c829eu); f_00624720();
    /* 005c829e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c82a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c82a3: je 0x5c82af */ if (fZ) goto L_005c82af;
L_005c82a5:; BB(0x005c82a5);
    /* 005c82a5: mov eax, 1 */ r_eax = 0x1u;
    /* 005c82aa: jmp 0x5c833d */ goto L_005c833d;
L_005c82af:; BB(0x005c82af);
    /* 005c82af: push 0x698824 */ { u32 v = 0x698824u; r_esp -= 4; W32(r_esp, v); }
    /* 005c82b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c82b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c82b8: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c82bdu); f_00624720();
    /* 005c82bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c82c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c82c2: je 0x5c82cb */ if (fZ) goto L_005c82cb;
L_005c82c4:; BB(0x005c82c4);
    /* 005c82c4: mov eax, 1 */ r_eax = 0x1u;
    /* 005c82c9: jmp 0x5c833d */ goto L_005c833d;
L_005c82cb:; BB(0x005c82cb);
    /* 005c82cb: push 0x698834 */ { u32 v = 0x698834u; r_esp -= 4; W32(r_esp, v); }
    /* 005c82d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c82d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c82d4: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c82d9u); f_00624720();
    /* 005c82d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c82dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c82de: je 0x5c82e7 */ if (fZ) goto L_005c82e7;
L_005c82e0:; BB(0x005c82e0);
    /* 005c82e0: mov eax, 1 */ r_eax = 0x1u;
    /* 005c82e5: jmp 0x5c833d */ goto L_005c833d;
L_005c82e7:; BB(0x005c82e7);
    /* 005c82e7: push 0x698840 */ { u32 v = 0x698840u; r_esp -= 4; W32(r_esp, v); }
    /* 005c82ec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c82ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c82f0: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c82f5u); f_00624720();
    /* 005c82f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c82f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c82fa: je 0x5c8303 */ if (fZ) goto L_005c8303;
L_005c82fc:; BB(0x005c82fc);
    /* 005c82fc: mov eax, 1 */ r_eax = 0x1u;
    /* 005c8301: jmp 0x5c833d */ goto L_005c833d;
L_005c8303:; BB(0x005c8303);
    /* 005c8303: push 0x698848 */ { u32 v = 0x698848u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8308: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c830b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c830c: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c8311u); f_00624720();
    /* 005c8311: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8314: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8316: je 0x5c831f */ if (fZ) goto L_005c831f;
L_005c8318:; BB(0x005c8318);
    /* 005c8318: mov eax, 1 */ r_eax = 0x1u;
    /* 005c831d: jmp 0x5c833d */ goto L_005c833d;
L_005c831f:; BB(0x005c831f);
    /* 005c831f: push 0x698850 */ { u32 v = 0x698850u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8324: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8327: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8328: call 0x624720 */ r_esp -= 4; W32(r_esp, 0x5c832du); f_00624720();
    /* 005c832d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8330: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8332: je 0x5c833b */ if (fZ) goto L_005c833b;
L_005c8334:; BB(0x005c8334);
    /* 005c8334: mov eax, 1 */ r_eax = 0x1u;
    /* 005c8339: jmp 0x5c833d */ goto L_005c833d;
L_005c833b:; BB(0x005c833b);
    /* 005c833b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c833d:; BB(0x005c833d);
    /* 005c833d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c833e: ret  */ FN_RET(0x005c824f); r_esp += 4; return;
}

void f_005c8340(void) /* FUN_005c8340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8340);
    /* 005c8340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8341: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c834a: call 0x5c7a51 */ r_esp -= 4; W32(r_esp, 0x5c834fu); f_005c7a51();
    /* 005c834f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c8352: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c8355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8357: je 0x5c8365 */ if (fZ) goto L_005c8365;
L_005c8359:; BB(0x005c8359);
    /* 005c8359: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c835c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c835d: call 0x48ac1b */ r_esp -= 4; W32(r_esp, 0x5c8362u); f_0048ac1b();
    /* 005c8362: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c8365:; BB(0x005c8365);
    /* 005c8365: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8368: mov esp, ebp */ r_esp = r_ebp;
    /* 005c836a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c836b: ret 4 */ FN_RET(0x005c8340); r_esp += 8; return;
}

void f_005c8370(void) /* FUN_005c8370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8370);
    /* 005c8370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8371: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8373: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8376: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c8379: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c837c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c837f: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5c8384u); f_005ea257();
    /* 005c8384: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8387: jne 0x5c83c3 */ if (!fZ) goto L_005c83c3;
L_005c8389:; BB(0x005c8389);
    /* 005c8389: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c8390: jmp 0x5c839b */ goto L_005c839b;
L_005c8392:; BB(0x005c8392);
    /* 005c8392: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8395: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8398: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c839b:; BB(0x005c839b);
    /* 005c839b: cmp dword ptr [ebp - 4], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c83a2: jge 0x5c83c3 */ if ((fS==fO)) goto L_005c83c3;
L_005c83a4:; BB(0x005c83a4);
    /* 005c83a4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c83a7: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005c83ac: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005c83b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c83b3: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005c83b8: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005c83bc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c83be: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x5c83c1u); call_ind(t); }
    /* 005c83c1: jmp 0x5c8392 */ goto L_005c8392;
L_005c83c3:; BB(0x005c83c3);
    /* 005c83c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c83c6: call 0x5d7943 */ r_esp -= 4; W32(r_esp, 0x5c83cbu); f_005d7943();
    /* 005c83cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005c83cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c83ce: ret  */ FN_RET(0x005c8370); r_esp += 4; return;
}

void f_005c83cf(void) /* FUN_005c83cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c83cf);
    /* 005c83cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c83d0: mov ebp, esp */ r_ebp = r_esp;
    /* 005c83d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c83d3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c83d6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c83d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c83da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c83dd: call 0x426b30 */ r_esp -= 4; W32(r_esp, 0x5c83e2u); f_00426b30();
    /* 005c83e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c83e5: mov dword ptr [ecx], 0x63ad2c */ W32((u32)(r_ecx), 0x63ad2cu);
    /* 005c83eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c83ee: mov dword ptr [edx + 0xe8], 0 */ W32((u32)(r_edx+0xe8u), 0x0u);
    /* 005c83f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c83fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005c83fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c83fe: ret 4 */ FN_RET(0x005c83cf); r_esp += 8; return;
}

void f_005c8401(void) /* FUN_005c8401 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8401);
    /* 005c8401: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8402: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8404: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8405: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8408: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c840b: mov dword ptr [eax], 0x63ad2c */ W32((u32)(r_eax), 0x63ad2cu);
    /* 005c8411: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8414: call 0x426c3d */ r_esp -= 4; W32(r_esp, 0x5c8419u); f_00426c3d();
    /* 005c8419: mov esp, ebp */ r_esp = r_ebp;
    /* 005c841b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c841c: ret  */ FN_RET(0x005c8401); r_esp += 4; return;
}

void f_005c841d(void) /* FUN_005c841d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c841d);
    /* 005c841d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c841e: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8420: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8421: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8424: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8427: mov dword ptr [eax + 0xe8], 0 */ W32((u32)(r_eax+0xe8u), 0x0u);
    /* 005c8431: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8434: call 0x426d9d */ r_esp -= 4; W32(r_esp, 0x5c8439u); f_00426d9d();
    /* 005c8439: mov esp, ebp */ r_esp = r_ebp;
    /* 005c843b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c843c: ret  */ FN_RET(0x005c841d); r_esp += 4; return;
}

void f_005c843d(void) /* FUN_005c843d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c843d);
    /* 005c843d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c843e: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8440: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8441: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8444: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8447: cmp dword ptr [eax + 0xe8], 0 */ {  u32 a = R32((u32)(r_eax+0xe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c844e: je 0x5c8452 */ if (fZ) goto L_005c8452;
L_005c8450:; BB(0x005c8450);
    /* 005c8450: jmp 0x5c845e */ goto L_005c845e;
L_005c8452:; BB(0x005c8452);
    /* 005c8452: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8455: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8456: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8459: call 0x427392 */ r_esp -= 4; W32(r_esp, 0x5c845eu); f_00427392();
L_005c845e:; BB(0x005c845e);
    /* 005c845e: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8460: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8461: ret 4 */ FN_RET(0x005c843d); r_esp += 8; return;
}

void f_005c8464(void) /* FUN_005c8464 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8464);
    /* 005c8464: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8465: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8467: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8468: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c846b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c846e: mov dword ptr [eax + 0xe8], 0 */ W32((u32)(r_eax+0xe8u), 0x0u);
    /* 005c8478: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c847b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c847c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c847f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8480: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8483: call 0x427a2f */ r_esp -= 4; W32(r_esp, 0x5c8488u); f_00427a2f();
    /* 005c8488: mov esp, ebp */ r_esp = r_ebp;
    /* 005c848a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c848b: ret 8 */ FN_RET(0x005c8464); r_esp += 12; return;
}

void f_005c848e(void) /* FUN_005c848e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c848e);
    /* 005c848e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c848f: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8491: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8494: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c8495: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c8498: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c849b: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 005c84a1: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005c84a7: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005c84ab: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c84ae: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c84b1: call 0x42727e */ r_esp -= 4; W32(r_esp, 0x5c84b6u); f_0042727e();
    /* 005c84b6: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c84bd: jne 0x5c8516 */ if (!fZ) goto L_005c8516;
L_005c84bf:; BB(0x005c84bf);
    /* 005c84bf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c84c2: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 005c84c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c84c9: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005c84ce: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c84d1: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005c84d7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c84da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c84dc: call dword ptr [edx + 0x98] */ { u32 t = R32((u32)(r_edx+0x98u)); r_esp -= 4; W32(r_esp, 0x5c84e2u); call_ind(t); }
    /* 005c84e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c84e4: je 0x5c8516 */ if (fZ) goto L_005c8516;
L_005c84e6:; BB(0x005c84e6);
    /* 005c84e6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c84e9: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 005c84ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c84f0: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005c84f6: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c84f9: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005c84fe: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c8501: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c8503: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x5c8506u); call_ind(t); }
    /* 005c8506: mov ecx, eax */ r_ecx = r_eax;
    /* 005c8508: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5c850du); f_004259a0();
    /* 005c850d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c850f: jne 0x5c8516 */ if (!fZ) goto L_005c8516;
L_005c8511:; BB(0x005c8511);
    /* 005c8511: jmp 0x5c865c */ goto L_005c865c;
L_005c8516:; BB(0x005c8516);
    /* 005c8516: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8519: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c851d: je 0x5c8556 */ if (fZ) goto L_005c8556;
L_005c851f:; BB(0x005c851f);
    /* 005c851f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8522: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c8525: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c8528: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c852b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c852e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8532: je 0x5c8545 */ if (fZ) goto L_005c8545;
L_005c8534:; BB(0x005c8534);
    /* 005c8534: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8536: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8539: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c853b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c853e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5c8540u); call_ind(t); }
    /* 005c8540: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c8543: jmp 0x5c854c */ goto L_005c854c;
L_005c8545:; BB(0x005c8545);
    /* 005c8545: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005c854c:; BB(0x005c854c);
    /* 005c854c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c854f: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_005c8556:; BB(0x005c8556);
    /* 005c8556: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8559: cmp dword ptr [edx + 0xc4], 0 */ {  u32 a = R32((u32)(r_edx+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8560: jle 0x5c865c */ if ((fZ||fS!=fO)) goto L_005c865c;
L_005c8566:; BB(0x005c8566);
    /* 005c8566: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 005c856b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c8570u); f_0048ab58();
    /* 005c8570: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8573: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c8576: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c857a: je 0x5c8589 */ if (fZ) goto L_005c8589;
L_005c857c:; BB(0x005c857c);
    /* 005c857c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c857f: call 0x5d4d90 */ r_esp -= 4; W32(r_esp, 0x5c8584u); f_005d4d90();
    /* 005c8584: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c8587: jmp 0x5c8590 */ goto L_005c8590;
L_005c8589:; BB(0x005c8589);
    /* 005c8589: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005c8590:; BB(0x005c8590);
    /* 005c8590: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8593: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8596: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 005c8599: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c859c: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 005c85a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c85a3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c85a6: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005c85a9: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c85aeu); f_005ea0c3();
    /* 005c85ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c85b1: mov eax, dword ptr [edx + 0x3b0] */ r_eax = R32((u32)(r_edx+0x3b0u));
    /* 005c85b7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c85ba: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005c85bd: imul esi, esi, 3 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c85c0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c85c2: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5c85c7u); f_0060ee31();
    /* 005c85c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c85ca: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c85cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c85cd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c85d0: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005c85d3: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5c85d8u); f_005ea1cf();
    /* 005c85d8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c85db: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005c85de: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c85e1: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005c85e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c85e6: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5c85e9u); call_ind(t); }
    /* 005c85e9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c85ec: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 005c85f2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c85f5: add edx, dword ptr [eax + 0xb8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c85fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c85fc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c85ff: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 005c8605: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8608: add edx, dword ptr [eax + 0xb4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xb4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c860e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c860f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8612: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005c8615: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8618: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c861b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c861d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c8620u); call_ind(t); }
    /* 005c8620: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8623: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 005c8629: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c862c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c862d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8630: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005c8633: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8636: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005c8639: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c863b: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c863eu); call_ind(t); }
    /* 005c863e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8640: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8643: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005c8646: call 0x5ea514 */ r_esp -= 4; W32(r_esp, 0x5c864bu); f_005ea514();
    /* 005c864b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c864e: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005c8651: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8654: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005c8657: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c8659: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5c865cu); call_ind(t); }
L_005c865c:; BB(0x005c865c);
    /* 005c865c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c865d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c865f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8660: ret  */ FN_RET(0x005c848e); r_esp += 4; return;
}

void f_005c8661(void) /* FUN_005c8661 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8661);
    /* 005c8661: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8662: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8664: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8665: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8668: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c866a: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005c8670: call 0x5cc586 */ r_esp -= 4; W32(r_esp, 0x5c8675u); f_005cc586();
    /* 005c8675: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8677: jne 0x5c868e */ if (!fZ) goto L_005c868e;
L_005c8679:; BB(0x005c8679);
    /* 005c8679: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c867c: mov dword ptr [eax + 0xe8], 0 */ W32((u32)(r_eax+0xe8u), 0x0u);
    /* 005c8686: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8689: call 0x42727e */ r_esp -= 4; W32(r_esp, 0x5c868eu); f_0042727e();
L_005c868e:; BB(0x005c868e);
    /* 005c868e: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8690: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8691: ret  */ FN_RET(0x005c8661); r_esp += 4; return;
}

void f_005c8692(void) /* FUN_005c8692 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8692);
    /* 005c8692: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8693: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8695: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8696: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8699: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c869c: call 0x427c22 */ r_esp -= 4; W32(r_esp, 0x5c86a1u); f_00427c22();
    /* 005c86a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c86a4: mov dword ptr [eax], 0x63ad94 */ W32((u32)(r_eax), 0x63ad94u);
    /* 005c86aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c86ad: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
    /* 005c86b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c86ba: mov esp, ebp */ r_esp = r_ebp;
    /* 005c86bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c86bd: ret  */ FN_RET(0x005c8692); r_esp += 4; return;
}

void f_005c86be(void) /* FUN_005c86be */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c86be);
    /* 005c86be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c86bf: mov ebp, esp */ r_ebp = r_esp;
    /* 005c86c1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c86c4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c86c7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c86ca: mov dword ptr [eax], 0x63ad94 */ W32((u32)(r_eax), 0x63ad94u);
    /* 005c86d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c86d3: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005c86d9: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c86dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c86df: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c86e2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c86e6: je 0x5c86f9 */ if (fZ) goto L_005c86f9;
L_005c86e8:; BB(0x005c86e8);
    /* 005c86e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c86ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c86ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c86ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c86f2: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c86f4u); call_ind(t); }
    /* 005c86f4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c86f7: jmp 0x5c8700 */ goto L_005c8700;
L_005c86f9:; BB(0x005c86f9);
    /* 005c86f9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005c8700:; BB(0x005c8700);
    /* 005c8700: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8703: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 005c870d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8710: call 0x427cb2 */ r_esp -= 4; W32(r_esp, 0x5c8715u); f_00427cb2();
    /* 005c8715: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8717: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8718: ret  */ FN_RET(0x005c86be); r_esp += 4; return;
}

void f_005c8719(void) /* FUN_005c8719 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8719);
    /* 005c8719: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c871a: mov ebp, esp */ r_ebp = r_esp;
    /* 005c871c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c871f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c8722: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8727: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c872cu); f_0048ab58();
    /* 005c872c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c872f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c8732: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8736: je 0x5c8749 */ if (fZ) goto L_005c8749;
L_005c8738:; BB(0x005c8738);
    /* 005c8738: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c873b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c873c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c873f: call 0x5c83cf */ r_esp -= 4; W32(r_esp, 0x5c8744u); f_005c83cf();
    /* 005c8744: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c8747: jmp 0x5c8750 */ goto L_005c8750;
L_005c8749:; BB(0x005c8749);
    /* 005c8749: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005c8750:; BB(0x005c8750);
    /* 005c8750: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8753: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8755: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8756: ret  */ FN_RET(0x005c8719); r_esp += 4; return;
}

void f_005c8757(void) /* FUN_005c8757 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8757);
    /* 005c8757: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8758: mov ebp, esp */ r_ebp = r_esp;
    /* 005c875a: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c875d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c8760: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005c8766: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5c876bu); f_005cd326();
    /* 005c876b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c876e: mov eax, dword ptr [0x6f6eec] */ r_eax = R32((u32)(0x6f6eecu));
    /* 005c8773: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c8776: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005c877c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c877f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c8781: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5c8784u); call_ind(t); }
    /* 005c8784: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c8787: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c878e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c8795: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c879c: je 0x5c880c */ if (fZ) goto L_005c880c;
L_005c879e:; BB(0x005c879e);
    /* 005c879e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c87a1: call 0x425bad */ r_esp -= 4; W32(r_esp, 0x5c87a6u); f_00425bad();
    /* 005c87a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c87a8: jne 0x5c87cf */ if (!fZ) goto L_005c87cf;
L_005c87aa:; BB(0x005c87aa);
    /* 005c87aa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c87ad: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c87b0: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005c87b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c87b4: mov edx, dword ptr [0x6fc388] */ r_edx = R32((u32)(0x6fc388u));
    /* 005c87ba: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c87bd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c87c0: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005c87c6: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005c87ca: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x5c87cfu); f_00425bfe();
L_005c87cf:; BB(0x005c87cf);
    /* 005c87cf: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005c87d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c87d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c87d6: call 0x425b89 */ r_esp -= 4; W32(r_esp, 0x5c87dbu); f_00425b89();
    /* 005c87db: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c87df: je 0x5c87e9 */ if (fZ) goto L_005c87e9;
L_005c87e1:; BB(0x005c87e1);
    /* 005c87e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c87e4: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c87e7: jmp 0x5c87f1 */ goto L_005c87f1;
L_005c87e9:; BB(0x005c87e9);
    /* 005c87e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c87ec: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c87ee: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_005c87f1:; BB(0x005c87f1);
    /* 005c87f1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c87f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c87f5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c87f8: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 005c87fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c87ff: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 005c8805: call 0x5d2938 */ r_esp -= 4; W32(r_esp, 0x5c880au); f_005d2938();
    /* 005c880a: jmp 0x5c8848 */ goto L_005c8848;
L_005c880c:; BB(0x005c880c);
    /* 005c880c: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005c8812: call 0x5cf55e */ r_esp -= 4; W32(r_esp, 0x5c8817u); f_005cf55e();
    /* 005c8817: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c881a: jle 0x5c8832 */ if ((fZ||fS!=fO)) goto L_005c8832;
L_005c881c:; BB(0x005c881c);
    /* 005c881c: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005c8821: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c8824: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005c882a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c882d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c882f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c8832u); call_ind(t); }
L_005c8832:; BB(0x005c8832);
    /* 005c8832: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8834: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c8837: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8838: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c883b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c883c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c883f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8840: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c8843: call 0x4282cb */ r_esp -= 4; W32(r_esp, 0x5c8848u); f_004282cb();
L_005c8848:; BB(0x005c8848);
    /* 005c8848: mov esp, ebp */ r_esp = r_ebp;
    /* 005c884a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c884b: ret 0x10 */ FN_RET(0x005c8757); r_esp += 20; return;
}

void f_005c884e(void) /* FUN_005c884e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c884e);
    /* 005c884e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c884f: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8851: sub esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8857: mov dword ptr [ebp - 0x164], ecx */ W32((u32)(r_ebp+0xfffffe9cu), r_ecx);
    /* 005c885d: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8863: call 0x5e9e15 */ r_esp -= 4; W32(r_esp, 0x5c8868u); f_005e9e15();
    /* 005c8868: mov word ptr [ebp - 0x15c], 0xfffd */ W16((u32)(r_ebp+0xfffffea4u), 0xfffdu);
    /* 005c8871: mov word ptr [ebp - 0x15a], 0 */ W16((u32)(r_ebp+0xfffffea6u), 0x0u);
    /* 005c887a: mov word ptr [ebp - 0x158], 3 */ W16((u32)(r_ebp+0xfffffea8u), 0x3u);
    /* 005c8883: mov word ptr [ebp - 0x156], 0 */ W16((u32)(r_ebp+0xfffffeaau), 0x0u);
    /* 005c888c: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c8892: mov word ptr [ebp - 6], 0xfffd */ W16((u32)(r_ebp+0xfffffffau), 0xfffdu);
    /* 005c8898: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c889e: mov word ptr [ebp - 2], 3 */ W16((u32)(r_ebp+0xfffffffeu), 0x3u);
    /* 005c88a4: mov word ptr [ebp - 0x154], 0x23 */ W16((u32)(r_ebp+0xfffffeacu), 0x23u);
    /* 005c88ad: mov word ptr [ebp - 0x152], 0x11 */ W16((u32)(r_ebp+0xfffffeaeu), 0x11u);
    /* 005c88b6: mov word ptr [ebp - 0x150], 0xb */ W16((u32)(r_ebp+0xfffffeb0u), 0xbu);
    /* 005c88bf: mov word ptr [ebp - 0x14e], 8 */ W16((u32)(r_ebp+0xfffffeb2u), 0x8u);
    /* 005c88c8: mov word ptr [ebp - 0x14c], 6 */ W16((u32)(r_ebp+0xfffffeb4u), 0x6u);
    /* 005c88d1: mov word ptr [ebp - 0x14a], 5 */ W16((u32)(r_ebp+0xfffffeb6u), 0x5u);
    /* 005c88da: mov word ptr [ebp - 0x148], 2 */ W16((u32)(r_ebp+0xfffffeb8u), 0x2u);
    /* 005c88e3: mov word ptr [ebp - 0x146], 1 */ W16((u32)(r_ebp+0xfffffebau), 0x1u);
    /* 005c88ec: mov word ptr [ebp - 0x144], 0 */ W16((u32)(r_ebp+0xfffffebcu), 0x0u);
    /* 005c88f5: mov word ptr [ebp - 0x142], 0 */ W16((u32)(r_ebp+0xfffffebeu), 0x0u);
    /* 005c88fe: mov word ptr [ebp - 0x140], 0 */ W16((u32)(r_ebp+0xfffffec0u), 0x0u);
    /* 005c8907: mov word ptr [ebp - 0x13e], 0 */ W16((u32)(r_ebp+0xfffffec2u), 0x0u);
    /* 005c8910: mov word ptr [ebp - 0x13c], 0 */ W16((u32)(r_ebp+0xfffffec4u), 0x0u);
    /* 005c8919: mov word ptr [ebp - 0x13a], 0 */ W16((u32)(r_ebp+0xfffffec6u), 0x0u);
    /* 005c8922: mov word ptr [ebp - 0x138], 0 */ W16((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 005c892b: mov word ptr [ebp - 0x136], 0 */ W16((u32)(r_ebp+0xfffffecau), 0x0u);
    /* 005c8934: mov word ptr [ebp - 0x134], 0 */ W16((u32)(r_ebp+0xfffffeccu), 0x0u);
    /* 005c893d: mov word ptr [ebp - 0x132], 0 */ W16((u32)(r_ebp+0xfffffeceu), 0x0u);
    /* 005c8946: mov word ptr [ebp - 0x130], 0 */ W16((u32)(r_ebp+0xfffffed0u), 0x0u);
    /* 005c894f: mov word ptr [ebp - 0x12e], 0 */ W16((u32)(r_ebp+0xfffffed2u), 0x0u);
    /* 005c8958: mov word ptr [ebp - 0x12c], 0 */ W16((u32)(r_ebp+0xfffffed4u), 0x0u);
    /* 005c8961: mov word ptr [ebp - 0x12a], 0 */ W16((u32)(r_ebp+0xfffffed6u), 0x0u);
    /* 005c896a: mov word ptr [ebp - 0x128], 0 */ W16((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 005c8973: mov word ptr [ebp - 0x126], 0 */ W16((u32)(r_ebp+0xfffffedau), 0x0u);
    /* 005c897c: mov word ptr [ebp - 0x124], 0 */ W16((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 005c8985: mov word ptr [ebp - 0x122], 0 */ W16((u32)(r_ebp+0xfffffedeu), 0x0u);
    /* 005c898e: mov word ptr [ebp - 0x120], 0 */ W16((u32)(r_ebp+0xfffffee0u), 0x0u);
    /* 005c8997: mov word ptr [ebp - 0x11e], 0 */ W16((u32)(r_ebp+0xfffffee2u), 0x0u);
    /* 005c89a0: mov word ptr [ebp - 0x11c], 0 */ W16((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 005c89a9: mov word ptr [ebp - 0x11a], 0 */ W16((u32)(r_ebp+0xfffffee6u), 0x0u);
    /* 005c89b2: mov word ptr [ebp - 0x118], 0 */ W16((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 005c89bb: mov word ptr [ebp - 0x116], 0 */ W16((u32)(r_ebp+0xfffffeeau), 0x0u);
    /* 005c89c4: mov word ptr [ebp - 0x114], 0 */ W16((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 005c89cd: mov word ptr [ebp - 0x112], 0 */ W16((u32)(r_ebp+0xfffffeeeu), 0x0u);
    /* 005c89d6: mov word ptr [ebp - 0x110], 0 */ W16((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 005c89df: mov word ptr [ebp - 0x10e], 0 */ W16((u32)(r_ebp+0xfffffef2u), 0x0u);
    /* 005c89e8: mov word ptr [ebp - 0x10c], 0 */ W16((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 005c89f1: mov word ptr [ebp - 0x10a], 0 */ W16((u32)(r_ebp+0xfffffef6u), 0x0u);
    /* 005c89fa: mov word ptr [ebp - 0x108], 0 */ W16((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 005c8a03: mov word ptr [ebp - 0x106], 0 */ W16((u32)(r_ebp+0xfffffefau), 0x0u);
    /* 005c8a0c: mov word ptr [ebp - 0x104], 0 */ W16((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 005c8a15: mov word ptr [ebp - 0x102], 0 */ W16((u32)(r_ebp+0xfffffefeu), 0x0u);
    /* 005c8a1e: mov word ptr [ebp - 0x100], 0 */ W16((u32)(r_ebp+0xffffff00u), 0x0u);
    /* 005c8a27: mov word ptr [ebp - 0xfe], 0 */ W16((u32)(r_ebp+0xffffff02u), 0x0u);
    /* 005c8a30: mov word ptr [ebp - 0xfc], 0 */ W16((u32)(r_ebp+0xffffff04u), 0x0u);
    /* 005c8a39: mov word ptr [ebp - 0xfa], 0 */ W16((u32)(r_ebp+0xffffff06u), 0x0u);
    /* 005c8a42: mov word ptr [ebp - 0xf8], 1 */ W16((u32)(r_ebp+0xffffff08u), 0x1u);
    /* 005c8a4b: mov word ptr [ebp - 0xf6], 1 */ W16((u32)(r_ebp+0xffffff0au), 0x1u);
    /* 005c8a54: mov word ptr [ebp - 0xf4], 1 */ W16((u32)(r_ebp+0xffffff0cu), 0x1u);
    /* 005c8a5d: mov word ptr [ebp - 0xf2], 1 */ W16((u32)(r_ebp+0xffffff0eu), 0x1u);
    /* 005c8a66: mov word ptr [ebp - 0xf0], 1 */ W16((u32)(r_ebp+0xffffff10u), 0x1u);
    /* 005c8a6f: mov word ptr [ebp - 0xee], 1 */ W16((u32)(r_ebp+0xffffff12u), 0x1u);
    /* 005c8a78: mov word ptr [ebp - 0xec], 1 */ W16((u32)(r_ebp+0xffffff14u), 0x1u);
    /* 005c8a81: mov word ptr [ebp - 0xea], 1 */ W16((u32)(r_ebp+0xffffff16u), 0x1u);
    /* 005c8a8a: mov word ptr [ebp - 0xe8], 1 */ W16((u32)(r_ebp+0xffffff18u), 0x1u);
    /* 005c8a93: mov word ptr [ebp - 0xe6], 1 */ W16((u32)(r_ebp+0xffffff1au), 0x1u);
    /* 005c8a9c: mov word ptr [ebp - 0xe4], 1 */ W16((u32)(r_ebp+0xffffff1cu), 0x1u);
    /* 005c8aa5: mov word ptr [ebp - 0xe2], 1 */ W16((u32)(r_ebp+0xffffff1eu), 0x1u);
    /* 005c8aae: mov word ptr [ebp - 0xe0], 1 */ W16((u32)(r_ebp+0xffffff20u), 0x1u);
    /* 005c8ab7: mov word ptr [ebp - 0xde], 1 */ W16((u32)(r_ebp+0xffffff22u), 0x1u);
    /* 005c8ac0: mov word ptr [ebp - 0xdc], 1 */ W16((u32)(r_ebp+0xffffff24u), 0x1u);
    /* 005c8ac9: mov word ptr [ebp - 0xda], 1 */ W16((u32)(r_ebp+0xffffff26u), 0x1u);
    /* 005c8ad2: mov word ptr [ebp - 0xd8], 1 */ W16((u32)(r_ebp+0xffffff28u), 0x1u);
    /* 005c8adb: mov word ptr [ebp - 0xd6], 1 */ W16((u32)(r_ebp+0xffffff2au), 0x1u);
    /* 005c8ae4: mov word ptr [ebp - 0xd4], 1 */ W16((u32)(r_ebp+0xffffff2cu), 0x1u);
    /* 005c8aed: mov word ptr [ebp - 0xd2], 1 */ W16((u32)(r_ebp+0xffffff2eu), 0x1u);
    /* 005c8af6: mov word ptr [ebp - 0xd0], 1 */ W16((u32)(r_ebp+0xffffff30u), 0x1u);
    /* 005c8aff: mov word ptr [ebp - 0xce], 1 */ W16((u32)(r_ebp+0xffffff32u), 0x1u);
    /* 005c8b08: mov word ptr [ebp - 0xcc], 1 */ W16((u32)(r_ebp+0xffffff34u), 0x1u);
    /* 005c8b11: mov word ptr [ebp - 0xca], 1 */ W16((u32)(r_ebp+0xffffff36u), 0x1u);
    /* 005c8b1a: mov word ptr [ebp - 0xc8], 1 */ W16((u32)(r_ebp+0xffffff38u), 0x1u);
    /* 005c8b23: mov word ptr [ebp - 0xc6], 1 */ W16((u32)(r_ebp+0xffffff3au), 0x1u);
    /* 005c8b2c: mov word ptr [ebp - 0xc4], 1 */ W16((u32)(r_ebp+0xffffff3cu), 0x1u);
    /* 005c8b35: mov word ptr [ebp - 0xc2], 1 */ W16((u32)(r_ebp+0xffffff3eu), 0x1u);
    /* 005c8b3e: mov word ptr [ebp - 0xc0], 1 */ W16((u32)(r_ebp+0xffffff40u), 0x1u);
    /* 005c8b47: mov word ptr [ebp - 0xbe], 1 */ W16((u32)(r_ebp+0xffffff42u), 0x1u);
    /* 005c8b50: mov word ptr [ebp - 0xbc], 1 */ W16((u32)(r_ebp+0xffffff44u), 0x1u);
    /* 005c8b59: mov word ptr [ebp - 0xba], 1 */ W16((u32)(r_ebp+0xffffff46u), 0x1u);
    /* 005c8b62: mov word ptr [ebp - 0xb8], 1 */ W16((u32)(r_ebp+0xffffff48u), 0x1u);
    /* 005c8b6b: mov word ptr [ebp - 0xb6], 1 */ W16((u32)(r_ebp+0xffffff4au), 0x1u);
    /* 005c8b74: mov word ptr [ebp - 0xb4], 1 */ W16((u32)(r_ebp+0xffffff4cu), 0x1u);
    /* 005c8b7d: mov word ptr [ebp - 0xb2], 1 */ W16((u32)(r_ebp+0xffffff4eu), 0x1u);
    /* 005c8b86: mov word ptr [ebp - 0xb0], 1 */ W16((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 005c8b8f: mov word ptr [ebp - 0xae], 1 */ W16((u32)(r_ebp+0xffffff52u), 0x1u);
    /* 005c8b98: mov word ptr [ebp - 0xac], 1 */ W16((u32)(r_ebp+0xffffff54u), 0x1u);
    /* 005c8ba1: mov word ptr [ebp - 0xaa], 1 */ W16((u32)(r_ebp+0xffffff56u), 0x1u);
    /* 005c8baa: mov word ptr [ebp - 0xa8], 1 */ W16((u32)(r_ebp+0xffffff58u), 0x1u);
    /* 005c8bb3: mov word ptr [ebp - 0xa6], 1 */ W16((u32)(r_ebp+0xffffff5au), 0x1u);
    /* 005c8bbc: mov word ptr [ebp - 0xa4], 1 */ W16((u32)(r_ebp+0xffffff5cu), 0x1u);
    /* 005c8bc5: mov word ptr [ebp - 0xa2], 1 */ W16((u32)(r_ebp+0xffffff5eu), 0x1u);
    /* 005c8bce: mov word ptr [ebp - 0xa0], 1 */ W16((u32)(r_ebp+0xffffff60u), 0x1u);
    /* 005c8bd7: mov word ptr [ebp - 0x9e], 1 */ W16((u32)(r_ebp+0xffffff62u), 0x1u);
    /* 005c8be0: mov word ptr [ebp - 0x9c], 1 */ W16((u32)(r_ebp+0xffffff64u), 0x1u);
    /* 005c8be9: mov word ptr [ebp - 0x9a], 1 */ W16((u32)(r_ebp+0xffffff66u), 0x1u);
    /* 005c8bf2: mov word ptr [ebp - 0x98], 1 */ W16((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 005c8bfb: mov word ptr [ebp - 0x96], 1 */ W16((u32)(r_ebp+0xffffff6au), 0x1u);
    /* 005c8c04: mov word ptr [ebp - 0x94], 1 */ W16((u32)(r_ebp+0xffffff6cu), 0x1u);
    /* 005c8c0d: mov word ptr [ebp - 0x92], 1 */ W16((u32)(r_ebp+0xffffff6eu), 0x1u);
    /* 005c8c16: mov word ptr [ebp - 0x90], 1 */ W16((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 005c8c1f: mov word ptr [ebp - 0x8e], 1 */ W16((u32)(r_ebp+0xffffff72u), 0x1u);
    /* 005c8c28: mov word ptr [ebp - 0x8c], 1 */ W16((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 005c8c31: mov word ptr [ebp - 0x8a], 1 */ W16((u32)(r_ebp+0xffffff76u), 0x1u);
    /* 005c8c3a: mov word ptr [ebp - 0x88], 1 */ W16((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 005c8c43: mov word ptr [ebp - 0x86], 1 */ W16((u32)(r_ebp+0xffffff7au), 0x1u);
    /* 005c8c4c: mov word ptr [ebp - 0x84], 1 */ W16((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 005c8c55: mov word ptr [ebp - 0x82], 1 */ W16((u32)(r_ebp+0xffffff7eu), 0x1u);
    /* 005c8c5e: mov word ptr [ebp - 0x80], 1 */ W16((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 005c8c64: mov word ptr [ebp - 0x7e], 2 */ W16((u32)(r_ebp+0xffffff82u), 0x2u);
    /* 005c8c6a: mov word ptr [ebp - 0x7c], 2 */ W16((u32)(r_ebp+0xffffff84u), 0x2u);
    /* 005c8c70: mov word ptr [ebp - 0x7a], 2 */ W16((u32)(r_ebp+0xffffff86u), 0x2u);
    /* 005c8c76: mov word ptr [ebp - 0x78], 2 */ W16((u32)(r_ebp+0xffffff88u), 0x2u);
    /* 005c8c7c: mov word ptr [ebp - 0x76], 2 */ W16((u32)(r_ebp+0xffffff8au), 0x2u);
    /* 005c8c82: mov word ptr [ebp - 0x74], 2 */ W16((u32)(r_ebp+0xffffff8cu), 0x2u);
    /* 005c8c88: mov word ptr [ebp - 0x72], 2 */ W16((u32)(r_ebp+0xffffff8eu), 0x2u);
    /* 005c8c8e: mov word ptr [ebp - 0x70], 2 */ W16((u32)(r_ebp+0xffffff90u), 0x2u);
    /* 005c8c94: mov word ptr [ebp - 0x6e], 2 */ W16((u32)(r_ebp+0xffffff92u), 0x2u);
    /* 005c8c9a: mov word ptr [ebp - 0x6c], 2 */ W16((u32)(r_ebp+0xffffff94u), 0x2u);
    /* 005c8ca0: mov word ptr [ebp - 0x6a], 2 */ W16((u32)(r_ebp+0xffffff96u), 0x2u);
    /* 005c8ca6: mov word ptr [ebp - 0x68], 2 */ W16((u32)(r_ebp+0xffffff98u), 0x2u);
    /* 005c8cac: mov word ptr [ebp - 0x66], 3 */ W16((u32)(r_ebp+0xffffff9au), 0x3u);
    /* 005c8cb2: mov word ptr [ebp - 0x64], 3 */ W16((u32)(r_ebp+0xffffff9cu), 0x3u);
    /* 005c8cb8: mov word ptr [ebp - 0x62], 3 */ W16((u32)(r_ebp+0xffffff9eu), 0x3u);
    /* 005c8cbe: mov word ptr [ebp - 0x60], 3 */ W16((u32)(r_ebp+0xffffffa0u), 0x3u);
    /* 005c8cc4: mov word ptr [ebp - 0x5e], 3 */ W16((u32)(r_ebp+0xffffffa2u), 0x3u);
    /* 005c8cca: mov word ptr [ebp - 0x5c], 3 */ W16((u32)(r_ebp+0xffffffa4u), 0x3u);
    /* 005c8cd0: mov word ptr [ebp - 0x5a], 3 */ W16((u32)(r_ebp+0xffffffa6u), 0x3u);
    /* 005c8cd6: mov word ptr [ebp - 0x58], 3 */ W16((u32)(r_ebp+0xffffffa8u), 0x3u);
    /* 005c8cdc: mov word ptr [ebp - 0x56], 3 */ W16((u32)(r_ebp+0xffffffaau), 0x3u);
    /* 005c8ce2: mov word ptr [ebp - 0x54], 3 */ W16((u32)(r_ebp+0xffffffacu), 0x3u);
    /* 005c8ce8: mov word ptr [ebp - 0x52], 3 */ W16((u32)(r_ebp+0xffffffaeu), 0x3u);
    /* 005c8cee: mov word ptr [ebp - 0x50], 3 */ W16((u32)(r_ebp+0xffffffb0u), 0x3u);
    /* 005c8cf4: mov word ptr [ebp - 0x4e], 3 */ W16((u32)(r_ebp+0xffffffb2u), 0x3u);
    /* 005c8cfa: mov word ptr [ebp - 0x4c], 3 */ W16((u32)(r_ebp+0xffffffb4u), 0x3u);
    /* 005c8d00: mov word ptr [ebp - 0x4a], 3 */ W16((u32)(r_ebp+0xffffffb6u), 0x3u);
    /* 005c8d06: mov word ptr [ebp - 0x48], 3 */ W16((u32)(r_ebp+0xffffffb8u), 0x3u);
    /* 005c8d0c: mov word ptr [ebp - 0x46], 3 */ W16((u32)(r_ebp+0xffffffbau), 0x3u);
    /* 005c8d12: mov word ptr [ebp - 0x44], 3 */ W16((u32)(r_ebp+0xffffffbcu), 0x3u);
    /* 005c8d18: mov word ptr [ebp - 0x42], 3 */ W16((u32)(r_ebp+0xffffffbeu), 0x3u);
    /* 005c8d1e: mov word ptr [ebp - 0x40], 3 */ W16((u32)(r_ebp+0xffffffc0u), 0x3u);
    /* 005c8d24: mov word ptr [ebp - 0x3e], 3 */ W16((u32)(r_ebp+0xffffffc2u), 0x3u);
    /* 005c8d2a: mov word ptr [ebp - 0x3c], 3 */ W16((u32)(r_ebp+0xffffffc4u), 0x3u);
    /* 005c8d30: mov word ptr [ebp - 0x3a], 4 */ W16((u32)(r_ebp+0xffffffc6u), 0x4u);
    /* 005c8d36: mov word ptr [ebp - 0x38], 5 */ W16((u32)(r_ebp+0xffffffc8u), 0x5u);
    /* 005c8d3c: mov word ptr [ebp - 0x36], 5 */ W16((u32)(r_ebp+0xffffffcau), 0x5u);
    /* 005c8d42: mov word ptr [ebp - 0x34], 5 */ W16((u32)(r_ebp+0xffffffccu), 0x5u);
    /* 005c8d48: mov word ptr [ebp - 0x32], 5 */ W16((u32)(r_ebp+0xffffffceu), 0x5u);
    /* 005c8d4e: mov word ptr [ebp - 0x30], 5 */ W16((u32)(r_ebp+0xffffffd0u), 0x5u);
    /* 005c8d54: mov word ptr [ebp - 0x2e], 5 */ W16((u32)(r_ebp+0xffffffd2u), 0x5u);
    /* 005c8d5a: mov word ptr [ebp - 0x2c], 5 */ W16((u32)(r_ebp+0xffffffd4u), 0x5u);
    /* 005c8d60: mov word ptr [ebp - 0x2a], 5 */ W16((u32)(r_ebp+0xffffffd6u), 0x5u);
    /* 005c8d66: mov word ptr [ebp - 0x28], 5 */ W16((u32)(r_ebp+0xffffffd8u), 0x5u);
    /* 005c8d6c: mov word ptr [ebp - 0x26], 5 */ W16((u32)(r_ebp+0xffffffdau), 0x5u);
    /* 005c8d72: mov word ptr [ebp - 0x24], 5 */ W16((u32)(r_ebp+0xffffffdcu), 0x5u);
    /* 005c8d78: mov word ptr [ebp - 0x22], 6 */ W16((u32)(r_ebp+0xffffffdeu), 0x6u);
    /* 005c8d7e: mov word ptr [ebp - 0x20], 6 */ W16((u32)(r_ebp+0xffffffe0u), 0x6u);
    /* 005c8d84: mov word ptr [ebp - 0x1e], 6 */ W16((u32)(r_ebp+0xffffffe2u), 0x6u);
    /* 005c8d8a: mov word ptr [ebp - 0x1c], 6 */ W16((u32)(r_ebp+0xffffffe4u), 0x6u);
    /* 005c8d90: mov word ptr [ebp - 0x1a], 6 */ W16((u32)(r_ebp+0xffffffe6u), 0x6u);
    /* 005c8d96: mov word ptr [ebp - 0x18], 6 */ W16((u32)(r_ebp+0xffffffe8u), 0x6u);
    /* 005c8d9c: mov word ptr [ebp - 0x16], 7 */ W16((u32)(r_ebp+0xffffffeau), 0x7u);
    /* 005c8da2: mov word ptr [ebp - 0x14], 7 */ W16((u32)(r_ebp+0xffffffecu), 0x7u);
    /* 005c8da8: mov word ptr [ebp - 0x12], 7 */ W16((u32)(r_ebp+0xffffffeeu), 0x7u);
    /* 005c8dae: mov word ptr [ebp - 0x10], 7 */ W16((u32)(r_ebp+0xfffffff0u), 0x7u);
    /* 005c8db4: mov word ptr [ebp - 0xe], 7 */ W16((u32)(r_ebp+0xfffffff2u), 0x7u);
    /* 005c8dba: mov word ptr [ebp - 0xc], 7 */ W16((u32)(r_ebp+0xfffffff4u), 0x7u);
    /* 005c8dc0: mov word ptr [ebp - 0xa], 1 */ W16((u32)(r_ebp+0xfffffff6u), 0x1u);
    /* 005c8dc6: push 0x1adbc */ { u32 v = 0x1adbcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8dcb: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8dd1: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c8dd6u); f_005ea0c3();
    /* 005c8dd6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8dd8: mov eax, dword ptr [ebp - 0x164] */ r_eax = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8dde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c8de0: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8de6: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c8de9u); call_ind(t); }
    /* 005c8de9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8deb: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8df1: call 0x5ea454 */ r_esp -= 4; W32(r_esp, 0x5c8df6u); f_005ea454();
    /* 005c8df6: mov eax, dword ptr [ebp - 0x164] */ r_eax = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8dfc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c8dfe: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8e04: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c8e07u); call_ind(t); }
    /* 005c8e07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c8e0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e0b: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8e11: call 0x427edf */ r_esp -= 4; W32(r_esp, 0x5c8e16u); f_00427edf();
    /* 005c8e16: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8e19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e1a: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8e20: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5c8e25u); f_005ea1cf();
    /* 005c8e25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e27: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c8e2a: movsx eax, word ptr [ebp + edx*2 - 0x144] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edx*2+0xfffffebcu));
    /* 005c8e32: movsx ecx, word ptr [ebp + eax*2 - 0x154] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xfffffeacu));
    /* 005c8e3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e3b: push 0x1adbd */ { u32 v = 0x1adbdu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e42: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e44: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8e4a: call 0x427f36 */ r_esp -= 4; W32(r_esp, 0x5c8e4fu); f_00427f36();
    /* 005c8e4f: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
    /* 005c8e59: jmp 0x5c8e6a */ goto L_005c8e6a;
L_005c8e5b:; BB(0x005c8e5b);
    /* 005c8e5b: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 005c8e61: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8e64: mov dword ptr [ebp - 0x160], edx */ W32((u32)(r_ebp+0xfffffea0u), r_edx);
L_005c8e6a:; BB(0x005c8e6a);
    /* 005c8e6a: cmp dword ptr [ebp - 0x160], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffea0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8e71: jge 0x5c8f0b */ if ((fS==fO)) goto L_005c8f0b;
L_005c8e77:; BB(0x005c8e77);
    /* 005c8e77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e79: mov eax, dword ptr [ebp - 0x160] */ r_eax = R32((u32)(r_ebp+0xfffffea0u));
    /* 005c8e7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e80: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8e83: mov edx, dword ptr [ecx*8 + 0x69889c] */ r_edx = R32((u32)(r_ecx*8+0x69889cu));
    /* 005c8e8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c8e8e: mov ecx, dword ptr [eax*8 + 0x698898] */ r_ecx = R32((u32)(r_eax*8+0x698898u));
    /* 005c8e95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e96: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8e9c: call 0x428724 */ r_esp -= 4; W32(r_esp, 0x5c8ea1u); f_00428724();
    /* 005c8ea1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ea3: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 005c8ea9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8eaa: mov eax, dword ptr [ebp - 0x160] */ r_eax = R32((u32)(r_ebp+0xfffffea0u));
    /* 005c8eb0: movsx ecx, word ptr [ebp + eax*2 - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xfffffff8u));
    /* 005c8eb5: sub ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8eb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8eb9: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 005c8ebf: movsx eax, word ptr [ebp + edx*2 - 0x15c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edx*2+0xfffffea4u));
    /* 005c8ec7: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c8eca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ecb: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8ed1: call 0x428751 */ r_esp -= 4; W32(r_esp, 0x5c8ed6u); f_00428751();
    /* 005c8ed6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ed8: mov ecx, dword ptr [ebp - 0x160] */ r_ecx = R32((u32)(r_ebp+0xfffffea0u));
    /* 005c8ede: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8edf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c8ee2: mov eax, dword ptr [edx*8 + 0x69889c] */ r_eax = R32((u32)(r_edx*8+0x69889cu));
    /* 005c8ee9: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c8eec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8eed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8ef0: mov edx, dword ptr [ecx*8 + 0x698898] */ r_edx = R32((u32)(r_ecx*8+0x698898u));
    /* 005c8ef7: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8efa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8efb: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005c8f01: call 0x42877e */ r_esp -= 4; W32(r_esp, 0x5c8f06u); f_0042877e();
    /* 005c8f06: jmp 0x5c8e5b */ goto L_005c8e5b;
L_005c8f0b:; BB(0x005c8f0b);
    /* 005c8f0b: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8f0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8f0e: ret 4 */ FN_RET(0x005c884e); r_esp += 8; return;
}

void f_005c8f11(void) /* FUN_005c8f11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8f11);
    /* 005c8f11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8f12: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8f14: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8f17: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c8f1a: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005c8f20: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5c8f25u); f_005cd326();
    /* 005c8f25: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c8f28: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8f2f: je 0x5c8f38 */ if (fZ) goto L_005c8f38;
L_005c8f31:; BB(0x005c8f31);
    /* 005c8f31: mov eax, 1 */ r_eax = 0x1u;
    /* 005c8f36: jmp 0x5c8f65 */ goto L_005c8f65;
L_005c8f38:; BB(0x005c8f38);
    /* 005c8f38: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8f3c: je 0x5c8f4a */ if (fZ) goto L_005c8f4a;
L_005c8f3e:; BB(0x005c8f3e);
    /* 005c8f3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8f41: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5c8f46u); f_004259a0();
    /* 005c8f46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8f48: jne 0x5c8f4e */ if (!fZ) goto L_005c8f4e;
L_005c8f4a:; BB(0x005c8f4a);
    /* 005c8f4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c8f4c: jmp 0x5c8f65 */ goto L_005c8f65;
L_005c8f4e:; BB(0x005c8f4e);
    /* 005c8f4e: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005c8f53: cmp dword ptr [eax + 0x3ac], 0 */ {  u32 a = R32((u32)(r_eax+0x3acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8f5a: jne 0x5c8f60 */ if (!fZ) goto L_005c8f60;
L_005c8f5c:; BB(0x005c8f5c);
    /* 005c8f5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c8f5e: jmp 0x5c8f65 */ goto L_005c8f65;
L_005c8f60:; BB(0x005c8f60);
    /* 005c8f60: mov eax, 1 */ r_eax = 0x1u;
L_005c8f65:; BB(0x005c8f65);
    /* 005c8f65: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8f67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8f68: ret 4 */ FN_RET(0x005c8f11); r_esp += 8; return;
}

void f_005c8f6b(void) /* FUN_005c8f6b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8f6b);
    /* 005c8f6b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8f6c: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8f6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8f6f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8f72: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8f74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8f75: ret  */ FN_RET(0x005c8f6b); r_esp += 4; return;
}

void f_005c8f76(void) /* FUN_005c8f76 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8f76);
    /* 005c8f76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8f77: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8f79: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8f7c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c8f7f: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005c8f85: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5c8f8au); f_005cd326();
    /* 005c8f8a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c8f8d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8f90: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 005c8f96: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005c8f99: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8f9c: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 005c8fa0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c8fa3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8fa6: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 005c8fac: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8faf: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c8fb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8fb5: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005c8fbb: add ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8fc1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c8fc4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8fc6: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005c8fcc: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c8fcf: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005c8fd4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c8fd7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c8fd9: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c8fdcu); call_ind(t); }
    /* 005c8fdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8fdf: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8fe3: je 0x5c907c */ if (fZ) goto L_005c907c;
L_005c8fe9:; BB(0x005c8fe9);
    /* 005c8fe9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8feb: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c8ff1: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x5c8ff6u); f_0045cd25();
    /* 005c8ff6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8ff9: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005c8ffc: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 005c8fff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9002: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c9005: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9009: je 0x5c9063 */ if (fZ) goto L_005c9063;
L_005c900b:; BB(0x005c900b);
    /* 005c900b: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005c9011: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x5c9016u); f_0045cb0a();
    /* 005c9016: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9018: je 0x5c9063 */ if (fZ) goto L_005c9063;
L_005c901a:; BB(0x005c901a);
    /* 005c901a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005c901c: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c9021u); f_0048ab58();
    /* 005c9021: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9024: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c9027: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c902b: je 0x5c904b */ if (fZ) goto L_005c904b;
L_005c902d:; BB(0x005c902d);
    /* 005c902d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c9030: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9031: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9035: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005c903a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c903d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c903e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c9041: call 0x5df72f */ r_esp -= 4; W32(r_esp, 0x5c9046u); f_005df72f();
    /* 005c9046: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c9049: jmp 0x5c9052 */ goto L_005c9052;
L_005c904b:; BB(0x005c904b);
    /* 005c904b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005c9052:; BB(0x005c9052);
    /* 005c9052: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c9055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9056: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9059: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c905c: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x5c9061u); f_005d4df6();
    /* 005c9061: jmp 0x5c907c */ goto L_005c907c;
L_005c9063:; BB(0x005c9063);
    /* 005c9063: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c9066: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9067: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c906a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c906b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c906e: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c9071: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9074: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005c9077: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c9079: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5c907cu); call_ind(t); }
L_005c907c:; BB(0x005c907c);
    /* 005c907c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c907f: mov dword ptr [eax + 0xe8], 1 */ W32((u32)(r_eax+0xe8u), 0x1u);
    /* 005c9089: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c908b: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005c9091: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005c9094: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005c909a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c909d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c909f: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5c90a2u); call_ind(t); }
    /* 005c90a2: mov esp, ebp */ r_esp = r_ebp;
    /* 005c90a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c90a5: ret  */ FN_RET(0x005c8f76); r_esp += 4; return;
}

void f_005c90a6(void) /* FUN_005c90a6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c90a6);
    /* 005c90a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c90a7: mov ebp, esp */ r_ebp = r_esp;
    /* 005c90a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c90aa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c90ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c90b0: cmp dword ptr [eax + 0xbc], 0 */ {  u32 a = R32((u32)(r_eax+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c90b7: jne 0x5c90c1 */ if (!fZ) goto L_005c90c1;
L_005c90b9:; BB(0x005c90b9);
    /* 005c90b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c90bc: call 0x42882d */ r_esp -= 4; W32(r_esp, 0x5c90c1u); f_0042882d();
L_005c90c1:; BB(0x005c90c1);
    /* 005c90c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005c90c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c90c4: ret  */ FN_RET(0x005c90a6); r_esp += 4; return;
}

void f_005c90c5(void) /* FUN_005c90c5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c90c5);
    /* 005c90c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c90c6: mov ebp, esp */ r_ebp = r_esp;
    /* 005c90c8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c90cb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c90ce: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c90d1: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005c90d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c90d7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c90da: mov dword ptr [edx + 0xc0], 1 */ W32((u32)(r_edx+0xc0u), 0x1u);
    /* 005c90e4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c90e7: cmp dword ptr [eax + 0xbc], 0 */ {  u32 a = R32((u32)(r_eax+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c90ee: jne 0x5c9123 */ if (!fZ) goto L_005c9123;
L_005c90f0:; BB(0x005c90f0);
    /* 005c90f0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c90f2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5c90f7u); f_0048ab58();
    /* 005c90f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c90fa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c90fd: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9101: je 0x5c9110 */ if (fZ) goto L_005c9110;
L_005c9103:; BB(0x005c9103);
    /* 005c9103: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9106: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5c910bu); f_005e9d30();
    /* 005c910b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c910e: jmp 0x5c9117 */ goto L_005c9117;
L_005c9110:; BB(0x005c9110);
    /* 005c9110: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005c9117:; BB(0x005c9117);
    /* 005c9117: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c911a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c911d: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
L_005c9123:; BB(0x005c9123);
    /* 005c9123: push 0x186aa */ { u32 v = 0x186aau; r_esp -= 4; W32(r_esp, v); }
    /* 005c9128: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c912b: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005c9131: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5c9136u); f_005ea0c3();
    /* 005c9136: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9138: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c913b: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 005c9141: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5c9146u); f_005ea1cf();
    /* 005c9146: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c9149: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 005c914f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c9152: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 005c9158: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c915a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5c915du); call_ind(t); }
    /* 005c915d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9160: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 005c9166: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9167: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c916a: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 005c9170: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9171: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c9174: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 005c917a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c917d: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 005c9183: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c9185: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5c9188u); call_ind(t); }
    /* 005c9188: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c918a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c918d: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 005c9193: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c9196: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005c919c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c919e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c91a1u); call_ind(t); }
    /* 005c91a1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c91a4: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005c91aa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c91ad: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005c91b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c91b5: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5c91b8u); call_ind(t); }
    /* 005c91b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c91ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c91bb: ret  */ FN_RET(0x005c90c5); r_esp += 4; return;
}

void f_005c91bc(void) /* FUN_005c91bc */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c91bc);
    /* 005c91bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c91bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005c91bf: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c91c2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c91c5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c91c8: cmp dword ptr [eax + 0xbc], 0 */ {  u32 a = R32((u32)(r_eax+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c91cf: je 0x5c9225 */ if (fZ) goto L_005c9225;
L_005c91d1:; BB(0x005c91d1);
    /* 005c91d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c91d4: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 005c91da: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c91dd: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005c91e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c91e5: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c91e8u); call_ind(t); }
    /* 005c91e8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c91eb: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005c91f1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c91f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c91f7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c91fa: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c91fe: je 0x5c9211 */ if (fZ) goto L_005c9211;
L_005c9200:; BB(0x005c9200);
    /* 005c9200: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9202: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9205: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c9207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c920a: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5c920cu); call_ind(t); }
    /* 005c920c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c920f: jmp 0x5c9218 */ goto L_005c9218;
L_005c9211:; BB(0x005c9211);
    /* 005c9211: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005c9218:; BB(0x005c9218);
    /* 005c9218: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c921b: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
L_005c9225:; BB(0x005c9225);
    /* 005c9225: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9227: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9228: ret  */ FN_RET(0x005c91bc); r_esp += 4; return;
}

void f_005c9229(void) /* FUN_005c9229 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9229);
    /* 005c9229: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c922a: mov ebp, esp */ r_ebp = r_esp;
    /* 005c922c: sub esp, 0xac0 */ {  u32 a = r_esp; u32 b = 0xac0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9232: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9233: mov dword ptr [ebp - 0xabc], ecx */ W32((u32)(r_ebp+0xfffff544u), r_ecx);
    /* 005c9239: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c9240: mov dword ptr [ebp - 0xab4], 0 */ W32((u32)(r_ebp+0xfffff54cu), 0x0u);
    /* 005c924a: mov dword ptr [ebp - 0xab0], 0x26 */ W32((u32)(r_ebp+0xfffff550u), 0x26u);
    /* 005c9254: mov dword ptr [ebp - 0xaac], 0x27 */ W32((u32)(r_ebp+0xfffff554u), 0x27u);
    /* 005c925e: mov dword ptr [ebp - 0xaa8], 0x85 */ W32((u32)(r_ebp+0xfffff558u), 0x85u);
    /* 005c9268: mov dword ptr [ebp - 0xaa4], 0x9d */ W32((u32)(r_ebp+0xfffff55cu), 0x9du);
    /* 005c9272: mov dword ptr [ebp - 0xaa0], 0xffffffff */ W32((u32)(r_ebp+0xfffff560u), 0xffffffffu);
    /* 005c927c: mov dword ptr [ebp - 0xa9c], 0 */ W32((u32)(r_ebp+0xfffff564u), 0x0u);
    /* 005c9286: mov dword ptr [ebp - 0xa98], 0 */ W32((u32)(r_ebp+0xfffff568u), 0x0u);
    /* 005c9290: mov dword ptr [ebp - 0xa94], 0 */ W32((u32)(r_ebp+0xfffff56cu), 0x0u);
    /* 005c929a: mov dword ptr [ebp - 0xa90], 0 */ W32((u32)(r_ebp+0xfffff570u), 0x0u);
    /* 005c92a4: mov dword ptr [ebp - 0xa8c], 0 */ W32((u32)(r_ebp+0xfffff574u), 0x0u);
    /* 005c92ae: mov dword ptr [ebp - 0xa88], 0 */ W32((u32)(r_ebp+0xfffff578u), 0x0u);
    /* 005c92b8: mov dword ptr [ebp - 0xa84], 0 */ W32((u32)(r_ebp+0xfffff57cu), 0x0u);
    /* 005c92c2: mov dword ptr [ebp - 0xa80], 0 */ W32((u32)(r_ebp+0xfffff580u), 0x0u);
    /* 005c92cc: mov dword ptr [ebp - 0xa7c], 0 */ W32((u32)(r_ebp+0xfffff584u), 0x0u);
    /* 005c92d6: mov dword ptr [ebp - 0xa78], 0 */ W32((u32)(r_ebp+0xfffff588u), 0x0u);
    /* 005c92e0: mov dword ptr [ebp - 0xa74], 0 */ W32((u32)(r_ebp+0xfffff58cu), 0x0u);
    /* 005c92ea: mov dword ptr [ebp - 0xa70], 0 */ W32((u32)(r_ebp+0xfffff590u), 0x0u);
    /* 005c92f4: mov dword ptr [ebp - 0xa6c], 1 */ W32((u32)(r_ebp+0xfffff594u), 0x1u);
    /* 005c92fe: mov dword ptr [ebp - 0xa68], 0x26 */ W32((u32)(r_ebp+0xfffff598u), 0x26u);
    /* 005c9308: mov dword ptr [ebp - 0xa64], 0x28 */ W32((u32)(r_ebp+0xfffff59cu), 0x28u);
    /* 005c9312: mov dword ptr [ebp - 0xa60], 0x29 */ W32((u32)(r_ebp+0xfffff5a0u), 0x29u);
    /* 005c931c: mov dword ptr [ebp - 0xa5c], 0x63 */ W32((u32)(r_ebp+0xfffff5a4u), 0x63u);
    /* 005c9326: mov dword ptr [ebp - 0xa58], 0x6f */ W32((u32)(r_ebp+0xfffff5a8u), 0x6fu);
    /* 005c9330: mov dword ptr [ebp - 0xa54], 0x85 */ W32((u32)(r_ebp+0xfffff5acu), 0x85u);
    /* 005c933a: mov dword ptr [ebp - 0xa50], 0x86 */ W32((u32)(r_ebp+0xfffff5b0u), 0x86u);
    /* 005c9344: mov dword ptr [ebp - 0xa4c], 0x91 */ W32((u32)(r_ebp+0xfffff5b4u), 0x91u);
    /* 005c934e: mov dword ptr [ebp - 0xa48], 0x94 */ W32((u32)(r_ebp+0xfffff5b8u), 0x94u);
    /* 005c9358: mov dword ptr [ebp - 0xa44], 0x97 */ W32((u32)(r_ebp+0xfffff5bcu), 0x97u);
    /* 005c9362: mov dword ptr [ebp - 0xa40], 0x99 */ W32((u32)(r_ebp+0xfffff5c0u), 0x99u);
    /* 005c936c: mov dword ptr [ebp - 0xa3c], 0x9b */ W32((u32)(r_ebp+0xfffff5c4u), 0x9bu);
    /* 005c9376: mov dword ptr [ebp - 0xa38], 0xffffffff */ W32((u32)(r_ebp+0xfffff5c8u), 0xffffffffu);
    /* 005c9380: mov dword ptr [ebp - 0xa34], 0 */ W32((u32)(r_ebp+0xfffff5ccu), 0x0u);
    /* 005c938a: mov dword ptr [ebp - 0xa30], 0 */ W32((u32)(r_ebp+0xfffff5d0u), 0x0u);
    /* 005c9394: mov dword ptr [ebp - 0xa2c], 0 */ W32((u32)(r_ebp+0xfffff5d4u), 0x0u);
    /* 005c939e: mov dword ptr [ebp - 0xa28], 0 */ W32((u32)(r_ebp+0xfffff5d8u), 0x0u);
    /* 005c93a8: mov dword ptr [ebp - 0xa24], 2 */ W32((u32)(r_ebp+0xfffff5dcu), 0x2u);
    /* 005c93b2: mov dword ptr [ebp - 0xa20], 0x27 */ W32((u32)(r_ebp+0xfffff5e0u), 0x27u);
    /* 005c93bc: mov dword ptr [ebp - 0xa1c], 0x4a */ W32((u32)(r_ebp+0xfffff5e4u), 0x4au);
    /* 005c93c6: mov dword ptr [ebp - 0xa18], 0x4c */ W32((u32)(r_ebp+0xfffff5e8u), 0x4cu);
    /* 005c93d0: mov dword ptr [ebp - 0xa14], 0x2a */ W32((u32)(r_ebp+0xfffff5ecu), 0x2au);
    /* 005c93da: mov dword ptr [ebp - 0xa10], 0x28 */ W32((u32)(r_ebp+0xfffff5f0u), 0x28u);
    /* 005c93e4: mov dword ptr [ebp - 0xa0c], 0x63 */ W32((u32)(r_ebp+0xfffff5f4u), 0x63u);
    /* 005c93ee: mov dword ptr [ebp - 0xa08], 0x6f */ W32((u32)(r_ebp+0xfffff5f8u), 0x6fu);
    /* 005c93f8: mov dword ptr [ebp - 0xa04], 0x70 */ W32((u32)(r_ebp+0xfffff5fcu), 0x70u);
    /* 005c9402: mov dword ptr [ebp - 0xa00], 0x85 */ W32((u32)(r_ebp+0xfffff600u), 0x85u);
    /* 005c940c: mov dword ptr [ebp - 0x9fc], 0x86 */ W32((u32)(r_ebp+0xfffff604u), 0x86u);
    /* 005c9416: mov dword ptr [ebp - 0x9f8], 0x92 */ W32((u32)(r_ebp+0xfffff608u), 0x92u);
    /* 005c9420: mov dword ptr [ebp - 0x9f4], 0x94 */ W32((u32)(r_ebp+0xfffff60cu), 0x94u);
    /* 005c942a: mov dword ptr [ebp - 0x9f0], 0x97 */ W32((u32)(r_ebp+0xfffff610u), 0x97u);
    /* 005c9434: mov dword ptr [ebp - 0x9ec], 0x98 */ W32((u32)(r_ebp+0xfffff614u), 0x98u);
    /* 005c943e: mov dword ptr [ebp - 0x9e8], 0x9a */ W32((u32)(r_ebp+0xfffff618u), 0x9au);
    /* 005c9448: mov dword ptr [ebp - 0x9e4], 0xffffffff */ W32((u32)(r_ebp+0xfffff61cu), 0xffffffffu);
    /* 005c9452: mov dword ptr [ebp - 0x9e0], 0 */ W32((u32)(r_ebp+0xfffff620u), 0x0u);
    /* 005c945c: mov dword ptr [ebp - 0x9dc], 3 */ W32((u32)(r_ebp+0xfffff624u), 0x3u);
    /* 005c9466: mov dword ptr [ebp - 0x9d8], 0x4b */ W32((u32)(r_ebp+0xfffff628u), 0x4bu);
    /* 005c9470: mov dword ptr [ebp - 0x9d4], 0x4c */ W32((u32)(r_ebp+0xfffff62cu), 0x4cu);
    /* 005c947a: mov dword ptr [ebp - 0x9d0], 0x4d */ W32((u32)(r_ebp+0xfffff630u), 0x4du);
    /* 005c9484: mov dword ptr [ebp - 0x9cc], 0x63 */ W32((u32)(r_ebp+0xfffff634u), 0x63u);
    /* 005c948e: mov dword ptr [ebp - 0x9c8], 0x70 */ W32((u32)(r_ebp+0xfffff638u), 0x70u);
    /* 005c9498: mov dword ptr [ebp - 0x9c4], 0x85 */ W32((u32)(r_ebp+0xfffff63cu), 0x85u);
    /* 005c94a2: mov dword ptr [ebp - 0x9c0], 0x86 */ W32((u32)(r_ebp+0xfffff640u), 0x86u);
    /* 005c94ac: mov dword ptr [ebp - 0x9bc], 0x93 */ W32((u32)(r_ebp+0xfffff644u), 0x93u);
    /* 005c94b6: mov dword ptr [ebp - 0x9b8], 0x94 */ W32((u32)(r_ebp+0xfffff648u), 0x94u);
    /* 005c94c0: mov dword ptr [ebp - 0x9b4], 0x97 */ W32((u32)(r_ebp+0xfffff64cu), 0x97u);
    /* 005c94ca: mov dword ptr [ebp - 0x9b0], 0x99 */ W32((u32)(r_ebp+0xfffff650u), 0x99u);
    /* 005c94d4: mov dword ptr [ebp - 0x9ac], 0x9b */ W32((u32)(r_ebp+0xfffff654u), 0x9bu);
    /* 005c94de: mov dword ptr [ebp - 0x9a8], 0xffffffff */ W32((u32)(r_ebp+0xfffff658u), 0xffffffffu);
    /* 005c94e8: mov dword ptr [ebp - 0x9a4], 0 */ W32((u32)(r_ebp+0xfffff65cu), 0x0u);
    /* 005c94f2: mov dword ptr [ebp - 0x9a0], 0 */ W32((u32)(r_ebp+0xfffff660u), 0x0u);
    /* 005c94fc: mov dword ptr [ebp - 0x99c], 0 */ W32((u32)(r_ebp+0xfffff664u), 0x0u);
    /* 005c9506: mov dword ptr [ebp - 0x998], 0 */ W32((u32)(r_ebp+0xfffff668u), 0x0u);
    /* 005c9510: mov dword ptr [ebp - 0x994], 4 */ W32((u32)(r_ebp+0xfffff66cu), 0x4u);
    /* 005c951a: mov dword ptr [ebp - 0x990], 0x29 */ W32((u32)(r_ebp+0xfffff670u), 0x29u);
    /* 005c9524: mov dword ptr [ebp - 0x98c], 0x2b */ W32((u32)(r_ebp+0xfffff674u), 0x2bu);
    /* 005c952e: mov dword ptr [ebp - 0x988], 0x2c */ W32((u32)(r_ebp+0xfffff678u), 0x2cu);
    /* 005c9538: mov dword ptr [ebp - 0x984], 0x64 */ W32((u32)(r_ebp+0xfffff67cu), 0x64u);
    /* 005c9542: mov dword ptr [ebp - 0x980], 0x6f */ W32((u32)(r_ebp+0xfffff680u), 0x6fu);
    /* 005c954c: mov dword ptr [ebp - 0x97c], 0x71 */ W32((u32)(r_ebp+0xfffff684u), 0x71u);
    /* 005c9556: mov dword ptr [ebp - 0x978], 0x86 */ W32((u32)(r_ebp+0xfffff688u), 0x86u);
    /* 005c9560: mov dword ptr [ebp - 0x974], 0x87 */ W32((u32)(r_ebp+0xfffff68cu), 0x87u);
    /* 005c956a: mov dword ptr [ebp - 0x970], 0x91 */ W32((u32)(r_ebp+0xfffff690u), 0x91u);
    /* 005c9574: mov dword ptr [ebp - 0x96c], 0x94 */ W32((u32)(r_ebp+0xfffff694u), 0x94u);
    /* 005c957e: mov dword ptr [ebp - 0x968], 0x97 */ W32((u32)(r_ebp+0xfffff698u), 0x97u);
    /* 005c9588: mov dword ptr [ebp - 0x964], 0x98 */ W32((u32)(r_ebp+0xfffff69cu), 0x98u);
    /* 005c9592: mov dword ptr [ebp - 0x960], 0x9a */ W32((u32)(r_ebp+0xfffff6a0u), 0x9au);
    /* 005c959c: mov dword ptr [ebp - 0x95c], 0xffffffff */ W32((u32)(r_ebp+0xfffff6a4u), 0xffffffffu);
    /* 005c95a6: mov dword ptr [ebp - 0x958], 0 */ W32((u32)(r_ebp+0xfffff6a8u), 0x0u);
    /* 005c95b0: mov dword ptr [ebp - 0x954], 0 */ W32((u32)(r_ebp+0xfffff6acu), 0x0u);
    /* 005c95ba: mov dword ptr [ebp - 0x950], 0 */ W32((u32)(r_ebp+0xfffff6b0u), 0x0u);
    /* 005c95c4: mov dword ptr [ebp - 0x94c], 5 */ W32((u32)(r_ebp+0xfffff6b4u), 0x5u);
    /* 005c95ce: mov dword ptr [ebp - 0x948], 0x2a */ W32((u32)(r_ebp+0xfffff6b8u), 0x2au);
    /* 005c95d8: mov dword ptr [ebp - 0x944], 0x2b */ W32((u32)(r_ebp+0xfffff6bcu), 0x2bu);
    /* 005c95e2: mov dword ptr [ebp - 0x940], 0x2d */ W32((u32)(r_ebp+0xfffff6c0u), 0x2du);
    /* 005c95ec: mov dword ptr [ebp - 0x93c], 0x4e */ W32((u32)(r_ebp+0xfffff6c4u), 0x4eu);
    /* 005c95f6: mov dword ptr [ebp - 0x938], 0x64 */ W32((u32)(r_ebp+0xfffff6c8u), 0x64u);
    /* 005c9600: mov dword ptr [ebp - 0x934], 0x6f */ W32((u32)(r_ebp+0xfffff6ccu), 0x6fu);
    /* 005c960a: mov dword ptr [ebp - 0x930], 0x70 */ W32((u32)(r_ebp+0xfffff6d0u), 0x70u);
    /* 005c9614: mov dword ptr [ebp - 0x92c], 0x71 */ W32((u32)(r_ebp+0xfffff6d4u), 0x71u);
    /* 005c961e: mov dword ptr [ebp - 0x928], 0x72 */ W32((u32)(r_ebp+0xfffff6d8u), 0x72u);
    /* 005c9628: mov dword ptr [ebp - 0x924], 0x86 */ W32((u32)(r_ebp+0xfffff6dcu), 0x86u);
    /* 005c9632: mov dword ptr [ebp - 0x920], 0x87 */ W32((u32)(r_ebp+0xfffff6e0u), 0x87u);
    /* 005c963c: mov dword ptr [ebp - 0x91c], 0x92 */ W32((u32)(r_ebp+0xfffff6e4u), 0x92u);
    /* 005c9646: mov dword ptr [ebp - 0x918], 0x94 */ W32((u32)(r_ebp+0xfffff6e8u), 0x94u);
    /* 005c9650: mov dword ptr [ebp - 0x914], 0x97 */ W32((u32)(r_ebp+0xfffff6ecu), 0x97u);
    /* 005c965a: mov dword ptr [ebp - 0x910], 0x99 */ W32((u32)(r_ebp+0xfffff6f0u), 0x99u);
    /* 005c9664: mov dword ptr [ebp - 0x90c], 0x9b */ W32((u32)(r_ebp+0xfffff6f4u), 0x9bu);
    /* 005c966e: mov dword ptr [ebp - 0x908], 0xffffffff */ W32((u32)(r_ebp+0xfffff6f8u), 0xffffffffu);
    /* 005c9678: mov dword ptr [ebp - 0x904], 6 */ W32((u32)(r_ebp+0xfffff6fcu), 0x6u);
    /* 005c9682: mov dword ptr [ebp - 0x900], 0x4d */ W32((u32)(r_ebp+0xfffff700u), 0x4du);
    /* 005c968c: mov dword ptr [ebp - 0x8fc], 0x4e */ W32((u32)(r_ebp+0xfffff704u), 0x4eu);
    /* 005c9696: mov dword ptr [ebp - 0x8f8], 0x4f */ W32((u32)(r_ebp+0xfffff708u), 0x4fu);
    /* 005c96a0: mov dword ptr [ebp - 0x8f4], 0x64 */ W32((u32)(r_ebp+0xfffff70cu), 0x64u);
    /* 005c96aa: mov dword ptr [ebp - 0x8f0], 0x70 */ W32((u32)(r_ebp+0xfffff710u), 0x70u);
    /* 005c96b4: mov dword ptr [ebp - 0x8ec], 0x72 */ W32((u32)(r_ebp+0xfffff714u), 0x72u);
    /* 005c96be: mov dword ptr [ebp - 0x8e8], 0x86 */ W32((u32)(r_ebp+0xfffff718u), 0x86u);
    /* 005c96c8: mov dword ptr [ebp - 0x8e4], 0x87 */ W32((u32)(r_ebp+0xfffff71cu), 0x87u);
    /* 005c96d2: mov dword ptr [ebp - 0x8e0], 0x93 */ W32((u32)(r_ebp+0xfffff720u), 0x93u);
    /* 005c96dc: mov dword ptr [ebp - 0x8dc], 0x94 */ W32((u32)(r_ebp+0xfffff724u), 0x94u);
    /* 005c96e6: mov dword ptr [ebp - 0x8d8], 0x97 */ W32((u32)(r_ebp+0xfffff728u), 0x97u);
    /* 005c96f0: mov dword ptr [ebp - 0x8d4], 0x98 */ W32((u32)(r_ebp+0xfffff72cu), 0x98u);
    /* 005c96fa: mov dword ptr [ebp - 0x8d0], 0x9a */ W32((u32)(r_ebp+0xfffff730u), 0x9au);
    /* 005c9704: mov dword ptr [ebp - 0x8cc], 0xffffffff */ W32((u32)(r_ebp+0xfffff734u), 0xffffffffu);
    /* 005c970e: mov dword ptr [ebp - 0x8c8], 0 */ W32((u32)(r_ebp+0xfffff738u), 0x0u);
    /* 005c9718: mov dword ptr [ebp - 0x8c4], 0 */ W32((u32)(r_ebp+0xfffff73cu), 0x0u);
    /* 005c9722: mov dword ptr [ebp - 0x8c0], 0 */ W32((u32)(r_ebp+0xfffff740u), 0x0u);
    /* 005c972c: mov dword ptr [ebp - 0x8bc], 7 */ W32((u32)(r_ebp+0xfffff744u), 0x7u);
    /* 005c9736: mov dword ptr [ebp - 0x8b8], 0x2c */ W32((u32)(r_ebp+0xfffff748u), 0x2cu);
    /* 005c9740: mov dword ptr [ebp - 0x8b4], 0x2e */ W32((u32)(r_ebp+0xfffff74cu), 0x2eu);
    /* 005c974a: mov dword ptr [ebp - 0x8b0], 0x2f */ W32((u32)(r_ebp+0xfffff750u), 0x2fu);
    /* 005c9754: mov dword ptr [ebp - 0x8ac], 0x65 */ W32((u32)(r_ebp+0xfffff754u), 0x65u);
    /* 005c975e: mov dword ptr [ebp - 0x8a8], 0x71 */ W32((u32)(r_ebp+0xfffff758u), 0x71u);
    /* 005c9768: mov dword ptr [ebp - 0x8a4], 0x73 */ W32((u32)(r_ebp+0xfffff75cu), 0x73u);
    /* 005c9772: mov dword ptr [ebp - 0x8a0], 0x87 */ W32((u32)(r_ebp+0xfffff760u), 0x87u);
    /* 005c977c: mov dword ptr [ebp - 0x89c], 0x88 */ W32((u32)(r_ebp+0xfffff764u), 0x88u);
    /* 005c9786: mov dword ptr [ebp - 0x898], 0x91 */ W32((u32)(r_ebp+0xfffff768u), 0x91u);
    /* 005c9790: mov dword ptr [ebp - 0x894], 0x94 */ W32((u32)(r_ebp+0xfffff76cu), 0x94u);
    /* 005c979a: mov dword ptr [ebp - 0x890], 0x97 */ W32((u32)(r_ebp+0xfffff770u), 0x97u);
    /* 005c97a4: mov dword ptr [ebp - 0x88c], 0x99 */ W32((u32)(r_ebp+0xfffff774u), 0x99u);
    /* 005c97ae: mov dword ptr [ebp - 0x888], 0x9b */ W32((u32)(r_ebp+0xfffff778u), 0x9bu);
    /* 005c97b8: mov dword ptr [ebp - 0x884], 0xffffffff */ W32((u32)(r_ebp+0xfffff77cu), 0xffffffffu);
    /* 005c97c2: mov dword ptr [ebp - 0x880], 0 */ W32((u32)(r_ebp+0xfffff780u), 0x0u);
    /* 005c97cc: mov dword ptr [ebp - 0x87c], 0 */ W32((u32)(r_ebp+0xfffff784u), 0x0u);
    /* 005c97d6: mov dword ptr [ebp - 0x878], 0 */ W32((u32)(r_ebp+0xfffff788u), 0x0u);
    /* 005c97e0: mov dword ptr [ebp - 0x874], 8 */ W32((u32)(r_ebp+0xfffff78cu), 0x8u);
    /* 005c97ea: mov dword ptr [ebp - 0x870], 0x2d */ W32((u32)(r_ebp+0xfffff790u), 0x2du);
    /* 005c97f4: mov dword ptr [ebp - 0x86c], 0x2e */ W32((u32)(r_ebp+0xfffff794u), 0x2eu);
    /* 005c97fe: mov dword ptr [ebp - 0x868], 0x30 */ W32((u32)(r_ebp+0xfffff798u), 0x30u);
    /* 005c9808: mov dword ptr [ebp - 0x864], 0x50 */ W32((u32)(r_ebp+0xfffff79cu), 0x50u);
    /* 005c9812: mov dword ptr [ebp - 0x860], 0x65 */ W32((u32)(r_ebp+0xfffff7a0u), 0x65u);
    /* 005c981c: mov dword ptr [ebp - 0x85c], 0x71 */ W32((u32)(r_ebp+0xfffff7a4u), 0x71u);
    /* 005c9826: mov dword ptr [ebp - 0x858], 0x72 */ W32((u32)(r_ebp+0xfffff7a8u), 0x72u);
    /* 005c9830: mov dword ptr [ebp - 0x854], 0x73 */ W32((u32)(r_ebp+0xfffff7acu), 0x73u);
    /* 005c983a: mov dword ptr [ebp - 0x850], 0x74 */ W32((u32)(r_ebp+0xfffff7b0u), 0x74u);
    /* 005c9844: mov dword ptr [ebp - 0x84c], 0x87 */ W32((u32)(r_ebp+0xfffff7b4u), 0x87u);
    /* 005c984e: mov dword ptr [ebp - 0x848], 0x88 */ W32((u32)(r_ebp+0xfffff7b8u), 0x88u);
    /* 005c9858: mov dword ptr [ebp - 0x844], 0x92 */ W32((u32)(r_ebp+0xfffff7bcu), 0x92u);
    /* 005c9862: mov dword ptr [ebp - 0x840], 0x94 */ W32((u32)(r_ebp+0xfffff7c0u), 0x94u);
    /* 005c986c: mov dword ptr [ebp - 0x83c], 0x97 */ W32((u32)(r_ebp+0xfffff7c4u), 0x97u);
    /* 005c9876: mov dword ptr [ebp - 0x838], 0x98 */ W32((u32)(r_ebp+0xfffff7c8u), 0x98u);
    /* 005c9880: mov dword ptr [ebp - 0x834], 0x9a */ W32((u32)(r_ebp+0xfffff7ccu), 0x9au);
    /* 005c988a: mov dword ptr [ebp - 0x830], 0xffffffff */ W32((u32)(r_ebp+0xfffff7d0u), 0xffffffffu);
    /* 005c9894: mov dword ptr [ebp - 0x82c], 9 */ W32((u32)(r_ebp+0xfffff7d4u), 0x9u);
    /* 005c989e: mov dword ptr [ebp - 0x828], 0x4f */ W32((u32)(r_ebp+0xfffff7d8u), 0x4fu);
    /* 005c98a8: mov dword ptr [ebp - 0x824], 0x50 */ W32((u32)(r_ebp+0xfffff7dcu), 0x50u);
    /* 005c98b2: mov dword ptr [ebp - 0x820], 0x51 */ W32((u32)(r_ebp+0xfffff7e0u), 0x51u);
    /* 005c98bc: mov dword ptr [ebp - 0x81c], 0x65 */ W32((u32)(r_ebp+0xfffff7e4u), 0x65u);
    /* 005c98c6: mov dword ptr [ebp - 0x818], 0x72 */ W32((u32)(r_ebp+0xfffff7e8u), 0x72u);
    /* 005c98d0: mov dword ptr [ebp - 0x814], 0x74 */ W32((u32)(r_ebp+0xfffff7ecu), 0x74u);
    /* 005c98da: mov dword ptr [ebp - 0x810], 0x87 */ W32((u32)(r_ebp+0xfffff7f0u), 0x87u);
    /* 005c98e4: mov dword ptr [ebp - 0x80c], 0x88 */ W32((u32)(r_ebp+0xfffff7f4u), 0x88u);
    /* 005c98ee: mov dword ptr [ebp - 0x808], 0x93 */ W32((u32)(r_ebp+0xfffff7f8u), 0x93u);
    /* 005c98f8: mov dword ptr [ebp - 0x804], 0x94 */ W32((u32)(r_ebp+0xfffff7fcu), 0x94u);
    /* 005c9902: mov dword ptr [ebp - 0x800], 0x97 */ W32((u32)(r_ebp+0xfffff800u), 0x97u);
    /* 005c990c: mov dword ptr [ebp - 0x7fc], 0x99 */ W32((u32)(r_ebp+0xfffff804u), 0x99u);
    /* 005c9916: mov dword ptr [ebp - 0x7f8], 0x9b */ W32((u32)(r_ebp+0xfffff808u), 0x9bu);
    /* 005c9920: mov dword ptr [ebp - 0x7f4], 0xffffffff */ W32((u32)(r_ebp+0xfffff80cu), 0xffffffffu);
    /* 005c992a: mov dword ptr [ebp - 0x7f0], 0 */ W32((u32)(r_ebp+0xfffff810u), 0x0u);
    /* 005c9934: mov dword ptr [ebp - 0x7ec], 0 */ W32((u32)(r_ebp+0xfffff814u), 0x0u);
    /* 005c993e: mov dword ptr [ebp - 0x7e8], 0 */ W32((u32)(r_ebp+0xfffff818u), 0x0u);
    /* 005c9948: mov dword ptr [ebp - 0x7e4], 0xa */ W32((u32)(r_ebp+0xfffff81cu), 0xau);
    /* 005c9952: mov dword ptr [ebp - 0x7e0], 0x2f */ W32((u32)(r_ebp+0xfffff820u), 0x2fu);
    /* 005c995c: mov dword ptr [ebp - 0x7dc], 0x31 */ W32((u32)(r_ebp+0xfffff824u), 0x31u);
    /* 005c9966: mov dword ptr [ebp - 0x7d8], 0x32 */ W32((u32)(r_ebp+0xfffff828u), 0x32u);
    /* 005c9970: mov dword ptr [ebp - 0x7d4], 0x66 */ W32((u32)(r_ebp+0xfffff82cu), 0x66u);
    /* 005c997a: mov dword ptr [ebp - 0x7d0], 0x73 */ W32((u32)(r_ebp+0xfffff830u), 0x73u);
    /* 005c9984: mov dword ptr [ebp - 0x7cc], 0x75 */ W32((u32)(r_ebp+0xfffff834u), 0x75u);
    /* 005c998e: mov dword ptr [ebp - 0x7c8], 0x88 */ W32((u32)(r_ebp+0xfffff838u), 0x88u);
    /* 005c9998: mov dword ptr [ebp - 0x7c4], 0x89 */ W32((u32)(r_ebp+0xfffff83cu), 0x89u);
    /* 005c99a2: mov dword ptr [ebp - 0x7c0], 0x91 */ W32((u32)(r_ebp+0xfffff840u), 0x91u);
    /* 005c99ac: mov dword ptr [ebp - 0x7bc], 0x94 */ W32((u32)(r_ebp+0xfffff844u), 0x94u);
    /* 005c99b6: mov dword ptr [ebp - 0x7b8], 0x97 */ W32((u32)(r_ebp+0xfffff848u), 0x97u);
    /* 005c99c0: mov dword ptr [ebp - 0x7b4], 0x98 */ W32((u32)(r_ebp+0xfffff84cu), 0x98u);
    /* 005c99ca: mov dword ptr [ebp - 0x7b0], 0x9a */ W32((u32)(r_ebp+0xfffff850u), 0x9au);
    /* 005c99d4: mov dword ptr [ebp - 0x7ac], 0xffffffff */ W32((u32)(r_ebp+0xfffff854u), 0xffffffffu);
    /* 005c99de: mov dword ptr [ebp - 0x7a8], 0 */ W32((u32)(r_ebp+0xfffff858u), 0x0u);
    /* 005c99e8: mov dword ptr [ebp - 0x7a4], 0 */ W32((u32)(r_ebp+0xfffff85cu), 0x0u);
    /* 005c99f2: mov dword ptr [ebp - 0x7a0], 0 */ W32((u32)(r_ebp+0xfffff860u), 0x0u);
    /* 005c99fc: mov dword ptr [ebp - 0x79c], 0xb */ W32((u32)(r_ebp+0xfffff864u), 0xbu);
    /* 005c9a06: mov dword ptr [ebp - 0x798], 0x30 */ W32((u32)(r_ebp+0xfffff868u), 0x30u);
    /* 005c9a10: mov dword ptr [ebp - 0x794], 0x31 */ W32((u32)(r_ebp+0xfffff86cu), 0x31u);
    /* 005c9a1a: mov dword ptr [ebp - 0x790], 0x33 */ W32((u32)(r_ebp+0xfffff870u), 0x33u);
    /* 005c9a24: mov dword ptr [ebp - 0x78c], 0x52 */ W32((u32)(r_ebp+0xfffff874u), 0x52u);
    /* 005c9a2e: mov dword ptr [ebp - 0x788], 0x66 */ W32((u32)(r_ebp+0xfffff878u), 0x66u);
    /* 005c9a38: mov dword ptr [ebp - 0x784], 0x73 */ W32((u32)(r_ebp+0xfffff87cu), 0x73u);
    /* 005c9a42: mov dword ptr [ebp - 0x780], 0x74 */ W32((u32)(r_ebp+0xfffff880u), 0x74u);
    /* 005c9a4c: mov dword ptr [ebp - 0x77c], 0x75 */ W32((u32)(r_ebp+0xfffff884u), 0x75u);
    /* 005c9a56: mov dword ptr [ebp - 0x778], 0x76 */ W32((u32)(r_ebp+0xfffff888u), 0x76u);
    /* 005c9a60: mov dword ptr [ebp - 0x774], 0x88 */ W32((u32)(r_ebp+0xfffff88cu), 0x88u);
    /* 005c9a6a: mov dword ptr [ebp - 0x770], 0x89 */ W32((u32)(r_ebp+0xfffff890u), 0x89u);
    /* 005c9a74: mov dword ptr [ebp - 0x76c], 0x92 */ W32((u32)(r_ebp+0xfffff894u), 0x92u);
    /* 005c9a7e: mov dword ptr [ebp - 0x768], 0x94 */ W32((u32)(r_ebp+0xfffff898u), 0x94u);
    /* 005c9a88: mov dword ptr [ebp - 0x764], 0x97 */ W32((u32)(r_ebp+0xfffff89cu), 0x97u);
    /* 005c9a92: mov dword ptr [ebp - 0x760], 0x9a */ W32((u32)(r_ebp+0xfffff8a0u), 0x9au);
    /* 005c9a9c: mov dword ptr [ebp - 0x75c], 0x9b */ W32((u32)(r_ebp+0xfffff8a4u), 0x9bu);
    /* 005c9aa6: mov dword ptr [ebp - 0x758], 0xffffffff */ W32((u32)(r_ebp+0xfffff8a8u), 0xffffffffu);
    /* 005c9ab0: mov dword ptr [ebp - 0x754], 0xc */ W32((u32)(r_ebp+0xfffff8acu), 0xcu);
    /* 005c9aba: mov dword ptr [ebp - 0x750], 0x51 */ W32((u32)(r_ebp+0xfffff8b0u), 0x51u);
    /* 005c9ac4: mov dword ptr [ebp - 0x74c], 0x52 */ W32((u32)(r_ebp+0xfffff8b4u), 0x52u);
    /* 005c9ace: mov dword ptr [ebp - 0x748], 0x53 */ W32((u32)(r_ebp+0xfffff8b8u), 0x53u);
    /* 005c9ad8: mov dword ptr [ebp - 0x744], 0x66 */ W32((u32)(r_ebp+0xfffff8bcu), 0x66u);
    /* 005c9ae2: mov dword ptr [ebp - 0x740], 0x74 */ W32((u32)(r_ebp+0xfffff8c0u), 0x74u);
    /* 005c9aec: mov dword ptr [ebp - 0x73c], 0x76 */ W32((u32)(r_ebp+0xfffff8c4u), 0x76u);
    /* 005c9af6: mov dword ptr [ebp - 0x738], 0x88 */ W32((u32)(r_ebp+0xfffff8c8u), 0x88u);
    /* 005c9b00: mov dword ptr [ebp - 0x734], 0x89 */ W32((u32)(r_ebp+0xfffff8ccu), 0x89u);
    /* 005c9b0a: mov dword ptr [ebp - 0x730], 0x93 */ W32((u32)(r_ebp+0xfffff8d0u), 0x93u);
    /* 005c9b14: mov dword ptr [ebp - 0x72c], 0x94 */ W32((u32)(r_ebp+0xfffff8d4u), 0x94u);
    /* 005c9b1e: mov dword ptr [ebp - 0x728], 0x97 */ W32((u32)(r_ebp+0xfffff8d8u), 0x97u);
    /* 005c9b28: mov dword ptr [ebp - 0x724], 0x98 */ W32((u32)(r_ebp+0xfffff8dcu), 0x98u);
    /* 005c9b32: mov dword ptr [ebp - 0x720], 0x99 */ W32((u32)(r_ebp+0xfffff8e0u), 0x99u);
    /* 005c9b3c: mov dword ptr [ebp - 0x71c], 0xffffffff */ W32((u32)(r_ebp+0xfffff8e4u), 0xffffffffu);
    /* 005c9b46: mov dword ptr [ebp - 0x718], 0 */ W32((u32)(r_ebp+0xfffff8e8u), 0x0u);
    /* 005c9b50: mov dword ptr [ebp - 0x714], 0 */ W32((u32)(r_ebp+0xfffff8ecu), 0x0u);
    /* 005c9b5a: mov dword ptr [ebp - 0x710], 0 */ W32((u32)(r_ebp+0xfffff8f0u), 0x0u);
    /* 005c9b64: mov dword ptr [ebp - 0x70c], 0xd */ W32((u32)(r_ebp+0xfffff8f4u), 0xdu);
    /* 005c9b6e: mov dword ptr [ebp - 0x708], 0x32 */ W32((u32)(r_ebp+0xfffff8f8u), 0x32u);
    /* 005c9b78: mov dword ptr [ebp - 0x704], 0x34 */ W32((u32)(r_ebp+0xfffff8fcu), 0x34u);
    /* 005c9b82: mov dword ptr [ebp - 0x700], 0x35 */ W32((u32)(r_ebp+0xfffff900u), 0x35u);
    /* 005c9b8c: mov dword ptr [ebp - 0x6fc], 0x67 */ W32((u32)(r_ebp+0xfffff904u), 0x67u);
    /* 005c9b96: mov dword ptr [ebp - 0x6f8], 0x75 */ W32((u32)(r_ebp+0xfffff908u), 0x75u);
    /* 005c9ba0: mov dword ptr [ebp - 0x6f4], 0x77 */ W32((u32)(r_ebp+0xfffff90cu), 0x77u);
    /* 005c9baa: mov dword ptr [ebp - 0x6f0], 0x89 */ W32((u32)(r_ebp+0xfffff910u), 0x89u);
    /* 005c9bb4: mov dword ptr [ebp - 0x6ec], 0x8a */ W32((u32)(r_ebp+0xfffff914u), 0x8au);
    /* 005c9bbe: mov dword ptr [ebp - 0x6e8], 0x91 */ W32((u32)(r_ebp+0xfffff918u), 0x91u);
    /* 005c9bc8: mov dword ptr [ebp - 0x6e4], 0x95 */ W32((u32)(r_ebp+0xfffff91cu), 0x95u);
    /* 005c9bd2: mov dword ptr [ebp - 0x6e0], 0x97 */ W32((u32)(r_ebp+0xfffff920u), 0x97u);
    /* 005c9bdc: mov dword ptr [ebp - 0x6dc], 0x9a */ W32((u32)(r_ebp+0xfffff924u), 0x9au);
    /* 005c9be6: mov dword ptr [ebp - 0x6d8], 0x9b */ W32((u32)(r_ebp+0xfffff928u), 0x9bu);
    /* 005c9bf0: mov dword ptr [ebp - 0x6d4], 0xffffffff */ W32((u32)(r_ebp+0xfffff92cu), 0xffffffffu);
    /* 005c9bfa: mov dword ptr [ebp - 0x6d0], 0 */ W32((u32)(r_ebp+0xfffff930u), 0x0u);
    /* 005c9c04: mov dword ptr [ebp - 0x6cc], 0 */ W32((u32)(r_ebp+0xfffff934u), 0x0u);
    /* 005c9c0e: mov dword ptr [ebp - 0x6c8], 0 */ W32((u32)(r_ebp+0xfffff938u), 0x0u);
    /* 005c9c18: mov dword ptr [ebp - 0x6c4], 0xe */ W32((u32)(r_ebp+0xfffff93cu), 0xeu);
    /* 005c9c22: mov dword ptr [ebp - 0x6c0], 0x33 */ W32((u32)(r_ebp+0xfffff940u), 0x33u);
    /* 005c9c2c: mov dword ptr [ebp - 0x6bc], 0x34 */ W32((u32)(r_ebp+0xfffff944u), 0x34u);
    /* 005c9c36: mov dword ptr [ebp - 0x6b8], 0x36 */ W32((u32)(r_ebp+0xfffff948u), 0x36u);
    /* 005c9c40: mov dword ptr [ebp - 0x6b4], 0x54 */ W32((u32)(r_ebp+0xfffff94cu), 0x54u);
    /* 005c9c4a: mov dword ptr [ebp - 0x6b0], 0x67 */ W32((u32)(r_ebp+0xfffff950u), 0x67u);
    /* 005c9c54: mov dword ptr [ebp - 0x6ac], 0x75 */ W32((u32)(r_ebp+0xfffff954u), 0x75u);
    /* 005c9c5e: mov dword ptr [ebp - 0x6a8], 0x76 */ W32((u32)(r_ebp+0xfffff958u), 0x76u);
    /* 005c9c68: mov dword ptr [ebp - 0x6a4], 0x77 */ W32((u32)(r_ebp+0xfffff95cu), 0x77u);
    /* 005c9c72: mov dword ptr [ebp - 0x6a0], 0x78 */ W32((u32)(r_ebp+0xfffff960u), 0x78u);
    /* 005c9c7c: mov dword ptr [ebp - 0x69c], 0x89 */ W32((u32)(r_ebp+0xfffff964u), 0x89u);
    /* 005c9c86: mov dword ptr [ebp - 0x698], 0x8a */ W32((u32)(r_ebp+0xfffff968u), 0x8au);
    /* 005c9c90: mov dword ptr [ebp - 0x694], 0x92 */ W32((u32)(r_ebp+0xfffff96cu), 0x92u);
    /* 005c9c9a: mov dword ptr [ebp - 0x690], 0x95 */ W32((u32)(r_ebp+0xfffff970u), 0x95u);
    /* 005c9ca4: mov dword ptr [ebp - 0x68c], 0x97 */ W32((u32)(r_ebp+0xfffff974u), 0x97u);
    /* 005c9cae: mov dword ptr [ebp - 0x688], 0x98 */ W32((u32)(r_ebp+0xfffff978u), 0x98u);
    /* 005c9cb8: mov dword ptr [ebp - 0x684], 0x99 */ W32((u32)(r_ebp+0xfffff97cu), 0x99u);
    /* 005c9cc2: mov dword ptr [ebp - 0x680], 0xffffffff */ W32((u32)(r_ebp+0xfffff980u), 0xffffffffu);
    /* 005c9ccc: mov dword ptr [ebp - 0x67c], 0xf */ W32((u32)(r_ebp+0xfffff984u), 0xfu);
    /* 005c9cd6: mov dword ptr [ebp - 0x678], 0x53 */ W32((u32)(r_ebp+0xfffff988u), 0x53u);
    /* 005c9ce0: mov dword ptr [ebp - 0x674], 0x54 */ W32((u32)(r_ebp+0xfffff98cu), 0x54u);
    /* 005c9cea: mov dword ptr [ebp - 0x670], 0x55 */ W32((u32)(r_ebp+0xfffff990u), 0x55u);
    /* 005c9cf4: mov dword ptr [ebp - 0x66c], 0x67 */ W32((u32)(r_ebp+0xfffff994u), 0x67u);
    /* 005c9cfe: mov dword ptr [ebp - 0x668], 0x76 */ W32((u32)(r_ebp+0xfffff998u), 0x76u);
    /* 005c9d08: mov dword ptr [ebp - 0x664], 0x78 */ W32((u32)(r_ebp+0xfffff99cu), 0x78u);
    /* 005c9d12: mov dword ptr [ebp - 0x660], 0x89 */ W32((u32)(r_ebp+0xfffff9a0u), 0x89u);
    /* 005c9d1c: mov dword ptr [ebp - 0x65c], 0x8a */ W32((u32)(r_ebp+0xfffff9a4u), 0x8au);
    /* 005c9d26: mov dword ptr [ebp - 0x658], 0x93 */ W32((u32)(r_ebp+0xfffff9a8u), 0x93u);
    /* 005c9d30: mov dword ptr [ebp - 0x654], 0x95 */ W32((u32)(r_ebp+0xfffff9acu), 0x95u);
    /* 005c9d3a: mov dword ptr [ebp - 0x650], 0x97 */ W32((u32)(r_ebp+0xfffff9b0u), 0x97u);
    /* 005c9d44: mov dword ptr [ebp - 0x64c], 0x9a */ W32((u32)(r_ebp+0xfffff9b4u), 0x9au);
    /* 005c9d4e: mov dword ptr [ebp - 0x648], 0x9b */ W32((u32)(r_ebp+0xfffff9b8u), 0x9bu);
    /* 005c9d58: mov dword ptr [ebp - 0x644], 0xffffffff */ W32((u32)(r_ebp+0xfffff9bcu), 0xffffffffu);
    /* 005c9d62: mov dword ptr [ebp - 0x640], 0 */ W32((u32)(r_ebp+0xfffff9c0u), 0x0u);
    /* 005c9d6c: mov dword ptr [ebp - 0x63c], 0 */ W32((u32)(r_ebp+0xfffff9c4u), 0x0u);
    /* 005c9d76: mov dword ptr [ebp - 0x638], 0 */ W32((u32)(r_ebp+0xfffff9c8u), 0x0u);
    /* 005c9d80: mov dword ptr [ebp - 0x634], 0x10 */ W32((u32)(r_ebp+0xfffff9ccu), 0x10u);
    /* 005c9d8a: mov dword ptr [ebp - 0x630], 0x35 */ W32((u32)(r_ebp+0xfffff9d0u), 0x35u);
    /* 005c9d94: mov dword ptr [ebp - 0x62c], 0x37 */ W32((u32)(r_ebp+0xfffff9d4u), 0x37u);
    /* 005c9d9e: mov dword ptr [ebp - 0x628], 0x38 */ W32((u32)(r_ebp+0xfffff9d8u), 0x38u);
    /* 005c9da8: mov dword ptr [ebp - 0x624], 0x68 */ W32((u32)(r_ebp+0xfffff9dcu), 0x68u);
    /* 005c9db2: mov dword ptr [ebp - 0x620], 0x77 */ W32((u32)(r_ebp+0xfffff9e0u), 0x77u);
    /* 005c9dbc: mov dword ptr [ebp - 0x61c], 0x79 */ W32((u32)(r_ebp+0xfffff9e4u), 0x79u);
    /* 005c9dc6: mov dword ptr [ebp - 0x618], 0x8a */ W32((u32)(r_ebp+0xfffff9e8u), 0x8au);
    /* 005c9dd0: mov dword ptr [ebp - 0x614], 0x8b */ W32((u32)(r_ebp+0xfffff9ecu), 0x8bu);
    /* 005c9dda: mov dword ptr [ebp - 0x610], 0x91 */ W32((u32)(r_ebp+0xfffff9f0u), 0x91u);
    /* 005c9de4: mov dword ptr [ebp - 0x60c], 0x95 */ W32((u32)(r_ebp+0xfffff9f4u), 0x95u);
    /* 005c9dee: mov dword ptr [ebp - 0x608], 0x97 */ W32((u32)(r_ebp+0xfffff9f8u), 0x97u);
    /* 005c9df8: mov dword ptr [ebp - 0x604], 0x98 */ W32((u32)(r_ebp+0xfffff9fcu), 0x98u);
    /* 005c9e02: mov dword ptr [ebp - 0x600], 0x99 */ W32((u32)(r_ebp+0xfffffa00u), 0x99u);
    /* 005c9e0c: mov dword ptr [ebp - 0x5fc], 0xffffffff */ W32((u32)(r_ebp+0xfffffa04u), 0xffffffffu);
    /* 005c9e16: mov dword ptr [ebp - 0x5f8], 0 */ W32((u32)(r_ebp+0xfffffa08u), 0x0u);
    /* 005c9e20: mov dword ptr [ebp - 0x5f4], 0 */ W32((u32)(r_ebp+0xfffffa0cu), 0x0u);
    /* 005c9e2a: mov dword ptr [ebp - 0x5f0], 0 */ W32((u32)(r_ebp+0xfffffa10u), 0x0u);
    /* 005c9e34: mov dword ptr [ebp - 0x5ec], 0x11 */ W32((u32)(r_ebp+0xfffffa14u), 0x11u);
    /* 005c9e3e: mov dword ptr [ebp - 0x5e8], 0x36 */ W32((u32)(r_ebp+0xfffffa18u), 0x36u);
    /* 005c9e48: mov dword ptr [ebp - 0x5e4], 0x37 */ W32((u32)(r_ebp+0xfffffa1cu), 0x37u);
    /* 005c9e52: mov dword ptr [ebp - 0x5e0], 0x39 */ W32((u32)(r_ebp+0xfffffa20u), 0x39u);
    /* 005c9e5c: mov dword ptr [ebp - 0x5dc], 0x56 */ W32((u32)(r_ebp+0xfffffa24u), 0x56u);
    /* 005c9e66: mov dword ptr [ebp - 0x5d8], 0x68 */ W32((u32)(r_ebp+0xfffffa28u), 0x68u);
    /* 005c9e70: mov dword ptr [ebp - 0x5d4], 0x77 */ W32((u32)(r_ebp+0xfffffa2cu), 0x77u);
    /* 005c9e7a: mov dword ptr [ebp - 0x5d0], 0x78 */ W32((u32)(r_ebp+0xfffffa30u), 0x78u);
    /* 005c9e84: mov dword ptr [ebp - 0x5cc], 0x79 */ W32((u32)(r_ebp+0xfffffa34u), 0x79u);
    /* 005c9e8e: mov dword ptr [ebp - 0x5c8], 0x7a */ W32((u32)(r_ebp+0xfffffa38u), 0x7au);
    /* 005c9e98: mov dword ptr [ebp - 0x5c4], 0x8a */ W32((u32)(r_ebp+0xfffffa3cu), 0x8au);
    /* 005c9ea2: mov dword ptr [ebp - 0x5c0], 0x8b */ W32((u32)(r_ebp+0xfffffa40u), 0x8bu);
    /* 005c9eac: mov dword ptr [ebp - 0x5bc], 0x92 */ W32((u32)(r_ebp+0xfffffa44u), 0x92u);
    /* 005c9eb6: mov dword ptr [ebp - 0x5b8], 0x95 */ W32((u32)(r_ebp+0xfffffa48u), 0x95u);
    /* 005c9ec0: mov dword ptr [ebp - 0x5b4], 0x97 */ W32((u32)(r_ebp+0xfffffa4cu), 0x97u);
    /* 005c9eca: mov dword ptr [ebp - 0x5b0], 0x9a */ W32((u32)(r_ebp+0xfffffa50u), 0x9au);
    /* 005c9ed4: mov dword ptr [ebp - 0x5ac], 0x9b */ W32((u32)(r_ebp+0xfffffa54u), 0x9bu);
    /* 005c9ede: mov dword ptr [ebp - 0x5a8], 0xffffffff */ W32((u32)(r_ebp+0xfffffa58u), 0xffffffffu);
    /* 005c9ee8: mov dword ptr [ebp - 0x5a4], 0x12 */ W32((u32)(r_ebp+0xfffffa5cu), 0x12u);
    /* 005c9ef2: mov dword ptr [ebp - 0x5a0], 0x55 */ W32((u32)(r_ebp+0xfffffa60u), 0x55u);
    /* 005c9efc: mov dword ptr [ebp - 0x59c], 0x56 */ W32((u32)(r_ebp+0xfffffa64u), 0x56u);
    /* 005c9f06: mov dword ptr [ebp - 0x598], 0x57 */ W32((u32)(r_ebp+0xfffffa68u), 0x57u);
    /* 005c9f10: mov dword ptr [ebp - 0x594], 0x68 */ W32((u32)(r_ebp+0xfffffa6cu), 0x68u);
    /* 005c9f1a: mov dword ptr [ebp - 0x590], 0x78 */ W32((u32)(r_ebp+0xfffffa70u), 0x78u);
    /* 005c9f24: mov dword ptr [ebp - 0x58c], 0x7a */ W32((u32)(r_ebp+0xfffffa74u), 0x7au);
    /* 005c9f2e: mov dword ptr [ebp - 0x588], 0x8a */ W32((u32)(r_ebp+0xfffffa78u), 0x8au);
    /* 005c9f38: mov dword ptr [ebp - 0x584], 0x8b */ W32((u32)(r_ebp+0xfffffa7cu), 0x8bu);
    /* 005c9f42: mov dword ptr [ebp - 0x580], 0x93 */ W32((u32)(r_ebp+0xfffffa80u), 0x93u);
    /* 005c9f4c: mov dword ptr [ebp - 0x57c], 0x95 */ W32((u32)(r_ebp+0xfffffa84u), 0x95u);
    /* 005c9f56: mov dword ptr [ebp - 0x578], 0x97 */ W32((u32)(r_ebp+0xfffffa88u), 0x97u);
    /* 005c9f60: mov dword ptr [ebp - 0x574], 0x98 */ W32((u32)(r_ebp+0xfffffa8cu), 0x98u);
    /* 005c9f6a: mov dword ptr [ebp - 0x570], 0x99 */ W32((u32)(r_ebp+0xfffffa90u), 0x99u);
    /* 005c9f74: mov dword ptr [ebp - 0x56c], 0xffffffff */ W32((u32)(r_ebp+0xfffffa94u), 0xffffffffu);
    /* 005c9f7e: mov dword ptr [ebp - 0x568], 0 */ W32((u32)(r_ebp+0xfffffa98u), 0x0u);
    /* 005c9f88: mov dword ptr [ebp - 0x564], 0 */ W32((u32)(r_ebp+0xfffffa9cu), 0x0u);
    /* 005c9f92: mov dword ptr [ebp - 0x560], 0 */ W32((u32)(r_ebp+0xfffffaa0u), 0x0u);
    /* 005c9f9c: mov dword ptr [ebp - 0x55c], 0x13 */ W32((u32)(r_ebp+0xfffffaa4u), 0x13u);
    /* 005c9fa6: mov dword ptr [ebp - 0x558], 0x38 */ W32((u32)(r_ebp+0xfffffaa8u), 0x38u);
    /* 005c9fb0: mov dword ptr [ebp - 0x554], 0x3a */ W32((u32)(r_ebp+0xfffffaacu), 0x3au);
    /* 005c9fba: mov dword ptr [ebp - 0x550], 0x3b */ W32((u32)(r_ebp+0xfffffab0u), 0x3bu);
    /* 005c9fc4: mov dword ptr [ebp - 0x54c], 0x69 */ W32((u32)(r_ebp+0xfffffab4u), 0x69u);
    /* 005c9fce: mov dword ptr [ebp - 0x548], 0x79 */ W32((u32)(r_ebp+0xfffffab8u), 0x79u);
    /* 005c9fd8: mov dword ptr [ebp - 0x544], 0x7b */ W32((u32)(r_ebp+0xfffffabcu), 0x7bu);
    /* 005c9fe2: mov dword ptr [ebp - 0x540], 0x8b */ W32((u32)(r_ebp+0xfffffac0u), 0x8bu);
    /* 005c9fec: mov dword ptr [ebp - 0x53c], 0x8c */ W32((u32)(r_ebp+0xfffffac4u), 0x8cu);
    /* 005c9ff6: mov dword ptr [ebp - 0x538], 0x91 */ W32((u32)(r_ebp+0xfffffac8u), 0x91u);
    /* 005ca000: mov dword ptr [ebp - 0x534], 0x95 */ W32((u32)(r_ebp+0xfffffaccu), 0x95u);
    /* 005ca00a: mov dword ptr [ebp - 0x530], 0x99 */ W32((u32)(r_ebp+0xfffffad0u), 0x99u);
    /* 005ca014: mov dword ptr [ebp - 0x52c], 0x9b */ W32((u32)(r_ebp+0xfffffad4u), 0x9bu);
    /* 005ca01e: mov dword ptr [ebp - 0x528], 0x9c */ W32((u32)(r_ebp+0xfffffad8u), 0x9cu);
    /* 005ca028: mov dword ptr [ebp - 0x524], 0xffffffff */ W32((u32)(r_ebp+0xfffffadcu), 0xffffffffu);
    /* 005ca032: mov dword ptr [ebp - 0x520], 0 */ W32((u32)(r_ebp+0xfffffae0u), 0x0u);
    /* 005ca03c: mov dword ptr [ebp - 0x51c], 0 */ W32((u32)(r_ebp+0xfffffae4u), 0x0u);
    /* 005ca046: mov dword ptr [ebp - 0x518], 0 */ W32((u32)(r_ebp+0xfffffae8u), 0x0u);
    /* 005ca050: mov dword ptr [ebp - 0x514], 0x14 */ W32((u32)(r_ebp+0xfffffaecu), 0x14u);
    /* 005ca05a: mov dword ptr [ebp - 0x510], 0x39 */ W32((u32)(r_ebp+0xfffffaf0u), 0x39u);
    /* 005ca064: mov dword ptr [ebp - 0x50c], 0x3a */ W32((u32)(r_ebp+0xfffffaf4u), 0x3au);
    /* 005ca06e: mov dword ptr [ebp - 0x508], 0x3c */ W32((u32)(r_ebp+0xfffffaf8u), 0x3cu);
    /* 005ca078: mov dword ptr [ebp - 0x504], 0x58 */ W32((u32)(r_ebp+0xfffffafcu), 0x58u);
    /* 005ca082: mov dword ptr [ebp - 0x500], 0x69 */ W32((u32)(r_ebp+0xfffffb00u), 0x69u);
    /* 005ca08c: mov dword ptr [ebp - 0x4fc], 0x79 */ W32((u32)(r_ebp+0xfffffb04u), 0x79u);
    /* 005ca096: mov dword ptr [ebp - 0x4f8], 0x7a */ W32((u32)(r_ebp+0xfffffb08u), 0x7au);
    /* 005ca0a0: mov dword ptr [ebp - 0x4f4], 0x7b */ W32((u32)(r_ebp+0xfffffb0cu), 0x7bu);
    /* 005ca0aa: mov dword ptr [ebp - 0x4f0], 0x7c */ W32((u32)(r_ebp+0xfffffb10u), 0x7cu);
    /* 005ca0b4: mov dword ptr [ebp - 0x4ec], 0x8b */ W32((u32)(r_ebp+0xfffffb14u), 0x8bu);
    /* 005ca0be: mov dword ptr [ebp - 0x4e8], 0x8c */ W32((u32)(r_ebp+0xfffffb18u), 0x8cu);
    /* 005ca0c8: mov dword ptr [ebp - 0x4e4], 0x92 */ W32((u32)(r_ebp+0xfffffb1cu), 0x92u);
    /* 005ca0d2: mov dword ptr [ebp - 0x4e0], 0x95 */ W32((u32)(r_ebp+0xfffffb20u), 0x95u);
    /* 005ca0dc: mov dword ptr [ebp - 0x4dc], 0x98 */ W32((u32)(r_ebp+0xfffffb24u), 0x98u);
    /* 005ca0e6: mov dword ptr [ebp - 0x4d8], 0x9a */ W32((u32)(r_ebp+0xfffffb28u), 0x9au);
    /* 005ca0f0: mov dword ptr [ebp - 0x4d4], 0x9c */ W32((u32)(r_ebp+0xfffffb2cu), 0x9cu);
    /* 005ca0fa: mov dword ptr [ebp - 0x4d0], 0xffffffff */ W32((u32)(r_ebp+0xfffffb30u), 0xffffffffu);
    /* 005ca104: mov dword ptr [ebp - 0x4cc], 0x15 */ W32((u32)(r_ebp+0xfffffb34u), 0x15u);
    /* 005ca10e: mov dword ptr [ebp - 0x4c8], 0x57 */ W32((u32)(r_ebp+0xfffffb38u), 0x57u);
    /* 005ca118: mov dword ptr [ebp - 0x4c4], 0x58 */ W32((u32)(r_ebp+0xfffffb3cu), 0x58u);
    /* 005ca122: mov dword ptr [ebp - 0x4c0], 0x59 */ W32((u32)(r_ebp+0xfffffb40u), 0x59u);
    /* 005ca12c: mov dword ptr [ebp - 0x4bc], 0x69 */ W32((u32)(r_ebp+0xfffffb44u), 0x69u);
    /* 005ca136: mov dword ptr [ebp - 0x4b8], 0x7a */ W32((u32)(r_ebp+0xfffffb48u), 0x7au);
    /* 005ca140: mov dword ptr [ebp - 0x4b4], 0x7c */ W32((u32)(r_ebp+0xfffffb4cu), 0x7cu);
    /* 005ca14a: mov dword ptr [ebp - 0x4b0], 0x8b */ W32((u32)(r_ebp+0xfffffb50u), 0x8bu);
    /* 005ca154: mov dword ptr [ebp - 0x4ac], 0x8c */ W32((u32)(r_ebp+0xfffffb54u), 0x8cu);
    /* 005ca15e: mov dword ptr [ebp - 0x4a8], 0x93 */ W32((u32)(r_ebp+0xfffffb58u), 0x93u);
    /* 005ca168: mov dword ptr [ebp - 0x4a4], 0x95 */ W32((u32)(r_ebp+0xfffffb5cu), 0x95u);
    /* 005ca172: mov dword ptr [ebp - 0x4a0], 0x99 */ W32((u32)(r_ebp+0xfffffb60u), 0x99u);
    /* 005ca17c: mov dword ptr [ebp - 0x49c], 0x9b */ W32((u32)(r_ebp+0xfffffb64u), 0x9bu);
    /* 005ca186: mov dword ptr [ebp - 0x498], 0x9c */ W32((u32)(r_ebp+0xfffffb68u), 0x9cu);
    /* 005ca190: mov dword ptr [ebp - 0x494], 0xffffffff */ W32((u32)(r_ebp+0xfffffb6cu), 0xffffffffu);
    /* 005ca19a: mov dword ptr [ebp - 0x490], 0 */ W32((u32)(r_ebp+0xfffffb70u), 0x0u);
    /* 005ca1a4: mov dword ptr [ebp - 0x48c], 0 */ W32((u32)(r_ebp+0xfffffb74u), 0x0u);
    /* 005ca1ae: mov dword ptr [ebp - 0x488], 0 */ W32((u32)(r_ebp+0xfffffb78u), 0x0u);
    /* 005ca1b8: mov dword ptr [ebp - 0x484], 0x16 */ W32((u32)(r_ebp+0xfffffb7cu), 0x16u);
    /* 005ca1c2: mov dword ptr [ebp - 0x480], 0x3b */ W32((u32)(r_ebp+0xfffffb80u), 0x3bu);
    /* 005ca1cc: mov dword ptr [ebp - 0x47c], 0x3d */ W32((u32)(r_ebp+0xfffffb84u), 0x3du);
    /* 005ca1d6: mov dword ptr [ebp - 0x478], 0x3e */ W32((u32)(r_ebp+0xfffffb88u), 0x3eu);
    /* 005ca1e0: mov dword ptr [ebp - 0x474], 0x6a */ W32((u32)(r_ebp+0xfffffb8cu), 0x6au);
    /* 005ca1ea: mov dword ptr [ebp - 0x470], 0x7b */ W32((u32)(r_ebp+0xfffffb90u), 0x7bu);
    /* 005ca1f4: mov dword ptr [ebp - 0x46c], 0x7d */ W32((u32)(r_ebp+0xfffffb94u), 0x7du);
    /* 005ca1fe: mov dword ptr [ebp - 0x468], 0x8c */ W32((u32)(r_ebp+0xfffffb98u), 0x8cu);
    /* 005ca208: mov dword ptr [ebp - 0x464], 0x8d */ W32((u32)(r_ebp+0xfffffb9cu), 0x8du);
    /* 005ca212: mov dword ptr [ebp - 0x460], 0x91 */ W32((u32)(r_ebp+0xfffffba0u), 0x91u);
    /* 005ca21c: mov dword ptr [ebp - 0x45c], 0x95 */ W32((u32)(r_ebp+0xfffffba4u), 0x95u);
    /* 005ca226: mov dword ptr [ebp - 0x458], 0x98 */ W32((u32)(r_ebp+0xfffffba8u), 0x98u);
    /* 005ca230: mov dword ptr [ebp - 0x454], 0x9a */ W32((u32)(r_ebp+0xfffffbacu), 0x9au);
    /* 005ca23a: mov dword ptr [ebp - 0x450], 0x9c */ W32((u32)(r_ebp+0xfffffbb0u), 0x9cu);
    /* 005ca244: mov dword ptr [ebp - 0x44c], 0xffffffff */ W32((u32)(r_ebp+0xfffffbb4u), 0xffffffffu);
    /* 005ca24e: mov dword ptr [ebp - 0x448], 0 */ W32((u32)(r_ebp+0xfffffbb8u), 0x0u);
    /* 005ca258: mov dword ptr [ebp - 0x444], 0 */ W32((u32)(r_ebp+0xfffffbbcu), 0x0u);
    /* 005ca262: mov dword ptr [ebp - 0x440], 0 */ W32((u32)(r_ebp+0xfffffbc0u), 0x0u);
    /* 005ca26c: mov dword ptr [ebp - 0x43c], 0x17 */ W32((u32)(r_ebp+0xfffffbc4u), 0x17u);
    /* 005ca276: mov dword ptr [ebp - 0x438], 0x3c */ W32((u32)(r_ebp+0xfffffbc8u), 0x3cu);
    /* 005ca280: mov dword ptr [ebp - 0x434], 0x3d */ W32((u32)(r_ebp+0xfffffbccu), 0x3du);
    /* 005ca28a: mov dword ptr [ebp - 0x430], 0x3f */ W32((u32)(r_ebp+0xfffffbd0u), 0x3fu);
    /* 005ca294: mov dword ptr [ebp - 0x42c], 0x5a */ W32((u32)(r_ebp+0xfffffbd4u), 0x5au);
    /* 005ca29e: mov dword ptr [ebp - 0x428], 0x6a */ W32((u32)(r_ebp+0xfffffbd8u), 0x6au);
    /* 005ca2a8: mov dword ptr [ebp - 0x424], 0x7b */ W32((u32)(r_ebp+0xfffffbdcu), 0x7bu);
    /* 005ca2b2: mov dword ptr [ebp - 0x420], 0x7c */ W32((u32)(r_ebp+0xfffffbe0u), 0x7cu);
    /* 005ca2bc: mov dword ptr [ebp - 0x41c], 0x7d */ W32((u32)(r_ebp+0xfffffbe4u), 0x7du);
    /* 005ca2c6: mov dword ptr [ebp - 0x418], 0x7e */ W32((u32)(r_ebp+0xfffffbe8u), 0x7eu);
    /* 005ca2d0: mov dword ptr [ebp - 0x414], 0x8c */ W32((u32)(r_ebp+0xfffffbecu), 0x8cu);
    /* 005ca2da: mov dword ptr [ebp - 0x410], 0x8d */ W32((u32)(r_ebp+0xfffffbf0u), 0x8du);
    /* 005ca2e4: mov dword ptr [ebp - 0x40c], 0x92 */ W32((u32)(r_ebp+0xfffffbf4u), 0x92u);
    /* 005ca2ee: mov dword ptr [ebp - 0x408], 0x95 */ W32((u32)(r_ebp+0xfffffbf8u), 0x95u);
    /* 005ca2f8: mov dword ptr [ebp - 0x404], 0x99 */ W32((u32)(r_ebp+0xfffffbfcu), 0x99u);
    /* 005ca302: mov dword ptr [ebp - 0x400], 0x9b */ W32((u32)(r_ebp+0xfffffc00u), 0x9bu);
    /* 005ca30c: mov dword ptr [ebp - 0x3fc], 0x9c */ W32((u32)(r_ebp+0xfffffc04u), 0x9cu);
    /* 005ca316: mov dword ptr [ebp - 0x3f8], 0xffffffff */ W32((u32)(r_ebp+0xfffffc08u), 0xffffffffu);
    /* 005ca320: mov dword ptr [ebp - 0x3f4], 0x18 */ W32((u32)(r_ebp+0xfffffc0cu), 0x18u);
    /* 005ca32a: mov dword ptr [ebp - 0x3f0], 0x59 */ W32((u32)(r_ebp+0xfffffc10u), 0x59u);
    /* 005ca334: mov dword ptr [ebp - 0x3ec], 0x5a */ W32((u32)(r_ebp+0xfffffc14u), 0x5au);
    /* 005ca33e: mov dword ptr [ebp - 0x3e8], 0x5b */ W32((u32)(r_ebp+0xfffffc18u), 0x5bu);
    /* 005ca348: mov dword ptr [ebp - 0x3e4], 0x6a */ W32((u32)(r_ebp+0xfffffc1cu), 0x6au);
    /* 005ca352: mov dword ptr [ebp - 0x3e0], 0x7c */ W32((u32)(r_ebp+0xfffffc20u), 0x7cu);
    /* 005ca35c: mov dword ptr [ebp - 0x3dc], 0x7e */ W32((u32)(r_ebp+0xfffffc24u), 0x7eu);
    /* 005ca366: mov dword ptr [ebp - 0x3d8], 0x8c */ W32((u32)(r_ebp+0xfffffc28u), 0x8cu);
    /* 005ca370: mov dword ptr [ebp - 0x3d4], 0x8d */ W32((u32)(r_ebp+0xfffffc2cu), 0x8du);
    /* 005ca37a: mov dword ptr [ebp - 0x3d0], 0x93 */ W32((u32)(r_ebp+0xfffffc30u), 0x93u);
    /* 005ca384: mov dword ptr [ebp - 0x3cc], 0x95 */ W32((u32)(r_ebp+0xfffffc34u), 0x95u);
    /* 005ca38e: mov dword ptr [ebp - 0x3c8], 0x98 */ W32((u32)(r_ebp+0xfffffc38u), 0x98u);
    /* 005ca398: mov dword ptr [ebp - 0x3c4], 0x9a */ W32((u32)(r_ebp+0xfffffc3cu), 0x9au);
    /* 005ca3a2: mov dword ptr [ebp - 0x3c0], 0x9c */ W32((u32)(r_ebp+0xfffffc40u), 0x9cu);
    /* 005ca3ac: mov dword ptr [ebp - 0x3bc], 0xffffffff */ W32((u32)(r_ebp+0xfffffc44u), 0xffffffffu);
    /* 005ca3b6: mov dword ptr [ebp - 0x3b8], 0 */ W32((u32)(r_ebp+0xfffffc48u), 0x0u);
    /* 005ca3c0: mov dword ptr [ebp - 0x3b4], 0 */ W32((u32)(r_ebp+0xfffffc4cu), 0x0u);
    /* 005ca3ca: mov dword ptr [ebp - 0x3b0], 0 */ W32((u32)(r_ebp+0xfffffc50u), 0x0u);
    /* 005ca3d4: mov dword ptr [ebp - 0x3ac], 0x19 */ W32((u32)(r_ebp+0xfffffc54u), 0x19u);
    /* 005ca3de: mov dword ptr [ebp - 0x3a8], 0x3e */ W32((u32)(r_ebp+0xfffffc58u), 0x3eu);
    /* 005ca3e8: mov dword ptr [ebp - 0x3a4], 0x40 */ W32((u32)(r_ebp+0xfffffc5cu), 0x40u);
    /* 005ca3f2: mov dword ptr [ebp - 0x3a0], 0x41 */ W32((u32)(r_ebp+0xfffffc60u), 0x41u);
    /* 005ca3fc: mov dword ptr [ebp - 0x39c], 0x6b */ W32((u32)(r_ebp+0xfffffc64u), 0x6bu);
    /* 005ca406: mov dword ptr [ebp - 0x398], 0x7d */ W32((u32)(r_ebp+0xfffffc68u), 0x7du);
    /* 005ca410: mov dword ptr [ebp - 0x394], 0x7f */ W32((u32)(r_ebp+0xfffffc6cu), 0x7fu);
    /* 005ca41a: mov dword ptr [ebp - 0x390], 0x8d */ W32((u32)(r_ebp+0xfffffc70u), 0x8du);
    /* 005ca424: mov dword ptr [ebp - 0x38c], 0x8e */ W32((u32)(r_ebp+0xfffffc74u), 0x8eu);
    /* 005ca42e: mov dword ptr [ebp - 0x388], 0x91 */ W32((u32)(r_ebp+0xfffffc78u), 0x91u);
    /* 005ca438: mov dword ptr [ebp - 0x384], 0x96 */ W32((u32)(r_ebp+0xfffffc7cu), 0x96u);
    /* 005ca442: mov dword ptr [ebp - 0x380], 0x99 */ W32((u32)(r_ebp+0xfffffc80u), 0x99u);
    /* 005ca44c: mov dword ptr [ebp - 0x37c], 0x9b */ W32((u32)(r_ebp+0xfffffc84u), 0x9bu);
    /* 005ca456: mov dword ptr [ebp - 0x378], 0x9c */ W32((u32)(r_ebp+0xfffffc88u), 0x9cu);
    /* 005ca460: mov dword ptr [ebp - 0x374], 0xffffffff */ W32((u32)(r_ebp+0xfffffc8cu), 0xffffffffu);
    /* 005ca46a: mov dword ptr [ebp - 0x370], 0 */ W32((u32)(r_ebp+0xfffffc90u), 0x0u);
    /* 005ca474: mov dword ptr [ebp - 0x36c], 0 */ W32((u32)(r_ebp+0xfffffc94u), 0x0u);
    /* 005ca47e: mov dword ptr [ebp - 0x368], 0 */ W32((u32)(r_ebp+0xfffffc98u), 0x0u);
    /* 005ca488: mov dword ptr [ebp - 0x364], 0x1a */ W32((u32)(r_ebp+0xfffffc9cu), 0x1au);
    /* 005ca492: mov dword ptr [ebp - 0x360], 0x3f */ W32((u32)(r_ebp+0xfffffca0u), 0x3fu);
    /* 005ca49c: mov dword ptr [ebp - 0x35c], 0x40 */ W32((u32)(r_ebp+0xfffffca4u), 0x40u);
    /* 005ca4a6: mov dword ptr [ebp - 0x358], 0x42 */ W32((u32)(r_ebp+0xfffffca8u), 0x42u);
    /* 005ca4b0: mov dword ptr [ebp - 0x354], 0x5c */ W32((u32)(r_ebp+0xfffffcacu), 0x5cu);
    /* 005ca4ba: mov dword ptr [ebp - 0x350], 0x6b */ W32((u32)(r_ebp+0xfffffcb0u), 0x6bu);
    /* 005ca4c4: mov dword ptr [ebp - 0x34c], 0x7d */ W32((u32)(r_ebp+0xfffffcb4u), 0x7du);
    /* 005ca4ce: mov dword ptr [ebp - 0x348], 0x7e */ W32((u32)(r_ebp+0xfffffcb8u), 0x7eu);
    /* 005ca4d8: mov dword ptr [ebp - 0x344], 0x7f */ W32((u32)(r_ebp+0xfffffcbcu), 0x7fu);
    /* 005ca4e2: mov dword ptr [ebp - 0x340], 0x80 */ W32((u32)(r_ebp+0xfffffcc0u), 0x80u);
    /* 005ca4ec: mov dword ptr [ebp - 0x33c], 0x8d */ W32((u32)(r_ebp+0xfffffcc4u), 0x8du);
    /* 005ca4f6: mov dword ptr [ebp - 0x338], 0x8e */ W32((u32)(r_ebp+0xfffffcc8u), 0x8eu);
    /* 005ca500: mov dword ptr [ebp - 0x334], 0x92 */ W32((u32)(r_ebp+0xfffffcccu), 0x92u);
    /* 005ca50a: mov dword ptr [ebp - 0x330], 0x96 */ W32((u32)(r_ebp+0xfffffcd0u), 0x96u);
    /* 005ca514: mov dword ptr [ebp - 0x32c], 0x98 */ W32((u32)(r_ebp+0xfffffcd4u), 0x98u);
    /* 005ca51e: mov dword ptr [ebp - 0x328], 0x9a */ W32((u32)(r_ebp+0xfffffcd8u), 0x9au);
    /* 005ca528: mov dword ptr [ebp - 0x324], 0x9c */ W32((u32)(r_ebp+0xfffffcdcu), 0x9cu);
    /* 005ca532: mov dword ptr [ebp - 0x320], 0xffffffff */ W32((u32)(r_ebp+0xfffffce0u), 0xffffffffu);
    /* 005ca53c: mov dword ptr [ebp - 0x31c], 0x1b */ W32((u32)(r_ebp+0xfffffce4u), 0x1bu);
    /* 005ca546: mov dword ptr [ebp - 0x318], 0x5b */ W32((u32)(r_ebp+0xfffffce8u), 0x5bu);
    /* 005ca550: mov dword ptr [ebp - 0x314], 0x5c */ W32((u32)(r_ebp+0xfffffcecu), 0x5cu);
    /* 005ca55a: mov dword ptr [ebp - 0x310], 0x5d */ W32((u32)(r_ebp+0xfffffcf0u), 0x5du);
    /* 005ca564: mov dword ptr [ebp - 0x30c], 0x6b */ W32((u32)(r_ebp+0xfffffcf4u), 0x6bu);
    /* 005ca56e: mov dword ptr [ebp - 0x308], 0x7e */ W32((u32)(r_ebp+0xfffffcf8u), 0x7eu);
    /* 005ca578: mov dword ptr [ebp - 0x304], 0x80 */ W32((u32)(r_ebp+0xfffffcfcu), 0x80u);
    /* 005ca582: mov dword ptr [ebp - 0x300], 0x8d */ W32((u32)(r_ebp+0xfffffd00u), 0x8du);
    /* 005ca58c: mov dword ptr [ebp - 0x2fc], 0x8e */ W32((u32)(r_ebp+0xfffffd04u), 0x8eu);
    /* 005ca596: mov dword ptr [ebp - 0x2f8], 0x93 */ W32((u32)(r_ebp+0xfffffd08u), 0x93u);
    /* 005ca5a0: mov dword ptr [ebp - 0x2f4], 0x96 */ W32((u32)(r_ebp+0xfffffd0cu), 0x96u);
    /* 005ca5aa: mov dword ptr [ebp - 0x2f0], 0x99 */ W32((u32)(r_ebp+0xfffffd10u), 0x99u);
    /* 005ca5b4: mov dword ptr [ebp - 0x2ec], 0x9b */ W32((u32)(r_ebp+0xfffffd14u), 0x9bu);
    /* 005ca5be: mov dword ptr [ebp - 0x2e8], 0x9c */ W32((u32)(r_ebp+0xfffffd18u), 0x9cu);
    /* 005ca5c8: mov dword ptr [ebp - 0x2e4], 0xffffffff */ W32((u32)(r_ebp+0xfffffd1cu), 0xffffffffu);
    /* 005ca5d2: mov dword ptr [ebp - 0x2e0], 0 */ W32((u32)(r_ebp+0xfffffd20u), 0x0u);
    /* 005ca5dc: mov dword ptr [ebp - 0x2dc], 0 */ W32((u32)(r_ebp+0xfffffd24u), 0x0u);
    /* 005ca5e6: mov dword ptr [ebp - 0x2d8], 0 */ W32((u32)(r_ebp+0xfffffd28u), 0x0u);
    /* 005ca5f0: mov dword ptr [ebp - 0x2d4], 0x1c */ W32((u32)(r_ebp+0xfffffd2cu), 0x1cu);
    /* 005ca5fa: mov dword ptr [ebp - 0x2d0], 0x41 */ W32((u32)(r_ebp+0xfffffd30u), 0x41u);
    /* 005ca604: mov dword ptr [ebp - 0x2cc], 0x43 */ W32((u32)(r_ebp+0xfffffd34u), 0x43u);
    /* 005ca60e: mov dword ptr [ebp - 0x2c8], 0x44 */ W32((u32)(r_ebp+0xfffffd38u), 0x44u);
    /* 005ca618: mov dword ptr [ebp - 0x2c4], 0x6c */ W32((u32)(r_ebp+0xfffffd3cu), 0x6cu);
    /* 005ca622: mov dword ptr [ebp - 0x2c0], 0x7f */ W32((u32)(r_ebp+0xfffffd40u), 0x7fu);
    /* 005ca62c: mov dword ptr [ebp - 0x2bc], 0x81 */ W32((u32)(r_ebp+0xfffffd44u), 0x81u);
    /* 005ca636: mov dword ptr [ebp - 0x2b8], 0x8e */ W32((u32)(r_ebp+0xfffffd48u), 0x8eu);
    /* 005ca640: mov dword ptr [ebp - 0x2b4], 0x8f */ W32((u32)(r_ebp+0xfffffd4cu), 0x8fu);
    /* 005ca64a: mov dword ptr [ebp - 0x2b0], 0x91 */ W32((u32)(r_ebp+0xfffffd50u), 0x91u);
    /* 005ca654: mov dword ptr [ebp - 0x2ac], 0x96 */ W32((u32)(r_ebp+0xfffffd54u), 0x96u);
    /* 005ca65e: mov dword ptr [ebp - 0x2a8], 0x98 */ W32((u32)(r_ebp+0xfffffd58u), 0x98u);
    /* 005ca668: mov dword ptr [ebp - 0x2a4], 0x9a */ W32((u32)(r_ebp+0xfffffd5cu), 0x9au);
    /* 005ca672: mov dword ptr [ebp - 0x2a0], 0x9c */ W32((u32)(r_ebp+0xfffffd60u), 0x9cu);
    /* 005ca67c: mov dword ptr [ebp - 0x29c], 0xffffffff */ W32((u32)(r_ebp+0xfffffd64u), 0xffffffffu);
    /* 005ca686: mov dword ptr [ebp - 0x298], 0 */ W32((u32)(r_ebp+0xfffffd68u), 0x0u);
    /* 005ca690: mov dword ptr [ebp - 0x294], 0 */ W32((u32)(r_ebp+0xfffffd6cu), 0x0u);
    /* 005ca69a: mov dword ptr [ebp - 0x290], 0 */ W32((u32)(r_ebp+0xfffffd70u), 0x0u);
    /* 005ca6a4: mov dword ptr [ebp - 0x28c], 0x1d */ W32((u32)(r_ebp+0xfffffd74u), 0x1du);
    /* 005ca6ae: mov dword ptr [ebp - 0x288], 0x42 */ W32((u32)(r_ebp+0xfffffd78u), 0x42u);
    /* 005ca6b8: mov dword ptr [ebp - 0x284], 0x43 */ W32((u32)(r_ebp+0xfffffd7cu), 0x43u);
    /* 005ca6c2: mov dword ptr [ebp - 0x280], 0x45 */ W32((u32)(r_ebp+0xfffffd80u), 0x45u);
    /* 005ca6cc: mov dword ptr [ebp - 0x27c], 0x5e */ W32((u32)(r_ebp+0xfffffd84u), 0x5eu);
    /* 005ca6d6: mov dword ptr [ebp - 0x278], 0x6c */ W32((u32)(r_ebp+0xfffffd88u), 0x6cu);
    /* 005ca6e0: mov dword ptr [ebp - 0x274], 0x7f */ W32((u32)(r_ebp+0xfffffd8cu), 0x7fu);
    /* 005ca6ea: mov dword ptr [ebp - 0x270], 0x80 */ W32((u32)(r_ebp+0xfffffd90u), 0x80u);
    /* 005ca6f4: mov dword ptr [ebp - 0x26c], 0x81 */ W32((u32)(r_ebp+0xfffffd94u), 0x81u);
    /* 005ca6fe: mov dword ptr [ebp - 0x268], 0x82 */ W32((u32)(r_ebp+0xfffffd98u), 0x82u);
    /* 005ca708: mov dword ptr [ebp - 0x264], 0x8e */ W32((u32)(r_ebp+0xfffffd9cu), 0x8eu);
    /* 005ca712: mov dword ptr [ebp - 0x260], 0x8f */ W32((u32)(r_ebp+0xfffffda0u), 0x8fu);
    /* 005ca71c: mov dword ptr [ebp - 0x25c], 0x92 */ W32((u32)(r_ebp+0xfffffda4u), 0x92u);
    /* 005ca726: mov dword ptr [ebp - 0x258], 0x96 */ W32((u32)(r_ebp+0xfffffda8u), 0x96u);
    /* 005ca730: mov dword ptr [ebp - 0x254], 0x9a */ W32((u32)(r_ebp+0xfffffdacu), 0x9au);
    /* 005ca73a: mov dword ptr [ebp - 0x250], 0x9b */ W32((u32)(r_ebp+0xfffffdb0u), 0x9bu);
    /* 005ca744: mov dword ptr [ebp - 0x24c], 0x9c */ W32((u32)(r_ebp+0xfffffdb4u), 0x9cu);
    /* 005ca74e: mov dword ptr [ebp - 0x248], 0xffffffff */ W32((u32)(r_ebp+0xfffffdb8u), 0xffffffffu);
    /* 005ca758: mov dword ptr [ebp - 0x244], 0x1e */ W32((u32)(r_ebp+0xfffffdbcu), 0x1eu);
    /* 005ca762: mov dword ptr [ebp - 0x240], 0x5d */ W32((u32)(r_ebp+0xfffffdc0u), 0x5du);
    /* 005ca76c: mov dword ptr [ebp - 0x23c], 0x5e */ W32((u32)(r_ebp+0xfffffdc4u), 0x5eu);
    /* 005ca776: mov dword ptr [ebp - 0x238], 0x5f */ W32((u32)(r_ebp+0xfffffdc8u), 0x5fu);
    /* 005ca780: mov dword ptr [ebp - 0x234], 0x6c */ W32((u32)(r_ebp+0xfffffdccu), 0x6cu);
    /* 005ca78a: mov dword ptr [ebp - 0x230], 0x80 */ W32((u32)(r_ebp+0xfffffdd0u), 0x80u);
    /* 005ca794: mov dword ptr [ebp - 0x22c], 0x82 */ W32((u32)(r_ebp+0xfffffdd4u), 0x82u);
    /* 005ca79e: mov dword ptr [ebp - 0x228], 0x8e */ W32((u32)(r_ebp+0xfffffdd8u), 0x8eu);
    /* 005ca7a8: mov dword ptr [ebp - 0x224], 0x8f */ W32((u32)(r_ebp+0xfffffddcu), 0x8fu);
    /* 005ca7b2: mov dword ptr [ebp - 0x220], 0x93 */ W32((u32)(r_ebp+0xfffffde0u), 0x93u);
    /* 005ca7bc: mov dword ptr [ebp - 0x21c], 0x96 */ W32((u32)(r_ebp+0xfffffde4u), 0x96u);
    /* 005ca7c6: mov dword ptr [ebp - 0x218], 0x98 */ W32((u32)(r_ebp+0xfffffde8u), 0x98u);
    /* 005ca7d0: mov dword ptr [ebp - 0x214], 0x99 */ W32((u32)(r_ebp+0xfffffdecu), 0x99u);
    /* 005ca7da: mov dword ptr [ebp - 0x210], 0x9c */ W32((u32)(r_ebp+0xfffffdf0u), 0x9cu);
    /* 005ca7e4: mov dword ptr [ebp - 0x20c], 0xffffffff */ W32((u32)(r_ebp+0xfffffdf4u), 0xffffffffu);
    /* 005ca7ee: mov dword ptr [ebp - 0x208], 0 */ W32((u32)(r_ebp+0xfffffdf8u), 0x0u);
    /* 005ca7f8: mov dword ptr [ebp - 0x204], 0 */ W32((u32)(r_ebp+0xfffffdfcu), 0x0u);
    /* 005ca802: mov dword ptr [ebp - 0x200], 0 */ W32((u32)(r_ebp+0xfffffe00u), 0x0u);
    /* 005ca80c: mov dword ptr [ebp - 0x1fc], 0x1f */ W32((u32)(r_ebp+0xfffffe04u), 0x1fu);
    /* 005ca816: mov dword ptr [ebp - 0x1f8], 0x44 */ W32((u32)(r_ebp+0xfffffe08u), 0x44u);
    /* 005ca820: mov dword ptr [ebp - 0x1f4], 0x46 */ W32((u32)(r_ebp+0xfffffe0cu), 0x46u);
    /* 005ca82a: mov dword ptr [ebp - 0x1f0], 0x47 */ W32((u32)(r_ebp+0xfffffe10u), 0x47u);
    /* 005ca834: mov dword ptr [ebp - 0x1ec], 0x6d */ W32((u32)(r_ebp+0xfffffe14u), 0x6du);
    /* 005ca83e: mov dword ptr [ebp - 0x1e8], 0x81 */ W32((u32)(r_ebp+0xfffffe18u), 0x81u);
    /* 005ca848: mov dword ptr [ebp - 0x1e4], 0x83 */ W32((u32)(r_ebp+0xfffffe1cu), 0x83u);
    /* 005ca852: mov dword ptr [ebp - 0x1e0], 0x8f */ W32((u32)(r_ebp+0xfffffe20u), 0x8fu);
    /* 005ca85c: mov dword ptr [ebp - 0x1dc], 0x90 */ W32((u32)(r_ebp+0xfffffe24u), 0x90u);
    /* 005ca866: mov dword ptr [ebp - 0x1d8], 0x91 */ W32((u32)(r_ebp+0xfffffe28u), 0x91u);
    /* 005ca870: mov dword ptr [ebp - 0x1d4], 0x96 */ W32((u32)(r_ebp+0xfffffe2cu), 0x96u);
    /* 005ca87a: mov dword ptr [ebp - 0x1d0], 0x9a */ W32((u32)(r_ebp+0xfffffe30u), 0x9au);
    /* 005ca884: mov dword ptr [ebp - 0x1cc], 0x9b */ W32((u32)(r_ebp+0xfffffe34u), 0x9bu);
    /* 005ca88e: mov dword ptr [ebp - 0x1c8], 0x9c */ W32((u32)(r_ebp+0xfffffe38u), 0x9cu);
    /* 005ca898: mov dword ptr [ebp - 0x1c4], 0xffffffff */ W32((u32)(r_ebp+0xfffffe3cu), 0xffffffffu);
    /* 005ca8a2: mov dword ptr [ebp - 0x1c0], 0 */ W32((u32)(r_ebp+0xfffffe40u), 0x0u);
    /* 005ca8ac: mov dword ptr [ebp - 0x1bc], 0 */ W32((u32)(r_ebp+0xfffffe44u), 0x0u);
    /* 005ca8b6: mov dword ptr [ebp - 0x1b8], 0 */ W32((u32)(r_ebp+0xfffffe48u), 0x0u);
    /* 005ca8c0: mov dword ptr [ebp - 0x1b4], 0x20 */ W32((u32)(r_ebp+0xfffffe4cu), 0x20u);
    /* 005ca8ca: mov dword ptr [ebp - 0x1b0], 0x45 */ W32((u32)(r_ebp+0xfffffe50u), 0x45u);
    /* 005ca8d4: mov dword ptr [ebp - 0x1ac], 0x46 */ W32((u32)(r_ebp+0xfffffe54u), 0x46u);
    /* 005ca8de: mov dword ptr [ebp - 0x1a8], 0x48 */ W32((u32)(r_ebp+0xfffffe58u), 0x48u);
    /* 005ca8e8: mov dword ptr [ebp - 0x1a4], 0x60 */ W32((u32)(r_ebp+0xfffffe5cu), 0x60u);
    /* 005ca8f2: mov dword ptr [ebp - 0x1a0], 0x6d */ W32((u32)(r_ebp+0xfffffe60u), 0x6du);
    /* 005ca8fc: mov dword ptr [ebp - 0x19c], 0x81 */ W32((u32)(r_ebp+0xfffffe64u), 0x81u);
    /* 005ca906: mov dword ptr [ebp - 0x198], 0x82 */ W32((u32)(r_ebp+0xfffffe68u), 0x82u);
    /* 005ca910: mov dword ptr [ebp - 0x194], 0x83 */ W32((u32)(r_ebp+0xfffffe6cu), 0x83u);
    /* 005ca91a: mov dword ptr [ebp - 0x190], 0x84 */ W32((u32)(r_ebp+0xfffffe70u), 0x84u);
    /* 005ca924: mov dword ptr [ebp - 0x18c], 0x8f */ W32((u32)(r_ebp+0xfffffe74u), 0x8fu);
    /* 005ca92e: mov dword ptr [ebp - 0x188], 0x90 */ W32((u32)(r_ebp+0xfffffe78u), 0x90u);
    /* 005ca938: mov dword ptr [ebp - 0x184], 0x92 */ W32((u32)(r_ebp+0xfffffe7cu), 0x92u);
    /* 005ca942: mov dword ptr [ebp - 0x180], 0x96 */ W32((u32)(r_ebp+0xfffffe80u), 0x96u);
    /* 005ca94c: mov dword ptr [ebp - 0x17c], 0x98 */ W32((u32)(r_ebp+0xfffffe84u), 0x98u);
    /* 005ca956: mov dword ptr [ebp - 0x178], 0x99 */ W32((u32)(r_ebp+0xfffffe88u), 0x99u);
    /* 005ca960: mov dword ptr [ebp - 0x174], 0x9c */ W32((u32)(r_ebp+0xfffffe8cu), 0x9cu);
    /* 005ca96a: mov dword ptr [ebp - 0x170], 0xffffffff */ W32((u32)(r_ebp+0xfffffe90u), 0xffffffffu);
    /* 005ca974: mov dword ptr [ebp - 0x16c], 0x21 */ W32((u32)(r_ebp+0xfffffe94u), 0x21u);
    /* 005ca97e: mov dword ptr [ebp - 0x168], 0x5f */ W32((u32)(r_ebp+0xfffffe98u), 0x5fu);
    /* 005ca988: mov dword ptr [ebp - 0x164], 0x60 */ W32((u32)(r_ebp+0xfffffe9cu), 0x60u);
    /* 005ca992: mov dword ptr [ebp - 0x160], 0x61 */ W32((u32)(r_ebp+0xfffffea0u), 0x61u);
    /* 005ca99c: mov dword ptr [ebp - 0x15c], 0x6d */ W32((u32)(r_ebp+0xfffffea4u), 0x6du);
    /* 005ca9a6: mov dword ptr [ebp - 0x158], 0x82 */ W32((u32)(r_ebp+0xfffffea8u), 0x82u);
    /* 005ca9b0: mov dword ptr [ebp - 0x154], 0x84 */ W32((u32)(r_ebp+0xfffffeacu), 0x84u);
    /* 005ca9ba: mov dword ptr [ebp - 0x150], 0x8f */ W32((u32)(r_ebp+0xfffffeb0u), 0x8fu);
    /* 005ca9c4: mov dword ptr [ebp - 0x14c], 0x90 */ W32((u32)(r_ebp+0xfffffeb4u), 0x90u);
    /* 005ca9ce: mov dword ptr [ebp - 0x148], 0x93 */ W32((u32)(r_ebp+0xfffffeb8u), 0x93u);
    /* 005ca9d8: mov dword ptr [ebp - 0x144], 0x96 */ W32((u32)(r_ebp+0xfffffebcu), 0x96u);
    /* 005ca9e2: mov dword ptr [ebp - 0x140], 0x9a */ W32((u32)(r_ebp+0xfffffec0u), 0x9au);
    /* 005ca9ec: mov dword ptr [ebp - 0x13c], 0x9b */ W32((u32)(r_ebp+0xfffffec4u), 0x9bu);
    /* 005ca9f6: mov dword ptr [ebp - 0x138], 0x9c */ W32((u32)(r_ebp+0xfffffec8u), 0x9cu);
    /* 005caa00: mov dword ptr [ebp - 0x134], 0xffffffff */ W32((u32)(r_ebp+0xfffffeccu), 0xffffffffu);
    /* 005caa0a: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
    /* 005caa14: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
    /* 005caa1e: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 005caa28: mov dword ptr [ebp - 0x124], 0x22 */ W32((u32)(r_ebp+0xfffffedcu), 0x22u);
    /* 005caa32: mov dword ptr [ebp - 0x120], 0x47 */ W32((u32)(r_ebp+0xfffffee0u), 0x47u);
    /* 005caa3c: mov dword ptr [ebp - 0x11c], 0x49 */ W32((u32)(r_ebp+0xfffffee4u), 0x49u);
    /* 005caa46: mov dword ptr [ebp - 0x118], 0x6e */ W32((u32)(r_ebp+0xfffffee8u), 0x6eu);
    /* 005caa50: mov dword ptr [ebp - 0x114], 0x83 */ W32((u32)(r_ebp+0xfffffeecu), 0x83u);
    /* 005caa5a: mov dword ptr [ebp - 0x110], 0x90 */ W32((u32)(r_ebp+0xfffffef0u), 0x90u);
    /* 005caa64: mov dword ptr [ebp - 0x10c], 0x91 */ W32((u32)(r_ebp+0xfffffef4u), 0x91u);
    /* 005caa6e: mov dword ptr [ebp - 0x108], 0x96 */ W32((u32)(r_ebp+0xfffffef8u), 0x96u);
    /* 005caa78: mov dword ptr [ebp - 0x104], 0x98 */ W32((u32)(r_ebp+0xfffffefcu), 0x98u);
    /* 005caa82: mov dword ptr [ebp - 0x100], 0x99 */ W32((u32)(r_ebp+0xffffff00u), 0x99u);
    /* 005caa8c: mov dword ptr [ebp - 0xfc], 0x9c */ W32((u32)(r_ebp+0xffffff04u), 0x9cu);
    /* 005caa96: mov dword ptr [ebp - 0xf8], 0xffffffff */ W32((u32)(r_ebp+0xffffff08u), 0xffffffffu);
    /* 005caaa0: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
    /* 005caaaa: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
    /* 005caab4: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
    /* 005caabe: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
    /* 005caac8: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
    /* 005caad2: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
    /* 005caadc: mov dword ptr [ebp - 0xdc], 0x23 */ W32((u32)(r_ebp+0xffffff24u), 0x23u);
    /* 005caae6: mov dword ptr [ebp - 0xd8], 0x48 */ W32((u32)(r_ebp+0xffffff28u), 0x48u);
    /* 005caaf0: mov dword ptr [ebp - 0xd4], 0x49 */ W32((u32)(r_ebp+0xffffff2cu), 0x49u);
    /* 005caafa: mov dword ptr [ebp - 0xd0], 0x62 */ W32((u32)(r_ebp+0xffffff30u), 0x62u);
    /* 005cab04: mov dword ptr [ebp - 0xcc], 0x6e */ W32((u32)(r_ebp+0xffffff34u), 0x6eu);
    /* 005cab0e: mov dword ptr [ebp - 0xc8], 0x83 */ W32((u32)(r_ebp+0xffffff38u), 0x83u);
    /* 005cab18: mov dword ptr [ebp - 0xc4], 0x84 */ W32((u32)(r_ebp+0xffffff3cu), 0x84u);
    /* 005cab22: mov dword ptr [ebp - 0xc0], 0x90 */ W32((u32)(r_ebp+0xffffff40u), 0x90u);
    /* 005cab2c: mov dword ptr [ebp - 0xbc], 0x92 */ W32((u32)(r_ebp+0xffffff44u), 0x92u);
    /* 005cab36: mov dword ptr [ebp - 0xb8], 0x96 */ W32((u32)(r_ebp+0xffffff48u), 0x96u);
    /* 005cab40: mov dword ptr [ebp - 0xb4], 0x9a */ W32((u32)(r_ebp+0xffffff4cu), 0x9au);
    /* 005cab4a: mov dword ptr [ebp - 0xb0], 0x9b */ W32((u32)(r_ebp+0xffffff50u), 0x9bu);
    /* 005cab54: mov dword ptr [ebp - 0xac], 0x9c */ W32((u32)(r_ebp+0xffffff54u), 0x9cu);
    /* 005cab5e: mov dword ptr [ebp - 0xa8], 0xffffffff */ W32((u32)(r_ebp+0xffffff58u), 0xffffffffu);
    /* 005cab68: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 005cab72: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 005cab7c: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 005cab86: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 005cab90: mov dword ptr [ebp - 0x94], 0x24 */ W32((u32)(r_ebp+0xffffff6cu), 0x24u);
    /* 005cab9a: mov dword ptr [ebp - 0x90], 0x61 */ W32((u32)(r_ebp+0xffffff70u), 0x61u);
    /* 005caba4: mov dword ptr [ebp - 0x8c], 0x62 */ W32((u32)(r_ebp+0xffffff74u), 0x62u);
    /* 005cabae: mov dword ptr [ebp - 0x88], 0x6e */ W32((u32)(r_ebp+0xffffff78u), 0x6eu);
    /* 005cabb8: mov dword ptr [ebp - 0x84], 0x84 */ W32((u32)(r_ebp+0xffffff7cu), 0x84u);
    /* 005cabc2: mov dword ptr [ebp - 0x80], 0x90 */ W32((u32)(r_ebp+0xffffff80u), 0x90u);
    /* 005cabc9: mov dword ptr [ebp - 0x7c], 0x93 */ W32((u32)(r_ebp+0xffffff84u), 0x93u);
    /* 005cabd0: mov dword ptr [ebp - 0x78], 0x96 */ W32((u32)(r_ebp+0xffffff88u), 0x96u);
    /* 005cabd7: mov dword ptr [ebp - 0x74], 0x98 */ W32((u32)(r_ebp+0xffffff8cu), 0x98u);
    /* 005cabde: mov dword ptr [ebp - 0x70], 0x99 */ W32((u32)(r_ebp+0xffffff90u), 0x99u);
    /* 005cabe5: mov dword ptr [ebp - 0x6c], 0x9c */ W32((u32)(r_ebp+0xffffff94u), 0x9cu);
    /* 005cabec: mov dword ptr [ebp - 0x68], 0xffffffff */ W32((u32)(r_ebp+0xffffff98u), 0xffffffffu);
    /* 005cabf3: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005cabfa: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005cac01: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005cac08: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005cac0f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005cac16: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005cac1d: mov dword ptr [ebp - 0x4c], 0x25 */ W32((u32)(r_ebp+0xffffffb4u), 0x25u);
    /* 005cac24: mov dword ptr [ebp - 0x48], 0x4a */ W32((u32)(r_ebp+0xffffffb8u), 0x4au);
    /* 005cac2b: mov dword ptr [ebp - 0x44], 0x4b */ W32((u32)(r_ebp+0xffffffbcu), 0x4bu);
    /* 005cac32: mov dword ptr [ebp - 0x40], 0x85 */ W32((u32)(r_ebp+0xffffffc0u), 0x85u);
    /* 005cac39: mov dword ptr [ebp - 0x3c], 0x9d */ W32((u32)(r_ebp+0xffffffc4u), 0x9du);
    /* 005cac40: mov dword ptr [ebp - 0x38], 0xffffffff */ W32((u32)(r_ebp+0xffffffc8u), 0xffffffffu);
    /* 005cac47: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005cac4e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005cac55: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005cac5c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005cac63: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005cac6a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005cac71: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005cac78: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005cac7f: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005cac86: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cac8d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cac94: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cac9b: mov dword ptr [ebp - 0xab8], 0 */ W32((u32)(r_ebp+0xfffff548u), 0x0u);
    /* 005caca5: jmp 0x5cacb6 */ goto L_005cacb6;
L_005caca7:; BB(0x005caca7);
    /* 005caca7: mov eax, dword ptr [ebp - 0xab8] */ r_eax = R32((u32)(r_ebp+0xfffff548u));
    /* 005cacad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cacb0: mov dword ptr [ebp - 0xab8], eax */ W32((u32)(r_ebp+0xfffff548u), r_eax);
L_005cacb6:; BB(0x005cacb6);
    /* 005cacb6: cmp dword ptr [ebp - 0xab8], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffff548u)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cacbd: jge 0x5cad08 */ if ((fS==fO)) goto L_005cad08;
L_005cacbf:; BB(0x005cacbf);
    /* 005cacbf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cacc2: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cacc5: lea edx, [ebp + ecx - 0xab4] */ r_edx = (u32)(r_ebp+r_ecx+0xfffff54cu);
    /* 005caccc: mov eax, dword ptr [ebp - 0xab8] */ r_eax = R32((u32)(r_ebp+0xfffff548u));
    /* 005cacd2: cmp dword ptr [edx + eax*4], -1 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cacd6: jne 0x5cacda */ if (!fZ) goto L_005cacda;
L_005cacd8:; BB(0x005cacd8);
    /* 005cacd8: jmp 0x5cad08 */ goto L_005cad08;
L_005cacda:; BB(0x005cacda);
    /* 005cacda: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cacdd: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cace0: lea esi, [ebp + ecx - 0xab4] */ r_esi = (u32)(r_ebp+r_ecx+0xfffff54cu);
    /* 005cace7: mov ecx, dword ptr [ebp - 0xabc] */ r_ecx = R32((u32)(r_ebp+0xfffff544u));
    /* 005caced: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x5cacf2u); f_00427ecb();
    /* 005cacf2: mov edx, dword ptr [ebp - 0xab8] */ r_edx = R32((u32)(r_ebp+0xfffff548u));
    /* 005cacf8: cmp dword ptr [esi + edx*4], eax */ {  u32 a = R32((u32)(r_esi+r_edx*4)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cacfb: jne 0x5cad06 */ if (!fZ) goto L_005cad06;
L_005cacfd:; BB(0x005cacfd);
    /* 005cacfd: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005cad04: jmp 0x5cad08 */ goto L_005cad08;
L_005cad06:; BB(0x005cad06);
    /* 005cad06: jmp 0x5caca7 */ goto L_005caca7;
L_005cad08:; BB(0x005cad08);
    /* 005cad08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cad0a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cad0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cad0e: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cad14: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cad19u); f_005cd25d();
    /* 005cad19: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005cad1c: mov ecx, dword ptr [ebp - 0xabc] */ r_ecx = R32((u32)(r_ebp+0xfffff544u));
    /* 005cad22: mov edx, dword ptr [ecx + eax + 0x6c] */ r_edx = R32((u32)(r_ecx+r_eax+0x6cu));
    /* 005cad26: mov dword ptr [ebp - 0xac0], edx */ W32((u32)(r_ebp+0xfffff540u), r_edx);
    /* 005cad2c: mov eax, dword ptr [ebp - 0xac0] */ r_eax = R32((u32)(r_ebp+0xfffff540u));
    /* 005cad32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cad34: mov ecx, dword ptr [ebp - 0xac0] */ r_ecx = R32((u32)(r_ebp+0xfffff540u));
    /* 005cad3a: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5cad3du); call_ind(t); }
    /* 005cad3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cad40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cad41: mov esp, ebp */ r_esp = r_ebp;
    /* 005cad43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cad44: ret 4 */ FN_RET(0x005c9229); r_esp += 8; return;
}

void f_005cad47(void) /* FUN_005cad47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cad47);
    /* 005cad47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cad48: mov ebp, esp */ r_ebp = r_esp;
    /* 005cad4a: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cad4d: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005cad50: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cad53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cad54: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cad57: call 0x425366 */ r_esp -= 4; W32(r_esp, 0x5cad5cu); f_00425366();
    /* 005cad5c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cad5f: mov dword ptr [ecx], 0x63adfc */ W32((u32)(r_ecx), 0x63adfcu);
    /* 005cad65: mov dword ptr [ebp - 4], 0x66 */ W32((u32)(r_ebp+0xfffffffcu), 0x66u);
    /* 005cad6c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005cad73: mov dword ptr [ebp - 0x24], 0x20f */ W32((u32)(r_ebp+0xffffffdcu), 0x20fu);
    /* 005cad7a: mov dword ptr [ebp - 0x20], 0x50 */ W32((u32)(r_ebp+0xffffffe0u), 0x50u);
    /* 005cad81: mov dword ptr [ebp - 0x1c], 0x20f */ W32((u32)(r_ebp+0xffffffe4u), 0x20fu);
    /* 005cad88: mov dword ptr [ebp - 0x18], 0xf2 */ W32((u32)(r_ebp+0xffffffe8u), 0xf2u);
    /* 005cad8f: mov dword ptr [ebp - 0x14], 0x182 */ W32((u32)(r_ebp+0xffffffecu), 0x182u);
    /* 005cad96: mov dword ptr [ebp - 0x10], 0x132 */ W32((u32)(r_ebp+0xfffffff0u), 0x132u);
    /* 005cad9d: mov dword ptr [ebp - 0xc], 0xe5 */ W32((u32)(r_ebp+0xfffffff4u), 0xe5u);
    /* 005cada4: mov dword ptr [ebp - 8], 0x14b */ W32((u32)(r_ebp+0xfffffff8u), 0x14bu);
    /* 005cadab: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005cadb2: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005cadb9: mov dword ptr [ebp - 0x30], 5 */ W32((u32)(r_ebp+0xffffffd0u), 0x5u);
    /* 005cadc0: mov dword ptr [ebp - 0x2c], 4 */ W32((u32)(r_ebp+0xffffffd4u), 0x4u);
    /* 005cadc7: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cadca: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005cadd1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cadd5: jne 0x5cade0 */ if (!fZ) goto L_005cade0;
L_005cadd7:; BB(0x005cadd7);
    /* 005cadd7: mov dword ptr [ebp - 4], 0x64 */ W32((u32)(r_ebp+0xfffffffcu), 0x64u);
    /* 005cadde: jmp 0x5cade7 */ goto L_005cade7;
L_005cade0:; BB(0x005cade0);
    /* 005cade0: mov dword ptr [ebp - 4], 0x66 */ W32((u32)(r_ebp+0xfffffffcu), 0x66u);
L_005cade7:; BB(0x005cade7);
    /* 005cade7: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cadeb: jge 0x5cadf7 */ if ((fS==fO)) goto L_005cadf7;
L_005caded:; BB(0x005caded);
    /* 005caded: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cadf0: or al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005cadf2: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005cadf5: jmp 0x5cadfd */ goto L_005cadfd;
L_005cadf7:; BB(0x005cadf7);
    /* 005cadf7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cadfa: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_005cadfd:; BB(0x005cadfd);
    /* 005cadfd: push 0x3250 */ { u32 v = 0x3250u; r_esp -= 4; W32(r_esp, v); }
    /* 005cae02: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cae07u); f_0048ab58();
    /* 005cae07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cae0a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005cae0d: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cae11: je 0x5cae34 */ if (fZ) goto L_005cae34;
L_005cae13:; BB(0x005cae13);
    /* 005cae13: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cae16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cae17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cae1a: mov ecx, dword ptr [ebp + eax*8 - 0x20] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffe0u));
    /* 005cae1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cae1f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cae22: mov eax, dword ptr [ebp + edx*8 - 0x24] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffdcu));
    /* 005cae26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cae27: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005cae2a: call 0x41e7f0 */ r_esp -= 4; W32(r_esp, 0x5cae2fu); f_0041e7f0();
    /* 005cae2f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005cae32: jmp 0x5cae3b */ goto L_005cae3b;
L_005cae34:; BB(0x005cae34);
    /* 005cae34: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005cae3b:; BB(0x005cae3b);
    /* 005cae3b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cae3e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005cae41: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 005cae44: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cae4b: jne 0x5cae58 */ if (!fZ) goto L_005cae58;
L_005cae4d:; BB(0x005cae4d);
    /* 005cae4d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cae50: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005cae53: call 0x41fb49 */ r_esp -= 4; W32(r_esp, 0x5cae58u); f_0041fb49();
L_005cae58:; BB(0x005cae58);
    /* 005cae58: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cae5b: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5cae60u); f_004259a0();
    /* 005cae60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cae62: jne 0x5cae80 */ if (!fZ) goto L_005cae80;
L_005cae64:; BB(0x005cae64);
    /* 005cae64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cae66: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cae6c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cae6e: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cae74: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5cae77u); call_ind(t); }
    /* 005cae77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cae78: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cae7b: call 0x425c32 */ r_esp -= 4; W32(r_esp, 0x5cae80u); f_00425c32();
L_005cae80:; BB(0x005cae80);
    /* 005cae80: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cae83: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 005cae89: mov edx, dword ptr [ebp + ecx*4 - 0x38] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc8u));
    /* 005cae8d: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005cae90: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cae93: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005cae96: mov dword ptr [eax + 0x3b0], ecx */ W32((u32)(r_eax+0x3b0u), r_ecx);
    /* 005cae9c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cae9f: mov dword ptr [edx + 0x130], 0 */ W32((u32)(r_edx+0x130u), 0x0u);
    /* 005caea9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005caeac: mov dword ptr [eax + 0x134], 0 */ W32((u32)(r_eax+0x134u), 0x0u);
    /* 005caeb6: mov word ptr [ebp - 0x28], 0 */ W16((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005caebc: jmp 0x5caeca */ goto L_005caeca;
L_005caebe:; BB(0x005caebe);
    /* 005caebe: mov cx, word ptr [ebp - 0x28] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 005caec2: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005caec6: mov word ptr [ebp - 0x28], cx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_ecx);
L_005caeca:; BB(0x005caeca);
    /* 005caeca: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 005caece: cmp edx, 0x9e */ {  u32 a = r_edx; u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005caed4: jge 0x5caeea */ if ((fS==fO)) goto L_005caeea;
L_005caed6:; BB(0x005caed6);
    /* 005caed6: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 005caeda: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005caedd: mov dword ptr [ecx + eax*4 + 0x138], 0 */ W32((u32)(r_ecx+r_eax*4+0x138u), 0x0u);
    /* 005caee8: jmp 0x5caebe */ goto L_005caebe;
L_005caeea:; BB(0x005caeea);
    /* 005caeea: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005caeed: mov esp, ebp */ r_esp = r_ebp;
    /* 005caeef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005caef0: ret 4 */ FN_RET(0x005cad47); r_esp += 8; return;
}

void f_005caef3(void) /* FUN_005caef3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005caef3);
    /* 005caef3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005caef4: mov ebp, esp */ r_ebp = r_esp;
    /* 005caef6: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005caef9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005caefc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005caeff: mov dword ptr [eax], 0x63adfc */ W32((u32)(r_eax), 0x63adfcu);
    /* 005caf05: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005caf08: cmp dword ptr [ecx + 0x130], 0 */ {  u32 a = R32((u32)(r_ecx+0x130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caf0f: je 0x5caf4e */ if (fZ) goto L_005caf4e;
L_005caf11:; BB(0x005caf11);
    /* 005caf11: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005caf14: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 005caf1a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005caf1d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005caf20: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005caf23: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caf27: je 0x5caf3a */ if (fZ) goto L_005caf3a;
L_005caf29:; BB(0x005caf29);
    /* 005caf29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005caf2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005caf2e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005caf30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005caf33: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5caf35u); call_ind(t); }
    /* 005caf35: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005caf38: jmp 0x5caf41 */ goto L_005caf41;
L_005caf3a:; BB(0x005caf3a);
    /* 005caf3a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005caf41:; BB(0x005caf41);
    /* 005caf41: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005caf44: mov dword ptr [ecx + 0x130], 0 */ W32((u32)(r_ecx+0x130u), 0x0u);
L_005caf4e:; BB(0x005caf4e);
    /* 005caf4e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005caf51: cmp dword ptr [edx + 0x134], 0 */ {  u32 a = R32((u32)(r_edx+0x134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caf58: je 0x5caf97 */ if (fZ) goto L_005caf97;
L_005caf5a:; BB(0x005caf5a);
    /* 005caf5a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005caf5d: mov ecx, dword ptr [eax + 0x134] */ r_ecx = R32((u32)(r_eax+0x134u));
    /* 005caf63: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005caf66: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005caf69: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005caf6c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caf70: je 0x5caf83 */ if (fZ) goto L_005caf83;
L_005caf72:; BB(0x005caf72);
    /* 005caf72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005caf74: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005caf77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005caf79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005caf7c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5caf7eu); call_ind(t); }
    /* 005caf7e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005caf81: jmp 0x5caf8a */ goto L_005caf8a;
L_005caf83:; BB(0x005caf83);
    /* 005caf83: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005caf8a:; BB(0x005caf8a);
    /* 005caf8a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005caf8d: mov dword ptr [eax + 0x134], 0 */ W32((u32)(r_eax+0x134u), 0x0u);
L_005caf97:; BB(0x005caf97);
    /* 005caf97: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005caf9a: call 0x425495 */ r_esp -= 4; W32(r_esp, 0x5caf9fu); f_00425495();
    /* 005caf9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cafa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cafa2: ret  */ FN_RET(0x005caef3); r_esp += 4; return;
}

void f_005cafa3(void) /* FUN_005cafa3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cafa3);
    /* 005cafa3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cafa4: mov ebp, esp */ r_ebp = r_esp;
    /* 005cafa6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cafa9: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005cafac: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005cafaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cafb0: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cafb6: call 0x448e71 */ r_esp -= 4; W32(r_esp, 0x5cafbbu); f_00448e71();
    /* 005cafbb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cafbe: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cafc1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cafc2: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005cafc7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cafc7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cafc7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cafc9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cafcc: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cafd2: call 0x5cdab6 */ r_esp -= 4; W32(r_esp, 0x5cafd7u); f_005cdab6();
    /* 005cafd7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cafda: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cafe0: call 0x5cdbb4 */ r_esp -= 4; W32(r_esp, 0x5cafe5u); f_005cdbb4();
    /* 005cafe5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cafe8: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cafee: cmp dword ptr [edx + 0x31c], 1 */ {  u32 a = R32((u32)(r_edx+0x31cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caff5: je 0x5cb030 */ if (fZ) goto L_005cb030;
L_005caff7:; BB(0x005caff7);
    /* 005caff7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005caffa: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cb000: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cb004: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb007: jne 0x5cb030 */ if (!fZ) goto L_005cb030;
L_005cb009:; BB(0x005cb009);
    /* 005cb009: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb00c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cb00f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb012: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005cb017: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cb01b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cb01e: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005cb021: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005cb024: cmp dword ptr [ecx + 0xc], edx */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb027: jge 0x5cb030 */ if ((fS==fO)) goto L_005cb030;
L_005cb029:; BB(0x005cb029);
    /* 005cb029: mov eax, 1 */ r_eax = 0x1u;
    /* 005cb02e: jmp 0x5cb032 */ goto L_005cb032;
L_005cb030:; BB(0x005cb030);
    /* 005cb030: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cb032:; BB(0x005cb032);
    /* 005cb032: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb034: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb035: ret  */ FN_RET(0x005cafa3); r_esp += 4; return;
}

void f_005cb036(void) /* FUN_005cb036 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb036);
    /* 005cb036: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb037: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb039: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb03c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005cb03f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005cb046: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 005cb04d: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005cb054: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 005cb05b: push 0x5cda08 */ { u32 v = 0x5cda08u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb060: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb062: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb064: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 005cb067: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb068: call 0x624bf0 */ r_esp -= 4; W32(r_esp, 0x5cb06du); f_00624bf0();
    /* 005cb06d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb070: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005cb073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb074: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cb07a: call 0x448e71 */ r_esp -= 4; W32(r_esp, 0x5cb07fu); f_00448e71();
    /* 005cb07f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb082: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cb085: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cb086: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005cb08b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cb08b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cb08b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cb08d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cb090: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cb096: call 0x5cdbb4 */ r_esp -= 4; W32(r_esp, 0x5cb09bu); f_005cdbb4();
    /* 005cb09b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cb09e: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cb0a4: cmp dword ptr [edx + 0x31c], 1 */ {  u32 a = R32((u32)(r_edx+0x31cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb0ab: je 0x5cb0e6 */ if (fZ) goto L_005cb0e6;
L_005cb0ad:; BB(0x005cb0ad);
    /* 005cb0ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cb0b0: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cb0b6: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cb0ba: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb0bd: jne 0x5cb0e6 */ if (!fZ) goto L_005cb0e6;
L_005cb0bf:; BB(0x005cb0bf);
    /* 005cb0bf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cb0c2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cb0c5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb0c8: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005cb0cd: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cb0d1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cb0d4: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005cb0d7: add edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cb0da: cmp dword ptr [ecx + 0xc], edx */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb0dd: jle 0x5cb0e6 */ if ((fZ||fS!=fO)) goto L_005cb0e6;
L_005cb0df:; BB(0x005cb0df);
    /* 005cb0df: mov eax, 1 */ r_eax = 0x1u;
    /* 005cb0e4: jmp 0x5cb0e8 */ goto L_005cb0e8;
L_005cb0e6:; BB(0x005cb0e6);
    /* 005cb0e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cb0e8:; BB(0x005cb0e8);
    /* 005cb0e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb0ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb0eb: ret  */ FN_RET(0x005cb036); r_esp += 4; return;
}

void f_005cb0ec(void) /* FUN_005cb0ec */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb0ec);
    /* 005cb0ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb0ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb0ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb0f0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb0f3: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cb0f9: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x5cb0feu); f_00448ca3();
    /* 005cb0fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb100: je 0x5cb122 */ if (fZ) goto L_005cb122;
L_005cb102:; BB(0x005cb102);
    /* 005cb102: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cb108: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x5cb10du); f_00448e5d();
    /* 005cb10d: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cb113: cmp dword ptr [ecx + 0x31c], eax */ {  u32 a = R32((u32)(r_ecx+0x31cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb119: jl 0x5cb122 */ if ((fS!=fO)) goto L_005cb122;
L_005cb11b:; BB(0x005cb11b);
    /* 005cb11b: mov eax, 1 */ r_eax = 0x1u;
    /* 005cb120: jmp 0x5cb124 */ goto L_005cb124;
L_005cb122:; BB(0x005cb122);
    /* 005cb122: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cb124:; BB(0x005cb124);
    /* 005cb124: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb126: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb127: ret  */ FN_RET(0x005cb0ec); r_esp += 4; return;
}

void f_005cb128(void) /* FUN_005cb128 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb128);
    /* 005cb128: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb129: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb12b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb12c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb12f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb132: call 0x425865 */ r_esp -= 4; W32(r_esp, 0x5cb137u); f_00425865();
    /* 005cb137: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb13a: ret  */ FN_RET(0x005cb128); r_esp += 4; return;
}

void f_005cb13b(void) /* FUN_005cb13b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb13b);
    /* 005cb13b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb13c: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb13e: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb141: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005cb144: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cb14b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cb152: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cb157: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb159: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cb15f: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5cb162u); call_ind(t); }
    /* 005cb162: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cb165: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cb168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb169: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb16c: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x5cb171u); f_004259f1();
    /* 005cb171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb172: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cb178: call 0x5ceaad */ r_esp -= 4; W32(r_esp, 0x5cb17du); f_005ceaad();
    /* 005cb17d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb180: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cb183: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cb189: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x5cb18eu); f_00448ca3();
    /* 005cb18e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb190: je 0x5cb1e8 */ if (fZ) goto L_005cb1e8;
L_005cb192:; BB(0x005cb192);
    /* 005cb192: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cb198: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x5cb19du); f_00448e5d();
    /* 005cb19d: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cb1a3: sub eax, dword ptr [edx + 0x31c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x31cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cb1a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb1ac: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cb1af: cmp ecx, 0xfa */ {  u32 a = r_ecx; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb1b5: jle 0x5cb1d9 */ if ((fZ||fS!=fO)) goto L_005cb1d9;
L_005cb1b7:; BB(0x005cb1b7);
    /* 005cb1b7: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cb1bd: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x5cb1c2u); f_00448e5d();
    /* 005cb1c2: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cb1c8: sub eax, dword ptr [edx + 0x31c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x31cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cb1ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb1d1: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cb1d4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005cb1d7: jmp 0x5cb1e0 */ goto L_005cb1e0;
L_005cb1d9:; BB(0x005cb1d9);
    /* 005cb1d9: mov dword ptr [ebp - 0x1c], 0xfa */ W32((u32)(r_ebp+0xffffffe4u), 0xfau);
L_005cb1e0:; BB(0x005cb1e0);
    /* 005cb1e0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cb1e3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005cb1e6: jmp 0x5cb20d */ goto L_005cb20d;
L_005cb1e8:; BB(0x005cb1e8);
    /* 005cb1e8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb1eb: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cb1ee: cmp eax, 0x1f4 */ {  u32 a = r_eax; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb1f3: jle 0x5cb200 */ if ((fZ||fS!=fO)) goto L_005cb200;
L_005cb1f5:; BB(0x005cb1f5);
    /* 005cb1f5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb1f8: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cb1fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cb1fe: jmp 0x5cb207 */ goto L_005cb207;
L_005cb200:; BB(0x005cb200);
    /* 005cb200: mov dword ptr [ebp - 0x20], 0x1f4 */ W32((u32)(r_ebp+0xffffffe0u), 0x1f4u);
L_005cb207:; BB(0x005cb207);
    /* 005cb207: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb20a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005cb20d:; BB(0x005cb20d);
    /* 005cb20d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb210: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cb213: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x5cb218u); f_00426819();
    /* 005cb218: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cb21b: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb21e: jge 0x5cb227 */ if ((fS==fO)) goto L_005cb227;
L_005cb220:; BB(0x005cb220);
    /* 005cb220: mov eax, 1 */ r_eax = 0x1u;
    /* 005cb225: jmp 0x5cb229 */ goto L_005cb229;
L_005cb227:; BB(0x005cb227);
    /* 005cb227: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cb229:; BB(0x005cb229);
    /* 005cb229: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb22b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb22c: ret  */ FN_RET(0x005cb13b); r_esp += 4; return;
}

void f_005cb22d(void) /* FUN_005cb22d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb22d);
    /* 005cb22d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb22e: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb230: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb233: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cb236: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cb23c: jmp 0x5cb24a */ goto L_005cb24a;
L_005cb23e:; BB(0x005cb23e);
    /* 005cb23e: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005cb242: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005cb246: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_005cb24a:; BB(0x005cb24a);
    /* 005cb24a: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005cb24e: cmp ecx, 0x9e */ {  u32 a = r_ecx; u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb254: jge 0x5cb26a */ if ((fS==fO)) goto L_005cb26a;
L_005cb256:; BB(0x005cb256);
    /* 005cb256: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005cb25a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb25d: mov dword ptr [eax + edx*4 + 0x138], 0 */ W32((u32)(r_eax+r_edx*4+0x138u), 0x0u);
    /* 005cb268: jmp 0x5cb23e */ goto L_005cb23e;
L_005cb26a:; BB(0x005cb26a);
    /* 005cb26a: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cb270: jmp 0x5cb27e */ goto L_005cb27e;
L_005cb272:; BB(0x005cb272);
    /* 005cb272: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005cb276: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005cb27a: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_005cb27e:; BB(0x005cb27e);
    /* 005cb27e: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005cb282: cmp edx, 0x9e */ {  u32 a = r_edx; u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb288: jge 0x5cb2e9 */ if ((fS==fO)) goto L_005cb2e9;
L_005cb28a:; BB(0x005cb28a);
    /* 005cb28a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb28d: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 005cb293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb294: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005cb298: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005cb29d: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cb2a1: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x5cb2a6u); f_004280b4();
    /* 005cb2a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb2a8: je 0x5cb2e7 */ if (fZ) goto L_005cb2e7;
L_005cb2aa:; BB(0x005cb2aa);
    /* 005cb2aa: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005cb2ae: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cb2b4: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cb2b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb2bb: mov edx, dword ptr [ecx + 0x108] */ r_edx = R32((u32)(r_ecx+0x108u));
    /* 005cb2c1: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005cb2c4: mov eax, dword ptr [eax + edx + 0x6c] */ r_eax = R32((u32)(r_eax+r_edx+0x6cu));
    /* 005cb2c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cb2cb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb2cf: je 0x5cb2e7 */ if (fZ) goto L_005cb2e7;
L_005cb2d1:; BB(0x005cb2d1);
    /* 005cb2d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb2d4: call 0x426f76 */ r_esp -= 4; W32(r_esp, 0x5cb2d9u); f_00426f76();
    /* 005cb2d9: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005cb2dd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb2e0: mov dword ptr [edx + ecx*4 + 0x138], eax */ W32((u32)(r_edx+r_ecx*4+0x138u), r_eax);
L_005cb2e7:; BB(0x005cb2e7);
    /* 005cb2e7: jmp 0x5cb272 */ goto L_005cb272;
L_005cb2e9:; BB(0x005cb2e9);
    /* 005cb2e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb2eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb2ec: ret  */ FN_RET(0x005cb22d); r_esp += 4; return;
}

void f_005cb2ed(void) /* FUN_005cb2ed */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb2ed);
    /* 005cb2ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb2ee: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb2f0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb2f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cb2f6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cb2fd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb304: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cb30a: jmp 0x5cb318 */ goto L_005cb318;
L_005cb30c:; BB(0x005cb30c);
    /* 005cb30c: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005cb310: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005cb314: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_005cb318:; BB(0x005cb318);
    /* 005cb318: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005cb31c: cmp ecx, 0x9e */ {  u32 a = r_ecx; u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb322: jge 0x5cb3cb */ if ((fS==fO)) goto L_005cb3cb;
L_005cb328:; BB(0x005cb328);
    /* 005cb328: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005cb32c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb32f: cmp dword ptr [eax + edx*4 + 0x138], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x138u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb337: je 0x5cb3c6 */ if (fZ) goto L_005cb3c6;
L_005cb33d:; BB(0x005cb33d);
    /* 005cb33d: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb344: je 0x5cb367 */ if (fZ) goto L_005cb367;
L_005cb346:; BB(0x005cb346);
    /* 005cb346: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005cb34a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb34d: mov eax, dword ptr [edx + ecx*4 + 0x138] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x138u));
    /* 005cb354: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb355: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005cb359: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb35a: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 005cb360: call 0x5d2938 */ r_esp -= 4; W32(r_esp, 0x5cb365u); f_005d2938();
    /* 005cb365: jmp 0x5cb3c6 */ goto L_005cb3c6;
L_005cb367:; BB(0x005cb367);
    /* 005cb367: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb369: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005cb36d: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005cb372: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cb376: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005cb37a: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005cb37f: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cb383: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cb385: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5cb388u); call_ind(t); }
    /* 005cb388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb38a: je 0x5cb3c6 */ if (fZ) goto L_005cb3c6;
L_005cb38c:; BB(0x005cb38c);
    /* 005cb38c: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005cb390: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb393: mov eax, dword ptr [edx + ecx*4 + 0x138] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x138u));
    /* 005cb39a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cb39d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb39f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3a1: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005cb3a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3a7: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005cb3ab: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005cb3b0: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cb3b4: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005cb3b8: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005cb3bd: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cb3c1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cb3c3: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5cb3c6u); call_ind(t); }
L_005cb3c6:; BB(0x005cb3c6);
    /* 005cb3c6: jmp 0x5cb30c */ goto L_005cb30c;
L_005cb3cb:; BB(0x005cb3cb);
    /* 005cb3cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb3cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb3ce: ret  */ FN_RET(0x005cb2ed); r_esp += 4; return;
}

void f_005cb3cf(void) /* FUN_005cb3cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb3cf);
    /* 005cb3cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3d0: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb3d2: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb3d5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cb3d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb3db: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005cb3de: call 0x420814 */ r_esp -= 4; W32(r_esp, 0x5cb3e3u); f_00420814();
    /* 005cb3e3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cb3e6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb3e9: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cb3ec: call 0x426404 */ r_esp -= 4; W32(r_esp, 0x5cb3f1u); f_00426404();
    /* 005cb3f1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb3f4: cmp dword ptr [edx + 0x130], 0 */ {  u32 a = R32((u32)(r_edx+0x130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb3fb: jne 0x5cb430 */ if (!fZ) goto L_005cb430;
L_005cb3fd:; BB(0x005cb3fd);
    /* 005cb3fd: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3ff: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cb404u); f_0048ab58();
    /* 005cb404: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb407: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cb40a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb40e: je 0x5cb41d */ if (fZ) goto L_005cb41d;
L_005cb410:; BB(0x005cb410);
    /* 005cb410: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb413: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5cb418u); f_005e9d30();
    /* 005cb418: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cb41b: jmp 0x5cb424 */ goto L_005cb424;
L_005cb41d:; BB(0x005cb41d);
    /* 005cb41d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005cb424:; BB(0x005cb424);
    /* 005cb424: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb427: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb42a: mov dword ptr [eax + 0x130], ecx */ W32((u32)(r_eax+0x130u), r_ecx);
L_005cb430:; BB(0x005cb430);
    /* 005cb430: push 0x1adbd */ { u32 v = 0x1adbdu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb435: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb438: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 005cb43e: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5cb443u); f_005ea0c3();
    /* 005cb443: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb446: mov ecx, dword ptr [eax + 0x3b0] */ r_ecx = R32((u32)(r_eax+0x3b0u));
    /* 005cb44c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cb44f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb452: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cb455: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb456: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb459: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 005cb45f: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5cb464u); f_005ea1cf();
    /* 005cb464: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb467: mov ecx, dword ptr [ecx + 0x130] */ r_ecx = R32((u32)(r_ecx+0x130u));
    /* 005cb46d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb470: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 005cb476: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb478: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5cb47bu); call_ind(t); }
    /* 005cb47b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb47e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb480: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb483: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5cb486u); call_ind(t); }
    /* 005cb486: sub eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cb489: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb48a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb48d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb48f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb492: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5cb495u); call_ind(t); }
    /* 005cb495: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cb498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb499: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb49c: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 005cb4a2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb4a5: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 005cb4ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb4ad: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5cb4b0u); call_ind(t); }
    /* 005cb4b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb4b3: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5cb4b8u); f_005d9883();
    /* 005cb4b8: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cb4bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb4bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb4bf: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 005cb4c5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb4c8: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 005cb4ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb4d0: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cb4d3u); call_ind(t); }
    /* 005cb4d3: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb4da: jne 0x5cb4f3 */ if (!fZ) goto L_005cb4f3;
L_005cb4dc:; BB(0x005cb4dc);
    /* 005cb4dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb4df: mov ecx, dword ptr [eax + 0x130] */ r_ecx = R32((u32)(r_eax+0x130u));
    /* 005cb4e5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb4e8: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 005cb4ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb4f0: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5cb4f3u); call_ind(t); }
L_005cb4f3:; BB(0x005cb4f3);
    /* 005cb4f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb4f6: cmp dword ptr [eax + 0x134], 0 */ {  u32 a = R32((u32)(r_eax+0x134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb4fd: jne 0x5cb532 */ if (!fZ) goto L_005cb532;
L_005cb4ff:; BB(0x005cb4ff);
    /* 005cb4ff: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb501: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cb506u); f_0048ab58();
    /* 005cb506: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb509: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cb50c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb510: je 0x5cb51f */ if (fZ) goto L_005cb51f;
L_005cb512:; BB(0x005cb512);
    /* 005cb512: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb515: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5cb51au); f_005e9d30();
    /* 005cb51a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cb51d: jmp 0x5cb526 */ goto L_005cb526;
L_005cb51f:; BB(0x005cb51f);
    /* 005cb51f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005cb526:; BB(0x005cb526);
    /* 005cb526: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb529: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cb52c: mov dword ptr [ecx + 0x134], edx */ W32((u32)(r_ecx+0x134u), r_edx);
L_005cb532:; BB(0x005cb532);
    /* 005cb532: push 0x6bf2 */ { u32 v = 0x6bf2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb537: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb53a: mov ecx, dword ptr [eax + 0x134] */ r_ecx = R32((u32)(r_eax+0x134u));
    /* 005cb540: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5cb545u); f_005ea0c3();
    /* 005cb545: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb548: mov ecx, dword ptr [ecx + 0x134] */ r_ecx = R32((u32)(r_ecx+0x134u));
    /* 005cb54e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb551: mov eax, dword ptr [edx + 0x134] */ r_eax = R32((u32)(r_edx+0x134u));
    /* 005cb557: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb559: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5cb55cu); call_ind(t); }
    /* 005cb55c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb55f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb561: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb564: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5cb567u); call_ind(t); }
    /* 005cb567: sub eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cb56a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb56b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb56e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb570: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb573: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x5cb576u); call_ind(t); }
    /* 005cb576: add eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cb579: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb57a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb57d: mov ecx, dword ptr [eax + 0x134] */ r_ecx = R32((u32)(r_eax+0x134u));
    /* 005cb583: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb586: mov eax, dword ptr [edx + 0x134] */ r_eax = R32((u32)(r_edx+0x134u));
    /* 005cb58c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb58e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5cb591u); call_ind(t); }
    /* 005cb591: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb594: call 0x5d9883 */ r_esp -= 4; W32(r_esp, 0x5cb599u); f_005d9883();
    /* 005cb599: add eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cb59e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb59f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb5a2: mov ecx, dword ptr [eax + 0x134] */ r_ecx = R32((u32)(r_eax+0x134u));
    /* 005cb5a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb5ab: mov eax, dword ptr [edx + 0x134] */ r_eax = R32((u32)(r_edx+0x134u));
    /* 005cb5b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb5b3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cb5b6u); call_ind(t); }
    /* 005cb5b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb5b9: mov ecx, dword ptr [eax + 0x134] */ r_ecx = R32((u32)(r_eax+0x134u));
    /* 005cb5bf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb5c2: mov eax, dword ptr [edx + 0x134] */ r_eax = R32((u32)(r_edx+0x134u));
    /* 005cb5c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb5ca: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cb5cdu); call_ind(t); }
    /* 005cb5cd: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb5d4: je 0x5cb610 */ if (fZ) goto L_005cb610;
L_005cb5d6:; BB(0x005cb5d6);
    /* 005cb5d6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb5d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb5db: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005cb5de: call 0x4207ec */ r_esp -= 4; W32(r_esp, 0x5cb5e3u); f_004207ec();
    /* 005cb5e3: sub eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cb5e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb5e7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb5ea: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005cb5ed: call 0x4207d8 */ r_esp -= 4; W32(r_esp, 0x5cb5f2u); f_004207d8();
    /* 005cb5f2: sub eax, 0xdc */ {  u32 a = r_eax; u32 b = 0xdcu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cb5f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb5f8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb5fb: mov eax, dword ptr [edx + 0x108] */ r_eax = R32((u32)(r_edx+0x108u));
    /* 005cb601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb602: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 005cb608: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cb60b: call 0x42a5c0 */ r_esp -= 4; W32(r_esp, 0x5cb610u); f_0042a5c0();
L_005cb610:; BB(0x005cb610);
    /* 005cb610: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb613: call 0x425588 */ r_esp -= 4; W32(r_esp, 0x5cb618u); f_00425588();
    /* 005cb618: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb61b: mov word ptr [edx + 0x3c8], 0 */ W16((u32)(r_edx+0x3c8u), 0x0u);
    /* 005cb624: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb627: mov word ptr [eax + 0x3b6], 0x139 */ W16((u32)(r_eax+0x3b6u), 0x139u);
    /* 005cb630: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb633: mov word ptr [ecx + 0x3ba], 0x13a */ W16((u32)(r_ecx+0x3bau), 0x13au);
    /* 005cb63c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb63f: mov word ptr [edx + 0x3be], 0x137 */ W16((u32)(r_edx+0x3beu), 0x137u);
    /* 005cb648: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb64b: mov word ptr [eax + 0x3c2], 0x138 */ W16((u32)(r_eax+0x3c2u), 0x138u);
    /* 005cb654: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb657: mov word ptr [ecx + 0x3c6], 0x136 */ W16((u32)(r_ecx+0x3c6u), 0x136u);
    /* 005cb660: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb662: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb663: ret  */ FN_RET(0x005cb3cf); r_esp += 4; return;
}

void f_005cb664(void) /* FUN_005cb664 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb664);
    /* 005cb664: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb665: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb667: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb668: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb66b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb66e: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5cb673u); f_00425973();
    /* 005cb673: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb675: jne 0x5cb67b */ if (!fZ) goto L_005cb67b;
L_005cb677:; BB(0x005cb677);
    /* 005cb677: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb679: jmp 0x5cb6e0 */ goto L_005cb6e0;
L_005cb67b:; BB(0x005cb67b);
    /* 005cb67b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb67d: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cb683: call 0x5cc586 */ r_esp -= 4; W32(r_esp, 0x5cb688u); f_005cc586();
    /* 005cb688: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb68a: je 0x5cb6b5 */ if (fZ) goto L_005cb6b5;
L_005cb68c:; BB(0x005cb68c);
    /* 005cb68c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb68f: call 0x425a05 */ r_esp -= 4; W32(r_esp, 0x5cb694u); f_00425a05();
    /* 005cb694: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb696: jne 0x5cb6b5 */ if (!fZ) goto L_005cb6b5;
L_005cb698:; BB(0x005cb698);
    /* 005cb698: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb69b: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 005cb6a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb6a2: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cb6a8: call 0x5cea61 */ r_esp -= 4; W32(r_esp, 0x5cb6adu); f_005cea61();
    /* 005cb6ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb6af: jne 0x5cb6b5 */ if (!fZ) goto L_005cb6b5;
L_005cb6b1:; BB(0x005cb6b1);
    /* 005cb6b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb6b3: jmp 0x5cb6e0 */ goto L_005cb6e0;
L_005cb6b5:; BB(0x005cb6b5);
    /* 005cb6b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb6b7: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cb6bd: call 0x5cc586 */ r_esp -= 4; W32(r_esp, 0x5cb6c2u); f_005cc586();
    /* 005cb6c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb6c4: jne 0x5cb6d7 */ if (!fZ) goto L_005cb6d7;
L_005cb6c6:; BB(0x005cb6c6);
    /* 005cb6c6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb6c8: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cb6ce: call 0x5cc586 */ r_esp -= 4; W32(r_esp, 0x5cb6d3u); f_005cc586();
    /* 005cb6d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb6d5: je 0x5cb6db */ if (fZ) goto L_005cb6db;
L_005cb6d7:; BB(0x005cb6d7);
    /* 005cb6d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb6d9: jmp 0x5cb6e0 */ goto L_005cb6e0;
L_005cb6db:; BB(0x005cb6db);
    /* 005cb6db: mov eax, 1 */ r_eax = 0x1u;
L_005cb6e0:; BB(0x005cb6e0);
    /* 005cb6e0: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb6e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb6e3: ret  */ FN_RET(0x005cb664); r_esp += 4; return;
}

void f_005cb6e4(void) /* FUN_005cb6e4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb6e4);
    /* 005cb6e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb6e5: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb6e7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb6ea: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cb6ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb6f0: call 0x5dfbf0 */ r_esp -= 4; W32(r_esp, 0x5cb6f5u); f_005dfbf0();
    /* 005cb6f5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb6f8: mov dword ptr [eax], 0x63ae2c */ W32((u32)(r_eax), 0x63ae2cu);
    /* 005cb6fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb705: jmp 0x5cb710 */ goto L_005cb710;
L_005cb707:; BB(0x005cb707);
    /* 005cb707: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb70a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cb70d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cb710:; BB(0x005cb710);
    /* 005cb710: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb714: jge 0x5cb726 */ if ((fS==fO)) goto L_005cb726;
L_005cb716:; BB(0x005cb716);
    /* 005cb716: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb719: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb71c: mov dword ptr [eax + edx*4 + 0x10], 0 */ W32((u32)(r_eax+r_edx*4+0x10u), 0x0u);
    /* 005cb724: jmp 0x5cb707 */ goto L_005cb707;
L_005cb726:; BB(0x005cb726);
    /* 005cb726: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb72d: jmp 0x5cb738 */ goto L_005cb738;
L_005cb72f:; BB(0x005cb72f);
    /* 005cb72f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb732: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cb735: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cb738:; BB(0x005cb738);
    /* 005cb738: cmp dword ptr [ebp - 4], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb73f: jge 0x5cb751 */ if ((fS==fO)) goto L_005cb751;
L_005cb741:; BB(0x005cb741);
    /* 005cb741: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb744: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb747: mov dword ptr [eax + edx*4 + 0x20], 0 */ W32((u32)(r_eax+r_edx*4+0x20u), 0x0u);
    /* 005cb74f: jmp 0x5cb72f */ goto L_005cb72f;
L_005cb751:; BB(0x005cb751);
    /* 005cb751: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb758: jmp 0x5cb763 */ goto L_005cb763;
L_005cb75a:; BB(0x005cb75a);
    /* 005cb75a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb75d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cb760: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cb763:; BB(0x005cb763);
    /* 005cb763: cmp dword ptr [ebp - 4], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb767: jge 0x5cb78d */ if ((fS==fO)) goto L_005cb78d;
L_005cb769:; BB(0x005cb769);
    /* 005cb769: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb76c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb76f: mov dword ptr [eax + edx*4 + 0x2b4], 0 */ W32((u32)(r_eax+r_edx*4+0x2b4u), 0x0u);
    /* 005cb77a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb77d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb780: mov dword ptr [edx + ecx*4 + 0x324], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x324u), 0xffffffffu);
    /* 005cb78b: jmp 0x5cb75a */ goto L_005cb75a;
L_005cb78d:; BB(0x005cb78d);
    /* 005cb78d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb790: mov dword ptr [eax + 0x320], 0 */ W32((u32)(r_eax+0x320u), 0x0u);
    /* 005cb79a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb79d: mov dword ptr [ecx + 0x2a4], 0 */ W32((u32)(r_ecx+0x2a4u), 0x0u);
    /* 005cb7a7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb7aa: mov dword ptr [edx + 0x298], 0 */ W32((u32)(r_edx+0x298u), 0x0u);
    /* 005cb7b4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb7b7: mov dword ptr [eax + 0x29c], 0 */ W32((u32)(r_eax+0x29cu), 0x0u);
    /* 005cb7c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb7c4: mov dword ptr [ecx + 0x2a8], 0 */ W32((u32)(r_ecx+0x2a8u), 0x0u);
    /* 005cb7ce: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb7d1: mov dword ptr [edx + 0x2ac], 0 */ W32((u32)(r_edx+0x2acu), 0x0u);
    /* 005cb7db: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb7de: mov dword ptr [eax + 0x2b0], 0 */ W32((u32)(r_eax+0x2b0u), 0x0u);
    /* 005cb7e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb7eb: mov dword ptr [ecx + 0x3b8], 0xffffffff */ W32((u32)(r_ecx+0x3b8u), 0xffffffffu);
    /* 005cb7f5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb7f8: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 005cb7ff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb802: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 005cb809: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb80c: mov dword ptr [ecx + 0x2a0], 0 */ W32((u32)(r_ecx+0x2a0u), 0x0u);
    /* 005cb816: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb819: mov dword ptr [edx + 0x3ac], 0 */ W32((u32)(r_edx+0x3acu), 0x0u);
    /* 005cb823: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb825: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cb82b: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5cb830u); f_0045c419();
    /* 005cb830: movsx eax, byte ptr [eax + 0x92] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 005cb837: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005cb839: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005cb83b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cb83c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb83f: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 005cb845: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb847: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb84a: call 0x5cbc47 */ r_esp -= 4; W32(r_esp, 0x5cb84fu); f_005cbc47();
    /* 005cb84f: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb851: mov ecx, dword ptr [0x6f6a24] */ r_ecx = R32((u32)(0x6f6a24u));
    /* 005cb857: call 0x60e7bd */ r_esp -= 4; W32(r_esp, 0x5cb85cu); f_0060e7bd();
    /* 005cb85c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb85f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb861: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb862: ret  */ FN_RET(0x005cb6e4); r_esp += 4; return;
}

void f_005cb863(void) /* FUN_005cb863 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb863);
    /* 005cb863: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb864: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb866: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb86c: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 005cb86f: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb872: mov dword ptr [eax], 0x63ae2c */ W32((u32)(r_eax), 0x63ae2cu);
    /* 005cb878: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb87f: jmp 0x5cb88a */ goto L_005cb88a;
L_005cb881:; BB(0x005cb881);
    /* 005cb881: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb884: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cb887: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cb88a:; BB(0x005cb88a);
    /* 005cb88a: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb88e: jge 0x5cb8de */ if ((fS==fO)) goto L_005cb8de;
L_005cb890:; BB(0x005cb890);
    /* 005cb890: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb893: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb896: cmp dword ptr [eax + edx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb89b: je 0x5cb8dc */ if (fZ) goto L_005cb8dc;
L_005cb89d:; BB(0x005cb89d);
    /* 005cb89d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb8a0: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb8a3: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cb8a7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cb8aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb8ad: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cb8b0: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb8b4: je 0x5cb8c7 */ if (fZ) goto L_005cb8c7;
L_005cb8b6:; BB(0x005cb8b6);
    /* 005cb8b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb8b8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb8bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cb8bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb8c0: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5cb8c2u); call_ind(t); }
    /* 005cb8c2: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005cb8c5: jmp 0x5cb8ce */ goto L_005cb8ce;
L_005cb8c7:; BB(0x005cb8c7);
    /* 005cb8c7: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_005cb8ce:; BB(0x005cb8ce);
    /* 005cb8ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb8d1: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb8d4: mov dword ptr [edx + ecx*4 + 0x10], 0 */ W32((u32)(r_edx+r_ecx*4+0x10u), 0x0u);
L_005cb8dc:; BB(0x005cb8dc);
    /* 005cb8dc: jmp 0x5cb881 */ goto L_005cb881;
L_005cb8de:; BB(0x005cb8de);
    /* 005cb8de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb8e5: jmp 0x5cb8f0 */ goto L_005cb8f0;
L_005cb8e7:; BB(0x005cb8e7);
    /* 005cb8e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb8ea: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cb8ed: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cb8f0:; BB(0x005cb8f0);
    /* 005cb8f0: cmp dword ptr [ebp - 4], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb8f7: jge 0x5cb947 */ if ((fS==fO)) goto L_005cb947;
L_005cb8f9:; BB(0x005cb8f9);
    /* 005cb8f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb8fc: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb8ff: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb904: je 0x5cb945 */ if (fZ) goto L_005cb945;
L_005cb906:; BB(0x005cb906);
    /* 005cb906: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb909: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb90c: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005cb910: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005cb913: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb916: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cb919: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb91d: je 0x5cb930 */ if (fZ) goto L_005cb930;
L_005cb91f:; BB(0x005cb91f);
    /* 005cb91f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb921: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb924: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cb926: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb929: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5cb92bu); call_ind(t); }
    /* 005cb92b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005cb92e: jmp 0x5cb937 */ goto L_005cb937;
L_005cb930:; BB(0x005cb930);
    /* 005cb930: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_005cb937:; BB(0x005cb937);
    /* 005cb937: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb93a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb93d: mov dword ptr [ecx + eax*4 + 0x20], 0 */ W32((u32)(r_ecx+r_eax*4+0x20u), 0x0u);
L_005cb945:; BB(0x005cb945);
    /* 005cb945: jmp 0x5cb8e7 */ goto L_005cb8e7;
L_005cb947:; BB(0x005cb947);
    /* 005cb947: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb94e: jmp 0x5cb959 */ goto L_005cb959;
L_005cb950:; BB(0x005cb950);
    /* 005cb950: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb953: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cb956: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005cb959:; BB(0x005cb959);
    /* 005cb959: cmp dword ptr [ebp - 4], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb95d: jge 0x5cb9b6 */ if ((fS==fO)) goto L_005cb9b6;
L_005cb95f:; BB(0x005cb95f);
    /* 005cb95f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb962: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb965: cmp dword ptr [ecx + eax*4 + 0x2b4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x2b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb96d: je 0x5cb9b4 */ if (fZ) goto L_005cb9b4;
L_005cb96f:; BB(0x005cb96f);
    /* 005cb96f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb972: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb975: mov ecx, dword ptr [eax + edx*4 + 0x2b4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2b4u));
    /* 005cb97c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005cb97f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cb982: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005cb985: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb989: je 0x5cb99c */ if (fZ) goto L_005cb99c;
L_005cb98b:; BB(0x005cb98b);
    /* 005cb98b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb98d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb990: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb992: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb995: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5cb997u); call_ind(t); }
    /* 005cb997: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005cb99a: jmp 0x5cb9a3 */ goto L_005cb9a3;
L_005cb99c:; BB(0x005cb99c);
    /* 005cb99c: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005cb9a3:; BB(0x005cb9a3);
    /* 005cb9a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb9a6: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb9a9: mov dword ptr [ecx + eax*4 + 0x2b4], 0 */ W32((u32)(r_ecx+r_eax*4+0x2b4u), 0x0u);
L_005cb9b4:; BB(0x005cb9b4);
    /* 005cb9b4: jmp 0x5cb950 */ goto L_005cb950;
L_005cb9b6:; BB(0x005cb9b6);
    /* 005cb9b6: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb9b9: cmp dword ptr [edx + 0x2a4], 0 */ {  u32 a = R32((u32)(r_edx+0x2a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb9c0: je 0x5cb9ff */ if (fZ) goto L_005cb9ff;
L_005cb9c2:; BB(0x005cb9c2);
    /* 005cb9c2: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb9c5: mov ecx, dword ptr [eax + 0x2a4] */ r_ecx = R32((u32)(r_eax+0x2a4u));
    /* 005cb9cb: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005cb9ce: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cb9d1: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005cb9d4: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb9d8: je 0x5cb9eb */ if (fZ) goto L_005cb9eb;
L_005cb9da:; BB(0x005cb9da);
    /* 005cb9da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb9dc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb9df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb9e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb9e4: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5cb9e6u); call_ind(t); }
    /* 005cb9e6: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005cb9e9: jmp 0x5cb9f2 */ goto L_005cb9f2;
L_005cb9eb:; BB(0x005cb9eb);
    /* 005cb9eb: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005cb9f2:; BB(0x005cb9f2);
    /* 005cb9f2: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005cb9f5: mov dword ptr [eax + 0x2a4], 0 */ W32((u32)(r_eax+0x2a4u), 0x0u);
L_005cb9ff:; BB(0x005cb9ff);
    /* 005cb9ff: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cba02: cmp dword ptr [ecx + 0x298], 0 */ {  u32 a = R32((u32)(r_ecx+0x298u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cba09: je 0x5cba48 */ if (fZ) goto L_005cba48;
L_005cba0b:; BB(0x005cba0b);
    /* 005cba0b: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cba0e: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 005cba14: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005cba17: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cba1a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005cba1d: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cba21: je 0x5cba34 */ if (fZ) goto L_005cba34;
L_005cba23:; BB(0x005cba23);
    /* 005cba23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cba25: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cba28: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cba2a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cba2d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5cba2fu); call_ind(t); }
    /* 005cba2f: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005cba32: jmp 0x5cba3b */ goto L_005cba3b;
L_005cba34:; BB(0x005cba34);
    /* 005cba34: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_005cba3b:; BB(0x005cba3b);
    /* 005cba3b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cba3e: mov dword ptr [ecx + 0x298], 0 */ W32((u32)(r_ecx+0x298u), 0x0u);
L_005cba48:; BB(0x005cba48);
    /* 005cba48: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cba4b: cmp dword ptr [edx + 0x29c], 0 */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cba52: je 0x5cba91 */ if (fZ) goto L_005cba91;
L_005cba54:; BB(0x005cba54);
    /* 005cba54: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005cba57: mov ecx, dword ptr [eax + 0x29c] */ r_ecx = R32((u32)(r_eax+0x29cu));
    /* 005cba5d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005cba60: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005cba63: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005cba66: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cba6a: je 0x5cba7d */ if (fZ) goto L_005cba7d;
L_005cba6c:; BB(0x005cba6c);
    /* 005cba6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cba6e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cba71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cba73: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cba76: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5cba78u); call_ind(t); }
    /* 005cba78: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005cba7b: jmp 0x5cba84 */ goto L_005cba84;
L_005cba7d:; BB(0x005cba7d);
    /* 005cba7d: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_005cba84:; BB(0x005cba84);
    /* 005cba84: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005cba87: mov dword ptr [eax + 0x29c], 0 */ W32((u32)(r_eax+0x29cu), 0x0u);
L_005cba91:; BB(0x005cba91);
    /* 005cba91: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cba94: cmp dword ptr [ecx + 0x2a8], 0 */ {  u32 a = R32((u32)(r_ecx+0x2a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cba9b: je 0x5cbae0 */ if (fZ) goto L_005cbae0;
L_005cba9d:; BB(0x005cba9d);
    /* 005cba9d: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbaa0: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 005cbaa6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005cbaa9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cbaac: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005cbaaf: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbab3: je 0x5cbac9 */ if (fZ) goto L_005cbac9;
L_005cbab5:; BB(0x005cbab5);
    /* 005cbab5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbab7: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005cbaba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cbabc: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005cbabf: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5cbac1u); call_ind(t); }
    /* 005cbac1: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005cbac7: jmp 0x5cbad3 */ goto L_005cbad3;
L_005cbac9:; BB(0x005cbac9);
    /* 005cbac9: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_005cbad3:; BB(0x005cbad3);
    /* 005cbad3: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbad6: mov dword ptr [ecx + 0x2a8], 0 */ W32((u32)(r_ecx+0x2a8u), 0x0u);
L_005cbae0:; BB(0x005cbae0);
    /* 005cbae0: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbae3: cmp dword ptr [edx + 0x2ac], 0 */ {  u32 a = R32((u32)(r_edx+0x2acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbaea: je 0x5cbb2f */ if (fZ) goto L_005cbb2f;
L_005cbaec:; BB(0x005cbaec);
    /* 005cbaec: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbaef: mov ecx, dword ptr [eax + 0x2ac] */ r_ecx = R32((u32)(r_eax+0x2acu));
    /* 005cbaf5: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005cbaf8: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005cbafb: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005cbafe: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbb02: je 0x5cbb18 */ if (fZ) goto L_005cbb18;
L_005cbb04:; BB(0x005cbb04);
    /* 005cbb04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb06: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005cbb09: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cbb0b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005cbb0e: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5cbb10u); call_ind(t); }
    /* 005cbb10: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005cbb16: jmp 0x5cbb22 */ goto L_005cbb22;
L_005cbb18:; BB(0x005cbb18);
    /* 005cbb18: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_005cbb22:; BB(0x005cbb22);
    /* 005cbb22: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbb25: mov dword ptr [eax + 0x2ac], 0 */ W32((u32)(r_eax+0x2acu), 0x0u);
L_005cbb2f:; BB(0x005cbb2f);
    /* 005cbb2f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbb32: cmp dword ptr [ecx + 0x2b0], 0 */ {  u32 a = R32((u32)(r_ecx+0x2b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbb39: je 0x5cbb7e */ if (fZ) goto L_005cbb7e;
L_005cbb3b:; BB(0x005cbb3b);
    /* 005cbb3b: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbb3e: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005cbb44: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005cbb47: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005cbb4a: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005cbb4d: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbb51: je 0x5cbb67 */ if (fZ) goto L_005cbb67;
L_005cbb53:; BB(0x005cbb53);
    /* 005cbb53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb55: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cbb58: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cbb5a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005cbb5d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5cbb5fu); call_ind(t); }
    /* 005cbb5f: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005cbb65: jmp 0x5cbb71 */ goto L_005cbb71;
L_005cbb67:; BB(0x005cbb67);
    /* 005cbb67: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_005cbb71:; BB(0x005cbb71);
    /* 005cbb71: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbb74: mov dword ptr [ecx + 0x2b0], 0 */ W32((u32)(r_ecx+0x2b0u), 0x0u);
L_005cbb7e:; BB(0x005cbb7e);
    /* 005cbb7e: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbb81: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cbb84: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005cbb87: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005cbb8a: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005cbb8d: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbb91: je 0x5cbba7 */ if (fZ) goto L_005cbba7;
L_005cbb93:; BB(0x005cbb93);
    /* 005cbb93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb95: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005cbb98: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cbb9a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005cbb9d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5cbb9fu); call_ind(t); }
    /* 005cbb9f: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005cbba5: jmp 0x5cbbb1 */ goto L_005cbbb1;
L_005cbba7:; BB(0x005cbba7);
    /* 005cbba7: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_005cbbb1:; BB(0x005cbbb1);
    /* 005cbbb1: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbbb4: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005cbbbb: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbbbe: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005cbbc1: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005cbbc4: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005cbbc7: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005cbbca: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbbce: je 0x5cbbe4 */ if (fZ) goto L_005cbbe4;
L_005cbbd0:; BB(0x005cbbd0);
    /* 005cbbd0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbbd2: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005cbbd5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cbbd7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005cbbda: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5cbbdcu); call_ind(t); }
    /* 005cbbdc: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005cbbe2: jmp 0x5cbbee */ goto L_005cbbee;
L_005cbbe4:; BB(0x005cbbe4);
    /* 005cbbe4: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_005cbbee:; BB(0x005cbbee);
    /* 005cbbee: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbbf1: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 005cbbf8: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbbfb: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 005cbc01: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005cbc04: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005cbc07: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 005cbc0a: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbc0e: je 0x5cbc24 */ if (fZ) goto L_005cbc24;
L_005cbc10:; BB(0x005cbc10);
    /* 005cbc10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc12: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005cbc15: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cbc17: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005cbc1a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5cbc1cu); call_ind(t); }
    /* 005cbc1c: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005cbc22: jmp 0x5cbc2e */ goto L_005cbc2e;
L_005cbc24:; BB(0x005cbc24);
    /* 005cbc24: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005cbc2e:; BB(0x005cbc2e);
    /* 005cbc2e: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbc31: mov dword ptr [ecx + 0x2a0], 0 */ W32((u32)(r_ecx+0x2a0u), 0x0u);
    /* 005cbc3b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005cbc3e: call 0x5dfc0f */ r_esp -= 4; W32(r_esp, 0x5cbc43u); f_005dfc0f();
    /* 005cbc43: mov esp, ebp */ r_esp = r_ebp;
    /* 005cbc45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cbc46: ret  */ FN_RET(0x005cb863); r_esp += 4; return;
}

void f_005cbc47(void) /* FUN_005cbc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cbc47);
    /* 005cbc47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc48: mov ebp, esp */ r_ebp = r_esp;
    /* 005cbc4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc4b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cbc4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cbc51: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cbc54: mov dword ptr [eax + 0x3a8], ecx */ W32((u32)(r_eax+0x3a8u), r_ecx);
    /* 005cbc5a: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbc61: je 0x5cbc85 */ if (fZ) goto L_005cbc85;
L_005cbc63:; BB(0x005cbc63);
    /* 005cbc63: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbc67: je 0x5cbc78 */ if (fZ) goto L_005cbc78;
L_005cbc69:; BB(0x005cbc69);
    /* 005cbc69: push 0x698f8c */ { u32 v = 0x698f8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc6e: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5cbc73u); f_0060fc40();
    /* 005cbc73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbc76: jmp 0x5cbc85 */ goto L_005cbc85;
L_005cbc78:; BB(0x005cbc78);
    /* 005cbc78: push 0x698fac */ { u32 v = 0x698facu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc7d: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5cbc82u); f_0060fc40();
    /* 005cbc82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cbc85:; BB(0x005cbc85);
    /* 005cbc85: mov esp, ebp */ r_esp = r_ebp;
    /* 005cbc87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cbc88: ret 4 */ FN_RET(0x005cbc47); r_esp += 8; return;
}

void f_005cbc8b(void) /* FUN_005cbc8b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cbc8b);
    /* 005cbc8b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc8c: mov ebp, esp */ r_ebp = r_esp;
    /* 005cbc8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc8f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cbc92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cbc95: mov eax, dword ptr [eax*4 + 0x698e50] */ r_eax = R32((u32)(r_eax*4+0x698e50u));
    /* 005cbc9c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cbc9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cbc9f: ret 4 */ FN_RET(0x005cbc8b); r_esp += 8; return;
}

void f_005cbca2(void) /* FUN_005cbca2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cbca2);
    /* 005cbca2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cbca3: mov ebp, esp */ r_ebp = r_esp;
    /* 005cbca5: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cbca8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005cbcab: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbcae: call 0x5cc3b6 */ r_esp -= 4; W32(r_esp, 0x5cbcb3u); f_005cc3b6();
    /* 005cbcb3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbcb6: call 0x5cbe90 */ r_esp -= 4; W32(r_esp, 0x5cbcbbu); f_005cbe90();
    /* 005cbcbb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbcbe: call 0x5cc4d8 */ r_esp -= 4; W32(r_esp, 0x5cbcc3u); f_005cc4d8();
    /* 005cbcc3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbcc6: call 0x5cbf3a */ r_esp -= 4; W32(r_esp, 0x5cbccbu); f_005cbf3a();
    /* 005cbccb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbccd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbcd0: call 0x5cc5a5 */ r_esp -= 4; W32(r_esp, 0x5cbcd5u); f_005cc5a5();
    /* 005cbcd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbcd7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbcda: call 0x5cc559 */ r_esp -= 4; W32(r_esp, 0x5cbcdfu); f_005cc559();
    /* 005cbcdf: push 0x310c */ { u32 v = 0x310cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbce4: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cbce9u); f_0048ab58();
    /* 005cbce9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbcec: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cbcef: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbcf3: je 0x5cbd0e */ if (fZ) goto L_005cbd0e;
L_005cbcf5:; BB(0x005cbcf5);
    /* 005cbcf5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cbcf8: call 0x4247c0 */ r_esp -= 4; W32(r_esp, 0x5cbcfdu); f_004247c0();
    /* 005cbcfd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cbd00: mov dword ptr [eax], 0x63ae34 */ W32((u32)(r_eax), 0x63ae34u);
    /* 005cbd06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cbd09: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005cbd0c: jmp 0x5cbd15 */ goto L_005cbd15;
L_005cbd0e:; BB(0x005cbd0e);
    /* 005cbd0e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005cbd15:; BB(0x005cbd15);
    /* 005cbd15: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbd18: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cbd1b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005cbd1e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbd21: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cbd24: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbd27: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cbd2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cbd2c: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5cbd2fu); call_ind(t); }
    /* 005cbd2f: push 0x1adc2 */ { u32 v = 0x1adc2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd34: push 0x1adc3 */ { u32 v = 0x1adc3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd39: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbd3c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cbd3f: call 0x5d034c */ r_esp -= 4; W32(r_esp, 0x5cbd44u); f_005d034c();
    /* 005cbd44: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbd47: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 005cbd4d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005cbd50: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbd53: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cbd56: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cbd59: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cbd5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cbd5f: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 005cbd65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd67: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbd6a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cbd6d: call 0x424886 */ r_esp -= 4; W32(r_esp, 0x5cbd72u); f_00424886();
    /* 005cbd72: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd77: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cbd7cu); f_0048ab58();
    /* 005cbd7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbd7f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cbd82: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbd86: je 0x5cbd95 */ if (fZ) goto L_005cbd95;
L_005cbd88:; BB(0x005cbd88);
    /* 005cbd88: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cbd8b: call 0x5d4d90 */ r_esp -= 4; W32(r_esp, 0x5cbd90u); f_005d4d90();
    /* 005cbd90: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cbd93: jmp 0x5cbd9c */ goto L_005cbd9c;
L_005cbd95:; BB(0x005cbd95);
    /* 005cbd95: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005cbd9c:; BB(0x005cbd9c);
    /* 005cbd9c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbd9f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbda2: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005cbda5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbda8: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005cbdab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbdae: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005cbdb1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cbdb3: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5cbdb6u); call_ind(t); }
    /* 005cbdb6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbdb9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005cbdbc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbdbf: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005cbdc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cbdc4: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cbdc7u); call_ind(t); }
    /* 005cbdc7: push 0x1adc1 */ { u32 v = 0x1adc1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbdcc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbdcf: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005cbdd2: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5cbdd7u); f_005ea0c3();
    /* 005cbdd7: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbddc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbddf: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005cbde2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbde5: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005cbde8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cbdea: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cbdedu); call_ind(t); }
    /* 005cbded: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbdf0: cmp dword ptr [eax + 0x29c], 0 */ {  u32 a = R32((u32)(r_eax+0x29cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbdf7: jne 0x5cbe33 */ if (!fZ) goto L_005cbe33;
L_005cbdf9:; BB(0x005cbdf9);
    /* 005cbdf9: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbdfe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cbe03u); f_0048ab58();
    /* 005cbe03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbe06: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cbe09: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbe0d: je 0x5cbe20 */ if (fZ) goto L_005cbe20;
L_005cbe0f:; BB(0x005cbe0f);
    /* 005cbe0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cbe16: call 0x5cf9a0 */ r_esp -= 4; W32(r_esp, 0x5cbe1bu); f_005cf9a0();
    /* 005cbe1b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cbe1e: jmp 0x5cbe27 */ goto L_005cbe27;
L_005cbe20:; BB(0x005cbe20);
    /* 005cbe20: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005cbe27:; BB(0x005cbe27);
    /* 005cbe27: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbe2a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cbe2d: mov dword ptr [ecx + 0x29c], edx */ W32((u32)(r_ecx+0x29cu), r_edx);
L_005cbe33:; BB(0x005cbe33);
    /* 005cbe33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe35: push 0x429 */ { u32 v = 0x429u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe3a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbe3d: mov ecx, dword ptr [eax + 0x29c] */ r_ecx = R32((u32)(r_eax+0x29cu));
    /* 005cbe43: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x5cbe48u); f_005e0461();
    /* 005cbe48: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbe4b: mov ecx, dword ptr [ecx + 0x29c] */ r_ecx = R32((u32)(r_ecx+0x29cu));
    /* 005cbe51: call 0x5cfa93 */ r_esp -= 4; W32(r_esp, 0x5cbe56u); f_005cfa93();
    /* 005cbe56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe5a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbe5d: mov ecx, dword ptr [edx + 0x29c] */ r_ecx = R32((u32)(r_edx+0x29cu));
    /* 005cbe63: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x5cbe68u); f_005d81dc();
    /* 005cbe68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe6a: push 0x163 */ { u32 v = 0x163u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe6f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe71: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbe74: mov ecx, dword ptr [eax + 0x29c] */ r_ecx = R32((u32)(r_eax+0x29cu));
    /* 005cbe7a: call 0x5d81bb */ r_esp -= 4; W32(r_esp, 0x5cbe7fu); f_005d81bb();
    /* 005cbe7f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbe82: mov dword ptr [ecx + 0x3ac], 0 */ W32((u32)(r_ecx+0x3acu), 0x0u);
    /* 005cbe8c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cbe8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cbe8f: ret  */ FN_RET(0x005cbca2); r_esp += 4; return;
}

void f_005cbe90(void) /* FUN_005cbe90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cbe90);
    /* 005cbe90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe91: mov ebp, esp */ r_ebp = r_esp;
    /* 005cbe93: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cbe96: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005cbe99: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 005cbea0: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005cbea7: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005cbeae: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cbeb5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cbebc: jmp 0x5cbec7 */ goto L_005cbec7;
L_005cbebe:; BB(0x005cbebe);
    /* 005cbebe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cbec1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cbec4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cbec7:; BB(0x005cbec7);
    /* 005cbec7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cbecb: jge 0x5cbf36 */ if ((fS==fO)) goto L_005cbf36;
L_005cbecd:; BB(0x005cbecd);
    /* 005cbecd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cbed0: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 005cbed4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cbed7: cmp dword ptr [eax + edx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbedc: jne 0x5cbf34 */ if (!fZ) goto L_005cbf34;
L_005cbede:; BB(0x005cbede);
    /* 005cbede: push 0x3cc */ { u32 v = 0x3ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbee3: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cbee8u); f_0048ab58();
    /* 005cbee8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbeeb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cbeee: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbef2: je 0x5cbf09 */ if (fZ) goto L_005cbf09;
L_005cbef4:; BB(0x005cbef4);
    /* 005cbef4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cbef7: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 005cbefb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbefc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbeff: call 0x5cad47 */ r_esp -= 4; W32(r_esp, 0x5cbf04u); f_005cad47();
    /* 005cbf04: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cbf07: jmp 0x5cbf10 */ goto L_005cbf10;
L_005cbf09:; BB(0x005cbf09);
    /* 005cbf09: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005cbf10:; BB(0x005cbf10);
    /* 005cbf10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cbf13: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 005cbf17: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cbf1a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbf1d: mov dword ptr [edx + ecx*4 + 0x10], eax */ W32((u32)(r_edx+r_ecx*4+0x10u), r_eax);
    /* 005cbf21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cbf24: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 005cbf28: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cbf2b: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cbf2f: call 0x5cb3cf */ r_esp -= 4; W32(r_esp, 0x5cbf34u); f_005cb3cf();
L_005cbf34:; BB(0x005cbf34);
    /* 005cbf34: jmp 0x5cbebe */ goto L_005cbebe;
L_005cbf36:; BB(0x005cbf36);
    /* 005cbf36: mov esp, ebp */ r_esp = r_ebp;
    /* 005cbf38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cbf39: ret  */ FN_RET(0x005cbe90); r_esp += 4; return;
}

void f_005cbf3a(void) /* FUN_005cbf3a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cbf3a);
    /* 005cbf3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf3b: mov ebp, esp */ r_ebp = r_esp;
    /* 005cbf3d: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cbf40: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cbf43: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbf46: cmp dword ptr [eax + 0x2a4], 0 */ {  u32 a = R32((u32)(r_eax+0x2a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbf4d: jne 0x5cbfe0 */ if (!fZ) goto L_005cbfe0;
L_005cbf53:; BB(0x005cbf53);
    /* 005cbf53: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf55: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cbf5au); f_0048ab58();
    /* 005cbf5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbf5d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cbf60: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbf64: je 0x5cbf73 */ if (fZ) goto L_005cbf73;
L_005cbf66:; BB(0x005cbf66);
    /* 005cbf66: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cbf69: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5cbf6eu); f_005e9d30();
    /* 005cbf6e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cbf71: jmp 0x5cbf7a */ goto L_005cbf7a;
L_005cbf73:; BB(0x005cbf73);
    /* 005cbf73: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005cbf7a:; BB(0x005cbf7a);
    /* 005cbf7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbf7d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cbf80: mov dword ptr [ecx + 0x2a4], edx */ W32((u32)(r_ecx+0x2a4u), r_edx);
    /* 005cbf86: push 0x1adb3 */ { u32 v = 0x1adb3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbf8e: mov ecx, dword ptr [eax + 0x2a4] */ r_ecx = R32((u32)(r_eax+0x2a4u));
    /* 005cbf94: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5cbf99u); f_005ea0c3();
    /* 005cbf99: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbf9c: mov ecx, dword ptr [ecx + 0x2a4] */ r_ecx = R32((u32)(r_ecx+0x2a4u));
    /* 005cbfa2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbfa5: mov eax, dword ptr [edx + 0x2a4] */ r_eax = R32((u32)(r_edx+0x2a4u));
    /* 005cbfab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cbfad: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5cbfb0u); call_ind(t); }
    /* 005cbfb0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbfb2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbfb5: mov ecx, dword ptr [eax + 0x2a4] */ r_ecx = R32((u32)(r_eax+0x2a4u));
    /* 005cbfbb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbfbe: mov eax, dword ptr [edx + 0x2a4] */ r_eax = R32((u32)(r_edx+0x2a4u));
    /* 005cbfc4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cbfc6: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cbfc9u); call_ind(t); }
    /* 005cbfc9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbfcc: mov ecx, dword ptr [eax + 0x2a4] */ r_ecx = R32((u32)(r_eax+0x2a4u));
    /* 005cbfd2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbfd5: mov eax, dword ptr [edx + 0x2a4] */ r_eax = R32((u32)(r_edx+0x2a4u));
    /* 005cbfdb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cbfdd: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5cbfe0u); call_ind(t); }
L_005cbfe0:; BB(0x005cbfe0);
    /* 005cbfe0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbfe3: cmp dword ptr [eax + 0x298], 0 */ {  u32 a = R32((u32)(r_eax+0x298u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbfea: jne 0x5cc098 */ if (!fZ) goto L_005cc098;
L_005cbff0:; BB(0x005cbff0);
    /* 005cbff0: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbff2: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cbff7u); f_0048ab58();
    /* 005cbff7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbffa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cbffd: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc001: je 0x5cc010 */ if (fZ) goto L_005cc010;
L_005cc003:; BB(0x005cc003);
    /* 005cc003: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc006: call 0x5cf83b */ r_esp -= 4; W32(r_esp, 0x5cc00bu); f_005cf83b();
    /* 005cc00b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005cc00e: jmp 0x5cc017 */ goto L_005cc017;
L_005cc010:; BB(0x005cc010);
    /* 005cc010: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005cc017:; BB(0x005cc017);
    /* 005cc017: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc01a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cc01d: mov dword ptr [ecx + 0x298], edx */ W32((u32)(r_ecx+0x298u), r_edx);
    /* 005cc023: push 0x1adc4 */ { u32 v = 0x1adc4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc028: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc02b: mov ecx, dword ptr [eax + 0x298] */ r_ecx = R32((u32)(r_eax+0x298u));
    /* 005cc031: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5cc036u); f_005ea0c3();
    /* 005cc036: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc039: mov ecx, dword ptr [ecx + 0x298] */ r_ecx = R32((u32)(r_ecx+0x298u));
    /* 005cc03f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc042: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 005cc048: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc04a: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5cc04du); call_ind(t); }
    /* 005cc04d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc04f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc052: mov ecx, dword ptr [eax + 0x298] */ r_ecx = R32((u32)(r_eax+0x298u));
    /* 005cc058: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc05b: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 005cc061: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc063: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cc066u); call_ind(t); }
    /* 005cc066: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc068: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc06a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc06d: mov ecx, dword ptr [eax + 0x298] */ r_ecx = R32((u32)(r_eax+0x298u));
    /* 005cc073: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc076: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 005cc07c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc07e: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5cc081u); call_ind(t); }
    /* 005cc081: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc084: mov ecx, dword ptr [eax + 0x298] */ r_ecx = R32((u32)(r_eax+0x298u));
    /* 005cc08a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc08d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 005cc093: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc095: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5cc098u); call_ind(t); }
L_005cc098:; BB(0x005cc098);
    /* 005cc098: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc09b: cmp dword ptr [eax + 0x2a8], 0 */ {  u32 a = R32((u32)(r_eax+0x2a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc0a2: jne 0x5cc15c */ if (!fZ) goto L_005cc15c;
L_005cc0a8:; BB(0x005cc0a8);
    /* 005cc0a8: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc0aa: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cc0afu); f_0048ab58();
    /* 005cc0af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc0b2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cc0b5: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc0b9: je 0x5cc0d4 */ if (fZ) goto L_005cc0d4;
L_005cc0bb:; BB(0x005cc0bb);
    /* 005cc0bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc0be: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5cc0c3u); f_005e9d30();
    /* 005cc0c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc0c6: mov dword ptr [ecx], 0x63ae8c */ W32((u32)(r_ecx), 0x63ae8cu);
    /* 005cc0cc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc0cf: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005cc0d2: jmp 0x5cc0db */ goto L_005cc0db;
L_005cc0d4:; BB(0x005cc0d4);
    /* 005cc0d4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005cc0db:; BB(0x005cc0db);
    /* 005cc0db: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc0de: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cc0e1: mov dword ptr [eax + 0x2a8], ecx */ W32((u32)(r_eax+0x2a8u), r_ecx);
    /* 005cc0e7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cc0ed: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x5cc0f2u); f_0045cb0a();
    /* 005cc0f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc0f4: je 0x5cc112 */ if (fZ) goto L_005cc112;
L_005cc0f6:; BB(0x005cc0f6);
    /* 005cc0f6: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc0fd: jne 0x5cc112 */ if (!fZ) goto L_005cc112;
L_005cc0ff:; BB(0x005cc0ff);
    /* 005cc0ff: push 0x1adba */ { u32 v = 0x1adbau; r_esp -= 4; W32(r_esp, v); }
    /* 005cc104: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc107: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 005cc10d: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5cc112u); f_005ea0c3();
L_005cc112:; BB(0x005cc112);
    /* 005cc112: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc117: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc11a: mov ecx, dword ptr [eax + 0x2a8] */ r_ecx = R32((u32)(r_eax+0x2a8u));
    /* 005cc120: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc123: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 005cc129: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc12b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cc12eu); call_ind(t); }
    /* 005cc12e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc131: mov ecx, dword ptr [eax + 0x2a8] */ r_ecx = R32((u32)(r_eax+0x2a8u));
    /* 005cc137: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc13a: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 005cc140: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc142: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5cc145u); call_ind(t); }
    /* 005cc145: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc148: mov ecx, dword ptr [eax + 0x2a8] */ r_ecx = R32((u32)(r_eax+0x2a8u));
    /* 005cc14e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc151: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 005cc157: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc159: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cc15cu); call_ind(t); }
L_005cc15c:; BB(0x005cc15c);
    /* 005cc15c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc15f: cmp dword ptr [eax + 0x2ac], 0 */ {  u32 a = R32((u32)(r_eax+0x2acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc166: jne 0x5cc214 */ if (!fZ) goto L_005cc214;
L_005cc16c:; BB(0x005cc16c);
    /* 005cc16c: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc16e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cc173u); f_0048ab58();
    /* 005cc173: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc176: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cc179: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc17d: je 0x5cc18c */ if (fZ) goto L_005cc18c;
L_005cc17f:; BB(0x005cc17f);
    /* 005cc17f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc182: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5cc187u); f_005e3fb0();
    /* 005cc187: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cc18a: jmp 0x5cc193 */ goto L_005cc193;
L_005cc18c:; BB(0x005cc18c);
    /* 005cc18c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005cc193:; BB(0x005cc193);
    /* 005cc193: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc196: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cc199: mov dword ptr [ecx + 0x2ac], edx */ W32((u32)(r_ecx+0x2acu), r_edx);
    /* 005cc19f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cc1a5: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x5cc1aau); f_0045cb0a();
    /* 005cc1aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc1ac: je 0x5cc1ca */ if (fZ) goto L_005cc1ca;
L_005cc1ae:; BB(0x005cc1ae);
    /* 005cc1ae: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc1b5: jne 0x5cc1ca */ if (!fZ) goto L_005cc1ca;
L_005cc1b7:; BB(0x005cc1b7);
    /* 005cc1b7: push 0x1adb1 */ { u32 v = 0x1adb1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc1bc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc1bf: mov ecx, dword ptr [eax + 0x2ac] */ r_ecx = R32((u32)(r_eax+0x2acu));
    /* 005cc1c5: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5cc1cau); f_005ea0c3();
L_005cc1ca:; BB(0x005cc1ca);
    /* 005cc1ca: push 0x1389 */ { u32 v = 0x1389u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc1cf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc1d2: mov ecx, dword ptr [ecx + 0x2ac] */ r_ecx = R32((u32)(r_ecx+0x2acu));
    /* 005cc1d8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc1db: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 005cc1e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc1e3: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cc1e6u); call_ind(t); }
    /* 005cc1e6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc1e9: mov ecx, dword ptr [eax + 0x2ac] */ r_ecx = R32((u32)(r_eax+0x2acu));
    /* 005cc1ef: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc1f2: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 005cc1f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc1fa: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5cc1fdu); call_ind(t); }
    /* 005cc1fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc200: mov ecx, dword ptr [eax + 0x2ac] */ r_ecx = R32((u32)(r_eax+0x2acu));
    /* 005cc206: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc209: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 005cc20f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc211: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cc214u); call_ind(t); }
L_005cc214:; BB(0x005cc214);
    /* 005cc214: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc217: cmp dword ptr [eax + 0x2b0], 0 */ {  u32 a = R32((u32)(r_eax+0x2b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc21e: jne 0x5cc2cc */ if (!fZ) goto L_005cc2cc;
L_005cc224:; BB(0x005cc224);
    /* 005cc224: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc226: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cc22bu); f_0048ab58();
    /* 005cc22b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc22e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cc231: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc235: je 0x5cc244 */ if (fZ) goto L_005cc244;
L_005cc237:; BB(0x005cc237);
    /* 005cc237: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc23a: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5cc23fu); f_005e3fb0();
    /* 005cc23f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005cc242: jmp 0x5cc24b */ goto L_005cc24b;
L_005cc244:; BB(0x005cc244);
    /* 005cc244: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005cc24b:; BB(0x005cc24b);
    /* 005cc24b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc24e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005cc251: mov dword ptr [ecx + 0x2b0], edx */ W32((u32)(r_ecx+0x2b0u), r_edx);
    /* 005cc257: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cc25d: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x5cc262u); f_0045cb0a();
    /* 005cc262: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc264: je 0x5cc282 */ if (fZ) goto L_005cc282;
L_005cc266:; BB(0x005cc266);
    /* 005cc266: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc26d: jne 0x5cc282 */ if (!fZ) goto L_005cc282;
L_005cc26f:; BB(0x005cc26f);
    /* 005cc26f: push 0x1adbf */ { u32 v = 0x1adbfu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc274: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc277: mov ecx, dword ptr [eax + 0x2b0] */ r_ecx = R32((u32)(r_eax+0x2b0u));
    /* 005cc27d: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5cc282u); f_005ea0c3();
L_005cc282:; BB(0x005cc282);
    /* 005cc282: push 0x138a */ { u32 v = 0x138au; r_esp -= 4; W32(r_esp, v); }
    /* 005cc287: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc28a: mov ecx, dword ptr [ecx + 0x2b0] */ r_ecx = R32((u32)(r_ecx+0x2b0u));
    /* 005cc290: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc293: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005cc299: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc29b: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cc29eu); call_ind(t); }
    /* 005cc29e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc2a1: mov ecx, dword ptr [eax + 0x2b0] */ r_ecx = R32((u32)(r_eax+0x2b0u));
    /* 005cc2a7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc2aa: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005cc2b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc2b2: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5cc2b5u); call_ind(t); }
    /* 005cc2b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc2b8: mov ecx, dword ptr [eax + 0x2b0] */ r_ecx = R32((u32)(r_eax+0x2b0u));
    /* 005cc2be: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc2c1: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005cc2c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc2c9: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cc2ccu); call_ind(t); }
L_005cc2cc:; BB(0x005cc2cc);
    /* 005cc2cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc2d3: jmp 0x5cc2de */ goto L_005cc2de;
L_005cc2d5:; BB(0x005cc2d5);
    /* 005cc2d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc2d8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cc2db: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cc2de:; BB(0x005cc2de);
    /* 005cc2de: cmp dword ptr [ebp - 4], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc2e2: jge 0x5cc3b2 */ if ((fS==fO)) goto L_005cc3b2;
L_005cc2e8:; BB(0x005cc2e8);
    /* 005cc2e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc2eb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc2ee: cmp dword ptr [edx + ecx*4 + 0x2b4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x2b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc2f6: jne 0x5cc3ad */ if (!fZ) goto L_005cc3ad;
L_005cc2fc:; BB(0x005cc2fc);
    /* 005cc2fc: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc2fe: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cc303u); f_0048ab58();
    /* 005cc303: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc306: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cc309: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc30d: je 0x5cc31c */ if (fZ) goto L_005cc31c;
L_005cc30f:; BB(0x005cc30f);
    /* 005cc30f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cc312: call 0x5e9d30 */ r_esp -= 4; W32(r_esp, 0x5cc317u); f_005e9d30();
    /* 005cc317: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005cc31a: jmp 0x5cc323 */ goto L_005cc323;
L_005cc31c:; BB(0x005cc31c);
    /* 005cc31c: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005cc323:; BB(0x005cc323);
    /* 005cc323: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc326: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc329: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005cc32c: mov dword ptr [ecx + eax*4 + 0x2b4], edx */ W32((u32)(r_ecx+r_eax*4+0x2b4u), r_edx);
    /* 005cc333: push 0x1adc0 */ { u32 v = 0x1adc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc338: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc33b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc33e: mov ecx, dword ptr [ecx + eax*4 + 0x2b4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2b4u));
    /* 005cc345: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5cc34au); f_005ea0c3();
    /* 005cc34a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc34d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc350: mov ecx, dword ptr [eax + edx*4 + 0x2b4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2b4u));
    /* 005cc357: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc35a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc35d: mov edx, dword ptr [eax + edx*4 + 0x2b4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x2b4u));
    /* 005cc364: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cc366: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5cc369u); call_ind(t); }
    /* 005cc369: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc36b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc36e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc371: mov ecx, dword ptr [edx + ecx*4 + 0x2b4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2b4u));
    /* 005cc378: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc37b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc37e: mov eax, dword ptr [edx + eax*4 + 0x2b4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2b4u));
    /* 005cc385: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc387: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cc38au); call_ind(t); }
    /* 005cc38a: push -0x19 */ { u32 v = 0xffffffe7u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc38c: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc38e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc391: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc394: mov ecx, dword ptr [ecx + eax*4 + 0x2b4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2b4u));
    /* 005cc39b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc39e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc3a1: mov edx, dword ptr [eax + edx*4 + 0x2b4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x2b4u));
    /* 005cc3a8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cc3aa: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5cc3adu); call_ind(t); }
L_005cc3ad:; BB(0x005cc3ad);
    /* 005cc3ad: jmp 0x5cc2d5 */ goto L_005cc2d5;
L_005cc3b2:; BB(0x005cc3b2);
    /* 005cc3b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc3b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc3b5: ret  */ FN_RET(0x005cbf3a); r_esp += 4; return;
}

void f_005cc3b6(void) /* FUN_005cc3b6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc3b6);
    /* 005cc3b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc3b7: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc3b9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc3bc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cc3bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc3c1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc3c3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cc3c9: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x5cc3ceu); f_0045c4ac();
    /* 005cc3ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cc3d1: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc3d8: je 0x5cc3ee */ if (fZ) goto L_005cc3ee;
L_005cc3da:; BB(0x005cc3da);
    /* 005cc3da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc3dd: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 005cc3e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc3e3: mov byte ptr [ecx + 2], 1 */ W8((u32)(r_ecx+0x2u), 0x1u);
    /* 005cc3e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc3ea: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
L_005cc3ee:; BB(0x005cc3ee);
    /* 005cc3ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc3f1: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005cc3f4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc3f7: mov dword ptr [edx + 0x390], ecx */ W32((u32)(r_edx+0x390u), r_ecx);
    /* 005cc3fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc400: movsx ecx, byte ptr [eax + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x2u));
    /* 005cc404: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc407: mov dword ptr [edx + 0x398], ecx */ W32((u32)(r_edx+0x398u), r_ecx);
    /* 005cc40d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc410: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 005cc414: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc417: mov dword ptr [edx + 0x394], ecx */ W32((u32)(r_edx+0x394u), r_ecx);
    /* 005cc41d: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cc422: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc424: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cc42a: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x5cc42du); call_ind(t); }
    /* 005cc42d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc42f: je 0x5cc4aa */ if (fZ) goto L_005cc4aa;
L_005cc431:; BB(0x005cc431);
    /* 005cc431: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cc437: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x5cc43cu); f_00448ca3();
    /* 005cc43c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc43e: jne 0x5cc4aa */ if (!fZ) goto L_005cc4aa;
L_005cc440:; BB(0x005cc440);
    /* 005cc440: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc442: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cc448: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5cc44du); f_0045c419();
    /* 005cc44d: movsx eax, byte ptr [eax + 0x92] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 005cc454: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005cc456: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005cc458: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cc459: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc45c: cmp dword ptr [ecx + 0x39c], eax */ {  u32 a = R32((u32)(r_ecx+0x39cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc462: je 0x5cc4aa */ if (fZ) goto L_005cc4aa;
L_005cc464:; BB(0x005cc464);
    /* 005cc464: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc466: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cc46c: call 0x45c419 */ r_esp -= 4; W32(r_esp, 0x5cc471u); f_0045c419();
    /* 005cc471: movsx edx, byte ptr [eax + 0x92] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x92u));
    /* 005cc478: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 005cc47a: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 005cc47c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cc47d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc480: mov dword ptr [eax + 0x39c], edx */ W32((u32)(r_eax+0x39cu), r_edx);
    /* 005cc486: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc489: cmp dword ptr [ecx + 0x39c], 0 */ {  u32 a = R32((u32)(r_ecx+0x39cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc490: je 0x5cc49f */ if (fZ) goto L_005cc49f;
L_005cc492:; BB(0x005cc492);
    /* 005cc492: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cc498: call 0x44a94b */ r_esp -= 4; W32(r_esp, 0x5cc49du); f_0044a94b();
    /* 005cc49d: jmp 0x5cc4aa */ goto L_005cc4aa;
L_005cc49f:; BB(0x005cc49f);
    /* 005cc49f: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cc4a5: call 0x44a84f */ r_esp -= 4; W32(r_esp, 0x5cc4aau); f_0044a84f();
L_005cc4aa:; BB(0x005cc4aa);
    /* 005cc4aa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc4ad: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc4b1: je 0x5cc4d4 */ if (fZ) goto L_005cc4d4;
L_005cc4b3:; BB(0x005cc4b3);
    /* 005cc4b3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc4b6: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 005cc4bc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cc4bf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc4c2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cc4c5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cc4c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc4cb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc4ce: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
L_005cc4d4:; BB(0x005cc4d4);
    /* 005cc4d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc4d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc4d7: ret  */ FN_RET(0x005cc3b6); r_esp += 4; return;
}

void f_005cc4d8(void) /* FUN_005cc4d8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc4d8);
    /* 005cc4d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc4d9: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc4db: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc4de: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cc4e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc4e8: jmp 0x5cc4f3 */ goto L_005cc4f3;
L_005cc4ea:; BB(0x005cc4ea);
    /* 005cc4ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc4ed: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cc4f0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cc4f3:; BB(0x005cc4f3);
    /* 005cc4f3: cmp dword ptr [ebp - 4], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc4fa: jge 0x5cc555 */ if ((fS==fO)) goto L_005cc555;
L_005cc4fc:; BB(0x005cc4fc);
    /* 005cc4fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc4ff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc502: cmp dword ptr [edx + ecx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc507: jne 0x5cc553 */ if (!fZ) goto L_005cc553;
L_005cc509:; BB(0x005cc509);
    /* 005cc509: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc50e: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cc513u); f_0048ab58();
    /* 005cc513: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc516: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cc519: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc51d: je 0x5cc52c */ if (fZ) goto L_005cc52c;
L_005cc51f:; BB(0x005cc51f);
    /* 005cc51f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc522: call 0x5c8692 */ r_esp -= 4; W32(r_esp, 0x5cc527u); f_005c8692();
    /* 005cc527: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cc52a: jmp 0x5cc533 */ goto L_005cc533;
L_005cc52c:; BB(0x005cc52c);
    /* 005cc52c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005cc533:; BB(0x005cc533);
    /* 005cc533: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc536: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc539: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc53c: mov dword ptr [ecx + eax*4 + 0x20], edx */ W32((u32)(r_ecx+r_eax*4+0x20u), r_edx);
    /* 005cc540: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc543: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc544: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc547: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc54a: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cc54e: call 0x5c884e */ r_esp -= 4; W32(r_esp, 0x5cc553u); f_005c884e();
L_005cc553:; BB(0x005cc553);
    /* 005cc553: jmp 0x5cc4ea */ goto L_005cc4ea;
L_005cc555:; BB(0x005cc555);
    /* 005cc555: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc557: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc558: ret  */ FN_RET(0x005cc4d8); r_esp += 4; return;
}

void f_005cc559(void) /* FUN_005cc559 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc559);
    /* 005cc559: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc55a: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc55c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc55d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc560: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc563: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cc566: mov dword ptr [eax + 0x3b4], ecx */ W32((u32)(r_eax+0x3b4u), r_ecx);
    /* 005cc56c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc56e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc56f: ret 4 */ FN_RET(0x005cc559); r_esp += 8; return;
}

void f_005cc572(void) /* FUN_005cc572 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc572);
    /* 005cc572: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc573: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc575: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc576: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc579: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc57c: mov eax, dword ptr [eax + 0x3b4] */ r_eax = R32((u32)(r_eax+0x3b4u));
    /* 005cc582: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc584: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc585: ret  */ FN_RET(0x005cc572); r_esp += 4; return;
}

void f_005cc586(void) /* FUN_005cc586 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc586);
    /* 005cc586: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc587: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc589: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc58a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc58d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc590: call 0x5cc572 */ r_esp -= 4; W32(r_esp, 0x5cc595u); f_005cc572();
    /* 005cc595: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc597: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc59a: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005cc59d: mov eax, ecx */ r_eax = r_ecx;
    /* 005cc59f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc5a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc5a2: ret 4 */ FN_RET(0x005cc586); r_esp += 8; return;
}

void f_005cc5a5(void) /* FUN_005cc5a5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc5a5);
    /* 005cc5a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc5a6: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc5a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc5a9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc5ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc5af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cc5b2: mov dword ptr [eax + 0x3b0], ecx */ W32((u32)(r_eax+0x3b0u), r_ecx);
    /* 005cc5b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc5ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc5bb: ret 4 */ FN_RET(0x005cc5a5); r_esp += 8; return;
}

void f_005cc5be(void) /* FUN_005cc5be */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc5be);
    /* 005cc5be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc5bf: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc5c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc5c2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc5c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc5c8: mov ecx, dword ptr [eax + 0x3b0] */ r_ecx = R32((u32)(r_eax+0x3b0u));
    /* 005cc5ce: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc5d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc5d4: mov dword ptr [edx + 0x3b0], ecx */ W32((u32)(r_edx+0x3b0u), r_ecx);
    /* 005cc5da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc5dd: cmp dword ptr [eax + 0x3b0], 4 */ {  u32 a = R32((u32)(r_eax+0x3b0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc5e4: jle 0x5cc5f3 */ if ((fZ||fS!=fO)) goto L_005cc5f3;
L_005cc5e6:; BB(0x005cc5e6);
    /* 005cc5e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc5e9: mov dword ptr [ecx + 0x3b0], 0 */ W32((u32)(r_ecx+0x3b0u), 0x0u);
L_005cc5f3:; BB(0x005cc5f3);
    /* 005cc5f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc5f6: cmp dword ptr [edx + 0x3b0], 4 */ {  u32 a = R32((u32)(r_edx+0x3b0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc5fd: jne 0x5cc606 */ if (!fZ) goto L_005cc606;
L_005cc5ff:; BB(0x005cc5ff);
    /* 005cc5ff: mov eax, 1 */ r_eax = 0x1u;
    /* 005cc604: jmp 0x5cc622 */ goto L_005cc622;
L_005cc606:; BB(0x005cc606);
    /* 005cc606: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc609: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cc60eu); f_005cd326();
    /* 005cc60e: mov ecx, eax */ r_ecx = r_eax;
    /* 005cc610: call 0x5cb664 */ r_esp -= 4; W32(r_esp, 0x5cc615u); f_005cb664();
    /* 005cc615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc617: jne 0x5cc61d */ if (!fZ) goto L_005cc61d;
L_005cc619:; BB(0x005cc619);
    /* 005cc619: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cc61b: jmp 0x5cc622 */ goto L_005cc622;
L_005cc61d:; BB(0x005cc61d);
    /* 005cc61d: mov eax, 1 */ r_eax = 0x1u;
L_005cc622:; BB(0x005cc622);
    /* 005cc622: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc624: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc625: ret  */ FN_RET(0x005cc5be); r_esp += 4; return;
}

void f_005cc626(void) /* FUN_005cc626 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc626);
    /* 005cc626: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc627: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc629: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc62c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cc62f: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cc634: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cc637: call 0x5e63b4 */ r_esp -= 4; W32(r_esp, 0x5cc63cu); f_005e63b4();
    /* 005cc63c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cc63f: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc643: je 0x5cc657 */ if (fZ) goto L_005cc657;
L_005cc645:; BB(0x005cc645);
    /* 005cc645: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc649: je 0x5cc657 */ if (fZ) goto L_005cc657;
L_005cc64b:; BB(0x005cc64b);
    /* 005cc64b: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc64f: je 0x5cc657 */ if (fZ) goto L_005cc657;
L_005cc651:; BB(0x005cc651);
    /* 005cc651: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc655: jne 0x5cc65e */ if (!fZ) goto L_005cc65e;
L_005cc657:; BB(0x005cc657);
    /* 005cc657: mov eax, 1 */ r_eax = 0x1u;
    /* 005cc65c: jmp 0x5cc660 */ goto L_005cc660;
L_005cc65e:; BB(0x005cc65e);
    /* 005cc65e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cc660:; BB(0x005cc660);
    /* 005cc660: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc662: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc663: ret  */ FN_RET(0x005cc626); r_esp += 4; return;
}

void f_005cc664(void) /* FUN_005cc664 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc664);
    /* 005cc664: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc665: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc667: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc66a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cc66d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc670: call 0x5cc626 */ r_esp -= 4; W32(r_esp, 0x5cc675u); f_005cc626();
    /* 005cc675: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc677: jne 0x5cc682 */ if (!fZ) goto L_005cc682;
L_005cc679:; BB(0x005cc679);
    /* 005cc679: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc680: je 0x5cc687 */ if (fZ) goto L_005cc687;
L_005cc682:; BB(0x005cc682);
    /* 005cc682: jmp 0x5cc714 */ goto L_005cc714;
L_005cc687:; BB(0x005cc687);
    /* 005cc687: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cc68e: jmp 0x5cc699 */ goto L_005cc699;
L_005cc690:; BB(0x005cc690);
    /* 005cc690: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc693: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cc696: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005cc699:; BB(0x005cc699);
    /* 005cc699: cmp dword ptr [ebp - 8], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc6a0: jge 0x5cc714 */ if ((fS==fO)) goto L_005cc714;
L_005cc6a2:; BB(0x005cc6a2);
    /* 005cc6a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc6a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc6a8: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cc6ac: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cc6af: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cc6b6: jmp 0x5cc6c1 */ goto L_005cc6c1;
L_005cc6b8:; BB(0x005cc6b8);
    /* 005cc6b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc6bb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc6be: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005cc6c1:; BB(0x005cc6c1);
    /* 005cc6c1: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc6c5: jge 0x5cc70f */ if ((fS==fO)) goto L_005cc70f;
L_005cc6c7:; BB(0x005cc6c7);
    /* 005cc6c7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc6ca: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005cc6cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc6d0: mov ecx, dword ptr [eax + edx + 0x6c] */ r_ecx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 005cc6d4: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005cc6d7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005cc6da: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc6de: je 0x5cc70d */ if (fZ) goto L_005cc70d;
L_005cc6e0:; BB(0x005cc6e0);
    /* 005cc6e0: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc6e4: je 0x5cc6f5 */ if (fZ) goto L_005cc6f5;
L_005cc6e6:; BB(0x005cc6e6);
    /* 005cc6e6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc6e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc6ec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cc6ef: cmp edx, dword ptr [ecx + eax*4 + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*4+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc6f3: jne 0x5cc702 */ if (!fZ) goto L_005cc702;
L_005cc6f5:; BB(0x005cc6f5);
    /* 005cc6f5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc6f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc6fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc6fd: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5cc700u); call_ind(t); }
    /* 005cc700: jmp 0x5cc70d */ goto L_005cc70d;
L_005cc702:; BB(0x005cc702);
    /* 005cc702: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc705: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc707: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc70a: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cc70du); call_ind(t); }
L_005cc70d:; BB(0x005cc70d);
    /* 005cc70d: jmp 0x5cc6b8 */ goto L_005cc6b8;
L_005cc70f:; BB(0x005cc70f);
    /* 005cc70f: jmp 0x5cc690 */ goto L_005cc690;
L_005cc714:; BB(0x005cc714);
    /* 005cc714: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc716: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc717: ret 4 */ FN_RET(0x005cc664); r_esp += 8; return;
}

void f_005cc71a(void) /* FUN_005cc71a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc71a);
    /* 005cc71a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc71b: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc71d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc720: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cc723: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cc72a: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005cc731: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 005cc738: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005cc73f: push 0x5cda08 */ { u32 v = 0x5cda08u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc744: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc746: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc748: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005cc74b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc74c: call 0x624bf0 */ r_esp -= 4; W32(r_esp, 0x5cc751u); f_00624bf0();
    /* 005cc751: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc754: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc757: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc75a: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cc75e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cc761: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc765: je 0x5cc789 */ if (fZ) goto L_005cc789;
L_005cc767:; BB(0x005cc767);
    /* 005cc767: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc76a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc76d: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cc771: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005cc774: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc777: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc77a: mov eax, dword ptr [ecx + eax*4 + 0x10] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cc77e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cc781: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 005cc784: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc787: jle 0x5cc790 */ if ((fZ||fS!=fO)) goto L_005cc790;
L_005cc789:; BB(0x005cc789);
    /* 005cc789: mov eax, 1 */ r_eax = 0x1u;
    /* 005cc78e: jmp 0x5cc792 */ goto L_005cc792;
L_005cc790:; BB(0x005cc790);
    /* 005cc790: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cc792:; BB(0x005cc792);
    /* 005cc792: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc794: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc795: ret  */ FN_RET(0x005cc71a); r_esp += 4; return;
}

void f_005cc796(void) /* FUN_005cc796 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc796);
    /* 005cc796: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc797: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc799: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc79a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc79d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc7a1: je 0x5cc7ad */ if (fZ) goto L_005cc7ad;
L_005cc7a3:; BB(0x005cc7a3);
    /* 005cc7a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc7a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc7a8: call 0x5cc5a5 */ r_esp -= 4; W32(r_esp, 0x5cc7adu); f_005cc5a5();
L_005cc7ad:; BB(0x005cc7ad);
    /* 005cc7ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc7b0: mov ecx, dword ptr [eax + 0x3b0] */ r_ecx = R32((u32)(r_eax+0x3b0u));
    /* 005cc7b6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc7b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc7bc: mov dword ptr [edx + 0x3b0], ecx */ W32((u32)(r_edx+0x3b0u), r_ecx);
    /* 005cc7c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc7c5: cmp dword ptr [eax + 0x3b0], 4 */ {  u32 a = R32((u32)(r_eax+0x3b0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc7cc: jle 0x5cc7db */ if ((fZ||fS!=fO)) goto L_005cc7db;
L_005cc7ce:; BB(0x005cc7ce);
    /* 005cc7ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc7d1: mov dword ptr [ecx + 0x3b0], 0 */ W32((u32)(r_ecx+0x3b0u), 0x0u);
L_005cc7db:; BB(0x005cc7db);
    /* 005cc7db: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc7de: cmp dword ptr [edx + 0x3b0], 4 */ {  u32 a = R32((u32)(r_edx+0x3b0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc7e5: jne 0x5cc7e9 */ if (!fZ) goto L_005cc7e9;
L_005cc7e7:; BB(0x005cc7e7);
    /* 005cc7e7: jmp 0x5cc7fc */ goto L_005cc7fc;
L_005cc7e9:; BB(0x005cc7e9);
    /* 005cc7e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc7ec: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cc7f1u); f_005cd326();
    /* 005cc7f1: mov ecx, eax */ r_ecx = r_eax;
    /* 005cc7f3: call 0x5cb664 */ r_esp -= 4; W32(r_esp, 0x5cc7f8u); f_005cb664();
    /* 005cc7f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc7fa: je 0x5cc7ad */ if (fZ) goto L_005cc7ad;
L_005cc7fc:; BB(0x005cc7fc);
    /* 005cc7fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc7fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc7ff: ret 4 */ FN_RET(0x005cc796); r_esp += 8; return;
}

void f_005cc802(void) /* FUN_005cc802 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc802);
    /* 005cc802: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc803: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc805: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc808: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cc80b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc812: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc815: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cc81au); f_005cd25d();
    /* 005cc81a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc81d: jle 0x5cc842 */ if ((fZ||fS!=fO)) goto L_005cc842;
L_005cc81f:; BB(0x005cc81f);
    /* 005cc81f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc822: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cc827u); f_005cd25d();
    /* 005cc827: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc82a: jge 0x5cc842 */ if ((fS==fO)) goto L_005cc842;
L_005cc82c:; BB(0x005cc82c);
    /* 005cc82c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc82f: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cc834u); f_005cd326();
    /* 005cc834: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cc837: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc83a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc83c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc83f: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5cc842u); call_ind(t); }
L_005cc842:; BB(0x005cc842);
    /* 005cc842: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc845: call 0x5cd271 */ r_esp -= 4; W32(r_esp, 0x5cc84au); f_005cd271();
    /* 005cc84a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc84c: jne 0x5cc89c */ if (!fZ) goto L_005cc89c;
L_005cc84e:; BB(0x005cc84e);
    /* 005cc84e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc850: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc853: call 0x5cc5a5 */ r_esp -= 4; W32(r_esp, 0x5cc858u); f_005cc5a5();
    /* 005cc858: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc85a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc85c: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cc862: call 0x447d8a */ r_esp -= 4; W32(r_esp, 0x5cc867u); f_00447d8a();
    /* 005cc867: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc869: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cc86e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cc871: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cc877: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cc87a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc87c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cc87fu); call_ind(t); }
    /* 005cc87f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc881: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cc886: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cc889: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cc88f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cc892: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc894: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5cc897u); call_ind(t); }
    /* 005cc897: jmp 0x5ccd95 */ goto L_005ccd95;
L_005cc89c:; BB(0x005cc89c);
    /* 005cc89c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc89f: call 0x5cc5be */ r_esp -= 4; W32(r_esp, 0x5cc8a4u); f_005cc5be();
    /* 005cc8a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc8a6: jne 0x5cc95a */ if (!fZ) goto L_005cc95a;
L_005cc8ac:; BB(0x005cc8ac);
    /* 005cc8ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc8af: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cc8b4u); f_005cd326();
    /* 005cc8b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc8b5: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cc8ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc8bc: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cc8c2: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x5cc8c5u); call_ind(t); }
    /* 005cc8c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc8c7: je 0x5cc924 */ if (fZ) goto L_005cc924;
L_005cc8c9:; BB(0x005cc8c9);
    /* 005cc8c9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc8cc: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cc8d1u); f_005cd326();
    /* 005cc8d1: mov ecx, eax */ r_ecx = r_eax;
    /* 005cc8d3: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5cc8d8u); f_004259a0();
    /* 005cc8d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc8da: je 0x5cc8f5 */ if (fZ) goto L_005cc8f5;
L_005cc8dc:; BB(0x005cc8dc);
    /* 005cc8dc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc8df: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cc8e4u); f_005cd326();
    /* 005cc8e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc8e5: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cc8eb: call 0x449908 */ r_esp -= 4; W32(r_esp, 0x5cc8f0u); f_00449908();
    /* 005cc8f0: jmp 0x5ccd95 */ goto L_005ccd95;
L_005cc8f5:; BB(0x005cc8f5);
    /* 005cc8f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc8f8: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cc8fdu); f_005cd326();
    /* 005cc8fd: mov ecx, eax */ r_ecx = r_eax;
    /* 005cc8ff: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5cc904u); f_00425973();
    /* 005cc904: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc906: je 0x5cc924 */ if (fZ) goto L_005cc924;
L_005cc908:; BB(0x005cc908);
    /* 005cc908: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc90b: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cc910u); f_005cd326();
    /* 005cc910: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005cc913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc914: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cc91a: call 0x44a9db */ r_esp -= 4; W32(r_esp, 0x5cc91fu); f_0044a9db();
    /* 005cc91f: jmp 0x5ccd95 */ goto L_005ccd95;
L_005cc924:; BB(0x005cc924);
    /* 005cc924: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc926: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cc92c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cc92f: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cc935: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cc938: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc93a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cc93du); call_ind(t); }
    /* 005cc93d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc93f: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cc944: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cc947: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cc94d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cc950: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc952: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5cc955u); call_ind(t); }
    /* 005cc955: jmp 0x5ccd95 */ goto L_005ccd95;
L_005cc95a:; BB(0x005cc95a);
    /* 005cc95a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc95d: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cc962u); f_005cd25d();
    /* 005cc962: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc965: jl 0x5cca2f */ if ((fS!=fO)) goto L_005cca2f;
L_005cc96b:; BB(0x005cc96b);
    /* 005cc96b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc96d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc96f: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cc975: call 0x447d8a */ r_esp -= 4; W32(r_esp, 0x5cc97au); f_00447d8a();
    /* 005cc97a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc97d: call 0x5cc572 */ r_esp -= 4; W32(r_esp, 0x5cc982u); f_005cc572();
    /* 005cc982: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cc985: cmp dword ptr [ebp - 0x1c], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005cc989: ja 0x5cca2f */ if ((!fC&&!fZ)) goto L_005cca2f;
L_005cc98f:; BB(0x005cc98f);
    /* 005cc98f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cc992: jmp dword ptr [eax*4 + 0x5ccd99] */ { u32 t = R32((u32)(r_eax*4+0x5ccd99u)); switch (t) { case 0x5cc999u: goto L_005cc999; case 0x5cc9bfu: goto L_005cc9bf; case 0x5cc9e6u: goto L_005cc9e6; case 0x5cc9fcu: goto L_005cc9fc; case 0x5cca08u: goto L_005cca08; case 0x5cca2fu: goto L_005cca2f; case 0x5cca25u: goto L_005cca25; case 0x5ccaacu: goto L_005ccaac; case 0x5ccb25u: goto L_005ccb25; case 0x5ccb64u: goto L_005ccb64; case 0x5ccb81u: goto L_005ccb81; case 0x5ccb9eu: goto L_005ccb9e; case 0x5ccc98u: goto L_005ccc98; case 0x5ccbbau: goto L_005ccbba; default: UNSUP(0x005cc992, "jump table entry is not a known target"); } }
L_005cc999:; BB(0x005cc999);
    /* 005cc999: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc99b: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cc9a1: call 0x44a1d2 */ r_esp -= 4; W32(r_esp, 0x5cc9a6u); f_0044a1d2();
    /* 005cc9a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc9a9: mov dword ptr [ecx + 0x3ac], 0 */ W32((u32)(r_ecx+0x3acu), 0x0u);
    /* 005cc9b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc9b5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc9b8: call 0x5cc559 */ r_esp -= 4; W32(r_esp, 0x5cc9bdu); f_005cc559();
    /* 005cc9bd: jmp 0x5cca2f */ goto L_005cca2f;
L_005cc9bf:; BB(0x005cc9bf);
    /* 005cc9bf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc9c2: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005cc9c5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc9c8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005cc9cb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cc9cd: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5cc9d0u); call_ind(t); }
    /* 005cc9d0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc9d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc9d5: call 0x5cc5a5 */ r_esp -= 4; W32(r_esp, 0x5cc9dau); f_005cc5a5();
    /* 005cc9da: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc9dc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc9df: call 0x5cc559 */ r_esp -= 4; W32(r_esp, 0x5cc9e4u); f_005cc559();
    /* 005cc9e4: jmp 0x5cca2f */ goto L_005cca2f;
L_005cc9e6:; BB(0x005cc9e6);
    /* 005cc9e6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc9e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc9eb: call 0x5cc559 */ r_esp -= 4; W32(r_esp, 0x5cc9f0u); f_005cc559();
    /* 005cc9f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc9f2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc9f5: call 0x5cc796 */ r_esp -= 4; W32(r_esp, 0x5cc9fau); f_005cc796();
    /* 005cc9fa: jmp 0x5cca2f */ goto L_005cca2f;
L_005cc9fc:; BB(0x005cc9fc);
    /* 005cc9fc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc9fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca01: call 0x5cc559 */ r_esp -= 4; W32(r_esp, 0x5cca06u); f_005cc559();
    /* 005cca06: jmp 0x5cca2f */ goto L_005cca2f;
L_005cca08:; BB(0x005cca08);
    /* 005cca08: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca0b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cca0e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca11: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cca14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cca16: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cca19u); call_ind(t); }
    /* 005cca19: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005cca1b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca1e: call 0x5cc559 */ r_esp -= 4; W32(r_esp, 0x5cca23u); f_005cc559();
    /* 005cca23: jmp 0x5cca2f */ goto L_005cca2f;
L_005cca25:; BB(0x005cca25);
    /* 005cca25: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cca27: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca2a: call 0x5cc559 */ r_esp -= 4; W32(r_esp, 0x5cca2fu); f_005cc559();
L_005cca2f:; BB(0x005cca2f);
    /* 005cca2f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca32: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cca37u); f_005cd25d();
    /* 005cca37: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cca3a: jle 0x5cca8d */ if ((fZ||fS!=fO)) goto L_005cca8d;
L_005cca3c:; BB(0x005cca3c);
    /* 005cca3c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca3f: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cca44u); f_005cd25d();
    /* 005cca44: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cca47: jge 0x5cca8d */ if ((fS==fO)) goto L_005cca8d;
L_005cca49:; BB(0x005cca49);
    /* 005cca49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cca4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca4e: call 0x5cc586 */ r_esp -= 4; W32(r_esp, 0x5cca53u); f_005cc586();
    /* 005cca53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cca55: jne 0x5cca6e */ if (!fZ) goto L_005cca6e;
L_005cca57:; BB(0x005cca57);
    /* 005cca57: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cca59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca5c: call 0x5cc586 */ r_esp -= 4; W32(r_esp, 0x5cca61u); f_005cc586();
    /* 005cca61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cca63: jne 0x5cca6e */ if (!fZ) goto L_005cca6e;
L_005cca65:; BB(0x005cca65);
    /* 005cca65: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005cca6c: jmp 0x5cca75 */ goto L_005cca75;
L_005cca6e:; BB(0x005cca6e);
    /* 005cca6e: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_005cca75:; BB(0x005cca75);
    /* 005cca75: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cca78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cca79: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca7c: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cca81u); f_005cd326();
    /* 005cca81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cca82: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cca88: call 0x447d8a */ r_esp -= 4; W32(r_esp, 0x5cca8du); f_00447d8a();
L_005cca8d:; BB(0x005cca8d);
    /* 005cca8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca90: call 0x5cc572 */ r_esp -= 4; W32(r_esp, 0x5cca95u); f_005cc572();
    /* 005cca95: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cca98: cmp dword ptr [ebp - 0x24], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005cca9c: ja 0x5ccd7a */ if ((!fC&&!fZ)) goto L_005ccd7a;
L_005ccaa2:; BB(0x005ccaa2);
    /* 005ccaa2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ccaa5: jmp dword ptr [ecx*4 + 0x5ccdb5] */ { u32 t = R32((u32)(r_ecx*4+0x5ccdb5u)); switch (t) { case 0x5cca25u: goto L_005cca25; case 0x5cca2fu: goto L_005cca2f; case 0x5cca08u: goto L_005cca08; case 0x5cc9fcu: goto L_005cc9fc; case 0x5cc9e6u: goto L_005cc9e6; case 0x5cc9bfu: goto L_005cc9bf; case 0x5cc999u: goto L_005cc999; case 0x5ccaacu: goto L_005ccaac; case 0x5ccb25u: goto L_005ccb25; case 0x5ccb64u: goto L_005ccb64; case 0x5ccb81u: goto L_005ccb81; case 0x5ccb9eu: goto L_005ccb9e; case 0x5ccc98u: goto L_005ccc98; case 0x5ccbbau: goto L_005ccbba; default: UNSUP(0x005ccaa5, "jump table entry is not a known target"); } }
L_005ccaac:; BB(0x005ccaac);
    /* 005ccaac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccaaf: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5ccab4u); f_005cd326();
    /* 005ccab4: mov ecx, eax */ r_ecx = r_eax;
    /* 005ccab6: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5ccabbu); f_004259a0();
    /* 005ccabb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccabd: jne 0x5ccac8 */ if (!fZ) goto L_005ccac8;
L_005ccabf:; BB(0x005ccabf);
    /* 005ccabf: mov dword ptr [ebp - 4], 0x3c */ W32((u32)(r_ebp+0xfffffffcu), 0x3cu);
    /* 005ccac6: jmp 0x5ccb08 */ goto L_005ccb08;
L_005ccac8:; BB(0x005ccac8);
    /* 005ccac8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccacb: mov dword ptr [edx + 0x3ac], 1 */ W32((u32)(r_edx+0x3acu), 0x1u);
    /* 005ccad5: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccada: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005ccadd: call 0x40808b */ r_esp -= 4; W32(r_esp, 0x5ccae2u); f_0040808b();
    /* 005ccae2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccae4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccae7: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5ccaecu); f_005cd326();
    /* 005ccaec: add eax, 0x114 */ {  u32 a = r_eax; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ccaf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccaf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccaf5: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5ccafau); f_005cd326();
    /* 005ccafa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005ccafd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ccb00: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ccb02: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ccb05: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5ccb08u); call_ind(t); }
L_005ccb08:; BB(0x005ccb08);
    /* 005ccb08: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb0a: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccb0f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ccb12: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ccb18: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ccb1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccb1d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5ccb20u); call_ind(t); }
    /* 005ccb20: jmp 0x5ccd7a */ goto L_005ccd7a;
L_005ccb25:; BB(0x005ccb25);
    /* 005ccb25: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005ccb2b: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x5ccb30u); f_00448ca3();
    /* 005ccb30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccb32: je 0x5ccb47 */ if (fZ) goto L_005ccb47;
L_005ccb34:; BB(0x005ccb34);
    /* 005ccb34: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccb39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccb3b: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005ccb41: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x5ccb47u); call_ind(t); }
L_005ccb47:; BB(0x005ccb47);
    /* 005ccb47: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb49: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccb4e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ccb51: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ccb57: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ccb5a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccb5c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5ccb5fu); call_ind(t); }
    /* 005ccb5f: jmp 0x5ccd7a */ goto L_005ccd7a;
L_005ccb64:; BB(0x005ccb64);
    /* 005ccb64: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb66: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccb6b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ccb6e: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ccb74: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ccb77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccb79: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5ccb7cu); call_ind(t); }
    /* 005ccb7c: jmp 0x5ccd7a */ goto L_005ccd7a;
L_005ccb81:; BB(0x005ccb81);
    /* 005ccb81: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb83: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccb88: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ccb8b: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ccb91: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ccb94: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccb96: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5ccb99u); call_ind(t); }
    /* 005ccb99: jmp 0x5ccd7a */ goto L_005ccd7a;
L_005ccb9e:; BB(0x005ccb9e);
    /* 005ccb9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccba0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccba2: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccba7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ccbaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccbab: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccbad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccbb0: call 0x5cdd8e */ r_esp -= 4; W32(r_esp, 0x5ccbb5u); f_005cdd8e();
    /* 005ccbb5: jmp 0x5ccd95 */ goto L_005ccd95;
L_005ccbba:; BB(0x005ccbba);
    /* 005ccbba: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccbbc: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ccbc2: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005ccbc5: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccbca: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005ccbcd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ccbcf: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5ccbd2u); call_ind(t); }
    /* 005ccbd2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccbd5: cmp dword ptr [ecx + 0x398], 0 */ {  u32 a = R32((u32)(r_ecx+0x398u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccbdc: jne 0x5ccbf3 */ if (!fZ) goto L_005ccbf3;
L_005ccbde:; BB(0x005ccbde);
    /* 005ccbde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccbe0: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ccbe6: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x5ccbebu); f_0045cd25();
    /* 005ccbeb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ccbee: jmp 0x5ccd7a */ goto L_005ccd7a;
L_005ccbf3:; BB(0x005ccbf3);
    /* 005ccbf3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccbf6: cmp dword ptr [edx + 0x2a0], 0 */ {  u32 a = R32((u32)(r_edx+0x2a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccbfd: jne 0x5ccc39 */ if (!fZ) goto L_005ccc39;
L_005ccbff:; BB(0x005ccbff);
    /* 005ccbff: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc04: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ccc09u); f_0048ab58();
    /* 005ccc09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ccc0c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ccc0f: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccc13: je 0x5ccc26 */ if (fZ) goto L_005ccc26;
L_005ccc15:; BB(0x005ccc15);
    /* 005ccc15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc19: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ccc1c: call 0x5cff75 */ r_esp -= 4; W32(r_esp, 0x5ccc21u); f_005cff75();
    /* 005ccc21: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ccc24: jmp 0x5ccc2d */ goto L_005ccc2d;
L_005ccc26:; BB(0x005ccc26);
    /* 005ccc26: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005ccc2d:; BB(0x005ccc2d);
    /* 005ccc2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccc30: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ccc33: mov dword ptr [eax + 0x2a0], ecx */ W32((u32)(r_eax+0x2a0u), r_ecx);
L_005ccc39:; BB(0x005ccc39);
    /* 005ccc39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc3b: push 0x415 */ { u32 v = 0x415u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc40: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccc43: mov ecx, dword ptr [edx + 0x2a0] */ r_ecx = R32((u32)(r_edx+0x2a0u));
    /* 005ccc49: call 0x5e0461 */ r_esp -= 4; W32(r_esp, 0x5ccc4eu); f_005e0461();
    /* 005ccc4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccc51: mov ecx, dword ptr [eax + 0x2a0] */ r_ecx = R32((u32)(r_eax+0x2a0u));
    /* 005ccc57: call 0x5d0050 */ r_esp -= 4; W32(r_esp, 0x5ccc5cu); f_005d0050();
    /* 005ccc5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc60: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccc63: mov ecx, dword ptr [ecx + 0x2a0] */ r_ecx = R32((u32)(r_ecx+0x2a0u));
    /* 005ccc69: call 0x5d81dc */ r_esp -= 4; W32(r_esp, 0x5ccc6eu); f_005d81dc();
    /* 005ccc6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc70: push 0x155 */ { u32 v = 0x155u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc75: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc77: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccc7a: mov ecx, dword ptr [edx + 0x2a0] */ r_ecx = R32((u32)(r_edx+0x2a0u));
    /* 005ccc80: call 0x5d81bb */ r_esp -= 4; W32(r_esp, 0x5ccc85u); f_005d81bb();
    /* 005ccc85: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccc88: mov ecx, dword ptr [eax + 0x2a0] */ r_ecx = R32((u32)(r_eax+0x2a0u));
    /* 005ccc8e: call 0x5d02b3 */ r_esp -= 4; W32(r_esp, 0x5ccc93u); f_005d02b3();
    /* 005ccc93: jmp 0x5ccd95 */ goto L_005ccd95;
L_005ccc98:; BB(0x005ccc98);
    /* 005ccc98: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ccc9f: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005ccca1: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005ccca7: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cccaa: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cccb0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cccb3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cccb5: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cccb8u); call_ind(t); }
    /* 005cccb8: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cccbf: jmp 0x5cccca */ goto L_005cccca;
L_005cccc1:; BB(0x005cccc1);
    /* 005cccc1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cccc4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cccc7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005cccca:; BB(0x005cccca);
    /* 005cccca: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cccce: jge 0x5ccd48 */ if ((fS==fO)) goto L_005ccd48;
L_005cccd0:; BB(0x005cccd0);
    /* 005cccd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cccd3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cccd6: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cccda: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5cccdfu); f_00425973();
    /* 005cccdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccce1: je 0x5ccd43 */ if (fZ) goto L_005ccd43;
L_005ccce3:; BB(0x005ccce3);
    /* 005ccce3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccce6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccce9: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005ccced: cmp dword ptr [edx + 0x12c], 0 */ {  u32 a = R32((u32)(r_edx+0x12cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cccf4: je 0x5ccd43 */ if (fZ) goto L_005ccd43;
L_005cccf6:; BB(0x005cccf6);
    /* 005cccf6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cccf9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cccfc: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005ccd00: mov ecx, dword ptr [edx + 0x12c] */ r_ecx = R32((u32)(r_edx+0x12cu));
    /* 005ccd06: call 0x5d9690 */ r_esp -= 4; W32(r_esp, 0x5ccd0bu); f_005d9690();
    /* 005ccd0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccd0d: je 0x5ccd43 */ if (fZ) goto L_005ccd43;
L_005ccd0f:; BB(0x005ccd0f);
    /* 005ccd0f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccd13: je 0x5ccd1e */ if (fZ) goto L_005ccd1e;
L_005ccd15:; BB(0x005ccd15);
    /* 005ccd15: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005ccd1c: jmp 0x5ccd29 */ goto L_005ccd29;
L_005ccd1e:; BB(0x005ccd1e);
    /* 005ccd1e: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccd23: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ccd26: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_005ccd29:; BB(0x005ccd29);
    /* 005ccd29: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ccd2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccd2d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccd30: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccd33: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005ccd37: call 0x4257da */ r_esp -= 4; W32(r_esp, 0x5ccd3cu); f_004257da();
    /* 005ccd3c: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005ccd43:; BB(0x005ccd43);
    /* 005ccd43: jmp 0x5cccc1 */ goto L_005cccc1;
L_005ccd48:; BB(0x005ccd48);
    /* 005ccd48: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccd4b: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005ccd4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccd51: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005ccd54: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ccd56: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5ccd59u); call_ind(t); }
    /* 005ccd59: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccd5d: jne 0x5ccd78 */ if (!fZ) goto L_005ccd78;
L_005ccd5f:; BB(0x005ccd5f);
    /* 005ccd5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccd61: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005ccd67: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005ccd6a: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ccd70: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ccd73: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccd75: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5ccd78u); call_ind(t); }
L_005ccd78:; BB(0x005ccd78);
    /* 005ccd78: jmp 0x5ccd95 */ goto L_005ccd95;
L_005ccd7a:; BB(0x005ccd7a);
    /* 005ccd7a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccd7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccd7e: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005ccd84: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005ccd87: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ccd8d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ccd90: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccd92: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5ccd95u); call_ind(t); }
L_005ccd95:; BB(0x005ccd95);
    /* 005ccd95: mov esp, ebp */ r_esp = r_ebp;
    /* 005ccd97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ccd98: ret  */ FN_RET(0x005cc802); r_esp += 4; return;
}

void f_005ccdd1(void) /* FUN_005ccdd1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ccdd1);
    /* 005ccdd1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccdd2: mov ebp, esp */ r_ebp = r_esp;
    /* 005ccdd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccdd5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ccdd8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccddb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ccdde: call 0x5d0371 */ r_esp -= 4; W32(r_esp, 0x5ccde3u); f_005d0371();
    /* 005ccde3: mov esp, ebp */ r_esp = r_ebp;
    /* 005ccde5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ccde6: ret  */ FN_RET(0x005ccdd1); r_esp += 4; return;
}

void f_005ccde7(void) /* FUN_005ccde7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ccde7);
    /* 005ccde7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccde8: mov ebp, esp */ r_ebp = r_esp;
    /* 005ccdea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccdeb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ccdee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccdf1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ccdf4: call 0x5d04cf */ r_esp -= 4; W32(r_esp, 0x5ccdf9u); f_005d04cf();
    /* 005ccdf9: mov esp, ebp */ r_esp = r_ebp;
    /* 005ccdfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ccdfc: ret  */ FN_RET(0x005ccde7); r_esp += 4; return;
}

void f_005ccdfd(void) /* FUN_005ccdfd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ccdfd);
    /* 005ccdfd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccdfe: mov ebp, esp */ r_ebp = r_esp;
    /* 005cce00: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cce03: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005cce06: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005cce0d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005cce0f: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cce14: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cce17: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cce1d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cce20: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cce22: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cce25u); call_ind(t); }
    /* 005cce25: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005cce2c: jmp 0x5cce37 */ goto L_005cce37;
L_005cce2e:; BB(0x005cce2e);
    /* 005cce2e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cce31: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cce34: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005cce37:; BB(0x005cce37);
    /* 005cce37: cmp dword ptr [ebp - 0x1c], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cce3e: jge 0x5ccf95 */ if ((fS==fO)) goto L_005ccf95;
L_005cce44:; BB(0x005cce44);
    /* 005cce44: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cce47: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cce4a: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cce4e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cce51: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cce54: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005cce56: cmp dword ptr [ecx + 0xbc], 0 */ {  u32 a = R32((u32)(r_ecx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cce5d: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005cce60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cce62: je 0x5ccf90 */ if (fZ) goto L_005ccf90;
L_005cce68:; BB(0x005cce68);
    /* 005cce68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cce6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cce6d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cce70: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5cce73u); call_ind(t); }
    /* 005cce73: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005cce7a: jmp 0x5cce85 */ goto L_005cce85;
L_005cce7c:; BB(0x005cce7c);
    /* 005cce7c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cce7f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cce82: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005cce85:; BB(0x005cce85);
    /* 005cce85: cmp dword ptr [ebp - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cce89: jge 0x5ccf90 */ if ((fS==fO)) goto L_005ccf90;
L_005cce8f:; BB(0x005cce8f);
    /* 005cce8f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cce92: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cce95: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cce99: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cce9c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cce9f: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005ccea2: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x5ccea7u); f_00420800();
    /* 005ccea7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005cceaa: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ccead: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cceaf: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cceb2: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x5cceb5u); call_ind(t); }
    /* 005cceb5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cceb8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ccebb: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005ccebe: call 0x420800 */ r_esp -= 4; W32(r_esp, 0x5ccec3u); f_00420800();
    /* 005ccec3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005ccec6: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ccec9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ccecb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ccece: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5cced1u); call_ind(t); }
    /* 005cced1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cced4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cced7: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005cceda: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccedd: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 005ccee1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ccee4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccee7: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cceeb: je 0x5ccf8b */ if (fZ) goto L_005ccf8b;
L_005ccef1:; BB(0x005ccef1);
    /* 005ccef1: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 005ccef8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccefa: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ccf00: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x5ccf05u); f_0045cd25();
    /* 005ccf05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccf08: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005ccf0b: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 005ccf0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccf11: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005ccf14: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccf18: je 0x5ccf72 */ if (fZ) goto L_005ccf72;
L_005ccf1a:; BB(0x005ccf1a);
    /* 005ccf1a: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ccf20: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x5ccf25u); f_0045cb0a();
    /* 005ccf25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccf27: je 0x5ccf72 */ if (fZ) goto L_005ccf72;
L_005ccf29:; BB(0x005ccf29);
    /* 005ccf29: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf2b: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ccf30u); f_0048ab58();
    /* 005ccf30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ccf33: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ccf36: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccf3a: je 0x5ccf5a */ if (fZ) goto L_005ccf5a;
L_005ccf3c:; BB(0x005ccf3c);
    /* 005ccf3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccf3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf40: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ccf43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf44: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccf49: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ccf4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf4d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ccf50: call 0x5df72f */ r_esp -= 4; W32(r_esp, 0x5ccf55u); f_005df72f();
    /* 005ccf55: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005ccf58: jmp 0x5ccf61 */ goto L_005ccf61;
L_005ccf5a:; BB(0x005ccf5a);
    /* 005ccf5a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005ccf61:; BB(0x005ccf61);
    /* 005ccf61: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ccf64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccf68: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005ccf6b: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x5ccf70u); f_005d4df6();
    /* 005ccf70: jmp 0x5ccf8b */ goto L_005ccf8b;
L_005ccf72:; BB(0x005ccf72);
    /* 005ccf72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccf75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf76: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ccf79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf7a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccf7d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005ccf80: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccf83: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005ccf86: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccf88: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5ccf8bu); call_ind(t); }
L_005ccf8b:; BB(0x005ccf8b);
    /* 005ccf8b: jmp 0x5cce7c */ goto L_005cce7c;
L_005ccf90:; BB(0x005ccf90);
    /* 005ccf90: jmp 0x5cce2e */ goto L_005cce2e;
L_005ccf95:; BB(0x005ccf95);
    /* 005ccf95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf97: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccf9c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ccf9f: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ccfa5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ccfa8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccfaa: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5ccfadu); call_ind(t); }
    /* 005ccfad: mov esp, ebp */ r_esp = r_ebp;
    /* 005ccfaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ccfb0: ret  */ FN_RET(0x005ccdfd); r_esp += 4; return;
}

void f_005ccfb1(void) /* FUN_005ccfb1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ccfb1);
    /* 005ccfb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccfb2: mov ebp, esp */ r_ebp = r_esp;
    /* 005ccfb4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ccfb7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ccfba: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005ccfbc: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ccfc1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ccfc4: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ccfca: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ccfcd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccfcf: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5ccfd2u); call_ind(t); }
    /* 005ccfd2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ccfd9: jmp 0x5ccfe4 */ goto L_005ccfe4;
L_005ccfdb:; BB(0x005ccfdb);
    /* 005ccfdb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ccfde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ccfe1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005ccfe4:; BB(0x005ccfe4);
    /* 005ccfe4: cmp dword ptr [ebp - 0x10], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ccfeb: jge 0x5cd04b */ if ((fS==fO)) goto L_005cd04b;
L_005ccfed:; BB(0x005ccfed);
    /* 005ccfed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ccff0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccff3: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005ccff7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ccffa: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cd001: jmp 0x5cd00c */ goto L_005cd00c;
L_005cd003:; BB(0x005cd003);
    /* 005cd003: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd006: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd009: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005cd00c:; BB(0x005cd00c);
    /* 005cd00c: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd010: jge 0x5cd03e */ if ((fS==fO)) goto L_005cd03e;
L_005cd012:; BB(0x005cd012);
    /* 005cd012: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd015: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005cd018: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd01b: mov ecx, dword ptr [eax + edx + 0x6c] */ r_ecx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 005cd01f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd022: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd025: cmp dword ptr [edx + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd029: je 0x5cd03c */ if (fZ) goto L_005cd03c;
L_005cd02b:; BB(0x005cd02b);
    /* 005cd02b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd02e: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005cd031: call 0x5d4e74 */ r_esp -= 4; W32(r_esp, 0x5cd036u); f_005d4e74();
    /* 005cd036: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd038: je 0x5cd03c */ if (fZ) goto L_005cd03c;
L_005cd03a:; BB(0x005cd03a);
    /* 005cd03a: jmp 0x5cd085 */ goto L_005cd085;
L_005cd03c:; BB(0x005cd03c);
    /* 005cd03c: jmp 0x5cd003 */ goto L_005cd003;
L_005cd03e:; BB(0x005cd03e);
    /* 005cd03e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd041: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd043: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd046: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5cd049u); call_ind(t); }
    /* 005cd049: jmp 0x5ccfdb */ goto L_005ccfdb;
L_005cd04b:; BB(0x005cd04b);
    /* 005cd04b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd04d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd050: call 0x5cc559 */ r_esp -= 4; W32(r_esp, 0x5cd055u); f_005cc559();
    /* 005cd055: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd057: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cd05c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cd05f: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cd065: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cd068: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd06a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cd06du); call_ind(t); }
    /* 005cd06d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd06f: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cd074: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cd077: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cd07d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cd080: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd082: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5cd085u); call_ind(t); }
L_005cd085:; BB(0x005cd085);
    /* 005cd085: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd087: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd088: ret  */ FN_RET(0x005ccfb1); r_esp += 4; return;
}

void f_005cd089(void) /* FUN_005cd089 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd089);
    /* 005cd089: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd08a: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd08c: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd08f: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005cd092: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005cd095: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cd09au); f_005cd326();
    /* 005cd09a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005cd09d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd09f: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cd0a4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cd0a7: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cd0ad: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cd0b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd0b2: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cd0b5u); call_ind(t); }
    /* 005cd0b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005cd0bc: jmp 0x5cd0c7 */ goto L_005cd0c7;
L_005cd0be:; BB(0x005cd0be);
    /* 005cd0be: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005cd0c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd0c4: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_005cd0c7:; BB(0x005cd0c7);
    /* 005cd0c7: cmp dword ptr [ebp - 0x34], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd0ce: jge 0x5cd126 */ if ((fS==fO)) goto L_005cd126;
L_005cd0d0:; BB(0x005cd0d0);
    /* 005cd0d0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005cd0d3: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005cd0d6: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cd0da: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005cd0dd: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005cd0e4: jmp 0x5cd0ef */ goto L_005cd0ef;
L_005cd0e6:; BB(0x005cd0e6);
    /* 005cd0e6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cd0e9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd0ec: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_005cd0ef:; BB(0x005cd0ef);
    /* 005cd0ef: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd0f3: jge 0x5cd124 */ if ((fS==fO)) goto L_005cd124;
L_005cd0f5:; BB(0x005cd0f5);
    /* 005cd0f5: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cd0f8: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005cd0fb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cd0fe: mov ecx, dword ptr [eax + edx + 0x6c] */ r_ecx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 005cd102: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd105: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd108: cmp dword ptr [edx + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd10c: je 0x5cd122 */ if (fZ) goto L_005cd122;
L_005cd10e:; BB(0x005cd10e);
    /* 005cd10e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd111: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005cd114: call 0x5d4e74 */ r_esp -= 4; W32(r_esp, 0x5cd119u); f_005d4e74();
    /* 005cd119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd11b: je 0x5cd122 */ if (fZ) goto L_005cd122;
L_005cd11d:; BB(0x005cd11d);
    /* 005cd11d: jmp 0x5cd259 */ goto L_005cd259;
L_005cd122:; BB(0x005cd122);
    /* 005cd122: jmp 0x5cd0e6 */ goto L_005cd0e6;
L_005cd124:; BB(0x005cd124);
    /* 005cd124: jmp 0x5cd0be */ goto L_005cd0be;
L_005cd126:; BB(0x005cd126);
    /* 005cd126: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd128: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cd12e: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cd131: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cd137: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cd13a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd13c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cd13fu); call_ind(t); }
    /* 005cd13f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd142: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd149: jne 0x5cd193 */ if (!fZ) goto L_005cd193;
L_005cd14b:; BB(0x005cd14b);
    /* 005cd14b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd14e: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x5cd153u); f_004259f1();
    /* 005cd153: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd154: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005cd157: call 0x5ceb1a */ r_esp -= 4; W32(r_esp, 0x5cd15cu); f_005ceb1a();
    /* 005cd15c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd15e: jne 0x5cd193 */ if (!fZ) goto L_005cd193;
L_005cd160:; BB(0x005cd160);
    /* 005cd160: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd163: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x5cd168u); f_004259f1();
    /* 005cd168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd169: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005cd16c: call 0x5ceb92 */ r_esp -= 4; W32(r_esp, 0x5cd171u); f_005ceb92();
    /* 005cd171: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd173: jne 0x5cd193 */ if (!fZ) goto L_005cd193;
L_005cd175:; BB(0x005cd175);
    /* 005cd175: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd177: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cd17d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cd180: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cd186: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cd189: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd18b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5cd18eu); call_ind(t); }
    /* 005cd18e: jmp 0x5cd259 */ goto L_005cd259;
L_005cd193:; BB(0x005cd193);
    /* 005cd193: push 0x698fd0 */ { u32 v = 0x698fd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd198: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005cd19b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd19c: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5cd1a1u); f_00624510();
    /* 005cd1a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd1a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd1a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd1a8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd1ab: add ecx, 0x124 */ {  u32 a = r_ecx; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd1b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd1b2: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 005cd1b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd1b6: call 0x4298d8 */ r_esp -= 4; W32(r_esp, 0x5cd1bbu); f_004298d8();
    /* 005cd1bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd1be: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd1c1: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd1c8: jne 0x5cd1dd */ if (!fZ) goto L_005cd1dd;
L_005cd1ca:; BB(0x005cd1ca);
    /* 005cd1ca: push 0x698fd4 */ { u32 v = 0x698fd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd1cf: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 005cd1d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd1d3: call 0x624510 */ r_esp -= 4; W32(r_esp, 0x5cd1d8u); f_00624510();
    /* 005cd1d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd1db: jmp 0x5cd20e */ goto L_005cd20e;
L_005cd1dd:; BB(0x005cd1dd);
    /* 005cd1dd: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd1e0: cmp dword ptr [edx + 0x124], 0 */ {  u32 a = R32((u32)(r_edx+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd1e7: jle 0x5cd1f2 */ if ((fZ||fS!=fO)) goto L_005cd1f2;
L_005cd1e9:; BB(0x005cd1e9);
    /* 005cd1e9: mov dword ptr [ebp - 0x5c], 0x698fdc */ W32((u32)(r_ebp+0xffffffa4u), 0x698fdcu);
    /* 005cd1f0: jmp 0x5cd1f9 */ goto L_005cd1f9;
L_005cd1f2:; BB(0x005cd1f2);
    /* 005cd1f2: mov dword ptr [ebp - 0x5c], 0x698fe0 */ W32((u32)(r_ebp+0xffffffa4u), 0x698fe0u);
L_005cd1f9:; BB(0x005cd1f9);
    /* 005cd1f9: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005cd1fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd1fd: push 0x698fe8 */ { u32 v = 0x698fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd202: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 005cd205: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd206: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5cd20bu); f_00624050();
    /* 005cd20b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cd20e:; BB(0x005cd20e);
    /* 005cd20e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd211: cmp dword ptr [edx + 0x124], 0 */ {  u32 a = R32((u32)(r_edx+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd218: jle 0x5cd234 */ if ((fZ||fS!=fO)) goto L_005cd234;
L_005cd21a:; BB(0x005cd21a);
    /* 005cd21a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd21d: mov cx, word ptr [eax + 0x3c8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x3c8u))) & 0xffffu);
    /* 005cd224: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005cd228: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd22b: mov word ptr [edx + 0x3c8], cx */ W16((u32)(r_edx+0x3c8u), (u16)r_ecx);
    /* 005cd232: jmp 0x5cd240 */ goto L_005cd240;
L_005cd234:; BB(0x005cd234);
    /* 005cd234: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd237: mov word ptr [eax + 0x3c8], 0 */ W16((u32)(r_eax+0x3c8u), 0x0u);
L_005cd240:; BB(0x005cd240);
    /* 005cd240: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005cd243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd244: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 005cd247: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd248: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cd24d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cd250: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd251: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd254: call 0x4256dd */ r_esp -= 4; W32(r_esp, 0x5cd259u); f_004256dd();
L_005cd259:; BB(0x005cd259);
    /* 005cd259: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd25b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd25c: ret  */ FN_RET(0x005cd089); r_esp += 4; return;
}

void f_005cd25d(void) /* FUN_005cd25d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd25d);
    /* 005cd25d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd25e: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd260: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd261: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd264: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd267: mov eax, dword ptr [eax + 0x3b0] */ r_eax = R32((u32)(r_eax+0x3b0u));
    /* 005cd26d: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd26f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd270: ret  */ FN_RET(0x005cd25d); r_esp += 4; return;
}

void f_005cd271(void) /* FUN_005cd271 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd271);
    /* 005cd271: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd272: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd274: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd277: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cd27a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd27c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd27f: call 0x5cc586 */ r_esp -= 4; W32(r_esp, 0x5cd284u); f_005cc586();
    /* 005cd284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd286: jne 0x5cd292 */ if (!fZ) goto L_005cd292;
L_005cd288:; BB(0x005cd288);
    /* 005cd288: mov eax, 1 */ r_eax = 0x1u;
    /* 005cd28d: jmp 0x5cd322 */ goto L_005cd322;
L_005cd292:; BB(0x005cd292);
    /* 005cd292: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd299: jmp 0x5cd2a4 */ goto L_005cd2a4;
L_005cd29b:; BB(0x005cd29b);
    /* 005cd29b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd29e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd2a1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cd2a4:; BB(0x005cd2a4);
    /* 005cd2a4: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd2a8: jge 0x5cd320 */ if ((fS==fO)) goto L_005cd320;
L_005cd2aa:; BB(0x005cd2aa);
    /* 005cd2aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd2ad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd2b0: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cd2b4: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5cd2b9u); f_00425973();
    /* 005cd2b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd2bb: jne 0x5cd2cb */ if (!fZ) goto L_005cd2cb;
L_005cd2bd:; BB(0x005cd2bd);
    /* 005cd2bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd2c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd2c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd2c4: call 0x5cd3fa */ r_esp -= 4; W32(r_esp, 0x5cd2c9u); f_005cd3fa();
    /* 005cd2c9: jmp 0x5cd29b */ goto L_005cd29b;
L_005cd2cb:; BB(0x005cd2cb);
    /* 005cd2cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd2ce: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd2d1: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cd2d5: call 0x425a05 */ r_esp -= 4; W32(r_esp, 0x5cd2dau); f_00425a05();
    /* 005cd2da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd2dc: jne 0x5cd314 */ if (!fZ) goto L_005cd314;
L_005cd2de:; BB(0x005cd2de);
    /* 005cd2de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd2e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd2e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd2e5: call 0x5cea61 */ r_esp -= 4; W32(r_esp, 0x5cd2eau); f_005cea61();
    /* 005cd2ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd2ec: jne 0x5cd314 */ if (!fZ) goto L_005cd314;
L_005cd2ee:; BB(0x005cd2ee);
    /* 005cd2ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd2f1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd2f4: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cd2f8: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5cd2fdu); f_004259a0();
    /* 005cd2fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd2ff: je 0x5cd31b */ if (fZ) goto L_005cd31b;
L_005cd301:; BB(0x005cd301);
    /* 005cd301: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd304: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd307: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cd30b: cmp dword ptr [edx + 0x104], 0 */ {  u32 a = R32((u32)(r_edx+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd312: jne 0x5cd31b */ if (!fZ) goto L_005cd31b;
L_005cd314:; BB(0x005cd314);
    /* 005cd314: mov eax, 1 */ r_eax = 0x1u;
    /* 005cd319: jmp 0x5cd322 */ goto L_005cd322;
L_005cd31b:; BB(0x005cd31b);
    /* 005cd31b: jmp 0x5cd29b */ goto L_005cd29b;
L_005cd320:; BB(0x005cd320);
    /* 005cd320: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cd322:; BB(0x005cd322);
    /* 005cd322: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd324: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd325: ret  */ FN_RET(0x005cd271); r_esp += 4; return;
}

void f_005cd326(void) /* FUN_005cd326 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd326);
    /* 005cd326: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd327: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd329: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd32a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd32d: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd334: je 0x5cd34a */ if (fZ) goto L_005cd34a;
L_005cd336:; BB(0x005cd336);
    /* 005cd336: mov eax, dword ptr [0x6fc388] */ r_eax = R32((u32)(0x6fc388u));
    /* 005cd33b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cd33e: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005cd341: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd344: mov eax, dword ptr [eax + edx*4 + 0x10] */ r_eax = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cd348: jmp 0x5cd389 */ goto L_005cd389;
L_005cd34a:; BB(0x005cd34a);
    /* 005cd34a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd34d: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cd352u); f_005cd25d();
    /* 005cd352: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd355: jle 0x5cd387 */ if ((fZ||fS!=fO)) goto L_005cd387;
L_005cd357:; BB(0x005cd357);
    /* 005cd357: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd35a: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cd35fu); f_005cd25d();
    /* 005cd35f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd362: jge 0x5cd387 */ if ((fS==fO)) goto L_005cd387;
L_005cd364:; BB(0x005cd364);
    /* 005cd364: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd367: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cd36cu); f_005cd25d();
    /* 005cd36c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd36f: cmp dword ptr [ecx + eax*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd374: je 0x5cd387 */ if (fZ) goto L_005cd387;
L_005cd376:; BB(0x005cd376);
    /* 005cd376: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd379: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cd37eu); f_005cd25d();
    /* 005cd37e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd381: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 005cd385: jmp 0x5cd389 */ goto L_005cd389;
L_005cd387:; BB(0x005cd387);
    /* 005cd387: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cd389:; BB(0x005cd389);
    /* 005cd389: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd38b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd38c: ret  */ FN_RET(0x005cd326); r_esp += 4; return;
}

void f_005cd38d(void) /* FUN_005cd38d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd38d);
    /* 005cd38d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd38e: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd390: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd393: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cd396: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cd39d: jmp 0x5cd3a8 */ goto L_005cd3a8;
L_005cd39f:; BB(0x005cd39f);
    /* 005cd39f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd3a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd3a5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005cd3a8:; BB(0x005cd3a8);
    /* 005cd3a8: cmp dword ptr [ebp - 0xc], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd3af: jge 0x5cd3f2 */ if ((fS==fO)) goto L_005cd3f2;
L_005cd3b1:; BB(0x005cd3b1);
    /* 005cd3b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd3b4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd3b7: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cd3bb: call 0x427ecb */ r_esp -= 4; W32(r_esp, 0x5cd3c0u); f_00427ecb();
    /* 005cd3c0: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd3c3: jne 0x5cd3f0 */ if (!fZ) goto L_005cd3f0;
L_005cd3c5:; BB(0x005cd3c5);
    /* 005cd3c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd3c7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd3ca: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cd3cfu); f_005cd25d();
    /* 005cd3cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd3d0: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005cd3d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd3d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd3d7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd3da: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cd3de: call 0x42827c */ r_esp -= 4; W32(r_esp, 0x5cd3e3u); f_0042827c();
    /* 005cd3e3: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd3e7: je 0x5cd3f0 */ if (fZ) goto L_005cd3f0;
L_005cd3e9:; BB(0x005cd3e9);
    /* 005cd3e9: mov eax, 1 */ r_eax = 0x1u;
    /* 005cd3ee: jmp 0x5cd3f4 */ goto L_005cd3f4;
L_005cd3f0:; BB(0x005cd3f0);
    /* 005cd3f0: jmp 0x5cd39f */ goto L_005cd39f;
L_005cd3f2:; BB(0x005cd3f2);
    /* 005cd3f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cd3f4:; BB(0x005cd3f4);
    /* 005cd3f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd3f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd3f7: ret 4 */ FN_RET(0x005cd38d); r_esp += 8; return;
}

void f_005cd3fa(void) /* FUN_005cd3fa */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd3fa);
    /* 005cd3fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd3fb: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd3fd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd400: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cd403: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cd40a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd411: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cd418: jmp 0x5cd423 */ goto L_005cd423;
L_005cd41a:; BB(0x005cd41a);
    /* 005cd41a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd41d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd420: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005cd423:; BB(0x005cd423);
    /* 005cd423: cmp dword ptr [ebp - 0xc], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd42a: jge 0x5cd458 */ if ((fS==fO)) goto L_005cd458;
L_005cd42c:; BB(0x005cd42c);
    /* 005cd42c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cd42f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd430: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd433: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd436: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cd43a: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x5cd43fu); f_004280b4();
    /* 005cd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd441: je 0x5cd456 */ if (fZ) goto L_005cd456;
L_005cd443:; BB(0x005cd443);
    /* 005cd443: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cd446: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd447: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd44a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd44d: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cd451: call 0x428686 */ r_esp -= 4; W32(r_esp, 0x5cd456u); f_00428686();
L_005cd456:; BB(0x005cd456);
    /* 005cd456: jmp 0x5cd41a */ goto L_005cd41a;
L_005cd458:; BB(0x005cd458);
    /* 005cd458: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd45a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd45b: ret 4 */ FN_RET(0x005cd3fa); r_esp += 8; return;
}

void f_005cd45e(void) /* FUN_005cd45e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd45e);
    /* 005cd45e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd45f: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd461: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd462: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd465: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd469: jne 0x5cd475 */ if (!fZ) goto L_005cd475;
L_005cd46b:; BB(0x005cd46b);
    /* 005cd46b: mov eax, 6 */ r_eax = 0x6u;
    /* 005cd470: jmp 0x5cd54a */ goto L_005cd54a;
L_005cd475:; BB(0x005cd475);
    /* 005cd475: cmp dword ptr [ebp + 8], 0x25 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd479: jne 0x5cd485 */ if (!fZ) goto L_005cd485;
L_005cd47b:; BB(0x005cd47b);
    /* 005cd47b: mov eax, 7 */ r_eax = 0x7u;
    /* 005cd480: jmp 0x5cd54a */ goto L_005cd54a;
L_005cd485:; BB(0x005cd485);
    /* 005cd485: cmp dword ptr [ebp + 8], 0x9d */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd48c: jne 0x5cd498 */ if (!fZ) goto L_005cd498;
L_005cd48e:; BB(0x005cd48e);
    /* 005cd48e: mov eax, 9 */ r_eax = 0x9u;
    /* 005cd493: jmp 0x5cd54a */ goto L_005cd54a;
L_005cd498:; BB(0x005cd498);
    /* 005cd498: cmp dword ptr [ebp + 8], 0x85 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd49f: jne 0x5cd4ab */ if (!fZ) goto L_005cd4ab;
L_005cd4a1:; BB(0x005cd4a1);
    /* 005cd4a1: mov eax, 0xc */ r_eax = 0xcu;
    /* 005cd4a6: jmp 0x5cd54a */ goto L_005cd54a;
L_005cd4ab:; BB(0x005cd4ab);
    /* 005cd4ab: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd4af: jle 0x5cd4c1 */ if ((fZ||fS!=fO)) goto L_005cd4c1;
L_005cd4b1:; BB(0x005cd4b1);
    /* 005cd4b1: cmp dword ptr [ebp + 8], 0x25 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd4b5: jge 0x5cd4c1 */ if ((fS==fO)) goto L_005cd4c1;
L_005cd4b7:; BB(0x005cd4b7);
    /* 005cd4b7: mov eax, 1 */ r_eax = 0x1u;
    /* 005cd4bc: jmp 0x5cd54a */ goto L_005cd54a;
L_005cd4c1:; BB(0x005cd4c1);
    /* 005cd4c1: cmp dword ptr [ebp + 8], 0x25 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd4c5: jle 0x5cd4d4 */ if ((fZ||fS!=fO)) goto L_005cd4d4;
L_005cd4c7:; BB(0x005cd4c7);
    /* 005cd4c7: cmp dword ptr [ebp + 8], 0x63 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd4cb: jge 0x5cd4d4 */ if ((fS==fO)) goto L_005cd4d4;
L_005cd4cd:; BB(0x005cd4cd);
    /* 005cd4cd: mov eax, 8 */ r_eax = 0x8u;
    /* 005cd4d2: jmp 0x5cd54a */ goto L_005cd54a;
L_005cd4d4:; BB(0x005cd4d4);
    /* 005cd4d4: cmp dword ptr [ebp + 8], 0x62 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd4d8: jle 0x5cd4e7 */ if ((fZ||fS!=fO)) goto L_005cd4e7;
L_005cd4da:; BB(0x005cd4da);
    /* 005cd4da: cmp dword ptr [ebp + 8], 0x6f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd4de: jge 0x5cd4e7 */ if ((fS==fO)) goto L_005cd4e7;
L_005cd4e0:; BB(0x005cd4e0);
    /* 005cd4e0: mov eax, 0xa */ r_eax = 0xau;
    /* 005cd4e5: jmp 0x5cd54a */ goto L_005cd54a;
L_005cd4e7:; BB(0x005cd4e7);
    /* 005cd4e7: cmp dword ptr [ebp + 8], 0x6e */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd4eb: jle 0x5cd4fd */ if ((fZ||fS!=fO)) goto L_005cd4fd;
L_005cd4ed:; BB(0x005cd4ed);
    /* 005cd4ed: cmp dword ptr [ebp + 8], 0x85 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd4f4: jge 0x5cd4fd */ if ((fS==fO)) goto L_005cd4fd;
L_005cd4f6:; BB(0x005cd4f6);
    /* 005cd4f6: mov eax, 0xb */ r_eax = 0xbu;
    /* 005cd4fb: jmp 0x5cd54a */ goto L_005cd54a;
L_005cd4fd:; BB(0x005cd4fd);
    /* 005cd4fd: cmp dword ptr [ebp + 8], 0x85 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd504: jle 0x5cd516 */ if ((fZ||fS!=fO)) goto L_005cd516;
L_005cd506:; BB(0x005cd506);
    /* 005cd506: cmp dword ptr [ebp + 8], 0x91 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x91u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd50d: jge 0x5cd516 */ if ((fS==fO)) goto L_005cd516;
L_005cd50f:; BB(0x005cd50f);
    /* 005cd50f: mov eax, 0xd */ r_eax = 0xdu;
    /* 005cd514: jmp 0x5cd54a */ goto L_005cd54a;
L_005cd516:; BB(0x005cd516);
    /* 005cd516: cmp dword ptr [ebp + 8], 0x90 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd51d: jle 0x5cd52f */ if ((fZ||fS!=fO)) goto L_005cd52f;
L_005cd51f:; BB(0x005cd51f);
    /* 005cd51f: cmp dword ptr [ebp + 8], 0x97 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x97u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd526: jge 0x5cd52f */ if ((fS==fO)) goto L_005cd52f;
L_005cd528:; BB(0x005cd528);
    /* 005cd528: mov eax, 0xe */ r_eax = 0xeu;
    /* 005cd52d: jmp 0x5cd54a */ goto L_005cd54a;
L_005cd52f:; BB(0x005cd52f);
    /* 005cd52f: cmp dword ptr [ebp + 8], 0x96 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd536: jle 0x5cd548 */ if ((fZ||fS!=fO)) goto L_005cd548;
L_005cd538:; BB(0x005cd538);
    /* 005cd538: cmp dword ptr [ebp + 8], 0x9d */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd53f: jge 0x5cd548 */ if ((fS==fO)) goto L_005cd548;
L_005cd541:; BB(0x005cd541);
    /* 005cd541: mov eax, 0xf */ r_eax = 0xfu;
    /* 005cd546: jmp 0x5cd54a */ goto L_005cd54a;
L_005cd548:; BB(0x005cd548);
    /* 005cd548: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cd54a:; BB(0x005cd54a);
    /* 005cd54a: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd54c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd54d: ret 4 */ FN_RET(0x005cd45e); r_esp += 8; return;
}

void f_005cd550(void) /* FUN_005cd550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd550);
    /* 005cd550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd551: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd553: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd556: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cd559: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 005cd55c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd55d: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005cd560: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd561: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cd567: call 0x45d949 */ r_esp -= 4; W32(r_esp, 0x5cd56cu); f_0045d949();
    /* 005cd56c: cmp dword ptr [ebp - 4], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd573: jne 0x5cd57c */ if (!fZ) goto L_005cd57c;
L_005cd575:; BB(0x005cd575);
    /* 005cd575: mov eax, 1 */ r_eax = 0x1u;
    /* 005cd57a: jmp 0x5cd57e */ goto L_005cd57e;
L_005cd57c:; BB(0x005cd57c);
    /* 005cd57c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cd57e:; BB(0x005cd57e);
    /* 005cd57e: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd580: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd581: ret  */ FN_RET(0x005cd550); r_esp += 4; return;
}

void f_005cd582(void) /* FUN_005cd582 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd582);
    /* 005cd582: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd583: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd585: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd588: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cd589: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cd58c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd58f: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cd594u); f_005cd326();
    /* 005cd594: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cd597: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cd59e: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cd5a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd5a5: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cd5ab: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5cd5aeu); call_ind(t); }
    /* 005cd5ae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cd5b1: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cd5b7: call 0x44897d */ r_esp -= 4; W32(r_esp, 0x5cd5bcu); f_0044897d();
    /* 005cd5bc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cd5bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd5c2: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 005cd5c8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005cd5cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd5ce: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005cd5d1: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x5cd5d6u); f_00426819();
    /* 005cd5d6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cd5d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd5dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd5de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd5e1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cd5e4u); call_ind(t); }
    /* 005cd5e4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cd5e7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd5ea: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd5ed: jge 0x5cd5f7 */ if ((fS==fO)) goto L_005cd5f7;
L_005cd5ef:; BB(0x005cd5ef);
    /* 005cd5ef: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd5f2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005cd5f5: jmp 0x5cd5fd */ goto L_005cd5fd;
L_005cd5f7:; BB(0x005cd5f7);
    /* 005cd5f7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd5fa: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_005cd5fd:; BB(0x005cd5fd);
    /* 005cd5fd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cd600: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cd603: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd606: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cd609: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd60c: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd60f: jle 0x5cd618 */ if ((fZ||fS!=fO)) goto L_005cd618;
L_005cd611:; BB(0x005cd611);
    /* 005cd611: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cd613: jmp 0x5cd7c7 */ goto L_005cd7c7;
L_005cd618:; BB(0x005cd618);
    /* 005cd618: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cd61b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd61c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd61f: call 0x5cd45e */ r_esp -= 4; W32(r_esp, 0x5cd624u); f_005cd45e();
    /* 005cd624: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005cd627: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd62a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd62d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005cd630: cmp dword ptr [ebp - 0x28], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005cd634: ja 0x5cd70a */ if ((!fC&&!fZ)) goto L_005cd70a;
L_005cd63a:; BB(0x005cd63a);
    /* 005cd63a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd63d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005cd63f: mov dl, byte ptr [eax + 0x5cd7ea] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x5cd7eau))) & 0xffu);
    /* 005cd645: jmp dword ptr [edx*4 + 0x5cd7ce] */ { u32 t = R32((u32)(r_edx*4+0x5cd7ceu)); switch (t) { case 0x5cd68bu: goto L_005cd68b; case 0x5cd64cu: goto L_005cd64c; case 0x5cd6b0u: goto L_005cd6b0; case 0x5cd6deu: goto L_005cd6de; case 0x5cd70au: goto L_005cd70a; default: UNSUP(0x005cd645, "jump table entry is not a known target"); } }
L_005cd64c:; BB(0x005cd64c);
    /* 005cd64c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd64e: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cd653u); f_0060ee31();
    /* 005cd653: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd656: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd659: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cd65c: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd65f: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cd661: imul esi, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cd665: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd667: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cd66cu); f_0060ee31();
    /* 005cd66c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd66f: mov ecx, eax */ r_ecx = r_eax;
    /* 005cd671: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd674: mov eax, esi */ r_eax = r_esi;
    /* 005cd676: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cd677: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cd677, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cd677, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cd679: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cd67c: imul edx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cd680: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cd684: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd686: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cd689: jmp 0x5cd70a */ goto L_005cd70a;
L_005cd68b:; BB(0x005cd68b);
    /* 005cd68b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd68e: imul esi, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cd692: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005cd694: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cd699u); f_0060ee31();
    /* 005cd699: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd69c: mov ecx, eax */ r_ecx = r_eax;
    /* 005cd69e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd6a1: mov eax, esi */ r_eax = r_esi;
    /* 005cd6a3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cd6a4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cd6a4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cd6a4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cd6a6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd6a9: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cd6ab: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005cd6ae: jmp 0x5cd70a */ goto L_005cd70a;
L_005cd6b0:; BB(0x005cd6b0);
    /* 005cd6b0: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd6b3: imul esi, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cd6b7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005cd6b9: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cd6beu); f_0060ee31();
    /* 005cd6be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd6c1: mov ecx, eax */ r_ecx = r_eax;
    /* 005cd6c3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd6c6: mov eax, esi */ r_eax = r_esi;
    /* 005cd6c8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cd6c9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cd6c9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cd6c9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cd6cb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd6ce: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cd6d0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005cd6d3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd6d6: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cd6d9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cd6dc: jmp 0x5cd70a */ goto L_005cd70a;
L_005cd6de:; BB(0x005cd6de);
    /* 005cd6de: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd6e1: imul esi, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cd6e5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005cd6e7: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cd6ecu); f_0060ee31();
    /* 005cd6ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd6ef: mov ecx, eax */ r_ecx = r_eax;
    /* 005cd6f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd6f4: mov eax, esi */ r_eax = r_esi;
    /* 005cd6f6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cd6f7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cd6f7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cd6f7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cd6f9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd6fc: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cd6fe: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005cd701: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd704: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005cd707: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005cd70a:; BB(0x005cd70a);
    /* 005cd70a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd70d: call 0x5cd550 */ r_esp -= 4; W32(r_esp, 0x5cd712u); f_005cd550();
    /* 005cd712: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd714: je 0x5cd72c */ if (fZ) goto L_005cd72c;
L_005cd716:; BB(0x005cd716);
    /* 005cd716: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005cd718: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cd71du); f_0060ee31();
    /* 005cd71d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd720: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd723: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd726: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cd729: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005cd72c:; BB(0x005cd72c);
    /* 005cd72c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd72f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cd731: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd734: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5cd737u); call_ind(t); }
    /* 005cd737: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd739: je 0x5cd792 */ if (fZ) goto L_005cd792;
L_005cd73b:; BB(0x005cd73b);
    /* 005cd73b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd73e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd740: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd743: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cd746u); call_ind(t); }
    /* 005cd746: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd748: je 0x5cd792 */ if (fZ) goto L_005cd792;
L_005cd74a:; BB(0x005cd74a);
    /* 005cd74a: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 005cd74d: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 005cd750: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd753: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd755: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd758: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x5cd75bu); call_ind(t); }
    /* 005cd75b: fmul dword ptr [ebp - 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd4u));
    /* 005cd75e: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5cd763u); f_00624144();
    /* 005cd763: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd766: jge 0x5cd770 */ if ((fS==fO)) goto L_005cd770;
L_005cd768:; BB(0x005cd768);
    /* 005cd768: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd76b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cd76e: jmp 0x5cd78c */ goto L_005cd78c;
L_005cd770:; BB(0x005cd770);
    /* 005cd770: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 005cd773: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 005cd776: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd779: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd77b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd77e: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x5cd781u); call_ind(t); }
    /* 005cd781: fmul dword ptr [ebp - 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffccu));
    /* 005cd784: call 0x624144 */ r_esp -= 4; W32(r_esp, 0x5cd789u); f_00624144();
    /* 005cd789: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_005cd78c:; BB(0x005cd78c);
    /* 005cd78c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cd78f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005cd792:; BB(0x005cd792);
    /* 005cd792: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd795: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd798: jge 0x5cd7a2 */ if ((fS==fO)) goto L_005cd7a2;
L_005cd79a:; BB(0x005cd79a);
    /* 005cd79a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd79d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005cd7a0: jmp 0x5cd7be */ goto L_005cd7be;
L_005cd7a2:; BB(0x005cd7a2);
    /* 005cd7a2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd7a5: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd7a8: jge 0x5cd7b2 */ if ((fS==fO)) goto L_005cd7b2;
L_005cd7aa:; BB(0x005cd7aa);
    /* 005cd7aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd7ad: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005cd7b0: jmp 0x5cd7b8 */ goto L_005cd7b8;
L_005cd7b2:; BB(0x005cd7b2);
    /* 005cd7b2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd7b5: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
L_005cd7b8:; BB(0x005cd7b8);
    /* 005cd7b8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cd7bb: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_005cd7be:; BB(0x005cd7be);
    /* 005cd7be: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005cd7c1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cd7c4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_005cd7c7:; BB(0x005cd7c7);
    /* 005cd7c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cd7c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd7cb: ret 4 */ FN_RET(0x005cd582); r_esp += 8; return;
}

void f_005cd7f9(void) /* FUN_005cd7f9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd7f9);
    /* 005cd7f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7fa: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd7fc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd7ff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cd802: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd809: jmp 0x5cd814 */ goto L_005cd814;
L_005cd80b:; BB(0x005cd80b);
    /* 005cd80b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd80e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd811: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cd814:; BB(0x005cd814);
    /* 005cd814: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd818: jge 0x5cd841 */ if ((fS==fO)) goto L_005cd841;
L_005cd81a:; BB(0x005cd81a);
    /* 005cd81a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd81d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd820: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd825: je 0x5cd83f */ if (fZ) goto L_005cd83f;
L_005cd827:; BB(0x005cd827);
    /* 005cd827: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd82a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd82d: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cd831: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5cd836u); f_004259a0();
    /* 005cd836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd838: je 0x5cd83f */ if (fZ) goto L_005cd83f;
L_005cd83a:; BB(0x005cd83a);
    /* 005cd83a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd83d: jmp 0x5cd844 */ goto L_005cd844;
L_005cd83f:; BB(0x005cd83f);
    /* 005cd83f: jmp 0x5cd80b */ goto L_005cd80b;
L_005cd841:; BB(0x005cd841);
    /* 005cd841: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005cd844:; BB(0x005cd844);
    /* 005cd844: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd846: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd847: ret  */ FN_RET(0x005cd7f9); r_esp += 4; return;
}

void f_005cd848(void) /* FUN_005cd848 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd848);
    /* 005cd848: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd849: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd84b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd84e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cd851: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005cd858: jmp 0x5cd863 */ goto L_005cd863;
L_005cd85a:; BB(0x005cd85a);
    /* 005cd85a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd85d: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cd860: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cd863:; BB(0x005cd863);
    /* 005cd863: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd867: jl 0x5cd890 */ if ((fS!=fO)) goto L_005cd890;
L_005cd869:; BB(0x005cd869);
    /* 005cd869: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd86c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd86f: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd874: je 0x5cd88e */ if (fZ) goto L_005cd88e;
L_005cd876:; BB(0x005cd876);
    /* 005cd876: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd879: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd87c: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cd880: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5cd885u); f_004259a0();
    /* 005cd885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd887: je 0x5cd88e */ if (fZ) goto L_005cd88e;
L_005cd889:; BB(0x005cd889);
    /* 005cd889: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd88c: jmp 0x5cd893 */ goto L_005cd893;
L_005cd88e:; BB(0x005cd88e);
    /* 005cd88e: jmp 0x5cd85a */ goto L_005cd85a;
L_005cd890:; BB(0x005cd890);
    /* 005cd890: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005cd893:; BB(0x005cd893);
    /* 005cd893: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd895: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd896: ret  */ FN_RET(0x005cd848); r_esp += 4; return;
}

void f_005cd897(void) /* FUN_005cd897 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd897);
    /* 005cd897: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd898: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd89a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd89d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cd8a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd8a3: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cd8a8u); f_005cd326();
    /* 005cd8a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cd8ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd8ae: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5cd8b3u); f_004259a0();
    /* 005cd8b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd8b5: je 0x5cd90d */ if (fZ) goto L_005cd90d;
L_005cd8b7:; BB(0x005cd8b7);
    /* 005cd8b7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd8ba: cmp dword ptr [eax + 0x29c], 0 */ {  u32 a = R32((u32)(r_eax+0x29cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd8c1: jne 0x5cd8fd */ if (!fZ) goto L_005cd8fd;
L_005cd8c3:; BB(0x005cd8c3);
    /* 005cd8c3: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8c8: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cd8cdu); f_0048ab58();
    /* 005cd8cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd8d0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cd8d3: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd8d7: je 0x5cd8ea */ if (fZ) goto L_005cd8ea;
L_005cd8d9:; BB(0x005cd8d9);
    /* 005cd8d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd8e0: call 0x5cf9a0 */ r_esp -= 4; W32(r_esp, 0x5cd8e5u); f_005cf9a0();
    /* 005cd8e5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cd8e8: jmp 0x5cd8f1 */ goto L_005cd8f1;
L_005cd8ea:; BB(0x005cd8ea);
    /* 005cd8ea: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005cd8f1:; BB(0x005cd8f1);
    /* 005cd8f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd8f4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd8f7: mov dword ptr [ecx + 0x29c], edx */ W32((u32)(r_ecx+0x29cu), r_edx);
L_005cd8fd:; BB(0x005cd8fd);
    /* 005cd8fd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd900: mov ecx, dword ptr [eax + 0x29c] */ r_ecx = R32((u32)(r_eax+0x29cu));
    /* 005cd906: call 0x5cfcac */ r_esp -= 4; W32(r_esp, 0x5cd90bu); f_005cfcac();
    /* 005cd90b: jmp 0x5cd915 */ goto L_005cd915;
L_005cd90d:; BB(0x005cd90d);
    /* 005cd90d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd910: call 0x5ce387 */ r_esp -= 4; W32(r_esp, 0x5cd915u); f_005ce387();
L_005cd915:; BB(0x005cd915);
    /* 005cd915: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd917: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd918: ret  */ FN_RET(0x005cd897); r_esp += 4; return;
}

void f_005cd919(void) /* FUN_005cd919 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd919);
    /* 005cd919: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd91a: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd91c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd91f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005cd922: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cd929: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd930: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd933: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cd938u); f_005cd326();
    /* 005cd938: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cd93b: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cd940: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd942: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cd948: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5cd94bu); call_ind(t); }
    /* 005cd94b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cd94e: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cd954: call 0x44897d */ r_esp -= 4; W32(r_esp, 0x5cd959u); f_0044897d();
    /* 005cd959: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cd95c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd95f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cd962: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x5cd967u); f_00426819();
    /* 005cd967: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cd96a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cd96d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd96e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd971: call 0x5cd582 */ r_esp -= 4; W32(r_esp, 0x5cd976u); f_005cd582();
    /* 005cd976: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cd979: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd97d: je 0x5cd99d */ if (fZ) goto L_005cd99d;
L_005cd97f:; BB(0x005cd97f);
    /* 005cd97f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cd982: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd985: jle 0x5cd99d */ if ((fZ||fS!=fO)) goto L_005cd99d;
L_005cd987:; BB(0x005cd987);
    /* 005cd987: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cd98a: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd98d: jge 0x5cd99d */ if ((fS==fO)) goto L_005cd99d;
L_005cd98f:; BB(0x005cd98f);
    /* 005cd98f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cd992: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd995: jle 0x5cd99d */ if ((fZ||fS!=fO)) goto L_005cd99d;
L_005cd997:; BB(0x005cd997);
    /* 005cd997: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cd99a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005cd99d:; BB(0x005cd99d);
    /* 005cd99d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cd9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9a1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cd9a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd9a8: call 0x5cd45e */ r_esp -= 4; W32(r_esp, 0x5cd9adu); f_005cd45e();
    /* 005cd9ad: mov edx, dword ptr [eax*4 + 0x698e08] */ r_edx = R32((u32)(r_eax*4+0x698e08u));
    /* 005cd9b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9b5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cd9b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd9bc: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005cd9bf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cd9c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9c3: push 0x698ff4 */ { u32 v = 0x698ff4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9c8: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5cd9cdu); f_0060fc40();
    /* 005cd9cd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd9d0: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005cd9d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd9d7: call 0x425bfe */ r_esp -= 4; W32(r_esp, 0x5cd9dcu); f_00425bfe();
    /* 005cd9dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9e0: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005cd9e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9e6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cd9e9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd9ec: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005cd9f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cd9f3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd9f6: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cd9fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cd9fc: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5cd9ffu); call_ind(t); }
    /* 005cd9ff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cda02: mov esp, ebp */ r_esp = r_ebp;
    /* 005cda04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cda05: ret 8 */ FN_RET(0x005cd919); r_esp += 12; return;
}

void f_005cda08(void) /* FUN_005cda08 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cda08);
    /* 005cda08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cda09: mov ebp, esp */ r_ebp = r_esp;
    /* 005cda0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cda0e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005cda10: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cda16: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cda1a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cda1d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cda20: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cda22: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cda28: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 005cda2c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005cda2f: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005cda32: sub eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cda35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cda36: ret  */ FN_RET(0x005cda08); r_esp += 4; return;
}

void f_005cda37(void) /* FUN_005cda37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cda37);
    /* 005cda37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cda38: mov ebp, esp */ r_ebp = r_esp;
    /* 005cda3a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cda3d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cda40: mov dword ptr [ebp - 0xc], 0x7fffffff */ W32((u32)(r_ebp+0xfffffff4u), 0x7fffffffu);
    /* 005cda47: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cda4e: jmp 0x5cda59 */ goto L_005cda59;
L_005cda50:; BB(0x005cda50);
    /* 005cda50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda53: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cda56: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cda59:; BB(0x005cda59);
    /* 005cda59: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cda5d: jge 0x5cdaaf */ if ((fS==fO)) goto L_005cdaaf;
L_005cda5f:; BB(0x005cda5f);
    /* 005cda5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda62: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cda65: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cda6a: je 0x5cdaad */ if (fZ) goto L_005cdaad;
L_005cda6c:; BB(0x005cda6c);
    /* 005cda6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda6f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cda72: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cda76: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5cda7bu); f_00425973();
    /* 005cda7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cda7d: je 0x5cdaad */ if (fZ) goto L_005cdaad;
L_005cda7f:; BB(0x005cda7f);
    /* 005cda7f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda82: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cda85: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cda89: mov edx, dword ptr [ecx + 0x124] */ r_edx = R32((u32)(r_ecx+0x124u));
    /* 005cda8f: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cda92: jge 0x5cdaad */ if ((fS==fO)) goto L_005cdaad;
L_005cda94:; BB(0x005cda94);
    /* 005cda94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda97: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cda9a: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cda9e: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005cdaa4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cdaa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdaaa: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005cdaad:; BB(0x005cdaad);
    /* 005cdaad: jmp 0x5cda50 */ goto L_005cda50;
L_005cdaaf:; BB(0x005cdaaf);
    /* 005cdaaf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdab2: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdab4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdab5: ret  */ FN_RET(0x005cda37); r_esp += 4; return;
}

void f_005cdab6(void) /* FUN_005cdab6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdab6);
    /* 005cdab6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdab7: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdab9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdabc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cdabf: mov dword ptr [ebp - 0xc], 0x7fffffff */ W32((u32)(r_ebp+0xfffffff4u), 0x7fffffffu);
    /* 005cdac6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cdacd: jmp 0x5cdad8 */ goto L_005cdad8;
L_005cdacf:; BB(0x005cdacf);
    /* 005cdacf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdad2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cdad5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cdad8:; BB(0x005cdad8);
    /* 005cdad8: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdadc: jge 0x5cdb2e */ if ((fS==fO)) goto L_005cdb2e;
L_005cdade:; BB(0x005cdade);
    /* 005cdade: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdae1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdae4: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdae9: je 0x5cdb2c */ if (fZ) goto L_005cdb2c;
L_005cdaeb:; BB(0x005cdaeb);
    /* 005cdaeb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdaee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdaf1: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cdaf5: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5cdafau); f_00425973();
    /* 005cdafa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdafc: je 0x5cdb2c */ if (fZ) goto L_005cdb2c;
L_005cdafe:; BB(0x005cdafe);
    /* 005cdafe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdb01: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdb04: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cdb08: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005cdb0b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005cdb0e: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdb11: jge 0x5cdb2c */ if ((fS==fO)) goto L_005cdb2c;
L_005cdb13:; BB(0x005cdb13);
    /* 005cdb13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdb16: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdb19: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cdb1d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cdb20: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005cdb23: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005cdb26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdb29: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005cdb2c:; BB(0x005cdb2c);
    /* 005cdb2c: jmp 0x5cdacf */ goto L_005cdacf;
L_005cdb2e:; BB(0x005cdb2e);
    /* 005cdb2e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdb31: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdb33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdb34: ret  */ FN_RET(0x005cdab6); r_esp += 4; return;
}

void f_005cdb35(void) /* FUN_005cdb35 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdb35);
    /* 005cdb35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb36: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdb38: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdb3b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cdb3e: mov dword ptr [ebp - 4], 0x80000000 */ W32((u32)(r_ebp+0xfffffffcu), 0x80000000u);
    /* 005cdb45: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cdb4c: jmp 0x5cdb57 */ goto L_005cdb57;
L_005cdb4e:; BB(0x005cdb4e);
    /* 005cdb4e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdb51: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cdb54: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005cdb57:; BB(0x005cdb57);
    /* 005cdb57: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdb5b: jge 0x5cdbad */ if ((fS==fO)) goto L_005cdbad;
L_005cdb5d:; BB(0x005cdb5d);
    /* 005cdb5d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdb60: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdb63: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdb68: je 0x5cdbab */ if (fZ) goto L_005cdbab;
L_005cdb6a:; BB(0x005cdb6a);
    /* 005cdb6a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdb6d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdb70: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cdb74: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5cdb79u); f_00425973();
    /* 005cdb79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdb7b: je 0x5cdbab */ if (fZ) goto L_005cdbab;
L_005cdb7d:; BB(0x005cdb7d);
    /* 005cdb7d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdb80: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdb83: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cdb87: mov edx, dword ptr [ecx + 0x124] */ r_edx = R32((u32)(r_ecx+0x124u));
    /* 005cdb8d: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdb90: jle 0x5cdbab */ if ((fZ||fS!=fO)) goto L_005cdbab;
L_005cdb92:; BB(0x005cdb92);
    /* 005cdb92: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdb95: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdb98: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cdb9c: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005cdba2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cdba5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdba8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005cdbab:; BB(0x005cdbab);
    /* 005cdbab: jmp 0x5cdb4e */ goto L_005cdb4e;
L_005cdbad:; BB(0x005cdbad);
    /* 005cdbad: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cdbb0: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdbb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdbb3: ret  */ FN_RET(0x005cdb35); r_esp += 4; return;
}

void f_005cdbb4(void) /* FUN_005cdbb4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdbb4);
    /* 005cdbb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdbb5: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdbb7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdbba: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cdbbd: mov dword ptr [ebp - 4], 0x80000000 */ W32((u32)(r_ebp+0xfffffffcu), 0x80000000u);
    /* 005cdbc4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cdbcb: jmp 0x5cdbd6 */ goto L_005cdbd6;
L_005cdbcd:; BB(0x005cdbcd);
    /* 005cdbcd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdbd0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cdbd3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005cdbd6:; BB(0x005cdbd6);
    /* 005cdbd6: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdbda: jge 0x5cdc2c */ if ((fS==fO)) goto L_005cdc2c;
L_005cdbdc:; BB(0x005cdbdc);
    /* 005cdbdc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdbdf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdbe2: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdbe7: je 0x5cdc2a */ if (fZ) goto L_005cdc2a;
L_005cdbe9:; BB(0x005cdbe9);
    /* 005cdbe9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdbec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdbef: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cdbf3: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5cdbf8u); f_00425973();
    /* 005cdbf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdbfa: je 0x5cdc2a */ if (fZ) goto L_005cdc2a;
L_005cdbfc:; BB(0x005cdbfc);
    /* 005cdbfc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdbff: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdc02: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cdc06: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005cdc09: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005cdc0c: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdc0f: jle 0x5cdc2a */ if ((fZ||fS!=fO)) goto L_005cdc2a;
L_005cdc11:; BB(0x005cdc11);
    /* 005cdc11: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdc14: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdc17: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cdc1b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cdc1e: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005cdc21: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005cdc24: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdc27: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005cdc2a:; BB(0x005cdc2a);
    /* 005cdc2a: jmp 0x5cdbcd */ goto L_005cdbcd;
L_005cdc2c:; BB(0x005cdc2c);
    /* 005cdc2c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cdc2f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdc31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdc32: ret  */ FN_RET(0x005cdbb4); r_esp += 4; return;
}

void f_005cdc33(void) /* FUN_005cdc33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdc33);
    /* 005cdc33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc34: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdc36: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdc39: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cdc3c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc3e: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cdc43u); f_0060ee31();
    /* 005cdc43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdc46: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cdc49: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdc4c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cdc4f:; BB(0x005cdc4f);
    /* 005cdc4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdc52: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cdc55: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cdc56: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cdc58: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cdc5a: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005cdc5d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cdc5f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cdc61: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cdc64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdc67: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cdc6a: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdc6f: je 0x5cdca3 */ if (fZ) goto L_005cdca3;
L_005cdc71:; BB(0x005cdc71);
    /* 005cdc71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdc74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cdc77: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cdc7b: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5cdc80u); f_00425973();
    /* 005cdc80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdc82: je 0x5cdca3 */ if (fZ) goto L_005cdca3;
L_005cdc84:; BB(0x005cdc84);
    /* 005cdc84: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdc87: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cdc8a: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cdc8e: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5cdc93u); f_004259a0();
    /* 005cdc93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdc95: je 0x5cdca3 */ if (fZ) goto L_005cdca3;
L_005cdc97:; BB(0x005cdc97);
    /* 005cdc97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdc9a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cdc9d: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cdca1: jmp 0x5cdcad */ goto L_005cdcad;
L_005cdca3:; BB(0x005cdca3);
    /* 005cdca3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdca6: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdca9: jne 0x5cdc4f */ if (!fZ) goto L_005cdc4f;
L_005cdcab:; BB(0x005cdcab);
    /* 005cdcab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cdcad:; BB(0x005cdcad);
    /* 005cdcad: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdcaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdcb0: ret  */ FN_RET(0x005cdc33); r_esp += 4; return;
}

void f_005cdcb1(void) /* FUN_005cdcb1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdcb1);
    /* 005cdcb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcb2: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdcb4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdcb7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cdcba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cdcc1: jmp 0x5cdccc */ goto L_005cdccc;
L_005cdcc3:; BB(0x005cdcc3);
    /* 005cdcc3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdcc6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cdcc9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cdccc:; BB(0x005cdccc);
    /* 005cdccc: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdcd0: jge 0x5cdd1c */ if ((fS==fO)) goto L_005cdd1c;
L_005cdcd2:; BB(0x005cdcd2);
    /* 005cdcd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdcd5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cdcd8: movsx eax, byte ptr [edx + ecx*4 + 0x3b4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx*4+0x3b4u));
    /* 005cdce0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdce2: je 0x5cdced */ if (fZ) goto L_005cdced;
L_005cdce4:; BB(0x005cdce4);
    /* 005cdce4: mov dword ptr [ebp - 0xc], 0x6fc0d4 */ W32((u32)(r_ebp+0xfffffff4u), 0x6fc0d4u);
    /* 005cdceb: jmp 0x5cdcf4 */ goto L_005cdcf4;
L_005cdced:; BB(0x005cdced);
    /* 005cdced: mov dword ptr [ebp - 0xc], 0x699010 */ W32((u32)(r_ebp+0xfffffff4u), 0x699010u);
L_005cdcf4:; BB(0x005cdcf4);
    /* 005cdcf4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdcf7: mov edx, dword ptr [ecx*4 + 0x698e50] */ r_edx = R32((u32)(r_ecx*4+0x698e50u));
    /* 005cdcfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cdd02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd03: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cdd06: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005cdd09: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cdd0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd0d: push 0x699018 */ { u32 v = 0x699018u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd12: call 0x60fc40 */ r_esp -= 4; W32(r_esp, 0x5cdd17u); f_0060fc40();
    /* 005cdd17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdd1a: jmp 0x5cdcc3 */ goto L_005cdcc3;
L_005cdd1c:; BB(0x005cdd1c);
    /* 005cdd1c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdd1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdd1f: ret 4 */ FN_RET(0x005cdcb1); r_esp += 8; return;
}

void f_005cdd22(void) /* FUN_005cdd22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdd22);
    /* 005cdd22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd23: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdd25: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdd28: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cdd2b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cdd2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cdd32: call 0x5cdcb1 */ r_esp -= 4; W32(r_esp, 0x5cdd37u); f_005cdcb1();
    /* 005cdd37: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd39: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cdd3eu); f_0060ee31();
    /* 005cdd3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdd41: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cdd44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdd47: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cdd4a:; BB(0x005cdd4a);
    /* 005cdd4a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdd4d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cdd50: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cdd51: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005cdd56: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cdd56, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cdd56, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cdd58: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005cdd5b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdd5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cdd61: movsx ecx, byte ptr [eax + edx*4 + 0x3b4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx*4+0x3b4u));
    /* 005cdd69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdd6b: je 0x5cdd7d */ if (fZ) goto L_005cdd7d;
L_005cdd6d:; BB(0x005cdd6d);
    /* 005cdd6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdd70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cdd73: movsx eax, word ptr [eax + edx*4 + 0x3b6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*4+0x3b6u));
    /* 005cdd7b: jmp 0x5cdd88 */ goto L_005cdd88;
L_005cdd7d:; BB(0x005cdd7d);
    /* 005cdd7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdd80: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdd83: jne 0x5cdd4a */ if (!fZ) goto L_005cdd4a;
L_005cdd85:; BB(0x005cdd85);
    /* 005cdd85: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005cdd88:; BB(0x005cdd88);
    /* 005cdd88: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdd8b: ret 4 */ FN_RET(0x005cdd22); r_esp += 8; return;
}

void f_005cdd8e(void) /* FUN_005cdd8e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdd8e);
    /* 005cdd8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd8f: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdd91: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdd94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd95: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005cdd98: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005cdd9f: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 005cdda6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cddad: mov dword ptr [ebp - 0x40], 0xffffffff */ W32((u32)(r_ebp+0xffffffc0u), 0xffffffffu);
    /* 005cddb4: mov dword ptr [ebp - 0x3c], 0xffffffff */ W32((u32)(r_ebp+0xffffffc4u), 0xffffffffu);
    /* 005cddbb: mov dword ptr [ebp - 0x38], 0xffffffff */ W32((u32)(r_ebp+0xffffffc8u), 0xffffffffu);
    /* 005cddc2: mov dword ptr [ebp - 0x34], 0xffffffff */ W32((u32)(r_ebp+0xffffffccu), 0xffffffffu);
    /* 005cddc9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cddd0: mov dword ptr [ebp - 0xc], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff4u), 0x3ff00000u);
    /* 005cddd7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005cddde: mov dword ptr [ebp - 0x24], 0x3fe00000 */ W32((u32)(r_ebp+0xffffffdcu), 0x3fe00000u);
    /* 005cdde5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005cddec: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005cddef: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cddf4u); f_005cd326();
    /* 005cddf4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cddf7: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005cddfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cddfb: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005cddfe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cddff: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cde05: call 0x45d949 */ r_esp -= 4; W32(r_esp, 0x5cde0au); f_0045d949();
    /* 005cde0a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cde0d: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cde10: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005cde13: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cde16: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cde19: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cde1c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005cde23: jmp 0x5cde2e */ goto L_005cde2e;
L_005cde25:; BB(0x005cde25);
    /* 005cde25: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cde28: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cde2b: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_005cde2e:; BB(0x005cde2e);
    /* 005cde2e: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cde32: jge 0x5cde95 */ if ((fS==fO)) goto L_005cde95;
L_005cde34:; BB(0x005cde34);
    /* 005cde34: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cde37: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005cde3a: cmp dword ptr [eax + edx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cde3f: je 0x5cde93 */ if (fZ) goto L_005cde93;
L_005cde41:; BB(0x005cde41);
    /* 005cde41: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cde44: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005cde47: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cde4b: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5cde50u); f_00425973();
    /* 005cde50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cde52: je 0x5cde93 */ if (fZ) goto L_005cde93;
L_005cde54:; BB(0x005cde54);
    /* 005cde54: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cde57: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005cde5a: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cde5e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005cde61: call 0x42087c */ r_esp -= 4; W32(r_esp, 0x5cde66u); f_0042087c();
    /* 005cde66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cde68: jne 0x5cde93 */ if (!fZ) goto L_005cde93;
L_005cde6a:; BB(0x005cde6a);
    /* 005cde6a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cde6d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005cde70: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cde74: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005cde77: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x5cde7cu); f_00426819();
    /* 005cde7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cde7e: je 0x5cde93 */ if (fZ) goto L_005cde93;
L_005cde80:; BB(0x005cde80);
    /* 005cde80: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cde83: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cde86: mov dword ptr [ebp + eax*4 - 0x3c], ecx */ W32((u32)(r_ebp+r_eax*4+0xffffffc4u), r_ecx);
    /* 005cde8a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cde8d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cde90: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_005cde93:; BB(0x005cde93);
    /* 005cde93: jmp 0x5cde25 */ goto L_005cde25;
L_005cde95:; BB(0x005cde95);
    /* 005cde95: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cde99: jne 0x5cdec4 */ if (!fZ) goto L_005cdec4;
L_005cde9b:; BB(0x005cde9b);
    /* 005cde9b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cde9f: je 0x5cdebf */ if (fZ) goto L_005cdebf;
L_005cdea1:; BB(0x005cdea1);
    /* 005cdea1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005cdea4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdea5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cdea8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cdeaa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cdead: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cdeb0u); call_ind(t); }
    /* 005cdeb0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005cdeb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdeb4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cdeb7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cdeb9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cdebc: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5cdebfu); call_ind(t); }
L_005cdebf:; BB(0x005cdebf);
    /* 005cdebf: jmp 0x5ce370 */ goto L_005ce370;
L_005cdec4:; BB(0x005cdec4);
    /* 005cdec4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cdec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdec8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cdecdu); f_0060ee31();
    /* 005cdecd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cded0: mov ecx, dword ptr [ebp + eax*4 - 0x3c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffc4u));
    /* 005cded4: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005cded7: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cdedb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cdede: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 005cdee2: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005cdee5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005cdee8: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005cdeeb: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005cdeee: cmp dword ptr [ebp - 0x54], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005cdef2: ja 0x5ce2ed */ if ((!fC&&!fZ)) goto L_005ce2ed;
L_005cdef8:; BB(0x005cdef8);
    /* 005cdef8: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005cdefb: jmp dword ptr [eax*4 + 0x5ce377] */ { u32 t = R32((u32)(r_eax*4+0x5ce377u)); switch (t) { case 0x5cdf02u: goto L_005cdf02; case 0x5ce07cu: goto L_005ce07c; case 0x5ce0a5u: goto L_005ce0a5; case 0x5ce262u: goto L_005ce262; default: UNSUP(0x005cdefb, "jump table entry is not a known target"); } }
L_005cdf02:; BB(0x005cdf02);
    /* 005cdf02: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cdf09: mov dword ptr [ebp - 0xc], 0x3fe00000 */ W32((u32)(r_ebp+0xfffffff4u), 0x3fe00000u);
    /* 005cdf10: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005cdf13: call 0x5cdc33 */ r_esp -= 4; W32(r_esp, 0x5cdf18u); f_005cdc33();
    /* 005cdf18: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005cdf1b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cdf1e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cdf21: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cdf27: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x5cdf2cu); f_00448ca3();
    /* 005cdf2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdf2e: je 0x5ce039 */ if (fZ) goto L_005ce039;
L_005cdf34:; BB(0x005cdf34);
    /* 005cdf34: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf36: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cdf3bu); f_0060ee31();
    /* 005cdf3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdf3e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdf41: jle 0x5ce039 */ if ((fZ||fS!=fO)) goto L_005ce039;
L_005cdf47:; BB(0x005cdf47);
    /* 005cdf47: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdf4b: je 0x5cdfc3 */ if (fZ) goto L_005cdfc3;
L_005cdf4d:; BB(0x005cdf4d);
    /* 005cdf4d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005cdf50: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cdf52: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005cdf55: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5cdf58u); call_ind(t); }
    /* 005cdf58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdf5a: je 0x5cdf88 */ if (fZ) goto L_005cdf88;
L_005cdf5c:; BB(0x005cdf5c);
    /* 005cdf5c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005cdf5f: cmp dword ptr [ecx + 0x124], 0 */ {  u32 a = R32((u32)(r_ecx+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdf66: jle 0x5cdf88 */ if ((fZ||fS!=fO)) goto L_005cdf88;
L_005cdf68:; BB(0x005cdf68);
    /* 005cdf68: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cdf6f: mov dword ptr [ebp - 0xc], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff4u), 0x3ff00000u);
    /* 005cdf76: mov dword ptr [ebp - 0x4c], 0x142 */ W32((u32)(r_ebp+0xffffffb4u), 0x142u);
    /* 005cdf7d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005cdf80: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005cdf83: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005cdf88:; BB(0x005cdf88);
    /* 005cdf88: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005cdf8b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cdf8d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005cdf90: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cdf93u); call_ind(t); }
    /* 005cdf93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdf95: je 0x5cdfc3 */ if (fZ) goto L_005cdfc3;
L_005cdf97:; BB(0x005cdf97);
    /* 005cdf97: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005cdf9a: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdfa1: jge 0x5cdfc3 */ if ((fS==fO)) goto L_005cdfc3;
L_005cdfa3:; BB(0x005cdfa3);
    /* 005cdfa3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cdfaa: mov dword ptr [ebp - 0xc], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff4u), 0x3ff00000u);
    /* 005cdfb1: mov dword ptr [ebp - 0x4c], 0x144 */ W32((u32)(r_ebp+0xffffffb4u), 0x144u);
    /* 005cdfb8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005cdfbb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cdfbe: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005cdfc3:; BB(0x005cdfc3);
    /* 005cdfc3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cdfc6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cdfc8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cdfcb: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5cdfceu); call_ind(t); }
    /* 005cdfce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdfd0: je 0x5cdffe */ if (fZ) goto L_005cdffe;
L_005cdfd2:; BB(0x005cdfd2);
    /* 005cdfd2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cdfd5: cmp dword ptr [ecx + 0x124], 0 */ {  u32 a = R32((u32)(r_ecx+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdfdc: jle 0x5cdffe */ if ((fZ||fS!=fO)) goto L_005cdffe;
L_005cdfde:; BB(0x005cdfde);
    /* 005cdfde: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cdfe5: mov dword ptr [ebp - 0xc], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff4u), 0x3ff00000u);
    /* 005cdfec: mov dword ptr [ebp - 0x4c], 0x141 */ W32((u32)(r_ebp+0xffffffb4u), 0x141u);
    /* 005cdff3: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005cdff6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005cdff9: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005cdffe:; BB(0x005cdffe);
    /* 005cdffe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ce001: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ce003: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ce006: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5ce009u); call_ind(t); }
    /* 005ce009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce00b: je 0x5ce039 */ if (fZ) goto L_005ce039;
L_005ce00d:; BB(0x005ce00d);
    /* 005ce00d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ce010: cmp dword ptr [eax + 0x124], 0 */ {  u32 a = R32((u32)(r_eax+0x124u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce017: jge 0x5ce039 */ if ((fS==fO)) goto L_005ce039;
L_005ce019:; BB(0x005ce019);
    /* 005ce019: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ce020: mov dword ptr [ebp - 0xc], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff4u), 0x3ff00000u);
    /* 005ce027: mov dword ptr [ebp - 0x4c], 0x143 */ W32((u32)(r_ebp+0xffffffb4u), 0x143u);
    /* 005ce02e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce031: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ce034: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce039:; BB(0x005ce039);
    /* 005ce039: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce03d: je 0x5ce05d */ if (fZ) goto L_005ce05d;
L_005ce03f:; BB(0x005ce03f);
    /* 005ce03f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ce042: call 0x5cb13b */ r_esp -= 4; W32(r_esp, 0x5ce047u); f_005cb13b();
    /* 005ce047: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce049: je 0x5ce05d */ if (fZ) goto L_005ce05d;
L_005ce04b:; BB(0x005ce04b);
    /* 005ce04b: mov dword ptr [ebp - 0x4c], 0x150 */ W32((u32)(r_ebp+0xffffffb4u), 0x150u);
    /* 005ce052: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce055: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ce058: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce05d:; BB(0x005ce05d);
    /* 005ce05d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ce060: call 0x5cb13b */ r_esp -= 4; W32(r_esp, 0x5ce065u); f_005cb13b();
    /* 005ce065: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce067: je 0x5ce07c */ if (fZ) goto L_005ce07c;
L_005ce069:; BB(0x005ce069);
    /* 005ce069: mov dword ptr [ebp - 0x4c], 0x14f */ W32((u32)(r_ebp+0xffffffb4u), 0x14fu);
    /* 005ce070: mov dword ptr [ebp - 4], 0x154 */ W32((u32)(r_ebp+0xfffffffcu), 0x154u);
    /* 005ce077: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce07c:; BB(0x005ce07c);
    /* 005ce07c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce07f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ce082: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005ce088: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x5ce08du); f_00448ca3();
    /* 005ce08d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce08f: jne 0x5ce0a0 */ if (!fZ) goto L_005ce0a0;
L_005ce091:; BB(0x005ce091);
    /* 005ce091: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce094: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce095: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce098: call 0x5cdd22 */ r_esp -= 4; W32(r_esp, 0x5ce09du); f_005cdd22();
    /* 005ce09d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_005ce0a0:; BB(0x005ce0a0);
    /* 005ce0a0: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce0a5:; BB(0x005ce0a5);
    /* 005ce0a5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ce0ac: mov dword ptr [ebp - 0xc], 0x3fe80000 */ W32((u32)(r_ebp+0xfffffff4u), 0x3fe80000u);
    /* 005ce0b3: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce0b6: call 0x5cdc33 */ r_esp -= 4; W32(r_esp, 0x5ce0bbu); f_005cdc33();
    /* 005ce0bb: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ce0be: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce0c1: call 0x5cdb35 */ r_esp -= 4; W32(r_esp, 0x5ce0c6u); f_005cdb35();
    /* 005ce0c6: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce0c9: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 005ce0cd: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 005ce0d3: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce0d6: jle 0x5ce150 */ if ((fZ||fS!=fO)) goto L_005ce150;
L_005ce0d8:; BB(0x005ce0d8);
    /* 005ce0d8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce0db: call 0x5cdb35 */ r_esp -= 4; W32(r_esp, 0x5ce0e0u); f_005cdb35();
    /* 005ce0e0: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce0e3: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 005ce0e7: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 005ce0ed: cmp ecx, dword ptr [ebp - 0x48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce0f0: jle 0x5ce100 */ if ((fZ||fS!=fO)) goto L_005ce100;
L_005ce0f2:; BB(0x005ce0f2);
    /* 005ce0f2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ce0f9: mov dword ptr [ebp - 0xc], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff4u), 0x3ff00000u);
L_005ce100:; BB(0x005ce100);
    /* 005ce100: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce103: call 0x5cdb35 */ r_esp -= 4; W32(r_esp, 0x5ce108u); f_005cdb35();
    /* 005ce108: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce10b: mov ecx, dword ptr [edx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 005ce10f: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5ce114u); f_004259a0();
    /* 005ce114: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce116: je 0x5ce12b */ if (fZ) goto L_005ce12b;
L_005ce118:; BB(0x005ce118);
    /* 005ce118: mov dword ptr [ebp - 0x4c], 0x13c */ W32((u32)(r_ebp+0xffffffb4u), 0x13cu);
    /* 005ce11f: mov dword ptr [ebp - 4], 0x153 */ W32((u32)(r_ebp+0xfffffffcu), 0x153u);
    /* 005ce126: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce12b:; BB(0x005ce12b);
    /* 005ce12b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce12e: call 0x5cdb35 */ r_esp -= 4; W32(r_esp, 0x5ce133u); f_005cdb35();
    /* 005ce133: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce136: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005ce13a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005ce13d: mov dword ptr [ebp - 0x4c], 0x13b */ W32((u32)(r_ebp+0xffffffb4u), 0x13bu);
    /* 005ce144: mov dword ptr [ebp - 4], 0x152 */ W32((u32)(r_ebp+0xfffffffcu), 0x152u);
    /* 005ce14b: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce150:; BB(0x005ce150);
    /* 005ce150: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce153: call 0x5cda37 */ r_esp -= 4; W32(r_esp, 0x5ce158u); f_005cda37();
    /* 005ce158: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce15b: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005ce15f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce162: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ce164: cmp dword ptr [edx + 0x124], eax */ {  u32 a = R32((u32)(r_edx+0x124u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce16a: jge 0x5ce1ff */ if ((fS==fO)) goto L_005ce1ff;
L_005ce170:; BB(0x005ce170);
    /* 005ce170: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ce173: call 0x4259f1 */ r_esp -= 4; W32(r_esp, 0x5ce178u); f_004259f1();
    /* 005ce178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce179: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce17c: call 0x5ceb1a */ r_esp -= 4; W32(r_esp, 0x5ce181u); f_005ceb1a();
    /* 005ce181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce183: jne 0x5ce1ff */ if (!fZ) goto L_005ce1ff;
L_005ce185:; BB(0x005ce185);
    /* 005ce185: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce188: call 0x5cdb35 */ r_esp -= 4; W32(r_esp, 0x5ce18du); f_005cdb35();
    /* 005ce18d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce190: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005ce194: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce197: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ce199: cmp dword ptr [edx + 0x124], eax */ {  u32 a = R32((u32)(r_edx+0x124u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce19f: jge 0x5ce1af */ if ((fS==fO)) goto L_005ce1af;
L_005ce1a1:; BB(0x005ce1a1);
    /* 005ce1a1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ce1a8: mov dword ptr [ebp - 0xc], 0x3ff00000 */ W32((u32)(r_ebp+0xfffffff4u), 0x3ff00000u);
L_005ce1af:; BB(0x005ce1af);
    /* 005ce1af: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce1b2: call 0x5cda37 */ r_esp -= 4; W32(r_esp, 0x5ce1b7u); f_005cda37();
    /* 005ce1b7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce1ba: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005ce1be: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5ce1c3u); f_004259a0();
    /* 005ce1c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce1c5: je 0x5ce1da */ if (fZ) goto L_005ce1da;
L_005ce1c7:; BB(0x005ce1c7);
    /* 005ce1c7: mov dword ptr [ebp - 0x4c], 0x13e */ W32((u32)(r_ebp+0xffffffb4u), 0x13eu);
    /* 005ce1ce: mov dword ptr [ebp - 4], 0x155 */ W32((u32)(r_ebp+0xfffffffcu), 0x155u);
    /* 005ce1d5: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce1da:; BB(0x005ce1da);
    /* 005ce1da: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce1dd: call 0x5cda37 */ r_esp -= 4; W32(r_esp, 0x5ce1e2u); f_005cda37();
    /* 005ce1e2: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce1e5: mov eax, dword ptr [edx + eax*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 005ce1e9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ce1ec: mov dword ptr [ebp - 0x4c], 0x13d */ W32((u32)(r_ebp+0xffffffb4u), 0x13du);
    /* 005ce1f3: mov dword ptr [ebp - 4], 0x154 */ W32((u32)(r_ebp+0xfffffffcu), 0x154u);
    /* 005ce1fa: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce1ff:; BB(0x005ce1ff);
    /* 005ce1ff: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce203: je 0x5ce25d */ if (fZ) goto L_005ce25d;
L_005ce205:; BB(0x005ce205);
    /* 005ce205: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ce208: movsx edx, word ptr [ecx + 0x3c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x3c8u));
    /* 005ce20f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce212: jle 0x5ce226 */ if ((fZ||fS!=fO)) goto L_005ce226;
L_005ce214:; BB(0x005ce214);
    /* 005ce214: mov dword ptr [ebp - 0x4c], 0x140 */ W32((u32)(r_ebp+0xffffffb4u), 0x140u);
    /* 005ce21b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce21e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ce221: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce226:; BB(0x005ce226);
    /* 005ce226: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ce229: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005ce22c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ce22f: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ce232: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ce233: mov esi, 0x64 */ r_esi = 0x64u;
    /* 005ce238: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x005ce238, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005ce238, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005ce23a: cmp dword ptr [ecx + 0xc], eax */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce23d: jge 0x5ce25d */ if ((fS==fO)) goto L_005ce25d;
L_005ce23f:; BB(0x005ce23f);
    /* 005ce23f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ce242: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ce245: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce249: jle 0x5ce25d */ if ((fZ||fS!=fO)) goto L_005ce25d;
L_005ce24b:; BB(0x005ce24b);
    /* 005ce24b: mov dword ptr [ebp - 0x4c], 0x13f */ W32((u32)(r_ebp+0xffffffb4u), 0x13fu);
    /* 005ce252: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce255: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ce258: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce25d:; BB(0x005ce25d);
    /* 005ce25d: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce262:; BB(0x005ce262);
    /* 005ce262: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005ce268: call 0x4490ac */ r_esp -= 4; W32(r_esp, 0x5ce26du); f_004490ac();
    /* 005ce26d: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce270: mov dword ptr [edx + 0x38c], eax */ W32((u32)(r_edx+0x38cu), r_eax);
    /* 005ce276: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce279: cmp dword ptr [eax + 0x38c], 0 */ {  u32 a = R32((u32)(r_eax+0x38cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce280: jl 0x5ce28e */ if ((fS!=fO)) goto L_005ce28e;
L_005ce282:; BB(0x005ce282);
    /* 005ce282: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce285: cmp dword ptr [ecx + 0x38c], 4 */ {  u32 a = R32((u32)(r_ecx+0x38cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce28c: jl 0x5ce290 */ if ((fS!=fO)) goto L_005ce290;
L_005ce28e:; BB(0x005ce28e);
    /* 005ce28e: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce290:; BB(0x005ce290);
    /* 005ce290: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce293: mov eax, dword ptr [edx + 0x38c] */ r_eax = R32((u32)(r_edx+0x38cu));
    /* 005ce299: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce29c: cmp dword ptr [ecx + eax*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce2a1: jne 0x5ce2a5 */ if (!fZ) goto L_005ce2a5;
L_005ce2a3:; BB(0x005ce2a3);
    /* 005ce2a3: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce2a5:; BB(0x005ce2a5);
    /* 005ce2a5: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce2a8: mov eax, dword ptr [edx + 0x38c] */ r_eax = R32((u32)(r_edx+0x38cu));
    /* 005ce2ae: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce2b1: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005ce2b5: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5ce2bau); f_004259a0();
    /* 005ce2ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce2bc: je 0x5ce2cd */ if (fZ) goto L_005ce2cd;
L_005ce2be:; BB(0x005ce2be);
    /* 005ce2be: mov dword ptr [ebp - 0x4c], 0x146 */ W32((u32)(r_ebp+0xffffffb4u), 0x146u);
    /* 005ce2c5: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce2c8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ce2cb: jmp 0x5ce2ed */ goto L_005ce2ed;
L_005ce2cd:; BB(0x005ce2cd);
    /* 005ce2cd: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce2d0: mov ecx, dword ptr [eax + 0x38c] */ r_ecx = R32((u32)(r_eax+0x38cu));
    /* 005ce2d6: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce2d9: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005ce2dd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ce2e0: mov dword ptr [ebp - 0x4c], 0x145 */ W32((u32)(r_ebp+0xffffffb4u), 0x145u);
    /* 005ce2e7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce2ea: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ce2ed:; BB(0x005ce2ed);
    /* 005ce2ed: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce2f1: je 0x5ce30d */ if (fZ) goto L_005ce30d;
L_005ce2f3:; BB(0x005ce2f3);
    /* 005ce2f3: cmp dword ptr [ebp - 0x40], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce2f7: je 0x5ce30d */ if (fZ) goto L_005ce30d;
L_005ce2f9:; BB(0x005ce2f9);
    /* 005ce2f9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce2fb: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce300u); f_0060ee31();
    /* 005ce300: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce303: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce305: je 0x5ce30d */ if (fZ) goto L_005ce30d;
L_005ce307:; BB(0x005ce307);
    /* 005ce307: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ce30a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005ce30d:; BB(0x005ce30d);
    /* 005ce30d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce311: je 0x5ce322 */ if (fZ) goto L_005ce322;
L_005ce313:; BB(0x005ce313);
    /* 005ce313: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ce316: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce317: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ce31a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ce31c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ce31f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5ce322u); call_ind(t); }
L_005ce322:; BB(0x005ce322);
    /* 005ce322: cmp dword ptr [ebp - 0x4c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce326: jne 0x5ce32e */ if (!fZ) goto L_005ce32e;
L_005ce328:; BB(0x005ce328);
    /* 005ce328: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce32c: je 0x5ce35b */ if (fZ) goto L_005ce35b;
L_005ce32e:; BB(0x005ce32e);
    /* 005ce32e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005ce331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce332: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ce335: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce336: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce339: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce33a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce33d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce33e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ce341: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce342: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ce345: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce346: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce34a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce34d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce34e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ce351: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005ce354: call 0x42099e */ r_esp -= 4; W32(r_esp, 0x5ce359u); f_0042099e();
    /* 005ce359: jmp 0x5ce370 */ goto L_005ce370;
L_005ce35b:; BB(0x005ce35b);
    /* 005ce35b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce35f: je 0x5ce370 */ if (fZ) goto L_005ce370;
L_005ce361:; BB(0x005ce361);
    /* 005ce361: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005ce364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce365: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ce368: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ce36a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ce36d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5ce370u); call_ind(t); }
L_005ce370:; BB(0x005ce370);
    /* 005ce370: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ce371: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce373: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce374: ret 0x10 */ FN_RET(0x005cdd8e); r_esp += 20; return;
}

void f_005ce387(void) /* FUN_005ce387 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ce387);
    /* 005ce387: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce388: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce38a: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce38d: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005ce390: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 005ce397: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005ce39e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce3a1: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5ce3a6u); f_005cd326();
    /* 005ce3a6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ce3a9: mov byte ptr [ebp - 0x20], 2 */ W8((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 005ce3ad: mov byte ptr [ebp - 0x1f], 0 */ W8((u32)(r_ebp+0xffffffe1u), 0x0u);
    /* 005ce3b1: mov byte ptr [ebp - 0x1e], 4 */ W8((u32)(r_ebp+0xffffffe2u), 0x4u);
    /* 005ce3b5: mov byte ptr [ebp - 0x1d], 0 */ W8((u32)(r_ebp+0xffffffe3u), 0x0u);
    /* 005ce3b9: mov byte ptr [ebp - 0x1c], 0xc */ W8((u32)(r_ebp+0xffffffe4u), 0xcu);
    /* 005ce3bd: mov byte ptr [ebp - 0x1b], 0 */ W8((u32)(r_ebp+0xffffffe5u), 0x0u);
    /* 005ce3c1: mov byte ptr [ebp - 0x1a], 0xe */ W8((u32)(r_ebp+0xffffffe6u), 0xeu);
    /* 005ce3c5: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 005ce3c9: mov byte ptr [ebp - 0x18], 0x16 */ W8((u32)(r_ebp+0xffffffe8u), 0x16u);
    /* 005ce3cd: mov byte ptr [ebp - 0x17], 0 */ W8((u32)(r_ebp+0xffffffe9u), 0x0u);
    /* 005ce3d1: mov byte ptr [ebp - 0x16], 0x18 */ W8((u32)(r_ebp+0xffffffeau), 0x18u);
    /* 005ce3d5: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
    /* 005ce3d9: mov byte ptr [ebp - 0x14], 0x20 */ W8((u32)(r_ebp+0xffffffecu), 0x20u);
    /* 005ce3dd: mov byte ptr [ebp - 0x13], 0 */ W8((u32)(r_ebp+0xffffffedu), 0x0u);
    /* 005ce3e1: mov byte ptr [ebp - 0x12], 0x24 */ W8((u32)(r_ebp+0xffffffeeu), 0x24u);
    /* 005ce3e5: mov byte ptr [ebp - 0x11], 0 */ W8((u32)(r_ebp+0xffffffefu), 0x0u);
    /* 005ce3e9: mov word ptr [ebp - 0x10], 0x98 */ W16((u32)(r_ebp+0xfffffff0u), 0x98u);
    /* 005ce3ef: mov word ptr [ebp - 0xe], 0x99 */ W16((u32)(r_ebp+0xfffffff2u), 0x99u);
    /* 005ce3f5: mov word ptr [ebp - 0xc], 0x9a */ W16((u32)(r_ebp+0xfffffff4u), 0x9au);
    /* 005ce3fb: mov word ptr [ebp - 0xa], 0x9b */ W16((u32)(r_ebp+0xfffffff6u), 0x9bu);
    /* 005ce401: mov dword ptr [ebp - 0x34], 2 */ W32((u32)(r_ebp+0xffffffccu), 0x2u);
    /* 005ce408: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005ce40f: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005ce416: mov dword ptr [ebp - 0x28], 3 */ W32((u32)(r_ebp+0xffffffd8u), 0x3u);
    /* 005ce41d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce41f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce422: call 0x5cd582 */ r_esp -= 4; W32(r_esp, 0x5ce427u); f_005cd582();
    /* 005ce427: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005ce42a: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005ce431: jmp 0x5ce43c */ goto L_005ce43c;
L_005ce433:; BB(0x005ce433);
    /* 005ce433: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce436: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce439: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_005ce43c:; BB(0x005ce43c);
    /* 005ce43c: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce440: jge 0x5ce452 */ if ((fS==fO)) goto L_005ce452;
L_005ce442:; BB(0x005ce442);
    /* 005ce442: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce445: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce448: mov byte ptr [edx + ecx*4 + 0x3b4], 0 */ W8((u32)(r_edx+r_ecx*4+0x3b4u), 0x0u);
    /* 005ce450: jmp 0x5ce433 */ goto L_005ce433;
L_005ce452:; BB(0x005ce452);
    /* 005ce452: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce454: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce459u); f_0060ee31();
    /* 005ce459: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce45c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce45f: jge 0x5ce4b0 */ if ((fS==fO)) goto L_005ce4b0;
L_005ce461:; BB(0x005ce461);
    /* 005ce461: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce463: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce468u); f_0060ee31();
    /* 005ce468: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce46b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ce46e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce470: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce473: movsx ecx, word ptr [ebp + eax*2 - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xfffffff0u));
    /* 005ce478: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce479: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce47c: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce481u); f_005cd919();
    /* 005ce481: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce484: mov eax, dword ptr [ebp + edx*4 - 0x34] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffccu));
    /* 005ce488: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce48b: mov byte ptr [ecx + eax*4 + 0x3b4], 1 */ W8((u32)(r_ecx+r_eax*4+0x3b4u), 0x1u);
    /* 005ce493: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce495: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce497: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ce49d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ce4a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4a1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4a3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce4a6: call 0x5cdd8e */ r_esp -= 4; W32(r_esp, 0x5ce4abu); f_005cdd8e();
    /* 005ce4ab: jmp 0x5cea15 */ goto L_005cea15;
L_005ce4b0:; BB(0x005ce4b0);
    /* 005ce4b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce4b3: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005ce4b6: call 0x41f839 */ r_esp -= 4; W32(r_esp, 0x5ce4bbu); f_0041f839();
    /* 005ce4bb: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005ce4be: cmp dword ptr [ebp - 0x50], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ce4c2: ja 0x5ce9d8 */ if ((!fC&&!fZ)) goto L_005ce9d8;
L_005ce4c8:; BB(0x005ce4c8);
    /* 005ce4c8: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ce4cb: jmp dword ptr [edx*4 + 0x5cea19] */ { u32 t = R32((u32)(r_edx*4+0x5cea19u)); switch (t) { case 0x5ce4d2u: goto L_005ce4d2; case 0x5ce539u: goto L_005ce539; case 0x5ce59du: goto L_005ce59d; case 0x5ce631u: goto L_005ce631; case 0x5ce6c2u: goto L_005ce6c2; case 0x5ce740u: goto L_005ce740; case 0x5ce7d1u: goto L_005ce7d1; case 0x5ce8b0u: goto L_005ce8b0; case 0x5ce8fdu: goto L_005ce8fd; case 0x5ce970u: goto L_005ce970; default: UNSUP(0x005ce4cb, "jump table entry is not a known target"); } }
L_005ce4d2:; BB(0x005ce4d2);
    /* 005ce4d2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4d4: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce4d9u); f_0060ee31();
    /* 005ce4d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce4dc: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ce4df: cmp dword ptr [ebp - 0x44], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce4e3: jge 0x5ce4ff */ if ((fS==fO)) goto L_005ce4ff;
L_005ce4e5:; BB(0x005ce4e5);
    /* 005ce4e5: mov dword ptr [ebp - 4], 0x98 */ W32((u32)(r_ebp+0xfffffffcu), 0x98u);
    /* 005ce4ec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce4ef: mov byte ptr [eax + 0x3bc], 1 */ W8((u32)(r_eax+0x3bcu), 0x1u);
    /* 005ce4f6: mov dword ptr [ebp - 0x24], 2 */ W32((u32)(r_ebp+0xffffffdcu), 0x2u);
    /* 005ce4fd: jmp 0x5ce526 */ goto L_005ce526;
L_005ce4ff:; BB(0x005ce4ff);
    /* 005ce4ff: cmp dword ptr [ebp - 0x44], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce503: jge 0x5ce51f */ if ((fS==fO)) goto L_005ce51f;
L_005ce505:; BB(0x005ce505);
    /* 005ce505: mov dword ptr [ebp - 4], 0x99 */ W32((u32)(r_ebp+0xfffffffcu), 0x99u);
    /* 005ce50c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce50f: mov byte ptr [ecx + 0x3b4], 1 */ W8((u32)(r_ecx+0x3b4u), 0x1u);
    /* 005ce516: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ce51d: jmp 0x5ce526 */ goto L_005ce526;
L_005ce51f:; BB(0x005ce51f);
    /* 005ce51f: mov dword ptr [ebp - 4], 0x94 */ W32((u32)(r_ebp+0xfffffffcu), 0x94u);
L_005ce526:; BB(0x005ce526);
    /* 005ce526: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce528: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce52b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce52c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce52f: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce534u); f_005cd919();
    /* 005ce534: jmp 0x5ce9f1 */ goto L_005ce9f1;
L_005ce539:; BB(0x005ce539);
    /* 005ce539: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 005ce540: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce543: mov byte ptr [eax + 0x3c4], 1 */ W8((u32)(r_eax+0x3c4u), 0x1u);
    /* 005ce54a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce54d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce54e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce550: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce553: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce558u); f_005cd919();
    /* 005ce558: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce55b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce55c: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce55e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce561: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce566u); f_005cd919();
    /* 005ce566: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005ce56d: jmp 0x5ce578 */ goto L_005ce578;
L_005ce56f:; BB(0x005ce56f);
    /* 005ce56f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce572: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce575: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_005ce578:; BB(0x005ce578);
    /* 005ce578: cmp dword ptr [ebp - 0x38], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce57c: jge 0x5ce598 */ if ((fS==fO)) goto L_005ce598;
L_005ce57e:; BB(0x005ce57e);
    /* 005ce57e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce580: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce582: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce587u); f_0060ee31();
    /* 005ce587: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce58a: add eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce58d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce58e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce591: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce596u); f_005cd919();
    /* 005ce596: jmp 0x5ce56f */ goto L_005ce56f;
L_005ce598:; BB(0x005ce598);
    /* 005ce598: jmp 0x5ce9f1 */ goto L_005ce9f1;
L_005ce59d:; BB(0x005ce59d);
    /* 005ce59d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce59f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce5a4u); f_0060ee31();
    /* 005ce5a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce5a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce5a9: je 0x5ce5b4 */ if (fZ) goto L_005ce5b4;
L_005ce5ab:; BB(0x005ce5ab);
    /* 005ce5ab: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 005ce5b2: jmp 0x5ce5bb */ goto L_005ce5bb;
L_005ce5b4:; BB(0x005ce5b4);
    /* 005ce5b4: mov dword ptr [ebp - 0x24], 2 */ W32((u32)(r_ebp+0xffffffdcu), 0x2u);
L_005ce5bb:; BB(0x005ce5bb);
    /* 005ce5bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce5be: mov byte ptr [ecx + 0x3c4], 1 */ W8((u32)(r_ecx+0x3c4u), 0x1u);
    /* 005ce5c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce5c8: mov byte ptr [edx + 0x3bc], 1 */ W8((u32)(r_edx+0x3bcu), 0x1u);
    /* 005ce5cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5d1: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5d6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce5d9: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce5deu); f_005cd919();
    /* 005ce5de: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005ce5e5:; BB(0x005ce5e5);
    /* 005ce5e5: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce5e9: jge 0x5ce62c */ if ((fS==fO)) goto L_005ce62c;
L_005ce5eb:; BB(0x005ce5eb);
    /* 005ce5eb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5ed: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce5f2u); f_0060ee31();
    /* 005ce5f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce5f5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ce5f8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce5fb: movsx ecx, byte ptr [ebp + eax - 0x1f] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+r_eax+0xffffffe1u));
    /* 005ce600: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce602: jne 0x5ce62a */ if (!fZ) goto L_005ce62a;
L_005ce604:; BB(0x005ce604);
    /* 005ce604: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce607: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce608: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce60b: movsx ecx, byte ptr [ebp + eax - 0x20] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+r_eax+0xffffffe0u));
    /* 005ce610: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce611: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce614: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce619u); f_005cd919();
    /* 005ce619: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce61c: mov byte ptr [ebp + edx - 0x1f], 1 */ W8((u32)(r_ebp+r_edx+0xffffffe1u), 0x1u);
    /* 005ce621: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ce624: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce627: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_005ce62a:; BB(0x005ce62a);
    /* 005ce62a: jmp 0x5ce5e5 */ goto L_005ce5e5;
L_005ce62c:; BB(0x005ce62c);
    /* 005ce62c: jmp 0x5ce9f1 */ goto L_005ce9f1;
L_005ce631:; BB(0x005ce631);
    /* 005ce631: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce633: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce638u); f_0060ee31();
    /* 005ce638: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce63b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce63d: je 0x5ce648 */ if (fZ) goto L_005ce648;
L_005ce63f:; BB(0x005ce63f);
    /* 005ce63f: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 005ce646: jmp 0x5ce64f */ goto L_005ce64f;
L_005ce648:; BB(0x005ce648);
    /* 005ce648: mov dword ptr [ebp - 0x24], 3 */ W32((u32)(r_ebp+0xffffffdcu), 0x3u);
L_005ce64f:; BB(0x005ce64f);
    /* 005ce64f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce652: mov byte ptr [ecx + 0x3c4], 1 */ W8((u32)(r_ecx+0x3c4u), 0x1u);
    /* 005ce659: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce65c: mov byte ptr [edx + 0x3c0], 1 */ W8((u32)(r_edx+0x3c0u), 0x1u);
    /* 005ce663: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce665: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce66a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce66d: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce672u); f_005cd919();
    /* 005ce672: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005ce679:; BB(0x005ce679);
    /* 005ce679: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce67d: jge 0x5ce6bd */ if ((fS==fO)) goto L_005ce6bd;
L_005ce67f:; BB(0x005ce67f);
    /* 005ce67f: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce681: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce686u); f_0060ee31();
    /* 005ce686: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce689: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce68c: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ce68f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce692: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ce693: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ce695: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ce697: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ce69a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ce69c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ce69e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce6a0: je 0x5ce6bb */ if (fZ) goto L_005ce6bb;
L_005ce6a2:; BB(0x005ce6a2);
    /* 005ce6a2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce6a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6a6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce6a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6aa: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce6ad: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce6b2u); f_005cd919();
    /* 005ce6b2: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ce6b5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ce6b8: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
L_005ce6bb:; BB(0x005ce6bb);
    /* 005ce6bb: jmp 0x5ce679 */ goto L_005ce679;
L_005ce6bd:; BB(0x005ce6bd);
    /* 005ce6bd: jmp 0x5ce9f1 */ goto L_005ce9f1;
L_005ce6c2:; BB(0x005ce6c2);
    /* 005ce6c2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6c4: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce6c9u); f_0060ee31();
    /* 005ce6c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce6ce: je 0x5ce6d9 */ if (fZ) goto L_005ce6d9;
L_005ce6d0:; BB(0x005ce6d0);
    /* 005ce6d0: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 005ce6d7: jmp 0x5ce6e0 */ goto L_005ce6e0;
L_005ce6d9:; BB(0x005ce6d9);
    /* 005ce6d9: mov dword ptr [ebp - 0x24], 2 */ W32((u32)(r_ebp+0xffffffdcu), 0x2u);
L_005ce6e0:; BB(0x005ce6e0);
    /* 005ce6e0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce6e3: mov byte ptr [eax + 0x3c4], 1 */ W8((u32)(r_eax+0x3c4u), 0x1u);
    /* 005ce6ea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce6ed: mov byte ptr [ecx + 0x3bc], 1 */ W8((u32)(r_ecx+0x3bcu), 0x1u);
    /* 005ce6f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6f6: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6fb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce6fe: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce703u); f_005cd919();
    /* 005ce703: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce706: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce707: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce709: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce70c: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce711u); f_005cd919();
    /* 005ce711: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce715: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce717: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce71a: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce71fu); f_005cd919();
    /* 005ce71f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce722: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce723: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005ce725: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce728: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce72du); f_005cd919();
    /* 005ce72d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce730: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce731: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce733: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce736: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce73bu); f_005cd919();
    /* 005ce73b: jmp 0x5ce9f1 */ goto L_005ce9f1;
L_005ce740:; BB(0x005ce740);
    /* 005ce740: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce742: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce747u); f_0060ee31();
    /* 005ce747: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce74a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce74c: je 0x5ce757 */ if (fZ) goto L_005ce757;
L_005ce74e:; BB(0x005ce74e);
    /* 005ce74e: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 005ce755: jmp 0x5ce75e */ goto L_005ce75e;
L_005ce757:; BB(0x005ce757);
    /* 005ce757: mov dword ptr [ebp - 0x24], 2 */ W32((u32)(r_ebp+0xffffffdcu), 0x2u);
L_005ce75e:; BB(0x005ce75e);
    /* 005ce75e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce761: mov byte ptr [eax + 0x3c4], 1 */ W8((u32)(r_eax+0x3c4u), 0x1u);
    /* 005ce768: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce76b: mov byte ptr [ecx + 0x3bc], 1 */ W8((u32)(r_ecx+0x3bcu), 0x1u);
    /* 005ce772: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce774: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce779: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce77c: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce781u); f_005cd919();
    /* 005ce781: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005ce788:; BB(0x005ce788);
    /* 005ce788: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce78c: jge 0x5ce7cc */ if ((fS==fO)) goto L_005ce7cc;
L_005ce78e:; BB(0x005ce78e);
    /* 005ce78e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce790: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce795u); f_0060ee31();
    /* 005ce795: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce798: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce79b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ce79e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce7a1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ce7a2: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ce7a4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ce7a6: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ce7a9: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ce7ab: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ce7ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce7af: jne 0x5ce7ca */ if (!fZ) goto L_005ce7ca;
L_005ce7b1:; BB(0x005ce7b1);
    /* 005ce7b1: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce7b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7b5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce7b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7b9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce7bc: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce7c1u); f_005cd919();
    /* 005ce7c1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ce7c4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ce7c7: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_005ce7ca:; BB(0x005ce7ca);
    /* 005ce7ca: jmp 0x5ce788 */ goto L_005ce788;
L_005ce7cc:; BB(0x005ce7cc);
    /* 005ce7cc: jmp 0x5ce9f1 */ goto L_005ce9f1;
L_005ce7d1:; BB(0x005ce7d1);
    /* 005ce7d1: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 005ce7d8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce7db: mov byte ptr [edx + 0x3c4], 1 */ W8((u32)(r_edx+0x3c4u), 0x1u);
    /* 005ce7e2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7e4: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce7e9u); f_0060ee31();
    /* 005ce7e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce7ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce7ef: jge 0x5ce80d */ if ((fS==fO)) goto L_005ce80d;
L_005ce7f1:; BB(0x005ce7f1);
    /* 005ce7f1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce7f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7f7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce7fa: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce7ffu); f_005cd919();
    /* 005ce7ff: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce802: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce803: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce805: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce808: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce80du); f_005cd919();
L_005ce80d:; BB(0x005ce80d);
    /* 005ce80d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce80f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce814u); f_0060ee31();
    /* 005ce814: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce817: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce819: je 0x5ce864 */ if (fZ) goto L_005ce864;
L_005ce81b:; BB(0x005ce81b);
    /* 005ce81b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce81d: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce822: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce825: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce82au); f_005cd919();
    /* 005ce82a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005ce831:; BB(0x005ce831);
    /* 005ce831: cmp dword ptr [ebp - 0x3c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce835: jge 0x5ce862 */ if ((fS==fO)) goto L_005ce862;
L_005ce837:; BB(0x005ce837);
    /* 005ce837: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce839: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce83eu); f_0060ee31();
    /* 005ce83e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce841: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce844: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ce847: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce84a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce84b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce84e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce84f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce852: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce857u); f_005cd919();
    /* 005ce857: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ce85a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ce85d: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005ce860: jmp 0x5ce831 */ goto L_005ce831;
L_005ce862:; BB(0x005ce862);
    /* 005ce862: jmp 0x5ce8ab */ goto L_005ce8ab;
L_005ce864:; BB(0x005ce864);
    /* 005ce864: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce866: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce86b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce86e: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce873u); f_005cd919();
    /* 005ce873: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005ce87a:; BB(0x005ce87a);
    /* 005ce87a: cmp dword ptr [ebp - 0x3c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce87e: jge 0x5ce8ab */ if ((fS==fO)) goto L_005ce8ab;
L_005ce880:; BB(0x005ce880);
    /* 005ce880: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce882: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce887u); f_0060ee31();
    /* 005ce887: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce88a: add eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce88d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ce890: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce893: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce894: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce898: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce89b: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce8a0u); f_005cd919();
    /* 005ce8a0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ce8a3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ce8a6: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005ce8a9: jmp 0x5ce87a */ goto L_005ce87a;
L_005ce8ab:; BB(0x005ce8ab);
    /* 005ce8ab: jmp 0x5ce9f1 */ goto L_005ce9f1;
L_005ce8b0:; BB(0x005ce8b0);
    /* 005ce8b0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ce8b7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce8ba: mov byte ptr [edx + 0x3b4], 1 */ W8((u32)(r_edx+0x3b4u), 0x1u);
    /* 005ce8c1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce8c4: mov byte ptr [eax + 0x3c4], 1 */ W8((u32)(r_eax+0x3c4u), 0x1u);
    /* 005ce8cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8cd: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8d2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce8d5: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce8dau); f_005cd919();
    /* 005ce8da: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8dc: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce8e1u); f_0060ee31();
    /* 005ce8e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce8e4: add eax, 0x6f */ {  u32 a = r_eax; u32 b = 0x6fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce8e7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ce8ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8ec: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce8ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8f0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce8f3: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce8f8u); f_005cd919();
    /* 005ce8f8: jmp 0x5ce9f1 */ goto L_005ce9f1;
L_005ce8fd:; BB(0x005ce8fd);
    /* 005ce8fd: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 005ce904: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce907: mov byte ptr [edx + 0x3c4], 1 */ W8((u32)(r_edx+0x3c4u), 0x1u);
    /* 005ce90e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce910: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce915u); f_0060ee31();
    /* 005ce915: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce918: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ce91b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce91d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce920: add eax, 0x94 */ {  u32 a = r_eax; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce925: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce926: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce929: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce92eu); f_005cd919();
    /* 005ce92e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005ce935:; BB(0x005ce935);
    /* 005ce935: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce939: jge 0x5ce96b */ if ((fS==fO)) goto L_005ce96b;
L_005ce93b:; BB(0x005ce93b);
    /* 005ce93b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce93d: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce942u); f_0060ee31();
    /* 005ce942: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce945: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce948: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ce94b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce94d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005ce950: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce953: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce954: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce957: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce958: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce95b: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce960u); f_005cd919();
    /* 005ce960: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ce963: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ce966: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005ce969: jmp 0x5ce935 */ goto L_005ce935;
L_005ce96b:; BB(0x005ce96b);
    /* 005ce96b: jmp 0x5ce9f1 */ goto L_005ce9f1;
L_005ce970:; BB(0x005ce970);
    /* 005ce970: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ce977: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce97a: mov byte ptr [edx + 0x3b8], 1 */ W8((u32)(r_edx+0x3b8u), 0x1u);
    /* 005ce981: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce984: mov byte ptr [eax + 0x3c4], 1 */ W8((u32)(r_eax+0x3c4u), 0x1u);
    /* 005ce98b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce98d: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 005ce992: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce995: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce99au); f_005cd919();
    /* 005ce99a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce99d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce99e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9a0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce9a3: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce9a8u); f_005cd919();
    /* 005ce9a8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ce9ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9ac: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9ae: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce9b1: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce9b6u); f_005cd919();
    /* 005ce9b6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9b8: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5ce9bdu); f_0060ee31();
    /* 005ce9bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce9c0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ce9c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9c5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce9c8: add eax, 0x94 */ {  u32 a = r_eax; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce9cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9ce: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce9d1: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce9d6u); f_005cd919();
    /* 005ce9d6: jmp 0x5ce9f1 */ goto L_005ce9f1;
L_005ce9d8:; BB(0x005ce9d8);
    /* 005ce9d8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce9db: call 0x5cea41 */ r_esp -= 4; W32(r_esp, 0x5ce9e0u); f_005cea41();
    /* 005ce9e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ce9e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce9e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9e9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ce9ec: call 0x5cd919 */ r_esp -= 4; W32(r_esp, 0x5ce9f1u); f_005cd919();
L_005ce9f1:; BB(0x005ce9f1);
    /* 005ce9f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9f3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005ce9f9: call 0x45cd25 */ r_esp -= 4; W32(r_esp, 0x5ce9feu); f_0045cd25();
    /* 005ce9fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cea01: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cea07: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cea0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cea0b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cea0d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005cea10: call 0x5cdd8e */ r_esp -= 4; W32(r_esp, 0x5cea15u); f_005cdd8e();
L_005cea15:; BB(0x005cea15);
    /* 005cea15: mov esp, ebp */ r_esp = r_ebp;
    /* 005cea17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cea18: ret  */ FN_RET(0x005ce387); r_esp += 4; return;
}

void f_005cea41(void) /* FUN_005cea41 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cea41);
    /* 005cea41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cea42: mov ebp, esp */ r_ebp = r_esp;
    /* 005cea44: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cea47: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cea4a: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 005cea4f: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cea54u); f_0060ee31();
    /* 005cea54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cea57: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cea5a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cea5d: mov esp, ebp */ r_esp = r_ebp;
    /* 005cea5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cea60: ret  */ FN_RET(0x005cea41); r_esp += 4; return;
}

void f_005cea61(void) /* FUN_005cea61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cea61);
    /* 005cea61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cea62: mov ebp, esp */ r_ebp = r_esp;
    /* 005cea64: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cea67: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cea6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cea71: jmp 0x5cea7c */ goto L_005cea7c;
L_005cea73:; BB(0x005cea73);
    /* 005cea73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cea76: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cea79: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cea7c:; BB(0x005cea7c);
    /* 005cea7c: cmp dword ptr [ebp - 4], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cea83: jge 0x5ceaa5 */ if ((fS==fO)) goto L_005ceaa5;
L_005cea85:; BB(0x005cea85);
    /* 005cea85: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cea88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cea89: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cea8c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cea8f: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cea93: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x5cea98u); f_004280b4();
    /* 005cea98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cea9a: je 0x5ceaa3 */ if (fZ) goto L_005ceaa3;
L_005cea9c:; BB(0x005cea9c);
    /* 005cea9c: mov eax, 1 */ r_eax = 0x1u;
    /* 005ceaa1: jmp 0x5ceaa7 */ goto L_005ceaa7;
L_005ceaa3:; BB(0x005ceaa3);
    /* 005ceaa3: jmp 0x5cea73 */ goto L_005cea73;
L_005ceaa5:; BB(0x005ceaa5);
    /* 005ceaa5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ceaa7:; BB(0x005ceaa7);
    /* 005ceaa7: mov esp, ebp */ r_esp = r_ebp;
    /* 005ceaa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ceaaa: ret 4 */ FN_RET(0x005cea61); r_esp += 8; return;
}

void f_005ceaad(void) /* FUN_005ceaad */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ceaad);
    /* 005ceaad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ceaae: mov ebp, esp */ r_ebp = r_esp;
    /* 005ceab0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ceab3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ceab6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005ceabd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ceac4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ceacb: jmp 0x5cead6 */ goto L_005cead6;
L_005ceacd:; BB(0x005ceacd);
    /* 005ceacd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cead0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cead3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cead6:; BB(0x005cead6);
    /* 005cead6: cmp dword ptr [ebp - 4], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ceadd: jge 0x5ceb14 */ if ((fS==fO)) goto L_005ceb14;
L_005ceadf:; BB(0x005ceadf);
    /* 005ceadf: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005ceae2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ceae3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ceae6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ceae7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ceaea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ceaed: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005ceaf1: call 0x428175 */ r_esp -= 4; W32(r_esp, 0x5ceaf6u); f_00428175();
    /* 005ceaf6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ceaf9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ceafb: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ceafe: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ceb01: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005ceb03: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ceb06: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ceb09: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ceb0c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ceb0f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005ceb12: jmp 0x5ceacd */ goto L_005ceacd;
L_005ceb14:; BB(0x005ceb14);
    /* 005ceb14: mov esp, ebp */ r_esp = r_ebp;
    /* 005ceb16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ceb17: ret 8 */ FN_RET(0x005ceaad); r_esp += 12; return;
}

void f_005ceb1a(void) /* FUN_005ceb1a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ceb1a);
    /* 005ceb1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb1b: mov ebp, esp */ r_ebp = r_esp;
    /* 005ceb1d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ceb20: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ceb23: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ceb2a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ceb31: jmp 0x5ceb3c */ goto L_005ceb3c;
L_005ceb33:; BB(0x005ceb33);
    /* 005ceb33: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ceb36: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ceb39: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005ceb3c:; BB(0x005ceb3c);
    /* 005ceb3c: cmp dword ptr [ebp - 0x10], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ceb43: jge 0x5ceb89 */ if ((fS==fO)) goto L_005ceb89;
L_005ceb45:; BB(0x005ceb45);
    /* 005ceb45: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ceb48: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ceb4b: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005ceb4f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ceb52: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ceb55: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005ceb58: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ceb5b: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 005ceb5f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ceb62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ceb65: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ceb69: je 0x5ceb87 */ if (fZ) goto L_005ceb87;
L_005ceb6b:; BB(0x005ceb6b);
    /* 005ceb6b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ceb6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ceb70: cmp dword ptr [edx + 0xbc], 0 */ {  u32 a = R32((u32)(r_edx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ceb77: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005ceb7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ceb7c: je 0x5ceb87 */ if (fZ) goto L_005ceb87;
L_005ceb7e:; BB(0x005ceb7e);
    /* 005ceb7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ceb81: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ceb84: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005ceb87:; BB(0x005ceb87);
    /* 005ceb87: jmp 0x5ceb33 */ goto L_005ceb33;
L_005ceb89:; BB(0x005ceb89);
    /* 005ceb89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ceb8c: mov esp, ebp */ r_esp = r_ebp;
    /* 005ceb8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ceb8f: ret 4 */ FN_RET(0x005ceb1a); r_esp += 8; return;
}

void f_005ceb92(void) /* FUN_005ceb92 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ceb92);
    /* 005ceb92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb93: mov ebp, esp */ r_ebp = r_esp;
    /* 005ceb95: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ceb98: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ceb9b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ceba2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ceba9: jmp 0x5cebb4 */ goto L_005cebb4;
L_005cebab:; BB(0x005cebab);
    /* 005cebab: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cebae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cebb1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005cebb4:; BB(0x005cebb4);
    /* 005cebb4: cmp dword ptr [ebp - 0x10], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cebbb: jge 0x5cec01 */ if ((fS==fO)) goto L_005cec01;
L_005cebbd:; BB(0x005cebbd);
    /* 005cebbd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cebc0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cebc3: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cebc7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cebca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cebcd: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005cebd0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cebd3: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 005cebd7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cebda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cebdd: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cebe1: je 0x5cebff */ if (fZ) goto L_005cebff;
L_005cebe3:; BB(0x005cebe3);
    /* 005cebe3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cebe6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cebe8: cmp dword ptr [edx + 0xbc], 0 */ {  u32 a = R32((u32)(r_edx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cebef: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005cebf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cebf4: jne 0x5cebff */ if (!fZ) goto L_005cebff;
L_005cebf6:; BB(0x005cebf6);
    /* 005cebf6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cebf9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cebfc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005cebff:; BB(0x005cebff);
    /* 005cebff: jmp 0x5cebab */ goto L_005cebab;
L_005cec01:; BB(0x005cec01);
    /* 005cec01: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cec04: mov esp, ebp */ r_esp = r_ebp;
    /* 005cec06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cec07: ret 4 */ FN_RET(0x005ceb92); r_esp += 8; return;
}

void f_005cec0a(void) /* FUN_005cec0a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cec0a);
    /* 005cec0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cec0b: mov ebp, esp */ r_ebp = r_esp;
    /* 005cec0d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cec10: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cec13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cec16: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cec1bu); f_005cd326();
    /* 005cec1b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cec1e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec20: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cec25: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cec28: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cec2e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cec31: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cec33: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cec36u); call_ind(t); }
    /* 005cec36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cec39: call 0x425d41 */ r_esp -= 4; W32(r_esp, 0x5cec3eu); f_00425d41();
    /* 005cec3e: mov dword ptr [ebp - 8], 0x9d */ W32((u32)(r_ebp+0xfffffff8u), 0x9du);
    /* 005cec45: jmp 0x5cec50 */ goto L_005cec50;
L_005cec47:; BB(0x005cec47);
    /* 005cec47: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cec4a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cec4d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005cec50:; BB(0x005cec50);
    /* 005cec50: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cec54: jle 0x5cecba */ if ((fZ||fS!=fO)) goto L_005cecba;
L_005cec56:; BB(0x005cec56);
    /* 005cec56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cec59: call 0x5cd25d */ r_esp -= 4; W32(r_esp, 0x5cec5eu); f_005cd25d();
    /* 005cec5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cec5f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cec62: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cec65: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cec69: call 0x4280b4 */ r_esp -= 4; W32(r_esp, 0x5cec6eu); f_004280b4();
    /* 005cec6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cec70: je 0x5cecb8 */ if (fZ) goto L_005cecb8;
L_005cec72:; BB(0x005cec72);
    /* 005cec72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cec75: call 0x5cf55e */ r_esp -= 4; W32(r_esp, 0x5cec7au); f_005cf55e();
    /* 005cec7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cec7b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cec7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cec81: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005cec85: call 0x5c9229 */ r_esp -= 4; W32(r_esp, 0x5cec8au); f_005c9229();
    /* 005cec8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cec8c: jne 0x5cec9f */ if (!fZ) goto L_005cec9f;
L_005cec8e:; BB(0x005cec8e);
    /* 005cec8e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cec91: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cec94: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cec98: call 0x5c8f76 */ r_esp -= 4; W32(r_esp, 0x5cec9du); f_005c8f76();
    /* 005cec9d: jmp 0x5cecb8 */ goto L_005cecb8;
L_005cec9f:; BB(0x005cec9f);
    /* 005cec9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ceca2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ceca5: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005ceca9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cecac: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cecaf: mov eax, dword ptr [edx + eax*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_eax*4+0x20u));
    /* 005cecb3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cecb5: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5cecb8u); call_ind(t); }
L_005cecb8:; BB(0x005cecb8);
    /* 005cecb8: jmp 0x5cec47 */ goto L_005cec47;
L_005cecba:; BB(0x005cecba);
    /* 005cecba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cecbc: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cecc1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cecc4: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cecca: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ceccd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ceccf: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5cecd2u); call_ind(t); }
    /* 005cecd2: mov esp, ebp */ r_esp = r_ebp;
    /* 005cecd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cecd5: ret  */ FN_RET(0x005cec0a); r_esp += 4; return;
}

void f_005cecd6(void) /* FUN_005cecd6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cecd6);
    /* 005cecd6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cecd7: mov ebp, esp */ r_ebp = r_esp;
    /* 005cecd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cecda: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cecdd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cecdf: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cece4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cece7: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ceced: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cecf0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cecf2: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cecf5u); call_ind(t); }
    /* 005cecf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cecf7: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cecfc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cecff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ced00: push 0xc3b4 */ { u32 v = 0xc3b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ced05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ced08: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005ced0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ced0e: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005ced11: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ced13: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5ced16u); call_ind(t); }
    /* 005ced16: mov esp, ebp */ r_esp = r_ebp;
    /* 005ced18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ced19: ret  */ FN_RET(0x005cecd6); r_esp += 4; return;
}

void f_005ced1a(void) /* FUN_005ced1a */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ced1a);
    /* 005ced1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ced1b: mov ebp, esp */ r_ebp = r_esp;
    /* 005ced1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ced1e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ced21: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ced23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ced26: call 0x5cc5a5 */ r_esp -= 4; W32(r_esp, 0x5ced2bu); f_005cc5a5();
    /* 005ced2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ced2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ced30: call 0x5cc559 */ r_esp -= 4; W32(r_esp, 0x5ced35u); f_005cc559();
    /* 005ced35: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005ced3b: call 0x448ca3 */ r_esp -= 4; W32(r_esp, 0x5ced40u); f_00448ca3();
    /* 005ced40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ced42: je 0x5ced65 */ if (fZ) goto L_005ced65;
L_005ced44:; BB(0x005ced44);
    /* 005ced44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ced47: call 0x5cef56 */ r_esp -= 4; W32(r_esp, 0x5ced4cu); f_005cef56();
    /* 005ced4c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ced4f: jl 0x5ced5b */ if ((fS!=fO)) goto L_005ced5b;
L_005ced51:; BB(0x005ced51);
    /* 005ced51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ced54: call 0x5cf637 */ r_esp -= 4; W32(r_esp, 0x5ced59u); f_005cf637();
    /* 005ced59: jmp 0x5ced63 */ goto L_005ced63;
L_005ced5b:; BB(0x005ced5b);
    /* 005ced5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ced5e: call 0x5cf6c9 */ r_esp -= 4; W32(r_esp, 0x5ced63u); f_005cf6c9();
L_005ced63:; BB(0x005ced63);
    /* 005ced63: jmp 0x5ced95 */ goto L_005ced95;
L_005ced65:; BB(0x005ced65);
    /* 005ced65: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ced67: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ced6c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ced6f: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ced75: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ced78: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ced7a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5ced7du); call_ind(t); }
    /* 005ced7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ced7f: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005ced84: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ced87: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005ced8d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ced90: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ced92: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5ced95u); call_ind(t); }
L_005ced95:; BB(0x005ced95);
    /* 005ced95: mov esp, ebp */ r_esp = r_ebp;
    /* 005ced97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ced98: ret  */ FN_RET(0x005ced1a); r_esp += 4; return;
}

void f_005ced99(void) /* FUN_005ced99 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ced99);
    /* 005ced99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ced9a: mov ebp, esp */ r_ebp = r_esp;
    /* 005ced9c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ced9f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ceda0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ceda3: mov dword ptr [ebp - 8], 0xfffffea3 */ W32((u32)(r_ebp+0xfffffff8u), 0xfffffea3u);
    /* 005cedaa: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cedae: je 0x5cedf5 */ if (fZ) goto L_005cedf5;
L_005cedb0:; BB(0x005cedb0);
    /* 005cedb0: mov dword ptr [ebp - 0xc], 0x19 */ W32((u32)(r_ebp+0xfffffff4u), 0x19u);
    /* 005cedb7: jmp 0x5cedc2 */ goto L_005cedc2;
L_005cedb9:; BB(0x005cedb9);
    /* 005cedb9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cedbc: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cedbf: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005cedc2:; BB(0x005cedc2);
    /* 005cedc2: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cedc6: jle 0x5cede4 */ if ((fZ||fS!=fO)) goto L_005cede4;
L_005cedc8:; BB(0x005cedc8);
    /* 005cedc8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cedcb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cedce: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cedd1: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cedd4: mov eax, dword ptr [esi + eax*4 + 0x320] */ r_eax = R32((u32)(r_esi+r_eax*4+0x320u));
    /* 005ceddb: mov dword ptr [edx + ecx*4 + 0x324], eax */ W32((u32)(r_edx+r_ecx*4+0x324u), r_eax);
    /* 005cede2: jmp 0x5cedb9 */ goto L_005cedb9;
L_005cede4:; BB(0x005cede4);
    /* 005cede4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cede7: call 0x5cf55e */ r_esp -= 4; W32(r_esp, 0x5cedecu); f_005cf55e();
    /* 005cedec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cedef: mov dword ptr [ecx + 0x324], eax */ W32((u32)(r_ecx+0x324u), r_eax);
L_005cedf5:; BB(0x005cedf5);
    /* 005cedf5: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cedfc: jmp 0x5cee07 */ goto L_005cee07;
L_005cedfe:; BB(0x005cedfe);
    /* 005cedfe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cee01: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cee04: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005cee07:; BB(0x005cee07);
    /* 005cee07: cmp dword ptr [ebp - 0xc], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cee0b: jge 0x5cee99 */ if ((fS==fO)) goto L_005cee99;
L_005cee11:; BB(0x005cee11);
    /* 005cee11: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cee14: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cee17: cmp dword ptr [ecx + eax*4 + 0x324], -1 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x324u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cee1f: jle 0x5cee94 */ if ((fZ||fS!=fO)) goto L_005cee94;
L_005cee21:; BB(0x005cee21);
    /* 005cee21: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cee24: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cee27: mov ecx, dword ptr [eax + edx*4 + 0x324] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x324u));
    /* 005cee2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cee2f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cee32: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cee35: mov ecx, dword ptr [eax + edx*4 + 0x2b4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2b4u));
    /* 005cee3c: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5cee41u); f_005ea1cf();
    /* 005cee41: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cee44: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cee45: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 005cee4a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cee4a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cee4a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cee4c: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cee4f: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cee52: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005cee55: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cee58: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cee59: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 005cee5e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cee5e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cee5e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cee60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cee62: jne 0x5cee6d */ if (!fZ) goto L_005cee6d;
L_005cee64:; BB(0x005cee64);
    /* 005cee64: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cee67: add edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cee6a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005cee6d:; BB(0x005cee6d);
    /* 005cee6d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cee70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cee71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cee74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cee75: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cee78: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cee7b: mov ecx, dword ptr [eax + edx*4 + 0x2b4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2b4u));
    /* 005cee82: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cee85: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cee88: mov edx, dword ptr [eax + edx*4 + 0x2b4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x2b4u));
    /* 005cee8f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cee91: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x5cee94u); call_ind(t); }
L_005cee94:; BB(0x005cee94);
    /* 005cee94: jmp 0x5cedfe */ goto L_005cedfe;
L_005cee99:; BB(0x005cee99);
    /* 005cee99: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cee9c: mov ecx, dword ptr [ecx + 0x298] */ r_ecx = R32((u32)(r_ecx+0x298u));
    /* 005ceea2: call 0x5ea257 */ r_esp -= 4; W32(r_esp, 0x5ceea7u); f_005ea257();
    /* 005ceea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ceea9: jne 0x5ceeb3 */ if (!fZ) goto L_005ceeb3;
L_005ceeab:; BB(0x005ceeab);
    /* 005ceeab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ceeae: call 0x5ceeba */ r_esp -= 4; W32(r_esp, 0x5ceeb3u); f_005ceeba();
L_005ceeb3:; BB(0x005ceeb3);
    /* 005ceeb3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ceeb4: mov esp, ebp */ r_esp = r_ebp;
    /* 005ceeb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ceeb7: ret 4 */ FN_RET(0x005ced99); r_esp += 8; return;
}

void f_005ceeba(void) /* FUN_005ceeba */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ceeba);
    /* 005ceeba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ceebb: mov ebp, esp */ r_ebp = r_esp;
    /* 005ceebd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ceec0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ceec3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ceeca: jmp 0x5ceed5 */ goto L_005ceed5;
L_005ceecc:; BB(0x005ceecc);
    /* 005ceecc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ceecf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ceed2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ceed5:; BB(0x005ceed5);
    /* 005ceed5: cmp dword ptr [ebp - 4], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ceed9: jge 0x5cef0c */ if ((fS==fO)) goto L_005cef0c;
L_005ceedb:; BB(0x005ceedb);
    /* 005ceedb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ceede: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ceee1: cmp dword ptr [edx + ecx*4 + 0x324], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x324u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ceee9: jle 0x5cef0a */ if ((fZ||fS!=fO)) goto L_005cef0a;
L_005ceeeb:; BB(0x005ceeeb);
    /* 005ceeeb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ceeee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ceef1: mov ecx, dword ptr [ecx + eax*4 + 0x2b4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2b4u));
    /* 005ceef8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ceefb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ceefe: mov edx, dword ptr [eax + edx*4 + 0x2b4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x2b4u));
    /* 005cef05: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cef07: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5cef0au); call_ind(t); }
L_005cef0a:; BB(0x005cef0a);
    /* 005cef0a: jmp 0x5ceecc */ goto L_005ceecc;
L_005cef0c:; BB(0x005cef0c);
    /* 005cef0c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cef0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cef0f: ret  */ FN_RET(0x005ceeba); r_esp += 4; return;
}

void f_005cef10(void) /* FUN_005cef10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cef10);
    /* 005cef10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cef11: mov ebp, esp */ r_ebp = r_esp;
    /* 005cef13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cef16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cef19: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cef20: jmp 0x5cef2b */ goto L_005cef2b;
L_005cef22:; BB(0x005cef22);
    /* 005cef22: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cef25: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cef28: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cef2b:; BB(0x005cef2b);
    /* 005cef2b: cmp dword ptr [ebp - 4], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cef2f: jge 0x5cef52 */ if ((fS==fO)) goto L_005cef52;
L_005cef31:; BB(0x005cef31);
    /* 005cef31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cef34: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cef37: mov ecx, dword ptr [edx + ecx*4 + 0x2b4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2b4u));
    /* 005cef3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cef41: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cef44: mov eax, dword ptr [edx + eax*4 + 0x2b4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x2b4u));
    /* 005cef4b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cef4d: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cef50u); call_ind(t); }
    /* 005cef50: jmp 0x5cef22 */ goto L_005cef22;
L_005cef52:; BB(0x005cef52);
    /* 005cef52: mov esp, ebp */ r_esp = r_ebp;
    /* 005cef54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cef55: ret  */ FN_RET(0x005cef10); r_esp += 4; return;
}

void f_005cef56(void) /* FUN_005cef56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cef56);
    /* 005cef56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cef57: mov ebp, esp */ r_ebp = r_esp;
    /* 005cef59: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cef5c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cef5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cef66: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cef6d: jmp 0x5cef78 */ goto L_005cef78;
L_005cef6f:; BB(0x005cef6f);
    /* 005cef6f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cef72: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cef75: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005cef78:; BB(0x005cef78);
    /* 005cef78: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cef7c: jge 0x5cef9c */ if ((fS==fO)) goto L_005cef9c;
L_005cef7e:; BB(0x005cef7e);
    /* 005cef7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cef81: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cef84: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cef88: call 0x5cb664 */ r_esp -= 4; W32(r_esp, 0x5cef8du); f_005cb664();
    /* 005cef8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cef8f: je 0x5cef9a */ if (fZ) goto L_005cef9a;
L_005cef91:; BB(0x005cef91);
    /* 005cef91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cef94: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cef97: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cef9a:; BB(0x005cef9a);
    /* 005cef9a: jmp 0x5cef6f */ goto L_005cef6f;
L_005cef9c:; BB(0x005cef9c);
    /* 005cef9c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cef9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cefa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cefa2: ret  */ FN_RET(0x005cef56); r_esp += 4; return;
}

void f_005cefa3(void) /* FUN_005cefa3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cefa3);
    /* 005cefa3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cefa4: mov ebp, esp */ r_ebp = r_esp;
    /* 005cefa6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cefa9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cefac: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cefb2: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x5cefb7u); f_0045cb0a();
    /* 005cefb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cefb9: je 0x5cefd3 */ if (fZ) goto L_005cefd3;
L_005cefbb:; BB(0x005cefbb);
    /* 005cefbb: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cefc2: jne 0x5cefd3 */ if (!fZ) goto L_005cefd3;
L_005cefc4:; BB(0x005cefc4);
    /* 005cefc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cefc6: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cefcb: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005cefce: call 0x4444f8 */ r_esp -= 4; W32(r_esp, 0x5cefd3u); f_004444f8();
L_005cefd3:; BB(0x005cefd3);
    /* 005cefd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cefd5: call 0x6243e0 */ r_esp -= 4; W32(r_esp, 0x5cefdau); f_006243e0();
    /* 005cefda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cefdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cefde: mov ecx, dword ptr [0x6f6ee8] */ r_ecx = R32((u32)(0x6f6ee8u));
    /* 005cefe4: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005cefe7: call 0x5b9cd5 */ r_esp -= 4; W32(r_esp, 0x5cefecu); f_005b9cd5();
    /* 005cefec: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005cefee: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5ceff3u); f_0048ab58();
    /* 005ceff3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ceff6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ceff9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ceffd: je 0x5cf01a */ if (fZ) goto L_005cf01a;
L_005cefff:; BB(0x005cefff);
    /* 005cefff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf001: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf004: call 0x5e6160 */ r_esp -= 4; W32(r_esp, 0x5cf009u); f_005e6160();
    /* 005cf009: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf00c: mov dword ptr [edx], 0x63aed4 */ W32((u32)(r_edx), 0x63aed4u);
    /* 005cf012: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf015: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cf018: jmp 0x5cf021 */ goto L_005cf021;
L_005cf01a:; BB(0x005cf01a);
    /* 005cf01a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005cf021:; BB(0x005cf021);
    /* 005cf021: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf024: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf025: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cf02b: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005cf02e: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x5cf033u); f_005e62ca();
    /* 005cf033: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf035: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf036: ret  */ FN_RET(0x005cefa3); r_esp += 4; return;
}

void f_005cf037(void) /* FUN_005cf037 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf037);
    /* 005cf037: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf038: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf03a: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf03d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cf040: mov dword ptr [ebp - 0x14], 0xc8 */ W32((u32)(r_ebp+0xffffffecu), 0xc8u);
    /* 005cf047: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf04a: call 0x5cf55e */ r_esp -= 4; W32(r_esp, 0x5cf04fu); f_005cf55e();
    /* 005cf04f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cf052: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cf055: mov ecx, dword ptr [eax*8 + 0x698898] */ r_ecx = R32((u32)(r_eax*8+0x698898u));
    /* 005cf05c: sub ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf05f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cf062: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cf065: mov eax, dword ptr [edx*8 + 0x69889c] */ r_eax = R32((u32)(r_edx*8+0x69889cu));
    /* 005cf06c: sub eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cf06f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cf072: push 0x1c2 */ { u32 v = 0x1c2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf077: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf07c: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5cf081u); f_0060ee31();
    /* 005cf081: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf085: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf088: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005cf08b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf08e: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005cf091: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf093: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5cf096u); call_ind(t); }
    /* 005cf096: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf099: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005cf09c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf09f: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005cf0a2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf0a4: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5cf0a7u); call_ind(t); }
    /* 005cf0a7: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf0a9: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cf0aeu); f_0048ab58();
    /* 005cf0ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf0b1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cf0b4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf0b8: je 0x5cf12d */ if (fZ) goto L_005cf12d;
L_005cf0ba:; BB(0x005cf0ba);
    /* 005cf0ba: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cf0bf: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cf0c2: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005cf0c5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf0c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf0c9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf0cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf0cd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cf0d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf0d1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf0d4: call 0x5df72f */ r_esp -= 4; W32(r_esp, 0x5cf0d9u); f_005df72f();
    /* 005cf0d9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf0dc: mov dword ptr [edx], 0x63aef4 */ W32((u32)(r_edx), 0x63aef4u);
    /* 005cf0e2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf0e5: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 005cf0ec: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf0ef: mov dword ptr [ecx + 0x38], 0x3f800000 */ W32((u32)(r_ecx+0x38u), 0x3f800000u);
    /* 005cf0f6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf0f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf0fc: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 005cf0ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf102: mov dword ptr [ecx + 0x3c], 0xa */ W32((u32)(r_ecx+0x3cu), 0xau);
    /* 005cf109: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf10c: fild dword ptr [edx + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x3cu)));
    /* 005cf10f: fdivr dword ptr [0x63aee8] */ ST(0) = R_F32((u32)(0x63aee8u)) / ST(0);
    /* 005cf115: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf118: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 005cf11b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf11e: mov dword ptr [ecx + 0x44], 0x3f800000 */ W32((u32)(r_ecx+0x44u), 0x3f800000u);
    /* 005cf125: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf128: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005cf12b: jmp 0x5cf134 */ goto L_005cf134;
L_005cf12d:; BB(0x005cf12d);
    /* 005cf12d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005cf134:; BB(0x005cf134);
    /* 005cf134: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cf137: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cf13a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf13d: mov dword ptr [ecx + 0x3c], 0x14 */ W32((u32)(r_ecx+0x3cu), 0x14u);
    /* 005cf144: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf147: fild dword ptr [edx + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x3cu)));
    /* 005cf14a: fdivr dword ptr [0x63aee8] */ ST(0) = R_F32((u32)(0x63aee8u)) / ST(0);
    /* 005cf150: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf153: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 005cf156: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf159: mov dword ptr [ecx + 0x38], 0x3fc00000 */ W32((u32)(r_ecx+0x38u), 0x3fc00000u);
    /* 005cf160: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf163: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf164: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf167: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005cf16a: call 0x5d4df6 */ r_esp -= 4; W32(r_esp, 0x5cf16fu); f_005d4df6();
    /* 005cf16f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf171: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf172: ret  */ FN_RET(0x005cf037); r_esp += 4; return;
}

void f_005cf173(void) /* FUN_005cf173 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf173);
    /* 005cf173: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf174: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf176: sub esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf17c: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 005cf182: mov dword ptr [ebp - 0xa8], 0x18 */ W32((u32)(r_ebp+0xffffff58u), 0x18u);
    /* 005cf18c: mov dword ptr [ebp - 0xa4], 3 */ W32((u32)(r_ebp+0xffffff5cu), 0x3u);
    /* 005cf196: mov dword ptr [ebp - 0xa0], 0xf */ W32((u32)(r_ebp+0xffffff60u), 0xfu);
    /* 005cf1a0: mov dword ptr [ebp - 0x9c], 0x22 */ W32((u32)(r_ebp+0xffffff64u), 0x22u);
    /* 005cf1aa: mov dword ptr [ebp - 0x98], 0x16 */ W32((u32)(r_ebp+0xffffff68u), 0x16u);
    /* 005cf1b4: mov dword ptr [ebp - 0x94], 5 */ W32((u32)(r_ebp+0xffffff6cu), 0x5u);
    /* 005cf1be: mov dword ptr [ebp - 0x90], 0x11 */ W32((u32)(r_ebp+0xffffff70u), 0x11u);
    /* 005cf1c8: mov dword ptr [ebp - 0x8c], 0x20 */ W32((u32)(r_ebp+0xffffff74u), 0x20u);
    /* 005cf1d2: mov dword ptr [ebp - 0x88], 0x14 */ W32((u32)(r_ebp+0xffffff78u), 0x14u);
    /* 005cf1dc: mov dword ptr [ebp - 0x84], 7 */ W32((u32)(r_ebp+0xffffff7cu), 0x7u);
    /* 005cf1e6: mov dword ptr [ebp - 0x80], 0xb */ W32((u32)(r_ebp+0xffffff80u), 0xbu);
    /* 005cf1ed: mov dword ptr [ebp - 0x7c], 0x1e */ W32((u32)(r_ebp+0xffffff84u), 0x1eu);
    /* 005cf1f4: mov dword ptr [ebp - 0x78], 0x1a */ W32((u32)(r_ebp+0xffffff88u), 0x1au);
    /* 005cf1fb: mov dword ptr [ebp - 0x74], 9 */ W32((u32)(r_ebp+0xffffff8cu), 0x9u);
    /* 005cf202: mov dword ptr [ebp - 0x70], 0x1c */ W32((u32)(r_ebp+0xffffff90u), 0x1cu);
    /* 005cf209: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005cf210: mov dword ptr [ebp - 0x68], 2 */ W32((u32)(r_ebp+0xffffff98u), 0x2u);
    /* 005cf217: mov dword ptr [ebp - 0x64], 0xe */ W32((u32)(r_ebp+0xffffff9cu), 0xeu);
    /* 005cf21e: mov dword ptr [ebp - 0x60], 0x23 */ W32((u32)(r_ebp+0xffffffa0u), 0x23u);
    /* 005cf225: mov dword ptr [ebp - 0x5c], 0x17 */ W32((u32)(r_ebp+0xffffffa4u), 0x17u);
    /* 005cf22c: mov dword ptr [ebp - 0x58], 4 */ W32((u32)(r_ebp+0xffffffa8u), 0x4u);
    /* 005cf233: mov dword ptr [ebp - 0x54], 0x10 */ W32((u32)(r_ebp+0xffffffacu), 0x10u);
    /* 005cf23a: mov dword ptr [ebp - 0x50], 0x21 */ W32((u32)(r_ebp+0xffffffb0u), 0x21u);
    /* 005cf241: mov dword ptr [ebp - 0x4c], 0x15 */ W32((u32)(r_ebp+0xffffffb4u), 0x15u);
    /* 005cf248: mov dword ptr [ebp - 0x48], 6 */ W32((u32)(r_ebp+0xffffffb8u), 0x6u);
    /* 005cf24f: mov dword ptr [ebp - 0x44], 0x12 */ W32((u32)(r_ebp+0xffffffbcu), 0x12u);
    /* 005cf256: mov dword ptr [ebp - 0x40], 0x1f */ W32((u32)(r_ebp+0xffffffc0u), 0x1fu);
    /* 005cf25d: mov dword ptr [ebp - 0x3c], 0x13 */ W32((u32)(r_ebp+0xffffffc4u), 0x13u);
    /* 005cf264: mov dword ptr [ebp - 0x38], 8 */ W32((u32)(r_ebp+0xffffffc8u), 0x8u);
    /* 005cf26b: mov dword ptr [ebp - 0x34], 0xc */ W32((u32)(r_ebp+0xffffffccu), 0xcu);
    /* 005cf272: mov dword ptr [ebp - 0x30], 0x1d */ W32((u32)(r_ebp+0xffffffd0u), 0x1du);
    /* 005cf279: mov dword ptr [ebp - 0x2c], 0x19 */ W32((u32)(r_ebp+0xffffffd4u), 0x19u);
    /* 005cf280: mov dword ptr [ebp - 0x28], 0xa */ W32((u32)(r_ebp+0xffffffd8u), 0xau);
    /* 005cf287: mov dword ptr [ebp - 0x24], 0x1b */ W32((u32)(r_ebp+0xffffffdcu), 0x1bu);
    /* 005cf28e: mov dword ptr [ebp - 0x20], 0x25 */ W32((u32)(r_ebp+0xffffffe0u), 0x25u);
    /* 005cf295: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 005cf29c: mov dword ptr [ebp - 0x18], 0xd */ W32((u32)(r_ebp+0xffffffe8u), 0xdu);
    /* 005cf2a3: mov dword ptr [ebp - 0x14], 0x24 */ W32((u32)(r_ebp+0xffffffecu), 0x24u);
    /* 005cf2aa: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf2b0: mov eax, dword ptr [eax + 0x320] */ r_eax = R32((u32)(r_eax+0x320u));
    /* 005cf2b6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cf2b7: mov ecx, 3 */ r_ecx = 0x3u;
    /* 005cf2bc: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cf2bc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cf2bc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cf2be: mov edx, dword ptr [ebp + eax*4 - 0xa8] */ r_edx = R32((u32)(r_ebp+r_eax*4+0xffffff58u));
    /* 005cf2c5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005cf2c8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf2cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf2cc: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf2d2: call 0x5cf545 */ r_esp -= 4; W32(r_esp, 0x5cf2d7u); f_005cf545();
    /* 005cf2d7: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cf2dd: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x5cf2e2u); f_0045cb0a();
    /* 005cf2e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf2e4: je 0x5cf467 */ if (fZ) goto L_005cf467;
L_005cf2ea:; BB(0x005cf2ea);
    /* 005cf2ea: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf2f1: jne 0x5cf467 */ if (!fZ) goto L_005cf467;
L_005cf2f7:; BB(0x005cf2f7);
    /* 005cf2f7: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cf2fd: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 005cf300: call 0x44456f */ r_esp -= 4; W32(r_esp, 0x5cf305u); f_0044456f();
    /* 005cf305: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cf30c: jmp 0x5cf317 */ goto L_005cf317;
L_005cf30e:; BB(0x005cf30e);
    /* 005cf30e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf311: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cf314: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005cf317:; BB(0x005cf317);
    /* 005cf317: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf31b: jge 0x5cf359 */ if ((fS==fO)) goto L_005cf359;
L_005cf31d:; BB(0x005cf31d);
    /* 005cf31d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf320: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cf326: cmp dword ptr [ecx + eax*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf32b: je 0x5cf357 */ if (fZ) goto L_005cf357;
L_005cf32d:; BB(0x005cf32d);
    /* 005cf32d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf330: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005cf335: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cf339: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5cf33eu); f_00425973();
    /* 005cf33e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf340: je 0x5cf357 */ if (fZ) goto L_005cf357;
L_005cf342:; BB(0x005cf342);
    /* 005cf342: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf345: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cf34b: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cf34f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005cf352: call 0x41fb49 */ r_esp -= 4; W32(r_esp, 0x5cf357u); f_0041fb49();
L_005cf357:; BB(0x005cf357);
    /* 005cf357: jmp 0x5cf30e */ goto L_005cf30e;
L_005cf359:; BB(0x005cf359);
    /* 005cf359: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf35f: mov ecx, dword ptr [ecx + 0x2a4] */ r_ecx = R32((u32)(r_ecx+0x2a4u));
    /* 005cf365: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf36b: mov eax, dword ptr [edx + 0x2a4] */ r_eax = R32((u32)(r_edx+0x2a4u));
    /* 005cf371: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf373: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5cf376u); call_ind(t); }
    /* 005cf376: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf37c: mov ecx, dword ptr [eax + 0x2a8] */ r_ecx = R32((u32)(r_eax+0x2a8u));
    /* 005cf382: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf388: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 005cf38e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf390: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cf393u); call_ind(t); }
    /* 005cf393: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf399: mov ecx, dword ptr [eax + 0x2ac] */ r_ecx = R32((u32)(r_eax+0x2acu));
    /* 005cf39f: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf3a5: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 005cf3ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf3ad: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cf3b0u); call_ind(t); }
    /* 005cf3b0: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf3b6: mov ecx, dword ptr [eax + 0x2b0] */ r_ecx = R32((u32)(r_eax+0x2b0u));
    /* 005cf3bc: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf3c2: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005cf3c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf3ca: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cf3cdu); call_ind(t); }
    /* 005cf3cd: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cf3d4: jmp 0x5cf3df */ goto L_005cf3df;
L_005cf3d6:; BB(0x005cf3d6);
    /* 005cf3d6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf3d9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cf3dc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005cf3df:; BB(0x005cf3df);
    /* 005cf3df: cmp dword ptr [ebp - 0xc], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf3e6: jge 0x5cf467 */ if ((fS==fO)) goto L_005cf467;
L_005cf3e8:; BB(0x005cf3e8);
    /* 005cf3e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf3eb: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cf3f1: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cf3f5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cf3f8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf3fc: jne 0x5cf400 */ if (!fZ) goto L_005cf400;
L_005cf3fe:; BB(0x005cf3fe);
    /* 005cf3fe: jmp 0x5cf3d6 */ goto L_005cf3d6;
L_005cf400:; BB(0x005cf400);
    /* 005cf400: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cf407: jmp 0x5cf412 */ goto L_005cf412;
L_005cf409:; BB(0x005cf409);
    /* 005cf409: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf40c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf40f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cf412:; BB(0x005cf412);
    /* 005cf412: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf416: jge 0x5cf462 */ if ((fS==fO)) goto L_005cf462;
L_005cf418:; BB(0x005cf418);
    /* 005cf418: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf41b: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005cf41e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cf421: cmp dword ptr [eax + edx + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf426: je 0x5cf460 */ if (fZ) goto L_005cf460;
L_005cf428:; BB(0x005cf428);
    /* 005cf428: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf42b: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005cf42e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cf431: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 005cf435: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf439: je 0x5cf460 */ if (fZ) goto L_005cf460;
L_005cf43b:; BB(0x005cf43b);
    /* 005cf43b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf43e: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005cf441: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cf444: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 005cf448: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005cf44b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf44e: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005cf451: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cf454: mov edx, dword ptr [eax + edx + 0x6c] */ r_edx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 005cf458: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005cf45b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf45d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5cf460u); call_ind(t); }
L_005cf460:; BB(0x005cf460);
    /* 005cf460: jmp 0x5cf409 */ goto L_005cf409;
L_005cf462:; BB(0x005cf462);
    /* 005cf462: jmp 0x5cf3d6 */ goto L_005cf3d6;
L_005cf467:; BB(0x005cf467);
    /* 005cf467: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf469: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cf46e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cf471: call 0x5e62ca */ r_esp -= 4; W32(r_esp, 0x5cf476u); f_005e62ca();
    /* 005cf476: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf478: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf47e: mov ecx, dword ptr [ecx + 0x2ac] */ r_ecx = R32((u32)(r_ecx+0x2acu));
    /* 005cf484: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5cf489u); f_005e4060();
    /* 005cf489: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf48d: jne 0x5cf4b3 */ if (!fZ) goto L_005cf4b3;
L_005cf48f:; BB(0x005cf48f);
    /* 005cf48f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf491: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf493: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf495: push 0xc398 */ { u32 v = 0xc398u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf49a: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf4a0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005cf4a3: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf4a9: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005cf4ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cf4ae: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5cf4b1u); call_ind(t); }
    /* 005cf4b1: jmp 0x5cf503 */ goto L_005cf503;
L_005cf4b3:; BB(0x005cf4b3);
    /* 005cf4b3: cmp dword ptr [ebp - 0x10], 0x25 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf4b7: jne 0x5cf4dd */ if (!fZ) goto L_005cf4dd;
L_005cf4b9:; BB(0x005cf4b9);
    /* 005cf4b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4bf: push 0xc398 */ { u32 v = 0xc398u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4c4: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf4ca: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cf4cd: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf4d3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cf4d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf4d8: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5cf4dbu); call_ind(t); }
    /* 005cf4db: jmp 0x5cf503 */ goto L_005cf503;
L_005cf4dd:; BB(0x005cf4dd);
    /* 005cf4dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4e1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf4e4: lea ecx, [eax + eax + 0xc34e] */ r_ecx = (u32)(r_eax+r_eax+0xc34eu);
    /* 005cf4eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4ec: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf4f2: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005cf4f5: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf4fb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005cf4fe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cf500: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5cf503u); call_ind(t); }
L_005cf503:; BB(0x005cf503);
    /* 005cf503: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf505: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cf50b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cf50e: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cf514: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cf517: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf519: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cf51cu); call_ind(t); }
    /* 005cf51c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf51e: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf524: call 0x5ced99 */ r_esp -= 4; W32(r_esp, 0x5cf529u); f_005ced99();
    /* 005cf529: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf52b: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf531: call 0x5cc5a5 */ r_esp -= 4; W32(r_esp, 0x5cf536u); f_005cc5a5();
    /* 005cf536: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cf53c: call 0x5cf037 */ r_esp -= 4; W32(r_esp, 0x5cf541u); f_005cf037();
    /* 005cf541: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf543: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf544: ret  */ FN_RET(0x005cf173); r_esp += 4; return;
}

void f_005cf545(void) /* FUN_005cf545 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf545);
    /* 005cf545: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf546: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf548: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf549: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf54c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf54f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cf552: mov dword ptr [eax + 0x3b8], ecx */ W32((u32)(r_eax+0x3b8u), r_ecx);
    /* 005cf558: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf55a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf55b: ret 4 */ FN_RET(0x005cf545); r_esp += 8; return;
}

void f_005cf55e(void) /* FUN_005cf55e */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf55e);
    /* 005cf55e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf55f: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf561: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf562: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf565: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf568: mov eax, dword ptr [eax + 0x3b8] */ r_eax = R32((u32)(r_eax+0x3b8u));
    /* 005cf56e: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf570: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf571: ret  */ FN_RET(0x005cf55e); r_esp += 4; return;
}

void f_005cf572(void) /* FUN_005cf572 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf572);
    /* 005cf572: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf573: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf575: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf576: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf579: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf57c: mov ecx, dword ptr [eax + 0x3b8] */ r_ecx = R32((u32)(r_eax+0x3b8u));
    /* 005cf582: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cf584: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf587: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005cf58a: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf58c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf58d: ret 4 */ FN_RET(0x005cf572); r_esp += 8; return;
}

void f_005cf590(void) /* FUN_005cf590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf590);
    /* 005cf590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf591: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf593: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf596: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cf599: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cf5a0: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 005cf5a7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cf5ae: jmp 0x5cf5b9 */ goto L_005cf5b9;
L_005cf5b0:; BB(0x005cf5b0);
    /* 005cf5b0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf5b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cf5b6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005cf5b9:; BB(0x005cf5b9);
    /* 005cf5b9: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf5bd: jge 0x5cf600 */ if ((fS==fO)) goto L_005cf600;
L_005cf5bf:; BB(0x005cf5bf);
    /* 005cf5bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf5c2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf5c5: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf5ca: je 0x5cf5fe */ if (fZ) goto L_005cf5fe;
L_005cf5cc:; BB(0x005cf5cc);
    /* 005cf5cc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf5cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf5d2: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cf5d6: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005cf5d9: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x5cf5deu); f_00426819();
    /* 005cf5de: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf5e1: jge 0x5cf5fe */ if ((fS==fO)) goto L_005cf5fe;
L_005cf5e3:; BB(0x005cf5e3);
    /* 005cf5e3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf5e6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf5e9: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cf5ed: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005cf5f0: call 0x426819 */ r_esp -= 4; W32(r_esp, 0x5cf5f5u); f_00426819();
    /* 005cf5f5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cf5f8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf5fb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005cf5fe:; BB(0x005cf5fe);
    /* 005cf5fe: jmp 0x5cf5b0 */ goto L_005cf5b0;
L_005cf600:; BB(0x005cf600);
    /* 005cf600: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cf603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf604: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cf60a: call 0x449093 */ r_esp -= 4; W32(r_esp, 0x5cf60fu); f_00449093();
    /* 005cf60f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cf612: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf614: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf615: ret  */ FN_RET(0x005cf590); r_esp += 4; return;
}

void f_005cf616(void) /* FUN_005cf616 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf616);
    /* 005cf616: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf617: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf619: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf61a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf61d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf620: cmp dword ptr [eax + 0x31c], 0 */ {  u32 a = R32((u32)(r_eax+0x31cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf627: jle 0x5cf62b */ if ((fZ||fS!=fO)) goto L_005cf62b;
L_005cf629:; BB(0x005cf629);
    /* 005cf629: jmp 0x5cf633 */ goto L_005cf633;
L_005cf62b:; BB(0x005cf62b);
    /* 005cf62b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf62e: call 0x5cf637 */ r_esp -= 4; W32(r_esp, 0x5cf633u); f_005cf637();
L_005cf633:; BB(0x005cf633);
    /* 005cf633: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf635: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf636: ret  */ FN_RET(0x005cf616); r_esp += 4; return;
}

void f_005cf637(void) /* FUN_005cf637 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf637);
    /* 005cf637: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf638: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf63a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf63b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf63e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf641: mov ecx, dword ptr [eax + 0x31c] */ r_ecx = R32((u32)(r_eax+0x31cu));
    /* 005cf647: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf64a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf64d: mov dword ptr [edx + 0x31c], ecx */ W32((u32)(r_edx+0x31cu), r_ecx);
    /* 005cf653: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cf659: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x5cf65eu); f_00448e5d();
    /* 005cf65e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf661: cmp dword ptr [ecx + 0x31c], eax */ {  u32 a = R32((u32)(r_ecx+0x31cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf667: jle 0x5cf67f */ if ((fZ||fS!=fO)) goto L_005cf67f;
L_005cf669:; BB(0x005cf669);
    /* 005cf669: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf66c: call 0x5cc71a */ r_esp -= 4; W32(r_esp, 0x5cf671u); f_005cc71a();
    /* 005cf671: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf673: je 0x5cf67f */ if (fZ) goto L_005cf67f;
L_005cf675:; BB(0x005cf675);
    /* 005cf675: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf678: call 0x5cf6c9 */ r_esp -= 4; W32(r_esp, 0x5cf67du); f_005cf6c9();
    /* 005cf67d: jmp 0x5cf6c5 */ goto L_005cf6c5;
L_005cf67f:; BB(0x005cf67f);
    /* 005cf67f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf682: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 005cf688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf689: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cf68f: call 0x448ea9 */ r_esp -= 4; W32(r_esp, 0x5cf694u); f_00448ea9();
    /* 005cf694: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf696: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cf69c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cf69f: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cf6a5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cf6a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf6aa: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cf6adu); call_ind(t); }
    /* 005cf6ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf6af: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cf6b4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cf6b7: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cf6bd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cf6c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf6c2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5cf6c5u); call_ind(t); }
L_005cf6c5:; BB(0x005cf6c5);
    /* 005cf6c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf6c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf6c8: ret  */ FN_RET(0x005cf637); r_esp += 4; return;
}

void f_005cf6c9(void) /* FUN_005cf6c9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf6c9);
    /* 005cf6c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf6ca: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf6cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf6cd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf6d0: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cf6d6: call 0x448e5d */ r_esp -= 4; W32(r_esp, 0x5cf6dbu); f_00448e5d();
    /* 005cf6db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf6de: cmp dword ptr [ecx + 0x31c], eax */ {  u32 a = R32((u32)(r_ecx+0x31cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf6e4: jg 0x5cf6f3 */ if ((!fZ&&fS==fO)) goto L_005cf6f3;
L_005cf6e6:; BB(0x005cf6e6);
    /* 005cf6e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf6e9: call 0x5cef56 */ r_esp -= 4; W32(r_esp, 0x5cf6eeu); f_005cef56();
    /* 005cf6ee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf6f1: jne 0x5cf722 */ if (!fZ) goto L_005cf722;
L_005cf6f3:; BB(0x005cf6f3);
    /* 005cf6f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf6f6: call 0x5cef56 */ r_esp -= 4; W32(r_esp, 0x5cf6fbu); f_005cef56();
    /* 005cf6fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf6fd: jne 0x5cf71a */ if (!fZ) goto L_005cf71a;
L_005cf6ff:; BB(0x005cf6ff);
    /* 005cf6ff: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf704: push 0x699028 */ { u32 v = 0x699028u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf709: push 0x699038 */ { u32 v = 0x699038u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf70e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf710: call 0x60f9f3 */ r_esp -= 4; W32(r_esp, 0x5cf715u); f_0060f9f3();
    /* 005cf715: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf718: jmp 0x5cf722 */ goto L_005cf722;
L_005cf71a:; BB(0x005cf71a);
    /* 005cf71a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf71d: call 0x5cf590 */ r_esp -= 4; W32(r_esp, 0x5cf722u); f_005cf590();
L_005cf722:; BB(0x005cf722);
    /* 005cf722: mov edx, dword ptr [0x6f6eec] */ r_edx = R32((u32)(0x6f6eecu));
    /* 005cf728: mov dword ptr [edx + 0x12ec4], 0 */ W32((u32)(r_edx+0x12ec4u), 0x0u);
    /* 005cf732: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf734: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf736: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cf73b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cf73e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf73f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf741: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf744: call 0x5cdd8e */ r_esp -= 4; W32(r_esp, 0x5cf749u); f_005cdd8e();
    /* 005cf749: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf74b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf74c: ret  */ FN_RET(0x005cf6c9); r_esp += 4; return;
}

void f_005cf74d(void) /* FUN_005cf74d */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf74d);
    /* 005cf74d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf74e: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf750: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf753: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005cf756: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 005cf75d: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005cf764: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cf76b: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cf771: call 0x4490ac */ r_esp -= 4; W32(r_esp, 0x5cf776u); f_004490ac();
    /* 005cf776: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cf779: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf77c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf77f: mov dword ptr [eax + 0x38c], ecx */ W32((u32)(r_eax+0x38cu), r_ecx);
    /* 005cf785: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf789: je 0x5cf7b9 */ if (fZ) goto L_005cf7b9;
L_005cf78b:; BB(0x005cf78b);
    /* 005cf78b: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005cf78e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf78f: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cf795: call 0x448e71 */ r_esp -= 4; W32(r_esp, 0x5cf79au); f_00448e71();
    /* 005cf79a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cf79d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf79e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf7a1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf7a4: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005cf7a8: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x5cf7adu); f_004259cd();
    /* 005cf7ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7ae: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cf7b4: call 0x448d62 */ r_esp -= 4; W32(r_esp, 0x5cf7b9u); f_00448d62();
L_005cf7b9:; BB(0x005cf7b9);
    /* 005cf7b9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf7bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf7bf: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005cf7c3: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5cf7c8u); f_004259a0();
    /* 005cf7c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf7ca: je 0x5cf821 */ if (fZ) goto L_005cf821;
L_005cf7cc:; BB(0x005cf7cc);
    /* 005cf7cc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf7cf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf7d2: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cf7d6: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005cf7d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7da: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cf7e0: call 0x45c475 */ r_esp -= 4; W32(r_esp, 0x5cf7e5u); f_0045c475();
    /* 005cf7e5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005cf7e8: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 005cf7eb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cf7ee: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005cf7f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf7f4: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cf7f7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cf7fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf800: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005cf803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf804: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf806: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf809: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf80c: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005cf810: call 0x4259cd */ r_esp -= 4; W32(r_esp, 0x5cf815u); f_004259cd();
    /* 005cf815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf816: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cf81c: call 0x45cde1 */ r_esp -= 4; W32(r_esp, 0x5cf821u); f_0045cde1();
L_005cf821:; BB(0x005cf821);
    /* 005cf821: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf826: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cf82c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cf82e: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cf834: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5cf837u); call_ind(t); }
    /* 005cf837: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf839: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf83a: ret  */ FN_RET(0x005cf74d); r_esp += 4; return;
}

void f_005cf83b(void) /* FUN_005cf83b */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf83b);
    /* 005cf83b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf83c: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf83e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf83f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf842: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf845: call 0x5e3fb0 */ r_esp -= 4; W32(r_esp, 0x5cf84au); f_005e3fb0();
    /* 005cf84a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf84d: mov dword ptr [eax], 0x63af0c */ W32((u32)(r_eax), 0x63af0cu);
    /* 005cf853: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf856: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 005cf85d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf860: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf862: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf863: ret  */ FN_RET(0x005cf83b); r_esp += 4; return;
}

void f_005cf864(void) /* FUN_005cf864 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf864);
    /* 005cf864: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf865: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf867: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf868: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf86b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf86e: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5cf873u); f_005d5d20();
    /* 005cf873: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf876: mov dword ptr [eax], 0x63af5c */ W32((u32)(r_eax), 0x63af5cu);
    /* 005cf87c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf87f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf881: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf882: ret  */ FN_RET(0x005cf864); r_esp += 4; return;
}

void f_005cf883(void) /* FUN_005cf883 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf883);
    /* 005cf883: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf884: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf886: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf887: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf88a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf88d: mov dword ptr [eax], 0x63af5c */ W32((u32)(r_eax), 0x63af5cu);
    /* 005cf893: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf896: call 0x5d5dfb */ r_esp -= 4; W32(r_esp, 0x5cf89bu); f_005d5dfb();
    /* 005cf89b: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf89d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf89e: ret  */ FN_RET(0x005cf883); r_esp += 4; return;
}

void f_005cf89f(void) /* FUN_005cf89f */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf89f);
    /* 005cf89f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8a0: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf8a2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf8a5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf8a8: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf8af: je 0x5cf8f7 */ if (fZ) goto L_005cf8f7;
L_005cf8b1:; BB(0x005cf8b1);
    /* 005cf8b1: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005cf8b6: mov dword ptr [eax + 0x3ac], 0 */ W32((u32)(r_eax+0x3acu), 0x0u);
    /* 005cf8c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf8c5: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5cf8cau); f_005d6635();
    /* 005cf8ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf8cd: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cf8d0: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x5cf8d5u); f_005e03cc();
    /* 005cf8d5: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cf8db: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cf8e0u); f_005cd326();
    /* 005cf8e0: mov ecx, eax */ r_ecx = r_eax;
    /* 005cf8e2: call 0x5cb22d */ r_esp -= 4; W32(r_esp, 0x5cf8e7u); f_005cb22d();
    /* 005cf8e7: mov ecx, dword ptr [0x6fc388] */ r_ecx = R32((u32)(0x6fc388u));
    /* 005cf8ed: call 0x5d2a68 */ r_esp -= 4; W32(r_esp, 0x5cf8f2u); f_005d2a68();
    /* 005cf8f2: jmp 0x5cf99c */ goto L_005cf99c;
L_005cf8f7:; BB(0x005cf8f7);
    /* 005cf8f7: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cf8fd: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cf902u); f_005cd326();
    /* 005cf902: mov ecx, eax */ r_ecx = r_eax;
    /* 005cf904: call 0x4259a0 */ r_esp -= 4; W32(r_esp, 0x5cf909u); f_004259a0();
    /* 005cf909: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf90b: je 0x5cf99c */ if (fZ) goto L_005cf99c;
L_005cf911:; BB(0x005cf911);
    /* 005cf911: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cf917: call 0x5cc572 */ r_esp -= 4; W32(r_esp, 0x5cf91cu); f_005cc572();
    /* 005cf91c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf91e: jne 0x5cf99c */ if (!fZ) goto L_005cf99c;
L_005cf920:; BB(0x005cf920);
    /* 005cf920: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cf926: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cf92bu); f_005cd326();
    /* 005cf92b: mov ecx, eax */ r_ecx = r_eax;
    /* 005cf92d: call 0x5cb22d */ r_esp -= 4; W32(r_esp, 0x5cf932u); f_005cb22d();
    /* 005cf932: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cf938: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cf93du); f_005cd326();
    /* 005cf93d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cf940: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cf943: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cf945: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cf948: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5cf94bu); call_ind(t); }
    /* 005cf94b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf94d: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005cf953: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005cf956: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cf95c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cf95f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf961: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cf964u); call_ind(t); }
    /* 005cf964: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf966: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cf96b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cf96e: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cf974: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cf977: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf979: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5cf97cu); call_ind(t); }
    /* 005cf97c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf97f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf981: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf984: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cf987u); call_ind(t); }
    /* 005cf987: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf989: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf98c: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5cf991u); f_005d6635();
    /* 005cf991: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf994: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cf997: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x5cf99cu); f_005e03cc();
L_005cf99c:; BB(0x005cf99c);
    /* 005cf99c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf99e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf99f: ret  */ FN_RET(0x005cf89f); r_esp += 4; return;
}

void f_005cf9a0(void) /* FUN_005cf9a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf9a0);
    /* 005cf9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf9a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf9a7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cf9aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cf9ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf9b2: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x5cf9b7u); f_005d80f0();
    /* 005cf9b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf9ba: mov dword ptr [edx], 0x63afcc */ W32((u32)(r_edx), 0x63afccu);
    /* 005cf9c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf9c3: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 005cf9cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf9d0: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 005cf9da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf9dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf9df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf9e0: ret 8 */ FN_RET(0x005cf9a0); r_esp += 12; return;
}

void f_005cf9e3(void) /* FUN_005cf9e3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf9e3);
    /* 005cf9e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9e4: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf9e6: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf9e9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cf9ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf9ef: mov dword ptr [eax], 0x63afcc */ W32((u32)(r_eax), 0x63afccu);
    /* 005cf9f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cf9f8: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf9ff: je 0x5cfa3e */ if (fZ) goto L_005cfa3e;
L_005cfa01:; BB(0x005cfa01);
    /* 005cfa01: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfa04: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005cfa0a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cfa0d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfa10: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cfa13: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfa17: je 0x5cfa2a */ if (fZ) goto L_005cfa2a;
L_005cfa19:; BB(0x005cfa19);
    /* 005cfa19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa1b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfa1e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cfa20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfa23: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5cfa25u); call_ind(t); }
    /* 005cfa25: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cfa28: jmp 0x5cfa31 */ goto L_005cfa31;
L_005cfa2a:; BB(0x005cfa2a);
    /* 005cfa2a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005cfa31:; BB(0x005cfa31);
    /* 005cfa31: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfa34: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
L_005cfa3e:; BB(0x005cfa3e);
    /* 005cfa3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfa41: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfa48: je 0x5cfa87 */ if (fZ) goto L_005cfa87;
L_005cfa4a:; BB(0x005cfa4a);
    /* 005cfa4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfa4d: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005cfa53: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cfa56: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfa59: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005cfa5c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfa60: je 0x5cfa73 */ if (fZ) goto L_005cfa73;
L_005cfa62:; BB(0x005cfa62);
    /* 005cfa62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa64: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfa67: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfa69: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfa6c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5cfa6eu); call_ind(t); }
    /* 005cfa6e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cfa71: jmp 0x5cfa7a */ goto L_005cfa7a;
L_005cfa73:; BB(0x005cfa73);
    /* 005cfa73: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005cfa7a:; BB(0x005cfa7a);
    /* 005cfa7a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfa7d: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
L_005cfa87:; BB(0x005cfa87);
    /* 005cfa87: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfa8a: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x5cfa8fu); f_005d8154();
    /* 005cfa8f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfa91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfa92: ret  */ FN_RET(0x005cf9e3); r_esp += 4; return;
}

void f_005cfa93(void) /* FUN_005cfa93 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cfa93);
    /* 005cfa93: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa94: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfa96: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfa99: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cfa9c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa9e: push 0x699044 */ { u32 v = 0x699044u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfaa3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfaa6: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x5cfaabu); f_005d825e();
    /* 005cfaab: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfaad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfab0: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x5cfab5u); f_005e0731();
    /* 005cfab5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfab8: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfabf: jne 0x5cfaf7 */ if (!fZ) goto L_005cfaf7;
L_005cfac1:; BB(0x005cfac1);
    /* 005cfac1: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfac6: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cfacbu); f_0048ab58();
    /* 005cfacb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cface: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cfad1: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfad5: je 0x5cfae4 */ if (fZ) goto L_005cfae4;
L_005cfad7:; BB(0x005cfad7);
    /* 005cfad7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfada: call 0x5cf864 */ r_esp -= 4; W32(r_esp, 0x5cfadfu); f_005cf864();
    /* 005cfadf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cfae2: jmp 0x5cfaeb */ goto L_005cfaeb;
L_005cfae4:; BB(0x005cfae4);
    /* 005cfae4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005cfaeb:; BB(0x005cfaeb);
    /* 005cfaeb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfaee: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfaf1: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
L_005cfaf7:; BB(0x005cfaf7);
    /* 005cfaf7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfafa: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfb00: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb03: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005cfb06: push 0x6fc0d8 */ { u32 v = 0x6fc0d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb0b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb0e: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfb14: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb17: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005cfb1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfb1f: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5cfb22u); call_ind(t); }
    /* 005cfb22: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb24: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb26: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb28: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb2b: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfb31: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb34: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005cfb3a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfb3c: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5cfb3fu); call_ind(t); }
    /* 005cfb3f: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb44: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb47: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfb4d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb50: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005cfb56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfb58: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5cfb5bu); call_ind(t); }
    /* 005cfb5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb5f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb62: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfb68: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb6b: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005cfb71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfb73: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5cfb76u); call_ind(t); }
    /* 005cfb76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb78: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb7b: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfb81: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb84: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005cfb8a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfb8c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cfb8fu); call_ind(t); }
    /* 005cfb8f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb91: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb93: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb95: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb97: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb9a: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfba0: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5cfba5u); f_005d5ff2();
    /* 005cfba5: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfbac: je 0x5cfbd0 */ if (fZ) goto L_005cfbd0;
L_005cfbae:; BB(0x005cfbae);
    /* 005cfbae: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbb0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfbb3: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005cfbb9: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x5cfbbeu); f_005d65d6();
    /* 005cfbbe: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbc0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfbc3: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005cfbc9: call 0x5d65f9 */ r_esp -= 4; W32(r_esp, 0x5cfbceu); f_005d65f9();
    /* 005cfbce: jmp 0x5cfbe0 */ goto L_005cfbe0;
L_005cfbd0:; BB(0x005cfbd0);
    /* 005cfbd0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbd2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfbd5: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfbdb: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x5cfbe0u); f_005d65d6();
L_005cfbe0:; BB(0x005cfbe0);
    /* 005cfbe0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfbe3: cmp dword ptr [ecx + 0x90], 0 */ {  u32 a = R32((u32)(r_ecx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfbea: jne 0x5cfc22 */ if (!fZ) goto L_005cfc22;
L_005cfbec:; BB(0x005cfbec);
    /* 005cfbec: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbf1: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5cfbf6u); f_0048ab58();
    /* 005cfbf6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfbf9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cfbfc: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfc00: je 0x5cfc0f */ if (fZ) goto L_005cfc0f;
L_005cfc02:; BB(0x005cfc02);
    /* 005cfc02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfc05: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5cfc0au); f_005e8590();
    /* 005cfc0a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cfc0d: jmp 0x5cfc16 */ goto L_005cfc16;
L_005cfc0f:; BB(0x005cfc0f);
    /* 005cfc0f: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005cfc16:; BB(0x005cfc16);
    /* 005cfc16: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc19: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfc1c: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
L_005cfc22:; BB(0x005cfc22);
    /* 005cfc22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc25: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 005cfc2b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc2e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005cfc31: push 0x6fc0dc */ { u32 v = 0x6fc0dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc39: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005cfc3f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc42: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005cfc48: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfc4a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5cfc4du); call_ind(t); }
    /* 005cfc4d: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc4f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc52: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005cfc58: call 0x5e87aa */ r_esp -= 4; W32(r_esp, 0x5cfc5du); f_005e87aa();
    /* 005cfc5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc60: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005cfc66: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc69: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005cfc6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfc71: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x5cfc74u); call_ind(t); }
    /* 005cfc74: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc76: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc79: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005cfc7f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc82: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005cfc88: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfc8a: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5cfc8du); call_ind(t); }
    /* 005cfc8d: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc8f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc91: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc94: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005cfc9a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfc9d: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005cfca3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfca5: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5cfca8u); call_ind(t); }
    /* 005cfca8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfcaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfcab: ret  */ FN_RET(0x005cfa93); r_esp += 4; return;
}

void f_005cfcac(void) /* FUN_005cfcac */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cfcac);
    /* 005cfcac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfcad: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfcaf: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfcb2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cfcb5: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cfcbb: call 0x5cd326 */ r_esp -= 4; W32(r_esp, 0x5cfcc0u); f_005cd326();
    /* 005cfcc0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cfcc3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfcc6: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x5cfccbu); f_005e030e();
    /* 005cfccb: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfcd2: je 0x5cfd27 */ if (fZ) goto L_005cfd27;
L_005cfcd4:; BB(0x005cfcd4);
    /* 005cfcd4: push 0x699058 */ { u32 v = 0x699058u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfcd9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfcdc: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfce2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfce5: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005cfceb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfced: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5cfcf0u); call_ind(t); }
    /* 005cfcf0: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfcf2: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfcf4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfcf7: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfcfd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd00: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005cfd06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfd08: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5cfd0bu); call_ind(t); }
    /* 005cfd0b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd0e: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005cfd14: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd17: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005cfd1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfd1f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5cfd22u); call_ind(t); }
    /* 005cfd22: jmp 0x5cfda9 */ goto L_005cfda9;
L_005cfd27:; BB(0x005cfd27);
    /* 005cfd27: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cfd2d: call 0x5cd848 */ r_esp -= 4; W32(r_esp, 0x5cfd32u); f_005cd848();
    /* 005cfd32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfd35: cmp dword ptr [ecx + 0x108], eax */ {  u32 a = R32((u32)(r_ecx+0x108u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfd3b: jne 0x5cfd5b */ if (!fZ) goto L_005cfd5b;
L_005cfd3d:; BB(0x005cfd3d);
    /* 005cfd3d: push 0x699060 */ { u32 v = 0x699060u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd42: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd45: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005cfd4b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd4e: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 005cfd54: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cfd56: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x5cfd59u); call_ind(t); }
    /* 005cfd59: jmp 0x5cfd77 */ goto L_005cfd77;
L_005cfd5b:; BB(0x005cfd5b);
    /* 005cfd5b: push 0x699068 */ { u32 v = 0x699068u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd60: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd63: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005cfd69: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd6c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005cfd72: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfd74: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5cfd77u); call_ind(t); }
L_005cfd77:; BB(0x005cfd77);
    /* 005cfd77: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd79: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd7b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd7e: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfd84: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd87: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005cfd8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfd8f: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5cfd92u); call_ind(t); }
    /* 005cfd92: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd95: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005cfd9b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd9e: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005cfda4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfda6: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cfda9u); call_ind(t); }
L_005cfda9:; BB(0x005cfda9);
    /* 005cfda9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfdac: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005cfdb2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfdb5: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005cfdbb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfdbd: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5cfdc0u); call_ind(t); }
    /* 005cfdc0: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfdc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfdc3: ret  */ FN_RET(0x005cfcac); r_esp += 4; return;
}

void f_005cfdc4(void) /* FUN_005cfdc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cfdc4);
    /* 005cfdc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfdc5: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfdc7: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfdcd: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 005cfdd3: cmp dword ptr [0x6fc470], 0 */ {  u32 a = R32((u32)(0x6fc470u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfdda: jne 0x5cfde1 */ if (!fZ) goto L_005cfde1;
L_005cfddc:; BB(0x005cfddc);
    /* 005cfddc: jmp 0x5cfeb2 */ goto L_005cfeb2;
L_005cfde1:; BB(0x005cfde1);
    /* 005cfde1: call dword ptr [0x63308c] */ { u32 t = R32((u32)(0x63308cu)); r_esp -= 4; W32(r_esp, 0x5cfde7u); call_ind(t); }
    /* 005cfde7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cfdea: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005cfdf0: call 0x5e07a3 */ r_esp -= 4; W32(r_esp, 0x5cfdf5u); f_005e07a3();
    /* 005cfdf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfdf7: je 0x5cfeb2 */ if (fZ) goto L_005cfeb2;
L_005cfdfd:; BB(0x005cfdfd);
    /* 005cfdfd: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005cfe02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfe05: sub ecx, dword ptr [eax + 0x3a0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x3a0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005cfe0b: cmp ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005cfe11: jb 0x5cfeb2 */ if (fC) goto L_005cfeb2;
L_005cfe17:; BB(0x005cfe17);
    /* 005cfe17: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cfe1d: mov eax, dword ptr [edx + 0x3a4] */ r_eax = R32((u32)(r_edx+0x3a4u));
    /* 005cfe23: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cfe26: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cfe2c: mov dword ptr [ecx + 0x3a4], eax */ W32((u32)(r_ecx+0x3a4u), r_eax);
    /* 005cfe32: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cfe38: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfe3b: mov dword ptr [edx + 0x3a0], eax */ W32((u32)(r_edx+0x3a0u), r_eax);
    /* 005cfe41: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cfe47: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 005cfe4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe4e: push 0x699070 */ { u32 v = 0x699070u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe53: lea eax, [ebp - 0x104] */ r_eax = (u32)(r_ebp+0xfffffefcu);
    /* 005cfe59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe5a: call 0x624050 */ r_esp -= 4; W32(r_esp, 0x5cfe5fu); f_00624050();
    /* 005cfe5f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfe62: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 005cfe68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe69: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005cfe6f: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005cfe75: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005cfe7b: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 005cfe81: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cfe83: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5cfe86u); call_ind(t); }
    /* 005cfe86: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cfe8c: cmp dword ptr [ecx + 0x3a4], 0 */ {  u32 a = R32((u32)(r_ecx+0x3a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfe93: jne 0x5cfeb2 */ if (!fZ) goto L_005cfeb2;
L_005cfe95:; BB(0x005cfe95);
    /* 005cfe95: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005cfe9b: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005cfea1: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 005cfea7: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 005cfead: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cfeaf: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x5cfeb2u); call_ind(t); }
L_005cfeb2:; BB(0x005cfeb2);
    /* 005cfeb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfeb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfeb5: ret  */ FN_RET(0x005cfdc4); r_esp += 4; return;
}

void f_005cfeb6(void) /* FUN_005cfeb6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cfeb6);
    /* 005cfeb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfeb7: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfeb9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfebc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cfebf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfec1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfec3: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cfec9: call 0x45c4ac */ r_esp -= 4; W32(r_esp, 0x5cfeceu); f_0045c4ac();
    /* 005cfece: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cfed1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfed3: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005cfed8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cfedb: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005cfee1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cfee4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfee6: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5cfee9u); call_ind(t); }
    /* 005cfee9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfeec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfeee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfef1: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5cfef4u); call_ind(t); }
    /* 005cfef4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfef6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfef9: call 0x5d6635 */ r_esp -= 4; W32(r_esp, 0x5cfefeu); f_005d6635();
    /* 005cfefe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cff01: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005cff04: call 0x5e03cc */ r_esp -= 4; W32(r_esp, 0x5cff09u); f_005e03cc();
    /* 005cff09: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cff10: jne 0x5cff51 */ if (!fZ) goto L_005cff51;
L_005cff12:; BB(0x005cff12);
    /* 005cff12: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cff18: mov edx, dword ptr [ecx + 0x2a0] */ r_edx = R32((u32)(r_ecx+0x2a0u));
    /* 005cff1e: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005cff24: call 0x5d71b9 */ r_esp -= 4; W32(r_esp, 0x5cff29u); f_005d71b9();
    /* 005cff29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cff2b: je 0x5cff51 */ if (fZ) goto L_005cff51;
L_005cff2d:; BB(0x005cff2d);
    /* 005cff2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cff30: mov byte ptr [eax + 2], 0 */ W8((u32)(r_eax+0x2u), 0x0u);
    /* 005cff34: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005cff3a: mov dword ptr [ecx + 0x398], 0 */ W32((u32)(r_ecx+0x398u), 0x0u);
    /* 005cff44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff46: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005cff4c: call 0x45c8df */ r_esp -= 4; W32(r_esp, 0x5cff51u); f_0045c8df();
L_005cff51:; BB(0x005cff51);
    /* 005cff51: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005cff57: mov ecx, dword ptr [edx + 0x2a0] */ r_ecx = R32((u32)(r_edx+0x2a0u));
    /* 005cff5d: call 0x5e0a55 */ r_esp -= 4; W32(r_esp, 0x5cff62u); f_005e0a55();
    /* 005cff62: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005cff67: mov dword ptr [eax + 0x2a0], 0 */ W32((u32)(r_eax+0x2a0u), 0x0u);
    /* 005cff71: mov esp, ebp */ r_esp = r_ebp;
    /* 005cff73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cff74: ret  */ FN_RET(0x005cfeb6); r_esp += 4; return;
}

void f_005cff75(void) /* FUN_005cff75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cff75);
    /* 005cff75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cff76: mov ebp, esp */ r_ebp = r_esp;
    /* 005cff78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cff79: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cff7c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cff7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cff80: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cff83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cff84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cff87: call 0x5d80f0 */ r_esp -= 4; W32(r_esp, 0x5cff8cu); f_005d80f0();
    /* 005cff8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cff8f: mov dword ptr [edx], 0x63afe4 */ W32((u32)(r_edx), 0x63afe4u);
    /* 005cff95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cff98: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 005cffa2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cffa5: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 005cffaf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cffb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005cffb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cffb5: ret 8 */ FN_RET(0x005cff75); r_esp += 12; return;
}

void f_005cffb8(void) /* FUN_005cffb8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cffb8);
    /* 005cffb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cffb9: mov ebp, esp */ r_ebp = r_esp;
    /* 005cffbb: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cffbe: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cffc1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cffc4: mov dword ptr [eax], 0x63afe4 */ W32((u32)(r_eax), 0x63afe4u);
    /* 005cffca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cffcd: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 005cffd3: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005cffd6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cffd9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cffdc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cffe0: je 0x5cfff3 */ if (fZ) goto L_005cfff3;
L_005cffe2:; BB(0x005cffe2);
    /* 005cffe2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffe4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cffe7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cffe9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cffec: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5cffeeu); call_ind(t); }
    /* 005cffee: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cfff1: jmp 0x5cfffa */ goto L_005cfffa;
L_005cfff3:; BB(0x005cfff3);
    /* 005cfff3: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005cfffa:; BB(0x005cfffa);
    /* 005cfffa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cfffd: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 005d0007: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d000a: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 005d0010: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d0013: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0016: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d0019: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d001d: je 0x5d0030 */ if (fZ) goto L_005d0030;
L_005d001f:; BB(0x005d001f);
    /* 005d001f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0021: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0024: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d0026: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0029: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5d002bu); call_ind(t); }
    /* 005d002b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d002e: jmp 0x5d0037 */ goto L_005d0037;
L_005d0030:; BB(0x005d0030);
    /* 005d0030: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005d0037:; BB(0x005d0037);
    /* 005d0037: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d003a: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 005d0044: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0047: call 0x5d8154 */ r_esp -= 4; W32(r_esp, 0x5d004cu); f_005d8154();
    /* 005d004c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d004e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d004f: ret  */ FN_RET(0x005cffb8); r_esp += 4; return;
}

void f_005d0050(void) /* FUN_005d0050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0050);
    /* 005d0050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0051: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0053: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0056: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d0059: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d005b: push 0x699080 */ { u32 v = 0x699080u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0060: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0063: call 0x5d825e */ r_esp -= 4; W32(r_esp, 0x5d0068u); f_005d825e();
    /* 005d0068: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005d006a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d006d: call 0x5e0731 */ r_esp -= 4; W32(r_esp, 0x5d0072u); f_005e0731();
    /* 005d0072: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0075: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d007c: jne 0x5d00c0 */ if (!fZ) goto L_005d00c0;
L_005d007e:; BB(0x005d007e);
    /* 005d007e: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0083: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d0088u); f_0048ab58();
    /* 005d0088: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d008b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d008e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0092: je 0x5d00ad */ if (fZ) goto L_005d00ad;
L_005d0094:; BB(0x005d0094);
    /* 005d0094: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0097: call 0x5d5d20 */ r_esp -= 4; W32(r_esp, 0x5d009cu); f_005d5d20();
    /* 005d009c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d009f: mov dword ptr [ecx], 0x63affc */ W32((u32)(r_ecx), 0x63affcu);
    /* 005d00a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d00a8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d00ab: jmp 0x5d00b4 */ goto L_005d00b4;
L_005d00ad:; BB(0x005d00ad);
    /* 005d00ad: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d00b4:; BB(0x005d00b4);
    /* 005d00b4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d00b7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d00ba: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
L_005d00c0:; BB(0x005d00c0);
    /* 005d00c0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d00c3: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005d00c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d00cc: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005d00cf: push 0x699094 */ { u32 v = 0x699094u; r_esp -= 4; W32(r_esp, v); }
    /* 005d00d4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d00d7: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005d00dd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d00e0: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 005d00e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d00e8: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x5d00ebu); call_ind(t); }
    /* 005d00eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d00ed: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005d00ef: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005d00f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d00f4: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005d00fa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d00fd: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005d0103: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0105: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5d0108u); call_ind(t); }
    /* 005d0108: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 005d010d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0110: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d0116: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0119: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005d011f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0121: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5d0124u); call_ind(t); }
    /* 005d0124: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0126: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0128: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d012b: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d0131: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0134: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005d013a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d013c: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d013fu); call_ind(t); }
    /* 005d013f: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0141: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0143: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0146: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d014c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d014f: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005d0155: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0157: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5d015au); call_ind(t); }
    /* 005d015a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d015c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d015f: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d0165: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0168: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005d016e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0170: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d0173u); call_ind(t); }
    /* 005d0173: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0175: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0177: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0179: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d017b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d017e: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d0184: call 0x5d5ff2 */ r_esp -= 4; W32(r_esp, 0x5d0189u); f_005d5ff2();
    /* 005d0189: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d018b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d018e: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005d0194: call 0x5d65d6 */ r_esp -= 4; W32(r_esp, 0x5d0199u); f_005d65d6();
    /* 005d0199: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d01a0: jne 0x5d02af */ if (!fZ) goto L_005d02af;
L_005d01a6:; BB(0x005d01a6);
    /* 005d01a6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d01a9: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d01b0: jne 0x5d01ea */ if (!fZ) goto L_005d01ea;
L_005d01b2:; BB(0x005d01b2);
    /* 005d01b2: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d01b7: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d01bcu); f_0048ab58();
    /* 005d01bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d01bf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d01c2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d01c6: je 0x5d01d7 */ if (fZ) goto L_005d01d7;
L_005d01c8:; BB(0x005d01c8);
    /* 005d01c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d01ca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d01cd: call 0x5d6e50 */ r_esp -= 4; W32(r_esp, 0x5d01d2u); f_005d6e50();
    /* 005d01d2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d01d5: jmp 0x5d01de */ goto L_005d01de;
L_005d01d7:; BB(0x005d01d7);
    /* 005d01d7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005d01de:; BB(0x005d01de);
    /* 005d01de: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d01e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d01e4: mov dword ptr [eax + 0x90], ecx */ W32((u32)(r_eax+0x90u), r_ecx);
L_005d01ea:; BB(0x005d01ea);
    /* 005d01ea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d01ed: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d01f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d01f6: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005d01f9: push 0x6990a0 */ { u32 v = 0x6990a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d01fe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0201: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 005d0207: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d020a: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 005d0210: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d0212: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x5d0215u); call_ind(t); }
    /* 005d0215: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0217: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0219: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005d021b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d021e: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005d0224: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0227: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d022d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d022f: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5d0232u); call_ind(t); }
    /* 005d0232: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0237: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d023a: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d0240: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0243: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d0249: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d024b: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5d024eu); call_ind(t); }
    /* 005d024e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0250: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0252: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0255: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d025b: call 0x5d7422 */ r_esp -= 4; W32(r_esp, 0x5d0260u); f_005d7422();
    /* 005d0260: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0262: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0264: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0267: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005d026d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0270: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d0276: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0278: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5d027bu); call_ind(t); }
    /* 005d027b: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005d027d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005d027f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0282: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d0288: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d028b: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d0291: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0293: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x5d0296u); call_ind(t); }
    /* 005d0296: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0298: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d029b: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d02a1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d02a4: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d02aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d02ac: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d02afu); call_ind(t); }
L_005d02af:; BB(0x005d02af);
    /* 005d02af: mov esp, ebp */ r_esp = r_ebp;
    /* 005d02b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d02b2: ret  */ FN_RET(0x005d0050); r_esp += 4; return;
}

void f_005d02b3(void) /* FUN_005d02b3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d02b3);
    /* 005d02b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d02b4: mov ebp, esp */ r_ebp = r_esp;
    /* 005d02b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d02b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d02ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d02bd: call 0x5e030e */ r_esp -= 4; W32(r_esp, 0x5d02c2u); f_005e030e();
    /* 005d02c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d02c5: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d02cc: je 0x5d02e5 */ if (fZ) goto L_005d02e5;
L_005d02ce:; BB(0x005d02ce);
    /* 005d02ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d02d1: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005d02d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d02da: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005d02e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d02e2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d02e5u); call_ind(t); }
L_005d02e5:; BB(0x005d02e5);
    /* 005d02e5: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d02ec: jne 0x5d0328 */ if (!fZ) goto L_005d0328;
L_005d02ee:; BB(0x005d02ee);
    /* 005d02ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d02f1: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d02f8: je 0x5d0328 */ if (fZ) goto L_005d0328;
L_005d02fa:; BB(0x005d02fa);
    /* 005d02fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d02fd: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 005d0303: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0306: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d030c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d030e: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x5d0311u); call_ind(t); }
    /* 005d0311: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0314: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005d031a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d031d: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005d0323: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0325: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d0328u); call_ind(t); }
L_005d0328:; BB(0x005d0328);
    /* 005d0328: mov esp, ebp */ r_esp = r_ebp;
    /* 005d032a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d032b: ret  */ FN_RET(0x005d02b3); r_esp += 4; return;
}

void f_005d032c(void) /* FUN_005d032c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d032c);
    /* 005d032c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d032d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d032f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0330: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0333: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0336: call 0x424920 */ r_esp -= 4; W32(r_esp, 0x5d033bu); f_00424920();
    /* 005d033b: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005d033d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0340: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0342: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0345: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d0348u); call_ind(t); }
    /* 005d0348: mov esp, ebp */ r_esp = r_ebp;
    /* 005d034a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d034b: ret  */ FN_RET(0x005d032c); r_esp += 4; return;
}

void f_005d034c(void) /* FUN_005d034c */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d034c);
    /* 005d034c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d034d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d034f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0350: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0353: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0356: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d0359: mov dword ptr [eax + 0x3104], ecx */ W32((u32)(r_eax+0x3104u), r_ecx);
    /* 005d035f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0362: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d0365: mov dword ptr [edx + 0x3108], eax */ W32((u32)(r_edx+0x3108u), r_eax);
    /* 005d036b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d036d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d036e: ret 8 */ FN_RET(0x005d034c); r_esp += 12; return;
}

void f_005d0371(void) /* FUN_005d0371 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0371);
    /* 005d0371: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0372: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0374: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0377: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d037a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d037c: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d0381: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d0384: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005d038a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d038d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d038f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d0392u); call_ind(t); }
    /* 005d0392: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0399: jne 0x5d0444 */ if (!fZ) goto L_005d0444;
L_005d039f:; BB(0x005d039f);
    /* 005d039f: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d03a5: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x5d03aau); f_0045cb0a();
    /* 005d03aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d03ac: je 0x5d0444 */ if (fZ) goto L_005d0444;
L_005d03b2:; BB(0x005d03b2);
    /* 005d03b2: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d03b9: jne 0x5d0444 */ if (!fZ) goto L_005d0444;
L_005d03bf:; BB(0x005d03bf);
    /* 005d03bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d03c2: mov dword ptr [eax + 0x6c], 5 */ W32((u32)(r_eax+0x6cu), 0x5u);
    /* 005d03c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d03cc: mov edx, dword ptr [ecx + 0x3108] */ r_edx = R32((u32)(r_ecx+0x3108u));
    /* 005d03d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d03d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d03d6: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5d03dbu); f_005ea0c3();
    /* 005d03db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d03dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d03e0: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d03e5u); f_005ea1cf();
    /* 005d03e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d03e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d03e9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d03eb: push 0xc3cd */ { u32 v = 0xc3cdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d03f0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d03f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d03f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d03f8: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5d03fbu); call_ind(t); }
    /* 005d03fb: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005d03fd: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d0402u); f_0048ab58();
    /* 005d0402: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0405: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d0408: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d040c: je 0x5d0424 */ if (fZ) goto L_005d0424;
L_005d040e:; BB(0x005d040e);
    /* 005d040e: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d0413: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d0416: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0417: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d041a: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x5d041fu); f_005d7b34();
    /* 005d041f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d0422: jmp 0x5d042b */ goto L_005d042b;
L_005d0424:; BB(0x005d0424);
    /* 005d0424: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005d042b:; BB(0x005d042b);
    /* 005d042b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d042e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d042f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0432: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5d0437u); f_005e4060();
    /* 005d0437: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d043a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d043c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d043f: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d0442u); call_ind(t); }
    /* 005d0442: jmp 0x5d0461 */ goto L_005d0461;
L_005d0444:; BB(0x005d0444);
    /* 005d0444: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0446: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d044b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d044e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d044f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0451: push 0xc3cd */ { u32 v = 0xc3cdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0456: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0459: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d045b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d045e: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5d0461u); call_ind(t); }
L_005d0461:; BB(0x005d0461);
    /* 005d0461: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0463: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0464: ret  */ FN_RET(0x005d0371); r_esp += 4; return;
}

void f_005d0465(void) /* FUN_005d0465 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0465);
    /* 005d0465: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0466: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0468: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d046b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d046e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d0475: jmp 0x5d0480 */ goto L_005d0480;
L_005d0477:; BB(0x005d0477);
    /* 005d0477: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d047a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d047d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005d0480:; BB(0x005d0480);
    /* 005d0480: cmp dword ptr [ebp - 8], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0487: jge 0x5d04c9 */ if ((fS==fO)) goto L_005d04c9;
L_005d0489:; BB(0x005d0489);
    /* 005d0489: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0490: jmp 0x5d049b */ goto L_005d049b;
L_005d0492:; BB(0x005d0492);
    /* 005d0492: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0495: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0498: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d049b:; BB(0x005d049b);
    /* 005d049b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d049f: jge 0x5d04c7 */ if ((fS==fO)) goto L_005d04c7;
L_005d04a1:; BB(0x005d04a1);
    /* 005d04a1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d04a4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d04a7: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005d04ab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d04ae: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d04b1: mov eax, dword ptr [ecx + edx + 0x6c] */ r_eax = R32((u32)(r_ecx+r_edx+0x6cu));
    /* 005d04b5: cmp dword ptr [eax + 0xd4], 0 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d04bc: jne 0x5d04c5 */ if (!fZ) goto L_005d04c5;
L_005d04be:; BB(0x005d04be);
    /* 005d04be: mov eax, 1 */ r_eax = 0x1u;
    /* 005d04c3: jmp 0x5d04cb */ goto L_005d04cb;
L_005d04c5:; BB(0x005d04c5);
    /* 005d04c5: jmp 0x5d0492 */ goto L_005d0492;
L_005d04c7:; BB(0x005d04c7);
    /* 005d04c7: jmp 0x5d0477 */ goto L_005d0477;
L_005d04c9:; BB(0x005d04c9);
    /* 005d04c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d04cb:; BB(0x005d04cb);
    /* 005d04cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d04cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d04ce: ret  */ FN_RET(0x005d0465); r_esp += 4; return;
}

void f_005d04cf(void) /* FUN_005d04cf */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d04cf);
    /* 005d04cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d04d0: mov ebp, esp */ r_ebp = r_esp;
    /* 005d04d2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d04d5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d04d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d04da: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d04df: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d04e2: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005d04e8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d04eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d04ed: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d04f0u); call_ind(t); }
    /* 005d04f0: cmp dword ptr [0x6fc388], 0 */ {  u32 a = R32((u32)(0x6fc388u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d04f7: jne 0x5d05b1 */ if (!fZ) goto L_005d05b1;
L_005d04fd:; BB(0x005d04fd);
    /* 005d04fd: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d0503: call 0x5d0465 */ r_esp -= 4; W32(r_esp, 0x5d0508u); f_005d0465();
    /* 005d0508: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d050a: je 0x5d05b1 */ if (fZ) goto L_005d05b1;
L_005d0510:; BB(0x005d0510);
    /* 005d0510: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d0516: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x5d051bu); f_0045cb0a();
    /* 005d051b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d051d: je 0x5d05b1 */ if (fZ) goto L_005d05b1;
L_005d0523:; BB(0x005d0523);
    /* 005d0523: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d052a: jne 0x5d05b1 */ if (!fZ) goto L_005d05b1;
L_005d0530:; BB(0x005d0530);
    /* 005d0530: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0533: mov dword ptr [eax + 0x6c], 5 */ W32((u32)(r_eax+0x6cu), 0x5u);
    /* 005d053a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d053d: mov edx, dword ptr [ecx + 0x3104] */ r_edx = R32((u32)(r_ecx+0x3104u));
    /* 005d0543: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0544: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0547: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5d054cu); f_005ea0c3();
    /* 005d054c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d054e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0551: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d0556u); f_005ea1cf();
    /* 005d0556: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0558: call 0x48ab58 */ r_esp -= 4; W32(r_esp, 0x5d055du); f_0048ab58();
    /* 005d055d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0560: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d0563: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0567: je 0x5d0591 */ if (fZ) goto L_005d0591;
L_005d0569:; BB(0x005d0569);
    /* 005d0569: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d056e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d0571: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d0574: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0577: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0578: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d057b: call 0x5d7b34 */ r_esp -= 4; W32(r_esp, 0x5d0580u); f_005d7b34();
    /* 005d0580: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0583: mov dword ptr [eax], 0x63b06c */ W32((u32)(r_eax), 0x63b06cu);
    /* 005d0589: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d058c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d058f: jmp 0x5d0598 */ goto L_005d0598;
L_005d0591:; BB(0x005d0591);
    /* 005d0591: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d0598:; BB(0x005d0598);
    /* 005d0598: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d059b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d059c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d059f: call 0x5e4060 */ r_esp -= 4; W32(r_esp, 0x5d05a4u); f_005e4060();
    /* 005d05a4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d05a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d05a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d05ac: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d05afu); call_ind(t); }
    /* 005d05af: jmp 0x5d05c9 */ goto L_005d05c9;
L_005d05b1:; BB(0x005d05b1);
    /* 005d05b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d05b3: mov eax, dword ptr [0x6fc0e0] */ r_eax = R32((u32)(0x6fc0e0u));
    /* 005d05b8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d05bb: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005d05c1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d05c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d05c6: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d05c9u); call_ind(t); }
L_005d05c9:; BB(0x005d05c9);
    /* 005d05c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d05cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d05cc: ret  */ FN_RET(0x005d04cf); r_esp += 4; return;
}

void f_005d05cd(void) /* FUN_005d05cd */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d05cd);
    /* 005d05cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d05ce: mov ebp, esp */ r_ebp = r_esp;
    /* 005d05d0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d05d3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d05d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d05d9: call 0x5d96a9 */ r_esp -= 4; W32(r_esp, 0x5d05deu); f_005d96a9();
    /* 005d05de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d05e0: jne 0x5d05eb */ if (!fZ) goto L_005d05eb;
L_005d05e2:; BB(0x005d05e2);
    /* 005d05e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d05e5: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d05e9: je 0x5d05ef */ if (fZ) goto L_005d05ef;
L_005d05eb:; BB(0x005d05eb);
    /* 005d05eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d05ed: jmp 0x5d062f */ goto L_005d062f;
L_005d05ef:; BB(0x005d05ef);
    /* 005d05ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d05f2: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005d05f5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d05f8: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d05fc: je 0x5d0606 */ if (fZ) goto L_005d0606;
L_005d05fe:; BB(0x005d05fe);
    /* 005d05fe: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0602: je 0x5d0606 */ if (fZ) goto L_005d0606;
L_005d0604:; BB(0x005d0604);
    /* 005d0604: jmp 0x5d0629 */ goto L_005d0629;
L_005d0606:; BB(0x005d0606);
    /* 005d0606: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0609: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 005d0610: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005d0616: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 005d0619: call 0x5e84af */ r_esp -= 4; W32(r_esp, 0x5d061eu); f_005e84af();
    /* 005d061e: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d0624: call 0x5cf173 */ r_esp -= 4; W32(r_esp, 0x5d0629u); f_005cf173();
L_005d0629:; BB(0x005d0629);
    /* 005d0629: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d062c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
L_005d062f:; BB(0x005d062f);
    /* 005d062f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0631: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0632: ret 4 */ FN_RET(0x005d05cd); r_esp += 8; return;
}

void f_005d0635(void) /* FUN_005d0635 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0635);
    /* 005d0635: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0636: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0638: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d063b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d063e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0642: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0645: call 0x5e626d */ r_esp -= 4; W32(r_esp, 0x5d064au); f_005e626d();
    /* 005d064a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d064d: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005d0650: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d0653: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0657: je 0x5d0672 */ if (fZ) goto L_005d0672;
L_005d0659:; BB(0x005d0659);
    /* 005d0659: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d065d: je 0x5d0933 */ if (fZ) goto L_005d0933;
L_005d0663:; BB(0x005d0663);
    /* 005d0663: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0667: je 0x5d09ac */ if (fZ) goto L_005d09ac;
L_005d066d:; BB(0x005d066d);
    /* 005d066d: jmp 0x5d0a30 */ goto L_005d0a30;
L_005d0672:; BB(0x005d0672);
    /* 005d0672: mov dword ptr [0x6fc0d0], 0 */ W32((u32)(0x6fc0d0u), 0x0u);
    /* 005d067c: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 005d067e: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5d0683u); f_0060ee31();
    /* 005d0683: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0686: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d068c: mov dword ptr [ecx + 0x320], eax */ W32((u32)(r_ecx+0x320u), r_eax);
L_005d0692:; BB(0x005d0692);
    /* 005d0692: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d0698: mov eax, dword ptr [edx + 0x320] */ r_eax = R32((u32)(r_edx+0x320u));
    /* 005d069e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d069f: mov ecx, 3 */ r_ecx = 0x3u;
    /* 005d06a4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d06a4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d06a4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d06a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d06a8: je 0x5d06c2 */ if (fZ) goto L_005d06c2;
L_005d06aa:; BB(0x005d06aa);
    /* 005d06aa: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 005d06ac: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5d06b1u); f_0060ee31();
    /* 005d06b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d06b4: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d06ba: mov dword ptr [edx + 0x320], eax */ W32((u32)(r_edx+0x320u), r_eax);
    /* 005d06c0: jmp 0x5d0692 */ goto L_005d0692;
L_005d06c2:; BB(0x005d06c2);
    /* 005d06c2: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d06c7: mov eax, dword ptr [eax + 0x320] */ r_eax = R32((u32)(r_eax+0x320u));
    /* 005d06cd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d06ce: mov ecx, 0x72 */ r_ecx = 0x72u;
    /* 005d06d3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d06d3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d06d3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d06d5: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d06da: mov dword ptr [eax + 0x320], edx */ W32((u32)(r_eax+0x320u), r_edx);
    /* 005d06e0: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d06e6: mov edx, dword ptr [ecx + 0x320] */ r_edx = R32((u32)(r_ecx+0x320u));
    /* 005d06ec: mov dword ptr [0x6fc0cc], edx */ W32((u32)(0x6fc0ccu), r_edx);
    /* 005d06f2: mov ecx, dword ptr [0x6f6eec] */ r_ecx = R32((u32)(0x6f6eecu));
    /* 005d06f8: call 0x45cb0a */ r_esp -= 4; W32(r_esp, 0x5d06fdu); f_0045cb0a();
    /* 005d06fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d06ff: je 0x5d070a */ if (fZ) goto L_005d070a;
L_005d0701:; BB(0x005d0701);
    /* 005d0701: cmp dword ptr [0x6f6f08], 0 */ {  u32 a = R32((u32)(0x6f6f08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0708: je 0x5d0757 */ if (fZ) goto L_005d0757;
L_005d070a:; BB(0x005d070a);
    /* 005d070a: cmp dword ptr [0x6fc0d0], 0x90 */ {  u32 a = R32((u32)(0x6fc0d0u)); u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0714: jge 0x5d0747 */ if ((fS==fO)) goto L_005d0747;
L_005d0716:; BB(0x005d0716);
    /* 005d0716: mov eax, dword ptr [0x6fc0d0] */ r_eax = R32((u32)(0x6fc0d0u));
    /* 005d071b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d071e: mov dword ptr [0x6fc0d0], eax */ W32((u32)(0x6fc0d0u), r_eax);
    /* 005d0723: mov ecx, dword ptr [0x6fc0cc] */ r_ecx = R32((u32)(0x6fc0ccu));
    /* 005d0729: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d072c: mov dword ptr [0x6fc0cc], ecx */ W32((u32)(0x6fc0ccu), r_ecx);
    /* 005d0732: cmp dword ptr [0x6fc0cc], 0x71 */ {  u32 a = R32((u32)(0x6fc0ccu)); u32 b = 0x71u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0739: jle 0x5d0745 */ if ((fZ||fS!=fO)) goto L_005d0745;
L_005d073b:; BB(0x005d073b);
    /* 005d073b: mov dword ptr [0x6fc0cc], 0 */ W32((u32)(0x6fc0ccu), 0x0u);
L_005d0745:; BB(0x005d0745);
    /* 005d0745: jmp 0x5d070a */ goto L_005d070a;
L_005d0747:; BB(0x005d0747);
    /* 005d0747: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d074d: call 0x5cf173 */ r_esp -= 4; W32(r_esp, 0x5d0752u); f_005cf173();
    /* 005d0752: jmp 0x5d0a30 */ goto L_005d0a30;
L_005d0757:; BB(0x005d0757);
    /* 005d0757: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005d0759: call 0x60ee31 */ r_esp -= 4; W32(r_esp, 0x5d075eu); f_0060ee31();
    /* 005d075e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0761: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d0764: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0768: jne 0x5d0771 */ if (!fZ) goto L_005d0771;
L_005d076a:; BB(0x005d076a);
    /* 005d076a: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_005d0771:; BB(0x005d0771);
    /* 005d0771: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0773: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0775: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0778: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0779: push 0xc3cd */ { u32 v = 0xc3cdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d077e: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d0783: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d0786: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d078c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d078f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0791: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5d0794u); call_ind(t); }
    /* 005d0794: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d079b: jmp 0x5d07a6 */ goto L_005d07a6;
L_005d079d:; BB(0x005d079d);
    /* 005d079d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d07a0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d07a3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005d07a6:; BB(0x005d07a6);
    /* 005d07a6: cmp dword ptr [ebp - 0xc], 0x9e */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x9eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d07ad: jge 0x5d082e */ if ((fS==fO)) goto L_005d082e;
L_005d07af:; BB(0x005d07af);
    /* 005d07af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d07b2: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d07b8: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005d07bc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d07bf: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d07c3: jne 0x5d07c7 */ if (!fZ) goto L_005d07c7;
L_005d07c5:; BB(0x005d07c5);
    /* 005d07c5: jmp 0x5d079d */ goto L_005d079d;
L_005d07c7:; BB(0x005d07c7);
    /* 005d07c7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d07ce: jmp 0x5d07d9 */ goto L_005d07d9;
L_005d07d0:; BB(0x005d07d0);
    /* 005d07d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d07d3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d07d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d07d9:; BB(0x005d07d9);
    /* 005d07d9: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d07dd: jge 0x5d0829 */ if ((fS==fO)) goto L_005d0829;
L_005d07df:; BB(0x005d07df);
    /* 005d07df: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d07e2: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d07e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d07e8: cmp dword ptr [eax + edx + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d07ed: je 0x5d0827 */ if (fZ) goto L_005d0827;
L_005d07ef:; BB(0x005d07ef);
    /* 005d07ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d07f2: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005d07f5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d07f8: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 005d07fc: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0800: je 0x5d0827 */ if (fZ) goto L_005d0827;
L_005d0802:; BB(0x005d0802);
    /* 005d0802: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0805: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005d0808: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d080b: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 005d080f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005d0812: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0815: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d0818: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d081b: mov edx, dword ptr [eax + edx + 0x6c] */ r_edx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 005d081f: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005d0822: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0824: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5d0827u); call_ind(t); }
L_005d0827:; BB(0x005d0827);
    /* 005d0827: jmp 0x5d07d0 */ goto L_005d07d0;
L_005d0829:; BB(0x005d0829);
    /* 005d0829: jmp 0x5d079d */ goto L_005d079d;
L_005d082e:; BB(0x005d082e);
    /* 005d082e: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d0835: jmp 0x5d0840 */ goto L_005d0840;
L_005d0837:; BB(0x005d0837);
    /* 005d0837: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d083a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d083d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005d0840:; BB(0x005d0840);
    /* 005d0840: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0844: jge 0x5d0884 */ if ((fS==fO)) goto L_005d0884;
L_005d0846:; BB(0x005d0846);
    /* 005d0846: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0849: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d084f: cmp dword ptr [edx + ecx*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0854: je 0x5d0882 */ if (fZ) goto L_005d0882;
L_005d0856:; BB(0x005d0856);
    /* 005d0856: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0859: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d085f: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005d0863: call 0x425973 */ r_esp -= 4; W32(r_esp, 0x5d0868u); f_00425973();
    /* 005d0868: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d086a: je 0x5d0882 */ if (fZ) goto L_005d0882;
L_005d086c:; BB(0x005d086c);
    /* 005d086c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d086e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0871: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d0876: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005d087a: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005d087d: call 0x420532 */ r_esp -= 4; W32(r_esp, 0x5d0882u); f_00420532();
L_005d0882:; BB(0x005d0882);
    /* 005d0882: jmp 0x5d0837 */ goto L_005d0837;
L_005d0884:; BB(0x005d0884);
    /* 005d0884: push 0x1adba */ { u32 v = 0x1adbau; r_esp -= 4; W32(r_esp, v); }
    /* 005d0889: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d088f: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 005d0895: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5d089au); f_005ea0c3();
    /* 005d089a: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d089f: mov ecx, dword ptr [eax + 0x2a8] */ r_ecx = R32((u32)(r_eax+0x2a8u));
    /* 005d08a5: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d08ab: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 005d08b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d08b3: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d08b6u); call_ind(t); }
    /* 005d08b6: push 0x1adb1 */ { u32 v = 0x1adb1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d08bb: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d08c0: mov ecx, dword ptr [eax + 0x2ac] */ r_ecx = R32((u32)(r_eax+0x2acu));
    /* 005d08c6: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5d08cbu); f_005ea0c3();
    /* 005d08cb: push 0x1adbf */ { u32 v = 0x1adbfu; r_esp -= 4; W32(r_esp, v); }
    /* 005d08d0: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d08d6: mov ecx, dword ptr [ecx + 0x2b0] */ r_ecx = R32((u32)(r_ecx+0x2b0u));
    /* 005d08dc: call 0x5ea0c3 */ r_esp -= 4; W32(r_esp, 0x5d08e1u); f_005ea0c3();
    /* 005d08e1: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d08e7: mov ecx, dword ptr [edx + 0x2a4] */ r_ecx = R32((u32)(r_edx+0x2a4u));
    /* 005d08ed: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d08f2: mov edx, dword ptr [eax + 0x2a4] */ r_edx = R32((u32)(r_eax+0x2a4u));
    /* 005d08f8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d08fa: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5d08fdu); call_ind(t); }
    /* 005d08fd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d08ff: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005d0905: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 005d0908: call 0x5e84f9 */ r_esp -= 4; W32(r_esp, 0x5d090du); f_005e84f9();
    /* 005d090d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d090f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0911: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0913: push 0x18a8f */ { u32 v = 0x18a8fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0918: mov edx, dword ptr [0x6fc0e0] */ r_edx = R32((u32)(0x6fc0e0u));
    /* 005d091e: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 005d0921: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5d0926u); f_005e8389();
    /* 005d0926: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0928: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d092b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d092d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0930: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d0933u); call_ind(t); }
L_005d0933:; BB(0x005d0933);
    /* 005d0933: mov eax, dword ptr [0x6fc0d0] */ r_eax = R32((u32)(0x6fc0d0u));
    /* 005d0938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0939: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d093f: mov ecx, dword ptr [ecx + 0x2b0] */ r_ecx = R32((u32)(r_ecx+0x2b0u));
    /* 005d0945: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d094au); f_005ea1cf();
    /* 005d094a: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d0950: mov ecx, dword ptr [edx + 0x2b0] */ r_ecx = R32((u32)(r_edx+0x2b0u));
    /* 005d0956: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d095b: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 005d0961: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d0963: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5d0966u); call_ind(t); }
    /* 005d0966: mov ecx, dword ptr [0x6fc0cc] */ r_ecx = R32((u32)(0x6fc0ccu));
    /* 005d096c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d096d: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d0973: mov ecx, dword ptr [edx + 0x2ac] */ r_ecx = R32((u32)(r_edx+0x2acu));
    /* 005d0979: call 0x5ea1cf */ r_esp -= 4; W32(r_esp, 0x5d097eu); f_005ea1cf();
    /* 005d097e: mov eax, dword ptr [0x6fc0e4] */ r_eax = R32((u32)(0x6fc0e4u));
    /* 005d0983: mov ecx, dword ptr [eax + 0x2ac] */ r_ecx = R32((u32)(r_eax+0x2acu));
    /* 005d0989: mov edx, dword ptr [0x6fc0e4] */ r_edx = R32((u32)(0x6fc0e4u));
    /* 005d098f: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 005d0995: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0997: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5d099au); call_ind(t); }
    /* 005d099a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d099c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d099f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d09a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d09a4: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d09a7u); call_ind(t); }
    /* 005d09a7: jmp 0x5d0a30 */ goto L_005d0a30;
L_005d09ac:; BB(0x005d09ac);
    /* 005d09ac: mov eax, dword ptr [0x6fc0d0] */ r_eax = R32((u32)(0x6fc0d0u));
    /* 005d09b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d09b4: mov dword ptr [0x6fc0d0], eax */ W32((u32)(0x6fc0d0u), r_eax);
    /* 005d09b9: cmp dword ptr [0x6fc0d0], 0x46 */ {  u32 a = R32((u32)(0x6fc0d0u)); u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d09c0: jne 0x5d09db */ if (!fZ) goto L_005d09db;
L_005d09c2:; BB(0x005d09c2);
    /* 005d09c2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d09c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d09c6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d09c8: push 0x18a8e */ { u32 v = 0x18a8eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d09cd: mov ecx, dword ptr [0x6fc0e0] */ r_ecx = R32((u32)(0x6fc0e0u));
    /* 005d09d3: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 005d09d6: call 0x5e8389 */ r_esp -= 4; W32(r_esp, 0x5d09dbu); f_005e8389();
L_005d09db:; BB(0x005d09db);
    /* 005d09db: mov edx, dword ptr [0x6fc0cc] */ r_edx = R32((u32)(0x6fc0ccu));
    /* 005d09e1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d09e4: mov dword ptr [0x6fc0cc], edx */ W32((u32)(0x6fc0ccu), r_edx);
    /* 005d09ea: cmp dword ptr [0x6fc0cc], 0x71 */ {  u32 a = R32((u32)(0x6fc0ccu)); u32 b = 0x71u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d09f1: jle 0x5d09fd */ if ((fZ||fS!=fO)) goto L_005d09fd;
L_005d09f3:; BB(0x005d09f3);
    /* 005d09f3: mov dword ptr [0x6fc0cc], 0 */ W32((u32)(0x6fc0ccu), 0x0u);
L_005d09fd:; BB(0x005d09fd);
    /* 005d09fd: cmp dword ptr [0x6fc0d0], 0x90 */ {  u32 a = R32((u32)(0x6fc0d0u)); u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0a07: jl 0x5d0a16 */ if ((fS!=fO)) goto L_005d0a16;
L_005d0a09:; BB(0x005d0a09);
    /* 005d0a09: mov ecx, dword ptr [0x6fc0e4] */ r_ecx = R32((u32)(0x6fc0e4u));
    /* 005d0a0f: call 0x5cf173 */ r_esp -= 4; W32(r_esp, 0x5d0a14u); f_005cf173();
    /* 005d0a14: jmp 0x5d0a30 */ goto L_005d0a30;
L_005d0a16:; BB(0x005d0a16);
    /* 005d0a16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a18: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0a1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0a1d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0a20: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5d0a23u); call_ind(t); }
    /* 005d0a23: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a25: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0a28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0a2a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0a2d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5d0a30u); call_ind(t); }
L_005d0a30:; BB(0x005d0a30);
    /* 005d0a30: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0a32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0a33: ret 4 */ FN_RET(0x005d0635); r_esp += 8; return;
}

